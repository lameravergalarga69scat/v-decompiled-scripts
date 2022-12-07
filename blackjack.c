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
	var uLocal_85 = -1;
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
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<1652> Local_109 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	struct<8> Local_118[32];
	struct<1583> Local_119 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<26> Local_124 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_125 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128[4] = { 0, 0, 0, 0 };
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	bool bLocal_138 = 0;
	bool bLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	bool bLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	iLocal_129 = 1;
	func_441();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (__LIB_6__::func_949())
		{
			func_429();
		}
		if (Global_1966099)
		{
			Global_1966099 = 0;
			func_429();
		}
		if (Global_2667225.f_2681 && Global_2671449 != 0)
		{
			if (Global_2671449 != 6)
			{
				func_429();
			}
		}
		if (__LIB_10__::func_860() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_429();
		}
		if ((!__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !__LIB_2__::func_83(PLAYER::PLAYER_ID())) && !__LIB_1__::func_351(PLAYER::PLAYER_ID()))
		{
			func_429();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !BitTest(Global_4718592.f_34, 7))
		{
			func_429();
		}
		if (__LIB_2__::func_83(PLAYER::PLAYER_ID()) && __LIB_25__::func_805() != __LIB_0__::func_160())
		{
			if (BitTest(Global_2689235[__LIB_25__::func_805() /*453*/].f_318.f_4, 1) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_429();
			}
		}
		if (__LIB_2__::func_83(PLAYER::PLAYER_ID()) && __LIB_25__::func_805() != __LIB_0__::func_160())
		{
			if (Global_2689235[__LIB_25__::func_805() /*453*/].f_447 != Global_1966109 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_429();
			}
		}
		if (__LIB_2__::func_83(PLAYER::PLAYER_ID()) && __LIB_6__::func_25() != 0)
		{
			func_429();
		}
		if (__LIB_2__::func_83(PLAYER::PLAYER_ID()) && __LIB_20__::func_491(PLAYER::PLAYER_ID()))
		{
			func_429();
		}
		iVar0 = 0;
		while (iVar0 < Local_119.f_257)
		{
			if (!__LIB_31__::func_639())
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_1595[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iVar0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_1595[iVar0], true);
				}
			}
			iVar0++;
		}
		func_86();
		if (__LIB_31__::func_639())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x238
{
	int iVar0;
	int iVar1;
	func_85();
	func_82();
	func_75();
	iVar0 = 0;
	while (iVar0 < Local_119.f_257)
	{
		switch (Local_109.f_1520[iVar0])
		{
			case 0:
				if (Global_2788828 != iVar0 && (Global_2788828 != -1 || __LIB_2__::func_83(PLAYER::PLAYER_ID())))
				{
					Local_109.f_1560[iVar0] = 1;
					func_74(&(Local_109.f_1[iVar0 /*211*/]));
					func_73(1, iVar0);
				}
				break;
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iVar0]))
					{
						Local_109.f_1590[iVar0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_1580[iVar0]);
						if (Local_109.f_1590[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), __LIB_31__::func_627(), func_71(iVar0), 3))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), joaat("break_out")))
								{
									Local_109.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), Local_109.f_1580[iVar0], __LIB_31__::func_627(), func_68(iVar0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iVar0]);
								}
							}
							else if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), joaat("break_out")))
							{
								Local_109.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), Local_109.f_1580[iVar0], __LIB_31__::func_627(), func_71(iVar0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_109.f_1600[(iVar0 * 4 + iVar1)] != __LIB_0__::func_160() && Global_2788828 != iVar0) && (Global_2788828 != -1 || __LIB_2__::func_83(PLAYER::PLAYER_ID())))
					{
						func_73(2, iVar0);
						Local_109.f_1585[iVar0] = iVar1;
						__LIB_0__::func_580(&(Local_109.f_1651[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0])))
				{
					if (__LIB_0__::func_649(&(Local_109.f_1651[iVar0 /*2*/])) && __LIB_2__::func_47(&(Local_109.f_1651[iVar0 /*2*/]), 2000, 0))
					{
						Local_109.f_1580[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]), Local_109.f_1580[iVar0], __LIB_31__::func_627(), func_64(iVar0, Local_109.f_1585[iVar0]), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iVar0]);
						__LIB_0__::func_579(&(Local_109.f_1651[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x60A
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var11;
	bVar5 = false;
	if (Local_109.f_1515[iParam0] > 4 && Local_109.f_1515[iParam0] < 9)
	{
		bVar5 = true;
	}
	if ((!func_62(iParam0, bVar5) || Global_2788828 == iParam0) || Local_109.f_1530[iParam0])
	{
		Local_109.f_1530[iParam0] = 1;
		func_61(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_1595[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
		{
			Local_109.f_1540[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]);
		}
		else if (!Local_109.f_1540[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_1595[iParam0], false);
			Local_109.f_1540[iParam0] = 1;
		}
	}
	Local_109.f_1590[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_1580[iParam0]);
	switch (Local_109.f_1515[iParam0])
	{
		case 0:
			func_60(1, iParam0);
			break;
		case 1:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (Local_118[iVar2 /*8*/] != 0 || Local_118[iVar2 /*8*/].f_5 != 0)
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_59(&(Local_109.f_1[iParam0 /*211*/]));
				func_60(2, iParam0);
			}
			break;
		case 2:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (!BitTest(Local_118[iVar2 /*8*/].f_5, 0))
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
				{
					Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_57(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
					func_47(4, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1);
				}
				func_60(3, iParam0);
			}
			break;
		case 3:
			bVar1 = true;
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
			{
				if ((Local_109.f_1590[iParam0] != -1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_57(iParam0), 3)) && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out"))))
				{
					Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
				{
					if (Local_109.f_1590[iParam0] != -1)
					{
						if (Local_109.f_1570[iParam0] == 1)
						{
							if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out"))) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_71(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 3), 3))
						{
							Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_45(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_71(iParam0), 3))
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_68(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
							}
						}
						else if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
						{
							Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]);
				}
			}
			if (!__LIB_0__::func_649(&(Local_109.f_1642[iParam0 /*2*/])))
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (BitTest(Local_118[iVar2 /*8*/], 15))
						{
							__LIB_0__::func_580(&(Local_109.f_1642[iParam0 /*2*/]), 0, 0);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_109.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (!BitTest(Local_118[iVar2 /*8*/], 15) && !BitTest(Local_118[iVar2 /*8*/], 16))
						{
							bVar1 = false;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0)
				{
					if (bVar1)
					{
						__LIB_0__::func_579(&(Local_109.f_1642[iParam0 /*2*/]));
						func_47(16, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1);
						func_60(4, iParam0);
					}
					else if (__LIB_2__::func_47(&(Local_109.f_1642[iParam0 /*2*/]), 15000, 0))
					{
						if (!func_44(iParam0, 22))
						{
							if (func_47(14, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
							{
								func_43(iParam0, 22);
							}
						}
					}
				}
				else
				{
					__LIB_0__::func_579(&(Local_109.f_1642[iParam0 /*2*/]));
				}
			}
			break;
		case 4:
			func_36(iParam0);
			break;
		case 5:
			if (func_35(Local_109.f_846[iParam0 /*13*/][1]) == 10 || func_35(Local_109.f_846[iParam0 /*13*/][1]) == 11)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
				{
					if (func_34(&(Local_109.f_846[iParam0 /*13*/]), 0) == 21)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_33(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
							}
							else if (((Local_109.f_1590[iParam0] == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
							{
								MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
								func_29(iParam0);
								func_60(9, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
							{
								Local_109.f_1525[iParam0] = 1;
							}
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
					{
						if (!BitTest(Local_109.f_1555[iParam0], 12))
						{
							Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_28(iParam0), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
							MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
						}
						else if (((Local_109.f_1590[iParam0] == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
						{
							MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
							__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
							Local_109.f_1535[iParam0] = 0;
							func_60(6, iParam0);
						}
					}
				}
				else
				{
					__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
					Local_109.f_1535[iParam0] = 0;
					func_60(6, iParam0);
				}
			}
			else
			{
				__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
				Local_109.f_1535[iParam0] = 0;
				func_60(6, iParam0);
			}
			break;
		case 6:
			iVar3 = (iParam0 * 4 + Local_109.f_1575[iParam0]);
			bVar4 = Local_109.f_1600[iVar3];
			if (Local_109.f_1575[iParam0] < 4)
			{
				if ((bVar4 != __LIB_0__::func_160() && BitTest(Local_118[bVar4 /*8*/], 15)) && !((!BitTest(Local_118[bVar4 /*8*/], 14) && func_27(&(Local_109.f_899[bVar4 /*9*/])) == 21) && Local_109.f_899[bVar4 /*9*/].f_8 == 2))
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
					{
						if (!BitTest(Local_109.f_1555[iParam0], (0 + Local_109.f_1575[iParam0] * 3)))
						{
							if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out"))) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_71(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_26(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), (0 + Local_109.f_1575[iParam0] * 3));
							}
						}
						else if (!BitTest(Local_109.f_1555[iParam0], (1 + Local_109.f_1575[iParam0] * 3)))
						{
							if ((Local_109.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_26(iParam0, Local_109.f_1575[iParam0], bVar4), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), (1 + Local_109.f_1575[iParam0] * 3));
							}
						}
						if (BitTest(Local_118[bVar4 /*8*/], 14) && (BitTest(Local_118[bVar4 /*8*/], 13) || BitTest(Local_118[bVar4 /*8*/], 11)))
						{
							if (((((((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_23(iParam0);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), (1 + Local_109.f_1575[iParam0] * 3));
							}
						}
						if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 0, bVar4, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 1, bVar4, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 2, bVar4, 0), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_25(iParam0, 3, bVar4, 0), 3))
						{
							if (!__LIB_0__::func_649(&(Local_109.f_1633[iParam0 /*2*/])))
							{
								__LIB_0__::func_580(&(Local_109.f_1633[iParam0 /*2*/]), 0, 0);
							}
							else if (__LIB_2__::func_47(&(Local_109.f_1633[iParam0 /*2*/]), 20000, 0))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
							}
						}
						else
						{
							__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
						}
					}
					if (BitTest(Local_109.f_1555[iParam0], (1 + Local_109.f_1575[iParam0] * 3)))
					{
						if ((BitTest(Local_118[bVar4 /*8*/], 14) && !BitTest(Local_118[bVar4 /*8*/], 13)) && !(BitTest(Local_118[bVar4 /*8*/], 11) && Local_109.f_1188[bVar4 /*9*/].f_8 > 2))
						{
							if (!BitTest(Local_109.f_1565[iParam0], bVar4))
							{
								if (!BitTest(Local_109.f_1555[iParam0], 12))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
										{
											Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_22(iParam0, Local_109.f_1575[iParam0]), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
											Local_109.f_1535[iParam0] = 0;
											func_15(func_21(iParam0, 0, Local_109.f_1575[iParam0], 1), Local_109.f_899[bVar4 /*9*/][1], 0, 0);
											MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
								{
									fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
										{
											if (Local_109.f_899[bVar4 /*9*/].f_8 == 1)
											{
												Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
												Local_109.f_1535[iParam0] = 1;
												func_15(func_21(iParam0, Local_109.f_899[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else if (Local_109.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 4f, -4f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_109.f_1188[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else
											{
												Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
												MISC::SET_BIT(&(Local_109.f_1565[iParam0]), bVar4);
												MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
												MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
												if (Local_109.f_899[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_899[bVar4 /*9*/][1] = uVar0;
													Local_109.f_899[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
												}
												if (Local_109.f_1188[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_1188[bVar4 /*9*/][1] = uVar0;
													Local_109.f_1188[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
												}
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
										{
											Local_109.f_1535[iParam0] = 1;
											if (Local_109.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_1188[bVar4 /*9*/][1] = uVar0;
												Local_109.f_1188[bVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
										{
											if (Local_109.f_899[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_899[bVar4 /*9*/][1] = uVar0;
												Local_109.f_899[bVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_22(iParam0, Local_109.f_1575[iParam0]), 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("showcard")))
										{
											if (Local_109.f_899[bVar4 /*9*/].f_8 == 2)
											{
												Local_109.f_0 = Local_109.f_899[bVar4 /*9*/][1];
												Local_109.f_899[bVar4 /*9*/][1] = 0;
												Local_109.f_899[bVar4 /*9*/].f_8 = 1;
											}
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
										{
											if (Local_109.f_1188[bVar4 /*9*/].f_8 == 0)
											{
												Local_109.f_1188[bVar4 /*9*/][0] = Local_109.f_0;
												Local_109.f_1188[bVar4 /*9*/].f_8 = 1;
												Local_109.f_899[bVar4 /*9*/][1] = 0;
												Local_109.f_899[bVar4 /*9*/].f_8 = 1;
												MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
											}
											Local_109.f_1535[iParam0] = 1;
										}
									}
								}
							}
							else if (!BitTest(Local_118[bVar4 /*8*/], 11))
							{
								if ((((func_27(&(Local_109.f_1188[bVar4 /*9*/])) < 21 && !BitTest(Local_118[bVar4 /*8*/], 13)) && Local_109.f_1188[bVar4 /*9*/].f_8 <= 6) && Local_109.f_1188[bVar4 /*9*/].f_8 > 0) || BitTest(Local_109.f_1555[iParam0], 12))
								{
									if ((((((BitTest(Local_118[bVar4 /*8*/], 5) && Local_109.f_1188[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_118[bVar4 /*8*/], 6) && Local_109.f_1188[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_118[bVar4 /*8*/], 7) && Local_109.f_1188[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_118[bVar4 /*8*/], 8) && Local_109.f_1188[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_118[bVar4 /*8*/], 9) && Local_109.f_1188[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_109.f_1555[iParam0], 12))
									{
										if (!BitTest(Local_109.f_1555[iParam0], 12))
										{
											if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
											{
												if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
												{
													Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
													func_15(func_21(iParam0, Local_109.f_1188[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
													MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
												}
											}
										}
										else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
										{
											fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]);
											if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
											{
												if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
												{
													Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
													MISC::SET_BIT(&(Local_109.f_1565[iParam0]), bVar4);
													if (!BitTest(Local_109.f_1555[iParam0], 19))
													{
														func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
														Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
														Local_109.f_1188[bVar4 /*9*/].f_8++;
														func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
														MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
													}
													MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
													MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
												}
											}
											else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
											{
												if (!BitTest(Local_109.f_1555[iParam0], 19))
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
													Local_109.f_1188[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
													MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
												}
											}
										}
									}
									else if (!func_44(iParam0, 20))
									{
										if (func_47(2, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 20);
										}
									}
									else if (__LIB_2__::func_47(&(Local_109.f_1642[Local_118[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
									{
										if (!func_44(iParam0, 21))
										{
											if (func_47(15, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
											{
												func_43(iParam0, 21);
											}
										}
									}
								}
							}
							else if (Local_109.f_1188[bVar4 /*9*/].f_8 == 2 || BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (!BitTest(Local_109.f_1555[iParam0], 12))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
										{
											Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
											func_15(func_21(iParam0, Local_109.f_1188[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 1);
											MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
								{
									fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
										{
											Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
											MISC::SET_BIT(&(Local_109.f_1565[iParam0]), bVar4);
											if (!BitTest(Local_109.f_1555[iParam0], 19))
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
												Local_109.f_1188[bVar4 /*9*/].f_8++;
												MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
											MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
											MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
										}
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
									{
										if (!BitTest(Local_109.f_1555[iParam0], 19))
										{
											func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
											Local_109.f_1188[bVar4 /*9*/][Local_109.f_1188[bVar4 /*9*/].f_8] = uVar0;
											Local_109.f_1188[bVar4 /*9*/].f_8++;
											MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
											func_23(iParam0);
											func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_1188[bVar4 /*9*/])), Local_109.f_1188[bVar4 /*9*/].f_8, 0, -1);
										}
									}
								}
							}
						}
						else if (!BitTest(Local_118[bVar4 /*8*/], 10))
						{
							if ((((func_27(&(Local_109.f_899[bVar4 /*9*/])) < 21 && !BitTest(Local_118[bVar4 /*8*/], 12)) && Local_109.f_899[bVar4 /*9*/].f_8 <= 6) && Local_109.f_899[bVar4 /*9*/].f_8 > 0) || BitTest(Local_109.f_1555[iParam0], 12))
							{
								if ((((((BitTest(Local_118[bVar4 /*8*/], 0) && Local_109.f_899[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_118[bVar4 /*8*/], 1) && Local_109.f_899[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_118[bVar4 /*8*/], 2) && Local_109.f_899[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_118[bVar4 /*8*/], 3) && Local_109.f_899[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_118[bVar4 /*8*/], 4) && Local_109.f_899[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_109.f_1555[iParam0], 12))
								{
									if (!BitTest(Local_109.f_1555[iParam0], 12))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
										{
											if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
											{
												Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_109.f_899[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
												MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
											}
										}
									}
									else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
									{
										fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]);
										if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
										{
											if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
											{
												if (((!BitTest(Local_118[bVar4 /*8*/], 10) && func_27(&(Local_109.f_899[bVar4 /*9*/])) < 21) && !BitTest(Local_118[bVar4 /*8*/], 12)) && Local_109.f_899[bVar4 /*9*/].f_8 <= 6)
												{
													Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
													NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_25(iParam0, Local_109.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1000f, 0);
													NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
												}
												MISC::SET_BIT(&(Local_109.f_1565[iParam0]), bVar4);
												if (!BitTest(Local_109.f_1555[iParam0], 19))
												{
													func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
													Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
													Local_109.f_899[bVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
													MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
												}
												MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
												MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
											}
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
										{
											if (!BitTest(Local_109.f_1555[iParam0], 19))
											{
												func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
												Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
												Local_109.f_899[bVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
												MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
											}
										}
									}
								}
								else if (!func_44(iParam0, 20))
								{
									if (func_47(2, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
									{
										func_43(iParam0, 20);
									}
								}
								else if (__LIB_2__::func_47(&(Local_109.f_1642[Local_118[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
								{
									if (!func_44(iParam0, 21))
									{
										if (func_47(15, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 21);
										}
									}
								}
							}
							else if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_12(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
									func_23(iParam0);
									Local_109.f_1575[iParam0]++;
									Local_109.f_1535[iParam0] = 0;
									__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_12(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
									func_23(iParam0);
									Local_109.f_1575[iParam0]++;
									Local_109.f_1535[iParam0] = 0;
									__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
								}
							}
						}
						else if (Local_109.f_899[bVar4 /*9*/].f_8 == 2 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
									{
										Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_14(iParam0, Local_109.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
										func_15(func_21(iParam0, Local_109.f_899[bVar4 /*9*/].f_8, Local_109.f_1575[iParam0], 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 1);
										MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
									}
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
									{
										Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_12(iParam0, Local_109.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
										if (!BitTest(Local_109.f_1555[iParam0], 19))
										{
											func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
											Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
											Local_109.f_899[bVar4 /*9*/].f_8++;
											func_23(iParam0);
											func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
											MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
										}
										MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
										MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
										func_23(iParam0);
										Local_109.f_1575[iParam0]++;
										Local_109.f_1535[iParam0] = 0;
										__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (!BitTest(Local_109.f_1555[iParam0], 19))
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[bVar4 /*9*/][Local_109.f_899[bVar4 /*9*/].f_8] = uVar0;
										Local_109.f_899[bVar4 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[bVar4 /*9*/])), Local_109.f_899[bVar4 /*9*/].f_8, 0, -1);
										MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
									}
								}
							}
						}
					}
				}
				else
				{
					MISC::SET_BIT(&(Local_109.f_1555[iParam0]), (0 + Local_109.f_1575[iParam0] * 3));
					MISC::SET_BIT(&(Local_109.f_1555[iParam0]), (1 + Local_109.f_1575[iParam0] * 3));
					MISC::SET_BIT(&(Local_109.f_1555[iParam0]), (2 + Local_109.f_1575[iParam0] * 3));
					func_23(iParam0);
					Local_109.f_1575[iParam0]++;
					Local_109.f_1535[iParam0] = 0;
					__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
					MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
				}
			}
			if (Local_109.f_1575[iParam0] >= 4)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_71(iParam0), 3))
					{
						if (Local_109.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out"))))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
								func_60(7, iParam0);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
						func_60(7, iParam0);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
					func_60(7, iParam0);
				}
			}
			break;
		case 7:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
			{
				if (!BitTest(Local_109.f_1555[iParam0], 12))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
					{
						Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_11(iParam0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
						MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
					}
				}
				else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
					{
						MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
						MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
						func_23(iParam0);
						func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
						func_60(8, iParam0);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
					{
						Local_109.f_1525[iParam0] = 1;
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
				MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
				func_23(iParam0);
				func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
				func_60(8, iParam0);
			}
			break;
		case 8:
			Local_109.f_1525[iParam0] = 1;
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				bVar4 = Local_109.f_1600[iVar3];
				if (bVar4 != __LIB_0__::func_160())
				{
					if (((((func_27(&(Local_109.f_899[bVar4 /*9*/])) == 21 && Local_109.f_899[bVar4 /*9*/].f_8 > 2) && Local_109.f_899[bVar4 /*9*/].f_8 < 7) || ((func_27(&(Local_109.f_1188[bVar4 /*9*/])) == 21 && Local_109.f_1188[bVar4 /*9*/].f_8 > 2) && Local_109.f_1188[bVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_109.f_899[bVar4 /*9*/])) < 21 && Local_109.f_899[bVar4 /*9*/].f_8 >= 2) && Local_109.f_899[bVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_109.f_1188[bVar4 /*9*/])) < 21 && Local_109.f_1188[bVar4 /*9*/].f_8 >= 2) && Local_109.f_1188[bVar4 /*9*/].f_8 < 7))
					{
						iVar8 = 1;
					}
				}
				iVar9++;
			}
			if (func_34(&(Local_109.f_846[iParam0 /*13*/]), 0) >= 17)
			{
				iVar8 = 0;
			}
			if (iVar8 || BitTest(Local_109.f_1555[iParam0], 12))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
				{
					if (!BitTest(Local_109.f_1555[iParam0], 12))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_10(iParam0, Local_109.f_846[iParam0 /*13*/].f_12), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
							func_15(func_9(iParam0, Local_109.f_846[iParam0 /*13*/].f_12), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 1, 0);
							MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
						}
					}
					else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
					{
						fVar7 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]);
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 19))
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][Local_109.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
							}
							MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
							MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 19);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 19))
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][Local_109.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 0), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 19);
							}
						}
					}
				}
			}
			else
			{
				func_29(iParam0);
				func_60(9, iParam0);
			}
			break;
		case 9:
			Var10 = 11;
			Var11 = 7;
			func_29(iParam0);
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
			{
				if (!BitTest(Local_109.f_1555[iParam0], 13))
				{
					if (!BitTest(Local_109.f_1555[iParam0], 12))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_8(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
							MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
						}
					}
					else if ((Local_109.f_1590[iParam0] != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
					{
						MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
						MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 13);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 14))
				{
					iVar3 = iParam0 * 4;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != __LIB_0__::func_160() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_7(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 14);
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("showcard")))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 14);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 14);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 15))
				{
					iVar3 = iParam0 * 4 + 1;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != __LIB_0__::func_160() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_6(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 15);
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("showcard")))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 15);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 15);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 16))
				{
					iVar3 = iParam0 * 4 + 2;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != __LIB_0__::func_160() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_5(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 16);
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("showcard")))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 16);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 16);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 17))
				{
					iVar3 = iParam0 * 4 + 3;
					bVar4 = Local_109.f_1600[iVar3];
					if (bVar4 != __LIB_0__::func_160() && bVar4 > -1)
					{
						if (Local_109.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_109.f_1555[iParam0], 12))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_4(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
								}
							}
							else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
									MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 17);
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("showcard")))
								{
									Local_109.f_899[bVar4 /*9*/] = { Var11 };
									Local_109.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 17);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 17);
					}
				}
				else if (!BitTest(Local_109.f_1555[iParam0], 18))
				{
					if (Local_109.f_846[iParam0 /*13*/].f_12 > 0 || BitTest(Local_109.f_1555[iParam0], 12))
					{
						if (!BitTest(Local_109.f_1555[iParam0], 12))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_3(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 12);
							}
						}
						else if (Local_109.f_1590[iParam0] != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
							{
								if (Local_109.f_1570[iParam0] == 1)
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								}
								else
								{
									Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								}
								MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 12);
								MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 18);
								Local_109.f_846[iParam0 /*13*/] = { Var10 };
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("showcard")))
							{
								Local_109.f_846[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_109.f_1555[iParam0]), 18);
					}
				}
				else if (!__LIB_0__::func_649(&(Local_109.f_1642[iParam0 /*2*/])))
				{
					__LIB_0__::func_580(&(Local_109.f_1642[iParam0 /*2*/]), 0, 0);
				}
				else if (__LIB_2__::func_47(&(Local_109.f_1642[iParam0 /*2*/]), 1000, 0))
				{
					Local_109.f_1525[iParam0] = 0;
					Local_109.f_1575[iParam0] = 0;
					Local_109.f_1555[iParam0] = 0;
					Local_109.f_1565[iParam0] = 0;
					__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
					__LIB_0__::func_579(&(Local_109.f_1642[iParam0 /*2*/]));
					Local_109.f_1560[iParam0]++;
					func_60(1, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)//Position - 0x47F0
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)//Position - 0x480D
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)//Position - 0x482B
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)//Position - 0x4849
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)//Position - 0x4867
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)//Position - 0x4886
{
	int iVar0;
	iVar0 = func_27(&(Local_109.f_846[iParam0 /*13*/]));
	if (Local_109.f_1550[iParam0] >= 7)
	{
		if (iVar0 > 21)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				case 1:
					return "female_dealer_reaction_good_var02";
				case 2:
					return "female_dealer_reaction_good_var03";
				default:
			}
		}
		else if (iVar0 == 21)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				case 1:
					return "female_dealer_reaction_bad_var02";
				case 2:
					return "female_dealer_reaction_bad_var03";
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				case 1:
					return "female_dealer_reaction_impartial_var02";
				case 2:
					return "female_dealer_reaction_impartial_var03";
				}
			default:
		}
	}
	else if (iVar0 > 21)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			case 1:
				return "reaction_good_var_02";
			case 2:
				return "reaction_good_var_03";
			default:
		}
	}
	else if (iVar0 == 21)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			case 1:
				return "reaction_bad_var_02";
			case 2:
				return "reaction_bad_var_03";
			case 3:
				return "reaction_bad_var_04";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			case 1:
				return "reaction_impartial_var_02";
			case 2:
				return "reaction_impartial_var_03";
			case 3:
				return "reaction_impartial_var_04";
			}
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)//Position - 0x4A1F
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)//Position - 0x4A2E
{
	if (iParam1 > 8)
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 4)
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)//Position - 0x4A9E
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, bool bParam2)//Position - 0x4ABE
{
	if (((bParam2 != __LIB_0__::func_160() && BitTest(Local_118[bParam2 /*8*/], 14)) && !BitTest(Local_118[bParam2 /*8*/], 13)) && !(BitTest(Local_118[bParam2 /*8*/], 11) && Local_109.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_outro_split";
				case 1:
					return "female_dealer_focus_player_02_idle_outro_split";
				case 2:
					return "female_dealer_focus_player_03_idle_outro_split";
				case 3:
					return "female_dealer_focus_player_04_idle_outro_split";
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_outro_split";
				case 1:
					return "dealer_focus_player_02_idle_outro_split";
				case 2:
					return "dealer_focus_player_03_idle_outro_split";
				case 3:
					return "dealer_focus_player_04_idle_outro_split";
				}
			default:
		}
	}
	else if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_outro";
			case 1:
				return "female_dealer_focus_player_02_idle_outro";
			case 2:
				return "female_dealer_focus_player_03_idle_outro";
			case 3:
				return "female_dealer_focus_player_04_idle_outro";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_outro";
			case 1:
				return "dealer_focus_player_02_idle_outro";
			case 2:
				return "dealer_focus_player_03_idle_outro";
			case 3:
				return "dealer_focus_player_04_idle_outro";
			}
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)//Position - 0x4C24
{
	if (uParam0->f_209 >= uParam0->f_210)
	{
		return 0;
	}
	*uParam1 = (*uParam0)[uParam0->f_209];
	uParam0->f_209++;
	return 1;
}

