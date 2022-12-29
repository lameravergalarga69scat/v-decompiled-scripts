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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
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
	var uLocal_88 = -1;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uScriptParam_0 = 1073741824;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 2;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 2;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 20;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 2;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 2;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 2;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 2;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 1048576000;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = -1;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = -1;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<493> Var0;
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
	fLocal_65 = ((0.05f + 0.275f) - 0.01f);
	Var0.f_14.f_17 = 2;
	Var0.f_14.f_17.f_1 = 1;
	Var0.f_14.f_17.f_3 = 1065353216;
	Var0.f_14.f_17.f_5 = 1065353216;
	Var0.f_14.f_17.f_6 = -1;
	Var0.f_14.f_24 = 1;
	Var0.f_14.f_24.f_1.f_9 = 1082130432;
	Var0.f_14.f_24.f_1.f_10 = -1065353216;
	Var0.f_14.f_24.f_1.f_12 = 1;
	Var0.f_14.f_24.f_1.f_12.f_1.f_11 = 1073741824;
	Var0.f_14.f_24.f_1.f_12.f_1.f_12 = 1073741824;
	Var0.f_14.f_24.f_1.f_27 = 1;
	Var0.f_14.f_24.f_1.f_27.f_1 = 1065353216;
	Var0.f_14.f_24.f_1.f_27.f_1.f_11 = -1;
	Var0.f_14.f_24.f_1.f_41 = 1;
	Var0.f_14.f_24.f_1.f_41.f_1 = 1073741824;
	Var0.f_14.f_24.f_1.f_41.f_1.f_1 = 1073741824;
	Var0.f_14.f_24.f_1.f_41.f_1.f_3 = -1082130432;
	Var0.f_14.f_77 = 2;
	Var0.f_14.f_77.f_1.f_18 = 1082130432;
	Var0.f_14.f_77.f_1.f_19 = -1065353216;
	Var0.f_14.f_77.f_1.f_20 = 1;
	Var0.f_14.f_77.f_1.f_21 = 1;
	Var0.f_14.f_77.f_1.f_21.f_1 = 1065353216;
	Var0.f_14.f_77.f_1.f_21.f_1.f_11 = -1;
	Var0.f_14.f_77.f_1.f_35.f_18 = 1082130432;
	Var0.f_14.f_77.f_1.f_35.f_19 = -1065353216;
	Var0.f_14.f_77.f_1.f_35.f_20 = 1;
	Var0.f_14.f_77.f_1.f_35.f_21 = 1;
	Var0.f_14.f_77.f_1.f_35.f_21.f_1 = 1065353216;
	Var0.f_14.f_77.f_1.f_35.f_21.f_1.f_11 = -1;
	Var0.f_14.f_149 = 1;
	Var0.f_14.f_154 = 1;
	Var0.f_14.f_165 = -1;
	Var0.f_14.f_165.f_1 = -1;
	Var0.f_14.f_184 = -1082130432;
	Var0.f_14.f_185 = -1082130432;
	Var0.f_14.f_186 = -1082130432;
	Var0.f_14.f_190 = 4;
	Var0.f_14.f_195 = 1065353216;
	Var0.f_210 = 1;
	Var0.f_210.f_1.f_19 = 3;
	Var0.f_210.f_1.f_23 = 3;
	Var0.f_210.f_1.f_27 = 3;
	Var0.f_210.f_1.f_31 = 3;
	Var0.f_210.f_1.f_35 = 3;
	Var0.f_261 = 2;
	Var0.f_308.f_4 = 1065353216;
	Var0.f_308.f_4.f_1 = 5000;
	Var0.f_308.f_4.f_2 = 1028443341;
	Var0.f_321 = 1;
	Var0.f_321.f_1.f_3 = 1084227584;
	Var0.f_321.f_1.f_5 = 1;
	Var0.f_321.f_1.f_7 = 1;
	Var0.f_331 = 1;
	Var0.f_333 = 1;
	Var0.f_336 = 2;
	Var0.f_336.f_1.f_1 = 12;
	Var0.f_336.f_1.f_38 = 9;
	Var0.f_336.f_1.f_38.f_1 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2.f_2 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_57 = joaat("WEAPON_UNARMED");
	Var0.f_336.f_1.f_66.f_1 = 12;
	Var0.f_336.f_1.f_66.f_38 = 9;
	Var0.f_336.f_1.f_66.f_38.f_1 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2.f_2 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_336.f_1.f_66.f_57 = joaat("WEAPON_UNARMED");
	Var0.f_469 = 2;
	Var0.f_476 = 4;
	Var0.f_481 = 4;
	Var0.f_487 = 1;
	Var0.f_492 = 1073741824;
	Var0.f_492.f_1 = -1;
	Var0.f_492.f_5 = -1;
	Var0.f_492.f_16 = 2;
	Var0.f_492.f_16.f_3 = 2;
	Var0.f_492.f_22 = 20;
	Var0.f_492.f_43 = 2;
	Var0.f_492.f_46 = 2;
	Var0.f_492.f_53 = 2;
	Var0.f_492.f_60 = 2;
	Var0.f_492.f_63 = 1048576000;
	Var0.f_492.f_68 = -1;
	Var0.f_492.f_73 = -1;
	func_557(&Var0, &uScriptParam_112);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1(&Var0);
	}
}

void func_1(var uParam0)//Position - 0x3C1
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_556(uParam0);
		func_555(uParam0);
		func_554(uParam0);
		func_553(uParam0);
		func_552(uParam0);
		func_534(uParam0);
		func_528(uParam0);
		func_526(uParam0);
		func_524(uParam0);
		func_522(uParam0);
		func_520(uParam0);
		func_519(uParam0);
		func_514(uParam0);
		func_511(uParam0);
		func_510(uParam0);
		func_508(uParam0);
		__LIB_38__::func_261();
		func_506(uParam0);
		if (uParam0->f_492.f_7 == 1)
		{
			func_488(uParam0);
		}
		if (uParam0->f_258 > 2 && uParam0->f_258 < 13)
		{
			__LIB_38__::func_270(&(uParam0->f_492.f_5));
		}
		switch (uParam0->f_258)
		{
			case 0:
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 != -1)
				{
					func_480(uParam0);
				}
				func_479(uParam0);
				uParam0->f_14.f_5 = { uParam0->f_492.f_10 };
				uParam0->f_14.f_8 = { uParam0->f_492.f_13 };
				func_478(uParam0, 2);
				break;
			case 2:
				if (uParam0->f_252 == 13)
				{
					if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/))
					{
						uParam0->f_252 = 14;
						uParam0->f_307 = 375291/*func_477*/;
						uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
						uParam0->f_261.f_27 = 2;
						uParam0->f_261.f_27.f_1 = 52;
						uParam0->f_492.f_13 = { Vector(180f, 0f, 0f) - Vector(-10f, 0f, 0f) };
						uParam0->f_14.f_8 = { uParam0->f_492.f_13 };
					}
				}
				if (uParam0->f_252 == 14)
				{
					if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						uParam0->f_252 = 13;
						uParam0->f_307 = 375148/*func_475*/;
						uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
						uParam0->f_261.f_27 = 2;
						uParam0->f_261.f_27.f_1 = 51;
						uParam0->f_492.f_13 = { Vector(180f, 0f, 0f) + Vector(-10f, 0f, 0f) };
						uParam0->f_14.f_8 = { uParam0->f_492.f_13 };
					}
				}
				Stack.Push(&(uParam0->f_261));
				Stack.Push(&(uParam0->f_253));
				Stack.Push(&(uParam0->f_14));
				Call_Loc(uParam0->f_303);
				if (StackVal)
				{
					if (uParam0->f_486 == 1)
					{
						func_478(uParam0, 6);
						__LIB_38__::func_267(1);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_469[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_469[0], false))
						{
							if (__LIB_5__::func_834(uParam0->f_469[0]))
							{
							}
							func_295(uParam0->f_252, uParam0->f_250, uParam0->f_251, &(uParam0->f_14), __LIB_5__::func_834(uParam0->f_469[0]), -1);
							__LIB_38__::func_267(1);
							func_478(uParam0, 7);
						}
					}
				}
				break;
			case 6:
				if (uParam0->f_492.f_5 == 181)
				{
					uParam0->f_14.f_181 = 0;
				}
				else if (uParam0->f_492.f_5 == 185)
				{
					uParam0->f_14.f_181 = 1;
				}
				func_295(uParam0->f_252, uParam0->f_250, uParam0->f_320, &(uParam0->f_14), 0, uParam0->f_14.f_181);
				if (!func_294(&(uParam0->f_14)))
				{
					return;
				}
				if (uParam0->f_492.f_68 != -1)
				{
					if ((uParam0->f_490 && !__LIB_2__::func_730(PLAYER::PLAYER_ID())) && !__LIB_4__::func_967(PLAYER::PLAYER_ID()))
					{
						Global_1581356 = uParam0->f_492.f_68;
					}
					if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) || __LIB_6__::func_527(3))
					{
						Global_1581356 = uParam0->f_492.f_68;
					}
					if (__LIB_2__::func_730(PLAYER::PLAYER_ID()) || __LIB_4__::func_967(PLAYER::PLAYER_ID()))
					{
						Global_1581350 = uParam0->f_492.f_68;
					}
					if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
					{
						Global_1581350 = uParam0->f_492.f_68;
					}
					if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
					{
						Global_1581359 = uParam0->f_492.f_68;
					}
				}
				func_287(uParam0);
				Stack.Push(&(uParam0->f_308));
				Call_Loc(uParam0->f_304);
				if (StackVal)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_469[0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_469[0], false))
					{
						func_284(uParam0);
						func_295(uParam0->f_252, uParam0->f_250, uParam0->f_251, &(uParam0->f_14), __LIB_5__::func_834(uParam0->f_469[0]), uParam0->f_14.f_181);
						func_478(uParam0, 7);
					}
					else
					{
						func_284(uParam0);
						func_295(uParam0->f_252, uParam0->f_250, uParam0->f_251, &(uParam0->f_14), 0, uParam0->f_14.f_181);
						func_478(uParam0, 7);
					}
				}
				break;
			case 7:
				uParam0->f_14.f_5 = { uParam0->f_492.f_10 };
				uParam0->f_14.f_8 = { uParam0->f_492.f_13 };
				if (uParam0->f_14.f_180)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14.f_24[0 /*52*/].f_8))
					{
						uParam0->f_14.f_5 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_14.f_24[0 /*52*/].f_8, true) };
						uParam0->f_14.f_8 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_14.f_24[0 /*52*/].f_8, 2) };
					}
				}
				if (uParam0->f_252 == 13)
				{
				}
				if (uParam0->f_252 == 14)
				{
				}
				Stack.Push(&(uParam0->f_14));
				Stack.Push(&(uParam0->f_333));
				Stack.Push(&(uParam0->f_321));
				Stack.Push(&(uParam0->f_469));
				Call_Loc(uParam0->f_306);
				if (StackVal)
				{
					if (func_241(uParam0))
					{
						func_478(uParam0, 14);
					}
					func_240(uParam0);
				}
				break;
			case 8:
				break;
			case 9:
				break;
			case 21:
				break;
			case 11:
				break;
			case 22:
				break;
			case 25:
				break;
			case 23:
				break;
			case 13:
				break;
			case 16:
				break;
			case 17:
				break;
			case 14:
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_261.f_31.f_2, "MP_HTRUCK_T_1e" /* GXT: Drone available again in ~a~.~n~Press ~INPUT_CONTEXT~ to stand up. */))
				{
					if (__LIB_6__::func_702())
					{
						HUD::CLEAR_HELP(true);
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_261.f_31.f_2, "MP_RGSUBM_T_1e" /* GXT: A guided missile can be launched from this station again in ~a~.~n~Press ~INPUT_CONTEXT~ to stand up. */))
				{
					if (__LIB_6__::func_922(1) || __LIB_6__::func_922(2))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_261.f_31.f_2) && __LIB_0__::func_1(uParam0->f_261.f_31.f_2))
				{
					__LIB_7__::func_378(&(uParam0->f_261.f_31));
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14.f_158.f_2) && __LIB_0__::func_1(uParam0->f_14.f_158.f_2))
				{
					__LIB_7__::func_378(&(uParam0->f_14.f_158));
				}
				if (Global_2787785)
				{
					if (!__LIB_13__::func_655())
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
				}
				Global_1931614 = 0;
				uParam0->f_251 = 0;
				if (Global_1952150)
				{
					Global_1952150 = 0;
				}
				else if (Global_1952151)
				{
					Global_1952151 = 0;
				}
				func_13(uParam0);
				switch (uParam0->f_252)
				{
					case 90:
					case 91:
					case 92:
					case 93:
						__LIB_38__::func_269(uParam0->f_252, 2, -1, 0);
						break;
					case 4:
						__LIB_38__::func_269(uParam0->f_252, 3, -1, 0);
						break;
				}
				if (Global_1581350 != -1)
				{
					Global_1581350 = -1;
				}
				if (Global_1581356 != -1)
				{
					Global_1581356 = -1;
				}
				if (Global_1581359 != -1)
				{
					Global_1581359 = -1;
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_803 != -1)
				{
					Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_803 = -1;
				}
				Global_1835501 = -1;
				__LIB_1__::func_91();
				func_478(uParam0, 2);
				if (uParam0->f_492.f_7 == 1)
				{
					if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
					{
						HUD::CLEAR_HELP(true);
					}
					SCRIPT::TERMINATE_THIS_THREAD();
				}
				break;
			case 15:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_261.f_31.f_2) && __LIB_0__::func_1(uParam0->f_261.f_31.f_2))
				{
					__LIB_7__::func_378(&(uParam0->f_261.f_31));
				}
				Global_1931614 = 0;
				uParam0->f_251 = 0;
				if (Global_1952150)
				{
					Global_1952150 = 0;
				}
				else if (Global_1952151)
				{
					Global_1952151 = 0;
				}
				switch (uParam0->f_252)
				{
					case 90:
					case 91:
					case 92:
					case 93:
						__LIB_38__::func_269(uParam0->f_252, 2, -1, 0);
						break;
					case 4:
						__LIB_38__::func_269(uParam0->f_252, 3, -1, 0);
						break;
				}
				if (Global_1581350 != -1)
				{
					Global_1581350 = -1;
				}
				if (Global_1581359 != -1)
				{
					Global_1581359 = -1;
				}
				func_478(uParam0, 2);
				if (uParam0->f_492.f_7 == 1)
				{
					if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
					{
						HUD::CLEAR_HELP(true);
					}
					SCRIPT::TERMINATE_THIS_THREAD();
				}
				break;
			}
	}
}

