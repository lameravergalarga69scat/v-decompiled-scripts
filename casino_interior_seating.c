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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
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
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	float fLocal_124 = 0f;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<25> Local_130 = { 0, 0, 0, 8, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 6, 6, 0, 0, 0 } ;
	struct<10> Local_131[32];
	struct<2482> Local_132 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	struct<10> Local_135 = { 0, 0, 0, 0, 0, 0, -1, 0, -1, 0 } ;
	var uLocal_136 = 0;
	var uLocal_137 = -1;
	var uLocal_138 = -1;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 31;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 1061158912;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 1061158912;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 1061158912;
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
	var uLocal_190 = 0;
	var uLocal_191 = 1061158912;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
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
	var uLocal_205 = 1061158912;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 1061158912;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 1061158912;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 1061158912;
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
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 1061158912;
	var uLocal_262 = 0;
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
	var uLocal_275 = 1061158912;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 1061158912;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 1061158912;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 1061158912;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 1061158912;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1061158912;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 1061158912;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 1061158912;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 1061158912;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 1061158912;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 1061158912;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 1061158912;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 1061158912;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 1061158912;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 1061158912;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 1061158912;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 1061158912;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 1061158912;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 1061158912;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 1061158912;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 1061158912;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 1061158912;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	int iLocal_577 = 0;
	struct<3> Local_578 = { 0, 0, 0 } ;
	int* iLocal_579 = NULL;
	var uLocal_580 = -1;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = -1;
	var uLocal_589 = -1;
	var uLocal_590 = -1;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 1083179008;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	int iLocal_603 = 0;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_109 = 3f;
	fLocal_110 = 0f;
	fLocal_111 = 2f;
	fLocal_112 = 100f;
	iLocal_122 = -1;
	fLocal_124 = 0.5f;
	Local_578 = { 949.3556f, 10.0619f, 115f };
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5677();
	}
	else
	{
		func_5671();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_5664())
		{
			func_5671();
		}
		func_5628(&Local_135);
		func_534();
		func_110();
		func_83(&iLocal_579);
		func_82();
		if (__LIB_13__::func_556(0))
		{
			Global_2725435 = 1;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Local_130.f_22 == 1)
				{
					if (!iLocal_603)
					{
						__LIB_10__::func_773(&Local_130, 2, 0);
						iLocal_603 = 1;
					}
				}
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (iLocal_603)
				{
					if (Local_130.f_22 == 2)
					{
						__LIB_10__::func_773(&Local_130, 1, 0);
						iLocal_603 = 0;
					}
				}
			}
			Global_2725435 = 0;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && __LIB_16__::func_211(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
		{
			func_1(&Local_130, &(Local_131[Local_132.f_14 /*10*/]), &Local_132, &Global_4194304);
		}
	}
}

void func_1(int* iParam0, var uParam1, int* iParam2, var uParam3)//Position - 0x183
{
	__LIB_13__::func_585(iParam0, uParam1, iParam2, uParam3);
	switch (iParam0->f_22)
	{
		case 0:
			if (!Global_2715699.f_2846.f_186)
			{
				if (!Global_1853198)
				{
					if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iParam2->f_14), 0, 0))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(iParam2->f_14)))
						{
							if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::INT_TO_PLAYERINDEX(iParam2->f_14)))
							{
								if (BitTest(*uParam1, 5))
								{
									iParam0->f_20 = uParam1->f_2;
									iParam0->f_1 = ((0f + -36f) / 2f);
									if (iParam2->f_2482)
									{
										iParam0->f_20 = 8;
									}
									if (BitTest(*uParam1, 6) && !Global_1853198)
									{
										__LIB_10__::func_773(iParam0, 1, 0);
									}
									else
									{
										__LIB_10__::func_773(iParam0, 2, 0);
									}
								}
							}
						}
					}
				}
				else
				{
					iParam0->f_20 = 6;
					iParam0->f_1 = ((0f + -36f) / 2f);
					__LIB_10__::func_773(iParam0, 2, 0);
				}
			}
			break;
		case 1:
			if ((BitTest(uParam1->f_1, 1) && !BitTest(*uParam1, 3)) || Global_1853198)
			{
				__LIB_10__::func_773(iParam0, 2, 0);
			}
			else
			{
				func_59(iParam0, uParam1, iParam2, uParam3, 0);
			}
			if ((__LIB_5__::getGlobal_2714762_f_692() == 1 || __LIB_1__::getGlobal_2714762_f_691() == 1) || __LIB_3__::func_366())
			{
				__LIB_10__::func_773(iParam0, 2, 0);
			}
			break;
		case 2:
			func_2(iParam0, iParam2, uParam3, 0);
			if ((BitTest(uParam1->f_1, 0) && !BitTest(*uParam1, 3)) && !Global_1853198)
			{
				__LIB_10__::func_773(iParam0, 1, 0);
			}
			break;
	}
	switch (iParam0->f_23)
	{
		case 0:
			if (!Global_1853198)
			{
				if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iParam2->f_14), 0, 0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(iParam2->f_14)))
					{
						if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::INT_TO_PLAYERINDEX(iParam2->f_14)))
						{
							if (BitTest(*uParam1, 5))
							{
								iParam0->f_21 = uParam1->f_3;
								iParam0->f_2 = ((0f + -36f) / 2f);
								if (BitTest(*uParam1, 7) && !Global_1853198)
								{
									__LIB_10__::func_773(iParam0, 1, 1);
								}
								else
								{
									__LIB_10__::func_773(iParam0, 2, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_21 = 6;
				iParam0->f_2 = ((0f + -36f) / 2f);
				__LIB_10__::func_773(iParam0, 2, 1);
			}
			break;
		case 1:
			if ((BitTest(uParam1->f_1, 1) && BitTest(*uParam1, 3)) || Global_1853198)
			{
				__LIB_10__::func_773(iParam0, 2, 1);
			}
			else
			{
				func_59(iParam0, uParam1, iParam2, uParam3, 1);
			}
			break;
		case 2:
			func_2(iParam0, iParam2, uParam3, 1);
			if ((BitTest(uParam1->f_1, 0) && BitTest(*uParam1, 3)) && !Global_1853198)
			{
				__LIB_10__::func_773(iParam0, 1, 1);
			}
			break;
	}
	iParam2->f_14++;
	if (iParam2->f_14 >= 32)
	{
		iParam2->f_14 = 0;
	}
}

void func_2(int* iParam0, int* iParam1, var uParam2, bool bParam3)//Position - 0x439
{
	if (bParam3)
	{
		if (!BitTest(*iParam1, 10) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam1->f_13) > 1000)
		{
			if (func_4(iParam0, iParam1, uParam2, 1))
			{
				__LIB_10__::func_763(iParam0, iParam1, 1);
			}
		}
	}
	else if (!BitTest(*iParam1, 9) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam1->f_12) > 1000)
	{
		if (func_4(iParam0, iParam1, uParam2, 0))
		{
			__LIB_10__::func_763(iParam0, iParam1, 0);
		}
	}
}

int func_4(int* iParam0, int* iParam1, var uParam2, bool bParam3)//Position - 0x510
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (bParam3)
	{
		iVar1 = iParam0->f_21;
	}
	else
	{
		iVar1 = iParam0->f_20;
	}
	if (iVar1 == 5)
	{
		if (iParam1->f_76 < MISC::GET_GAME_TIMER())
		{
			if (!func_14(3))
			{
				bVar0 = true;
			}
			iParam1->f_76 = MISC::GET_GAME_TIMER() + 1000;
		}
		if (!Global_1835502.f_385 || bVar0)
		{
			func_5(iParam1, iParam0, uParam2, bParam3);
			if (Global_1835502.f_384)
			{
				if (!BitTest(*iParam0, 0))
				{
					MISC::SET_BIT(iParam0, 0);
				}
			}
			return 1;
		}
	}
	else if (iVar1 == 4)
	{
		if (iParam1->f_76 < MISC::GET_GAME_TIMER())
		{
			if (!func_14(5))
			{
				bVar0 = true;
			}
			iParam1->f_76 = MISC::GET_GAME_TIMER() + 1000;
		}
		if (bVar0)
		{
			func_5(iParam1, iParam0, uParam2, bParam3);
			return 1;
		}
	}
	return 0;
}

void func_5(var uParam0, int* iParam1, var uParam2, bool bParam3)//Position - 0x5D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (bParam3)
	{
		iVar0 = iParam1->f_21;
	}
	else
	{
		iVar0 = iParam1->f_20;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 8;
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else if (func_7(uParam0, iVar1, uParam2))
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		__LIB_10__::func_764(iParam1, iVar2, bParam3);
	}
}

int func_7(var uParam0, int iParam1, var uParam2)//Position - 0x661
{
	int iVar0;
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			if ((((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || __LIB_7__::func_685(uParam2->f_31)) || __LIB_6__::func_846(PLAYER::PLAYER_ID())) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || uParam0->f_2481) || uParam0->f_2482) || uParam0->f_2483)
			{
				return 0;
			}
			iVar0 = iParam1;
			if (iVar0 < 3)
			{
				if (uParam2->f_38[iVar0 /*27*/].f_26 != 0)
				{
					if ((uParam2->f_1922[iVar0 /*9*/] != 0f && uParam2->f_1922[iVar0 /*9*/].f_1 != 0f) && uParam2->f_1922[iVar0 /*9*/].f_2 != 0f)
					{
						return 1;
					}
				}
			}
			break;
		case 3:
			if (((((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0 || __LIB_7__::func_685(uParam2->f_31)) || __LIB_0__::func_845(uParam2->f_31, -1)) || __LIB_6__::func_846(PLAYER::PLAYER_ID())) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || uParam0->f_2481) || uParam0->f_2482) || uParam0->f_2483)
			{
				return 0;
			}
			if (uParam2->f_33 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (uParam0->f_2481 && !BitTest(*uParam0, 31))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
			{
				return 0;
			}
			if (func_14(5))
			{
				return 1;
			}
			break;
		case 5:
			if (uParam0->f_2481 && !BitTest(*uParam0, 31))
			{
				return 0;
			}
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
			{
				return 0;
			}
			if (!func_14(3))
			{
				return 0;
			}
			if (Global_1835502.f_385)
			{
				return 1;
			}
			break;
		case 6:
		case 7:
			return 1;
		case 8:
			if (uParam0->f_2482)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xE8D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 0))
		{
			if (func_15(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar0)), iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_15(int iParam0, int iParam1)//Position - 0xECF
{
	if (func_16(iParam0, iParam1, 0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xEEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (iParam1 == 1 || iParam1 == 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iVar0 = 1;
	}
	switch (iVar0)
	{
		case 0:
			return 1;
			break;
		case 1:
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
			iVar2 = iVar1;
			if (BitTest(Global_2689235[iVar1 /*453*/].f_197, 31))
			{
				return 0;
			}
			else
			{
				Global_2727749 = 0;
				if (!BitTest(Global_2689235[iVar1 /*453*/].f_197, 30))
				{
					return 0;
				}
			}
			if (Global_2789733 && BitTest(Global_1888862[iVar2 /*120*/].f_29, 11))
			{
				return 0;
			}
			if (__LIB_10__::func_226(iVar1))
			{
				return 0;
			}
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (__LIB_8__::func_260(iVar1))
				{
					return 0;
				}
				if (__LIB_8__::func_259(iVar1))
				{
					return 0;
				}
				if (__LIB_7__::func_726(iVar1))
				{
					return 0;
				}
				if (__LIB_6__::func_846(iVar1))
				{
					return 0;
				}
				if (__LIB_4__::func_954(iVar1))
				{
					return 0;
				}
				if (__LIB_4__::func_955(iVar1))
				{
					return 0;
				}
				if (__LIB_4__::func_947(iVar1))
				{
					return 0;
				}
				if (__LIB_4__::func_955(iVar1))
				{
					return 0;
				}
				if (__LIB_4__::func_900(iVar1))
				{
					return 0;
				}
				if (__LIB_4__::func_899(iVar1))
				{
					return 0;
				}
				if (__LIB_5__::func_409(iVar1))
				{
					return 0;
				}
				if (iVar1 != __LIB_0__::getMinusOneOrNull())
				{
					if (__LIB_2__::func_730(iVar1))
					{
						if (__LIB_1__::func_659(Global_2689235[iVar1 /*453*/].f_318.f_9))
						{
							return 0;
						}
					}
					if (__LIB_4__::func_952(iVar1))
					{
						if (__LIB_1__::func_645(Global_2689235[iVar1 /*453*/].f_318.f_9))
						{
							return 0;
						}
					}
					if (__LIB_4__::func_946(iVar1, 0))
					{
						if (__LIB_1__::func_637(Global_2689235[iVar1 /*453*/].f_318.f_9))
						{
							return 0;
						}
					}
				}
			}
			if (!__LIB_1__::func_693(iVar1, 0, 1))
			{
				return 0;
			}
			if (iVar1 != -1)
			{
				if (!__LIB_1__::func_831(iVar1) && !BitTest(Global_1853348[iVar1 /*834*/].f_139, 2))
				{
					return 0;
				}
			}
			if (__LIB_0__::func_361(iVar1, 0))
			{
				return 0;
			}
			if (__LIB_11__::func_680(iVar1, 0) && !__LIB_11__::func_679(iVar1))
			{
				if ((!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || __LIB_4__::func_976(PLAYER::PLAYER_ID(), 1)) || __LIB_1__::func_907(iVar1, 0))
				{
					return 0;
				}
			}
			if (__LIB_1__::func_201(iVar1))
			{
				return 0;
			}
			if (__LIB_4__::func_972(iVar1))
			{
				return 0;
			}
			if (BitTest(Global_1892703[iVar1 /*599*/].f_1, 14))
			{
				return 0;
			}
			if (BitTest(Global_1892703[iVar1 /*599*/].f_513, 3))
			{
				return 0;
			}
			if (BitTest(Global_2689235[iVar1 /*453*/].f_197, 29))
			{
				if (!__LIB_7__::func_827(PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
			if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (!__LIB_1__::func_29(iVar1, 1, 0))
				{
					return 0;
				}
			}
			if (__LIB_7__::func_246(iVar1))
			{
				return 0;
			}
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (__LIB_12__::func_116(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_12__::func_116(iVar1))
					{
						return 0;
					}
					else if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
					{
						return 0;
					}
				}
				else if (__LIB_12__::func_116(iVar1))
				{
					return 0;
				}
			}
			if (iParam1 == 3)
			{
				if (iVar1 == PLAYER::PLAYER_ID())
				{
					return 0;
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar1) < 1)
				{
					return 0;
				}
				if (((((((((((((((Global_1853348[iVar1 /*834*/] == 0 || Global_1853348[iVar1 /*834*/] == 1) || Global_1853348[iVar1 /*834*/] == 2) || Global_1853348[iVar1 /*834*/] == 3) || Global_1853348[iVar1 /*834*/] == 5) || Global_1853348[iVar1 /*834*/] == 8) || Global_1853348[iVar1 /*834*/] == 118) || Global_1853348[iVar1 /*834*/] == 11) || Global_1853348[iVar1 /*834*/] == 12) || Global_1853348[iVar1 /*834*/] == 13) || Global_1853348[iVar1 /*834*/] == 14) || Global_1853348[iVar1 /*834*/] == 15) || Global_1853348[iVar1 /*834*/] == 23) || Global_1853348[iVar1 /*834*/] == 59) || Global_1853348[iVar1 /*834*/] == 60) || Global_1853348[iVar1 /*834*/] == 148)
				{
					return 0;
				}
			}
			else
			{
				if (iVar1 == PLAYER::PLAYER_ID())
				{
					if (iParam1 == 5)
					{
						return 0;
					}
					if (iParam1 == 4)
					{
						return 0;
					}
					if (iParam2 || iParam3)
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
					if ((((((Var3.f_2 < -200f && !__LIB_1__::func_20(iVar1)) && !__LIB_8__::func_260(iVar1)) && !__LIB_4__::func_954(iVar1)) && !__LIB_6__::func_846(iVar1)) && !__LIB_2__::func_18(Global_4718592.f_168757)) && !__LIB_4__::func_955(iVar1))
					{
						return 0;
					}
				}
				if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 4)
				{
					if (__LIB_1__::func_20(iVar1))
					{
						return 0;
					}
				}
				if (bParam4)
				{
					if (!__LIB_1__::func_20(iVar1))
					{
						if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
						{
							if ((__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && !NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) && (__LIB_11__::func_678(iVar1) || __LIB_8__::func_148(iVar1)))
							{
							}
							else
							{
								return 0;
							}
						}
					}
					if (iVar2 > -1)
					{
						if (BitTest(Global_1853348[iVar2 /*834*/].f_139, 2))
						{
							return 0;
						}
					}
				}
			}
			return 1;
			break;
	}
	return 0;
}

void func_59(int* iParam0, var uParam1, int* iParam2, var uParam3, bool bParam4)//Position - 0x1F85
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bVar0 = false;
	bVar1 = false;
	bVar3 = false;
	if (bParam4)
	{
		iVar2 = iParam0->f_21;
		if (!BitTest(*iParam2, 10) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam2->f_13) > 1000)
		{
			bVar0 = true;
			if (BitTest(*uParam1, 3))
			{
				if (uParam1->f_4 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	else
	{
		iVar2 = iParam0->f_20;
		if (!BitTest(*iParam2, 9) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam2->f_12) > 1000)
		{
			bVar0 = true;
			if (!BitTest(*uParam1, 3))
			{
				if (uParam1->f_4 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		if (bVar3)
		{
			if (BitTest(uParam1->f_1, 2))
			{
				func_62(iParam2, iParam0, uParam3, bParam4);
				bVar1 = true;
			}
			else if (BitTest(uParam1->f_1, 3))
			{
				func_5(iParam2, iParam0, uParam3, bParam4);
				bVar1 = true;
			}
		}
		if (!bVar1)
		{
			if (func_4(iParam0, iParam2, uParam3, bParam4))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		__LIB_10__::func_763(iParam0, iParam2, bParam4);
	}
	bVar3 = false;
	if (bParam4)
	{
		if (BitTest(*uParam1, 3))
		{
			if (uParam1->f_5 == __LIB_10__::func_772(iParam0, uParam1))
			{
				bVar3 = true;
			}
		}
	}
	else if (!BitTest(*uParam1, 3))
	{
		if (uParam1->f_5 == __LIB_10__::func_772(iParam0, uParam1))
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		if (BitTest(uParam1->f_1, 4))
		{
			__LIB_10__::func_771(iParam0, 1, bParam4);
		}
		else if (BitTest(uParam1->f_1, 5))
		{
			__LIB_10__::func_771(iParam0, 0, bParam4);
		}
	}
}

void func_62(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x219D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (bParam3)
	{
		iVar0 = uParam1->f_21;
	}
	else
	{
		iVar0 = uParam1->f_20;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1++;
		if (iVar1 >= 9)
		{
			iVar1 = 0;
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else if (func_7(uParam0, iVar1, uParam2))
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		__LIB_10__::func_764(uParam1, iVar2, bParam3);
	}
}

void func_82()//Position - 0x2BFF
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_577))
	{
		STREAMING::REQUEST_MODEL(MISC::GET_HASH_KEY("ex_prop_tv_settop_remote"));
		if (!STREAMING::HAS_MODEL_LOADED(MISC::GET_HASH_KEY("ex_prop_tv_settop_remote")))
		{
			return;
		}
		iLocal_577 = OBJECT::CREATE_OBJECT_NO_OFFSET(MISC::GET_HASH_KEY("ex_prop_tv_settop_remote"), 956.145f, 33.085f, 115.634f, false, false, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_577, 956.145f, 33.085f, 115.634f, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_577, 0f, 0f, 76.525f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_577, true);
	}
}

void func_83(int* iParam0)//Position - 0x2C80
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_8__::func_356(iParam0, 0))
	{
		return;
	}
	bVar0 = __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), iParam0->f_15, (iParam0->f_18 + iParam0->f_20), 1);
	bVar1 = __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), iParam0->f_15, iParam0->f_18, 1);
	func_108(iParam0, bVar0);
	if (bVar1)
	{
		func_104(iParam0);
		__LIB_2__::func_486(iParam0, 4);
		if (func_102(iParam0->f_19))
		{
			func_98(iParam0);
		}
		func_94(iParam0);
	}
	else
	{
		func_93(iParam0);
		func_89(iParam0);
		__LIB_2__::func_487(iParam0, 5);
	}
	func_86(iParam0);
	func_85(iParam0);
	func_84(iParam0);
}

void func_84(int* iParam0)//Position - 0x2D1E
{
	if (!__LIB_8__::func_356(iParam0, 9))
	{
		return;
	}
	if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_11))
	{
		__LIB_2__::func_487(iParam0, 9);
	}
}

void func_85(int* iParam0)//Position - 0x2D48
{
	if (!__LIB_8__::func_356(iParam0, 6))
	{
		return;
	}
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0->f_8)) > 920)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iParam0->f_4, false);
		__LIB_2__::func_487(iParam0, 6);
	}
}

void func_86(int* iParam0)//Position - 0x2D84
{
	if (!__LIB_8__::func_356(iParam0, 3))
	{
		return;
	}
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0->f_7)) > 7000)
	{
		func_87(iParam0);
	}
}

void func_87(int* iParam0)//Position - 0x2DB6
{
	if (!__LIB_8__::func_356(iParam0, 3))
	{
		return;
	}
	GRAPHICS::STOP_PARTICLE_FX_LOOPED(iParam0->f_5, true);
	GRAPHICS::STOP_PARTICLE_FX_LOOPED(iParam0->f_6, true);
	__LIB_2__::func_487(iParam0, 3);
}

void func_89(int* iParam0)//Position - 0x2DF5
{
	if (!__LIB_8__::func_356(iParam0, 4))
	{
		return;
	}
	if (__LIB_8__::func_356(iParam0, 3))
	{
		iParam0->f_7 = NETWORK::GET_NETWORK_TIME();
	}
	func_90(iParam0);
	if (__LIB_8__::func_356(iParam0, 3))
	{
		__LIB_2__::func_487(iParam0, 4);
	}
}

void func_90(int* iParam0)//Position - 0x2E34
{
	if (__LIB_8__::func_356(iParam0, 3))
	{
		return;
	}
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
	{
		return;
	}
	func_91(iParam0);
	__LIB_2__::func_486(iParam0, 3);
	iParam0->f_7 = NETWORK::GET_NETWORK_TIME();
}

void func_91(int* iParam0)//Position - 0x2E6C
{
	iParam0->f_5 = func_92(18905);
	iParam0->f_6 = func_92(57005);
}

int func_92(int iParam0)//Position - 0x2E8B
{
	GRAPHICS::USE_PARTICLE_FX_ASSET("scr_apartment_mp");
	return GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_apa_jacuzzi_drips", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iParam0), 1f, false, false, false);
}

void func_93(int* iParam0)//Position - 0x2EBD
{
	if (!__LIB_8__::func_356(iParam0, 2))
	{
		return;
	}
	GRAPHICS::STOP_PARTICLE_FX_LOOPED(iParam0->f_3, true);
	__LIB_2__::func_487(iParam0, 2);
}

void func_94(int* iParam0)//Position - 0x2EE3
{
	func_97(iParam0);
	func_95(iParam0);
}

void func_95(int* iParam0)//Position - 0x2EF7
{
	struct<3> Var0;
	float fVar1;
	if (!func_96(iParam0))
	{
		return;
	}
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var0.f_2 = (iParam0->f_19 + 0.1f);
	fVar1 = 1f;
	switch (iParam0->f_9)
	{
		case 1:
			fVar1 = 1.25f;
			break;
		case 2:
			fVar1 = 1.66f;
			break;
		case 3:
			fVar1 = 2f;
			break;
	}
	GRAPHICS::USE_PARTICLE_FX_ASSET("scr_apartment_mp");
	iParam0->f_4 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_apa_jacuzzi_wade", Var0, 0f, 0f, 0f, fVar1, false, false, false, true);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_4, "size", 1f, true);
	iParam0->f_8 = NETWORK::GET_NETWORK_TIME();
	__LIB_2__::func_486(iParam0, 6);
	__LIB_2__::func_487(iParam0, 7);
}

bool func_96(int* iParam0)//Position - 0x2FAF
{
	return ((__LIB_8__::func_356(iParam0, 7) && !__LIB_8__::func_356(iParam0, 6)) && iParam0->f_9 > 0);
}

void func_97(int* iParam0)//Position - 0x2FD6
{
	char* sVar0;
	if (!__LIB_8__::func_356(iParam0, 8))
	{
		return;
	}
	__LIB_2__::func_486(iParam0, 7);
	AUDIO::STOP_SOUND(iParam0->f_10);
	sVar0 = "";
	switch (iParam0->f_9)
	{
		case 0:
			sVar0 = "FallingInWaterSmall";
			break;
		case 1:
			sVar0 = "FallingInWaterMedium";
			break;
		case 2:
			sVar0 = "FallingInWaterHeavy";
			break;
		case 3:
			sVar0 = "DiveInWater";
			break;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(iParam0->f_10, sVar0, PLAYER::PLAYER_PED_ID(), "PED_INSIDE_WATER", true, 0);
	__LIB_2__::func_487(iParam0, 8);
}

void func_98(int* iParam0)//Position - 0x305D
{
	if (!__LIB_8__::func_356(iParam0, 5))
	{
		func_101(iParam0);
		__LIB_2__::func_486(iParam0, 5);
		__LIB_2__::func_486(iParam0, 8);
		return;
	}
	func_100(iParam0);
	func_99(iParam0);
}

void func_99(int* iParam0)//Position - 0x3094
{
	if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (__LIB_8__::func_356(iParam0, 9))
	{
		return;
	}
	AUDIO::STOP_SOUND(iParam0->f_11);
	AUDIO::PLAY_SOUND_FROM_ENTITY(iParam0->f_11, "ExitWater", PLAYER::PLAYER_PED_ID(), "GTAO_Hot_Tub_PED_INSIDE_WATER", true, 0);
	__LIB_2__::func_486(iParam0, 9);
}

void func_100(int* iParam0)//Position - 0x30DD
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (!__LIB_8__::func_356(iParam0, 6) && AUDIO::HAS_SOUND_FINISHED(iParam0->f_10))
	{
		fVar1 = (Var0.f_2 - iParam0->f_12.f_2);
		if (fVar1 < -0.04f)
		{
			iParam0->f_9 = 0;
			if (fVar1 < -0.06f)
			{
				iParam0->f_9 = 1;
			}
			__LIB_2__::func_486(iParam0, 8);
		}
	}
	iParam0->f_12 = { Var0 };
	func_101(iParam0);
}

void func_101(int* iParam0)//Position - 0x314F
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
	fVar1 = MISC::ABSF(Var0.f_2);
	if (fVar1 > 5.5f)
	{
		iParam0->f_9 = 3;
	}
	else if (fVar1 > 4f)
	{
		iParam0->f_9 = 2;
	}
	else if (fVar1 > 2f)
	{
		iParam0->f_9 = 1;
	}
	else if (fVar1 > 0.5f)
	{
		iParam0->f_9 = 0;
	}
	else
	{
		iParam0->f_9 = -1;
	}
}

int func_102(float fParam0)//Position - 0x31B6
{
	int iVar0;
	struct<3> Var1;
	int iVar2[6];
	iVar2[0] = 14201;
	iVar2[1] = 52301;
	iVar2[2] = 61163;
	iVar2[3] = 28252;
	iVar2[4] = 0;
	iVar2[5] = 31086;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Var1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iVar2[iVar0])) };
		if (Var1.f_2 <= fParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_104(int* iParam0)//Position - 0x323E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (fVar3 > 0f)
	{
		Var5 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 14201)) };
		fVar6 = (iParam0->f_19 - iParam0->f_15.f_2);
		fVar2 = __LIB_3__::func_480(0f, MISC::ABSF((iParam0->f_19 - Var5.f_2)));
		fVar1 = (fVar2 / fVar6);
		fVar0 = __LIB_1__::func_712(1f, ((fVar1 + (fVar3 * 0.5f)) * 0.5f));
	}
	if (fVar3 > 0.1f && fVar0 > 0f)
	{
		Var7 = { Var4.f_0, Var4.f_1, iParam0->f_19 };
		func_105(iParam0, &Var7);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iParam0->f_3, Var7, 0f, 0f, 0f);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_3, "size", fVar0, true);
	}
	else
	{
		func_93(iParam0);
	}
}

void func_105(int* iParam0, var uParam1)//Position - 0x330B
{
	if (__LIB_8__::func_356(iParam0, 2))
	{
		return;
	}
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
	{
		return;
	}
	GRAPHICS::USE_PARTICLE_FX_ASSET("scr_apartment_mp");
	iParam0->f_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_apa_jacuzzi_wade", *uParam1, 0f, 0f, 0f, 1f, false, false, false, true);
	__LIB_2__::func_486(iParam0, 2);
}

void func_108(int* iParam0, bool bParam1)//Position - 0x3381
{
	if (bParam1)
	{
		if (iParam0->f_10 == -1)
		{
			iParam0->f_10 = AUDIO::GET_SOUND_ID();
		}
		if (iParam0->f_11 == -1)
		{
			iParam0->f_11 = AUDIO::GET_SOUND_ID();
		}
		return;
	}
	if (iParam0->f_10 != -1)
	{
		AUDIO::RELEASE_SOUND_ID(iParam0->f_10);
		iParam0->f_10 = -1;
	}
	if (iParam0->f_11 != -1)
	{
		AUDIO::RELEASE_SOUND_ID(iParam0->f_11);
		iParam0->f_11 = -1;
	}
}

void func_110()//Position - 0x33F9
{
	int iVar0;
	var uVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	Local_131[iVar0 /*10*/].f_9 = !__LIB_0__::func_137(4328, -1);
	uVar1 = Local_131[iVar0 /*10*/].f_9;
	iVar2 = __LIB_7__::func_826();
	if (iVar2 != __LIB_0__::getMinusOneOrNull())
	{
		uVar1 = Local_131[iVar2 /*10*/].f_9;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_578, 2.9f, 1) && uVar1)
	{
		Global_32228 = 1;
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 15);
		func_525(&uLocal_600, Local_130.f_24, 1);
	}
	else
	{
		Global_32228 = 0;
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 15);
		func_111(&uLocal_600, 1);
	}
}

int func_111(var uParam0, bool bParam1)//Position - 0x34B2
{
	if (BitTest(uParam0->f_1, 0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			uParam0->f_2 = 0;
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_4__::func_971() != 0)
			{
				func_464(__LIB_4__::func_971(), 1, 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 2);
				MISC::CLEAR_BIT(&(uParam0->f_1), 1);
			}
			else if (__LIB_2__::func_159(0) && __LIB_4__::func_971() != 0)
			{
				__LIB_11__::func_671(0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 2);
				MISC::CLEAR_BIT(&(uParam0->f_1), 1);
			}
			else if (BitTest(uParam0->f_1, 2) || BitTest(uParam0->f_1, 1))
			{
				__LIB_11__::func_671(1);
				func_332(-1, 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 2);
				MISC::CLEAR_BIT(&(uParam0->f_1), 1);
			}
			else
			{
				if (bParam1)
				{
					if (!__LIB_12__::func_411(PLAYER::PLAYER_PED_ID(), 20, 1))
					{
						return 0;
					}
				}
				func_255(PLAYER::PLAYER_PED_ID(), 20, 0, 1);
				__LIB_12__::func_410(20, 1);
				func_236(PLAYER::PLAYER_PED_ID(), 11, __LIB_0__::func_350(PLAYER::PLAYER_PED_ID(), 11), 0, 0);
				func_112(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Clothes_On", PLAYER::PLAYER_PED_ID(), "GTAO_Hot_Tub_Sounds", false, 0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x35F4
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
		bVar3 = func_230(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_150(iParam0, iParam3);
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

int func_150(int iParam0, int iParam1)//Position - 0x127C0
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
				iVar3 = func_155(iParam0, 11, -1);
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
				iVar5 = func_155(iParam0, 11, -1);
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

int func_155(int iParam0, int iParam1, int iParam2)//Position - 0x13048
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
				if (func_162(iParam0, iParam1, iVar0))
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
				if (func_162(iParam0, iParam1, iVar1))
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

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x13509
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
				if (!func_162(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_162(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_162(iParam0, 14, iVar6))
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
			if (!func_162(iParam0, 14, uVar11[iVar10]))
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
						return func_162(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_162(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_230(int iParam0, bool bParam1)//Position - 0x32795
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_155(iParam0, 11, -1), 0);
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
						iVar3 = func_155(iParam0, 11, -1);
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
						iVar5 = func_155(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_155(iParam0, 11, -1), 0);
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
						iVar8 = func_155(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_155(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_155(iParam0, 11, -1), 0);
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
						iVar12 = func_155(iParam0, 8, -1);
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

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x33912
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_248(iParam0))
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

int func_248(int iParam0)//Position - 0x34A41
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_155(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_155(iParam0, 11, -1);
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

void func_255(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x34ECD
{
	bool bVar0;
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
	bVar0 = false;
	if (((iParam1 >= 0 && iParam1 < 21) && Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2305[iParam1]) && iParam3 == iParam1 == 20)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar1] != -1)
			{
				if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar1] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar1) || Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][iVar1] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar1, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar1]))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					iVar2 = 0;
					while (iVar2 < 12)
					{
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar2] != -1)
						{
							if (iVar2 != 1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar2], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][iVar2], 0);
							}
							else
							{
								iVar4 = __LIB_0__::func_206(iParam0, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][iVar2], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][iVar2], 1);
								func_261(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
						iVar2++;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
					PED::CLEAR_ALL_PED_PROPS(iParam0);
					iVar3 = 0;
					while (iVar3 < 9)
					{
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][iVar3] != -1)
						{
							if (iVar3 == 0 && __LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, __LIB_0__::func_349(iParam0, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][iVar3], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2094[iParam1 /*10*/][iVar3], 0), -1))
							{
								iVar5 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][iVar3];
								iVar6 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2094[iParam1 /*10*/][iVar3];
								iVar7 = FILES::GET_HASH_NAME_FOR_PROP(PLAYER::PLAYER_PED_ID(), 0, iVar5, iVar6);
								if (FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(iVar7) > 0 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("ALT_HELMET"), 1) != __LIB_12__::func_427(-1))
								{
									iVar8 = 0;
									iVar9 = -99;
									__LIB_12__::func_697(iVar7, 0, &iVar5, &iVar6, &iVar8, &iVar9);
								}
								PED::SET_PED_PROP_INDEX(iParam0, iVar3, iVar5, iVar6, true);
								PED::SET_PED_HELMET_PROP_INDEX(iParam0, iVar5, false);
								PED::SET_PED_HELMET_TEXTURE_INDEX(iParam0, iVar6);
								__LIB_3__::func_335(iParam0, iVar5, iVar6, 1);
							}
							else
							{
								PED::SET_PED_PROP_INDEX(iParam0, iVar3, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1883[iParam1 /*10*/][iVar3], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2094[iParam1 /*10*/][iVar3], true);
							}
						}
						iVar3++;
					}
					if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][5] != 0)
					{
						PED::SET_PED_RESET_FLAG(iParam0, 177, true);
						Global_2815059.f_287 = 1;
						func_256(3782, 1, -1);
					}
					else
					{
						Global_2815059.f_287 = 0;
						func_256(3782, 0, -1);
					}
					if (NETWORK::NETWORK_PLAYER_IS_CHEATER() || NETWORK::NETWORK_PLAYER_IS_BADSPORT())
					{
						if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_M_Freemode_01"))
						{
							func_261(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							func_261(PLAYER::PLAYER_PED_ID(), 14, 18, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						else
						{
							func_261(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							func_261(PLAYER::PLAYER_PED_ID(), 14, 18, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					if (!bParam2)
					{
						iVar10 = __LIB_0__::func_266(__LIB_1__::func_360(1759, -1, 0), __LIB_0__::func_276(iParam0));
						if (iVar10 != -1)
						{
							__LIB_2__::func_978(iVar10, 0, -1);
						}
						iVar10 = __LIB_0__::func_266(Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2628[iParam1], __LIB_0__::func_276(iParam0));
						if (iVar10 != -1)
						{
							__LIB_1__::func_354(1759, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2628[iParam1], -1, 1, 0);
							__LIB_2__::func_978(iVar10, 1, -1);
						}
						iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][11], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][11]);
						iVar12 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][8], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][8]);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("MULTI_DECAL"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("MULTI_DECAL"), 0))
						{
							iVar13 = __LIB_0__::func_206(iParam0, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][11], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][11], 11);
							iVar10 = __LIB_5__::func_29(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar13, 0);
							if (iVar10 != -1)
							{
								__LIB_2__::func_978(iVar10, 1, -1);
							}
							else
							{
								iVar13 = __LIB_0__::func_206(iParam0, Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1335[iParam1 /*13*/][8], Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1609[iParam1 /*13*/][8], 8);
								iVar10 = __LIB_5__::func_29(ENTITY::GET_ENTITY_MODEL(iParam0), 8, iVar13, 0);
								if (iVar10 != -1)
								{
									__LIB_2__::func_978(iVar10, 1, -1);
								}
							}
						}
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2327[iParam1])
						{
							__LIB_2__::func_978(13, 1, -1);
							__LIB_2__::func_720(14, 0, -1);
							__LIB_2__::func_720(15, 0, -1);
							__LIB_2__::func_720(16, 0, -1);
							__LIB_2__::func_720(71, 0, -1);
							__LIB_2__::func_720(72, 0, -1);
						}
						else
						{
							__LIB_2__::func_978(13, 0, -1);
						}
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2349[iParam1])
						{
							__LIB_2__::func_720(13, 0, -1);
							__LIB_2__::func_978(14, 1, -1);
							__LIB_2__::func_720(15, 0, -1);
							__LIB_2__::func_720(16, 0, -1);
							__LIB_2__::func_720(71, 0, -1);
							__LIB_2__::func_720(72, 0, -1);
						}
						else
						{
							__LIB_2__::func_978(14, 0, -1);
						}
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2371[iParam1])
						{
							__LIB_2__::func_720(13, 0, -1);
							__LIB_2__::func_720(14, 0, -1);
							__LIB_2__::func_978(15, 1, -1);
							__LIB_2__::func_720(16, 0, -1);
							__LIB_2__::func_720(71, 0, -1);
							__LIB_2__::func_720(72, 0, -1);
						}
						else
						{
							__LIB_2__::func_978(15, 0, -1);
						}
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2393[iParam1])
						{
							__LIB_2__::func_720(13, 0, -1);
							__LIB_2__::func_720(14, 0, -1);
							__LIB_2__::func_720(15, 0, -1);
							__LIB_2__::func_978(16, 1, -1);
							__LIB_2__::func_720(71, 0, -1);
							__LIB_2__::func_720(72, 0, -1);
						}
						else
						{
							__LIB_2__::func_978(16, 0, -1);
						}
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2415[iParam1])
						{
							__LIB_2__::func_720(13, 0, -1);
							__LIB_2__::func_720(14, 0, -1);
							__LIB_2__::func_720(15, 0, -1);
							__LIB_2__::func_720(16, 0, -1);
							__LIB_2__::func_978(71, 1, -1);
							__LIB_2__::func_720(72, 0, -1);
						}
						else
						{
							__LIB_2__::func_978(71, 0, -1);
						}
						if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2437[iParam1])
						{
							__LIB_2__::func_720(13, 0, -1);
							__LIB_2__::func_720(14, 0, -1);
							__LIB_2__::func_720(15, 0, -1);
							__LIB_2__::func_720(16, 0, -1);
							__LIB_2__::func_720(71, 0, -1);
							__LIB_2__::func_978(72, 1, -1);
						}
						else
						{
							__LIB_2__::func_978(72, 0, -1);
						}
					}
				}
			}
void func_256(int iParam0, bool bParam1, int iParam2)//Position - 0x3567D
{
	if (iParam2 == -1)
	{
		iParam2 = __LIB_0__::getGlobal_1574918();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x35927
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
			func_327(iVar5, iParam1, iParam2, 1);
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
						func_327(iVar5, 10, 0, 1);
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
									func_327(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_261(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_327(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_155(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_261(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_236(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_327(iVar5, 14, uVar18[iVar1], 1);
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
							func_261(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_327(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_261(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_317(iParam0);
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
						func_261(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_261(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_316(iVar5, iVar24, iVar23, iVar25);
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
							func_261(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_261(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_261(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_261(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_261(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_261(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_261(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_236(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_316(iVar5, func_155(iParam0, 8, -1), iParam2, func_155(iParam0, 4, -1));
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
				func_302(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_316(iVar5, iParam2, iVar44, iVar45);
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
			func_236(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_316(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_261(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_261(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_316(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_316(iVar5, iVar58, iVar57, iParam2);
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
						func_261(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_316(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_261(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_162(iParam0, 9, iVar63))
						{
							func_261(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_261(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_261(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_261(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_155(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_155(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_261(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_261(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_261(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_261(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_261(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_261(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_261(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_261(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_261(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_261(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_317(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_261(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_261(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_262(iParam0, &uVar4))
		{
			func_261(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_261(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_261(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_261(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_155(iParam0, 3, -1), iVar10);
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
				func_261(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_262(int iParam0, var uParam1)//Position - 0x377D1
{
	int iVar0;
	int iVar1;
	*uParam1 = func_155(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_162(iParam0, iVar1, iVar0))
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

void func_302(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x420A6
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
	func_112(iParam0, bParam3, 0, -1);
}

int func_316(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x49FCE
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
					iVar0 = func_316(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_316(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_317(int iParam0)//Position - 0x4B309
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
		if (!func_322(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_322(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_322(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4BCD3
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_155(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_327(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E747
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
							func_327(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_327(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_327(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_327(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_327(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_327(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_327(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_327(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_327(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_327(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_332(int iParam0, bool bParam1)//Position - 0x4FC16
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_452(iParam0, bParam1))
		{
			bVar0 = false;
			if (__LIB_5__::func_723())
			{
				bVar0 = true;
			}
			func_358(0);
			if (bVar0)
			{
				iVar1 = __LIB_1__::func_360(2042, -1, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar1));
				func_353(1);
			}
		}
		if ((iParam0 == 2 || iParam0 == 1) || bParam1)
		{
			Global_2824753 = 0;
			Global_2824753.f_1 = 0;
			Global_2824753.f_24 = 0;
			iVar3 = 0;
			while (iVar3 < 8)
			{
				Global_2824753.f_2[iVar3] = 0;
				Global_2824753.f_15[iVar3] = 0;
				Global_2824753.f_27[iVar3 /*13*/] = { Var2 };
				iVar3++;
			}
			Global_2824753.f_12 = 0;
			Global_2813819 = 0;
			Global_2813820 = 0;
		}
		else if (__LIB_2__::func_159(0))
		{
			if (__LIB_0__::func_983() || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				Global_2824753 = __LIB_4__::func_971();
			}
		}
		func_345(0);
		__LIB_11__::func_844(0);
		__LIB_11__::func_843(0);
		__LIB_11__::func_671(0);
		if (__LIB_12__::func_312(joaat("GADGET_PARACHUTE"), -1))
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		}
	}
	else
	{
		__LIB_11__::func_670(13);
	}
}

void func_345(int iParam0)//Position - 0x50C7E
{
	int iVar0;
	if (__LIB_2__::func_159(0))
	{
		iVar0 = __LIB_5__::func_724(__LIB_0__::func_797(), PLAYER::PLAYER_ID());
		if (iVar0 > -1 && iVar0 < 8)
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_3[iVar0] = iParam0;
		}
	}
}

void func_353(bool bParam0)//Position - 0x50E50
{
	int iVar0;
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		if (__LIB_0__::func_137(3610, -1))
		{
		}
		iVar0 = __LIB_1__::func_360(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (__LIB_2__::func_159(0))
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		}
		else
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_12__::func_412(Global_2824753), 0);
		}
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_356(__LIB_1__::func_360(2042, -1, 0), 1);
		Global_2815059.f_287 = 1;
		func_354(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_354(int iParam0, int iParam1, int iParam2)//Position - 0x50F29
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		if (iParam2 == -1)
		{
			iParam2 = __LIB_1__::func_360(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = __LIB_1__::func_360(586, -1, 0);
		}
		if (__LIB_2__::func_159(1) && __LIB_3__::func_140(iParam0))
		{
			__LIB_3__::func_340(iParam0, __LIB_12__::func_412(Global_2824753), 0);
		}
		else
		{
			__LIB_3__::func_340(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			__LIB_3__::func_340(iParam0, Global_1836612, 1);
		}
		__LIB_0__::func_440(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

void func_356(int iParam0, int iParam1)//Position - 0x5103E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		__LIB_1__::func_354(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iParam0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iParam0), false);
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_354(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

void func_358(int iParam0)//Position - 0x5117C
{
	struct<50> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
		Var0 = 12;
		Var0.f_13 = 12;
		Var0.f_26 = 12;
		Var0.f_39 = 9;
		Var0.f_49 = 9;
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
		PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
		PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
		__LIB_11__::func_800(&Var0, -1);
		func_362(PLAYER::PLAYER_PED_ID(), &Var0, 0, 0, 1, iParam0);
		iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SHRINK_HEAD"), 0))
		{
			iVar2 = __LIB_1__::func_360(2100, -1, 0);
			iVar3 = __LIB_1__::func_360(2101, -1, 0);
			iVar4 = __LIB_1__::func_360(2102, -1, 0);
			fVar5 = __LIB_1__::func_680(135, -1);
			iVar6 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
			if (iVar6 == joaat("MP_M_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 0, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			else if (iVar6 == joaat("MP_F_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 21, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			iVar7 = 0;
			while (iVar7 < 20)
			{
				PED::SET_PED_MICRO_MORPH(PLAYER::PLAYER_PED_ID(), iVar7, 0f);
				iVar7++;
			}
		}
		else
		{
			__LIB_2__::func_996(PLAYER::PLAYER_PED_ID(), -1);
		}
		func_361(0);
		func_112(PLAYER::PLAYER_PED_ID(), 0, 1, -1);
		__LIB_10__::func_577(-1326764176, __LIB_5__::func_410(1, 1));
	}
}

void func_361(int iParam0)//Position - 0x513BC
{
	struct<14> Var0;
	int iVar1;
	if (func_155(PLAYER::PLAYER_PED_ID(), 14, 0) != -99)
	{
		Var0 = { __LIB_6__::func_38(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_155(PLAYER::PLAYER_PED_ID(), 14, 0), -1) };
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || iParam0 == 1)
		{
			if (iParam0 == 0)
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			switch (MISC::GET_HASH_KEY(&(Var0.f_8)))
			{
				case joaat("CLO_BUS_P_1_0"):
				case joaat("CLO_BUS_P_1_1"):
				case joaat("CLO_BUS_P_1_2"):
				case joaat("CLO_BUS_P_1_3"):
				case joaat("CLO_BUS_P_1_4"):
				case joaat("CLO_BUS_P_1_5"):
				case joaat("CLO_BUS_P_1_6"):
				case joaat("CLO_BUS_P_1_7"):
				case joaat("CLO_BUS_P_1_8"):
				case joaat("CLO_BUS_P_1_9"):
				case joaat("CLO_BUS_P_1_10"):
				case joaat("CLO_BUS_P_1_11"):
				case joaat("CLO_BUS_P_1_12"):
				case joaat("CLO_BUS_P_1_13"):
				case joaat("CLO_X2M_HT_0_0"):
				case joaat("CLO_X2M_HT_0_1"):
				case joaat("CLO_X2M_HT_0_2"):
				case joaat("CLO_X2M_HT_0_3"):
				case joaat("CLO_X2M_HT_0_4"):
				case joaat("CLO_X2M_HT_0_5"):
				case joaat("CLO_X2M_HT_0_6"):
				case joaat("CLO_X2M_HT_0_7"):
				case joaat("CLO_X2F_HT_0_0"):
				case joaat("CLO_X2F_HT_0_1"):
				case joaat("CLO_X2F_HT_0_2"):
				case joaat("CLO_X2F_HT_0_3"):
				case joaat("CLO_X2F_HT_0_4"):
				case joaat("CLO_X2F_HT_0_5"):
				case joaat("CLO_X2F_HT_0_6"):
				case joaat("CLO_X2F_HT_0_7"):
				case joaat("HT_FMM_13_0"):
				case joaat("HT_FMM_13_1"):
				case joaat("HT_FMM_13_2"):
				case joaat("HT_FMM_13_3"):
				case joaat("HT_FMM_13_4"):
				case joaat("HT_FMM_13_5"):
				case joaat("HT_FMM_13_6"):
				case joaat("HT_FMM_13_7"):
				case joaat("CLO_BBF_P2_0"):
				case joaat("CLO_BBF_P2_1"):
				case joaat("CLO_BBF_P2_2"):
				case joaat("CLO_BBF_P2_3"):
				case joaat("CLO_BBF_P2_4"):
				case joaat("CLO_BBF_P2_5"):
				case joaat("CLO_BBF_P2_6"):
					if (iParam0 == 0)
					{
						if (VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar1))
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					else
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				}
		}
	}
}

void func_362(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x51563
{
	int iVar0;
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
		iVar0 = __LIB_0__::func_216(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_439(iParam0, iVar1, &iVar2, 0))
			{
				func_424(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_365(iParam0, iVar1, &iVar2))
			{
				func_424(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_248(iParam0);
			__LIB_1__::func_354(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_354(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_261(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_261(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_261(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_1__::func_354(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_354(2053, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_348(161, 1, -1, 1);
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

int func_365(int iParam0, int iParam1, int iParam2)//Position - 0x51A3F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_366(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0, int iParam1, int iParam2)//Position - 0x51ACB
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
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar0, iParam1, iParam2, -1) };
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
				if (!func_366(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_366(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_366(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, iVar2, iVar1, -1) };
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
			if (!func_366(iParam0, 14, uVar8[iVar7]))
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

int func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x64558
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
		Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_3__::func_367(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_3__::func_367(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_424(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_3__::func_367(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_16__::func_225(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_424(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, func_428(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_439(iParam0, iVar10, &iVar4, 1))
							{
								func_424(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_424(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_12__::func_14(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_424(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_424(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_424(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_424(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_424(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_3__::func_367(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_424(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_3__::func_367(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_424(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_424(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_13__::func_589(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_439(iParam0, iVar10, &iVar4, 0))
		{
			func_424(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_365(iParam0, iVar10, &iVar4))
		{
			func_424(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_428(int iParam0, int iParam1, int iParam2)//Position - 0x64EF8
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
				if (func_366(iParam0, iParam1, iVar0))
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
				if (func_366(iParam0, iParam1, iVar1))
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

int func_439(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66BB5
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_366(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_452(int iParam0, bool bParam1)//Position - 0x67157
{
	if (__LIB_12__::func_452())
	{
		return 0;
	}
	if (Global_2815059.f_888 == 1)
	{
		return 0;
	}
	if (Global_2779522.f_7)
	{
		return 0;
	}
	if (__LIB_3__::func_140(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_0__::func_983())
	{
		if (Global_2824753 != 0)
		{
			if (iParam0 == 2)
			{
				return 1;
			}
			if (iParam0 == 1)
			{
				return 1;
			}
			if (bParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_464(int iParam0, int iParam1, bool bParam2)//Position - 0x6734F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<10> Var4;
	if ((!__LIB_3__::func_140(PLAYER::PLAYER_ID()) || !__LIB_12__::func_717(iParam0)) || iParam1)
	{
		iVar0 = __LIB_3__::func_355(iParam0, PLAYER::PLAYER_ID());
		if ((__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull() && !__LIB_12__::func_416()) && !__LIB_12__::func_415())
		{
			if (!__LIB_1__::func_375(1))
			{
				STATS::CHANGE_UNIFORM(__LIB_2__::func_477(__LIB_0__::func_797()), __LIB_2__::func_552(__LIB_0__::func_797()), iParam0);
			}
			if (iVar0 == 0)
			{
				func_512(1, 1);
			}
			else
			{
				iVar1 = -1;
				iVar2 = __LIB_7__::func_52();
				if (__LIB_12__::func_413(iVar0))
				{
					iVar1 = 0;
				}
				bVar3 = true;
				if (__LIB_5__::func_723() && !bParam2)
				{
					bVar3 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
					{
						Global_2824753.f_13 = 1;
					}
				}
				PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
				Var4.f_1 = -1;
				Var4.f_2 = -1;
				Var4.f_3 = -1;
				Var4.f_4 = -1;
				Var4.f_8 = -1;
				Var4.f_9 = 50;
				Var4.f_0 = PLAYER::PLAYER_PED_ID();
				Var4.f_1 = iVar0;
				Var4.f_8 = -1;
				Var4.f_6 = 1;
				func_466(&Var4, __LIB_3__::func_353(iVar0), 0, 1, 1, bVar3, 0, iVar2, iVar1, __LIB_3__::func_352(iVar0));
				__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_12__::func_412(iParam0), 0);
				__LIB_12__::func_428(PLAYER::PLAYER_PED_ID());
				__LIB_10__::func_577(-1326764176, __LIB_5__::func_410(1, 1));
			}
		}
	}
}

int func_466(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6763B
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
									func_354(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_483(*uParam0))
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
										func_475(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_475(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_317(*uParam0);
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
											func_261(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_261(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_261(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_261(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_469(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_112(*uParam0, bVar24, 0, iVar25);
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

void func_469(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x68C29
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
		bVar2 = func_230(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_150(iParam0, iParam3);
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

void func_475(int iParam0, int iParam1, int iParam2)//Position - 0x691CF
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
			func_476(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_155(iParam0, 7, -1), -1))
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

void func_476(int iParam0)//Position - 0x693DB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_477(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_477(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x69470
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
					func_261(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_261(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_483(int iParam0)//Position - 0x69B23
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_155(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

void func_512(int iParam0, int iParam1)//Position - 0x736DC
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (__LIB_5__::func_723())
	{
		bVar0 = true;
	}
	func_358(0);
	if (iParam1 == 0)
	{
		if (iParam0 == 0)
		{
		}
		__LIB_11__::func_843(0);
		Global_2824753 = 0;
		__LIB_11__::func_844(0);
		Global_2824753.f_1 = 0;
		func_345(0);
		func_514(0);
		__LIB_11__::func_671(0);
		Global_2824753.f_12 = 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_12__::func_414(Global_4718592.f_116524))
		{
			if (BitTest(Global_4718592.f_23, 24))
			{
				if (__LIB_3__::func_521(PLAYER::PLAYER_PED_ID(), 3, -1))
				{
					func_477(PLAYER::PLAYER_PED_ID(), 3, -1, -1);
				}
			}
		}
	}
	__LIB_12__::func_428(PLAYER::PLAYER_PED_ID());
	__LIB_10__::func_577(-1326764176, __LIB_5__::func_410(1, 1));
	if (bVar0)
	{
		iVar1 = __LIB_1__::func_360(2042, -1, 0);
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar1));
		func_353(1);
	}
}

void func_514(int iParam0)//Position - 0x737DE
{
	int iVar0;
	if (__LIB_1__::func_375(0))
	{
		iVar0 = __LIB_5__::func_724(__LIB_0__::func_797(), PLAYER::PLAYER_ID());
		if (iVar0 > -1 && iVar0 < 8)
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_11[iVar0] = iParam0;
		}
	}
}

void func_525(var uParam0, int iParam1, bool bParam2)//Position - 0x7432F
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (BitTest(uParam0->f_1, 0))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_16__::func_201(iParam1, &iVar4, &iVar5);
		if (!bParam2)
		{
			*uParam0 = 1;
		}
		switch (*uParam0)
		{
			case 0:
				__LIB_12__::func_436(PLAYER::PLAYER_PED_ID(), 20, 1, 1);
				*uParam0 = 0;
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					if (__LIB_4__::func_971() != 0)
					{
						MISC::SET_BIT(&(uParam0->f_1), 2);
					}
				}
				else if (__LIB_2__::func_159(0))
				{
					if (__LIB_4__::func_971() != 0)
					{
						MISC::SET_BIT(&(uParam0->f_1), 1);
					}
				}
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case joaat("MP_M_Freemode_01"):
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_APA_M_FEET_1_0"), &Var0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, Var0.f_3, Var0.f_4);
						if (!__LIB_16__::func_200(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, iVar4, 0);
						}
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 15, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 15, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 15, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
						iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
						iVar2 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
						iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 7, iVar1, iVar2);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("CHAIN"), 0))
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ALT_CHAIN"), 0))
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, iVar1, iVar2);
						}
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 1, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
						break;
					case joaat("MP_F_Freemode_01"):
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_APA_F_FEET_1_0"), &Var0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, Var0.f_3, Var0.f_4);
						if (!__LIB_16__::func_199(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, iVar4, 0);
							uParam0->f_2 = 1;
						}
						iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11);
						iVar2 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 11);
						iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 11, iVar1, iVar2);
						if (iVar1 != iVar5 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRAW_15"), 0))
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, iVar5, 0);
							uParam0->f_2 = 1;
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ALT_CHAIN"), 0))
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, iVar1, iVar2);
						}
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 15, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 3, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
						iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
						iVar2 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
						iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 7, iVar1, iVar2);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("CHAIN"), 0))
						{
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
						}
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 1, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
						break;
				}
				*uParam0++;
				return;
				break;
			case 1:
				if (!bParam2 || PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
					{
						case joaat("MP_M_Freemode_01"):
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_APA_M_FEET_1_0"), &Var0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, Var0.f_3, Var0.f_4, 0);
							if (!__LIB_16__::func_200(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, iVar4, 0, 0);
							}
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 15, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 15, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 15, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
							iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
							iVar2 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
							iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 7, iVar1, iVar2);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("CHAIN"), 0))
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
							}
							else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ALT_CHAIN"), 0))
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, iVar1, iVar2, 0);
							}
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
							break;
						case joaat("MP_F_Freemode_01"):
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_APA_F_FEET_1_0"), &Var0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, Var0.f_3, Var0.f_4, 0);
							if (!__LIB_16__::func_199(PLAYER::PLAYER_PED_ID()) || uParam0->f_2)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, iVar4, 0, 0);
							}
							iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11);
							iVar2 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 11);
							iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 11, iVar1, iVar2);
							if ((iVar1 != iVar5 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRAW_15"), 0)) || uParam0->f_2)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, iVar5, 0, 0);
							}
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 15, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
							iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
							iVar2 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 7);
							iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 7, iVar1, iVar2);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("CHAIN"), 0))
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
							}
							else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("ALT_CHAIN"), 0))
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, iVar1, iVar2, 0);
							}
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
							break;
					}
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
					iVar6 = __LIB_1__::func_360(2153, -1, 0);
					iVar7 = __LIB_1__::func_360(2160, -1, 0);
					if (__LIB_1__::func_342(161, -1))
					{
						iVar8 = __LIB_1__::func_360(2053, Global_78127, 0);
					}
					else
					{
						iVar8 = __LIB_1__::func_360(753, Global_78127, 0);
					}
					if (iVar8 != -99)
					{
						func_261(PLAYER::PLAYER_PED_ID(), 2, iVar8, 0, -1, 0, 0, 0, iVar6, iVar7, -1, 1, 0, 0);
					}
					func_112(PLAYER::PLAYER_PED_ID(), 1, 0, -1);
					*uParam0++;
					*uParam0 = 0;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Clothes_Off", PLAYER::PLAYER_PED_ID(), "GTAO_Hot_Tub_Sounds", false, 0);
					MISC::SET_BIT(&(uParam0->f_1), 0);
					return;
				}
				break;
			}
	}
	if (!bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1), 0);
	}
}

void func_534()//Position - 0x752FB
{
	int iVar0;
	if (Local_131[PLAYER::PLAYER_ID() /*10*/].f_8 != 0 && __LIB_16__::func_211(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
	{
		if (((((((func_5626(&Local_135, 0, 0, 0) || func_5626(&Local_135, 1, 0, 0)) || func_5626(&Local_135, 2, 0, 0)) || func_5626(&Local_135, 3, 0, 0)) || func_5626(&Local_135, 4, 0, 0)) || func_5626(&Local_135, 5, 0, 0)) || func_5626(&Local_135, 6, 0, 0)) || func_5626(&Local_135, 7, 0, 0))
		{
			if (((func_5626(&Local_135, 2, 0, 0) || func_5626(&Local_135, 3, 0, 0)) || func_5626(&Local_135, 6, 0, 0)) || (func_5626(&Local_135, 7, 0, 0) && !Global_262145.f_27059 /* Tunable: VC_PENTHOUSE_DISABLE_DCTL */))
			{
				MISC::SET_BIT(&Local_132, 30);
			}
			else
			{
				MISC::CLEAR_BIT(&Local_132, 30);
				if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3, 0))
				{
					__LIB_10__::func_872(0, 1);
					__LIB_10__::func_871(0);
				}
			}
			if (!BitTest(Local_131[PLAYER::PLAYER_ID() /*10*/], 2))
			{
				MISC::SET_BIT(&(Local_131[PLAYER::PLAYER_ID() /*10*/]), 2);
				MISC::CLEAR_BIT(&(Local_131[PLAYER::PLAYER_ID() /*10*/]), 1);
				Local_131[PLAYER::PLAYER_ID() /*10*/].f_6 = Local_135.f_9;
				__LIB_10__::func_777(&(Local_131[PLAYER::PLAYER_ID() /*10*/]), 2);
			}
			switch (Local_131[PLAYER::PLAYER_ID() /*10*/].f_8)
			{
				case 2:
					iVar0 = 202;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						iVar0 = 225;
					}
					if (((((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar0) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) && !__LIB_1__::func_512()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_77(0)) && !__LIB_0__::func_877()) && !BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3, 3)) && !BitTest(Global_1931419, 2))
					{
						__LIB_10__::func_777(&(Local_131[PLAYER::PLAYER_ID() /*10*/]), 1);
						MISC::CLEAR_BIT(&(Local_131[PLAYER::PLAYER_ID() /*10*/]), 2);
						Local_131[PLAYER::PLAYER_ID() /*10*/].f_6 = -1;
						__LIB_10__::func_777(&(Local_131[PLAYER::PLAYER_ID() /*10*/]), 1);
						__LIB_3__::func_122(&(Local_132.f_3));
						__LIB_16__::func_214(&Local_135);
						if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3, 0))
						{
							__LIB_10__::func_872(0, 1);
							__LIB_10__::func_871(0);
						}
					}
					__LIB_16__::func_213(&Local_135);
					__LIB_16__::func_212(&Local_135);
					break;
				case 3:
				case 1:
					__LIB_16__::func_212(&Local_135);
					func_5615(&Local_135);
					break;
				}
			}
	}
	if (__LIB_16__::func_211(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
	{
		func_535(&Local_130, &(Local_131[PLAYER::PLAYER_ID() /*10*/]), &Local_132, &Global_4194304);
	}
}

void func_535(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x755A7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!BitTest(Global_1931419, 2))
	{
		if ((((((((((((((!Global_1931426 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !BitTest(Global_2703735.f_876.f_4, 0)) && !BitTest(Global_2621446, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && ((__LIB_1__::func_864(PLAYER::PLAYER_ID()) && __LIB_10__::func_973(uParam3)) || (__LIB_5__::func_409(PLAYER::PLAYER_ID()) && __LIB_10__::func_874()))) && !__LIB_0__::func_877()) && !__LIB_10__::func_873()) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__::func_193()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) <= 0.001f)
		{
			bVar1 = __LIB_11__::func_789(&iVar0);
			if ((__LIB_5__::func_409(PLAYER::PLAYER_ID()) && Global_1579064 == 0) || Global_1579064 == 1)
			{
				iVar0++;
			}
			if (iVar0 >= 3)
			{
				__LIB_10__::func_872(1, 0);
				__LIB_10__::func_871(1);
				if (bVar1)
				{
					__LIB_11__::func_788(0);
				}
			}
			else
			{
				__LIB_10__::func_871(0);
				__LIB_10__::func_872(0, 1);
			}
		}
		else if (!BitTest(Global_1931419, 0) && !BitTest(Global_1931419, 4))
		{
			__LIB_10__::func_872(0, 1);
			__LIB_10__::func_871(0);
		}
		else
		{
			__LIB_10__::func_871(0);
		}
		if (BitTest(Global_1931419, 0))
		{
			if (BitTest(Global_1931419, 7) && __LIB_10__::func_869())
			{
				MISC::CLEAR_BIT(&Global_1931419, 7);
			}
		}
		else
		{
			__LIB_11__::func_787();
		}
		if ((BitTest(Global_1931419, 0) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(1))) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
		{
			if ((((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_193()) && !__LIB_0__::func_877()) && !__LIB_0__::func_77(0)) && iParam1->f_8 != 3) && !__LIB_10__::func_873()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_0__::func_104(1)) && !__LIB_10__::func_565())
			{
				if (iParam1->f_8 == 2)
				{
					if (__LIB_10__::func_946())
					{
						__LIB_11__::func_788(1);
						return;
					}
				}
				else
				{
					__LIB_11__::func_788(1);
					return;
				}
			}
		}
	}
	else
	{
		if ((!BitTest(Global_1931419, 3) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && iParam1->f_8 != 3)
		{
			if (__LIB_11__::func_931())
			{
				MISC::SET_BIT(&Global_1931419, 3);
			}
		}
		if (iParam2->f_3 != -1)
		{
			__LIB_3__::func_122(&(iParam2->f_3));
			iParam2->f_3 = -1;
		}
		if (((__LIB_1__::func_864(PLAYER::PLAYER_ID()) || (iParam2->f_2481 && BitTest(*iParam2, 30))) || (iParam2->f_2482 && BitTest(*iParam2, 30))) || (iParam2->f_2483 && BitTest(*iParam2, 30)))
		{
			__LIB_0__::func_627(&(Global_1931419.f_4), 1, 0);
		}
		return;
	}
	iVar2 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_33;
	if (__LIB_4__::func_902(PLAYER::PLAYER_ID()))
	{
		iVar2 = (__LIB_7__::func_254() + __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_5__::func_23(194), iVar2, true, 0))
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1) && BitTest(*iParam1, 12))
	{
		MISC::CLEAR_BIT(iParam1, 12);
	}
	func_5578(uParam0, iParam1, iParam2);
	if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::PLAYER_ID()))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID()))
		{
			func_5576(iParam2, uParam0);
		}
	}
	if (iParam1->f_8 != 3)
	{
		if (iParam1->f_1 != 0)
		{
			iParam1->f_1 = 0;
		}
	}
	if (((((((__LIB_1__::func_597(uParam3->f_31) || __LIB_2__::func_681(uParam3->f_31) == 97) || __LIB_2__::func_782(uParam3->f_31, 0, 0)) || __LIB_6__::func_846(PLAYER::PLAYER_ID())) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || iParam2->f_2481) || iParam2->f_2482) || iParam2->f_2483)
	{
		iVar3 = 0;
	}
	else if (__LIB_2__::func_681(uParam3->f_31) == 91)
	{
		iVar3 = 1;
	}
	if (((((((__LIB_1__::func_597(uParam3->f_31) || __LIB_0__::func_845(uParam3->f_31, -1)) || __LIB_2__::func_782(uParam3->f_31, 0, 0)) || __LIB_6__::func_846(PLAYER::PLAYER_ID())) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || iParam2->f_2481) || iParam2->f_2482) || iParam2->f_2483)
	{
		if (BitTest(uParam0->f_3[iVar3 /*2*/], 0))
		{
			if (!BitTest(*iParam2, 29))
			{
				if (__LIB_0__::func_893())
				{
					if (iParam1->f_8 != 2)
					{
						if (__LIB_0__::func_937(&(iParam2->f_82), 5000, 0))
						{
							__LIB_10__::func_777(iParam1, 2);
							MISC::SET_BIT(iParam2, 29);
						}
					}
				}
			}
		}
	}
	switch (iParam1->f_8)
	{
		case 0:
			if (!Global_2715699.f_2846.f_186)
			{
				__LIB_11__::func_729(iParam2, iParam1);
				if (func_5570(uParam0, iParam1, iParam2, uParam3))
				{
					if (!BitTest(*iParam2, 31) || !iParam2->f_2481)
					{
						GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
					}
					else
					{
						GRAPHICS::SET_TV_AUDIO_FRONTEND(true);
					}
					__LIB_10__::func_777(iParam1, 1);
				}
			}
			break;
		case 1:
			if (BitTest(Global_2621446, 16) && !BitTest(*iParam1, 2))
			{
				MISC::CLEAR_BIT(&Global_2621446, 16);
			}
			if (BitTest(*iParam2, 2))
			{
				__LIB_3__::func_504();
				MISC::CLEAR_BIT(iParam2, 2);
			}
			if (BitTest(*iParam2, 3))
			{
				__LIB_1__::func_91();
				MISC::CLEAR_BIT(iParam2, 3);
			}
			if (BitTest(*iParam2, 14))
			{
				MISC::CLEAR_BIT(iParam2, 14);
			}
			if (BitTest(*iParam1, 3))
			{
				if (func_5561(iParam1, iParam2))
				{
					__LIB_13__::func_560(iParam2, iParam2->f_87);
					__LIB_10__::func_777(iParam1, 3);
					__LIB_10__::func_872(0, 0);
				}
			}
			else if (BitTest(*iParam1, 4))
			{
				if (__LIB_15__::func_193(uParam0, iParam1, iParam2, uParam3))
				{
					MISC::CLEAR_BIT(iParam1, 4);
					if ((Global_2789733 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						if (BitTest(*iParam2, 25))
						{
							MISC::CLEAR_BIT(iParam2, 25);
						}
						func_5551(iParam2);
					}
					__LIB_10__::func_777(iParam1, 1);
				}
			}
			else
			{
				if (!BitTest(*iParam2, 31) || !iParam2->f_2481)
				{
					GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
				}
				else
				{
					GRAPHICS::SET_TV_AUDIO_FRONTEND(true);
				}
				if (((((((!__LIB_1__::func_597(uParam3->f_31) && !__LIB_0__::func_845(uParam3->f_31, -1)) && !__LIB_2__::func_782(uParam3->f_31, 0, 0)) && !__LIB_6__::func_846(PLAYER::PLAYER_ID())) && !__LIB_4__::func_955(PLAYER::PLAYER_ID())) && !iParam2->f_2481) && !iParam2->f_2482) && !iParam2->f_2483)
				{
					if (__LIB_16__::func_255(uParam0, iParam1, iParam2, uParam3, 0))
					{
						__LIB_10__::func_777(iParam1, 2);
					}
				}
			}
			break;
		case 2:
			if (!BitTest(Global_2621446, 16))
			{
				MISC::SET_BIT(&Global_2621446, 16);
			}
			if (!__LIB_3__::func_505())
			{
				__LIB_5__::func_835();
				MISC::SET_BIT(iParam2, 2);
			}
			if (!__LIB_3__::func_241())
			{
				__LIB_1__::func_92();
				MISC::SET_BIT(iParam2, 3);
			}
			if (BitTest(*iParam2, 14))
			{
				MISC::CLEAR_BIT(iParam2, 14);
			}
			if (func_5561(iParam1, iParam2) && !__LIB_13__::func_556(0))
			{
				__LIB_2__::func_976();
				__LIB_13__::func_560(iParam2, iParam2->f_87);
				HUD::DISPLAY_CASH(false);
				__LIB_10__::func_777(iParam1, 3);
				__LIB_10__::func_872(0, 0);
			}
			if (__LIB_15__::func_193(uParam0, iParam1, iParam2, uParam3))
			{
				if ((Global_2789733 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (BitTest(*iParam2, 25))
					{
						MISC::CLEAR_BIT(iParam2, 25);
					}
					func_5551(iParam2);
				}
				__LIB_10__::func_777(iParam1, 1);
			}
			break;
		case 3:
			if (!Global_262145.f_23081 /* Tunable: -1189246650 */)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					__LIB_1__::func_405();
				}
			}
			if (!Global_262145.f_23080 /* Tunable: -618382164 */)
			{
				if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					__LIB_1__::func_405();
				}
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			if (!__LIB_3__::func_505())
			{
				__LIB_5__::func_835();
				MISC::SET_BIT(iParam2, 2);
			}
			if (!__LIB_3__::func_241())
			{
				__LIB_1__::func_92();
				MISC::SET_BIT(iParam2, 3);
			}
			if (!BitTest(*iParam2, 14))
			{
				MISC::SET_BIT(iParam2, 14);
			}
			__LIB_10__::func_865();
			if (!BitTest(*iParam2, 25))
			{
				Global_2789733 = 1;
				MISC::SET_BIT(iParam2, 25);
			}
			func_5137(&(iParam2->f_88));
			if (Global_1946106)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_10__::func_777(iParam1, 2);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::SET_NOISINESSOVERIDE(0f);
					GRAPHICS::SET_NOISEOVERIDE(false);
				}
			}
			if (__LIB_7__::func_532(0, 1, 0))
			{
				if (func_540(uParam0, iParam1, iParam2, uParam3))
				{
					func_5551(iParam2);
					Global_2789733 = 0;
					if (BitTest(*iParam2, 25))
					{
						MISC::CLEAR_BIT(iParam2, 25);
					}
					if (BitTest(*iParam1, 3))
					{
						if (__LIB_7__::func_691())
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
						__LIB_10__::func_777(iParam1, 1);
					}
					else
					{
						__LIB_10__::func_777(iParam1, 2);
					}
				}
			}
			__LIB_3__::func_570(1);
			break;
	}
	if (BitTest(*iParam2, 7))
	{
		if (!BitTest(*iParam2, 11))
		{
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
		}
		else if (BitTest(*iParam2, 13))
		{
			CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
			PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
			HUD::THEFEED_HIDE_THIS_FRAME();
		}
	}
	if (((iParam1->f_8 == 2 || iParam1->f_8 == 3) || BitTest(*iParam1, 2)) || BitTest(*iParam1, 0))
	{
		__LIB_0__::func_187();
		__LIB_3__::func_570(1);
	}
	if (BitTest(iParam2->f_28, 3))
	{
		if (!BitTest(iParam2->f_28, 9))
		{
			MISC::SET_BIT(&(iParam2->f_28), 9);
			Global_1579066 = 1;
		}
		if (BitTest(iParam2->f_28, 10))
		{
			MISC::CLEAR_BIT(&(iParam2->f_28), 10);
		}
	}
	if (BitTest(iParam2->f_28, 4))
	{
		if (!BitTest(iParam2->f_28, 10))
		{
			MISC::SET_BIT(&(iParam2->f_28), 10);
			Global_1579066 = 0;
		}
		if (BitTest(iParam2->f_28, 9))
		{
			MISC::CLEAR_BIT(&(iParam2->f_28), 9);
		}
	}
	MISC::CLEAR_BIT(&(iParam2->f_2480), 0);
}

int func_540(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x75FA5
{
	__LIB_1__::func_733();
	HUD::DISPLAY_AMMO_THIS_FRAME(false);
	HUD::HUD_FORCE_WEAPON_WHEEL(false);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	__LIB_3__::func_570(1);
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_15__::func_167(&(iParam2->f_88));
	}
	__LIB_0__::func_189();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	__LIB_1__::func_33(0);
	if (!Global_1574747)
	{
		__LIB_0__::func_866();
	}
	if (!BitTest(*iParam2, 8))
	{
		func_5080(iParam1, iParam2, uParam3, 0);
		if (func_564(uParam0, iParam1, iParam2, uParam3))
		{
			if (((func_545(uParam0, iParam1, iParam2, uParam3) || Global_1853198) || Global_1931426) || BitTest(Global_2621446.f_1, 2))
			{
				__LIB_13__::func_563(iParam2, iParam2->f_87);
				MISC::SET_BIT(iParam2, 8);
			}
		}
		else if (iParam1->f_1 != 0)
		{
			iParam1->f_1 = 0;
		}
	}
	else if (func_564(uParam0, iParam1, iParam2, uParam3))
	{
		if (__LIB_0__::func_845(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, 91))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(200f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
		else
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		__LIB_10__::func_836(iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
		MISC::CLEAR_BIT(iParam2, 8);
		return 1;
	}
	return 0;
}

int func_545(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x761EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_77(0)) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_0__::func_877()) && iParam2->f_25 == 13) && !BitTest(Global_1931419, 2))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			iVar0 = 51;
		}
		else
		{
			iVar0 = 222;
		}
		if (BitTest(iParam1->f_1, 0))
		{
			if (__LIB_10__::func_838(uParam0, iParam1) == 1)
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 0);
			}
		}
		if (BitTest(iParam1->f_1, 1))
		{
			if (__LIB_10__::func_838(uParam0, iParam1) == 2)
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 1);
			}
		}
		if (iParam1->f_4 != __LIB_10__::func_837(uParam0, iParam1))
		{
			MISC::CLEAR_BIT(&(iParam1->f_1), 2);
			MISC::CLEAR_BIT(&(iParam1->f_1), 3);
			iParam1->f_4 = __LIB_10__::func_837(uParam0, iParam1);
		}
		if (iParam1->f_5 != __LIB_10__::func_772(uParam0, iParam1))
		{
			MISC::CLEAR_BIT(&(iParam1->f_1), 4);
			MISC::CLEAR_BIT(&(iParam1->f_1), 5);
			iParam1->f_5 = __LIB_10__::func_772(uParam0, iParam1);
		}
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(0)))
		{
			if (BitTest(*iParam1, 3))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			MISC::SET_BIT(iParam2, 0);
			__LIB_10__::func_872(0, 1);
			return 1;
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			if (!Global_2725435)
			{
				if ((__LIB_6__::func_210(&(iParam2->f_29), &iVar1, 1, -1, 0, 0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)) || (((iParam2->f_87 == 6 || iParam2->f_87 == 7) || iParam2->f_87 == 8) && __LIB_6__::func_210(&(iParam2->f_29), &iVar2, 0, -1, 0, 0)))
				{
					MISC::CLEAR_BIT(&(iParam1->f_1), 2);
					MISC::CLEAR_BIT(&(iParam1->f_1), 3);
					MISC::CLEAR_BIT(&(iParam1->f_1), 0);
					MISC::CLEAR_BIT(&(iParam1->f_1), 1);
					MISC::CLEAR_BIT(&(iParam1->f_1), 4);
					MISC::CLEAR_BIT(&(iParam1->f_1), 5);
					if (iVar1 == 1 || iVar1 == -1)
					{
						if (SYSTEM::TIMERA() > 300)
						{
							if (iVar1 == 1)
							{
								MISC::SET_BIT(&(iParam1->f_1), 2);
							}
							else if (iVar1 == -1)
							{
								MISC::SET_BIT(&(iParam1->f_1), 3);
							}
							SYSTEM::SETTIMERA(0);
						}
					}
					else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
					{
						if (__LIB_10__::func_838(uParam0, iParam1) == 2)
						{
							MISC::SET_BIT(&(iParam1->f_1), 0);
						}
						else if (__LIB_10__::func_838(uParam0, iParam1) == 1)
						{
							MISC::SET_BIT(&(iParam1->f_1), 1);
						}
					}
					else if (iVar2 == 1)
					{
						MISC::SET_BIT(&(iParam1->f_1), 4);
					}
					else if (iVar2 == -1)
					{
						MISC::SET_BIT(&(iParam1->f_1), 5);
					}
				}
			}
			if (__LIB_11__::func_724(uParam0, iParam1, iParam2))
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/))
				{
					iParam2->f_8++;
					if (iParam2->f_8 > 1)
					{
						iParam2->f_8 = 0;
					}
					__LIB_10__::func_836(iParam2);
					func_5080(iParam1, iParam2, uParam3, 0);
				}
			}
			if (!(__LIB_10__::func_838(uParam0, iParam1) == 1 && iParam2->f_87 == 4))
			{
				if (BitTest(*iParam2, 0) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/))
				{
					__LIB_1__::func_539(&(iParam2->f_88.f_47.f_1474));
					__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_6__::func_207(0), true), "HUD_INPUT3" /* GXT: Back */, &(iParam2->f_88.f_47.f_1474), 0);
					if (__LIB_10__::func_838(uParam0, iParam1) == 2 && !Global_2725435)
					{
						__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, iVar0, true), "HUD_INPUT81" /* GXT: Turn On */, &(iParam2->f_88.f_47.f_1474), 0);
					}
					else if (__LIB_10__::func_838(uParam0, iParam1) == 1 && !Global_2725435)
					{
						__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, iVar0, true), "HUD_INPUT82" /* GXT: Turn Off */, &(iParam2->f_88.f_47.f_1474), 0);
						if (iParam2->f_2481 && !BitTest(*iParam2, 31))
						{
							__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true), "HUD_INPUT_97" /* GXT: Select Movie */, &(iParam2->f_88.f_47.f_1474), 0);
						}
						else
						{
							__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true), "HUD_INPUT75" /* GXT: Select Channel */, &(iParam2->f_88.f_47.f_1474), 0);
						}
						if ((iParam2->f_87 == 6 || iParam2->f_87 == 7) || iParam2->f_87 == 8)
						{
							__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/, true), "HUD_INPUT77" /* GXT: Change Volume */, &(iParam2->f_88.f_47.f_1474), 0);
						}
					}
					if (__LIB_11__::func_724(uParam0, iParam1, iParam2))
					{
						__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/, true), "HUD_INPUT87" /* GXT: Camera */, &(iParam2->f_88.f_47.f_1474), 0);
					}
					MISC::CLEAR_BIT(iParam2, 0);
				}
				Var3 = { __LIB_1__::func_404() };
				__LIB_6__::func_206(&(iParam2->f_88.f_47.f_1474), 1f);
				__LIB_5__::func_693(&(iParam2->f_88.f_47.f_2174), &Var3, &(iParam2->f_88.f_47.f_1474), __LIB_1__::func_402(&(iParam2->f_88.f_47.f_1474)));
				__LIB_0__::func_876(1);
			}
		}
	}
	return 0;
}

int func_564(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x76E43
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bVar0 = false;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	bVar4 = false;
	if (((((!BitTest(iParam2->f_28, 3) && !BitTest(iParam2->f_28, 4)) && !BitTest(iParam2->f_28, 5)) && !BitTest(iParam2->f_28, 6)) && __LIB_11__::func_726(iParam2->f_26)) && __LIB_11__::func_726(iParam2->f_27))
	{
		bVar4 = true;
		if (__LIB_8__::func_396(iParam2->f_26) && __LIB_8__::func_396(iParam2->f_27))
		{
			bVar5 = true;
		}
	}
	switch (__LIB_10__::func_850(iParam2))
	{
		case 0:
			if (((((!BitTest(iParam2->f_28, 4) && !BitTest(iParam2->f_28, 3)) && !BitTest(iParam2->f_28, 5)) && !BitTest(iParam2->f_28, 6)) && iParam2->f_26 == 5) && BitTest(*uParam0, 0))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "SET_TEXT");
					__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CETTL" /* GXT: CRIMINAL ESCAPED */);
					__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CESTTL" /* GXT: Police have lost the trail */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iParam2->f_5 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				CAM::SET_CAM_COORD(iParam2->f_5, CAM::GET_FINAL_RENDERED_CAM_COORD());
				CAM::SET_CAM_ROT(iParam2->f_5, CAM::GET_FINAL_RENDERED_CAM_ROT(2), 2);
				CAM::SET_CAM_FOV(iParam2->f_5, CAM::GET_FINAL_RENDERED_CAM_FOV());
				CAM::SET_CAM_ACTIVE(iParam2->f_5, true);
				CAM::SHAKE_CAM(iParam2->f_5, "HAND_SHAKE", 0.5f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				STREAMING::SET_FOCUS_POS_AND_VEL(CAM::GET_FINAL_RENDERED_CAM_COORD(), 0f, 0f, 0f);
				NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
				MISC::SET_BIT(iParam2, 1);
				iParam2->f_24 = MISC::GET_GAME_TIMER();
				__LIB_10__::func_849();
				__LIB_10__::func_778(iParam2, 1);
			}
			else
			{
				bVar0 = false;
				if (BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6))
				{
					if (!__LIB_11__::func_726(iParam2->f_26) || BitTest(iParam2->f_28, 10))
					{
						bVar0 = true;
					}
				}
				else if (BitTest(iParam2->f_28, 5))
				{
					if (!__LIB_11__::func_726(iParam2->f_27) || BitTest(iParam2->f_28, 10))
					{
						bVar0 = true;
					}
				}
				else if (BitTest(iParam2->f_28, 3))
				{
					if (!__LIB_11__::func_726(iParam2->f_27))
					{
						bVar0 = true;
					}
				}
				else if (!__LIB_11__::func_726(iParam2->f_26) && !__LIB_11__::func_726(iParam2->f_27))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					MISC::SET_BIT(iParam2, 0);
					__LIB_10__::func_778(iParam2, 12);
				}
				else
				{
					if (bVar5)
					{
						MISC::SET_BIT(iParam2, 19);
					}
					__LIB_10__::func_778(iParam2, 2);
				}
			}
			break;
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7) && (MISC::GET_GAME_TIMER() - iParam2->f_24) < 2000)
			{
				if (!BitTest(*iParam2, 19))
				{
					MISC::SET_BIT(iParam2, 19);
				}
			}
			else
			{
				__LIB_10__::func_778(iParam2, 2);
			}
			break;
		case 2:
			__LIB_5__::func_841(1);
			if (!CAM::IS_SCREEN_FADED_OUT() && !bVar4)
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					if ((BitTest(iParam2->f_28, 3) || BitTest(iParam2->f_28, 5)) || (!__LIB_11__::func_726(iParam2->f_26) && __LIB_11__::func_726(iParam2->f_27)))
					{
						__LIB_10__::func_848(iParam2, 500);
					}
					else
					{
						__LIB_10__::func_848(iParam2, 500);
					}
				}
			}
			else
			{
				if (bVar4)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity_FUZZ");
					__LIB_6__::func_368(&(iParam2->f_30), 0);
					MISC::SET_BIT(iParam2, 23);
					if (!Global_2787852)
					{
						__LIB_10__::func_847(iParam2);
					}
					__LIB_2__::func_592(0, 0);
					MISC::SET_BIT(iParam2, 26);
					if (!bVar5)
					{
						MISC::CLEAR_BIT(iParam2, 19);
					}
				}
				iParam2->f_24 = MISC::GET_GAME_TIMER();
				CAM::DO_SCREEN_FADE_OUT(250);
				__LIB_10__::func_778(iParam2, 3);
			}
			break;
		case 3:
			switch (iParam2->f_26)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					if (!bVar4)
					{
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					}
					if (!bVar5)
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						if (CAM::DOES_CAM_EXIST(iParam2->f_5))
						{
							CAM::DESTROY_CAM(iParam2->f_5, false);
						}
					}
					__LIB_10__::func_782(iParam2);
					if (iParam2->f_27 == 4 && iParam2->f_27 == 5)
					{
						MISC::CLEAR_BIT(iParam2, 19);
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam2->f_7));
					}
					if (BitTest(*iParam2, 1))
					{
						STREAMING::CLEAR_FOCUS();
						NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
						MISC::CLEAR_BIT(iParam2, 1);
					}
					if (iParam2->f_26 == 3)
					{
						if (INTERIOR::IS_VALID_INTERIOR(iParam2->f_23))
						{
							INTERIOR::UNPIN_INTERIOR(iParam2->f_23);
						}
					}
					AUDIO::STOP_AUDIO_SCENE("MP_CCTV_SCENE");
					MISC::CLEAR_BIT(iParam2, 11);
					bVar0 = true;
					break;
				case 4:
				case 5:
					if (!bVar4)
					{
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					}
					if (__LIB_10__::func_206(&(iParam2->f_88.f_1)))
					{
						__LIB_10__::func_205();
						func_5048(&(iParam2->f_88), 32);
					}
					else if (__LIB_10__::func_843(&(iParam2->f_88.f_1)))
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						if (CAM::DOES_CAM_EXIST(iParam2->f_5))
						{
							CAM::DESTROY_CAM(iParam2->f_5, false);
						}
						if (__LIB_8__::func_396(iParam2->f_27))
						{
							MISC::CLEAR_BIT(iParam2, 19);
							GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam2->f_7));
						}
						if (BitTest(*iParam2, 1))
						{
							STREAMING::CLEAR_FOCUS();
							NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
							MISC::CLEAR_BIT(iParam2, 1);
						}
						bVar0 = true;
					}
					break;
				case 6:
				case 7:
				case 8:
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				if (iParam2->f_27 == 4)
				{
					func_5024(&(iParam2->f_88));
				}
				__LIB_10__::func_778(iParam2, 4);
			}
			break;
		case 4:
			if (BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6))
			{
				if (func_5080(iParam1, iParam2, uParam3, 0))
				{
					if (__LIB_11__::func_726(iParam2->f_26))
					{
						__LIB_13__::func_564(iParam2, uParam3, iParam1, 0);
						MISC::SET_BIT(&(iParam2->f_28), 0);
						iParam2->f_17 = { CAM::GET_CAM_COORD(iParam2->f_6) };
						iParam2->f_20 = { CAM::GET_CAM_ROT(iParam2->f_6, 2) };
						MISC::SET_BIT(iParam2, 20);
					}
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam2->f_7));
					MISC::CLEAR_BIT(iParam2, 19);
					bVar0 = true;
				}
			}
			else
			{
				switch (iParam2->f_27)
				{
					case 0:
					case 1:
					case 2:
					case 3:
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
						iParam2->f_7 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SECURITY_CAM");
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "SET_LOCATION");
							if (iParam2->f_27 == 3)
							{
								__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CCTV3" /* GXT: GARAGE 22 - 06 - 84 */);
							}
							else if (iParam2->f_27 == 1)
							{
								if (__LIB_1__::func_597(uParam3->f_31))
								{
									__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CCTV7" /* GXT: ROOF 04 - 11 - 87 */);
								}
								else
								{
									__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CCTV6" /* GXT: GARAGE DOOR 04 - 11 - 87 */);
								}
							}
							else
							{
								__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CCTV0" /* GXT: MAIN DOOR 04 - 11 - 87 */);
							}
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "SET_DETAILS");
							if (iParam2->f_27 == 3)
							{
								__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CCTV4" /* GXT: 38 : 06 : 35    5N/0BR2 */);
							}
							else
							{
								__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("MPTV_CCTV1" /* GXT: 38 : 06 : 35    5N/0BR2 */);
							}
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "SET_TIME");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iVar1 = iParam2->f_27;
							if (iParam2->f_27 == 3)
							{
								if (uParam3->f_33 != 0)
								{
									Var2 = { uParam3->f_1742.f_139 };
									iVar3 = 2;
								}
							}
							else if (uParam3->f_38[iVar1 /*27*/].f_26 != 0)
							{
								Var2 = { uParam3->f_1922[iVar1 /*9*/] };
								iVar3 = uParam3->f_38[iVar1 /*27*/].f_26;
							}
							if ((((iVar3 != 0 && Var2.f_0 != 0f) && Var2.f_1 != 0f) && Var2.f_2 != 0f) && Var2.f_6 != 0f)
							{
								if (CAM::DOES_CAM_EXIST(iParam2->f_5))
								{
									CAM::DESTROY_CAM(iParam2->f_5, false);
								}
								if (!bVar4)
								{
									GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
								}
								MISC::SET_BIT(&(iParam2->f_28), 0);
								iParam2->f_17 = { Var2 };
								iParam2->f_5 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
								CAM::SET_CAM_COORD(iParam2->f_5, Var2);
								CAM::SET_CAM_ROT(iParam2->f_5, Var2.f_3, 2);
								CAM::SET_CAM_FOV(iParam2->f_5, Var2.f_6);
								CAM::SET_CAM_ACTIVE(iParam2->f_5, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								MISC::SET_BIT(iParam2, 12);
								MISC::SET_BIT(iParam2, 13);
								MISC::SET_BIT(iParam2, 11);
								__LIB_13__::func_564(iParam2, uParam3, iParam1, 1);
								if (iParam2->f_26 != 4 && iParam2->f_26 != 5)
								{
									MISC::SET_BIT(iParam2, 19);
								}
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_APARTMENT_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MP_APARTMENT_SCENE");
								}
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_GARAGE_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MP_GARAGE_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("MP_CCTV_SCENE");
								bVar0 = true;
							}
						}
						break;
					case 4:
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
						if (!__LIB_10__::func_206(&(iParam2->f_88.f_1)) && func_14(5))
						{
							if (BitTest(iParam2->f_88.f_1, 13))
							{
								if (!__LIB_10__::func_206(&(iParam2->f_88.f_1)))
								{
									func_5048(&(iParam2->f_88), 0);
								}
								bVar0 = true;
							}
							else
							{
								if (BitTest(*iParam2, 1))
								{
									STREAMING::CLEAR_FOCUS();
									MISC::CLEAR_BIT(iParam2, 1);
								}
								__LIB_11__::func_775(&(iParam2->f_88), 5, 0, 8);
							}
						}
						else if (__LIB_7__::func_700(&(iParam2->f_88.f_1)))
						{
							MISC::SET_BIT(iParam2, 12);
							MISC::SET_BIT(iParam2, 11);
							__LIB_13__::func_564(iParam2, uParam3, iParam1, 1);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_APARTMENT_SCENE"))
							{
								AUDIO::STOP_AUDIO_SCENE("MP_APARTMENT_SCENE");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_GARAGE_SCENE"))
							{
								AUDIO::STOP_AUDIO_SCENE("MP_GARAGE_SCENE");
							}
							bVar0 = true;
						}
						else if (!func_14(5))
						{
							if (!__LIB_10__::func_206(&(iParam2->f_88.f_1)))
							{
								func_5048(&(iParam2->f_88), 0);
							}
							bVar0 = true;
						}
						break;
					case 5:
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
						if (Global_1835502.f_383 != -1 && __LIB_1__::func_693(Global_1835502.f_383, 1, 1))
						{
							if (!__LIB_10__::func_206(&(iParam2->f_88.f_1)))
							{
								if (BitTest(*iParam2, 1))
								{
									STREAMING::CLEAR_FOCUS();
									MISC::CLEAR_BIT(iParam2, 1);
								}
								__LIB_11__::func_775(&(iParam2->f_88), 3, PLAYER::GET_PLAYER_PED(Global_1835502.f_383), 0);
							}
							else if (__LIB_7__::func_700(&(iParam2->f_88.f_1)))
							{
								iParam2->f_7 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
								if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
								{
									if (!HUD::IS_PAUSE_MENU_ACTIVE())
									{
										__LIB_11__::func_774(iParam2);
									}
									HUD::DISPLAY_RADAR(false);
									MISC::SET_BIT(iParam2, 12);
									MISC::SET_BIT(iParam2, 11);
									__LIB_13__::func_564(iParam2, uParam3, iParam1, 1);
									if (!__LIB_8__::func_396(iParam2->f_26))
									{
										MISC::SET_BIT(iParam2, 19);
									}
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_APARTMENT_SCENE"))
									{
										AUDIO::STOP_AUDIO_SCENE("MP_APARTMENT_SCENE");
									}
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_GARAGE_SCENE"))
									{
										AUDIO::STOP_AUDIO_SCENE("MP_GARAGE_SCENE");
									}
									bVar0 = true;
								}
							}
						}
						else
						{
							if (__LIB_10__::func_206(&(iParam2->f_88.f_1)))
							{
								func_4908(&(iParam2->f_88), 0);
							}
							bVar0 = true;
						}
						break;
					case 6:
					case 7:
					case 8:
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
						if (func_5080(iParam1, iParam2, uParam3, 0))
						{
							if (__LIB_11__::func_726(iParam2->f_26))
							{
								MISC::SET_BIT(&(iParam2->f_28), 0);
								iParam2->f_17 = { CAM::GET_CAM_COORD(iParam2->f_6) };
								iParam2->f_20 = { CAM::GET_CAM_ROT(iParam2->f_6, 2) };
								__LIB_13__::func_564(iParam2, uParam3, iParam1, 1);
								MISC::SET_BIT(iParam2, 20);
							}
							CAM::SET_CAM_ACTIVE(iParam2->f_6, true);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam2->f_7));
							MISC::CLEAR_BIT(iParam2, 19);
							bVar0 = true;
						}
						break;
					}
			}
			if (bVar0)
			{
				__LIB_10__::func_778(iParam2, 10);
			}
			break;
		case 10:
			if ((MISC::GET_GAME_TIMER() - iParam2->f_24) > 200)
			{
				if (BitTest(iParam2->f_28, 0))
				{
					__LIB_10__::func_778(iParam2, 5);
				}
				else
				{
					__LIB_10__::func_778(iParam2, 11);
				}
			}
			break;
		case 5:
			if (BitTest(iParam2->f_28, 1))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if ((iParam2->f_20 == 0f && iParam2->f_20.f_1 == 0f) && iParam2->f_20.f_2 == 0f)
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(iParam2->f_17, 50f, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START(iParam2->f_17, iParam2->f_20, 300f, 0);
			}
			MISC::SET_BIT(&(iParam2->f_28), 1);
			STREAMING::SET_FOCUS_POS_AND_VEL(iParam2->f_17, 0f, 0f, 0f);
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
			MISC::SET_BIT(iParam2, 1);
			iParam2->f_24 = MISC::GET_GAME_TIMER();
			__LIB_10__::func_778(iParam2, 6);
			break;
		case 6:
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - iParam2->f_24) > 10000)
			{
				if (BitTest(iParam2->f_28, 1))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					MISC::CLEAR_BIT(&(iParam2->f_28), 1);
				}
				if (iParam2->f_27 == 3 && !__LIB_2__::func_782(uParam3->f_31, 0, 0))
				{
					iParam2->f_24 = MISC::GET_GAME_TIMER();
					__LIB_10__::func_778(iParam2, 7);
				}
				else if ((__LIB_6__::func_846(PLAYER::PLAYER_ID()) && ((iParam2->f_27 == 6 || iParam2->f_27 == 7) || iParam2->f_27 == 8)) && __LIB_11__::func_726(iParam2->f_26))
				{
					iParam2->f_24 = MISC::GET_GAME_TIMER();
					__LIB_10__::func_778(iParam2, 7);
				}
				else
				{
					__LIB_10__::func_778(iParam2, 8);
				}
			}
			break;
		case 7:
			iParam2->f_23 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_11__::func_827(uParam3), __LIB_11__::func_826(uParam3));
			if ((MISC::GET_GAME_TIMER() - iParam2->f_24) > 5000)
			{
				__LIB_10__::func_778(iParam2, 8);
			}
			else if (INTERIOR::IS_VALID_INTERIOR(iParam2->f_23))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam2->f_23);
				if (INTERIOR::IS_INTERIOR_READY(iParam2->f_23))
				{
					INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(__LIB_11__::func_825(uParam3));
					if (INTERIOR::IS_INTERIOR_SCENE())
					{
						__LIB_10__::func_778(iParam2, 8);
					}
				}
			}
			break;
		case 8:
			bVar0 = false;
			if ((BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6)) || (__LIB_11__::func_726(iParam2->f_26) && !__LIB_11__::func_726(iParam2->f_27)))
			{
				if (func_5080(iParam1, iParam2, uParam3, 0))
				{
					CAM::SET_CAM_ACTIVE(iParam2->f_6, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					MISC::CLEAR_BIT(iParam2, 12);
					MISC::CLEAR_BIT(iParam2, 13);
					MISC::SET_BIT(iParam2, 20);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0 == 1)
			{
				MISC::CLEAR_BIT(&(iParam2->f_28), 0);
				iParam2->f_17 = { 0f, 0f, 0f };
				iParam2->f_20 = { 0f, 0f, 0f };
				GRAPHICS::RESET_ADAPTATION(6);
				__LIB_10__::func_778(iParam2, 9);
			}
			break;
		case 9:
			bVar0 = false;
			switch (iParam2->f_27)
			{
				case 0:
				case 1:
				case 2:
				case 4:
				case 5:
					if (BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6))
					{
						if (((((((((((!__LIB_7__::func_685(uParam3->f_31) && !__LIB_7__::func_686(uParam3->f_31, -1)) && !__LIB_7__::func_687(uParam3->f_31)) && !__LIB_1__::func_597(uParam3->f_31)) && !__LIB_0__::func_845(uParam3->f_31, -1)) && !__LIB_2__::func_782(uParam3->f_31, 0, 0)) && !__LIB_6__::func_846(PLAYER::PLAYER_ID())) && !__LIB_4__::func_955(PLAYER::PLAYER_ID())) && !iParam2->f_2481) && !iParam2->f_2482) && !iParam2->f_2483) || BitTest(*iParam1, 3))
						{
							if (func_4903(iParam1, iParam2, uParam3))
							{
								bVar0 = true;
							}
						}
						else if (func_577(iParam1, iParam2, uParam3))
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
					break;
				case 3:
				case 6:
				case 7:
				case 8:
					if (((((((((((!__LIB_7__::func_685(uParam3->f_31) && !__LIB_7__::func_686(uParam3->f_31, -1)) && !__LIB_7__::func_687(uParam3->f_31)) && !__LIB_1__::func_597(uParam3->f_31)) && !__LIB_0__::func_845(uParam3->f_31, -1)) && !__LIB_2__::func_782(uParam3->f_31, 0, 0)) && !__LIB_6__::func_846(PLAYER::PLAYER_ID())) && !__LIB_4__::func_955(PLAYER::PLAYER_ID())) && !iParam2->f_2481) && !iParam2->f_2482) && !iParam2->f_2483) || BitTest(*iParam1, 3))
					{
						if (func_4903(iParam1, iParam2, uParam3))
						{
							bVar0 = true;
						}
					}
					else if (func_577(iParam1, iParam2, uParam3))
					{
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				MISC::SET_BIT(iParam2, 18);
				__LIB_10__::func_778(iParam2, 11);
			}
			break;
		case 11:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					if (bVar4)
					{
						__LIB_10__::func_781(iParam2, 0);
					}
					else if ((BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6)) || (__LIB_11__::func_726(iParam2->f_26) && !__LIB_11__::func_726(iParam2->f_27)))
					{
						__LIB_10__::func_781(iParam2, 500);
					}
					else
					{
						__LIB_10__::func_781(iParam2, 500);
					}
				}
			}
			else
			{
				__LIB_10__::func_778(iParam2, 12);
			}
			break;
		case 12:
			__LIB_10__::func_783(iParam2);
			if (__LIB_8__::func_396(iParam2->f_27) && !((BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6)) || ((!BitTest(*iParam1, 3) && uParam0->f_22 == 2) || (BitTest(*iParam1, 3) && uParam0->f_23 == 2))))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
				GRAPHICS::SET_NOISINESSOVERIDE(0.1f);
				__LIB_10__::func_839(iParam2);
			}
			else
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_NOISINESSOVERIDE(0f);
				GRAPHICS::SET_NOISEOVERIDE(false);
			}
			__LIB_2__::func_592(1, 0);
			MISC::CLEAR_BIT(&(iParam2->f_28), 0);
			iParam2->f_17 = { 0f, 0f, 0f };
			iParam2->f_20 = { 0f, 0f, 0f };
			MISC::SET_BIT(iParam2, 0);
			MISC::CLEAR_BIT(iParam2, 23);
			__LIB_6__::func_368(&(iParam2->f_30), 1);
			__LIB_5__::func_837();
			MISC::SET_BIT(iParam2, 0);
			__LIB_10__::func_778(iParam2, 13);
			break;
		case 13:
			if (!__LIB_1__::func_342(111, -1))
			{
				if (__LIB_11__::func_726(iParam2->f_87))
				{
					__LIB_1__::func_348(111, 1, -1, 1);
				}
			}
			switch (iParam2->f_87)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					if (!BitTest(*iParam2, 19))
					{
						MISC::SET_BIT(iParam2, 19);
					}
					break;
				case 4:
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/, true);
					break;
				case 5:
					if (!BitTest(*iParam2, 19))
					{
						MISC::SET_BIT(iParam2, 19);
					}
					if (__LIB_10__::func_206(&(iParam2->f_88.f_1)))
					{
						if (__LIB_7__::func_700(&(iParam2->f_88.f_1)))
						{
							if (Global_1835502.f_383 != -1 && __LIB_1__::func_693(Global_1835502.f_383, 0, 1))
							{
								if (__LIB_1__::func_711() != PLAYER::GET_PLAYER_PED(Global_1835502.f_383))
								{
									__LIB_10__::func_909(&(iParam2->f_88), PLAYER::GET_PLAYER_PED(Global_1835502.f_383));
								}
							}
							if (!__LIB_1__::func_342(107, -1))
							{
								__LIB_1__::func_348(107, 1, -1, 1);
							}
						}
					}
					if (Global_1835502.f_383 == -1 || !__LIB_1__::func_693(Global_1835502.f_383, 1, 1))
					{
						MISC::SET_BIT(&Global_2621446, 2);
					}
					break;
			}
			if (BitTest(iParam2->f_28, 3) || BitTest(iParam2->f_28, 5))
			{
				if (!BitTest(Global_2621446, 7))
				{
					MISC::SET_BIT(&Global_2621446, 7);
				}
			}
			if (BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6))
			{
				if (BitTest(Global_2621446, 7))
				{
					MISC::CLEAR_BIT(&Global_2621446, 7);
				}
			}
			if ((HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_1("PM_APT_INT_HLP2" /* GXT: The owner of this apartment is currently previewing a new interior style. */)) && !__LIB_0__::func_1("PM_OFC_INT_HLP2" /* GXT: The owner of this office is currently previewing a new office decor. */))
			{
				HUD::CLEAR_HELP(true);
			}
			iVar6 = 1;
			break;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (BitTest(*iParam2, 23))
		{
			__LIB_6__::func_367(&(iParam2->f_30), __LIB_5__::func_839(&(iParam2->f_30)));
		}
		if (BitTest(*iParam2, 19))
		{
			if (__LIB_10__::func_850(iParam2) == 1)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam2->f_7, 255, 255, 255, 0, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				}
			}
			else
			{
				switch (iParam2->f_87)
				{
					case 0:
					case 1:
					case 2:
					case 3:
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
							GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam2->f_7, 255, 255, 255, 0, 0);
							GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
						}
						break;
					case 5:
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
						{
							HUD::THEFEED_HIDE_THIS_FRAME();
							if (!BitTest(*uParam0, 0))
							{
								if (__LIB_10__::func_285())
								{
									__LIB_11__::func_774(iParam2);
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam2->f_77) >= 5000)
								{
									iParam2->f_78 = (iParam2->f_78 + 1f);
									if (iParam2->f_78 >= 5f)
									{
										iParam2->f_78 = 0f;
									}
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "DISPLAY_SCROLL_TEXT");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam2->f_78);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									iParam2->f_77 = NETWORK::GET_NETWORK_TIME();
								}
							}
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
							GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
							GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam2->f_7, 255, 255, 255, 0, 0);
							GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
						}
						break;
					}
				}
			}
	}
	return iVar6;
}

int func_577(int* iParam0, int* iParam1, var uParam2)//Position - 0x783E7
{
	int iVar0;
	struct<3> Var1;
	if (!BitTest(*iParam1, 15))
	{
		MISC::SET_BIT(iParam1, 15);
	}
	if (!BitTest(*iParam1, 27))
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_586(iParam1, iParam0, uParam2, 0), 7f, __LIB_11__::func_899(iParam1, uParam2, iParam0), false, false, true);
		iParam1->f_4 = iVar0;
		if (iVar0 != 0)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		}
		if ((Var1.f_0 != 0f || Var1.f_1 != 0f) || Var1.f_2 != 0f)
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_11__::func_806(iParam1, uParam2)))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(__LIB_11__::func_806(iParam1, uParam2));
			}
			MISC::SET_BIT(iParam1, 27);
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam1->f_4);
			__LIB_10__::func_841(iParam1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(iParam1, 4);
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_11__::func_806(iParam1, uParam2)))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(__LIB_11__::func_806(iParam1, uParam2), false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_4))
		{
			if (STREAMING::IS_MODEL_VALID(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
			{
				if (HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
				{
					iParam1->f_2 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(__LIB_11__::func_806(iParam1, uParam2));
					iParam1->f_86 = __LIB_10__::func_840(iParam1->f_87);
					__LIB_10__::func_910();
					GRAPHICS::SET_TV_CHANNEL(-1);
					MISC::SET_BIT(iParam1, 5);
					__LIB_0__::clearF_1Prop(&(iParam1->f_80));
					return 1;
				}
				else
				{
					HUD::RELEASE_NAMED_RENDERTARGET(__LIB_11__::func_806(iParam1, uParam2));
					HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iParam1->f_4));
				}
			}
		}
		else if (BitTest(*iParam1, 27))
		{
			MISC::CLEAR_BIT(iParam1, 27);
		}
	}
	if (__LIB_0__::func_937(&(iParam1->f_80), 10000, 0))
	{
		__LIB_0__::clearF_1Prop(&(iParam1->f_80));
		return 1;
	}
	return 0;
}

Vector3 func_586(int* iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x78AC0
{
	struct<3> Var0;
	var uVar1;
	func_587(iParam0, uParam1, uParam2, &Var0, &uVar1, bParam3);
	return Var0;
}

void func_587(int* iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x78ADC
{
	struct<4> Var0;
	*uParam3 = { 0f, 0f, 0f };
	*uParam4 = { 0f, 0f, 0f };
	if (!BitTest(*uParam1, 3) && !bParam5)
	{
		if (__LIB_7__::func_687(uParam2->f_31))
		{
			if (((Global_4196256 == 1 || Global_4196256 == 2) || Global_4196256 == 5) || Global_4196256 == 6)
			{
				__LIB_3__::func_210(uParam2->f_31, 14, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
			else if (Global_4196256 == 3 || Global_4196256 == 7)
			{
				__LIB_3__::func_210(uParam2->f_31, 557, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
			else if (Global_4196256 == 4)
			{
				__LIB_3__::func_210(uParam2->f_31, 559, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
			else
			{
				__LIB_3__::func_210(uParam2->f_31, 558, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
		}
		else if (__LIB_7__::func_685(uParam2->f_31))
		{
			__LIB_3__::func_181(__LIB_11__::func_752(0), 14, &Var0, 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_1__::func_597(uParam2->f_31))
		{
			__LIB_3__::func_210(uParam2->f_31, 14, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_0__::func_845(uParam2->f_31, -1))
		{
			__LIB_3__::func_210(uParam2->f_31, 14, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_2__::func_782(uParam2->f_31, 0, 0))
		{
			__LIB_3__::func_210(uParam2->f_31, 14, &Var0, __LIB_2__::func_681(uParam2->f_31), 1);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_6__::func_846(PLAYER::PLAYER_ID()))
		{
			Var0 = { -1235.235f, -3010.295f, -42.873f };
			Var0.f_3 = { 0f, 0f, -45f };
			*uParam3 = { -1235.235f, -3010.295f, -42.873f };
			*uParam4 = { 0f, 0f, -45f };
		}
		else if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
		{
			Var0 = { 364.0089f, 4838.958f, -58.8157f };
			Var0.f_3 = { 0f, 0f, 163f };
			*uParam3 = { 364.0089f, 4838.958f, -58.8157f };
			*uParam4 = { 0f, 0f, 163f };
		}
		else if (iParam0->f_2481)
		{
			if (BitTest(*iParam0, 31))
			{
				Var0 = { 971.2571f, 75.6211f, 116.6575f };
				Var0.f_3 = { 0f, 0f, 58f };
				*uParam3 = { 971.2571f, 75.6211f, 116.6575f };
				*uParam4 = { 0f, 0f, 58f };
			}
			else
			{
				Var0 = { 958.6348f, 31.7808f, 116.9165f };
				Var0.f_3 = { 0f, 0f, -122f };
				*uParam3 = { 958.6348f, 31.7808f, 116.9165f };
				*uParam4 = { 0f, 0f, -122f };
			}
		}
		else if (iParam0->f_2482)
		{
			Var0 = { 2740.386f, -381.5987f, -47.8532f };
			Var0.f_3 = { 0f, 0f, 0f };
			*uParam3 = { 2740.386f, -381.5987f, -47.8532f };
			*uParam4 = { 0f, 0f, 0f };
		}
		else if (iParam0->f_2483)
		{
			if (BitTest(iParam0->f_1, 0))
			{
				Var0 = { 10.8081f, -7.22728f, 10.14f };
				Var0.f_3 = { 0f, 0f, 270f };
				*uParam3 = { 10.8081f, -7.22728f, 10.14f };
				*uParam4 = { 0f, 0f, 270f };
			}
			else if (BitTest(*iParam0, 31))
			{
				Var0 = { -8.47818f, 12.379f, 9.8998f };
				Var0.f_3 = { 0f, 0f, 0f };
				*uParam3 = { -8.47818f, 12.379f, 9.8998f };
				*uParam4 = { 0f, 0f, 0f };
			}
			else
			{
				Var0 = { -6.75788f, 5.98396f, 5.2013f };
				Var0.f_3 = { 0f, 0f, 0f };
				*uParam3 = { -6.75788f, 5.98396f, 5.2013f };
				*uParam4 = { 0f, 0f, 0f };
			}
			*uParam3 = { func_4895(*uParam3, __LIB_2__::func_717(PLAYER::PLAYER_ID())) };
			uParam4->f_2 = func_588(uParam4->f_2, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
		}
		else if (__LIB_2__::func_681(uParam2->f_31) == 8)
		{
			Var0 = { 337.2845f, -996.6658f, -99.0276f };
			Var0.f_3 = { 0f, 0f, 90f };
			*uParam3 = { 337.2845f, -996.6658f, -99.0276f };
			*uParam4 = { 0f, 0f, 90f };
		}
		else if (__LIB_2__::func_681(uParam2->f_31) == 17)
		{
			Var0 = { 256.7323f, -995.4481f, -98.8606f };
			Var0.f_3 = { 0f, 0f, 45f };
			*uParam3 = { 256.7323f, -995.4481f, -98.8606f };
			*uParam4 = { 0f, 0f, 45f };
		}
		else
		{
			__LIB_3__::func_210(uParam2->f_31, 14, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
	}
	else
	{
		*uParam3 = { 228.8359f, -974.6591f, -98.3713f };
	}
}

float func_588(float fParam0, int iParam1)//Position - 0x7900D
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_589(iParam1, &uVar2, &uVar0, &fVar1, 0);
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

void func_589(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x79057
{
	struct<31> Var0;
	func_590(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_590(int iParam0, var uParam1, int iParam2)//Position - 0x79077
{
	func_4890(uParam1, iParam2);
	func_4884(uParam1, iParam2);
	func_4876(uParam1, iParam2);
	func_591(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_591(int iParam0, var uParam1, int iParam2)//Position - 0x790A5
{
	switch (iParam0)
	{
		case 0:
			func_4803(uParam1, iParam2);
			break;
		case 1:
			func_4671(uParam1, iParam2);
			break;
		case 2:
			func_4594(uParam1, iParam2);
			break;
		case 3:
			func_4517(uParam1, iParam2);
			break;
		case 4:
			func_4343(uParam1, iParam2);
			break;
		case 5:
			func_4177(uParam1, iParam2);
			break;
		case 6:
			func_4113(uParam1, iParam2);
			break;
		case 7:
			func_3945(uParam1, iParam2);
			break;
		case 8:
			func_3775(uParam1, iParam2);
			break;
		case 9:
			func_3531(uParam1, iParam2);
			break;
		case 10:
			func_3453(uParam1, iParam2);
			break;
		case 11:
			func_3222(uParam1, iParam2);
			break;
		case 12:
			func_3079(uParam1, iParam2);
			break;
		case 13:
			func_2911(uParam1, iParam2);
			break;
		case 14:
			func_2738(uParam1, iParam2);
			break;
		case 15:
			func_2560(uParam1, iParam2);
			break;
		case 16:
			func_2450(uParam1, iParam2);
			break;
		case 17:
			func_2197(uParam1, iParam2);
			break;
		case 18:
			func_2103(uParam1, iParam2);
			break;
		case 19:
			func_1979(uParam1, iParam2);
			break;
		case 20:
			func_1706(uParam1, iParam2);
			break;
		case 21:
			func_1585(uParam1, iParam2);
			break;
		case 22:
			func_1413(uParam1, iParam2);
			break;
		case 23:
			func_1191(uParam1, iParam2);
			break;
		case 24:
			func_592(uParam1, iParam2);
			break;
	}
}

void func_592(var uParam0, int iParam1)//Position - 0x7925D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 671936/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 671922/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 671824/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 670467/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 670238/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 670225/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 670215/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 670017/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 669969/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 669940/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 669631/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 669622/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 666954/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 666945/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 660214/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 659339/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 659222/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 659166/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 659013/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 658865/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 658783/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 657060/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 655863/*__LIB_9__::func_774*/;
			break;
		case 108:
			uParam0->f_55 = 599940/*func_1000*/;
			break;
		case 17:
			uParam0->f_17 = 598188/*__LIB_9__::func_463*/;
			break;
		case 19:
			uParam0->f_17 = 598037/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 598012/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 597792/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 596351/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 596161/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 594826/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 594719/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 594672/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 594635/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 594627/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 591640/*func_927*/;
			break;
		case 27:
			uParam0->f_25 = 591632/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 591624/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 591474/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 591248/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 590255/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 590200/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 590189/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 586435/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 586390/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 565360/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 565351/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 565342/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 565334/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 565311/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 565265/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 565122/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 563979/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 563961/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 563612/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 563510/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 563499/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 563373/*func_877*/;
			break;
		case 54:
			uParam0->f_45 = 562983/*func_876*/;
			break;
		case 56:
			uParam0->f_46 = 562964/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 561771/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 561645/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 560247/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 560238/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 560227/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 560101/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 560093/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 560079/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 560071/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 558703/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 557958/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 557818/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 556611/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 556602/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 556590/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 556581/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 556569/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 556118/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 556109/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 515406/*func_727*/;
			break;
		case 87:
			uParam0->f_1 = 511574/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 511565/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 511557/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 510679/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 510645/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 508757/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 506707/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 504568/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 504559/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 504550/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 504541/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 504533/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 504525/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 504411/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 504257/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 503589/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 503580/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 503571/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 499155/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 499146/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 499019/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 498964/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 498033/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 498024/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 498016/*__LIB_0__::func_467*/;
			break;
	}
}

int func_727(int iParam0, var uParam1)//Position - 0x7DD4E
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
			func_741(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_736(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

int func_736(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x7E4C5
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
						func_737(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_737(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7E627
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
		if (func_483(iParam1) || __LIB_1__::func_554(iParam1))
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

int func_741(int iParam0, var uParam1, int iParam2)//Position - 0x7E841
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
				func_736(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
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

void func_876(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x89727
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
Vector3 func_877(int iParam0)//Position - 0x898AD
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

void func_927(int iParam0, int iParam1)//Position - 0x90718
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
		func_938(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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

void func_938(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x90D76
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
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_939(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_939(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
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
int func_939(bool bParam0)//Position - 0x90FB1
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

int func_1000(var uParam0, var uParam1, var uParam2)//Position - 0x92784
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_601(iVar2, 1)) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 26))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if (__LIB_3__::func_601(iVar2, 1) && __LIB_6__::func_927(iVar2) != iVar4)
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar4) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2) && !__LIB_3__::func_601(iVar2, 1))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar4)
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_3(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 26)) && __LIB_3__::func_687(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) || Global_2689235[iVar4 /*453*/].f_318.f_10 != __LIB_0__::getMinusOneOrNull()) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_1018(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 24))
								{
									if (__LIB_5__::func_436() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 24))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_775(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 24)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_775(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_36(*uParam0);
					bVar5 = __LIB_3__::func_698(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_3__::func_697(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_775(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_775(uParam1, 1);
	return 0;
}

int func_1018(var uParam0, int iParam1, bool bParam2)//Position - 0x93338
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1)) && !__LIB_3__::func_601(iParam1, 1))
		{
			if (!func_1019(iParam1, 128, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1019(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x9342B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
		{
			if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				iVar1 = 1;
			}
			else
			{
				bVar2 = true;
			}
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
		{
			if (DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar5 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (BitTest(iVar5, 19))
		{
			bVar3 = true;
		}
	}
	if (Global_262145.f_19173 /* Tunable: -475525840 */)
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_1__::func_461(iParam0, 1))
					{
						__LIB_5__::func_441("PROP_BLOCK_1" /* GXT: Unable to enter garage. Please enter property on foot. */, iParam1, 0);
					}
					else
					{
						__LIB_5__::func_441("PROP_BLOCK_2" /* GXT: Unable to enter garage. Please take this vehicle to mod shop to apply a tracker. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if ((((iParam1 != 1234 && iParam1 != 1235) && iParam1 != 117) && Global_262145.f_21136 /* Tunable: -1119737689 */) && __LIB_5__::func_440(iParam0))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_1__::func_461(iParam0, 1))
					{
						__LIB_5__::func_441("PROP_BLOCK_1" /* GXT: Unable to enter garage. Please enter property on foot. */, iParam1, 0);
					}
					else
					{
						__LIB_5__::func_441("PROP_BLOCK_2" /* GXT: Unable to enter garage. Please take this vehicle to mod shop to apply a tracker. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if (iParam1 == 1234)
	{
		if (PLAYER::PLAYER_ID() == __LIB_6__::func_857(iParam7, 1, 0))
		{
			if (bParam5 == 0 && bParam6 == 0)
			{
				if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!bParam4)
						{
							__LIB_5__::func_441("PROP_NO_PVMOD", iParam1, 0);
							bParam4 = true;
						}
					}
				}
				return 0;
			}
			else if (bParam6 == 1 && bParam5 == 0)
			{
				if (!__LIB_7__::func_833(iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!bParam4)
							{
								__LIB_5__::func_441("PROP_NO_WORK", iParam1, 0);
								bParam4 = true;
							}
						}
					}
					return 0;
				}
			}
			else if (bParam6 == 0 && bParam5 == 1)
			{
				if (!__LIB_3__::func_713(iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!bParam4)
							{
								__LIB_5__::func_441("MP_PROP_IVD_VEHT" /* GXT: This vehicle cannot be stored in your Vehicle Storage. */, iParam1, 0);
								bParam4 = true;
							}
						}
					}
					return 0;
				}
			}
		}
		else
		{
			bParam4 = false;
		}
	}
	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if ((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sadler2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sadler"))
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					else
					{
						__LIB_5__::func_441("PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if (__LIB_0__::func_845(iParam1, -1))
	{
		if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !__LIB_1__::func_819(iVar0))
		{
		}
		else
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
						bParam4 = true;
					}
				}
			}
			return 0;
		}
	}
	if (((iParam1 != 122 && iParam1 != 123) && iParam1 != 124) && __LIB_3__::func_532(iVar0))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_0__::func_845(iParam1, -1))
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
					}
					else
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if (iVar0 == joaat("rcbandito") || iVar0 == joaat("minitank"))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_0__::func_845(iParam1, -1))
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
					}
					else
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if ((__LIB_1__::func_589(iParam0) || __LIB_1__::func_590(iVar0)) || ((((((((__LIB_3__::func_712(iVar0, 0) && iParam1 != 117) && iParam1 != 118) && iParam1 != 119) && iParam1 != 120) && iParam1 != 121) && iParam1 != 122) && iParam1 != 123) && iParam1 != 124))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_0__::func_845(iParam1, -1))
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
					}
					else
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if ((((((__LIB_2__::func_782(iParam1, 0, 0) || __LIB_1__::func_597(iParam1)) || iParam1 == 1234) || iParam1 == 1235) || iParam1 == 117) || iParam1 == 127) || iParam1 == 128)
	{
		if (__LIB_1__::func_819(iVar0))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
						bParam4 = true;
					}
				}
			}
			return 0;
		}
	}
	if (__LIB_1__::func_587(iVar0))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam0))
	{
		iVar6 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam0);
		if (ENTITY::IS_ENTITY_A_VEHICLE(iVar6))
		{
			iVar7 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (((ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("cargobob") || ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("cargobob2")) || ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("cargobob3")) || ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("cargobob4"))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!bParam4)
							{
								__LIB_5__::func_441("MP_PROP_CARBOB" /* GXT: Please detach the vehicle from the Cargobob to proceed. */, 0, 0);
								bParam4 = true;
							}
						}
					}
					return 0;
				}
			}
		}
	}
	if (bParam3)
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			return 1;
		}
	}
	else if (__LIB_2__::func_606() || __LIB_9__::func_523(0, __LIB_5__::func_438(iParam1)))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_9__::func_523(1, __LIB_5__::func_438(iParam1)))
					{
						if (iParam1 == 1234)
						{
							__LIB_7__::func_70(0, iParam1, uParam2);
						}
						else if (iParam1 == 1235)
						{
						}
						else if (iParam1 == 117)
						{
							__LIB_7__::func_70(0, iParam1, uParam2);
						}
						else
						{
							__LIB_7__::func_70(1, iParam1, uParam2);
						}
					}
					else
					{
						__LIB_5__::func_441("CUST_GAR_MISO" /* GXT: You can't access your Garage with a mission objective. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
	}
	else if ((((!__LIB_3__::func_689(iParam0) && !bVar2) && !bVar3) && (__LIB_1__::func_814(ENTITY::GET_ENTITY_MODEL(iParam0)) || (__LIB_0__::func_541(iParam0, 0) && iParam1 == 1234))) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		iVar4 = __LIB_3__::func_704(iVar0);
		if (!__LIB_0__::func_371(iVar0, 1))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						if (iVar4 != -1 && !__LIB_1__::func_822(iVar4))
						{
							__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
						}
						else
						{
							__LIB_5__::func_441("MP_PROP_IVD_4" /* GXT: This vehicle cannot be stored in your Garage unless you purchase the corresponding Downloadable Content. */, iParam1, 0);
							if (iVar4 != -1)
							{
							}
							bParam4 = true;
						}
					}
				}
			}
		}
		else if (iVar4 != -1 && !__LIB_1__::func_822(iVar4))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
						bParam4 = true;
					}
				}
			}
		}
		else if ((!__LIB_1__::func_594(iVar0) || (__LIB_1__::func_594(iVar0) && iVar1)) || (__LIB_0__::func_541(iParam0, 0) && iParam1 == 1234))
		{
			return 1;
		}
		else if (__LIB_1__::func_594(iVar0))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_5__::func_441(func_1020(iVar0), iParam1, 0);
						bParam4 = true;
					}
				}
			}
		}
	}
	else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!bParam4)
			{
				if (__LIB_0__::func_845(iParam1, -1) && bVar2)
				{
					__LIB_5__::func_441("MP_PROP_IVD_VEH3" /* GXT: You cannot enter the Clubhouse with another player's Personal Vehicle. */, iParam1, 0);
				}
				else if (iParam1 == 117)
				{
					__LIB_5__::func_441("MP_PROP_IVD_VEH5", iParam1, 0);
				}
				else
				{
					__LIB_5__::func_441("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
				}
				bParam4 = true;
			}
		}
	}
	return 0;
}

char* func_1020(int iParam0)//Position - 0x93E34
{
	int iVar0;
	if (iParam0 == 0)
	{
		return "";
	}
	return "MP_PROP_IVD_3a" /* GXT: This vehicle cannot be stored in your Garage unless purchased online. */;
	if (__LIB_3__::func_703(iParam0, 0) != 0 && __LIB_3__::func_703(iParam0, 1) != 0)
	{
		return "MP_PROP_IVD_3h" /* GXT: This vehicle cannot be stored in your Garage - it has been stolen and has a tracker. Visit the websites in the Travel and Transport section to purchase vehicles. */;
	}
	iVar0 = __LIB_1__::func_186(iParam0);
	switch (func_1021(iVar0))
	{
		case 10:
			return "MP_PROP_IVD_3b" /* GXT: This vehicle cannot be stored in your Garage - it has been stolen and has a tracker. Visit the websites in the Travel and Transport section to purchase vehicles. */;
		case 16:
			return "MP_PROP_IVD_3g" /* GXT: This vehicle cannot be stored in your Garage - it has been stolen and has a tracker. Visit the websites in the Travel and Transport section to purchase vehicles. */;
		case 12:
			return "MP_PROP_IVD_3d" /* GXT: This vehicle cannot be stored in your Garage - it has been stolen and has a tracker. Visit the websites in the Travel and Transport section to purchase vehicles. */;
		case 11:
			return "MP_PROP_IVD_3c";
		case 13:
			return "MP_PROP_IVD_3e" /* GXT: This vehicle cannot be stored in your Garage - it has been stolen and has a tracker. Visit the websites in the Travel and Transport section to purchase vehicles. */;
		case 15:
			return "MP_PROP_IVD_3f" /* GXT: This vehicle cannot be stored in your Garage - it has been stolen and has a tracker. Visit the websites in the Travel and Transport section to purchase vehicles. */;
		case 26:
			return "MP_PROP_IVD_3h" /* GXT: This vehicle cannot be stored in your Garage - it has been stolen and has a tracker. Visit the websites in the Travel and Transport section to purchase vehicles. */;
		case 29:
			return "MP_PROP_IVD_3i";
		default:
	}
	return "MP_PROP_IVD_3a" /* GXT: This vehicle cannot be stored in your Garage unless purchased online. */;
}

int func_1021(int iParam0)//Position - 0x93EFA
{
	int iVar0;
	if (iParam0 == -1)
	{
		return -1;
	}
	if ((((iParam0 == 8 || iParam0 == 9) || iParam0 == 23) || iParam0 == 26) || iParam0 == 28)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 184)
	{
		if (__LIB_4__::func_913(10, iVar0 + 3) == iParam0)
		{
			return 10;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 247)
	{
		if (__LIB_4__::func_913(16, iVar0 + 3) == iParam0)
		{
			return 16;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 157)
	{
		if (__LIB_4__::func_913(12, iVar0 + 3) == iParam0)
		{
			return 12;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 37)
	{
		if (__LIB_4__::func_913(11, iVar0 + 3) == iParam0)
		{
			return 11;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (__LIB_4__::func_913(13, iVar0 + 3) == iParam0)
		{
			return 13;
		}
		iVar0 = (iVar0 + 1);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_4__::func_913(15, iVar0 + 3) == iParam0)
		{
			return 15;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_4__::func_913(26, iVar0 + 3 + 12) == iParam0)
		{
			return 26;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (__LIB_4__::func_913(29, iVar0 + 3 + 17) == iParam0)
		{
			return 29;
		}
		iVar0++;
	}
	return -1;
}

void func_1191(var uParam0, int iParam1)//Position - 0xA40C9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 728526/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 728517/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 728437/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 727798/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 727532/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 727519/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 727420/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 727283/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 727235/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 727200/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 727081/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 727052/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 727042/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 724891/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 724882/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 722286/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 722278/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 722269/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 722260/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 722198/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 722117/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 721764/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 717328/*func_1365*/;
			break;
		case 17:
			uParam0->f_17 = 716160/*__LIB_9__::func_464*/;
			break;
		case 19:
			uParam0->f_17 = 716134/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 716125/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 715994/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 715890/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 715874/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 715718/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 715710/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 707769/*func_1316*/;
			break;
		case 25:
			uParam0->f_23 = 706720/*func_1312*/;
			break;
		case 27:
			uParam0->f_25 = 706504/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 706463/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 706440/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 705681/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 705653/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 705539/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 705421/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 705372/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 696532/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 696484/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 685395/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 685386/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 685377/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 685369/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 685358/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 685232/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 684298/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 684289/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 684120/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 684111/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 684100/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 684077/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 684028/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 684010/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 683968/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 683926/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 683797/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 683788/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 683777/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 683754/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 683745/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 683703/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 683695/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 683687/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 683416/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 683346/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 682674/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 682665/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 682653/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 682433/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 682421/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 681897/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 681782/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 680878/*func_1234*/;
			break;
		case 87:
			uParam0->f_1 = 678247/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 678238/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 678230/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 678221/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 678212/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 678203/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 678195/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 678187/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 678152/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 678143/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 676205/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 676196/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 676187/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 674967/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 674885/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 674868/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 674836/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 673620/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 673611/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 673603/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1234(int iParam0, var uParam1)//Position - 0xA63AE
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
			func_741(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_736(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1312(int iParam0, int iParam1)//Position - 0xAC8A0
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
	func_938(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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

void func_1316(var uParam0, var uParam1)//Position - 0xACCB9
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
			func_1317(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1317(var uParam0, var uParam1)//Position - 0xACD0F
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
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
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

int func_1365(var uParam0, var uParam1, var uParam2)//Position - 0xAF210
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar2))
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (!__LIB_1__::func_841(iVar3))
				{
					return 0;
				}
				if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					if (!__LIB_0__::func_872(iVar2, 1))
					{
						return 0;
					}
					if (uParam0->f_1 == 9 || uParam0->f_1 == 10)
					{
						if (!__LIB_1__::func_687(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar5) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar5)
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_5(uParam1);
				return 0;
			}
			if (__LIB_1__::func_693(iVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_1375(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 23))
								{
									if (__LIB_5__::func_210() || ((__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 23))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_777(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 23)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_777(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_27(*uParam0);
					bVar6 = __LIB_3__::func_698(iVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_3__::func_787(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_777(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_777(uParam1, 1);
	return 0;
}

int func_1375(var uParam0, int iParam1, bool bParam2)//Position - 0xAFFA8
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CAR_M_EXT_V_T" /* GXT: LS CAR MEET */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!func_1019(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_1413(var uParam0, int iParam1)//Position - 0xB1DD7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 769084/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 769070/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 768978/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 768756/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 768599/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 768586/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 768576/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 768456/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 768408/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 768379/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 768291/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 768282/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 766537/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 766528/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 762420/*func_1561*/;
			break;
		case 8:
			uParam0->f_37 = 761943/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 761849/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 761840/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 761778/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 761697/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 760799/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 757519/*func_1542*/;
			break;
		case 17:
			uParam0->f_17 = 756247/*__LIB_12__::func_44*/;
			break;
		case 19:
			uParam0->f_17 = 756221/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 756007/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 755943/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 755839/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 755823/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 755716/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 755708/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 751702/*func_1512*/;
			break;
		case 25:
			uParam0->f_23 = 751252/*func_1509*/;
			break;
		case 27:
			uParam0->f_25 = 751244/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 751236/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 750599/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 750465/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 749591/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 749388/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 749235/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 747623/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 747578/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 738541/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 738532/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 738523/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 738515/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 738492/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 738440/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 738302/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 738284/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 737452/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 737350/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 737339/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 737181/*func_1464*/;
			break;
		case 54:
			uParam0->f_45 = 736946/*func_1463*/;
			break;
		case 56:
			uParam0->f_46 = 736937/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 736524/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 736371/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 736362/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 736353/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 736342/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 736331/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 736322/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 736314/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 735258/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 735038/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 734963/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 734274/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 734265/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 734253/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 734161/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 734149/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 733782/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 733773/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 732980/*func_1437*/;
			break;
		case 87:
			uParam0->f_1 = 731600/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 731591/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 731583/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 731574/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 731565/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 731556/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 731548/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 731540/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 731528/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 731519/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 676205/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 731510/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 731501/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 730281/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 730109/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 730100/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 730092/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1437(int iParam0, var uParam1)//Position - 0xB2F34
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
			func_741(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_736(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1463(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB3EB2
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
Vector3 func_1464(int iParam0)//Position - 0xB3F9D
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

void func_1509(int iParam0, int iParam1)//Position - 0xB7694
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
		func_938(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1512(var uParam0, var uParam1)//Position - 0xB7856
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1515(uParam0, uParam1);
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

void func_1515(var uParam0, var uParam1)//Position - 0xB7935
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_51(uParam0, uParam1);
			break;
		case 1:
			func_1528(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_484(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1528(var uParam0, var uParam1)//Position - 0xB8528
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

int func_1542(var uParam0, var uParam1, var uParam2)//Position - 0xB8F0F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 25))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar4) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar4)
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_10(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 25)) && (__LIB_1__::func_797(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)) || __LIB_8__::func_922(*uParam0)))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) || Global_2689235[iVar4 /*453*/].f_318.f_10 != __LIB_0__::getMinusOneOrNull()) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_1549(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 22))
								{
									if (__LIB_5__::func_210() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 22))
									{
										if (((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 15))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_778(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 22)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if (((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 15))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_778(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_28(*uParam0);
					bVar5 = __LIB_3__::func_698(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_3__::func_833(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_778(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_778(uParam1, 1);
	return 0;
}

int func_1549(var uParam0, int iParam1, bool bParam2)//Position - 0xB9825
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!func_1019(iParam1, 127, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_1561(int iParam0, var uParam1, int iParam2)//Position - 0xBA234
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
				func_938(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1585(var uParam0, int iParam1)//Position - 0xBBC45
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 785409/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 785400/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 785332/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 784892/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 784744/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 784731/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 784505/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 784415/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 784395/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 784290/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 784265/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 784252/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 784188/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 784179/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 783642/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 783633/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 782693/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 782685/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 782676/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 782667/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 782605/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 782524/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 782197/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 782188/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 782177/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 782166/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 782124/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 782115/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 782067/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 782012/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 782003/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 781896/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 781888/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 781461/*func_1662*/;
			break;
		case 27:
			uParam0->f_25 = 781453/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 781445/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 781410/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 781382/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 781215/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 781192/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 777578/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 777533/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 774339/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 774330/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 774321/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 774313/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 774302/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 774131/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 772858/*func_1635*/;
			break;
		case 49:
			uParam0->f_8 = 772849/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 772424/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 772415/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 772404/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 772381/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 772373/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 772364/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 772351/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 772309/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 772300/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 772291/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 772280/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 772269/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 772260/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 772252/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 772244/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 771631/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 771561/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 770872/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 770863/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 770851/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 770842/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 770830/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 770821/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 770812/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 770803/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 770794/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 770785/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 770777/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 770768/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 770759/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 770750/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 770742/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 770734/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 770722/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 770713/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 676205/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 770704/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 770695/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 730281/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 770687/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 770678/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 770670/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1635(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xBCAFA
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
			func_938(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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

void func_1662(int iParam0, int iParam1)//Position - 0xBEC95
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_938(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1706(var uParam0, int iParam1)//Position - 0xBFC0A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 830915/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 830859/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 830197/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 830070/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 830036/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 830025/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 829961/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 829938/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 829929/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 829811/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 829714/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 829705/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 829315/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 829005/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 827034/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 827025/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 827016/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 826633/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 822687/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 821946/*__LIB_9__::func_466*/;
			break;
		case 19:
			uParam0->f_17 = 821920/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 821751/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 821688/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 821536/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 821451/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 820514/*func_1914*/;
			break;
		case 30:
			uParam0->f_8 = 819185/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 818601/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 817366/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 817357/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 814590/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 814537/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 809085/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 809076/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 809067/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 809059/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 809036/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 808984/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 808959/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 808921/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 808847/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 808836/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 808757/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 808749/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 808740/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 808730/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 808483/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 807268/*__LIB_9__::func_756*/;
			break;
		case 65:
			uParam0->f_21 = 806075/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 804908/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 804732/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 803072/*__LIB_7__::func_836*/;
			break;
		case 69:
			*uParam0 = 803063/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 803051/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 803042/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 803030/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 802184/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 802175/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 801503/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 800630/*func_1815*/;
			break;
		case 87:
			uParam0->f_1 = 799417/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 799397/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 799303/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 799172/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 798526/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 797758/*func_1797*/;
			break;
		case 94:
			uParam0->f_1 = 797205/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 796611/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 796253/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 796160/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 795292/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 792029/*func_1760*/;
			break;
		case 100:
			uParam0->f_22 = 788744/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 787585/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 787377/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 786937/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 786928/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 786816/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 786773/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1760(var uParam0, var uParam1)//Position - 0xC15DD
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
		func_1776(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_741(&iVar9, &(uParam1->f_109), 4);
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

int func_1776(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xC20A0
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_737(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1777(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1777(var uParam0, int iParam1)//Position - 0xC20FE
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
		func_466(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1797(var uParam0, var uParam1)//Position - 0xC2C3E
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
			func_741(&iVar2, &(uParam1->f_109), 4);
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
			func_1776(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_1815(int iParam0, var uParam1)//Position - 0xC3776
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
		if (func_1776(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
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
		func_741(&iVar1, &(uParam1->f_109), 32);
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

void func_1914(int iParam0, int iParam1)//Position - 0xC8522
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
						func_1915(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1915(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1915(int iParam0, bool bParam1)//Position - 0xC87B1
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

void func_1979(var uParam0, int iParam1)//Position - 0xCADCC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 852100/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 852091/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 852023/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 851694/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 851533/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 851520/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 851456/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 851447/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 851111/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 851102/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 850365/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 850357/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 850348/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 850339/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 850326/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 850317/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 850238/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 849894/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 849885/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 849356/*__LIB_9__::func_467*/;
			break;
		case 19:
			uParam0->f_17 = 849301/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 849213/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 849193/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 849166/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 849144/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 849135/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 849028/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 849020/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 849012/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 848251/*func_2061*/;
			break;
		case 27:
			uParam0->f_25 = 848243/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 848235/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 848124/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 848076/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 848007/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 847984/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 843911/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 843854/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 837636/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 837627/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 837618/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 837610/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 837599/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 837486/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 836411/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 836402/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 836005/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 835996/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 835986/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 835963/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 835465/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 835456/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 835447/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 835405/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 835396/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 835387/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 835376/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 835365/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 835356/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 835348/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 835340/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 835030/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 834960/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 834271/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 834262/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 834250/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 834241/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 834229/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 834220/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 834211/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 834202/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 834193/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 834184/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 834176/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 834151/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 834041/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 833324/*func_1990*/;
			break;
		case 100:
			uParam0->f_22 = 832623/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 832495/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 832483/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 832474/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 676205/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 832465/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 832456/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 730281/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 832448/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 832439/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 832431/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1990(var uParam0, var uParam1)//Position - 0xCB72C
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
		func_1776(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_2061(int iParam0, int iParam1)//Position - 0xCF17B
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
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_939(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_939(iVar7))
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
					else if ((!bVar1 && !bVar0) && !func_2062())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_2062()//Position - 0xCF409
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2103(var uParam0, int iParam1)//Position - 0xD008D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 860413/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 860404/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 860332/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 860095/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 860044/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 860031/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 859967/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 859958/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 859518/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 859509/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 858834/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 858826/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 858817/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 858808/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 858746/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 858666/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 858297/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 858288/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 858277/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 858266/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 858257/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 858248/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 858226/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 858217/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 858205/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 858197/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 858189/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 858181/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 858173/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 858165/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 858130/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 858102/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 858032/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 858009/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 857913/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 857868/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 855355/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 855346/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 855337/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 855329/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 855318/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 855276/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 855168/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 855159/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 854956/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 854947/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 854936/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 854913/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 854905/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 854896/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 854883/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 854841/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 854832/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 854823/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 854812/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 854801/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 854792/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 854784/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 854776/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 854543/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 854473/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 853784/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 853775/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 853763/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 853754/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 853742/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 853733/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 853724/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 853715/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 853706/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 853697/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 853689/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 853680/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 853671/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 853662/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 853654/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 853646/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 853634/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 853625/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 676205/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 853616/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 853607/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 730281/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 853599/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 853590/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 853582/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2197(var uParam0, int iParam1)//Position - 0xD2106
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 939847/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 939833/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 939677/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 939201/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 939002/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 938880/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 938870/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 938733/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 938689/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 938605/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 938511/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 938502/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 937324/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 937315/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 930732/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 930432/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 930375/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 930131/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 930069/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 929989/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 929269/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 926077/*func_2406*/;
			break;
		case 17:
			uParam0->f_17 = 923769/*__LIB_9__::func_518*/;
			break;
		case 19:
			uParam0->f_17 = 923743/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 923567/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 923503/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 923399/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 923383/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 923276/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 923229/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 923192/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 921147/*func_2382*/;
			break;
		case 25:
			uParam0->f_23 = 920825/*func_2380*/;
			break;
		case 30:
			uParam0->f_8 = 919968/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 919834/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 919262/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 919048/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 916561/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 916504/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 889286/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 889277/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 889268/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 889260/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 889237/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 889165/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 889037/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 889011/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 888324/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 888054/*__LIB_9__::func_423*/;
			break;
		case 52:
			uParam0->f_15 = 888043/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 887881/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 887357/*func_2342*/;
			break;
		case 56:
			uParam0->f_46 = 887339/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 887087/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 886925/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 886429/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 886414/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 886403/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 886241/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 886062/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 886035/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 884600/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 883213/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 882854/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 882740/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 881780/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 881771/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 881759/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 881215/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 881203/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 881015/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 881006/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 879420/*func_2303*/;
			break;
		case 87:
			uParam0->f_1 = 877902/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 877893/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 877885/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 877855/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 877410/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 871665/*func_2236*/;
			break;
		case 100:
			uParam0->f_22 = 863086/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 862145/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 862134/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 862125/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 862116/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 862107/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 861935/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 861912/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2236(int iParam0, int* iParam1)//Position - 0xD4CF1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((__LIB_2__::func_306() || __LIB_1__::func_2()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (Global_1853192 == PLAYER::PLAYER_ID())
		{
			if (!BitTest(iParam1->f_188, 13))
			{
				if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
				{
					NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
					iVar2 = OBJECT::CREATE_OBJECT_NO_OFFSET(__LIB_4__::func_55(iParam0), __LIB_4__::func_40(iParam0), true, false, true);
					iParam1->f_257 = NETWORK::OBJ_TO_NET(iVar2);
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(iParam1->f_257, false);
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
				return 0;
			}
		}
		if (((Global_2824886 && __LIB_0__::func_937(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 20))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 20);
			}
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_1__::func_693(iVar3, 1, 1) && !__LIB_4__::func_972(iVar3))
			{
				if (!BitTest(Global_2689235[iVar3 /*453*/].f_318.f_4, 20) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(iVar3)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			Global_2824888 = -1;
			if (Global_1853192 != __LIB_0__::getMinusOneOrNull())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853192)))
				{
					if (iVar1 < 4)
					{
						if (Global_1853192 == PLAYER::PLAYER_ID())
						{
							Global_2824888 = iVar1;
						}
						iVar1++;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853192 != iVar3)
				{
					if (__LIB_1__::func_693(iVar3, 0, 1) && !__LIB_4__::func_972(iVar3))
					{
						if (iVar1 < 4)
						{
							if (iVar3 == PLAYER::PLAYER_ID())
							{
								Global_2824888 = iVar1;
							}
							iVar1++;
						}
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
			}
			else
			{
				func_2237(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	__LIB_5__::func_514(iParam1, 0);
	__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
	AUDIO::START_AUDIO_SCENE("dlc_ch_heist_finale_leave_arcade_cutscene_scene");
	return 1;
}

int func_2237(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xD4F78
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	struct<3> Var7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	float fVar15;
	float fVar16;
	int iVar17;
	Global_2727792 = MISC::GET_GAME_TIMER();
	if (__LIB_1__::func_625())
	{
		__LIB_4__::func_53();
	}
	if (!__LIB_2__::func_443() && !bParam9)
	{
		__LIB_1__::func_684();
	}
	if (__LIB_4__::func_52())
	{
		__LIB_4__::func_51(0);
	}
	if (!__LIB_1__::func_81())
	{
		if (Global_2727791 != iParam7 && iParam7 == 1)
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				CLOCK::GET_POSIX_TIME(&uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5);
				STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				Global_2727791 = iParam7;
			}
		}
		else
		{
			Global_2727791 = iParam7;
		}
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	__LIB_5__::func_729();
	if (__LIB_0__::func_628() == 25)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
	{
		if (bParam1)
		{
			HUD::SET_FRONTEND_ACTIVE(false);
		}
		if (bParam3)
		{
			__LIB_2__::func_448(0, 0, 1);
		}
	}
	__LIB_5__::func_517(&iVar6);
	if (iVar6 == 1)
	{
		return 1;
	}
	if (iVar6 == 2)
	{
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		__LIB_5__::func_728(1, 0);
		return 0;
	}
	if (__LIB_0__::func_623() == 0)
	{
		return 1;
	}
	if (__LIB_0__::func_623() == 1)
	{
		__LIB_0__::func_986(2);
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_5__::func_728(1, 0);
		return 0;
	}
	bVar8 = false;
	if (Global_2715699.f_6597 && Global_2725323)
	{
		if (func_2265(1))
		{
			bVar8 = true;
		}
	}
	if ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE())) || bParam1 == 0)
	{
		if (!__LIB_0__::func_893())
		{
			if (__LIB_1__::func_584())
			{
				if (__LIB_4__::func_50())
				{
					if ((bVar8 && __LIB_4__::func_49(Global_2715699.f_6598)) || bVar8 == 0)
					{
						iVar9 = PLAYER::PLAYER_PED_ID();
						if (bVar8)
						{
							iVar9 = Global_2726703;
						}
						if (bParam3)
						{
							__LIB_2__::func_448(0, 0, 1);
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
						{
							if (iParam4 == 0)
							{
								GRAPHICS::ANIMPOSTFX_STOP_ALL();
							}
							iVar10 = 0;
							if (CAM::DOES_CAM_EXIST(iParam0) || iParam4)
							{
								Var7 = { CAM::GET_CAM_COORD(iParam0) };
								ENTITY::SET_ENTITY_COORDS(Global_1577840, ENTITY::GET_ENTITY_COORDS(iVar9, false), false, false, false, true);
								if (iParam4 == 0)
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var7, false, false, false, true);
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_2725423, false, false, false, true);
								}
								iVar10 = __LIB_5__::func_968(ENTITY::GET_ENTITY_COORDS(Global_1577840, false), ENTITY::GET_ENTITY_COORDS(iVar9, false));
								if (iVar10 == 3)
								{
									iVar10 = 2;
								}
							}
							if (__LIB_1__::func_81())
							{
								iVar10 = __LIB_0__::func_109();
							}
							if (iParam4 == 0)
							{
								STREAMING::START_PLAYER_SWITCH(Global_1577840, iVar9, 513, iVar10);
							}
							else
							{
								STREAMING::START_PLAYER_SWITCH(Global_1577840, iVar9, 8, iVar10);
							}
							if (CAM::DOES_CAM_EXIST(iParam0))
							{
								Var7 = { CAM::GET_CAM_COORD(iParam0) };
								Var11 = { CAM::GET_CAM_ROT(iParam0, 2) };
								fVar12 = CAM::GET_CAM_FOV(iParam0);
								fVar13 = CAM::GET_CAM_FAR_CLIP(iParam0);
								STREAMING::SET_PLAYER_SWITCH_OUTRO(Var7, Var11, fVar12, fVar13, 2);
							}
							__LIB_0__::func_986(4);
						}
						else if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
						{
							if (CAM::DOES_CAM_EXIST(iParam0))
							{
								Var7 = { CAM::GET_CAM_COORD(iParam0) };
								Var14 = { CAM::GET_CAM_ROT(iParam0, 2) };
								fVar15 = CAM::GET_CAM_FOV(iParam0);
								fVar16 = CAM::GET_CAM_FAR_CLIP(iParam0);
								if ((bParam5 && !__LIB_4__::func_47()) && !__LIB_4__::func_46())
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var7, false, false, false, true);
									ENTITY::SET_ENTITY_COORDS(iVar9, Var7, false, false, false, true);
								}
								if (__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var7, 5f, 0) || !bParam5)
								{
									STREAMING::SWITCH_TO_MULTI_SECONDPART(iVar9);
									if (!__LIB_2__::func_440())
									{
										if (CAM::DOES_CAM_EXIST(iParam0))
										{
											STREAMING::SET_PLAYER_SWITCH_OUTRO(Var7, Var14, fVar15, fVar16, 2);
										}
									}
									if (iParam7 == 0)
									{
										STREAMING::ENABLE_SWITCH_PAUSE_BEFORE_DESCENT();
									}
									if (HUD::BUSYSPINNER_IS_ON())
									{
										HUD::BUSYSPINNER_OFF();
									}
									__LIB_0__::func_986(4);
								}
							}
							else
							{
								if (iParam7 == 0)
								{
									STREAMING::ENABLE_SWITCH_PAUSE_BEFORE_DESCENT();
								}
								__LIB_0__::func_986(4);
								STREAMING::SWITCH_TO_MULTI_SECONDPART(iVar9);
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_623() == 4)
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!bParam6)
				{
					if (__LIB_1__::func_19() != 0)
					{
						if (__LIB_1__::func_19() < 37)
						{
							if (__LIB_4__::func_54())
							{
								if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(__LIB_5__::func_967(0)))
								{
									GRAPHICS::ANIMPOSTFX_PLAY(__LIB_5__::func_967(0), 0, true);
								}
							}
						}
					}
				}
				iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
				if (iVar17 != 0)
				{
					STREAMING::DISABLE_SWITCH_OUTRO_FX();
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam8)
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
				}
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_5__::func_727(bParam3, bParam1);
					}
				}
				else
				{
					__LIB_5__::func_727(bParam3, bParam1);
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0 || (iParam2 && STREAMING::GET_PLAYER_SWITCH_STATE() > 8))
			{
				if (((((!Global_2667225.f_2688 == -1 && !Global_1836578) && !Global_2667225.f_2688 >= 254) && !__LIB_4__::func_41()) && !BitTest(Global_4718592.f_168795, 0)) && !(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2667225.f_2689 == 0))
				{
					if (!__LIB_1__::func_76(&Global_2725371))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::SET_RADIO_TO_STATION_NAME(&Global_2725371);
							}
						}
					}
				}
				StringCopy(&Global_2725371, "", 32);
				__LIB_5__::func_727(bParam3, bParam1);
				if ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE())) || bParam1 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577840))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1577840, false))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1577840))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577840, false, false);
							}
							PED::DELETE_PED(&Global_1577840);
						}
					}
					if (__LIB_0__::func_629() == 0)
					{
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
					}
					GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam8)
					{
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), false);
					}
					Global_2714762.f_730 = 0;
					__LIB_0__::func_986(0);
					__LIB_1__::func_618();
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2265(int iParam0)//Position - 0xD5C53
{
	if (__LIB_4__::func_914(PLAYER::PLAYER_ID()) && BitTest(Global_1946250.f_4, 22))
	{
		return 0;
	}
	if (Global_1577870)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (__LIB_0__::func_626())
	{
		return 0;
	}
	if ((Global_2725324 && __LIB_0__::func_625()) || Global_2725324 == 0)
	{
		return 1;
	}
	if (Global_2715699.f_6619 == 123 && Global_2725327)
	{
		return 1;
	}
	if (Global_2725325)
	{
		if (Global_2715699.f_6619 == 122)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && !__LIB_0__::func_81())
		{
			return 1;
		}
	}
	if (Global_2725328)
	{
		if (iParam0 == 0)
		{
			if ((Global_2715699.f_6619 == 123 || (Global_2715699.f_6619 == 124 && __LIB_0__::func_509() == 1)) || Global_2715699.f_6619 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2715699.f_6597 || __LIB_5__::func_253(-1046478848)) && Global_2725329)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		return 1;
	}
	if (__LIB_16__::func_215() || __LIB_0__::func_622())
	{
		return 1;
	}
	return 0;
}

int func_2303(int iParam0, var uParam1)//Position - 0xD6B3C
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
			func_741(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_736(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2342(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xD8A3D
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
								func_2343(iParam2, 18);
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
void func_2343(var uParam0, int iParam1)//Position - 0xD8BB6
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2380(int iParam0, int iParam1)//Position - 0xE0CF9
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
		func_938(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2382(var uParam0, var uParam1)//Position - 0xE0E3B
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2386(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2384(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2384(var uParam0, var uParam1)//Position - 0xE0EC4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2386(var uParam0, var uParam1)//Position - 0xE0FE2
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_53(uParam0, uParam1);
			break;
		case 1:
			func_2391(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_481(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2391(var uParam0, var uParam1)//Position - 0xE1365
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

int func_2406(var uParam0, var uParam1, var uParam2)//Position - 0xE217D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 22))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar4) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar4)
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_16(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 22)) && __LIB_3__::func_981(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_2413(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 17))
								{
									if (__LIB_5__::func_210() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 17))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_775(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 17)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_775(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_775(uParam1, 0);
											__LIB_7__::func_775(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_29(*uParam0);
					bVar5 = __LIB_3__::func_698(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_3__::func_833(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_775(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_775(uParam1, 1);
	return 0;
}

int func_2413(var uParam0, int iParam1, bool bParam2)//Position - 0xE2A3B
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!func_1019(iParam1, 126, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_2450(var uParam0, int iParam1)//Position - 0xE5750
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 956075/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 956066/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 955998/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 955552/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 955447/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 955434/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 955370/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 955361/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 954900/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 954891/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 954498/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 954490/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 954481/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 954457/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 954395/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 954316/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 954019/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 954010/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 953999/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 953973/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 953964/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 953955/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 953933/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 953924/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 953916/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 953908/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 953900/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 953568/*func_2522*/;
			break;
		case 27:
			uParam0->f_25 = 953560/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 953552/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 953231/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 953203/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 953134/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 949400/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 949355/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 946188/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 946179/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 946170/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 946162/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 946151/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 946038/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 944915/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 944906/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 944897/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 944888/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 944877/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 944866/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 944858/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 944849/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 944840/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 944798/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 944789/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 944780/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 944769/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 944758/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 944749/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 944741/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 944733/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 944430/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 944360/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 943711/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 943702/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 943694/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 943685/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 943673/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 943239/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 943214/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 943197/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 942655/*func_2472*/;
			break;
		case 87:
			uParam0->f_1 = 941612/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 941603/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 941595/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 941586/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 941577/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 941568/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 941560/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 941552/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 941540/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 941531/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 941228/*__LIB_7__::func_798*/;
			break;
	}
}

int func_2472(var uParam0, var uParam1)//Position - 0xE623F
{
	return func_2473(uParam1);
}

int func_2473(var uParam0)//Position - 0xE624D
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
			func_741(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_736(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2522(int iParam0, int iParam1)//Position - 0xE8CE0
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
		func_938(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2560(var uParam0, int iParam1)//Position - 0xE96B4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 991173/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 991150/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 991020/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 990355/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 990092/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 990079/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 990069/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 989871/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 989823/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 989787/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 989672/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 989663/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 988733/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 988724/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 987562/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 987518/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 987495/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 987471/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 987409/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 987330/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 986656/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 983374/*func_2690*/;
			break;
		case 17:
			uParam0->f_17 = 982435/*__LIB_9__::func_468*/;
			break;
		case 19:
			uParam0->f_17 = 982390/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 982217/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 982132/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 981992/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 981976/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 981869/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 981822/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 981785/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 980374/*func_2668*/;
			break;
		case 25:
			uParam0->f_23 = 980008/*func_2665*/;
			break;
		case 27:
			uParam0->f_25 = 979194/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 979153/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 978918/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 978593/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 978396/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 978290/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 977974/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 972982/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 972925/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 966721/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 966712/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 966703/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 966695/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 966672/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 966659/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 966354/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 964191/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 964143/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 963951/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 963942/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 963931/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 963889/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 963881/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 963872/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 963863/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 963821/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 963812/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 963803/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 963792/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 963762/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 963753/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 963745/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 962659/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 962318/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 962204/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 961376/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 961367/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 961355/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 961263/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 961251/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 961063/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 961054/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 961040/*func_2599*/;
			break;
		case 87:
			uParam0->f_1 = 961024/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 961015/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 961007/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 960998/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 960555/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 959093/*func_2581*/;
			break;
		case 100:
			uParam0->f_22 = 958214/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 958037/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 958025/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 958011/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 676205/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 730281/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 958002/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 957901/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 957876/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 957704/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 957677/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2581(int iParam0, var uParam1)//Position - 0xEA275
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2582(iParam0, uParam1);
	}
	return 1;
}

int func_2582(int iParam0, var uParam1)//Position - 0xEA292
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
		if (func_737(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_2599(var uParam0, var uParam1)//Position - 0xEAA10
{
	return func_2473(uParam1);
}

void func_2665(int iParam0, int iParam1)//Position - 0xEF428
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
		func_938(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2668(var uParam0, var uParam1)//Position - 0xEF596
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2669(uParam0, uParam1);
	}
}

void func_2669(var uParam0, var uParam1)//Position - 0xEF5C2
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2680(*uParam0, 0, 0))
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
			func_2675(uParam0, uParam1);
			break;
		case 1:
			func_2671(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2671(var uParam0, var uParam1)//Position - 0xEF681
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
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
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

void func_2675(var uParam0, var uParam1)//Position - 0xEF882
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
			else if (func_2680(*uParam0, 0, 0))
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

int func_2680(int iParam0, bool bParam1, bool bParam2)//Position - 0xEFAE7
{
	int iVar0;
	int iVar1;
	func_938(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

int func_2690(var uParam0, var uParam1, var uParam2)//Position - 0xF014E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar4) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar4)
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_18(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 21)) && (__LIB_1__::func_124(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)) || __LIB_4__::func_153(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3))))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_2698(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 15))
								{
									if (__LIB_5__::func_210() || ((__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_5__::func_196(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 15))
									{
										if ((__LIB_5__::func_949(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_782(uParam1, 0);
											__LIB_7__::func_804(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 15)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_804(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_782(uParam1, 0);
											__LIB_7__::func_804(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_30(*uParam0);
					bVar5 = __LIB_3__::func_698(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_4__::func_160(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_782(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_782(uParam1, 1);
	return 0;
}

int func_2698(var uParam0, int iParam1, bool bParam2)//Position - 0xF0A66
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!func_1019(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_2738(var uParam0, int iParam1)//Position - 0xF1FCE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1021697/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1021688/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 1021620/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 1021269/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 1021036/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 1021023/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 1020959/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 1020950/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 1020225/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 1020216/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1019091/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 1019083/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 1019074/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 1019050/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1018978/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 1018889/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 1018529/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 1018390/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 1017715/*__LIB_9__::func_424*/;
			break;
		case 19:
			uParam0->f_17 = 1017689/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 1017680/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1017632/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 1017577/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 1017464/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 1017456/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 1017448/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 1014890/*func_2862*/;
			break;
		case 25:
			uParam0->f_23 = 1014882/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 1014874/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 1014866/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1014585/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 1014557/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 1014488/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 1014465/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 1011911/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 1011866/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1011770/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 1011761/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1011752/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1011744/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1011733/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1011620/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1010773/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 1010764/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1010551/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 1010542/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1010531/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 1010489/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 1010450/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 1010441/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 1010399/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 1010357/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 1010348/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1010339/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1010328/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1010317/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 1010308/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1010222/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 1010214/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1009873/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 1009803/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 1009106/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 1009097/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1009024/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 1009015/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1009003/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1008994/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 1008467/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 1006911/*func_2812*/;
			break;
		case 87:
			uParam0->f_1 = 1003679/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 1003664/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 1003302/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 1003011/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 1002504/*func_2791*/;
			break;
		case 98:
			uParam0->f_1 = 1000870/*func_2789*/;
			break;
		case 100:
			uParam0->f_22 = 1000592/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 1000072/*func_2785*/;
			break;
		case 112:
			uParam0->f_13 = 1000060/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 1000051/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 676205/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 999914/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 999866/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 730281/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 958002/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 957901/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 957876/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 999858/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 992762/*func_2740*/;
			break;
		case 125:
			uParam0->f_19 = 992706/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2740(int iParam0, int* iParam1)//Position - 0xF25FA
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
			__LIB_13__::func_588(iParam1);
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
				if (func_2812(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2766(iParam1))
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
					__LIB_13__::func_586(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_7__::func_842(iParam1);
				__LIB_13__::func_586(&iParam0);
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
					__LIB_13__::func_588(iParam1);
				}
			}
			else if (__LIB_7__::func_842(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_13__::func_588(iParam1);
			}
			break;
	}
	return 1;
}

int func_2766(int* iParam0)//Position - 0xF3853
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
		func_1776(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_2785(int iParam0, var uParam1)//Position - 0xF4288
{
	struct<14> Var0;
	char* sVar1;
	int iVar2;
	if (__LIB_4__::func_128(iParam0))
	{
		__LIB_4__::func_127(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			PED::DELETE_PED(&(uParam1->f_2));
		}
		if (!BitTest(Global_1946250.f_6, 21))
		{
			func_256(27245, 1, -1);
			MISC::SET_BIT(&(Global_1966471.f_22), 19);
			Global_2815059.f_6764 = 1;
			if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_897(PLAYER::PLAYER_ID()))
			{
				Var0.f_2 = 1823970438;
				__LIB_1__::func_634(Var0, __LIB_5__::func_734(0));
			}
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_6), 21);
		MISC::CLEAR_BIT(&(Global_1946250.f_6), 20);
		MISC::SET_BIT(&(Global_1946250.f_6), 22);
		STREAMING::REMOVE_IPL("ch_cutscene_casino");
		ENTITY::REMOVE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
		CUTSCENE::REMOVE_CUTSCENE();
	}
	else
	{
		sVar1 = "mini@strip_club@throwout_d@";
		if (CAM::DOES_CAM_EXIST(uParam1->f_11))
		{
			if (CAM::IS_CAM_ACTIVE(uParam1->f_11))
			{
				CAM::DESTROY_CAM(uParam1->f_11, false);
			}
		}
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[iVar2]))
			{
				PED::DELETE_PED(&(uParam1->f_140[iVar2]));
			}
			iVar2++;
		}
		STREAMING::REMOVE_ANIM_DICT(sVar1);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, true, 0);
		__LIB_7__::func_45(0, 0, 0, 1);
		__LIB_5__::func_412(0, 1, 1, 0, 0, 0, 0);
	}
}

int func_2789(int iParam0, var uParam1)//Position - 0xF45A6
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2582(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::getMinusOneOrNull())
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
			func_1776(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_2791(int iParam0, var uParam1)//Position - 0xF4C08
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
		if (Global_1946250.f_4539 != __LIB_0__::getMinusOneOrNull())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2792(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_2792(var uParam0, int iParam1)//Position - 0xF4D17
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
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_155(*uParam0, 14, 0), -1))
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

int func_2812(int iParam0, int* iParam1)//Position - 0xF5D3F
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
		if (!func_737(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			func_741(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_737(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_1776(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_2862(var uParam0, var uParam1)//Position - 0xF7C6A
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
			func_2866(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2863(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2863(var uParam0, var uParam1)//Position - 0xF7DA8
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
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
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

void func_2866(var uParam0, var uParam1)//Position - 0xF8035
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
				func_2868(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2867(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2867(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xF8152
{
	if (iParam1 == 0)
	{
		if (func_2680(iParam0, 0, 0))
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
		if (func_2680(iParam0, 0, 0))
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
		if (func_2680(iParam0, 1, 0))
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
		if (func_2680(iParam0, 0, 0))
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

void func_2868(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xF825A
{
	if (iParam1 == 0)
	{
		if (func_2680(iParam0, 0, 0))
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
		if (func_2680(iParam0, 0, 0))
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

void func_2911(var uParam0, int iParam1)//Position - 0xF970A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1057324/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1057310/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 1057211/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 1056149/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 1055995/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 1055942/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 1055887/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 1055769/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 1055637/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 1055522/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 1055512/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 1054343/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 1054334/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1053004/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 1052960/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 1052937/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1052913/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1052850/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 1052770/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 1052127/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 1048987/*func_3032*/;
			break;
		case 17:
			uParam0->f_17 = 1048279/*__LIB_9__::func_469*/;
			break;
		case 19:
			uParam0->f_17 = 1048253/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 1048074/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 1048010/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1047736/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 1047720/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 1047613/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 1047566/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 1047529/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 1046699/*func_3015*/;
			break;
		case 25:
			uParam0->f_23 = 1046333/*func_3012*/;
			break;
		case 27:
			uParam0->f_25 = 1045951/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 1045900/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 1045892/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1045655/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 1045534/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 1045114/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 1033821/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 1033776/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1030686/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 1030677/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1030668/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1030660/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1030611/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 1030529/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1029765/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 1029718/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 1029659/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 1029427/*__LIB_9__::func_425*/;
			break;
		case 52:
			uParam0->f_15 = 1029416/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 1029374/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 1029366/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1029357/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1029348/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1029306/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 1029297/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 1029288/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1029277/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1029235/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 1029226/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 1029218/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1028156/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 1027853/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 1027739/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 1026896/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 1026887/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1026814/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 1026805/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1026793/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1026591/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 1026582/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1024849/*func_2930*/;
			break;
		case 87:
			uParam0->f_1 = 1023394/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 1023385/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1023377/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1023368/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1023359/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1023350/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 1023342/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1023334/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 1023162/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 1023129/*__LIB_4__::func_215*/;
			break;
	}
}

int func_2930(int iParam0, var uParam1)//Position - 0xFA351
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
			func_741(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_736(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3012(int iParam0, int iParam1)//Position - 0xFF73D
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
		func_938(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3015(var uParam0, var uParam1)//Position - 0xFF8AB
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_3016(uParam0, uParam1);
	}
}

void func_3016(var uParam0, var uParam1)//Position - 0xFF8C9
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_54(uParam0, uParam1);
			break;
		case 1:
			func_3017(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3017(var uParam0, var uParam1)//Position - 0xFF903
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

int func_3032(var uParam0, var uParam1, var uParam2)//Position - 0x10019B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_4__::func_236(*uParam0);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 18))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar5) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar5)
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 18)) && __LIB_4__::func_235(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (__LIB_5__::func_980(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (func_3040(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13))
								{
									if (__LIB_5__::func_210() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13))
									{
										if ((__LIB_5__::func_980(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_783(uParam1, 0);
											__LIB_7__::func_804(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_804(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_783(uParam1, 0);
											__LIB_7__::func_804(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_31(*uParam0);
					bVar6 = __LIB_3__::func_698(iVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_4__::func_257(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_783(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_783(uParam1, 1);
	return 0;
}

int func_3040(var uParam0, int iParam1, bool bParam2)//Position - 0x100A45
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARENA_ENT_T" /* GXT: ARENA WORKSHOP */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!func_1019(iParam1, 122, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_3079(var uParam0, int iParam1)//Position - 0x102235
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1148831/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1148775/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1148431/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1148392/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1148358/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1148347/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1148283/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1148260/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1148236/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1148118/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1148039/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1148030/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1147434/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1147426/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1142224/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1142215/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1142200/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1141725/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1137754/*func_3159*/;
			break;
		case 17:
			uParam0->f_17 = 1136975/*__LIB_12__::func_40*/;
			break;
		case 19:
			uParam0->f_17 = 1136949/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1136738/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1136575/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1135966/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1135881/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1134965/*func_3148*/;
			break;
		case 30:
			uParam0->f_8 = 1133714/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1133039/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1132136/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1132127/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 34:
			uParam0->f_41 = 1131352/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1131299/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1062872/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 1062863/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1062854/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1062846/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1062823/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 1062683/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 1062648/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 1062610/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1062586/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1062575/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1062496/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 1062488/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1062479/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1062469/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1062180/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 1060800/*__LIB_9__::func_978*/;
			break;
		case 65:
			uParam0->f_21 = 1059837/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 1059642/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 1059539/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 1058850/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1058841/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1058829/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1058820/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1058808/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1058471/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 1058462/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1058345/*__LIB_7__::func_810*/;
			break;
	}
}

void func_3148(int iParam0, int iParam1)//Position - 0x115175
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
							func_3149(iParam0);
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
							func_3149(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3149(int iParam0)//Position - 0x11542D
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_3159(var uParam0, var uParam1, var uParam2)//Position - 0x115C5A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	*uParam2 = 1;
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_5__::func_784(uParam1, 1);
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_5__::func_784(uParam1, 1);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if (!__LIB_0__::func_872(iVar2, 1))
			{
				__LIB_7__::func_23(uParam1);
				if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_23(uParam1);
				if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar4) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar4)
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if (__LIB_5__::func_570())
			{
				__LIB_7__::func_23(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15)) && __LIB_4__::func_280(iVar4))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
						{
							if (func_3168(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12))
								{
									if (__LIB_5__::func_210() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12))
									{
										if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_804(iVar2);
											return 1;
										}
										else
										{
											if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_4__::func_291(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 1075838976, 0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												bVar0 = true;
												if (uParam1->f_22.f_94 == -1)
												{
													__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, "HACKER_ENTER0" /* GXT: Press ~INPUT_CONTEXT~ to enter the Nerve Center with current vehicle. */, 0, 0, 0, 0);
												}
											}
											if ((__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												__LIB_3__::func_122(&(uParam1->f_22.f_94));
												__LIB_5__::func_435(1, *uParam0);
												__LIB_5__::func_784(uParam1, 0);
												__LIB_7__::func_804(iVar2);
												return 1;
											}
										}
									}
								}
							}
							else
							{
								if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
								{
									HUD::CLEAR_HELP(true);
									__LIB_3__::func_122(&(uParam1->f_22.f_94));
								}
								__LIB_5__::func_784(uParam1, 1);
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_32(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_784(uParam1, 1);
				return 0;
			}
		}
		else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_784(uParam1, 1);
	return 0;
}

int func_3168(var uParam0, int iParam1, bool bParam2)//Position - 0x116836
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_3__::func_958())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!func_1019(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_3222(var uParam0, int iParam1)//Position - 0x1187A8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1212166/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1211926/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1209625/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1209416/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1209210/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1209132/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1208993/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1208937/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1208776/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1208540/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1208526/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1208517/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1205147/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1205138/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1191222/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1190966/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1190917/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1190706/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1190697/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1190668/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1189941/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1186086/*func_3395*/;
			break;
		case 17:
			uParam0->f_17 = 1184771/*__LIB_9__::func_470*/;
			break;
		case 19:
			uParam0->f_17 = 1184726/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1184561/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1184497/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1184270/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1184143/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1180760/*func_3360*/;
			break;
		case 25:
			uParam0->f_23 = 1180439/*func_3358*/;
			break;
		case 27:
			uParam0->f_25 = 1179290/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1179177/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1179096/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1178206/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1177659/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1176977/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1176884/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1167618/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1167560/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 1063741/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1167551/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1167542/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1167534/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1167485/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1167193/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1164166/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1164062/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1163779/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1163617/*__LIB_9__::func_426*/;
			break;
		case 52:
			uParam0->f_15 = 1163606/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1163348/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1163085/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1163076/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1161919/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1161661/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1161382/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1161373/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1161362/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1161104/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1161096/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1161038/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1160888/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1159182/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1158871/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1158719/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1157719/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1157710/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1157261/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1156982/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1156970/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1156737/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1156728/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1154631/*func_3243*/;
			break;
		case 87:
			uParam0->f_1 = 1151736/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1151727/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1151719/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1151693/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1151583/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1150866/*func_3229*/;
			break;
		case 100:
			uParam0->f_22 = 1150703/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1150575/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1150285/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1150261/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3229(var uParam0, var uParam1)//Position - 0x118F92
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
		func_1776(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3243(int iParam0, var uParam1)//Position - 0x119E47
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
			func_741(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_736(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_3358(int iParam0, int iParam1)//Position - 0x120317
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
		func_938(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3360(var uParam0, var uParam1)//Position - 0x120458
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3374(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3362(uParam0, uParam1);
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

void func_3362(var uParam0, var uParam1)//Position - 0x1204E3
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_55(uParam0, uParam1);
			break;
		case 1:
			func_3363(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3363(var uParam0, var uParam1)//Position - 0x12051D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
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

void func_3374(var uParam0, var uParam1)//Position - 0x120A3A
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_56(uParam0, uParam1);
			break;
		case 1:
			func_3383(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_482(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3383(var uParam0, var uParam1)//Position - 0x120EE9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_938(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

int func_3395(var uParam0, var uParam1, var uParam2)//Position - 0x121926
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_4__::func_322(*uParam0);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar5) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar5)
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_26(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15)) && __LIB_4__::func_337(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_987(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (func_3403(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 11))
								{
									if (__LIB_5__::func_210() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 11))
									{
										if ((__LIB_5__::func_987(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_785(uParam1, 0);
											__LIB_9__::func_519(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 11)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_9__::func_519(iVar2);
											return 1;
										}
										else if (((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && __LIB_5__::func_586(uParam0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_785(uParam1, 0);
											__LIB_9__::func_519(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_33(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_785(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_785(uParam1, 1);
	return 0;
}

int func_3403(var uParam0, int iParam1, bool bParam2)//Position - 0x1224F0
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!func_1019(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_3453(var uParam0, int iParam1)//Position - 0x127F0F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1219930/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1219874/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1219605/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1219544/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1219513/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1219449/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1219440/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 11:
			uParam0->f_11 = 1219431/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1219422/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 12:
			uParam0->f_33 = 1219211/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1219203/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1219179/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1219170/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1218226/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1218217/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1218192/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1218183/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1218157/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1218146/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1218137/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1218128/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1217660/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1217537/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1216767/*func_3495*/;
			break;
		case 30:
			uParam0->f_8 = 1216621/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1216610/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1216403/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1216086/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1216033/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1215260/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1215251/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1215242/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1215234/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1215223/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1214984/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1214975/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1214966/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1214957/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1214946/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1214935/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1214927/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1214918/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1214909/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1214616/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1214072/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1214064/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1213996/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1213856/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1213412/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1213403/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1213391/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1213382/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1213370/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1213361/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1213353/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3495(int iParam0, int iParam1)//Position - 0x1290FF
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
						func_3496(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3496(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3496(int iParam0)//Position - 0x129329
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3531(var uParam0, int iParam1)//Position - 0x129D63
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1318996/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1318892/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1318157/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1318075/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1317932/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1317922/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1317787/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1317720/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1317608/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1317369/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1317360/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1316860/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1316851/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1316843/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1316819/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1316739/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1316643/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1316438/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1316422/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1315613/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1310907/*func_3729*/;
			break;
		case 17:
			uParam0->f_17 = 1310088/*__LIB_9__::func_471*/;
			break;
		case 19:
			uParam0->f_17 = 1310062/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1309978/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1309914/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1309762/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1309591/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1308541/*func_3718*/;
			break;
		case 30:
			uParam0->f_8 = 1307923/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1307612/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1306673/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1305313/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1305255/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1257341/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1257332/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1257323/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1257315/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1257292/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1257164/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1257123/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1256855/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1256786/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1256775/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1256541/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1256191/*func_3693*/;
			break;
		case 56:
			uParam0->f_46 = 1256182/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1256111/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1255877/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1255677/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1254779/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1254053/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1251791/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1251158/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1251149/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1251137/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1251128/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1251116/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1250423/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1249883/*func_3642*/;
			break;
		case 85:
			uParam0->f_1 = 1245781/*func_3634*/;
			break;
		case 87:
			uParam0->f_1 = 1241793/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1241279/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1241108/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1240902/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1240706/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1239254/*func_3606*/;
			break;
		case 94:
			uParam0->f_1 = 1235117/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1234821/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1234791/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1234124/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1231475/*func_3569*/;
			break;
		case 100:
			uParam0->f_22 = 1223410/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1221467/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1221247/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1221223/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3569(int iParam0, int* iParam1)//Position - 0x12CA73
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
			if (Global_1853191 != __LIB_0__::getMinusOneOrNull())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1776(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
								func_1776(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
				func_2237(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
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
			func_1776(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3606(int iParam0, int* iParam1)//Position - 0x12E8D6
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
				func_741(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3608(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_1776(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_3608(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x12EBE8
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
		if ((*uParam3)[iVar1] != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_737(uParam2[iVar1], iVar3, 1, 0);
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

int func_3634(int iParam0, int* iParam1)//Position - 0x130255
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
			func_741(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_736(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_1776(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3642(int iParam0, var uParam1)//Position - 0x13125B
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
					func_741(&iVar1, &(uParam1->f_122), 24);
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

void func_3693(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x132AFF
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
					func_2343(iParam2, 166);
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

void func_3718(int iParam0, int iParam1)//Position - 0x13F77D
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_939(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_939(bVar7))
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
						func_3719(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3719(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3719(int iParam0)//Position - 0x13FA0D
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_3729(var uParam0, var uParam1, var uParam2)//Position - 0x1400BB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_4__::func_505())
	{
		return 0;
	}
	if (__LIB_4__::func_504())
	{
		return 0;
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_0__::func_846(*uParam0);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 13))
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == bVar5) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if (__LIB_3__::func_693())
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1) && __LIB_6__::func_907(iVar2, 1, 0) != bVar5)
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_29(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 13)) && __LIB_4__::func_493(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_332(uParam0) || __LIB_4__::func_451())
						{
							if (func_3741(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 9))
								{
									if ((__LIB_5__::func_331() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 9)) || (__LIB_5__::func_331() && __LIB_4__::func_451()))
									{
										if ((__LIB_5__::func_995(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && __LIB_3__::func_701(PLAYER::PLAYER_PED_ID()))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_786(uParam1, 0);
											__LIB_8__::func_935(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 9)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_8__::func_935(iVar2);
											return 1;
										}
										else
										{
											if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_4__::func_451()) && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
											{
												bVar0 = true;
												if (uParam1->f_22.f_94 == -1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, "BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, 0, 0, 0, 0);
													AUDIO::HINT_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", 0, -1);
												}
											}
											if (__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
											{
												MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 30);
												__LIB_3__::func_122(&(uParam1->f_22.f_94));
												__LIB_5__::func_786(uParam1, 0);
												__LIB_5__::func_435(1, *uParam0);
												__LIB_8__::func_935(iVar2);
												return 1;
											}
											if (__LIB_4__::func_451())
											{
												__LIB_3__::func_122(&(uParam1->f_22.f_94));
												__LIB_5__::func_435(1, *uParam0);
												__LIB_5__::func_786(uParam1, 0);
												return 1;
											}
											if (((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && __LIB_5__::func_617(uParam0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												if (!Global_1963928)
												{
													__LIB_5__::func_435(1, *uParam0);
													__LIB_5__::func_786(uParam1, 0);
													__LIB_8__::func_935(iVar2);
													return 1;
												}
											}
											else if (Global_1963928)
											{
												Global_1963928 = 0;
											}
										}
									}
								}
							}
						}
						else if ((Global_1963928 && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_3__::func_171(PLAYER::PLAYER_ID()))
						{
							Global_1963928 = 0;
						}
					}
				}
				else
				{
					__LIB_10__::func_34(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_786(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_786(uParam1, 1);
	return 0;
}

int func_3741(var uParam0, int iParam1, bool bParam2)//Position - 0x141145
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 16f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_2__::func_116(iParam1, 1))
		{
			if (!func_1019(iParam1, 117, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_3775(var uParam0, int iParam1)//Position - 0x14205D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1347110/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1347054/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1346785/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1346726/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1346695/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1346577/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1346493/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1346429/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1346406/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1346397/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1345944/*__LIB_9__::func_474*/;
			break;
		case 14:
			uParam0->f_11 = 1345935/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1345927/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1345903/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1345894/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1340819/*__LIB_9__::func_759*/;
			break;
		case 75:
			uParam0->f_4 = 1340810/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1340626/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1337527/*__LIB_10__::func_150*/;
			break;
		case 17:
			uParam0->f_17 = 1337019/*__LIB_8__::func_938*/;
			break;
		case 19:
			uParam0->f_17 = 1336993/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1336915/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1336852/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1336637/*__LIB_6__::func_909*/;
			break;
		case 22:
			uParam0->f_24 = 1336514/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1335567/*func_3873*/;
			break;
		case 30:
			uParam0->f_8 = 1335003/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1334825/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1333713/*__LIB_8__::func_973*/;
			break;
		case 34:
			uParam0->f_41 = 1333019/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1332966/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1332389/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1332380/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1332371/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1332194/*__LIB_8__::func_972*/;
			break;
		case 77:
			uParam0->f_13 = 1332183/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1331685/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1331644/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1331635/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1331626/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1331615/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1331604/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1331596/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1331587/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1331578/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1331349/*__LIB_8__::func_859*/;
			break;
		case 64:
			uParam0->f_47 = 1325419/*__LIB_10__::func_61*/;
			break;
		case 65:
			uParam0->f_21 = 1323835/*__LIB_8__::func_988*/;
			break;
		case 66:
			uParam0->f_21 = 1323509/*__LIB_6__::func_759*/;
			break;
		case 67:
			uParam0->f_21 = 1322784/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1322239/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1322230/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1322218/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1322209/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1322197/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1320466/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1320016/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1320000/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3873(int iParam0, int iParam1)//Position - 0x14610F
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_939(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_939(bVar7))
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
						func_3874(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3874(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3874(int iParam0)//Position - 0x1463A2
{
	__LIB_8__::func_973(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3945(var uParam0, int iParam1)//Position - 0x148E2F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1399614/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1399534/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1399035/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1398985/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1398898/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1398888/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1398770/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1398648/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1398560/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1398546/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1398537/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1398158/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1398149/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1398141/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1398117/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1397985/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1397703/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1397689/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1397171/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1393547/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1393009/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1392983/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1392899/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1392835/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1392655/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1392507/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1391883/*func_4069*/;
			break;
		case 30:
			uParam0->f_8 = 1391368/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1391083/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1390412/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1389148/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1389103/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1363058/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1363049/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1363040/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1363032/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1363009/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1362905/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1362864/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1362650/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1362581/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1362570/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1362432/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1362244/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1362235/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1362058/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1361920/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1361912/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1361076/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1360969/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1360905/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1360417/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1360408/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1360396/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1360387/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1360375/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1359670/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1359570/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1357586/*func_4018*/;
			break;
		case 87:
			uParam0->f_1 = 1355163/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1355154/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1355091/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1354770/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1350763/*func_3967*/;
			break;
		case 100:
			uParam0->f_22 = 1348487/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1348283/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1348267/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3967(int iParam0, int* iParam1)//Position - 0x149C6B
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_741(&iVar0, &(iParam1->f_109), 12);
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

int func_4018(int iParam0, int* iParam1)//Position - 0x14B712
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
			func_741(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_736(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1776(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4069(int iParam0, int iParam1)//Position - 0x153D0B
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_939(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_939(bVar7))
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
						func_4070(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4070(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4070(int iParam0)//Position - 0x153F4D
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4113(var uParam0, int iParam1)//Position - 0x155B47
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1409039/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1408979/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1408760/*__LIB_6__::func_912*/;
			break;
		case 3:
			uParam0->f_34 = 1408709/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1408675/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1408611/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1408602/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1408578/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1408569/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1408477/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1408468/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1408460/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1408208/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1408199/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1408190/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1408181/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1408172/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1408127/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1408116/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1408069/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1408017/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1407961/*__LIB_6__::func_911*/;
			break;
		case 22:
			uParam0->f_24 = 1407876/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1406909/*func_4149*/;
			break;
		case 30:
			uParam0->f_8 = 1406699/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1406668/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1406478/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1402475/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1402422/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1401231/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1401222/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1401213/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1401205/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1401194/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1401091/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1401066/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1401028/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1401019/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1401008/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1400927/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1400919/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1400910/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1400900/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1400693/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1400685/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1400677/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1400669/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1400661/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1400652/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1400643/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1400631/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1400622/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1400610/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1400601/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1400592/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1400584/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4149(int iParam0, int iParam1)//Position - 0x1577BD
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
						func_4150(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4150(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4150(int iParam0)//Position - 0x157A3A
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4177(var uParam0, int iParam1)//Position - 0x158018
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1488503/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1488447/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1486902/*__LIB_8__::func_869*/;
			break;
		case 3:
			uParam0->f_34 = 1486853/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1486819/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1486755/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1486732/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1486708/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1486590/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1486523/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1486514/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1486169/*__LIB_9__::func_505*/;
			break;
		case 14:
			uParam0->f_11 = 1486160/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1486152/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1480826/*__LIB_9__::func_800*/;
			break;
		case 13:
			uParam0->f_2 = 1480817/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1480808/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1480783/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1472590/*func_4282*/;
			break;
		case 17:
			uParam0->f_17 = 1472006/*__LIB_9__::func_477*/;
			break;
		case 19:
			uParam0->f_17 = 1471980/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1471919/*__LIB_9__::func_476*/;
			break;
		case 21:
			uParam0->f_3 = 1471799/*__LIB_6__::func_914*/;
			break;
		case 74:
			uParam0->f_53 = 1471743/*__LIB_6__::func_913*/;
			break;
		case 22:
			uParam0->f_24 = 1471658/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1470686/*func_4271*/;
			break;
		case 30:
			uParam0->f_8 = 1469946/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1469676/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1468740/*__LIB_9__::func_504*/;
			break;
		case 34:
			uParam0->f_41 = 1465396/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1465343/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1464660/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1464651/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1464642/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1464199/*__LIB_10__::func_65*/;
			break;
		case 77:
			uParam0->f_13 = 1464188/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1464085/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1464060/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1464022/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1463998/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1463987/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1463908/*__LIB_8__::func_865*/;
			break;
		case 54:
			uParam0->f_45 = 1463900/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1463891/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1463881/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1463652/*__LIB_8__::func_864*/;
			break;
		case 64:
			uParam0->f_47 = 1417247/*func_4214*/;
			break;
		case 65:
			uParam0->f_21 = 1416109/*__LIB_8__::func_989*/;
			break;
		case 66:
			uParam0->f_21 = 1415886/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1414991/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1414446/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1414437/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1414425/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1414416/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1414404/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1412345/*__LIB_9__::func_503*/;
			break;
		case 73:
			uParam0->f_51 = 1410576/*__LIB_10__::func_153*/;
			break;
		case 78:
			uParam0->f_59 = 1410043/*__LIB_8__::func_974*/;
			break;
	}
}

void func_4214(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x15A01F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_7__::func_762();
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_4__::func_671())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_4__::func_670(0);
			}
		}
		if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == joaat("GtaMloRoom001") && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
				{
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_9__::func_475(uParam0);
		}
		if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_506, 11))
			{
				if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1) || BitTest(Global_1946250.f_506, 11))
				{
					if (!__LIB_4__::func_649() && !__LIB_1__::func_659(Global_1853185))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						__LIB_4__::func_534(0);
						Global_1946250.f_3630 = 0;
						__LIB_4__::func_669(0);
						CAM::DO_SCREEN_FADE_IN(500);
						__LIB_4__::func_660(iParam1);
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
						__LIB_4__::func_539(1);
						__LIB_4__::func_668(0);
						__LIB_4__::func_527(0);
					}
					else
					{
						__LIB_7__::func_32(iParam1);
					}
				}
			}
		}
		if (__LIB_4__::func_649() || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
		if (Global_1853185 != __LIB_0__::getMinusOneOrNull())
		{
			if (PLAYER::PLAYER_ID() == Global_1853185)
			{
				if (__LIB_1__::func_659(PLAYER::PLAYER_ID()))
				{
					if ((((__LIB_4__::func_665(PLAYER::PLAYER_ID()) || __LIB_4__::func_295(PLAYER::PLAYER_ID())) || __LIB_3__::func_965()) || __LIB_4__::func_671()) || Global_1957730)
					{
						__LIB_1__::func_33(1);
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_4__::func_535(PLAYER::PLAYER_ID()))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (__LIB_1__::func_693(bVar2, 1, 1))
					{
						if (__LIB_3__::func_644(bVar2))
						{
							if (__LIB_5__::func_196(bVar2) == 81)
							{
								if (__LIB_9__::func_800(iParam1) && !__LIB_2__::func_730(PLAYER::PLAYER_ID()))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									__LIB_4__::func_534(0);
									__LIB_4__::func_664(0);
									CAM::DO_SCREEN_FADE_IN(500);
									__LIB_4__::func_660(iParam1);
									__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
									if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
									{
										NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
									}
									__LIB_4__::func_539(1);
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_4__::func_665(PLAYER::PLAYER_ID()))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else
			{
				HUD::DISABLE_FRONTEND_THIS_FRAME();
			}
		}
	}
	if (__LIB_0__::func_833())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if ((((__LIB_9__::func_800(iParam1) && !__LIB_2__::func_730(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_8__::func_937()) && !__LIB_1__::func_659(PLAYER::PLAYER_ID())) || !__LIB_0__::func_893())
	{
		if (!__LIB_0__::func_833())
		{
			__LIB_7__::func_854(uParam0, 1);
		}
	}
	if ((((BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 25)) && __LIB_10__::func_4(iParam1)) && !__LIB_1__::func_659(__LIB_8__::func_937())) || BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_4__::func_649() && !__LIB_1__::func_659(Global_1853185))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("am_mp_smpl_interior_int")) > 0)
			{
				__LIB_3__::func_514(0);
				__LIB_4__::func_539(1);
			}
			__LIB_5__::func_435(0, -1);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			__LIB_4__::func_527(0);
			__LIB_4__::func_669(0);
			__LIB_4__::func_663(0);
			CAM::DO_SCREEN_FADE_IN(500);
			__LIB_4__::func_660(iParam1);
			__LIB_4__::func_664(0);
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_4__::func_668(0);
		}
		else
		{
			__LIB_7__::func_32(iParam1);
		}
	}
	if (__LIB_5__::func_757(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_4216(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !__LIB_9__::func_800(iParam1))
		{
		}
		else if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_8__::func_937())
		{
			__LIB_7__::func_854(uParam0, 1);
		}
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_6__::func_857(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
		}
	}
	if (__LIB_4__::func_661())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (__LIB_3__::func_950(PLAYER::PLAYER_ID()) || __LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

int func_4216(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x15A568
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1) && !BitTest(uParam0->f_22, 1)) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("oppressor2")) && !__LIB_5__::func_808(PLAYER::PLAYER_ID(), 81))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (((iVar1 == joaat("caddy2") || iVar1 == joaat("caddy3")) || iVar1 == joaat("hauler2")) || iVar1 == joaat("phantom3"))
		{
			return 0;
		}
	}
	if (!__LIB_4__::func_545())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_3__::func_958())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!__LIB_5__::func_353())
		{
			return 0;
		}
		bVar2 = __LIB_4__::func_633(PLAYER::PLAYER_ID());
		bVar3 = __LIB_0__::func_389(PLAYER::PLAYER_ID());
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (!func_1019(iParam1, 1234, &Var0, 0, 0, bVar2, bVar3, iParam2))
			{
				return 0;
			}
		}
	}
	if (__LIB_4__::func_662(ENTITY::GET_ENTITY_MODEL(iParam1)))
	{
		return 0;
	}
	if (__LIB_4__::func_306(PLAYER::PLAYER_ID()) || __LIB_4__::func_305(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_8__::func_937() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if ((!__LIB_1__::func_461(iParam1, 1) && !__LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_2815059.f_303 != iParam1 && __LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_541(iParam1, 0) && Global_2703735.f_501[PLAYER::PLAYER_ID()] == iParam1)
	{
		return 0;
	}
	if (Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */ && __LIB_0__::func_872(iParam1, 1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if ((Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_4__::func_633(PLAYER::PLAYER_ID())) && __LIB_5__::func_440(iParam1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if (Global_262145.f_21137 /* Tunable: -1117138206 */)
	{
		__LIB_1__::func_775(156, &iVar4, 1);
		__LIB_1__::func_660(__LIB_1__::func_463(), &iVar5);
		if (iVar5 == 156 && __LIB_1__::func_461(iParam1, 1))
		{
		}
		else if (iVar4 > 0)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
			}
			return 0;
		}
	}
	if (__LIB_3__::func_531(iParam1, 0) || __LIB_3__::func_531(iParam1, 1))
	{
		return 0;
	}
	return 1;
}

void func_4271(int iParam0, int iParam1)//Position - 0x1670DE
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_939(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_939(bVar7))
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
						func_4272(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4272(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4272(int iParam0)//Position - 0x167371
{
	__LIB_9__::func_504(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4282(var uParam0, var uParam1, var uParam2)//Position - 0x16784E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	var uVar4;
	*uParam2 = 1;
	if (__LIB_3__::func_965() || __LIB_4__::func_671())
	{
		return 0;
	}
	if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_8__::func_937() != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if (Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_7__::func_762();
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_7__::func_854(uParam1, 1);
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_7__::func_854(uParam1, 1);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (__LIB_4__::func_306(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
					}
					if (((((__LIB_5__::func_757(iVar0) && __LIB_4__::func_680(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && func_4216(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !__LIB_9__::func_800(*uParam0)) || ((__LIB_4__::func_661() && !__LIB_9__::func_800(*uParam0)) && __LIB_1__::func_659(PLAYER::PLAYER_ID())))
					{
						if (MISC::IS_PC_VERSION())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
								{
									if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_3__::func_56("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
									}
								}
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("scramjet")))
								{
									if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_3__::func_56("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
									}
								}
							}
						}
						__LIB_4__::func_563(1);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
						if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
									{
										bVar2 = false;
										if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &iVar1))
										{
											if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
											{
												bVar2 = true;
												HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */, false);
											}
										}
										if (!bVar2)
										{
											HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */, false);
										}
									}
									else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */, false);
									}
								}
								return 0;
							}
							if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Mobile Operations Center. */, false);
									}
									else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_AIR" /* GXT: You cannot store this aircraft in your Mobile Operations Center. */, false);
									}
								}
								return 0;
							}
							if (__LIB_4__::func_633(PLAYER::PLAYER_ID()) && __LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MP_TRUCK_PEG" /* GXT: You cannot store a Pegasus vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()) && !__LIB_7__::func_833(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()) && (__LIB_4__::func_679(PLAYER::PLAYER_ID()) || __LIB_4__::func_678(PLAYER::PLAYER_ID())))
							{
								if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_VEHIN" /* GXT: You must remove the vehicle currently inside your Mobile Operations Center to modify this vehicle. */, false);
									}
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */;
							}
							else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */;
							}
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
							if (uParam1->f_22.f_94 == -1 && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
							{
								__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, sVar3, 0, 0, 0, 0);
								if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
								{
									__LIB_4__::func_530(0);
								}
							}
							if (__LIB_0__::func_77(0))
							{
								__LIB_3__::func_122(&(uParam1->f_22.f_94));
							}
							if ((__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || BitTest(uParam1->f_22, 1))
							{
								__LIB_7__::func_854(uParam1, 0);
								if (!__LIB_4__::func_633(PLAYER::PLAYER_ID()) || __LIB_10__::func_62(uParam1, uParam0))
								{
									if (__LIB_9__::func_478(&(uParam1->f_22), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										__LIB_3__::func_122(&(uParam1->f_22.f_94));
										if (BitTest(uParam1->f_22, 1))
										{
											MISC::CLEAR_BIT(&(uParam1->f_22), 1);
										}
										if (__LIB_5__::func_651(3, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 16);
										}
										else if (__LIB_5__::func_651(7, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 17);
										}
										if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
										{
											__LIB_4__::func_527(1);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f);
											VEHICLE::SET_VEHICLE_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1f);
											VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
										}
										if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
										{
											__LIB_6__::func_844(1, 0);
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
										}
										__LIB_5__::func_435(1, 81);
										__LIB_4__::func_528(1);
									}
								}
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
							__LIB_1__::func_33(0);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							HUD::DISABLE_FRONTEND_THIS_FRAME();
							HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
							if (__LIB_5__::func_356() && __LIB_5__::func_629())
							{
								if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
								{
									__LIB_4__::func_669(1);
									__LIB_4__::func_663(1);
								}
								__LIB_5__::func_457(1);
								__LIB_8__::func_869(81, uParam1, 0, 0);
								__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
								if (__LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
								{
									__LIB_4__::func_553(PLAYER::PLAYER_ID(), 81, 2);
								}
								else if (__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
								{
									__LIB_4__::func_956(PLAYER::PLAYER_ID(), 81, 2);
								}
								__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
								__LIB_4__::func_563(0);
								return 1;
							}
						}
					}
					else
					{
						__LIB_4__::func_563(0);
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
						__LIB_7__::func_854(uParam1, 1);
					}
				}
				else
				{
					if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
					}
					__LIB_7__::func_854(uParam1, 1);
				}
			}
			else
			{
				__LIB_10__::func_66(*uParam0);
				if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_864(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_795(&(uParam1->f_22.f_101), 0, 0);
					}
					else if (__LIB_0__::func_937(&(uParam1->f_22.f_101), 10000, 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							__LIB_0__::clearF_1Prop(&(uParam1->f_22.f_101));
						}
					}
					if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_5__::func_301(Global_1946250.f_3630) && __LIB_2__::func_730(Global_1946250.f_3630))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						__LIB_3__::func_669(Global_1946250.f_3630);
						MISC::SET_BIT(&(Global_1946250.f_506), 1);
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_4__::func_561(1);
						__LIB_5__::func_435(1, 81);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_0__::clearF_1Prop(&(uParam1->f_22.f_101));
					}
					if (__LIB_5__::func_301(Global_1946250.f_3630) || __LIB_2__::func_730(Global_1946250.f_3630))
					{
						if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
						{
							__LIB_4__::func_527(1);
							__LIB_4__::func_669(1);
							__LIB_4__::func_663(1);
						}
						return 1;
					}
				}
				else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
				{
					if (__LIB_5__::func_196(Global_1946250.f_3630) != 81 && !__LIB_2__::func_730(PLAYER::PLAYER_ID()))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 7);
							__LIB_0__::clearF_1Prop(&(uParam1->f_22.f_101));
						}
					}
				}
			}
		}
		else
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_7__::func_854(uParam1, 1);
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_4343(var uParam0, int iParam1)//Position - 0x16B680
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1524476/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1524360/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1523129/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1523059/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1522885/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1522761/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1522538/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1522524/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1522500/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1522382/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1522144/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1522135/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1520431/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1520422/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1520414/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1519908/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1519869/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1519860/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1519851/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1519383/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1517344/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1515208/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1515182/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1515098/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1514998/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1514831/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1514724/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1514072/*func_4465*/;
			break;
		case 30:
			uParam0->f_8 = 1513572/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1513279/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1512281/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1512177/*__LIB_6__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 1510032/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1422772/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1509972/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1509963/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1509954/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1509688/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1509677/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1509537/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1509496/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1509299/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1509215/*__LIB_9__::func_435*/;
			break;
		case 52:
			uParam0->f_15 = 1509204/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1508922/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1508914/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1508905/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1508844/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1508562/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1506646/*__LIB_9__::func_521*/;
			break;
		case 65:
			uParam0->f_21 = 1506603/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1505900/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1504816/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1504225/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1504216/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1504204/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1504195/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1504183/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1501513/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1499667/*func_4388*/;
			break;
		case 85:
			uParam0->f_1 = 1497333/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1493108/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1493099/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1493056/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1492755/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1491992/*func_4355*/;
			break;
		case 94:
			uParam0->f_1 = 1490492/*__LIB_5__::func_362*/;
			break;
		case 102:
			uParam0->f_1 = 1489924/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1489916/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1489841/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1489767/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1489743/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4355(var uParam0, var uParam1)//Position - 0x16C418
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_741(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_4388(int iParam0, var uParam1)//Position - 0x16E213
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
				func_1776(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_741(&iVar2, &(uParam1->f_109), 14);
								func_736(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_741(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_741(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_741(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_736(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_1776(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4465(int iParam0, int iParam1)//Position - 0x171A58
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_939(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_939(bVar7))
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
						func_4466(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4466(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4466(int iParam0)//Position - 0x171CB6
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4517(var uParam0, int iParam1)//Position - 0x174305
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1566618/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1564300/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1564237/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1564181/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1563466/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1563458/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1563449/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1563425/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1563416/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1561588/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1561579/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1561571/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1561562/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1561553/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1561544/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1561535/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1561526/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1561500/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1561489/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1561480/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1561471/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1561462/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1561454/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1561446/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1560285/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1560274/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1560246/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1560237/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1560192/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1526348/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1526339/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1526330/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1526322/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1526311/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1526303/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1526294/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1525995/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1525966/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1525935/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1525901/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1525857/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1525828/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1525819/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1525762/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1525754/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1525746/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1525738/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1525730/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1525704/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1525678/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1525666/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1525657/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1525645/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1525636/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1525628/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1525445/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4594(var uParam0, int iParam1)//Position - 0x17EC8B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1610521/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1610211/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1605238/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1605209/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1605014/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1604664/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1604522/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1604498/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1603962/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1603857/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1603848/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1603743/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1603734/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1603726/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1603717/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1603708/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1603419/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1603410/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1603326/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1603317/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1602695/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1602495/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1602431/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1602371/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1602362/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1602119/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1601746/*func_4633*/;
			break;
		case 30:
			uParam0->f_8 = 1601608/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1601168/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1600503/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1597925/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1597880/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1572034/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1571806/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1571630/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1571622/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1571611/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1571369/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1571337/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1571271/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1571247/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1571064/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1570469/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1570232/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1570223/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1570158/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1569736/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1569728/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1569720/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1569660/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1569642/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1569633/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1569624/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1569120/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1568972/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1568927/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1568918/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1568910/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1568894/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4633(int iParam0, int iParam1)//Position - 0x1870D2
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
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_939(bVar2))
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

void func_4671(var uParam0, int iParam1)//Position - 0x189322
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1645535/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1645425/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1642933/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1642904/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1642744/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1642626/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1642409/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1642385/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1642267/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1642116/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1642107/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1641104/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1641095/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1641087/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1641078/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1640924/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1640915/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1640827/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1640037/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1639407/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1639381/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1639342/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1639282/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1639273/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1639219/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1638915/*func_4759*/;
			break;
		case 30:
			uParam0->f_8 = 1638792/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1638572/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1638285/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1637879/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1637834/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1620304/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1620295/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1620211/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1620203/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1620180/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1620128/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1620096/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1619918/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1619821/*__LIB_12__::func_51*/;
			break;
		case 52:
			uParam0->f_15 = 1619810/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1619495/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1618631/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1618622/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1613815/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1613801/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1612363/*__LIB_9__::func_777*/;
			break;
		case 65:
			uParam0->f_21 = 1612355/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1612304/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1612276/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1612267/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1612258/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1611974/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1611878/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1611866/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1611680/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1611508/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4759(int iParam0, int iParam1)//Position - 0x190203
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
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_939(bVar2))
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

void func_4803(var uParam0, int iParam1)//Position - 0x191BE8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1673369/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1673223/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1667995/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1667966/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1667556/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1667386/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1666991/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1666967/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1666958/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1666863/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1666854/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1666846/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1666837/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1666552/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1666543/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1666455/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1666446/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1666191/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1666165/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1666156/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1666147/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1666138/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1666130/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1666122/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1665999/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1665753/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1665497/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1663344/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1663299/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1648846/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1648837/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1648828/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1648820/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1648809/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1648757/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1648725/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1648596/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1648572/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1648561/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1647910/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1647274/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1647265/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1647198/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1647184/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1646805/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1646730/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1646679/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1646661/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1646652/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1646643/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1646526/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1646517/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1646505/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1646496/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1646488/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4876(var uParam0, int iParam1)//Position - 0x1988A2
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1673836/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1673827/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1673818/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1673658/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1673650/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1673495/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4884(var uParam0, int iParam1)//Position - 0x198A75
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1674053/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1674044/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1674035/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1673658/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1674026/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1673962/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4890(var uParam0, int iParam1)//Position - 0x198B4E
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1674280/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1674271/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1673658/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1674262/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1674162/*__LIB_8__::func_992*/;
			break;
	}
}

Vector3 func_4895(struct<3> Param0, int iParam1)//Position - 0x198C31
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_589(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

int func_4903(int* iParam0, int* iParam1, var uParam2)//Position - 0x19BEBB
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	bVar0 = false;
	if (!BitTest(*iParam1, 15))
	{
		MISC::SET_BIT(iParam1, 15);
	}
	if (((((iParam1->f_87 == 3 && iParam0->f_8 == 3) && uParam2->f_33 == 10) && !BitTest(iParam1->f_28, 4)) && !BitTest(iParam1->f_28, 6)) && !__LIB_2__::func_782(uParam2->f_31, 0, 0))
	{
		bVar0 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_4))
	{
		if (__LIB_7__::func_688(uParam2->f_31))
		{
			func_587(iParam1, iParam0, uParam2, &Var1, &Var2, bVar0);
		}
		else
		{
			iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_586(iParam1, iParam0, uParam2, bVar0), 5f, __LIB_11__::func_899(iParam1, uParam2, iParam0), false, false, true);
			if (iVar3 != 0)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
				Var2 = { ENTITY::GET_ENTITY_ROTATION(iVar3, 2) };
			}
		}
		if ((Var1.f_0 != 0f || Var1.f_1 != 0f) || Var1.f_2 != 0f)
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_11__::func_806(iParam1, uParam2)))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(__LIB_11__::func_806(iParam1, uParam2));
			}
			MISC::CLEAR_BIT(iParam1, 4);
			iParam1->f_4 = OBJECT::CREATE_OBJECT(__LIB_11__::func_919(iParam1, uParam2), Var1, false, false, false);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_4, Var2, 2, true);
			ENTITY::SET_ENTITY_COORDS(iParam1->f_4, Var1, true, false, false, true);
			ENTITY::SET_ENTITY_LOD_DIST(iParam1->f_4, 200);
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam1->f_4);
			__LIB_10__::func_841(iParam1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(iParam1, 4);
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_11__::func_806(iParam1, uParam2)))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(__LIB_11__::func_806(iParam1, uParam2), false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_4))
		{
			if (STREAMING::IS_MODEL_VALID(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
			{
				if (HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
				{
					iParam1->f_2 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(__LIB_11__::func_806(iParam1, uParam2));
					iParam1->f_86 = __LIB_10__::func_840(iParam1->f_87);
					__LIB_10__::func_910();
					GRAPHICS::SET_TV_CHANNEL(-1);
					MISC::SET_BIT(iParam1, 5);
					__LIB_0__::clearF_1Prop(&(iParam1->f_80));
					return 1;
				}
				else
				{
					HUD::RELEASE_NAMED_RENDERTARGET(__LIB_11__::func_806(iParam1, uParam2));
					HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iParam1->f_4));
				}
			}
		}
		else if (BitTest(*iParam1, 27))
		{
			MISC::CLEAR_BIT(iParam1, 27);
		}
	}
	if (__LIB_0__::func_937(&(iParam1->f_80), 10000, 0))
	{
		__LIB_0__::clearF_1Prop(&(iParam1->f_80));
		return 1;
	}
	return 0;
}

void func_4908(var uParam0, bool bParam1)//Position - 0x19C3CC
{
	if (__LIB_10__::func_197(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_10__::func_892(uParam0, 1);
		}
		func_4909(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_4909(var uParam0)//Position - 0x19C404
{
	func_4976(uParam0);
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_1.f_35 == 3)
		{
		}
		else if (__LIB_1__::func_826(PLAYER::PLAYER_ID()))
		{
		}
		else if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 3 || Global_1574962)
		{
			NETWORK::NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
	{
		if (!PED::IS_PED_INJURED(__LIB_1__::func_4()))
		{
			PED::SET_PED_LOD_MULTIPLIER(__LIB_1__::func_4(), 1f);
		}
	}
	if (!__LIB_2__::func_177() && !BitTest(Global_2621446, 13))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	if (!BitTest(uParam0->f_1.f_2, 3) && (!__LIB_1__::func_11() || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)))
	{
		if (!BitTest(uParam0->f_1.f_2, 0) || !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_10__::func_889())
			{
				if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
		}
	}
	__LIB_15__::func_194(uParam0);
	__LIB_11__::func_920(&(uParam0->f_47));
	__LIB_15__::func_177(uParam0);
	__LIB_10__::func_338(&(uParam0->f_1));
	__LIB_10__::func_205();
	uParam0->f_1.f_4 = 0;
	HUD::UNLOCK_MINIMAP_POSITION();
	MISC::CLEAR_BIT(&(uParam0->f_47), 0);
	uParam0->f_1.f_26 = 0;
	uParam0->f_1.f_33 = 0;
	__LIB_10__::func_327(&(uParam0->f_1), 0);
	uParam0->f_1.f_27 = 0;
	uParam0->f_1.f_25 = 0;
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1), 10);
	if (!BitTest(uParam0->f_1.f_2, 2))
	{
		if (!__LIB_10__::func_337())
		{
			NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		}
		__LIB_1__::func_36(0, 0, 1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_10__::func_887(&(uParam0->f_1));
	__LIB_10__::func_886();
	__LIB_10__::func_336();
	if (__LIB_10__::func_337())
	{
		__LIB_2__::func_263(1);
	}
	else
	{
		NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(false);
	}
	__LIB_10__::func_335(&(uParam0->f_1.f_7), 0);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
	MISC::CLEAR_BIT(&Global_2621446, 5);
	MISC::CLEAR_BIT(&Global_2621446, 10);
	MISC::CLEAR_BIT(&Global_2621446, 4);
	MISC::CLEAR_BIT(&Global_2621446, 6);
	MISC::CLEAR_BIT(&Global_2621446, 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 12);
	MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 2)
	{
		__LIB_7__::func_695(&(uParam0->f_1), 0);
	}
	if (!BitTest(Global_2621446, 9))
	{
		__LIB_5__::func_837();
	}
	__LIB_10__::func_384(&(uParam0->f_47));
	if (BitTest(uParam0->f_1, 2))
	{
		__LIB_10__::func_380(&(uParam0->f_1));
	}
	if (!__LIB_10__::func_334(Global_4718592.f_168757))
	{
		Global_1836146 = 0;
	}
	if (!Global_1836610 && !__LIB_10__::func_227())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	uParam0->f_1.f_1 = 0;
	uParam0->f_1.f_2 = 0;
	Global_2715699.f_2846.f_180 = 0;
	__LIB_13__::func_574();
	uParam0->f_47.f_2197 = 0;
	STREAMING::CLEAR_FOCUS();
	__LIB_7__::func_694(&(uParam0->f_1), 0);
}

void func_4976(var uParam0)//Position - 0x19D4BD
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_4977(uParam0->f_2262, 0);
		}
		uParam0->f_2262 = -1;
	}
}

void func_4977(int iParam0, bool bParam1)//Position - 0x19D4EE
{
	if (bParam1)
	{
		if (!__LIB_3__::func_479(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
		{
			__LIB_7__::func_698(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
			if (__LIB_12__::func_48(iParam0))
			{
				__LIB_10__::func_976(iParam0, 1);
			}
		}
	}
	else if (__LIB_3__::func_479(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
	{
		__LIB_7__::func_696(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
	}
	if (iParam0 == 10)
	{
		func_4977(11, bParam1);
		func_4977(12, bParam1);
		func_4977(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_4977(37, bParam1);
		func_4977(38, bParam1);
		func_4977(39, bParam1);
		func_4977(40, bParam1);
		func_4977(41, bParam1);
	}
}

void func_5024(var uParam0)//Position - 0x1A6167
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_5025(uParam0, iVar0);
		iVar0++;
	}
	uParam0->f_1.f_29 = 0;
}

void func_5025(var uParam0, int iParam1)//Position - 0x1A6194
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam1 <= 0 && iVar0 <= 0)
		{
			__LIB_11__::func_776(uParam0);
		}
		switch (iVar0)
		{
			case 0:
				if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iParam1), 0, 1))
				{
					if (__LIB_10__::func_332())
					{
						if (__LIB_16__::func_220(PLAYER::PLAYER_ID()))
						{
							if (__LIB_13__::func_558(PLAYER::INT_TO_PLAYERINDEX(iParam1)))
							{
								if (__LIB_2__::func_50())
								{
									if (__LIB_2__::func_759(PLAYER::INT_TO_PLAYERINDEX(iParam1), PLAYER::PLAYER_ID(), 0))
									{
										Var1.f_0 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam1));
										func_5032(uParam0, iVar0, Var1, iParam1);
									}
								}
								else if (__LIB_2__::func_759(PLAYER::INT_TO_PLAYERINDEX(iParam1), __LIB_0__::func_797(), 1))
								{
									if (PLAYER::PLAYER_ID() != PLAYER::INT_TO_PLAYERINDEX(iParam1))
									{
										Var1.f_0 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam1));
										func_5032(uParam0, iVar0, Var1, iParam1);
									}
								}
							}
						}
						else if (__LIB_1__::func_17(PLAYER::PLAYER_ID()))
						{
							if (__LIB_1__::func_386(PLAYER::INT_TO_PLAYERINDEX(iParam1), __LIB_1__::func_592(PLAYER::PLAYER_ID())))
							{
								if (PLAYER::PLAYER_ID() != PLAYER::INT_TO_PLAYERINDEX(iParam1))
								{
									Var1.f_0 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam1));
									func_5032(uParam0, iVar0, Var1, iParam1);
								}
							}
						}
						else if (PLAYER::PLAYER_ID() != PLAYER::INT_TO_PLAYERINDEX(iParam1))
						{
							Var1.f_0 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam1));
							func_5032(uParam0, iVar0, Var1, iParam1);
						}
					}
					else
					{
						Var1.f_0 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam1));
						func_5032(uParam0, iVar0, Var1, iParam1);
					}
				}
				break;
			case 1:
				func_5032(uParam0, iVar0, uParam0->f_47.f_1063[iParam1 /*3*/], iParam1);
				break;
			case 2:
				func_5032(uParam0, iVar0, uParam0->f_47.f_1160[iParam1 /*3*/], iParam1);
				break;
			case 3:
				func_5032(uParam0, iVar0, uParam0->f_47.f_1257[iParam1 /*3*/], iParam1);
				break;
			case 4:
				func_5032(uParam0, iVar0, uParam0->f_47.f_1354[iParam1 /*3*/], iParam1);
				break;
		}
		if (iParam1 >= 31 && iVar0 >= 4)
		{
			__LIB_13__::func_565(uParam0);
		}
		iVar0++;
	}
}

void func_5032(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x1A6A18
{
	bool bVar0;
	struct<3> Var1;
	if (__LIB_10__::func_328(Param2.f_0))
	{
		bVar0 = true;
	}
	else if (iParam1 != 0)
	{
		switch (iParam1)
		{
			case 1:
				uParam0->f_47.f_1063[iParam3 /*3*/] = { Var1 };
				break;
			case 2:
				uParam0->f_47.f_1160[iParam3 /*3*/] = { Var1 };
				break;
			case 3:
				uParam0->f_47.f_1257[iParam3 /*3*/] = { Var1 };
				break;
			case 4:
				uParam0->f_47.f_1354[iParam3 /*3*/] = { Var1 };
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param2.f_0))
	{
		if (!__LIB_10__::func_220() && PED::IS_PED_A_PLAYER(Param2.f_0))
		{
			if (__LIB_10__::func_219(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Param2.f_0)))
			{
				bVar0 = false;
			}
		}
		if (!__LIB_10__::func_218() && ENTITY::IS_ENTITY_DEAD(Param2.f_0, false))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		func_5033(uParam0, iParam1, Param2);
	}
}

void func_5033(var uParam0, int iParam1, struct<3> Param2)//Position - 0x1A6AF8
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	if (uParam0->f_47.f_996[iParam1] < 32)
	{
		if (func_5034(uParam0, Param2.f_0, 1))
		{
			if (!PED::IS_PED_A_PLAYER(Param2.f_0))
			{
				if (iParam1 != 0)
				{
					uParam0->f_47.f_510[iParam1 /*97*/][uParam0->f_47.f_996[iParam1] /*3*/] = { Param2 };
					bVar1 = true;
				}
			}
			else if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Param2.f_0), 0, 1))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Param2.f_0);
				if (iVar0 != -1)
				{
					if (__LIB_1__::func_831(iVar0) && !BitTest(Global_1853348[iVar0 /*834*/].f_139, 2))
					{
						uParam0->f_47.f_510[iParam1 /*97*/][uParam0->f_47.f_996[iParam1] /*3*/] = Param2.f_0;
						uParam0->f_47.f_510[iParam1 /*97*/][uParam0->f_47.f_996[iParam1] /*3*/].f_1 = Global_1853348[iVar0 /*834*/].f_205.f_6;
						uParam0->f_47.f_510[iParam1 /*97*/][uParam0->f_47.f_996[iParam1] /*3*/].f_2 = iVar0;
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				if (iParam1 != 0)
				{
					if (__LIB_10__::func_331(uParam0->f_47.f_24[iParam1 /*97*/][uParam0->f_47.f_996[iParam1] /*3*/], uParam0->f_47.f_510[iParam1 /*97*/][uParam0->f_47.f_996[iParam1] /*3*/]))
					{
						MISC::SET_BIT(&(uParam0->f_1), 8);
					}
				}
				uParam0->f_47.f_996[iParam1]++;
			}
		}
	}
}

int func_5034(var uParam0, int iParam1, bool bParam2)//Position - 0x1A6C53
{
	if (func_16(iParam1, uParam0->f_1.f_35, BitTest(uParam0->f_1.f_1, 0), BitTest(uParam0->f_1.f_2, 0), bParam2))
	{
		return 1;
	}
	return 0;
}

void func_5048(var uParam0, int iParam1)//Position - 0x1A6F78
{
	MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	MISC::CLEAR_BIT(&Global_2621446, 3);
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197, 28))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 28);
	}
	NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(false);
	__LIB_11__::func_777();
	if (GRAPHICS::GET_USINGNIGHTVISION() && !__LIB_2__::func_311(Global_4718592.f_116524))
	{
		GRAPHICS::SET_NIGHTVISION(false);
		__LIB_10__::func_845(0);
	}
	if (((!__LIB_4__::func_976(PLAYER::PLAYER_ID(), 1) || uParam0->f_1.f_35 == 3) || uParam0->f_1.f_35 == 5) || uParam0->f_1.f_35 == 4)
	{
		__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
	}
	uParam0->f_1.f_2 = iParam1;
	if (BitTest(uParam0->f_1.f_2, 6))
	{
		__LIB_2__::func_592(0, 0);
	}
	if (BitTest(uParam0->f_1.f_2, 4))
	{
		__LIB_10__::func_892(uParam0, 1);
	}
	__LIB_2__::func_329(0);
	if (!__LIB_10__::func_201())
	{
		__LIB_10__::func_200();
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("GTAOlogo");
	__LIB_10__::func_199(0);
	if (__LIB_0__::func_628() == 65)
	{
		func_5049(0, 0);
	}
}

void func_5049(bool bParam0, bool bParam1)//Position - 0x1A707F
{
	if (bParam1)
	{
		MISC::CLEAR_BIT(&(Global_1941652.f_1), 13);
		__LIB_10__::func_963(bParam0, 0);
	}
	__LIB_10__::func_198(0);
	func_5050(66);
}

void func_5050(int iParam0)//Position - 0x1A70AA
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	iVar0 = __LIB_0__::func_628();
	if (Global_1575058)
	{
		sVar1 = __LIB_7__::func_702(iParam0);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		uVar3 = __LIB_1__::func_724(&Global_2727815, 1, 0);
		__LIB_0__::func_627(&Global_2727813, 1, 0);
		NETWORK::NETWORK_TRANSITION_ADD_STAGE(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_5051();
	}
	Global_1574991 = iParam0;
}

void func_5051()//Position - 0x1A7102
{
	if (Global_2725326)
	{
		if (func_5053())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			__LIB_0__::func_982();
		}
	}
}

int func_5053()//Position - 0x1A714D
{
	int iVar0;
	if (Global_2715699.f_6597 && Global_2725323)
	{
		if (func_2265(0))
		{
			if (__LIB_0__::func_893() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((Global_2715699.f_6619 == 122 || Global_2715699.f_6619 == 123) || Global_2715699.f_6619 == 124) || Global_2715699.f_6619 == 125) || Global_2715699.f_6619 == 154)
				{
					return 1;
				}
				if (Global_2715699.f_6619 > -1)
				{
					iVar0 = __LIB_0__::func_172(Global_2715699.f_6619);
					if (iVar0 == 24)
					{
						return 1;
					}
				}
				if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2, 26))
				{
					return 1;
				}
				if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2, 27))
				{
					return 1;
				}
				if (__LIB_0__::func_622())
				{
					return 1;
				}
				if (Global_1958741)
				{
					return 1;
				}
				if (BitTest(Global_4718592.f_37, 23))
				{
					if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && !__LIB_0__::func_81())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_5080(int* iParam0, int* iParam1, var uParam2, bool bParam3)//Position - 0x1A7A78
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (BitTest(*iParam1, 7))
	{
		return 1;
	}
	else if (func_5081(iParam1, iParam0, uParam2, &Var0, &Var1, &fVar2, iParam1->f_8))
	{
		if (CAM::DOES_CAM_EXIST(iParam1->f_6))
		{
			CAM::DESTROY_CAM(iParam1->f_6, false);
		}
		iParam1->f_6 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_COORD(iParam1->f_6, Var0);
		CAM::SET_CAM_ROT(iParam1->f_6, Var1, 2);
		CAM::SET_CAM_FOV(iParam1->f_6, fVar2);
		CAM::SET_CAM_ACTIVE(iParam1->f_6, true);
		CAM::SHAKE_CAM(iParam1->f_6, "HAND_SHAKE", 0.1f);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (bParam3)
		{
			if ((Var0.f_0 != 0f || Var0.f_1 != 0f) || Var0.f_2 != 0f)
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var0, 0f, 0f, 0f);
			}
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
			MISC::SET_BIT(iParam1, 1);
		}
		if (BitTest(*iParam0, 3))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), func_586(iParam1, iParam0, uParam2, 0), 0);
		}
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), func_586(iParam1, iParam0, uParam2, 0), -1, 0, 2);
		AUDIO::START_AUDIO_SCENE("WATCHING_SAFEHOUSE_TV");
		MISC::SET_BIT(iParam1, 7);
		MISC::SET_BIT(iParam1, 0);
	}
	return 0;
}

int func_5081(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x1A7B98
{
	struct<4> Var0;
	int iVar1;
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
	{
		switch (iParam6)
		{
			case 0:
				*uParam3 = { 365.4817f, 4844.3184f, -58.6415f };
				*uParam4 = { -4.2269f, 0f, 162.4367f };
				*uParam5 = 50f;
				break;
			case 1:
				*uParam3 = { 364.4599f, 4840.5576f, -58.2f };
				*uParam4 = { -1.0655f, 0f, 163.2952f };
				*uParam5 = 50f;
				break;
		}
		return 1;
	}
	if (uParam0->f_2481)
	{
		if (BitTest(*uParam0, 31))
		{
			if (Global_100493.f_374 == joaat("Apart_Default_Room"))
			{
				switch (iParam6)
				{
					case 0:
						*uParam3 = { 964.7457f, 72.0163f, 117.6699f };
						*uParam4 = { -4.7377f, 0f, -59.4768f };
						*uParam5 = 38.6237f;
						break;
					case 1:
						*uParam3 = { 969.9574f, 73.4718f, 117.268f };
						*uParam4 = { -4.1057f, 0f, -31.2887f };
						*uParam5 = 38.6237f;
						break;
				}
			}
			else
			{
				switch (iParam6)
				{
					case 0:
						*uParam3 = { 969.4342f, 79.1508f, 117.4149f };
						*uParam4 = { -4.2559f, 0f, -65.339f };
						*uParam5 = 41.4149f;
						break;
					case 1:
						*uParam3 = { 973.5876f, 79.3592f, 117.6854f };
						*uParam4 = { -17.1453f, 0f, -32.9296f };
						*uParam5 = 28.6484f;
						break;
					}
			}
		}
		else
		{
			switch (iParam6)
			{
				case 0:
					*uParam3 = { 953.5262f, 37.3533f, 117.6646f };
					*uParam4 = { -4.6269f, 0f, -136.2769f };
					*uParam5 = 41.0797f;
					break;
				case 1:
					*uParam3 = { 955.135f, 34.0978f, 117.6524f };
					*uParam4 = { -9.4598f, 0f, -122.3616f };
					*uParam5 = 31.845f;
					break;
				}
		}
		return 1;
	}
	if (uParam0->f_2482)
	{
		switch (iParam6)
		{
			case 0:
				*uParam3 = { 2736.1882f, -381.6178f, -47.0644f };
				*uParam4 = { -16.251f, -0.0032f, -89.9605f };
				*uParam5 = 50f;
				break;
			case 1:
				*uParam3 = { 2737.396f, -381.618f, -47.6195f };
				*uParam4 = { -3.6461f, -0.0032f, -89.7157f };
				*uParam5 = 37.9342f;
				break;
		}
		return 1;
	}
	if (uParam0->f_2483)
	{
		if (BitTest(uParam0->f_1, 0))
		{
			switch (iParam6)
			{
				case 0:
					*uParam3 = { 4.33672f, -4.21228f, 10.8111f };
					*uParam4 = { -9.6823f, 0f, 242.5899f };
					*uParam5 = 38.6237f;
					break;
				case 1:
					*uParam3 = { 6.12079f, -8.92598f, 10.897f };
					*uParam4 = { -8.9088f, 0f, 301.7244f };
					*uParam5 = 38.6237f;
					break;
			}
		}
		else if (BitTest(*uParam0, 31))
		{
			switch (iParam6)
			{
				case 0:
					*uParam3 = { -10.6644f, 7.81091f, 10.7271f };
					*uParam4 = { -7.1477f, 0f, 327.8569f };
					*uParam5 = 38.6237f;
					break;
				case 1:
					*uParam3 = { -6.02023f, 6.91382f, 10.4768f };
					*uParam4 = { -4.4274f, 0f, 35.780403f };
					*uParam5 = 38.6237f;
					break;
			}
		}
		else
		{
			switch (iParam6)
			{
				case 0:
					*uParam3 = { -6.73211f, -3.44156f, 6.3379f };
					*uParam4 = { -7.9605f, 0f, 1.4645f };
					*uParam5 = 41.0797f;
					break;
				case 1:
					*uParam3 = { -9.16653f, 2.15108f, 6.0347f };
					*uParam4 = { -7.7646f, 0f, 324.227f };
					*uParam5 = 31.845f;
					break;
				}
		}
		iVar1 = __LIB_2__::func_717(PLAYER::PLAYER_ID());
		*uParam3 = { func_4895(*uParam3, iVar1) };
		uParam4->f_2 = func_588(uParam4->f_2, iVar1);
		return 1;
	}
	if (!__LIB_7__::func_685(uParam2->f_31))
	{
		switch (uParam2->f_33)
		{
			case 2:
				switch (iParam6)
				{
					case 0:
						*uParam3 = { 257.7857f, -996.3652f, -98.9071f };
						*uParam4 = { 1.9738f, 0f, 48.4787f };
						*uParam5 = 45f;
						return 1;
						break;
					case 1:
						*uParam3 = { 264.616f, -1001.0403f, -98.3349f };
						*uParam4 = { -4.2679f, 0f, 54.5139f };
						*uParam5 = 27.6556f;
						return 1;
						break;
				}
				break;
			case 6:
				switch (iParam6)
				{
					case 0:
						*uParam3 = { 340.3142f, -996.5649f, -98.5637f };
						*uParam4 = { -0.9291f, 0f, 91.2929f };
						*uParam5 = 50f;
						return 1;
						break;
					case 1:
						*uParam3 = { 345.8763f, -994.3792f, -98.3018f };
						*uParam4 = { -9.0438f, 0f, 110.6934f };
						*uParam5 = 36.1457f;
						return 1;
						break;
				}
				break;
			case 10:
				if (BitTest(*uParam1, 3))
				{
					switch (iParam6)
					{
						case 0:
							*uParam3 = { 228.524f, -977.4732f, -97.7586f };
							*uParam4 = { -4.0395f, 0f, -4.4596f };
							*uParam5 = 45f;
							return 1;
							break;
						case 1:
							*uParam3 = { 226.9101f, -987.9648f, -96.2153f };
							*uParam4 = { -9.8837f, 0f, -6.0976f };
							*uParam5 = 22.6931f;
							return 1;
							break;
					}
				}
				else if (!__LIB_7__::func_687(uParam2->f_31))
				{
					switch (iParam6)
					{
						case 0:
							if (__LIB_7__::func_688(uParam2->f_31))
							{
								__LIB_3__::func_210(uParam2->f_31, 34, &Var0, 61, 0);
							}
							else
							{
								__LIB_3__::func_210(uParam2->f_31, 34, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
							}
							*uParam3 = { Var0 };
							*uParam4 = { Var0.f_3 };
							*uParam5 = 45f;
							if (__LIB_7__::func_686(uParam2->f_31, -1) || __LIB_7__::func_687(uParam2->f_31))
							{
								*uParam5 = 53.5191f;
							}
							return 1;
							break;
						case 1:
							if (__LIB_7__::func_688(uParam2->f_31))
							{
								__LIB_3__::func_210(uParam2->f_31, 35, &Var0, 61, 0);
							}
							else
							{
								__LIB_3__::func_210(uParam2->f_31, 35, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
							}
							*uParam3 = { Var0 };
							*uParam4 = { Var0.f_3 };
							*uParam5 = 33.4744f;
							if (__LIB_7__::func_686(uParam2->f_31, -1) || __LIB_7__::func_687(uParam2->f_31))
							{
								*uParam5 = 53.5191f;
							}
							return 1;
							break;
					}
				}
				else
				{
					switch (iParam6)
					{
						case 0:
							__LIB_3__::func_210(uParam2->f_31, 34, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
							*uParam3 = { Var0 };
							*uParam4 = { Var0.f_3 };
							*uParam5 = 53.5191f;
							return 1;
							break;
						case 1:
							if (Global_4196256 == 3 || Global_4196256 == 7)
							{
								__LIB_3__::func_210(uParam2->f_31, 36, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
							}
							else if (Global_4196256 == 4 || Global_4196256 == 8)
							{
								__LIB_3__::func_210(uParam2->f_31, 560, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
							}
							else
							{
								__LIB_3__::func_210(uParam2->f_31, 35, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
							}
							*uParam3 = { Var0 };
							*uParam4 = { Var0.f_3 };
							*uParam5 = 53.5191f;
							return 1;
							break;
						}
				}
				break;
		}
		if (__LIB_1__::func_597(uParam2->f_31) || __LIB_0__::func_845(uParam2->f_31, -1))
		{
			switch (iParam6)
			{
				case 0:
					__LIB_3__::func_210(uParam2->f_31, 34, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				case 1:
					__LIB_3__::func_210(uParam2->f_31, 35, &Var0, __LIB_2__::func_681(uParam2->f_31), 0);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				}
		}
		if (__LIB_2__::func_782(uParam2->f_31, 0, 0))
		{
			switch (iParam6)
			{
				case 0:
					__LIB_3__::func_210(uParam2->f_31, 34, &Var0, __LIB_2__::func_681(uParam2->f_31), 1);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				case 1:
					__LIB_3__::func_210(uParam2->f_31, 35, &Var0, __LIB_2__::func_681(uParam2->f_31), 1);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				}
		}
		if (__LIB_6__::func_846(PLAYER::PLAYER_ID()))
		{
			switch (iParam6)
			{
				case 0:
					*uParam3 = { -1240.7783f, -3015.6904f, -42.2563f };
					*uParam4 = { -6.5518f, 0f, -48.5072f };
					*uParam5 = 53.5191f;
					return 1;
					break;
				case 1:
					*uParam3 = { -1236.9662f, -3011.966f, -42.266f };
					*uParam4 = { 0.1736f, -0.0265f, -46.2496f };
					*uParam5 = 53.5191f;
					return 1;
					break;
				}
		}
	}
	else
	{
		switch (iParam6)
		{
			case 0:
				__LIB_3__::func_181(__LIB_11__::func_752(0), 34, &Var0, 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
				*uParam5 = 33.4744f;
				return 1;
				break;
			case 1:
				__LIB_3__::func_181(__LIB_11__::func_752(0), 35, &Var0, 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
				*uParam5 = 33.4744f;
				return 1;
				break;
			}
	}
	return 0;
}

void func_5137(var uParam0)//Position - 0x1A90EF
{
	int iVar0;
	var uVar1;
	Global_2715699.f_2846.f_180 = uParam0->f_1.f_34;
	if ((__LIB_10__::func_388() == 3 || __LIB_10__::func_387() == 3) || (__LIB_1__::func_11() && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)))
	{
		return;
	}
	if (__LIB_7__::func_721(Global_4718592.f_116524))
	{
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(__LIB_1__::func_4());
			}
		}
	}
	if (__LIB_10__::func_388() == 1)
	{
		if (__LIB_4__::func_860() && __LIB_0__::func_983())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_10__::func_386() == 1 || __LIB_10__::func_386() == 2)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					__LIB_10__::func_385(0);
				}
			}
			return;
		}
	}
	if (!BitTest(uParam0->f_1, 13))
	{
		if (__LIB_2__::func_177())
		{
			if (__LIB_10__::func_197(&(uParam0->f_1)) != 0)
			{
				func_4908(uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_1), 13);
			}
		}
	}
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_11__::func_680(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
			}
			if (!BitTest(Global_2621446, 9))
			{
				__LIB_5__::func_837();
			}
			__LIB_10__::func_384(&(uParam0->f_47));
		}
	}
	if (__LIB_10__::func_206(&(uParam0->f_1)))
	{
		func_5524(uParam0);
		if (((__LIB_10__::func_383() && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			__LIB_10__::func_944(&(uParam0->f_1), 0);
		}
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 11)
		{
			__LIB_10__::func_447(&(uParam0->f_1));
		}
		else if (BitTest(uParam0->f_1, 2))
		{
			__LIB_10__::func_380(&(uParam0->f_1));
		}
	}
	else
	{
		__LIB_11__::func_841(&(uParam0->f_1), 0);
		if (BitTest(uParam0->f_1, 2))
		{
			__LIB_10__::func_380(&(uParam0->f_1));
		}
	}
	if ((__LIB_10__::func_197(&(uParam0->f_1)) == 0 || __LIB_10__::func_197(&(uParam0->f_1)) == 1) || __LIB_10__::func_197(&(uParam0->f_1)) == 6)
	{
		if (BitTest(uParam0->f_1, 5))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 5);
			MISC::CLEAR_BIT(&Global_2621446, 4);
		}
	}
	else
	{
		if (uParam0->f_1.f_35 == 3)
		{
			CAM::SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE();
		}
		if (__LIB_10__::func_197(&(uParam0->f_1)) == 3)
		{
			if (!BitTest(uParam0->f_1, 5))
			{
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&Global_2621446, 4);
			}
		}
	}
	if (((__LIB_10__::func_197(&(uParam0->f_1)) == 0 || __LIB_10__::func_197(&(uParam0->f_1)) == 4) || __LIB_10__::func_197(&(uParam0->f_1)) == 5) || __LIB_10__::func_197(&(uParam0->f_1)) == 6)
	{
		if (!BitTest(uParam0->f_1, 6))
		{
			MISC::SET_BIT(&(uParam0->f_1), 6);
		}
	}
	else
	{
		if (BitTest(uParam0->f_1, 6))
		{
			MISC::CLEAR_BIT(&(uParam0->f_1), 6);
		}
		func_5498(uParam0);
		__LIB_1__::func_405();
	}
	if (BitTest(uParam0->f_1, 14))
	{
		if (!Global_1931426)
		{
			__LIB_10__::func_370(&(uParam0->f_47));
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	}
	switch (__LIB_10__::func_197(&(uParam0->f_1)))
	{
		case 0:
			__LIB_10__::func_861(uParam0);
			break;
		case 1:
			func_5490(uParam0);
			break;
		case 2:
			func_5488(uParam0);
			break;
		case 3:
			func_5459(uParam0);
			break;
		case 4:
			func_5435(uParam0);
			break;
		case 5:
			func_5421(uParam0);
			break;
		case 6:
			func_4909(uParam0);
			break;
	}
	if (__LIB_10__::func_333())
	{
		func_5024(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_10__::func_329();
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
		{
			if (!__LIB_10__::func_328(__LIB_1__::func_4()) || !__LIB_11__::func_782(&(uParam0->f_47), &iVar0, &uVar1, __LIB_1__::func_4()))
			{
				func_5416(uParam0, 0, 1);
				if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					if (!func_5413(uParam0, &iVar0, &uVar1, 0, 0, 0))
					{
						if (__LIB_10__::func_325())
						{
							__LIB_10__::func_324();
							if (!__LIB_0__::func_864(&(uParam0->f_2245)))
							{
								__LIB_0__::func_795(&(uParam0->f_2245), 0, 0);
							}
							else if (__LIB_0__::func_937(&(uParam0->f_2245), 10000, 0))
							{
								__LIB_16__::func_218();
							}
						}
						else if (__LIB_13__::func_569() && !__LIB_1__::func_623())
						{
							if (__LIB_10__::func_300())
							{
								if (!__LIB_0__::func_864(&(uParam0->f_2253)))
								{
									__LIB_0__::func_795(&(uParam0->f_2253), 0, 0);
								}
								else if (__LIB_0__::func_937(&(uParam0->f_2253), 5000, 0))
								{
									__LIB_11__::func_780(0);
									Global_2621446.f_81 = 3;
								}
							}
							else
							{
								__LIB_11__::func_780(0);
								Global_2621446.f_81 = 3;
							}
						}
					}
				}
			}
		}
	}
	__LIB_10__::func_931();
	func_5176(uParam0);
	func_5138(uParam0);
}

void func_5138(var uParam0)//Position - 0x1A957D
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bVar0 = false;
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || __LIB_10__::func_388() == 1)
	{
		if (!BitTest(uParam0->f_1, 6))
		{
			if (!uParam0->f_1.f_34)
			{
				if (!func_5034(uParam0, __LIB_1__::func_4(), 1))
				{
					if (!__LIB_10__::func_224(PLAYER::PLAYER_ID()))
					{
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()) && !__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4())))
						{
							if (!__LIB_0__::func_983())
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!__LIB_15__::func_169(uParam0, 0))
		{
			bVar0 = false;
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
		{
			if (!__LIB_10__::func_220())
			{
				if (PED::IS_PED_A_PLAYER(__LIB_1__::func_4()) && __LIB_10__::func_219(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4())))
				{
					bVar0 = true;
				}
			}
			if (!__LIB_10__::func_218())
			{
				if (ENTITY::IS_ENTITY_DEAD(__LIB_1__::func_4(), false))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&(uParam0->f_47), 1);
		func_5024(uParam0);
		bVar4 = false;
		if (bVar1)
		{
			if (__LIB_1__::func_711() != __LIB_1__::func_4() && func_5034(uParam0, __LIB_1__::func_711(), 1))
			{
				bVar4 = true;
			}
			if (!bVar4)
			{
				if (__LIB_1__::func_693(Global_2815059.f_299, 0, 1))
				{
					bVar5 = __LIB_11__::func_680(Global_2815059.f_299, 9);
					bVar6 = __LIB_10__::func_224(Global_2815059.f_299);
				}
				if (((((((((((((((uParam0->f_47.f_2181 == 0 && __LIB_10__::func_217()) && !__LIB_10__::func_216(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_10__::func_215()) && !__LIB_11__::func_679(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4()))) && !__LIB_10__::func_216(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4()))) && Global_1574964 == 0) && Global_1836598 == 0) && bVar5 == 0) && bVar6 == 0) && !__LIB_10__::func_214()) && !__LIB_10__::func_224(PLAYER::PLAYER_ID())) && !__LIB_6__::func_239()) && !BitTest(Global_2815059.f_4660, 31)) && !__LIB_8__::func_875(Global_4718592.f_168757)) && !__LIB_10__::func_213(Global_4718592.f_168757))
				{
					iVar7 = __LIB_13__::func_575();
					if (iVar7 == 1)
					{
						uParam0->f_47.f_2181 = 1;
					}
					else
					{
						__LIB_10__::func_209(&(uParam0->f_47));
						return;
					}
				}
				else
				{
					__LIB_10__::func_209(&(uParam0->f_47));
					if (func_5413(uParam0, &iVar2, &iVar3, 1, 0, 1))
					{
						__LIB_15__::func_492(uParam0, iVar2, iVar3);
						bVar4 = true;
						uParam0->f_47.f_2181 = 0;
					}
				}
			}
		}
		if (!bVar4)
		{
			if (!__LIB_10__::func_208())
			{
				if (!BitTest(uParam0->f_47, 20))
				{
					MISC::SET_BIT(&(uParam0->f_47), 20);
				}
			}
			else if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
			{
				if (__LIB_13__::func_569())
				{
					if (!__LIB_0__::func_864(&(uParam0->f_2247)))
					{
						__LIB_0__::func_795(&(uParam0->f_2247), 0, 0);
					}
					else if (__LIB_0__::func_937(&(uParam0->f_2247), 5000, 0))
					{
						__LIB_11__::func_780(0);
						Global_2621446.f_81 = 3;
					}
				}
				else if (__LIB_4__::func_934(PLAYER::PLAYER_ID(), 0))
				{
					if (!BitTest(uParam0->f_47, 13))
					{
						MISC::SET_BIT(&(uParam0->f_47), 13);
					}
				}
			}
		}
		else if (BitTest(uParam0->f_47, 13))
		{
			MISC::SET_BIT(&(uParam0->f_47), 14);
		}
	}
	else if (!__LIB_10__::func_208())
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
		{
			if (BitTest(uParam0->f_47, 20))
			{
				MISC::CLEAR_BIT(&(uParam0->f_47), 20);
			}
		}
	}
	__LIB_10__::func_209(&(uParam0->f_47));
	__LIB_15__::func_168(uParam0);
	__LIB_15__::func_190();
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
	{
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		__LIB_0__::func_646();
		__LIB_11__::func_828(uParam0);
	}
}

void func_5176(var uParam0)//Position - 0x1AA6A9
{
	if ((((!__LIB_0__::func_194(8, -1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_10__::func_298()) && !__LIB_0__::func_983())
	{
		if (BitTest(uParam0->f_47, 0) || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			if (uParam0->f_1.f_36 != 6)
			{
				__LIB_15__::func_500(uParam0);
				__LIB_10__::func_857(&(uParam0->f_47));
				__LIB_15__::func_182(uParam0);
			}
		}
		if (BitTest(uParam0->f_47, 0) || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_10__::func_271() && __LIB_10__::func_270())
			{
				__LIB_10__::func_269(1);
			}
			if (!__LIB_10__::func_207())
			{
				__LIB_1__::func_733();
			}
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			__LIB_15__::func_167(uParam0);
			__LIB_0__::func_189();
			HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0.466664f);
			if ((__LIB_5__::func_839(&(uParam0->f_1)) != 3 && __LIB_5__::func_839(&(uParam0->f_1)) != 5) && __LIB_5__::func_839(&(uParam0->f_1)) != 4)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
				__LIB_1__::func_33(0);
			}
			HUD::DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
			if ((!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || __LIB_10__::func_388() == 1) || __LIB_10__::func_388() == 2)
			{
				if (__LIB_10__::func_268(&(uParam0->f_47)) != 5)
				{
					if (__LIB_10__::func_268(&(uParam0->f_47)) != 3)
					{
						uParam0->f_47.f_1456 = __LIB_10__::func_268(&(uParam0->f_47));
					}
					uParam0->f_47.f_1457 = __LIB_10__::func_268(&(uParam0->f_47));
				}
				if (__LIB_10__::func_268(&(uParam0->f_47)) == 0)
				{
					if (__LIB_7__::func_715(0, &(uParam0->f_47.f_1473), 1))
					{
						if (__LIB_16__::func_223(uParam0))
						{
							if (__LIB_10__::func_267(&(uParam0->f_47)) >= uParam0->f_47.f_1460 || __LIB_10__::func_267(&(uParam0->f_47)) > uParam0->f_47.f_1461)
							{
								__LIB_10__::func_266(&(uParam0->f_47), 0);
							}
							__LIB_10__::func_265(&(uParam0->f_47), 1);
						}
					}
				}
				else if ((Global_2824886 || Global_4718592 != 0) || !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (BitTest(uParam0->f_47, 0) || (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && (__LIB_10__::func_388() == 2 || __LIB_10__::func_388() == 1)))
					{
						if (!__LIB_13__::func_578())
						{
							__LIB_15__::func_195(uParam0, __LIB_10__::func_268(&(uParam0->f_47)));
						}
						switch (__LIB_10__::func_268(&(uParam0->f_47)))
						{
							case 1:
							case 4:
								if (__LIB_15__::func_172())
								{
									__LIB_10__::func_265(&(uParam0->f_47), 6);
								}
								__LIB_17__::func_847(uParam0);
								break;
							case 2:
								__LIB_17__::func_846(uParam0);
								break;
							case 3:
								__LIB_17__::func_854(uParam0);
								break;
							case 5:
								__LIB_27__::func_272(uParam0);
								break;
							case 6:
								if (__LIB_15__::func_172())
								{
									__LIB_10__::func_265(&(uParam0->f_47), 1);
								}
								if (!__LIB_13__::func_577())
								{
									__LIB_10__::func_265(&(uParam0->f_47), 1);
								}
								break;
						}
						__LIB_10__::func_245(__LIB_10__::func_268(&(uParam0->f_47)) == 6);
						if ((uParam0->f_1.f_4 || uParam0->f_1.f_3 > 2) && !BitTest(Global_2621446, 28))
						{
							__LIB_16__::func_221(uParam0, __LIB_10__::func_268(&(uParam0->f_47)));
						}
						if (BitTest(uParam0->f_47, 15))
						{
							if (BitTest(Global_1965451, 1) || !__LIB_0__::func_625())
							{
								if (__LIB_0__::func_937(&(uParam0->f_47.f_2186), 500, 0))
								{
									if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || !__LIB_0__::func_625())
										{
											CAM::DO_SCREEN_FADE_IN(250);
										}
										GRAPHICS::ANIMPOSTFX_STOP_ALL();
										__LIB_2__::func_66(1);
									}
									MISC::CLEAR_BIT(&(uParam0->f_47), 15);
								}
							}
						}
					}
				}
				__LIB_10__::func_915(uParam0);
			}
		}
	}
	else
	{
		if (__LIB_10__::func_298())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
		if (uParam0->f_47.f_1469 > 0 && uParam0->f_47.f_1469 < 99)
		{
			__LIB_15__::func_500(uParam0);
		}
	}
}

int func_5413(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1B452A
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	iVar2 = -1;
	iVar3 = -1;
	if (bParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
		{
			if (__LIB_11__::func_782(&(uParam0->f_47), &iVar2, &iVar0, __LIB_1__::func_4()))
			{
				if (func_5415(uParam0, iVar2, &uVar1, bParam3, bParam4))
				{
					*iParam1 = iVar2;
					*uParam2 = uVar1;
					return 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_711()))
		{
			if (__LIB_11__::func_782(&(uParam0->f_47), &iVar3, &iVar0, __LIB_1__::func_711()))
			{
				if (func_5415(uParam0, iVar3, &uVar1, bParam3, bParam4))
				{
					*iParam1 = iVar3;
					*uParam2 = uVar1;
					return 1;
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 != iVar2 && iVar0 != iVar3)
		{
			if (func_5415(uParam0, iVar0, &uVar1, bParam3, bParam4))
			{
				*iParam1 = iVar0;
				*uParam2 = uVar1;
				return 1;
			}
		}
		iVar0++;
	}
	if ((__LIB_1__::func_838(PLAYER::PLAYER_ID(), 2) || __LIB_1__::func_838(PLAYER::PLAYER_ID(), 8)) || (__LIB_1__::func_838(PLAYER::PLAYER_ID(), 0) && __LIB_13__::func_570()))
	{
		if (!__LIB_0__::func_864(&(uParam0->f_2249)))
		{
			__LIB_0__::func_795(&(uParam0->f_2249), 0, 0);
			return 1;
		}
		else if (__LIB_0__::func_937(&(uParam0->f_2249), 5000, 0))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_5415(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x1B4701
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar1 = -1;
	bVar2 = false;
	iVar3 = 0;
	bVar4 = false;
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = 0;
		iVar5 = 0;
		if (__LIB_15__::func_181(uParam0->f_47.f_24[iParam1 /*97*/][iVar0 /*3*/]))
		{
			iVar7 = __LIB_10__::func_925(&(uParam0->f_47), iParam1, iVar0);
			if (func_5034(uParam0, iVar7, 1))
			{
				if (__LIB_10__::func_328(iVar7))
				{
					if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
					{
						if (!bVar4)
						{
							if (PED::IS_PED_A_PLAYER(iVar7))
							{
								if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7), 1, 1))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Global_1931932, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7))))
									{
										bVar4 = true;
										iVar1 = iVar0;
									}
								}
							}
						}
					}
					if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || !bVar4)
					{
						if (!bParam3 || iVar7 != __LIB_1__::func_4())
						{
							if (!bParam4 || iVar7 != __LIB_1__::func_711())
							{
								if (PED::IS_PED_A_PLAYER(iVar7))
								{
									if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7), 1, 1))
									{
										if (PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7)) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
										{
											iVar3 = 1;
										}
										else if (__LIB_0__::func_825(PLAYER::GET_PLAYER_TEAM(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7)), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
										{
											iVar5 = 1;
										}
									}
								}
								if ((iVar1 <= -1 || (!bVar2 && iVar3)) || (!bVar2 && iVar5))
								{
									iVar1 = iVar0;
									bVar2 = iVar3;
									iVar6 = iVar5;
									iVar6 = iVar6;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		*uParam2 = iVar1;
		return 1;
	}
	return 0;
}

void func_5416(var uParam0, bool bParam1, int iParam2)//Position - 0x1B4887
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
	{
		if (bParam1)
		{
			func_5024(uParam0);
		}
		if (__LIB_15__::func_169(uParam0, 0) && func_5413(uParam0, &iVar0, &iVar1, 0, 0, 0))
		{
			__LIB_10__::func_909(uParam0, __LIB_10__::func_925(&(uParam0->f_47), iVar0, iVar1));
			__LIB_11__::func_781(&(uParam0->f_1), CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1);
			if ((iParam2 && !__LIB_5__::getGlobal_2714762_f_692()) && __LIB_10__::func_388() != 2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	else
	{
		__LIB_11__::func_781(&(uParam0->f_1), CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1);
	}
}

void func_5421(var uParam0)//Position - 0x1B4A21
{
	if (func_5422(uParam0))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_5422(var uParam0)//Position - 0x1B4A3B
{
	if (!BitTest(uParam0->f_1, 11))
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
		else if (!__LIB_10__::func_889())
		{
			CAM::DO_SCREEN_FADE_IN(250);
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
	}
	if (func_5423(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		return 1;
	}
	return 0;
}

int func_5423(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x1B4AA9
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	Global_2727793 = MISC::GET_GAME_TIMER();
	if (((((!__LIB_2__::func_179() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__::func_628() == 63)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
		return 0;
	}
	if (!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
	{
		func_5431();
		__LIB_5__::func_728(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_1__::func_211(0);
			__LIB_2__::func_408(0);
		}
		return 0;
	}
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_81())
		{
			if (__LIB_0__::func_628() == 58)
			{
				__LIB_2__::func_178(1);
			}
			if (__LIB_2__::func_177())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__::func_623() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__::func_986(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_5__::func_728(1, 0);
		if (bParam10)
		{
			__LIB_1__::func_211(0);
			__LIB_2__::func_408(0);
		}
		return 0;
	}
	__LIB_1__::func_684();
	__LIB_7__::func_718();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_2__::func_176())
		{
			__LIB_2__::func_175();
		}
	}
	if (!__LIB_1__::func_584())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
		{
			if (bParam1)
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
		}
		if (Global_1585311)
		{
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
		}
		if (HUD::IS_ONLINE_POLICIES_MENU_ACTIVE() == 0)
		{
			if (HUD::GET_PAUSE_MENU_STATE() == 25)
			{
				HUD::CLOSE_SOCIAL_CLUB_MENU();
			}
		}
		if ((__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_490(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__::func_625())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_5__::func_253(-1046478848)) || __LIB_16__::func_215())
			{
				if (func_2265(0))
				{
					bParam12 = true;
					if (__LIB_2__::func_174() > 800 || (func_5053() && !__LIB_1__::func_683()))
					{
						if (__LIB_0__::func_893() && !__LIB_0__::func_983())
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (!CAM::IS_SCREEN_FADING_OUT())
								{
									CAM::DO_SCREEN_FADE_OUT(800);
								}
							}
						}
					}
					__LIB_0__::func_982();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_2__::func_408(1);
			bParam2 = false;
		}
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			bParam4 = true;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			bParam4 = true;
		}
		if (bParam2 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_2__::func_448(1, 0, 1);
		}
		if (((__LIB_0__::func_893() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_7__::func_717())
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
					STREAMING::END_SRL();
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			HUD::CLEAR_PRINTS();
			iVar2 = 0;
			if (bParam4)
			{
				iVar2 = 1;
			}
			Var3 = { fParam5, fParam6, fParam7 };
			if (iParam3 == 3)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			else if (iParam3 == 2)
			{
				if (__LIB_0__::func_86(Var3))
				{
					iParam3 = 1;
				}
				else if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 2 || STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) != 3)
				{
					iParam3 = 1;
				}
			}
			GRAPHICS::DONT_RENDER_IN_GAME_UI(true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			if (bParam12)
			{
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
			}
			__LIB_2__::func_173();
			__LIB_1__::func_618();
			if (__LIB_1__::func_81())
			{
				if (__LIB_2__::func_172())
				{
					iVar2 = 1;
					iVar2 += 32;
					iVar2 += 16384;
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(Global_1577841, iVar2, __LIB_0__::func_109());
				}
				else
				{
					return 0;
				}
			}
			else if (bParam0)
			{
				if (iParam13 || __LIB_1__::func_625())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__::func_625())
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 16384 || iParam14), iParam3);
			}
			else
			{
				STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 || iParam14), iParam3);
			}
			StringCopy(&Global_2725371, "", 32);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					StringCopy(&Global_2725371, AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			__LIB_0__::func_986(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_2__::func_448(1, 0, 1);
			}
		}
		if (__LIB_0__::func_623() == 1)
		{
			if (__LIB_1__::func_81())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__::func_622();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_2__::func_448(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__::func_625())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_986(2);
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_2__::func_409();
						__LIB_2__::func_448(0, 0, 1);
						if (((__LIB_1__::func_649() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(0);
							}
						}
					}
				}
				else if (bParam2)
				{
					if (bParam8)
					{
						__LIB_2__::func_409();
					}
					__LIB_2__::func_448(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_2__::func_409())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_2__::func_409();
						}
						__LIB_2__::func_448(0, 0, 1);
					}
					__LIB_0__::func_986(2);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_5431()//Position - 0x1B5324
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_832(PLAYER::PLAYER_ID()))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_579 = 0;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
			PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(PLAYER::PLAYER_PED_ID(), joaat("DEFAULT"));
			iVar0 = 2600;
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), false);
			GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			iVar2 = -1;
			Var1[0] = __LIB_0__::func_253(387, iVar2);
			Var1[1] = __LIB_0__::func_253(388, iVar2);
			Var1[2] = __LIB_0__::func_253(389, iVar2);
			Var1[3] = __LIB_0__::func_253(390, iVar2);
			Var1[4] = __LIB_0__::func_253(391, iVar2);
			Var1[5] = __LIB_0__::func_253(392, iVar2);
			Var1[6] = __LIB_0__::func_253(393, iVar2);
			Var1[7] = __LIB_0__::func_253(394, iVar2);
			Var1[8] = __LIB_0__::func_253(395, iVar2);
			Var1[9] = __LIB_0__::func_253(396, iVar2);
			Var1[10] = __LIB_0__::func_253(397, iVar2);
			Var1[11] = __LIB_0__::func_253(398, iVar2);
			Var1.f_13[0] = __LIB_0__::func_253(399, iVar2);
			Var1.f_13[1] = (__LIB_0__::func_253(400, iVar2) + __LIB_0__::func_253(18092, iVar2));
			Var1.f_13[2] = __LIB_0__::func_253(401, iVar2);
			Var1.f_13[3] = (__LIB_0__::func_253(402, iVar2) + __LIB_0__::func_253(18093, iVar2));
			Var1.f_13[4] = __LIB_0__::func_253(403, iVar2);
			Var1.f_13[5] = __LIB_0__::func_253(404, iVar2);
			Var1.f_13[6] = __LIB_0__::func_253(405, iVar2);
			Var1.f_13[7] = __LIB_0__::func_253(406, iVar2);
			Var1.f_13[8] = (__LIB_0__::func_253(407, iVar2) + __LIB_0__::func_253(18094, iVar2));
			Var1.f_13[9] = __LIB_0__::func_253(408, iVar2);
			Var1.f_13[10] = __LIB_0__::func_253(409, iVar2);
			Var1.f_13[11] = (__LIB_0__::func_253(410, iVar2) + __LIB_0__::func_253(18095, iVar2));
			Var1.f_26[0] = __LIB_0__::func_253(411, iVar2);
			Var1.f_26[1] = __LIB_0__::func_253(412, iVar2);
			Var1.f_26[2] = __LIB_0__::func_253(413, iVar2);
			Var1.f_26[3] = __LIB_0__::func_253(414, iVar2);
			Var1.f_26[4] = __LIB_0__::func_253(415, iVar2);
			Var1.f_26[5] = __LIB_0__::func_253(416, iVar2);
			Var1.f_26[6] = __LIB_0__::func_253(417, iVar2);
			Var1.f_26[7] = __LIB_0__::func_253(418, iVar2);
			Var1.f_26[8] = __LIB_0__::func_253(419, iVar2);
			Var1.f_26[9] = __LIB_0__::func_253(420, iVar2);
			Var1.f_26[10] = __LIB_0__::func_253(421, iVar2);
			Var1.f_26[11] = __LIB_0__::func_253(422, iVar2);
			Var1.f_39[0] = __LIB_0__::func_253(423, iVar2);
			Var1.f_39[1] = __LIB_0__::func_253(424, iVar2);
			Var1.f_39[2] = __LIB_0__::func_253(425, iVar2);
			Var1.f_39[3] = __LIB_0__::func_253(426, iVar2);
			Var1.f_39[4] = __LIB_0__::func_253(427, iVar2);
			Var1.f_39[5] = __LIB_0__::func_253(428, iVar2);
			Var1.f_39[6] = __LIB_0__::func_253(429, iVar2);
			Var1.f_39[7] = __LIB_0__::func_253(430, iVar2);
			Var1.f_39[8] = __LIB_0__::func_253(431, iVar2);
			Var1.f_49[0] = __LIB_0__::func_253(432, iVar2);
			Var1.f_49[1] = __LIB_0__::func_253(433, iVar2);
			Var1.f_49[2] = __LIB_0__::func_253(434, iVar2);
			Var1.f_49[3] = __LIB_0__::func_253(435, iVar2);
			Var1.f_49[4] = __LIB_0__::func_253(436, iVar2);
			Var1.f_49[5] = __LIB_0__::func_253(437, iVar2);
			Var1.f_49[6] = __LIB_0__::func_253(438, iVar2);
			Var1.f_49[7] = __LIB_0__::func_253(439, iVar2);
			Var1.f_49[8] = __LIB_0__::func_253(440, iVar2);
			if (__LIB_1__::func_342(161, -1))
			{
				Var1.f_59 = __LIB_1__::func_360(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__::func_360(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__::func_360(754, iVar2, 0);
			Var1.f_61 = __LIB_1__::func_360(755, iVar2, 0);
			func_362(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_5435(var uParam0)//Position - 0x1B5830
{
	if (__LIB_1__::func_711() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_10__::func_909(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_10__::func_327(&(uParam0->f_1), 1);
	}
	if (func_5436(uParam0, 0, 1))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_5436(var uParam0, bool bParam1, bool bParam2)//Position - 0x1B586A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	bVar0 = false;
	if (__LIB_10__::func_224(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (((__LIB_1__::func_711() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_711())) && (!bParam1 || func_5034(uParam0, __LIB_1__::func_711(), 1))) && !__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
	{
		iVar1 = __LIB_1__::func_711();
	}
	else if (__LIB_15__::func_169(uParam0, 0))
	{
		func_5024(uParam0);
		if (func_5413(uParam0, &iVar6, &iVar7, 0, 1, 1))
		{
			__LIB_10__::func_909(uParam0, __LIB_10__::func_925(&(uParam0->f_47), iVar6, iVar7));
			__LIB_15__::func_492(uParam0, iVar6, iVar7);
			__LIB_9__::func_819(&(uParam0->f_1), 0);
		}
		else if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_13__::func_569())
			{
				__LIB_11__::func_780(0);
				Global_2621446.f_81 = 3;
			}
		}
		else if (__LIB_0__::func_80())
		{
			if (Global_1574667)
			{
				if (__LIB_10__::func_860())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					MISC::SET_BIT(&(Global_2621446.f_1), 0);
					NETWORK::NETWORK_BAIL(15, 0, 0);
					Global_2621446.f_81 = 3;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (uParam0->f_1.f_34)
		{
			switch (__LIB_1__::func_286(&(uParam0->f_1)))
			{
				case 0:
					uParam0->f_1.f_6 = 0;
					if (uParam0->f_1.f_35 == 3)
					{
						uParam0->f_1.f_5 = 10000;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()) && __LIB_1__::func_4() != iVar1)
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(__LIB_1__::func_4(), false) };
						}
						else
						{
							Var4 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						}
						fVar3 = SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iVar1, false));
						if ((__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && __LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51()), 0))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if (((uParam0->f_1.f_4 && !__LIB_10__::func_354(&(uParam0->f_1))) && fVar3 < 2500f) && !__LIB_7__::func_721(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if ((fVar3 < 2500f && __LIB_10__::func_227()) && __LIB_7__::func_709(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if ((fVar3 < 2500f && __LIB_10__::func_227()) && (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if (fVar3 < 90000f)
						{
							uParam0->f_1.f_5 = 3000;
						}
						else if (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
						else
						{
							uParam0->f_1.f_5 = 8000;
						}
					}
					else
					{
						uParam0->f_1.f_5 = 8000;
						if (__LIB_8__::func_875(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
					}
					__LIB_9__::func_819(&(uParam0->f_1), 1);
					break;
				case 1:
					if (__LIB_10__::func_221(Global_4718592.f_168757))
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
						HUD::THEFEED_FLUSH_QUEUE();
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if ((!CAM::IS_SCREEN_FADED_OUT() && Global_2715699.f_2846.f_85 == 0) && uParam0->f_1.f_5 > 0)
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							__LIB_15__::func_175(uParam0);
							if ((!__LIB_10__::func_889() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_10__::func_325())
							{
								if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() == 1)
								{
									CAM::DO_SCREEN_FADE_OUT(250);
								}
								else
								{
									__LIB_15__::func_175(uParam0);
									__LIB_9__::func_819(&(uParam0->f_1), 2);
								}
							}
							else
							{
								__LIB_15__::func_175(uParam0);
								__LIB_9__::func_819(&(uParam0->f_1), 2);
							}
						}
					}
					else
					{
						__LIB_9__::func_819(&(uParam0->f_1), 2);
					}
					break;
				case 2:
					__LIB_15__::func_491();
					__LIB_15__::func_177(uParam0);
					__LIB_1__::func_292();
					if (!Global_1931426)
					{
						__LIB_13__::func_574();
					}
					if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || !__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51()), 0))
					{
						if (!__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_2__::func_51())))
						{
							func_5049(1, 1);
						}
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (PED::IS_PED_INJURED(iVar1) || !PED::IS_PED_INJURED(iVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
							{
								if (!PED::IS_PED_INJURED(__LIB_1__::func_4()))
								{
									PED::SET_PED_LOD_MULTIPLIER(__LIB_1__::func_4(), 1f);
								}
							}
							if (!__LIB_10__::func_325())
							{
								__LIB_1__::func_36(1, iVar1, 1);
							}
						}
						if (iVar1 == PLAYER::PLAYER_PED_ID())
						{
							__LIB_10__::func_335(&(uParam0->f_1.f_7), 0);
						}
						else
						{
							__LIB_10__::func_352(&(uParam0->f_1.f_7), 0);
						}
						if (Global_2715699.f_2846.f_26)
						{
							if (CAM::DOES_CAM_EXIST(Global_2715699.f_2846.f_20))
							{
								if (iVar1 == PLAYER::PLAYER_PED_ID())
								{
									MISC::CLEAR_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18))
									{
										HUD::DISPLAY_RADAR(false);
									}
								}
								else
								{
									MISC::SET_BIT(&Global_2621446, 10);
									if (!BitTest(Global_2621446, 18) && __LIB_5__::func_839(&(uParam0->f_1)) != 3)
									{
										HUD::DISPLAY_RADAR(true);
									}
								}
							}
						}
						if ((uParam0->f_1.f_5 > 0 || uParam0->f_1.f_6) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (uParam0->f_1.f_44 < 5 && !STREAMING::IS_ENTITY_FOCUS(PLAYER::PLAYER_PED_ID()))
							{
								uParam0->f_1.f_44++;
								return 0;
							}
							uParam0->f_1.f_44 = 0;
							func_5498(uParam0);
							if (__LIB_10__::func_354(&(uParam0->f_1)))
							{
								uParam0->f_1.f_30 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
							}
							else
							{
								uParam0->f_1.f_30 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
								if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::getMinusOneOrNull())
								{
								}
							}
							if (Global_2621443 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
							{
								Var5 = { uParam0->f_1.f_30 };
								Var5.f_2 = (Var5.f_2 + 25f);
								if ((((__LIB_5__::func_839(&(uParam0->f_1)) != 5 && __LIB_5__::func_839(&(uParam0->f_1)) != 3) && __LIB_5__::func_839(&(uParam0->f_1)) != 4) && !BitTest(Global_2621446, 16)) && MISC::ABSF(Var5.f_2) < 2600f)
								{
									if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
									{
										if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
										{
											ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
											PED::SET_PED_HEATSCALE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0f);
											return 0;
										}
									}
									if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var5, false, true, false, false);
										ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
									}
								}
							}
							if (__LIB_10__::func_354(&(uParam0->f_1)))
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_1.f_30, 0f, 0f, 0f);
								}
							}
							else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							{
								STREAMING::SET_FOCUS_ENTITY(iVar1);
							}
							if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
							{
								if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_1.f_30, 50f, 0);
								}
							}
							MISC::SET_BIT(&(uParam0->f_1), 10);
						}
						else
						{
							uParam0->f_1.f_30 = { 0f, 0f, 0f };
							MISC::CLEAR_BIT(&(uParam0->f_1), 10);
						}
					}
					__LIB_15__::func_184(uParam0);
					MISC::SET_BIT(&(uParam0->f_47), 6);
					uParam0->f_1.f_24 = NETWORK::GET_NETWORK_TIME();
					__LIB_10__::func_351(uParam0);
					__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
					__LIB_9__::func_819(&(uParam0->f_1), 3);
					break;
				case 3:
					bVar0 = false;
					if (BitTest(uParam0->f_1, 10))
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							bVar0 = true;
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								if (PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1)))
								{
									bVar0 = false;
								}
							}
						}
						else if (!__LIB_10__::func_354(&(uParam0->f_1)))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
							}
							if (SYSTEM::VDIST2(uParam0->f_1.f_30, ENTITY::GET_ENTITY_COORDS(iVar1, false)) > 2500f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = true;
								if (__LIB_11__::func_725(PLAYER::PLAYER_ID()))
								{
									bVar0 = false;
								}
							}
							if (ENTITY::GET_ENTITY_SPEED(iVar1) > 2f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = false;
								__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
								__LIB_0__::func_795(&(uParam0->f_2257), 0, 0);
							}
							if (__LIB_0__::func_864(&(uParam0->f_2257)))
							{
								if (!__LIB_0__::func_937(&(uParam0->f_2257), 6000, 0))
								{
									return 0;
								}
								else
								{
									bVar0 = true;
								}
							}
						}
					}
					if (!bVar0)
					{
						if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_24) > uParam0->f_1.f_5)
						{
							bVar0 = true;
						}
					}
					if (__LIB_10__::func_859(iVar2))
					{
						bVar0 = false;
					}
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(iVar2, 0, 1))
						{
							if (__LIB_1__::func_20(iVar2))
							{
								if (__LIB_3__::func_492(iVar2))
								{
									if (__LIB_0__::func_983())
									{
										if (!__LIB_1__::func_117(109))
										{
											if (__LIB_1__::func_19() == 6)
											{
												if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
												{
													CAM::DO_SCREEN_FADE_IN(500);
												}
											}
											bVar0 = false;
										}
									}
								}
							}
						}
					}
					if (bVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									PED::SET_PED_LOD_MULTIPLIER(iVar1, 2.5f);
								}
							}
						}
						if (!BitTest(uParam0->f_1, 12))
						{
							if (((uParam0->f_1.f_35 != 3 && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 14);
							}
							MISC::SET_BIT(&(uParam0->f_1), 12);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
						__LIB_0__::clearF_1Prop(&(uParam0->f_2257));
						__LIB_9__::func_819(&(uParam0->f_1), 4);
					}
					__LIB_15__::func_184(uParam0);
					break;
				case 4:
					__LIB_15__::func_184(uParam0);
					if (BitTest(uParam0->f_47, 15))
					{
						if (__LIB_0__::func_983() || __LIB_15__::func_174())
						{
							MISC::CLEAR_BIT(&(uParam0->f_47), 15);
						}
					}
					if (bParam2 && PED::IS_PED_INJURED(iVar1))
					{
						__LIB_9__::func_819(&(uParam0->f_1), 5);
					}
					else if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!BitTest(uParam0->f_47, 15))
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								if (!__LIB_10__::func_889() && !__LIB_10__::func_350(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), Global_2815059.f_6749))
								{
									if (__LIB_0__::func_983() || __LIB_15__::func_174())
									{
										CAM::DO_SCREEN_FADE_IN(250);
									}
									else
									{
										MISC::SET_BIT(&(uParam0->f_47), 15);
									}
									__LIB_0__::clearF_1Prop(&(uParam0->f_47.f_2186));
									HUD::BUSYSPINNER_OFF();
									PAD::SET_CONTROL_VALUE_NEXT_FRAME(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, 1f);
								}
								else
								{
									__LIB_9__::func_819(&(uParam0->f_1), 5);
								}
							}
						}
						else
						{
							__LIB_9__::func_819(&(uParam0->f_1), 5);
						}
					}
					else
					{
						__LIB_9__::func_819(&(uParam0->f_1), 5);
					}
					break;
				case 5:
					__LIB_10__::func_326();
					__LIB_10__::func_338(&(uParam0->f_1));
					if (!bParam2 || !PED::IS_PED_INJURED(iVar1))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_9__::func_819(&(uParam0->f_1), 0);
					__LIB_10__::func_327(&(uParam0->f_1), 0);
					break;
				}
			}
	}
	if (!uParam0->f_1.f_34)
	{
		uParam0->f_1.f_4 = 1;
		MISC::CLEAR_BIT(&(uParam0->f_47), 2);
		MISC::CLEAR_BIT(&(uParam0->f_1), 10);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_10__::func_349();
		__LIB_10__::func_858(uParam0, __LIB_1__::func_711());
		if (PED::IS_PED_A_PLAYER(__LIB_1__::func_711()))
		{
			uParam0->f_1.f_42 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711());
		}
		else
		{
			uParam0->f_1.f_42 = -1;
		}
		return 1;
	}
	return 0;
}

void func_5459(var uParam0)//Position - 0x1B6A0C
{
	int iVar0;
	int iVar1;
	if (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_0__::func_629())
		{
			if (uParam0->f_1.f_4)
			{
				if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					if (BitTest(Global_2621446, 28))
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
						HUD::HIDE_HELP_TEXT_THIS_FRAME();
						HUD::THEFEED_HIDE_THIS_FRAME();
						return;
					}
				}
				if (__LIB_0__::func_80())
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
				if (__LIB_2__::func_447() && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					return;
				}
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
				__LIB_10__::func_351(uParam0);
				if (__LIB_10__::func_368(uParam0))
				{
					if (PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)) != __LIB_1__::func_4())
					{
						__LIB_10__::func_858(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_10__::func_909(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_1__::func_36(1, __LIB_1__::func_4(), 1);
						__LIB_10__::func_299();
					}
				}
				if (__LIB_10__::func_328(__LIB_1__::func_711()))
				{
					if (__LIB_1__::func_711() != PLAYER::PLAYER_PED_ID())
					{
						if (PED::IS_PED_A_PLAYER(__LIB_1__::func_711()))
						{
							__LIB_15__::func_484(uParam0);
							if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
							{
								func_5477(uParam0);
							}
							iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
							if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())) > iVar0)
							{
								iVar0 = PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
							}
							if (iVar0 != uParam0->f_47.f_1465)
							{
								uParam0->f_47.f_1465 = iVar0;
								MISC::SET_FAKE_WANTED_LEVEL(uParam0->f_47.f_1465);
							}
							if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 1, 1))
							{
								if (PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())) != uParam0->f_47.f_1466)
								{
									uParam0->f_47.f_1466 = PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()));
									HUD::FLASH_WANTED_DISPLAY(uParam0->f_47.f_1466);
								}
							}
							iVar1 = 1;
							if ((uParam0->f_1.f_35 == 3 || uParam0->f_1.f_35 == 5) || uParam0->f_1.f_35 == 4)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
								{
									if (__LIB_1__::func_20(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
									{
										__LIB_10__::func_299();
										if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(0);
										}
										iVar1 = 0;
									}
								}
							}
							if (__LIB_0__::func_864(&(uParam0->f_2255)))
							{
								if (func_15(__LIB_1__::func_711(), __LIB_5__::func_839(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::clearF_1Prop(&(uParam0->f_2255));
								}
							}
							func_5464(uParam0, __LIB_1__::func_711());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							func_5024(uParam0);
						}
					}
					if ((__LIB_10__::func_197(&(uParam0->f_1)) != 6 && __LIB_10__::func_197(&(uParam0->f_1)) != 4) && __LIB_10__::func_197(&(uParam0->f_1)) != 5)
					{
						if (__LIB_1__::func_711() != __LIB_1__::func_4())
						{
							if (!__LIB_10__::func_445())
							{
								__LIB_9__::func_819(&(uParam0->f_1), 0);
								__LIB_7__::func_694(&(uParam0->f_1), 2);
								__LIB_10__::func_327(&(uParam0->f_1), 1);
								__LIB_10__::func_887(&(uParam0->f_1));
							}
						}
					}
				}
				else
				{
					func_5416(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_10__::func_887(&(uParam0->f_1));
		func_5462(uParam0);
	}
	func_5460(uParam0);
}

void func_5460(var uParam0)//Position - 0x1B6D21
{
	if (__LIB_5__::func_839(&(uParam0->f_1)) != 2 && !__LIB_10__::func_356())
	{
		func_5462(uParam0);
	}
}

void func_5462(var uParam0)//Position - 0x1B6D69
{
	uParam0->f_47.f_1467 = 0;
	if (BitTest(uParam0->f_1.f_2, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		__LIB_7__::func_694(&(uParam0->f_1), 5);
	}
	else if (BitTest(uParam0->f_1.f_2, 0))
	{
		func_5024(uParam0);
		__LIB_9__::func_819(&(uParam0->f_1), 0);
		__LIB_10__::func_327(&(uParam0->f_1), 1);
		__LIB_7__::func_694(&(uParam0->f_1), 4);
	}
	else
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

void func_5464(var uParam0, int iParam1)//Position - 0x1B6E10
{
	if (__LIB_10__::func_939(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_13__::func_580(iParam1);
		}
		else if (!__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_4977(uParam0->f_2262, 1);
		}
	}
	else
	{
		func_4976(uParam0);
	}
}

void func_5477(var uParam0)//Position - 0x1B73B0
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711());
	if (iVar1 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (BitTest(Global_2621446.f_69.f_5, 11))
		{
			if ((__LIB_10__::func_355(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775, 0) && !__LIB_4__::func_972(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_11__::func_679(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775))
			{
				if ((Global_4718592 == 2 || Global_4718592 == 8) || Global_4718592 == 0)
				{
					if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 0))
			{
				bVar0 = true;
			}
		}
		else if (__LIB_10__::func_355(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711()), 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0 == 1)
	{
		if (__LIB_10__::func_207() && __LIB_1__::func_620())
		{
			bVar0 = false;
		}
	}
	if (__LIB_2__::func_176())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_623() == 2)
		{
			__LIB_10__::func_336();
		}
	}
	else
	{
		if (bVar0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_623() == 1)
			{
				if ((!__LIB_0__::func_864(&(uParam0->f_2251)) || __LIB_0__::func_937(&(uParam0->f_2251), 5000, 0)) || __LIB_0__::func_623() == 1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_0__::clearF_1Prop(&(uParam0->f_2251));
					__LIB_10__::func_892(uParam0, __LIB_10__::func_364());
					__LIB_1__::func_36(0, 0, 1);
					func_5423(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_627(&(uParam0->f_2251), 0, 0);
			}
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_10__::func_386() == 0)
			{
				__LIB_10__::func_385(1);
			}
		}
		switch (__LIB_10__::func_386())
		{
			case 0:
				break;
			case 1:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if ((!__LIB_10__::func_889() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_10__::func_325())
						{
							CAM::DO_SCREEN_FADE_OUT(250);
						}
						else
						{
							__LIB_1__::func_36(1, __LIB_1__::func_4(), 1);
							__LIB_2__::func_325();
							func_5049(1, 1);
							__LIB_10__::func_363(1);
							__LIB_10__::func_385(0);
						}
					}
				}
				else
				{
					uParam0->f_1.f_28 = NETWORK::GET_NETWORK_TIME();
					__LIB_1__::func_36(1, __LIB_1__::func_4(), 1);
					__LIB_2__::func_325();
					func_5049(1, 1);
					__LIB_10__::func_363(1);
					__LIB_10__::func_385(2);
				}
				break;
			case 2:
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_28) > 8000)
				{
					__LIB_10__::func_385(3);
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (!__LIB_10__::func_889())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						else
						{
							__LIB_10__::func_385(0);
						}
					}
				}
				else
				{
					__LIB_10__::func_385(0);
				}
				break;
			}
	}
}

void func_5488(var uParam0)//Position - 0x1B7A96
{
	if (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_7__::func_719(16))
		{
			if (func_5436(uParam0, 1, 0))
			{
				__LIB_7__::func_694(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_10__::func_886();
		__LIB_10__::func_887(&(uParam0->f_1));
		func_5462(uParam0);
	}
	func_5460(uParam0);
}

void func_5490(var uParam0)//Position - 0x1B7B12
{
	struct<14> Var0;
	func_5495(uParam0);
	__LIB_9__::func_819(&(uParam0->f_1), 0);
	__LIB_7__::func_694(&(uParam0->f_1), 2);
	NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
	if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_1.f_35 == 3)
		{
		}
		else if (__LIB_1__::func_826(PLAYER::PLAYER_ID()) || BitTest(Global_2815059.f_4660, 31))
		{
			NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(false);
		}
		else if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 3 || Global_1574962)
		{
			NETWORK::NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(true);
		}
	}
	__LIB_10__::func_352(&(uParam0->f_1.f_7), 0);
	__LIB_10__::func_545();
	if ((((!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && uParam0->f_1.f_35 != 3) && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && (!__LIB_1__::func_826(PLAYER::PLAYER_ID()) || __LIB_1__::func_201(PLAYER::PLAYER_ID())))
	{
		if ((__LIB_1__::func_448(PLAYER::PLAYER_ID()) != 3 || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) || __LIB_1__::func_201(PLAYER::PLAYER_ID()))
		{
			Var0.f_2 = -2131157870;
			__LIB_1__::func_634(Var0, __LIB_4__::func_970(0));
		}
	}
	MISC::SET_BIT(&(uParam0->f_47), 2);
	HUD::CLEAR_GPS_PLAYER_WAYPOINT();
	HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
	HUD::SET_WAYPOINT_OFF();
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(true);
	MISC::CLEAR_BIT(&Global_2621446, 6);
	MISC::CLEAR_BIT(&Global_2621446, 14);
	__LIB_10__::func_369(&(uParam0->f_1));
	MISC::CLEAR_BIT(&Global_2621446, 13);
	__LIB_10__::func_205();
	if (__LIB_2__::func_660())
	{
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(true);
			NETWORK::NETWORK_SET_TALKER_PROXIMITY(0f);
		}
	}
	else if (!__LIB_10__::func_337())
	{
		if (!(__LIB_1__::func_826(PLAYER::PLAYER_ID()) || BitTest(Global_2815059.f_4660, 31)) || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(true);
			NETWORK::NETWORK_SET_TALKER_PROXIMITY(0f);
		}
	}
	Global_1836146 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_10__::func_227())
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	if (!__LIB_10__::func_227())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	MISC::SET_BIT(&(uParam0->f_1), 1);
}

void func_5495(var uParam0)//Position - 0x1B7DA1
{
	int iVar0;
	uParam0->f_1.f_33 = 0;
	__LIB_10__::func_327(&(uParam0->f_1), 1);
	__LIB_10__::func_887(&(uParam0->f_1));
	__LIB_10__::func_886();
	__LIB_11__::func_920(&(uParam0->f_47));
	__LIB_7__::func_695(&(uParam0->f_1), *uParam0);
	if (BitTest(uParam0->f_1.f_1, 0))
	{
		__LIB_10__::func_909(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_10__::func_858(uParam0, PLAYER::PLAYER_PED_ID());
	}
	else
	{
		iVar0 = __LIB_1__::func_711();
		if (!func_5034(uParam0, iVar0, 1))
		{
		}
	}
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 0, 0);
	NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(true);
	MISC::SET_BIT(&(uParam0->f_1), 0);
}

void func_5498(var uParam0)//Position - 0x1B7E7F
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	var uVar10;
	var uVar11;
	var uVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<3> Var18;
	int iVar19;
	struct<3> Var20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	int iVar24;
	struct<3> Var25;
	int iVar26;
	struct<3> Var27;
	int iVar28;
	int iVar29;
	struct<415> Var30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	fVar1 = 0.25f;
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		fVar1 = 0.15f;
	}
	if (__LIB_10__::func_354(&(uParam0->f_1)) && CAM::GET_RENDERING_CAM() == uParam0->f_1.f_39)
	{
		CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
		PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			Var2 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
			if (__LIB_10__::func_379())
			{
				Var2 = { __LIB_10__::func_378() };
			}
			if (!__LIB_0__::func_86(Var2))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var2, 0f, 0f, 0f);
			}
		}
	}
	if (uParam0->f_1.f_34 && __LIB_1__::func_286(&(uParam0->f_1)) > 1)
	{
		iVar0 = __LIB_2__::func_51();
	}
	else
	{
		iVar0 = __LIB_1__::func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar4 = iVar3;
				if (iVar4 != -1)
				{
					iVar5 = -1;
					iVar6 = -1;
					iVar6 = __LIB_7__::func_693(iVar3, 0);
					bVar7 = false;
					if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 8))
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_776;
					}
					else
					{
						iVar5 = Global_1853348[iVar4 /*834*/].f_267.f_32;
					}
					if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (!bVar7)
						{
							if (((Global_2689235[iVar4 /*453*/].f_244 != -1 && !__LIB_0__::func_845(iVar5, -1)) && !__LIB_2__::func_782(iVar5, 0, 0)) && !__LIB_4__::func_914(iVar3))
							{
								iVar14 = __LIB_0__::func_328(Global_2689235[iVar4 /*453*/].f_244);
								if (iVar14 != 3 && !__LIB_11__::func_785(iVar14, iVar3))
								{
									bVar7 = true;
									if (!__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (__LIB_10__::func_377(Global_2689235[iVar4 /*453*/].f_244, &Var8, &Var9, &fVar13))
										{
											uParam0->f_1.f_41 = 1;
											__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
								}
							}
						}
						if ((!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge")) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
						{
							iVar5 = 86;
						}
						if (bVar7)
						{
							iVar15 = __LIB_3__::func_248(iVar3);
							if (iVar15 == -1)
							{
								iVar15 = __LIB_2__::func_717(iVar3);
							}
							if ((iVar15 == 81 || iVar15 == 82) || iVar15 == 117)
							{
								if (iVar15 == 117)
								{
									iVar16 = joaat("terbyte");
								}
								else
								{
									iVar16 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::getMinusOneOrNull())
								{
									iVar17 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11, 50f, iVar16, 131078);
									Var18 = { 0f, -15f, 5f };
									if (__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar17))
										{
											__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar17, Var18);
										}
									}
								}
							}
							else if (iVar15 == 88 || iVar15 == 101)
							{
								iVar19 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								Var20 = { 0f, -15f, 5f };
								if (__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar19))
									{
										__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar19, Var20);
									}
								}
							}
						}
						if (!bVar7)
						{
							iVar21 = __LIB_3__::func_248(iVar3);
							if (iVar21 == -1)
							{
								iVar21 = __LIB_2__::func_717(iVar3);
							}
							if ((iVar21 == 81 || iVar21 == 82) || iVar21 == 117)
							{
								if (iVar21 == 117)
								{
									iVar22 = joaat("terbyte");
								}
								else
								{
									iVar22 = joaat("trailerlarge");
								}
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::getMinusOneOrNull())
								{
									Var23 = { Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11 };
									iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(Var23, 50f, iVar22, 131078);
									if (!__LIB_0__::func_86(Var23))
									{
										__LIB_10__::func_376(Var23);
									}
									Var25 = { 0f, -15f, 5f };
									if (!__LIB_10__::func_354(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar24))
										{
											__LIB_15__::func_186(uParam0, iVar24, Var25, 0, Var23);
										}
										else
										{
											if (!__LIB_0__::func_86(Var23))
											{
												STREAMING::SET_FOCUS_POS_AND_VEL(Var23, 0f, 0f, 0f);
											}
											__LIB_15__::func_186(uParam0, iVar24, Var25, 0, Var23);
										}
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iVar24))
									{
										CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar24, Var25, true);
										__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar24, Var25);
									}
								}
								bVar7 = true;
							}
							else if (iVar21 == 88 || iVar21 == 101)
							{
								iVar26 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
								{
									__LIB_10__::func_376(Global_2689235[iVar3 /*453*/].f_318.f_21);
								}
								Var27 = { 0f, -15f, 5f };
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar26))
									{
										__LIB_15__::func_186(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
										Global_2815059.f_5195.f_764 = iVar26;
									}
									else
									{
										if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
										{
											STREAMING::SET_FOCUS_POS_AND_VEL(Global_2689235[iVar3 /*453*/].f_318.f_21, 0f, 0f, 0f);
										}
										__LIB_15__::func_186(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
									}
								}
								else if (Global_2815059.f_5195.f_764 != iVar26)
								{
									__LIB_15__::func_177(uParam0);
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iVar26))
								{
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar26, Var27, true);
									__LIB_10__::func_446(&(uParam0->f_1.f_39), iVar26, Var27);
								}
								bVar7 = true;
							}
						}
						if (!bVar7)
						{
							if (((__LIB_1__::func_511(iVar3, 1, 0) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 8)) || (!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge"))) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
							{
								if (iVar5 != -1)
								{
									if (!__LIB_7__::func_685(iVar5) || (__LIB_7__::func_685(iVar5) && iVar6 != -1))
									{
										bVar7 = true;
										__LIB_10__::func_375(uParam0);
										if (uParam0->f_1.f_41 > 2)
										{
											__LIB_15__::func_177(uParam0);
										}
										if (!__LIB_10__::func_354(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 2;
											if (__LIB_7__::func_685(iVar5))
											{
												__LIB_10__::func_376(Global_4196263[iVar6 /*2012*/].f_3[0 /*3*/]);
												__LIB_15__::func_187(uParam0, fVar1, Global_4196263[iVar6 /*2012*/].f_24, Global_4196263[iVar6 /*2012*/].f_24.f_3, Global_4196263[iVar6 /*2012*/].f_24.f_6, 1, 1);
											}
											else
											{
												__LIB_10__::func_376(Global_1312193[iVar5 /*1951*/].f_3[0 /*3*/]);
												__LIB_15__::func_187(uParam0, fVar1, Global_1312193[iVar5 /*1951*/].f_24, Global_1312193[iVar5 /*1951*/].f_24.f_3, Global_1312193[iVar5 /*1951*/].f_24.f_6, 1, 1);
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_4__::func_902(iVar3) || __LIB_3__::func_171(iVar3))
							{
								iVar28 = __LIB_3__::func_248(iVar3);
								if (iVar28 == -1)
								{
									iVar28 = __LIB_2__::func_717(iVar3);
								}
								if (iVar28 != -1)
								{
									if ((((((((((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_0__::func_172(iVar28) != 4)) && __LIB_0__::func_172(iVar28) != 12) && __LIB_0__::func_172(iVar28) != 8) && __LIB_0__::func_172(iVar28) != 5) && __LIB_0__::func_172(iVar28) != 10) && __LIB_0__::func_172(iVar28) != 6) && __LIB_0__::func_172(iVar28) != 14) && __LIB_0__::func_172(iVar28) != 15) && __LIB_0__::func_172(iVar28) != 16) && __LIB_0__::func_172(iVar28) != 17)
									{
										iVar29 = 0;
										if (__LIB_0__::func_172(iVar28) == 11)
										{
											iVar29 = 1;
										}
										Var30.f_22.f_10 = -1;
										Var30.f_22.f_37 = -1;
										Var30.f_22.f_40 = 1048576000;
										Var30.f_22.f_66 = 1048576000;
										Var30.f_22.f_68 = -1;
										Var30.f_22.f_69 = 2;
										Var30.f_22.f_72 = 2;
										Var30.f_22.f_89 = 4;
										Var30.f_22.f_94 = -1;
										Var30.f_22.f_96 = 4;
										Var30.f_22.f_109.f_1 = 10;
										Var30.f_22.f_122.f_1 = 10;
										Var30.f_22.f_135 = 4;
										Var30.f_22.f_140 = 30;
										Var30.f_22.f_171 = 4;
										Var30.f_22.f_176 = 6;
										Var30.f_22.f_183 = 4;
										Var30.f_22.f_189 = 9;
										Var30.f_22.f_218 = -1;
										Var30.f_22.f_221 = 6;
										Var30.f_285 = 9;
										Var30.f_285.f_28 = 9;
										Var30.f_285.f_56 = 9;
										Var30.f_285.f_66 = 9;
										Var30.f_285.f_94 = 9;
										Var30.f_403 = -1;
										Var30.f_405 = 2;
										Var30.f_413 = -1;
										Var30.f_414 = -1;
										func_5506(iVar28, &Var30, iVar29, 0);
										__LIB_10__::func_375(uParam0);
										if (!__LIB_10__::func_354(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 14;
											Var31 = { Var30.f_22.f_59 };
											Var32 = { Var30.f_22.f_62 };
											fVar33 = Var30.f_22.f_65;
											__LIB_10__::func_376(Global_1946250.f_533[iVar28 /*3*/]);
											if (SYSTEM::VDIST(Var31, 0f, 0f, 0f) < 0.01f)
											{
												Var31 = { Var30.f_22.f_13 };
												Var32 = { Var30.f_22.f_16 };
												fVar33 = Var30.f_22.f_19;
											}
											if (!__LIB_0__::func_86(Var31))
											{
												__LIB_15__::func_187(uParam0, fVar1, Var31, Var32, fVar33, 1, 1);
												bVar7 = true;
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 7))
							{
								bVar7 = true;
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 3;
									__LIB_15__::func_187(uParam0, fVar1, 122.0654f, -1327.9208f, 33.6793f, -2.9863f, 2.0975f, -9.7207f, 32.8998f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 12))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 4;
									__LIB_15__::func_187(uParam0, fVar1, 1291.5598f, -1730.0697f, 58.7646f, -7.1113f, 0f, 65.8008f, 41.2371f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 13))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 5;
									__LIB_15__::func_187(uParam0, fVar1, 1989.2953f, 3812.5586f, 33.4393f, -0.5562f, 0f, 69.5306f, 40.2409f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_979(iVar3, 14))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 6;
									__LIB_15__::func_187(uParam0, fVar1, 689.6125f, -996.7897f, 37.070427f, -7.501717f, 0f, -43.41461f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_11__::func_728(iVar3))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
									Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
									uParam0->f_1.f_41 = 7;
									__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 12))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									__LIB_10__::func_374(&uVar10, &uVar11, &Var8, &Var9, &uVar12, Global_4718592.f_162483, 1);
									uParam0->f_1.f_41 = 8;
									__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, 40f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (((BitTest(Global_1853348[iVar4 /*834*/].f_833, 14) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 15)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_ROLLERCOASTER", -1)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_FERRISWHEEL", -1))
							{
								bVar7 = true;
								__LIB_10__::func_375(uParam0);
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 9;
									__LIB_15__::func_187(uParam0, fVar1, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_2815059.f_4660, 5))
							{
								bVar7 = true;
								if (BitTest(uParam0->f_1, 16))
								{
									MISC::CLEAR_BIT(&(uParam0->f_1), 16);
								}
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									__LIB_10__::func_373(0);
									uParam0->f_1.f_41 = 10;
									__LIB_15__::func_187(uParam0, fVar1, -1155.4f, -2715.5f, 64f, -10.3f, 0f, 113.1f, 50f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
							{
								if ((__LIB_1__::func_20(iVar3) && __LIB_2__::func_88(iVar3) < 41) && !__LIB_1__::func_511(iVar3, 1, 0))
								{
									if ((__LIB_10__::func_197(&(uParam0->f_1)) == 3 && __LIB_11__::func_784(iVar3)) && Global_4718592.f_117083)
									{
										if (__LIB_10__::func_354(&(uParam0->f_1)))
										{
											bVar7 = true;
										}
										else
										{
											bVar7 = true;
											Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
											Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
											fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
											if (!__LIB_0__::func_86(Global_4718592.f_634) && __LIB_0__::func_983())
											{
												Var8 = { Global_4718592.f_634 };
												Var9 = { Global_4718592.f_637 };
											}
											__LIB_2__::func_448(0, 0, 1);
											uParam0->f_1.f_41 = 11;
											__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
									else if (__LIB_10__::func_354(&(uParam0->f_1)))
									{
										bVar7 = true;
									}
									else if (Global_2689235[iVar4 /*453*/].f_205.f_2 > 0f)
									{
										Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
										Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
										fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
										bVar7 = true;
										if (__LIB_0__::func_86(Var8))
										{
											Var8 = { Global_2689235[iVar4 /*453*/].f_205 };
											Var8.f_0 = (Var8.f_0 + 0f);
											Var8.f_1 = (Var8.f_1 + -2.3332f);
											Var8.f_2 = (Var8.f_2 + 3.2914f);
											Var9 = { -40.6168f, 0f, 0f };
											fVar13 = 40.3433f;
										}
										uParam0->f_1.f_41 = 12;
										__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
							else if (__LIB_0__::func_979(iVar3, 0))
							{
								bVar7 = true;
								if (!__LIB_10__::func_354(&(uParam0->f_1)))
								{
									if (__LIB_10__::func_372(__LIB_1__::func_694(iVar3), &Var8, &Var9, &fVar13))
									{
										uParam0->f_1.f_41 = 13;
										__LIB_15__::func_187(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
						}
					}
					if (!bVar7 && !__LIB_0__::func_983())
					{
						if (__LIB_11__::func_727(uParam0, iVar3) && !__LIB_10__::func_371())
						{
							__LIB_15__::func_177(uParam0);
						}
					}
				}
			}
		}
	}
}

void func_5506(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1B9057
{
	var uVar0;
	func_5507(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_5507(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1B906D
{
	struct<33> Var0;
	func_590(iParam0, &Var0, 2);
	func_590(iParam0, &Var0, 6);
	func_590(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_31);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_389));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_32);
	Stack.Push(iParam0);
	Stack.Push(uParam2);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_30);
}

void func_5524(var uParam0)//Position - 0x1B9996
{
	if (BitTest(Global_2621446, 2))
	{
		func_5024(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 2);
	}
	else
	{
		if (uParam0->f_1.f_29 < 0 || uParam0->f_1.f_29 >= 32)
		{
			uParam0->f_1.f_29 = 0;
		}
		func_5025(uParam0, uParam0->f_1.f_29);
		uParam0->f_1.f_29++;
	}
}

void func_5551(int* iParam0)//Position - 0x1BAC7A
{
	__LIB_10__::func_783(iParam0);
	__LIB_10__::func_782(iParam0);
	MISC::CLEAR_BIT(iParam0, 12);
	MISC::CLEAR_BIT(iParam0, 13);
	__LIB_2__::func_346(PLAYER::PLAYER_ID(), 1);
	__LIB_6__::func_704();
	__LIB_1__::func_553();
	func_4908(&(iParam0->f_88), 0);
	if (!BitTest(*iParam0, 17))
	{
		HUD::SET_RADAR_ZOOM(0);
		HUD::DISPLAY_RADAR(true);
	}
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	GRAPHICS::SET_NOISEOVERIDE(false);
	GRAPHICS::SET_NOISINESSOVERIDE(0f);
	if (__LIB_11__::func_764())
	{
		HUD::DISPLAY_CASH(true);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_5) || CAM::DOES_CAM_EXIST(iParam0->f_6))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_5))
	{
		CAM::DESTROY_CAM(iParam0->f_5, false);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_6))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_6, false);
		CAM::DESTROY_CAM(iParam0->f_6, false);
	}
	AUDIO::STOP_AUDIO_SCENE("WATCHING_SAFEHOUSE_TV");
	__LIB_1__::func_534();
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_7));
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_4 < 1)
	{
		__LIB_15__::func_194(&(iParam0->f_88));
	}
	func_4908(&(iParam0->f_88), 0);
	__LIB_0__::clearF_1Prop(&(iParam0->f_80));
	MISC::CLEAR_BIT(iParam0, 11);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			if (BitTest(iParam0->f_28, 2))
			{
				__LIB_10__::func_781(iParam0, 0);
			}
		}
	}
	if (((Global_2789733 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2789733 = 0;
}

int func_5561(int* iParam0, int* iParam1)//Position - 0x1BB0AC
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	iVar0 = 0;
	uVar1 = __LIB_1__::func_864(PLAYER::PLAYER_ID());
	uVar2 = __LIB_2__::func_574(PLAYER::PLAYER_ID());
	uVar3 = __LIB_10__::func_972(PLAYER::PLAYER_ID());
	if ((iParam1->f_2483 && !BitTest(*iParam1, 31)) && !BitTest(iParam1->f_1, 0))
	{
		return 0;
	}
	if (!Global_1931426 && !BitTest(Global_1931419, 2))
	{
		if (((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !BitTest(Global_2703735.f_876.f_4, 0)) && !BitTest(Global_2621446, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558())
		{
			if (BitTest(*iParam0, 3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 226.86108f, -975.7418f, -99.99992f, 230.35152f, -975.6111f, -96.041504f, 4.875f, false, true, 0) && !__LIB_4__::func_849())
				{
					iVar0 = 1;
				}
			}
			else if (!BitTest(*iParam0, 1) && BitTest(*iParam0, 2))
			{
				iVar0 = 1;
			}
		}
	}
	if (!BitTest(Global_1931419, 2))
	{
		if (iVar0 && (((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30))))
		{
			MISC::SET_BIT(&Global_1931419, 4);
			if ((((((iParam0->f_8 != 3 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && !__LIB_10__::func_873()) && !__LIB_0__::func_877()) && !__LIB_0__::func_193()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_10__::func_872(1, 0);
			}
			else
			{
				__LIB_10__::func_872(0, 0);
			}
			if ((BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3, 0) && __LIB_13__::func_573()) && !BitTest(Global_1931419, 5))
			{
				if (!BitTest(Global_1931419, 0))
				{
					MISC::SET_BIT(&Global_1931419, 0);
					MISC::SET_BIT(&Global_1931419, 1);
				}
			}
			else if (BitTest(Global_1931419, 0))
			{
				MISC::SET_BIT(&Global_1931419, 1);
				MISC::CLEAR_BIT(&Global_1931419, 0);
			}
		}
		else
		{
			__LIB_10__::func_872(0, 1);
		}
	}
	else if (((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30)))
	{
		__LIB_0__::func_627(&(Global_1931419.f_4), 1, 0);
	}
	if (((((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30))) && __LIB_0__::func_864(&(Global_1931419.f_4))) && !__LIB_0__::func_937(&(Global_1931419.f_4), 3000, 1))
	{
		iVar0 = 0;
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_3__::func_122(&(iParam1->f_3));
		iParam1->f_3 = -1;
	}
	if ((BitTest(Global_1931419, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_193())
	{
		__LIB_3__::func_122(&(iParam1->f_3));
		iParam1->f_3 = -1;
		MISC::CLEAR_BIT(&Global_1931419, 1);
	}
	if (iVar0 && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
	{
		if (Global_1853198)
		{
			if (iParam1->f_3 == -1)
			{
				if (BitTest(*iParam0, 3))
				{
					__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_GBILL" /* GXT: Unable to watch TV until utility charge is paid. */, 0, 0, 0, 0);
				}
				else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SBILL_KM" /* GXT: Unable to watch TV until utility charge is paid.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SBILL" /* GXT: Unable to watch TV until utility charge is paid.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else
		{
			if (Global_262145.f_24101 /* Tunable: ON_CALL_BLOCKS_TV */)
			{
				if (__LIB_0__::func_983() || __LIB_0__::func_626())
				{
					__LIB_3__::func_122(&(iParam1->f_3));
					return 0;
				}
			}
			if ((((iParam1->f_2481 || iParam1->f_2482) || iParam1->f_2483) && !BitTest(*iParam1, 31)) && Global_2725435)
			{
				if (__LIB_0__::func_1("MPTV_SEAT" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && __LIB_0__::func_1("MPTV_SEAT_KM" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)))
				{
					__LIB_3__::func_122(&(iParam1->f_3));
					iParam1->f_3 = -1;
					HUD::CLEAR_HELP(true);
				}
			}
			else if (__LIB_0__::func_1("MPTV_SEAT_NA" /* GXT: Press ~INPUT_FRONTEND_CANCEL~ to stand up. */) || __LIB_0__::func_1("MPTV_SEAT_NA_PC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
			{
				__LIB_3__::func_122(&(iParam1->f_3));
				iParam1->f_3 = -1;
				HUD::CLEAR_HELP(true);
			}
			if (iParam1->f_3 == -1)
			{
				if (BitTest(*iParam0, 3))
				{
					__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_GRGE" /* GXT: Press ~INPUT_CONTEXT~ to watch TV. */, 0, 0, 0, 0);
				}
				else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (((((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30))) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_193())
					{
						if (BitTest(Global_1931419, 0))
						{
							if (__LIB_13__::func_556(1))
							{
								if (func_5562())
								{
									__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_KMO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_ST_KMO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
							else if (__LIB_10__::func_946())
							{
								if (func_5562())
								{
									__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_KMO" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_KMONP" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
						}
						else if (__LIB_13__::func_556(1))
						{
							if (func_5562())
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_KMO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_ST_KMO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
						else if (__LIB_10__::func_946())
						{
							if (func_5562())
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_KM_OF" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_ST_KM_OFNP" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else if (uVar2 || uVar3)
					{
						if (__LIB_10__::func_946())
						{
							if (func_5562())
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_CLUP" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_KM" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else if ((((iParam1->f_2481 || iParam1->f_2482) || iParam1->f_2483) && !BitTest(*iParam1, 31)) && Global_2725435)
					{
						__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_NA_PC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_KM" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if (((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30)))
				{
					if (BitTest(Global_1931419, 0))
					{
						if (__LIB_13__::func_556(1))
						{
							if (func_5562())
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEATO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEATO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
						}
						else if (__LIB_10__::func_946())
						{
							if (func_5562())
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEATO" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEATONP" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else if (__LIB_13__::func_556(1))
					{
						if (func_5562())
						{
							__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEATO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEATO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_10__::func_946())
					{
						if (func_5562())
						{
							__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_OFF" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_OFFNP" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
					}
				}
				else if (uVar2 || uVar3)
				{
					if (__LIB_10__::func_946())
					{
						if (func_5562())
						{
							__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_CLU" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
					}
				}
				else if ((((iParam1->f_2481 || iParam1->f_2482) || iParam1->f_2483) && !BitTest(*iParam1, 31)) && Global_2725435)
				{
					__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT_NA" /* GXT: Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_5__::func_569(&(iParam1->f_3), 3, "MPTV_SEAT" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (!__LIB_13__::func_556(0))
				{
					if (((__LIB_0__::func_1("MPTV_SEATO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */) || __LIB_0__::func_1("MPTV_SEATO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */)) || __LIB_0__::func_1("MPTV_SEAT_KMO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPTV_ST_KMO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
					{
						__LIB_3__::func_122(&(iParam1->f_3));
					}
				}
				if (Global_262145.f_24101 /* Tunable: ON_CALL_BLOCKS_TV */)
				{
					if (__LIB_0__::func_983() || __LIB_0__::func_626())
					{
						__LIB_3__::func_122(&(iParam1->f_3));
					}
				}
				if (__LIB_3__::func_113(iParam1->f_3, 1))
				{
					__LIB_3__::func_122(&(iParam1->f_3));
					return 1;
				}
			}
		}
	}
	else
	{
		__LIB_3__::func_122(&(iParam1->f_3));
	}
	return 0;
}

int func_5562()//Position - 0x1BB998
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_394())
	{
		iVar0 = func_155(PLAYER::PLAYER_PED_ID(), 11, -1);
		iVar1 = func_155(PLAYER::PLAYER_PED_ID(), 4, -1);
		if (__LIB_0__::func_240(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 11, iVar0, -1) || __LIB_10__::func_945(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 4, iVar1, -1))
		{
			return 0;
		}
	}
	return 1;
}

int func_5570(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x1BBCC9
{
	if (!BitTest(*iParam2, 24))
	{
		__LIB_13__::func_584(iParam2, uParam3);
	}
	if (BitTest(*iParam2, 5))
	{
		return 1;
	}
	else
	{
		if (__LIB_11__::func_919(iParam2, uParam3) == 0)
		{
			return 0;
		}
		STREAMING::REQUEST_MODEL(__LIB_11__::func_919(iParam2, uParam3));
		if (STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_919(iParam2, uParam3)))
		{
			if (__LIB_10__::func_838(uParam0, iParam1) > 0)
			{
				iParam2->f_87 = __LIB_10__::func_837(uParam0, iParam1);
				__LIB_10__::func_778(iParam2, 13);
				MISC::SET_BIT(iParam2, 0);
				if (__LIB_11__::func_918(iParam2, uParam3->f_31, *iParam1))
				{
					if (func_577(iParam1, iParam2, uParam3))
					{
						if (uParam0->f_22 == 2)
						{
							MISC::SET_BIT(&(iParam2->f_28), 10);
						}
						else if (uParam0->f_22 == 1)
						{
							MISC::SET_BIT(&(iParam2->f_28), 9);
						}
						return 1;
					}
				}
				else if (func_4903(iParam1, iParam2, uParam3))
				{
					if (uParam0->f_22 == 2)
					{
						MISC::SET_BIT(&(iParam2->f_28), 10);
					}
					else if (uParam0->f_22 == 1)
					{
						MISC::SET_BIT(&(iParam2->f_28), 9);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_5576(int* iParam0, var uParam1)//Position - 0x1BC51B
{
	if (iParam0->f_2481)
	{
		if (BitTest(*iParam0, 31))
		{
			if (uParam1->f_22 > 0)
			{
				if (uParam1->f_22 == 1)
				{
					if (!Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_2)
					{
						Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_2 = 1;
					}
				}
				if (uParam1->f_22 == 2)
				{
					if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_2)
					{
						Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_2 = 0;
					}
				}
				if (uParam1->f_20 != Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_3)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_3 = uParam1->f_20;
				}
			}
		}
		else if (uParam1->f_22 > 0)
		{
			if (uParam1->f_22 == 1)
			{
				if (!Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_4)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_4 = 1;
				}
			}
			if (uParam1->f_22 == 2)
			{
				if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_4)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_4 = 0;
				}
			}
			if (uParam1->f_20 != Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_5)
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_5 = uParam1->f_20;
			}
		}
	}
	else if (iParam0->f_2483)
	{
		if (BitTest(iParam0->f_1, 0))
		{
			if (uParam1->f_22 > 0)
			{
				if (uParam1->f_22 == 1)
				{
					if (!__LIB_0__::func_137(28267, -1))
					{
						func_256(28267, 1, -1);
					}
				}
				if (uParam1->f_22 == 2)
				{
					if (__LIB_0__::func_137(28267, -1))
					{
						func_256(28267, 0, -1);
					}
				}
				if (uParam1->f_20 != __LIB_0__::func_253(34117, -1))
				{
					__LIB_1__::func_379(34117, uParam1->f_20, -1);
				}
			}
		}
		else if (BitTest(*iParam0, 31))
		{
			if (uParam1->f_22 > 0)
			{
				if (uParam1->f_22 == 1)
				{
					if (!__LIB_0__::func_137(28268, -1))
					{
						func_256(28268, 1, -1);
					}
				}
				if (uParam1->f_22 == 2)
				{
					if (__LIB_0__::func_137(28268, -1))
					{
						func_256(28268, 0, -1);
					}
				}
				if (uParam1->f_20 != __LIB_0__::func_253(34118, -1))
				{
					__LIB_1__::func_379(34118, uParam1->f_20, -1);
				}
			}
		}
		else if (uParam1->f_22 > 0)
		{
			if (uParam1->f_22 == 1)
			{
				if (!__LIB_0__::func_137(28269, -1))
				{
					func_256(28269, 1, -1);
				}
			}
			if (uParam1->f_22 == 2)
			{
				if (__LIB_0__::func_137(28269, -1))
				{
					func_256(28269, 0, -1);
				}
			}
			if (uParam1->f_20 != __LIB_0__::func_253(34119, -1))
			{
				__LIB_1__::func_379(34119, uParam1->f_20, -1);
			}
		}
	}
	else if (!iParam0->f_2482)
	{
		if (uParam1->f_22 > 0)
		{
			if (uParam1->f_22 == 1)
			{
				if (!Global_2359296[__LIB_0__::func_155() /*5567*/].f_7)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_7 = 1;
				}
			}
			if (uParam1->f_22 == 2)
			{
				if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_7 = 0;
				}
			}
			if (uParam1->f_20 != Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_1)
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_1 = uParam1->f_20;
			}
		}
		if (uParam1->f_23 > 0)
		{
			if (uParam1->f_23 == 1)
			{
				if (!Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_12)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_12 = 1;
				}
			}
			if (uParam1->f_23 == 2)
			{
				if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_12)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_12 = 0;
				}
			}
			if (uParam1->f_21 != Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_13)
			{
				Global_2359296[__LIB_0__::func_155() /*5567*/].f_7.f_13 = uParam1->f_21;
			}
		}
	}
}

void func_5578(var uParam0, int* iParam1, int* iParam2)//Position - 0x1BC8B8
{
	if (!BitTest(*iParam2, 8))
	{
		switch (__LIB_10__::func_838(uParam0, iParam1))
		{
			case 1:
				if (iParam2->f_87 != __LIB_10__::func_837(uParam0, iParam1))
				{
					__LIB_11__::func_723(iParam2, iParam2->f_87, __LIB_10__::func_837(uParam0, iParam1));
					iParam2->f_86 = __LIB_10__::func_840(__LIB_10__::func_837(uParam0, iParam1));
					iParam2->f_87 = __LIB_10__::func_837(uParam0, iParam1);
				}
				if ((iParam2->f_87 == 3 && iParam1->f_8 == 3) && __LIB_10__::func_850(iParam2) > 11)
				{
					switch (uParam0->f_23)
					{
						case 1:
							if (GRAPHICS::GET_TV_CHANNEL() != __LIB_10__::func_840(uParam0->f_21))
							{
								__LIB_15__::func_189(iParam2, uParam0->f_21);
							}
							break;
						case 2:
							if (GRAPHICS::GET_TV_CHANNEL() != -1)
							{
								GRAPHICS::SET_TV_CHANNEL(-1);
							}
							break;
					}
				}
				else if (GRAPHICS::GET_TV_CHANNEL() != iParam2->f_86)
				{
					__LIB_15__::func_189(iParam2, iParam2->f_87);
				}
				if (BitTest(iParam2->f_28, 8))
				{
					MISC::CLEAR_BIT(&(iParam2->f_28), 8);
				}
				if (!BitTest(iParam2->f_28, 7))
				{
					__LIB_13__::func_562(iParam2, iParam2->f_87);
					MISC::SET_BIT(&(iParam2->f_28), 7);
				}
				break;
			case 2:
				if (GRAPHICS::GET_TV_CHANNEL() != -1)
				{
					GRAPHICS::SET_TV_CHANNEL(-1);
				}
				if (BitTest(iParam2->f_28, 7))
				{
					MISC::CLEAR_BIT(&(iParam2->f_28), 7);
				}
				if (!BitTest(iParam2->f_28, 8))
				{
					__LIB_13__::func_561(iParam2, iParam2->f_87);
					MISC::SET_BIT(&(iParam2->f_28), 8);
				}
				break;
			}
	}
	if (BitTest(*iParam2, 18))
	{
		__LIB_10__::func_780(iParam2);
		MISC::CLEAR_BIT(iParam2, 18);
	}
	else if (BitTest(*iParam2, 5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_4))
		{
			if (HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iParam2->f_4)))
			{
				HUD::SET_TEXT_RENDER_ID(iParam2->f_2);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
				GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, 255);
				if (GRAPHICS::GET_TV_CHANNEL() == -1)
				{
					__LIB_10__::func_841(iParam2, 1);
				}
				else
				{
					__LIB_10__::func_841(iParam2, 1);
					GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam2->f_4);
				}
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			}
		}
	}
	else if (BitTest(*iParam2, 15))
	{
	}
	if (BitTest(*iParam2, 21))
	{
		if (!BitTest(*iParam2, 22))
		{
			MISC::SET_BIT(iParam2, 22);
		}
	}
	else if (BitTest(*iParam2, 22))
	{
		MISC::CLEAR_BIT(iParam2, 22);
	}
	func_5579(uParam0, iParam1, iParam2);
}

void func_5579(var uParam0, var uParam1, int* iParam2)//Position - 0x1BCAE3
{
	GRAPHICS::SET_TV_VOLUME(func_5580(uParam0, uParam1, iParam2));
}

float func_5580(var uParam0, var uParam1, var uParam2)//Position - 0x1BCAF9
{
	if (BitTest(*uParam2, 31) && uParam2->f_2481)
	{
		if (((Global_100493.f_374 == joaat("Apart_Entry_Room") || Global_100493.f_374 == joaat("Apart_Spare_Room")) || Global_100493.f_374 == joaat("Apart_Spare_Bath_Rm")) || Global_100493.f_374 == joaat("Apart_wardrobe"))
		{
			return func_5581(GRAPHICS::GET_TV_VOLUME(), -50f, 0.05f, 0);
		}
		else
		{
			return func_5581(GRAPHICS::GET_TV_VOLUME(), __LIB_10__::func_772(uParam0, uParam1), 0.05f, 0);
		}
	}
	if (BitTest(*uParam2, 22) && !BitTest(*uParam1, 3))
	{
		return -36f;
	}
	else
	{
		return __LIB_10__::func_772(uParam0, uParam1);
	}
	return -36f;
}

float func_5581(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x1BCBBE
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
			fParam2 = ((-SYSTEM::COS(__LIB_0__::func_503((3.1415927f * fParam2))) / 2f) + 0.5f);
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
			fVar0 = func_5581(fParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_5581(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

void func_5615(var uParam0)//Position - 0x1BFA59
{
	__LIB_8__::func_356(&(uParam0->f_7), 12);
}

int func_5626(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1BFC3A
{
	if (uParam0->f_9 == iParam1 && func_5627(uParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_5627(var uParam0, var uParam1, var uParam2)//Position - 0x1BFC60
{
	if ((uParam0->f_13 > 2 && (uParam1 || __LIB_8__::func_356(&(uParam0->f_7), 11))) && (uParam2 || uParam0->f_13 < 8))
	{
		return 1;
	}
	return 0;
}

void func_5628(var uParam0)//Position - 0x1BFCA1
{
	char* sVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	__LIB_14__::func_651(uParam0);
	__LIB_15__::func_207(uParam0);
	switch (uParam0->f_13)
	{
		case 0:
			__LIB_2__::func_487(&(uParam0->f_7), 11);
			__LIB_14__::func_644(uParam0, 1);
			break;
		case 1:
			Global_1946234 = 0;
			if (__LIB_16__::func_194(uParam0))
			{
				uParam0->f_11 = MISC::GET_GAME_TIMER();
				__LIB_14__::func_644(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_14__::func_643(PLAYER::PLAYER_PED_ID(), &(uParam0->f_16[uParam0->f_9 /*14*/])) && __LIB_14__::func_642(PLAYER::PLAYER_PED_ID(), uParam0->f_16[uParam0->f_9 /*14*/].f_3, uParam0->f_16[uParam0->f_9 /*14*/].f_13))
			{
				if ((((((((((((__LIB_14__::func_641(uParam0) || __LIB_16__::func_244(uParam0)) || __LIB_15__::func_206(uParam0)) || !func_5652(uParam0)) || __LIB_1__::func_832(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || BitTest(Global_1946250.f_4, 2)) || __LIB_14__::func_639(uParam0->f_16[uParam0->f_9 /*14*/].f_13))
				{
					MISC::SET_BIT(&(Global_1946250.f_3), 16);
					if (__LIB_16__::func_244(uParam0))
					{
						__LIB_5__::func_569(&(uParam0->f_6), 4, "POD_TOO_MANY" /* GXT: Too many players near activity. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_3__::func_122(&(uParam0->f_6));
						__LIB_14__::func_652(uParam0);
						__LIB_14__::func_644(uParam0, 1);
					}
				}
				else
				{
					Global_1946234 = 1;
					MISC::SET_BIT(&(Global_1946250.f_3), 16);
					if (uParam0->f_6 == -1)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_11) > 150)
						{
							if (__LIB_14__::func_638(uParam0->f_9) && !Global_262145.f_27059 /* Tunable: VC_PENTHOUSE_DISABLE_DCTL */)
							{
								__LIB_5__::func_569(&(uParam0->f_6), 4, "MPTV_WALKOFF" /* GXT: Press ~INPUT_CONTEXT~ to sit down, watch TV or play "Don't Cross The Line". */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_5__::func_569(&(uParam0->f_6), 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
							}
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						__LIB_3__::func_122(&(uParam0->f_6));
						__LIB_16__::func_216(uParam0);
						__LIB_14__::func_644(uParam0, 3);
						if (uParam0->f_16[uParam0->f_9 /*14*/].f_13 == 4)
						{
							MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 15);
							__LIB_1__::func_28(157);
						}
					}
				}
			}
			else
			{
				__LIB_14__::func_652(uParam0);
				__LIB_14__::func_644(uParam0, 1);
			}
			break;
		case 3:
			__LIB_14__::func_650(uParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				__LIB_14__::func_644(uParam0, 4);
			}
			break;
		case 4:
			__LIB_14__::func_650(uParam0, &sVar0);
			__LIB_14__::func_649(uParam0, &sVar1);
			if (uParam0->f_1.f_1 == 3)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					if (!__LIB_8__::func_356(&(uParam0->f_7), 13))
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 1);
						__LIB_2__::func_486(&(uParam0->f_7), 13);
					}
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, __LIB_14__::func_636(uParam0), __LIB_14__::func_648(uParam0), 0f, 2) };
			Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, __LIB_14__::func_636(uParam0), __LIB_14__::func_648(uParam0), 0f, 2) };
			fVar4 = Var3.f_2;
			fVar5 = 0.05f;
			if (uParam0->f_1.f_1 == 1)
			{
				fVar5 = 0.15f;
			}
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var2, 1f, 500, fVar4, fVar5);
			__LIB_5__::func_848(uParam0->f_9);
			__LIB_14__::func_644(uParam0, 5);
			break;
		case 5:
			__LIB_16__::func_197(uParam0);
			__LIB_14__::func_650(uParam0, &sVar0);
			__LIB_14__::func_649(uParam0, &sVar1);
			iVar6 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
			Var7 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, __LIB_14__::func_636(uParam0), __LIB_14__::func_648(uParam0), 0f, 2) };
			fVar8 = Var7.f_2;
			if ((iVar6 != 1 && iVar6 != 0) || __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar8, 5f))
			{
				if (uParam0->f_1.f_1 == 3)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						if (!__LIB_8__::func_356(&(uParam0->f_7), 13))
						{
							CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 1);
							__LIB_2__::func_486(&(uParam0->f_7), 13);
						}
					}
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				uParam0->f_8 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(__LIB_14__::func_636(uParam0), __LIB_14__::func_648(uParam0), 2, true, false, 1f, 0f, 1.12f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, &sVar0, &sVar1, 2f, -1000f, 9, 0, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_8);
				uParam0->f_1 = MISC::GET_GAME_TIMER();
				__LIB_2__::func_486(&(uParam0->f_7), 8);
				__LIB_14__::func_644(uParam0, 6);
			}
			break;
		case 6:
			if (__LIB_8__::func_356(&(uParam0->f_7), 10) || __LIB_6__::func_518())
			{
				__LIB_2__::func_487(&(uParam0->f_7), 10);
				__LIB_15__::func_208(uParam0);
			}
			__LIB_16__::func_197(uParam0);
			func_5632(uParam0);
			iVar9 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_8);
			if (__LIB_8__::func_356(&(uParam0->f_7), 13))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar9))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar9) >= 1f)
				{
					if (uParam0->f_1.f_1 == 3)
					{
						if (__LIB_8__::func_356(&(uParam0->f_7), 13))
						{
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1)
							{
								CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 1);
								CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
							}
							__LIB_2__::func_487(&(uParam0->f_7), 13);
						}
					}
					__LIB_16__::func_219(uParam0, 0);
					__LIB_14__::func_650(uParam0, &sVar0);
					__LIB_14__::func_649(uParam0, &sVar1);
					uParam0->f_8 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(__LIB_14__::func_636(uParam0), __LIB_14__::func_648(uParam0), 2, true, false, 1f, 0f, 1.12f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, &sVar0, &sVar1, 4f, -1.5f, 9, 0, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_8);
					__LIB_2__::func_486(&(uParam0->f_7), 8);
					__LIB_2__::func_486(&(uParam0->f_7), 11);
				}
				else
				{
					__LIB_2__::func_487(&(uParam0->f_7), 8);
				}
			}
			else if (!__LIB_8__::func_356(&(uParam0->f_7), 8))
			{
				__LIB_14__::func_644(uParam0, 8);
			}
			break;
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_8);
			__LIB_14__::func_644(uParam0, 8);
			break;
		case 8:
			iVar10 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_8);
			iVar11 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"));
			if (iVar11 == 0 || iVar11 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar10))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar10) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BREAKOUT_FINISH"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BREAK_OUT")))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_8);
						__LIB_5__::func_848(-1);
						__LIB_14__::func_652(uParam0);
						__LIB_14__::func_644(uParam0, 0);
					}
				}
			}
			else
			{
				__LIB_5__::func_848(-1);
				__LIB_14__::func_652(uParam0);
				__LIB_14__::func_644(uParam0, 0);
			}
			break;
	}
}

void func_5632(var uParam0)//Position - 0x1C04E1
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	if (uParam0->f_13 == 6)
	{
		Var0 = { PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/), PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/), 0f };
		fVar1 = SYSTEM::VMAG(Var0);
		if ((uParam0->f_13 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BLOCK_INTERRUPT"))) && !__LIB_8__::func_356(&(uParam0->f_7), 12))
		{
			if ((fVar1 >= 0.35f && !Global_2789734) && !Global_2789737)
			{
				__LIB_16__::func_245(uParam0);
			}
		}
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			__LIB_14__::func_652(uParam0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BLOCK_INTERRUPT")))
		{
			__LIB_14__::func_652(uParam0);
		}
		else if (Global_2789734 || Global_2789737)
		{
			__LIB_14__::func_652(uParam0);
		}
		else if (func_5635(uParam0))
		{
			__LIB_14__::func_652(uParam0);
		}
		else
		{
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
			if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_8__::func_356(&(uParam0->f_7), 0)) && !__LIB_8__::func_356(&(uParam0->f_7), 4)) && !__LIB_1__::func_512()) && !__LIB_2__::func_65(1)) && uParam0->f_1.f_3 != 3)
			{
				if (uParam0->f_6 == -1)
				{
					if (uParam0->f_1.f_1 == 1 || uParam0->f_1.f_1 == 0)
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							__LIB_5__::func_569(&(uParam0->f_6), 4, "MPOF_AC_PC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_5__::func_569(&(uParam0->f_6), 4, "MPOF_AC_EXIT" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_5__::func_569(&(uParam0->f_6), 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_5__::func_569(&(uParam0->f_6), 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				if (uParam0->f_13 == 6)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						iVar2 = 225;
					}
					else
					{
						iVar2 = 190;
					}
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
					{
						__LIB_15__::func_208(uParam0);
					}
				}
			}
		}
	}
	__LIB_2__::func_487(&(uParam0->f_7), 9);
}

bool func_5635(var uParam0)//Position - 0x1C0849
{
	return __LIB_8__::func_356(&(uParam0->f_7), 9);
}

bool func_5652(var uParam0)//Position - 0x1C12A5
{
	Stack.Push(!__LIB_8__::func_356(&(uParam0->f_7), 5));
	Stack.Push(&(uParam0->f_16[uParam0->f_9 /*14*/]));
	Stack.Push(uParam0->f_9);
	Call_Loc(*uParam0);
	return (StackVal || StackVal);
}

int func_5664()//Position - 0x1C15AB
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (!__LIB_4__::func_899(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_7__::func_725(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (__LIB_0__::func_509() != 0)
	{
		return 1;
	}
	if (__LIB_0__::func_959())
	{
		return 1;
	}
	if (((((Global_100493.f_374 != joaat("Apart_Lounge_Room") && Global_100493.f_374 != joaat("Apart_Din_Room")) && Global_100493.f_374 != joaat("Apart_Cin_Room")) && Global_100493.f_374 != joaat("Apart_Arcade_Room")) && Global_100493.f_374 != joaat("Apart_Spa_change_rm")) && Global_100493.f_374 != joaat("Apart_Spa_Room"))
	{
		if (!BitTest(Local_131[PLAYER::PLAYER_ID() /*10*/], 2))
		{
			return 1;
		}
	}
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	return 0;
}

void func_5671()//Position - 0x1C17BD
{
	Global_32228 = 0;
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 15);
	func_111(&uLocal_600, 0);
	func_5676(&iLocal_579);
	func_5674(&Local_130, &(Local_131[PLAYER::PLAYER_ID() /*10*/]), &Local_132, &Global_4194304);
	__LIB_10__::func_872(0, 1);
	__LIB_10__::func_871(0);
	Global_2725435 = 0;
	__LIB_16__::func_217(&Local_135);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_577))
	{
		OBJECT::DELETE_OBJECT(&iLocal_577);
	}
	__LIB_0__::func_202();
}

void func_5674(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x1C189B
{
	int iVar0;
	int iVar1;
	if (iParam2->f_2481 && BitTest(*iParam2, 31))
	{
		GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
	}
	Global_32231 = 0;
	iVar0 = __LIB_11__::func_894(iParam2, uParam3);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (BitTest(uParam0->f_3[iVar1 /*2*/], 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_3[iVar1 /*2*/]), 0);
		}
		iVar1++;
	}
	func_5675(iParam1, iParam2, uParam3);
	MISC::CLEAR_BIT(&(Global_2621446.f_1), 2);
	iParam2->f_14 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			uParam0->f_20 = 6;
			uParam0->f_21 = 6;
			*uParam0 = 0;
			__LIB_10__::func_773(uParam0, 0, 1);
			__LIB_10__::func_773(uParam0, 0, 0);
		}
	}
}

void func_5675(int* iParam0, int* iParam1, var uParam2)//Position - 0x1C1948
{
	MISC::CLEAR_BIT(iParam0, 12);
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_5551(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_44212))
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		if (__LIB_13__::func_557())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_2789006))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER(&Global_2789006);
			}
		}
		else if (__LIB_11__::func_814())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_2789022))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER(&Global_2789022);
			}
		}
	}
	else
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		GRAPHICS::SET_TIMECYCLE_MODIFIER(&Global_44212);
	}
	if (BitTest(*iParam0, 0))
	{
		MISC::CLEAR_BIT(iParam0, 0);
	}
	if (BitTest(*iParam0, 2))
	{
		MISC::CLEAR_BIT(iParam0, 2);
	}
	if (BitTest(*iParam0, 1))
	{
		MISC::CLEAR_BIT(iParam0, 1);
	}
	if (BitTest(*iParam0, 10))
	{
		MISC::CLEAR_BIT(iParam0, 10);
	}
	if (BitTest(*iParam1, 2))
	{
		__LIB_3__::func_504();
		MISC::CLEAR_BIT(iParam1, 2);
	}
	if (BitTest(*iParam1, 3))
	{
		__LIB_1__::func_91();
		MISC::CLEAR_BIT(iParam1, 3);
	}
	if (BitTest(*iParam1, 1))
	{
		STREAMING::CLEAR_FOCUS();
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
		MISC::CLEAR_BIT(iParam1, 1);
	}
	if (BitTest(iParam1->f_28, 1))
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_BIT(&(iParam1->f_28), 1);
	}
	if (BitTest(*iParam1, 26))
	{
		__LIB_2__::func_592(1, 0);
		MISC::CLEAR_BIT(iParam1, 26);
	}
	__LIB_10__::func_780(iParam1);
	__LIB_13__::func_564(iParam1, uParam2, iParam0, 1);
	if (iParam1->f_87 == 4 || iParam1->f_87 == 5)
	{
		if (__LIB_0__::func_959())
		{
			STREAMING::CLEAR_FOCUS();
		}
	}
	if (__LIB_11__::func_919(iParam1, uParam2) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_919(iParam1, uParam2));
	}
	MISC::CLEAR_BIT(&Global_2621446, 7);
	MISC::CLEAR_BIT(&Global_2621446, 16);
	MISC::CLEAR_BIT(&Global_2621446, 17);
	MISC::CLEAR_BIT(iParam1, 27);
	iParam1->f_87 = 6;
	__LIB_10__::func_778(iParam1, 13);
	iParam1->f_86 = -1;
	Global_1836103 = -1;
	if (iParam1->f_3 != -1)
	{
		__LIB_3__::func_122(&(iParam1->f_3));
	}
	*iParam1 = 0;
	iParam1->f_28 = 0;
	iParam0->f_7 = 6;
	__LIB_10__::func_777(iParam0, 0);
	*iParam0 = 0;
	iParam0->f_1 = 0;
}

void func_5676(int* iParam0)//Position - 0x1C1B14
{
	if (__LIB_8__::func_356(iParam0, 2))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_3, false);
		__LIB_2__::func_487(iParam0, 2);
	}
	if (__LIB_8__::func_356(iParam0, 3))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_5, true);
		GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_6, true);
		__LIB_2__::func_487(iParam0, 3);
	}
	if (__LIB_8__::func_356(iParam0, 6))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_4, false);
		__LIB_2__::func_487(iParam0, 6);
	}
	STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_apartment_mp");
	if (iParam0->f_10 != -1)
	{
		AUDIO::RELEASE_SOUND_ID(iParam0->f_10);
		iParam0->f_10 = -1;
	}
	if (iParam0->f_11 != -1)
	{
		AUDIO::RELEASE_SOUND_ID(iParam0->f_11);
		iParam0->f_11 = -1;
	}
	__LIB_2__::func_487(iParam0, 0);
}

void func_5677()//Position - 0x1C1BAB
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, __LIB_7__::func_254());
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_130, 25, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_131, 321, 0);
	if (!__LIB_0__::func_934())
	{
		func_5671();
	}
	__LIB_0__::func_467();
	func_5679();
	Global_4194304.f_31 = -1;
	Global_4194304.f_33 = 0;
	Global_4194304.f_34 = -1;
	Global_4194304.f_35 = -1;
	Local_132.f_2481 = 1;
	func_5678(&iLocal_579, Local_578, 2.9f, 1.2f, 1083179008);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_5671();
	}
}

void func_5678(int* iParam0, struct<3> Param1, float fParam2, float fParam3, int iParam4)//Position - 0x1C1C39
{
	iParam0->f_15 = { Param1 };
	iParam0->f_18 = fParam2;
	iParam0->f_19 = (fParam3 + Param1.f_2);
	iParam0->f_20 = iParam4;
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_apartment_mp");
	__LIB_2__::func_486(iParam0, 0);
}

void func_5679()//Position - 0x1C1C70
{
	func_5680(0, &Local_135, 0, 2);
	func_5680(1, &Local_135, 1, 1);
	func_5680(2, &Local_135, 2, 2);
	func_5680(3, &Local_135, 3, 1);
	func_5680(4, &Local_135, 4, 2);
	func_5680(5, &Local_135, 5, 1);
	func_5680(6, &Local_135, 6, 2);
	func_5680(7, &Local_135, 7, 1);
	func_5680(8, &Local_135, 8, 2);
	func_5680(9, &Local_135, 9, 1);
	func_5680(10, &Local_135, 10, 2);
	func_5680(11, &Local_135, 11, 1);
	func_5680(12, &Local_135, 12, 2);
	func_5680(13, &Local_135, 13, 1);
	func_5680(14, &Local_135, 14, 2);
	func_5680(16, &Local_135, 16, 4);
	func_5680(17, &Local_135, 17, 4);
	func_5680(18, &Local_135, 18, 4);
	func_5680(19, &Local_135, 19, 4);
}

void func_5680(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1C1D4C
{
	struct<3> Var0;
	float fVar1;
	func_5684(iParam0, &Var0, &fVar1);
	uParam1->f_16[iParam2 /*14*/].f_13 = iParam3;
	uParam1->f_16[iParam2 /*14*/] = { Var0 };
	uParam1->f_16[iParam2 /*14*/].f_3 = { 0f, 0f, fVar1 };
	uParam1->f_16[iParam2 /*14*/].f_6.f_1 = { __LIB_0__::func_327(__LIB_13__::func_739(), __LIB_14__::func_645(iParam3, fVar1)) + Var0 };
	uParam1->f_16[iParam2 /*14*/].f_6.f_4 = { __LIB_0__::func_327(__LIB_13__::func_738(), __LIB_14__::func_645(iParam3, fVar1)) + Var0 };
	uParam1->f_16[iParam2 /*14*/].f_6 = 1.25f;
}

void func_5684(int iParam0, var uParam1, var uParam2)//Position - 0x1C1E3C
{
	if (__LIB_1__::func_394())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 951.058f, 32.174f, 115.3642f };
				*uParam2 = 65f;
				break;
			case 1:
				*uParam1 = { 951.705f, 33.272f, 115.3642f };
				*uParam2 = 59f;
				break;
			case 2:
				*uParam1 = { 952.608f, 34.649f, 115.3642f };
				*uParam2 = 65f;
				break;
			case 3:
				*uParam1 = { 953.355f, 35.947f, 115.3642f };
				*uParam2 = 59f;
				break;
			case 4:
				*uParam1 = { 954.258f, 37.299f, 115.3642f };
				*uParam2 = 65f;
				break;
			case 5:
				*uParam1 = { 955.029f, 38.609f, 115.3642f };
				*uParam2 = 59f;
				break;
			case 6:
				*uParam1 = { 954.408f, 33.549f, 115.1641f };
				*uParam2 = 65f;
				break;
			case 7:
				*uParam1 = { 955.279f, 35.034f, 115.1641f };
				*uParam2 = 59f;
				break;
			case 8:
				*uParam1 = { 960.07f, 42.724f, 115.1794f };
				*uParam2 = 154f;
				break;
			case 9:
				*uParam1 = { 959.004f, 43.335f, 115.1794f };
				*uParam2 = 148f;
				break;
			case 10:
				*uParam1 = { 958.583f, 45.074f, 115.1794f };
				*uParam2 = 64f;
				break;
			case 11:
				*uParam1 = { 960.84f, 48.834f, 115.1794f };
				*uParam2 = 59f;
				break;
			case 12:
				*uParam1 = { 961.665f, 50.098f, 115.1794f };
				*uParam2 = 64f;
				break;
			case 13:
				*uParam1 = { 962.41f, 51.37f, 115.1794f };
				*uParam2 = 59f;
				break;
			case 14:
				*uParam1 = { 964.371f, 51.587f, 115.1794f };
				*uParam2 = -26f;
				break;
			case 16:
				*uParam1 = { 950.547f, 10.098f, 115.146f };
				*uParam2 = 86f;
				break;
			case 17:
				*uParam1 = { 950.114f, 9.1f, 115.146f };
				*uParam2 = 48f;
				break;
			case 18:
				*uParam1 = { 948.68f, 9.046f, 115.146f };
				*uParam2 = -45f;
				break;
			case 19:
				*uParam1 = { 948.31f, 9.898f, 115.146f };
				*uParam2 = -114f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 951.058f, 32.174f, 115.3642f };
				*uParam2 = 65f;
				break;
			case 1:
				*uParam1 = { 951.667f, 33.272f, 115.3642f };
				*uParam2 = 55f;
				break;
			case 2:
				*uParam1 = { 952.608f, 34.649f, 115.3642f };
				*uParam2 = 65f;
				break;
			case 3:
				*uParam1 = { 953.342f, 35.947f, 115.3642f };
				*uParam2 = 55f;
				break;
			case 4:
				*uParam1 = { 954.258f, 37.299f, 115.3642f };
				*uParam2 = 65f;
				break;
			case 5:
				*uParam1 = { 955.004f, 38.634f, 115.3642f };
				*uParam2 = 55f;
				break;
			case 6:
				*uParam1 = { 954.408f, 33.549f, 115.1641f };
				*uParam2 = 65f;
				break;
			case 7:
				*uParam1 = { 955.254f, 35.034f, 115.1641f };
				*uParam2 = 55f;
				break;
			case 8:
				*uParam1 = { 960.07f, 42.724f, 115.1794f };
				*uParam2 = 147.5f;
				break;
			case 9:
				*uParam1 = { 959.004f, 43.297f, 115.1794f };
				*uParam2 = 145f;
				break;
			case 10:
				*uParam1 = { 958.583f, 45.074f, 115.1794f };
				*uParam2 = 58.5f;
				break;
			case 11:
				*uParam1 = { 960.85f, 48.872f, 115.1794f };
				*uParam2 = 55f;
				break;
			case 12:
				*uParam1 = { 961.646f, 49.987f, 115.1794f };
				*uParam2 = 58.5f;
				break;
			case 13:
				*uParam1 = { 962.41f, 51.36f, 115.1794f };
				*uParam2 = 55f;
				break;
			case 14:
				*uParam1 = { 964.371f, 51.587f, 115.1794f };
				*uParam2 = -31.5f;
				break;
			case 16:
				*uParam1 = { 950.547f, 10.098f, 115.146f };
				*uParam2 = 86f;
				break;
			case 17:
				*uParam1 = { 950.114f, 9.1f, 115.146f };
				*uParam2 = 48f;
				break;
			case 18:
				*uParam1 = { 948.68f, 9.046f, 115.146f };
				*uParam2 = -45f;
				break;
			case 19:
				*uParam1 = { 948.31f, 9.898f, 115.146f };
				*uParam2 = -114f;
				break;
			}
	}
}