char* func_14(int iParam0, int iParam1, bool bParam2)//Position - 0x4C51
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_second_card_player_01";
				case 1:
					return "female_hit_second_card_player_02";
				case 2:
					return "female_hit_second_card_player_03";
				case 3:
					return "female_hit_second_card_player_04";
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_card_player_01";
				case 1:
					return "female_hit_card_player_02";
				case 2:
					return "female_hit_card_player_03";
				case 3:
					return "female_hit_card_player_04";
				}
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "hit_second_card_player_01";
			case 1:
				return "hit_second_card_player_02";
			case 2:
				return "hit_second_card_player_03";
			case 3:
				return "hit_second_card_player_04";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "hit_card_player_01";
			case 1:
				return "hit_card_player_02";
			case 2:
				return "hit_card_player_03";
			case 3:
				return "hit_card_player_04";
			}
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4D69
{
	struct<6> Var0;
	Var0.f_0 = -1261953521;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, __LIB_6__::func_900(1, 1));
}

int func_21(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4F03
{
	if (bParam3)
	{
		return (((Local_119.f_257 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_22(int iParam0, int iParam1)//Position - 0x4F3A
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_split_card_player_01";
			case 1:
				return "female_split_card_player_02";
			case 2:
				return "female_split_card_player_03";
			case 3:
				return "female_split_card_player_04";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "split_card_player_01";
			case 1:
				return "split_card_player_02";
			case 2:
				return "split_card_player_03";
			case 3:
				return "split_card_player_04";
			}
		default:
	}
	return "";
}

void func_23(int iParam0)//Position - 0x4FCC
{
	MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 20);
	MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 21);
	MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 22);
	MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 23);
	MISC::CLEAR_BIT(&(Local_109.f_1555[iParam0]), 24);
}

char* func_24(int iParam0, int iParam1, bool bParam2)//Position - 0x501F
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient_split";
				case 1:
					return "female_dealer_focus_player_02_idle_impatient_split";
				case 2:
					return "female_dealer_focus_player_03_idle_impatient_split";
				case 3:
					return "female_dealer_focus_player_04_idle_impatient_split";
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_split";
				case 1:
					return "female_dealer_focus_player_02_idle_split";
				case 2:
					return "female_dealer_focus_player_03_idle_split";
				case 3:
					return "female_dealer_focus_player_04_idle_split";
				}
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient_split";
			case 1:
				return "dealer_focus_player_02_idle_impatient_split";
			case 2:
				return "dealer_focus_player_03_idle_impatient_split";
			case 3:
				return "dealer_focus_player_04_idle_impatient_split";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_split";
			case 1:
				return "dealer_focus_player_02_idle_split";
			case 2:
				return "dealer_focus_player_03_idle_split";
			case 3:
				return "dealer_focus_player_04_idle_split";
			}
		default:
	}
	return "";
}

char* func_25(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5137
{
	if (((bParam2 != __LIB_0__::func_160() && BitTest(Local_118[bParam2 /*8*/], 14)) && !BitTest(Local_118[bParam2 /*8*/], 13)) && !(BitTest(Local_118[bParam2 /*8*/], 11) && Local_109.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_impatient_split";
					case 1:
						return "female_dealer_focus_player_02_idle_impatient_split";
					case 2:
						return "female_dealer_focus_player_03_idle_impatient_split";
					case 3:
						return "female_dealer_focus_player_04_idle_impatient_split";
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_split";
					case 1:
						return "female_dealer_focus_player_02_idle_split";
					case 2:
						return "female_dealer_focus_player_03_idle_split";
					case 3:
						return "female_dealer_focus_player_04_idle_split";
					}
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_impatient_split";
				case 1:
					return "dealer_focus_player_02_idle_impatient_split";
				case 2:
					return "dealer_focus_player_03_idle_impatient_split";
				case 3:
					return "dealer_focus_player_04_idle_impatient_split";
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_split";
				case 1:
					return "dealer_focus_player_02_idle_split";
				case 2:
					return "dealer_focus_player_03_idle_split";
				case 3:
					return "dealer_focus_player_04_idle_split";
				}
			default:
		}
	}
	else if (Local_109.f_1550[iParam0] >= 7)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient";
				case 1:
					return "female_dealer_focus_player_02_idle_impatient";
				case 2:
					return "female_dealer_focus_player_03_idle_impatient";
				case 3:
					return "female_dealer_focus_player_04_idle_impatient";
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle";
				case 1:
					return "female_dealer_focus_player_02_idle";
				case 2:
					return "female_dealer_focus_player_03_idle";
				case 3:
					return "female_dealer_focus_player_04_idle";
				}
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient";
			case 1:
				return "dealer_focus_player_02_idle_impatient";
			case 2:
				return "dealer_focus_player_03_idle_impatient";
			case 3:
				return "dealer_focus_player_04_idle_impatient";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle";
			case 1:
				return "dealer_focus_player_02_idle";
			case 2:
				return "dealer_focus_player_03_idle";
			case 3:
				return "dealer_focus_player_04_idle";
			}
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, int iParam2)//Position - 0x53A9
{
	if (((iParam2 != __LIB_0__::func_160() && BitTest(Local_118[iParam2 /*8*/], 14)) && !BitTest(Local_118[iParam2 /*8*/], 13)) && !(BitTest(Local_118[iParam2 /*8*/], 11) && Local_109.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_109.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_intro_split";
				case 1:
					return "female_dealer_focus_player_02_idle_intro_split";
				case 2:
					return "female_dealer_focus_player_03_idle_intro_split";
				case 3:
					return "female_dealer_focus_player_04_idle_intro_split";
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_intro_split";
				case 1:
					return "dealer_focus_player_02_idle_intro_split";
				case 2:
					return "dealer_focus_player_03_idle_intro_split";
				case 3:
					return "dealer_focus_player_04_idle_intro_split";
				}
			default:
		}
	}
	else if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_intro";
			case 1:
				return "female_dealer_focus_player_02_idle_intro";
			case 2:
				return "female_dealer_focus_player_03_idle_intro";
			case 3:
				return "female_dealer_focus_player_04_idle_intro";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_intro";
			case 1:
				return "dealer_focus_player_02_idle_intro";
			case 2:
				return "dealer_focus_player_03_idle_intro";
			case 3:
				return "dealer_focus_player_04_idle_intro";
			}
		default:
	}
	return "";
}

int func_27(var uParam0)//Position - 0x550F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_35((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 11)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

char* func_28(int iParam0)//Position - 0x5572
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_29(int iParam0)//Position - 0x5592
{
	if (func_44(iParam0, 23))
	{
		return;
	}
	if (func_44(iParam0, 24))
	{
		if (func_47(13, &(Local_109.f_1595[iParam0]), -1, 0, 0, -1))
		{
			func_43(iParam0, 23);
		}
		return;
	}
	if (__LIB_20__::func_491(iParam0))
	{
		func_43(iParam0, 24);
	}
	else
	{
		func_43(iParam0, 23);
	}
}

int func_31(int iParam0, int iParam1)//Position - 0x563B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 1;
	}
	iVar1 = func_34(&(Local_109.f_846[iParam1 /*13*/]), 0);
	iVar2 = Local_109.f_846[iParam1 /*13*/].f_12;
	iVar3 = func_27(&(Local_109.f_899[iVar0 /*9*/]));
	iVar4 = Local_109.f_899[iVar0 /*9*/].f_8;
	iVar5 = func_27(&(Local_109.f_1188[iVar0 /*9*/]));
	iVar6 = Local_109.f_1188[iVar0 /*9*/].f_8;
	if (func_32(iVar1, iVar2, iVar3, iVar4) && func_32(iVar1, iVar2, iVar5, iVar6))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x56ED
{
	bool bVar0;
	bool bVar1;
	if (iParam3 <= 0)
	{
		return 1;
	}
	bVar0 = (iParam1 == 2 && iParam0 == 21);
	bVar1 = (iParam3 == 2 && iParam2 == 21);
	if (bVar1)
	{
		return 0;
	}
	if (bVar0)
	{
		return 1;
	}
	if (iParam0 > 21)
	{
		return 0;
	}
	if (iParam2 > 21)
	{
		return 1;
	}
	if (iParam3 >= 7)
	{
		return 0;
	}
	if (iParam0 > iParam2)
	{
		return 1;
	}
	return 0;
}

char* func_33(int iParam0)//Position - 0x575D
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_34(var uParam0, int iParam1)//Position - 0x577D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (iParam1 && iVar2 == 0)
		{
		}
		else
		{
			iVar3 = func_35((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 11)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

int func_35(int iParam0)//Position - 0x57F2
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		case 10:
		case 23:
		case 36:
		case 49:
		case 11:
		case 24:
		case 37:
		case 50:
		case 12:
		case 25:
		case 38:
		case 51:
		case 13:
		case 26:
		case 39:
		case 52:
			return 10;
		case 1:
		case 14:
		case 27:
		case 40:
			return 11;
		default:
	}
	return 0;
}

void func_36(int iParam0)//Position - 0x5966
{
	var uVar0;
	bool bVar1;
	int iVar2;
	switch (Local_109.f_1510[iParam0])
	{
		case 0:
			iVar2 = Local_109.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 0, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(1, iParam0);
			}
			break;
		case 1:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 1, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(2, iParam0);
			}
			break;
		case 2:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 2, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(3, iParam0);
			}
			break;
		case 3:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 3, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][0] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][0] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(4, iParam0);
			}
			break;
		case 4:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_37(iParam0), 3))
					{
						Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_37(iParam0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
						func_15(func_9(iParam0, 0), 0, 1, 0);
					}
					else if (Local_109.f_1590[iParam0] != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
						{
							bVar1 = true;
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][0] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
						{
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][0] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
					}
					else
					{
						bVar1 = true;
						if (Local_109.f_846[iParam0 /*13*/].f_12 == 0)
						{
							func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
							Local_109.f_846[iParam0 /*13*/][0] = uVar0;
							Local_109.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(5, iParam0);
			}
			break;
		case 5:
			iVar2 = Local_109.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 0, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(6, iParam0);
			}
			break;
		case 6:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 1, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(7, iParam0);
			}
			break;
		case 7:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 2, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(8, iParam0);
			}
			break;
		case 8:
			iVar2 = Local_109.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_118[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_118[iVar2 /*8*/], 15))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_109.f_899[iVar2 /*9*/].f_8, 3, 0), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_109.f_1590[iParam0] != -1)
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
								{
									bVar1 = true;
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
								{
									if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
										Local_109.f_899[iVar2 /*9*/][1] = uVar0;
										Local_109.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_109.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
									Local_109.f_899[iVar2 /*9*/][1] = uVar0;
									Local_109.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_109.f_1595[iParam0]), func_27(&(Local_109.f_899[iVar2 /*9*/])), Local_109.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
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
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(9, iParam0);
			}
			break;
		case 9:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), func_58(), func_10(iParam0, 0), 3))
					{
						Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], func_58(), func_10(iParam0, 0), 4f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
						func_15(func_9(iParam0, 1), Local_109.f_1[iParam0 /*211*/][Local_109.f_1[iParam0 /*211*/].f_209], 1, 0);
					}
					else if (Local_109.f_1590[iParam0] != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out")))
						{
							Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][1] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 1), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
							bVar1 = true;
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("hidecard")))
						{
							if (Local_109.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
								Local_109.f_846[iParam0 /*13*/][1] = uVar0;
								Local_109.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 1), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
						}
					}
					else
					{
						Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
						bVar1 = true;
						if (Local_109.f_846[iParam0 /*13*/].f_12 == 1)
						{
							func_13(&(Local_109.f_1[iParam0 /*211*/]), &uVar0);
							Local_109.f_846[iParam0 /*13*/][1] = uVar0;
							Local_109.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
							func_47(3, &(Local_109.f_1595[iParam0]), func_34(&(Local_109.f_846[iParam0 /*13*/]), 1), Local_109.f_846[iParam0 /*13*/].f_12, 1, -1);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_41(0, iParam0);
				func_60(5, iParam0);
			}
			break;
	}
}

char* func_37(int iParam0)//Position - 0x78AD
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_38(int iParam0)//Position - 0x78CD
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_39(int iParam0)//Position - 0x78ED
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_40(int iParam0)//Position - 0x790D
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_41(int iParam0, int iParam1)//Position - 0x792D
{
	Local_109.f_1510[iParam1] = iParam0;
}

char* func_42(int iParam0)//Position - 0x7940
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_43(int iParam0, int iParam1)//Position - 0x7960
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	MISC::SET_BIT(&(Local_109.f_1555[iParam0]), iParam1);
}

int func_44(int iParam0, int iParam1)//Position - 0x79A0
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_109.f_1555[iParam0], iParam1);
}

char* func_45(int iParam0)//Position - 0x79DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_46(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_109.f_1600[(iParam0 * 4 + iVar2)] != __LIB_0__::func_160())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			case 1:
				return "female_acknowledge_p02";
			case 2:
				return "female_acknowledge_p03";
			case 3:
				return "female_acknowledge_p04";
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			case 1:
				return "acknowledge_p02";
			case 2:
				return "acknowledge_p03";
			case 3:
				return "acknowledge_p04";
			}
		default:
	}
	return "";
}

char* func_46(int iParam0, int iParam1)//Position - 0x7B3C
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_109.f_1600[(iParam0 * 4 + iVar1)] != __LIB_0__::func_160())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			case 1:
				return "female_idle_single_p02";
			case 2:
				return "female_idle_single_p03";
			case 3:
				return "female_idle_single_p04";
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			case 1:
				return "idle_single_p02";
			case 2:
				return "idle_single_p03";
			case 3:
				return "idle_single_p04";
			}
		default:
	}
	return "";
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x7C03
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	if (iParam0 == 3)
	{
		if (iParam2 > 21)
		{
			if (bParam4)
			{
				iParam0 = 12;
			}
			else
			{
				iParam0 = 0;
			}
		}
		else if (iParam2 == 21)
		{
			if (iParam3 == 2)
			{
				iParam0 = 1;
			}
		}
	}
	StringCopy(&cVar0, func_49(iParam0, iParam2, iParam5), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar1))
	{
		return 0;
	}
	sVar2 = __LIB_0__::func_375(7);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar1, &cVar0, sVar2, 1);
	return 1;
}

char* func_49(int iParam0, int iParam1, int iParam2)//Position - 0x7E9E
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		case 1:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		case 2:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		case 3:
			return func_56(iParam1);
		case 4:
			return "MINIGAME_DEALER_PLACE_BET";
		case 5:
			return "MINIGAME_DEALER_ANOTHER_GO";
		case 7:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		case 6:
			return func_50(iParam2);
		case 8:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		case 9:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		case 10:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		case 11:
			return "MINIGAME_DEALER_REFUSE_BETS";
		case 12:
			return "MINIGAME_DEALER_BUSTS";
		case 13:
			return "MINIGAME_DEALER_WINS";
		case 15:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		case 16:
			return "MINIGAME_DEALER_CLOSED_BETS";
		case 14:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		default:
	}
	return "";
}

char* func_50(int iParam0)//Position - 0x7F92
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!__LIB_0__::func_154(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (__LIB_7__::func_320(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_52(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (__LIB_0__::func_308(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

bool func_52(int iParam0)//Position - 0x802D
{
	int iVar0;
	iVar0 = Local_118[*iParam0 /*8*/].f_4;
	return __LIB_31__::func_626(iVar0, Local_119.f_257);
}

char* func_56(int iParam0)//Position - 0x80DF
{
	if (iParam0 <= 1 || iParam0 > 21)
	{
		return "";
	}
	switch (iParam0)
	{
		case 2:
			return "MINIGAME_BJACK_DEALER_2";
		case 3:
			return "MINIGAME_BJACK_DEALER_3";
		case 4:
			return "MINIGAME_BJACK_DEALER_4";
		case 5:
			return "MINIGAME_BJACK_DEALER_5";
		case 6:
			return "MINIGAME_BJACK_DEALER_6";
		case 7:
			return "MINIGAME_BJACK_DEALER_7";
		case 8:
			return "MINIGAME_BJACK_DEALER_8";
		case 9:
			return "MINIGAME_BJACK_DEALER_9";
		case 10:
			return "MINIGAME_BJACK_DEALER_10";
		case 11:
			return "MINIGAME_BJACK_DEALER_11";
		case 12:
			return "MINIGAME_BJACK_DEALER_12";
		case 13:
			return "MINIGAME_BJACK_DEALER_13";
		case 14:
			return "MINIGAME_BJACK_DEALER_14";
		case 15:
			return "MINIGAME_BJACK_DEALER_15";
		case 16:
			return "MINIGAME_BJACK_DEALER_16";
		case 17:
			return "MINIGAME_BJACK_DEALER_17";
		case 18:
			return "MINIGAME_BJACK_DEALER_18";
		case 19:
			return "MINIGAME_BJACK_DEALER_19";
		case 20:
			return "MINIGAME_BJACK_DEALER_20";
		case 21:
			return "MINIGAME_BJACK_DEALER_21";
		default:
	}
	return "";
}

char* func_57(int iParam0)//Position - 0x820F
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_58()//Position - 0x822F
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_59(var uParam0)//Position - 0x823B
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	uParam0->f_209 = 0;
	uParam0->f_210 = 208;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_210)
		{
			iVar1 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, uParam0->f_210);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_60(int iParam0, int iParam1)//Position - 0x829C
{
	Local_109.f_1515[iParam1] = iParam0;
}

void func_61(int iParam0)//Position - 0x82AF
{
	struct<13> Var0;
	Local_109.f_1530[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), __LIB_31__::func_627(), func_71(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]))
			{
				Local_109.f_1590[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_109.f_1580[iParam0]);
				if (Local_109.f_1590[iParam0] == -1 || ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_109.f_1590[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), joaat("break_out"))))
				{
					Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_71(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iParam0]);
			}
			return;
		}
	}
	Local_109.f_1555[iParam0] = 0;
	Local_109.f_1565[iParam0] = 0;
	__LIB_0__::func_579(&(Local_109.f_1633[iParam0 /*2*/]));
	Var0 = 11;
	Local_109.f_846[iParam0 /*13*/] = { Var0 };
	Local_109.f_1525[iParam0] = 0;
	Local_109.f_1575[iParam0] = 0;
	__LIB_0__::func_579(&(Local_109.f_1642[iParam0 /*2*/]));
	func_73(1, iParam0);
	func_60(0, iParam0);
	func_41(0, iParam0);
	Local_109.f_1560[iParam0]++;
	Local_109.f_1530[iParam0] = 0;
}

int func_62(int iParam0, bool bParam1)//Position - 0x8498
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_109.f_1600[(iParam0 * 4 + iVar1)] != __LIB_0__::func_160() && Local_109.f_899[Local_109.f_1600[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0)
			{
				iVar0++;
			}
		}
		else if (Local_109.f_1600[(iParam0 * 4 + iVar1)] != __LIB_0__::func_160())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_109.f_1570[iParam0] != iVar0)
	{
		Local_109.f_1570[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

char* func_64(int iParam0, int iParam1)//Position - 0x8540
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			case 1:
				return "female_acknowledge_p02";
			case 2:
				return "female_acknowledge_p03";
			case 3:
				return "female_acknowledge_p04";
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			case 1:
				return "acknowledge_p02";
			case 2:
				return "acknowledge_p03";
			case 3:
				return "acknowledge_p04";
			}
		default:
	}
	return "";
}

char* func_68(int iParam0)//Position - 0x8681
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			case 1:
				return "female_idle_var_02";
			case 2:
				return "female_idle_var_03";
			case 3:
				return "female_idle_var_04";
			case 4:
				return "female_idle_var_05";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "idle_var_01";
			case 1:
				return "idle_var_02";
			case 2:
				return "idle_var_03";
			case 3:
				return "idle_var_04";
			case 4:
				return "idle_var_05";
			}
		default:
	}
	return "";
}

float func_69(int iParam0)//Position - 0x8735
{
	if (Local_119.f_257 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -134.69f;
			case 1:
				return 45.31f;
			case 2:
				return 135.31f;
			case 3:
				return 135.31f;
			}
		default:
	}
	return 0f;
}