void func_13(var uParam0)//Position - 0x11B3
{
	if (uParam0->f_14.f_77[0 /*35*/].f_17 == PLAYER::PLAYER_PED_ID() && uParam0->f_491 == 1)
	{
		if (uParam0->f_571 != -99 && uParam0->f_571 != 0)
		{
			func_14(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_571, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (uParam0->f_570 != -99 && uParam0->f_570 != 0)
		{
			func_14(PLAYER::PLAYER_PED_ID(), 1, uParam0->f_570, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		uParam0->f_491 = 0;
	}
}

int func_14(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1248
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
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
			func_180(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 10, 0, -1) };
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
						func_180(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_180(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_14(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_180(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_167(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_14(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_158(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_180(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_9__::func_528(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_14(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_180(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_14(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_149(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_14(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_14(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_145(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_14(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_7__::func_884(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_14(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_14(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar32, -1) };
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
								func_14(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_7__::func_884(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
								func_14(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_14(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_14(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_6__::func_37(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_158(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_145(iVar5, func_167(iParam0, 8, -1), iParam2, func_167(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
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
				func_73(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_145(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_158(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_145(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
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
				__LIB_2__::func_996(iParam0, iParam10);
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
						func_14(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_14(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_145(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_145(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_14(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_145(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_14(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_45(iParam0, 9, iVar63))
						{
							func_14(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_14(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_14(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
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
						func_14(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_167(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_167(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_14(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_14(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_14(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_14(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_14(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_14(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_14(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_14(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_14(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_14(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_149(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_14(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_14(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_15(iParam0, &uVar4))
		{
			func_14(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_14(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_14(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_14(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_167(iParam0, 3, -1), iVar10);
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
				func_14(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_15(int iParam0, var uParam1)//Position - 0x30F2
{
	int iVar0;
	int iVar1;
	*uParam1 = func_167(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_45(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x79AC
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
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar0, iParam1, iParam2, -1) };
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
				if (!func_45(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_45(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_45(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_45(iParam0, 14, uVar11[iVar10]))
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
						return func_45(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_45(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xF6E8
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_74(iParam0, bParam3, 0, -1);
}

void func_74(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xF735
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
		bVar3 = func_119(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_110(iParam0, iParam3);
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
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
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
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_5__::func_179(Var9.f_2, Var9.f_3, iVar10))
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

int func_110(int iParam0, int iParam1)//Position - 0x1EA00
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_167(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
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
				iVar5 = func_167(iParam0, 11, -1);
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

int func_119(int iParam0, bool bParam1)//Position - 0x1EE5E
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
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
						iVar3 = func_167(iParam0, 11, -1);
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
						iVar5 = func_167(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
						iVar8 = func_167(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
						iVar12 = func_167(iParam0, 8, -1);
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28CA4
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
					iVar0 = func_145(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_145(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_149(int iParam0)//Position - 0x2A1B0
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
		if (!func_154(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_154(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2AB7A
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_167(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D563
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_160(iParam0))
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
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_5__::func_175(iVar0, iParam2, 13) && !__LIB_5__::func_175(iVar0, iParam2, 14)) && !__LIB_5__::func_175(iVar0, iParam2, 15)) && !__LIB_5__::func_175(iVar0, iParam2, 16)) && !__LIB_5__::func_175(iVar0, iParam2, 71)) && !__LIB_5__::func_175(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_5__::func_29(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_160(int iParam0)//Position - 0x2D6F2
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_167(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_167(iParam0, 11, -1);
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

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x2DB84
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
				if (func_45(iParam0, iParam1, iVar0))
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
				if (func_45(iParam0, iParam1, iVar1))
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

void func_180(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x30BE2
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
		Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
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
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_180(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_180(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_180(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
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
							func_180(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_180(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_180(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_180(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_180(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_180(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_180(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_240(var uParam0)//Position - 0x4D383
{
	int iVar0;
	if (uParam0->f_474)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_333[iVar0]))
			{
				if (((ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_333[0], uParam0->f_14.f_24[0 /*52*/], uParam0->f_14.f_24[0 /*52*/].f_1, 3) && NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6) != -1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)) > 0.01f) && ENTITY::IS_ENTITY_VISIBLE(uParam0->f_333[iVar0]) == uParam0->f_476[iVar0])
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_333[iVar0], !uParam0->f_476[iVar0], false);
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_333[0], uParam0->f_14.f_24[0 /*52*/], uParam0->f_14.f_24[0 /*52*/].f_1, 3) && ENTITY::IS_ENTITY_VISIBLE(uParam0->f_333[iVar0]) == uParam0->f_481[iVar0])
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_333[iVar0], !uParam0->f_481[iVar0], false);
				}
			}
			iVar0++;
		}
	}
}

int func_241(var uParam0)//Position - 0x4D497
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_283(uParam0);
	func_282(uParam0);
	func_281(uParam0);
	func_276(uParam0);
	func_272(uParam0);
	if (func_266(uParam0->f_14, &(uParam0->f_14)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14.f_158.f_2))
		{
			if (__LIB_38__::func_265())
			{
				Stack.Push(&(uParam0->f_14.f_158));
				Call_Loc(uParam0->f_14.f_156);
			}
			else
			{
				Stack.Push(&(uParam0->f_14.f_158));
				Call_Loc(uParam0->f_14.f_157);
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_14.f_149[iVar0 /*4*/].f_1 != 0)
			{
				if (uParam0->f_14.f_149[iVar0 /*4*/].f_2 != -1)
				{
					Stack.Push(uParam0->f_14.f_149[iVar0 /*4*/]);
					Call_Loc(uParam0->f_14.f_154[iVar0]);
					if (StackVal)
					{
						uParam0->f_251 = uParam0->f_14.f_149[iVar0 /*4*/].f_2;
						if (uParam0->f_14.f_149[iVar0 /*4*/].f_3 != -1)
						{
							uParam0->f_250 = uParam0->f_14.f_149[iVar0 /*4*/].f_3;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14.f_158.f_2))
						{
							Stack.Push(&(uParam0->f_14.f_158));
							Call_Loc(uParam0->f_14.f_157);
						}
						uParam0->f_14.f_148 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14.f_77[0 /*35*/].f_17))
						{
							func_295(uParam0->f_252, uParam0->f_250, uParam0->f_251, &(uParam0->f_14), __LIB_5__::func_834(uParam0->f_14.f_77[0 /*35*/].f_17), -1);
						}
						return 0;
					}
				}
			}
			iVar0++;
		}
		func_251(&(uParam0->f_14), uParam0);
		Stack.Push(&(uParam0->f_14));
		Call_Loc(uParam0->f_307);
		func_250(uParam0);
		Stack.Push(&(uParam0->f_14));
		Call_Loc(uParam0->f_305);
		if (StackVal)
		{
			return 0;
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14.f_158.f_2))
			{
				if (((uParam0->f_252 == 190 || uParam0->f_252 == 191) || uParam0->f_252 == 199) || uParam0->f_252 == 200)
				{
				}
				else
				{
					Stack.Push(&(uParam0->f_14.f_158));
					Call_Loc(uParam0->f_14.f_157);
				}
			}
			func_243(uParam0);
			Stack.Push(uParam0->f_251);
			Stack.Push(uParam0->f_14.f_165);
			Call_Loc(uParam0->f_14.f_178);
			iVar1 = StackVal;
			Stack.Push(uParam0->f_251);
			Stack.Push(uParam0->f_14.f_165);
			Call_Loc(uParam0->f_14.f_179);
			iVar2 = StackVal;
			if (iVar2 != -1)
			{
				uParam0->f_250 = iVar2;
			}
			if (iVar1 != -1)
			{
				uParam0->f_251 = iVar1;
				func_242(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14.f_77[0 /*35*/].f_17))
				{
					if (__LIB_5__::func_834(uParam0->f_14.f_77[0 /*35*/].f_17))
					{
					}
				}
				if (uParam0->f_251 >= uParam0->f_319 && !uParam0->f_492.f_8)
				{
					iVar3 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6);
					if (iVar3 != -1)
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_14.f_17.f_6);
					}
					return 1;
				}
				func_295(uParam0->f_252, uParam0->f_250, uParam0->f_251, &(uParam0->f_14), __LIB_5__::func_834(uParam0->f_14.f_77[0 /*35*/].f_17), -1);
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_242(var uParam0)//Position - 0x4D740
{
	if (uParam0->f_252 == 185)
	{
		if (uParam0->f_250 == 0)
		{
			if (Global_1836616 == 2)
			{
				if (uParam0->f_251 < (uParam0->f_319 - 1))
				{
					uParam0->f_251 = (uParam0->f_319 - 1);
				}
			}
		}
	}
}

void func_243(var uParam0)//Position - 0x4D780
{
	if (uParam0->f_12 == 1)
	{
		if (uParam0->f_14.f_167 == 1)
		{
			if (uParam0->f_210[uParam0->f_250 /*39*/].f_17 > 0)
			{
				uParam0->f_251 = func_247(uParam0);
			}
			else
			{
				uParam0->f_251 = func_244(uParam0);
			}
		}
		else
		{
			uParam0->f_251 = func_244(uParam0);
		}
	}
}

var func_244(var uParam0)//Position - 0x4D7CE
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_210[uParam0->f_250 /*39*/].f_16);
	while (func_245(iVar0, uParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_210[uParam0->f_250 /*39*/].f_16);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_210[uParam0->f_250 /*39*/].f_16)
	{
		iVar1++;
	}
	return uParam0->f_210[uParam0->f_250 /*39*/].f_19[iVar0];
}

int func_245(int iParam0, var uParam1)//Position - 0x4D837
{
	int iVar0;
	if (uParam1->f_210[uParam1->f_250 /*39*/].f_16 > 1)
	{
		iVar0 = 0;
		while (iVar0 < (uParam1->f_210[uParam1->f_250 /*39*/].f_16 - 1))
		{
			if (uParam1->f_210[uParam1->f_250 /*39*/].f_23[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	func_246(iParam0, uParam1);
	return 0;
}

void func_246(int iParam0, var uParam1)//Position - 0x4D893
{
	var uVar0;
	var uVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < uParam1->f_210[uParam1->f_250 /*39*/].f_16)
	{
		if (iVar2 == 0)
		{
			uVar0 = uParam1->f_210[uParam1->f_250 /*39*/].f_23[iVar2];
			uParam1->f_210[uParam1->f_250 /*39*/].f_23[iVar2] = iParam0;
		}
		else
		{
			uVar1 = uParam1->f_210[uParam1->f_250 /*39*/].f_23[iVar2];
			uParam1->f_210[uParam1->f_250 /*39*/].f_23[iVar2] = uVar0;
			uVar0 = uVar1;
		}
		iVar2++;
	}
}

int func_247(var uParam0)//Position - 0x4D90D
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_210[uParam0->f_250 /*39*/].f_17);
	while (func_248(iVar0, uParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_210[uParam0->f_250 /*39*/].f_17);
	}
	return uParam0->f_210[uParam0->f_250 /*39*/].f_27[iVar0];
	return iVar0;
}

int func_248(int iParam0, var uParam1)//Position - 0x4D95E
{
	int iVar0;
	if (uParam1->f_210[uParam1->f_250 /*39*/].f_17 > 1)
	{
		iVar0 = 0;
		while (iVar0 < (uParam1->f_210[uParam1->f_250 /*39*/].f_17 - 1))
		{
			if (uParam1->f_210[uParam1->f_250 /*39*/].f_31[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	func_249(iParam0, uParam1);
	return 0;
}

void func_249(int iParam0, var uParam1)//Position - 0x4D9BA
{
	var uVar0;
	var uVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < uParam1->f_210[uParam1->f_250 /*39*/].f_17)
	{
		if (iVar2 == 0)
		{
			uVar0 = uParam1->f_210[uParam1->f_250 /*39*/].f_31[iVar2];
			uParam1->f_210[uParam1->f_250 /*39*/].f_31[iVar2] = iParam0;
		}
		else
		{
			uVar1 = uParam1->f_210[uParam1->f_250 /*39*/].f_31[iVar2];
			uParam1->f_210[uParam1->f_250 /*39*/].f_31[iVar2] = uVar0;
			uVar0 = uVar1;
		}
		iVar2++;
	}
}

void func_250(var uParam0)//Position - 0x4DA34
{
	if (uParam0->f_473 == 1)
	{
		if (uParam0->f_472 == 0)
		{
			uParam0->f_14.f_17.f_4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			uParam0->f_472 = 1;
		}
	}
}

void func_251(var uParam0, var uParam1)//Position - 0x4DA62
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_77[iVar0 /*35*/].f_17, false))
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				if (uParam1->f_335 == 0)
				{
					__LIB_38__::func_259(&(uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/]), uParam0->f_77[iVar0 /*35*/].f_17, uParam0);
				}
				else
				{
					__LIB_38__::func_258(&(uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/]), uParam0->f_77[iVar0 /*35*/].f_17, uParam0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_24[iVar0 /*52*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_77[iVar2 /*35*/].f_17, false))
			{
				iVar1 = 0;
				while (iVar1 < 1)
				{
					__LIB_38__::func_257(&(uParam0->f_24[iVar0 /*52*/].f_12[iVar1 /*14*/]), uParam0, uParam0->f_24[iVar0 /*52*/].f_8, uParam0->f_77[iVar2 /*35*/].f_17, uParam1->f_335);
					if (uParam1->f_335)
					{
						__LIB_38__::func_256(&(uParam0->f_24[iVar0 /*52*/].f_27[iVar1 /*13*/]), uParam0->f_24[iVar0 /*52*/].f_8, uParam0->f_77[iVar2 /*35*/].f_17);
					}
					else
					{
						__LIB_38__::func_255(&(uParam0->f_24[iVar0 /*52*/].f_27[iVar1 /*13*/]), uParam0->f_77[iVar2 /*35*/].f_17, uParam0->f_24[iVar0 /*52*/].f_8, uParam0);
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		iVar2++;
	}
}

int func_266(struct<3> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x4E044
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam3->f_77[0 /*35*/]))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam3->f_77[0 /*35*/]);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam3->f_77[0 /*35*/]))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_0))
	{
		STREAMING::REQUEST_ANIM_DICT(Param0.f_0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Param0.f_0))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_1))
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(Param0.f_1, Param0.f_2, __LIB_10__::func_39(Param0.f_2)))
		{
			return 0;
		}
	}
	if (!func_267(uParam3))
	{
		return 0;
	}
	return 1;
}

int func_267(var uParam0)//Position - 0x4E0CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (!__LIB_6__::func_515(&(uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/])))
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		iVar3 = 0;
		while (iVar3 < 1)
		{
			if (!__LIB_6__::func_516(&(uParam0->f_24[iVar2 /*52*/].f_12[iVar3 /*14*/])))
			{
				return 0;
			}
			if (!__LIB_6__::func_515(&(uParam0->f_24[iVar2 /*52*/].f_27[iVar3 /*13*/])))
			{
				return 0;
			}
			iVar3++;
		}
		iVar2++;
	}
	return 1;
}

void func_272(var uParam0)//Position - 0x4E2A9
{
	if (uParam0->f_252 == 186)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "anim@amb@warehouse@laptop@", "enter", 3))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)) >= 0.8f && uParam0->f_13 == 0)
				{
					__LIB_9__::func_674(0, 0, 0);
					uParam0->f_13 = 1;
				}
			}
		}
	}
}

void func_276(var uParam0)//Position - 0x4E545
{
	if (uParam0->f_252 == 14)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_doorbell", "ring_bell_a", 3))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)) >= 0.3f)
				{
					if (!BitTest(uParam0->f_14.f_183, 0))
					{
						__LIB_38__::func_266(PLAYER::PLAYER_ID(), !__LIB_6__::func_573(PLAYER::PLAYER_ID()));
						MISC::SET_BIT(&(uParam0->f_14.f_183), 0);
					}
				}
			}
			else
			{
				func_277(uParam0, 0);
			}
		}
		else
		{
			func_277(uParam0, 0);
		}
	}
	else
	{
		func_277(uParam0, 0);
	}
}

void func_277(var uParam0, bool bParam1)//Position - 0x4E5DC
{
	if (BitTest(uParam0->f_14.f_183, bParam1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_14.f_183), bParam1);
	}
}

void func_281(var uParam0)//Position - 0x4E69F
{
	if (uParam0->f_252 == 13)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_doorbell", "ring_bell_a", 3))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)) >= 0.3f && !BitTest(uParam0->f_14.f_182, 1))
				{
					Global_1946250.f_4587 = !Global_1946250.f_4587;
					MISC::SET_BIT(&(uParam0->f_14.f_182), 1);
				}
			}
		}
	}
}

void func_282(var uParam0)//Position - 0x4E718
{
	if (uParam0->f_252 == 12)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_doorbell", "ring_bell_a", 3))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)) >= 0.3f && !BitTest(uParam0->f_14.f_182, 1))
				{
					Global_1946250.f_4544 = !Global_1946250.f_4544;
					MISC::SET_BIT(&(uParam0->f_14.f_182), 1);
				}
			}
		}
	}
}

void func_283(var uParam0)//Position - 0x4E791
{
	if (uParam0->f_252 == 11)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_doorbell", "ring_bell_a", 3))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_14.f_17.f_6)) >= 0.3f && !BitTest(uParam0->f_14.f_182, 1))
				{
					Global_1946250.f_4543 = !Global_1946250.f_4543;
					MISC::SET_BIT(&(uParam0->f_14.f_182), 1);
				}
			}
		}
	}
}

void func_284(var uParam0)//Position - 0x4E80A
{
	int iVar0;
	int iVar1;
	if (func_286(uParam0))
	{
		if (uParam0->f_14.f_77[0 /*35*/].f_17 == PLAYER::PLAYER_PED_ID() && uParam0->f_491 == 0)
		{
			iVar0 = func_167(PLAYER::PLAYER_PED_ID(), 14, 0);
			if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, iVar0, -1))
			{
				uParam0->f_571 = iVar0;
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				uParam0->f_491 = 1;
			}
			iVar1 = func_167(PLAYER::PLAYER_PED_ID(), 1, -1);
			if (__LIB_16__::func_369(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 1, iVar1, -1))
			{
				uParam0->f_570 = iVar1;
				func_14(PLAYER::PLAYER_PED_ID(), 1, __LIB_0__::func_279(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				uParam0->f_491 = 1;
			}
		}
	}
}

int func_286(var uParam0)//Position - 0x4EA35
{
	switch (uParam0->f_252)
	{
		case 11:
		case 12:
		case 13:
		case 14:
		case 180:
		case 181:
		case 185:
		case 152:
		case 151:
		case 190:
		case 191:
		case 199:
		case 200:
			return 0;
			break;
		default:
			return 1;
			break;
	}
	return 1;
}

void func_287(var uParam0)//Position - 0x4EAA3
{
	struct<3> Var0;
	func_295(uParam0->f_252, 0, uParam0->f_320, &(uParam0->f_14), 0, uParam0->f_14.f_181);
	if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_14.f_77[0 /*35*/]))
	{
		uParam0->f_308 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_14.f_77[0 /*35*/], &(uParam0->f_14.f_77[0 /*35*/].f_1), uParam0->f_14.f_5, uParam0->f_14.f_8, uParam0->f_14.f_17.f_4, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_14.f_77[0 /*35*/], &(uParam0->f_14.f_77[0 /*35*/].f_1), uParam0->f_14.f_5, uParam0->f_14.f_8, uParam0->f_14.f_17.f_4, 2) };
		uParam0->f_308.f_3 = Var0.f_2;
	}
}

int func_294(var uParam0)//Position - 0x4ED47
{
	STREAMING::REQUEST_ANIM_DICT(uParam0->f_77[0 /*35*/]);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_77[0 /*35*/]))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_77[0 /*35*/]);
		return 0;
	}
	return 1;
}

void func_295(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x4ED79
{
	func_471(uParam3);
	bParam4 = bParam4;
	switch (iParam0)
	{
		case 108:
			func_470(iParam1, iParam2, uParam3, bParam4);
			break;
		case 107:
			func_469(iParam1, iParam2, uParam3);
			break;
		case 106:
			func_468(iParam1, iParam2, uParam3, bParam4);
			break;
		case 104:
			func_467(iParam1, iParam2, uParam3, bParam4);
			break;
		case 123:
			func_466(iParam1, iParam2, uParam3, bParam4);
			break;
		case 105:
			func_465(iParam1, iParam2, uParam3, bParam4);
			break;
		case 122:
			func_464(iParam1, iParam2, uParam3, bParam4);
			break;
		case 111:
			func_463(iParam1, iParam2, uParam3);
			break;
		case 103:
			func_462(iParam1, iParam2, uParam3);
			break;
		case 110:
			func_460(iParam1, iParam2, uParam3);
			break;
		case 127:
			func_460(iParam1, iParam2, uParam3);
			break;
		case 95:
			func_459(iParam1, iParam2, uParam3);
			break;
		case 96:
			func_458(iParam1, iParam2, uParam3);
			break;
		case 97:
			func_457(iParam1, iParam2, uParam3);
			break;
		case 126:
			func_456(iParam1, iParam2, uParam3);
			break;
		case 114:
			func_455(iParam1, iParam2, uParam3);
			break;
		case 101:
			func_454(iParam1, iParam2, uParam3);
			break;
		case 98:
			func_453(iParam1, iParam2, uParam3);
			break;
		case 102:
			func_452(iParam1, iParam2, uParam3);
			break;
		case 131:
			func_451(iParam1, iParam2, uParam3);
			break;
		case 92:
		case 91:
		case 90:
			func_448(iParam1, iParam2, uParam3);
			break;
		case 189:
			func_449(iParam1, iParam2, uParam3);
			break;
		case 192:
		case 196:
			func_448(iParam1, iParam2, uParam3);
			break;
		case 4:
			func_447(iParam1, iParam2, uParam3);
			break;
		case 93:
		case 184:
		case 187:
		case 188:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
			func_446(iParam1, iParam2, uParam3);
			break;
		case 112:
			func_445(iParam1, iParam2, uParam3);
			break;
		case 113:
			func_444(iParam1, iParam2, uParam3);
			break;
		case 115:
			func_443(iParam1, iParam2, uParam3);
			break;
		case 116:
			func_442(iParam1, iParam2, uParam3);
			break;
		case 117:
			func_441(iParam1, iParam2, uParam3);
			break;
		case 118:
			func_440(iParam1, iParam2, uParam3);
			break;
		case 26:
		case 27:
			func_439(iParam1, iParam2, uParam3);
			break;
		case 119:
			func_438(iParam1, iParam2, uParam3);
			break;
		case 120:
			func_437(iParam1, iParam2, uParam3, bParam4);
			break;
		case 121:
			func_436(iParam1, iParam2, uParam3, bParam4);
			break;
		case 124:
			func_435(iParam1, iParam2, uParam3);
			break;
		case 125:
			func_434(iParam1, iParam2, uParam3);
			break;
		case 167:
		case 165:
			func_433(iParam1, iParam2, uParam3);
			break;
		case 182:
			func_432(iParam1, iParam2, uParam3);
			break;
		case 128:
			func_431(iParam1, iParam2, uParam3);
			break;
		case 129:
			func_430(iParam1, iParam2, uParam3);
			break;
		case 130:
			func_429(iParam1, iParam2, uParam3, bParam4);
			break;
		case 132:
			func_428(iParam1, iParam2, uParam3);
			break;
		case 133:
			func_427(iParam1, iParam2, uParam3, bParam4);
			break;
		case 134:
			func_426(iParam1, iParam2, uParam3);
			break;
		case 137:
			func_425(iParam1, iParam2, uParam3);
			break;
		case 138:
			func_424(iParam1, iParam2, uParam3);
			break;
		case 139:
			func_423(iParam1, iParam2, uParam3);
			break;
		case 136:
			func_422(iParam1, iParam2, uParam3);
			break;
		case 144:
			func_421(iParam1, iParam2, uParam3);
			break;
		case 146:
			func_420(iParam1, iParam2, uParam3);
			break;
		case 145:
			func_419(iParam1, iParam2, uParam3);
			break;
		case 140:
			func_418(iParam1, iParam2, uParam3);
			break;
		case 143:
			func_417(iParam1, iParam2, uParam3);
			break;
		case 141:
			func_416(iParam1, iParam2, uParam3);
			break;
		case 147:
			func_415(iParam1, iParam2, uParam3);
			break;
		case 148:
			func_414(iParam1, iParam2, uParam3);
			break;
		case 149:
			func_413(iParam1, iParam2, uParam3);
			break;
		case 150:
			func_412(iParam1, iParam2, uParam3);
			break;
		case 151:
		case 181:
			func_411(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		case 152:
		case 180:
			func_410(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		case 185:
			func_406(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		case 190:
			func_404(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		case 191:
			func_382(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		case 153:
			func_381(iParam1, iParam2, uParam3);
			break;
		case 154:
			func_380(iParam1, iParam2, uParam3);
			break;
		case 155:
		case 156:
			func_378(iParam1, iParam2, uParam3);
			break;
		case 157:
			func_372(iParam1, iParam2, uParam3);
			break;
		case 158:
		case 159:
		case 160:
		case 161:
			func_367(iParam1, iParam2, uParam3);
			break;
		case 162:
		case 163:
			func_362(iParam1, iParam2, uParam3);
			break;
		case 166:
			func_361(iParam1, iParam2, uParam3);
			break;
		case 168:
			func_360(iParam1, iParam2, uParam3);
			break;
		case 170:
			func_359(iParam1, iParam2, uParam3);
			break;
		case 171:
			func_358(iParam1, iParam2, uParam3);
			break;
		case 173:
			func_357(iParam1, iParam2, uParam3);
			break;
		case 174:
			func_356(iParam1, iParam2, uParam3);
			break;
		case 175:
			func_355(iParam1, iParam2, uParam3);
			break;
		case 176:
			func_354(iParam1, iParam2, uParam3);
			break;
		case 177:
			func_353(iParam1, iParam2, uParam3);
			break;
		case 178:
			func_352(iParam1, iParam2, uParam3);
			break;
		case 179:
			func_351(iParam1, iParam2, uParam3);
			break;
		case 183:
			func_349(iParam1, iParam2, uParam3);
			break;
		case 10:
		case 201:
		case 202:
			func_348(iParam1, iParam2, uParam3);
			break;
		case 205:
			func_347(iParam1, iParam2, uParam3);
			break;
		case 204:
			func_348(iParam1, iParam2, uParam3);
			break;
		case 203:
			func_346(iParam1, iParam2, uParam3);
			break;
		case 8:
			func_345(iParam1, iParam2, uParam3);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			func_344(iParam1, iParam2, uParam3, 0);
			break;
		case 186:
			func_340(iParam1, iParam2, uParam3, 0);
			break;
		case 199:
			func_338(iParam1, iParam2, uParam3, bParam4, iParam5);
			break;
		case 200:
			func_296(iParam1, iParam2, uParam3, bParam4, iParam5);
			break;
	}
}

void func_296(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x4F516
{
	bParam3 = false;
	if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
	{
		bParam3 = true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter_left", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_left_chair";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_chair";
					}
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_1 = "base_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = __LIB_9__::func_871();
					if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
					{
						uParam2->f_158.f_2 = __LIB_10__::func_46(2);
					}
					uParam2->f_156 = 326090/*__LIB_10__::func_143*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 325955/*__LIB_7__::func_380*/;
					break;
				case 2:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_enter_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_idle_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 325891/*__LIB_6__::func_850*/;
					break;
				case 2:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 1;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					uParam2->f_179 = 325861/*__LIB_6__::func_520*/;
					break;
			}
			break;
	}
}

void func_338(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x50781
{
	bParam3 = false;
	if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
	{
		bParam3 = true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter_left", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_left_chair";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_chair";
					}
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_1 = "base_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = __LIB_10__::func_46(1);
					uParam2->f_156 = 330555/*__LIB_10__::func_138*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 325955/*__LIB_7__::func_380*/;
					break;
				case 2:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit_left", 64);
					uParam2->f_24[0 /*52*/].f_1 = "exit_left_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_enter_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_idle_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 325891/*__LIB_6__::func_850*/;
					break;
				case 2:
					if (bParam3)
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 1;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					uParam2->f_179 = 325861/*__LIB_6__::func_520*/;
					break;
			}
			break;
	}
}

void func_340(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x50C16
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@warehouse@laptop@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@warehouse@laptop@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_156 = 331059/*__LIB_6__::func_848*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 331029/*__LIB_6__::func_534*/;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@warehouse@laptop@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_344(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x50D78
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "mp_doorbell";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "ring_bell_a", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_345(int iParam0, int iParam1, var uParam2)//Position - 0x50DCF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@safehouse@wine";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "drink_wine_stage1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "anim@safehouse@wine";
					uParam2->f_24[0 /*52*/].f_1 = "drink_wine_stage1_bottle";
					uParam2->f_184 = 0.6f;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_346(int iParam0, int iParam1, var uParam2)//Position - 0x50E47
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@player@fix_drink_juice@heeled@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@player@fix_drink_juice@heeled@";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "anim@scripted@player@fix_drink_juice@male@";
						uParam2->f_24[0 /*52*/] = "anim@scripted@player@fix_drink_juice@male@";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "drink_wheatgrass_stage1", 64);
					uParam2->f_24[0 /*52*/].f_1 = "drink_wheatgrass_stage1_glass";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_186 = 0.9f;
					uParam2->f_167 = 1;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_347(int iParam0, int iParam1, var uParam2)//Position - 0x50EE8
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@safehouse@bong";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "bong_stage1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_185 = 0.5f;
					uParam2->f_77[0 /*35*/].f_21[0 /*13*/] = 0.6f;
					uParam2->f_77[0 /*35*/].f_21[0 /*13*/].f_8 = "scr_safehouse";
					uParam2->f_77[0 /*35*/].f_21[0 /*13*/].f_7 = "scr_sh_cig_exhale_mouth";
					uParam2->f_77[0 /*35*/].f_21[0 /*13*/].f_1 = { -0.025f, 0.13f, 0f };
					uParam2->f_77[0 /*35*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
					uParam2->f_77[0 /*35*/].f_21[0 /*13*/].f_11 = 31086;
					uParam2->f_24[0 /*52*/] = "anim@safehouse@bong";
					uParam2->f_24[0 /*52*/].f_1 = "bong_stage1_bong";
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_348(int iParam0, int iParam1, var uParam2)//Position - 0x50FD4
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@safehouse@wheatgrass";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "drink_wheatgrass_stage1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "anim@safehouse@wheatgrass";
					uParam2->f_24[0 /*52*/].f_1 = "drink_wheatgrass_stage1_glass";
					uParam2->f_186 = 0.9f;
					uParam2->f_167 = 1;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_349(int iParam0, int iParam1, var uParam2)//Position - 0x51051
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "pa_idle_a", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@office@pa@male@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_a_chair";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "pa_idle_b", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@office@pa@male@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_b_chair";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "pa_idle_c", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@office@pa@male@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_c_chair";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "pa_idle_d", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@office@pa@male@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_d_chair";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_351(int iParam0, int iParam1, var uParam2)//Position - 0x511A8
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "base_right_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "disgusted_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "disgusted_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "disgusted_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "disgusted_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_03_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_03_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 11:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "scratch_leg_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "scratch_leg_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "tired_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "tired_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_352(int iParam0, int iParam1, var uParam2)//Position - 0x5153D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_01_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_02_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "investigate_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "investigate_01_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "investigate_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "investigate_02_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "investigate_03_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "investigate_03_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_01_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 11:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@load_clips@";
					uParam2->f_24[0 /*52*/].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_353(int iParam0, int iParam1, var uParam2)//Position - 0x518BC
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "clip_test_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "clip_test_01_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "clip_test_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "clip_test_02_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "expel_cartridge_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "expel_cartridge_01_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_01_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_02_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_03_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_03_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_01_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_02_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_03_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_03_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "trigger_test_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0 /*52*/].f_1 = "trigger_test_01_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_354(int iParam0, int iParam1, var uParam2)//Position - 0x51BF3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "confused_01_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "confused_01_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "counting_01_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "counting_01_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "dissaproval_01_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "dissaproval_01_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_01_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_02_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_02_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_01_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_02_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_left_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_left_01_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "observe_05_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "observe_05_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_left_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_left_02_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 11:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_right_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_right_01_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 12:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_right_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_right_02_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 13:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_up_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_up_01_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 14:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_up_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "look_up_02_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 15:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "observe_01_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "observe_01_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 16:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "observe_02_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "observe_02_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 17:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "observe_03_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "observe_03_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "observe_04_lo_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0 /*52*/].f_1 = "observe_04_lo_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_355(int iParam0, int iParam1, var uParam2)//Position - 0x52122
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "curious_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "disgust_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "examine_close_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_03_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_04_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "knuckle_crack_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 11:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "read_02_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 12:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "read_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 13:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "read_03_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 14:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "think_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 15:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "think_02_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 16:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "tired_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_356(int iParam0, int iParam1, var uParam2)//Position - 0x52471
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "disgusted_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "disgusted_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "disgusted_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "disgusted_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_03_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_03_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "investigate_computer_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "investigate_computer_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_02_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 11:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "scratch_leg_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "scratch_leg_01_right_v_ilev_chair02_ped";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "tired_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0 /*52*/].f_1 = "tired_01_right_v_ilev_chair02_ped";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_357(int iParam0, int iParam1, var uParam2)//Position - 0x52806
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "base_right_gr_prop_gr_laptop_01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "tired_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "tired_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "tired_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "tired_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "break_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "glance_board_02_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "glance_board_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "reach_out_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "reach_out_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stretch_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "stretch_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "thinking_01_right_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0 /*52*/].f_1 = "thinking_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_358(int iParam0, int iParam1, var uParam2)//Position - 0x52B51
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weapon_inspect_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@weapon_test@";
					uParam2->f_24[0 /*52*/].f_1 = "weapon_inspect_01_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weapon_inspect_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@range@weapon_test@";
					uParam2->f_24[0 /*52*/].f_1 = "weapon_inspect_02_prop_pencil_01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_359(int iParam0, int iParam1, var uParam2)//Position - 0x52C00
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weapon_test_busrt_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weapon_inspect_01_amy_skater_01", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_360(int iParam0, int iParam1, var uParam2)//Position - 0x52CAF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "base_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "coffee_grab_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "coffee_grab_01_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "draw_circles_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "draw_circles_01_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_01_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_02_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_03_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_03_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_04_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_04_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_01_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_02_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_03_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_03_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 10:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_04_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_04_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 11:
					uParam2->f_77[0 /*35*/] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_05_amy_skater_01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_05_prop_mug_04";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_361(int iParam0, int iParam1, var uParam2)//Position - 0x5302E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "missfbi_s4mop";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "guard_idle_b", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "missfbi_s4mop";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "guard_idle_b_earpiece", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_362(int iParam0, int iParam1, var uParam2)//Position - 0x530AF
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_366(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					func_365(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					func_364(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_363(iVar0, uParam2);
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 0;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					break;
			}
			break;
	}
}

void func_363(int iParam0, var uParam1)//Position - 0x5315F
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "unload_rl_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[0 /*52*/].f_1 = "unload_rl_01_gr_prop_gr_millcage_01a";
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "unload_rl_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[0 /*52*/].f_1 = "unload_rl_02_gr_prop_gr_millcage_01a";
			break;
	}
}

void func_364(int iParam0, var uParam1)//Position - 0x531E4
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_11 = 18905;
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_11 = 18905;
			break;
		case 2:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_03_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_03_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_03_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_11 = 18905;
			break;
	}
}

void func_365(int iParam0, var uParam1)//Position - 0x53499
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "reachout_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "reachout_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_to_right_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 2:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "Look_low_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_low_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 3:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "Look_to_left_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "Look_to_left_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 4:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_high_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_high_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 5:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "clean_surface_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_11 = 18905;
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "clean_surface_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 6:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "clean_surface_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "clean_surface_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 7:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "stretch_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "stretch_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 9:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_left_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a";
			}
			break;
		case 8:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_Right_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a";
			}
			break;
	}
}

void func_366(int iParam0, var uParam1)//Position - 0x53A47
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "load_ll_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "load_ll_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
			}
			break;
	}
}

void func_367(int iParam0, int iParam1, var uParam2)//Position - 0x53ADB
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_371(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
					func_370(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					func_369(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_368(iVar0, uParam2);
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 0;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					break;
			}
			break;
	}
}

void func_368(int iParam0, var uParam1)//Position - 0x53B8B
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "unload_rl_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "unload_rl_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_11 = 57005;
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "unload_rl_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "unload_rl_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_8 = "scr_gr_bunk";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_1 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_4 = { 0f, 0f, 0f };
			uParam1->f_77[0 /*35*/].f_21[0 /*13*/].f_11 = 57005;
			break;
	}
}

void func_369(int iParam0, var uParam1)//Position - 0x53D80
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "operate_01_gr_prop_gr_drillcage_01a";
			}
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
			}
			break;
		case 2:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_03_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_03_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_03_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "operate_03_gr_prop_gr_drillcage_01a";
			}
			break;
		case 3:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_04_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
			}
			break;
	}
}

void func_370(int iParam0, var uParam1)//Position - 0x53FA3
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "reachout_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "reachout_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "reachout_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "reachout_gr_prop_gr_drillcage_01a";
			}
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_to_right_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_to_right_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_to_right_gr_prop_gr_drillcage_01a";
			}
			break;
		case 2:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "Look_low_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "Look_low_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "Look_low_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "Look_low_gr_prop_gr_drillcage_01a";
			}
			break;
		case 3:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "Look_to_left_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "Look_to_left_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a";
			}
			break;
		case 4:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "stretch_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "stretch_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "stretch_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "stretch_gr_prop_gr_drillcage_01a";
			}
			break;
		case 5:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "scratch_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "scratch_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "scratch_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "scratch_gr_prop_gr_drillcage_01a";
			}
			break;
		case 6:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_left_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a";
			}
			break;
		case 7:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "look_around_Right_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a";
			}
			break;
	}
}

void func_371(int iParam0, var uParam1)//Position - 0x543DC
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "load_ll_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "load_ll_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a";
			}
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "load_ll_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0 /*52*/].f_8, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0 /*52*/].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0 /*52*/].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0 /*52*/].f_1 = "load_ll_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0 /*52*/].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a";
			}
			break;
	}
}

void func_372(int iParam0, int iParam1, var uParam2)//Position - 0x544F5
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					func_377(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					func_376(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_375(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_374(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 4:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_373(iVar0, uParam2);
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 0;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					break;
			}
			break;
	}
}

void func_373(int iParam0, var uParam1)//Position - 0x545C5
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "unload_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "unload_01_gr_prop_gr_2stackcrate_01a";
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "unload_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "unload_02_gr_prop_gr_2stackcrate_01a";
			break;
	}
}

void func_374(int iParam0, var uParam1)//Position - 0x5464A
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_01_hi_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "operate_01_hi_gr_prop_gr_2stackcrate_01a";
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_02_hi_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "operate_02_hi_gr_prop_gr_2stackcrate_01a";
			break;
	}
}

void func_375(int iParam0, var uParam1)//Position - 0x546CF
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "look_around_left_01_gr_prop_gr_2stackcrate_01a";
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "look_around_Right_01_gr_prop_gr_2stackcrate_01a";
			break;
		case 2:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "look_to_right_gr_prop_gr_2stackcrate_01a";
			break;
		case 3:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "scratch_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "scratch_gr_prop_gr_2stackcrate_01a";
			break;
		case 4:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "clean_surface_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "clean_surface_02_gr_prop_gr_2stackcrate_01a";
			break;
		case 5:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "clean_surface_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "clean_surface_01_gr_prop_gr_2stackcrate_01a";
			break;
	}
}

void func_376(int iParam0, var uParam1)//Position - 0x54840
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "load_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "load_01_gr_prop_gr_2stackcrate_01a";
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "load_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "load_02_gr_prop_gr_2stackcrate_01a";
			break;
		case 2:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "load_03_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "load_03_gr_prop_gr_2stackcrate_01a";
			break;
		case 3:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "load_04_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "load_04_gr_prop_gr_2stackcrate_01a";
			break;
	}
}

void func_377(int iParam0, var uParam1)//Position - 0x5493B
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "adjust_handle_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "adjust_handle_gr_prop_gr_2stackcrate_01a";
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "reject_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "reject_01_gr_prop_gr_2stackcrate_01a";
			break;
		case 2:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "reject_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "reject_02_gr_prop_gr_2stackcrate_01a";
			break;
		case 3:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "reject_03_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "reject_03_gr_prop_gr_2stackcrate_01a";
			break;
		case 4:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "clean_surface_03_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "clean_surface_03_gr_prop_gr_2stackcrate_01a";
			break;
	}
}

void func_378(int iParam0, int iParam1, var uParam2)//Position - 0x54A71
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					func_377(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					func_376(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_375(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_379(iVar0, uParam2);
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 4:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_373(iVar0, uParam2);
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 0;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					break;
			}
			break;
	}
}

void func_379(int iParam0, var uParam1)//Position - 0x54B41
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "operate_01_gr_prop_gr_2stackcrate_01a";
			break;
		case 1:
			uParam1->f_77[0 /*35*/] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_77[0 /*35*/].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0 /*52*/] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0 /*52*/].f_1 = "operate_02_gr_prop_gr_2stackcrate_01a";
			break;
	}
}

void func_380(int iParam0, int iParam1, var uParam2)//Position - 0x54BC6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@safehouse@whisky";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "drink_whisky_Stage1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "anim@safehouse@whisky";
					uParam2->f_24[0 /*52*/].f_1 = "drink_whisky_stage1_bottle";
					uParam2->f_17.f_4 = 0f;
					uParam2->f_17.f_3 = 1f;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_381(int iParam0, int iParam1, var uParam2)//Position - 0x54C43
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_VEHICLE_MECHANIC", 64);
					uParam2->f_167 = 1;
					break;
			}
			break;
	}
}

void func_382(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x54C7F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter_left", 64);
					uParam2->f_24[0 /*52*/].f_1 = "enter_left_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_1 = "base_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = __LIB_9__::func_871();
					if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
					{
						uParam2->f_158.f_2 = __LIB_10__::func_144(2);
					}
					uParam2->f_156 = 348044/*__LIB_6__::func_835*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 325955/*__LIB_7__::func_380*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit_left", 64);
					uParam2->f_24[0 /*52*/].f_1 = "exit_left_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_enter_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_idle_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 348005/*__LIB_6__::func_834*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 1;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					uParam2->f_179 = 325861/*__LIB_6__::func_520*/;
					break;
			}
			break;
	}
}

void func_404(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x55574
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter_left", 64);
					uParam2->f_24[0 /*52*/].f_1 = "enter_left_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_1 = "base_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = __LIB_9__::func_871();
					if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
					{
						uParam2->f_158.f_2 = __LIB_10__::func_144(1);
					}
					uParam2->f_156 = 350298/*__LIB_10__::func_753*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 325955/*__LIB_7__::func_380*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit_left", 64);
					uParam2->f_24[0 /*52*/].f_1 = "exit_left_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_enter_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_idle_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 325891/*__LIB_6__::func_850*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_77[0 /*35*/].f_20 = 8;
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 1;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					uParam2->f_179 = 325861/*__LIB_6__::func_520*/;
					break;
			}
			break;
	}
}

void func_406(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x5590E
{
	uParam2->f_180 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_chair";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter_left", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_left_chair";
					}
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_1 = "base_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = __LIB_6__::func_557();
					if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
					{
						uParam2->f_158.f_2 = __LIB_9__::func_871();
					}
					if (__LIB_4__::func_952(PLAYER::PLAYER_ID()) || __LIB_4__::func_968(PLAYER::PLAYER_ID()))
					{
						uParam2->f_158.f_2 = __LIB_9__::func_872();
					}
					if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) || __LIB_6__::func_527(3))
					{
						uParam2->f_158.f_2 = __LIB_6__::func_557();
					}
					uParam2->f_156 = 331059/*__LIB_6__::func_848*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 375265/*__LIB_6__::func_508*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit_left", 64);
					uParam2->f_24[0 /*52*/].f_1 = "exit_left_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_enter_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_idle_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 351261/*__LIB_6__::func_555*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 1;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					uParam2->f_179 = 325861/*__LIB_6__::func_520*/;
					break;
			}
			break;
	}
}

void func_410(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x55CAB
{
	uParam2->f_180 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter_left", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_left_chair";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_chair";
					}
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_1 = "base_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = __LIB_9__::func_871();
					if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
					{
						uParam2->f_158.f_2 = __LIB_9__::func_871();
					}
					if (__LIB_4__::func_952(PLAYER::PLAYER_ID()) || __LIB_4__::func_968(PLAYER::PLAYER_ID()))
					{
						uParam2->f_158.f_2 = __LIB_9__::func_872();
					}
					if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) || __LIB_6__::func_527(3))
					{
						uParam2->f_158.f_2 = __LIB_6__::func_557();
					}
					uParam2->f_156 = 331059/*__LIB_6__::func_848*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 375265/*__LIB_6__::func_508*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit_left", 64);
					uParam2->f_24[0 /*52*/].f_1 = "exit_left_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_enter_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_idle_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 351261/*__LIB_6__::func_555*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 1;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					uParam2->f_179 = 325861/*__LIB_6__::func_520*/;
					break;
			}
			break;
	}
}

void func_411(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x55FBA
{
	uParam2->f_180 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_chair";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter_left", 64);
						uParam2->f_24[0 /*52*/].f_1 = "enter_left_chair";
					}
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_1 = "base_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = __LIB_9__::func_871();
					if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
					{
						uParam2->f_158.f_2 = __LIB_9__::func_871();
					}
					if (__LIB_4__::func_952(PLAYER::PLAYER_ID()) || __LIB_4__::func_968(PLAYER::PLAYER_ID()))
					{
						uParam2->f_158.f_2 = __LIB_9__::func_872();
					}
					if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) || __LIB_6__::func_527(3))
					{
						uParam2->f_158.f_2 = __LIB_6__::func_557();
					}
					uParam2->f_156 = 331059/*__LIB_6__::func_848*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 375265/*__LIB_6__::func_508*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_enter_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_idle_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 194;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 351261/*__LIB_6__::func_555*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0 /*52*/] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0 /*52*/].f_1 = "COMPUTER_exit_chair";
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_165.f_1 = 0;
					uParam2->f_165 = 1;
					uParam2->f_178 = 325877/*__LIB_6__::func_521*/;
					uParam2->f_179 = 325861/*__LIB_6__::func_520*/;
					break;
			}
			break;
	}
}

void func_412(int iParam0, int iParam1, var uParam2)//Position - 0x562C9
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_b", 64);
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_c", 64);
					break;
			}
			break;
	}
}

void func_413(int iParam0, int iParam1, var uParam2)//Position - 0x56351
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_AA_COFFEE", 64);
					break;
			}
			break;
	}
}

void func_414(int iParam0, int iParam1, var uParam2)//Position - 0x56388
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_TOURIST_MOBILE", 64);
					break;
			}
			break;
	}
}

void func_415(int iParam0, int iParam1, var uParam2)//Position - 0x563BF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_TOURIST_MAP", 64);
					break;
			}
			break;
	}
}

void func_416(int iParam0, int iParam1, var uParam2)//Position - 0x563F6
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_CONST_DRILL", 64);
					break;
			}
			break;
	}
}

void func_417(int iParam0, int iParam1, var uParam2)//Position - 0x5642D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_WELDING", 64);
					break;
			}
			break;
	}
}

void func_418(int iParam0, int iParam1, var uParam2)//Position - 0x56464
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_HAMMERING", 64);
					break;
			}
			break;
	}
}

void func_419(int iParam0, int iParam1, var uParam2)//Position - 0x5649B
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_SMOKING", 64);
					break;
			}
			break;
	}
}

void func_420(int iParam0, int iParam1, var uParam2)//Position - 0x564D2
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_HANG_OUT_STREET", 64);
					break;
			}
			break;
	}
}

void func_421(int iParam0, int iParam1, var uParam2)//Position - 0x56509
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "WORLD_HUMAN_JANITOR", 64);
					uParam2->f_167 = 1;
					break;
			}
			break;
	}
}

void func_422(int iParam0, int iParam1, var uParam2)//Position - 0x56545
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_24[0 /*52*/] = "mini@repair";
					uParam2->f_24[0 /*52*/].f_1 = "fixing_a_car";
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_423(int iParam0, int iParam1, var uParam2)//Position - 0x5658D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "mini@repair";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "fixing_a_player", 64);
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_424(int iParam0, int iParam1, var uParam2)//Position - 0x565D7
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "mini@repair";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "fixing_a_ped", 64);
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_425(int iParam0, int iParam1, var uParam2)//Position - 0x56621
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "amb@world_human_hammering@male@base";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "amb@world_human_hammering@male@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "amb@world_human_hammering@male@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_b", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "amb@world_human_hammering@male@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_c", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_426(int iParam0, int iParam1, var uParam2)//Position - 0x56706
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "missmechanic";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "work2_base", 64);
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_427(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x56750
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@male@base";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@female@base";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@male@idle_a";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@female@idle_a";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@male@idle_a";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@female@idle_a";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_b", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@male@idle_a";
					}
					else
					{
						uParam2->f_77[0 /*35*/] = "amb@world_human_smoking_pot@female@idle_a";
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_c", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_428(int iParam0, int iParam1, var uParam2)//Position - 0x56885
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "amb@world_human_leaning@female@smoke@base";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "amb@world_human_leaning@female@smoke@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "amb@world_human_leaning@female@smoke@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_b", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "amb@world_human_leaning@female@smoke@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_c", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_429(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5696A
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_24[0 /*52*/].f_2 = { 0.017f, -0.012f, 0.004f };
					uParam2->f_24[0 /*52*/].f_5 = { 0f, 0f, -12.6f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_b", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					if (iParam3 == 0)
					{
						uParam2->f_77[0 /*35*/] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_c", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_430(int iParam0, int iParam1, var uParam2)//Position - 0x56ADB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "hanging_out_operator", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_hands_operator", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "smokers_cough_operator", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "smokers_cough_v1_operator", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_431(int iParam0, int iParam1, var uParam2)//Position - 0x56BC0
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_lazycook", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "base_rag";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "cleaning_inside_by_hand_lazycook", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "cleaning_inside_by_hand_rag";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "cleaning_inside_with_brush_lazycook", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "cleaning_inside_with_brush_rag";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "cleaning_outside_by_hand_lazycook", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "cleaning_outside_by_hand_rag";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "playing_with_brush_lazycook", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "playing_with_brush_rag";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sigh_lazycook", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "sigh_rag";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "so_board_with_cleaning_lazycook", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "so_board_with_cleaning_rag";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_432(int iParam0, int iParam1, var uParam2)//Position - 0x56DDF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "amb@world_human_stand_guard@male@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "amb@world_human_stand_guard@male@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_b", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "amb@world_human_stand_guard@male@idle_a";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_c", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_433(int iParam0, int iParam1, var uParam2)//Position - 0x56E92
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "wait_base", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "wait_a", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "wait_b", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "wait_c", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_434(int iParam0, int iParam1, var uParam2)//Position - 0x56F71
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "missfbi_s4mop";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "guard_idle_a", 64);
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_435(int iParam0, int iParam1, var uParam2)//Position - 0x56FBB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_a", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_b", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_c", 64);
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_436(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x570A0
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_lazyworker", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_lazyworkerfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_phone";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v1_lazyworker", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v1_lazyworkerfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_v1_phone";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "smokers_cough_lazyworker", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "smokers_cough_lazyworkerfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "smokers_cough_phone";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_437(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x571DF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_idle_01_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_idle_01-noworkfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "stand_phone_idle_01_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_idle_02_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_idle_02-noworkfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "stand_phone_idle_02_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_idle_03_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_idle_03-noworkfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "stand_phone_idle_03_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_lookaround_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stand_phone_lookaround-noworkfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "stand_phone_lookaround_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_438(int iParam0, int iParam1, var uParam2)//Position - 0x5737E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sit_phone_idle_01_nowork", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "sit_phone_idle_01_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sit_phone_idle_02_nowork", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "sit_phone_idle_02_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sit_phone_idle_03_nowork", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "sit_phone_idle_03_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sit_phone_lookingleft_nowork", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "sit_phone_lookingleft_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sit_phone_lookingleft_nowork", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0 /*52*/].f_1 = "sit_phone_lookingleft_phone01";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_439(int iParam0, int iParam1, var uParam2)//Position - 0x57505
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@yacht@rail@standing@male@variant_01@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@yacht@rail@standing@male@variant_01@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329273/*__LIB_6__::func_532*/;
					uParam2->f_158.f_2 = "MPYACHT_UNLEAN" /* GXT: Press ~INPUT_CONTEXT~ to stop leaning on the rail. */;
					uParam2->f_156 = 331059/*__LIB_6__::func_848*/;
					uParam2->f_157 = 315233/*__LIB_7__::func_378*/;
					uParam2->f_149[0 /*4*/] = 2;
					uParam2->f_149[0 /*4*/].f_1 = 51;
					uParam2->f_149[0 /*4*/].f_2 = 2;
					uParam2->f_154[0] = 375265/*__LIB_6__::func_508*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@yacht@rail@standing@male@variant_01@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_440(int iParam0, int iParam1, var uParam2)//Position - 0x5760E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_char02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_hammer";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_v1_char02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_v1_hammer";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_v2_char02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_v2_hammer";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_v3_char02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_v3_hammer";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_441(int iParam0, int iParam1, var uParam2)//Position - 0x57753
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_char01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_scoop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.055f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 0f, -90f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_v1_char01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_v1_scoop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.055f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_v2_char01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_v2_scoop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.055f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "break_weigh_v3_char01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0 /*52*/].f_1 = "break_weigh_v3_scoop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.055f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_442(int iParam0, int iParam1, var uParam2)//Position - 0x57A68
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_med_counting_01_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_med_counting_01_pencil";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_med_counting_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_med_counting_02_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_med_idle_01_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_med_idle_01_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_med_idle_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_med_idle_02_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_med_lookingaround_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_med_lookingaround_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_look_left_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_look_left_02_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_look_right_01_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_look_right_01_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_look_right_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_look_right_02_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_443(int iParam0, int iParam1, var uParam2)//Position - 0x57CD5
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_high_idle_01_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_high_idle_01_pencil";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_high_idle_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_high_idle_02_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_high_idle_03_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_high_idle_03_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_high_lookingaround_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_high_lookingaround_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_look_left_01_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_look_left_01_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_look_left_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_look_left_02_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_look_right_01_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_look_right_01_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "inspecting_look_right_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0 /*52*/].f_1 = "inspecting_look_right_02_pencil";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_444(int iParam0, int iParam1, var uParam2)//Position - 0x57F42
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_idle_guage_monitor", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0 /*52*/].f_1 = "base_idle_guage_clipboard^1";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "button_press_monitor", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0 /*52*/].f_1 = "button_press_clipboard^1";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "button_press_v2_monitor", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0 /*52*/].f_1 = "button_press_v2_clipboard^1";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v5_monitor", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_v5_clipboard^1";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_445(int iParam0, int iParam1, var uParam2)//Position - 0x58089
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@meth@meth_monitoring_cooking@cooking@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "chemical_pour_long_cooker", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@meth@meth_monitoring_cooking@cooking@";
					uParam2->f_24[0 /*52*/].f_1 = "chemical_pour_long_sacid";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_sodium_pour_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_sodium_pour_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_meth_sodium_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { -0.18f, 0f, 0.38f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, -90f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_446(int iParam0, int iParam1, var uParam2)//Position - 0x58168
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (__LIB_4__::func_947(PLAYER::PLAYER_ID()))
					{
						uParam2->f_17.f_5 = 1.1f;
						uParam2->f_17.f_3 = 0.925f;
					}
					uParam2->f_77[0 /*35*/] = "anim@safehouse@whisky";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "DRINK_WHISKY_Stage1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "anim@safehouse@whisky";
					uParam2->f_24[0 /*52*/].f_1 = "drink_whisky_stage1_bottle";
					uParam2->f_184 = 0.5f;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_447(int iParam0, int iParam1, var uParam2)//Position - 0x58201
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@safehouse@bong";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "bong_stage1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_185 = 0.5f;
					uParam2->f_24[0 /*52*/] = "anim@safehouse@bong";
					uParam2->f_24[0 /*52*/].f_1 = "bong_stage1_bong";
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_448(int iParam0, int iParam1, var uParam2)//Position - 0x58279
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "mp_safehousebeer@";
					uParam2->f_24[0 /*52*/].f_1 = "enter_bottle";
					uParam2->f_184 = 0.9f;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit_1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "mp_safehousebeer@";
					uParam2->f_24[0 /*52*/].f_1 = "exit_1_bottle";
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_449(int iParam0, int iParam1, var uParam2)//Position - 0x58341
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "enter", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "mp_safehousebeer@";
					uParam2->f_24[0 /*52*/].f_1 = "enter_bottle";
					uParam2->f_184 = 0.3f;
					uParam2->f_17.f_5 = 1.5f;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "exit_1", 64);
					uParam2->f_77[0 /*35*/].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0 /*52*/] = "mp_safehousebeer@";
					uParam2->f_24[0 /*52*/].f_1 = "exit_1_bottle";
					uParam2->f_195 = 0.2f;
					uParam2->f_178 = 329291/*__LIB_6__::func_533*/;
					break;
			}
			break;
	}
}

void func_451(int iParam0, int iParam1, var uParam2)//Position - 0x584E5
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_17.f_5 = 0f;
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "cut_guilotine_v1_billcutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0 /*52*/].f_1 = "cut_guilotine_v1_papercutter";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_452(int iParam0, int iParam1, var uParam2)//Position - 0x58553
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "cut_guilotine_v1_billcutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0 /*52*/].f_1 = "cut_guilotine_v1_papercutter";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "cut_guilotine_v2_billcutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0 /*52*/].f_1 = "cut_guilotine_v2_papercutter";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_v1_billcutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_v1_papercutter";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_right_at_cuttings_billcutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0 /*52*/].f_1 = "look_right_at_cuttings_papercutter";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_left_at_sheets_billcutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0 /*52*/].f_1 = "look_left_at_sheets_papercutter";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "load_guillotine_billcutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0 /*52*/].f_1 = "load_guillotine_papercutter";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_453(int iParam0, int iParam1, var uParam2)//Position - 0x58722
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "watch_production_operator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0 /*52*/].f_1 = "watch_production_ScrunchedMoney";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "watch_production_v1_operator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0 /*52*/].f_1 = "watch_production_v1_ScrunchedMoney";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "watch_production_v2_operator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0 /*52*/].f_1 = "watch_production_v2_ScrunchedMoney";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "button_press_operator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0 /*52*/].f_1 = "button_press_ScrunchedMoney";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "cough_spit_operator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0 /*52*/].f_1 = "cough_spit_ScrunchedMoney";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stop_blockage_operator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0 /*52*/].f_1 = "stop_blockage_ScrunchedMoney";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_454(int iParam0, int iParam1, var uParam2)//Position - 0x588F5
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "note_counting_v2_counter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "note_counting_v2_chair";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "note_counting_v4_counter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "note_counting_v4_chair";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "lookaround_counting_counter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "lookaround_counting_chair";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "paper_jam_counter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "paper_jam_chair";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "paper_jam_v1_counter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "paper_jam_v1_chair";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_455(int iParam0, int iParam1, var uParam2)//Position - 0x58A82
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_worker", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "base_bucket";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "loading_v1_worker", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "loading_v1_bucket";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "loading_v2_worker", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "loading_v2_bucket";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "loading_v3_worker", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "loading_v3_bucket";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stretch_worker", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "stretch_bucket";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_worker", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_bucket";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_456(int iParam0, int iParam1, var uParam2)//Position - 0x58C6D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing_hi@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "full_cycle_v1_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "full_cycle_v1_scoop";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing_hi@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "full_cycle_v2_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "full_cycle_v2_scoop";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing_hi@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "full_cycle_v3_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "full_cycle_v3_scoop";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_457(int iParam0, int iParam1, var uParam2)//Position - 0x58D74
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "full_cycle_basicmould_v1_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0 /*52*/].f_1 = "full_cycle_basicmould_v1_cocbowl";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_v1_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_v1_cocbowl";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_v2_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_v2_cocbowl";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_v3_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_v3_cocbowl";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_v5_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_v5_cocbowl";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "idle_v6_pressoperator", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0 /*52*/].f_1 = "idle_v6_cocbowl";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_458(int iParam0, int iParam1, var uParam2)//Position - 0x58F65
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "fullcut_cycle_cokecutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0 /*52*/].f_1 = "fullcut_cycle_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 35f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "fullcut_cycle_v1_cokecutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0 /*52*/].f_1 = "fullcut_cycle_v1_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 35f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "fullcut_cycle_v2_cokecutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0 /*52*/].f_1 = "fullcut_cycle_v2_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 35f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "fullcut_cycle_v3_cokecutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0 /*52*/].f_1 = "fullcut_cycle_v3_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 35f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_459(int iParam0, int iParam1, var uParam2)//Position - 0x592A0
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "coke_cut_coccutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0 /*52*/].f_1 = "coke_cut_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "coke_cut_v1_coccutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0 /*52*/].f_1 = "coke_cut_v1_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "coke_cut_v2_coccutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0 /*52*/].f_1 = "coke_cut_v2_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "coke_cut_v3_coccutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0 /*52*/].f_1 = "coke_cut_v3_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "coke_cut_v4_coccutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0 /*52*/].f_1 = "coke_cut_v4_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "coke_cut_v5_coccutter", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0 /*52*/].f_1 = "coke_cut_v5_bakingsoda";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_7 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/] = { 0f, 0f, 0.23f };
					uParam2->f_24[0 /*52*/].f_12[0 /*14*/].f_3 = { 0f, 180f, 0f };
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_460(int iParam0, int iParam1, var uParam2)//Position - 0x59751
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_right_sort_v1_sorter02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_right_sort_v1_weeddry01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_right_sort_v2_sorter02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_right_sort_v2_weeddry01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_right_sort_v3_sorter02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_right_sort_v3_weeddry01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_right_tap_table_sorter02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_right_tap_table_weeddry01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_right_cough_sorter02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_right_cough_weeddry01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_right_look_left_sorter02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_right_look_left_weeddry01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_right_look_right_sorter02", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_right_look_right_weeddry01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_462(int iParam0, int iParam1, var uParam2)//Position - 0x59BC3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_inspecting_high_base_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_inspecting_high_base_clipboard";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_inspecting_high_writing_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_inspecting_high_writing_clipboard";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_inspecting_high_idle_01_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_inspecting_high_idle_01_clipboard";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_inspecting_high_idle_02_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_inspecting_high_idle_02_clipboard";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_inspecting_high_idle_03_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_inspecting_high_idle_03_clipboard";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_inspecting_high_idle_04_inspector", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_inspecting_high_idle_04_clipboard";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_463(int iParam0, int iParam1, var uParam2)//Position - 0x59DB0
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_left_sort_v1_sorter01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_left_sort_v1_weeddry01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_left_sort_v2_sorter01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_left_sort_v2_weeddry01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_left_sort_v3_sorter01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_left_sort_v3_weeddry01a";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_left_tap_table_sorter01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_left_tap_table_weeddry01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_left_cough_sorter01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_left_cough_weeddry01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_left_look_left_sorter01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_left_look_left_weeddry01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "sorter_left_look_right_sorter01", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0 /*52*/].f_1 = "sorter_left_look_right_weeddry01a";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_464(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x59FEB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_01_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_02_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_03_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_03_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_04_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_crouch_checkingleaves_idle_04_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_465(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5A136
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_base_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_base_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_crouch_base_spraybottle";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_idle_01_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_crouch_idle_01_spraybottle";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_idle_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_idle_02_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_crouch_idle_02_spraybottle";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_4 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_spraying_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_spraying_01_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_crouch_spraying_01_spraybottle";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_4 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_spraying_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_spraying_02_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_crouch_spraying_02_spraybottle";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_4 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_spraying_03_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_crouch_spraying_03_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_crouch_spraying_03_spraybottle";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_4 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_466(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5A565
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_base_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_base_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_stand_base_spraybottle";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_idle_01_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_stand_idle_01_spraybottle";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_kneeling_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_kneeling_01_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_stand_kneeling_01_spraybottle";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_4 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_spraying_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_spraying_01_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_stand_spraying_01_spraybottle";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_4 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_spraying_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_spraybottle_stand_spraying_02_inspectorfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0 /*52*/].f_1 = "weed_spraybottle_stand_spraying_02_spraybottle";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_4 = { 0f, 0f, -90f };
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_467(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5A8C3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_base_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_base_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_01_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_02_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_03_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_03_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_04_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_04_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_05_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_idle_05_inspectorfemale", 64);
					}
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_kneeling_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_kneeling_01_inspectorfemale", 64);
					}
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_kneeling_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "weed_stand_checkingleaves_kneeling_02_inspectorfemale", 64);
					}
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_468(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5AB3E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "close_inspection_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "close_inspection_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0 /*52*/].f_1 = "close_inspection_ruler";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "light_investigation_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "light_investigation_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0 /*52*/].f_1 = "light_investigation_ruler";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "light_investigation_v1_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "light_investigation_v1_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0 /*52*/].f_1 = "light_investigation_v1_ruler";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stamped_id_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "stamped_id_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0 /*52*/].f_1 = "stamped_id_ruler";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "trimmed_id_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "trimmed_id_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0 /*52*/].f_1 = "trimmed_id_ruler";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v1_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v1_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_v1_ruler";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_469(int iParam0, int iParam1, var uParam2)//Position - 0x5ADBB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "base_photographer", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0 /*52*/].f_1 = "base_camera";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "camera_fiddle_photographer", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0 /*52*/].f_1 = "camera_fiddle_camera";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "photograph_v1_photographer", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0 /*52*/].f_1 = "photograph_v1_camera";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "photograph_v2_photographer", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0 /*52*/].f_1 = "photograph_v2_camera";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "photograph_v3_photographer", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0 /*52*/].f_1 = "photograph_v3_camera";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "photograph_v4_photographer", 64);
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0 /*52*/].f_1 = "photograph_v4_camera";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0 /*52*/].f_27[0 /*13*/].f_8 = "scr_bike_business";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_470(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5B082
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "close_inspection_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "close_inspection_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "close_inspection_openpassport";
					uParam2->f_167 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 1:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "close_inspection_v1_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "close_inspection_v1_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "close_inspection_v1_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 2:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "computer_check_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "computer_check_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "computer_check_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 3:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "doc_inspection_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "doc_inspection_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "doc_inspection_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 4:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "doc_inspection_v2_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "doc_inspection_v2_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "doc_inspection_v2_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 5:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 6:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v1_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v1_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_v1_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 7:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v2_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "look_around_v2_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "look_around_v2_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 8:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "simple_inspect_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "simple_inspect_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "simple_inspect_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
				case 9:
					uParam2->f_77[0 /*35*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "simple_inspect_v1_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_77[0 /*35*/].f_1), "simple_inspect_v1_idartistfemale", 64);
					}
					uParam2->f_24[0 /*52*/] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0 /*52*/].f_1 = "simple_inspect_v1_openpassport";
					uParam2->f_167.f_1 = 1;
					uParam2->f_178 = 332182/*__LIB_6__::func_532*/;
					break;
			}
			break;
	}
}

void func_471(var uParam0)//Position - 0x5B4A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	uParam0->f_187 = 0;
	uParam0->f_188 = 0;
	uParam0->f_189 = 0;
	uParam0->f_184 = -1f;
	uParam0->f_185 = -1f;
	uParam0->f_186 = -1f;
	uParam0->f_195 = 1f;
	uParam0->f_158.f_2 = "";
	uParam0->f_167 = 0;
	uParam0->f_167.f_1 = 0;
	uParam0->f_167.f_2 = 0;
	StringCopy(&(uParam0->f_167.f_3), "", 32);
	uParam0->f_17.f_4 = 0f;
	uParam0->f_17.f_5 = 1f;
	uParam0->f_165.f_1 = -1;
	uParam0->f_17.f_6 = -1;
	uParam0->f_179 = 325861/*__LIB_6__::func_520*/;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/] = 2f;
			uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/].f_7 = "";
			uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/].f_8 = "";
			uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/].f_10 = "";
			uParam0->f_77[iVar0 /*35*/].f_21[iVar1 /*13*/].f_12 = 0;
			iVar1++;
		}
		uParam0->f_77[iVar0 /*35*/] = "";
		StringCopy(&(uParam0->f_77[iVar0 /*35*/].f_1), "", 64);
		iVar0++;
	}
	iVar2 = 0;
	iVar1 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			uParam0->f_24[iVar2 /*52*/].f_27[iVar1 /*13*/] = 2f;
			uParam0->f_24[iVar2 /*52*/].f_27[iVar1 /*13*/].f_7 = "";
			uParam0->f_24[iVar2 /*52*/].f_27[iVar1 /*13*/].f_8 = "";
			uParam0->f_24[iVar2 /*52*/].f_27[iVar1 /*13*/].f_10 = "";
			uParam0->f_24[iVar2 /*52*/].f_27[iVar1 /*13*/].f_12 = 0;
			uParam0->f_24[iVar2 /*52*/].f_12[iVar1 /*14*/].f_11 = 2f;
			uParam0->f_24[iVar2 /*52*/].f_12[iVar1 /*14*/].f_12 = 2f;
			uParam0->f_24[iVar2 /*52*/].f_12[iVar1 /*14*/].f_6 = "";
			uParam0->f_24[iVar2 /*52*/].f_12[iVar1 /*14*/].f_7 = "";
			uParam0->f_24[iVar2 /*52*/].f_12[iVar1 /*14*/].f_8 = 0;
			uParam0->f_24[iVar2 /*52*/].f_12[iVar1 /*14*/].f_9 = "";
			uParam0->f_24[iVar2 /*52*/].f_12[iVar1 /*14*/].f_10 = "";
			iVar1++;
		}
		iVar3 = 0;
		while (iVar3 < 1)
		{
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/] = 2f;
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_1 = 2f;
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_2 = "";
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_3 = -1f;
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_4 = "";
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_5 = "";
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_6 = 0;
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_7 = "";
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_8 = "";
			uParam0->f_24[iVar2 /*52*/].f_41[iVar3 /*10*/].f_9 = -1;
			iVar3++;
		}
		uParam0->f_24[iVar2 /*52*/] = "";
		uParam0->f_24[iVar2 /*52*/].f_1 = "";
		uParam0->f_24[iVar2 /*52*/].f_2 = { 0f, 0f, 0f };
		uParam0->f_24[iVar2 /*52*/].f_5 = { 0f, 0f, 0f };
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		uParam0->f_190[iVar2] = 0;
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam0->f_149[iVar4 /*4*/] = 2;
		uParam0->f_149[iVar4 /*4*/].f_1 = 222;
		uParam0->f_149[iVar4 /*4*/].f_2 = -1;
		uParam0->f_149[iVar4 /*4*/].f_3 = -1;
		iVar4++;
	}
}