Vector3 func_70(int iParam0)//Position - 0x8792
{
	if (Local_119.f_257 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.8368f, 269.747f, -52.8409f;
			case 1:
				return 1151.84f, 266.747f, -52.8409f;
			case 2:
				return 1129.4065f, 262.3578f, -52.041f;
			case 3:
				return 1144.4291f, 247.3352f, -52.041f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

char* func_71(int iParam0)//Position - 0x8823
{
	if (Local_109.f_1550[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

void func_73(int iParam0, int iParam1)//Position - 0x884F
{
	Local_109.f_1520[iParam1] = iParam0;
}

void func_74(var uParam0)//Position - 0x8862
{
	var uVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = 208;
	iVar3 = 0;
	while (iVar3 < 208)
	{
		iVar1 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 208)
		{
			iVar6 = (iVar4 / 32);
			bVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !BitTest(uVar0[iVar6], bVar7))
			{
				MISC::SET_BIT(&(uVar0[iVar6]), bVar7);
				while (iVar4 + 1 > 52)
				{
					iVar4 = (iVar4 - 52);
				}
				(*uParam0)[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar6], bVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_210 = 208;
}

void func_75()//Position - 0x8915
{
	int iVar0;
	if (!__LIB_7__::func_62(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_153;
		if (Global_2788828 != iVar0 && (Global_2788828 != -1 || __LIB_2__::func_83(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar0]))
			{
				func_77(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iVar0]))
			{
				__LIB_1__::func_96(&(Local_109.f_1595[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_109.f_1595[iVar0]);
			}
		}
	}
	iLocal_153++;
	if (iLocal_153 >= Local_119.f_257)
	{
		iLocal_153 = 0;
	}
}

void func_77(int iParam0)//Position - 0x89FA
{
	int iVar0;
	int iVar1;
	iVar0 = joaat("S_M_Y_Casino_01");
	if (Local_109.f_1550[iParam0] >= 7)
	{
		iVar0 = joaat("S_F_Y_Casino_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(__LIB_31__::func_627());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_31__::func_627()))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iParam0]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			iVar1 = PED::CREATE_PED(26, iVar0, func_70(iParam0), func_69(iParam0), true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
			PED::SET_PED_AS_ENEMY(iVar1, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_RESET_FLAG(iVar1, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 108, true);
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar1, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
			PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar1, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			__LIB_31__::func_629(Local_109.f_1550[iParam0], &iVar1);
			__LIB_31__::func_628(Local_109.f_1550[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_70(iParam0), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_69(iParam0));
			Local_109.f_1595[iParam0] = NETWORK::PED_TO_NET(iVar1);
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_109.f_1595[iParam0], false);
			Local_109.f_1540[iParam0] = 1;
			Local_109.f_1580[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_109.f_1595[iParam0]), Local_109.f_1580[iParam0], __LIB_31__::func_627(), func_71(iParam0), 1000f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_109.f_1580[iParam0]);
			STREAMING::REMOVE_ANIM_DICT(func_58());
		}
	}
}

void func_82()//Position - 0x94B2
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	Var0 = 7;
	bVar1 = false;
	iVar2 = iLocal_152;
	if (Local_118[iVar2 /*8*/].f_4 == -1)
	{
		Local_109.f_899[iVar2 /*9*/] = { Var0 };
		Local_109.f_1188[iVar2 /*9*/] = { Var0 };
	}
	if (Local_118[iVar2 /*8*/].f_6 == 0)
	{
		if (Local_109.f_1477[iVar2] != 0)
		{
			Local_109.f_1477[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_83(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_152++;
	if (iLocal_152 >= 32)
	{
		iLocal_152 = 0;
	}
}

int func_83(int iParam0)//Position - 0x9542
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_31__::func_639())
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!__LIB_0__::func_154(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_118[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_118[iParam0 /*8*/].f_6 == 1)
	{
		if (func_47(6, &(Local_109.f_1595[iVar2]), -1, 0, 0, iParam0))
		{
			func_84(iParam0, 1);
		}
		return 1;
	}
	if (Local_118[iParam0 /*8*/].f_6 == 2)
	{
		if (func_47(7, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 2);
		}
		return 1;
	}
	if (Local_118[iParam0 /*8*/].f_6 == 4)
	{
		if (func_47(8, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 4);
		}
		return 1;
	}
	if (Local_118[iParam0 /*8*/].f_6 == 5)
	{
		if (func_47(9, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 5);
		}
		return 1;
	}
	if (Local_118[iParam0 /*8*/].f_6 == 6)
	{
		if (func_47(10, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 6);
		}
		return 1;
	}
	if (Local_118[iParam0 /*8*/].f_6 == 7)
	{
		if (func_47(11, &(Local_109.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0, int iParam1)//Position - 0x96BA
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	MISC::SET_BIT(&(Local_109.f_1477[iParam0]), iVar0);
}

void func_85()//Position - 0x96FF
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_151;
	if (Local_109.f_1600[iVar0] != __LIB_0__::func_160())
	{
		iVar1 = Local_109.f_1600[iVar0];
		if (((!__LIB_0__::func_154(Local_109.f_1600[iVar0], 1, 1) || Local_118[iVar1 /*8*/].f_3 == -1) || Local_118[iVar1 /*8*/].f_3 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_109.f_1600[iVar0]))
		{
			Local_109.f_1600[iVar0] = __LIB_0__::func_160();
			if (Local_109.f_1477[iVar0] != 0)
			{
				Local_109.f_1477[iVar0] = 0;
			}
		}
	}
	if (__LIB_0__::func_154(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_118[iVar0 /*8*/].f_3 > -1 && Local_118[iVar0 /*8*/].f_3 < 32)
		{
			if (Local_109.f_1600[Local_118[iVar0 /*8*/].f_3] == __LIB_0__::func_160())
			{
				if (__LIB_0__::func_154(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_109.f_1600[Local_118[iVar0 /*8*/].f_3] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
	}
	iLocal_151++;
	if (iLocal_151 >= 32)
	{
		iLocal_151 = 0;
	}
}

void func_86()//Position - 0x981A
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	struct<3> Var7;
	func_412();
	if (!Local_119.f_236)
	{
		if (__LIB_2__::func_83(PLAYER::PLAYER_ID()) && __LIB_25__::func_805() != __LIB_0__::func_160())
		{
			if (BitTest(Global_2689235[__LIB_25__::func_805() /*453*/].f_318.f_4, 4))
			{
				Local_119.f_236 = 1;
				func_411();
				func_410();
				iLocal_146 = 1;
			}
		}
	}
	else if (iLocal_146)
	{
		if (func_409())
		{
			iLocal_146 = 0;
		}
	}
	func_405();
	func_404();
	Local_119.f_248 = __LIB_37__::func_740();
	func_382();
	if (Local_119.f_1 > 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
		{
		}
		if (__LIB_31__::func_635(Local_119.f_247) >= 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_70(__LIB_31__::func_635(Local_119.f_247)), true) > 5f)
		{
			func_375(0);
		}
	}
	if (Local_119.f_1 > 5)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		__LIB_37__::func_738(1);
		__LIB_11__::func_829(1, 0);
	}
	if (Local_119.f_1 > 6)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 0)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
			}
		}
		CAM::BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE();
	}
	if (Local_119.f_1 > 7)
	{
		func_368(&(Local_118[PLAYER::PLAYER_ID() /*8*/]));
	}
	if (__LIB_1__::func_156())
	{
		bLocal_148 = true;
	}
	else if (bLocal_148)
	{
		__LIB_0__::func_495(&uLocal_149, 0, 0);
		bLocal_148 = false;
	}
	else if (__LIB_0__::func_649(&uLocal_149) && __LIB_2__::func_47(&uLocal_149, 500, 0))
	{
		__LIB_0__::func_579(&uLocal_149);
	}
	switch (Local_119.f_1)
	{
		case 0:
			if (func_361())
			{
				Local_119.f_1582 = "idle_cardgames";
				Local_119.f_252 = 0;
				Local_118[PLAYER::PLAYER_ID() /*8*/] = 0;
				Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 = -1;
				Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 = -1;
				Local_118[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
				func_360(PLAYER::PLAYER_ID());
				func_359(1);
			}
			break;
		case 1:
			switch (__LIB_31__::func_635(Local_119.f_247))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_119.f_245 = 5000;
					Local_119.f_246 = 10;
					break;
				case 2:
				case 3:
					bVar0 = true;
					Local_119.f_245 = 50000;
					Local_119.f_246 = 1000;
					break;
			}
			if (Local_119.f_257 == 1)
			{
				bVar0 = true;
				Local_119.f_245 = 50000;
				Local_119.f_246 = 1000;
			}
			Local_119.f_244 = Local_119.f_246;
			if ((((((((((((((((((((((((!Global_262145.f_26941 /* Tunable: VC_CASINO_DISABLE_BLACKJACK */ && !(Global_262145.f_26943 /* Tunable: VC_CASINO_DISABLE_BLACKJACK_LOW */ && !bVar0)) && !(Global_262145.f_26942 /* Tunable: VC_CASINO_DISABLE_BLACKJACK_HIGH */ && bVar0)) && ((__LIB_2__::func_844(joaat("rm_GamingFloor_02")) || __LIB_2__::func_844(joaat("rm_GamingFloor_03"))) || __LIB_2__::func_83(PLAYER::PLAYER_ID()))) && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), func_357(Local_119.f_247), 1.5f, 1)) && __LIB_8__::func_697(PLAYER::PLAYER_PED_ID(), func_355(Local_119.f_247), 40f)) && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && !BitTest(Global_1946250.f_4, 2)) && !Global_2667225.f_2681) && Global_2788828 != __LIB_31__::func_635(Local_119.f_247)) && (Global_2788828 != -1 || __LIB_2__::func_83(PLAYER::PLAYER_ID()))) && func_350()) && !__LIB_26__::func_412()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_61(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !__LIB_0__::func_739()) && !__LIB_0__::func_494()) && !__LIB_5__::func_600()) && !Global_2725439.f_12) && Global_1946244 != 33) && !__LIB_2__::func_380())
			{
				func_359(2);
			}
			else
			{
				Local_119.f_247++;
				if (Local_119.f_247 >= Local_119.f_257 * 4)
				{
					Local_119.f_247 = 0;
				}
			}
			break;
		case 2:
			func_337();
			func_360(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((__LIB_2__::func_844(joaat("rm_GamingFloor_02")) || __LIB_2__::func_844(joaat("rm_GamingFloor_03"))) || __LIB_2__::func_83(PLAYER::PLAYER_ID())) && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), func_357(Local_119.f_247), 1.5f, 1)) && __LIB_8__::func_697(PLAYER::PLAYER_PED_ID(), func_355(Local_119.f_247), 40f)) && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 0) && Global_2788828 != __LIB_31__::func_635(Local_119.f_247)) && (Global_2788828 != -1 || __LIB_2__::func_83(PLAYER::PLAYER_ID()))) && func_350()) && !__LIB_26__::func_412()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_61(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !__LIB_0__::func_739()) && !__LIB_0__::func_494()) && !__LIB_5__::func_600()) && !Global_2725439.f_12) && Global_1946244 != 33) && !__LIB_2__::func_380())
			{
				if ((((((__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_3__::func_633()) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_148) && !__LIB_0__::func_649(&uLocal_149))
				{
					if (__LIB_5__::func_834(1, &uVar1))
					{
						if (!__LIB_0__::func_1("BJACK_NA" /* GXT: This feature is not available for you. */))
						{
							__LIB_0__::func_187("BJACK_NA" /* GXT: This feature is not available for you. */);
						}
					}
					else if (Local_109.f_1600[Local_119.f_247] != __LIB_0__::func_160())
					{
						if (!__LIB_0__::func_1("BJACK_USED" /* GXT: This seat is currently in use. */))
						{
							__LIB_0__::func_187("BJACK_USED" /* GXT: This seat is currently in use. */);
						}
					}
					else if (__LIB_26__::func_411())
					{
						if (__LIB_26__::func_295() == 2)
						{
							if (!__LIB_0__::func_1("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */))
							{
								__LIB_0__::func_187("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */);
							}
						}
						else if (!__LIB_0__::func_1("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */))
						{
							__LIB_0__::func_187("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */);
						}
					}
					else if ((!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && (__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3)) && !(__LIB_6__::func_401(1) && __LIB_0__::func_834(__LIB_0__::func_582())))
					{
						if (!__LIB_0__::func_1("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */))
						{
							__LIB_0__::func_187("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */);
						}
					}
					else if (!__LIB_5__::func_833() && !(__LIB_6__::func_401(1) && __LIB_2__::func_934(__LIB_0__::func_582())))
					{
						if (!__LIB_4__::func_66("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_5__::func_837(1)))
						{
							__LIB_5__::func_952("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_5__::func_837(1));
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/))
						{
							HUD::CLEAR_HELP(true);
							__LIB_20__::func_475();
							func_359(3);
						}
					}
					else if (Local_119.f_248 <= 0)
					{
						if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_0__::func_1("CAS_MG_NOCHIPS6" /* GXT: Chips are required to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */))
							{
								__LIB_0__::func_187("CAS_MG_NOCHIPS6" /* GXT: Chips are required to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */);
							}
						}
						else if (!__LIB_0__::func_1("CAS_MG_NOCHIPS2" /* GXT: Chips are required to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */))
						{
							__LIB_0__::func_187("CAS_MG_NOCHIPS2" /* GXT: Chips are required to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */);
						}
					}
					else if (Local_119.f_248 < Local_119.f_246)
					{
						if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_0__::func_1("CAS_MG_LOWCHIPS6" /* GXT: You don't have enough Chips to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */))
							{
								__LIB_0__::func_187("CAS_MG_LOWCHIPS6" /* GXT: You don't have enough Chips to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */);
							}
						}
						else if (!__LIB_0__::func_1("CAS_MG_LOWCHIPS2" /* GXT: You don't have enough Chips to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */))
						{
							__LIB_0__::func_187("CAS_MG_LOWCHIPS2" /* GXT: You don't have enough Chips to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */);
						}
					}
					else if (Local_119.f_259 == -1)
					{
						if (func_317())
						{
							HUD::CLEAR_HELP(true);
						}
						if (((!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && (__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3)) && !(__LIB_6__::func_401(1) && __LIB_0__::func_834(__LIB_0__::func_582()))) || (!__LIB_5__::func_833() && (__LIB_6__::func_401(1) && __LIB_2__::func_934(__LIB_0__::func_582()))))
						{
							if (__LIB_20__::func_503(__LIB_0__::func_582()) == 1)
							{
								Local_119.f_256 = 1;
								__LIB_7__::func_508(&(Local_119.f_259), 4, "BJACK_PLAY_A" /* GXT: Press ~INPUT_CONTEXT~ to play Blackjack using your MC President's casino membership. */, 0, 0, 0, 0);
							}
							else if (__LIB_2__::func_144(__LIB_0__::func_582()))
							{
								Local_119.f_256 = 2;
								__LIB_7__::func_508(&(Local_119.f_259), 4, "BJACK_PLAY_B" /* GXT: Press ~INPUT_CONTEXT~ to play Blackjack using your CEO's casino membership. */, 0, 0, 0, 0);
							}
							else
							{
								Local_119.f_256 = 3;
								__LIB_7__::func_508(&(Local_119.f_259), 4, "BJACK_PLAY_C" /* GXT: Press ~INPUT_CONTEXT~ to play Blackjack using your VIP's casino membership. */, 0, 0, 0, 0);
							}
						}
						else
						{
							Local_119.f_256 = 0;
							__LIB_7__::func_508(&(Local_119.f_259), 4, "BJACK_PLAY" /* GXT: Press ~INPUT_CONTEXT~ to play Blackjack. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_2__::func_187(Local_119.f_259, 1))
					{
						__LIB_6__::func_404(&(Local_119.f_259));
						Local_119.f_259 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						__LIB_0__::func_802();
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						func_359(4);
					}
				}
				else
				{
					if (func_317())
					{
						HUD::CLEAR_HELP(true);
					}
					if (Local_119.f_259 != -1)
					{
						__LIB_6__::func_404(&(Local_119.f_259));
						Local_119.f_259 = -1;
					}
					Local_119.f_247 = 0;
					func_359(1);
				}
			}
			else
			{
				if (func_317())
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_119.f_259 != -1)
				{
					__LIB_6__::func_404(&(Local_119.f_259));
					Local_119.f_259 = -1;
				}
				Local_119.f_247 = 0;
				func_359(1);
			}
			break;
		case 3:
			if (!__LIB_10__::func_858())
			{
				func_359(2);
			}
			break;
		case 4:
			__LIB_37__::func_738(1);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3) || __LIB_2__::func_83(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (BitTest(Global_1946250.f_5, 21))
			{
				__LIB_0__::func_495(&(Local_119.f_1578), 0, 0);
				func_296(Local_119.f_247);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_359(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, false);
				if (__LIB_7__::func_161(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_147)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						__LIB_1__::func_193(0, 0);
						__LIB_7__::func_286(1, sVar2, sVar2);
						__LIB_1__::func_319("BJACK_TITLE" /* GXT: BLACKJACK */);
						__LIB_2__::func_562(-1, 1, 1);
						__LIB_1__::func_342("BJACK_DIS" /* GXT: ~a~~n~~n~~a~~n~~n~~a~ */, 0, 0);
						__LIB_2__::func_353("BJACK_DIS1" /* GXT: The aim of Blackjack is to beat the Dealer's hand without going over 21. This game uses four standard 52-card decks, which are shuffled at the start of every hand. Insurance is not offered if the Dealer's face up card is an ace. */);
						__LIB_2__::func_353("BJACK_DIS2" /* GXT: You can split your hand once if the first two cards have the same value. Drawing seven cards without going bust will automatically win. */);
						__LIB_2__::func_353("BJACK_DIS3" /* GXT: The Dealer will stand on soft 17. */);
						__LIB_1__::func_344(202, "BJACK_EXIT" /* GXT: Quit */, -1);
						__LIB_1__::func_344(201, "BJACK_CONT" /* GXT: Continue */, -1);
						iLocal_147 = 1;
					}
					__LIB_25__::func_745(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					__LIB_7__::func_49(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_147 = 0;
					func_235();
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					__LIB_7__::func_49(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_147 = 0;
					MISC::SET_BIT(&(Global_1946250.f_5), 21);
					__LIB_0__::func_495(&(Local_119.f_1578), 0, 0);
					func_296(Local_119.f_247);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_359(5);
				}
			}
			break;
		case 5:
			if ((((func_234(Local_119.f_247) && !__LIB_2__::func_368()) && !__LIB_1__::func_156()) && func_350()) && !__LIB_26__::func_412())
			{
				__LIB_0__::func_579(&(Local_119.f_1578));
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 2);
				__LIB_26__::func_413(1);
				func_359(6);
			}
			else
			{
				if (__LIB_2__::func_368())
				{
					func_235();
				}
				if (__LIB_1__::func_156())
				{
					func_235();
				}
				if (func_224(Local_119.f_247))
				{
					func_235();
				}
				if (func_223())
				{
					func_235();
				}
				if (!func_350())
				{
					func_235();
				}
				if (__LIB_26__::func_412())
				{
					func_235();
				}
			}
			break;
		case 6:
			if (!__LIB_2__::func_368() && !__LIB_1__::func_156())
			{
				if (func_222())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					fVar3 = __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_221(Local_119.f_247, 0), 1);
					fVar4 = __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_221(Local_119.f_247, 1), 1);
					fVar5 = __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_221(Local_119.f_247, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_119.f_251 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_119.f_251 = 2;
					}
					else
					{
						Local_119.f_251 = 0;
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_221(Local_119.f_247, Local_119.f_251), 1f, 5000, func_219(Local_119.f_247, Local_119.f_251), 0.01f);
					func_359(7);
				}
			}
			else
			{
				func_235();
			}
			break;
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
			{
				Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_119.f_247), func_217(Local_119.f_247), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, __LIB_31__::func_634(), __LIB_31__::func_633(Local_119.f_251), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
				Local_118[PLAYER::PLAYER_ID() /*8*/].f_6.f_1 = Local_118[PLAYER::PLAYER_ID() /*8*/].f_4;
				func_359(8);
			}
			break;
		case 8:
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_BLACKJACK_CAMERA"));
			Local_119.f_258 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_119.f_255);
			if (func_214())
			{
				func_213(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 2);
			}
			else
			{
				func_213(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 1);
			}
			if (Local_119.f_258 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showui"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))
				{
					Local_119.f_1582 = "idle_cardgames";
					Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_119.f_247), func_217(Local_119.f_247), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, __LIB_31__::func_634(), Local_119.f_1582, 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_125 = { Var6 };
					if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
					{
						Local_125.f_0 = 1695074466;
					}
					else if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 == 2 || Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 == 3)
					{
						Local_125.f_0 = joaat("high stakes");
					}
					else
					{
						Local_125.f_0 = joaat("standard");
					}
					Local_125.f_1 = Local_118[PLAYER::PLAYER_ID() /*8*/].f_4;
					Local_125.f_6 = 1;
					if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
					{
						Local_125.f_15 = joaat("VIP membership");
					}
					else if (__LIB_5__::func_833())
					{
						Local_125.f_15 = joaat("paid membership");
					}
					else if (__LIB_6__::func_401(1) && (__LIB_0__::func_834(__LIB_0__::func_582()) || __LIB_37__::func_737(PLAYER::PLAYER_ID())))
					{
						Local_125.f_15 = joaat("Gang membership");
					}
					else
					{
						Local_125.f_15 = joaat("no membership");
					}
					__LIB_0__::func_495(&uLocal_122, 0, 0);
					func_210();
					Local_119.f_249 = __LIB_37__::func_740();
					func_359(9);
				}
			}
			break;
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_BLACKJACK_CAMERA"));
			func_90();
			break;
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
			{
				func_213(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), func_89());
				Var7 = { PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/), PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/), 0f };
				Local_119.f_258 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_119.f_255);
				if (Local_119.f_258 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) || (SYSTEM::VMAG(Var7) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(func_58());
					STREAMING::REMOVE_ANIM_DICT(__LIB_31__::func_627());
					STREAMING::REMOVE_ANIM_DICT(func_88());
					STREAMING::REMOVE_ANIM_DICT(__LIB_31__::func_634());
					MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 2);
					func_337();
					func_87();
					func_359(2);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(func_58());
				STREAMING::REMOVE_ANIM_DICT(__LIB_31__::func_627());
				STREAMING::REMOVE_ANIM_DICT(func_88());
				STREAMING::REMOVE_ANIM_DICT(__LIB_31__::func_634());
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 2);
				func_337();
				func_87();
				func_359(2);
			}
			break;
	}
}

void func_87()//Position - 0xA94C
{
	MISC::CLEAR_BIT(&(Local_119.f_252), 21);
	MISC::CLEAR_BIT(&(Local_119.f_252), 22);
}

char* func_88()//Position - 0xA96A
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_89()//Position - 0xA976
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_37__::func_740();
	iVar1 = (iVar0 - Local_119.f_249);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_90()//Position - 0xA9A3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var4;
	struct<26> Var5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	char* sVar21;
	char* sVar22;
	char* sVar23;
	char* sVar24;
	bool bVar25;
	char* sVar26;
	if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		iVar1 = (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 * 4 + Local_109.f_1575[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]);
		iVar0 = Local_109.f_1600[iVar1];
	}
	if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		if (func_209(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4))
		{
			__LIB_0__::func_151("BJACK_ERROR" /* GXT: Something went wrong with the game. */, -1);
			return;
		}
	}
	bVar2 = false;
	if (__LIB_31__::func_626(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, Local_119.f_257))
	{
		bVar2 = true;
	}
	func_194();
	if (__LIB_31__::func_639())
	{
		Local_125.f_10 = 1;
	}
	Local_125.f_11 = __LIB_35__::func_441();
	if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] != 6 || Local_109.f_1575[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)))
	{
		if ((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_119.f_250, 0)) && !Local_119.f_234) && !func_191())
		{
			if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
			{
				Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
			}
			Local_124.f_18 = __LIB_31__::func_639();
			Local_124.f_19 = __LIB_35__::func_441();
			Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
			Local_124.f_7 = __LIB_37__::func_740();
			Local_125.f_2 = joaat("QUIT");
			Local_124.f_4 = joaat("QUIT");
			Local_124.f_25 = joaat("QUIT");
			if (Local_119.f_0 > 1 || Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 != 0)
			{
				if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
				}
			}
			if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 > 0 && !Local_119.f_232)
			{
				__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
			}
			if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 > 0 && !Local_119.f_233)
			{
				__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
			}
			SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1));
			SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2));
			func_375(1);
			HUD::CLEAR_HELP(true);
			return;
		}
	}
	if (((Global_2788828 == Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 || Global_2725439.f_12) || Global_1946244 == 33) || !__LIB_4__::func_715())
	{
		if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
		{
			Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
		}
		Local_124.f_18 = __LIB_31__::func_639();
		Local_124.f_19 = __LIB_35__::func_441();
		Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
		Local_124.f_7 = __LIB_37__::func_740();
		if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
		{
			STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
		}
		func_375(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (Local_119.f_255 > -1)
	{
		Local_119.f_258 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_119.f_255);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !Local_119.f_234)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_31__::func_634(), "idle_cardgames", 3))
			{
				if (Local_119.f_258 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, __LIB_31__::func_634(), "idle_cardgames", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
					Local_119.f_1582 = "idle_cardgames";
					MISC::CLEAR_BIT(&(Local_119.f_252), 0);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_31__::func_634(), "idle_cardgames", 3))
			{
				if (Local_119.f_258 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, __LIB_31__::func_634(), func_186(0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
					MISC::CLEAR_BIT(&(Local_119.f_252), 0);
				}
			}
		}
	}
	if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
	{
		__LIB_11__::func_284(&(Local_119.f_874));
		if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]))) && !BitTest(Local_119.f_250, 0))
		{
			if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] != 6 || Local_109.f_1575[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)))
			{
				__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "BJACK_EXIT" /* GXT: Quit */, &(Local_119.f_874), 0);
			}
			else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_109.f_1555[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], 12)) && !BitTest(Local_119.f_252, 0))
			{
				if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14))
				{
					if (((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 12) && !(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7)
					{
						__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "BJACK_HIT" /* GXT: Hit */, &(Local_119.f_874), 0);
						__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "BJACK_STAND" /* GXT: Stand */, &(Local_119.f_874), 0);
					}
				}
				else if ((((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 12) && !(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7) || (((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 13) && !(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21)) && func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21) && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 7))
				{
					__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "BJACK_HIT" /* GXT: Hit */, &(Local_119.f_874), 0);
					__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true), "BJACK_STAND" /* GXT: Stand */, &(Local_119.f_874), 0);
				}
				if (Local_119.f_248 >= Local_119.f_244)
				{
					if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14))
					{
						if ((func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 10))
						{
							__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "BJACK_DOUBLE" /* GXT: Double Down */, &(Local_119.f_874), 0);
						}
					}
					else if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 13) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 11))
					{
						if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
						{
							if (func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) < 21)
							{
								__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "BJACK_DOUBLE" /* GXT: Double Down */, &(Local_119.f_874), 0);
							}
						}
					}
					else if ((func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 10))
					{
						__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "BJACK_DOUBLE" /* GXT: Double Down */, &(Local_119.f_874), 0);
					}
				}
				if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14))
				{
					if (Local_119.f_248 >= Local_119.f_244)
					{
						if (func_35(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_35(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/][1]))
						{
							__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true), "BJACK_SPLIT" /* GXT: Split */, &(Local_119.f_874), 0);
						}
					}
				}
			}
		}
		if ((Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] == 3 && !BitTest(Local_119.f_250, 0)) && (Local_119.f_248 >= Local_119.f_246 || Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 != 0))
		{
			if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 15) && !BitTest(Local_119.f_252, 0))
			{
				__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "BJACK_PLACE" /* GXT: Place Bet */, &(Local_119.f_874), 0);
				if (!BitTest(Local_119.f_252, 20))
				{
					__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "BJACK_BET_MAX" /* GXT: Max Bet */, &(Local_119.f_874), 0);
				}
				__LIB_11__::func_245(2, 7, "BJACK_BET_NUM" /* GXT: Adjust Bet */, &(Local_119.f_874));
			}
		}
		if (BitTest(Local_119.f_250, 0))
		{
			__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "IB_BACK" /* GXT: Back */, &(Local_119.f_874), 0);
			__LIB_11__::func_245(2, 8, "IB_TAB" /* GXT: Previous/Next Page */, &(Local_119.f_874));
		}
		if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] < 9 || !BitTest(Local_109.f_1555[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], 13))
		{
			if (Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
			{
				__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true), "BJACK_DLR" /* GXT: Dealer's Cards */, &(Local_119.f_874), 0);
			}
			if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
			{
				__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true), "BJACK_CARDS" /* GXT: Your Cards */, &(Local_119.f_874), 0);
			}
		}
		if (bLocal_139 && Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] > 1)
		{
			__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/, true), "BJACK_LR" /* GXT: Look Left/Right */, &(Local_119.f_874), 0);
		}
		if (!BitTest(Local_119.f_250, 0))
		{
			__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), "BJACK_RULESb" /* GXT: Rules */, &(Local_119.f_874), 0);
		}
		Var3 = { __LIB_1__::func_59() };
		__LIB_4__::func_260(&(Local_119.f_874), 1f);
		__LIB_7__::func_693(&(Local_119.f_873), &Var3, &(Local_119.f_874), __LIB_1__::func_57(&(Local_119.f_874)));
		__LIB_0__::func_660(1);
	}
	func_166();
	switch (Local_119.f_0)
	{
		case 0:
			if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] == 3)
			{
				if ((Local_119.f_244 > Local_119.f_248 || Local_119.f_244 < Local_119.f_246) || Local_119.f_244 > Local_119.f_245)
				{
					Local_119.f_244 = Local_119.f_246;
				}
				Var4 = 7;
				Local_119.f_213 = { Var4 };
				Local_119.f_222 = { Var4 };
				Local_124 = { Var5 };
				Local_124.f_10 = 1;
				Local_124.f_0 = joaat("blackjack");
				Local_124.f_11 = __LIB_0__::func_834(PLAYER::PLAYER_ID());
				if (__LIB_0__::func_834(PLAYER::PLAYER_ID()))
				{
					Local_124.f_20 = joaat("VIP membership");
				}
				else if (__LIB_5__::func_833())
				{
					Local_124.f_20 = joaat("paid membership");
				}
				else if (__LIB_6__::func_401(1) && (__LIB_0__::func_834(__LIB_0__::func_582()) || __LIB_37__::func_737(PLAYER::PLAYER_ID())))
				{
					Local_124.f_20 = joaat("Gang membership");
				}
				else
				{
					Local_124.f_20 = joaat("no membership");
				}
				if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
				{
					Local_124.f_1 = 1695074466;
				}
				else if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 == 2 || Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 == 3)
				{
					Local_124.f_1 = joaat("high stakes");
				}
				else
				{
					Local_124.f_1 = joaat("standard");
				}
				__LIB_0__::func_495(&uLocal_120, 0, 0);
				Local_124.f_3 = Local_109.f_1560[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
				Local_124.f_2 = Local_118[PLAYER::PLAYER_ID() /*8*/].f_4;
				func_165(1);
			}
			break;
		case 1:
			if ((!__LIB_5__::func_833() && !(__LIB_6__::func_401(1) && __LIB_2__::func_934(__LIB_0__::func_582()))) || ((!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && (__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3)) && !(__LIB_6__::func_401(1) && __LIB_0__::func_834(__LIB_0__::func_582()))))
			{
				if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_124.f_18 = __LIB_31__::func_639();
				Local_124.f_19 = __LIB_35__::func_441();
				Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
				Local_124.f_7 = __LIB_37__::func_740();
				Local_125.f_2 = joaat("no membership");
				Local_124.f_4 = joaat("no membership");
				if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
				}
				func_375(1);
				HUD::CLEAR_HELP(true);
				if (Local_119.f_256 == 1)
				{
					__LIB_0__::func_151("IT_MEMBOc" /* GXT: You have been removed from the game because you no longer have access to your MC President's casino membership. */, -1);
				}
				else if (Local_119.f_256 == 2)
				{
					__LIB_0__::func_151("IT_MEMBOa" /* GXT: You have been removed from the game because you no longer have access to your CEO's casino membership. */, -1);
				}
				else if (Local_119.f_256 == 3)
				{
					__LIB_0__::func_151("IT_MEMBOb" /* GXT: You have been removed from the game because you no longer have access to your VIP's casino membership. */, -1);
				}
				return;
			}
			if ((Local_119.f_248 < Local_119.f_246 && Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 == 0) && !Local_119.f_234)
			{
				if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_124.f_18 = __LIB_31__::func_639();
				Local_124.f_19 = __LIB_35__::func_441();
				Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
				Local_124.f_7 = __LIB_37__::func_740();
				Local_125.f_2 = joaat("low chips");
				Local_124.f_4 = joaat("low chips");
				if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
				}
				func_375(1);
				HUD::CLEAR_HELP(true);
				if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
				{
					if (Local_119.f_248 <= 0)
					{
						__LIB_0__::func_151("CAS_MG_NOCHIPS6" /* GXT: Chips are required to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */, -1);
					}
					else
					{
						__LIB_0__::func_151("CAS_MG_LOWCHIPS6" /* GXT: You don't have enough Chips to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */, -1);
					}
				}
				else if (Local_119.f_248 <= 0)
				{
					__LIB_0__::func_151("CAS_MG_NOCHIPS2" /* GXT: Chips are required to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */, -1);
				}
				else
				{
					__LIB_0__::func_151("CAS_MG_LOWCHIPS2" /* GXT: You don't have enough Chips to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */, -1);
				}
				return;
			}
			if (__LIB_26__::func_411())
			{
				switch (__LIB_26__::func_295())
				{
					case 0:
						Local_125.f_2 = joaat("win cutoff");
						break;
					case 1:
						Local_125.f_2 = joaat("loss cutoff");
						break;
					case 2:
						Local_125.f_2 = joaat("time cutoff");
						break;
				}
				switch (__LIB_26__::func_295())
				{
					case 0:
						Local_124.f_4 = joaat("win cutoff");
						break;
					case 1:
						Local_124.f_4 = joaat("loss cutoff");
						break;
					case 2:
						Local_124.f_4 = joaat("time cutoff");
						break;
				}
				if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_124.f_18 = __LIB_31__::func_639();
				Local_124.f_19 = __LIB_35__::func_441();
				Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
				Local_124.f_7 = __LIB_37__::func_740();
				if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
				}
				func_375(1);
				HUD::CLEAR_HELP(true);
				if (__LIB_26__::func_295() == 2)
				{
					__LIB_0__::func_151("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */, -1);
				}
				else
				{
					__LIB_0__::func_151("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */, -1);
				}
				return;
			}
			if ((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 15) && !BitTest(Local_119.f_252, 0)) && (!func_350() || __LIB_26__::func_412()))
			{
				if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
				{
					Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
				}
				Local_124.f_18 = __LIB_31__::func_639();
				Local_124.f_19 = __LIB_35__::func_441();
				Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
				Local_124.f_7 = __LIB_37__::func_740();
				if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
				{
					STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
				}
				func_375(1);
				HUD::CLEAR_HELP(true);
				return;
			}
			if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 15) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 16))
			{
				if (!BitTest(Local_119.f_252, 0))
				{
					if (((((!BitTest(Local_119.f_253, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_119.f_250, 0))
					{
						bVar7 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
						bVar8 = PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
						if (bVar8 || (((((bVar7 && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_119.f_250, 0)))
						{
							__LIB_0__::func_580(&(Local_119.f_1574), 0, 0);
							MISC::SET_BIT(&(Local_119.f_253), 1);
						}
					}
					else if (__LIB_2__::func_47(&(Local_119.f_1574), 100, 0))
					{
						__LIB_0__::func_579(&(Local_119.f_1574));
						MISC::CLEAR_BIT(&(Local_119.f_253), 1);
					}
					if (((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && !bVar8) && !bVar7) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_119.f_250, 0)) && !BitTest(Local_119.f_252, 20))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar6 = true;
					}
					if (bVar6)
					{
						while (bVar6)
						{
							if (Local_119.f_244 >= 10000)
							{
								iVar9 = 5000;
							}
							else if (Local_119.f_244 >= 5000)
							{
								iVar9 = 1000;
							}
							else if (Local_119.f_244 >= 500)
							{
								iVar9 = 500;
							}
							else if (Local_119.f_244 >= 100)
							{
								iVar9 = 50;
							}
							else
							{
								iVar9 = 10;
							}
							if (Local_119.f_244 > Local_119.f_248)
							{
								Local_119.f_244 = (Local_119.f_244 - iVar9);
							}
							if (Local_119.f_244 < Local_119.f_246)
							{
								Local_119.f_244 = Local_119.f_246;
							}
							Local_119.f_244 = (Local_119.f_244 + iVar9);
							if (Local_119.f_244 > Local_119.f_245)
							{
								bVar6 = false;
								Local_119.f_244 = Local_119.f_245;
							}
							if (Local_119.f_244 > Local_119.f_248)
							{
								bVar6 = false;
								Local_119.f_244 = (Local_119.f_244 - iVar9);
							}
						}
					}
					else
					{
						if (Local_119.f_244 >= 10000)
						{
							iVar9 = 5000;
						}
						else if (Local_119.f_244 >= 5000)
						{
							iVar9 = 1000;
						}
						else if (Local_119.f_244 >= 500)
						{
							iVar9 = 500;
						}
						else if (Local_119.f_244 >= 100)
						{
							iVar9 = 50;
						}
						else
						{
							iVar9 = 10;
						}
						if (Local_119.f_244 > Local_119.f_248)
						{
							Local_119.f_244 = (Local_119.f_244 - iVar9);
						}
						if (Local_119.f_244 < Local_119.f_246)
						{
							Local_119.f_244 = Local_119.f_246;
						}
						iVar10 = Local_119.f_244;
						if (bVar7)
						{
							Local_119.f_244 = (Local_119.f_244 + iVar9);
							if (Local_119.f_244 > Local_119.f_245)
							{
								Local_119.f_244 = Local_119.f_245;
							}
							if (Local_119.f_244 > Local_119.f_248)
							{
								Local_119.f_244 = (Local_119.f_244 - iVar9);
							}
							if (Local_119.f_244 == iVar10)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || !BitTest(Local_119.f_252, 23))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_119.f_252), 23);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_119.f_252), 23);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar8)
						{
							if (Local_119.f_244 <= 100)
							{
								iVar9 = 10;
							}
							else if (Local_119.f_244 <= 500)
							{
								iVar9 = 50;
							}
							else if (Local_119.f_244 <= 5000)
							{
								iVar9 = 500;
							}
							else if (Local_119.f_244 <= 10000)
							{
								iVar9 = 1000;
							}
							else
							{
								iVar9 = 5000;
							}
							Local_119.f_244 = (Local_119.f_244 - iVar9);
							if (Local_119.f_244 < Local_119.f_246)
							{
								Local_119.f_244 = Local_119.f_246;
							}
							if (Local_119.f_244 == iVar10)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || !BitTest(Local_119.f_252, 23))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_119.f_252), 23);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_119.f_252), 23);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_119.f_244 == Local_119.f_245 || (Local_119.f_244 + iVar9) > Local_119.f_245) || (Local_119.f_244 + iVar9) > Local_119.f_248)
					{
						MISC::SET_BIT(&(Local_119.f_252), 20);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_119.f_252), 20);
					}
					MISC::SET_BIT(&(Local_119.f_253), 0);
					iVar11 = (30 - (__LIB_1__::func_295(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0) / 1000));
					if (iVar11 > 0 || !__LIB_0__::func_649(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])))
					{
						if (((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/)) && Local_119.f_244 >= Local_119.f_246) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_119.f_250, 0))
						{
							MISC::SET_BIT(&(Local_119.f_252), 0);
							Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), func_164(Local_119.f_244, bVar2, 0, 0), 4f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
							HUD::CLEAR_HELP(true);
						}
						if (!__LIB_0__::func_1("BJACK_BET" /* GXT: Place your bet. */) && !BitTest(Local_119.f_252, 0))
						{
							if ((!bLocal_138 && !bLocal_139) && !bLocal_130)
							{
								__LIB_3__::func_988("BJACK_BET" /* GXT: Place your bet. */);
							}
						}
					}
					else if (__LIB_0__::func_649(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])) && __LIB_2__::func_47(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 30000, 0))
					{
						if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 15))
						{
							MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 16);
						}
					}
				}
				else
				{
					if ((Local_119.f_258 != -1 && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips"))) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						Local_119.f_234 = 1;
					}
					if (Local_119.f_234 && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						if (__LIB_42__::func_54(Local_119.f_244, &(Local_119.f_243), 1, Local_119.f_231))
						{
							if (Local_119.f_243 == 3)
							{
								Local_119.f_234 = 0;
								Local_119.f_243 = 0;
							}
							else
							{
								Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = Local_119.f_244;
								SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1));
								Local_125.f_3 = (Local_125.f_3 - Local_119.f_244);
								Local_124.f_6 = (Local_124.f_6 - Local_119.f_244);
								if (BitTest(Local_119.f_252, 20))
								{
									Local_124.f_5 = 1;
								}
								Local_125.f_12++;
								Local_125.f_7 = (Local_125.f_7 + Local_119.f_244);
								Local_124.f_12 = (Local_124.f_12 + Local_119.f_244);
								MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 15);
								Local_119.f_234 = 0;
							}
						}
					}
				}
			}
			if ((__LIB_0__::func_649(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/])) && Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] > 1) && (30000 - __LIB_1__::func_295(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)) > 0)
			{
				if (__LIB_1__::func_295(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0) <= 24000)
				{
					__LIB_6__::func_929((30000 - __LIB_1__::func_295(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					__LIB_6__::func_929((30000 - __LIB_1__::func_295(&(Local_109.f_1642[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
			if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] > 3)
			{
				if (BitTest(Local_119.f_253, 0) && !Local_119.f_234)
				{
					HUD::CLEAR_HELP(true);
					MISC::CLEAR_BIT(&(Local_119.f_252), 0);
					if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 15))
					{
						MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 16);
					}
					func_165(2);
				}
			}
			__LIB_24__::func_757(Local_119.f_244, "BJACK_BET2" /* GXT: BET */, -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			break;
		case 2:
			if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
			{
				if (Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
				{
					__LIB_0__::func_579(&(Local_119.f_1576));
					iLocal_142 = 0;
					func_165(3);
				}
			}
			break;
		case 3:
			iVar12 = func_34(&(Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/]), 0);
			iVar13 = func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/]));
			iVar14 = func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/]));
			iVar15 = Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12;
			iVar16 = Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8;
			iVar17 = Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8;
			bVar18 = (iVar15 == 2 && iVar12 == 21);
			bVar19 = (iVar16 == 2 && iVar13 == 21);
			bVar20 = (iVar17 == 2 && iVar14 == 21);
			if (((bVar20 || iVar14 >= 21) || iVar17 == 7) && !BitTest(Local_109.f_1555[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
			{
				MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 13);
			}
			if (((bVar19 || iVar13 >= 21) || iVar16 == 7) && !BitTest(Local_109.f_1555[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
			{
				if (iVar13 > 21)
				{
					if (!BitTest(Local_119.f_252, 19))
					{
						Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, __LIB_31__::func_634(), func_154(), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
						MISC::SET_BIT(&(Local_119.f_252), 19);
					}
				}
				MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 12);
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4])))
			{
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_109.f_1555[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], 12))
				{
					if (__LIB_0__::func_649(&(Local_119.f_1576)))
					{
						if ((30000 - __LIB_1__::func_295(&(Local_119.f_1576), 0, 0)) >= 0)
						{
							if (__LIB_1__::func_295(&(Local_119.f_1576), 0, 0) <= 24000)
							{
								__LIB_6__::func_929((30000 - __LIB_1__::func_295(&(Local_119.f_1576), 0, 0)), "BJACK_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								__LIB_6__::func_929((30000 - __LIB_1__::func_295(&(Local_119.f_1576), 0, 0)), "BJACK_TIME" /* GXT: TIME */, 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (__LIB_2__::func_47(&(Local_119.f_1576), 30000, 0))
						{
							MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 12);
							MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 13);
							__LIB_0__::func_579(&(Local_119.f_1576));
							return;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_31__::func_634(), func_186(1), 3))
						{
							__LIB_0__::func_495(&(Local_119.f_1576), 0, 0);
						}
					}
					if (bVar18)
					{
						MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 12);
						MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 13);
					}
					else if (((BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14) && BitTest(Local_109.f_1565[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], PLAYER::PLAYER_ID())) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 13)) && !(BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 11) && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 2))
					{
						if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 11) || BitTest(Local_119.f_252, 0))
						{
							if (!BitTest(Local_119.f_252, 0))
							{
								if (((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_119.f_250, 0))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
									{
										Local_124.f_22 = 1;
										if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
										{
											MISC::SET_BIT(&(Local_119.f_252), 6);
										}
										else if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 3)
										{
											MISC::SET_BIT(&(Local_119.f_252), 7);
										}
										else if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 4)
										{
											MISC::SET_BIT(&(Local_119.f_252), 8);
										}
										else if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 5)
										{
											MISC::SET_BIT(&(Local_119.f_252), 9);
										}
										else if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 6)
										{
											MISC::SET_BIT(&(Local_119.f_252), 10);
										}
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												sVar21 = "request_card";
												break;
											case 1:
												sVar21 = "request_card_alt1";
												break;
											case 2:
												sVar21 = "request_card_alt2";
												break;
										}
										Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), sVar21, 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
										MISC::SET_BIT(&(Local_119.f_252), 0);
										__LIB_0__::func_579(&(Local_119.f_1576));
									}
									else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
									{
										Local_124.f_21 = 1;
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												sVar22 = "decline_card_001";
												break;
											case 1:
												sVar22 = "decline_card_alt1";
												break;
											case 2:
												sVar22 = "decline_card_alt2";
												break;
										}
										Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), sVar22, 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
										MISC::SET_BIT(&(Local_119.f_252), 14);
										MISC::SET_BIT(&(Local_119.f_252), 0);
										__LIB_0__::func_579(&(Local_119.f_1576));
									}
									else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
									{
										if (Local_119.f_248 >= Local_119.f_244 && iVar17 == 2)
										{
											Local_124.f_23 = 1;
											Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), func_164(Local_119.f_244, bVar2, 1, 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
											MISC::SET_BIT(&(Local_119.f_252), 12);
											MISC::SET_BIT(&(Local_119.f_252), 0);
											__LIB_0__::func_579(&(Local_119.f_1576));
										}
									}
								}
							}
							else if (Local_119.f_258 != -1)
							{
								if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.3f)
								{
									if (BitTest(Local_119.f_252, 6))
									{
										MISC::CLEAR_BIT(&(Local_119.f_252), 6);
										MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 5);
									}
									else if (BitTest(Local_119.f_252, 7))
									{
										MISC::CLEAR_BIT(&(Local_119.f_252), 7);
										MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 6);
									}
									else if (BitTest(Local_119.f_252, 8))
									{
										MISC::CLEAR_BIT(&(Local_119.f_252), 8);
										MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 7);
									}
									else if (BitTest(Local_119.f_252, 9))
									{
										MISC::CLEAR_BIT(&(Local_119.f_252), 9);
										MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 8);
									}
									else if (BitTest(Local_119.f_252, 10))
									{
										MISC::CLEAR_BIT(&(Local_119.f_252), 10);
										MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 9);
									}
								}
								if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_001", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.3f)
								{
									if (BitTest(Local_119.f_252, 14))
									{
										MISC::CLEAR_BIT(&(Local_119.f_252), 14);
										MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 13);
									}
								}
								if (BitTest(Local_119.f_252, 12))
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")))
									{
										Local_119.f_234 = 1;
									}
									if (!BitTest(Local_119.f_252, 17) && Local_119.f_234)
									{
										if (__LIB_42__::func_54(Local_119.f_244, &(Local_119.f_243), 1, Local_119.f_231))
										{
											if (Local_119.f_243 == 3)
											{
												MISC::CLEAR_BIT(&(Local_119.f_252), 12);
												Local_119.f_234 = 0;
												Local_119.f_243 = 0;
											}
											else
											{
												Local_125.f_3 = (Local_125.f_3 - Local_119.f_244);
												Local_124.f_6 = (Local_124.f_6 - Local_119.f_244);
												Local_125.f_8 = (Local_125.f_8 + Local_119.f_244);
												Local_124.f_13 = (Local_124.f_13 + Local_119.f_244);
												Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = (Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 + Local_119.f_244);
												SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2));
												MISC::SET_BIT(&(Local_119.f_252), 17);
												MISC::CLEAR_BIT(&(Local_119.f_252), 12);
												MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 11);
												Local_119.f_234 = 0;
											}
										}
									}
								}
							}
						}
					}
					else if ((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 10) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 12)) || BitTest(Local_119.f_252, 0))
					{
						if (!BitTest(Local_119.f_252, 0))
						{
							if (((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_119.f_250, 0))
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
								{
									Local_124.f_22 = 1;
									if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
									{
										MISC::SET_BIT(&(Local_119.f_252), 1);
									}
									else if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 3)
									{
										MISC::SET_BIT(&(Local_119.f_252), 2);
									}
									else if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 4)
									{
										MISC::SET_BIT(&(Local_119.f_252), 3);
									}
									else if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 5)
									{
										MISC::SET_BIT(&(Local_119.f_252), 4);
									}
									else if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 6)
									{
										MISC::SET_BIT(&(Local_119.f_252), 5);
									}
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											sVar23 = "request_card";
											break;
										case 1:
											sVar23 = "request_card_alt1";
											break;
										case 2:
											sVar23 = "request_card_alt2";
											break;
									}
									Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), sVar23, 4f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
									MISC::SET_BIT(&(Local_119.f_252), 0);
									__LIB_0__::func_579(&(Local_119.f_1576));
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
								{
									Local_124.f_21 = 1;
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											sVar24 = "decline_card_001";
											break;
										case 1:
											sVar24 = "decline_card_alt1";
											break;
										case 2:
											sVar24 = "decline_card_alt2";
											break;
									}
									Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), sVar24, 4f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
									MISC::SET_BIT(&(Local_119.f_252), 13);
									MISC::SET_BIT(&(Local_119.f_252), 0);
									__LIB_0__::func_579(&(Local_119.f_1576));
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
								{
									if (Local_119.f_248 >= Local_119.f_244 && iVar16 == 2)
									{
										Local_124.f_23 = 1;
										Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), func_164(Local_119.f_244, bVar2, 1, 0), 4f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
										MISC::SET_BIT(&(Local_119.f_252), 11);
										MISC::SET_BIT(&(Local_119.f_252), 0);
										__LIB_0__::func_579(&(Local_119.f_1576));
									}
								}
								else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
								{
									if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14))
									{
										if ((func_35(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_35(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/][1]) && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && Local_119.f_248 >= Local_119.f_244)
										{
											Local_124.f_24 = 1;
											Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, func_88(), func_164(Local_119.f_244, bVar2, 0, 1), 4f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
											MISC::SET_BIT(&(Local_119.f_252), 15);
											MISC::SET_BIT(&(Local_119.f_252), 0);
											__LIB_0__::func_579(&(Local_119.f_1576));
										}
									}
								}
							}
						}
						else if (Local_119.f_258 != -1)
						{
							if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "request_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.3f)
							{
								if (BitTest(Local_119.f_252, 1))
								{
									MISC::CLEAR_BIT(&(Local_119.f_252), 1);
									MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 0);
								}
								else if (BitTest(Local_119.f_252, 2))
								{
									MISC::CLEAR_BIT(&(Local_119.f_252), 2);
									MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 1);
								}
								else if (BitTest(Local_119.f_252, 3))
								{
									MISC::CLEAR_BIT(&(Local_119.f_252), 3);
									MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 2);
								}
								else if (BitTest(Local_119.f_252, 4))
								{
									MISC::CLEAR_BIT(&(Local_119.f_252), 4);
									MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 3);
								}
								else if (BitTest(Local_119.f_252, 5))
								{
									MISC::CLEAR_BIT(&(Local_119.f_252), 5);
									MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 4);
								}
							}
							if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_001", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_88(), "decline_card_alt2", 3)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_119.f_258) >= 0.3f)
							{
								if (BitTest(Local_119.f_252, 13))
								{
									MISC::CLEAR_BIT(&(Local_119.f_252), 13);
									MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 12);
								}
							}
							if (BitTest(Local_119.f_252, 11))
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")))
								{
									Local_119.f_234 = 1;
								}
								if (!BitTest(Local_119.f_252, 16) && Local_119.f_234)
								{
									if (__LIB_42__::func_54(Local_119.f_244, &(Local_119.f_243), 1, Local_119.f_231))
									{
										if (Local_119.f_243 == 3)
										{
											MISC::CLEAR_BIT(&(Local_119.f_252), 11);
											Local_119.f_234 = 0;
											Local_119.f_243 = 0;
										}
										else
										{
											Local_125.f_3 = (Local_125.f_3 - Local_119.f_244);
											Local_124.f_6 = (Local_124.f_6 - Local_119.f_244);
											Local_125.f_7 = (Local_125.f_7 + Local_119.f_244);
											Local_124.f_12 = (Local_124.f_12 + Local_119.f_244);
											Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = (Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 + Local_119.f_244);
											SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1));
											MISC::SET_BIT(&(Local_119.f_252), 16);
											MISC::CLEAR_BIT(&(Local_119.f_252), 11);
											MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 10);
											Local_119.f_234 = 0;
										}
									}
								}
							}
							if (BitTest(Local_119.f_252, 15))
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("showchips")))
								{
									Local_119.f_234 = 1;
								}
								if (!BitTest(Local_119.f_252, 18) && Local_119.f_234)
								{
									if (__LIB_42__::func_54(Local_119.f_244, &(Local_119.f_243), 1, Local_119.f_231))
									{
										if (Local_119.f_243 == 3)
										{
											MISC::CLEAR_BIT(&(Local_119.f_252), 15);
											Local_119.f_234 = 0;
											Local_119.f_243 = 0;
										}
										else
										{
											Local_125.f_3 = (Local_125.f_3 - Local_119.f_244);
											Local_124.f_6 = (Local_124.f_6 - Local_119.f_244);
											Local_125.f_8 = (Local_125.f_8 + Local_119.f_244);
											Local_124.f_13 = (Local_124.f_13 + Local_119.f_244);
											Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = (Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 + Local_119.f_244);
											SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2));
											MISC::SET_BIT(&(Local_119.f_252), 18);
											MISC::CLEAR_BIT(&(Local_119.f_252), 15);
											MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/]), 14);
											Local_119.f_234 = 0;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != PLAYER::PLAYER_ID() && iVar0 != __LIB_0__::func_160())
				{
					if (!__LIB_0__::func_1("BJACK_WAIT" /* GXT: Waiting for other players. */))
					{
						if ((!bLocal_138 && !bLocal_139) && !bLocal_130)
						{
							__LIB_3__::func_988("BJACK_WAIT" /* GXT: Waiting for other players. */);
						}
					}
				}
				else if (__LIB_0__::func_1("BJACK_WAIT" /* GXT: Waiting for other players. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0)
			{
				if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] == 6)
				{
					if ((Local_109.f_1575[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] == (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)) && !(!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14) && BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 12))) && !((BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14) && BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 12)) && BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 13)))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_25(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)), iVar0, 1), 3))
						{
							if (((Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2 && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14)) && Local_119.f_248 >= Local_119.f_244) && func_35(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/][0]) == func_35(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/][1]))
							{
								if ((!bLocal_138 && !bLocal_139) && !bLocal_130)
								{
									if (!__LIB_0__::func_1("BJACK_TURN_S" /* GXT: Take another card or stand with your current hand. You can also split your cards into two separate hands by doubling your bet. */))
									{
										__LIB_3__::func_988("BJACK_TURN_S" /* GXT: Take another card or stand with your current hand. You can also split your cards into two separate hands by doubling your bet. */);
									}
								}
							}
							else if (Local_119.f_248 >= Local_119.f_244 && (((((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14) && func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21) && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 10)) || (((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 13) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 11)) && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) < 21)) || ((func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) < 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 10))))
							{
								if ((!bLocal_138 && !bLocal_139) && !bLocal_130)
								{
									if (!__LIB_0__::func_1("BJACK_TURN_D" /* GXT: Take another card or stand with your current hand. Double Down will double your bet and take just one extra card. */))
									{
										__LIB_3__::func_988("BJACK_TURN_D" /* GXT: Take another card or stand with your current hand. Double Down will double your bet and take just one extra card. */);
									}
								}
							}
							else if ((!bLocal_138 && !bLocal_139) && !bLocal_130)
							{
								if (!__LIB_0__::func_1("BJACK_TURN" /* GXT: Take another card or stand with your current hand. */))
								{
									__LIB_3__::func_988("BJACK_TURN" /* GXT: Take another card or stand with your current hand. */);
								}
							}
						}
						else if ((__LIB_0__::func_1("BJACK_TURN" /* GXT: Take another card or stand with your current hand. */) || __LIB_0__::func_1("BJACK_TURN_D" /* GXT: Take another card or stand with your current hand. Double Down will double your bet and take just one extra card. */)) || __LIB_0__::func_1("BJACK_TURN_S" /* GXT: Take another card or stand with your current hand. You can also split your cards into two separate hands by doubling your bet. */))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					else if ((__LIB_0__::func_1("BJACK_TURN" /* GXT: Take another card or stand with your current hand. */) || __LIB_0__::func_1("BJACK_TURN_D" /* GXT: Take another card or stand with your current hand. Double Down will double your bet and take just one extra card. */)) || __LIB_0__::func_1("BJACK_TURN_S" /* GXT: Take another card or stand with your current hand. You can also split your cards into two separate hands by doubling your bet. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] == 1)
				{
					if (BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 16))
					{
						bVar25 = true;
					}
					if (Local_119.f_259 != -1)
					{
						__LIB_6__::func_404(&(Local_119.f_259));
						Local_119.f_259 = -1;
					}
					Local_118[PLAYER::PLAYER_ID() /*8*/] = 0;
					Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
					Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
					Local_118[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
					Local_119.f_232 = 0;
					Local_119.f_233 = 0;
					Local_119.f_235 = 0;
					Local_119.f_252 = 0;
					HUD::CLEAR_HELP(true);
					func_165(0);
					Local_124.f_18 = __LIB_31__::func_639();
					Local_124.f_19 = __LIB_35__::func_441();
					Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
					Local_124.f_7 = __LIB_37__::func_740();
					if (!func_350() || __LIB_26__::func_412())
					{
						func_375(1);
						HUD::CLEAR_HELP(true);
						if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */ && !bVar25)
						{
							STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
						}
						return;
					}
					if (__LIB_26__::func_411())
					{
						switch (__LIB_26__::func_295())
						{
							case 0:
								Local_125.f_2 = joaat("win cutoff");
								break;
							case 1:
								Local_125.f_2 = joaat("loss cutoff");
								break;
							case 2:
								Local_125.f_2 = joaat("time cutoff");
								break;
						}
						switch (__LIB_26__::func_295())
						{
							case 0:
								Local_124.f_4 = joaat("win cutoff");
								break;
							case 1:
								Local_124.f_4 = joaat("loss cutoff");
								break;
							case 2:
								Local_124.f_4 = joaat("time cutoff");
								break;
						}
						if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
						{
							Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
						}
						Local_124.f_18 = __LIB_31__::func_639();
						Local_124.f_19 = __LIB_35__::func_441();
						Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
						Local_124.f_7 = __LIB_37__::func_740();
						if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */ && !bVar25)
						{
							STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
						}
						func_375(1);
						HUD::CLEAR_HELP(true);
						if (__LIB_26__::func_295() == 2)
						{
							__LIB_0__::func_151("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */, -1);
						}
						else
						{
							__LIB_0__::func_151("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */, -1);
						}
						return;
					}
					if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */ && !bVar25)
					{
						STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
					}
				}
				if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] > 6)
				{
					if ((__LIB_0__::func_1("BJACK_TURN" /* GXT: Take another card or stand with your current hand. */) || __LIB_0__::func_1("BJACK_TURN_D" /* GXT: Take another card or stand with your current hand. Double Down will double your bet and take just one extra card. */)) || __LIB_0__::func_1("BJACK_TURN_S" /* GXT: Take another card or stand with your current hand. You can also split your cards into two separate hands by doubling your bet. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				if (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] == 9 && iVar13 > 0)
				{
					if (Local_119.f_232 && Local_119.f_233)
					{
						if (!BitTest(Local_119.f_252, 19))
						{
							if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
							{
								Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
							}
							Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), func_217(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3), 2, false, true, 1f, 0f, 1f);
							sVar26 = func_153(Local_124.f_6);
							if (__LIB_31__::func_626(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, Local_119.f_257))
							{
								if (Local_119.f_244 >= 35000)
								{
									if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
									{
										sVar26 = __LIB_31__::func_632();
									}
									else if (Local_119.f_244 >= 45000)
									{
										if ((((iVar16 >= 2 && iVar13 < 21) && iVar12 == iVar13 + 1) && iVar15 > 2) || (((iVar17 >= 2 && iVar14 < 21) && iVar12 == iVar14 + 1) && iVar15 > 2))
										{
											sVar26 = __LIB_35__::func_440();
										}
									}
								}
							}
							else if (Local_119.f_244 >= 4500)
							{
								if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
								{
									sVar26 = __LIB_31__::func_632();
								}
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, __LIB_31__::func_634(), sVar26, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
							MISC::SET_BIT(&(Local_119.f_252), 19);
						}
					}
					if ((Local_119.f_232 && Local_119.f_233) && !Local_119.f_235)
					{
						if (Local_124.f_14 > 0)
						{
							if (__LIB_42__::func_594(Local_124.f_14, &(Local_119.f_243), 1))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
								Local_119.f_235 = 1;
							}
						}
					}
					if ((((Local_119.f_232 && Local_119.f_233) && !bLocal_138) && !bLocal_139) && !bLocal_130)
					{
						if (Local_124.f_14 > 0)
						{
							if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 0)
							{
								if (bVar19 && !bVar18)
								{
									if (!__LIB_2__::func_301("BJACK_WIN_2" /* GXT: You have ~a~. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14))
									{
										__LIB_31__::func_631("BJACK_WIN_2" /* GXT: You have ~a~. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (!__LIB_2__::func_301("BJACK_WIN_2" /* GXT: You have ~a~. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14))
									{
										__LIB_31__::func_631("BJACK_WIN_2" /* GXT: You have ~a~. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14);
									}
								}
								else if (iVar13 == iVar12)
								{
									if (!__LIB_0__::func_1("BJACK_PUSH" /* GXT: You and the Dealer have the same hands. The hand is a push. */))
									{
										__LIB_3__::func_988("BJACK_PUSH" /* GXT: You and the Dealer have the same hands. The hand is a push. */);
									}
								}
								else if (!__LIB_9__::func_761("BJACK_WIN_1" /* GXT: You have ~1~. You win ~1~ Chips! */, iVar13, Local_124.f_14))
								{
									__LIB_11__::func_284("BJACK_WIN_1" /* GXT: You have ~1~. You win ~1~ Chips! */, iVar13, Local_124.f_14);
								}
							}
							else if ((bVar19 || bVar20) && !bVar18)
							{
								if (bVar19 && bVar20)
								{
									if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14))
									{
										func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14);
									}
								}
								else if (bVar19)
								{
									if (iVar14 <= 21 && iVar17 == 7)
									{
										if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14))
										{
											func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14);
										}
									}
									else if (iVar14 > 21)
									{
										if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BUSTED" /* GXT: gone bust */, Local_124.f_14))
										{
											func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BUSTED" /* GXT: gone bust */, Local_124.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, iVar14, Local_124.f_14))
									{
										func_98("BJACK_WIN_4" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, iVar14, Local_124.f_14);
									}
								}
								else if (bVar20)
								{
									if (iVar13 <= 21 && iVar16 == 7)
									{
										if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14))
										{
											func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14);
										}
									}
									else if (iVar13 > 21)
									{
										if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14))
										{
											func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BJ" /* GXT: Blackjack */, Local_124.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, iVar13, Local_124.f_14))
									{
										func_98("BJACK_WIN_5" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BJ" /* GXT: Blackjack */, iVar13, Local_124.f_14);
									}
								}
							}
							else if ((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7))
							{
								if ((iVar13 <= 21 && iVar16 == 7) && (iVar14 <= 21 && iVar17 == 7))
								{
									if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14))
									{
										func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (iVar14 > 21)
									{
										if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BUSTED" /* GXT: gone bust */, Local_124.f_14))
										{
											func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BUSTED" /* GXT: gone bust */, Local_124.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, iVar14, Local_124.f_14))
									{
										func_98("BJACK_WIN_4" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, iVar14, Local_124.f_14);
									}
								}
								else if (iVar14 <= 21 && iVar17 == 7)
								{
									if (iVar13 > 21)
									{
										if (!func_101("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14))
										{
											func_100("BJACK_WIN_6" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, Local_124.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, iVar13, Local_124.f_14))
									{
										func_98("BJACK_WIN_5" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, iVar13, Local_124.f_14);
									}
								}
							}
							else if (iVar13 == iVar12 && iVar14 == iVar12)
							{
								if (!__LIB_0__::func_1("BJACK_PUSH" /* GXT: You and the Dealer have the same hands. The hand is a push. */))
								{
									__LIB_3__::func_988("BJACK_PUSH" /* GXT: You and the Dealer have the same hands. The hand is a push. */);
								}
							}
							else if (iVar13 <= 21 && iVar14 <= 21)
							{
								if (!func_97("BJACK_WIN_3" /* GXT: You have ~1~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, iVar13, iVar14, Local_124.f_14))
								{
									func_96("BJACK_WIN_3" /* GXT: You have ~1~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, iVar13, iVar14, Local_124.f_14);
								}
							}
							else if (iVar13 <= 21)
							{
								if (!func_99("BJACK_WIN_5" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, iVar13, Local_124.f_14))
								{
									func_98("BJACK_WIN_5" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, iVar13, Local_124.f_14);
								}
							}
							else if (iVar14 <= 21)
							{
								if (!func_99("BJACK_WIN_4" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, iVar14, Local_124.f_14))
								{
									func_98("BJACK_WIN_4" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. You win ~1~ Chips! */, "BJACK_BUSTED" /* GXT: gone bust */, iVar14, Local_124.f_14);
								}
							}
						}
						else if (bVar18)
						{
							if (!__LIB_2__::func_161("BJACK_LOSE_2" /* GXT: The Dealer has ~a~. You lose. */, "BJACK_BJ" /* GXT: Blackjack */))
							{
								__LIB_24__::func_741("BJACK_LOSE_2" /* GXT: The Dealer has ~a~. You lose. */, "BJACK_BJ" /* GXT: Blackjack */);
							}
						}
						else if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 <= 0)
						{
							if (iVar13 > 21)
							{
								if (!__LIB_2__::func_161("BJACK_LOSE_3" /* GXT: You have ~a~. You lose. */, "BJACK_BUSTED" /* GXT: gone bust */))
								{
									__LIB_24__::func_741("BJACK_LOSE_3" /* GXT: You have ~a~. You lose. */, "BJACK_BUSTED" /* GXT: gone bust */);
								}
							}
							else if (!__LIB_4__::func_66("BJACK_LOSE_1" /* GXT: The Dealer has ~1~. You lose. */, iVar12))
							{
								__LIB_11__::func_283("BJACK_LOSE_1" /* GXT: The Dealer has ~1~. You lose. */, iVar12);
							}
						}
						else if (iVar13 > 21 && iVar14 > 21)
						{
							if (!__LIB_5__::func_948("BJACK_LOSE_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You lose. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BUSTED" /* GXT: gone bust */))
							{
								func_91("BJACK_LOSE_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. You lose. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BUSTED" /* GXT: gone bust */);
							}
						}
						else if (!__LIB_4__::func_66("BJACK_LOSE_1" /* GXT: The Dealer has ~1~. You lose. */, iVar12))
						{
							__LIB_11__::func_283("BJACK_LOSE_1" /* GXT: The Dealer has ~1~. You lose. */, iVar12);
						}
					}
					if (!BitTest(iLocal_142, 0))
					{
						if (bVar19)
						{
							Local_125.f_17++;
						}
						MISC::SET_BIT(&iLocal_142, 0);
					}
					if (!BitTest(iLocal_142, 1))
					{
						if (bVar20)
						{
							Local_125.f_17++;
						}
						MISC::SET_BIT(&iLocal_142, 1);
					}
					if (!BitTest(iLocal_142, 2))
					{
						if (iVar16 == 7 && iVar13 <= 21)
						{
							Local_125.f_20++;
						}
						MISC::SET_BIT(&iLocal_142, 2);
					}
					if (!BitTest(iLocal_142, 3))
					{
						if (iVar17 == 7 && iVar14 <= 21)
						{
							Local_125.f_20++;
						}
						MISC::SET_BIT(&iLocal_142, 3);
					}
					if (!BitTest(iLocal_142, 4))
					{
						if (iVar13 > 21)
						{
							Local_125.f_19++;
						}
						MISC::SET_BIT(&iLocal_142, 4);
					}
					if (!BitTest(iLocal_142, 5))
					{
						if (iVar14 > 21)
						{
							Local_125.f_19++;
						}
						MISC::SET_BIT(&iLocal_142, 5);
					}
					if (!BitTest(iLocal_142, 6))
					{
						if (bVar18)
						{
							Local_125.f_16++;
						}
						MISC::SET_BIT(&iLocal_142, 6);
					}
					if (bVar18 && !bVar19)
					{
						if (!Local_119.f_232)
						{
							__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_124.f_4 = 1183160994;
							Local_124.f_25 = 1183160994;
							Local_125.f_14++;
							Local_119.f_232 = 1;
							Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
						}
					}
					else if (iVar13 <= 21)
					{
						SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
						if (bVar19 && !bVar18)
						{
							if (!Local_119.f_232)
							{
								Local_125.f_3 = (Local_125.f_3 + SYSTEM::FLOOR((IntToFloat(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_124.f_6 = (Local_124.f_6 + SYSTEM::FLOOR((IntToFloat(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_124.f_14 = (Local_124.f_14 + SYSTEM::FLOOR((IntToFloat(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1) * 2.5f)));
								Local_124.f_15 = 1;
								Local_125.f_13++;
								Local_124.f_4 = -67503841;
								Local_124.f_25 = -67503841;
								Local_119.f_232 = 1;
								Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar16 == 7 && !bVar18)
						{
							if (!Local_119.f_232)
							{
								Local_125.f_3 = (Local_125.f_3 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_124.f_6 = (Local_124.f_6 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_124.f_14 = (Local_124.f_14 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_124.f_15 = 1;
								Local_125.f_13++;
								Local_124.f_4 = 579613221;
								Local_124.f_25 = 579613221;
								Local_119.f_232 = 1;
								Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 > iVar12 || iVar12 > 21)
						{
							if (!Local_119.f_232)
							{
								Local_124.f_25 = joaat("win");
								Local_125.f_3 = (Local_125.f_3 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_124.f_6 = (Local_124.f_6 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_124.f_14 = (Local_124.f_14 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 * 2);
								Local_124.f_15 = 1;
								Local_125.f_13++;
								Local_124.f_4 = joaat("win");
								Local_124.f_25 = joaat("win");
								Local_119.f_232 = 1;
								Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 < iVar12 || (bVar18 && !bVar19))
						{
							if (!Local_119.f_232)
							{
								__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
								Local_124.f_4 = joaat("lose");
								Local_124.f_25 = joaat("lose");
								Local_125.f_14++;
								Local_119.f_232 = 1;
								Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
							}
						}
						else if (!Local_119.f_232)
						{
							Local_124.f_25 = joaat("push");
							Local_124.f_4 = joaat("push");
							Local_125.f_3 = (Local_125.f_3 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_124.f_6 = (Local_124.f_6 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_124.f_14 = (Local_124.f_14 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_124.f_15 = 0;
							Local_119.f_232 = 1;
							__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
							Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
						}
					}
					else if (!Local_119.f_232)
					{
						__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1);
						Local_124.f_4 = joaat("Bust");
						Local_124.f_25 = joaat("Bust");
						Local_125.f_14++;
						Local_119.f_232 = 1;
						Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
					}
					SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_1));
					if (BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 14))
					{
						if (bVar18 && !bVar20)
						{
							if (!Local_119.f_233)
							{
								__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
								if (Local_124.f_25 == joaat("Bust"))
								{
									Local_124.f_4 = 1702151977;
									Local_124.f_25 = 1702151977;
								}
								else if (Local_124.f_25 == 579613221)
								{
									Local_124.f_4 = -2136370424;
									Local_124.f_25 = -2136370424;
								}
								else if (Local_124.f_25 == joaat("lose"))
								{
									Local_124.f_4 = -1858785397;
									Local_124.f_25 = -1858785397;
								}
								else if (Local_124.f_25 == joaat("win"))
								{
									Local_124.f_4 = 1946656957;
									Local_124.f_25 = 1946656957;
								}
								else if (Local_124.f_25 == -67503841)
								{
									Local_124.f_4 = -2105313098;
									Local_124.f_25 = -2105313098;
								}
								else if (Local_124.f_25 == joaat("push"))
								{
									Local_124.f_4 = -185627827;
									Local_124.f_25 = -185627827;
								}
								else if (Local_124.f_25 == 1183160994)
								{
									Local_124.f_4 = -1498042471;
									Local_124.f_25 = -1498042471;
								}
								Local_125.f_14++;
								Local_119.f_233 = 1;
								Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
							}
						}
						else if (iVar14 <= 21)
						{
							SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
							if (bVar20 && !bVar18)
							{
								if (!Local_119.f_233)
								{
									Local_125.f_3 = (Local_125.f_3 + SYSTEM::FLOOR((IntToFloat(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_124.f_6 = (Local_124.f_6 + SYSTEM::FLOOR((IntToFloat(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_124.f_14 = (Local_124.f_14 + SYSTEM::FLOOR((IntToFloat(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2) * 2.5f)));
									Local_124.f_15 = 1;
									Local_125.f_13++;
									if (Local_124.f_25 == joaat("Bust"))
									{
										Local_124.f_4 = 124952027;
										Local_124.f_25 = 124952027;
									}
									else if (Local_124.f_25 == 579613221)
									{
										Local_124.f_4 = 670083824;
										Local_124.f_25 = 670083824;
									}
									else if (Local_124.f_25 == joaat("lose"))
									{
										Local_124.f_4 = 446908156;
										Local_124.f_25 = 446908156;
									}
									else if (Local_124.f_25 == joaat("win"))
									{
										Local_124.f_4 = -1508284701;
										Local_124.f_25 = -1508284701;
									}
									else if (Local_124.f_25 == -67503841)
									{
										Local_124.f_4 = 179647057;
										Local_124.f_25 = 179647057;
									}
									else if (Local_124.f_25 == joaat("push"))
									{
										Local_124.f_4 = -890276844;
										Local_124.f_25 = -890276844;
									}
									else if (Local_124.f_25 == 1183160994)
									{
										Local_124.f_4 = 1647364704;
										Local_124.f_25 = 1647364704;
									}
									Local_119.f_233 = 1;
									Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar17 == 7 && !bVar18)
							{
								if (!Local_119.f_233)
								{
									Local_125.f_3 = (Local_125.f_3 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_124.f_6 = (Local_124.f_6 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_124.f_14 = (Local_124.f_14 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_124.f_15 = 1;
									Local_125.f_13++;
									if (Local_124.f_25 == joaat("Bust"))
									{
										Local_124.f_4 = -1196919212;
										Local_124.f_25 = -1196919212;
									}
									else if (Local_124.f_25 == 579613221)
									{
										Local_124.f_4 = 505925496;
										Local_124.f_25 = 505925496;
									}
									else if (Local_124.f_25 == joaat("lose"))
									{
										Local_124.f_4 = 2012692421;
										Local_124.f_25 = 2012692421;
									}
									else if (Local_124.f_25 == joaat("win"))
									{
										Local_124.f_4 = 326925312;
										Local_124.f_25 = 326925312;
									}
									else if (Local_124.f_25 == -67503841)
									{
										Local_124.f_4 = 487743337;
										Local_124.f_25 = 487743337;
									}
									else if (Local_124.f_25 == joaat("push"))
									{
										Local_124.f_4 = 526318358;
										Local_124.f_25 = 526318358;
									}
									else if (Local_124.f_25 == 1183160994)
									{
										Local_124.f_4 = -1506449922;
										Local_124.f_25 = -1506449922;
									}
									Local_119.f_233 = 1;
									Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 > iVar12 || iVar12 > 21)
							{
								if (!Local_119.f_233)
								{
									Local_125.f_3 = (Local_125.f_3 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_124.f_6 = (Local_124.f_6 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_124.f_14 = (Local_124.f_14 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 * 2);
									Local_124.f_15 = 1;
									Local_125.f_13++;
									if (Local_124.f_25 == joaat("Bust"))
									{
										Local_124.f_4 = -1738969561;
										Local_124.f_25 = -1738969561;
									}
									else if (Local_124.f_25 == 579613221)
									{
										Local_124.f_4 = -67385374;
										Local_124.f_25 = -67385374;
									}
									else if (Local_124.f_25 == joaat("lose"))
									{
										Local_124.f_4 = 299063546;
										Local_124.f_25 = 299063546;
									}
									else if (Local_124.f_25 == joaat("win"))
									{
										Local_124.f_4 = 639742496;
										Local_124.f_25 = 639742496;
									}
									else if (Local_124.f_25 == -67503841)
									{
										Local_124.f_4 = -833750355;
										Local_124.f_25 = -833750355;
									}
									else if (Local_124.f_25 == joaat("push"))
									{
										Local_124.f_4 = 656184401;
										Local_124.f_25 = 656184401;
									}
									else if (Local_124.f_25 == 1183160994)
									{
										Local_124.f_4 = 1380168920;
										Local_124.f_25 = 1380168920;
									}
									Local_119.f_233 = 1;
									Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 < iVar12 || (bVar18 && !bVar20))
							{
								if (!Local_119.f_233)
								{
									__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
									if (Local_124.f_25 == joaat("Bust"))
									{
										Local_124.f_4 = 1702151977;
										Local_124.f_25 = 1702151977;
									}
									else if (Local_124.f_25 == 579613221)
									{
										Local_124.f_4 = -2136370424;
										Local_124.f_25 = -2136370424;
									}
									else if (Local_124.f_25 == joaat("lose"))
									{
										Local_124.f_4 = -1858785397;
										Local_124.f_25 = -1858785397;
									}
									else if (Local_124.f_25 == joaat("win"))
									{
										Local_124.f_4 = 1946656957;
										Local_124.f_25 = 1946656957;
									}
									else if (Local_124.f_25 == -67503841)
									{
										Local_124.f_4 = -2105313098;
										Local_124.f_25 = -2105313098;
									}
									else if (Local_124.f_25 == joaat("push"))
									{
										Local_124.f_4 = -185627827;
										Local_124.f_25 = -185627827;
									}
									else if (Local_124.f_25 == 1183160994)
									{
										Local_124.f_4 = -1498042471;
										Local_124.f_25 = -1498042471;
									}
									Local_125.f_14++;
									Local_119.f_233 = 1;
									Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
								}
							}
							else if (!Local_119.f_233)
							{
								Local_125.f_3 = (Local_125.f_3 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_124.f_6 = (Local_124.f_6 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_124.f_14 = (Local_124.f_14 + Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
								Local_124.f_15 = 1;
								__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
								if (Local_124.f_25 == joaat("Bust"))
								{
									Local_124.f_4 = -546469405;
									Local_124.f_25 = -546469405;
								}
								else if (Local_124.f_25 == 579613221)
								{
									Local_124.f_4 = -1749032290;
									Local_124.f_25 = -1749032290;
								}
								else if (Local_124.f_25 == joaat("lose"))
								{
									Local_124.f_4 = 1067415172;
									Local_124.f_25 = 1067415172;
								}
								else if (Local_124.f_25 == joaat("win"))
								{
									Local_124.f_4 = 297125168;
									Local_124.f_25 = 297125168;
								}
								else if (Local_124.f_25 == -67503841)
								{
									Local_124.f_4 = 2030981611;
									Local_124.f_25 = 2030981611;
								}
								else if (Local_124.f_25 == joaat("push"))
								{
									Local_124.f_4 = -684984318;
									Local_124.f_25 = -684984318;
								}
								else if (Local_124.f_25 == 1183160994)
								{
									Local_124.f_4 = 497946612;
									Local_124.f_25 = 497946612;
								}
								Local_119.f_233 = 1;
								Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
							}
						}
						else if (!Local_119.f_233)
						{
							__LIB_20__::func_477(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2);
							if (Local_124.f_25 == joaat("Bust"))
							{
								Local_124.f_4 = 1449908402;
								Local_124.f_25 = 1449908402;
							}
							else if (Local_124.f_25 == 579613221)
							{
								Local_124.f_4 = 1210238154;
								Local_124.f_25 = 1210238154;
							}
							else if (Local_124.f_25 == joaat("lose"))
							{
								Local_124.f_4 = 1540383360;
								Local_124.f_25 = 1540383360;
							}
							else if (Local_124.f_25 == joaat("win"))
							{
								Local_124.f_4 = -457084933;
								Local_124.f_25 = -457084933;
							}
							else if (Local_124.f_25 == -67503841)
							{
								Local_124.f_4 = -740134090;
								Local_124.f_25 = -740134090;
							}
							else if (Local_124.f_25 == joaat("push"))
							{
								Local_124.f_4 = -1825077928;
								Local_124.f_25 = -1825077928;
							}
							else if (Local_124.f_25 == 1183160994)
							{
								Local_124.f_4 = 1676117351;
								Local_124.f_25 = 1676117351;
							}
							Local_125.f_14++;
							Local_119.f_233 = 1;
							Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
						}
						SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_2));
					}
					else
					{
						Local_119.f_233 = 1;
					}
				}
			}
			break;
	}
}

void func_91(char* sParam0, char* sParam1, char* sParam2)//Position - 0xF1E3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF275
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF29D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_98(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xF2C2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_99(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xF2EA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_100(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xF30F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_101(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xF337
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_153(int iParam0)//Position - 0x10C62
{
	if (__LIB_6__::func_925())
	{
		if ((__LIB_2__::func_83(PLAYER::PLAYER_ID()) || __LIB_31__::func_635(Local_119.f_247) == 2) || __LIB_31__::func_635(Local_119.f_247) == 3)
		{
			if (iParam0 > 10000 && Local_124.f_4 != joaat("push"))
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					case 1:
						return "female_reaction_good_var_02";
					case 2:
						return "female_reaction_good_var_03";
					case 3:
						return "female_reaction_good_var_04";
					default:
				}
			}
			else if (iParam0 > -10000 || Local_124.f_4 == joaat("push"))
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					case 1:
						return "female_reaction_impartial_var_02";
					case 2:
						return "female_reaction_impartial_var_03";
					case 3:
						return "female_reaction_impartial_var_04";
					case 4:
						return "female_reaction_impartial_var_05";
					case 5:
						return "female_reaction_impartial_var_06";
					case 6:
						return "female_reaction_impartial_var_07";
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					case 1:
						return "female_reaction_bad_var_02";
					case 2:
						return "female_reaction_bad_var_03";
					case 3:
						return "female_reaction_bad_var_04";
					}
				default:
			}
		}
		else if (iParam0 > 1000 && Local_124.f_4 != joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				case 1:
					return "female_reaction_good_var_02";
				case 2:
					return "female_reaction_good_var_03";
				case 3:
					return "female_reaction_good_var_04";
				default:
			}
		}
		else if (iParam0 > -1000 || Local_124.f_4 == joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				case 1:
					return "female_reaction_impartial_var_02";
				case 2:
					return "female_reaction_impartial_var_03";
				case 3:
					return "female_reaction_impartial_var_04";
				case 4:
					return "female_reaction_impartial_var_05";
				case 5:
					return "female_reaction_impartial_var_06";
				case 6:
					return "female_reaction_impartial_var_07";
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				case 1:
					return "female_reaction_bad_var_02";
				case 2:
					return "female_reaction_bad_var_03";
				case 3:
					return "female_reaction_bad_var_04";
				}
			default:
		}
	}
	else if ((__LIB_2__::func_83(PLAYER::PLAYER_ID()) || __LIB_31__::func_635(Local_119.f_247) == 2) || __LIB_31__::func_635(Local_119.f_247) == 3)
	{
		if (iParam0 > 10000 && Local_124.f_4 != joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				case 1:
					return "reaction_good_var_02";
				case 2:
					return "reaction_good_var_03";
				case 3:
					return "reaction_good_var_04";
				default:
			}
		}
		else if (iParam0 > -10000 || Local_124.f_4 == joaat("push"))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				case 1:
					return "reaction_impartial_var_02";
				case 2:
					return "reaction_impartial_var_03";
				case 3:
					return "reaction_impartial_var_04";
				case 4:
					return "reaction_impartial_var_05";
				case 5:
					return "reaction_impartial_var_06";
				case 6:
					return "reaction_impartial_var_07";
				case 7:
					return "reaction_impartial_var_08";
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				case 1:
					return "reaction_bad_var_02";
				case 2:
					return "reaction_bad_var_03";
				case 3:
					return "reaction_bad_var_04";
				}
			default:
		}
	}
	else if (iParam0 > 1000 && Local_124.f_4 != joaat("push"))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			case 1:
				return "reaction_good_var_02";
			case 2:
				return "reaction_good_var_03";
			case 3:
				return "reaction_good_var_04";
			default:
		}
	}
	else if (iParam0 > -1000 || Local_124.f_4 == joaat("push"))
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			case 1:
				return "reaction_impartial_var_02";
			case 2:
				return "reaction_impartial_var_03";
			case 3:
				return "reaction_impartial_var_04";
			case 4:
				return "reaction_impartial_var_05";
			case 5:
				return "reaction_impartial_var_06";
			case 6:
				return "reaction_impartial_var_07";
			case 7:
				return "reaction_impartial_var_08";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			case 1:
				return "reaction_bad_var_02";
			case 2:
				return "reaction_bad_var_03";
			case 3:
				return "reaction_bad_var_04";
			}
		default:
	}
	return "";
}

char* func_154()//Position - 0x11168
{
	if (__LIB_6__::func_925())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "female_reaction_bad_var_01";
			case 1:
				return "female_reaction_bad_var_02";
			case 2:
				return "female_reaction_bad_var_03";
			case 3:
				return "female_reaction_bad_var_04";
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			case 1:
				return "reaction_bad_var_02";
			case 2:
				return "reaction_bad_var_03";
			case 3:
				return "reaction_bad_var_04";
			}
		default:
	}
	return "";
}

char* func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x11687
{
	if (bParam3)
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_split";
				}
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_119.f_247 == 1 || Local_119.f_247 == 5) || Local_119.f_247 == 9) || Local_119.f_247 == 13)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down_player_02";
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_player_02";
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down";
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "place_bet_small";
					case 1:
						return "place_bet_small_alt1";
					case 2:
						return "place_bet_small_alt2";
					case 3:
						return "place_bet_small_alt3";
					}
				}
			default:
		}
		if (!bParam1)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "place_bet_small";
				case 1:
					return "place_bet_small_alt1";
				case 2:
					return "place_bet_small_alt2";
				case 3:
					return "place_bet_small_alt3";
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large";
				default:
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "place_bet_small";
				case 1:
					return "place_bet_small_alt1";
				case 2:
					return "place_bet_small_alt2";
				case 3:
					return "place_bet_small_alt3";
				}
			}
		default:
	}
	return "";
}

void func_165(int iParam0)//Position - 0x1194A
{
	Local_119.f_0 = iParam0;
}

void func_166()//Position - 0x11957
{
	char* sVar0;
	if (BitTest(Local_119.f_250, 2))
	{
		MISC::CLEAR_BIT(&(Local_119.f_250), 2);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
	if (!BitTest(Local_119.f_250, 0))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_119.f_250), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3) || __LIB_2__::func_83(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (__LIB_7__::func_161(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_119.f_250, 1))
			{
				__LIB_1__::func_193(0, 0);
				__LIB_7__::func_286(1, sVar0, sVar0);
				__LIB_1__::func_319("BJACK_RULES" /* GXT: RULES */);
				__LIB_11__::func_288(1, iLocal_129, 9);
				__LIB_3__::func_630(1, 1, 1, 1, 1);
				__LIB_2__::func_562(-1, 1, 1);
				__LIB_1__::func_342(func_168(iLocal_129), 0, 0);
				__LIB_2__::func_353(func_167(iLocal_129));
				MISC::SET_BIT(&(Local_119.f_250), 1);
			}
			__LIB_25__::func_745(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			__LIB_7__::func_49(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_129 = 1;
			Local_119.f_250 = 0;
			MISC::SET_BIT(&(Local_119.f_250), 2);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			iLocal_129++;
			if (iLocal_129 > 9)
			{
				iLocal_129 = 1;
			}
			MISC::CLEAR_BIT(&(Local_119.f_250), 1);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			iLocal_129 = (iLocal_129 - 1);
			if (iLocal_129 < 1)
			{
				iLocal_129 = 9;
			}
			MISC::CLEAR_BIT(&(Local_119.f_250), 1);
		}
	}
}

char* func_167(int iParam0)//Position - 0x11B04
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1" /* GXT: This game uses four standard 52-card decks, which are shuffled at the start of every hand. */;
		case 2:
			return "BJACK_RULE_2" /* GXT: A player will automatically win if they manage to draw seven cards without going bust. */;
		case 3:
			return "BJACK_RULE_3" /* GXT: After a player has been dealt their two initial cards, they can double their bet in return for one additional card. This is also available on both hands after splitting. */;
		case 4:
			return "BJACK_RULE_4" /* GXT: You can split your hand once if the first two cards have the same value. The same bet amount must be bet for the split hand. */;
		case 5:
			return "BJACK_RULE_5" /* GXT: Ace is worth 1 or 11 points. Face cards are all worth 10 points and 2 to 10 are worth their pip value. */;
		case 6:
			return "BJACK_RULE_6" /* GXT: Blackjack pays 3 to 2 of the bet value. Other winning bets pay even money. */;
		case 7:
			return "BJACK_RULE_7" /* GXT: The Dealer will continue taking cards until they hit at least soft 17 or go bust. If the Dealer and player both have Blackjack, this will result in a push. */;
		case 8:
			return "BJACK_RULE_8" /* GXT: The combination of an ace with a card other than a ten-card is known as a "soft hand" because the player can count the ace as a 1 or 11. A soft hand cannot go bust by taking another card. */;
		case 9:
			if ((__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3) || __LIB_2__::func_83(PLAYER::PLAYER_ID()))
			{
				return "BJACK_RULE_9b" /* GXT: - Minimum: 1000 Chips~n~- Maximum: 50000 Chips */;
			}
			else
			{
				return "BJACK_RULE_9a" /* GXT: - Minimum: 10 Chips~n~- Maximum: 5000 Chips */;
			}
			break;
	}
	return "";
}

char* func_168(int iParam0)//Position - 0x11BC6
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1T" /* GXT: The Pack~n~~a~ */;
		case 2:
			return "BJACK_RULE_2T" /* GXT: Seven-Card Charlie~n~~a~ */;
		case 3:
			return "BJACK_RULE_3T" /* GXT: Double Down~n~~a~ */;
		case 4:
			return "BJACK_RULE_4T" /* GXT: Split~n~~a~ */;
		case 5:
			return "BJACK_RULE_5T" /* GXT: Card Values~n~~a~ */;
		case 6:
			return "BJACK_RULE_6T" /* GXT: Payout~n~~a~ */;
		case 7:
			return "BJACK_RULE_7T" /* GXT: Dealer Hand~n~~a~ */;
		case 8:
			return "BJACK_RULE_8T" /* GXT: Soft Hand~n~~a~ */;
		case 9:
			if ((__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3) || __LIB_2__::func_83(PLAYER::PLAYER_ID()))
			{
				return "BJACK_RULE_9Tb" /* GXT: Bet Limits~n~~a~ */;
			}
			else
			{
				return "BJACK_RULE_9Ta" /* GXT: Bet Limits~n~~a~ */;
			}
			break;
	}
	return "";
}

var func_186(bool bParam0)//Position - 0x1231D
{
	if (__LIB_6__::func_925())
	{
		if (!bParam0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_119.f_1582 = "female_idle_cardgames_var_01";
					break;
				case 1:
					Local_119.f_1582 = "female_idle_cardgames_var_02";
					break;
				case 2:
					Local_119.f_1582 = "female_idle_cardgames_var_03";
					break;
				case 3:
					Local_119.f_1582 = "female_idle_cardgames_var_04";
					break;
				case 4:
					Local_119.f_1582 = "female_idle_cardgames_var_05";
					break;
				case 5:
					Local_119.f_1582 = "female_idle_cardgames_var_06";
					break;
				case 6:
					Local_119.f_1582 = "female_idle_cardgames_var_07";
					break;
				case 7:
					Local_119.f_1582 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_119.f_1582 = "idle_cardgames_var_01";
				break;
			case 1:
				Local_119.f_1582 = "idle_cardgames_var_02";
				break;
			case 2:
				Local_119.f_1582 = "idle_cardgames_var_03";
				break;
			case 3:
				Local_119.f_1582 = "idle_cardgames_var_04";
				break;
			case 4:
				Local_119.f_1582 = "idle_cardgames_var_05";
				break;
			case 5:
				Local_119.f_1582 = "idle_cardgames_var_06";
				break;
			case 6:
				Local_119.f_1582 = "idle_cardgames_var_07";
				break;
			case 7:
				Local_119.f_1582 = "idle_cardgames_var_08";
				break;
			case 8:
				Local_119.f_1582 = "idle_cardgames_var_09";
				break;
			case 9:
				Local_119.f_1582 = "idle_cardgames_var_10";
				break;
			case 10:
				Local_119.f_1582 = "idle_cardgames_var_11";
				break;
			case 11:
				Local_119.f_1582 = "idle_cardgames_var_12";
				break;
			case 12:
				Local_119.f_1582 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_119.f_1582;
}

int func_191()//Position - 0x125CB
{
	if ((Local_119.f_232 && Local_119.f_233) && (!Local_119.f_235 && Local_124.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

void func_194()//Position - 0x1262D
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	int iVar12;
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		if (bLocal_139)
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_139 = false;
	}
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		if (bLocal_138)
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_138 = false;
	}
	if ((((Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0 && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !__LIB_2__::func_368()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && (Local_109.f_1515[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] < 9 || !BitTest(Local_109.f_1555[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], 13)))
	{
		if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/)) && !bLocal_138) && !__LIB_0__::func_649(&uLocal_140)) && !CAM::DOES_CAM_EXIST(Local_119.f_242))
			{
				if (!bLocal_139)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
					}
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_139 = true;
				}
			}
		}
		else
		{
			if (bLocal_139)
			{
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_139 = false;
		}
		if (Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 >= 2)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/)) && !bLocal_139) && !__LIB_0__::func_649(&uLocal_140)) && !CAM::DOES_CAM_EXIST(Local_119.f_242))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_138 = true;
			}
		}
		else
		{
			if (bLocal_138)
			{
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_138 = false;
		}
	}
	else
	{
		if (bLocal_139 || bLocal_138)
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_139 = false;
		bLocal_138 = false;
	}
	if (bLocal_138 || bLocal_139)
	{
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_119.f_242))
		{
			Local_119.f_242 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::SET_CAM_PARAMS(Local_119.f_242, func_207(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3, Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_138), func_206(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3, Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_138), func_205(bLocal_138), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_119.f_242, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else if (bLocal_138)
		{
			if (Local_109.f_1525[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4])
			{
				if (func_27(&(Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])) == 21 && Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/].f_12 == 2)
				{
					if (!__LIB_2__::func_161("BJACK_D_HAND2" /* GXT: The Dealer has ~a~. */, "BJACK_BJ" /* GXT: Blackjack */))
					{
						__LIB_24__::func_741("BJACK_D_HAND2" /* GXT: The Dealer has ~a~. */, "BJACK_BJ" /* GXT: Blackjack */);
					}
				}
				else if (func_27(&(Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])) > 21)
				{
					if (!__LIB_2__::func_161("BJACK_D_HAND2" /* GXT: The Dealer has ~a~. */, "BJACK_BUSTED" /* GXT: gone bust */))
					{
						__LIB_24__::func_741("BJACK_D_HAND2" /* GXT: The Dealer has ~a~. */, "BJACK_BUSTED" /* GXT: gone bust */);
					}
				}
				else if (!__LIB_4__::func_66("BJACK_D_HAND1" /* GXT: The Dealer has ~1~. */, func_27(&(Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/]))))
				{
					__LIB_11__::func_283("BJACK_D_HAND1" /* GXT: The Dealer has ~1~. */, func_27(&(Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!__LIB_4__::func_66("BJACK_D_HAND1" /* GXT: The Dealer has ~1~. */, func_35(Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/][1])))
			{
				__LIB_11__::func_283("BJACK_D_HAND1" /* GXT: The Dealer has ~1~. */, func_35(Local_109.f_846[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 /*13*/][1]));
			}
			fVar0 = CAM::GET_CAM_FOV(Local_119.f_242);
			fVar1 = 50f;
			fVar1 = func_204(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3, 1);
			fVar0 = func_202(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_119.f_242, func_207(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3, Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_138), func_206(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3, Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, bLocal_138), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_139)
		{
			fVar4 = CAM::GET_CAM_FOV(Local_119.f_242);
			fVar5 = 50f;
			Var6 = { CAM::GET_CAM_ROT(Local_119.f_242, 2) };
			Var7 = { 0f, 0f, 0f };
			Var8 = { -38.1166f, -0.0930717f, -102.613f };
			Var9 = { CAM::GET_CAM_COORD(Local_119.f_242) };
			Var10 = { 0f, 0f, 0f };
			Var11 = { 966.621f, 32.009f, 116.621f };
			if (Var6.f_2 < 0f)
			{
				Var6.f_2 = (Var6.f_2 + 360f);
			}
			if (!__LIB_0__::func_649(&uLocal_136))
			{
				iVar12 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
				bVar2 = iVar12 < 100;
				bVar3 = iVar12 > 150;
				if (bVar2 || bVar3)
				{
					__LIB_0__::func_580(&uLocal_136, 0, 0);
				}
			}
			else if (__LIB_2__::func_47(&uLocal_136, 500, 0))
			{
				__LIB_0__::func_579(&uLocal_136);
			}
			if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 >= 0 && Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] > 1)
			{
				if (bVar2)
				{
					iLocal_131 = (iLocal_131 - 1);
					if (iLocal_131 < func_201(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3))
					{
						iLocal_131 = func_201(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_131++;
					if (iLocal_131 > func_200(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3))
					{
						iLocal_131 = func_200(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_131 = 0;
			}
			Var11 = { func_207(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3, Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, 0) };
			Var8 = { func_199(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3) };
			fVar5 = func_204(Local_118[PLAYER::PLAYER_ID() /*8*/].f_3, 0);
			if (Var8.f_2 < 0f)
			{
				Var8.f_2 = (Var8.f_2 + 360f);
			}
			Var7 = { func_197(Var6, Var8, 0.2f, 4) };
			Var10 = { func_196(Var9, Var11, 0.2f, 4) };
			if (Var7.f_2 > 180f)
			{
				Var7.f_2 = (Var7.f_2 - 360f);
			}
			else if (Var7.f_2 < -180f)
			{
				Var7.f_2 = (Var7.f_2 + 360f);
			}
			if (__LIB_0__::func_394(Var6, Var8, 10f, 0) && __LIB_0__::func_394(Var9, Var11, 0.1f, 0))
			{
				fVar4 = func_202(fVar4, fVar5, 0.2f, 4);
			}
			CAM::SET_CAM_PARAMS(Local_119.f_242, Var10, Var7, fVar4, 0, 1, 1, 2);
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_119.f_242))
		{
			CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
			if (!__LIB_0__::func_649(&uLocal_140) && bLocal_130)
			{
				__LIB_0__::func_580(&uLocal_140, 0, 0);
				GRAPHICS::ANIMPOSTFX_PLAY("DefaultBlinkOutro", 0, false);
			}
			else if (__LIB_2__::func_47(&uLocal_140, 100, 0) || !bLocal_130)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_119.f_242, false);
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_579(&uLocal_140);
				bLocal_130 = false;
				iLocal_131 = 0;
			}
		}
	}
	if (bLocal_139 || bLocal_130)
	{
		if ((Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 >= 2 && ((!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 13) && !BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 11)) || (((BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 11) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4]), func_58(), func_14(Local_118[PLAYER::PLAYER_ID() /*8*/].f_4, Local_109.f_1575[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4], 1), 3)))) || (BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/], 11) && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 < 3))
		{
			if (func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (!__LIB_2__::func_161("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BJ" /* GXT: Blackjack */))
				{
					__LIB_24__::func_741("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BJ" /* GXT: Blackjack */);
				}
			}
			else if (func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (!__LIB_2__::func_161("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */))
				{
					__LIB_24__::func_741("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */);
				}
			}
			else if (func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (!__LIB_2__::func_161("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BUSTED" /* GXT: gone bust */))
				{
					__LIB_24__::func_741("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BUSTED" /* GXT: gone bust */);
				}
			}
			else if (!__LIB_4__::func_66("BJACK_P_HAND1" /* GXT: You have ~1~. */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
			{
				__LIB_11__::func_283("BJACK_P_HAND1" /* GXT: You have ~1~. */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])));
			}
		}
		else if (Local_109.f_1575[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4] != (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 - (4 * Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)) && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 >= 2)
		{
			if (func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BJ" /* GXT: Blackjack */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BJ" /* GXT: Blackjack */);
					}
				}
				else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BJ" /* GXT: Blackjack */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BJ" /* GXT: Blackjack */);
					}
				}
				else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BJ" /* GXT: Blackjack */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BJ" /* GXT: Blackjack */);
					}
				}
				else if (!__LIB_2__::func_301("BJACK_SHOW_3" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					__LIB_31__::func_631("BJACK_SHOW_3" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */);
					}
				}
				else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */);
					}
				}
				else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */);
					}
				}
				else if (!__LIB_2__::func_301("BJACK_SHOW_3" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					__LIB_31__::func_631("BJACK_SHOW_3" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BUSTED" /* GXT: gone bust */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, "BJACK_BUSTED" /* GXT: gone bust */);
					}
				}
				else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BUSTED" /* GXT: gone bust */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, "BJACK_BUSTED" /* GXT: gone bust */);
					}
				}
				else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
				{
					if (!__LIB_5__::func_948("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BUSTED" /* GXT: gone bust */))
					{
						func_91("BJACK_SHOW_4" /* GXT: You have ~a~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, "BJACK_BUSTED" /* GXT: gone bust */);
					}
				}
				else if (!__LIB_2__::func_301("BJACK_SHOW_3" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/]))))
				{
					__LIB_31__::func_631("BJACK_SHOW_3" /* GXT: You have ~1~ in the left hand and have ~a~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
			{
				if (!__LIB_2__::func_301("BJACK_SHOW_2" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					__LIB_31__::func_631("BJACK_SHOW_2" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. */, "BJACK_BJ" /* GXT: Blackjack */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
			{
				if (!__LIB_2__::func_301("BJACK_SHOW_2" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					__LIB_31__::func_631("BJACK_SHOW_2" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
			{
				if (!__LIB_2__::func_301("BJACK_SHOW_2" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
				{
					__LIB_31__::func_631("BJACK_SHOW_2" /* GXT: You have ~a~ in the left hand and have ~1~ in the right hand. */, "BJACK_BUSTED" /* GXT: gone bust */, func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])));
				}
			}
			else if (!__LIB_9__::func_761("BJACK_SHOW_1" /* GXT: You have ~1~ in the left hand and have ~1~ in the right hand. */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])), func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/]))))
			{
				__LIB_11__::func_284("BJACK_SHOW_1" /* GXT: You have ~1~ in the left hand and have ~1~ in the right hand. */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])), func_27(&(Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/])));
			}
		}
		else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) == 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 2)
		{
			if (!__LIB_2__::func_161("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BJ" /* GXT: Blackjack */))
			{
				__LIB_24__::func_741("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BJ" /* GXT: Blackjack */);
			}
		}
		else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) <= 21 && Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 == 7)
		{
			if (!__LIB_2__::func_161("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */))
			{
				__LIB_24__::func_741("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_7CC" /* GXT: a Seven-Card Charlie */);
			}
		}
		else if (func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])) > 21)
		{
			if (!__LIB_2__::func_161("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BUSTED" /* GXT: gone bust */))
			{
				__LIB_24__::func_741("BJACK_P_HAND2" /* GXT: You have ~a~. */, "BJACK_BUSTED" /* GXT: gone bust */);
			}
		}
		else if (!__LIB_4__::func_66("BJACK_P_HAND1" /* GXT: You have ~1~. */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/]))))
		{
			__LIB_11__::func_283("BJACK_P_HAND1" /* GXT: You have ~1~. */, func_27(&(Local_109.f_899[PLAYER::PLAYER_ID() /*9*/])));
		}
	}
}

Vector3 func_196(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x13662
{
	struct<3> Var0;
	Var0.f_0 = func_202(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_202(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_202(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

Vector3 func_197(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x136A4
{
	struct<3> Var0;
	Var0.f_0 = func_198(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_198(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_198(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

float func_198(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x136E6
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_202(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_199(int iParam0)//Position - 0x13756
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { func_217(iParam0) };
	Var1 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_131)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				case -1:
					Var1 = { -33.84f, 0f, -51.84f };
					break;
				case -2:
					Var1 = { -22.68f, 0f, -58.68f };
					break;
				case -3:
					Var1 = { -18f, 0f, -72f };
					break;
			}
			break;
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_131)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				case 1:
					Var1 = { -33.48f, 0f, -123.48f };
					break;
				case -1:
					Var1 = { -36f, 0f, -45f };
					break;
				case -2:
					Var1 = { -22.68f, 0f, -51.48f };
					break;
			}
			break;
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_131)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				case 1:
					Var1 = { -33.84f, 0f, -130.32f };
					break;
				case 2:
					Var1 = { -22.32f, 0f, -124.92f };
					break;
				case -1:
					Var1 = { -35.64f, 0f, -50.4f };
					break;
			}
			break;
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_131)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				case 1:
					Var1 = { -34.56f, 0f, -126f };
					break;
				case 2:
					Var1 = { -22.32f, 0f, -119.52f };
					break;
				case 3:
					Var1 = { -18.36f, 0f, -104.4f };
					break;
			}
			break;
	}
	return Vector(Var0.f_2, 0f, 0f) + Var1;
}

int func_200(int iParam0)//Position - 0x1398D
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 0;
		case 1:
		case 5:
		case 9:
		case 13:
			return 1;
		case 2:
		case 6:
		case 10:
		case 14:
			return 2;
		case 3:
		case 7:
		case 11:
		case 15:
			return 3;
		default:
	}
	return 0;
}