void func_475(var uParam0)//Position - 0x5B96C
{
	if (BitTest(uParam0->f_182, 1) && !BitTest(uParam0->f_182, 2))
	{
		MISC::SET_BIT(&(uParam0->f_182), 2);
		if (Global_1946250.f_4587)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
	}
}

void func_477(var uParam0)//Position - 0x5B9FB
{
	if (BitTest(uParam0->f_183, 0) && !BitTest(uParam0->f_183, 1))
	{
		MISC::SET_BIT(&(uParam0->f_183), 1);
		if (!__LIB_6__::func_573(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
	}
}

void func_478(var uParam0, int iParam1)//Position - 0x5BA72
{
	uParam0->f_258 = iParam1;
}

void func_479(var uParam0)//Position - 0x5BA81
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_295(uParam0->f_252, iVar0, iVar1, &(uParam0->f_14), 0, -1);
			if (uParam0->f_14.f_167)
			{
				uParam0->f_210[iVar0 /*39*/].f_19[uParam0->f_210[iVar0 /*39*/].f_16] = iVar1;
				uParam0->f_210[iVar0 /*39*/].f_16++;
				if (!uParam0->f_12)
				{
					uParam0->f_12 = 1;
				}
			}
			if (uParam0->f_14.f_167.f_1)
			{
				uParam0->f_210[iVar0 /*39*/].f_27[uParam0->f_210[iVar0 /*39*/].f_17] = iVar1;
				uParam0->f_210[iVar0 /*39*/].f_17++;
				if (!uParam0->f_12)
				{
					uParam0->f_12 = 1;
				}
			}
			if (uParam0->f_14.f_167.f_2)
			{
				uParam0->f_210[iVar0 /*39*/].f_35[uParam0->f_210[iVar0 /*39*/].f_18] = iVar1;
				uParam0->f_210[iVar0 /*39*/].f_18++;
				if (!uParam0->f_12)
				{
					uParam0->f_12 = 1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_480(var uParam0)//Position - 0x5BB8F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Var1 = { 0f, 0f, 0f };
		Var1.f_3 = { 0f, 0f, 0f };
		Var1 = { uParam0->f_261[iVar0 /*13*/] };
		Var3 = { __LIB_2__::func_680(__LIB_2__::func_681(uParam0->f_259), 0) };
		Var4 = { __LIB_2__::func_680(uParam0->f_259, 0) };
		__LIB_38__::func_268(Var3, Var4, &Var1);
		uParam0->f_261[iVar0 /*13*/] = { Var1 };
		Var2 = { 0f, 0f, 0f };
		Var2.f_3 = { 0f, 0f, 0f };
		Var2 = { uParam0->f_261[iVar0 /*13*/].f_3 };
		__LIB_38__::func_268(Var3, Var4, &Var2);
		uParam0->f_261[iVar0 /*13*/].f_3 = { Var2 };
		iVar0++;
	}
}

void func_488(var uParam0)//Position - 0x5CEE2
{
	if (func_497(uParam0))
	{
		func_478(uParam0, 14);
		if (__LIB_0__::func_959())
		{
			__LIB_38__::func_251();
		}
	}
	if (!__LIB_6__::func_512())
	{
		if (__LIB_0__::func_1(uParam0->f_261.f_31.f_2))
		{
			__LIB_7__::func_378(&(uParam0->f_261.f_31));
		}
		if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_497(var uParam0)//Position - 0x5D065
{
	if (__LIB_31__::func_185())
	{
		return 1;
	}
	if (__LIB_38__::func_260(&(uParam0->f_492)))
	{
		if (uParam0->f_258 == 2)
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_0__::func_959())
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_492.f_2, true) > (uParam0->f_492 + 0.5f) && !uParam0->f_492.f_8)
	{
		return 1;
	}
	if (uParam0->f_492.f_8 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_492.f_2, true) > uParam0->f_492)
	{
		return 1;
	}
	if ((((CAM::IS_SCREEN_FADED_OUT() && !Global_2789733) && !((((((((uParam0->f_252 == 152 || uParam0->f_252 == 151) || uParam0->f_252 == 181) || uParam0->f_252 == 180) || uParam0->f_252 == 185) || uParam0->f_252 == 190) || uParam0->f_252 == 191) || uParam0->f_252 == 199) || uParam0->f_252 == 200)) && !__LIB_4__::func_954(PLAYER::PLAYER_ID())) && !__LIB_4__::func_898(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (!uParam0->f_335 || __LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		if (Global_2787786[uParam0->f_492.f_9] == 1)
		{
			Global_2787786[uParam0->f_492.f_9] = 0;
			func_478(uParam0, 15);
		}
	}
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) && BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_416, 0))
	{
		return 1;
	}
	return 0;
}

void func_506(var uParam0)//Position - 0x5D3FB
{
	switch (uParam0->f_252)
	{
		case 167:
		case 179:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_14.f_77[0 /*35*/].f_17, false))
			{
				PED::SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(uParam0->f_14.f_77[0 /*35*/].f_17, true);
			}
			break;
	}
}

void func_508(var uParam0)//Position - 0x5D46E
{
	if (uParam0->f_569 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_14.f_77[0 /*35*/].f_17, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_76(uParam0->f_14.f_77[0 /*35*/].f_17, PLAYER::PLAYER_PED_ID(), 1) < 15f)
			{
				func_295(uParam0->f_252, uParam0->f_250, uParam0->f_251, &(uParam0->f_14), __LIB_5__::func_834(uParam0->f_14.f_77[0 /*35*/].f_17), -1);
				if (!PED::IS_PED_HEADTRACKING_ENTITY(uParam0->f_14.f_77[0 /*35*/].f_17, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_14.f_77[0 /*35*/].f_17, PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
				}
			}
		}
	}
}

void func_510(var uParam0)//Position - 0x5D570
{
	int iVar0;
	if (__LIB_6__::func_527(3) && uParam0->f_258 > 6)
	{
		HUD::HUD_FORCE_WEAPON_WHEEL(false);
		HUD::DISPLAY_AMMO_THIS_FRAME(false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

void func_511(var uParam0)//Position - 0x5D5CE
{
	if (func_513(uParam0))
	{
		__LIB_1__::func_92();
	}
	else
	{
		__LIB_1__::func_91();
	}
}

int func_513(var uParam0)//Position - 0x5D609
{
	switch (uParam0->f_252)
	{
		case 152:
		case 151:
		case 181:
		case 180:
		case 185:
		case 190:
		case 191:
		case 199:
		case 200:
			switch (uParam0->f_258)
			{
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_514(var uParam0)//Position - 0x5D6A7
{
	if ((((Global_1581350 != -1 || Global_1581356 != -1) && Global_2787785) && !__LIB_13__::func_655()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_0__::func_864(&(uParam0->f_567)))
		{
			__LIB_0__::func_795(&(uParam0->f_567), 1, 0);
		}
		else if (__LIB_0__::func_937(&(uParam0->f_567), 500, 1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_0__::func_794(&(uParam0->f_567));
			Global_2787785 = 0;
		}
	}
}

void func_519(var uParam0)//Position - 0x5D7E8
{
	if (Global_1931614)
	{
		Global_1581353 = uParam0->f_492.f_68;
	}
	else
	{
		Global_1581353 = -1;
	}
}

void func_520(var uParam0)//Position - 0x5D80A
{
	if (func_521(uParam0))
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
}

int func_521(var uParam0)//Position - 0x5D81F
{
	if (!__LIB_0__::func_93())
	{
		switch (uParam0->f_252)
		{
			case 152:
			case 151:
			case 181:
			case 180:
			case 185:
			case 190:
			case 191:
			case 199:
			case 200:
				if (uParam0->f_258 > 6)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_522(var uParam0)//Position - 0x5D87F
{
	int iVar0;
	if (func_523(uParam0, &iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_14.f_24[iVar0 /*52*/].f_8, false))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_14.f_24[iVar0 /*52*/].f_8, true);
		}
	}
}

int func_523(var uParam0, var uParam1)//Position - 0x5D8BF
{
	int iVar0;
	iVar0 = 0;
	switch (uParam0->f_252)
	{
		case 152:
		case 151:
		case 181:
		case 180:
		case 185:
		case 190:
		case 191:
		case 199:
		case 200:
			*uParam1 = 0;
			iVar0 = 1;
			break;
		case 184:
			*uParam1 = 1;
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_524(var uParam0)//Position - 0x5D925
{
	int iVar0;
	if (func_525(uParam0, &iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_14.f_24[iVar0 /*52*/].f_8, false))
		{
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam0->f_14.f_24[iVar0 /*52*/].f_8);
		}
	}
}

bool func_525(var uParam0, var uParam1)//Position - 0x5D95D
{
	bool bVar0;
	bVar0 = false;
	switch (uParam0->f_252)
	{
		case 152:
		case 151:
		case 181:
		case 180:
		case 185:
		case 190:
		case 191:
		case 199:
		case 200:
			*uParam1 = 0;
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

void func_526(var uParam0)//Position - 0x5D9B8
{
	if (func_527(uParam0))
	{
		CAM::INVALIDATE_IDLE_CAM();
	}
}

int func_527(var uParam0)//Position - 0x5D9CD
{
	switch (uParam0->f_252)
	{
		case 152:
		case 151:
		case 181:
		case 180:
		case 185:
		case 190:
		case 191:
		case 199:
		case 200:
			return 1;
			break;
	}
	return 0;
}

void func_528(var uParam0)//Position - 0x5DA1C
{
	if (func_521(uParam0))
	{
		__LIB_1__::func_33(0);
	}
}

void func_534(var uParam0)//Position - 0x5DB99
{
	Global_1581352 = 0;
	if (func_535(uParam0))
	{
		Global_1581352 = 1;
	}
}

int func_535(var uParam0)//Position - 0x5DBB4
{
	if (__LIB_0__::func_945())
	{
		return 0;
	}
	if (__LIB_6__::func_528(Global_4718592.f_116524))
	{
		return 1;
	}
	if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
	{
		if (__LIB_6__::func_838())
		{
		}
		if (__LIB_6__::func_840())
		{
		}
		if (__LIB_6__::func_839())
		{
		}
	}
	if (__LIB_9__::func_731())
	{
		return 0;
	}
	if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_492.f_68 == 1)
		{
			if (__LIB_6__::func_838())
			{
				return 1;
			}
		}
		if (uParam0->f_492.f_68 == 2)
		{
			if (__LIB_6__::func_840())
			{
				return 1;
			}
		}
		if (uParam0->f_492.f_68 == 3)
		{
			if (__LIB_6__::func_839())
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_952(PLAYER::PLAYER_ID()) || __LIB_4__::func_968(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_492.f_68 == 1)
		{
			if (__LIB_9__::func_487())
			{
				return 1;
			}
		}
		if (uParam0->f_492.f_68 == 2)
		{
			if (__LIB_9__::func_444())
			{
				return 1;
			}
		}
		if (uParam0->f_492.f_68 == 3)
		{
			if (__LIB_9__::func_444())
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_492.f_68 == 1)
		{
			if (__LIB_38__::func_264())
			{
				if ((__LIB_6__::func_554() && __LIB_7__::func_384()) || __LIB_9__::func_689())
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
		if (uParam0->f_492.f_68 == 2)
		{
			if (__LIB_38__::func_263() && !__LIB_9__::func_920())
			{
				return 1;
			}
		}
	}
	if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		if (Global_1581359 == 1)
		{
			if ((__LIB_6__::func_529() || __LIB_9__::func_689()) || !__LIB_38__::func_252(Global_1853194))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else if (Global_1581359 == 2)
		{
			if ((__LIB_6__::func_526() || __LIB_9__::func_689()) || !__LIB_38__::func_252(Global_1853194))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (__LIB_38__::func_262())
	{
		return 1;
	}
	return 0;
}

void func_552(var uParam0)//Position - 0x5E281
{
	if (uParam0->f_492.f_68 == 1 && (uParam0->f_252 == 151 || uParam0->f_252 == 152))
	{
		if (!__LIB_6__::func_838())
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 191 /*INPUT_FRONTEND_RDOWN*/, true);
		}
	}
	if (uParam0->f_492.f_68 == 2 && (uParam0->f_252 == 151 || uParam0->f_252 == 152))
	{
		if (!__LIB_6__::func_840())
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 191 /*INPUT_FRONTEND_RDOWN*/, true);
		}
	}
	if (uParam0->f_492.f_68 == 3 && (uParam0->f_252 == 151 || uParam0->f_252 == 152))
	{
		if (!__LIB_6__::func_839())
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 191 /*INPUT_FRONTEND_RDOWN*/, true);
		}
	}
	if (Global_1581350 != -1)
	{
		if (__LIB_3__::func_171(Global_1853185))
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true);
		}
	}
}

void func_553(var uParam0)//Position - 0x5E343
{
	if (uParam0->f_258 > 6)
	{
		if (uParam0->f_488)
		{
			__LIB_0__::func_646();
		}
	}
}

void func_554(var uParam0)//Position - 0x5E360
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_469[iVar0], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_469[iVar0]))
				{
					iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_469[iVar0]);
					iVar2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
					iVar3 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (INTERIOR::IS_VALID_INTERIOR(iVar2))
					{
						if (iVar2 != iVar1)
						{
							if (iVar3 != 0)
							{
								INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_469[iVar0], iVar2, iVar3);
							}
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_14.f_24[iVar4 /*52*/].f_8, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14.f_24[iVar4 /*52*/].f_8))
				{
					iVar5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_14.f_24[iVar4 /*52*/].f_8);
					iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
					iVar7 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (INTERIOR::IS_VALID_INTERIOR(iVar6))
					{
						if (iVar6 != iVar5)
						{
							if (iVar7 != 0)
							{
								INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_14.f_24[iVar4 /*52*/].f_8, iVar6, iVar7);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_555(var uParam0)//Position - 0x5E4C6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_333[iVar0]))
		{
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam0->f_333[iVar0]);
		}
		iVar0++;
	}
}

void func_556(var uParam0)//Position - 0x5E4FD
{
	if (uParam0->f_252 == -1)
	{
		uParam0->f_252 = uParam0->f_492.f_5;
	}
}

void func_557(var uParam0, var uParam1)//Position - 0x5E518
{
	uParam0->f_252 = uParam1->f_5;
	Global_1835501 = uParam0->f_252;
	uParam0->f_492 = { *uParam1 };
	uParam0->f_492.f_7 = 1;
	uParam0->f_492.f_1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
	func_564(uParam0, &(uParam0->f_492));
	if (!uParam0->f_335)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, uParam1->f_9);
	}
	func_563(uParam0, uParam1->f_22);
	func_562(uParam0, &(uParam1->f_16));
	func_560(uParam0, uParam1);
	if (!uParam0->f_335)
	{
		__LIB_0__::func_895(0, -1, 0);
	}
}

void func_560(var uParam0, var uParam1)//Position - 0x5E6CD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(uParam1->f_46[iVar0 /*3*/]) && !__LIB_0__::func_86(uParam1->f_53[iVar0 /*3*/]))
		{
			uParam0->f_261[iVar0 /*13*/] = { uParam1->f_46[iVar0 /*3*/] };
			uParam0->f_261[iVar0 /*13*/].f_3 = { uParam1->f_53[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_562(var uParam0, var uParam1)//Position - 0x5E763
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_469)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			uParam0->f_469[iVar0] = (*uParam1)[iVar0];
		}
		iVar0++;
	}
}

void func_563(var uParam0, var[] uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x5E79D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_321)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1[iVar0]))
		{
			uParam0->f_321[iVar0 /*9*/].f_8 = uParam1[iVar0];
		}
		iVar0++;
	}
}