int func_201(int iParam0)//Position - 0x13A0D
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return -3;
		case 1:
		case 5:
		case 9:
		case 13:
			return -2;
		case 2:
		case 6:
		case 10:
		case 14:
			return -1;
		case 3:
		case 7:
		case 11:
		case 15:
			return 0;
		default:
	}
	return 0;
}

float func_202(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x13A91
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
			fVar0 = func_202(fParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_202(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_204(int iParam0, bool bParam1)//Position - 0x13BB4
{
	float fVar0;
	fVar0 = 50f;
	if (bParam1)
	{
		return 37.8425f;
	}
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_131)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				case -1:
					fVar0 = 34.3684f;
					break;
				case -2:
					fVar0 = 26.8741f;
					break;
				case -3:
					fVar0 = 26.8741f;
					break;
			}
			break;
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_131)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				case 1:
					fVar0 = 34.3684f;
					break;
				case -1:
					fVar0 = 34.3684f;
					break;
				case -2:
					fVar0 = 26.8741f;
					break;
			}
			break;
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_131)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				case 1:
					fVar0 = 34.3684f;
					break;
				case 2:
					fVar0 = 26.8741f;
					break;
				case -1:
					fVar0 = 34.3684f;
					break;
			}
			break;
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_131)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				case 1:
					fVar0 = 34.3684f;
					break;
				case 2:
					fVar0 = 26.8741f;
					break;
				case 3:
					fVar0 = 26.8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_205(bool bParam0)//Position - 0x13D65
{
	float fVar0;
	fVar0 = 35.3669f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	return fVar0;
}

Vector3 func_206(int iParam0, int iParam1, bool bParam2)//Position - 0x13D82
{
	struct<3> Var0;
	if (bParam2)
	{
		return Vector(func_69(iParam1), 0f, 0f) + Vector(0f, 0.061f, -59.1316f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return Vector(Var0.f_2, 0f, 0f) + Vector(-87.48f, 0f, -60.84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_207(int iParam0, int iParam1, bool bParam2)//Position - 0x13DCB
{
	struct<3> Var0;
	if (bParam2)
	{
		return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iParam1), func_69(iParam1), -0.0094f, -0.0611f, 1.5098f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_357(iParam0), Var0.f_2, 0.245f, 0f, 1.415f);
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0)//Position - 0x13E3D
{
	if (Local_109.f_1515[iParam0] == 2)
	{
		if (!BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/].f_5, 0))
		{
			Local_119.f_2 = { Local_109.f_1[iParam0 /*211*/] };
			MISC::SET_BIT(&(Local_118[PLAYER::PLAYER_ID() /*8*/].f_5), 0);
		}
	}
	else if (Local_109.f_1515[iParam0] > 2 && BitTest(Local_118[PLAYER::PLAYER_ID() /*8*/].f_5, 0))
	{
		if (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if (Local_119.f_213.f_8 != Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 || (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 0 && Local_119.f_222.f_8 != Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8))
			{
				Local_119.f_213 = { Local_109.f_899[PLAYER::PLAYER_ID() /*9*/] };
			}
			else
			{
				if (Local_119.f_213[iLocal_134] != Local_109.f_899[PLAYER::PLAYER_ID() /*9*/][iLocal_134])
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					iLocal_135 = 0;
					if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
					{
						Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
					}
					Local_124.f_18 = __LIB_31__::func_639();
					Local_124.f_19 = __LIB_35__::func_441();
					Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
					Local_124.f_7 = __LIB_37__::func_740();
					if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
					{
						STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
					}
					func_375(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_134++;
				if (iLocal_134 >= Local_119.f_213.f_8)
				{
					iLocal_134 = 0;
				}
			}
		}
		if (Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 > 0)
		{
			if (Local_119.f_222.f_8 != Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/].f_8 || (Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8 > 0 && Local_119.f_213.f_8 != Local_109.f_899[PLAYER::PLAYER_ID() /*9*/].f_8))
			{
				Local_119.f_222 = { Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/] };
			}
			else
			{
				if (Local_119.f_222[iLocal_135] != Local_109.f_1188[PLAYER::PLAYER_ID() /*9*/][iLocal_135])
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					iLocal_135 = 0;
					if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
					{
						Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
					}
					Local_124.f_18 = __LIB_31__::func_639();
					Local_124.f_19 = __LIB_35__::func_441();
					Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
					Local_124.f_7 = __LIB_37__::func_740();
					if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
					{
						STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
					}
					func_375(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_135++;
				if (iLocal_135 >= Local_119.f_222.f_8)
				{
					iLocal_135 = 0;
				}
			}
		}
		if (Local_109.f_1[iParam0 /*211*/][iLocal_133] != Local_119.f_2[iLocal_133])
		{
			iLocal_133 = 0;
			iLocal_134 = 0;
			iLocal_135 = 0;
			if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
			{
				Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
			}
			Local_124.f_18 = __LIB_31__::func_639();
			Local_124.f_19 = __LIB_35__::func_441();
			Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
			Local_124.f_7 = __LIB_37__::func_740();
			if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
			{
				STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
			}
			func_375(1);
			HUD::CLEAR_HELP(true);
			return 1;
		}
		iLocal_133++;
		if (iLocal_133 >= 208)
		{
			iLocal_133 = 0;
		}
	}
	return 0;
}

void func_210()//Position - 0x14195
{
	int iVar0;
	iVar0 = __LIB_31__::func_635(Local_119.f_247);
	if (iVar0 < 32)
	{
		MISC::SET_BIT(&(Local_119.f_254), iVar0);
	}
}

void func_213(var uParam0, int iParam1)//Position - 0x1420D
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (__LIB_26__::func_411())
		{
			func_213(uParam0, 7);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	__LIB_0__::func_579(&(Local_119.f_1580));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		__LIB_0__::func_580(&(Local_119.f_1580), 0, 0);
	}
}

int func_214()//Position - 0x14299
{
	int iVar0;
	iVar0 = __LIB_31__::func_635(Local_119.f_247);
	if (iVar0 < 32)
	{
		return BitTest(Local_119.f_254, iVar0);
	}
	return 0;
}

Vector3 func_217(int iParam0)//Position - 0x14305
{
	int iVar0;
	if (Local_119.f_257 == 1)
	{
		if (__LIB_25__::func_805() != __LIB_0__::func_160())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(__LIB_31__::func_635(iParam0)), 1f, func_218(Global_2689235[__LIB_25__::func_805() /*453*/].f_447), false, false, false);
		}
	}
	else if (__LIB_31__::func_635(iParam0) == 0 || __LIB_31__::func_635(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(__LIB_31__::func_635(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(__LIB_31__::func_635(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 1:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 2:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 3:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 4:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 5:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 6:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 7:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 8:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 9:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 10:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 11:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 12:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 13:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 14:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 15:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		default:
	}
	return 0f, 0f, 0f;
}

int func_218(int iParam0)//Position - 0x14547
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_blckjack_01a");
			break;
		case 2:
			return joaat("h4_prop_casino_blckjack_01b");
			break;
		case 3:
			return joaat("h4_prop_casino_blckjack_01c");
			break;
		case 4:
			return joaat("h4_prop_casino_blckjack_01d");
			break;
		case 5:
			return joaat("h4_prop_casino_blckjack_01e");
			break;
	}
	return joaat("vw_prop_casino_blckjack_01b");
}

var func_219(int iParam0, int iParam1)//Position - 0x145B0
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_31__::func_634(), __LIB_31__::func_633(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_221(int iParam0, int iParam1)//Position - 0x1461A
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_31__::func_634(), __LIB_31__::func_633(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0;
}

int func_222()//Position - 0x1464A
{
	STREAMING::REQUEST_ANIM_DICT(func_58());
	STREAMING::REQUEST_ANIM_DICT(__LIB_31__::func_627());
	STREAMING::REQUEST_ANIM_DICT(func_88());
	STREAMING::REQUEST_ANIM_DICT(__LIB_31__::func_634());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(func_58()) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_31__::func_627())) && STREAMING::HAS_ANIM_DICT_LOADED(func_88())) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_31__::func_634()))
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0x146A9
{
	if (__LIB_2__::func_47(&(Local_119.f_1578), 3500, 0))
	{
		__LIB_0__::func_579(&(Local_119.f_1578));
		return 1;
	}
	return 0;
}

bool func_224(int iParam0)//Position - 0x146D1
{
	if (Local_109.f_1600[iParam0] == __LIB_0__::func_160())
	{
		return 0;
	}
	return Local_109.f_1600[iParam0] != PLAYER::PLAYER_ID();
}

bool func_234(int iParam0)//Position - 0x14848
{
	return Local_109.f_1600[iParam0] == PLAYER::PLAYER_ID();
}

void func_235()//Position - 0x1485E
{
	func_359(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	func_337();
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
	__LIB_0__::func_801();
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 2);
	__LIB_35__::func_930();
}

void func_296(int iParam0)//Position - 0x1A07F
{
	Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 = iParam0;
	Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 = __LIB_31__::func_635(iParam0);
}