void func_564(var uParam0, var uParam1)//Position - 0x5E7D9
{
	func_5128(uParam0, uParam1);
	if (__LIB_0__::func_845(uParam1->f_1, 91))
	{
		switch (uParam0->f_252)
		{
			case 89:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { -1025.4208f, -218.4773f, 36.9267f };
				uParam0->f_261[0 /*13*/].f_3 = { -1024.5679f, -218.8955f, 38.7449f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_319 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 89;
				break;
			case 90:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1122.7527f, -3145.8926f, -38.0723f };
				uParam0->f_261[0 /*13*/].f_3 = { 1122.7418f, -3144.9429f, -36.254f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_475 = 1;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
				uParam0->f_319 = 2;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 90;
				break;
			case 92:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1117.5385f, -3158.6226f, -38.06276f };
				uParam0->f_261[0 /*13*/].f_3 = { 1116.6957f, -3159.3025f, -36.562756f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_475 = 1;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
				uParam0->f_319 = 2;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 92;
				break;
			case 93:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
				uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_475 = 1;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("p_whiskey_bottle_s");
				uParam0->f_319 = 1;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 93;
				break;
			case 26:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "MPYACHT_LEAN" /* GXT: Press ~INPUT_CONTEXT~ to lean on the rail. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
				uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_319 = 3;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 26;
				break;
			case 27:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "MPYACHT_LEAN" /* GXT: Press ~INPUT_CONTEXT~ to lean on the rail. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1110.7766f, -3158.928f, -38.062767f };
				uParam0->f_261[0 /*13*/].f_3 = { 1112.2003f, -3158.9182f, -36.312767f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_319 = 3;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 27;
				break;
			case 28:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "MPYACHT_LEAN" /* GXT: Press ~INPUT_CONTEXT~ to lean on the rail. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1110.6273f, -3154.9634f, -38.062767f };
				uParam0->f_261[0 /*13*/].f_3 = { 1111.8989f, -3154.9497f, -36.312767f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_319 = 3;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 28;
				break;
			case 4:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_BONG2" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from the bong. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1124.2375f, -3143.6975f, -38.062782f };
				uParam0->f_261[0 /*13*/].f_3 = { 1123.2501f, -3143.6838f, -36.562782f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_USE_BONG";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("prop_bong_01");
				uParam0->f_319 = 1;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_488 = 1;
				uParam0->f_252 = 4;
				break;
			default:
				uParam0->f_252 = -1;
				break;
			}
	}
	if (__LIB_0__::func_845(uParam1->f_1, 97))
	{
		switch (uParam0->f_252)
		{
			case 90:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 999.2708f, -3168.6106f, -35.092f };
				uParam0->f_261[0 /*13*/].f_3 = { 998.3392f, -3168.4253f, -33.2738f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_475 = 1;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
				uParam0->f_319 = 2;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 90;
				break;
			case 4:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_BONG2" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from the bong. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1009.1285f, -3166.8862f, -35.0576f };
				uParam0->f_261[0 /*13*/].f_3 = { 1009.279f, -3165.9983f, -33.0576f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_USE_BONG";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("prop_bong_01");
				uParam0->f_319 = 1;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_488 = 1;
				uParam0->f_252 = 4;
				break;
			case 93:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 1010.6907f, -3167.4175f, -35.082565f };
				uParam0->f_261[0 /*13*/].f_3 = { 1011.75543f, -3167.497f, -33.332565f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("p_whiskey_bottle_s");
				uParam0->f_319 = 1;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 93;
				break;
			case 91:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 997.4754f, -3167.1558f, -35.092f };
				uParam0->f_261[0 /*13*/].f_3 = { 997.634f, -3166.2192f, -33.2738f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
				uParam0->f_319 = 2;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 91;
				break;
			case 92:
				uParam0->f_303 = 1668553/*func_5126*/;
				uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
				uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
				uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
				uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
				uParam0->f_261.f_27 = 2;
				uParam0->f_261.f_27.f_1 = 51;
				uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
				uParam0->f_261[0 /*13*/] = { 997.9446f, -3166.966f, -34.84343f };
				uParam0->f_261[0 /*13*/].f_3 = { 997.8281f, -3166.107f, -33.32248f };
				uParam0->f_261[0 /*13*/].f_6 = 1f;
				uParam0->f_486 = 1;
				uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
				uParam0->f_308.f_4.f_2 = 0.05f;
				uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
				uParam0->f_306 = 1668064/*func_5122*/;
				uParam0->f_259 = uParam1->f_1;
				uParam0->f_305 = 1667344/*func_5120*/;
				uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_253.f_2 = 1;
				uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
				uParam0->f_319 = 2;
				uParam0->f_320 = 0;
				uParam0->f_474 = 0;
				uParam0->f_252 = 92;
				break;
			default:
				uParam0->f_252 = -1;
				break;
			}
	}
	switch (uParam0->f_252)
	{
		case 154:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_475 = 1;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_319 = 1;
			uParam0->f_320 = 0;
			uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			uParam0->f_253.f_2 = 1;
			uParam0->f_331[0] = joaat("p_whiskey_bottle_s");
			uParam0->f_474 = 0;
			uParam0->f_252 = 154;
			break;
		case 165:
			uParam0->f_486 = 0;
			uParam0->f_303 = 1667324/*func_5119*/;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_305 = 1664462/*func_5096*/;
			uParam0->f_319 = 1;
			uParam0->f_320 = 0;
			uParam0->f_336[0 /*66*/] = joaat("MP_M_Cocaine_01");
			uParam0->f_474 = 0;
			break;
		case 166:
			uParam0->f_486 = 0;
			uParam0->f_303 = 1667324/*func_5119*/;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_305 = 1664462/*func_5096*/;
			uParam0->f_319 = 1;
			uParam0->f_320 = 0;
			uParam0->f_336[0 /*66*/] = joaat("MP_G_M_Pros_01");
			uParam0->f_474 = 0;
			break;
		case 167:
			uParam0->f_486 = 0;
			uParam0->f_303 = 1667324/*func_5119*/;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_305 = 1664462/*func_5096*/;
			uParam0->f_319 = 1;
			uParam0->f_320 = 3;
			uParam0->f_336[0 /*66*/] = joaat("MP_G_M_Pros_01");
			uParam0->f_474 = 0;
			uParam0->f_335 = 1;
			uParam0->f_569 = 1;
			uParam1->f_67 = uParam0->f_335;
			break;
		case 4:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_BONG2" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from the bong. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1006.6099f, -3164.746f, -35.0921f };
			uParam0->f_261[0 /*13*/].f_3 = { 1006.7067f, -3165.691f, -33.2738f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_475 = 1;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_USE_BONG";
			uParam0->f_253.f_2 = 1;
			uParam0->f_331[0] = joaat("prop_bong_01");
			uParam0->f_319 = 1;
			uParam0->f_320 = 0;
			uParam0->f_474 = 0;
			uParam0->f_488 = 1;
			uParam0->f_252 = 4;
			break;
		case 92:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 997.9446f, -3166.966f, -34.84343f };
			uParam0->f_261[0 /*13*/].f_3 = { 997.8281f, -3166.107f, -33.32248f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			uParam0->f_253.f_2 = 1;
			uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
			uParam0->f_319 = 2;
			uParam0->f_320 = 0;
			uParam0->f_474 = 0;
			uParam0->f_252 = 92;
			break;
		case 88:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { -1498.4894f, -381.65652f, 39.526276f };
			uParam0->f_261[0 /*13*/].f_3 = { -1497.2622f, -383.1823f, 41.83136f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_319 = 0;
			uParam0->f_474 = 0;
			uParam0->f_252 = 88;
			break;
		case 89:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { -1025.4208f, -218.4773f, 36.9267f };
			uParam0->f_261[0 /*13*/].f_3 = { -1024.5679f, -218.8955f, 38.7449f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_319 = 0;
			uParam0->f_474 = 0;
			uParam0->f_252 = 89;
			break;
		case 90:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1122.7527f, -3145.8926f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1122.7418f, -3144.9429f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_475 = 1;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			uParam0->f_253.f_2 = 1;
			uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
			uParam0->f_319 = 2;
			uParam0->f_320 = 0;
			uParam0->f_474 = 0;
			uParam0->f_252 = 90;
			break;
		case 91:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1115.7933f, -3154.993f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1116.7424f, -3155.029f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_475 = 1;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			uParam0->f_253.f_2 = 1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
			uParam0->f_319 = 2;
			uParam0->f_320 = 0;
			uParam0->f_474 = 0;
			uParam0->f_252 = 91;
			break;
		case 93:
			uParam0->f_303 = 1668553/*func_5126*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_486 = 1;
			uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
			uParam0->f_308.f_4.f_2 = 0.05f;
			uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
			uParam0->f_475 = 1;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			uParam0->f_253.f_2 = 1;
			uParam0->f_331[0] = joaat("p_whiskey_bottle_s");
			uParam0->f_319 = 1;
			uParam0->f_320 = 0;
			uParam0->f_474 = 0;
			uParam0->f_252 = 93;
			break;
		case 94:
			uParam0->f_486 = 0;
			uParam0->f_303 = 1667324/*func_5119*/;
			uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
			uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
			uParam0->f_261.f_31.f_2 = "MPYACHT_LEAN" /* GXT: Press ~INPUT_CONTEXT~ to lean on the rail. */;
			uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
			uParam0->f_261.f_27 = 2;
			uParam0->f_261.f_27.f_1 = 51;
			uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
			uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
			uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
			uParam0->f_261[0 /*13*/].f_6 = 1f;
			uParam0->f_306 = 1668064/*func_5122*/;
			uParam0->f_259 = uParam1->f_1;
			uParam0->f_305 = 1667344/*func_5120*/;
			uParam0->f_336[0 /*66*/] = joaat("MP_F_BoatStaff_01");
			uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
			uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
			uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
			uParam0->f_335 = 0;
			uParam0->f_336[0 /*66*/].f_64 = "anim@mini@yacht@bar@drink@IDLE_A";
			uParam0->f_336[0 /*66*/].f_65 = "IDLE_A_BARTENDER";
			StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
			uParam0->f_319 = 5;
			uParam0->f_320 = 0;
			uParam0->f_474 = 0;
			uParam0->f_252 = 94;
			break;
		case 26:
			func_5095(uParam0);
			break;
		case 27:
			func_5094(uParam0);
			break;
		case 95:
			func_5093(uParam0);
			break;
		case 96:
			func_5092(uParam0);
			break;
		case 97:
			func_5091(uParam0);
			break;
		case 126:
			func_5090(uParam0);
			break;
		case 98:
			func_5089(uParam0);
			break;
		case 101:
			func_5086(uParam0);
			break;
		case 114:
			func_5085(uParam0);
			break;
		case 102:
			func_5084(uParam0);
			break;
		case 103:
			func_5083(uParam0);
			break;
		case 104:
			func_5082(uParam0);
			break;
		case 105:
			func_5081(uParam0);
			break;
		case 122:
			func_5080(uParam0);
			break;
		case 123:
			func_5079(uParam0);
			break;
		case 111:
			func_5078(uParam0);
			break;
		case 110:
			func_5077(uParam0);
			break;
		case 106:
			func_5076(uParam0);
			break;
		case 107:
			func_5075(uParam0);
			break;
		case 108:
			func_5074(uParam0);
			break;
		case 112:
			func_5073(uParam0);
			break;
		case 113:
			func_5072(uParam0);
			break;
		case 116:
			func_5071(uParam0);
			break;
		case 115:
			func_5070(uParam0);
			break;
		case 119:
			func_5069(uParam0);
			break;
		case 120:
			func_5068(uParam0);
			break;
		case 118:
			func_5067(uParam0);
			break;
		case 117:
			func_5066(uParam0);
			break;
		case 121:
			func_5065(uParam0);
			break;
		case 124:
		case 125:
		case 182:
			func_5064(uParam0);
			break;
		case 127:
			func_5063(uParam0);
			break;
		case 128:
			func_5062(uParam0);
			break;
		case 129:
			func_5061(uParam0);
			break;
		case 130:
			func_5060(uParam0, uParam1);
			break;
		case 131:
			func_5059(uParam0);
			break;
		case 132:
			func_5058(uParam0);
			break;
		case 133:
			func_5057(uParam0);
			break;
		case 134:
		case 137:
		case 138:
		case 139:
			func_5056(uParam0);
			break;
		case 135:
			func_5056(uParam0);
			break;
		case 136:
			func_5055(uParam0);
			break;
		case 144:
			func_5054(uParam0);
			break;
		case 146:
			func_5053(uParam0);
			break;
		case 145:
			func_5052(uParam0);
			break;
		case 140:
			func_5051(uParam0);
			break;
		case 143:
			func_5050(uParam0);
			break;
		case 141:
			func_5049(uParam0);
			break;
		case 147:
			func_5048(uParam0);
			break;
		case 148:
			func_5047(uParam0);
			break;
		case 149:
			func_5046(uParam0);
			break;
		case 153:
			func_5044(uParam0);
			break;
		case 155:
			func_5043(uParam0);
			break;
		case 156:
			func_5042(uParam0);
			break;
		case 157:
			func_5041(uParam0);
			break;
		case 158:
			func_5040(uParam0, 0);
			break;
		case 160:
			func_5040(uParam0, 1);
			break;
		case 159:
			func_5039(uParam0, 0);
			break;
		case 161:
			func_5039(uParam0, 1);
			break;
		case 162:
			func_5038(uParam0);
			break;
		case 163:
			func_5037(uParam0);
			break;
		case 168:
			func_5036(uParam0);
			break;
		case 169:
			func_5035(uParam0);
			break;
		case 170:
			func_5034(uParam0);
			break;
		case 171:
			func_5033(uParam0);
			break;
		case 176:
			func_5032(uParam0);
			break;
		case 172:
			func_5031(uParam0);
			break;
		case 173:
			func_5030(uParam0);
			break;
		case 174:
			func_5029(uParam0);
			break;
		case 175:
			func_5028(uParam0);
			break;
		case 177:
			func_5027(uParam0);
			break;
		case 178:
			func_5026(uParam0);
			break;
		case 151:
		case 185:
			func_5024(uParam0, *uParam1);
			break;
		case 152:
			func_5019(uParam0, *uParam1);
			break;
		case 179:
			func_5018(uParam0, uParam1);
			break;
		case 183:
			func_5017(uParam0, uParam1);
			break;
		case 181:
			func_5016(uParam0, *uParam1);
			break;
		case 180:
			func_5012(uParam0, *uParam1);
			break;
		case 190:
			func_5009(uParam0, *uParam1);
			break;
		case 191:
			func_5007(uParam0, *uParam1);
			break;
		case 150:
			func_5006(uParam0);
			break;
		case 10:
			func_5005(uParam0, *uParam1);
			break;
		case 201:
			func_5004(uParam0, *uParam1);
			break;
		case 202:
			func_5003(uParam0, *uParam1);
			break;
		case 203:
			func_5002(uParam0, *uParam1);
			break;
		case 205:
			func_5001(uParam0, *uParam1);
			break;
		case 204:
			func_5000(uParam0, *uParam1);
			break;
		case 184:
			func_4998(uParam0, *uParam1);
			break;
		case 187:
			func_4995(uParam0, *uParam1);
			break;
		case 188:
			func_4994(uParam0, *uParam1);
			break;
		case 189:
			func_4993(uParam0, *uParam1);
			break;
		case 192:
			func_4992(uParam0, *uParam1);
			break;
		case 193:
			func_4991(uParam0, *uParam1);
			break;
		case 194:
			func_4990(uParam0, *uParam1);
			break;
		case 195:
			func_4989(uParam0, *uParam1);
			break;
		case 196:
			func_4988(uParam0, *uParam1);
			break;
		case 197:
			func_4987(uParam0, *uParam1);
			break;
		case 198:
			func_4986(uParam0, *uParam1);
			break;
		case 8:
			func_594(uParam0, *uParam1);
			break;
		case 11:
			func_592(uParam0, *uParam1);
			break;
		case 12:
			func_590(uParam0, *uParam1);
			break;
		case 13:
			func_589(uParam0, *uParam1);
			break;
		case 14:
			func_586(uParam0, *uParam1);
			break;
		case 186:
			func_584(uParam0, *uParam1);
			break;
		case 199:
			func_582(uParam0, *uParam1);
			break;
		case 200:
			func_565(uParam0, *uParam1);
			break;
		default:
			uParam0->f_252 = -1;
			break;
	}
	uParam1->f_67 = uParam0->f_335;
}

void func_565(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x608B5
{
	uParam0->f_303 = 397015/*func_574*/;
	uParam0->f_261.f_38 = 396029/*__LIB_10__::func_145*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_39 = 395809/*__LIB_10__::func_120*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1557.954f, 388.4095f, -50.685425f };
	uParam0->f_261[0 /*13*/].f_3 = { 1559.5701f, 388.44046f, -48.68543f };
	uParam0->f_261[1 /*13*/] = { 1559.4874f, 389.33136f, -50.6855f };
	uParam0->f_261[1 /*13*/].f_3 = { 1557.9717f, 389.30627f, -48.6855f };
	uParam0->f_261[0 /*13*/].f_6 = 0.9f;
	uParam0->f_261[1 /*13*/].f_6 = 0.75f;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 24.922f;
	uParam0->f_261[1 /*13*/].f_10.f_2 = 130.6346f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.3f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("h4_int_lev_sub_chair_02");
	uParam0->f_474 = 0;
	uParam0->f_252 = 200;
	uParam0->f_490 = 1;
}

int func_574(var uParam0, var uParam1, var uParam2)//Position - 0x60ED7
{
	bool bVar0;
	int iVar1;
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_181));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (__LIB_9__::func_365())
		{
			Global_1931614 = 1;
			bVar0 = true;
			if (__LIB_10__::func_48() || __LIB_10__::func_42())
			{
				bVar0 = false;
			}
			if (__LIB_10__::func_40(uParam0[uParam2->f_181 /*13*/], 1))
			{
				if (__LIB_9__::func_443() && __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), (uParam0[uParam2->f_181 /*13*/])->f_10.f_2, 55f))
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == uParam2->f_181)
						{
						}
						else if (!__LIB_10__::func_40(uParam0[iVar1 /*13*/], 0))
						{
							bVar0 = false;
						}
						iVar1++;
					}
					if (bVar0)
					{
						if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
						{
							HUD::CLEAR_HELP(true);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_266(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
						{
							__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
						}
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
				{
					__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (Global_1931614 == 1)
	{
		Global_1931614 = 0;
		if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_6__::func_514(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_582(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x612EF
{
	uParam0->f_303 = 397015/*func_574*/;
	uParam0->f_261.f_38 = 396029/*__LIB_10__::func_145*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_39 = 398427/*__LIB_10__::func_78*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1559.6062f, 386.68912f, -50.685444f };
	uParam0->f_261[0 /*13*/].f_3 = { 1558.0054f, 386.65323f, -48.68544f };
	uParam0->f_261[1 /*13*/] = { 1559.579f, 387.54214f, -50.685368f };
	uParam0->f_261[1 /*13*/].f_3 = { 1557.988f, 387.4932f, -48.685364f };
	uParam0->f_261[0 /*13*/].f_6 = 0.75f;
	uParam0->f_261[1 /*13*/].f_6 = 0.75f;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 24.922f;
	uParam0->f_261[1 /*13*/].f_10.f_2 = 130.6346f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.3f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("h4_int_lev_sub_chair_02");
	uParam0->f_474 = 0;
	uParam0->f_252 = 199;
	uParam0->f_490 = 1;
}

void func_584(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x61496
{
	uParam0->f_303 = 398654/*func_585*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "BROWSEINPUTTRIG" /* GXT: Press ~INPUT_CONTEXT~ to browse the internet on this computer. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_320 = 0;
	uParam0->f_319 = 2;
}

int func_585(var uParam0, var uParam1, var uParam2)//Position - 0x6153E
{
	bool bVar0;
	int iVar1;
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_181));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (__LIB_9__::func_365())
		{
			if (!Global_32230)
			{
				Global_1931614 = 1;
				bVar0 = true;
				if (Global_1853191 == PLAYER::PLAYER_ID())
				{
					if (__LIB_10__::func_40(uParam0[uParam2->f_181 /*13*/], 1))
					{
						if (__LIB_9__::func_443())
						{
							iVar1 = 0;
							iVar1 = 0;
							while (iVar1 < 2)
							{
								if (iVar1 == uParam2->f_181)
								{
								}
								else if (!__LIB_10__::func_40(uParam0[iVar1 /*13*/], 0))
								{
									bVar0 = false;
								}
								iVar1++;
							}
							if (bVar0)
							{
								if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
								{
									HUD::CLEAR_HELP(true);
								}
								Stack.Push(&(uParam0->f_31));
								Call_Loc(uParam0->f_38);
								func_266(*uParam1, uParam2);
								Stack.Push(uParam0->f_27);
								Call_Loc(uParam0->f_39);
								if (StackVal)
								{
									Stack.Push(&(uParam0->f_31));
									Call_Loc(uParam0->f_41);
									return 1;
								}
							}
							else
							{
								if (__LIB_0__::func_1(uParam0->f_31.f_2))
								{
									HUD::CLEAR_HELP(true);
								}
								if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
								{
									__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
								}
							}
						}
						else if (__LIB_0__::func_1(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					else
					{
						if (__LIB_0__::func_1(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
						{
							__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
						}
					}
				}
			}
			else
			{
				if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
				{
					HUD::CLEAR_HELP(true);
				}
				if (__LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
				if (__LIB_0__::func_1("POD_ACT_OWN" /* GXT: Only the property owner may use this activity. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_1(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_1("POD_ACT_OWN" /* GXT: Only the property owner may use this activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (Global_1931614 == 1)
	{
		Global_1931614 = 0;
		if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("POD_ACT_OWN" /* GXT: Only the property owner may use this activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_6__::func_514(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_586(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x61728
{
	uParam0->f_303 = 399537/*func_588*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 399421/*__LIB_6__::func_574*/;
	if (Global_1946250.f_4587)
	{
		if (__LIB_6__::func_573(PLAYER::PLAYER_ID()))
		{
			uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT2" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to brighten the Lights. */;
		}
		else
		{
			uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT4" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to dim the lights. */;
		}
	}
	else if (__LIB_6__::func_573(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to brighten the Lights. */;
	}
	else
	{
		uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT3" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to dim the lights. */;
	}
	uParam0->f_307 = 375291/*func_477*/;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 52;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 270f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_320 = 0;
	uParam0->f_319 = 1;
}

int func_588(var uParam0, var uParam1, var uParam2)//Position - 0x618B1
{
	bool bVar0;
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_181));
	Call_Loc(uParam0->f_40);
	if (StackVal && ((uParam0[uParam2->f_181 /*13*/])->f_10.f_2 == -1f || __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), (uParam0[uParam2->f_181 /*13*/])->f_10.f_2, 45f)))
	{
		if (__LIB_9__::func_365())
		{
			Global_1931614 = 1;
			bVar0 = true;
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == PLAYER::PLAYER_ID())
			{
				if (__LIB_9__::func_443())
				{
					if (bVar0)
					{
						if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
						{
							HUD::CLEAR_HELP(true);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_266(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (__LIB_0__::func_1(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
						{
							__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
						}
					}
				}
				else if (__LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_1(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_1("POD_ACT_OWN" /* GXT: Only the property owner may use this activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (Global_1931614 == 1)
	{
		Global_1931614 = 0;
		if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_1("POD_ACT_OWN" /* GXT: Only the property owner may use this activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_6__::func_514(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_589(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x61A2A
{
	uParam0->f_303 = 399537/*func_588*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 399421/*__LIB_6__::func_574*/;
	if (Global_1946250.f_4587)
	{
		if (__LIB_6__::func_573(PLAYER::PLAYER_ID()))
		{
			uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT2" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to brighten the Lights. */;
		}
		else
		{
			uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT4" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to dim the lights. */;
		}
	}
	else if (__LIB_6__::func_573(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to brighten the Lights. */;
	}
	else
	{
		uParam0->f_261.f_31.f_2 = "FROSTLIGHT_PMT3" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass.~n~Press ~INPUT_CONTEXT_SECONDARY~ to dim the lights. */;
	}
	uParam0->f_307 = 375148/*func_475*/;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 270f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_320 = 0;
	uParam0->f_319 = 1;
}

void func_590(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x61B3F
{
	uParam0->f_303 = 399537/*func_588*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	if (Global_1946250.f_4544)
	{
		uParam0->f_261.f_31.f_2 = "MPFROST_PMT2" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass. */;
	}
	else
	{
		uParam0->f_261.f_31.f_2 = "MPFROST_PMT" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass. */;
	}
	uParam0->f_307 = 400408/*func_591*/;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261[0 /*13*/].f_10.f_2 = -1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_320 = 0;
	uParam0->f_319 = 1;
}

void func_591(var uParam0)//Position - 0x61C18
{
	if (BitTest(uParam0->f_182, 1) && !BitTest(uParam0->f_182, 2))
	{
		MISC::SET_BIT(&(uParam0->f_182), 2);
		if (Global_1946250.f_4544)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", 372.115f, 4827.504f, -58.47f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", 372.115f, 4827.504f, -58.47f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
	}
}

void func_592(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x61C8D
{
	uParam0->f_303 = 399537/*func_588*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	if (Global_1946250.f_4543)
	{
		uParam0->f_261.f_31.f_2 = "MPFROST_PMT2" /* GXT: Press ~INPUT_CONTEXT~ to deactivate Privacy Glass. */;
	}
	else
	{
		uParam0->f_261.f_31.f_2 = "MPFROST_PMT" /* GXT: Press ~INPUT_CONTEXT~ to activate Privacy Glass. */;
	}
	uParam0->f_307 = 400742/*func_593*/;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261[0 /*13*/].f_10.f_2 = -1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.35f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_320 = 0;
	uParam0->f_319 = 1;
}

void func_593(var uParam0)//Position - 0x61D66
{
	if (BitTest(uParam0->f_182, 1) && !BitTest(uParam0->f_182, 2))
	{
		MISC::SET_BIT(&(uParam0->f_182), 2);
		if (Global_1946250.f_4543)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", 367.317f, 4846.754f, -58.448f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", 367.317f, 4846.754f, -58.448f, "dlc_xm_facility_ambient_sounds", false, 0, false);
		}
	}
}

void func_594(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x61DDB
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_WINE" /* GXT: Press ~INPUT_CONTEXT~ to drink some wine. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("prop_wine_bot_01");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_252 = 8;
	if (__LIB_4__::func_899(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = 40f;
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = func_595(3.96051f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
}

float func_595(float fParam0, int iParam1)//Position - 0x61F39
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_596(iParam1, &uVar2, &uVar0, &fVar1, 0);
	fVar3 = (fParam0 + fVar1);
	while (fVar3 < 0f)
	{
		fVar3 = (fVar3 + 360f);
	}
	while (fVar3 >= 360f)
	{
		fVar3 = (fVar3 - 360f);
	}
	return fVar3;
}

void func_596(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x61F83
{
	struct<31> Var0;
	func_597(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_597(int iParam0, var uParam1, int iParam2)//Position - 0x61FA3
{
	func_4978(uParam1, iParam2);
	func_4972(uParam1, iParam2);
	func_4964(uParam1, iParam2);
	func_598(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_598(int iParam0, var uParam1, int iParam2)//Position - 0x61FD1
{
	switch (iParam0)
	{
		case 0:
			func_4891(uParam1, iParam2);
			break;
		case 1:
			func_4758(uParam1, iParam2);
			break;
		case 2:
			func_4681(uParam1, iParam2);
			break;
		case 3:
			func_4603(uParam1, iParam2);
			break;
		case 4:
			func_4429(uParam1, iParam2);
			break;
		case 5:
			func_4264(uParam1, iParam2);
			break;
		case 6:
			func_4200(uParam1, iParam2);
			break;
		case 7:
			func_4033(uParam1, iParam2);
			break;
		case 8:
			func_3864(uParam1, iParam2);
			break;
		case 9:
			func_3621(uParam1, iParam2);
			break;
		case 10:
			func_3543(uParam1, iParam2);
			break;
		case 11:
			func_3316(uParam1, iParam2);
			break;
		case 12:
			func_3175(uParam1, iParam2);
			break;
		case 13:
			func_3007(uParam1, iParam2);
			break;
		case 14:
			func_2833(uParam1, iParam2);
			break;
		case 15:
			func_2655(uParam1, iParam2);
			break;
		case 16:
			func_2545(uParam1, iParam2);
			break;
		case 17:
			func_2288(uParam1, iParam2);
			break;
		case 18:
			func_2194(uParam1, iParam2);
			break;
		case 19:
			func_2070(uParam1, iParam2);
			break;
		case 20:
			func_1746(uParam1, iParam2);
			break;
		case 21:
			func_1624(uParam1, iParam2);
			break;
		case 22:
			func_1452(uParam1, iParam2);
			break;
		case 23:
			func_1232(uParam1, iParam2);
			break;
		case 24:
			func_599(uParam1, iParam2);
			break;
	}
}

void func_599(var uParam0, int iParam1)//Position - 0x62189
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 581554/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 581540/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 581442/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 580079/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 579850/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 579837/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 579827/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 579628/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 579580/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 579551/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 579242/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 579233/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 576565/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 576556/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 569735/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 568860/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 568743/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 568687/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 568534/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 568385/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 568303/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 566530/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 565333/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 508470/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 506752/*__LIB_9__::func_260*/;
			break;
		case 19:
			uParam0->f_17 = 506600/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 506575/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 506355/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 504914/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 504724/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 503389/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 503267/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 503220/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 503183/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 503175/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 500188/*func_962*/;
			break;
		case 27:
			uParam0->f_25 = 500180/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 500172/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 500022/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 499792/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 498799/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 498744/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 498733/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 494981/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 494936/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 473933/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 473924/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 473915/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 473907/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 473884/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 473838/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 473695/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 472552/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 472534/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 472185/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 472083/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 472072/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 471946/*func_912*/;
			break;
		case 54:
			uParam0->f_45 = 471556/*func_911*/;
			break;
		case 56:
			uParam0->f_46 = 471537/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 470293/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 470167/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 468504/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 468495/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 468484/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 468358/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 468350/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 468336/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 468328/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 466784/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 466088/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 465948/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 464814/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 464805/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 464793/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 464784/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 464772/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 464286/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 464277/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 422609/*func_744*/;
			break;
		case 87:
			uParam0->f_1 = 418754/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 418745/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 418737/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 417836/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 417802/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 415873/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 413887/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 410154/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 410145/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 410136/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 410127/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 410119/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 410111/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 409997/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 409843/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 409170/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 409161/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 409152/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 404736/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 404727/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 404600/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 404545/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 403613/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 403604/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 403596/*__LIB_0__::func_467*/;
			break;
	}
}

int func_744(int iParam0, var uParam1)//Position - 0x672D1
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_759(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_753(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_753(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x67A48
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_754(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_754(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x67BAA
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_494(*uParam0);
		if (func_756(iParam1) || __LIB_1__::func_554(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_756(int iParam0)//Position - 0x67D09
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_167(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_759(int iParam0, var uParam1, int iParam2)//Position - 0x67DF7
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_703(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_10__::func_151(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_9__::func_494(*iParam0, &Var0);
			__LIB_9__::func_984(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_495(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_867(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_703(iParam2, 32))
			{
				func_753(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_11__::func_56(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_703(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_703(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_911(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x73204
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)) && __LIB_3__::func_649(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_649(iVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(iVar1) };
						if (__LIB_0__::func_800(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_912(int iParam0)//Position - 0x7338A
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_962(int iParam0, int iParam1)//Position - 0x7A1DC
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_6__::func_934(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_973(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_3__::func_664(0);
			}
			else
			{
				__LIB_3__::func_664(1);
			}
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_49(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_3__::func_494(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_973(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x7A83A
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_1__::func_526())
	{
		iVar0 = __LIB_3__::func_680();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_679(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = iVar4;
		if (iVar2 == iVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[iVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(iVar5) };
						bVar8 = false;
						if (__LIB_3__::func_678(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_3__::func_106(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_974(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_974(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_974(bool bParam0)//Position - 0x7AA75
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_1232(var uParam0, int iParam1)//Position - 0x8DFBB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 638187/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 638178/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 638098/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 637457/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 637191/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 637178/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 637079/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 636941/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 636893/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 636858/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 636739/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 636710/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 636700/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 634549/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 634540/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 631923/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 631915/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 631906/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 631897/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 631835/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 631754/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 631401/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 626967/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 625797/*__LIB_9__::func_261*/;
			break;
		case 19:
			uParam0->f_17 = 625770/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 625761/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 625630/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 625526/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 625510/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 625354/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 625346/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 617389/*func_1355*/;
			break;
		case 25:
			uParam0->f_23 = 616340/*func_1351*/;
			break;
		case 27:
			uParam0->f_25 = 616124/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 616083/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 616060/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 615301/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 615271/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 615157/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 615039/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 614990/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 606073/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 606025/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 594937/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 594928/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 594919/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 594911/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 594900/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 594774/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 593889/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 593880/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 593711/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 593702/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 593691/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 593668/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 593619/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 593601/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 593559/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 593517/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 593388/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 593379/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 593368/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 593345/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 593336/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 593294/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 593286/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 593278/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 593007/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 592937/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 592265/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 592256/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 592244/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 592024/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 592012/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 591517/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 591402/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 590498/*func_1275*/;
			break;
		case 87:
			uParam0->f_1 = 587865/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 587856/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 587848/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 587839/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 587830/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 587821/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 587813/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 587805/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 587770/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 587761/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 585823/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 585814/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 585805/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 584585/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 584503/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 584486/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 584454/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 583238/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 583229/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 583221/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1275(int iParam0, var uParam1)//Position - 0x902A2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_759(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_753(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1351(int iParam0, int iParam1)//Position - 0x96794
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_3__::func_616();
	iVar4 = 0;
	Var5 = { __LIB_3__::func_780(iVar3) };
	func_973(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_5__::func_189(iParam1, 0, 1);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				if (__LIB_3__::func_661(0, iParam1))
				{
					__LIB_3__::func_664(1);
				}
				break;
			default:
				__LIB_5__::func_189(iParam1, 0, !bVar2);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				__LIB_3__::func_664(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_5__::func_189(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_863(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_863(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1355(var uParam0, var uParam1)//Position - 0x96BAD
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (!__LIB_5__::func_797() && iVar0 != 1)
	{
		__LIB_3__::func_784(1);
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_49(uParam0, uParam1);
			break;
		case 1:
			func_1356(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1356(var uParam0, var uParam1)//Position - 0x96C03
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_5__::func_208();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_5__::func_207(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_3__::func_785() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_5__::func_462();
				if (bVar2)
				{
					__LIB_3__::func_664(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_5__::func_202(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_5__::func_207(iVar8);
		if (__LIB_3__::func_782(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_3__::func_566(1, sVar6, sVar6);
		__LIB_5__::func_270();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_10__::func_18(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_5__::func_462();
			if (bVar2)
			{
				__LIB_3__::func_664(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_5__::func_202(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_8__::func_958(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_5__::func_797();
		__LIB_5__::func_462();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_1452(var uParam0, int iParam1)//Position - 0x9BCF4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 678786/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 678772/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 678680/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 678456/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 678299/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 678286/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 678276/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 678155/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 678107/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 678078/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 677990/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 677981/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 676236/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 676227/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 672089/*func_1600*/;
			break;
		case 8:
			uParam0->f_37 = 671611/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 671517/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 671508/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 671446/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 671365/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 670467/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 667187/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 665912/*__LIB_9__::func_263*/;
			break;
		case 19:
			uParam0->f_17 = 665885/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 665671/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 665607/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 665503/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 665487/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 665380/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 665372/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 661368/*func_1551*/;
			break;
		case 25:
			uParam0->f_23 = 660918/*func_1548*/;
			break;
		case 27:
			uParam0->f_25 = 660910/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 660902/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 660265/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 660127/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 659253/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 659050/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 658897/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 657285/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 657240/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 648201/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 648192/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 648183/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 648175/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 648152/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 648100/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 647962/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 647944/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 647112/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 647010/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 646999/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 646846/*func_1503*/;
			break;
		case 54:
			uParam0->f_45 = 646611/*func_1502*/;
			break;
		case 56:
			uParam0->f_46 = 646602/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 646189/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 646036/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 646027/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 646018/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 646007/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 645996/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 645987/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 645979/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 644923/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 644703/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 644628/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 643939/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 643930/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 643918/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 643826/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 643814/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 643447/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 643438/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 642645/*func_1476*/;
			break;
		case 87:
			uParam0->f_1 = 641265/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 641256/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 641248/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 641239/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 641230/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 641221/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 641213/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 641205/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 641193/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 641184/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 585823/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 641175/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 641166/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 639946/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 639774/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 639765/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 639757/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1476(int iParam0, var uParam1)//Position - 0x9CE55
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_759(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_753(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1502(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x9DDD3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_3__::func_809(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_3__::func_809(iVar1, __LIB_3__::func_810(iParam0)) && __LIB_1__::func_688(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_1503(int iParam0)//Position - 0x9DEBE
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1548(int iParam0, int iParam1)//Position - 0xA15B6
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_944(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_973(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_8(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1551(var uParam0, var uParam1)//Position - 0xA1778
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1554(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_809(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_5__::func_218(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_1554(var uParam0, var uParam1)//Position - 0xA1857
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_51(uParam0, uParam1);
			break;
		case 1:
			func_1567(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_758(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1567(var uParam0, var uParam1)//Position - 0xA2448
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_922(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_8(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_1600(int iParam0, var uParam1, int iParam2)//Position - 0xA4159
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_3__::func_836(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
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
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
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
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
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
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
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
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
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
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
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
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_973(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_8__::func_922(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_1624(var uParam0, int iParam1)//Position - 0xA5B8B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 695245/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 695236/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 695168/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 694726/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 694578/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 694565/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 694338/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 694248/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 694228/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 694123/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 694098/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 694085/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 694021/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 694012/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 693475/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 693466/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 692499/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 692491/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 692482/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 692473/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 692411/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 692330/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 692003/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 691994/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 691982/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 691970/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 691928/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 691919/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 691871/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 691716/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 691707/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 691600/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 691592/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 691165/*func_1701*/;
			break;
		case 27:
			uParam0->f_25 = 691157/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 691149/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 691114/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 691084/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 690917/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 690894/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 687278/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 687233/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 684039/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 684030/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 684021/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 684013/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 684002/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 683831/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 682558/*func_1674*/;
			break;
		case 49:
			uParam0->f_8 = 682549/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 682124/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 682115/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 682104/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 682081/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 682073/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 682064/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 682051/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 682009/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 682000/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 681991/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 681980/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 681969/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 681960/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 681952/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 681944/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 681331/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 681261/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 680572/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 680563/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 680551/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 680542/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 680530/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 680521/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 680512/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 680503/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 680494/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 680485/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 680477/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 680468/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 680459/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 680450/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 680442/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 680434/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 680422/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 680413/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 585823/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 680404/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 680395/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 639946/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 680387/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 680378/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 680370/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1674(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA6A3E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_3__::func_854();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 1:
			__LIB_5__::func_189(iParam3, 0, 0);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 1);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 3:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 2:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_6__::func_869(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_973(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_5__::func_189(iParam3, 4, bVar1);
		__LIB_5__::func_189(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_3__::func_661(0, iParam3) || __LIB_3__::func_661(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_3__::func_661(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(4, iParam3) || __LIB_3__::func_661(5, iParam3))
	{
		iVar5 = __LIB_6__::func_945(__LIB_3__::func_661(4, iParam3));
		__LIB_3__::func_852(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_3__::func_845())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_5__::func_223())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_3__::func_768(iParam0, -1);
		}
	}
}

void func_1701(int iParam0, int iParam1)//Position - 0xA8BDD
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_973(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && Global_1946250.f_3606 != 148)
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1746(var uParam0, int iParam1)//Position - 0xA9BD6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 793128/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 793072/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 792410/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 792283/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 792249/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 792238/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 792174/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 792151/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 792142/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 792022/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 791925/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 791916/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 791526/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 791216/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 789245/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 789236/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 789227/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 788844/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 784923/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 784180/*__LIB_9__::func_267*/;
			break;
		case 19:
			uParam0->f_17 = 784153/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 783984/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 783921/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 783769/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 783684/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 782747/*func_2005*/;
			break;
		case 30:
			uParam0->f_8 = 781419/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 780833/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 779598/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 779589/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 776822/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 776769/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 771317/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 771308/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 771299/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 771291/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 771268/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 771216/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 771191/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 771153/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 771079/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 771068/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 770989/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 770981/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 770972/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 770962/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 770715/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 769566/*__LIB_38__::func_253*/;
			break;
		case 65:
			uParam0->f_21 = 768373/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 767277/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 767101/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 765441/*__LIB_37__::func_965*/;
			break;
		case 69:
			*uParam0 = 765432/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 765420/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 765411/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 765399/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 764566/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 764557/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 763885/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 763012/*func_1909*/;
			break;
		case 87:
			uParam0->f_1 = 761799/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 761779/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 761685/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 761554/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 760908/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 760140/*func_1891*/;
			break;
		case 94:
			uParam0->f_1 = 759587/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 758991/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 758701/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 758608/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 757740/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 701833/*func_1799*/;
			break;
		case 100:
			uParam0->f_22 = 698580/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 697417/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 697209/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 696769/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 696760/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 696648/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 696605/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1799(var uParam0, var uParam1)//Position - 0xAB589
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_3__::func_894())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_5__::func_232())
	{
		func_1814(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_3__::func_903(Global_1946250.f_3377) };
			Var2 = { __LIB_3__::func_902(Global_1946250.f_3377) };
			sVar3 = __LIB_3__::func_888(0, 1);
			sVar4 = __LIB_3__::func_901(0, 1);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_3__::func_888(bVar0, 0);
			sVar4 = __LIB_3__::func_901(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_3__::func_887(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_886(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_759(&iVar9, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_5__::func_489(uParam1->f_109);
			return 0;
		}
		__LIB_3__::func_882(1);
		if (__LIB_5__::func_488())
		{
			__LIB_5__::func_862(iVar8);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_3__::func_896(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_3__::func_895(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_1814(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xABF2E
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_754(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1815(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1815(var uParam0, int iParam1)//Position - 0xABF8C
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_3__::func_140(iParam1))
	{
		iVar0 = __LIB_7__::func_53(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1819(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1819(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xAC0AE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_7__::func_886(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_3__::func_344(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_3__::func_337(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_608(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_3__::func_336(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_3__::func_336(uParam0->f_2) == 8 || __LIB_3__::func_336(uParam0->f_2) == 50) || __LIB_3__::func_336(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_4__::func_984(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_1__::func_526())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_0__::func_454(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_5__::func_722(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_756(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_6__::func_38(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_348(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_3__::func_335(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_157(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1828(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1828(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_354(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_1__::func_102(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_3__::func_334(*uParam0))
									{
										iVar13 = __LIB_3__::func_333(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_3__::func_334(*uParam0) && __LIB_3__::func_332(*uParam0))
									{
										iVar15 = __LIB_3__::func_333(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_149(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_3__::func_331(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_0__::func_454(*uParam0, 0, -1, 0);
											__LIB_0__::func_454(*uParam0, 1, -1, 0);
											__LIB_0__::func_454(*uParam0, 2, -1, 0);
											func_14(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_14(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_360(2153, -1, 0);
											iVar19 = __LIB_1__::func_360(2160, -1, 0);
											if (__LIB_1__::func_342(161, -1))
											{
												iVar21 = __LIB_1__::func_360(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_463(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_462(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_463(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_462(iVar21);
														if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_14(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_14(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_157(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_1822(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_74(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_3__::func_330(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_276(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_0__::func_445(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_260(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_260(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_3__::func_329(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_157(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_3__::func_329(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_3__::func_329(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
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

void func_1822(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xAD69D
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_119(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_110(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_0__::func_445(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_2__::func_998(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

void func_1828(int iParam0, int iParam1, int iParam2)//Position - 0xADC43
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1829(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_167(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_1829(int iParam0)//Position - 0xADE4F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1830(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1830(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xADEE4
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_14(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_14(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

int func_1891(var uParam0, var uParam1)//Position - 0xB994C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_616();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_3__::func_915();
	}
	__LIB_3__::func_914(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_759(&iVar2, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_5__::func_489(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_5__::func_489(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1814(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_899())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_3__::func_890());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_5__::func_862(iVar3);
	__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_1909(int iParam0, var uParam1)//Position - 0xBA484
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_5__::func_236())
	{
		return 1;
	}
	if (__LIB_9__::func_315())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_5__::func_493();
	Var2 = { __LIB_7__::func_791(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1814(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_736(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_759(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_790(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_3__::func_920(iParam0, iVar0);
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_2005(int iParam0, int iParam1)//Position - 0xBF19B
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_8__::func_925(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2006(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_2006(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2006(int iParam0, bool bParam1)//Position - 0xBF42A
{
	__LIB_8__::func_963(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

void func_2070(var uParam0, int iParam1)//Position - 0xC1A31
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 814326/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 814317/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 814249/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 813921/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 813760/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 813747/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 813683/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 813674/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 813338/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 813329/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 812586/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 812578/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 812569/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 812560/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 812547/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 812538/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 812459/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 812115/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 812106/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 811575/*__LIB_6__::func_949*/;
			break;
		case 19:
			uParam0->f_17 = 811519/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 811431/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 811411/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 811384/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 811362/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 811353/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 811246/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 811238/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 811230/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 810469/*func_2152*/;
			break;
		case 27:
			uParam0->f_25 = 810461/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 810453/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 810342/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 810292/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 810223/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 810200/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 806127/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 806070/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 799848/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 799839/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 799830/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 799822/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 799811/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 799698/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 798623/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 798614/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 798217/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 798208/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 798198/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 798175/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 797679/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 797670/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 797661/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 797619/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 797610/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 797601/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 797590/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 797579/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 797570/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 797562/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 797554/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 797244/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 797174/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 796485/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 796476/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 796464/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 796455/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 796443/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 796434/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 796425/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 796416/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 796407/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 796398/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 796390/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 796365/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 796255/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 795538/*func_2081*/;
			break;
		case 100:
			uParam0->f_22 = 794836/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 794708/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 794696/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 794687/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 585823/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 794678/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 794669/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 639946/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 794661/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 794652/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 794644/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2081(var uParam0, var uParam1)//Position - 0xC2392
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1814(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_2152(int iParam0, int iParam1)//Position - 0xC5DE5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_251(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_3__::func_995(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_974(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_974(iVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_6__::func_880(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_2153())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_2153()//Position - 0xC6073
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2194(var uParam0, int iParam1)//Position - 0xC6CFF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 822652/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 822643/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 822571/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 822332/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 822281/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 822268/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 822204/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 822195/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 821755/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 821746/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 821065/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 821057/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 821048/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 821039/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 820977/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 820897/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 820528/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 820519/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 820507/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 820495/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 820486/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 820477/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 820455/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 820446/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 820434/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 820426/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 820418/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 820410/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 820402/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 820394/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 820359/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 820329/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 820259/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 820236/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 820140/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 820095/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 817581/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 817572/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 817563/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 817555/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 817544/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 817502/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 817394/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 817385/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 817182/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 817173/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 817162/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 817139/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 817131/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 817122/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 817109/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 817067/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 817058/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 817049/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 817038/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 817027/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 817018/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 817010/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 817002/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 816769/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 816699/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 816010/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 816001/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 815989/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 815980/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 815968/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 815959/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 815950/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 815941/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 815932/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 815923/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 815915/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 815906/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 815897/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 815888/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 815880/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 815872/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 815860/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 815851/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 585823/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 815842/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 815833/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 639946/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 815825/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 815816/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 815808/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2288(var uParam0, int iParam1)//Position - 0xC8D85
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 902264/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 902250/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 902094/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 901612/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 901413/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 901291/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 901281/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 901143/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 901096/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 901012/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 900918/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 900909/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 899731/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 899722/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 893076/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 892776/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 892719/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 892475/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 892413/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 892333/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 891613/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 888421/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 886109/*__LIB_9__::func_269*/;
			break;
		case 19:
			uParam0->f_17 = 886082/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 885906/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 885842/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 885738/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 885722/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 885615/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 885568/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 885531/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 883484/*func_2477*/;
			break;
		case 25:
			uParam0->f_23 = 883162/*func_2475*/;
			break;
		case 30:
			uParam0->f_8 = 882305/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 882167/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 881595/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 881310/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 878824/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 878767/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 851672/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 851663/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 851654/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 851646/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 851623/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 851551/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 851423/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 851397/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 850710/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 850440/*__LIB_6__::func_955*/;
			break;
		case 52:
			uParam0->f_15 = 850429/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 850267/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 849743/*func_2436*/;
			break;
		case 56:
			uParam0->f_46 = 849725/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 849473/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 849311/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 848815/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 848800/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 848789/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 848627/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 848448/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 848421/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 846886/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 845499/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 845140/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 845026/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 844066/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 844057/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 844045/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 843501/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 843489/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 843301/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 843292/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 841706/*func_2396*/;
			break;
		case 87:
			uParam0->f_1 = 840188/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 840179/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 840171/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 840141/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 839696/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 833894/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 825325/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 824384/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 824373/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 824364/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 824355/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 824346/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 824174/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 824151/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2396(int iParam0, var uParam1)//Position - 0xCD7EA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_759(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_753(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2436(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xCF74F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_4__::func_70(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_4__::func_70(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_70(iVar1, __LIB_4__::func_71(iParam0)) && __LIB_5__::func_773(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_5__::func_781(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_4__::func_75(iParam0) };
								iVar6 = __LIB_4__::func_74(iParam0);
								*iParam2 = __LIB_0__::func_488(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2437(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_2437(var uParam0, int iParam1)//Position - 0xCF8C8
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2475(int iParam0, int iParam1)//Position - 0xD79DA
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_885(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_973(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2477(var uParam0, var uParam1)//Position - 0xD7B1C
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2481(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2479(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2479(var uParam0, var uParam1)//Position - 0xD7BA5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_5__::func_462();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2481(var uParam0, var uParam1)//Position - 0xD7CC3
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_53(uParam0, uParam1);
			break;
		case 1:
			func_2486(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_751(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2486(var uParam0, var uParam1)//Position - 0xD8048
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_926(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 3)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2545(var uParam0, int iParam1)//Position - 0xDC481
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 918501/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 918492/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 918424/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 917976/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 917871/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 917858/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 917794/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 917785/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 917323/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 917314/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 916917/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 916909/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 916900/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 916876/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 916814/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 916735/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 916438/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 916429/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 916417/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 916390/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 916381/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 916372/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 916350/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 916341/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 916333/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 916325/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 916317/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 915985/*func_2617*/;
			break;
		case 27:
			uParam0->f_25 = 915977/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 915969/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 915648/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 915618/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 915549/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 911817/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 911772/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 908605/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 908596/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 908587/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 908579/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 908568/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 908455/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 907332/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 907323/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 907314/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 907305/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 907294/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 907283/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 907275/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 907266/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 907257/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 907215/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 907206/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 907197/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 907186/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 907175/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 907166/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 907158/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 907150/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 906847/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 906777/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 906128/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 906119/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 906111/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 906102/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 906090/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 905656/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 905631/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 905614/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 905072/*func_2567*/;
			break;
		case 87:
			uParam0->f_1 = 904029/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 904020/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 904012/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 904003/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 903994/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 903985/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 903977/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 903969/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 903957/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 903948/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 903645/*__LIB_7__::func_798*/;
			break;
	}
}

int func_2567(var uParam0, var uParam1)//Position - 0xDCF70
{
	return func_2568(uParam1);
}

int func_2568(var uParam0)//Position - 0xDCF7E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_759(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_753(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_4__::func_109(&Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2617(int iParam0, int iParam1)//Position - 0xDFA11
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_554(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_973(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2655(var uParam0, int iParam1)//Position - 0xE03EE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 953620/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 953597/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 953467/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 952800/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 952537/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 952524/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 952514/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 952315/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 952267/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 952231/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 952116/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 952107/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 951177/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 951168/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 949993/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 949949/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 949926/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 949902/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 949840/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 949761/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 949087/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 945805/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 944865/*__LIB_9__::func_272*/;
			break;
		case 19:
			uParam0->f_17 = 944819/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 944646/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 944561/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 944421/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 944405/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 944298/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 944251/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 944214/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 942803/*func_2763*/;
			break;
		case 25:
			uParam0->f_23 = 942437/*func_2760*/;
			break;
		case 27:
			uParam0->f_25 = 941623/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 941582/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 941347/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 941022/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 940822/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 940716/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 940400/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 935408/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 935351/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 929145/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 929136/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 929127/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 929119/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 929096/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 929083/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 928780/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 926617/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 926569/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 926377/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 926368/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 926357/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 926315/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 926307/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 926298/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 926289/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 926247/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 926238/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 926229/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 926218/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 926188/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 926179/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 926171/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 925085/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 924744/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 924630/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 923802/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 923793/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 923781/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 923689/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 923677/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 923489/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 923480/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 923466/*func_2694*/;
			break;
		case 87:
			uParam0->f_1 = 923450/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 923441/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 923433/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 923424/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 922981/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 921519/*func_2676*/;
			break;
		case 100:
			uParam0->f_22 = 920640/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 920463/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 920451/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 920437/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 585823/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 639946/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 920428/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 920327/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 920302/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 920130/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 920103/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2676(int iParam0, var uParam1)//Position - 0xE0FAF
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2677(iParam0, uParam1);
	}
	return 1;
}

int func_2677(int iParam0, var uParam1)//Position - 0xE0FCC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_754(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_4__::func_133(-395939522);
		iVar3 = __LIB_4__::func_133(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-395939522), iVar2);
			__LIB_4__::func_131(__LIB_4__::func_132(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(uParam1->f_50), __LIB_4__::func_132(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_4__::func_130(&(uParam1->f_58), __LIB_4__::func_132(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_5__::func_266(uParam1, 6);
		iVar7 = 3500;
		__LIB_3__::func_900(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2694(var uParam0, var uParam1)//Position - 0xE174A
{
	return func_2568(uParam1);
}

void func_2760(int iParam0, int iParam1)//Position - 0xE6165
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_892(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_973(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2763(var uParam0, var uParam1)//Position - 0xE62D3
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2764(uParam0, uParam1);
	}
}

void func_2764(var uParam0, var uParam1)//Position - 0xE62FF
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2775(*uParam0, 0, 0))
		{
			__LIB_3__::func_664(0);
			__LIB_3__::func_784(1);
		}
		else
		{
			__LIB_5__::func_878(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			func_2770(uParam0, uParam1);
			break;
		case 1:
			func_2766(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2766(var uParam0, var uParam1)//Position - 0xE63BE
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_4__::func_155();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_5__::func_207(iVar5);
		if (__LIB_3__::func_782(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar3, sVar3);
		__LIB_5__::func_270();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_10__::func_18(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_457(5);
		__LIB_5__::func_462();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_8__::func_965(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
		if (__LIB_3__::func_616() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2770(var uParam0, var uParam1)//Position - 0xE65BF
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_4__::func_158(iVar6);
		uVar1[iVar6] = __LIB_4__::func_157(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_877(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_789(__LIB_4__::func_156(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_3__::func_784(2);
			}
			else if (func_2775(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_3__::func_664(1);
				__LIB_3__::func_784(1);
			}
			else
			{
				__LIB_5__::func_878(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_2775(int iParam0, bool bParam1, bool bParam2)//Position - 0xE6824
{
	int iVar0;
	int iVar1;
	func_973(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2833(var uParam0, int iParam1)//Position - 0xE8D1D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 984261/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 984252/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 984184/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 983831/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 983598/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 983585/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 983521/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 983512/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 982786/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 982777/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 981632/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 981624/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 981615/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 981591/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 981519/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 981430/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 981070/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 980931/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 980254/*__LIB_8__::func_852*/;
			break;
		case 19:
			uParam0->f_17 = 980227/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 980218/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 980170/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 980115/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 980002/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 979994/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 979986/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 977428/*func_2958*/;
			break;
		case 25:
			uParam0->f_23 = 977420/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 977412/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 977404/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 977123/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 977093/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 977024/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 977001/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 974447/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 974402/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 974306/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 974297/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 974288/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 974280/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 974269/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 974156/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 973309/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 973300/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 973087/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 973078/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 973067/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 973025/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 972986/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 972977/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 972935/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 972893/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 972884/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 972875/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 972864/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 972853/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 972844/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 972758/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 972750/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 972409/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 972339/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 971642/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 971633/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 971560/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 971551/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 971539/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 971530/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 971003/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 969447/*func_2908*/;
			break;
		case 87:
			uParam0->f_1 = 966213/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 966198/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 965836/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 965474/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 964967/*func_2886*/;
			break;
		case 98:
			uParam0->f_1 = 963333/*func_2884*/;
			break;
		case 100:
			uParam0->f_22 = 963054/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 962534/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 962522/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 962513/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 585823/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 962376/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 962328/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 639946/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 920428/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 920327/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 920302/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 962320/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 955209/*func_2835*/;
			break;
		case 125:
			uParam0->f_19 = 955153/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2835(int iParam0, int* iParam1)//Position - 0xE9349
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_10__::func_26(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(1);
					__LIB_4__::func_181(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_616() == 0)
			{
				if (__LIB_6__::func_965(iParam0, iParam1))
				{
					__LIB_4__::func_180();
					__LIB_4__::func_181(iParam1, 2);
				}
			}
			else
			{
				__LIB_5__::func_548(iParam0, iParam1, __LIB_3__::func_616());
				__LIB_4__::func_181(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_616() == 0)
			{
				if (func_2908(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2861(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				__LIB_7__::func_843(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_9__::func_324(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_7__::func_842(iParam1);
				__LIB_9__::func_324(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_4__::func_181(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_3__::func_616() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_7__::func_843(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_10__::func_26(iParam1);
				}
			}
			else if (__LIB_7__::func_842(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_10__::func_26(iParam1);
			}
			break;
	}
	return 1;
}

int func_2861(int* iParam0)//Position - 0xEA5A2
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_1814(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2884(int iParam0, var uParam1)//Position - 0xEB305
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2677(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_162())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_5__::func_412(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_4__::func_185(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1814(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_2886(int iParam0, var uParam1)//Position - 0xEB967
{
	char* sVar0;
	bool bVar1;
	if (__LIB_4__::func_128(iParam0))
	{
		return __LIB_5__::func_974(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_162())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2887(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_2887(var uParam0, int iParam1)//Position - 0xEBA76
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_338(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_167(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_1__::func_102(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_2908(int iParam0, int* iParam1)//Position - 0xECAE7
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_754(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-1805228339), __LIB_4__::func_133(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(iParam1->f_50), __LIB_4__::func_132(-1805228339), __LIB_4__::func_193(-1805228339), __LIB_4__::func_133(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_4__::func_136())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
		Var3 = { __LIB_4__::func_132(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_4__::func_191(6);
		__LIB_3__::func_900(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_872(iVar6, 0)) && __LIB_6__::func_854(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_759(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_754(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_5__::func_550(iParam1, 6);
		iVar12 = __LIB_4__::func_192(__LIB_4__::func_189(iParam1));
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1814(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_4__::func_132(-1805228339), 0.1f, __LIB_4__::func_133(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_4__::func_133(-1805228339), __LIB_4__::func_132(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_4__::func_132(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
			__LIB_6__::func_27(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_2958(var uParam0, var uParam1)//Position - 0xEEA14
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_8__::func_967(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_967(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			if (__LIB_3__::func_597())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_3__::func_597())
	{
		if ((__LIB_3__::func_616() == 3 || __LIB_3__::func_616() == 4) || __LIB_3__::func_616() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_2962(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2959(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2959(var uParam0, var uParam1)//Position - 0xEEB52
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_3__::func_785();
	bVar0 = iVar1 != 5;
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_5__::func_207(iVar9);
		if (__LIB_3__::func_782(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar7, sVar7);
		__LIB_5__::func_270();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_10__::func_18(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			if ((__LIB_3__::func_616() == 1 || __LIB_3__::func_616() == 3) || __LIB_3__::func_616() == 4)
			{
				__LIB_4__::func_143();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_3__::func_785() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			if (__LIB_3__::func_785() == 3)
			{
				__LIB_4__::func_143();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_2962(var uParam0, var uParam1)//Position - 0xEEDDE
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	if (__LIB_3__::func_616() == 0)
	{
		uVar0 = __LIB_5__::func_554(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_8__::func_966(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_10__::func_18(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_7__::func_733(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_3__::func_616() == 0)
		{
			__LIB_1__::func_789(__LIB_4__::func_205(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_789(__LIB_5__::func_883(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_3__::func_616() == 0)
			{
				func_2964(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2963(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2963(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xEEEFB
{
	if (iParam1 == 0)
	{
		if (func_2775(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_4__::func_143();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_2775(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_2775(iParam0, 1, 0))
		{
			__LIB_3__::func_784(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_3__::func_784(4);
		__LIB_4__::func_143();
	}
	else
	{
		__LIB_3__::func_664(1);
		if (func_2775(iParam0, 0, 0))
		{
			__LIB_3__::func_784(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			__LIB_4__::func_143();
		}
	}
	*uParam2 = 1;
}

void func_2964(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xEF003
{
	if (iParam1 == 0)
	{
		if (func_2775(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_2775(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
}

void func_3007(var uParam0, int iParam1)//Position - 0xF04CE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1019933/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1019919/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 1019820/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 1018756/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 1018602/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 1018548/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 1018493/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 1018373/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 1018241/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 1018126/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 1018116/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 1016947/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 1016938/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1015569/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 1015525/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 1015502/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1015478/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1015415/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 1015335/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 1014692/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 1011552/*__LIB_10__::func_71*/;
			break;
		case 17:
			uParam0->f_17 = 1010847/*__LIB_9__::func_274*/;
			break;
		case 19:
			uParam0->f_17 = 1010820/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 1010641/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 1010577/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1010303/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 1010287/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 1010180/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 1010133/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 1010096/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 1009266/*func_3111*/;
			break;
		case 25:
			uParam0->f_23 = 1008900/*func_3108*/;
			break;
		case 27:
			uParam0->f_25 = 1008518/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 1008467/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 1008459/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1008222/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 1008098/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 1007678/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 996382/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 996337/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 993250/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 993241/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 993232/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 993224/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 993175/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 993093/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 992329/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 992282/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 992223/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 991991/*__LIB_6__::func_969*/;
			break;
		case 52:
			uParam0->f_15 = 991980/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 991938/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 991930/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 991921/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 991912/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 991870/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 991861/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 991852/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 991841/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 991799/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 991790/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 991782/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 990720/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 990417/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 990303/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 989460/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 989451/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 989378/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 989369/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 989357/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 989155/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 989146/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 987413/*func_3026*/;
			break;
		case 87:
			uParam0->f_1 = 985958/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 985949/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 985941/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 985932/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 985923/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 985914/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 985906/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 985898/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 985726/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 985693/*__LIB_4__::func_215*/;
			break;
	}
}

int func_3026(int iParam0, var uParam1)//Position - 0xF1115
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_4__::func_977())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_759(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_753(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_4__::func_229(iParam0, __LIB_3__::func_616()) };
		Var2 = { __LIB_4__::func_228(iParam0, __LIB_3__::func_616()) };
		uVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		uVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		uVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		uVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_3108(int iParam0, int iParam1)//Position - 0xF6504
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_897(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_973(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3111(var uParam0, var uParam1)//Position - 0xF6672
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_3112(uParam0, uParam1);
	}
}

void func_3112(var uParam0, var uParam1)//Position - 0xF6690
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_54(uParam0, uParam1);
			break;
		case 1:
			func_3113(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3113(var uParam0, var uParam1)//Position - 0xF66CA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_3175(var uParam0, int iParam1)//Position - 0xF9026
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1111803/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1111747/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1111403/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1111364/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1111330/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1111319/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1111255/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1111232/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1111208/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1111088/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1111009/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1111000/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1110404/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1110396/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1105196/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1105187/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1105172/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1104697/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1100726/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1099945/*__LIB_9__::func_276*/;
			break;
		case 19:
			uParam0->f_17 = 1099918/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1099707/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1099544/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1098935/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1098850/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1097934/*func_3242*/;
			break;
		case 30:
			uParam0->f_8 = 1096662/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1096065/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1095162/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1095153/*__LIB_0__::func_162*/;
			break;
		case 34:
			uParam0->f_41 = 1094378/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1094325/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1025503/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 1025494/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1025485/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1025477/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1025454/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 1025314/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 1025279/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 1025241/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1025217/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1025206/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1025127/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 1025119/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1025110/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1025100/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1024811/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 1023409/*__LIB_38__::func_254*/;
			break;
		case 65:
			uParam0->f_21 = 1022446/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 1022251/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 1022148/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 1021459/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1021450/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1021438/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1021429/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1021417/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1021080/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 1021071/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1020954/*__LIB_7__::func_810*/;
			break;
	}
}

void func_3242(int iParam0, int iParam1)//Position - 0x10C0CE
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_306(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_7__::func_22(PLAYER::PLAYER_ID())) && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_637(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_3243(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_3243(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3243(int iParam0)//Position - 0x10C386
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3316(var uParam0, int iParam1)//Position - 0x10F704
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1175104/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1174864/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1172561/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1172352/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1172145/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1172067/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1171927/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1171871/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1171781/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1171545/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1171531/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1171522/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1168152/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1168143/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1154066/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1153824/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1153775/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1153564/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1153555/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1153526/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1152799/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1148944/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1147628/*__LIB_9__::func_279*/;
			break;
		case 19:
			uParam0->f_17 = 1147582/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1147417/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1147353/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1147126/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1146999/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1143613/*func_3452*/;
			break;
		case 25:
			uParam0->f_23 = 1143292/*func_3450*/;
			break;
		case 27:
			uParam0->f_25 = 1142144/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1142031/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1141950/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1141060/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1140510/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1139828/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1139735/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1130469/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1130411/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 1026372/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1130402/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1130393/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1130385/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1130336/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1130044/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1127042/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1126938/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1126655/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1126493/*__LIB_6__::func_978*/;
			break;
		case 52:
			uParam0->f_15 = 1126482/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1126224/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1125962/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1125953/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1124796/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1124538/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1124259/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1124250/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1124239/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1123981/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1123973/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1123915/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1123765/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1122058/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1121747/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1121595/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1120694/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1120685/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1120236/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1119957/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1119945/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1119712/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1119703/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1117606/*func_3337*/;
			break;
		case 87:
			uParam0->f_1 = 1114711/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1114702/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1114694/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1114668/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1114558/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1113839/*func_3323*/;
			break;
		case 100:
			uParam0->f_22 = 1113675/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1113547/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1113257/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1113233/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3323(var uParam0, var uParam1)//Position - 0x10FEEF
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1814(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_3337(int iParam0, var uParam1)//Position - 0x110DA6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_4__::func_322(iParam0);
	if (__LIB_4__::func_980(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_759(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_753(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_4__::func_329(iVar0) };
		Var3 = { __LIB_4__::func_328(iVar0) };
		fVar4 = __LIB_4__::func_327(iVar0);
		fVar5 = __LIB_4__::func_326(iVar0);
		bVar6 = false;
		Var7 = { __LIB_4__::func_325(iVar0) };
		Var8 = { __LIB_4__::func_324(iVar0) };
		fVar9 = __LIB_4__::func_323(iVar0);
		return __LIB_6__::func_423(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3450(int iParam0, int iParam1)//Position - 0x1171FC
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_903(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_973(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3452(var uParam0, var uParam1)//Position - 0x11733D
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3466(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3454(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_3454(var uParam0, var uParam1)//Position - 0x1173C8
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_55(uParam0, uParam1);
			break;
		case 1:
			func_3455(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3455(var uParam0, var uParam1)//Position - 0x117402
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_3466(var uParam0, var uParam1)//Position - 0x11791F
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_56(uParam0, uParam1);
			break;
		case 1:
			func_3475(uParam0, uParam1);
			break;
		case 2:
			__LIB_10__::func_760(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3475(var uParam0, var uParam1)//Position - 0x117DCE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_973(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_931(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_59(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3543(var uParam0, int iParam1)//Position - 0x11EE49
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1182637/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1182581/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1182312/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1182251/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1182220/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1182156/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1182147/*__LIB_0__::func_162*/;
			break;
		case 11:
			uParam0->f_11 = 1182138/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1182129/*__LIB_0__::func_162*/;
			break;
		case 12:
			uParam0->f_33 = 1181918/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1181910/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1181886/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1181877/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1180933/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1180924/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1180899/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1180890/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1180863/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1180851/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1180842/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1180833/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1180365/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1180242/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1179472/*func_3585*/;
			break;
		case 30:
			uParam0->f_8 = 1179326/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1179314/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1179107/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1178790/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1178737/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1177964/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1177955/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1177946/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1177938/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1177927/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1177688/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1177679/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1177670/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1177661/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1177650/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1177639/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1177631/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1177622/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1177613/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1177320/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1176776/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1176768/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1176700/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1176560/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1176116/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1176107/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1176095/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1176086/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1176074/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1176065/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1176057/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3585(int iParam0, int iParam1)//Position - 0x11FF50
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_8__::func_933(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3586(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3586(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3586(int iParam0)//Position - 0x12017A
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3621(var uParam0, int iParam1)//Position - 0x120BB6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1281476/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1281372/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1280637/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1280555/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1280412/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1280402/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1280265/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1280198/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1280086/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1279847/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1279838/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1279338/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1279329/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1279321/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1279297/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1279217/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1279121/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1278916/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1278900/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1278091/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1273384/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1272564/*__LIB_9__::func_707*/;
			break;
		case 19:
			uParam0->f_17 = 1272537/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1272453/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1272389/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1272237/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1272066/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1271016/*func_3807*/;
			break;
		case 30:
			uParam0->f_8 = 1270398/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1270085/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1269146/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1267786/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1267728/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1220028/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1220019/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1220010/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1220002/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1219979/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1219851/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1219810/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1219542/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1219473/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1219462/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1219228/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1218878/*func_3782*/;
			break;
		case 56:
			uParam0->f_46 = 1218869/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1218798/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1218564/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1218364/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1217466/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1216755/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1214493/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1213860/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1213851/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1213839/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1213830/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1213818/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1213125/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1212585/*func_3732*/;
			break;
		case 85:
			uParam0->f_1 = 1208483/*func_3724*/;
			break;
		case 87:
			uParam0->f_1 = 1204496/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1203982/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1203811/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1203605/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1203409/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1201957/*func_3696*/;
			break;
		case 94:
			uParam0->f_1 = 1197824/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1197528/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1197498/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1196830/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1194180/*func_3659*/;
			break;
		case 100:
			uParam0->f_22 = 1186117/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1184174/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1183954/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1183930/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3659(int iParam0, int* iParam1)//Position - 0x1238C4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_0__::func_893() || __LIB_4__::func_54())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_0__::func_937(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_4__::func_972(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_4__::func_417(0), false);
				Var4 = { __LIB_4__::func_426() };
				__LIB_5__::func_893(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_162())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1814(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_4__::func_972(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1814(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_4__::func_442();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
			}
			else
			{
				__LIB_7__::func_872(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_5__::func_892(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_5__::func_991(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_1814(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_4__::func_426() };
			__LIB_5__::func_893(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_1__::func_394())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_3__::func_900(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_4__::func_428(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_5__::func_514(iParam1, 0);
	__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_3696(int iParam0, int* iParam1)//Position - 0x125725
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_4__::func_427() };
		__LIB_5__::func_893(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_10__::func_152(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_759(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3698(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_2__::func_717(bVar5) == iParam0) && __LIB_3__::func_171(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1814(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_5__::func_602(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_6__::func_425(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_417(0));
	return 1;
}

int func_3698(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x125A37
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::func_162() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_754(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_3724(int iParam0, int* iParam1)//Position - 0x1270A3
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_759(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_4__::func_453(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_753(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_4__::func_465(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1814(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_892(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_6__::func_424(iParam0, 3) };
	__LIB_5__::func_893(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_5__::func_609(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_6__::func_424(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_5__::func_893(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_991(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_6__::func_805(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_6__::func_426(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

int func_3732(int iParam0, var uParam1)//Position - 0x1280A9
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_5__::func_604(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_459(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_459(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_799(__LIB_4__::func_445());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_445()))
				{
					bVar0 = false;
				}
				else if (!__LIB_10__::func_152(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_759(&iVar1, &(uParam1->f_122), 24);
					__LIB_4__::func_456(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_4__::func_466(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_1__::func_394())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_3782(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x12993E
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_172(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_4__::func_296(iParam0) };
					iVar1 = __LIB_4__::func_74(iParam0);
					*iParam2 = __LIB_0__::func_488(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2437(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_3807(int iParam0, int iParam1)//Position - 0x1364E8
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_616(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_296(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_974(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_974(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3808(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3808(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3808(int iParam0)//Position - 0x136778
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3864(var uParam0, int iParam1)//Position - 0x138DCD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1309575/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1309519/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1309250/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1309191/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1309160/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1309040/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1308956/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1308892/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1308869/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1308860/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1308407/*__LIB_9__::func_474*/;
			break;
		case 14:
			uParam0->f_11 = 1308398/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1308390/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1308366/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1308357/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1303287/*__LIB_9__::func_759*/;
			break;
		case 75:
			uParam0->f_4 = 1303278/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1303094/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1299995/*__LIB_10__::func_150*/;
			break;
		case 17:
			uParam0->f_17 = 1299485/*__LIB_8__::func_938*/;
			break;
		case 19:
			uParam0->f_17 = 1299458/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1299380/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1299317/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1299102/*__LIB_6__::func_909*/;
			break;
		case 22:
			uParam0->f_24 = 1298979/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1298032/*func_3961*/;
			break;
		case 30:
			uParam0->f_8 = 1297468/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1297289/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1296177/*__LIB_8__::func_973*/;
			break;
		case 34:
			uParam0->f_41 = 1295483/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1295430/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1294853/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1294844/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1294835/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1294658/*__LIB_8__::func_972*/;
			break;
		case 77:
			uParam0->f_13 = 1294647/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1294149/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1294108/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1294099/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1294090/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1294079/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1294068/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1294060/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1294051/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1294042/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1293813/*__LIB_8__::func_859*/;
			break;
		case 64:
			uParam0->f_47 = 1287886/*__LIB_10__::func_61*/;
			break;
		case 65:
			uParam0->f_21 = 1286285/*__LIB_8__::func_988*/;
			break;
		case 66:
			uParam0->f_21 = 1285974/*__LIB_6__::func_759*/;
			break;
		case 67:
			uParam0->f_21 = 1285249/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1284704/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1284695/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1284683/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1284674/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1284662/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1282946/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1282496/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1282480/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3961(int iParam0, int iParam1)//Position - 0x13CE70
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_5__::func_628(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_974(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_974(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_973(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_973(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3962(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3962(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3962(int iParam0)//Position - 0x13D103
{
	__LIB_8__::func_973(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4033(var uParam0, int iParam1)//Position - 0x13FB90
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1362020/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1361940/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1361441/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1361391/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1361304/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1361294/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1361174/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1361052/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1360964/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1360950/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1360941/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1360562/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1360553/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1360545/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1360521/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1360389/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1360107/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1360093/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1359574/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1355950/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1355411/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1355384/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1355300/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1355236/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1355056/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1354909/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1354285/*func_4156*/;
			break;
		case 30:
			uParam0->f_8 = 1353770/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1353483/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1352812/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1351548/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1351503/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1325456/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1325447/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1325438/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1325430/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1325407/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1325303/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1325262/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1325048/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1324979/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1324968/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1324830/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1324642/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1324633/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1324456/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1324318/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1324310/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1323474/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1323367/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1323303/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1322815/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1322806/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1322794/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1322785/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1322773/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1322070/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1321970/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1319986/*func_4105*/;
			break;
		case 87:
			uParam0->f_1 = 1317563/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1317554/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1317491/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1317169/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1313162/*func_4054*/;
			break;
		case 100:
			uParam0->f_22 = 1310954/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1310750/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1310734/*__LIB_4__::func_516*/;
			break;
	}
}

int func_4054(int iParam0, int* iParam1)//Position - 0x14098A
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_759(&iVar0, &(iParam1->f_109), 12);
		__LIB_5__::func_638(iParam0, &(iParam1->f_109));
	}
	__LIB_7__::func_63(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_5__::func_343(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_5__::func_899(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_4105(int iParam0, int* iParam1)//Position - 0x142432
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_759(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_753(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1814(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_4__::func_607(iParam0, &(iParam1->f_109));
	}
	__LIB_6__::func_429(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_7__::func_63(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

void func_4156(int iParam0, int iParam1)//Position - 0x14AA2D
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_302(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_974(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_974(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4157(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4157(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4157(int iParam0)//Position - 0x14AC6F
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4200(var uParam0, int iParam1)//Position - 0x14C86D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1371444/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1371388/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1371169/*__LIB_6__::func_912*/;
			break;
		case 3:
			uParam0->f_34 = 1371118/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1371084/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1371020/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1371011/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1370987/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1370978/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1370886/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1370877/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1370869/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1370617/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1370608/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1370599/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1370590/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1370581/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1370535/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1370523/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1370476/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1370424/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1370368/*__LIB_6__::func_911*/;
			break;
		case 22:
			uParam0->f_24 = 1370283/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1369316/*func_4236*/;
			break;
		case 30:
			uParam0->f_8 = 1369106/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1369074/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1368884/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1364881/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1364828/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1363637/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1363628/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1363619/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1363611/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1363600/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1363497/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1363472/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1363434/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1363425/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1363414/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1363333/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1363325/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1363316/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1363306/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1363099/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1363091/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1363083/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1363075/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1363067/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1363058/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1363049/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1363037/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1363028/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1363016/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1363007/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1362998/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1362990/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4236(int iParam0, int iParam1)//Position - 0x14E4E4
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_8__::func_863(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		__LIB_8__::func_195(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4237(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4237(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4237(int iParam0)//Position - 0x14E761
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4264(var uParam0, int iParam1)//Position - 0x14ED3D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1450883/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1450827/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1449282/*__LIB_8__::func_869*/;
			break;
		case 3:
			uParam0->f_34 = 1449233/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1449199/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1449135/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1449112/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1449088/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1448968/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1448901/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1448892/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1448547/*__LIB_9__::func_505*/;
			break;
		case 14:
			uParam0->f_11 = 1448538/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1448530/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1443204/*__LIB_9__::func_800*/;
			break;
		case 13:
			uParam0->f_2 = 1443195/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1443186/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1443161/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1434922/*__LIB_12__::func_848*/;
			break;
		case 17:
			uParam0->f_17 = 1434336/*__LIB_9__::func_477*/;
			break;
		case 19:
			uParam0->f_17 = 1434309/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1434248/*__LIB_9__::func_476*/;
			break;
		case 21:
			uParam0->f_3 = 1434128/*__LIB_6__::func_914*/;
			break;
		case 74:
			uParam0->f_53 = 1434072/*__LIB_6__::func_913*/;
			break;
		case 22:
			uParam0->f_24 = 1433987/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1433015/*func_4357*/;
			break;
		case 30:
			uParam0->f_8 = 1432275/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1432004/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1431068/*__LIB_9__::func_504*/;
			break;
		case 34:
			uParam0->f_41 = 1427724/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1427671/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1426988/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1426979/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1426970/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1426527/*__LIB_10__::func_65*/;
			break;
		case 77:
			uParam0->f_13 = 1426516/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1426413/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1426388/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1426350/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1426326/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1426315/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1426236/*__LIB_8__::func_865*/;
			break;
		case 54:
			uParam0->f_45 = 1426228/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1426219/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1426209/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1425980/*__LIB_8__::func_864*/;
			break;
		case 64:
			uParam0->f_47 = 1379652/*__LIB_10__::func_154*/;
			break;
		case 65:
			uParam0->f_21 = 1378514/*__LIB_8__::func_989*/;
			break;
		case 66:
			uParam0->f_21 = 1378291/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1377396/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1376851/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1376842/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1376830/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1376821/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1376809/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1374750/*__LIB_37__::func_967*/;
			break;
		case 73:
			uParam0->f_51 = 1372981/*__LIB_10__::func_153*/;
			break;
		case 78:
			uParam0->f_59 = 1372448/*__LIB_8__::func_974*/;
			break;
	}
}

void func_4357(int iParam0, int iParam1)//Position - 0x15DDB7
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_476(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_974(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_974(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_504(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_504(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4358(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4358(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4358(int iParam0)//Position - 0x15E04A
{
	__LIB_9__::func_504(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4429(var uParam0, int iParam1)//Position - 0x16238C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1486869/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1486753/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1485523/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1485453/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1485279/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1485155/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1484932/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1484918/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1484894/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1484774/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1484536/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1484527/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1482823/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1482814/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1482806/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1482300/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1482261/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1482252/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1482243/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1481775/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1479736/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1477598/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1477571/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1477487/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1477387/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1477220/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1477113/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1476461/*func_4551*/;
			break;
		case 30:
			uParam0->f_8 = 1475961/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1475666/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1474668/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1474564/*__LIB_6__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 1472419/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1385100/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1472359/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1472350/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1472341/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1472075/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1472064/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1471924/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1471883/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1471686/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1471602/*__LIB_6__::func_916*/;
			break;
		case 52:
			uParam0->f_15 = 1471591/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1471309/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1471301/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1471292/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1471231/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1470949/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1469034/*__LIB_9__::func_521*/;
			break;
		case 65:
			uParam0->f_21 = 1468991/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1468288/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1467204/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1466613/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1466604/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1466592/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1466583/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1466571/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1463895/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1462049/*func_4474*/;
			break;
		case 85:
			uParam0->f_1 = 1459715/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1455488/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1455479/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1455436/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1455135/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1454372/*func_4441*/;
			break;
		case 94:
			uParam0->f_1 = 1452874/*__LIB_37__::func_963*/;
			break;
		case 102:
			uParam0->f_1 = 1452304/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1452296/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1452221/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1452147/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1452123/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4441(var uParam0, var uParam1)//Position - 0x163124
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_759(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_4__::func_37(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4474(int iParam0, var uParam1)//Position - 0x164F21
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_4__::func_694(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_616() == 1)
		{
			__LIB_5__::func_457(0);
		}
	}
	switch (__LIB_3__::func_616())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1814(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_5__::func_911(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_759(&iVar2, &(uParam1->f_109), 14);
								func_753(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_759(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_759(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_759(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_753(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_5__::func_911(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_5__::func_914(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_6__::func_769(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_3__::func_616() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1814(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_4__::func_709(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_658(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_4__::func_707(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4551(int iParam0, int iParam1)//Position - 0x16876D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_919(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_4__::func_303(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_974(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_974(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4552(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4552(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4552(int iParam0)//Position - 0x1689CB
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4603(var uParam0, int iParam1)//Position - 0x16B01E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1528880/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1526561/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1526498/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1526442/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1525726/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1525718/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1525709/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1525685/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1525676/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1523848/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1523839/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1523831/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1523822/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1523813/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1523804/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1523795/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1523786/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1523759/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1523747/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1523738/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1523729/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1523720/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1523708/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1523700/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1522539/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1522527/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1522499/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1522490/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1522445/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1488762/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1488753/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1488744/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1488736/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1488725/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1488717/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1488708/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1488388/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1488359/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1488328/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1488294/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1488250/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1488221/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1488212/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1488155/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1488147/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1488139/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1488131/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1488123/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1488097/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1488071/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1488059/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1488050/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1488038/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1488029/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1488021/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1487838/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4681(var uParam0, int iParam1)//Position - 0x175921
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1572786/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1572476/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1567504/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1567475/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1567280/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1566930/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1566788/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1566764/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1566226/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1566121/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1566112/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1566007/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1565998/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1565990/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1565981/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1565972/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1565683/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1565674/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1565590/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1565581/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1564958/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1564757/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1564693/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1564633/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1564624/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1564381/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1564008/*func_4720*/;
			break;
		case 30:
			uParam0->f_8 = 1563870/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1563428/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1562763/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1560185/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1560140/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1534296/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1534068/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1533892/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1533884/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1533873/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1533631/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1533599/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1533533/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1533509/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1533326/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1532731/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1532494/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1532485/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1532420/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1531998/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1531990/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1531982/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1531922/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1531904/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1531895/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1531886/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1531382/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1531234/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1531189/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1531180/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1531172/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1531156/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4720(int iParam0, int iParam1)//Position - 0x17DD68
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_802(PLAYER::PLAYER_ID()) && __LIB_7__::func_768(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_974(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_4758(var uParam0, int iParam1)//Position - 0x17FFBB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1607940/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1607830/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1605336/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1605307/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1605147/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1605029/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1604812/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1604788/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1604668/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1604517/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1604508/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1603505/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1603496/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1603488/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1603479/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1603325/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1603316/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1603228/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1602438/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1601807/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1601780/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1601741/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1601681/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1601672/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1601618/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1601314/*func_4847*/;
			break;
		case 30:
			uParam0->f_8 = 1601191/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1600970/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1600685/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1600279/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1600234/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1582702/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1582693/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1582609/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1582601/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1582578/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1582526/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1582494/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1582316/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1582219/*__LIB_9__::func_319*/;
			break;
		case 52:
			uParam0->f_15 = 1582208/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1581893/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1581028/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1581019/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1576212/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1576198/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1574690/*__LIB_9__::func_522*/;
			break;
		case 65:
			uParam0->f_21 = 1574682/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1574631/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1574603/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1574594/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1574585/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1574301/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1574205/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1574193/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1574007/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1573835/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4847(int iParam0, int iParam1)//Position - 0x186F22
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_5__::func_820(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_816(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_974(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_4891(var uParam0, int iParam1)//Position - 0x18890D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1635772/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1635626/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1630400/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1630371/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1629960/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1629790/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1629395/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1629371/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1629362/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1629267/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1629258/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1629250/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1629241/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1628956/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1628947/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1628859/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1628850/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1628594/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1628567/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1628558/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1628549/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1628540/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1628532/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1628524/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1628401/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1628154/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1627898/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1625745/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1625700/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1611251/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1611242/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1611233/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1611225/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1611214/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1611162/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1611130/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1611001/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1610977/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1610966/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1610315/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1609679/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1609670/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1609603/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1609589/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1609210/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1609135/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1609084/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1609066/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1609057/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1609048/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1608931/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1608922/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1608910/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1608901/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1608893/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4964(var uParam0, int iParam1)//Position - 0x18F5C5
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1636239/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1636230/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1636221/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1636061/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1636053/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1635898/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4972(var uParam0, int iParam1)//Position - 0x18F798
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1636456/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1636447/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1636438/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1636061/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1636429/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1636365/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4978(var uParam0, int iParam1)//Position - 0x18F871
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1636683/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1636674/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1636061/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1636665/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1636565/*__LIB_8__::func_992*/;
			break;
	}
}

void func_4986(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x18FA51
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_VODKA" /* GXT: Press ~INPUT_CONTEXT~ to drink vodka. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.075f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("ba_prop_battle_decanter_02_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_252 = 198;
	if (__LIB_4__::func_899(PLAYER::PLAYER_ID()) || __LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = 90f;
	}
}

void func_4987(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x18FB92
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_VODKA" /* GXT: Press ~INPUT_CONTEXT~ to drink vodka. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.075f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("ba_prop_battle_decanter_02_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_252 = 197;
	if (__LIB_4__::func_899(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = 115f;
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = func_595(92.60599f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
}

void func_4988(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x18FCF0
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1117.5385f, -3158.6226f, -38.06276f };
	uParam0->f_261[0 /*13*/].f_3 = { 1116.6957f, -3159.3025f, -36.562756f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
	uParam0->f_319 = 2;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_252 = 196;
}

void func_4989(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x18FE0D
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.075f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("p_whiskey_bottle_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_252 = 195;
	if (__LIB_4__::func_899(PLAYER::PLAYER_ID()) || __LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = 90f;
	}
}

void func_4990(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x18FF4E
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.075f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("p_whiskey_bottle_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_252 = 194;
	if (__LIB_4__::func_899(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = 320f;
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = func_595(92.60599f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
}

void func_4991(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x1900AE
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_RUM" /* GXT: Press ~INPUT_CONTEXT~ to drink rum. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.075f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("ba_prop_battle_decanter_03_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_252 = 187;
	if (__LIB_4__::func_899(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = 240f;
	}
}

void func_4992(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x1901E1
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1117.5385f, -3158.6226f, -38.06276f };
	uParam0->f_261[0 /*13*/].f_3 = { 1116.6957f, -3159.3025f, -36.562756f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
	uParam0->f_319 = 2;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_252 = 192;
}

void func_4993(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x1902FE
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_BEER" /* GXT: Press ~INPUT_CONTEXT~ to drink a beer. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1117.5385f, -3158.6226f, -38.06276f };
	uParam0->f_261[0 /*13*/].f_3 = { 1116.6957f, -3159.3025f, -36.562756f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("prop_cs_beer_bot_01");
	uParam0->f_319 = 2;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_252 = 189;
}

void func_4994(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x19041B
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.075f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("ba_prop_battle_decanter_03_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = func_595(175.40509f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
	uParam0->f_252 = 188;
}

void func_4995(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x19055A
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_RUM" /* GXT: Press ~INPUT_CONTEXT~ to drink rum. */;
	if (__LIB_6__::func_182(__LIB_4__::func_369()))
	{
		uParam0->f_261.f_31.f_2 = "SA_VODKA" /* GXT: Press ~INPUT_CONTEXT~ to drink vodka. */;
	}
	else if (__LIB_6__::func_578(__LIB_4__::func_369()))
	{
		uParam0->f_261.f_31.f_2 = "SA_WHSKY" /* GXT: Press ~INPUT_CONTEXT~ to drink whiskey. */;
	}
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.075f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 0;
	uParam0->f_331[0] = joaat("ba_prop_battle_decanter_01_s");
	if (__LIB_6__::func_182(__LIB_4__::func_369()))
	{
		uParam0->f_331[0] = joaat("ba_prop_battle_decanter_02_s");
	}
	else if (__LIB_6__::func_578(__LIB_4__::func_369()))
	{
		uParam0->f_331[0] = joaat("ba_prop_battle_decanter_03_s");
	}
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_252 = 187;
}

void func_4998(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x19075B
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_RUM" /* GXT: Press ~INPUT_CONTEXT~ to drink rum. */;
	if (__LIB_6__::func_579(Global_1853191))
	{
		uParam0->f_261.f_31.f_2 = "SA_GIN" /* GXT: Press ~INPUT_CONTEXT~ to drink gin. */;
	}
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_253.f_2 = 1;
	uParam0->f_331[0] = joaat("ba_prop_battle_decanter_03_s");
	if (__LIB_6__::func_579(Global_1853191))
	{
		uParam0->f_331[0] = joaat("ba_prop_battle_decanter_02_s");
	}
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_252 = 184;
}

void func_5000(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x1908C5
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "FHQ_DRINK_LIMEY" /* GXT: Press ~INPUT_CONTEXT~ to drink Limey's Juice. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1009.1285f, -3166.8862f, -35.0576f };
	uParam0->f_261[0 /*13*/].f_3 = { 1009.279f, -3165.9983f, -33.0576f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
	uParam0->f_253.f_2 = 1;
	uParam0->f_331[0] = joaat("sf_p_sf_grass_gls_s_02a");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_488 = 1;
	uParam0->f_261[0 /*13*/].f_10.f_2 = func_595(275.8115f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	uParam0->f_252 = 204;
}

void func_5001(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x1909FF
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_BONG2" /* GXT: Press ~INPUT_CONTEXT~ to take a hit from the bong. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1006.6099f, -3164.746f, -35.0921f };
	uParam0->f_261[0 /*13*/].f_3 = { 1006.7067f, -3165.691f, -33.2738f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_USE_BONG";
	uParam0->f_253.f_2 = 1;
	uParam0->f_331[0] = joaat("sf_prop_sf_bong_01a");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_488 = 1;
	uParam0->f_261[0 /*13*/].f_10.f_2 = func_595(227.3487f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	uParam0->f_252 = 205;
}

void func_5002(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x190B3F
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "FHQ_DRINK_JUNK" /* GXT: Press ~INPUT_CONTEXT~ to drink Junk Energy. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1009.1285f, -3166.8862f, -35.0576f };
	uParam0->f_261[0 /*13*/].f_3 = { 1009.279f, -3165.9983f, -33.0576f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
	uParam0->f_253.f_2 = 1;
	uParam0->f_331[0] = joaat("sf_p_sf_grass_gls_s_01a");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_488 = 1;
	uParam0->f_261[0 /*13*/].f_10.f_2 = func_595(275.8115f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	uParam0->f_252 = 203;
}

void func_5003(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x190C79
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_WHEAT" /* GXT: Press ~INPUT_CONTEXT~ to drink green juice. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1009.1285f, -3166.8862f, -35.0576f };
	uParam0->f_261[0 /*13*/].f_3 = { 1009.279f, -3165.9983f, -33.0576f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
	uParam0->f_253.f_2 = 1;
	uParam0->f_331[0] = joaat("p_w_grass_gls_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_488 = 1;
	uParam0->f_261[0 /*13*/].f_10.f_2 = -90f;
	uParam0->f_252 = 202;
}

void func_5004(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x190DA7
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_WHEAT" /* GXT: Press ~INPUT_CONTEXT~ to drink green juice. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1009.1285f, -3166.8862f, -35.0576f };
	uParam0->f_261[0 /*13*/].f_3 = { 1009.279f, -3165.9983f, -33.0576f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
	uParam0->f_253.f_2 = 1;
	uParam0->f_331[0] = joaat("p_w_grass_gls_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_488 = 1;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 90f;
	uParam0->f_252 = 201;
}

void func_5005(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x190ED5
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "SA_WHEAT" /* GXT: Press ~INPUT_CONTEXT~ to drink green juice. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1009.1285f, -3166.8862f, -35.0576f };
	uParam0->f_261[0 /*13*/].f_3 = { 1009.279f, -3165.9983f, -33.0576f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_253.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
	uParam0->f_253.f_2 = 1;
	uParam0->f_331[0] = joaat("p_w_grass_gls_s");
	uParam0->f_319 = 1;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
	uParam0->f_488 = 1;
	uParam0->f_252 = 10;
	if (__LIB_4__::func_899(PLAYER::PLAYER_ID()))
	{
		uParam0->f_261[0 /*13*/].f_10.f_2 = 240f;
	}
}

void func_5006(var uParam0)//Position - 0x19100E
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5007(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x19109F
{
	uParam0->f_303 = 397015/*func_574*/;
	uParam0->f_261.f_38 = 1642959/*__LIB_6__::func_836*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_39 = 395809/*__LIB_10__::func_120*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { -1419.7618f, -3010.0015f, -80.24995f };
	uParam0->f_261[0 /*13*/].f_3 = { -1421.313f, -3009.953f, -77.74995f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_261[1 /*13*/].f_6 = 1f;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 269.7835f;
	uParam0->f_261[1 /*13*/].f_10.f_2 = 269.7835f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.3f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("ba_prop_battle_control_seat");
	uParam0->f_474 = 0;
	uParam0->f_252 = 191;
	uParam0->f_490 = 1;
}

void func_5009(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x19125E
{
	uParam0->f_303 = 1643558/*func_5011*/;
	uParam0->f_261.f_38 = 1643414/*__LIB_6__::func_837*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_39 = 398427/*__LIB_10__::func_78*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { -1422.4546f, -3011.9604f, -80.24995f };
	uParam0->f_261[0 /*13*/].f_3 = { -1420.8896f, -3012.0293f, -77.74995f };
	uParam0->f_261[0 /*13*/].f_6 = 1.25f;
	uParam0->f_261[1 /*13*/].f_6 = 1.25f;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 57.3881f;
	uParam0->f_261[1 /*13*/].f_10.f_2 = 63.4207f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.3f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("ba_prop_battle_control_seat");
	uParam0->f_474 = 0;
	uParam0->f_252 = 190;
	uParam0->f_490 = 1;
}

int func_5011(var uParam0, var uParam1, var uParam2)//Position - 0x191426
{
	bool bVar0;
	int iVar1;
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_181));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (__LIB_9__::func_365())
		{
			Global_1931614 = 1;
			bVar0 = true;
			if (__LIB_10__::func_40(uParam0[uParam2->f_181 /*13*/], 1))
			{
				if (__LIB_9__::func_443() && __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), (uParam0[uParam2->f_181 /*13*/])->f_10.f_2, 45f))
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == uParam2->f_181)
						{
						}
						else if (!__LIB_10__::func_40(uParam0[iVar1 /*13*/], 0))
						{
							bVar0 = false;
						}
						iVar1++;
					}
					if (bVar0)
					{
						if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
						{
							HUD::CLEAR_HELP(true);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_266(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
						{
							__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
						}
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
				if ((!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512()) && __LIB_7__::func_384())
				{
					__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_1(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (Global_1931614 == 1)
	{
		Global_1931614 = 0;
		if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_6__::func_514(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_5012(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x1915FF
{
	uParam0->f_303 = 1644751/*func_5015*/;
	uParam0->f_261.f_38 = 1644521/*__LIB_9__::func_765*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_39 = 1644301/*__LIB_10__::func_146*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_261[1 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("xm_prop_x17_avengerchair");
	uParam0->f_474 = 0;
	uParam0->f_252 = 180;
	uParam0->f_490 = 1;
}

int func_5015(var uParam0, var uParam1, var uParam2)//Position - 0x1918CF
{
	bool bVar0;
	int iVar1;
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_181));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (__LIB_9__::func_365())
		{
			Global_1931614 = 1;
			bVar0 = true;
			if (__LIB_10__::func_40(uParam0[uParam2->f_181 /*13*/], 1))
			{
				if (__LIB_9__::func_443())
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == uParam2->f_181)
						{
						}
						else if (!__LIB_10__::func_40(uParam0[iVar1 /*13*/], 0))
						{
							bVar0 = false;
						}
						iVar1++;
					}
					if (bVar0)
					{
						if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && !Global_1581351)
						{
							HUD::CLEAR_HELP(true);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_266(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (__LIB_0__::func_1(uParam0->f_31.f_2) && !Global_1581351)
						{
							HUD::CLEAR_HELP(true);
						}
						if (__LIB_4__::func_968(PLAYER::PLAYER_ID()))
						{
							if (__LIB_4__::func_402())
							{
								if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
								{
									__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
								}
							}
						}
						if (__LIB_4__::func_952(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_1__::func_645(Global_1853190))
							{
								if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
								{
									__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
								}
							}
						}
					}
				}
				else if (__LIB_0__::func_1(uParam0->f_31.f_2) && !Global_1581351)
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else
			{
				if (__LIB_0__::func_1(uParam0->f_31.f_2) && !Global_1581351)
				{
					HUD::CLEAR_HELP(true);
				}
				if (__LIB_4__::func_968(PLAYER::PLAYER_ID()))
				{
					if (__LIB_4__::func_402())
					{
						if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
						{
							__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
						}
					}
				}
				if (__LIB_4__::func_952(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_1__::func_645(Global_1853190))
					{
						if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
						{
							__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
						}
					}
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && !Global_1581351)
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_1(uParam0->f_31.f_2) && !Global_1581351)
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (Global_1931614 == 1)
	{
		Global_1931614 = 0;
		if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && !Global_1581351)
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_6__::func_514(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_5016(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x191B1D
{
	uParam0->f_303 = 1644751/*func_5015*/;
	uParam0->f_261.f_38 = 1644521/*__LIB_9__::func_765*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_39 = 1644301/*__LIB_10__::func_146*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_261[1 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("xm_prop_x17_avengerchair");
	uParam0->f_474 = 0;
	uParam0->f_252 = 181;
	uParam0->f_490 = 1;
}

void func_5017(var uParam0, var uParam1)//Position - 0x191C2B
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	uParam1->f_67 = uParam0->f_335;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_569 = 1;
	uParam0->f_474 = 0;
}

void func_5018(var uParam0, var uParam1)//Position - 0x191C8F
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	uParam1->f_67 = uParam0->f_335;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_GR_Chair02_ped");
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
	{
		uParam0->f_331[0] = MISC::GET_HASH_KEY("xm_prop_x17_corp_offchair");
	}
	uParam0->f_474 = 0;
}

void func_5019(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x191D1A
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 1646481/*__LIB_9__::func_445*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) || __LIB_6__::func_527(3))
	{
		uParam0->f_261.f_38 = 1646390/*__LIB_6__::func_841*/;
	}
	uParam0->f_261.f_39 = 1646247/*__LIB_10__::func_121*/;
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) || __LIB_6__::func_527(3))
	{
		uParam0->f_261.f_39 = 1646201/*__LIB_10__::func_79*/;
	}
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_261[1 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("gr_prop_highendchair_gr_01a");
	if (__LIB_6__::func_527(3))
	{
		uParam0->f_331[0] = joaat("xm_prop_x17_avengerchair_02");
	}
	uParam0->f_474 = 0;
	uParam0->f_490 = 1;
}

void func_5024(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73)//Position - 0x1920A7
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 1646481/*__LIB_9__::func_445*/;
	if (__LIB_6__::func_527(3))
	{
		uParam0->f_261.f_38 = 1647096/*__LIB_6__::func_842*/;
	}
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_39 = 1646247/*__LIB_10__::func_121*/;
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) || __LIB_6__::func_527(3))
	{
		uParam0->f_261.f_39 = 1646201/*__LIB_10__::func_79*/;
	}
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1121.2943f, -3146.8977f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1122.2415f, -3146.9692f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_261[1 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.2f;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_475 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_259 = Param1.f_1;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = joaat("gr_prop_highendchair_gr_01a");
	if (__LIB_6__::func_527(3))
	{
		uParam0->f_331[0] = joaat("xm_prop_x17_avengerchair_02");
	}
	uParam0->f_474 = 0;
	uParam0->f_490 = 1;
}

void func_5026(var uParam0)//Position - 0x19227A
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_bulletscrate_01a");
	uParam0->f_474 = 0;
}

void func_5027(var uParam0)//Position - 0x1922E0
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_GR_Chair02_ped");
	uParam0->f_474 = 0;
}

void func_5028(var uParam0)//Position - 0x192346
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_252 = 175;
	uParam0->f_474 = 0;
}

void func_5029(var uParam0)//Position - 0x1923A1
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_GR_Chair02_ped");
	uParam0->f_474 = 0;
}

void func_5030(var uParam0)//Position - 0x192407
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5031(var uParam0)//Position - 0x19245C
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5032(var uParam0)//Position - 0x1924B1
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_474 = 0;
}

void func_5033(var uParam0)//Position - 0x192517
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_474 = 0;
}

void func_5034(var uParam0)//Position - 0x19257D
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5035(var uParam0)//Position - 0x1925D2
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5036(var uParam0)//Position - 0x192627
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_mug_04");
	uParam0->f_474 = 0;
}

void func_5037(var uParam0)//Position - 0x19268D
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 902.525f, -3214.994f, -99.23f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, -10f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	if (Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_191[5 /*13*/].f_3 < 50)
	{
		uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_millcrate_01a");
	}
	else
	{
		uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a");
	}
	uParam0->f_474 = 0;
}

void func_5038(var uParam0)//Position - 0x1927F2
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 902.525f, -3214.994f, -99.23f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, -10f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	if (Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_191[5 /*13*/].f_3 < 50)
	{
		uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_millcrate_01a");
	}
	else
	{
		uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a");
	}
	uParam0->f_474 = 0;
}

void func_5039(var uParam0, int iParam1)//Position - 0x192957
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 893.334f, -3226.037f, -99.247f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 180f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	if (iParam1 == 0)
	{
		if (Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_191[5 /*13*/].f_3 < 50)
		{
			uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		}
		else
		{
			uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a");
		}
	}
	else
	{
		uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
	}
	uParam0->f_474 = 0;
}

void func_5040(var uParam0, int iParam1)//Position - 0x192AD7
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 893.334f, -3226.037f, -99.247f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 180f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	if (iParam1 == 0)
	{
		if (Global_1853348[Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 /*834*/].f_267.f_191[5 /*13*/].f_3 < 50)
		{
			uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		}
		else
		{
			uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a");
		}
	}
	else
	{
		uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
	}
	uParam0->f_474 = 0;
}

void func_5041(var uParam0)//Position - 0x192C57
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	uParam0->f_474 = 0;
}

void func_5042(var uParam0)//Position - 0x192D84
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	uParam0->f_474 = 0;
}

void func_5043(var uParam0)//Position - 0x192EB1
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Counterfeit_01");
	uParam0->f_336[0 /*66*/].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	uParam0->f_474 = 0;
}

void func_5044(var uParam0)//Position - 0x192FDE
{
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
}

int func_5045(var uParam0)//Position - 0x19302E
{
	int iVar0;
	if (!uParam0->f_148)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if ((uParam0->f_77[iVar0 /*35*/].f_17 != 0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_77[iVar0 /*35*/].f_17, false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_77[iVar0 /*35*/].f_1)))
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_77[iVar0 /*35*/].f_17, &(uParam0->f_77[iVar0 /*35*/].f_1), uParam0->f_5, uParam0->f_8.f_2, 0, false, true);
			}
			iVar0++;
		}
		uParam0->f_148 = 1;
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_77[0 /*35*/].f_17, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION")) != 1)
	{
		uParam0->f_148 = 0;
		return 0;
	}
	return 1;
}

void func_5046(var uParam0)//Position - 0x1930DA
{
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
}

void func_5047(var uParam0)//Position - 0x19312A
{
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
}

void func_5048(var uParam0)//Position - 0x19317A
{
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
}

void func_5049(var uParam0)//Position - 0x1931CA
{
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
}

void func_5050(var uParam0)//Position - 0x19321A
{
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/] = 1;
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_336[0 /*66*/].f_1[2 /*3*/] = 1;
	uParam0->f_336[0 /*66*/].f_1[2 /*3*/].f_1 = 2;
	uParam0->f_336[0 /*66*/].f_1[3 /*3*/] = 1;
	uParam0->f_336[0 /*66*/].f_1[3 /*3*/].f_1 = 1;
	uParam0->f_336[0 /*66*/].f_1[4 /*3*/].f_1 = 3;
	uParam0->f_336[0 /*66*/].f_1[11 /*3*/] = 2;
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
}

void func_5051(var uParam0)//Position - 0x1932E3
{
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
}

void func_5052(var uParam0)//Position - 0x193333
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 351.1694f };
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5053(var uParam0)//Position - 0x193452
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 965.6154f, -3002.2148f, -40.6349f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 147.9137f };
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5054(var uParam0)//Position - 0x193571
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1650734/*func_5045*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_336[0 /*66*/].f_58 = { 969.3016f, -2999.4626f, -40.6471f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.1876f };
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5055(var uParam0)//Position - 0x193690
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_331[0] = MISC::GET_HASH_KEY("TAILGATER" /* GXT: Tailgater */);
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5056(var uParam0)//Position - 0x193781
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5057(var uParam0)//Position - 0x193872
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5058(var uParam0)//Position - 0x193952
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5059(var uParam0)//Position - 0x193A32
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 0;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_papercutter");
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5060(var uParam0, var uParam1)//Position - 0x193B23
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/] = 1;
	uParam0->f_335 = 1;
	uParam1->f_67 = uParam0->f_335;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_473 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_weed_chair_01a");
	uParam0->f_474 = 0;
}

void func_5061(var uParam0)//Position - 0x193C67
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/] = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_473 = 1;
	uParam0->f_474 = 0;
}

void func_5062(var uParam0)//Position - 0x193D91
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_Y_DockWork_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("p_loose_rag_01_s");
	uParam0->f_474 = 0;
}

void func_5063(var uParam0)//Position - 0x193ECE
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_Y_DockWork_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	uParam0->f_474 = 0;
}

void func_5064(var uParam0)//Position - 0x19400E
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/] = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_473 = 1;
	uParam0->f_474 = 0;
}

void func_5065(var uParam0)//Position - 0x194138
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/] = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_npc_phone");
	if (uParam0->f_566 != 0)
	{
		if (uParam0->f_566 == joaat("bkr_biker_dlc_int_ware02"))
		{
		}
	}
	uParam0->f_473 = 1;
	uParam0->f_474 = 0;
}

void func_5066(var uParam0)//Position - 0x194289
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/] = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_meth_scoop_01a");
	uParam0->f_473 = 1;
	uParam0->f_474 = 0;
}

void func_5067(var uParam0)//Position - 0x1943C4
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_473 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("w_me_hammer");
	uParam0->f_474 = 0;
}

void func_5068(var uParam0)//Position - 0x1944F1
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Cocaine_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_473 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_npc_phone");
	uParam0->f_474 = 0;
}

void func_5069(var uParam0)//Position - 0x19462E
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Cocaine_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_473 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_npc_phone");
	uParam0->f_474 = 0;
}

void func_5070(var uParam0)//Position - 0x19476B
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Cocaine_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_474 = 0;
}

void func_5071(var uParam0)//Position - 0x1948A8
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Cocaine_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_473 = 1;
	uParam0->f_474 = 0;
}

void func_5072(var uParam0)//Position - 0x1949E5
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_336[0 /*66*/].f_1[2 /*3*/] = 1;
	uParam0->f_336[0 /*66*/].f_1[8 /*3*/] = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_474 = 0;
}

void func_5073(var uParam0)//Position - 0x194B3F
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Meth_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_335 = 1;
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 2;
	uParam0->f_336[0 /*66*/].f_1[2 /*3*/] = 1;
	uParam0->f_336[0 /*66*/].f_1[3 /*3*/] = 1;
	uParam0->f_336[0 /*66*/].f_1[8 /*3*/] = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_meth_sacid");
	uParam0->f_474 = 0;
}

void func_5074(var uParam0)//Position - 0x194CA7
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("A_M_Y_MexThug_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 10;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_openpassport");
	uParam0->f_474 = 0;
}

void func_5075(var uParam0)//Position - 0x194DE4
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("A_M_Y_MexThug_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("prop_ing_camera_01");
	uParam0->f_474 = 0;
}

void func_5076(var uParam0)//Position - 0x194F21
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_M_CntryBar_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("close_inspection_ruler");
	uParam0->f_474 = 0;
}

void func_5077(var uParam0)//Position - 0x19505E
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_Y_DockWork_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	uParam0->f_474 = 0;
}

void func_5078(var uParam0)//Position - 0x19519B
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_Y_DockWork_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	uParam0->f_474 = 0;
}

void func_5079(var uParam0)//Position - 0x1952D8
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_M_Migrant_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_weed_spray_01a");
	uParam0->f_474 = 0;
}

void func_5080(var uParam0)//Position - 0x195415
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_M_Migrant_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5081(var uParam0)//Position - 0x195541
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_M_Migrant_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_weed_spray_01a");
	uParam0->f_474 = 0;
}

void func_5082(var uParam0)//Position - 0x19567E
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = MISC::GET_HASH_KEY("mp_m_weed_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5083(var uParam0)//Position - 0x1957A8
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_473 = 1;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_M_Migrant_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_319 = 8;
	uParam0->f_320 = 0;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_474 = 0;
}

void func_5084(var uParam0)//Position - 0x1958E5
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_M_DockWork_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_papercutter");
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5085(var uParam0)//Position - 0x195A21
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_M_DockWork_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_money_pokerbucket");
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5086(var uParam0)//Position - 0x195B5D
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_307 = 1662114/*func_5087*/;
	uParam0->f_336[0 /*66*/] = joaat("S_F_M_SweatShop_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_clubhouse_chair_01");
	uParam0->f_319 = 4;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5087(var uParam0)//Position - 0x195CA2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uParam0->f_24[iVar0 /*52*/].f_8 != 0)
		{
			__LIB_6__::func_584(&(uParam0->f_24[0 /*52*/].f_41[0 /*10*/]), uParam0, uParam0->f_24[0 /*52*/].f_8, uParam0->f_77[0 /*35*/].f_17);
		}
		iVar0++;
	}
}

void func_5089(var uParam0)//Position - 0x195E16
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "MPYACHT_LEAN" /* GXT: Press ~INPUT_CONTEXT~ to lean on the rail. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("S_M_Y_Construct_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_336[0 /*66*/].f_1[0 /*3*/].f_1 = 1;
	uParam0->f_335 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_scrunched_moneypage");
	uParam0->f_319 = 7;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5090(var uParam0)//Position - 0x195F3F
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Cocaine_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_coke_fullscoop_01a");
	uParam0->f_319 = 2;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5091(var uParam0)//Position - 0x19606B
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/] = joaat("MP_M_Cocaine_01");
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_335 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_coke_fullmetalbowl_02");
	uParam0->f_319 = 2;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5092(var uParam0)//Position - 0x196197
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_336[0 /*66*/].f_58 = { 1010.1063f, -3199.759f, -39.9931f };
	uParam0->f_336[0 /*66*/].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_335 = 1;
	uParam0->f_492.f_64 = 1;
	uParam0->f_492.f_63 = 0.15f;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_473 = 1;
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_coke_bakingsoda_o");
	uParam0->f_319 = 2;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5093(var uParam0)//Position - 0x1962CA
{
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 1;
	uParam0->f_473 = 1;
	StringCopy(&(uParam0->f_210[0 /*39*/]), "AwakeState", 64);
	uParam0->f_331[0] = MISC::GET_HASH_KEY("bkr_prop_coke_bakingsoda_o");
	uParam0->f_319 = 2;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5094(var uParam0)//Position - 0x1963BB
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "MPYACHT_LEAN" /* GXT: Press ~INPUT_CONTEXT~ to lean on the rail. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_261[0 /*13*/].f_10.f_2 = 240f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_4 = 0.5f;
	uParam0->f_308.f_4.f_1 = 6500;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

void func_5095(var uParam0)//Position - 0x1964CD
{
	uParam0->f_303 = 1668553/*func_5126*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "MPYACHT_LEAN" /* GXT: Press ~INPUT_CONTEXT~ to lean on the rail. */;
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_486 = 1;
	uParam0->f_304 = 1668446/*__LIB_6__::func_513*/;
	uParam0->f_308.f_4.f_2 = 0.05f;
	uParam0->f_308.f_4 = 0.5f;
	uParam0->f_308.f_4.f_1 = 6500;
	uParam0->f_308.f_10 = 1668293/*__LIB_6__::func_701*/;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1667344/*func_5120*/;
	uParam0->f_319 = 3;
	uParam0->f_320 = 0;
	uParam0->f_474 = 0;
}

int func_5096(var uParam0)//Position - 0x1965CE
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_148)
	{
		uParam0->f_17.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_5, uParam0->f_8, uParam0->f_17);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_77[iVar0 /*35*/].f_17))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_77[iVar0 /*35*/].f_17, false) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_77[iVar0 /*35*/].f_1))) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_77[iVar0 /*35*/].f_17))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_77[iVar0 /*35*/].f_17, uParam0->f_17.f_6, uParam0->f_77[iVar0 /*35*/], &(uParam0->f_77[iVar0 /*35*/].f_1), uParam0->f_77[iVar0 /*35*/].f_18, uParam0->f_77[iVar0 /*35*/].f_19, uParam0->f_77[iVar0 /*35*/].f_20 | 4 | 1, 16, 1000f, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_77[iVar0 /*35*/].f_17, 64);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_24[iVar0 /*52*/].f_8) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_24[iVar0 /*52*/].f_1))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_24[iVar0 /*52*/].f_8, uParam0->f_17.f_6, uParam0->f_24[iVar0 /*52*/].f_1, uParam0->f_24[iVar0 /*52*/], uParam0->f_24[iVar0 /*52*/].f_9, uParam0->f_24[iVar0 /*52*/].f_10, 0, 1000f);
			}
			iVar0++;
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_17.f_6, uParam0->f_17.f_4);
		PED::SET_SYNCHRONIZED_SCENE_RATE(uParam0->f_17.f_6, uParam0->f_17.f_5);
		uParam0->f_148 = 1;
	}
	else
	{
		iVar1 = uParam0->f_17.f_6;
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_17.f_6))
		{
			func_5097(uParam0);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 1f)
			{
				uParam0->f_148 = 0;
				return 0;
			}
		}
	}
	return 1;
}

void func_5097(var uParam0)//Position - 0x19678B
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_17.f_6);
	if (iVar0 != -1)
	{
		if (uParam0->f_184 > -1f)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_184 && uParam0->f_188 == 0)
			{
				__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, 1);
				uParam0->f_188 = 1;
			}
		}
		if (uParam0->f_185 > -1f)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_185 && uParam0->f_187 == 0)
			{
				__LIB_7__::func_43(PLAYER::PLAYER_PED_ID(), 0, 1, 0, -1);
				uParam0->f_187 = 1;
			}
		}
		if (uParam0->f_186 > -1f)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_186 && uParam0->f_189 == 0)
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				uParam0->f_189 = 1;
			}
		}
	}
}

int func_5119(var uParam0, var uParam1, var uParam2)//Position - 0x1970FC
{
	func_266(*uParam1, uParam2);
	return 1;
}

int func_5120(var uParam0)//Position - 0x197110
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!uParam0->f_148)
	{
		uParam0->f_17.f_6 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_5, uParam0->f_8, uParam0->f_17, uParam0->f_17.f_1, uParam0->f_17.f_2, uParam0->f_17.f_3, uParam0->f_17.f_4, uParam0->f_17.f_5);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam0->f_77[iVar0 /*35*/].f_17 != 0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_77[iVar0 /*35*/].f_17, false))
			{
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(uParam0->f_77[iVar0 /*35*/].f_17, uParam0->f_17.f_6, uParam0->f_77[iVar0 /*35*/], &(uParam0->f_77[iVar0 /*35*/].f_1), uParam0->f_77[iVar0 /*35*/].f_18, uParam0->f_77[iVar0 /*35*/].f_19, uParam0->f_77[iVar0 /*35*/].f_20, 0, 1000f, 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_24[iVar0 /*52*/].f_8 != 0 && !uParam0->f_190[iVar0])
			{
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_24[iVar0 /*52*/].f_8, uParam0->f_17.f_6, uParam0->f_24[iVar0 /*52*/], uParam0->f_24[iVar0 /*52*/].f_1, uParam0->f_24[iVar0 /*52*/].f_9, uParam0->f_24[iVar0 /*52*/].f_10, uParam0->f_24[iVar0 /*52*/].f_11 | 1);
			}
			iVar0++;
		}
		uParam0->f_148 = 1;
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_17.f_6);
	}
	else
	{
		iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_17.f_6);
		if (iVar1 != -1)
		{
			func_5097(uParam0);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= uParam0->f_17.f_3)
			{
				uParam0->f_148 = 0;
				return 0;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("exit_interrupt")) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= uParam0->f_195)
			{
				__LIB_0__::func_603(&iVar2, &iVar3, &iVar4, &iVar5, 1);
				if (((MISC::ABSI(iVar2) > 31 || MISC::ABSI(iVar3) > 31) || MISC::ABSI(iVar4) > 31) || MISC::ABSI(iVar5) > 31)
				{
					uParam0->f_148 = 0;
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_5122(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1973E0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam2[iVar0 /*9*/])->f_8))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((uParam2[iVar0 /*9*/])->f_8))
			{
				uParam0->f_24[iVar0 /*52*/].f_8 = (uParam2[iVar0 /*9*/])->f_8;
				(*uParam1)[iVar0] = (uParam2[iVar0 /*9*/])->f_8;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY((uParam2[iVar0 /*9*/])->f_8);
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]) && uParam0->f_77[iVar0 /*35*/].f_17 != (*uParam3)[iVar0])
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((*uParam3)[iVar0]))
			{
				uParam0->f_77[iVar0 /*35*/].f_17 = (*uParam3)[iVar0];
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY((*uParam3)[iVar0]);
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]))
		{
		}
		iVar0++;
	}
	return 1;
}

int func_5126(var uParam0, var uParam1, var uParam2)//Position - 0x1975C9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 1;
	if ((__LIB_4__::func_899(PLAYER::PLAYER_ID()) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		iVar0 = 0;
	}
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_181));
	Call_Loc(uParam0->f_40);
	if ((StackVal && (iVar0 || __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), (uParam0[uParam2->f_181 /*13*/])->f_10.f_2, 45f))) && !(__LIB_3__::func_597() && __LIB_4__::func_900(PLAYER::PLAYER_ID())))
	{
		if (__LIB_9__::func_365())
		{
			Global_1931614 = 1;
			bVar1 = true;
			if (__LIB_10__::func_40(uParam0[uParam2->f_181 /*13*/], 1))
			{
				if (__LIB_9__::func_443())
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 2)
					{
						if (iVar2 == uParam2->f_181)
						{
						}
						else if (!__LIB_10__::func_40(uParam0[iVar2 /*13*/], 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
						{
							HUD::CLEAR_HELP(true);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_266(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
						{
							__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
						}
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) && __LIB_6__::func_512())
				{
					__LIB_0__::func_151("POD_TOO_MANY" /* GXT: Too many players near activity. */, -1);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && __LIB_0__::func_1(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (Global_1931614 == 1)
	{
		Global_1931614 = 0;
		if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_6__::func_514(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_5128(var uParam0, var uParam1)//Position - 0x1978D2
{
	uParam0->f_307 = 1669546/*func_5129*/;
	uParam0->f_486 = 0;
	uParam0->f_303 = 1667324/*func_5119*/;
	uParam0->f_261.f_38 = 331059/*__LIB_6__::func_848*/;
	uParam0->f_261.f_41 = 315233/*__LIB_7__::func_378*/;
	uParam0->f_261.f_31.f_2 = "";
	uParam0->f_261.f_39 = 375265/*__LIB_6__::func_508*/;
	uParam0->f_261.f_27 = 2;
	uParam0->f_261.f_27.f_1 = 51;
	uParam0->f_261.f_40 = 1668475/*__LIB_6__::func_507*/;
	uParam0->f_261[0 /*13*/] = { 1111.7524f, -3160.4717f, -38.0723f };
	uParam0->f_261[0 /*13*/].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_261[0 /*13*/].f_6 = 1f;
	uParam0->f_306 = 1668064/*func_5122*/;
	uParam0->f_305 = 1664462/*func_5096*/;
	uParam0->f_335 = 0;
	uParam1->f_67 = uParam0->f_335;
	uParam0->f_473 = 0;
	uParam0->f_474 = 0;
}

void func_5129(var uParam0)//Position - 0x1979AA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uParam0->f_24[iVar0 /*52*/].f_8 != 0)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				__LIB_6__::func_586(&(uParam0->f_24[iVar0 /*52*/].f_41[iVar1 /*10*/]), uParam0, uParam0->f_24[iVar0 /*52*/].f_8, uParam0->f_77[0 /*35*/].f_17);
				iVar1++;
			}
		}
		iVar0++;
	}
}