int func_317()//Position - 0x1AACA
{
	if (((((((((__LIB_0__::func_1("BJACK_USED" /* GXT: This seat is currently in use. */) || __LIB_0__::func_1("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */)) || __LIB_0__::func_1("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */)) || __LIB_4__::func_66("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */, __LIB_5__::func_837(1))) || __LIB_0__::func_1("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */)) || __LIB_0__::func_1("CAS_MG_NOCHIPS2" /* GXT: Chips are required to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */)) || __LIB_0__::func_1("CAS_MG_LOWCHIPS2" /* GXT: You don't have enough Chips to play Blackjack. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */)) || __LIB_0__::func_1("CAS_MG_NOCHIPS6" /* GXT: Chips are required to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire them. */)) || __LIB_0__::func_1("CAS_MG_LOWCHIPS6" /* GXT: You don't have enough Chips to play Blackjack. Use the Phone Services ~BLIP_CASINO_CONCIERGE~ to acquire more. */)) || __LIB_0__::func_1("BJACK_NA" /* GXT: This feature is not available for you. */))
	{
		return 1;
	}
	return 0;
}

void func_337()//Position - 0x1ADDF
{
	if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 != -1)
	{
		Local_119.f_232 = 0;
		Local_119.f_233 = 0;
		Local_119.f_235 = 0;
		Local_119.f_252 = 0;
		Local_118[PLAYER::PLAYER_ID() /*8*/] = 0;
		Local_118[PLAYER::PLAYER_ID() /*8*/].f_1 = 0;
		Local_118[PLAYER::PLAYER_ID() /*8*/].f_2 = 0;
		Local_118[PLAYER::PLAYER_ID() /*8*/].f_3 = -1;
		Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 = -1;
		Local_118[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
	}
}

int func_350()//Position - 0x1B05B
{
	if (__LIB_2__::func_83(PLAYER::PLAYER_ID()) && __LIB_25__::func_805() != __LIB_0__::func_160())
	{
		if ((BitTest(Global_2689235[__LIB_25__::func_805() /*453*/].f_318.f_4, 1) || BitTest(Global_1946250.f_6, 10)) || Global_2689235[__LIB_25__::func_805() /*453*/].f_447 != Global_1966109)
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_355(int iParam0)//Position - 0x1B179
{
	if (Local_119.f_257 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.3666f, 269.0835f, -51.7879f;
			case 1:
				return 1148.3447f, 269.7643f, -51.7876f;
			case 2:
				return 1148.8214f, 270.2321f, -51.7708f;
			case 3:
				return 1149.4955f, 270.2401f, -51.7632f;
			case 4:
				return 1152.3171f, 267.4195f, -51.8003f;
			case 5:
				return 1152.337f, 266.7202f, -51.7913f;
			case 6:
				return 1151.8486f, 266.2183f, -51.7916f;
			case 7:
				return 1151.1823f, 266.2501f, -51.7864f;
			case 8:
				return 1128.7131f, 262.8658f, -51.0035f;
			case 9:
				return 1129.4463f, 262.8649f, -51.0121f;
			case 10:
				return 1129.9319f, 262.3822f, -51.0027f;
			case 11:
				return 1129.8989f, 261.6921f, -51.0422f;
			case 12:
				return 1143.7379f, 247.8562f, -51.034f;
			case 13:
				return 1144.4587f, 247.8673f, -51.0229f;
			case 14:
				return 1144.9508f, 247.3612f, -51.015f;
			case 15:
				return 1144.9126f, 246.663f, -51.0236f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_357(int iParam0)//Position - 0x1B39D
{
	int iVar0;
	if (Local_119.f_257 == 1)
	{
		if (__LIB_25__::func_805() != __LIB_0__::func_160())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(__LIB_31__::func_635(iParam0)), 1f, func_218(Global_2689235[__LIB_25__::func_805() /*453*/].f_447), false, false, false);
		}
	}
	else if (__LIB_31__::func_635(iParam0) == 0 || __LIB_31__::func_635(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(__LIB_31__::func_635(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(__LIB_31__::func_635(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 1:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 2:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 3:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 4:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 5:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 6:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 7:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 8:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 9:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 10:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 11:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			case 12:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			case 13:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			case 14:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			case 15:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		default:
	}
	return 0f, 0f, 0f;
}

void func_359(int iParam0)//Position - 0x1B5F1
{
	Local_119.f_1 = iParam0;
}

void func_360(int iParam0)//Position - 0x1B600
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_213(&(Local_118[iParam0 /*8*/]), 0);
	Local_118[iParam0 /*8*/].f_6.f_1 = -1;
}

int func_361()//Position - 0x1B635
{
	int iVar0;
	if (Local_119.f_257 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_537))
		{
			if (__LIB_25__::func_805() != __LIB_0__::func_160())
			{
				iVar0 = func_218(Global_2689235[__LIB_25__::func_805() /*453*/].f_447);
				STREAMING::REQUEST_MODEL(iVar0);
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return 0;
				}
				Local_119.f_537 = OBJECT::CREATE_OBJECT(iVar0, func_70(0), false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_537, func_70(0), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_119.f_537, func_69(0));
				OBJECT::SET_OBJECT_TINT_INDEX(Local_119.f_537, __LIB_27__::func_578(__LIB_25__::func_805()));
				ENTITY::FREEZE_ENTITY_POSITION(Local_119.f_537, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
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

void func_368(var uParam0)//Position - 0x1B7F7
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		case 1:
			if ((func_371(PLAYER::PLAYER_ID(), 1) || func_371(PLAYER::PLAYER_ID(), 2)) || func_370())
			{
				func_213(uParam0, 3);
			}
			break;
		case 2:
			if ((func_371(PLAYER::PLAYER_ID(), 1) || func_371(PLAYER::PLAYER_ID(), 2)) || func_370())
			{
				func_213(uParam0, 3);
			}
			break;
		case 3:
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_369())
			{
				func_213(uParam0, 8);
			}
			break;
		case 8:
			break;
	}
}

int func_369()//Position - 0x1B8B7
{
	if ((((func_371(PLAYER::PLAYER_ID(), 4) || func_371(PLAYER::PLAYER_ID(), 5)) || func_371(PLAYER::PLAYER_ID(), 6)) || func_371(PLAYER::PLAYER_ID(), 7)) || func_370())
	{
		return 1;
	}
	return 0;
}

int func_370()//Position - 0x1B907
{
	if (__LIB_2__::func_47(&(Local_119.f_1580), 3500, 0))
	{
		__LIB_0__::func_579(&(Local_119.f_1580));
		return 1;
	}
	return 0;
}

int func_371(int iParam0, int iParam1)//Position - 0x1B92F
{
	int iVar0;
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_109.f_1477[iParam0], iVar0);
}

void func_375(bool bParam0)//Position - 0x1BA26
{
	char* sVar0;
	if (Local_119.f_1 > 2 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		if (((((!__LIB_2__::func_282() && !__LIB_2__::func_283()) && !__LIB_0__::func_497()) && !__LIB_4__::func_79()) && !__LIB_1__::func_352(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_0__::func_801();
	}
	if (Local_119.f_1 > 2)
	{
		__LIB_0__::func_801();
	}
	if (BitTest(Local_119.f_250, 0))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((__LIB_31__::func_635(Local_119.f_247) == 2 || __LIB_31__::func_635(Local_119.f_247) == 3) || __LIB_2__::func_83(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		__LIB_7__::func_49(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_129 = 1;
		Local_119.f_250 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_119.f_242))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_119.f_242, false);
		bLocal_130 = false;
		iLocal_131 = 0;
	}
	if (Local_119.f_259 != -1)
	{
		__LIB_6__::func_404(&(Local_119.f_259));
		Local_119.f_259 = -1;
	}
	Local_119.f_244 = 0;
	Local_119.f_253 = 0;
	Local_119.f_252 = 0;
	Local_119.f_232 = 0;
	Local_119.f_233 = 0;
	Local_119.f_234 = 0;
	Local_119.f_235 = 0;
	Local_119.f_243 = 0;
	Local_118[PLAYER::PLAYER_ID() /*8*/].f_5 = 0;
	if (!bParam0)
	{
		func_337();
	}
	Local_125.f_4 = __LIB_37__::func_740();
	Local_125.f_5 = __LIB_1__::func_295(&uLocal_122, 0, 0);
	if (Local_119.f_1 > 2)
	{
		if (Global_262145.f_26820 /* Tunable: ENABLE_BLACKJACK_LIGHT */)
		{
			STATS::PLAYSTATS_CASINO_BLACKJACK_LIGHT(&Local_125);
		}
	}
	if (bParam0)
	{
		Local_119.f_255 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_357(Local_119.f_247), func_217(Local_119.f_247), 2, false, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_119.f_255, __LIB_31__::func_634(), __LIB_31__::func_630(Local_119.f_247), 2f, -2f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_119.f_255);
	}
	if (!bParam0)
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 2);
	}
	if (bParam0 || Local_119.f_1 > 2)
	{
		__LIB_35__::func_930();
	}
	func_359(10);
	func_165(0);
}

void func_382()//Position - 0x1BD83
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<3> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	if (((__LIB_2__::func_844(joaat("rm_GamingFloor_02")) || __LIB_2__::func_844(joaat("rm_GamingFloor_03"))) || __LIB_2__::func_83(PLAYER::PLAYER_ID())) && !__LIB_4__::func_698())
	{
		iLocal_127 = 1;
		if (!bLocal_126)
		{
			bLocal_126 = (func_409() && __LIB_35__::func_442());
		}
	}
	else
	{
		if (iLocal_127)
		{
			func_411();
			__LIB_37__::func_739();
			iLocal_127 = 0;
		}
		return;
	}
	if (!Global_1663509.f_808)
	{
		iVar1 = 0;
		while (iVar1 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
		{
			if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar1) == 174)
			{
				if (SCRIPT::GET_EVENT_DATA(1, iVar1, &Var0, 6))
				{
					if (Var0.f_0 == -1261953521)
					{
						if (((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1) && Var0.f_2 >= 0) && Var0.f_2 < 224) && func_396(Var0.f_3, Local_119.f_236) != 0)
						{
							if (Var0.f_4)
							{
								Local_119.f_260[Var0.f_2] = Var0.f_3;
							}
							else
							{
								Local_119.f_305[Var0.f_2] = Var0.f_3;
								if (Var0.f_5)
								{
									func_395(Var0.f_2);
								}
								else
								{
									func_394(Var0.f_2);
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_119.f_257)
	{
		if (iVar2 != iLocal_132 && iVar2 != Local_118[PLAYER::PLAYER_ID() /*8*/].f_4)
		{
		}
		else
		{
			Var3 = { func_70(iVar2) };
			Var3.f_2 = (Var3.f_2 + 0.914f);
			bVar4 = false;
			if (__LIB_31__::func_626(iVar2, Local_119.f_257))
			{
				bVar4 = true;
			}
			Var8 = { 0f, 0f, func_69(iVar2) };
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar10 = Local_109.f_1600[(iVar2 * 4 + iVar9)];
				if (iVar10 < 0 || ((!__LIB_2__::func_844(joaat("rm_GamingFloor_02")) && !__LIB_2__::func_844(joaat("rm_GamingFloor_03"))) && !__LIB_2__::func_83(PLAYER::PLAYER_ID())))
				{
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_648[iVar6]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_119.f_648[iVar6], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_119.f_648[iVar6])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
							}
						}
						if (Local_119.f_305[iVar6] != -1)
						{
							Local_119.f_305[iVar6] = -1;
						}
						if (func_393(iVar6))
						{
							func_394(iVar6);
						}
						iVar6 = func_21(iVar2, iVar5, iVar9, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_648[iVar6]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_119.f_648[iVar6], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_119.f_648[iVar6])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
							}
						}
						if (Local_119.f_305[iVar6] != -1)
						{
							Local_119.f_305[iVar6] = -1;
						}
						if (func_393(iVar6))
						{
							func_394(iVar6);
						}
						iVar5++;
					}
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, iVar5)]))
						{
							if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, iVar5)]) > 0)
							{
								ENTITY::SET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, iVar5)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, iVar5)])), 0f, 0.1f, 0)), true);
							}
							else
							{
								OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, iVar5)]));
							}
						}
						iVar5++;
					}
				}
				else
				{
					iVar5 = 0;
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 0);
						sVar7 = func_391(Local_109.f_899[iVar10 /*9*/][iVar5], 1);
						if (iVar6 >= 0 && iVar6 < (56 * Local_119.f_257))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2])))
							{
								if ((((iVar9 == 0 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_7(iVar2), 3)) || (iVar9 == 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_6(iVar2), 3))) || (iVar9 == 2 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_5(iVar2), 3))) || (iVar9 == 3 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_4(iVar2), 3)))
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
									{
										iVar12 = 0;
										while (iVar12 < 7)
										{
											iVar13 = func_21(iVar2, iVar12, iVar9, 0);
											if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar13]))
											{
												iVar11 = iVar12;
											}
											iVar12++;
										}
										if (iVar5 == iVar11)
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]) && !ENTITY::IS_ENTITY_ATTACHED(Local_119.f_648[iVar6]))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_648[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
										{
											OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
											Local_119.f_305[iVar6] = -1;
										}
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
										{
											OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
											Local_119.f_305[iVar6] = -1;
										}
									}
								}
								else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
								{
									Local_119.f_305[iVar6] = -1;
									if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
									{
										if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3)) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard"))) && iVar5 == 1)
										{
										}
										else
										{
											if (func_396(Local_109.f_899[iVar10 /*9*/][iVar5], Local_119.f_236) != 0)
											{
												Local_119.f_648[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_109.f_899[iVar10 /*9*/][iVar5], Local_119.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 0)), false, false, true);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_648[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 0)), false, false, true);
												ENTITY::SET_ENTITY_ROTATION(Local_119.f_648[iVar6], Var8 + func_389(iVar5, iVar9, 0, func_393(iVar6)), 2, true);
											}
											Jump @2151; //curOff = 1856
											if (ENTITY::GET_ENTITY_MODEL(Local_119.f_648[iVar6]) != func_396(Local_109.f_899[iVar10 /*9*/][iVar5], Local_119.f_236))
											{
												OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
											}
											else if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]))) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3)) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard"))) && iVar5 == 1)
											{
												OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
											}
											else if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_648[iVar6]))
											{
												ENTITY::DETACH_ENTITY(Local_119.f_648[iVar6], false, true);
												ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_648[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 0)), false, false, true);
												ENTITY::SET_ENTITY_ROTATION(Local_119.f_648[iVar6], Var8 + func_389(iVar5, iVar9, 0, func_393(iVar6)), 2, true);
											}
											Jump @2895; //curOff = 2151
											if (Local_119.f_305[iVar6] != -1)
											{
												if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
												{
													Local_119.f_648[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_119.f_305[iVar6], Local_119.f_236), Var3, false, false, true);
													if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_119.f_648[iVar6])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
													{
														if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3))
														{
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_648[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
														}
														else
														{
															ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_648[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
														}
													}
												}
												else if (ENTITY::GET_ENTITY_MODEL(Local_119.f_648[iVar6]) != func_396(Local_119.f_305[iVar6], Local_119.f_236))
												{
													OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
													Local_119.f_305[iVar6] = -1;
													func_394(iVar6);
												}
												else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2])))
												{
													if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_119.f_648[iVar6]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
													{
														ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_648[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
													}
													if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
													{
														if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_648[iVar6]))
														{
															ENTITY::DETACH_ENTITY(Local_119.f_648[iVar6], false, true);
															ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_648[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 0)), false, false, true);
															ENTITY::SET_ENTITY_ROTATION(Local_119.f_648[iVar6], Var8 + func_389(iVar5, iVar9, 0, func_393(iVar6)), 2, true);
														}
													}
												}
											}
											else if (iVar6 >= 0 && iVar6 < (56 * Local_119.f_257))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
												{
													OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
													Local_119.f_305[iVar6] = -1;
													func_394(iVar6);
												}
											}
										}
										iVar5++;
										if (Local_118[iVar10 /*8*/].f_1 > 0)
										{
											iVar14 = Local_118[iVar10 /*8*/].f_1;
											if (BitTest(Local_118[iVar10 /*8*/], 10))
											{
												iVar14 = (Local_118[iVar10 /*8*/].f_1 / 2);
											}
											if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 0)]))
											{
												if (__LIB_31__::func_637(iVar14, bVar4) != 0)
												{
													Local_119.f_538[func_392(iVar2, iVar9, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_31__::func_637(iVar14, bVar4), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 0, iVar9, bVar4)), false, false, true);
													ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_538[func_392(iVar2, iVar9, 0)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 0, iVar9, bVar4)), false, false, true);
													ENTITY::SET_ENTITY_ROTATION(Local_119.f_538[func_392(iVar2, iVar9, 0)], Var8 + func_386(iVar14, 0, iVar9, bVar4), 2, true);
													if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_31__::func_636(iVar14)))
													{
														AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_31__::func_636(iVar14), Local_119.f_538[func_392(iVar2, iVar9, 0)], "dlc_vw_table_games_sounds", false, 0);
													}
												}
											}
											else if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 0)]) != 255)
											{
												OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 0)]));
											}
											if (BitTest(Local_118[iVar10 /*8*/], 10))
											{
												if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 1)]))
												{
													if (__LIB_31__::func_637(iVar14, bVar4) != 0)
													{
														Local_119.f_538[func_392(iVar2, iVar9, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_31__::func_637(iVar14, bVar4), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 1, iVar9, bVar4)), false, false, true);
														ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_538[func_392(iVar2, iVar9, 1)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 1, iVar9, bVar4)), false, false, true);
														ENTITY::SET_ENTITY_ROTATION(Local_119.f_538[func_392(iVar2, iVar9, 1)], Var8 + func_386(iVar14, 1, iVar9, bVar4), 2, true);
														if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_31__::func_636(iVar14)))
														{
															AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_31__::func_636(iVar14), Local_119.f_538[func_392(iVar2, iVar9, 1)], "dlc_vw_table_games_sounds", false, 0);
														}
													}
												}
												else if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 1)]) != 255)
												{
													OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 1)]));
												}
											}
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 0)]))
											{
												if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 0)]) > 0)
												{
													ENTITY::SET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 0)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 0)])), 0f, 0.1f, 0)), true);
												}
												else
												{
													OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 0)]));
												}
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 1)]))
											{
												if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 1)]) > 0)
												{
													ENTITY::SET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 1)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 1)])), 0f, 0.1f, 0)), true);
												}
												else
												{
													OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 1)]));
												}
											}
										}
										iVar5 = 0;
										iVar5 = 0;
										while (iVar5 < 7)
										{
											iVar6 = func_21(iVar2, iVar5, iVar9, 1);
											sVar7 = func_391(Local_109.f_1188[iVar10 /*9*/][iVar5], 1);
											if (iVar6 >= 0 && iVar6 < (56 * Local_119.f_257))
											{
												if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2])))
												{
													if ((((iVar9 == 0 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_7(iVar2), 3)) || (iVar9 == 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_6(iVar2), 3))) || (iVar9 == 2 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_5(iVar2), 3))) || (iVar9 == 3 && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_4(iVar2), 3)))
													{
														if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
														{
															if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
															{
																OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
																Local_119.f_305[iVar6] = -1;
															}
														}
													}
													else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
													{
														Local_119.f_305[iVar6] = -1;
														if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
														{
															if (func_396(Local_109.f_1188[iVar10 /*9*/][iVar5], Local_119.f_236) != 0)
															{
																Local_119.f_648[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_109.f_1188[iVar10 /*9*/][iVar5], Local_119.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 1)), false, false, true);
																ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_648[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 1)), false, false, true);
																ENTITY::SET_ENTITY_ROTATION(Local_119.f_648[iVar6], Var8 + func_389(iVar5, iVar9, 1, func_393(iVar6)), 2, true);
															}
														}
														else if (ENTITY::GET_ENTITY_MODEL(Local_119.f_648[iVar6]) != func_396(Local_109.f_1188[iVar10 /*9*/][iVar5], Local_119.f_236))
														{
															OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
														}
														else if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_648[iVar6]))
														{
															ENTITY::DETACH_ENTITY(Local_119.f_648[iVar6], false, true);
															ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_648[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 1)), false, false, true);
															ENTITY::SET_ENTITY_ROTATION(Local_119.f_648[iVar6], Var8 + func_389(iVar5, iVar9, 1, func_393(iVar6)), 2, true);
														}
													}
													else if (Local_119.f_305[iVar6] != -1)
													{
														if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
														{
															Local_119.f_648[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_119.f_305[iVar6], Local_119.f_236), Var3, false, false, true);
															if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_119.f_648[iVar6])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_648[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
															}
														}
														else if (ENTITY::GET_ENTITY_MODEL(Local_119.f_648[iVar6]) != func_396(Local_119.f_305[iVar6], Local_119.f_236))
														{
															OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
															Local_119.f_305[iVar6] = -1;
															func_394(iVar6);
														}
														else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2])))
														{
															if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_119.f_648[iVar6]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_648[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
															}
															if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
															{
																if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_648[iVar6]))
																{
																	ENTITY::DETACH_ENTITY(Local_119.f_648[iVar6], false, true);
																	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_648[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_390(iVar5, iVar9, 1)), false, false, true);
																	ENTITY::SET_ENTITY_ROTATION(Local_119.f_648[iVar6], Var8 + func_389(iVar5, iVar9, 1, func_393(iVar6)), 2, true);
																}
															}
														}
													}
													else if (iVar6 >= 0 && iVar6 < (56 * Local_119.f_257))
													{
														if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar6]))
														{
															OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar6]));
															Local_119.f_305[iVar6] = -1;
															func_394(iVar6);
														}
													}
													iVar5++;
													if (Local_118[iVar10 /*8*/].f_2 > 0)
													{
														iVar14 = Local_118[iVar10 /*8*/].f_2;
														if (BitTest(Local_118[iVar10 /*8*/], 11))
														{
															iVar14 = (Local_118[iVar10 /*8*/].f_2 / 2);
														}
														if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 2)]))
														{
															if (__LIB_31__::func_637(iVar14, bVar4) != 0)
															{
																Local_119.f_538[func_392(iVar2, iVar9, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_31__::func_637(iVar14, bVar4), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 2, iVar9, bVar4)), false, false, true);
																ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_538[func_392(iVar2, iVar9, 2)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 2, iVar9, bVar4)), false, false, true);
																ENTITY::SET_ENTITY_ROTATION(Local_119.f_538[func_392(iVar2, iVar9, 2)], Var8 + func_386(iVar14, 2, iVar9, bVar4), 2, true);
																if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_31__::func_636(iVar14)))
																{
																	AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_31__::func_636(iVar14), Local_119.f_538[func_392(iVar2, iVar9, 2)], "dlc_vw_table_games_sounds", false, 0);
																}
															}
														}
														else if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 2)]) != 255)
														{
															OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 2)]));
														}
														if (BitTest(Local_118[iVar10 /*8*/], 11))
														{
															if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 3)]))
															{
																if (__LIB_31__::func_637(iVar14, bVar4) != 0)
																{
																	Local_119.f_538[func_392(iVar2, iVar9, 3)] = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_31__::func_637(iVar14, bVar4), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 3, iVar9, bVar4)), false, false, true);
																	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_538[func_392(iVar2, iVar9, 3)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_387(iVar14, 3, iVar9, bVar4)), false, false, true);
																	ENTITY::SET_ENTITY_ROTATION(Local_119.f_538[func_392(iVar2, iVar9, 3)], Var8 + func_386(iVar14, 3, iVar9, bVar4), 2, true);
																	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_31__::func_636(iVar14)))
																	{
																		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, __LIB_31__::func_636(iVar14), Local_119.f_538[func_392(iVar2, iVar9, 3)], "dlc_vw_table_games_sounds", false, 0);
																	}
																}
															}
															else if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 3)]) != 255)
															{
																OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 3)]));
															}
														}
													}
													else
													{
														if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 2)]))
														{
															if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 2)]) > 0)
															{
																ENTITY::SET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 2)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 2)])), 0f, 0.1f, 0)), true);
															}
															else
															{
																OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 2)]));
															}
														}
														if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[func_392(iVar2, iVar9, 3)]))
														{
															if (ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 3)]) > 0)
															{
																ENTITY::SET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 3)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_119.f_538[func_392(iVar2, iVar9, 3)])), 0f, 0.1f, 0)), true);
															}
															else
															{
																OBJECT::DELETE_OBJECT(&(Local_119.f_538[func_392(iVar2, iVar9, 3)]));
															}
														}
													}
													iVar9++;
													iVar5 = 0;
													iVar5 = 0;
													while (iVar5 < 11)
													{
														bVar16 = true;
														if (!Local_109.f_1525[iVar2] && iVar5 == 0)
														{
															bVar16 = false;
														}
														sVar7 = func_391(Local_109.f_846[iVar2 /*13*/][iVar5], bVar16);
														iVar6 = func_9(iVar2, iVar5);
														if (iVar6 >= 0 && iVar6 < (11 * Local_119.f_257))
														{
															if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2])))
															{
																if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_3(iVar2), 3))
																{
																	if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
																	{
																		iVar18 = 0;
																		while (iVar18 < 11)
																		{
																			iVar19 = func_9(iVar2, iVar18);
																			if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar19]))
																			{
																				iVar17 = iVar18;
																			}
																			iVar18++;
																		}
																		if (iVar5 == iVar17)
																		{
																			if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar6]) && !ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_603[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																			}
																		}
																		else if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar6]))
																		{
																			OBJECT::DELETE_OBJECT(&(Local_119.f_603[iVar6]));
																			Local_119.f_260[iVar6] = -1;
																		}
																	}
																	else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
																	{
																		if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar6]))
																		{
																			OBJECT::DELETE_OBJECT(&(Local_119.f_603[iVar6]));
																			Local_119.f_260[iVar6] = -1;
																		}
																	}
																}
																else if (Local_109.f_1520[iVar2] == 2 && ((!MISC::IS_STRING_NULL_OR_EMPTY(sVar7) && Local_109.f_846[iVar2 /*13*/][iVar5] != 0) || Local_119.f_260[iVar6] != -1))
																{
																	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_391(Local_109.f_846[iVar2 /*13*/][iVar5], 1)) && func_396(Local_109.f_846[iVar2 /*13*/][iVar5], Local_119.f_236) != 0)
																	{
																		Local_119.f_260[iVar6] = -1;
																		if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar6]))
																		{
																			iVar15 = Local_109.f_846[iVar2 /*13*/][iVar5];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_391(Local_109.f_846[iVar2 /*13*/][iVar5], 1)) && func_396(iVar15, Local_119.f_236) != 0)
																			{
																				Local_119.f_603[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(iVar15, Local_119.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																				ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, bVar16), 2, true);
																				Local_119.f_260[iVar6] = -1;
																			}
																		}
																		else if (iVar5 == 0)
																		{
																			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2])))
																			{
																				if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_33(iVar2), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																						{
																							OBJECT::DELETE_OBJECT(&(Local_119.f_603[iVar6]));
																							Local_119.f_260[iVar6] = -1;
																							Local_119.f_603[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_109.f_846[iVar2 /*13*/][iVar5], Local_119.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, 0), 2, true);
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_603[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																						{
																							ENTITY::DETACH_ENTITY(Local_119.f_603[iVar6], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, 1), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_28(iVar2), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																						{
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_603[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																						{
																							ENTITY::DETACH_ENTITY(Local_119.f_603[iVar6], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, 0), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), func_58(), func_11(iVar2), 3))
																				{
																					if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
																					{
																						if (!ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																						{
																							OBJECT::DELETE_OBJECT(&(Local_119.f_603[iVar6]));
																							Local_119.f_260[iVar6] = -1;
																							Local_119.f_603[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(Local_109.f_846[iVar2 /*13*/][iVar5], Local_119.f_236), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, 0), 2, true);
																							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_603[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																						}
																					}
																					else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
																					{
																						if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																						{
																							ENTITY::DETACH_ENTITY(Local_119.f_603[iVar6], false, true);
																							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																							ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, 1), 2, true);
																						}
																					}
																				}
																				else if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																				{
																					ENTITY::DETACH_ENTITY(Local_119.f_603[iVar6], false, true);
																					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																					ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, bVar16), 2, true);
																				}
																			}
																		}
																		else if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																		{
																			ENTITY::DETACH_ENTITY(Local_119.f_603[iVar6], false, true);
																			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																			ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, bVar16), 2, true);
																		}
																	}
																	else if (Local_119.f_260[iVar6] != -1)
																	{
																		if (!ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar6]))
																		{
																			iVar15 = Local_119.f_260[iVar6];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			Local_119.f_603[iVar6] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_396(iVar15, Local_119.f_236), Var3, false, false, true);
																			if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_119.f_603[iVar6])) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_603[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																			}
																		}
																		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar2]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2])))
																		{
																			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_119.f_603[iVar6]) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("showcard")))
																			{
																				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_119.f_603[iVar6], NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
																			}
																			if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_109.f_1595[iVar2]), joaat("hidecard")))
																			{
																				if (ENTITY::IS_ENTITY_ATTACHED(Local_119.f_603[iVar6]))
																				{
																					ENTITY::DETACH_ENTITY(Local_119.f_603[iVar6], false, true);
																					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_119.f_603[iVar6], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iVar2), Var8.f_2, func_384(iVar5)), false, false, true);
																					ENTITY::SET_ENTITY_ROTATION(Local_119.f_603[iVar6], Var8 + func_383(iVar5, bVar16), 2, true);
																				}
																			}
																		}
																	}
																}
																else if (iVar6 >= 0 && iVar6 < (11 * Local_119.f_257))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar6]))
																	{
																		OBJECT::DELETE_OBJECT(&(Local_119.f_603[iVar6]));
																		Local_119.f_260[iVar6] = -1;
																	}
																}
																iVar5++;
																iVar2++;
																iLocal_132++;
																if (iLocal_132 >= Local_119.f_257)
																{
																	iLocal_132 = 0;
																}
															}
Vector3 func_383(int iParam0, bool bParam1)//Position - 0x1E025
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 178.92f };
			break;
		case 1:
			Var0 = { 0f, 0f, -180f };
			break;
		case 2:
			Var0 = { 0f, 0f, -178.92f };
			break;
		case 3:
			Var0 = { 0f, 0f, -177.12f };
			break;
		case 4:
			Var0 = { 0f, 0f, 180f };
			break;
		case 5:
			Var0 = { 0f, 0f, 178.56f };
			break;
		case 6:
			Var0 = { 0f, 0f, 180f };
			break;
		case 7:
			Var0 = { 0f, 0f, 178.2f };
			break;
		case 8:
			Var0 = { 0f, 0f, -177.12f };
			break;
		case 9:
			Var0 = { 0f, 0f, 180f };
			break;
		case 10:
			Var0 = { 0f, 0f, 178.56f };
			break;
	}
	if (!bParam1)
	{
		Var0.f_0 = 180f;
	}
	return Var0;
}

Vector3 func_384(int iParam0)//Position - 0x1E121
{
	switch (iParam0)
	{
		case 0:
			return 0.0356f, 0.2105f, 0.94885f;
		case 1:
			return -0.0436f, 0.21205f, 0.948875f;
		case 2:
			return -0.0636f, 0.213825f, 0.9496f;
		case 3:
			return -0.0806f, 0.2137f, 0.950225f;
		case 4:
			return -0.1006f, 0.21125f, 0.950875f;
		case 5:
			return -0.1256f, 0.21505f, 0.951875f;
		case 6:
			return -0.1416f, 0.21305f, 0.953f;
		case 7:
			return -0.1656f, 0.21205f, 0.954025f;
		case 8:
			return -0.1836f, 0.21255f, 0.95495f;
		case 9:
			return -0.2076f, 0.21105f, 0.956025f;
		case 10:
			return -0.2246f, 0.21305f, 0.957f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_386(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1E456
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 72f;
					case 1:
						return 0f, 0f, 64.8f;
					case 2:
						return 0f, 0f, 74.52f;
					case 3:
						return 0f, 0f, 72f;
					default:
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 12.96f;
					case 1:
						return 0f, 0f, 29.16f;
					case 2:
						return 0f, 0f, 32.04f;
					case 3:
						return 0f, 0f, 32.04f;
					default:
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -18.36f;
					case 1:
						return 0f, 0f, -18.72f;
					case 2:
						return 0f, 0f, -15.48f;
					case 3:
						return 0f, 0f, -18f;
					default:
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -79.2f;
					case 1:
						return 0f, 0f, -68.76f;
					case 2:
						return 0f, 0f, -57.6f;
					case 3:
						return 0f, 0f, -64.8f;
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -16.56f;
							case 1:
								return 0f, 0f, -22.32f;
							case 2:
								return 0f, 0f, -10.8f;
							case 3:
								return 0f, 0f, -9.72f;
							default:
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -69.12f;
							case 1:
								return 0f, 0f, -64.8f;
							case 2:
								return 0f, 0f, -58.68f;
							case 3:
								return 0f, 0f, -51.12f;
							default:
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -112.32f;
							case 1:
								return 0f, 0f, -108.36f;
							case 2:
								return 0f, 0f, -99.72f;
							case 3:
								return 0f, 0f, -102.6f;
							default:
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -155.88f;
							case 1:
								return 0f, 0f, -151.92f;
							case 2:
								return 0f, 0f, -147.24f;
							case 3:
								return 0f, 0f, -146.52f;
							default:
						}
						break;
				}
				break;
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 72f;
							case 1:
								return 0f, 0f, 64.8f;
							case 2:
								return 0f, 0f, 74.52f;
							case 3:
								return 0f, 0f, 72f;
							default:
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 12.96f;
							case 1:
								return 0f, 0f, 29.16f;
							case 2:
								return 0f, 0f, 32.04f;
							case 3:
								return 0f, 0f, 32.04f;
							default:
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -18.36f;
							case 1:
								return 0f, 0f, -18.72f;
							case 2:
								return 0f, 0f, -15.48f;
							case 3:
								return 0f, 0f, -18f;
							default:
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -79.2f;
							case 1:
								return 0f, 0f, -68.76f;
							case 2:
								return 0f, 0f, -57.6f;
							case 3:
								return 0f, 0f, -64.8f;
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_387(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1E888
{
	float fVar0;
	struct<3> Var1;
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			case 20:
				fVar0 = 0.896f;
				break;
			case 30:
				fVar0 = 0.901f;
				break;
			case 40:
				fVar0 = 0.907f;
				break;
			case 50:
				fVar0 = 0.95f;
				break;
			case 60:
				fVar0 = 0.917f;
				break;
			case 70:
				fVar0 = 0.922f;
				break;
			case 80:
				fVar0 = 0.927f;
				break;
			case 90:
				fVar0 = 0.932f;
				break;
			case 100:
				fVar0 = 0.95f;
				break;
			case 150:
				fVar0 = 0.904f;
				break;
			case 200:
				fVar0 = 0.899f;
				break;
			case 250:
				fVar0 = 0.914f;
				break;
			case 300:
				fVar0 = 0.904f;
				break;
			case 350:
				fVar0 = 0.924f;
				break;
			case 400:
				fVar0 = 0.91f;
				break;
			case 450:
				fVar0 = 0.935f;
				break;
			case 500:
				fVar0 = 0.95f;
				break;
			case 1000:
				fVar0 = 0.95f;
				break;
			case 1500:
				fVar0 = 0.904f;
				break;
			case 2000:
				fVar0 = 0.899f;
				break;
			case 2500:
				fVar0 = 0.915f;
				break;
			case 3000:
				fVar0 = 0.904f;
				break;
			case 3500:
				fVar0 = 0.925f;
				break;
			case 4000:
				fVar0 = 0.91f;
				break;
			case 4500:
				fVar0 = 0.935f;
				break;
			case 5000:
				fVar0 = 0.95f;
				break;
			case 6000:
				fVar0 = 0.919f;
				break;
			case 7000:
				fVar0 = 0.924f;
				break;
			case 8000:
				fVar0 = 0.93f;
				break;
			case 9000:
				fVar0 = 0.935f;
				break;
			case 10000:
				fVar0 = 0.95f;
				break;
			case 15000:
				fVar0 = 0.902f;
				break;
			case 20000:
				fVar0 = 0.897f;
				break;
			case 25000:
				fVar0 = 0.912f;
				break;
			case 30000:
				fVar0 = 0.902f;
				break;
			case 35000:
				fVar0 = 0.922f;
				break;
			case 40000:
				fVar0 = 0.907f;
				break;
			case 45000:
				fVar0 = 0.932f;
				break;
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.712625f, 0.170625f, 0f };
						break;
					case 1:
						Var1 = { 0.6658f, 0.218375f, 0f };
						break;
					case 2:
						Var1 = { 0.756775f, 0.292775f, 0f };
						break;
					case 3:
						Var1 = { 0.701875f, 0.3439f, 0f };
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.278125f, -0.2571f, 0f };
						break;
					case 1:
						Var1 = { 0.280375f, -0.190375f, 0f };
						break;
					case 2:
						Var1 = { 0.397775f, -0.208525f, 0f };
						break;
					case 3:
						Var1 = { 0.39715f, -0.1354f, 0f };
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.30305f, -0.2464f, 0f };
						break;
					case 1:
						Var1 = { -0.257975f, -0.19715f, 0f };
						break;
					case 2:
						Var1 = { -0.186575f, -0.2861f, 0f };
						break;
					case 3:
						Var1 = { -0.141675f, -0.237925f, 0f };
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.72855f, 0.17345f, 0f };
						break;
					case 1:
						Var1 = { -0.652825f, 0.177525f, 0f };
						break;
					case 2:
						Var1 = { -0.6783f, 0.0744f, 0f };
						break;
					case 3:
						Var1 = { -0.604425f, 0.082575f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			case 20:
				fVar0 = 0.896f;
				break;
			case 30:
				fVar0 = 0.901f;
				break;
			case 40:
				fVar0 = 0.907f;
				break;
			case 50:
				fVar0 = 0.95f;
				break;
			case 60:
				fVar0 = 0.917f;
				break;
			case 70:
				fVar0 = 0.922f;
				break;
			case 80:
				fVar0 = 0.927f;
				break;
			case 90:
				fVar0 = 0.932f;
				break;
			case 100:
				fVar0 = 0.95f;
				break;
			case 150:
				fVar0 = 0.904f;
				break;
			case 200:
				fVar0 = 0.899f;
				break;
			case 250:
				fVar0 = 0.914f;
				break;
			case 300:
				fVar0 = 0.904f;
				break;
			case 350:
				fVar0 = 0.924f;
				break;
			case 400:
				fVar0 = 0.91f;
				break;
			case 450:
				fVar0 = 0.935f;
				break;
			case 500:
				fVar0 = 0.95f;
				break;
			case 1000:
				fVar0 = 0.95f;
				break;
			case 1500:
				fVar0 = 0.904f;
				break;
			case 2000:
				fVar0 = 0.899f;
				break;
			case 2500:
				fVar0 = 0.915f;
				break;
			case 3000:
				fVar0 = 0.904f;
				break;
			case 3500:
				fVar0 = 0.925f;
				break;
			case 4000:
				fVar0 = 0.91f;
				break;
			case 4500:
				fVar0 = 0.935f;
				break;
			case 5000:
				fVar0 = 0.953f;
				break;
			case 6000:
				fVar0 = 0.919f;
				break;
			case 7000:
				fVar0 = 0.924f;
				break;
			case 8000:
				fVar0 = 0.93f;
				break;
			case 9000:
				fVar0 = 0.935f;
				break;
			case 10000:
				fVar0 = 0.95f;
				break;
			case 15000:
				fVar0 = 0.902f;
				break;
			case 20000:
				fVar0 = 0.897f;
				break;
			case 25000:
				fVar0 = 0.912f;
				break;
			case 30000:
				fVar0 = 0.902f;
				break;
			case 35000:
				fVar0 = 0.922f;
				break;
			case 40000:
				fVar0 = 0.907f;
				break;
			case 45000:
				fVar0 = 0.932f;
				break;
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.6931f, 0.1952f, 0f };
								break;
							case 1:
								Var1 = { 0.724925f, 0.26955f, 0f };
								break;
							case 2:
								Var1 = { 0.7374f, 0.349625f, 0f };
								break;
							case 3:
								Var1 = { 0.76415f, 0.419225f, 0f };
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.2827f, -0.227825f, 0f };
								break;
							case 1:
								Var1 = { 0.3605f, -0.1898f, 0f };
								break;
							case 2:
								Var1 = { 0.4309f, -0.16365f, 0f };
								break;
							case 3:
								Var1 = { 0.49275f, -0.111575f, 0f };
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.279425f, -0.2238f, 0f };
								break;
							case 1:
								Var1 = { -0.200775f, -0.25855f, 0f };
								break;
							case 2:
								Var1 = { -0.125775f, -0.26815f, 0f };
								break;
							case 3:
								Var1 = { -0.05615f, -0.29435f, 0f };
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.685925f, 0.173275f, 0f };
								break;
							case 1:
								Var1 = { -0.6568f, 0.092525f, 0f };
								break;
							case 2:
								Var1 = { -0.612875f, 0.033025f, 0f };
								break;
							case 3:
								Var1 = { -0.58465f, -0.0374f, 0f };
								break;
						}
						break;
				}
				break;
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.712625f, 0.170625f, 0f };
								break;
							case 1:
								Var1 = { 0.6658f, 0.218375f, 0f };
								break;
							case 2:
								Var1 = { 0.756775f, 0.292775f, 0f };
								break;
							case 3:
								Var1 = { 0.701875f, 0.3439f, 0f };
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.278125f, -0.2571f, 0f };
								break;
							case 1:
								Var1 = { 0.280375f, -0.190375f, 0f };
								break;
							case 2:
								Var1 = { 0.397775f, -0.208525f, 0f };
								break;
							case 3:
								Var1 = { 0.39715f, -0.1354f, 0f };
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.30305f, -0.2464f, 0f };
								break;
							case 1:
								Var1 = { -0.257975f, -0.19715f, 0f };
								break;
							case 2:
								Var1 = { -0.186575f, -0.2861f, 0f };
								break;
							case 3:
								Var1 = { -0.141675f, -0.237925f, 0f };
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.72855f, 0.17345f, 0f };
								break;
							case 1:
								Var1 = { -0.652825f, 0.177525f, 0f };
								break;
							case 2:
								Var1 = { -0.6783f, 0.0744f, 0f };
								break;
							case 3:
								Var1 = { -0.604425f, 0.082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	Var1.f_2 = fVar0;
	return Var1;
}

Vector3 func_389(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1F7CF
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 69.12f };
						break;
					case 1:
						Var0 = { 0f, 0f, 67.8f };
						break;
					case 2:
						Var0 = { 0f, 0f, 66.6f };
						break;
					case 3:
						Var0 = { 0f, 0f, 70.44f };
						break;
					case 4:
						Var0 = { 0f, 0f, 70.84f };
						break;
					case 5:
						Var0 = { 0f, 0f, 67.88f };
						break;
					case 6:
						Var0 = { 0f, 0f, 69.56f };
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					case 1:
						Var0 = { 0f, 0f, 22.32f };
						break;
					case 2:
						Var0 = { 0f, 0f, 20.8f };
						break;
					case 3:
						Var0 = { 0f, 0f, 19.8f };
						break;
					case 4:
						Var0 = { 0f, 0f, 19.44f };
						break;
					case 5:
						Var0 = { 0f, 0f, 26.28f };
						break;
					case 6:
						Var0 = { 0f, 0f, 22.68f };
						break;
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -21.43f };
						break;
					case 1:
						Var0 = { 0f, 0f, -20.16f };
						break;
					case 2:
						Var0 = { 0f, 0f, -16.92f };
						break;
					case 3:
						Var0 = { 0f, 0f, -23.4f };
						break;
					case 4:
						Var0 = { 0f, 0f, -21.24f };
						break;
					case 5:
						Var0 = { 0f, 0f, -23.76f };
						break;
					case 6:
						Var0 = { 0f, 0f, -19.44f };
						break;
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					case 1:
						Var0 = { 0f, 0f, -69.12f };
						break;
					case 2:
						Var0 = { 0f, 0f, -64.44f };
						break;
					case 3:
						Var0 = { 0f, 0f, -67.68f };
						break;
					case 4:
						Var0 = { 0f, 0f, -63.72f };
						break;
					case 5:
						Var0 = { 0f, 0f, -68.4f };
						break;
					case 6:
						Var0 = { 0f, 0f, -64.44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 68.57f };
						break;
					case 1:
						Var0 = { 0f, 0f, 67.52f };
						break;
					case 2:
						Var0 = { 0f, 0f, 67.76f };
						break;
					case 3:
						Var0 = { 0f, 0f, 67.04f };
						break;
					case 4:
						Var0 = { 0f, 0f, 68.84f };
						break;
					case 5:
						Var0 = { 0f, 0f, 65.96f };
						break;
					case 6:
						Var0 = { 0f, 0f, 67.76f };
						break;
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					case 1:
						Var0 = { 0f, 0f, 22f };
						break;
					case 2:
						Var0 = { 0f, 0f, 24.44f };
						break;
					case 3:
						Var0 = { 0f, 0f, 21.08f };
						break;
					case 4:
						Var0 = { 0f, 0f, 25.96f };
						break;
					case 5:
						Var0 = { 0f, 0f, 26.16f };
						break;
					case 6:
						Var0 = { 0f, 0f, 28.76f };
						break;
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -14.04f };
						break;
					case 1:
						Var0 = { 0f, 0f, -15.48f };
						break;
					case 2:
						Var0 = { 0f, 0f, -16.56f };
						break;
					case 3:
						Var0 = { 0f, 0f, -15.84f };
						break;
					case 4:
						Var0 = { 0f, 0f, -16.92f };
						break;
					case 5:
						Var0 = { 0f, 0f, -14.4f };
						break;
					case 6:
						Var0 = { 0f, 0f, -14.28f };
						break;
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					case 1:
						Var0 = { 0f, 0f, -67.6f };
						break;
					case 2:
						Var0 = { 0f, 0f, -69.4f };
						break;
					case 3:
						Var0 = { 0f, 0f, -69.04f };
						break;
					case 4:
						Var0 = { 0f, 0f, -68.68f };
						break;
					case 5:
						Var0 = { 0f, 0f, -66.16f };
						break;
					case 6:
						Var0 = { 0f, 0f, -63.28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		Var0.f_2 = (Var0.f_2 + 90f);
	}
	return Var0;
}

Vector3 func_390(int iParam0, int iParam1, bool bParam2)//Position - 0x1FCEC
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.5737f, 0.2376f, 0.948025f;
					case 1:
						return 0.562975f, 0.2523f, 0.94875f;
					case 2:
						return 0.553875f, 0.266325f, 0.94955f;
					case 3:
						return 0.5459f, 0.282075f, 0.9501f;
					case 4:
						return 0.536125f, 0.29645f, 0.95085f;
					case 5:
						return 0.524975f, 0.30975f, 0.9516f;
					case 6:
						return 0.515775f, 0.325325f, 0.95235f;
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.2325f, -0.1082f, 0.94805f;
					case 1:
						return 0.23645f, -0.0918f, 0.949f;
					case 2:
						return 0.2401f, -0.074475f, 0.950225f;
					case 3:
						return 0.244625f, -0.057675f, 0.951125f;
					case 4:
						return 0.249675f, -0.041475f, 0.95205f;
					case 5:
						return 0.257575f, -0.0256f, 0.9532f;
					case 6:
						return 0.2601f, -0.008175f, 0.954375f;
					default:
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.2359f, -0.1091f, 0.9483f;
					case 1:
						return -0.221025f, -0.100675f, 0.949f;
					case 2:
						return -0.20625f, -0.092875f, 0.949725f;
					case 3:
						return -0.193225f, -0.07985f, 0.950325f;
					case 4:
						return -0.1776f, -0.072f, 0.951025f;
					case 5:
						return -0.165f, -0.060025f, 0.951825f;
					case 6:
						return -0.14895f, -0.05155f, 0.95255f;
					default:
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5765f, 0.2229f, 0.9482f;
					case 1:
						return -0.558925f, 0.2197f, 0.949175f;
					case 2:
						return -0.5425f, 0.213025f, 0.9499f;
					case 3:
						return -0.525925f, 0.21105f, 0.95095f;
					case 4:
						return -0.509475f, 0.20535f, 0.9519f;
					case 5:
						return -0.491775f, 0.204075f, 0.952825f;
					case 6:
						return -0.4752f, 0.197525f, 0.9543f;
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.6083f, 0.3523f, 0.94795f;
					case 1:
						return 0.598475f, 0.366475f, 0.948925f;
					case 2:
						return 0.589525f, 0.3807f, 0.94975f;
					case 3:
						return 0.58045f, 0.39435f, 0.950375f;
					case 4:
						return 0.571975f, 0.4092f, 0.951075f;
					case 5:
						return 0.5614f, 0.4237f, 0.951775f;
					case 6:
						return 0.554325f, 0.4402f, 0.952525f;
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.3431f, -0.0527f, 0.94855f;
					case 1:
						return 0.348575f, -0.0348f, 0.949425f;
					case 2:
						return 0.35465f, -0.018825f, 0.9502f;
					case 3:
						return 0.3581f, -0.001625f, 0.95115f;
					case 4:
						return 0.36515f, 0.015275f, 0.952075f;
					case 5:
						return 0.368525f, 0.032475f, 0.95335f;
					case 6:
						return 0.373275f, 0.0506f, 0.9543f;
					default:
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.116f, -0.1501f, 0.947875f;
					case 1:
						return -0.102725f, -0.13795f, 0.948525f;
					case 2:
						return -0.08975f, -0.12665f, 0.949175f;
					case 3:
						return -0.075025f, -0.1159f, 0.949875f;
					case 4:
						return -0.0614f, -0.104775f, 0.9507f;
					case 5:
						return -0.046275f, -0.095025f, 0.9516f;
					case 6:
						return -0.031425f, -0.0846f, 0.952675f;
					default:
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5205f, 0.1122f, 0.9478f;
					case 1:
						return -0.503175f, 0.108525f, 0.94865f;
					case 2:
						return -0.485125f, 0.10475f, 0.949175f;
					case 3:
						return -0.468275f, 0.099175f, 0.94995f;
					case 4:
						return -0.45155f, 0.09435f, 0.95085f;
					case 5:
						return -0.434475f, 0.089725f, 0.95145f;
					case 6:
						return -0.415875f, 0.0846f, 0.9523f;
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_391(int iParam0, bool bParam1)//Position - 0x202CE
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 1:
			return " A  C ";
		case 2:
			return " 2  C ";
		case 3:
			return " 3  C ";
		case 4:
			return " 4  C ";
		case 5:
			return " 5  C ";
		case 6:
			return " 6  C ";
		case 7:
			return " 7  C ";
		case 8:
			return " 8  C ";
		case 9:
			return " 9  C ";
		case 10:
			return " 10 C ";
		case 11:
			return " J  C ";
		case 12:
			return " Q  C ";
		case 13:
			return " K  C ";
		case 14:
			return " A  D ";
		case 15:
			return " 2  D ";
		case 16:
			return " 3  D ";
		case 17:
			return " 4  D ";
		case 18:
			return " 5  D ";
		case 19:
			return " 6  D ";
		case 20:
			return " 7  D ";
		case 21:
			return " 8  D ";
		case 22:
			return " 9  D ";
		case 23:
			return " 10 D ";
		case 24:
			return " J  D ";
		case 25:
			return " Q  D ";
		case 26:
			return " K  D ";
		case 27:
			return " A  H ";
		case 28:
			return " 2  H ";
		case 29:
			return " 3  H ";
		case 30:
			return " 4  H ";
		case 31:
			return " 5  H ";
		case 32:
			return " 6  H ";
		case 33:
			return " 7  H ";
		case 34:
			return " 8  H ";
		case 35:
			return " 9  H ";
		case 36:
			return " 10 H ";
		case 37:
			return " J  H ";
		case 38:
			return " Q  H ";
		case 39:
			return " K  H ";
		case 40:
			return " A  S ";
		case 41:
			return " 2  S ";
		case 42:
			return " 3  S ";
		case 43:
			return " 4  S ";
		case 44:
			return " 5  S ";
		case 45:
			return " 6  S ";
		case 46:
			return " 7  S ";
		case 47:
			return " 8  S ";
		case 48:
			return " 9  S ";
		case 49:
			return " 10 S ";
		case 50:
			return " J  S ";
		case 51:
			return " Q  S ";
		case 52:
			return " K  S ";
		default:
	}
	return "";
}

int func_392(int iParam0, int iParam1, int iParam2)//Position - 0x20592
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_393(int iParam0)//Position - 0x205A8
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			return BitTest(Local_119.f_530, (iParam0 % 32));
		case 1:
			return BitTest(Local_119.f_531, (iParam0 % 32));
		case 2:
			return BitTest(Local_119.f_532, (iParam0 % 32));
		case 3:
			return BitTest(Local_119.f_533, (iParam0 % 32));
		case 4:
			return BitTest(Local_119.f_534, (iParam0 % 32));
		case 5:
			return BitTest(Local_119.f_535, (iParam0 % 32));
		case 6:
			return BitTest(Local_119.f_536, (iParam0 % 32));
		default:
	}
	return 0;
}

void func_394(int iParam0)//Position - 0x20656
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			MISC::CLEAR_BIT(&(Local_119.f_530), (iParam0 % 32));
			break;
		case 1:
			MISC::CLEAR_BIT(&(Local_119.f_531), (iParam0 % 32));
			break;
		case 2:
			MISC::CLEAR_BIT(&(Local_119.f_532), (iParam0 % 32));
			break;
		case 3:
			MISC::CLEAR_BIT(&(Local_119.f_533), (iParam0 % 32));
			break;
		case 4:
			MISC::CLEAR_BIT(&(Local_119.f_534), (iParam0 % 32));
			break;
		case 5:
			MISC::CLEAR_BIT(&(Local_119.f_535), (iParam0 % 32));
			break;
		case 6:
			MISC::CLEAR_BIT(&(Local_119.f_536), (iParam0 % 32));
			break;
	}
}

void func_395(int iParam0)//Position - 0x20718
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			MISC::SET_BIT(&(Local_119.f_530), (iParam0 % 32));
			break;
		case 1:
			MISC::SET_BIT(&(Local_119.f_531), (iParam0 % 32));
			break;
		case 2:
			MISC::SET_BIT(&(Local_119.f_532), (iParam0 % 32));
			break;
		case 3:
			MISC::SET_BIT(&(Local_119.f_533), (iParam0 % 32));
			break;
		case 4:
			MISC::SET_BIT(&(Local_119.f_534), (iParam0 % 32));
			break;
		case 5:
			MISC::SET_BIT(&(Local_119.f_535), (iParam0 % 32));
			break;
		case 6:
			MISC::SET_BIT(&(Local_119.f_536), (iParam0 % 32));
			break;
	}
}

int func_396(int iParam0, bool bParam1)//Position - 0x207DA
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_a_a");
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_02a");
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_03a");
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_04a");
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_05a");
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_06a");
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_07a");
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_08a");
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_09a");
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_10a");
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_j_a");
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_q_a");
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_k_a");
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_a_a");
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_02a");
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_03a");
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_04a");
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_05a");
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_06a");
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_07a");
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_08a");
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_09a");
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_10a");
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_j_a");
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_q_a");
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_k_a");
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_a_a");
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_02a");
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_03a");
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_04a");
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_05a");
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_06a");
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_07a");
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_08a");
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_09a");
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_10a");
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_j_a");
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_q_a");
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_k_a");
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_a_a");
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_02a");
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_03a");
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_04a");
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_05a");
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_06a");
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_07a");
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_08a");
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_09a");
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_10a");
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_j_a");
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_q_a");
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_k_a");
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_ace");
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_02");
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_03");
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_04");
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_05");
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_06");
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_07");
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_08");
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_09");
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_10");
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_jack");
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_queen");
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_king");
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_ace");
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_02");
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_03");
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_04");
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_05");
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_06");
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_07");
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_08");
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_09");
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_10");
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_jack");
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_queen");
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_king");
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_ace");
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_02");
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_03");
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_04");
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_05");
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_06");
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_07");
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_08");
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_09");
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_10");
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_jack");
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_queen");
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_king");
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_ace");
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_02");
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_03");
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_04");
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_05");
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_06");
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_07");
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_08");
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_09");
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_10");
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_jack");
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_queen");
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_king");
			}
		default:
	}
	if (bParam1)
	{
		return MISC::GET_HASH_KEY("vw_prop_vw_jo_char_01a");
	}
	return MISC::GET_HASH_KEY("vw_prop_casino_cards_single");
}

void func_404()//Position - 0x210F8
{
	if (Local_119.f_257 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143))
		{
			if (__LIB_25__::func_805() != __LIB_0__::func_160())
			{
				iLocal_143 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_70(0), 1f, func_218(Global_2689235[__LIB_25__::func_805() /*453*/].f_447), false, false, false);
			}
		}
		else if (__LIB_25__::func_805() != __LIB_0__::func_160() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_143) != __LIB_27__::func_578(__LIB_25__::func_805()))
			{
				OBJECT::SET_OBJECT_TINT_INDEX(iLocal_143, __LIB_27__::func_578(__LIB_25__::func_805()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144))
		{
			iLocal_144 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1129.4065f, 262.3578f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_144) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_144, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_145))
		{
			iLocal_145 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1144.4291f, 247.3352f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), false, false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_145) && OBJECT::GET_OBJECT_TINT_INDEX(iLocal_145) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_145, 3);
		}
	}
}

void func_405()//Position - 0x2120B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_119.f_257)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128[iVar0]))
		{
			func_406(iVar0);
		}
		iVar0++;
	}
}

void func_406(int iParam0)//Position - 0x2123F
{
	int iVar0;
	int iVar1;
	if (Local_119.f_236)
	{
		iVar0 = joaat("vw_prop_vw_jo_char_01a");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_single");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128[iParam0]))
	{
		iVar1 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_408(iParam0), false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_408(iParam0), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iVar1, func_407(iParam0), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		iLocal_128[iParam0] = iVar1;
	}
}

Vector3 func_407(int iParam0)//Position - 0x212C6
{
	struct<3> Var0;
	Var0 = { 0f, 164.52f, 11.5f };
	return Vector(func_69(iParam0), 0f, 0f) + Var0;
}

Vector3 func_408(int iParam0)//Position - 0x212EA
{
	struct<3> Var0;
	Var0 = { 0.526f, 0.571f, 0.963f };
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_70(iParam0), func_69(iParam0), Var0);
}

int func_409()//Position - 0x21319
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_396(iVar1, Local_119.f_236);
		STREAMING::REQUEST_MODEL(iVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_410()//Position - 0x2135C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_119.f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_128[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_128[iVar0]));
		}
		iVar0++;
	}
}

void func_411()//Position - 0x21394
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_396(iVar1, Local_119.f_236);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar0++;
	}
}

void func_412()//Position - 0x213C8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_119.f_257)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_109.f_1595[iVar0]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_109.f_1595[iVar0]);
			if (__LIB_0__::func_121(iVar1))
			{
				if (func_413(iVar0))
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, false, true);
				}
				else
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, true, false);
				}
			}
		}
		iVar0++;
	}
}

int func_413(int iParam0)//Position - 0x2142F
{
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 5) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 3))
	{
		return 0;
	}
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 2))
	{
		if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

void func_429()//Position - 0x21B9A
{
	if (Local_119.f_1 > 2)
	{
		if (Local_118[PLAYER::PLAYER_ID() /*8*/].f_4 > -1)
		{
			Local_124.f_9 = Local_109.f_1570[Local_118[PLAYER::PLAYER_ID() /*8*/].f_4];
		}
		Local_124.f_18 = __LIB_31__::func_639();
		Local_124.f_19 = __LIB_35__::func_441();
		Local_124.f_17 = __LIB_1__::func_295(&uLocal_120, 0, 0);
		Local_124.f_7 = __LIB_37__::func_740();
		if (Global_262145.f_26814 /* Tunable: ENABLE_BLACKJACK_HEAVY */)
		{
			STATS::PLAYSTATS_CASINO_BLACKJACK(&Local_124);
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_375(0);
	func_411();
	__LIB_37__::func_739();
	func_432();
	func_431();
	func_410();
	if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_537))
	{
		OBJECT::DELETE_OBJECT(&(Local_119.f_537));
	}
	if (Local_119.f_1 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(func_58());
		STREAMING::REMOVE_ANIM_DICT(__LIB_31__::func_627());
		STREAMING::REMOVE_ANIM_DICT(func_88());
		STREAMING::REMOVE_ANIM_DICT(__LIB_31__::func_634());
	}
	Global_1966107 = 0;
	__LIB_0__::func_199();
}

void func_431()//Position - 0x21C9F
{
	int iVar0;
	int iVar1;
	iVar0 = (16 * Local_119.f_257);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_538[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_119.f_538[iVar1]));
		}
		iVar1++;
	}
}

void func_432()//Position - 0x21CE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (11 * Local_119.f_257);
	iVar1 = (56 * Local_119.f_257);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_648[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(Local_119.f_648[iVar2]));
			Local_119.f_305[iVar2] = -1;
			func_394(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_119.f_603[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(Local_119.f_603[iVar2]));
			Local_119.f_260[iVar2] = -1;
		}
		iVar2++;
	}
}

void func_441()//Position - 0x21EA9
{
	int iVar0;
	int iVar1;
	if (Global_1966099)
	{
		Global_1966099 = 0;
	}
	if (__LIB_2__::func_83(PLAYER::PLAYER_ID()) && __LIB_25__::func_805() != __LIB_0__::func_160())
	{
		if (BitTest(Global_2689235[__LIB_25__::func_805() /*453*/].f_318.f_4, 4))
		{
			Local_119.f_236 = 1;
		}
		Global_1966109 = Global_2689235[__LIB_25__::func_805() /*453*/].f_447;
	}
	while (!(Global_2788828 != -1 || __LIB_2__::func_83(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_429();
		}
		if (__LIB_6__::func_949())
		{
			func_429();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_4__::func_673();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iVar0);
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_109, 1660, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_118, 257, 0);
	if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
	{
		Local_119.f_257 = 1;
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(1);
	}
	else
	{
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(3);
	}
	if (!__LIB_0__::func_672())
	{
		func_429();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		func_429();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (__LIB_2__::func_83(PLAYER::PLAYER_ID()))
		{
			Local_109.f_1550[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_109.f_1550[0] = Global_2788842[0];
			Local_109.f_1550[1] = Global_2788842[1];
			Local_109.f_1550[2] = Global_2788842[2];
			Local_109.f_1550[3] = Global_2788842[3];
		}
	}
	Global_1966107 = 1;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		Local_119.f_260[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 224)
	{
		Local_119.f_305[iVar1] = -1;
		func_394(iVar1);
		iVar1++;
	}
}

