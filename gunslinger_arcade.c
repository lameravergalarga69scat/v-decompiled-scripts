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
	int iLocal_104 = 0;
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
	struct<8> Local_134 = { 0, 3, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<3867> Local_138 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 1140457472, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, 0, 0, 0, -2147483647, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	struct<62> Local_146 = { 0, 0, 0, 0, 0, 2, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 10, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0 } ;
	struct<16> Local_147[2];
	struct<20> Local_148 = { 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494 } ;
	var uLocal_149 = 0;
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
	var uLocal_163 = 0;
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
	var uLocal_177 = 0;
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
	var uLocal_191 = 0;
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
	var uLocal_205 = 0;
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
	var uLocal_219 = 0;
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
	var uLocal_233 = 0;
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
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
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
	var uLocal_275 = 0;
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
	var uLocal_289 = 0;
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
	var uLocal_303 = 0;
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
	var uLocal_317 = 0;
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
	var uLocal_331 = 0;
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
	var uLocal_345 = 0;
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
	var uLocal_359 = 0;
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
	var uLocal_373 = 0;
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
	var uLocal_387 = 0;
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
	var uLocal_401 = 0;
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
	var uLocal_415 = 0;
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
	var uLocal_429 = 0;
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
	var uLocal_443 = 0;
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
	var uLocal_457 = 0;
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
	var uLocal_471 = 0;
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
	var uLocal_485 = 0;
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
	var uLocal_499 = 0;
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
	var uLocal_513 = 0;
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
	var uLocal_527 = 0;
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
	var uLocal_541 = 0;
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
	var uLocal_555 = 0;
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
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	struct<17> Local_643 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_644 = 255;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 255;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 255;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 255;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 255;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 255;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 255;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 255;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 255;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 255;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 255;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 255;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 255;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 255;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 255;
	var uLocal_764 = 0;
	struct<21> Local_765 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	ScriptParam_765.f_0 = 201;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_979(ScriptParam_765);
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		else
		{
			func_977();
		}
		switch (func_976(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_37__::func_132() == 1)
				{
					func_974();
					func_973();
					func_972(6);
					func_971();
					func_970(6);
					Local_138.f_31 = MISC::GET_GAME_TIMER();
					func_969(1);
				}
				else if (__LIB_37__::func_132() == 3)
				{
					func_969(3);
				}
				break;
			case 1:
				if (__LIB_37__::func_132() == 1)
				{
					func_31();
					if (func_21())
					{
						func_969(2);
					}
				}
				else if (__LIB_37__::func_132() == 3)
				{
					func_969(3);
				}
				break;
			case 2:
				func_969(3);
			case 3:
				func_977();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_37__::func_132())
			{
				case 0:
					__LIB_37__::func_108(1);
					Local_146.f_3 = NETWORK::GET_CLOUD_TIME_AS_INT();
					break;
				case 1:
					func_2();
					if (__LIB_0__::func_114())
					{
						__LIB_37__::func_108(3);
					}
					break;
				case 3:
					break;
				}
		}
	}
}

void func_2()//Position - 0x1B9
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bVar5 = -1;
	bVar0 = false;
	while (bVar0 < __LIB_1__::func_32(201))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(bVar0))
		{
			iVar2++;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				iVar3 = func_16(bVar0, iVar1);
				if (Local_146.f_5[bVar0 /*12*/][iVar1] != iVar3)
				{
					Local_146.f_5[bVar0 /*12*/][iVar1] = iVar3;
				}
				iVar4 = func_15(bVar0, iVar1);
				if (Local_146.f_5[bVar0 /*12*/].f_6[iVar1] != iVar4)
				{
					Local_146.f_5[bVar0 /*12*/].f_6[iVar1] = iVar4;
				}
				iVar1++;
			}
			if (!BitTest(Local_146.f_4, bVar0))
			{
				if (BitTest(Local_147[bVar0 /*16*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_146.f_4), bVar0);
					bVar5 = bVar0;
				}
			}
			else if (!BitTest(Local_147[bVar0 /*16*/].f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_146.f_4), bVar0);
			}
		}
		bVar0++;
	}
	if (bVar5 > -1)
	{
		bVar0 = false;
		while (bVar0 <= 9)
		{
			if (Local_146.f_30[bVar0 /*3*/].f_2 == bVar5)
			{
				Local_146.f_30[bVar0 /*3*/].f_2 = -1;
			}
			bVar0++;
		}
		func_3(&Local_147, &(Local_146.f_30), bVar5);
	}
	if (Local_146.f_1 != iVar2)
	{
		Local_146.f_1 = iVar2;
		if (iVar2 == 2)
		{
			if (!BitTest(Local_146.f_2, 0))
			{
				MISC::SET_BIT(&(Local_146.f_2), 0);
			}
		}
	}
}

void func_3(var uParam0, var uParam1, bool bParam2)//Position - 0x30B
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0 = 12;
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
	Var0[0 /*3*/] = (uParam0[bParam2 /*16*/])->f_14;
	Var0[0 /*3*/].f_1 = (uParam0[bParam2 /*16*/])->f_15;
	Var0[0 /*3*/].f_2 = bParam2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Var0[(iVar1 + iVar2) /*3*/] = (*uParam1)[iVar1 /*3*/];
		Var0[(iVar1 + iVar2) /*3*/].f_2 = (uParam1[iVar1 /*3*/])->f_2;
		Var0[(iVar1 + iVar2) /*3*/].f_1 = (uParam1[iVar1 /*3*/])->f_1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar1++;
	}
	func_14(&Var0, 0, 11);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		(*uParam1)[iVar1 /*3*/] = Var0[iVar1 /*3*/];
		(uParam1[iVar1 /*3*/])->f_2 = Var0[iVar1 /*3*/].f_2;
		(uParam1[iVar1 /*3*/])->f_1 = Var0[iVar1 /*3*/].f_1;
		__LIB_16__::func_765(__LIB_1__::func_874(PLAYER::PLAYER_ID()), 6, iVar1, (*uParam1)[iVar1 /*3*/], (uParam1[iVar1 /*3*/])->f_1, 0);
		iVar1++;
	}
}

void func_14(var uParam0, int iParam1, int iParam2)//Position - 0xB89
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
		func_14(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_14(uParam0, iParam1, iVar1);
	}
}

int func_15(int iParam0, int iParam1)//Position - 0xCA4
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return Local_147[iParam0 /*16*/].f_2[iParam1];
	}
	return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0xCCA
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return Local_147[iParam0 /*16*/].f_8[iParam1];
	}
	return 0;
}

int func_21()//Position - 0x1B23
{
	int iVar0;
	if (__LIB_0__::func_833())
	{
		return 1;
	}
	iVar0 = 1000;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_PRESSED(Local_138.f_3521.f_2, Local_138.f_3521.f_3) || PAD::IS_DISABLED_CONTROL_PRESSED(Local_138.f_3521.f_2, Local_138.f_3521.f_3))
		{
			__LIB_7__::func_603(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_138.f_3521)), iVar0, "DEG_GAME_QUIT" /* GXT: Fill bar to quit the game. */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		else
		{
			__LIB_7__::func_603(0, iVar0, "DEG_GAME_QUIT" /* GXT: Fill bar to quit the game. */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(Local_138.f_3517.f_2, Local_138.f_3517.f_3) || PAD::IS_DISABLED_CONTROL_PRESSED(Local_138.f_3517.f_2, Local_138.f_3517.f_3))
	{
		__LIB_7__::func_603(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_138.f_3517)), iVar0, "DEG_GAME_QUIT" /* GXT: Fill bar to quit the game. */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		__LIB_7__::func_603(0, iVar0, "DEG_GAME_QUIT" /* GXT: Fill bar to quit the game. */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_5__::func_120(&(Local_138.f_3521), 1, iVar0))
		{
			return 1;
		}
	}
	else if (__LIB_5__::func_120(&(Local_138.f_3517), 1, iVar0))
	{
		return 1;
	}
	return 0;
}

void func_31()//Position - 0x20DB
{
	func_944();
	func_34();
	func_32();
}

void func_32()//Position - 0x20EF
{
	if (!__LIB_37__::func_109())
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
	if (Local_138.f_106 >= 7)
	{
		if (Local_138.f_87 >= 0)
		{
			if (Local_138.f_224[Local_138.f_87 /*23*/].f_22 > Local_138.f_89)
			{
				Local_138.f_89 = Local_138.f_224[Local_138.f_87 /*23*/].f_22;
			}
			else if (Local_138.f_224[Local_138.f_87 /*23*/].f_22 == 1 && Local_138.f_89 == 4)
			{
				Local_138.f_89 = Local_138.f_224[Local_138.f_87 /*23*/].f_22;
			}
		}
		Local_138.f_34++;
		if (Local_138.f_34 >= Local_138.f_96)
		{
			Local_138.f_34 = 0;
		}
	}
}

void func_34()//Position - 0x2198
{
	switch (Local_138.f_106)
	{
		case 0:
			func_930();
			break;
		case 1:
			func_927();
			break;
		case 2:
			func_926();
			break;
		case 3:
			func_925();
			break;
		case 4:
			func_922();
			break;
		case 5:
			func_919();
			break;
		case 6:
			func_903();
			break;
		case 7:
			func_718();
			break;
		case 8:
			func_683();
			break;
		case 9:
			func_672();
			break;
		case 11:
			func_648();
			break;
		case 10:
			func_535();
			break;
		case 12:
			func_519();
			break;
	}
	func_35();
}

void func_35()//Position - 0x2256
{
	int iVar0;
	switch (Local_138.f_3535)
	{
		case 0:
			if (Local_138.f_106 == 5)
			{
				Local_138.f_3525.f_3 = 1;
				Local_138.f_3525.f_4 = 0;
				Local_138.f_3525.f_6 = 4f;
				Local_138.f_3525.f_7 = -4f;
				__LIB_5__::func_39(&(Local_138.f_3525), 28);
				func_517(1);
			}
			break;
		case 1:
			if (func_516(28))
			{
				if (func_46(28, 0, 0, 0))
				{
					Local_138.f_3525.f_3 = 0;
					Local_138.f_3525.f_4 = 1;
					Local_138.f_3525.f_6 = 4f;
					Local_138.f_3525.f_7 = -4f;
					__LIB_5__::func_39(&(Local_138.f_3525), 29);
					Local_138.f_3537 = -1;
					func_517(2);
				}
			}
			break;
		case 2:
			if (Local_138.f_106 == 7)
			{
				if (func_45() > 0f && func_40() > 0)
				{
					if (func_39())
					{
						Local_138.f_3537++;
						if (Local_138.f_3537 > 3)
						{
							Local_138.f_3537 = 0;
						}
						iVar0 = __LIB_37__::func_111(Local_138.f_3537);
						switch (Local_138.f_3537)
						{
							case 0:
								iVar0 = 3;
								break;
							case 1:
								iVar0 = 4;
								break;
							case 2:
								iVar0 = 5;
								break;
							case 3:
								iVar0 = 6;
								break;
						}
						Local_138.f_3525.f_6 = 2f;
						Local_138.f_3525.f_7 = -2f;
						__LIB_5__::func_39(&(Local_138.f_3525), iVar0);
						Local_138.f_3534 = 0;
					}
				}
			}
			if (!Local_138.f_3534)
			{
				if (func_45() <= 0f)
				{
					Local_138.f_3525.f_6 = 4f;
					Local_138.f_3525.f_7 = -4f;
					Local_138.f_3525.f_4 = 0;
					Local_138.f_3525.f_3 = 1;
					__LIB_5__::func_39(&(Local_138.f_3525), 30);
					func_517(4);
					Local_138.f_3534 = 1;
				}
				else if (Local_138.f_106 == 7 || Local_138.f_106 == 8)
				{
					if (func_45() > 0f && func_40() == 0)
					{
						Local_138.f_3525.f_6 = 4f;
						Local_138.f_3525.f_7 = -4f;
						Local_138.f_3525.f_4 = 0;
						Local_138.f_3525.f_3 = 1;
						if (__LIB_42__::func_419() && !Local_138.f_3538)
						{
							Local_138.f_3538 = 1;
							__LIB_5__::func_39(&(Local_138.f_3525), 9);
							func_517(6);
						}
						else
						{
							__LIB_5__::func_39(&(Local_138.f_3525), 31);
							func_517(5);
						}
						Local_138.f_3534 = 1;
					}
				}
			}
			break;
		case 4:
			if (func_516(30))
			{
				if (func_46(30, 0, 0, 0))
				{
					Local_138.f_3525.f_3 = 0;
					Local_138.f_3525.f_4 = 1;
					Local_138.f_3525.f_6 = 4f;
					Local_138.f_3525.f_7 = -4f;
					__LIB_5__::func_39(&(Local_138.f_3525), 29);
					Local_138.f_3537 = -1;
					func_517(2);
				}
			}
			break;
		case 5:
			if (func_516(31))
			{
				if (func_46(31, 0, 0, 0))
				{
					Local_138.f_3525.f_6 = 4f;
					Local_138.f_3525.f_7 = -4f;
					Local_138.f_3525.f_3 = 0;
					Local_138.f_3525.f_4 = 1;
					__LIB_5__::func_39(&(Local_138.f_3525), 29);
					Local_138.f_3537 = -1;
					func_517(2);
				}
			}
			break;
		case 6:
			if (func_516(9))
			{
				if (func_46(9, 0, 0, 0))
				{
					if (Local_138.f_106 != 7)
					{
						Local_138.f_3525.f_3 = 0;
						Local_138.f_3525.f_4 = 1;
						Local_138.f_3525.f_6 = 2f;
						Local_138.f_3525.f_7 = -2f;
						__LIB_5__::func_39(&(Local_138.f_3525), 1);
						func_517(0);
					}
				}
			}
			break;
	}
}

int func_39()//Position - 0x261A
{
	int iVar0;
	int iVar1;
	if (Local_138.f_3537 == -1)
	{
		return 1;
	}
	iVar0 = (Local_138.f_3537 - 1);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = __LIB_37__::func_111(Local_138.f_3537);
	if (func_516(iVar1))
	{
		if (func_46(iVar1, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_40()//Position - 0x2666
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = func_43();
	if (iVar2 <= 1)
	{
		iVar0 = 0;
		while (iVar0 <= 39)
		{
			if (Local_138.f_1825[iVar0 /*33*/].f_10 != 4)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	else if (func_42() < (iVar2 - 1))
	{
		return 99;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 39)
		{
			if (func_41(iVar0))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_41(int iParam0)//Position - 0x26DC
{
	switch (Local_138.f_1825[iParam0 /*33*/].f_9)
	{
		case 18:
		case 19:
			if (Local_138.f_1825[iParam0 /*33*/].f_10 != 3 && Local_138.f_1825[iParam0 /*33*/].f_10 != 4)
			{
				return 1;
			}
			break;
		default:
			if (Local_138.f_1825[iParam0 /*33*/].f_10 != 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_42()//Position - 0x2740
{
	return Local_138.f_42[Local_138.f_139];
}

int func_43()//Position - 0x2752
{
	return func_44(Local_138.f_139);
}

int func_44(int iParam0)//Position - 0x2762
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		case 1:
			return 4;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 2;
			break;
	}
	return 1;
}

float func_45()//Position - 0x27B3
{
	return Local_138.f_141[0 /*82*/].f_35;
}

int func_46(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x27C4
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	Var1.f_2 = 14;
	if (iVar0 != -1)
	{
		iVar2 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
		func_54(iVar0, iParam0, iVar2, &Var1);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var1.f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1973079.f_47), Var1.f_1, 3))
				{
					fVar3 = __LIB_5__::func_43(iVar0, iParam0);
					iVar4 = __LIB_5__::func_166();
					if (bParam3)
					{
						iVar4 = __LIB_5__::func_399();
					}
					if (bParam2)
					{
						fVar3 = 0.98f;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4) >= fVar3 || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("can_early_out_for_movement")))
						{
							if (bParam1)
							{
								if (bParam3)
								{
									__LIB_15__::func_819();
								}
								else
								{
									__LIB_5__::func_698();
								}
							}
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
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x2A2E
{
	struct<5> Var0;
	func_55(iParam0, &Var0, 4);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(iParam2);
	Stack.Push(uParam3);
	Call_Loc(Var0.f_4);
}

void func_55(int iParam0, var uParam1, int iParam2)//Position - 0x2A4C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 3:
		case 4:
		case 2:
		case 6:
		case 7:
		case 8:
		case 10:
		case 9:
		case 17:
		case 18:
		case 19:
		case 15:
		case 16:
			func_128(uParam1, iParam2);
			break;
		case 12:
			func_113(uParam1, iParam2);
			break;
		case 11:
			func_98(uParam1, iParam2);
			break;
		case 13:
			func_81(uParam1, iParam2);
			break;
		case 14:
			func_56(uParam1, iParam2);
			break;
	}
}

void func_56(var uParam0, int iParam1)//Position - 0x2B0A
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 14301/*func_80*/;
			break;
		case 1:
			*uParam0 = 14272/*func_79*/;
			break;
		case 2:
			uParam0->f_1 = 14250/*func_78*/;
			break;
		case 3:
			uParam0->f_3 = 14198/*func_77*/;
			break;
		case 4:
			uParam0->f_4 = 11573/*func_66*/;
			break;
		case 5:
			uParam0->f_5 = 11564/*func_65*/;
			break;
		case 6:
			uParam0->f_6 = 11555/*func_64*/;
			break;
		case 7:
			uParam0->f_7 = 11546/*func_63*/;
			break;
		case 8:
			uParam0->f_8 = 11538/*func_62*/;
			break;
		case 9:
			uParam0->f_9 = 11501/*func_61*/;
			break;
		case 10:
			uParam0->f_10 = 11297/*func_60*/;
			break;
		case 11:
			uParam0->f_11 = 11286/*func_59*/;
			break;
		case 12:
			uParam0->f_12 = 11278/*func_58*/;
			break;
		case 13:
			uParam0->f_13 = 11270/*func_57*/;
			break;
	}
}

void func_81(var uParam0, int iParam1)//Position - 0x37F7
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 15673/*func_97*/;
			break;
		case 1:
			*uParam0 = 15644/*func_96*/;
			break;
		case 2:
			uParam0->f_1 = 15600/*func_95*/;
			break;
		case 3:
			uParam0->f_3 = 15548/*func_94*/;
			break;
		case 4:
			uParam0->f_4 = 14724/*func_91*/;
			break;
		case 5:
			uParam0->f_5 = 14715/*func_90*/;
			break;
		case 6:
			uParam0->f_6 = 14706/*func_89*/;
			break;
		case 7:
			uParam0->f_7 = 14697/*func_88*/;
			break;
		case 8:
			uParam0->f_8 = 14689/*func_87*/;
			break;
		case 9:
			uParam0->f_9 = 14649/*func_86*/;
			break;
		case 10:
			uParam0->f_10 = 14637/*func_85*/;
			break;
		case 11:
			uParam0->f_11 = 14595/*func_84*/;
			break;
		case 12:
			uParam0->f_12 = 14587/*func_83*/;
			break;
		case 13:
			uParam0->f_13 = 14579/*func_82*/;
			break;
	}
}

void func_98(var uParam0, int iParam1)//Position - 0x3D53
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 16352/*func_112*/;
			break;
		case 1:
			*uParam0 = 16323/*func_111*/;
			break;
		case 2:
			uParam0->f_1 = 16301/*func_110*/;
			break;
		case 3:
			uParam0->f_3 = 16249/*func_109*/;
			break;
		case 4:
			uParam0->f_4 = 16033/*func_108*/;
			break;
		case 5:
			uParam0->f_5 = 16024/*func_107*/;
			break;
		case 6:
			uParam0->f_6 = 16015/*func_106*/;
			break;
		case 7:
			uParam0->f_7 = 16006/*func_105*/;
			break;
		case 8:
			uParam0->f_8 = 15998/*func_104*/;
			break;
		case 9:
			uParam0->f_9 = 15990/*func_103*/;
			break;
		case 10:
			uParam0->f_10 = 15978/*func_102*/;
			break;
		case 11:
			uParam0->f_11 = 15967/*func_101*/;
			break;
		case 12:
			uParam0->f_12 = 15959/*func_100*/;
			break;
		case 13:
			uParam0->f_13 = 15951/*func_99*/;
			break;
	}
}

void func_113(var uParam0, int iParam1)//Position - 0x3FFA
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 17639/*func_127*/;
			break;
		case 1:
			*uParam0 = 17610/*func_126*/;
			break;
		case 2:
			uParam0->f_1 = 17588/*func_125*/;
			break;
		case 3:
			uParam0->f_3 = 17536/*func_124*/;
			break;
		case 4:
			uParam0->f_4 = 17262/*func_123*/;
			break;
		case 5:
			uParam0->f_5 = 17253/*func_122*/;
			break;
		case 6:
			uParam0->f_6 = 17244/*func_121*/;
			break;
		case 7:
			uParam0->f_7 = 17235/*func_120*/;
			break;
		case 8:
			uParam0->f_8 = 17227/*func_119*/;
			break;
		case 9:
			uParam0->f_9 = 17187/*func_118*/;
			break;
		case 10:
			uParam0->f_10 = 16658/*func_117*/;
			break;
		case 11:
			uParam0->f_11 = 16647/*func_116*/;
			break;
		case 12:
			uParam0->f_12 = 16639/*func_115*/;
			break;
		case 13:
			uParam0->f_13 = 16631/*func_114*/;
			break;
	}
}

void func_128(var uParam0, int iParam1)//Position - 0x4501
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 397107/*func_513*/;
			break;
		case 1:
			*uParam0 = 396558/*func_512*/;
			break;
		case 2:
			uParam0->f_1 = 396317/*func_511*/;
			break;
		case 3:
			uParam0->f_3 = 395764/*func_510*/;
			break;
		case 4:
			uParam0->f_4 = 392128/*func_508*/;
			break;
		case 5:
			uParam0->f_5 = 392119/*func_507*/;
			break;
		case 6:
			uParam0->f_6 = 392005/*func_506*/;
			break;
		case 7:
			uParam0->f_7 = 383563/*func_473*/;
			break;
		case 8:
			uParam0->f_8 = 20367/*func_139*/;
			break;
		case 9:
			uParam0->f_9 = 19824/*func_138*/;
			break;
		case 10:
			uParam0->f_10 = 18999/*func_137*/;
			break;
		case 11:
			uParam0->f_11 = 18796/*func_136*/;
			break;
		case 12:
			uParam0->f_12 = 18315/*func_130*/;
			break;
		case 13:
			uParam0->f_13 = 17917/*func_129*/;
			break;
	}
}

void func_139(int iParam0, var uParam1)//Position - 0x4F8F
{
	switch (iParam0)
	{
		case 9:
			__LIB_16__::func_776(iParam0, uParam1);
			break;
		case 10:
			__LIB_16__::func_775(iParam0, uParam1);
			break;
		case 18:
			func_143(uParam1);
			break;
		case 3:
		case 4:
		case 5:
			__LIB_16__::func_779(uParam1, iParam0);
			break;
	}
}

void func_143(var uParam0)//Position - 0x5191
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	int iVar4;
	iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	iVar1 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2;
	bVar2 = false;
	if (__LIB_5__::func_111(&sVar3))
	{
		bVar2 = true;
	}
	__LIB_5__::func_96(&(uParam0->f_583), bVar2, 4, 1056964608, 0);
	iVar4 = uParam0->f_746[iVar0];
	if (iVar0 > -1)
	{
		switch (uParam0->f_583.f_8)
		{
			case 0:
				__LIB_5__::func_151(&(uParam0->f_583), joaat("hei_p_m_bag_var22_arm_s"));
				__LIB_5__::func_95(&(uParam0->f_583));
				if (bVar2)
				{
					__LIB_5__::func_127(1);
				}
				else
				{
					__LIB_5__::func_127(0);
				}
				uParam0->f_583.f_8 = 1;
				break;
			case 1:
				if (__LIB_5__::func_150(&(uParam0->f_583), joaat("hei_p_m_bag_var22_arm_s")))
				{
					uParam0->f_583.f_8 = 2;
				}
				break;
			case 2:
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.54f);
				}
				if (iVar1 == 1)
				{
					iVar4 = uParam0->f_912[iVar0 /*15*/][0];
				}
				func_144(&(uParam0->f_583), &(uParam0->f_1528), &(uParam0->f_583.f_9), iVar4, NETWORK::PARTICIPANT_ID_TO_INT(), -1, iVar0, 0, joaat("hei_p_m_bag_var22_arm_s"), 2);
				break;
		}
		if (BitTest(uParam0->f_583, 1) || BitTest(uParam0->f_583, 15))
		{
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			uParam0->f_583.f_8 = 3;
			__LIB_5__::func_39(&(uParam0->f_523), 11);
		}
	}
	else
	{
		__LIB_5__::func_39(&(uParam0->f_523), 11);
	}
}

void func_144(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x52EA
{
	int iVar0;
	bool bVar1;
	float fVar2;
	char* sVar3;
	char* sVar4;
	struct<2> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<12> Var8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	iVar0 = PLAYER::PLAYER_PED_ID();
	bVar1 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	sVar3 = __LIB_5__::func_94();
	sVar4 = __LIB_5__::func_93();
	if (BitTest(*iParam0, 8))
	{
		Var6 = { __LIB_5__::func_92() };
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, Var6) };
	}
	else
	{
		Var6 = { __LIB_5__::func_91() };
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, Var6) };
	}
	switch (iParam0->f_2)
	{
		case 0:
			__LIB_5__::func_95(iParam0);
			if (bParam7)
			{
				if (!BitTest(*iParam0, 19))
				{
					iParam0->f_7 = 0;
					Var5 = { __LIB_5__::func_165(iParam0, -1) };
					iParam0->f_14 = Var5.f_0;
				}
			}
			else if (!BitTest(*iParam0, 5))
			{
				Var5 = { __LIB_5__::func_165(iParam0, -1) };
				iParam0->f_14 = Var5.f_0;
			}
			MISC::CLEAR_BIT(iParam0, 5);
			MISC::CLEAR_BIT(iParam0, 19);
			__LIB_5__::func_89(iParam0, iParam4);
			iParam0->f_2 = 1;
			break;
		case 1:
			if ((__LIB_15__::func_822(iParam0, uParam1, iVar0, bVar1, 1) && __LIB_5__::func_116(iParam0, uParam1, iVar0, bVar1, 1, bParam7, iParam8)) && __LIB_5__::func_115(iParam0, uParam1, iParam3, iVar0, bVar1, ENTITY::GET_ENTITY_COORDS(iParam3, true), ENTITY::GET_ENTITY_ROTATION(iParam3, 2) + Vector(0f, 0f, 0f)))
			{
				iParam0->f_2 = 2;
			}
			break;
		case 2:
			fVar2 = ENTITY::GET_ENTITY_HEADING(iParam3);
			Var8.f_6 = -1082130432;
			Var8.f_9 = -1082130432;
			if (!bParam7)
			{
				Var8.f_10 = "No_Bag";
				Var8.f_11 = 1;
			}
			if (BitTest(*iParam0, 8))
			{
				Var8.f_0 = 1328920460;
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iVar0, "Heist3_minigame_drill_vault", &Var8, Var7, 0f, 0f, fVar2, 2, 0.5f, false, sVar4, 4);
			}
			else
			{
				Var8.f_0 = -1853844820;
				TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iVar0, "Heist3_minigame_drill_vault", &Var8, Var7, 0f, 0f, fVar2, 2, 0.5f, false, sVar3, 4);
			}
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
			PHYSICS::SET_USE_KINEMATIC_PHYSICS(iVar0, true);
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0))
			{
				TASK::SET_TASK_MOVE_NETWORK_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(iVar0, true);
				__LIB_5__::func_87(&(iParam0->f_5));
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, true);
				iParam0->f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var7, 0f, 0f, fVar2, 2, true, false, 1f, 0f, 1f);
				if (bParam7)
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ((*uParam1)[1]), true);
					if (BitTest(*iParam0, 8))
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ((*uParam1)[1]), iParam0->f_5, sVar4, "bag_intro", 1000f, -1.5f, 265);
						NETWORK::NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(iParam0->f_5, sVar4, "intro_cam");
					}
					else
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ((*uParam1)[1]), iParam0->f_5, sVar3, "bag_intro", 1000f, -1.5f, 265);
						NETWORK::NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(iParam0->f_5, sVar3, "intro_cam");
					}
				}
				else if (BitTest(*iParam0, 8))
				{
					NETWORK::NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(iParam0->f_5, sVar4, "intro_nobag_cam");
				}
				else
				{
					NETWORK::NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(iParam0->f_5, sVar3, "intro_nobag_cam");
				}
				NETWORK::NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(iParam0->f_5);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_5);
				if (bParam7)
				{
					if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(NETWORK::NET_TO_OBJ((*uParam1)[1])))
					{
						__LIB_5__::func_86();
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[1]), true, false);
					}
				}
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[0]), false, false);
				iParam0->f_2 = 3;
			}
			break;
		case 3:
			if (!((AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()) && HUD::IS_MESSAGE_BEING_DISPLAYED()))
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iVar0, true), 3f, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), true);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iVar0, false, false, true, false);
			if (bParam7)
			{
				__LIB_5__::func_86();
			}
			iParam0->f_2 = 4;
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (bParam7)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(NETWORK::NET_TO_OBJ((*uParam1)[1])) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar0))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[1]), true, false);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) >= 0.36f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[0]), true, false);
					}
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) >= 0.16f)
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[0]), true, false);
				}
			}
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0) && TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "IntroFinished"))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar0))
				{
					if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar0, "Cutting"))
					{
						if (bParam7)
						{
							if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(NETWORK::NET_TO_OBJ((*uParam1)[1])))
							{
								__LIB_5__::func_86();
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[1]), true, false);
							}
						}
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[0]), true, false);
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_5);
						iParam0->f_5 = -1;
						if (bParam7)
						{
							__LIB_5__::func_162(iParam0, uParam1, iVar0);
						}
						__LIB_5__::func_85(iParam0, iVar0);
						if (BitTest(*iParam0, 8))
						{
							HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MC_LASER_3", true);
						}
						else
						{
							HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MC_DRILL_3", true);
						}
						iParam0->f_3 = AUDIO::GET_SOUND_ID();
						if (BitTest(*iParam0, 8))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "laser_power_up", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", true, 20);
							if (iParam0->f_3 == -1)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iParam0->f_3, "laser_drill", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", true, 0);
								AUDIO::SET_VARIABLE_ON_SOUND(iParam0->f_3, "DrillState", 0f);
								AUDIO::SET_VARIABLE_ON_SOUND(iParam0->f_3, "DrillHeat", 0f);
							}
						}
						iParam0->f_2 = 5;
					}
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
			break;
		case 5:
			__LIB_5__::func_149(iParam0);
			MISC::CLEAR_BIT(iParam0, 0);
			Var5 = { __LIB_5__::func_165(iParam0, -1) };
			iParam0->f_33 = iParam0->f_12;
			iParam0->f_13 = (iParam0->f_13 - ((0.4f + (0.2f * (1f - iParam0->f_12))) * SYSTEM::TIMESTEP()));
			iParam0->f_12 = (iParam0->f_12 * (1f + (iParam0->f_13 * 0.5f)));
			iParam0->f_25 = (iParam0->f_25 + ((iParam0->f_10 - iParam0->f_25) * 0.5f));
			__LIB_5__::func_84(iParam0, Var5);
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0))
			{
				fVar9 = (iParam0->f_22 + iParam0->f_23);
				if (fVar9 > 0.9999f)
				{
					fVar9 = 0.9999f;
				}
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "z_axis", fVar9);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "drill_force", (1f - iParam0->f_24));
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[3]))
			{
				iVar10 = NETWORK::NET_TO_OBJ((*uParam1)[3]);
				if (iParam0->f_14 > 0.08f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar10, true, false);
				}
			}
			__LIB_16__::func_780(iParam0, uParam1, iParam6, iParam4);
			if (BitTest(*iParam0, 8))
			{
				if (iParam0->f_17 > 1f)
				{
					iParam0->f_17 = 1f;
				}
			}
			else if (iParam0->f_17 > 0.98f)
			{
				iParam0->f_17 = 0.98f;
			}
			if (BitTest(*iParam0, 8))
			{
				__LIB_5__::func_83(iParam0, Var5);
			}
			else
			{
				__LIB_5__::func_82(iParam0, Var5);
			}
			__LIB_5__::func_161(iParam0);
			__LIB_5__::func_114(iParam0);
			__LIB_5__::func_125(iParam0);
			__LIB_5__::func_697(iParam0, Var5);
			__LIB_5__::func_696(iParam0, uParam1);
			if (iParam0->f_14 >= Var5.f_1 && iParam0->f_7 == iParam0->f_37)
			{
				if (!BitTest(*iParam0, 13))
				{
					iParam0->f_14 = 0.99f;
					if ((MISC::GET_GAME_TIMER() - iParam0->f_6) > 500)
					{
						MISC::SET_BIT(iParam0, 13);
					}
				}
			}
			else
			{
				iParam0->f_6 = MISC::GET_GAME_TIMER();
			}
			if (iParam0->f_13 > 1f)
			{
				iParam0->f_13 = 1f;
			}
			if (iParam0->f_13 < 0f)
			{
				iParam0->f_13 = 0f;
			}
			if (iParam0->f_12 > 1f)
			{
				iParam0->f_12 = 1f;
			}
			if (iParam0->f_25 > iParam0->f_14)
			{
				iParam0->f_25 = iParam0->f_14;
			}
			if (iParam0->f_25 > 1f)
			{
				iParam0->f_25 = 1f;
			}
			if (iParam0->f_14 > 1f)
			{
				iParam0->f_14 = 1f;
			}
			if (iParam0->f_16 < 0f)
			{
				iParam0->f_16 = 0f;
			}
			if (iParam0->f_19 > 1f)
			{
				iParam0->f_19 = 1f;
			}
			__LIB_5__::func_79(iParam0);
			if (!BitTest(*iParam0, 8))
			{
				__LIB_5__::func_78(uParam1, iParam0->f_33);
			}
			__LIB_5__::func_77(iParam0, iVar0);
			if (BitTest(*iParam0, 8))
			{
				HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MC_LASER_3", true);
			}
			else
			{
				HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MC_DRILL_3", true);
			}
			if (BitTest(*iParam0, 8))
			{
				__LIB_5__::func_148(iParam0);
			}
			else
			{
				__LIB_5__::func_160(iParam0);
			}
			if (__LIB_5__::func_75(iParam0, iVar0))
			{
				iVar11 = __LIB_5__::func_172(iParam4);
				if (!BitTest(Global_1966339[iVar11], 2))
				{
					if (BitTest(*iParam0, 8))
					{
						__LIB_5__::func_113(iVar11, iParam6, (*uParam1)[0], 0, 1);
					}
					else
					{
						__LIB_5__::func_113(iVar11, iParam6, (*uParam1)[0], 0, 0);
					}
				}
				__LIB_5__::func_695(iParam0, uParam1, uParam2, iParam3, iVar0, Var7, bParam7);
				if (BitTest(*iParam0, 8))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "laser_power_down", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", true, 20);
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_3))
				{
					AUDIO::STOP_SOUND(iParam0->f_3);
				}
				if (bParam7)
				{
					__LIB_5__::func_176(iVar0, iParam9);
					MISC::SET_BIT(iParam0, 14);
				}
				else
				{
					MISC::SET_BIT(iParam0, 14);
				}
				iParam0->f_2 = 7;
				return;
			}
			if (__LIB_2__::func_213(iParam0))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar0))
				{
					if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar0, "LeftFailure"))
					{
						if (iParam0->f_3 != -1)
						{
							AUDIO::SET_VARIABLE_ON_SOUND(iParam0->f_3, "DrillState", 0f);
						}
						TASK::SET_EXPECTED_CLONE_NEXT_TASK_MOVE_NETWORK_STATE(iVar0, "Cutting");
						if (BitTest(*iParam0, 8))
						{
							iParam0->f_4 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(iParam0->f_4, "laser_overheat", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", true, 20);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Drill_Jam", iVar0, "DLC_HEIST_FLEECA_SOUNDSET", true, 20);
							if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_3))
							{
								AUDIO::STOP_SOUND(iParam0->f_3);
							}
						}
						MISC::SET_BIT(iParam0, 12);
						iParam0->f_33 = 1f;
						if (bParam7)
						{
							__LIB_5__::func_158(iParam0, uParam1);
						}
						iParam0->f_2 = 99;
						return;
					}
				}
			}
			if (__LIB_15__::func_825(iParam0, iVar0, iParam4))
			{
				iVar12 = __LIB_5__::func_172(iParam4);
				if (!BitTest(Global_1966339[iVar12], 2))
				{
					if (BitTest(*iParam0, 8))
					{
						__LIB_5__::func_113(iVar12, iParam6, (*uParam1)[0], 0, 1);
					}
					else
					{
						__LIB_5__::func_113(iVar12, iParam6, (*uParam1)[0], 0, 0);
					}
				}
				if (BitTest(*iParam0, 16) && iParam5 <= 1)
				{
					func_382(iParam0, uParam1, uParam2, iVar0, iParam4, iParam9, bParam7);
					iParam0->f_2 = 8;
					return;
				}
				else
				{
					__LIB_5__::func_695(iParam0, uParam1, uParam2, iParam3, iVar0, Var7, bParam7);
					if (BitTest(*iParam0, 8))
					{
						if (iParam0->f_3 != -1)
						{
							AUDIO::STOP_SOUND(iParam0->f_3);
							AUDIO::RELEASE_SOUND_ID(iParam0->f_3);
							iParam0->f_3 = -1;
						}
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "laser_power_down", iVar0, "dlc_ch_heist_finale_laser_drill_sounds", true, 20);
					}
					iParam0->f_2 = 7;
					return;
				}
			}
			if (iParam0->f_19 >= 0.99f)
			{
				__LIB_5__::func_73(iParam0);
				return;
			}
			if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0))
			{
				__LIB_5__::func_112(uParam1);
				*uParam2 = MISC::GET_GAME_TIMER();
				iParam0->f_2 = 100;
				return;
			}
			break;
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (!((AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()) && HUD::IS_MESSAGE_BEING_DISPLAYED()))
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
			}
			if (CAM::DOES_CAM_EXIST(iParam0->f_39))
			{
				CAM::DESTROY_CAM(iParam0->f_39, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			__LIB_5__::func_72(iParam0, iParam4);
			iParam0->f_33 = (iParam0->f_33 * 0.75f);
			if (iParam0->f_33 > 1f)
			{
				iParam0->f_33 = 1f;
			}
			else if (iParam0->f_33 < 0f)
			{
				iParam0->f_33 = 0f;
			}
			if (!BitTest(*iParam0, 8))
			{
				__LIB_5__::func_78(uParam1, iParam0->f_33);
				if (iParam0->f_3 != -1)
				{
					AUDIO::STOP_SOUND(iParam0->f_3);
					AUDIO::RELEASE_SOUND_ID(iParam0->f_3);
					iParam0->f_3 = -1;
				}
			}
			else
			{
				__LIB_5__::func_77(iParam0, iVar0);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) >= 0.38f)
				{
					__LIB_5__::func_112(uParam1);
				}
			}
			if (bParam7)
			{
				__LIB_5__::func_176(iVar0, iParam9);
			}
			if (bParam7)
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) >= 0.8f) || __LIB_5__::func_71(*uParam2, 11000))
				{
					func_150(iVar0, iParam9);
				}
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) >= 0.9f) || __LIB_5__::func_71(*uParam2, 12000))
			{
				if (bParam7)
				{
					func_150(iVar0, iParam9);
				}
				HUD::UNLOCK_MINIMAP_ANGLE();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				*uParam2 = MISC::GET_GAME_TIMER();
				iParam0->f_2 = 8;
			}
			break;
		case 8:
			if (BitTest(*iParam0, 14))
			{
				MISC::SET_BIT(iParam0, 15);
				__LIB_5__::func_70(iParam0);
			}
			else
			{
				MISC::SET_BIT(iParam0, 1);
			}
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0))
			{
				TASK::SET_TASK_MOVE_NETWORK_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(iVar0, false);
			}
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iParam0->f_40, "RESET");
			__LIB_5__::func_72(iParam0, iParam4);
			__LIB_5__::func_112(uParam1);
			__LIB_5__::func_122(uParam1);
			if (CAM::DOES_CAM_EXIST(iParam0->f_39))
			{
				CAM::DESTROY_CAM(iParam0->f_39, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			HUD::UNLOCK_MINIMAP_ANGLE();
			__LIB_5__::func_127(2);
			if (iParam0->f_3 != -1)
			{
				AUDIO::STOP_SOUND(iParam0->f_3);
				AUDIO::RELEASE_SOUND_ID(iParam0->f_3);
				iParam0->f_3 = -1;
			}
			if (iParam0->f_4 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_4))
				{
					AUDIO::STOP_SOUND(iParam0->f_4);
				}
				AUDIO::RELEASE_SOUND_ID(iParam0->f_4);
				iParam0->f_4 = -1;
			}
			if (BitTest(*iParam0, 8))
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL");
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2");
			}
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_40));
			__LIB_5__::func_69(iParam0, iParam4);
			__LIB_5__::func_87(&(iParam0->f_5));
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
			if (BitTest(*iParam0, 1))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 4f, 0f, 0f), 0);
			}
			if (iParam0->f_5 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_5);
				}
				iParam0->f_5 = -1;
			}
			iParam0->f_2 = 0;
			break;
		case 99:
			__LIB_5__::func_79(iParam0);
			iParam0->f_22 = 0f;
			__LIB_5__::func_149(iParam0);
			iParam0->f_25 = (iParam0->f_25 + ((iParam0->f_10 - iParam0->f_25) * 0.5f));
			if (iParam0->f_25 > iParam0->f_14)
			{
				iParam0->f_25 = iParam0->f_14;
			}
			if (iParam0->f_4 != -1)
			{
				if (BitTest(*iParam0, 8))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam0->f_4, "DrillHeat", iParam0->f_19);
				}
			}
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "z_axis", (iParam0->f_22 + iParam0->f_23));
			}
			if (BitTest(*iParam0, 8))
			{
				__LIB_5__::func_148(iParam0);
				HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MC_LASER_4", true);
			}
			else
			{
				__LIB_5__::func_160(iParam0);
				HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MC_DRILL_4", true);
			}
			__LIB_5__::func_161(iParam0);
			__LIB_5__::func_72(iParam0, iParam4);
			iParam0->f_33 = (iParam0->f_33 * 0.85f);
			if (!BitTest(*iParam0, 8))
			{
				__LIB_5__::func_78(uParam1, iParam0->f_33);
			}
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0) || __LIB_5__::func_71(*uParam2, 6000))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "LeftFailFinish"))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar0))
					{
						if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar0, "Cutting"))
						{
							MISC::CLEAR_BIT(iParam0, 2);
							if (bParam7)
							{
								__LIB_5__::func_162(iParam0, uParam1, iVar0);
							}
							iParam0->f_2 = 5;
						}
					}
				}
			}
			break;
		case 100:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			if (bParam7)
			{
				func_150(iVar0, iParam9);
			}
			*uParam2 = MISC::GET_GAME_TIMER();
			iParam0->f_2 = 8;
			break;
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x62AA
{
	int iVar0;
	iVar0 = 2;
	if (__LIB_0__::func_995(1))
	{
		iVar0 = iParam1;
	}
	func_151(iParam0, iVar0, -1);
}

void func_151(int iParam0, int iParam1, int iParam2)//Position - 0x62CA
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
			func_249(iParam0);
			__LIB_3__::func_522(iParam0, &Var0, iParam2);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_153(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_3__::func_522(iParam0, &Var0, iParam2);
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

int func_153(int iParam0, int iParam1, int iParam2)//Position - 0x6617
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
				if (func_160(iParam0, iParam1, iVar0))
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
				if (func_160(iParam0, iParam1, iVar1))
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

int func_160(int iParam0, int iParam1, int iParam2)//Position - 0x6AD8
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
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
				if (!func_160(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_160(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_160(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_160(iParam0, 14, uVar11[iVar10]))
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
						return func_160(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_160(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_249(int iParam0)//Position - 0x2788A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_250(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_250(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2791F
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
				if (__LIB_0__::func_351(161, -1))
				{
					func_256(iParam0, 2, __LIB_0__::func_369(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_256(iParam0, 2, __LIB_0__::func_369(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_3__::func_345(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_11__::func_578(1, 2);
		}
	}
}

int func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x27DBB
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
			func_364(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 10, 0, -1) };
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
						func_364(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_364(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_256(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_364(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_153(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_256(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_355(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_364(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_12__::func_901(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_364(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_256(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_346(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_256(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_345(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_256(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_523(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_256(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_256(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar32, -1) };
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
								func_256(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_523(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
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
								func_256(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_256(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_256(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_520(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_355(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_345(iVar5, func_153(iParam0, 8, -1), iParam2, func_153(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_369(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_369(2160, iParam10, 0);
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
				func_283(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_345(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_355(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_345(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_0__::func_369(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_369(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_369(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_412(135, iParam10);
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
				__LIB_3__::func_345(iParam0, iParam10);
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
						func_256(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_256(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_345(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_345(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_256(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_345(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_256(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_160(iParam0, 9, iVar63))
						{
							func_256(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_256(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_256(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_369(2042, -1, 0);
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
						func_256(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_153(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_153(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_256(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_256(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_256(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_256(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_256(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_256(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_256(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_256(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_256(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_256(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_346(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_256(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_256(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_257(iParam0, &uVar4))
		{
			func_256(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_256(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_256(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_256(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_153(iParam0, 3, -1), iVar10);
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
				func_256(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_257(int iParam0, var uParam1)//Position - 0x29C66
{
	int iVar0;
	int iVar1;
	*uParam1 = func_153(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_369(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_369(754, Global_78127, 0) == 0 && __LIB_0__::func_369(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				if (__LIB_0__::func_369(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_369(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_369(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_369(755, Global_78127, 0);
		if (!func_160(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_369(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_369(753, Global_78127, 0);
			}
			__LIB_0__::func_413(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_413(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_283(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x338D5
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_346(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_0__::func_661(iVar1, 1, iParam2);
	}
	func_284(iParam0, bParam3, 0, -1);
}

void func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x33922
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
		bVar3 = func_322(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_313(iParam0, iParam3);
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
			if (__LIB_0__::func_549(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_0__::func_674(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__::func_549(123, iVar0))
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
					if (__LIB_0__::func_549(iVar10, iVar0))
					{
						if (__LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_348(Var9.f_2, Var9.f_3, iVar10))
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

int func_313(int iParam0, int iParam1)//Position - 0x427F9
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_153(iParam0, 11, -1);
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
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
				iVar5 = func_153(iParam0, 11, -1);
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

int func_322(int iParam0, bool bParam1)//Position - 0x42C57
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_153(iParam0, 11, -1), 0);
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
						if (__LIB_0__::func_549(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(72, -1))
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
						iVar3 = func_153(iParam0, 11, -1);
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
						iVar5 = func_153(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_153(iParam0, 11, -1), 0);
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
						iVar8 = func_153(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_153(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_153(iParam0, 11, -1), 0);
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
						iVar12 = func_153(iParam0, 8, -1);
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

int func_345(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C893
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
					iVar0 = func_345(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_345(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_346(int iParam0)//Position - 0x4DBCE
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
		if (!func_351(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_351(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4E598
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_153(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x50F82
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_357(iParam0))
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
			__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_347(iVar0, iParam2, 13) && !__LIB_3__::func_347(iVar0, iParam2, 14)) && !__LIB_3__::func_347(iVar0, iParam2, 15)) && !__LIB_3__::func_347(iVar0, iParam2, 16)) && !__LIB_3__::func_347(iVar0, iParam2, 71)) && !__LIB_3__::func_347(iVar0, iParam2, 72))
				{
					__LIB_3__::func_346(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_0__::func_676(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_0__::func_660(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_0__::func_661(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_357(int iParam0)//Position - 0x51111
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_153(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_153(iParam0, 11, -1);
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

void func_364(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5162A
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
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
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
							__LIB_0__::func_538(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_364(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_364(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_364(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_369(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_413(iVar6, iVar7, Global_78127, 1, 0);
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
							func_364(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_364(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_364(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_364(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_364(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_364(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_364(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_382(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x5A8FD
{
	HUD::UNLOCK_MINIMAP_ANGLE();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	*uParam2 = MISC::GET_GAME_TIMER();
	if (CAM::DOES_CAM_EXIST(iParam0->f_39))
	{
		CAM::DESTROY_CAM(iParam0->f_39, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	__LIB_5__::func_72(iParam0, iParam4);
	__LIB_5__::func_112(uParam1);
	if (bParam6)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[1]))
		{
			ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ((*uParam1)[1]), true, true);
		}
		__LIB_5__::func_122(uParam1);
	}
	if (iParam0->f_3 != -1)
	{
		AUDIO::STOP_SOUND(iParam0->f_3);
		AUDIO::RELEASE_SOUND_ID(iParam0->f_3);
		iParam0->f_3 = -1;
	}
	if (iParam0->f_4 != -1)
	{
		AUDIO::STOP_SOUND(iParam0->f_4);
	}
	if (bParam6)
	{
		__LIB_5__::func_176(iParam3, iParam5);
		func_150(iParam3, iParam5);
	}
}

int func_516(int iParam0)//Position - 0x6105D
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
		if (iVar0 > -1)
		{
			Var1.f_2 = 14;
			iVar2 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
			if (iVar2 != -1)
			{
				func_54(iVar2, iParam0, __LIB_5__::func_106(PLAYER::PLAYER_ID()), &Var1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var1.f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
				{
					return ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1973079.f_47), Var1.f_1, 3);
				}
			}
		}
	}
	return 0;
}

void func_517(int iParam0)//Position - 0x610E1
{
	Local_138.f_3535 = iParam0;
}

void func_519()//Position - 0x61214
{
	func_534(7);
	func_532(8);
	Local_138.f_3525.f_3 = 0;
	Local_138.f_3525.f_4 = 0;
	if (Local_138.f_3535 == 0)
	{
		__LIB_5__::func_39(&(Local_138.f_3525), 11);
	}
	else
	{
		__LIB_5__::func_39(&(Local_138.f_3525), 32);
	}
	__LIB_16__::func_782();
	__LIB_37__::func_133();
	func_522(0);
	func_522(1);
	__LIB_16__::func_757(Local_138.f_3542);
	__LIB_16__::func_757(Local_138.f_3543);
	__LIB_0__::func_202();
}

void func_522(int iParam0)//Position - 0x612A7
{
	switch (iParam0)
	{
		case 0:
			AUDIO::STOP_AUDIO_SCENE("dlc_ch_am_br_in_menus_scene");
			break;
		case 1:
			AUDIO::STOP_AUDIO_SCENE("dlc_ch_am_br_in_gameplay_scene");
			break;
		case 2:
			AUDIO::STOP_AUDIO_SCENE("dlc_ch_badlands_revenge_powerup_active_scene");
			break;
	}
}

void func_532(int iParam0)//Position - 0x61509
{
	char cVar0[32];
	StringCopy(&cVar0, func_533(iParam0), 32);
	AUDIO::TRIGGER_MUSIC_EVENT(&cVar0);
}

char* func_533(int iParam0)//Position - 0x61522
{
	switch (iParam0)
	{
		case 0:
			return "ARCADE_BR_INTRO_OS";
		case 1:
			return "ARCADE_BR_TITLE_CARD";
		case 2:
			return "ARCADE_BR_TRACK_1";
		case 3:
			return "ARCADE_BR_TRACK_2";
		case 4:
			return "ARCADE_BR_TRACK_4";
		case 5:
			return "ARCADE_BR_TRACK_6";
		case 6:
			return "ARCADE_BR_TRACK_9";
		case 8:
			return "ARCADE_BADLANDS_REVENGE_STOP";
		case 7:
			return "ARCADE_BR_DEATH";
		default:
	}
	return "UNKNOWN";
}

void func_534(int iParam0)//Position - 0x615AA
{
	char cVar0[32];
	StringCopy(&cVar0, func_533(iParam0), 32);
	AUDIO::CANCEL_MUSIC_EVENT(&cVar0);
}

void func_535()//Position - 0x615C3
{
	func_566();
	func_536(1, 1, 1, 0);
}

void func_536(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x615D7
{
	bool bVar0;
	bool bVar1;
	if (bParam3)
	{
		if (Local_138.f_3545 == 0)
		{
			Local_138.f_3545 = MISC::GET_GAME_TIMER();
		}
	}
	bVar1 = (bParam3 && (MISC::GET_GAME_TIMER() - Local_138.f_3545) > 10000);
	if (!bParam2)
	{
		bVar0 = (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || (iParam1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)));
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		bVar0 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	}
	else
	{
		bVar0 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	}
	if (bVar0 || bVar1)
	{
		func_561(4);
		func_538();
		if (bParam0)
		{
			func_537(4);
			Local_138.f_3545 = 0;
		}
		else
		{
			func_537(5);
			Local_138.f_3545 = 0;
		}
	}
}

void func_537(int iParam0)//Position - 0x61684
{
	Local_138.f_106 = iParam0;
}

void func_538()//Position - 0x61692
{
	int iVar0;
	Local_138.f_141[0 /*82*/].f_35 = 1f;
	func_553();
	Local_138.f_141[0 /*82*/].f_25 = 0;
	Local_138.f_9[0] = 0;
	Local_138.f_9[1] = 0;
	Local_138.f_9[2] = 0;
	Local_138.f_0 = 0;
	Local_138.f_140 = 0;
	func_551();
	func_549();
	func_547();
	Local_138.f_23 = 0;
	func_545();
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_138.f_1474[iVar0 /*7*/] = 0;
		iVar0++;
	}
	Local_138.f_22 = 0;
	func_543();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_138.f_1375[iVar0 /*8*/] = 0;
		iVar0++;
	}
	func_539();
}

void func_539()//Position - 0x6172D
{
	func_540(func_541());
}

void func_540(int iParam0)//Position - 0x6173D
{
	if (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iParam0] != 0)
	{
		Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iParam0] = 0;
	}
}

int func_541()//Position - 0x61768
{
	return func_542();
}

int func_542()//Position - 0x61774
{
	return Local_138.f_139;
}

void func_543()//Position - 0x61780
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		func_544(iVar0);
		iVar0++;
	}
	Local_138.f_27 = 0;
}

void func_544(int iParam0)//Position - 0x617A6
{
	Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
	Local_138.f_3318[iParam0 /*12*/].f_7 = 0;
	Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
	Local_138.f_3318[iParam0 /*12*/].f_6 = 0;
	Local_138.f_3318[iParam0 /*12*/].f_2 = 0;
}

void func_545()//Position - 0x617EA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_546(iVar0);
		iVar0++;
	}
	Local_138.f_25 = 0;
}

void func_546(int iParam0)//Position - 0x61810
{
	Local_138.f_3146[iParam0 /*19*/].f_1 = 0;
	Local_138.f_3146[iParam0 /*19*/].f_10 = 0;
	Local_138.f_3146[iParam0 /*19*/].f_13 = 0;
}

void func_547()//Position - 0x6183C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_548(iVar0);
		iVar0++;
	}
	Local_138.f_24 = 0;
}

void func_548(int iParam0)//Position - 0x61861
{
	Local_138.f_3463[iParam0 /*10*/].f_4 = 0;
	Local_138.f_3463[iParam0 /*10*/].f_2 = 0;
}

void func_549()//Position - 0x61881
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		func_550(iVar0);
		iVar0++;
	}
}

void func_550(int iParam0)//Position - 0x618A5
{
	Local_138.f_1825[iParam0 /*33*/].f_10 = 4;
	Local_138.f_1825[iParam0 /*33*/].f_22 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_17 = 10;
	Local_138.f_1825[iParam0 /*33*/].f_4 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_7 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_8 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_27 = 0f;
	Local_138.f_1825[iParam0 /*33*/].f_27.f_1 = 0f;
	Local_138.f_1825[iParam0 /*33*/].f_31 = 0f;
	Local_138.f_1825[iParam0 /*33*/].f_31.f_1 = 0f;
	Local_138.f_1825[iParam0 /*33*/].f_26 = 0f;
	Local_138.f_1825[iParam0 /*33*/].f_9 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_21 = 0;
	Local_138.f_1825[iParam0 /*33*/] = 0;
	Local_138.f_1825[iParam0 /*33*/].f_1 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_11 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_2 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_6 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_3 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_5 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_16 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_23 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_24 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_25 = 0;
	Local_138.f_1825[iParam0 /*33*/].f_20 = 0;
}

void func_551()//Position - 0x619DC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		func_552(iVar0);
		iVar0++;
	}
	Local_138.f_26 = 0;
}

void func_552(int iParam0)//Position - 0x61A02
{
	Local_138.f_224[iParam0 /*23*/] = 0;
	Local_138.f_224[iParam0 /*23*/].f_2 = 0;
	Local_138.f_224[iParam0 /*23*/].f_8 = 0;
	Local_138.f_224[iParam0 /*23*/].f_21 = 0;
	Local_138.f_224[iParam0 /*23*/].f_22 = 0;
	Local_138.f_224[iParam0 /*23*/].f_3 = 0;
	Local_138.f_224[iParam0 /*23*/].f_6 = 0;
	Local_138.f_224[iParam0 /*23*/].f_1 = 0;
	Local_138.f_224[iParam0 /*23*/].f_5 = 0;
	Local_138.f_224[iParam0 /*23*/].f_4 = 0;
}

void func_553()//Position - 0x61A76
{
	struct<7> Var0;
	Local_138.f_141[0 /*82*/].f_11 = 0;
	Local_138.f_141[0 /*82*/].f_12 = -1;
	Var0 = { func_560(0) };
	Local_138.f_141[0 /*82*/].f_13[0 /*4*/] = Var0.f_0;
	Local_138.f_141[0 /*82*/].f_13[0 /*4*/].f_3 = 0;
	Local_138.f_141[0 /*82*/].f_13[0 /*4*/].f_1 = 99;
	Local_138.f_141[0 /*82*/].f_13[0 /*4*/].f_2 = 0;
	Local_138.f_141[0 /*82*/].f_22[0] = 0;
	func_555(-1, 0);
	func_554();
}

void func_554()//Position - 0x61AEE
{
	int iVar0;
	struct<7> Var1;
	iVar0 = Local_138.f_141[0 /*82*/].f_12;
	Var1 = { func_560(iVar0) };
	Local_138.f_141[0 /*82*/].f_13[1 /*4*/] = Var1.f_0;
	Local_138.f_141[0 /*82*/].f_13[1 /*4*/].f_1 = Var1.f_1;
	Local_138.f_141[0 /*82*/].f_13[1 /*4*/].f_2 = 0;
	Local_138.f_141[0 /*82*/].f_13[1 /*4*/].f_3 = 0;
	Local_138.f_141[0 /*82*/].f_22[1] = 0;
}

void func_555(int iParam0, bool bParam1)//Position - 0x61B56
{
	Local_138.f_141[0 /*82*/].f_13[0 /*4*/].f_2 = 0;
	Local_138.f_141[0 /*82*/].f_13[0 /*4*/].f_3 = 0;
	Local_138.f_141[0 /*82*/].f_12 = iParam0;
	if (bParam1)
	{
		func_559(1);
		func_554();
		func_561(5);
		func_556(4);
	}
}

void func_556(int iParam0)//Position - 0x61B9F
{
	func_557(Local_138.f_139, iParam0);
}

void func_557(int iParam0, int iParam1)//Position - 0x61BB1
{
	if (!func_558(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Local_138.f_36[iParam0]), iParam1);
	}
}

bool func_558(int iParam0, int iParam1)//Position - 0x61BD3
{
	return BitTest(Local_138.f_36[iParam0], iParam1);
}

void func_559(int iParam0)//Position - 0x61BE6
{
	Local_138.f_141[0 /*82*/].f_11 = iParam0;
}

struct<7> func_560(int iParam0)//Position - 0x61BF9
{
	struct<7> Var0;
	switch (iParam0)
	{
		case -1:
			Var0.f_0 = 0;
			Var0.f_1 = 0;
			Var0.f_2 = 0;
			Var0.f_6 = 0f;
			Var0.f_3 = 0;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			break;
		case 0:
			Var0.f_0 = 6;
			Var0.f_1 = 99;
			Var0.f_2 = 1;
			Var0.f_6 = 1f;
			Var0.f_3 = 0;
			Var0.f_5 = 7;
			Var0.f_4 = 100;
			break;
		case 2:
			Var0.f_0 = 4;
			Var0.f_1 = 20;
			Var0.f_2 = 5;
			Var0.f_6 = 350f;
			Var0.f_3 = 1000;
			Var0.f_5 = 20;
			Var0.f_4 = 300;
			break;
		case 3:
			Var0.f_0 = 6;
			Var0.f_1 = 100;
			Var0.f_2 = 1;
			Var0.f_6 = 1f;
			Var0.f_3 = 0;
			Var0.f_5 = 10;
			break;
		case 1:
			Var0.f_0 = 5;
			Var0.f_1 = 25;
			Var0.f_2 = 1;
			Var0.f_6 = 1f;
			Var0.f_3 = 0;
			Var0.f_5 = 15;
			Var0.f_4 = 200;
			break;
		default:
			break;
	}
	return Var0;
}

void func_561(int iParam0)//Position - 0x61CED
{
	func_562(iParam0, __LIB_5__::func_403(0f, 0f));
}

void func_562(int iParam0, struct<2> Param1)//Position - 0x61D01
{
	char* sVar0;
	char[] cVar1[8];
	struct<2> Var2;
	func_564(iParam0, &sVar0, &cVar1);
	if (Local_138.f_3547[iParam0] == -1)
	{
		Local_138.f_3547[iParam0] = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_138.f_3547[iParam0], &sVar0, &cVar1, false);
	if (Param1.f_0 != 0f)
	{
		Var2 = { __LIB_16__::func_772(Param1) };
		AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_3547[iParam0], "Screen_Position", Var2.f_0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_3547[iParam0], "Screen_Position", 0.5f);
	}
	AUDIO::RELEASE_SOUND_ID(Local_138.f_3547[iParam0]);
	Local_138.f_3547[iParam0] = -1;
}

void func_564(int iParam0, char* sParam1, char* sParam2)//Position - 0x61DB7
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "VO_Get_Ready", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 1:
			StringCopy(sParam1, "VO_Draw", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 2:
			StringCopy(sParam1, "Select_stage", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 6:
			StringCopy(sParam1, "VO_Reload", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 3:
			StringCopy(sParam1, "Select_Stage_Failed", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 4:
			StringCopy(sParam1, "Menu_Back", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 14:
			StringCopy(sParam1, "Shoot_Miss", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 15:
			StringCopy(sParam1, "Shoot_Option", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 16:
			StringCopy(sParam1, "Press_Start", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 52:
			StringCopy(sParam1, "Calculate_Score_Total", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 17:
			StringCopy(sParam1, "Hit_Generic", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 7:
			StringCopy(sParam1, "Hit_Body", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 8:
			StringCopy(sParam1, "Hit_Barrel", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 9:
			StringCopy(sParam1, "Hit_Latrine", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 10:
			StringCopy(sParam1, "Hit_Coffin", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 11:
			StringCopy(sParam1, "Hit_Bush", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 12:
			StringCopy(sParam1, "Hit_Cactus", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 13:
			StringCopy(sParam1, "Hit_Rock", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 18:
			StringCopy(sParam1, "Hit_Latrine_Fart", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Bullet_Sounds", 64);
			break;
		case 5:
			StringCopy(sParam1, "Weapon_Change", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 20:
			StringCopy(sParam1, "Revolver_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 19:
			StringCopy(sParam1, "Revolver_Cock", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 21:
			StringCopy(sParam1, "Revolver_Dry_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 29:
			StringCopy(sParam1, "Revolver_Reload_First", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 30:
			StringCopy(sParam1, "Revolver_Reload", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 31:
			StringCopy(sParam1, "Revolver_Reload_Last", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 22:
			StringCopy(sParam1, "Rifle_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 23:
			StringCopy(sParam1, "Rifle_Cock", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 24:
			StringCopy(sParam1, "Rifle_Dry_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 32:
			StringCopy(sParam1, "Rifle_Reload_First", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 33:
			StringCopy(sParam1, "Rifle_Reload", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 34:
			StringCopy(sParam1, "Rifle_Reload_Last", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 25:
			StringCopy(sParam1, "Shotgun_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 26:
			StringCopy(sParam1, "Shotgun_Cock", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 27:
			StringCopy(sParam1, "Shotgun_Dry_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 35:
			StringCopy(sParam1, "Shotgun_Reload_First", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 36:
			StringCopy(sParam1, "Shotgun_Reload", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 37:
			StringCopy(sParam1, "Shotgun_Reload_Last", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 38:
			StringCopy(sParam1, "Gatling_Overheat", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 39:
			StringCopy(sParam1, "Gatling_Dry_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 28:
			StringCopy(sParam1, "Gatling", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 40:
			StringCopy(sParam1, "Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 41:
			StringCopy(sParam1, "Pain_Near_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 42:
			StringCopy(sParam1, "Pain_High", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 43:
			StringCopy(sParam1, "Pain_Med", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 44:
			StringCopy(sParam1, "Pain_Low", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Sounds", 64);
			break;
		case 46:
			StringCopy(sParam1, "Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Enemy_Sounds", 64);
			break;
		case 47:
			StringCopy(sParam1, "Pain", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Enemy_Sounds", 64);
			break;
		case 48:
			StringCopy(sParam1, "Rifle_Aim", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Enemy_Sounds", 64);
			break;
		case 49:
			StringCopy(sParam1, "Rifle_Fire", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Enemy_Sounds", 64);
			break;
		case 50:
			StringCopy(sParam1, "Critical_Hit_Warn", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Enemy_Sounds", 64);
			break;
		case 51:
			StringCopy(sParam1, "Dynamite_Throw", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Enemy_Sounds", 64);
			break;
		case 53:
			StringCopy(sParam1, "Cart", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Explosion_Sounds", 64);
			break;
		case 54:
			StringCopy(sParam1, "Generic", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Explosion_Sounds", 64);
			break;
		case 55:
			StringCopy(sParam1, "Dynamite", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Explosion_Sounds", 64);
			break;
		case 56:
			StringCopy(sParam1, "Female_Help", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 57:
			StringCopy(sParam1, "Female_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 59:
			StringCopy(sParam1, "Female_Escape", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 58:
			StringCopy(sParam1, "Female_Pain", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 60:
			StringCopy(sParam1, "Male_Help", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 61:
			StringCopy(sParam1, "Male_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 63:
			StringCopy(sParam1, "Male_Escape", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 62:
			StringCopy(sParam1, "Male_Pain", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 64:
			StringCopy(sParam1, "Male_Help", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 65:
			StringCopy(sParam1, "Male_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 67:
			StringCopy(sParam1, "Male_Escape", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 66:
			StringCopy(sParam1, "Male_Pain", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Hostage_Sounds", 64);
			break;
		case 68:
			StringCopy(sParam1, "Bat_Appear", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 69:
			StringCopy(sParam1, "Bat_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 70:
			StringCopy(sParam1, "Bear_Appear", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 71:
			StringCopy(sParam1, "Bear_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 72:
			StringCopy(sParam1, "Bear_Attack", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 73:
			StringCopy(sParam1, "Eagle_Appear", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 74:
			StringCopy(sParam1, "Eagle_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 75:
			StringCopy(sParam1, "Rat_Appear", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 76:
			StringCopy(sParam1, "Rat_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 77:
			StringCopy(sParam1, "Scorpion_Appear", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 78:
			StringCopy(sParam1, "Scorpion_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 79:
			StringCopy(sParam1, "Vulture_Appear", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 80:
			StringCopy(sParam1, "Vulture_Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Animal_Sounds", 64);
			break;
		case 81:
			StringCopy(sParam1, "Medicine", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Pickup_Sounds", 64);
			break;
		case 83:
			StringCopy(sParam1, "Snake_Oil", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Pickup_Sounds", 64);
			break;
		case 82:
			StringCopy(sParam1, "Sheriff_Badge", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Pickup_Sounds", 64);
			break;
		case 84:
			StringCopy(sParam1, "Run_Out", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Pickup_Sounds", 64);
			break;
		case 85:
			StringCopy(sParam1, "Start_Game", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 86:
			StringCopy(sParam1, "Level_Select_Gospel_Gangsters", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 87:
			StringCopy(sParam1, "Level_Select_Buckle_Bunnies", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 88:
			StringCopy(sParam1, "Level_Select_Hillbilly_Hoodlums", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 89:
			StringCopy(sParam1, "Level_Select_Ruckus_Rangers", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 90:
			StringCopy(sParam1, "Level_Select_Barrel_Fever_Boys", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 91:
			StringCopy(sParam1, "Reload", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 92:
			StringCopy(sParam1, "Shoot_Outhouse", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 93:
			StringCopy(sParam1, "Shoot_Coffin", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 94:
			StringCopy(sParam1, "Headshot", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 95:
			StringCopy(sParam1, "Shoot_Critter", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 96:
			StringCopy(sParam1, "Award_Pistols_At_Dawn", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 97:
			StringCopy(sParam1, "Award_Sharpshooter", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 98:
			StringCopy(sParam1, "Award_Deadeye", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 99:
			StringCopy(sParam1, "Level_Complete_Bad", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 100:
			StringCopy(sParam1, "Level_Complete_Average", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 101:
			StringCopy(sParam1, "Level_Complete_Good", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 102:
			StringCopy(sParam1, "Level_Complete_Amazing", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 103:
			StringCopy(sParam1, "Weapon_Select_Gatlinggun", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 104:
			StringCopy(sParam1, "Weapon_Select_Shotgun", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 105:
			StringCopy(sParam1, "Weapon_Select_Rifle", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 45:
			StringCopy(sParam1, "Get_New_Gun", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 106:
			StringCopy(sParam1, "Beat_Level", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 107:
			StringCopy(sParam1, "Death", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 108:
			StringCopy(sParam1, "Dead_Text", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Frontend_Sounds", 64);
			break;
		case 109:
			StringCopy(sParam1, "Finish_Game", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Player_Speech_Sounds", 64);
			break;
		case 110:
			StringCopy(sParam1, "Powerup_Loop", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Pickup_Sounds", 64);
			break;
		case 111:
			StringCopy(sParam1, "Powerdown_Loop", 32);
			StringCopy(sParam2, "DLC_H3_ArcMac_BR2_Pickup_Sounds", 64);
			break;
	}
}

void func_566()//Position - 0x628CC
{
	bool bVar0;
	func_642();
	func_611(0, 1);
	func_611(1, 1);
	func_611(2, 1);
	if (!__LIB_37__::func_120())
	{
		bVar0 = true;
	}
	func_581(&(Local_138.f_3664), Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_14, &(Local_146.f_30), bVar0);
	func_567();
}

void func_567()//Position - 0x62914
{
	func_571();
	__LIB_36__::func_716(&(Local_138.f_3730), "Badlands_Bezel", __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), 0f, Local_138.f_111);
}

void func_571()//Position - 0x62A4A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_572(iVar0);
		iVar0++;
	}
}

void func_572(int iParam0)//Position - 0x62A6B
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	float fVar4;
	if (!Local_643[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { __LIB_16__::func_762() };
	Var3.f_3 = 255;
	if (Local_643[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var1 = { __LIB_16__::func_761() };
	if (!Local_643[iParam0 /*17*/].f_2)
	{
		if (Local_643[iParam0 /*17*/].f_4 > 0)
		{
			Var1.f_1 = (Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_643[iParam0 /*17*/].f_4) % (IntToFloat(Local_643[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_643[iParam0 /*17*/].f_6) * 1f)));
			Var2 = { Var1 };
			Var2.f_1 = (Var2.f_1 + Var0.f_1);
		}
		else if (Local_643[iParam0 /*17*/].f_7 > 0)
		{
			Local_643[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_643[iParam0 /*17*/].f_7);
			Local_643[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_643[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_643[iParam0 /*17*/].f_4 = Local_643[iParam0 /*17*/].f_6;
		Local_643[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_643[iParam0 /*17*/].f_1)
	{
		fVar4 = (SYSTEM::TO_FLOAT(Local_643[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_643[iParam0 /*17*/].f_8));
		Var3.f_0 = __LIB_15__::func_813(Local_643[iParam0 /*17*/].f_9, Local_643[iParam0 /*17*/].f_13, fVar4);
		Var3.f_1 = __LIB_15__::func_813(Local_643[iParam0 /*17*/].f_9.f_1, Local_643[iParam0 /*17*/].f_13.f_1, fVar4);
		Var3.f_2 = __LIB_15__::func_813(Local_643[iParam0 /*17*/].f_9.f_2, Local_643[iParam0 /*17*/].f_13.f_2, fVar4);
		Var3.f_3 = __LIB_15__::func_813(Local_643[iParam0 /*17*/].f_9.f_3, Local_643[iParam0 /*17*/].f_13.f_3, fVar4);
	}
	else
	{
		Var3 = { Local_643[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_16__::func_760(iParam0)))
	{
		__LIB_37__::func_93(Var1, Var0, Var3);
	}
	else
	{
		__LIB_36__::func_716(__LIB_16__::func_756(iParam0), __LIB_16__::func_760(iParam0), Var1, Var0, 0f, Var3);
	}
	if (!Local_643[iParam0 /*17*/].f_2 && Local_643[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_16__::func_760(0)))
		{
			__LIB_37__::func_93(Var2, Var0, Var3);
		}
		else
		{
			__LIB_36__::func_716(__LIB_16__::func_756(iParam0), __LIB_16__::func_760(iParam0), Var2, Var0, 0f, Var3);
		}
	}
	Local_643[iParam0 /*17*/].f_5 = (Local_643[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_643[iParam0 /*17*/].f_5 < 0)
	{
		Local_643[iParam0 /*17*/].f_5 = (Local_643[iParam0 /*17*/].f_5 + Local_643[iParam0 /*17*/].f_8);
	}
	Local_643[iParam0 /*17*/].f_4 = (Local_643[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_643[iParam0 /*17*/].f_4 < 0)
	{
		Local_643[iParam0 /*17*/].f_4 = 0;
	}
}

void func_581(var uParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x62F25
{
	struct<2> Var0;
	var uVar1;
	int iVar2;
	bool bVar3;
	if (uParam0->f_33)
	{
		__LIB_37__::func_135(1);
	}
	else
	{
		__LIB_37__::func_135(0);
	}
	Var0 = { __LIB_37__::func_119() };
	uParam0->f_40 = (((uParam0->f_40 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f))) % 1000) / 500);
	__LIB_36__::func_716(func_604(), func_603(), __LIB_37__::func_118(), func_601(), 0f, __LIB_37__::func_117());
	uVar1 = 4;
	iVar2 = 0;
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		bVar3 = ((uParam2[iVar2 /*3*/])->f_2 == NETWORK::PARTICIPANT_ID_TO_INT() && uParam0->f_33);
		if ((uParam0->f_37 < 3 || SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(uParam0->f_39)) && bVar3)
		{
			__LIB_16__::func_774(iParam1, &uVar1);
		}
		else
		{
			__LIB_16__::func_774((*uParam2)[iVar2 /*3*/], &uVar1);
		}
		func_592(iVar2 + 1, __LIB_5__::func_402(__LIB_37__::func_116(), __LIB_5__::func_403(0f, (Var0.f_1 * IntToFloat(iVar2)))), __LIB_37__::func_117(), __LIB_37__::func_134(bParam3), bVar3);
		func_589(uParam0, &uVar1, __LIB_5__::func_402(__LIB_37__::func_115(), __LIB_5__::func_403(0f, (Var0.f_1 * IntToFloat(iVar2)))), __LIB_37__::func_117(), __LIB_37__::func_134(bParam3), bVar3);
		func_582((uParam2[iVar2 /*3*/])->f_1, __LIB_5__::func_402(__LIB_37__::func_114(), __LIB_5__::func_403(0f, (Var0.f_1 * IntToFloat(iVar2)))), __LIB_37__::func_117(), __LIB_37__::func_134(bParam3), bVar3);
		iVar2++;
	}
}

void func_582(int iParam0, struct<2> Param1, struct<4> Param2, struct<4> Param3, bool bParam4)//Position - 0x6306B
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	struct<8> Var4;
	Var0 = { Param1 };
	Var1 = { __LIB_37__::func_113() };
	Var2 = { __LIB_37__::func_119() };
	Var3.f_3 = 255;
	if (bParam4)
	{
		Var3 = { Param3 };
	}
	else
	{
		Var3 = { Param2 };
	}
	func_584(iParam0, __LIB_0__::func_114(), Param1, Var3);
	Var0.f_0 = (Param1.f_0 + (Var2.f_0 * IntToFloat((__LIB_0__::func_114() / 2) + 1)));
	StringCopy(&Var4, __LIB_37__::func_112(), 64);
	StringConCat(&Var4, "P", 64);
	__LIB_36__::func_716(func_604(), &Var4, Var0, Var1, 0f, Var3);
	Var0.f_0 = (Param1.f_0 + (Var2.f_0 * IntToFloat((__LIB_0__::func_114() / 2) + 2)));
	StringCopy(&Var4, __LIB_37__::func_112(), 64);
	StringConCat(&Var4, "T", 64);
	__LIB_36__::func_716(func_604(), &Var4, Var0, Var1, 0f, Var3);
	Var0.f_0 = (Param1.f_0 + (Var2.f_0 * IntToFloat((__LIB_0__::func_114() / 2) + 3)));
	StringCopy(&Var4, __LIB_37__::func_112(), 64);
	StringConCat(&Var4, "S", 64);
	__LIB_36__::func_716(func_604(), &Var4, Var0, Var1, 0f, Var3);
}

void func_584(int iParam0, int iParam1, struct<2> Param2, struct<4> Param3)//Position - 0x63173
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	struct<8> Var7;
	Var0 = { Param2 };
	Var1 = { __LIB_37__::func_113() };
	Var2 = { __LIB_37__::func_119() };
	bVar3 = iParam0 == false;
	if (iParam1 == 0)
	{
		iVar5 = iParam0;
		while (iVar5 > 0 || bVar3)
		{
			bVar3 = false;
			Var0.f_0 = ((Param2.f_0 + ((Var2.f_0 * IntToFloat((iParam1 - 1))) / 2f)) - (Var2.f_0 * IntToFloat(iVar4)));
			StringCopy(&Var6, __LIB_37__::func_112(), 64);
			StringIntConCat(&Var6, (iVar5 % 10), 64);
			iVar5 = (iVar5 / 10);
			__LIB_36__::func_716(func_604(), &Var6, Var0, Var1, 0f, Param3);
			iVar4++;
		}
	}
	else
	{
		iVar4 = 0;
		while (iVar4 < iParam1)
		{
			Var0.f_0 = ((Param2.f_0 + ((Var2.f_0 * IntToFloat((iParam1 - 1))) / 2f)) - (Var2.f_0 * IntToFloat(iVar4)));
			StringCopy(&Var7, __LIB_37__::func_112(), 64);
			StringIntConCat(&Var7, ((iParam0 / SYSTEM::ROUND(SYSTEM::POW(10f, SYSTEM::TO_FLOAT(iVar4)))) % 10), 64);
			__LIB_36__::func_716(func_604(), &Var7, Var0, Var1, 0f, Param3);
			iVar4++;
		}
	}
}

void func_589(var uParam0, var uParam1, struct<2> Param2, struct<4> Param3, struct<4> Param4, bool bParam5)//Position - 0x632AC
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	int iVar4;
	struct<8> Var5;
	Var0 = { Param2 };
	Var1 = { __LIB_37__::func_113() };
	Var2 = { __LIB_37__::func_119() };
	Var3.f_3 = 255;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		Var0.f_0 = ((Param2.f_0 + ((Var2.f_0 * 2f) / 2f)) + (Var2.f_0 * IntToFloat(iVar4)));
		if ((*uParam1)[iVar4] < 26)
		{
			StringCopy(&Var5, __LIB_37__::func_112(), 64);
		}
		else
		{
			StringCopy(&Var5, __LIB_37__::func_112(), 64);
		}
		StringConCat(&Var5, __LIB_15__::func_814((*uParam1)[iVar4]), 64);
		if (bParam5)
		{
			if (uParam0->f_37 == iVar4)
			{
				if (uParam0->f_40 == 0)
				{
					Var3 = { Param3 };
				}
				else
				{
					Var3 = { Param4 };
				}
			}
			else
			{
				Var3 = { Param4 };
			}
		}
		else
		{
			Var3 = { Param3 };
		}
		__LIB_36__::func_716(func_604(), &Var5, Var0, Var1, 0f, Var3);
		iVar4++;
	}
}

void func_592(int iParam0, struct<2> Param1, struct<4> Param2, struct<4> Param3, bool bParam4)//Position - 0x63578
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	struct<8> Var4;
	Var0 = { Param1 };
	Var1 = { __LIB_37__::func_113() };
	Var2 = { __LIB_37__::func_119() };
	Var3.f_3 = 255;
	if (bParam4)
	{
		Var3 = { Param3 };
	}
	else
	{
		Var3 = { Param2 };
	}
	if (iParam0 == 10)
	{
		StringCopy(&Var4, __LIB_37__::func_112(), 64);
		StringIntConCat(&Var4, 1, 64);
		Var0.f_0 = (Var0.f_0 - Var2.f_0);
		__LIB_36__::func_716(func_604(), &Var4, Var0, Var1, 0f, Var3);
		Var0 = { Param1 };
		iParam0 = 0;
	}
	StringCopy(&Var4, __LIB_37__::func_112(), 64);
	StringIntConCat(&Var4, iParam0, 64);
	__LIB_36__::func_716(func_604(), &Var4, Var0, Var1, 0f, Var3);
	Var0.f_0 = (Param1.f_0 + (Var2.f_0 * 1f));
	StringCopy(&Var4, __LIB_37__::func_112(), 64);
	if (iParam0 == 1)
	{
		StringConCat(&Var4, "S", 64);
	}
	else if (iParam0 == 2)
	{
		StringConCat(&Var4, "N", 64);
	}
	else if (iParam0 == 3)
	{
		StringConCat(&Var4, "R", 64);
	}
	else
	{
		StringConCat(&Var4, "T", 64);
	}
	__LIB_36__::func_716(func_604(), &Var4, Var0, Var1, 0f, Var3);
	Var0.f_0 = (Param1.f_0 + (Var2.f_0 * 2f));
	StringCopy(&Var4, __LIB_37__::func_112(), 64);
	if (iParam0 == 1)
	{
		StringConCat(&Var4, "T", 64);
	}
	else if (iParam0 == 2)
	{
		StringConCat(&Var4, "D", 64);
	}
	else if (iParam0 == 3)
	{
		StringConCat(&Var4, "D", 64);
	}
	else
	{
		StringConCat(&Var4, "H", 64);
	}
	__LIB_36__::func_716(func_604(), &Var4, Var0, Var1, 0f, Var3);
}

struct<2> func_601()//Position - 0x63800
{
	return __LIB_5__::func_403(276f, 48f);
}

char* func_603()//Position - 0x6382C
{
	return "LEADERBOARDS";
}

char* func_604()//Position - 0x63838
{
	return "MPLastGunslingersHud";
}

void func_611(int iParam0, bool bParam1)//Position - 0x63FC5
{
	char cVar0[24];
	struct<8> Var1;
	float fVar2;
	int iVar3[10];
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	fVar2 = 1f;
	iVar4 = 0;
	iVar7 = 0;
	while (iVar7 <= 49)
	{
		if (Local_138.f_224[iVar7 /*23*/].f_7 == iParam0 && ((Local_138.f_224[iVar7 /*23*/] || Local_138.f_224[iVar7 /*23*/].f_4 > 0) || Local_138.f_224[iVar7 /*23*/].f_6))
		{
			if (Local_138.f_224[iVar7 /*23*/].f_21 <= func_42())
			{
				fVar2 = func_641(Local_138.f_224[iVar7 /*23*/].f_14, iParam0);
				switch (Local_138.f_224[iVar7 /*23*/].f_14)
				{
					case 0:
						if (Local_138.f_224[iVar7 /*23*/].f_8 == 0)
						{
							StringCopy(&cVar0, "outhouse_01", 24);
							Var1 = { Local_138.f_3754 };
						}
						else
						{
							StringCopy(&cVar0, "outhouse_empty", 24);
							Var1 = { Local_138.f_3754 };
						}
						break;
					case 1:
						StringCopy(&cVar0, "cactus-1", 24);
						Var1 = { Local_138.f_3858 };
						break;
					case 2:
						StringCopy(&cVar0, "cactus-2", 24);
						Var1 = { Local_138.f_3858 };
						break;
					case 3:
						StringCopy(&cVar0, "cactus-3", 24);
						Var1 = { Local_138.f_3858 };
						break;
					case 4:
						StringCopy(&cVar0, "PROP_CACTUS_02", 24);
						Var1 = { Local_138.f_3858 };
						break;
					case 5:
						if (Local_138.f_224[iVar7 /*23*/].f_8 == 0)
						{
							StringCopy(&cVar0, "crate_01", 24);
							Var1 = { Local_138.f_3826 };
						}
						else if (Local_138.f_224[iVar7 /*23*/].f_8 == 1)
						{
							StringCopy(&cVar0, "crate_02", 24);
							Var1 = { Local_138.f_3826 };
						}
						else if (Local_138.f_224[iVar7 /*23*/].f_8 == 2)
						{
							StringCopy(&cVar0, "crate_03", 24);
							Var1 = { Local_138.f_3826 };
						}
					else
					{
						}
						else
						{
							break;
						case 6:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_03", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 7:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_04", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 8:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_05", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 9:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_06", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 10:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_07", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 11:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_08", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 12:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_09", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 13:
							StringCopy(&cVar0, "LEVEL_02_TOWN_PROP_10", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 14:
							StringCopy(&cVar0, "fence", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 15:
							StringCopy(&cVar0, "fence-small", 24);
							Var1 = { Local_138.f_3762 };
							break;
						case 16:
							StringCopy(&cVar0, "PROP_CACTUS_03", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 17:
							StringCopy(&cVar0, "PROP_CACTUS_04", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 18:
							StringCopy(&cVar0, "PROP_CACTUS_05", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 19:
							StringCopy(&cVar0, "PROP_CACTUS_06", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 20:
							StringCopy(&cVar0, "PROP_CACTUS_07", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 21:
							StringCopy(&cVar0, "PROP_CACTUS_08", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 22:
							StringCopy(&cVar0, "PROP_CACTUS_09", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 23:
							StringCopy(&cVar0, "TREE_01", 24);
							Var1 = { Local_138.f_3770 };
							break;
						case 24:
							StringCopy(&cVar0, "TREE_02", 24);
							Var1 = { Local_138.f_3770 };
							break;
						case 25:
							StringCopy(&cVar0, "FOREST_FLOOR_GRASS", 24);
							Var1 = { Local_138.f_3770 };
							break;
						case 26:
							StringCopy(&cVar0, "PROP_BUSH_SMALL", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 27:
							StringCopy(&cVar0, "PROP_BUSH_LARGE", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 28:
							StringCopy(&cVar0, "PROP_ROCK_SMALL", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 29:
							StringCopy(&cVar0, "PROP_ROCK_LARGE", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 30:
							Var1 = { Local_138.f_3778 };
							StringCopy(&cVar0, "PROP_STACKED_CRATES_01", 24);
							break;
						case 31:
							Var1 = { Local_138.f_3778 };
							StringCopy(&cVar0, "PROP_STACKED_CRATES_02", 24);
							break;
						case 32:
							StringCopy(&cVar0, "PROP_BARRELS", 24);
							Var1 = { Local_138.f_3858 };
							break;
						case 33:
							Var1 = { Local_138.f_3786 };
							StringCopy(&cVar0, "GRAVEYARD_PROP_06", 24);
							break;
						case 34:
							Var1 = { Local_138.f_3786 };
							StringCopy(&cVar0, "GRAVEYARD_PROP_01", 24);
							break;
						case 35:
							Var1 = { Local_138.f_3786 };
							StringCopy(&cVar0, "GRAVEYARD_PROP_02", 24);
							break;
						case 36:
							Var1 = { Local_138.f_3786 };
							StringCopy(&cVar0, "GRAVEYARD_PROP_03", 24);
							break;
						case 37:
							Var1 = { Local_138.f_3786 };
							StringCopy(&cVar0, "GRAVEYARD_PROP_04", 24);
							break;
						case 38:
							Var1 = { Local_138.f_3786 };
							StringCopy(&cVar0, "GRAVEYARD_PROP_05", 24);
							break;
						case 39:
							StringCopy(&cVar0, "GRAVEYARD_COFFIN_01", 24);
							if (Local_138.f_224[iVar7 /*23*/].f_8 == 0)
							{
								StringCopy(&cVar0, "GRAVEYARD_COFFIN_01", 24);
								Var1 = { Local_138.f_3786 };
							}
							else
							{
								StringCopy(&cVar0, "GRAVEYARD_COFFIN_EMPTY", 24);
								Var1 = { Local_138.f_3786 };
							}
							break;
						case 40:
							Var1 = { Local_138.f_3762 };
							StringCopy(&cVar0, "WATER-TANK", 24);
							break;
						case 41:
							StringCopy(&cVar0, "PROP_TNT_CRATE_STATE_01", 24);
							Var1 = { Local_138.f_3826 };
							break;
						case 42:
							StringCopy(&cVar0, "BARREL_HORIZONTAL", 24);
							Var1 = { Local_138.f_3778 };
							break;
						case 43:
							StringCopy(&cVar0, "BARREL_VERTICAL", 24);
							break;
						case 44:
							Var1 = { Local_138.f_3754 };
							StringCopy(&cVar0, "OUTHOUSE_EMPTY", 24);
							break;
					}
					if (Local_138.f_224[iVar7 /*23*/].f_15 < 1920f && Local_138.f_224[iVar7 /*23*/].f_15 > 0f)
					{
						if (Local_138.f_224[iVar7 /*23*/])
						{
							__LIB_36__::func_716(&Var1, &cVar0, Local_138.f_224[iVar7 /*23*/].f_15, __LIB_5__::func_403((Local_138.f_224[iVar7 /*23*/].f_19 * fVar2), (Local_138.f_224[iVar7 /*23*/].f_20 * fVar2)), 0f, Local_138.f_111);
						}
						if ((Local_138.f_224[iVar7 /*23*/].f_15 - (Local_138.f_224[iVar7 /*23*/].f_19 / 2f)) < 1605f && (Local_138.f_224[iVar7 /*23*/].f_15 + (Local_138.f_224[iVar7 /*23*/].f_19 / 2f)) > 250f)
						{
							if (Local_138.f_87 == -1)
							{
								Local_138.f_88 = Local_138.f_224[iVar7 /*23*/].f_15;
								Local_138.f_87 = iVar7;
							}
							else if (iVar7 == Local_138.f_87)
							{
								Local_138.f_88 = Local_138.f_224[iVar7 /*23*/].f_15;
							}
							else if (Local_138.f_224[iVar7 /*23*/].f_15 > Local_138.f_88)
							{
								if (Local_138.f_224[iVar7 /*23*/].f_22 != Local_138.f_224[Local_138.f_87 /*23*/].f_22)
								{
									if (Local_138.f_224[iVar7 /*23*/].f_22 > Local_138.f_224[Local_138.f_87 /*23*/].f_22)
									{
										Local_138.f_88 = Local_138.f_224[iVar7 /*23*/].f_15;
										Local_138.f_87 = iVar7;
									}
									else if (Local_138.f_224[Local_138.f_87 /*23*/].f_22 == 4 && Local_138.f_224[iVar7 /*23*/].f_22 == 1)
									{
										Local_138.f_88 = Local_138.f_224[iVar7 /*23*/].f_15;
										Local_138.f_87 = iVar7;
									}
								}
							}
						}
					}
					bVar6 = true;
					bVar5 = false;
					if (bParam1)
					{
						bVar5 = true;
					}
					else if (func_640())
					{
						if (func_638())
						{
							if (func_542() == 0 || Local_138.f_224[iVar7 /*23*/].f_7 == 2)
							{
								bVar5 = false;
								if (Local_138.f_224[iVar7 /*23*/].f_21 < func_42())
								{
									fVar8 = (Local_138.f_224[iVar7 /*23*/].f_15 - (Local_138.f_224[iVar7 /*23*/].f_19 / 2f));
									if (fVar8 > (1920f - 250f))
									{
										bVar6 = false;
									}
								}
							}
							else
							{
								bVar5 = true;
							}
						}
						else
						{
							bVar5 = true;
						}
					}
					else
					{
						bVar5 = false;
						bVar6 = false;
					}
					if (iParam0 == 2)
					{
						if (Local_138.f_224[iVar7 /*23*/].f_15 >= -200f)
						{
							if (bVar6)
							{
								Local_138.f_224[iVar7 /*23*/].f_15 = (Local_138.f_224[iVar7 /*23*/].f_15 - func_637());
							}
						}
						else if (Local_138.f_224[iVar7 /*23*/].f_15 < -200f)
						{
							if (bVar5)
							{
								Local_138.f_224[iVar7 /*23*/].f_15 = (1920f * 2f);
							}
						}
					}
					else if (func_542() == 0)
					{
						if (Local_138.f_224[iVar7 /*23*/].f_15 >= -200f)
						{
							if (bVar6)
							{
								Local_138.f_224[iVar7 /*23*/].f_15 = (Local_138.f_224[iVar7 /*23*/].f_15 - func_634());
							}
						}
						else if (Local_138.f_224[iVar7 /*23*/].f_15 < -200f)
						{
							if (bVar5)
							{
								if (func_633(iVar7))
								{
									if (iVar4 < 10)
									{
										iVar3[iVar4] = iVar7;
										iVar4++;
									}
								}
								else
								{
									Local_138.f_224[iVar7 /*23*/].f_15 = (1920f + (Local_138.f_224[iVar7 /*23*/].f_19 / 2f));
								}
							}
						}
					}
					else if (((func_542() == 1 || func_542() == 2) || func_542() == 3) || func_542() == 4)
					{
						if (Local_138.f_224[iVar7 /*23*/].f_15 > 0f)
						{
							if (bVar6)
							{
								Local_138.f_224[iVar7 /*23*/].f_15 = (Local_138.f_224[iVar7 /*23*/].f_15 - func_634());
							}
						}
						else if (Local_138.f_224[iVar7 /*23*/].f_15 <= 0f)
						{
							if (bVar5)
							{
								if (func_633(iVar7))
								{
									if (iVar4 < 10)
									{
										iVar3[iVar4] = iVar7;
										iVar4++;
										if (Local_138.f_224[iVar7 /*23*/].f_14 == 39)
										{
											func_631(Local_138.f_224[iVar7 /*23*/].f_15, 39, 0, 0, Local_138.f_224[iVar7 /*23*/].f_22, 0, 0, 0);
										}
									}
								}
								else
								{
									Local_138.f_224[iVar7 /*23*/].f_15 = func_630();
									Local_138.f_224[iVar7 /*23*/].f_5++;
									if (Local_138.f_224[iVar7 /*23*/].f_4 > 0 && Local_138.f_224[iVar7 /*23*/].f_4 == Local_138.f_224[iVar7 /*23*/].f_5)
									{
										Local_138.f_224[iVar7 /*23*/] = 1;
									}
								}
							}
						}
					}
					if (func_640())
					{
						if (func_638())
						{
							if (func_612(iVar7))
							{
								func_556(1);
							}
						}
					}
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > 0)
	{
		iVar7 = 0;
		while (iVar7 <= (iVar4 - 1))
		{
			func_552(iVar3[iVar7]);
			iVar7++;
		}
	}
}

int func_612(int iParam0)//Position - 0x64AA3
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	switch (func_542())
	{
		case 0:
			return (Local_138.f_224[iParam0 /*23*/].f_21 == func_42() && (Local_138.f_224[iParam0 /*23*/].f_15 - (Local_138.f_224[iParam0 /*23*/].f_19 / 2f)) < 300f);
			break;
		case 1:
			if (Local_138.f_85 == -1)
			{
				func_628(Local_138.f_89 + 1);
				func_627();
				func_625();
				if (func_42() == 1)
				{
					func_621(0, 1, Local_138.f_85);
					func_621(8, 1, Local_138.f_85);
				}
				else if (func_42() == 3)
				{
					func_621(0, 1, Local_138.f_85);
					func_621(8, 1, Local_138.f_85);
				}
				func_617(func_42());
			}
			else if (Local_138.f_224[iParam0 /*23*/].f_22 == Local_138.f_85)
			{
				if (func_616(Local_138.f_224[iParam0 /*23*/].f_14))
				{
					Var0 = { Local_138.f_224[iParam0 /*23*/].f_15 };
					fVar4 = func_634();
					fVar1 = func_615(Local_138.f_85);
					fVar5 = func_614(fVar4);
					if (Var0.f_0 >= (fVar1 - (fVar5 / 2f)) && Var0.f_0 <= (fVar1 + (fVar5 / 2f)))
					{
						return 1;
					}
				}
			}
			break;
		case 2:
			if (Local_138.f_85 == -1)
			{
				func_628(Local_138.f_89 + 1);
				func_627();
				func_625();
				func_621(0, 1, Local_138.f_85);
				func_621(8, 1, Local_138.f_85);
				func_621(7, 1, Local_138.f_85);
				func_617(func_42());
			}
			else
			{
				iVar3 = Local_138.f_90[Local_138.f_85];
				if (iVar3 > -1)
				{
					fVar1 = func_615(Local_138.f_85);
					fVar2 = Local_138.f_224[iVar3 /*23*/].f_15;
					fVar4 = func_634();
					fVar5 = func_614(fVar4);
					if (fVar2 >= (fVar1 - (fVar5 / 2f)) && fVar2 <= (fVar1 + (fVar5 / 2f)))
					{
						return 1;
					}
				}
			}
			break;
		case 3:
			if (Local_138.f_85 == -1)
			{
				func_628(Local_138.f_89 + 1);
				func_627();
				func_625();
				func_621(0, 1, Local_138.f_85);
				func_621(6, 1, Local_138.f_85);
				func_617(func_42());
			}
			else
			{
				iVar3 = Local_138.f_90[Local_138.f_85];
				if (iVar3 > -1)
				{
					fVar1 = func_615(Local_138.f_85);
					fVar2 = Local_138.f_224[iVar3 /*23*/].f_15;
					fVar4 = func_634();
					fVar5 = func_614(fVar4);
					if (fVar2 >= (fVar1 - (fVar5 / 2f)) && fVar2 <= (fVar1 + (fVar5 / 2f)))
					{
						return 1;
					}
				}
			}
			break;
		case 4:
			if (Local_138.f_85 == -1)
			{
				func_628(Local_138.f_89 + 1);
				func_627();
				func_625();
				if (func_613() != 2 && func_613() != 4)
				{
					func_621(6, 1, Local_138.f_85);
				}
				func_621(0, 1, Local_138.f_85);
				func_617(func_42());
			}
			else
			{
				iVar3 = Local_138.f_90[Local_138.f_85];
				if (iVar3 > -1)
				{
					fVar1 = func_615(Local_138.f_85);
					fVar2 = Local_138.f_224[iVar3 /*23*/].f_15;
					fVar4 = func_634();
					fVar5 = func_614(fVar4);
					if (fVar2 >= (fVar1 - (fVar5 / 2f)) && fVar2 <= (fVar1 + (fVar5 / 2f)))
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_613()//Position - 0x64DAE
{
	return Local_138.f_85;
}

float func_614(float fParam0)//Position - 0x64DBA
{
	if (fParam0 < 4f)
	{
		return 4f;
	}
	return SYSTEM::TO_FLOAT(SYSTEM::CEIL(fParam0));
}

float func_615(int iParam0)//Position - 0x64DD7
{
	switch (func_542())
	{
		case 1:
			return 1342.5f;
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 1280.125f;
					break;
				case 2:
					return 1260.125f;
					break;
				case 3:
					return 1084.25f;
					break;
				case 4:
					return 1280.125f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					return 1420f;
					break;
				case 2:
					return 1459.25f;
					break;
				case 3:
					return 1030f;
					break;
				case 4:
					return 1437f;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 1:
					return 1548f;
					break;
				case 2:
					return 1353.5f;
					break;
				case 3:
					return 1329.625f;
					break;
				case 4:
					return 1351.25f;
					break;
			}
			break;
	}
	return 0f;
}

int func_616(int iParam0)//Position - 0x64EF6
{
	switch (iParam0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
			return 1;
		default:
	}
	return 0;
}

void func_617(int iParam0)//Position - 0x64F22
{
	float fVar0;
	switch (Local_138.f_139)
	{
		case 0:
			if (iParam0 == 0)
			{
				func_618(-500f, 950f, 560f, 2, 1, 5, 0, 0, 0, 0);
				func_618(-8500f, 950f, 560f, 2, 1, 6, 0, 0, 0, 0);
				func_618(2500f, 950f, 560f, 2, 0, 7, 0, 0, 0, 0);
				func_618(2500f, 950f, 560f, 2, 0, 8, 0, 0, 0, 0);
				func_618((1920f + 668.5f), 561.75f, 1100f, 1, 0, 18, 0, 0, 0, 0);
				func_618(2500f, 700f, 1100f, 1, 0, 0, 0, 0, 0, 0);
				func_618(-500f, 700f, 1300f, 1, 1, 1, 0, 0, 0, 0);
				func_618(2500f, 700f, 1180f, 1, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 700f, 1100f, 1, 0, 17, 0, 0, 0, 0);
				func_618(2500f, 700f, 1100f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 700f, 700f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 700f, 900f, 1, 0, 1, 0, 0, 0, 0);
				func_618(-1500f, 700f, 1000f, 1, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 700f, 1300f, 1, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 700f, 1400f, 1, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 650f, 1500f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 700f, 1500f, 1, 0, 3, 0, 0, 0, 0);
				func_618(-500f, 700f, 900f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 700f, 900f, 1, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 1600f, 0, 0, 3, 0, 0, 0, 0);
				func_618(-500f, 430f, 800f, 0, 1, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 1100f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 1700f, 0, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 330f, 2200f, 0, 0, 16, 0, 0, 0, 0);
				func_618(-500f, 430f, 860f, 0, 1, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 1400f, 0, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1200f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 900f, 0, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 330f, 2200f, 0, 0, 16, 0, 0, 0, 0);
				func_618(-500f, 430f, 800f, 0, 1, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 1100f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 1700f, 0, 1, 0, 0, 0, 0, 0);
			}
			else if (iParam0 == 1)
			{
				func_618(((1605f + 112f) + 1008f), 330f, ((1605f + 112f) + 1008f), 0, 0, 16, 1, 0, 0, 0);
				func_618(2500f, 430f, 1200f, 0, 0, 2, 1, 1, 0, 0);
				func_618(-500f, 430f, 700f, 0, 1, 2, 1, 1, 0, 0);
				func_618(((1605f + 112f) + 554.25f), 561.75f, ((1605f + 112f) + 500f), 1, 0, 18, 1, 0, 0, 0);
				func_618(2500f, 700f, 1100f, 1, 0, 0, 1, 0, 0, 0);
				func_618(-500f, 700f, 900f, 1, 1, 17, 1, 0, 0, 0);
				func_618(-500f, 700f, 1300f, 1, 1, 1, 1, 0, 0, 0);
				func_618(2500f, 700f, 1180f, 1, 0, 0, 1, 1, 0, 0);
				func_618(-500f, 700f, 1300f, 1, 1, 1, 1, 0, 0, 0);
				func_618(2500f, 950f, 560f, 2, 0, 7, 1, 0, 0, 0);
				func_618(0f, 950f, 560f, 2, 1, 6, 1, 1, 0, 0);
				func_618(2500f, 950f, 560f, 2, 0, 7, 1, 1, 0, 0);
				func_618(0f, 950f, 560f, 2, 1, 6, 1, 1, 0, 0);
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				func_618((1256.625f + (1920f / 2f)), 446.875f, 357.875f, 3, 0, 1, 0, 0, 1, 0);
				func_618((1256.625f + (1920f * 1.5f)), 446.875f, 357.875f, 3, 0, 1, 0, 0, 1, 0);
				func_618(-500f, 950f, 560f, 2, 1, 11, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 13, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 12, 0, 0, 0, 0);
				func_618(2500f, 720f, 1100f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 900f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 1360f, 1, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 600f, 1, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 720f, 700f, 1, 1, 2, 0, 0, 0, 0);
				func_618(2500f, 720f, 900f, 1, 0, 3, 0, 0, 0, 0);
				func_618(-1500f, 720f, 1000f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 900f, 1, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 800f, 1360f, 1, 0, 0, 0, 0, 0, 0);
				func_618(-500f, 650f, 1360f, 1, 1, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 400f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 900f, 1, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 720f, 900f, 1, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 800f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1300f, 0, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 1300f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 1200f, 0, 0, 3, 0, 0, 0, 0);
				func_618(-500f, 430f, 860f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 900f, 0, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 430f, 900f, 0, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 430f, 1200f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 1200f, 0, 1, 0, 0, 0, 0, 0);
			}
			else if (iParam0 == 1)
			{
				func_618(2500f, 950f, 560f, 2, 0, 7, 1, 0, 0, 0);
				func_618(0f, 950f, 560f, 2, 1, 6, 1, 1, 0, 0);
				func_618(2500f, 950f, 560f, 2, 0, 7, 1, 1, 0, 0);
				func_618(2500f, 720f, 1360f, 1, 0, 2, 1, 1, 0, 0);
				func_618(-500f, 720f, 900f, 1, 1, 0, 1, 1, 0, 0);
				func_618(2500f, 720f, 1360f, 1, 0, 1, 1, 1, 0, 0);
				func_618(-500f, 700f, 900f, 1, 1, 17, 1, 0, 0, 0);
				func_618(2500f, 720f, 600f, 1, 0, 1, 1, 1, 0, 0);
				func_618(-500f, 720f, 700f, 1, 1, 2, 1, 1, 0, 0);
				func_618(-500f, 430f, 860f, 0, 1, 0, 1, 1, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 1, 1, 0, 0);
				func_618(2500f, 430f, 900f, 0, 0, 2, 1, 1, 0, 0);
				func_618(-500f, 430f, 900f, 0, 1, 3, 1, 1, 0, 0);
				func_618(2500f, 430f, 900f, 0, 0, 1, 1, 1, 0, 0);
				func_618(1398f, 446.875f, 357.875f, 3, 0, 1, 1, 1, 1, 0);
				func_618(1398f, 446.875f, 357.875f, 3, 0, 1, 1, 1, 1, 0);
			}
			else if (iParam0 == 2)
			{
				fVar0 = 142f;
				if (Local_138.f_86 == 4)
				{
					fVar0 = (fVar0 + (142f + (1605f - 1343f)));
				}
				func_618(((1256.625f + fVar0) + (1920f / 2f)), 446.875f, 357.875f, 3, 0, 1, 0, 0, 1, 0);
				func_618(((1256.625f + fVar0) + (1920f * 1.5f)), 446.875f, 357.875f, 3, 0, 1, 0, 0, 1, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 2, 0, 0, 0);
				func_618(-500f, 430f, 800f, 0, 1, 0, 2, 0, 0, 0);
				func_618(2500f, 430f, 900f, 0, 0, 2, 2, 0, 0, 0);
				func_618(2500f, 430f, 1300f, 0, 0, 1, 2, 0, 0, 0);
				func_618(2500f, 430f, 1300f, 0, 0, 3, 2, 0, 0, 0);
				func_618(2500f, 720f, 1100f, 1, 0, 2, 2, 0, 0, 0);
				func_618(-500f, 720f, 900f, 1, 1, 0, 2, 0, 0, 0);
				func_618(2500f, 720f, 1360f, 1, 0, 1, 2, 0, 0, 0);
				func_618(2500f, 720f, 600f, 1, 0, 1, 2, 0, 0, 0);
				func_618(-500f, 720f, 700f, 1, 1, 2, 2, 0, 0, 0);
				func_618(2500f, 720f, 900f, 1, 0, 3, 2, 0, 0, 0);
				func_618(-1500f, 720f, 1000f, 1, 1, 0, 2, 0, 0, 0);
			}
			else if (iParam0 == 3)
			{
				func_618(2500f, 950f, 560f, 2, 0, 7, 1, 0, 0, 0);
				func_618(0f, 950f, 560f, 2, 1, 6, 1, 1, 0, 0);
				func_618(2500f, 950f, 560f, 2, 0, 7, 1, 1, 0, 0);
				func_618(2500f, 720f, 1360f, 1, 0, 2, 1, 1, 0, 0);
				func_618(-500f, 720f, 900f, 1, 1, 0, 1, 1, 0, 0);
				func_618(2500f, 720f, 1360f, 1, 0, 1, 1, 1, 0, 0);
				func_618(-500f, 700f, 900f, 1, 1, 17, 1, 0, 0, 0);
				func_618(2500f, 720f, 600f, 1, 0, 1, 1, 1, 0, 0);
				func_618(-500f, 720f, 700f, 1, 1, 2, 1, 1, 0, 0);
				func_618(-500f, 430f, 860f, 0, 1, 0, 1, 1, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 1, 1, 0, 0);
				func_618(2500f, 430f, 900f, 0, 0, 2, 1, 1, 0, 0);
				func_618(-500f, 430f, 900f, 0, 1, 3, 1, 1, 0, 0);
				func_618(2500f, 430f, 900f, 0, 0, 1, 1, 1, 0, 0);
				func_618(1398f, 446.875f, 357.875f, 3, 0, 1, 1, 1, 1, 0);
				func_618(1398f, 446.875f, 357.875f, 3, 0, 1, 1, 1, 1, 0);
			}
			break;
		case 2:
			if (iParam0 == 0)
			{
				func_618(-500f, 950f, 560f, 2, 1, 15, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 12, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 15, 0, 0, 0, 0);
				func_618(2600f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 12, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 17, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 3, 0, 0, 0, 0);
				func_618(-1500f, 720f, 1920f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 0, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 17, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 0, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 17, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 1920f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 3, 0, 0, 0, 0);
				func_618(-500f, 430f, 1920f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 430f, 1920f, 0, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 1920f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 1920f, 0, 1, 2, 0, 0, 0, 0);
			}
			else if (iParam0 == 1)
			{
				func_618(-500f, 950f, 560f, 2, 1, 15, 1, 1, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 1, 1, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 15, 1, 1, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 1, 1, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 1, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 0, 1, 0, 0, 0);
				func_618(2000f, 720f, 0f, 1, 0, 1, 1, 0, 0, 0);
				func_618(2200f, 720f, 0f, 1, 0, 17, 1, 1, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 1, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 0, 1, 0, 0, 0);
				func_618(2000f, 720f, 0f, 1, 0, 1, 1, 0, 0, 0);
				func_618(2200f, 720f, 0f, 1, 0, 17, 1, 1, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 1, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 2, 1, 0, 0, 0);
				func_618(0f, 430f, 1920f, 0, 1, 3, 1, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 1, 1, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 1, 1, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 2, 1, 1, 0, 0);
				func_618(0f, 430f, 1920f, 0, 1, 3, 1, 1, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 1, 1, 0, 0);
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				func_618(-500f, 950f, 560f, 2, 1, 11, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 13, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 12, 0, 0, 0, 0);
				func_618(-500f, 950f, 560f, 2, 1, 11, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 13, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 12, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 17, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 2, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 3, 0, 0, 0, 0);
				func_618(-1500f, 720f, 1920f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 17, 0, 0, 0, 0);
				func_618(-500f, 760f, 1920f, 1, 1, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 17, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618((1380f + (1920f / 2f)), 430f, (1380f + (1920f / 2f)), 0, 0, 16, 0, 0, 0, 0);
				func_618((1380f + (1920f + (1920f / 2f))), 330f, (1380f + (1920f + (1920f / 2f))), 0, 0, 16, 0, 0, 0, 0);
				func_618(-500f, 430f, (1920f * 2f), 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 3, 0, 0, 0, 0);
				func_618(-500f, 430f, (1920f * 2f), 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 430f, (1920f * 2f), 0, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, (1920f * 2f), 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, (1920f * 2f), 0, 1, 2, 0, 0, 0, 0);
			}
			else if (iParam0 == 1)
			{
				func_618(-500f, 950f, 560f, 2, 1, 11, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 13, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 12, 0, 0, 0, 0);
				func_618(-500f, 950f, 560f, 2, 1, 11, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 13, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 17, 0, 0, 0, 0);
				func_618(-500f, 720f, 1920f, 1, 1, 2, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 3, 0, 0, 0, 0);
				func_618(-1500f, 720f, 1920f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 720f, 0f, 1, 0, 17, 0, 0, 0, 0);
				func_618(-500f, 430f, (1920f * 2f), 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 3, 0, 0, 0, 0);
				func_618(-500f, 430f, (1920f * 2f), 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 0f, 0, 0, 1, 0, 0, 0, 0);
			}
			break;
		case 4:
			if (iParam0 == 0)
			{
				func_618(-500f, 950f, 560f, 2, 1, 11, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 13, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 12, 0, 0, 0, 0);
				func_618(-500f, 950f, 560f, 2, 1, 11, 0, 0, 0, 0);
				func_618(-1500f, 950f, 560f, 2, 1, 13, 0, 0, 0, 0);
				func_618(2200f, 950f, 560f, 2, 0, 10, 0, 0, 0, 0);
				func_618((1174.75f + (1920f / 2f)), 454.625f, (1174.75f + (1920f / 2f)), 1, 0, 19, 0, 0, 0, 0);
				fVar0 = (1920f + (1920f / 2f));
				func_618((1206f + fVar0), 442.5f, (1206f + fVar0), 1, 0, 19, 0, 0, 0, 0);
				func_618(2500f, 720f, 1100f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 900f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 1300f, 1, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 720f, 650f, 1, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 720f, 700f, 1, 1, 2, 0, 0, 0, 0);
				func_618(-500f, 679.375f, 1000f, 1, 1, 17, 0, 0, 0, 0);
				func_618(2500f, 720f, 900f, 1, 0, 3, 0, 0, 0, 0);
				func_618(-1500f, 720f, 1000f, 1, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 720f, 900f, 1, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 720f, 1400f, 1, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 679.375f, 800f, 1, 0, 17, 0, 0, 0, 0);
				func_618(2500f, 720f, 450f, 1, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 720f, 900f, 1, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 720f, 900f, 1, 0, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 800f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1400f, 0, 0, 2, 0, 0, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 600f, 0, 0, 3, 0, 0, 0, 0);
				func_618(-500f, 430f, 860f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 0, 0, 0, 0);
				func_618(2500f, 430f, 900f, 0, 0, 2, 0, 0, 0, 0);
				func_618(-500f, 430f, 900f, 0, 1, 3, 0, 0, 0, 0);
				func_618(2500f, 430f, 500f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 700f, 0, 1, 0, 0, 0, 0, 0);
				func_618(2500f, 430f, 1500f, 0, 0, 1, 0, 0, 0, 0);
				func_618(-500f, 430f, 400f, 0, 1, 2, 0, 0, 0, 0);
			}
			else if (iParam0 == 1)
			{
				func_618(0f, 950f, 560f, 2, 1, 11, 0, 1, 0, 0);
				func_618(2000f, 950f, 560f, 2, 0, 10, 0, 1, 0, 0);
				func_618(0f, 950f, 560f, 2, 1, 13, 0, 1, 0, 0);
				func_618(2000f, 950f, 560f, 2, 0, 12, 0, 1, 0, 0);
				func_618(1920f, 720f, 1100f, 1, 0, 2, 0, 1, 0, 0);
				func_618(-2000f, 720f, 900f, 1, 1, 0, 0, 1, 0, 0);
				func_618(1920f, 720f, 1300f, 1, 0, 1, 0, 1, 0, 0);
				func_618(1920f, 720f, 650f, 1, 0, 1, 0, 1, 0, 0);
				func_618(-200f, 720f, 700f, 1, 1, 2, 0, 1, 0, 0);
				func_618(1920f, 720f, 900f, 1, 0, 3, 0, 1, 0, 0);
				func_618(-200f, 720f, 1000f, 1, 1, 0, 0, 1, 0, 0);
				func_618(1920f, 720f, 900f, 1, 0, 2, 0, 1, 0, 0);
				func_618(1920f, 430f, 1500f, 0, 0, 1, 0, 1, 0, 0);
				func_618(1920f, 430f, 900f, 0, 0, 2, 0, 1, 0, 0);
				func_618(-500f, 430f, 900f, 0, 1, 3, 0, 1, 0, 0);
				func_618(1920f, 430f, 500f, 0, 0, 1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_618(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x66D08
{
	int iVar0;
	iVar0 = func_620();
	if (iVar0 > -1)
	{
		Local_138.f_1825[iVar0 /*33*/].f_10 = 0;
		Local_138.f_1825[iVar0 /*33*/].f_27 = fParam0;
		Local_138.f_1825[iVar0 /*33*/].f_27.f_1 = fParam1;
		Local_138.f_1825[iVar0 /*33*/].f_29 = { Local_138.f_1825[iVar0 /*33*/].f_27 };
		Local_138.f_1825[iVar0 /*33*/].f_26 = fParam2;
		Local_138.f_1825[iVar0 /*33*/].f_9 = iParam5;
		Local_138.f_1825[iVar0 /*33*/].f_21 = iParam3;
		Local_138.f_1825[iVar0 /*33*/] = iParam4;
		Local_138.f_1825[iVar0 /*33*/].f_1 = iParam8;
		Local_138.f_1825[iVar0 /*33*/].f_11 = 0;
		Local_138.f_1825[iVar0 /*33*/].f_2 = 0;
		Local_138.f_1825[iVar0 /*33*/].f_3 = 0;
		Local_138.f_1825[iVar0 /*33*/].f_22 = iParam6;
		Local_138.f_1825[iVar0 /*33*/].f_4 = iParam7;
		Local_138.f_1825[iVar0 /*33*/].f_24 = iParam9;
		Local_138.f_1825[iVar0 /*33*/].f_23 = 0;
		Local_138.f_1825[iVar0 /*33*/].f_16 = 0;
		Local_138.f_1825[iVar0 /*33*/].f_18 = 0;
		Local_138.f_1825[iVar0 /*33*/].f_5 = 0;
		if (Local_138.f_1825[iVar0 /*33*/].f_21 != 2)
		{
			switch (Local_138.f_1825[iVar0 /*33*/].f_9)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					Local_138.f_1825[iVar0 /*33*/].f_31 = 116f;
					Local_138.f_1825[iVar0 /*33*/].f_31.f_1 = 196f;
					break;
				case 16:
					Local_138.f_1825[iVar0 /*33*/].f_31 = 536f;
					Local_138.f_1825[iVar0 /*33*/].f_31.f_1 = 404f;
					break;
				case 17:
					Local_138.f_1825[iVar0 /*33*/].f_31 = 124f;
					Local_138.f_1825[iVar0 /*33*/].f_31.f_1 = 208f;
					break;
				case 18:
					Local_138.f_1825[iVar0 /*33*/].f_31 = 216f;
					Local_138.f_1825[iVar0 /*33*/].f_31.f_1 = 332f;
					break;
				case 19:
					Local_138.f_1825[iVar0 /*33*/].f_31 = 200f;
					Local_138.f_1825[iVar0 /*33*/].f_31.f_1 = 248f;
					break;
			}
		}
		else
		{
			switch (Local_138.f_1825[iVar0 /*33*/].f_9)
			{
				case 15:
					Local_138.f_1825[iVar0 /*33*/].f_31 = 660f;
					Local_138.f_1825[iVar0 /*33*/].f_31.f_1 = 500f;
					break;
				default:
					Local_138.f_1825[iVar0 /*33*/].f_31 = 376f;
					Local_138.f_1825[iVar0 /*33*/].f_31.f_1 = 536f;
					break;
				}
		}
		Local_138.f_1825[iVar0 /*33*/].f_17 = func_619(Local_138.f_1825[iVar0 /*33*/].f_9);
		Local_138.f_23++;
	}
}

int func_619(int iParam0)//Position - 0x66FAD
{
	switch (iParam0)
	{
		case 16:
			return 30;
			break;
	}
	return 10;
}

int func_620()//Position - 0x66FCC
{
	int iVar0;
	int iVar1;
	iVar0 = func_42();
	iVar1 = 0;
	while (iVar1 < 40)
	{
		if (iVar0 == 0)
		{
			if (Local_138.f_1825[iVar1 /*33*/].f_31 == 0f)
			{
				return iVar1;
			}
		}
		else if (Local_138.f_1825[iVar1 /*33*/].f_22 < iVar0)
		{
			if (Local_138.f_1825[iVar1 /*33*/].f_10 == 4)
			{
				func_550(iVar1);
				return iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_621(int iParam0, int iParam1, int iParam2)//Position - 0x67039
{
	struct<2> Var0;
	float fVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	iVar3 = -1;
	switch (Local_138.f_139)
	{
		case 1:
			func_624(iParam0, iParam2, &Var0, &fVar1);
			iVar4 = 0;
			while (iVar4 < 50)
			{
				if (iVar3 == -1)
				{
					if (Local_138.f_224[iVar4 /*23*/].f_22 == iParam2)
					{
						if (func_616(Local_138.f_224[iVar4 /*23*/].f_14))
						{
							iVar3 = iVar4;
						}
					}
				}
				iVar4++;
			}
			if (iVar3 != -1)
			{
				Var2 = { Local_138.f_224[iVar3 /*23*/].f_15 };
				Var0.f_0 = (Var2.f_0 + fVar1);
				func_622(Var0, iParam0, iParam1, 0, 1065353216, 0);
			}
			break;
		case 2:
			func_624(iParam0, iParam2, &Var0, &fVar1);
			iVar4 = 0;
			while (iVar4 < 50)
			{
				if (iVar3 == -1)
				{
					if (Local_138.f_224[iVar4 /*23*/].f_22 == iParam2)
					{
						if (Local_138.f_90[iParam2] == iVar4)
						{
							iVar3 = iVar4;
						}
					}
				}
				iVar4++;
			}
			if (iVar3 != -1)
			{
				Var2 = { Local_138.f_224[iVar3 /*23*/].f_15 };
				Var0.f_0 = (Var2.f_0 + fVar1);
				func_622(Var0, iParam0, iParam1, 0, 1065353216, 0);
			}
			break;
		case 3:
			func_624(iParam0, iParam2, &Var0, &fVar1);
			iVar4 = 0;
			while (iVar4 < 50)
			{
				if (iVar3 == -1)
				{
					if (Local_138.f_224[iVar4 /*23*/].f_22 == iParam2)
					{
						if (Local_138.f_90[iParam2] == iVar4)
						{
							iVar3 = iVar4;
						}
					}
				}
				iVar4++;
			}
			if (iVar3 != -1)
			{
				Var2 = { Local_138.f_224[iVar3 /*23*/].f_15 };
				Var0.f_0 = (Var2.f_0 + fVar1);
				func_622(Var0, iParam0, iParam1, 0, 1065353216, 0);
			}
			break;
		case 4:
			func_624(iParam0, iParam2, &Var0, &fVar1);
			iVar4 = 0;
			while (iVar4 < 50)
			{
				if (iVar3 == -1)
				{
					if (Local_138.f_224[iVar4 /*23*/].f_22 == iParam2)
					{
						if (Local_138.f_90[iParam2] == iVar4)
						{
							iVar3 = iVar4;
						}
					}
				}
				iVar4++;
			}
			if (iVar3 != -1)
			{
				Var2 = { Local_138.f_224[iVar3 /*23*/].f_15 };
				Var0.f_0 = (Var2.f_0 + fVar1);
				func_622(Var0, iParam0, iParam1, 0, 1065353216, 0);
			}
			break;
	}
}

void func_622(struct<2> Param0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5)//Position - 0x67249
{
	int iVar0;
	iVar0 = func_623();
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam3 == 0 && iParam5 == 0)
	{
		Local_138.f_3318[iVar0 /*12*/].f_1 = 1;
	}
	Local_138.f_3318[iVar0 /*12*/].f_7 = iParam5;
	Local_138.f_3318[iVar0 /*12*/].f_2 = 0;
	Local_138.f_3318[iVar0 /*12*/].f_8 = { Param0 };
	Local_138.f_3318[iVar0 /*12*/].f_3 = iParam1;
	Local_138.f_3318[iVar0 /*12*/].f_4 = iParam2;
	Local_138.f_3318[iVar0 /*12*/].f_5 = iParam3;
	Local_138.f_3318[iVar0 /*12*/].f_6 = 0;
	switch (Local_138.f_3318[iVar0 /*12*/].f_3)
	{
		case 6:
			Local_138.f_3318[iVar0 /*12*/].f_10 = { __LIB_5__::func_403(64f, 64f) };
			break;
		case 5:
			Local_138.f_3318[iVar0 /*12*/].f_10 = { __LIB_5__::func_403(96f, 96f) };
			break;
		case 0:
			Local_138.f_3318[iVar0 /*12*/].f_10 = { __LIB_5__::func_403(44f, 92f) };
			break;
		case 8:
			Local_138.f_3318[iVar0 /*12*/].f_10 = { __LIB_5__::func_403(96f, 96f) };
			break;
		case 1:
			Local_138.f_3318[iVar0 /*12*/].f_10 = { __LIB_5__::func_403(44f, 92f) };
			break;
		case 2:
			Local_138.f_3318[iVar0 /*12*/].f_10 = { __LIB_5__::func_403(84f, 96f) };
			break;
		case 7:
			Local_138.f_3318[iVar0 /*12*/].f_10 = { __LIB_5__::func_403(96f, 96f) };
			break;
	}
	Local_138.f_3318[iVar0 /*12*/].f_10 = (Local_138.f_3318[iVar0 /*12*/].f_10 * fParam4);
	Local_138.f_3318[iVar0 /*12*/].f_10.f_1 = (Local_138.f_3318[iVar0 /*12*/].f_10.f_1 * fParam4);
	Local_138.f_27++;
}

int func_623()//Position - 0x67425
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if ((Local_138.f_3318[iVar0 /*12*/].f_1 == 0 && Local_138.f_3318[iVar0 /*12*/].f_5 == 0) && Local_138.f_3318[iVar0 /*12*/].f_7 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_624(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x6747A
{
	switch (func_542())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(1063.875f, 822.5f) };
							*fParam3 = { __LIB_5__::func_403(-136.125f, 382.5f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(789.375f, 822.5f) };
							*fParam3 = { __LIB_5__::func_403(-410.625f, 382.5f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(993.75f, 822.5f) };
							*fParam3 = { __LIB_5__::func_403(-206.25f, 382.5f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(1299.375f, 822.5f) };
							*fParam3 = { __LIB_5__::func_403(99.375f, 382.5f) };
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(872.125f, 817.125f) };
							*fParam3 = { __LIB_5__::func_403(-327.875f, 327.875f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1418.625f, 870.625f) };
							*fParam3 = { __LIB_5__::func_403(218.625f, 870.625f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(776f, 817.125f) };
							*fParam3 = { __LIB_5__::func_403(-424f, 327.875f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(776f, 817.125f) };
							*fParam3 = { __LIB_5__::func_403(-424f, 327.875f) };
							break;
					}
					break;
				case 8:
				case 7:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(872.125f, 817.125f) };
							*fParam3 = { __LIB_5__::func_403(-327.875f, 327.875f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1418.625f, 870.625f) };
							*fParam3 = { __LIB_5__::func_403(218.625f, 870.625f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(776f, 817.125f) };
							*fParam3 = { __LIB_5__::func_403(-424f, 327.875f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(776f, 817.125f) };
							*fParam3 = { __LIB_5__::func_403(-424f, 327.875f) };
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(1218.625f, 832.75f) };
							*fParam3 = { __LIB_5__::func_403(-185.5f, -37.25f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1111.75f, 832.75f) };
							*fParam3 = { __LIB_5__::func_403(-464.375f, -37.5f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(1001.375f, 871.625f) };
							*fParam3 = { __LIB_5__::func_403(-470.875f, 397f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(717.875f, 577.125f) };
							*fParam3 = { __LIB_5__::func_403(-697.875f, 14.75f) };
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(979.625f, 510.5f) };
							*fParam3 = { __LIB_5__::func_403(-424.5f, -359.5f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1026.25f, 510.5f) };
							*fParam3 = { __LIB_5__::func_403(-549.875f, -359.75f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(1083.25f, 588.75f) };
							*fParam3 = { __LIB_5__::func_403(-389f, 114.125f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(1156.875f, 872.75f) };
							*fParam3 = { __LIB_5__::func_403(-258.875f, 310.375f) };
							break;
					}
					break;
				case 5:
				case 8:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(704.625f, 842.375f) };
							*fParam3 = { __LIB_5__::func_403(-699.5f, -27.625f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(648.625f, 870.625f) };
							*fParam3 = { __LIB_5__::func_403(-927.5f, 0.375f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(1316.5f, 870.625f) };
							*fParam3 = { __LIB_5__::func_403(-155.75f, 396f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(762f, 908.5f) };
							*fParam3 = { __LIB_5__::func_403(-653.75f, 346.125f) };
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(835.375f, 558.625f) };
							*fParam3 = { __LIB_5__::func_403(-584.25f, -187f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1222.5f, 825.375f) };
							*fParam3 = { __LIB_5__::func_403(-172.75f, -8.625f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(1441.25f, 886.25f) };
							*fParam3 = { __LIB_5__::func_403(67.25f, 347.625f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(1310.75f, 929.125f) };
							*fParam3 = { __LIB_5__::func_403(-44.25f, 392.75f) };
							break;
					}
					break;
				case 5:
				case 6:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(778.75f, 811.25f) };
							*fParam3 = { __LIB_5__::func_403(-641.25f, 65.625f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(641f, 799.25f) };
							*fParam3 = { __LIB_5__::func_403(-754.25f, -34.75f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(641f, 819.875f) };
							*fParam3 = { __LIB_5__::func_403(-733f, 281.25f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(589f, 825.75f) };
							*fParam3 = { __LIB_5__::func_403(-766f, 289.375f) };
							break;
					}
					break;
				case 8:
				case 7:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(1220.75f, 560.75f) };
							*fParam3 = { __LIB_5__::func_403(-199.25f, -184.875f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1479.375f, 560.75f) };
							*fParam3 = { __LIB_5__::func_403(84.125f, -273.25f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(1169.25f, 560.75f) };
							*fParam3 = { __LIB_5__::func_403(-204.75f, 22.125f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(679.5f, 560.75f) };
							*fParam3 = { __LIB_5__::func_403(-675.5f, 536.375f) };
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 8:
				case 7:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(822.875f, 874.125f) };
							*fParam3 = { __LIB_5__::func_403(-877.125f, 24.125f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1001.125f, 575.25f) };
							*fParam3 = { __LIB_5__::func_403(-504.375f, -281.75f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(1409.875f, 575.25f) };
							*fParam3 = { __LIB_5__::func_403(-111.75f, -270.375f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(1082.875f, 552.625f) };
							*fParam3 = { __LIB_5__::func_403(-452.375f, -318.75f) };
							break;
					}
					break;
				case 0:
				case 1:
				case 2:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(1416.875f, 572f) };
							*fParam3 = { __LIB_5__::func_403(-283.125f, -278f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1429.125f, 842.875f) };
							*fParam3 = { __LIB_5__::func_403(-76.375f, -14.125f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(984.375f, 868.25f) };
							*fParam3 = { __LIB_5__::func_403(-537.25f, 22.625f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(858.5f, 868.25f) };
							*fParam3 = { __LIB_5__::func_403(-676.75f, -3.125f) };
							break;
					}
					break;
				case 5:
				case 6:
					switch (iParam1)
					{
						case 1:
							*uParam2 = { __LIB_5__::func_403(525.75f, 591.875f) };
							*fParam3 = { __LIB_5__::func_403(-1174.25f, -258.125f) };
							break;
						case 2:
							*uParam2 = { __LIB_5__::func_403(1251f, 578.875f) };
							*fParam3 = { __LIB_5__::func_403(-254.5f, -278.125f) };
							break;
						case 3:
							*uParam2 = { __LIB_5__::func_403(564.875f, 578.875f) };
							*fParam3 = { __LIB_5__::func_403(-956.75f, -266.75f) };
							break;
						case 4:
							*uParam2 = { __LIB_5__::func_403(1405.375f, 549.375f) };
							*fParam3 = { __LIB_5__::func_403(-129.875f, -322f) };
							break;
					}
					break;
			}
			break;
	}
}

void func_625()//Position - 0x67E4F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (Local_138.f_3318[iVar0 /*12*/].f_1)
		{
			if (!__LIB_37__::func_121(Local_138.f_3318[iVar0 /*12*/].f_8, 0))
			{
				func_544(iVar0);
			}
		}
		iVar0++;
	}
}

void func_627()//Position - 0x67EC5
{
	Local_138.f_42[Local_138.f_139]++;
}

void func_628(int iParam0)//Position - 0x67EE3
{
	int iVar0;
	iVar0 = func_629(Local_138.f_139);
	if (iParam0 > iVar0)
	{
		iParam0 = 1;
	}
	Local_138.f_85 = iParam0;
}

int func_629(int iParam0)//Position - 0x67F05
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 4;
			break;
	}
	return 0;
}

float func_630()//Position - 0x67F34
{
	switch (func_542())
	{
		case 1:
			return ((1920f * 2f) + (1605f - 1343f));
			break;
		case 2:
			return ((1920f * 2f) + (1605f - 1415.75f));
			break;
		case 3:
			return ((1920f * 2f) + (1605f - 1420f));
			break;
		case 4:
			return ((1920f * 2f) + (1605f - 1535.25f));
			break;
	}
	return 0f;
}

void func_631(struct<2> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x67FC2
{
	if (Local_138.f_26 >= 50)
	{
		return;
	}
	if (iParam6 == 0 && !bParam7)
	{
		Local_138.f_224[Local_138.f_26 /*23*/] = 1;
	}
	Local_138.f_224[Local_138.f_26 /*23*/].f_15 = { Param0 };
	Local_138.f_224[Local_138.f_26 /*23*/].f_17 = { Param0 };
	Local_138.f_224[Local_138.f_26 /*23*/].f_14 = iParam1;
	Local_138.f_224[Local_138.f_26 /*23*/].f_7 = iParam2;
	Local_138.f_224[Local_138.f_26 /*23*/].f_22 = iParam4;
	Local_138.f_224[Local_138.f_26 /*23*/].f_21 = iParam3;
	Local_138.f_224[Local_138.f_26 /*23*/].f_4 = iParam6;
	Local_138.f_224[Local_138.f_26 /*23*/].f_6 = bParam7;
	if (bParam5)
	{
		if (Local_138.f_90[iParam4] == -1)
		{
			Local_138.f_90[iParam4] = Local_138.f_26;
		}
	}
	if (func_632(iParam1))
	{
		Local_138.f_224[Local_138.f_26 /*23*/].f_3 = 1;
	}
	switch (Local_138.f_224[Local_138.f_26 /*23*/].f_14)
	{
		case 0:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 216f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 332f;
			break;
		case 1:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 168f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 288f;
			break;
		case 2:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 168f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 408f;
			break;
		case 3:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 120f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 540f;
			break;
		case 4:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 280f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 204f;
			break;
		case 5:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 312f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 184f;
			break;
		case 6:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 564f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 452f;
			break;
		case 7:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 564f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 452f;
			break;
		case 8:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 564f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 452f;
			break;
		case 9:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 564f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 452f;
			break;
		case 10:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 412f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 400f;
			break;
		case 11:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 412f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 400f;
			break;
		case 12:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 412f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 400f;
			break;
		case 13:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 412f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 400f;
			break;
		case 14:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 376f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 196f;
			break;
		case 15:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 92f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 24f;
			break;
		case 16:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 148f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 128f;
			break;
		case 17:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 176f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 236f;
			break;
		case 18:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 212f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 236f;
			break;
		case 19:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 148f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 236f;
			break;
		case 20:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 112f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 236f;
			break;
		case 21:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 184f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 236f;
			break;
		case 22:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 176f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 212f;
			break;
		case 23:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 472f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 784f;
			break;
		case 24:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 400f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 656f;
			break;
		case 25:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 288f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 204f;
			break;
		case 26:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 120f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 80f;
			break;
		case 27:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 212f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 140f;
			break;
		case 28:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 164f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 92f;
			break;
		case 29:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 288f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 160f;
			break;
		case 30:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 300f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 312f;
			break;
		case 31:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 300f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 432f;
			break;
		case 32:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 236f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 184f;
			break;
		case 33:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 630f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 720f;
			break;
		case 34:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 208f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 440f;
			break;
		case 35:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 212f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 344f;
			break;
		case 36:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 128f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 172f;
			break;
		case 37:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 126f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 172f;
			break;
		case 38:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 132f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 172f;
			break;
		case 39:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 200f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 248f;
			break;
		case 40:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 360f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 376f;
			break;
		case 41:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 192f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 124f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_2 = 1;
			break;
		case 42:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 140f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 176f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_2 = 1;
			break;
		case 43:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 176f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 140f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_2 = 1;
			break;
		case 44:
			Local_138.f_224[Local_138.f_26 /*23*/].f_19 = 216f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_20 = 332f;
			Local_138.f_224[Local_138.f_26 /*23*/].f_2 = 1;
			break;
	}
	Local_138.f_26++;
}

int func_632(int iParam0)//Position - 0x6887D
{
	switch (iParam0)
	{
		case 5:
		case 0:
		case 39:
			return 1;
			break;
	}
	return 0;
}

int func_633(int iParam0)//Position - 0x688A6
{
	int iVar0;
	iVar0 = Local_138.f_224[iParam0 /*23*/].f_14;
	switch (iVar0)
	{
		case 0:
		case 39:
			if (Local_138.f_224[iParam0 /*23*/].f_8 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_634()//Position - 0x688E3
{
	return func_635();
}

float func_635()//Position - 0x688EF
{
	return (4f * func_636());
}

float func_636()//Position - 0x688FD
{
	return Local_138.f_3663;
}

float func_637()//Position - 0x6890A
{
	return (12f * func_636());
}

bool func_638()//Position - 0x6891C
{
	return (func_639(0) && !func_639(1));
}

bool func_639(int iParam0)//Position - 0x68934
{
	return func_558(Local_138.f_139, iParam0);
}

int func_640()//Position - 0x68946
{
	int iVar0;
	iVar0 = 0;
	switch (Local_138.f_139)
	{
		case 0:
			if (!func_639(1))
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (!func_639(1))
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (!func_639(1))
			{
				iVar0 = 1;
			}
			break;
		case 3:
			if (!func_639(1))
			{
				iVar0 = 1;
			}
			break;
		case 4:
			if (!func_639(1))
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

float func_641(int iParam0, int iParam1)//Position - 0x689C5
{
	float fVar0;
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 39)
			{
				fVar0 = 1.1f;
			}
			else
			{
				fVar0 = 0.75f;
			}
			break;
		case 1:
			if (iParam0 == 0 || iParam0 == 39)
			{
				fVar0 = 1.1f;
			}
			break;
		case 2:
			fVar0 = 2.5f;
			break;
		case 3:
		case 4:
			fVar0 = 0.75f;
			break;
	}
	return fVar0;
}

void func_642()//Position - 0x68A42
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		__LIB_36__::func_716(&(Local_138.f_3754), "LEVEL_01_DESERT_BACKGROUND_TILE", __LIB_5__::func_403(Local_138.f_1424[iVar0 /*7*/].f_1, (1080f / 2f)), __LIB_5__::func_403(276f, 930f), 0f, Local_138.f_111);
		if (Local_138.f_1424[iVar0 /*7*/].f_1 < (276f / 2f))
		{
			iVar1 = (iVar0 - 1);
			if (iVar1 < 0)
			{
				iVar1 = 6;
			}
			Local_138.f_1424[iVar0 /*7*/].f_1 = (Local_138.f_1424[iVar1 /*7*/].f_1 + 276f);
		}
		Local_138.f_1424[iVar0 /*7*/].f_1 = (Local_138.f_1424[iVar0 /*7*/].f_1 - func_647());
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (Local_138.f_1474[iVar0 /*7*/] && Local_138.f_1474[iVar0 /*7*/].f_6 == 0)
		{
			__LIB_36__::func_716(&(Local_138.f_3754), Local_138.f_1474[iVar0 /*7*/].f_5, Local_138.f_1474[iVar0 /*7*/].f_1, Local_138.f_1474[iVar0 /*7*/].f_3, 0f, Local_138.f_111);
			if (func_646(Local_138.f_1474[iVar0 /*7*/].f_5))
			{
				if ((Local_138.f_1474[iVar0 /*7*/].f_1 + (1232f / 2f)) <= 0f)
				{
					Local_138.f_1474[iVar0 /*7*/].f_1 = ((1232f + 1232f) + (1232f / 2f));
				}
				Local_138.f_1474[iVar0 /*7*/].f_1 = (Local_138.f_1474[iVar0 /*7*/].f_1 - func_645());
			}
			else
			{
				if (Local_138.f_1474[iVar0 /*7*/].f_1 < (276f / 2f))
				{
					Local_138.f_1474[iVar0 /*7*/].f_1 = 1920f;
				}
				Local_138.f_1474[iVar0 /*7*/].f_1 = (Local_138.f_1474[iVar0 /*7*/].f_1 - func_644());
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (Local_138.f_1474[iVar0 /*7*/] && Local_138.f_1474[iVar0 /*7*/].f_6 == 1)
		{
			__LIB_36__::func_716(&(Local_138.f_3754), Local_138.f_1474[iVar0 /*7*/].f_5, Local_138.f_1474[iVar0 /*7*/].f_1, Local_138.f_1474[iVar0 /*7*/].f_3, 0f, Local_138.f_111);
			if (Local_138.f_1474[iVar0 /*7*/].f_1 < (276f / 2f))
			{
				Local_138.f_1474[iVar0 /*7*/].f_1 = 1920f;
			}
			Local_138.f_1474[iVar0 /*7*/].f_1 = (Local_138.f_1474[iVar0 /*7*/].f_1 - func_643());
		}
		iVar0++;
	}
}

float func_643()//Position - 0x68CA4
{
	return (3f * func_636());
}

float func_644()//Position - 0x68CB2
{
	return (2f * func_636());
}

float func_645()//Position - 0x68CC0
{
	return (1f * func_636());
}

bool func_646(char* sParam0)//Position - 0x68CCE
{
	return ((((((((((((((MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_01_DESERT_CLOUDS_TILE") || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_02_TOWN_BACKGROUND_CLOUDS_01")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_02_TOWN_BACKGROUND_CLOUDS_02")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_02_TOWN_BACKGROUND_CLOUDS_03")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_02_TOWN_BACKGROUND_CLOUDS_04")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_02_TOWN_BACKGROUND_CLOUDS_05")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_02_TOWN_BACKGROUND_CLOUDS_06")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_02_TOWN_BACKGROUND_CLOUDS_07")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_03_FOREST_BACKGROUND_CLOUDS_01")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_03_FOREST_BACKGROUND_CLOUDS_02")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_03_FOREST_BACKGROUND_CLOUDS_03")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_03_FOREST_BACKGROUND_CLOUDS_04")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_03_FOREST_BACKGROUND_CLOUDS_05")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_03_FOREST_BACKGROUND_CLOUDS_06")) || MISC::ARE_STRINGS_EQUAL(sParam0, "LEVEL_03_FOREST_BACKGROUND_CLOUDS_07"));
}

float func_647()//Position - 0x68DC0
{
	return func_635();
}

void func_648()//Position - 0x68DCC
{
	var uVar0;
	bool bVar1;
	func_671();
	if (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_15 != func_670())
	{
		Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_15 = func_670();
	}
	uVar0 = Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_15;
	bVar1 = BitTest(Local_146.f_4, NETWORK::PARTICIPANT_ID_TO_INT());
	func_660(&(Local_138.f_3664), &(Local_146.f_30), &(Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_14), &uVar0, bVar1);
	func_566();
	if (!Local_138.f_3664.f_33)
	{
		func_649();
		func_539();
		func_537(10);
	}
}

void func_649()//Position - 0x68E4C
{
	struct<11> Var0;
	int iVar1;
	Var0.f_0 = -338737058;
	Var0.f_1 = Local_146.f_3;
	if (BitTest(Local_146.f_2, 0))
	{
		Var0.f_2 = 2;
	}
	else
	{
		Var0.f_2 = 1;
	}
	if (__LIB_42__::func_419())
	{
		Var0.f_3 = 5;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_659(iVar1) == 0)
			{
				Var0.f_3 = (iVar1 - 1);
				if (Var0.f_3 < 1)
				{
					Var0.f_3 = 1;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	Var0.f_5 = (__LIB_42__::func_421() + __LIB_42__::func_420());
	Var0.f_6 = (MISC::GET_GAME_TIMER() - Local_138.f_31);
	Var0.f_7 = func_654();
	Var0.f_9 = Local_138.f_84;
	Var0.f_4 = func_652();
	if (Local_138.f_3539)
	{
		Var0.f_8 = __LIB_5__::func_145(0);
	}
	else
	{
		Var0.f_8 = 0;
	}
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		if (__LIB_0__::func_883(PLAYER::PLAYER_ID()))
		{
			Var0.f_10 = 589001948;
		}
		else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
		{
			Var0.f_10 = 2003554330;
		}
		else
		{
			Var0.f_10 = 0;
		}
	}
	else
	{
		Var0.f_10 = 0;
	}
	STATS::PLAYSTATS_ARCADE_CABINET(&Var0);
}

int func_652()//Position - 0x69111
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 + func_653(iVar1));
		iVar1++;
	}
	return iVar0;
}

int func_653(int iParam0)//Position - 0x69138
{
	return Local_138.f_78[iParam0];
}

int func_654()//Position - 0x69148
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = (iVar1 + func_659(iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_659(int iParam0)//Position - 0x691DD
{
	return Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iParam0];
}

void func_660(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x691F4
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[0];
	int iVar6;
	if (!uParam0->f_33)
	{
		if ((uParam1[9 /*3*/])->f_1 < *uParam3)
		{
			if (*uParam3 != uParam0->f_41)
			{
				uParam0->f_33 = 1;
				uParam0->f_41 = *uParam3;
				if (!BitTest(Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_1), 0);
				}
			}
			else
			{
				return;
			}
		}
		else
		{
			return;
		}
	}
	if (bParam4)
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(uParam0->f_39))
		{
			if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(uParam0->f_39))
			{
				return;
			}
			if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(uParam0->f_39))
			{
				func_669(*uParam2);
				uParam0->f_33 = 0;
				if (BitTest(Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_1, 0))
				{
					MISC::CLEAR_BIT(&(Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_1), 0);
				}
				uParam0->f_37 = 0;
				uParam0->f_38 = 0;
				uParam0->f_39 = 0;
				*uParam2 = 0;
				*uParam3 = 0;
			}
			else
			{
				uParam0->f_37 = 0;
				uParam0->f_38 = 0;
				uParam0->f_39 = 0;
			}
			return;
		}
		iVar1 = 227;
		iVar2 = 226;
		iVar3 = 201;
		iVar4 = 202;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			iVar3 = 237;
			iVar4 = 238;
			iVar1 = 188;
			iVar2 = 187;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar3))
		{
			uParam0->f_37++;
			if (uParam0->f_37 >= 3)
			{
				func_665(func_668());
				uParam0->f_37 = 3;
				__LIB_16__::func_774(*uParam2, &iVar0);
				StringCopy(&cVar5, __LIB_15__::func_814(iVar0[0]), 4);
				StringConCat(&cVar5, __LIB_15__::func_814(iVar0[1]), 4);
				StringConCat(&cVar5, __LIB_15__::func_814(iVar0[2]), 4);
				if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&cVar5, &(uParam0->f_39)))
				{
				}
			}
			else
			{
				func_665(__LIB_8__::func_545());
			}
			return;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar4))
		{
			if (uParam0->f_37 > 0)
			{
				func_665(__LIB_8__::func_545());
				uParam0->f_37 = (uParam0->f_37 - 1);
			}
			return;
		}
		iVar6 = 0;
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar1))
		{
			func_665(__LIB_31__::func_101());
			iVar6 = 1;
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
		{
			func_665(__LIB_31__::func_101());
			iVar6 = -1;
		}
		if (iVar6 == 0)
		{
			return;
		}
		__LIB_16__::func_774(*uParam2, &iVar0);
		iVar0[uParam0->f_37] = (iVar0[uParam0->f_37] + iVar6);
		if (iVar0[uParam0->f_37] >= 36)
		{
			iVar0[uParam0->f_37] = 0;
		}
		else if (iVar0[uParam0->f_37] < 0)
		{
			iVar0[uParam0->f_37] = 35;
		}
		*uParam2 = __LIB_16__::func_773(&iVar0);
	}
}

void func_665(int iParam0)//Position - 0x694A1
{
	if (Local_148.f_19[iParam0] == -1)
	{
		Local_148.f_19[iParam0] = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_148.f_19[iParam0], __LIB_36__::func_701(iParam0), func_666(iParam0), false);
}

char* func_666(int iParam0)//Position - 0x694DD
{
	switch (Local_148.f_0)
	{
		case 2:
			return "DLC_H3_Arc_Mac_Degen_DotF_Sounds";
		case 3:
			return "DLC_H3_Arc_Mac_Degen_MP_Sounds";
		case 4:
			return "DLC_H3_Arc_Mac_Degen_Pen_Sounds";
		case 6:
			return "DLC_H3_ArcMac_BR2_Frontend_Sounds";
		case 7:
			switch (iParam0)
			{
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
				case 35:
				case 441:
					return "DLC_H3_ArcMac_Wiz_Boss_Amazon_Sounds";
				case 36:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
					return "DLC_H3_ArcMac_Wiz_Boss_Dark_Knight_Sounds";
				case 46:
				case 47:
				case 48:
				case 49:
				case 460:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return "DLC_H3_ArcMac_Wiz_Boss_Spider_Sounds";
				case 56:
				case 57:
				case 58:
				case 59:
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
					return "DLC_H3_ArcMac_Wiz_Boss_Wizard_Sounds";
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
					return "DLC_H3_ArcMac_Wiz_Boss_Wizard_Vocals_Sounds";
				case 70:
				case 71:
				case 72:
				case 73:
				case 74:
				case 75:
					return "DLC_H3_ArcMac_Wiz_Enemy_Bat_Sounds";
				case 76:
					return "DLC_H3_ArcMac_Wiz_Enemy_Boulder_Sounds";
				case 77:
				case 78:
				case 79:
				case 80:
				case 81:
				case 82:
					return "DLC_H3_ArcMac_Wiz_Enemy_Fairy_Sounds";
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
					return "DLC_H3_ArcMac_Wiz_Enemy_Goblin_Crossbow_Sounds";
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
					return "DLC_H3_ArcMac_Wiz_Enemy_Goblin_Spear_Sounds";
				case 93:
				case 94:
				case 95:
				case 96:
				case 97:
					return "DLC_H3_ArcMac_Wiz_Enemy_Goblin_Sword_Sounds";
				case 98:
				case 99:
				case 100:
				case 101:
				case 102:
				case 103:
				case 104:
					return "DLC_H3_ArcMac_Wiz_Enemy_Leprechaun_Sounds";
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
					return "DLC_H3_ArcMac_Wiz_Enemy_Ogre_Axe_Sounds";
				case 110:
				case 111:
				case 112:
				case 113:
				case 114:
					return "DLC_H3_ArcMac_Wiz_Enemy_Ogre_Sounds";
				case 115:
				case 116:
				case 117:
				case 118:
				case 119:
					return "DLC_H3_ArcMac_Wiz_Enemy_Skeleton_Caster_Sounds";
				case 120:
				case 121:
				case 122:
				case 123:
				case 124:
					return "DLC_H3_ArcMac_Wiz_Enemy_Skeleton_Spear_Sounds";
				case 125:
				case 126:
				case 127:
				case 128:
				case 129:
					return "DLC_H3_ArcMac_Wiz_Enemy_Skeleton_Sword_Sounds";
				case 130:
				case 131:
				case 132:
				case 133:
					return "DLC_H3_ArcMac_Wiz_Enemy_Slime_Sounds";
				case 134:
				case 135:
					return "DLC_H3_ArcMac_Wiz_Enemy_Snake_Sounds";
				case 136:
				case 137:
				case 138:
				case 139:
				case 140:
					return "DLC_H3_ArcMac_Wiz_Enemy_Spider_Sounds";
				case 141:
				case 142:
				case 143:
				case 144:
				case 145:
					return "DLC_H3_ArcMac_Wiz_Enemy_Unicorn_Sounds";
				case 146:
				case 147:
				case 148:
				case 149:
				case 442:
				case 443:
				case 444:
				case 445:
					return "DLC_H3_ArcMac_Wiz_Environment_Sounds";
				case 150:
				case 440:
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
					return "DLC_H3_ArcMac_Wiz_Frontend_Sounds";
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
				case 172:
				case 173:
				case 174:
				case 175:
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
				case 183:
				case 184:
					return "DLC_H3_ArcMac_Wiz_Player_Level_1_Sounds";
				default:
			}
			switch (iParam0)
			{
				case 200:
				case 201:
				case 202:
				case 203:
				case 204:
				case 205:
				case 206:
				case 207:
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
				case 218:
				case 219:
				case 220:
				case 221:
				case 222:
					return "DLC_H3_ArcMac_Wiz_Player_Level_2_Sounds";
				case 223:
				case 224:
				case 225:
				case 226:
				case 227:
				case 228:
				case 229:
				case 230:
				case 231:
				case 232:
				case 233:
				case 234:
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
				case 245:
					return "DLC_H3_ArcMac_Wiz_Player_Level_3_Sounds";
				case 185:
				case 186:
				case 187:
				case 188:
				case 189:
				case 190:
				case 191:
				case 192:
				case 193:
				case 194:
				case 195:
				case 196:
				case 197:
				case 198:
				case 199:
					return "DLC_H3_ArcMac_Wiz_Player_Vocals_Level_1_Sounds";
				case 424:
				case 425:
				case 426:
				case 427:
				case 428:
				case 429:
				case 430:
				case 431:
					return "DLC_H3_ArcMac_Wiz_Player_Vocals_Level_2_Sounds";
				case 432:
				case 433:
				case 434:
				case 435:
				case 436:
				case 437:
				case 438:
				case 439:
					return "DLC_H3_ArcMac_Wiz_Player_Vocals_Level_3_Sounds";
				case 246:
				case 247:
				case 248:
				case 249:
				case 250:
				case 251:
				case 252:
				case 253:
				case 254:
					return "DLC_H3_ArcMac_Wiz_Speech_Bubble_Sounds";
				case 470:
				case 471:
				case 472:
				case 473:
				case 474:
				case 475:
				case 476:
					return "DLC_H3_ArcMac_Wiz_Slideshow";
				case 477:
				case 478:
				case 479:
				case 480:
				case 481:
				case 486:
				case 487:
					return "DLC_H3_ArcMac_Wiz_Frontend_Sounds";
				case 482:
				case 483:
				case 484:
				case 485:
					return "DLC_H3_ArcMac_Wiz_Slideshow_End";
				default:
			}
			break;
		case 8:
		case 9:
		case 10:
			switch (iParam0)
			{
				case 356:
				case 357:
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
				case 365:
				case 366:
				case 367:
				case 368:
				case 369:
				case 370:
				case 371:
				case 355:
				case 372:
				case 373:
				case 374:
				case 375:
				case 376:
				case 377:
					return "DLC_H3_RaceNChase_Frontend_Sounds";
				case 378:
				case 379:
				case 380:
				case 381:
				case 382:
				case 383:
				case 384:
				case 385:
				case 386:
					return "DLC_H3_RaceNChase_RadioPreview";
				case 387:
				case 388:
				case 389:
				case 390:
				case 391:
				case 392:
				case 393:
					return "DLC_H3_RaceNChase_Collision_Sounds";
				case 394:
				case 395:
				case 396:
				case 397:
				case 398:
				case 399:
				case 400:
					return "DLC_H3_RaceNChase_Car_Sounds";
				case 401:
				case 402:
				case 403:
				case 404:
				case 405:
				case 406:
				case 407:
					return "DLC_H3_RaceNChase_Bike_Sounds";
				case 408:
				case 409:
				case 410:
				case 411:
				case 412:
				case 413:
				case 414:
					return "DLC_H3_RaceNChase_Truck_Sounds";
				case 358:
				case 359:
					return "DLC_H3_RaceNChase_Vehicles_Sounds";
				case 415:
				case 416:
				case 417:
				case 418:
				case 419:
				case 420:
				case 421:
				case 422:
				case 423:
					return "DLC_H3_RaceNChase_Ambience_Sounds";
				default:
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 255:
				case 256:
				case 257:
				case 258:
				case 259:
				case 260:
				case 261:
				case 262:
				case 263:
				case 264:
				case 265:
				case 266:
				case 267:
				case 268:
					return "DLC_H3_SpaceMonkey3_FrontEnd_Sounds";
				case 269:
				case 270:
				case 271:
				case 272:
				case 273:
				case 274:
				case 281:
				case 275:
				case 276:
				case 277:
				case 278:
				case 280:
				case 279:
				case 282:
				case 446:
				case 447:
				case 448:
					return "DLC_H3_SpaceMonkey3_Player_Weapons_Sounds";
				case 283:
				case 284:
				case 285:
				case 286:
					return "DLC_H3_SpaceMonkey3_Enemy_Weapons_Sounds";
				case 287:
				case 291:
				case 288:
				case 289:
				case 290:
				case 292:
				case 293:
				case 294:
				case 295:
				case 296:
				case 297:
				case 298:
				case 449:
					return "DLC_H3_SpaceMonkey3_Damage_Sounds";
				case 299:
				case 300:
				case 301:
				case 302:
				case 303:
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
				case 315:
				case 316:
				case 450:
					return "DLC_H3_SpaceMonkey3_Pickup_Sounds";
				case 317:
				case 318:
				case 319:
				case 320:
				case 321:
				case 322:
				case 451:
				case 452:
				case 453:
					return "DLC_H3_SpaceMonkey3_Boss_BananaBread_Sounds";
				case 323:
				case 324:
				case 325:
				case 326:
				case 327:
				case 328:
				case 329:
				case 330:
				case 454:
				case 455:
					return "DLC_H3_SpaceMonkey3_Boss_DrDank_Sounds";
				case 331:
				case 332:
				case 333:
				case 334:
				case 335:
				case 336:
				case 337:
				case 338:
				case 339:
				case 340:
				case 341:
				case 456:
					return "DLC_H3_SpaceMonkey3_Boss_Gran_Sounds";
				case 342:
				case 343:
				case 344:
				case 345:
				case 346:
				case 457:
				case 458:
					return "DLC_H3_SpaceMonkey3_Boss_MajorBanana_Sounds";
				case 347:
				case 348:
				case 349:
				case 350:
				case 351:
				case 352:
				case 459:
					return "DLC_H3_SpaceMonkey3_Boss_MistaSmoothie_Sounds";
				case 353:
				case 354:
					return "DLC_H3_SpaceMonkey3_Enemy_Actions_Sounds";
				case 461:
				case 462:
				case 463:
				case 464:
				case 465:
				case 466:
				case 467:
				case 468:
					return "DLC_H3_SpaceMonkey3_Monkey_Vocal_Sounds";
				default:
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 488:
				case 489:
				case 490:
					return "sum20_am_Qub3d_sounds";
				default:
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 491:
				case 492:
				case 493:
					return "DLC_TUNER_AM_CH_Frontend_Sounds";
				default:
			}
			break;
	}
	return "";
}

int func_668()//Position - 0x6BD4B
{
	return 28;
}

void func_669(var uParam0)//Position - 0x6BD55
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1536908883;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_1__::func_26(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_670()//Position - 0x6BD8E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = (iVar1 + func_659(iVar0));
		iVar0++;
	}
	return iVar1;
}

void func_671()//Position - 0x6BDB5
{
	if (!BitTest(Local_138.f_3546, 1))
	{
		func_532(1);
		MISC::SET_BIT(&(Local_138.f_3546), 1);
	}
}

void func_672()//Position - 0x6BDD7
{
	float fVar0;
	float fVar1;
	bool bVar2;
	func_682();
	fVar0 = (1f * __LIB_16__::func_770());
	fVar1 = 1f;
	bVar2 = __LIB_37__::func_124(Local_138.f_3543, fVar0, fVar1);
	func_567();
	if (!bVar2)
	{
		if (!Local_138.f_3540)
		{
			if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_138.f_3543) >= 76f)
			{
				func_561(109);
				Local_138.f_3540 = 1;
			}
		}
		return;
	}
	Local_138.f_3541 = 1;
	if (!__LIB_37__::func_136())
	{
		func_673();
		func_537(11);
	}
	else
	{
		func_537(4);
	}
}

void func_673()//Position - 0x6BE51
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_138.f_1474[iVar0 /*7*/] = 0;
		iVar0++;
	}
	func_551();
	Local_138.f_22 = 0;
	func_675(0);
	func_674(0);
}

void func_674(int iParam0)//Position - 0x6BE89
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			func_631(__LIB_5__::func_403(1400f, 450f), 1, 0, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(240f, 450f), 20, 0, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(870f, 470f), 21, 0, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(600f, 830f), 4, 1, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(1300f, 830f), 17, 1, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(2200f, 850f), 5, 1, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(1800f, 850f), 3, 2, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(4400f, 850f), 1, 2, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403((1605f + 112f), 450f), 20, 0, 1, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(((1605f + (112f / 2f)) + 300f), 830f), 4, 1, 1, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(((1605f + (112f / 2f)) + 800f), 450f), 1, 0, 1, 0, 0, 0, 0);
			break;
		case 1:
			func_631(__LIB_5__::func_403(1200f, 440f), 6, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1343.25f, 490f), 10, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(621f, 424.125f), 40, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(360f, 540f), 2, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(706f, 800.625f), 32, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(600f, 857.375f), 16, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1550f, 770f), 1, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1800f, 688.125f), 3, 2, 0, 1, 0, 0, 0);
			fVar0 = (1920f / 2f);
			func_631(__LIB_5__::func_403((1200f + fVar0), 440f), 7, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1343.25f + fVar0), 490f), 11, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403(1627.75f, 509.875f), 32, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((743f + fVar0), 542.375f), 16, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1100f + fVar0), 830f), 14, 1, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1529.625f + fVar0), 786.625f), 20, 1, 0, 2, 0, 0, 0);
			fVar0 = 1920f;
			func_631(__LIB_5__::func_403((1200f + fVar0), 440f), 8, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1343.25f + fVar0), 490f), 12, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((695.5f + fVar0), 523f), 14, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1185f + fVar0), 777.125f), 2, 1, 0, 3, 0, 0, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_631(__LIB_5__::func_403((1200f + fVar0), 440f), 9, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1343f + fVar0), 490f), 13, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((735f + fVar0), 413.75f), 40, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((961.125f + fVar0), 803.125f), 32, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1084.75f + fVar0), 842.5f), 16, 1, 0, 4, 0, 0, 0);
			break;
		case 2:
			func_631(__LIB_5__::func_403(385f, 498.625f), 28, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(781.75f, 340f), 24, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(668.125f, 360f), 23, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(528f, 450f), 24, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1400f, 360f), 24, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1149f, 498.5f), 27, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1110.875f, 635.75f), 25, 0, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403(1000f, 830f), 29, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(500f, 830f), 28, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1404.125f, 870f), 27, 1, 0, 1, 1, 0, 0);
			fVar0 = (1920f / 2f);
			func_631(__LIB_5__::func_403((740f + fVar0), 390f), 23, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((858.125f + fVar0), 466f), 24, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1482.375f + fVar0), 427f), 23, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1149.375f + fVar0), 498.625f), 28, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((516.625f + fVar0), 676.875f), 26, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1327.75f + fVar0), 870.25f), 27, 1, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1576.125f + fVar0), 870.25f), 27, 1, 0, 2, 1, 0, 0);
			func_631(__LIB_5__::func_403((840f + fVar0), 870f), 29, 1, 0, 2, 0, 0, 0);
			fVar0 = 1920f;
			func_631(__LIB_5__::func_403((1187.375f + fVar0), 336.625f), 24, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1336.26f + fVar0), 372.375f), 24, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1472.25f + fVar0), 474.625f), 24, 0, 0, 3, 1, 0, 0);
			func_631(__LIB_5__::func_403((855.75f + fVar0), 515.62f), 27, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1064.125f + fVar0), 649.125f), 25, 0, 0, 0, 0, 0, 0);
			func_631(__LIB_5__::func_403((873f + fVar0), 742.875f), 28, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1193.75f + fVar0), 850.375f), 28, 0, 0, 3, 0, 0, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_631(__LIB_5__::func_403((1163.25f + fVar0), 447.25f), 24, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1291.75f + fVar0), 505.625f), 24, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1026.51f + fVar0), 503.25f), 24, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((880.25f + fVar0), 570.5f), 24, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1415.75f + fVar0), 562.375f), 24, 0, 0, 4, 1, 0, 0);
			func_631(__LIB_5__::func_403((718.125f + fVar0), 498.625f), 28, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((564.75f + fVar0), 870f), 29, 1, 0, 4, 0, 0, 0);
			break;
		case 3:
			func_631(__LIB_5__::func_403(1040f, 500f), 32, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(545.875f, 534.625f), 30, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1151.375f, 875.875f), 41, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(932.5f, 832.5f), 28, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(782.875f, 898.75f), 28, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(553.375f, 810.875f), 32, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1420f, 745.625f), 31, 1, 0, 1, 1, 0, 0);
			fVar0 = (1920f / 2f);
			func_631(__LIB_5__::func_403((1366.375f + fVar0), 591.125f), 28, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((729.875f + fVar0), 501.375f), 29, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1395.25f + fVar0), 834f), 32, 1, 0, 2, 1, 0, 0);
			func_631(__LIB_5__::func_403((1003.75f + fVar0), 745.625f), 31, 1, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((754.375f + fVar0), 804f), 28, 1, 0, 2, 0, 0, 0);
			fVar0 = 1920f;
			func_631(__LIB_5__::func_403((763.625f + fVar0), 501.375f), 29, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((853f + fVar0), 525.5f), 42, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1374f + fVar0), 538.625f), 30, 0, 0, 3, 1, 0, 0);
			func_631(__LIB_5__::func_403((1131.875f + fVar0), 804f), 28, 1, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1234.5f + fVar0), 805.5f), 42, 1, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((819.75f + fVar0), 835.125f), 28, 1, 0, 3, 0, 0, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_631(__LIB_5__::func_403((1178.875f + fVar0), 600f), 41, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1355f + fVar0), 536.375f), 28, 0, 0, 4, 1, 0, 0);
			func_631(__LIB_5__::func_403((856.125f + fVar0), 533.5f), 32, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((993.75f + fVar0), 533.5f), 32, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((786.875f + fVar0), 850.125f), 29, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1297.875f + fVar0), 804f), 29, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1141.875f + fVar0), 932.125f), 28, 1, 0, 4, 0, 0, 0);
			break;
		case 4:
			func_631(__LIB_5__::func_403(650f, 540f), 27, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1600f, 540f), 27, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1006.375f, 478.5f), 33, 0, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1300f, 770f), 35, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1600f, 780f), 34, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(500f, 790f), 37, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(700f, 800f), 35, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(900f, 810f), 36, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1000f, 830f), 38, 1, 0, 1, 0, 0, 0);
			func_631(__LIB_5__::func_403(1700f, 850f), 37, 1, 0, 1, 1, 0, 0);
			fVar0 = (1920f / 2f);
			func_631(__LIB_5__::func_403((910.125f + fVar0), 553.125f), 26, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((994.625f + fVar0), 553.125f), 26, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1163.625f + fVar0), 553.125f), 26, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1248.375f + fVar0), 553.125f), 26, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1410.75f + fVar0), 553.125f), 26, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1497.875f + fVar0), 553.125f), 26, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((926.125f + fVar0), 454.625f), 39, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1174.75f + fVar0), 454.625f), 39, 0, 0, 2, 0, 0, 1);
			func_631(__LIB_5__::func_403((1426f + fVar0), 454.625f), 39, 0, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((888.25f + fVar0), 884.75f), 36, 1, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1030.625f + fVar0), 851.75f), 38, 1, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1171.75f + fVar0), 877.625f), 37, 1, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1335.75f + fVar0), 796.875f), 35, 1, 0, 2, 0, 0, 0);
			func_631(__LIB_5__::func_403((1505.5f + fVar0), 857f), 36, 1, 0, 2, 1, 0, 0);
			fVar0 = 1920f;
			func_631(__LIB_5__::func_403((1114.5f + fVar0), 405.875f), 33, 0, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((717.375f + fVar0), 686.375f), 34, 1, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((877.625f + fVar0), 805.25f), 35, 1, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1071.5f + fVar0), 868.875f), 37, 1, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1214.25f + fVar0), 847.25f), 36, 1, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1389.875f + fVar0), 810.625f), 35, 1, 0, 3, 0, 0, 0);
			func_631(__LIB_5__::func_403((1521.625f + fVar0), 845.625f), 38, 1, 0, 3, 1, 0, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_631(__LIB_5__::func_403((587.875f + fVar0), 540f), 27, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((916.875f + fVar0), 540f), 26, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1005.75f + fVar0), 540f), 26, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1190.625f + fVar0), 540f), 26, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1277.125f + fVar0), 540f), 26, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((929.125f + fVar0), 442.5f), 39, 0, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1206f + fVar0), 442.5f), 39, 0, 0, 4, 0, 0, 1);
			func_631(__LIB_5__::func_403((762.375f + fVar0), 754.125f), 34, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((931f + fVar0), 874f), 38, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1069.625f + fVar0), 852.625f), 36, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1224f + fVar0), 885.125f), 37, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1381.375f + fVar0), 779f), 35, 1, 0, 4, 0, 0, 0);
			func_631(__LIB_5__::func_403((1535.25f + fVar0), 871.375f), 36, 1, 0, 4, 1, 0, 0);
			break;
	}
}

void func_675(int iParam0)//Position - 0x6CE15
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	struct<2> Var10;
	float fVar11;
	struct<2> Var12;
	struct<2> Var13;
	struct<2> Var14;
	Local_138.f_21 = 255;
	Local_138.f_0 = 0;
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 7)
	{
		Local_138.f_1424[iVar8 /*7*/].f_1 = SYSTEM::TO_FLOAT(iVar7);
		iVar7 += 276;
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_676(__LIB_5__::func_403(50f, 350f), __LIB_5__::func_403(188f, 52f), "canyon4", 0);
			func_676(__LIB_5__::func_403(300f, 350f), __LIB_5__::func_403(188f, 52f), "canyon4", 0);
			func_676(__LIB_5__::func_403(700f, 350f), __LIB_5__::func_403(188f, 52f), "canyon4", 0);
			func_676(__LIB_5__::func_403(960f, 350f), __LIB_5__::func_403(188f, 52f), "canyon4", 0);
			func_676(__LIB_5__::func_403(1100f, 350f), __LIB_5__::func_403(188f, 52f), "canyon4", 0);
			func_676(__LIB_5__::func_403(1300f, 350f), __LIB_5__::func_403(188f, 52f), "canyon4", 0);
			func_676(__LIB_5__::func_403(1800f, 350f), __LIB_5__::func_403(188f, 52f), "canyon4", 0);
			func_676(__LIB_5__::func_403(754f, 152.5f), __LIB_5__::func_403(1232f, 136f), "LEVEL_01_DESERT_CLOUDS_TILE", 0);
			func_676(__LIB_5__::func_403((754f + 1232f), 152.5f), __LIB_5__::func_403(1232f, 136f), "LEVEL_01_DESERT_CLOUDS_TILE", 0);
			func_676(__LIB_5__::func_403((754f + (1232f * 2f)), 152.5f), __LIB_5__::func_403(1232f, 136f), "LEVEL_01_DESERT_CLOUDS_TILE", 0);
			func_676(__LIB_5__::func_403(200f, 305f), __LIB_5__::func_403(256f, 144f), "canyon1", 1);
			func_676(__LIB_5__::func_403(350f, 305f), __LIB_5__::func_403(256f, 144f), "canyon2", 1);
			func_676(__LIB_5__::func_403(700f, 305f), __LIB_5__::func_403(420f, 144f), "canyon3", 1);
			func_676(__LIB_5__::func_403(900f, 305f), __LIB_5__::func_403(256f, 144f), "canyon1", 1);
			func_676(__LIB_5__::func_403(1200f, 305f), __LIB_5__::func_403(256f, 144f), "canyon2", 1);
			func_676(__LIB_5__::func_403(1450f, 305f), __LIB_5__::func_403(420f, 144f), "canyon3", 1);
			func_676(__LIB_5__::func_403(1750f, 305f), __LIB_5__::func_403(256f, 144f), "canyon1", 1);
			break;
		case 1:
			fVar0 = 723.75f;
			fVar1 = 100f;
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(188f, 56f), "LEVEL_02_TOWN_BACKGROUND_CLOUDS_01", 0);
			fVar0 = (fVar0 + (((188f / 2f) + (96f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(96f, 32f), "LEVEL_02_TOWN_BACKGROUND_CLOUDS_02", 0);
			fVar0 = (fVar0 + (((96f / 2f) + (112f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(112f, 60f), "LEVEL_02_TOWN_BACKGROUND_CLOUDS_03", 0);
			fVar0 = (fVar0 + (((112f / 2f) + (304f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(304f, 60f), "LEVEL_02_TOWN_BACKGROUND_CLOUDS_04", 0);
			fVar0 = (fVar0 + (((304f / 2f) + (252f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(252f, 20f), "LEVEL_02_TOWN_BACKGROUND_CLOUDS_05", 0);
			fVar0 = (fVar0 + (((252f / 2f) + (140f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(140f, 44f), "LEVEL_02_TOWN_BACKGROUND_CLOUDS_06", 0);
			fVar0 = (fVar0 + (((140f / 2f) + (128f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(128f, 44f), "LEVEL_02_TOWN_BACKGROUND_CLOUDS_07", 0);
			func_676(__LIB_5__::func_403(788.125f, 315f), __LIB_5__::func_403(1300f, 112f), "mountains", 0);
			func_676(__LIB_5__::func_403((788.125f + 1300f), 315f), __LIB_5__::func_403(1300f, 112f), "mountains", 0);
			func_676(__LIB_5__::func_403((788.125f + (2f * 1300f)), 315f), __LIB_5__::func_403(1300f, 112f), "mountains", 0);
			func_676(__LIB_5__::func_403(200f, 320f), __LIB_5__::func_403(272f, 112f), "mountain-small1", 1);
			func_676(__LIB_5__::func_403(350f, 320f), __LIB_5__::func_403(272f, 112f), "mountain-small1", 1);
			func_676(__LIB_5__::func_403(700f, 320f), __LIB_5__::func_403(272f, 112f), "mountain-small2", 1);
			func_676(__LIB_5__::func_403(900f, 320f), __LIB_5__::func_403(272f, 112f), "mountain-small1", 1);
			func_676(__LIB_5__::func_403(1200f, 320f), __LIB_5__::func_403(272f, 112f), "mountain-small2", 1);
			func_676(__LIB_5__::func_403(1450f, 320f), __LIB_5__::func_403(272f, 112f), "mountain-small1", 1);
			func_676(__LIB_5__::func_403(1750f, 320f), __LIB_5__::func_403(272f, 112f), "mountain-small2", 1);
			fVar9 = 184f;
			iVar7 = 0;
			while (iVar7 <= 20)
			{
				Var10 = { __LIB_5__::func_403((fVar9 + (IntToFloat(iVar7) * 92f)), 415f) };
				func_676(Var10, __LIB_5__::func_403(92f, 24f), "fence-small", 1);
				iVar7++;
			}
			func_676(__LIB_5__::func_403(700f, 675f), __LIB_5__::func_403(36f, 36f), "rocks", 1);
			func_676(__LIB_5__::func_403(800f, 755f), __LIB_5__::func_403(36f, 36f), "rocks", 1);
			func_676(__LIB_5__::func_403(1000f, 895f), __LIB_5__::func_403(36f, 36f), "rocks", 1);
			func_676(__LIB_5__::func_403(1300f, 1000f), __LIB_5__::func_403(36f, 36f), "rocks", 1);
			break;
		case 2:
			fVar0 = 723.75f;
			fVar1 = 100f;
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(188f, 56f), "LEVEL_03_FOREST_BACKGROUND_CLOUDS_01", 0);
			fVar0 = (fVar0 + (((188f / 2f) + (96f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(96f, 32f), "LEVEL_03_FOREST_BACKGROUND_CLOUDS_02", 0);
			fVar0 = (fVar0 + (((96f / 2f) + (112f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(112f, 60f), "LEVEL_03_FOREST_BACKGROUND_CLOUDS_03", 0);
			fVar0 = (fVar0 + (((112f / 2f) + (304f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(304f, 60f), "LEVEL_03_FOREST_BACKGROUND_CLOUDS_04", 0);
			fVar0 = (fVar0 + (((304f / 2f) + (252f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(252f, 20f), "LEVEL_03_FOREST_BACKGROUND_CLOUDS_05", 0);
			fVar0 = (fVar0 + (((252f / 2f) + (140f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(140f, 44f), "LEVEL_03_FOREST_BACKGROUND_CLOUDS_06", 0);
			fVar0 = (fVar0 + (((140f / 2f) + (128f / 2f)) + fVar1));
			func_676(__LIB_5__::func_403(fVar0, 193.75f), __LIB_5__::func_403(128f, 44f), "LEVEL_03_FOREST_BACKGROUND_CLOUDS_07", 0);
			fVar11 = 276f;
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var12 = { __LIB_5__::func_403((fVar11 + (IntToFloat(iVar7) * 276f)), 290f) };
				func_676(Var12, __LIB_5__::func_403(276f, 156f), "LEVEL_03_FOREST_BACKGROUND_TREES", 0);
				iVar7++;
			}
			func_676(__LIB_5__::func_403(855f, 660f), __LIB_5__::func_403(40f, 40f), "LEVEL_03_FOREST_ROCKS", 1);
			func_676(__LIB_5__::func_403(1275f, 905f), __LIB_5__::func_403(40f, 40f), "LEVEL_03_FOREST_ROCKS", 1);
			func_676(__LIB_5__::func_403(1110f, 485f), __LIB_5__::func_403(40f, 40f), "LEVEL_03_FOREST_ROCKS", 1);
			break;
		case 3:
			fVar2 = 276f;
			fVar3 = 276f;
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var13 = { __LIB_5__::func_403((fVar2 + (IntToFloat(iVar7) * 276f)), 263.125f) };
				func_676(Var13, __LIB_5__::func_403(276f, 100f), "LEVEL_04_GOLDMINE_CAVE_BACKGROUND_CAVE", 0);
				iVar7++;
			}
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var13 = { __LIB_5__::func_403((fVar3 + (IntToFloat(iVar7) * 276f)), 306.375f) };
				func_676(Var13, __LIB_5__::func_403(276f, 120f), "LEVEL_04_GOLDMINE_CAVE_TILE_02", 0);
				iVar7++;
			}
			fVar3 = 284f;
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var13 = { __LIB_5__::func_403((fVar3 + (IntToFloat(iVar7) * 284f)), 100f) };
				func_676(Var13, __LIB_5__::func_403(284f, 100f), "LEVEL_04_GOLDMINE_CAVE_TILE", 1);
				iVar7++;
			}
			fVar3 = 284f;
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var13 = { __LIB_5__::func_403((fVar3 + (IntToFloat(iVar7) * 284f)), 410f) };
				func_676(Var13, __LIB_5__::func_403(284f, 36f), "LEVEL_04_GOLDMINE_ASSETS_10", 1);
				iVar7++;
			}
			func_676(__LIB_5__::func_403(500f, 220f), __LIB_5__::func_403(312f, 304f), "WOODENSTRUCTURE", 1);
			func_676(__LIB_5__::func_403(1000f, 220f), __LIB_5__::func_403(312f, 304f), "WOODENSTRUCTURE", 1);
			func_676(__LIB_5__::func_403(1500f, 220f), __LIB_5__::func_403(312f, 304f), "WOODENSTRUCTURE", 1);
			func_676(__LIB_5__::func_403(700f, 675f), __LIB_5__::func_403(36f, 36f), "LEVEL_04_GOLDMINE_ROCK", 1);
			func_676(__LIB_5__::func_403(1020f, 785f), __LIB_5__::func_403(36f, 36f), "LEVEL_04_GOLDMINE_ROCK", 1);
			func_676(__LIB_5__::func_403(1365f, 545f), __LIB_5__::func_403(36f, 36f), "LEVEL_04_GOLDMINE_ROCK", 1);
			break;
		case 4:
			fVar4 = 276f;
			fVar5 = 276f;
			fVar6 = 276f;
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var14 = { __LIB_5__::func_403((fVar4 + (IntToFloat(iVar7) * 276f)), 163.875f) };
				func_676(Var14, __LIB_5__::func_403(276f, 68f), "LEVEL_05_GRAVEYARD_BACKGROUND_CLOUDS", 0);
				iVar7++;
			}
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var14 = { __LIB_5__::func_403((fVar6 + (IntToFloat(iVar7) * 276f)), 261.625f) };
				func_676(Var14, __LIB_5__::func_403(276f, 220f), "LEVEL_05_GRAVEYARD_BACKGROUND_TILE_TREES", 0);
				iVar7++;
			}
			iVar7 = 0;
			while (iVar7 <= 6)
			{
				Var14 = { __LIB_5__::func_403((fVar5 + (IntToFloat(iVar7) * 276f)), 336.5f) };
				func_676(Var14, __LIB_5__::func_403(276f, 172f), "LEVEL_05_GRAVEYARD_BACKGROUND_TILE_GATE", 0);
				iVar7++;
			}
			func_676(__LIB_5__::func_403(500f, 260f), __LIB_5__::func_403(288f, 264f), "LEVEL_05_GRAVEYARD_TREE_01", 1);
			func_676(__LIB_5__::func_403(1000f, 260f), __LIB_5__::func_403(212f, 276f), "LEVEL_05_GRAVEYARD_TREE_02", 1);
			func_676(__LIB_5__::func_403(1500f, 260f), __LIB_5__::func_403(264f, 244f), "LEVEL_05_GRAVEYARD_TREE_03", 1);
			func_676(__LIB_5__::func_403(700f, 400f), __LIB_5__::func_403(540f, 84f), "TOMBSTONES_1", 1);
			func_676(__LIB_5__::func_403(300f, 450f), __LIB_5__::func_403(540f, 84f), "TOMBSTONES_2", 1);
			func_676(__LIB_5__::func_403(1300f, 420f), __LIB_5__::func_403(540f, 84f), "TOMBSTONES_2", 1);
			func_676(__LIB_5__::func_403(1700f, 450f), __LIB_5__::func_403(540f, 84f), "TOMBSTONES_1", 1);
			break;
	}
}

void func_676(struct<2> Param0, struct<2> Param1, char* sParam2, int iParam3)//Position - 0x6DB64
{
	Local_138.f_1474[Local_138.f_22 /*7*/] = 1;
	Local_138.f_1474[Local_138.f_22 /*7*/].f_1 = { Param0 };
	Local_138.f_1474[Local_138.f_22 /*7*/].f_3 = { Param1 };
	Local_138.f_1474[Local_138.f_22 /*7*/].f_5 = sParam2;
	Local_138.f_1474[Local_138.f_22 /*7*/].f_6 = iParam3;
	Local_138.f_1474[Local_138.f_22 /*7*/] = 1;
	Local_138.f_22++;
}

void func_682()//Position - 0x6DCB7
{
	__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Local_138.f_107);
}

void func_683()//Position - 0x6DCE9
{
	bool bVar0;
	bool bVar1;
	if (Local_138.f_30 == 0)
	{
		Local_138.f_30 = MISC::GET_GAME_TIMER();
	}
	if (__LIB_42__::func_419() && !Local_138.f_3541)
	{
		bVar0 = true;
	}
	func_705();
	func_690(bVar0);
	if (Local_138.f_141[0 /*82*/].f_35 <= 0f)
	{
		bVar1 = true;
		if (!BitTest(Local_138.f_3546, 4))
		{
			func_532(7);
			MISC::SET_BIT(&(Local_138.f_3546), 4);
		}
	}
	else
	{
		if (bVar0)
		{
			if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || (MISC::GET_GAME_TIMER() - Local_138.f_30) > 10000)
			{
				__LIB_16__::func_769(&(Local_138.f_3543), "TLG_Outro");
				func_537(9);
			}
		}
		else
		{
			func_536(0, 1, 0, 1);
		}
		if (!func_639(5))
		{
			if (func_688())
			{
				func_561(99);
			}
			else if (func_687())
			{
				func_561(100);
			}
			else if (func_686())
			{
				func_561(101);
			}
			else if (func_684())
			{
				func_561(102);
			}
			func_556(5);
		}
	}
	if (bVar1)
	{
		if (__LIB_37__::func_136())
		{
			func_536(0, 1, 0, 1);
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || (MISC::GET_GAME_TIMER() - Local_138.f_30) > 10000)
		{
			func_673();
			func_537(11);
		}
	}
}

int func_684()//Position - 0x6DE32
{
	int iVar0;
	iVar0 = func_685(func_541());
	switch (func_542())
	{
		case 0:
			return iVar0 >= 2000;
			break;
		case 1:
			return iVar0 >= 2000;
			break;
		case 2:
			return iVar0 >= 2000;
			break;
		case 3:
			return iVar0 >= 2000;
			break;
		case 4:
			return iVar0 >= 2000;
			break;
	}
	return 0;
}

int func_685(int iParam0)//Position - 0x6DEA8
{
	return Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iParam0];
}

int func_686()//Position - 0x6DEBF
{
	int iVar0;
	iVar0 = func_685(func_541());
	switch (func_542())
	{
		case 0:
			return iVar0 < 2000;
			break;
		case 1:
			return iVar0 < 2000;
			break;
		case 2:
			return iVar0 < 2000;
			break;
		case 3:
			return iVar0 < 2000;
			break;
		case 4:
			return iVar0 < 2000;
			break;
	}
	return 0;
}

int func_687()//Position - 0x6DF35
{
	int iVar0;
	iVar0 = func_685(func_541());
	switch (func_542())
	{
		case 0:
			return iVar0 < 1500;
			break;
		case 1:
			return iVar0 < 1500;
			break;
		case 2:
			return iVar0 < 1500;
			break;
		case 3:
			return iVar0 < 1500;
			break;
		case 4:
			return iVar0 < 1500;
			break;
	}
	return 0;
}

int func_688()//Position - 0x6DFAB
{
	int iVar0;
	iVar0 = func_685(func_541());
	switch (func_542())
	{
		case 0:
			return iVar0 < 1000;
			break;
		case 1:
			return iVar0 < 1000;
			break;
		case 2:
			return iVar0 < 1000;
			break;
		case 3:
			return iVar0 < 1000;
			break;
		case 4:
			return iVar0 < 1000;
			break;
	}
	return 0;
}

void func_690(bool bParam0)//Position - 0x6E049
{
	func_682();
	func_691(bParam0);
	func_567();
}

void func_691(bool bParam0)//Position - 0x6E05F
{
	char cVar0[24];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	struct<4> Var12;
	int iVar13;
	struct<4> Var14;
	iVar6 = func_541();
	bVar7 = true;
	bVar8 = true;
	bVar9 = false;
	bVar10 = false;
	StringCopy(&Var12, "", 16);
	if (func_45() <= 0f)
	{
		bVar11 = true;
	}
	iVar13 = 2;
	if (__LIB_5__::func_106(PLAYER::PLAYER_ID()) == 1)
	{
		bVar7 = false;
	}
	if (!bVar7)
	{
		iVar13 = 3;
	}
	if (Local_138.f_30 == 0)
	{
		Local_138.f_30 = MISC::GET_GAME_TIMER();
	}
	if (!bVar11)
	{
		if ((MISC::GET_GAME_TIMER() - Local_138.f_30) > 1500)
		{
			bVar9 = true;
			iVar2 = SYSTEM::ROUND((100f * (SYSTEM::TO_FLOAT(func_704()) / SYSTEM::TO_FLOAT(func_703()))));
			if (!func_639(7))
			{
				iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6]) * (SYSTEM::TO_FLOAT(iVar2) / 100f)));
				Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6] = (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6] + iVar3);
				if (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iVar6] < Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6])
				{
					Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iVar6] = Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6];
				}
				func_556(7);
			}
		}
		if ((MISC::GET_GAME_TIMER() - Local_138.f_30) > 3000)
		{
			bVar10 = true;
			iVar4 = func_702();
			if (!func_639(9))
			{
				iVar5 = iVar4 * 1000;
				Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6] = (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6] + iVar5);
				if (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iVar6] < Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6])
				{
					Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iVar6] = Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6];
				}
				func_556(9);
			}
		}
	}
	if (bParam0)
	{
		StringCopy(&cVar0, "FINAL_SCENE", 24);
		__LIB_36__::func_716(&(Local_138.f_3842), &cVar0, __LIB_5__::func_403(1280f, 540f), __LIB_5__::func_403(556f, 836f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "FINAL_SCENE_TEXT", 24);
		__LIB_36__::func_716(&(Local_138.f_3842), &cVar0, __LIB_5__::func_403(670f, 360f), __LIB_5__::func_403(660f, 360f), 0f, Local_138.f_111);
		StringCopy(&Var12, "BADII_FNL" /* GXT: Nice work, cowboy. You nailed all the bad guys, now saddle up and ride hard. Yee-Haw! */, 16);
		if (bVar8)
		{
			StringCopy(&cVar0, "SCORE_SCREEN_TEXT_01", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(530.625f, 625.5f), __LIB_5__::func_403(116f, 56f), 0f, Local_138.f_111);
			func_701("NUMERICAL_DOLLAR", __LIB_5__::func_403(719.625f, 624.75f), __LIB_5__::func_403((28f * 1f), (40f * 1f)));
			iVar1 = func_670();
			func_698(iVar1, __LIB_5__::func_403(749.25f, 625.375f), Local_138.f_111, iVar13, 1f, 0);
			if (!func_639(10))
			{
				func_561(52);
				func_556(10);
			}
		}
		if (bVar9)
		{
			StringCopy(&cVar0, "SCORE_SCREEN_TEXT_02", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(562.625f, 684.125f), __LIB_5__::func_403(184f, 56f), 0f, Local_138.f_111);
			func_698(iVar2, __LIB_5__::func_403(721.25f, 684f), Local_138.f_111, iVar13, 1f, 1);
			if (!func_639(11))
			{
				func_561(52);
				func_556(11);
			}
		}
		if (bVar10)
		{
			StringCopy(&cVar0, "SCORE_SCREEN_TEXT_03", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(558f, 742.75f), __LIB_5__::func_403(176f, 56f), 0f, Local_138.f_111);
			func_697(iVar4, 0, __LIB_5__::func_403(721.25f, 742.25f), Local_138.f_111, iVar13, 1f);
			MemCopy(&cVar0, {func_696(iVar13)}, 6);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(755.5f, 742.85f), __LIB_5__::func_403((32f * 1f), (36f * 1f)), 0f, Local_138.f_111);
			func_701("NUMERICAL_DOLLAR", __LIB_5__::func_403(787.625f, 742.975f), __LIB_5__::func_403((28f * 1f), (40f * 1f)));
			func_698(1000, __LIB_5__::func_403(813.25f, 742.475f), Local_138.f_111, iVar13, 1f, 0);
			if (!func_639(12))
			{
				func_561(52);
				func_556(12);
			}
		}
	}
	else if (!bVar11)
	{
		Var12 = { func_695(1) };
		StringCopy(&cVar0, "LVL0", 24);
		StringIntConCat(&cVar0, Local_138.f_139 + 1, 24);
		StringConCat(&cVar0, "_COMPLETED", 24);
		__LIB_36__::func_716(&(Local_138.f_3746), &cVar0, __LIB_5__::func_403(((1920f / 6f) * 2f), (1080f / 2f)), __LIB_5__::func_403(420f, 520f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "TYPE_LEVEL_0", 24);
		StringIntConCat(&cVar0, Local_138.f_139 + 1, 24);
		StringConCat(&cVar0, "_OUTRO_WIN", 24);
		__LIB_36__::func_716(&(Local_138.f_3842), &cVar0, __LIB_5__::func_403(((1920f / 8f) * 5f), (1080f / 3f)), __LIB_5__::func_403(660f, 264f), 0f, Local_138.f_111);
		if (bVar8)
		{
			StringCopy(&cVar0, "SCORE_SCREEN_TEXT_01", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(998.75f, 577.125f), __LIB_5__::func_403(116f, 56f), 0f, Local_138.f_111);
			func_701("NUMERICAL_DOLLAR", __LIB_5__::func_403(1208.5f, 574.25f), __LIB_5__::func_403((28f * 1f), (40f * 1f)));
			iVar1 = func_685(func_541());
			func_698(iVar1, __LIB_5__::func_403(1238.125f, 574.25f), Local_138.f_111, iVar13, 1f, 0);
			if (!func_639(10))
			{
				func_561(52);
				func_556(10);
			}
		}
		if (bVar9)
		{
			StringCopy(&cVar0, "SCORE_SCREEN_TEXT_02", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1031.125f, 637.125f), __LIB_5__::func_403(184f, 56f), 0f, Local_138.f_111);
			func_698(iVar2, __LIB_5__::func_403(1209.875f, 636.625f), Local_138.f_111, iVar13, 1f, 1);
			if (!func_639(11))
			{
				func_561(52);
				func_556(11);
			}
		}
		if (bVar10)
		{
			StringCopy(&cVar0, "SCORE_SCREEN_TEXT_03", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1027.875f, 697.125f), __LIB_5__::func_403(176f, 56f), 0f, Local_138.f_111);
			func_697(iVar4, 0, __LIB_5__::func_403(1210.875f, 695.25f), Local_138.f_111, iVar13, 1f);
			MemCopy(&cVar0, {func_696(iVar13)}, 6);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1245.125f, 695.625f), __LIB_5__::func_403((32f * 1f), (36f * 1f)), 0f, Local_138.f_111);
			func_701("NUMERICAL_DOLLAR", __LIB_5__::func_403(1277.25f, 695.75f), __LIB_5__::func_403((28f * 1f), (40f * 1f)));
			func_698(1000, __LIB_5__::func_403(1302.875f, 695.25f), Local_138.f_111, iVar13, 1f, 0);
			if (!func_639(12))
			{
				func_561(52);
				func_556(12);
			}
		}
	}
	else
	{
		Var12 = { func_695(0) };
		StringCopy(&cVar0, "LVL0", 24);
		StringIntConCat(&cVar0, Local_138.f_139 + 1, 24);
		StringConCat(&cVar0, "_OUTRO_FAIL", 24);
		__LIB_36__::func_716(&(Local_138.f_3842), &cVar0, __LIB_5__::func_403(684.5f, (1080f / 3f)), __LIB_5__::func_403(660f, 264f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "DEAD_SCREEN_DESATURATED", 24);
		__LIB_36__::func_716(&(Local_138.f_3866), &cVar0, __LIB_5__::func_403(((1920f / 6f) * 4f), (1080f / 2f)), __LIB_5__::func_403(516f, 880f), 0f, Local_138.f_111);
		if (Local_138.f_21 > 0)
		{
			Var14.f_3 = 255;
			__LIB_15__::func_812(&Var14, 255, 255, 255, Local_138.f_21);
			StringCopy(&cVar0, "DEAD_SCREEN_COLOR", 24);
			__LIB_36__::func_716(&(Local_138.f_3866), &cVar0, __LIB_5__::func_403(((1920f / 6f) * 4f), (1080f / 2f)), __LIB_5__::func_403(516f, 880f), 0f, Var14);
			Local_138.f_21 = (Local_138.f_21 - 2);
		}
		else
		{
			StringCopy(&cVar0, "DEAD_SCREEN_TEXT", 24);
			__LIB_36__::func_716(&(Local_138.f_3866), &cVar0, __LIB_5__::func_403(((1920f / 6f) * 4f), (1080f / 3f)), __LIB_5__::func_403(280f, 228f), 0f, Local_138.f_111);
			if (!func_639(13))
			{
				func_561(108);
				func_556(13);
			}
		}
		if (bVar8)
		{
			StringCopy(&cVar0, "SCORE_SCREEN_TEXT_01", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(559.875f, 599.375f), __LIB_5__::func_403(116f, 56f), 0f, Local_138.f_111);
			func_701("NUMERICAL_DOLLAR", __LIB_5__::func_403(717.125f, 599.125f), __LIB_5__::func_403((28f * 1f), (40f * 1f)));
			iVar1 = func_685(func_541());
			if (iVar1 > 0)
			{
				func_698(iVar1, __LIB_5__::func_403(744.75f, 598.875f), Local_138.f_111, iVar13, 1f, 0);
			}
			else
			{
				func_693(__LIB_5__::func_403(744.75f, 598.875f), Local_138.f_111, iVar13, 1065353216);
			}
			if (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iVar6] < Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6])
			{
				Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iVar6] = Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar6];
			}
			if (!func_639(10))
			{
				func_561(52);
				func_556(10);
			}
		}
		if (!func_639(8))
		{
			func_561(107);
			func_556(8);
		}
	}
	__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_DOLLAR_Y", __LIB_5__::func_403(917f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
	func_697(func_692(), 6, __LIB_5__::func_403(1022.5f, 130f), Local_138.f_111, 0, 1065353216);
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var12))
		{
			HUD::BEGIN_TEXT_COMMAND_PRINT(&Var12);
			HUD::END_TEXT_COMMAND_PRINT(1, true);
		}
	}
}

int func_692()//Position - 0x6EA34
{
	return func_659(func_541());
}

void func_693(struct<2> Param0, struct<4> Param1, int iParam2, float fParam3)//Position - 0x6EA44
{
	struct<2> Var0;
	char cVar1[128];
	Var0 = { __LIB_5__::func_403((32f * fParam3), (36f * fParam3)) };
	cVar1 = { func_694(iParam2, 0) };
	__LIB_36__::func_716(&(Local_138.f_3722), &cVar1, Param0, Var0, 0f, Param1);
}

struct<16> func_694(int iParam0, int iParam1)//Position - 0x6EA88
{
	struct<16> Var0;
	StringCopy(&Var0, "SCORE_TEXT_", 64);
	StringIntConCat(&Var0, iParam1, 64);
	switch (iParam0)
	{
		case 0:
			StringConCat(&Var0, "_WHITE", 64);
			break;
		case 3:
			StringConCat(&Var0, "_BLUE", 64);
			break;
		case 1:
			StringConCat(&Var0, "_YELLOW", 64);
			break;
		case 2:
			StringConCat(&Var0, "_RED", 64);
			break;
	}
	return Var0;
}

struct<4> func_695(bool bParam0)//Position - 0x6EAF3
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "", 16);
	iVar1 = Local_138.f_139 + 1;
	if (bParam0)
	{
		StringCopy(&Var0, "BADII_LVW", 16);
	}
	else
	{
		StringCopy(&Var0, "BADII_LVD", 16);
	}
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<16> func_696(int iParam0)//Position - 0x6EB2E
{
	struct<16> Var0;
	switch (iParam0)
	{
		case 3:
			StringCopy(&Var0, "SCORE_TEXT_X_BLUE", 64);
			break;
		case 2:
			StringCopy(&Var0, "SCORE_TEXT_X_RED", 64);
			break;
	}
	return Var0;
}

void func_697(int iParam0, int iParam1, struct<2> Param2, struct<4> Param3, int iParam4, float fParam5)//Position - 0x6EB66
{
	struct<2> Var0;
	struct<2> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	char cVar6[128];
	Var0 = { Param2 };
	Var1 = { __LIB_5__::func_403((32f * fParam5), (36f * fParam5)) };
	bVar2 = iParam0 == false;
	if (iParam1 == 0)
	{
		iVar4 = iParam0;
		if (iParam0 > 0)
		{
			iParam1 = SYSTEM::FLOOR(SYSTEM::LOG10(SYSTEM::TO_FLOAT(iParam0))) + 1;
		}
		else if (iParam0 == 0)
		{
			iParam1 = 1;
		}
		while (iVar4 > 0 || bVar2)
		{
			bVar2 = false;
			Var0.f_0 = ((Param2.f_0 + ((Var1.f_0 * IntToFloat((iParam1 - 1))) / 2f)) - (Var1.f_0 * IntToFloat(iVar3)));
			cVar5 = { func_694(iParam4, (iVar4 % 10)) };
			iVar4 = (iVar4 / 10);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar5, Var0, Var1, 0f, Param3);
			iVar3++;
		}
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < iParam1)
		{
			Var0.f_0 = ((Param2.f_0 + ((Var1.f_0 * IntToFloat((iParam1 - 1))) / 2f)) - (Var1.f_0 * IntToFloat(iVar3)));
			cVar6 = { func_694(iParam4, ((iParam0 / SYSTEM::ROUND(SYSTEM::POW(10f, SYSTEM::TO_FLOAT(iVar3)))) % 10)) };
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar6, Var0, Var1, 0f, Param3);
			iVar3++;
		}
	}
}

void func_698(int iParam0, struct<2> Param1, struct<4> Param2, int iParam3, float fParam4, bool bParam5)//Position - 0x6EC8A
{
	struct<2> Var0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	char cVar4[128];
	struct<2> Var5;
	char cVar6[128];
	Var0 = { __LIB_5__::func_403((32f * fParam4), (36f * fParam4)) };
	Var0 = { __LIB_5__::func_403((32f * fParam4), (36f * fParam4)) };
	iVar3 = SYSTEM::FLOOR(SYSTEM::LOG10(SYSTEM::TO_FLOAT(iParam0))) + 1;
	__LIB_37__::func_125(iParam0, iVar3, &uVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		cVar4 = { func_694(iParam3, uVar1[iVar2]) };
		Var5.f_1 = Param1.f_1;
		Var5.f_0 = (Param1.f_0 + (IntToFloat(iVar2) * Var0.f_0));
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar4, Var5, Var0, 0f, Param2);
		iVar2++;
	}
	if (bParam5)
	{
		cVar6 = { func_699(iParam3) };
		Var5.f_0 = (Param1.f_0 + (IntToFloat(iVar2) * Var0.f_0));
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar6, Var5, __LIB_5__::func_403((28f * fParam4), (36f * fParam4)), 0f, Param2);
	}
}

struct<16> func_699(int iParam0)//Position - 0x6ED76
{
	struct<16> Var0;
	switch (iParam0)
	{
		case 3:
			StringCopy(&Var0, "SCORE_TEXT_PERCENTAGE_BLUE", 64);
			break;
		case 2:
			StringCopy(&Var0, "SCORE_TEXT_PERCENTAGE_RED", 64);
			break;
	}
	return Var0;
}

void func_701(char[4] cParam0, struct<2> Param1, struct<2> Param2)//Position - 0x6EDF6
{
	__LIB_36__::func_716(&(Local_138.f_3722), cParam0, Param1, Param2, 0f, Local_138.f_111);
}

var func_702()//Position - 0x6EE18
{
	return Local_138.f_72[func_542()];
}

var func_703()//Position - 0x6EE2A
{
	return Local_138.f_48[func_542()];
}

int func_704()//Position - 0x6EE3C
{
	return __LIB_37__::func_123(func_542());
}

void func_705()//Position - 0x6EE4C
{
	if (Local_138.f_106 == 4 || Local_138.f_106 == 5)
	{
		__LIB_37__::func_135(21);
	}
	else if (Local_138.f_106 == 7)
	{
		if (!func_717(0))
		{
			func_716(16, 5000);
			func_715(0);
		}
		else if (Local_138.f_141[0 /*82*/].f_3)
		{
			func_716(17, 5000);
		}
		if (!func_717(5))
		{
			if ((MISC::GET_GAME_TIMER() - Local_138.f_29) > 20000)
			{
				func_716(18, 5000);
			}
		}
		if ((MISC::GET_GAME_TIMER() - Local_138.f_29) > 10000)
		{
			func_716(20, 5000);
		}
	}
	if (func_717(7))
	{
		func_710(45, func_714(), 5000);
	}
	if (func_717(8))
	{
		func_710(45, func_709(), 5000);
	}
	if (func_717(9))
	{
		func_710(45, func_708(), 5000);
	}
	if (func_717(10))
	{
		func_710(45, func_707(), 5000);
	}
	if (func_717(11))
	{
		func_716(44, 5000);
	}
	if (func_717(6))
	{
		func_710(43, SYSTEM::ROUND(func_706()), 5000);
	}
}

float func_706()//Position - 0x6EF64
{
	return SYSTEM::TO_FLOAT(Global_262145.f_28676 /* Tunable: 1825833724 */);
}

int func_707()//Position - 0x6EF77
{
	return Global_262145.f_28675 /* Tunable: 1897527067 */;
}

int func_708()//Position - 0x6EF86
{
	return Global_262145.f_28674 /* Tunable: 1302605276 */;
}

int func_709()//Position - 0x6EF95
{
	return Global_262145.f_28673 /* Tunable: -68365255 */;
}

void func_710(int iParam0, int iParam1, int iParam2)//Position - 0x6EFA4
{
	if (!__LIB_0__::func_316(&(Local_134.f_1), iParam0))
	{
		if (Local_134.f_6 < NETWORK::GET_NETWORK_TIME())
		{
			__LIB_1__::func_458(&(Local_134.f_1), iParam0);
			Local_134.f_0 = 1;
			Local_134.f_5 = MISC::GET_HASH_KEY(__LIB_15__::func_818(iParam0));
			Local_134.f_6 = (NETWORK::GET_NETWORK_TIME() + iParam2);
			__LIB_11__::func_436(__LIB_15__::func_818(iParam0), iParam1, -1);
		}
	}
}

int func_714()//Position - 0x6F071
{
	return Global_262145.f_28672 /* Tunable: 1609911012 */;
}

void func_715(int iParam0)//Position - 0x6F080
{
	if (!func_717(iParam0))
	{
		MISC::SET_BIT(&(Local_138.f_35), iParam0);
	}
}

void func_716(int iParam0, int iParam1)//Position - 0x6F09C
{
	if (!__LIB_0__::func_316(&(Local_134.f_1), iParam0))
	{
		if (Local_134.f_6 < NETWORK::GET_NETWORK_TIME())
		{
			__LIB_1__::func_458(&(Local_134.f_1), iParam0);
			Local_134.f_0 = 1;
			Local_134.f_5 = MISC::GET_HASH_KEY(__LIB_15__::func_818(iParam0));
			Local_134.f_6 = (NETWORK::GET_NETWORK_TIME() + iParam1);
			__LIB_5__::func_401(__LIB_15__::func_818(iParam0));
		}
	}
}

bool func_717(int iParam0)//Position - 0x6F0EE
{
	return BitTest(Local_138.f_35, iParam0);
}

void func_718()//Position - 0x6F0FD
{
	func_877();
	func_876();
	func_868();
	func_809(0, 0);
	func_802();
	func_798();
	func_797();
	func_795();
	func_770();
	func_720();
	__LIB_0__::func_467();
	func_705();
}

void func_720()//Position - 0x6F13F
{
	__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Local_138.f_107);
	__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1264f, 930f), Local_138.f_119);
	func_764();
	func_763(0);
	func_761(0);
	func_759(0);
	func_611(0, 0);
	func_755(0);
	func_763(1);
	func_761(1);
	func_759(1);
	func_611(1, 0);
	func_755(1);
	func_763(2);
	func_759(2);
	func_754();
	func_611(2, 0);
	func_753();
	func_755(2);
	func_751();
	func_749();
	func_721();
	func_567();
}

void func_721()//Position - 0x6F200
{
	char cVar0[24];
	struct<4> Var1;
	struct<4> Var2;
	float fVar3;
	float fVar4;
	char cVar5[24];
	char cVar6[24];
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!Local_138.f_0 && Local_138.f_21 > 0)
	{
		Var1.f_3 = 255;
		Var1.f_3 = Local_138.f_21;
		__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Var1);
		Local_138.f_21 = (Local_138.f_21 - 2);
		StringCopy(&cVar0, "goodluck", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(328f, 140f), 0f, Local_138.f_111);
	}
	else if (Local_138.f_0 && Local_138.f_21 < 255)
	{
		Var2.f_3 = 255;
		Var2.f_3 = Local_138.f_21;
		__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Var2);
		Local_138.f_21 += 2;
		if (func_45() > 0f)
		{
			StringCopy(&cVar0, "scenecleared", 24);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(500f, 152f), 0f, Local_138.f_111);
		}
	}
	if (!func_748(0))
	{
		StringCopy(&cVar0, "HPbar", 24);
	}
	else
	{
		StringCopy(&cVar0, "HPBarYellow", 24);
	}
	fVar3 = (216f * func_45());
	fVar4 = ((216f - fVar3) / 2f);
	__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_402(__LIB_5__::func_403(0f, 0f), __LIB_5__::func_403((500f - fVar4), 130f)), __LIB_16__::func_768(__LIB_5__::func_403(fVar3, 40f), 1f), 0f, Local_138.f_111);
	StringCopy(&cVar0, "HPborder", 24);
	__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(500f, 130f), __LIB_5__::func_403(216f, 40f), 0f, Local_138.f_111);
	if (func_743() == 3)
	{
		__LIB_36__::func_716(&(Local_138.f_3722), "HPborder", __LIB_5__::func_403(447.375f, 174.75f), __LIB_5__::func_403(108f, 40f), 0f, Local_138.f_111);
		if (!func_748(3))
		{
			StringCopy(&cVar0, "HPbar", 24);
		}
		else
		{
			StringCopy(&cVar0, "HPBarYellow", 24);
		}
		fVar3 = (108f * Local_138.f_141[0 /*82*/].f_36);
		fVar4 = ((108f - fVar3) / 2f);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_402(__LIB_5__::func_403(0f, 0f), __LIB_5__::func_403((447.375f - fVar4), 174.75f)), __LIB_16__::func_768(__LIB_5__::func_403(fVar3, 40f), 1f), 0f, Local_138.f_111);
	}
	func_739();
	iVar7 = func_737(0);
	if (iVar7 > 99)
	{
		StringCopy(&cVar5, "AMMO_NUMERICAL_9", 24);
		StringCopy(&cVar6, "AMMO_NUMERICAL_9", 24);
	}
	else
	{
		StringCopy(&cVar5, "AMMO_NUMERICAL_", 24);
		StringIntConCat(&cVar5, (iVar7 / 10), 24);
		StringCopy(&cVar6, "AMMO_NUMERICAL_", 24);
		StringIntConCat(&cVar6, (iVar7 % 10), 24);
	}
	__LIB_36__::func_716(&(Local_138.f_3722), &cVar5, __LIB_5__::func_403(544.625f, 174.875f), __LIB_5__::func_403(44f, 48f), 0f, Local_138.f_111);
	__LIB_36__::func_716(&(Local_138.f_3722), &cVar6, __LIB_5__::func_403(584.625f, 174.875f), __LIB_5__::func_403(44f, 48f), 0f, Local_138.f_111);
	iVar8 = func_541();
	if (func_736() <= 1)
	{
		__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_DOLLAR_Y", __LIB_5__::func_403(634.5f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
		func_697(func_735(), 6, __LIB_5__::func_403(740f, 130f), Local_138.f_111, 1, 1065353216);
		__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_DOLLAR_Y", __LIB_5__::func_403(917f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
		func_697(func_692(), 6, __LIB_5__::func_403(1022.5f, 130f), Local_138.f_111, 0, 1065353216);
	}
	else
	{
		__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_DOLLAR_Y", __LIB_5__::func_403(634.5f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
		func_697(func_734(func_541()), 6, __LIB_5__::func_403(740f, 130f), Local_138.f_111, 2, 1065353216);
		__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_DOLLAR_Y", __LIB_5__::func_403(917f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
		iVar9 = func_731();
		iVar10 = func_730(iVar9, iVar8);
		if (iVar10 > 0)
		{
			if (iVar9 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (__LIB_37__::func_120())
				{
					iVar11 = 2;
				}
				else
				{
					iVar11 = 3;
				}
			}
			else if (__LIB_37__::func_120())
			{
				iVar11 = 3;
			}
			else
			{
				iVar11 = 2;
			}
		}
		else
		{
			iVar11 = 0;
		}
		func_697(iVar10, 6, __LIB_5__::func_403(1022.5f, 130f), Local_138.f_111, iVar11, 1065353216);
		__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_DOLLAR_Y", __LIB_5__::func_403(1199.5f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
		func_697(func_728(iVar8), 6, __LIB_5__::func_403(1305f, 130f), Local_138.f_111, 3, 1065353216);
		if (func_727(iVar8) > func_726(iVar8))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_RED", __LIB_5__::func_403(864f, 130f), __LIB_5__::func_403(52f, 32f), 0f, Local_138.f_111);
		}
		else if (func_727(iVar8) < func_726(iVar8))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_BLUE", __LIB_5__::func_403(1430f, 130f), __LIB_5__::func_403(52f, 32f), 0f, Local_138.f_111);
		}
	}
	if (func_722())
	{
		if (func_737(0) == 0 && Local_138.f_141[0 /*82*/].f_11 == 0)
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "TYPE_PROMPT_NO_AMMO", __LIB_5__::func_403(960f, 540.375f), __LIB_5__::func_403(308f, 296f), 0f, Local_138.f_111);
		}
		else
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "TYPE_PROMPT_RELOAD", __LIB_5__::func_403(948f, 540.375f), __LIB_5__::func_403(576f, 204f), 0f, Local_138.f_111);
		}
	}
}

int func_722()//Position - 0x6F841
{
	if (func_724() > 0)
	{
		if (Local_138.f_141[0 /*82*/].f_3)
		{
			Local_138.f_141[0 /*82*/].f_3 = 0;
			Local_138.f_141[0 /*82*/].f_10 = 0;
			Local_138.f_141[0 /*82*/].f_9 = 0;
		}
		return 0;
	}
	if (func_723())
	{
		if (Local_138.f_141[0 /*82*/].f_9 == 0)
		{
			Local_138.f_141[0 /*82*/].f_9 = MISC::GET_GAME_TIMER();
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_9) > 100)
		{
			Local_138.f_141[0 /*82*/].f_3 = 1;
			if (!Local_138.f_141[0 /*82*/].f_10)
			{
				func_561(91);
				Local_138.f_141[0 /*82*/].f_10 = 1;
			}
		}
	}
	return Local_138.f_141[0 /*82*/].f_3;
}

bool func_723()//Position - 0x6F8E7
{
	return (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/));
}

int func_724()//Position - 0x6F903
{
	return func_725(Local_138.f_141[0 /*82*/].f_11);
}

int func_725(int iParam0)//Position - 0x6F918
{
	var uVar0;
	uVar0 = Local_138.f_141[0 /*82*/].f_13[iParam0 /*4*/];
	return uVar0;
}

int func_726(int iParam0)//Position - 0x6F931
{
	if (__LIB_5__::func_106(PLAYER::PLAYER_ID()) == 1)
	{
		return func_730(NETWORK::PARTICIPANT_ID_TO_INT(), iParam0);
	}
	else
	{
		return func_730(Local_138.f_33, iParam0);
	}
	return 0;
}

int func_727(int iParam0)//Position - 0x6F963
{
	if (__LIB_5__::func_106(PLAYER::PLAYER_ID()) <= 0)
	{
		return func_730(NETWORK::PARTICIPANT_ID_TO_INT(), iParam0);
	}
	else
	{
		return func_730(Local_138.f_33, iParam0);
	}
	return 0;
}

int func_728(int iParam0)//Position - 0x6F995
{
	if (__LIB_5__::func_106(PLAYER::PLAYER_ID()) == 1)
	{
		return func_685(iParam0);
	}
	else
	{
		return func_729(iParam0);
	}
	return 0;
}

var func_729(int iParam0)//Position - 0x6F9BF
{
	return Local_146.f_5[Local_138.f_33 /*12*/].f_6[iParam0];
}

int func_730(int iParam0, int iParam1)//Position - 0x6F9D8
{
	return Local_146.f_5[iParam0 /*12*/][iParam1];
	return 0;
}

int func_731()//Position - 0x6F9F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_541();
	iVar1 = func_733(iVar0);
	iVar2 = Local_146.f_5[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/][iVar0];
	if (iVar1 > iVar2)
	{
		return func_732();
	}
	return NETWORK::PARTICIPANT_ID_TO_INT();
}

var func_732()//Position - 0x6FA2A
{
	return Local_138.f_33;
}

var func_733(int iParam0)//Position - 0x6FA36
{
	return Local_146.f_5[Local_138.f_33 /*12*/][iParam0];
}

int func_734(int iParam0)//Position - 0x6FA4D
{
	if (__LIB_5__::func_106(PLAYER::PLAYER_ID()) <= 0)
	{
		return func_685(iParam0);
	}
	else
	{
		return func_729(iParam0);
	}
	return 0;
}

int func_735()//Position - 0x6FA77
{
	int iVar0;
	iVar0 = func_541();
	return func_685(iVar0);
}

int func_736()//Position - 0x6FA8B
{
	return Local_146.f_1;
}

int func_737(bool bParam0)//Position - 0x6FA98
{
	return func_738(Local_138.f_141[0 /*82*/].f_11, bParam0);
}

int func_738(int iParam0, bool bParam1)//Position - 0x6FAAF
{
	int iVar0;
	iVar0 = Local_138.f_141[0 /*82*/].f_13[iParam0 /*4*/].f_1;
	if (bParam1)
	{
		iVar0 = (iVar0 + func_725(iParam0));
	}
	return iVar0;
}

void func_739()//Position - 0x6FADA
{
	char cVar0[32];
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	switch (func_743())
	{
		case 0:
			StringCopy(&cVar0, "ammo_pistol1", 32);
			iVar1 = func_724();
			iVar2 = func_742();
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				func_741(0, iVar3, &Var4, &Var5);
				func_740(&cVar0, Var4, Var5, iVar3, iVar1, iVar2);
				iVar3++;
			}
			break;
		case 2:
			StringCopy(&cVar0, "INDIVIDUAL_AMMO_ICON_SHOTGUN", 32);
			iVar1 = func_724();
			iVar2 = func_742();
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				func_741(0, iVar3, &Var4, &Var5);
				func_740(&cVar0, Var4, Var5, iVar3, iVar1, iVar2);
				iVar3++;
			}
			break;
		case 1:
			StringCopy(&cVar0, "INDIVIDUAL_AMMO_ICON_RIFLE", 32);
			iVar1 = func_724();
			iVar2 = func_742();
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				func_741(0, iVar3, &Var4, &Var5);
				func_740(&cVar0, Var4, Var5, iVar3, iVar1, iVar2);
				iVar3++;
			}
			break;
	}
}

void func_740(char[4] cParam0, struct<2> Param1, struct<2> Param2, int iParam3, int iParam4, int iParam5)//Position - 0x6FBE1
{
	struct<4> Var0;
	int iVar1;
	Var0 = { Local_138.f_111 };
	iVar1 = (iParam5 - iParam4);
	if (iVar1 > iParam3)
	{
		Var0 = { Local_138.f_131 };
	}
	__LIB_36__::func_716(&(Local_138.f_3722), cParam0, Param1, Param2, 0f, Var0);
}

void func_741(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x6FC23
{
	switch (iParam0)
	{
		case 0:
			*uParam3 = { __LIB_5__::func_403(24f, 86f) };
			switch (iParam1)
			{
				case 0:
					*uParam2 = { __LIB_5__::func_403(510.125f, 194.25f) };
					break;
				case 1:
					*uParam2 = { __LIB_5__::func_403(488.625f, 194.25f) };
					break;
				case 2:
					*uParam2 = { __LIB_5__::func_403(467.125f, 194.25f) };
					break;
				case 3:
					*uParam2 = { __LIB_5__::func_403(445.625f, 194.25f) };
					break;
				case 4:
					*uParam2 = { __LIB_5__::func_403(424.125f, 194.25f) };
					break;
				case 5:
					*uParam2 = { __LIB_5__::func_403(402.625f, 194.25f) };
					break;
			}
			break;
		case 1:
			*uParam3 = { __LIB_5__::func_403(28f, 96f) };
			switch (iParam1)
			{
				case 0:
					*uParam2 = { __LIB_5__::func_403(510.125f, 194.25f) };
					break;
				case 1:
					*uParam2 = { __LIB_5__::func_403(488.625f, 194.25f) };
					break;
				case 2:
					*uParam2 = { __LIB_5__::func_403(467.125f, 194.25f) };
					break;
				case 3:
					*uParam2 = { __LIB_5__::func_403(445.625f, 194.25f) };
					break;
				case 4:
					*uParam2 = { __LIB_5__::func_403(424.125f, 194.25f) };
					break;
				case 5:
					*uParam2 = { __LIB_5__::func_403(402.625f, 194.25f) };
					break;
			}
			break;
		case 2:
			*uParam3 = { __LIB_5__::func_403(28f, 80f) };
			switch (iParam1)
			{
				case 0:
					*uParam2 = { __LIB_5__::func_403(510.125f, 194.25f) };
					break;
				case 1:
					*uParam2 = { __LIB_5__::func_403(488.625f, 194.25f) };
					break;
				case 2:
					*uParam2 = { __LIB_5__::func_403(467.125f, 194.25f) };
					break;
				case 3:
					*uParam2 = { __LIB_5__::func_403(445.625f, 194.25f) };
					break;
				case 4:
					*uParam2 = { __LIB_5__::func_403(424.125f, 194.25f) };
					break;
				case 5:
					*uParam2 = { __LIB_5__::func_403(402.625f, 194.25f) };
					break;
			}
			break;
	}
}

int func_742()//Position - 0x6FE7E
{
	int iVar0;
	struct<7> Var1;
	iVar0 = func_743();
	Var1 = { func_560(iVar0) };
	return Var1.f_0;
}

int func_743()//Position - 0x6FE98
{
	if (func_746())
	{
		return func_745();
	}
	return __LIB_0__::func_114();
}

int func_745()//Position - 0x6FEBB
{
	return Local_138.f_141[0 /*82*/].f_12;
}

bool func_746()//Position - 0x6FECC
{
	return func_745() != -1;
}

bool func_748(int iParam0)//Position - 0x6FEF8
{
	return BitTest(Local_138.f_141[0 /*82*/].f_30, iParam0);
}

void func_749()//Position - 0x6FF0C
{
	char cVar0[24];
	int iVar1;
	bool bVar2;
	bool bVar3;
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if (Local_138.f_141[iVar1 /*82*/])
		{
			if (Local_138.f_141[iVar1 /*82*/].f_5 == 0 || (MISC::GET_GAME_TIMER() - Local_138.f_141[iVar1 /*82*/].f_5) > 200)
			{
				__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Local_138.f_111);
				Local_138.f_141[iVar1 /*82*/].f_5 = MISC::GET_GAME_TIMER();
			}
		}
		iVar1++;
	}
	bVar2 = true;
	bVar3 = func_639(6);
	if (bVar2)
	{
		if (Local_138.f_141[0 /*82*/].f_25 > 0)
		{
			Local_138.f_141[0 /*82*/].f_25 = (Local_138.f_141[0 /*82*/].f_25 - 1);
			__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Local_138.f_119);
		}
	}
	if (func_45() <= 0.2f || func_750() <= 0)
	{
		StringCopy(&cVar0, "damage1", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1200f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage2", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(500f, 400f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage3", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(900f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage4", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1400f, 500f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage1", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(900f, 300f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
	}
	else if (func_45() < 0.35f)
	{
		StringCopy(&cVar0, "damage1", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1200f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage2", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(500f, 400f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage3", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(900f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage4", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1400f, 500f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
	}
	else if (func_45() < 0.5f)
	{
		StringCopy(&cVar0, "damage1", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1200f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage2", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(500f, 400f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage3", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(900f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
	}
	else if (func_45() < 0.75f)
	{
		StringCopy(&cVar0, "damage1", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1200f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
		StringCopy(&cVar0, "damage2", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(500f, 400f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
	}
	else if (func_45() < 1f)
	{
		StringCopy(&cVar0, "damage1", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(1200f, 900f), __LIB_5__::func_403(504f, 460f), 0f, Local_138.f_111);
	}
	if (bVar3)
	{
		StringCopy(&cVar0, "BEARCLAWS_SCREEN_DAMAGE", 24);
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, __LIB_5__::func_403(913.75f, 658.25f), __LIB_5__::func_403(392f, 612f), 0f, Local_138.f_111);
	}
}

int func_750()//Position - 0x703B4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = (iVar1 + func_738(iVar0, 0));
		iVar0++;
	}
	return iVar1;
}

void func_751()//Position - 0x703DC
{
	char cVar0[24];
	struct<4> Var1;
	if (func_45() <= 0f)
	{
		return;
	}
	if (__LIB_37__::func_120())
	{
		StringCopy(&cVar0, "RETICLE_PLAYER1", 24);
	}
	else
	{
		StringCopy(&cVar0, "RETICLE_PLAYER2", 24);
	}
	Var1 = { Local_138.f_111 };
	if (func_752())
	{
		if (func_724() <= 0)
		{
			StringCopy(&cVar0, "RETICLE_RELOAD", 24);
		}
	}
	if (!func_748(1))
	{
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, Local_138.f_141[0 /*82*/].f_39, __LIB_5__::func_403(104f, 104f), 0f, Var1);
	}
}

bool func_752()//Position - 0x70460
{
	return Local_138.f_106 == 7;
}

void func_753()//Position - 0x7046E
{
	int iVar0;
	char cVar1[32];
	struct<2> Var2;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_138.f_3463[iVar0 /*10*/].f_4 == 0)
		{
		}
		else if (Local_138.f_3463[iVar0 /*10*/].f_4 == 1)
		{
			switch (Local_138.f_3463[iVar0 /*10*/].f_5)
			{
				case 0:
					switch (Local_138.f_3463[iVar0 /*10*/].f_2)
					{
						case 0:
							StringCopy(&cVar1, "THROWING_DYNAMITE_SMALL_01", 32);
							Var2 = { __LIB_5__::func_403(76f, 76f) };
							break;
						case 1:
							StringCopy(&cVar1, "THROWING_DYNAMITE_SMALL_02", 32);
							Var2 = { __LIB_5__::func_403(76f, 76f) };
							break;
						case 2:
							StringCopy(&cVar1, "THROWING_DYNAMITE_MEDIUM_01", 32);
							Var2 = { __LIB_5__::func_403(128f, 128f) };
							break;
						case 3:
							StringCopy(&cVar1, "THROWING_DYNAMITE_MEDIUM_02", 32);
							Var2 = { __LIB_5__::func_403(128f, 128f) };
							break;
						case 4:
							StringCopy(&cVar1, "THROWING_DYNAMITE_LARGE_01", 32);
							Var2 = { __LIB_5__::func_403(284f, 276f) };
							break;
						case 5:
							StringCopy(&cVar1, "THROWING_DYNAMITE_LARGE_02", 32);
							Var2 = { __LIB_5__::func_403(284f, 276f) };
							break;
					}
					break;
			}
			__LIB_36__::func_716(&(Local_138.f_3858), &cVar1, Local_138.f_3463[iVar0 /*10*/].f_6, Var2, 0f, Local_138.f_111);
		}
		else if (Local_138.f_3463[iVar0 /*10*/].f_4 == 2)
		{
		}
		iVar0++;
	}
}

void func_754()//Position - 0x705DF
{
	char cVar0[24];
	struct<8> Var1;
	float fVar2;
	int iVar3;
	Var1 = { Local_138.f_3802 };
	fVar2 = 1.2f;
	iVar3 = 0;
	while (iVar3 <= 39)
	{
		if (Local_138.f_1825[iVar3 /*33*/].f_21 == 2 && Local_138.f_1825[iVar3 /*33*/].f_17 > 0)
		{
			switch (Local_138.f_1825[iVar3 /*33*/].f_9)
			{
				case 5:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_01_01", 24);
					Var1 = { Local_138.f_3802 };
					break;
				case 6:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_02_01", 24);
					Var1 = { Local_138.f_3802 };
					break;
				case 7:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_03_01", 24);
					Var1 = { Local_138.f_3802 };
					break;
				case 8:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_04_01", 24);
					Var1 = { Local_138.f_3802 };
					break;
				case 9:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_05_01", 24);
					Var1 = { Local_138.f_3810 };
					break;
				case 10:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_06_01", 24);
					Var1 = { Local_138.f_3810 };
					break;
				case 11:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_07_01", 24);
					Var1 = { Local_138.f_3810 };
					break;
				case 12:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_08_01", 24);
					Var1 = { Local_138.f_3818 };
					break;
				case 13:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_09_01", 24);
					Var1 = { Local_138.f_3818 };
					break;
				case 14:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_10_01", 24);
					Var1 = { Local_138.f_3818 };
					break;
				case 15:
					StringCopy(&cVar0, "LEVEL_03_FOREST_BEAR_01", 24);
					Var1 = { Local_138.f_3834 };
					break;
			}
			__LIB_36__::func_716(&Var1, &cVar0, Local_138.f_1825[iVar3 /*33*/].f_27, __LIB_5__::func_403((Local_138.f_1825[iVar3 /*33*/].f_31 * fVar2), (Local_138.f_1825[iVar3 /*33*/].f_31.f_1 * fVar2)), 0f, Local_138.f_111);
		}
		else if (Local_138.f_1825[iVar3 /*33*/].f_21 == 2 && Local_138.f_1825[iVar3 /*33*/].f_10 == 3)
		{
			switch (Local_138.f_1825[iVar3 /*33*/].f_9)
			{
				case 5:
					Var1 = { Local_138.f_3802 };
					StringCopy(&cVar0, "FOREGROUND_ENEMY_01_02", 24);
					break;
				case 6:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_02_02", 24);
					Var1 = { Local_138.f_3802 };
					break;
				case 7:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_03_02", 24);
					Var1 = { Local_138.f_3802 };
					break;
				case 8:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_04_02", 24);
					Var1 = { Local_138.f_3802 };
					break;
				case 9:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_05_02", 24);
					Var1 = { Local_138.f_3810 };
					break;
				case 10:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_06_02", 24);
					Var1 = { Local_138.f_3810 };
					break;
				case 11:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_07_02", 24);
					Var1 = { Local_138.f_3810 };
					break;
				case 12:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_08_02", 24);
					Var1 = { Local_138.f_3818 };
					break;
				case 13:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_09_02", 24);
					Var1 = { Local_138.f_3818 };
					break;
				case 14:
					StringCopy(&cVar0, "FOREGROUND_ENEMY_10_02", 24);
					Var1 = { Local_138.f_3818 };
					break;
				case 15:
					StringCopy(&cVar0, "LEVEL_03_FOREST_BEAR_02", 24);
					break;
			}
			if (Local_138.f_1825[iVar3 /*33*/].f_9 == 15)
			{
				__LIB_36__::func_716(&(Local_138.f_3834), &cVar0, Local_138.f_1825[iVar3 /*33*/].f_27, __LIB_5__::func_403((768f * 1.2f), (504f * 1.2f)), 0f, Local_138.f_111);
			}
			else
			{
				__LIB_36__::func_716(&Var1, &cVar0, Local_138.f_1825[iVar3 /*33*/].f_27, __LIB_5__::func_403((452f * 1.2f), (540f * 1.2f)), 0f, Local_138.f_111);
			}
		}
		iVar3++;
	}
}

void func_755(int iParam0)//Position - 0x709D2
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<4> Var4;
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (Local_138.f_141[iVar1 /*82*/].f_41[iVar2 /*10*/])
			{
				if (Local_138.f_141[iVar1 /*82*/].f_41[iVar2 /*10*/].f_1)
				{
					StringCopy(&cVar0, "bullet-hole", 64);
				}
				else if (Local_138.f_141[iVar1 /*82*/].f_41[iVar2 /*10*/].f_2 || Local_138.f_141[iVar1 /*82*/].f_41[iVar2 /*10*/].f_8.f_1 < 300f)
				{
					StringCopy(&cVar0, "smoke", 64);
				}
				else
				{
					StringCopy(&cVar0, "bullet" /* GXT: Bullet */, 64);
				}
				__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, Local_138.f_141[iVar1 /*82*/].f_41[iVar2 /*10*/].f_8, __LIB_5__::func_403(96f, 96f), 0f, Local_138.f_111);
				if (!Local_138.f_141[iVar1 /*82*/].f_41[iVar2 /*10*/].f_3)
				{
					Local_138.f_141[iVar1 /*82*/].f_41[iVar2 /*10*/].f_3 = 1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		if (Local_138.f_1375[iVar2 /*8*/] && Local_138.f_1375[iVar2 /*8*/].f_4 == iParam0)
		{
			switch (Local_138.f_1375[iVar2 /*8*/].f_5)
			{
				case 1:
					StringCopy(&cVar0, "fg-enemy-gunfire", 64);
					__LIB_36__::func_716(&(Local_138.f_3826), &cVar0, Local_138.f_1375[iVar2 /*8*/].f_6, __LIB_5__::func_403(128f, 128f), 0f, Local_138.f_111);
					break;
				case 0:
					StringCopy(&cVar0, "PROP_TNT_CRATE_STATE_0", 64);
					StringIntConCat(&cVar0, Local_138.f_1375[iVar2 /*8*/].f_1 + 2, 64);
					__LIB_36__::func_716(&(Local_138.f_3826), &cVar0, Local_138.f_1375[iVar2 /*8*/].f_6, __LIB_5__::func_403(408f, 268f), 0f, Local_138.f_111);
					break;
				case 3:
					if (Local_138.f_1375[iVar2 /*8*/].f_1 == 0 || Local_138.f_1375[iVar2 /*8*/].f_1 == 1)
					{
						StringCopy(&cVar0, "THROWN_WEAPON_EXP_01", 64);
						Var3 = { __LIB_5__::func_403(412f, 344f) };
					}
					else
					{
						StringCopy(&cVar0, "THROWN_WEAPON_EXP_02", 64);
						Var3 = { __LIB_5__::func_403(572f, 504f) };
					}
					__LIB_36__::func_716(&(Local_138.f_3826), &cVar0, Local_138.f_1375[iVar2 /*8*/].f_6, Var3, 0f, Local_138.f_111);
					break;
				case 4:
					if (Local_138.f_1375[iVar2 /*8*/].f_1 == 0)
					{
						StringCopy(&cVar0, "CRATE_04", 64);
					}
					else if (Local_138.f_1375[iVar2 /*8*/].f_1 == 1)
					{
						StringCopy(&cVar0, "CRATE_05", 64);
					}
					else if (Local_138.f_1375[iVar2 /*8*/].f_1 == 2)
					{
						StringCopy(&cVar0, "CRATE_06", 64);
					}
					Var3 = { __LIB_5__::func_403(356f, 228f) };
					__LIB_36__::func_716(&(Local_138.f_3826), &cVar0, Local_138.f_1375[iVar2 /*8*/].f_6, Var3, 0f, Local_138.f_111);
					break;
				case 5:
					StringCopy(&cVar0, "ANIMALBONUS_BIRDS_KILL_FEATHERS_0", 64);
					StringIntConCat(&cVar0, Local_138.f_1375[iVar2 /*8*/].f_1 + 1, 64);
					__LIB_36__::func_716(&(Local_138.f_3826), &cVar0, Local_138.f_1375[iVar2 /*8*/].f_6, __LIB_5__::func_403(204f, 116f), 0f, Local_138.f_111);
					break;
				}
		}
		iVar2++;
	}
	Var4 = { Local_138.f_119 };
	Var4.f_3 = 255;
	if (func_752())
	{
		if (func_45() > 0f)
		{
			if (func_748(0))
			{
				func_758(Local_138.f_135, 50);
			}
			else if (func_748(1))
			{
				func_758(Local_138.f_127, 50);
			}
			else if (Local_138.f_3661 != 0f)
			{
				Local_138.f_3661 = 0f;
			}
		}
		else
		{
			__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Var4);
		}
	}
	else
	{
		if (func_748(0))
		{
			func_757(0);
			func_756(110);
			func_522(2);
		}
		if (func_748(1))
		{
			func_757(1);
			func_756(111);
			func_522(2);
		}
	}
}

void func_756(int iParam0)//Position - 0x70DBB
{
	AUDIO::STOP_SOUND(Local_138.f_3547[iParam0]);
	AUDIO::RELEASE_SOUND_ID(Local_138.f_3547[iParam0]);
	Local_138.f_3547[iParam0] = -1;
}

void func_757(int iParam0)//Position - 0x70DE7
{
	if (func_748(iParam0))
	{
		MISC::CLEAR_BIT(&(Local_138.f_141[0 /*82*/].f_30), iParam0);
	}
}

void func_758(struct<4> Param0, int iParam1)//Position - 0x70E07
{
	float fVar0;
	float fVar1;
	fVar0 = 5f;
	fVar1 = MISC::GET_FRAME_TIME();
	if (!Local_138.f_3662)
	{
		Local_138.f_3661 = (Local_138.f_3661 + (SYSTEM::TO_FLOAT(iParam1) / (fVar0 / fVar1)));
		if (Local_138.f_3661 > SYSTEM::TO_FLOAT(iParam1))
		{
			Local_138.f_3661 = SYSTEM::TO_FLOAT(iParam1);
			Local_138.f_3662 = 1;
		}
	}
	else
	{
		Local_138.f_3661 = (Local_138.f_3661 - (SYSTEM::TO_FLOAT(iParam1) / (fVar0 / fVar1)));
		if (Local_138.f_3661 < 0f)
		{
			Local_138.f_3661 = 0f;
			Local_138.f_3662 = 0;
		}
	}
	Param0.f_3 = SYSTEM::ROUND(Local_138.f_3661);
	__LIB_37__::func_93(__LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), Param0);
}

void func_759(int iParam0)//Position - 0x70EBD
{
	char cVar0[24];
	float fVar1;
	int iVar2;
	fVar1 = 1f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 0.75f;
			break;
		case 2:
			break;
	}
	if (iParam0 == 2)
	{
	}
	iVar2 = 0;
	while (iVar2 <= 11)
	{
		if (Local_138.f_3318[iVar2 /*12*/].f_4 == iParam0 && ((Local_138.f_3318[iVar2 /*12*/].f_1 || Local_138.f_3318[iVar2 /*12*/].f_5 > 0) || Local_138.f_3318[iVar2 /*12*/].f_7 > 0))
		{
			switch (Local_138.f_3318[iVar2 /*12*/].f_3)
			{
				case 0:
					StringCopy(&cVar0, "POWERUP_HEALTH", 24);
					break;
				case 5:
					StringCopy(&cVar0, "ammo1", 24);
					break;
				case 6:
					StringCopy(&cVar0, "ammo4", 24);
					break;
				case 8:
					StringCopy(&cVar0, "ammo2", 24);
					break;
				case 7:
					StringCopy(&cVar0, "ammo3", 24);
					break;
				case 1:
					StringCopy(&cVar0, "POWERUP_SNAKEOIL", 24);
					break;
				case 2:
					StringCopy(&cVar0, "POWERUP_SHERIFFBADGE", 24);
					break;
			}
			if (Local_138.f_3318[iVar2 /*12*/].f_1)
			{
				__LIB_36__::func_716(&(Local_138.f_3722), &cVar0, Local_138.f_3318[iVar2 /*12*/].f_8, __LIB_5__::func_403((Local_138.f_3318[iVar2 /*12*/].f_10 * fVar1), (Local_138.f_3318[iVar2 /*12*/].f_10.f_1 * fVar1)), 0f, Local_138.f_111);
			}
			if (func_640())
			{
				if (iParam0 == 2)
				{
					Local_138.f_3318[iVar2 /*12*/].f_8 = (Local_138.f_3318[iVar2 /*12*/].f_8 - func_760());
					if (Local_138.f_3318[iVar2 /*12*/].f_8 < -200f)
					{
						Local_138.f_3318[iVar2 /*12*/].f_1 = 0;
					}
				}
				else
				{
					Local_138.f_3318[iVar2 /*12*/].f_8 = (Local_138.f_3318[iVar2 /*12*/].f_8 - func_760());
					if (func_542() == 0)
					{
						if (Local_138.f_3318[iVar2 /*12*/].f_8 < -200f)
						{
							Local_138.f_3318[iVar2 /*12*/].f_8 = (1920f + (Local_138.f_3318[iVar2 /*12*/].f_10 / 2f));
							Local_138.f_3318[iVar2 /*12*/].f_6++;
						}
					}
					else if (Local_138.f_3318[iVar2 /*12*/].f_8 < 0f)
					{
						Local_138.f_3318[iVar2 /*12*/].f_8 = func_630();
						Local_138.f_3318[iVar2 /*12*/].f_6++;
					}
				}
			}
			if (!Local_138.f_3318[iVar2 /*12*/].f_1)
			{
				if (Local_138.f_3318[iVar2 /*12*/].f_5 > 0)
				{
					if (Local_138.f_3318[iVar2 /*12*/].f_6 == Local_138.f_3318[iVar2 /*12*/].f_5)
					{
						Local_138.f_3318[iVar2 /*12*/].f_1 = 1;
					}
				}
				if (Local_138.f_3318[iVar2 /*12*/].f_7 > 0 && Local_138.f_3318[iVar2 /*12*/].f_7 == func_42())
				{
					if (!__LIB_37__::func_121(Local_138.f_3318[iVar2 /*12*/].f_8, 0))
					{
						Local_138.f_3318[iVar2 /*12*/].f_1 = 1;
					}
				}
			}
		}
		iVar2++;
	}
}

float func_760()//Position - 0x711A1
{
	return func_635();
}

void func_761(int iParam0)//Position - 0x711AD
{
	char cVar0[64];
	struct<8> Var1;
	int iVar2;
	float fVar3;
	struct<2> Var4;
	struct<4> Var5;
	Var1 = { Local_138.f_3794 };
	Var5 = { Local_138.f_111 };
	iVar2 = 0;
	while (iVar2 <= 39)
	{
		fVar3 = func_762(Local_138.f_1825[iVar2 /*33*/].f_9, iParam0);
		Var1 = { Local_138.f_3794 };
		if (Local_138.f_1825[iVar2 /*33*/].f_10 == 3 && (Local_138.f_1825[iVar2 /*33*/].f_21 == iParam0 || (iParam0 == 0 && (Local_138.f_1825[iVar2 /*33*/].f_21 == 4 || Local_138.f_1825[iVar2 /*33*/].f_21 == 3))))
		{
			switch (Local_138.f_1825[iVar2 /*33*/].f_9)
			{
				case 0:
					StringCopy(&cVar0, "ENEMY_01_DEAD", 64);
					Var4 = { __LIB_5__::func_403((160f * fVar3), (200f * fVar3)) };
					break;
				case 1:
					StringCopy(&cVar0, "ENEMY_02_DEAD", 64);
					Var4 = { __LIB_5__::func_403((160f * fVar3), (200f * fVar3)) };
					break;
				case 2:
					StringCopy(&cVar0, "ENEMY_03_DEAD", 64);
					Var4 = { __LIB_5__::func_403((160f * fVar3), (200f * fVar3)) };
					break;
				case 3:
					StringCopy(&cVar0, "ENEMY_04_DEAD", 64);
					Var4 = { __LIB_5__::func_403((160f * fVar3), (200f * fVar3)) };
					break;
				case 4:
					StringCopy(&cVar0, "ENEMY_05_DEAD", 64);
					Var4 = { __LIB_5__::func_403((160f * fVar3), (200f * fVar3)) };
					break;
				case 17:
					StringCopy(&cVar0, "THROWING_ENEMY_06", 64);
					Var4 = { __LIB_5__::func_403((160f * fVar3), (200f * fVar3)) };
					break;
				case 16:
					StringCopy(&cVar0, "cart", 64);
					StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
					Var4 = { __LIB_5__::func_403((536f * fVar3), (404f * fVar3)) };
					break;
				case 18:
					if (Local_138.f_1825[iVar2 /*33*/].f_16 == 5)
					{
						StringCopy(&cVar0, "OUTHOUSE_ENEMY_06", 64);
					}
					else if (Local_138.f_1825[iVar2 /*33*/].f_16 == 6)
					{
						StringCopy(&cVar0, "OUTHOUSE_EMPTY", 64);
						Var1 = { Local_138.f_3754 };
					}
					else
					{
						StringCopy(&cVar0, "OUTHOUSE_ENEMY_05", 64);
					}
					Var4 = { __LIB_5__::func_403((216f * fVar3), (332f * fVar3)) };
					break;
				case 19:
					if (Local_138.f_1825[iVar2 /*33*/].f_16 == 5)
					{
						StringCopy(&cVar0, "LEVEL_05_GRAVEYARD_COFFIN_ENEMY_06", 64);
						Var1 = { Local_138.f_3786 };
					}
					else if (Local_138.f_1825[iVar2 /*33*/].f_16 == 6)
					{
						StringCopy(&cVar0, "GRAVEYARD_COFFIN_EMPTY", 64);
						Var1 = { Local_138.f_3786 };
					}
					else
					{
						StringCopy(&cVar0, "LEVEL_05_GRAVEYARD_COFFIN_ENEMY_05", 64);
						Var1 = { Local_138.f_3786 };
					}
					Var4 = { __LIB_5__::func_403((200f * fVar3), (248f * fVar3)) };
					break;
			}
			if (Local_138.f_1825[iVar2 /*33*/].f_27 > 0f && Local_138.f_1825[iVar2 /*33*/].f_27 < 1920f)
			{
				__LIB_36__::func_716(&Var1, &cVar0, Local_138.f_1825[iVar2 /*33*/].f_27, Var4, 0f, Local_138.f_111);
			}
		}
		else if (Local_138.f_1825[iVar2 /*33*/].f_10 != 4 && Local_138.f_1825[iVar2 /*33*/].f_10 != 0)
		{
			if (Local_138.f_1825[iVar2 /*33*/].f_21 == iParam0 || (iParam0 == 0 && (Local_138.f_1825[iVar2 /*33*/].f_21 == 4 || Local_138.f_1825[iVar2 /*33*/].f_21 == 3)))
			{
				if (Local_138.f_1825[iVar2 /*33*/].f_17 < func_619(Local_138.f_1825[iVar2 /*33*/].f_9))
				{
					if (Local_138.f_1825[iVar2 /*33*/].f_18 == 0)
					{
						Local_138.f_1825[iVar2 /*33*/].f_18 = MISC::GET_GAME_TIMER();
						Var5 = { Local_138.f_111 };
					}
					else if ((MISC::GET_GAME_TIMER() - Local_138.f_1825[iVar2 /*33*/].f_18) >= 1000)
					{
						Var5 = { Local_138.f_111 };
					}
					else if ((SYSTEM::ROUND((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - Local_138.f_1825[iVar2 /*33*/].f_18)) / 100f)) % 2) == 0)
					{
						Var5 = { Local_138.f_123 };
					}
					else
					{
						Var5 = { Local_138.f_111 };
					}
				}
				switch (Local_138.f_1825[iVar2 /*33*/].f_9)
				{
					case 0:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "ENEMY_01_ATTACKING", 64);
						}
						else
						{
							StringCopy(&cVar0, "ENEMY_01_RUNNING_0", 64);
							StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
						}
						break;
					case 1:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "ENEMY_02_ATTACKING", 64);
						}
						else
						{
							StringCopy(&cVar0, "ENEMY_02_RUNNING_0", 64);
							StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
						}
						break;
					case 2:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "ENEMY_03_ATTACKING", 64);
						}
						else
						{
							StringCopy(&cVar0, "ENEMY_03_RUNNING_0", 64);
							StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
						}
						break;
					case 3:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "ENEMY_04_ATTACKING", 64);
						}
						else
						{
							StringCopy(&cVar0, "ENEMY_04_RUNNING_0", 64);
							StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
						}
						break;
					case 4:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "ENEMY_05_ATTACKING", 64);
						}
						else
						{
							StringCopy(&cVar0, "ENEMY_05_RUNNING_0", 64);
							StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
						}
						break;
					case 16:
						StringCopy(&cVar0, "cart1", 64);
						break;
					case 17:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "THROWING_ENEMY_0", 64);
							StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 3, 64);
						}
						else
						{
							StringCopy(&cVar0, "THROWING_ENEMY_0", 64);
							StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
						}
						break;
					case 18:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 1)
						{
							if (!Local_138.f_1825[iVar2 /*33*/].f_5)
							{
								StringCopy(&cVar0, "OUTHOUSE_01", 64);
								Var1 = { Local_138.f_3754 };
							}
							else
							{
								StringCopy(&cVar0, "OUTHOUSE_ENEMY_0", 64);
								StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
							}
						}
						else if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "OUTHOUSE_ENEMY_05", 64);
						}
						break;
					case 19:
						if (Local_138.f_1825[iVar2 /*33*/].f_10 == 1)
						{
							if (!Local_138.f_1825[iVar2 /*33*/].f_5)
							{
								StringCopy(&cVar0, "GRAVEYARD_COFFIN_01", 64);
								Var1 = { Local_138.f_3786 };
							}
							else
							{
								StringCopy(&cVar0, "LEVEL_05_GRAVEYARD_COFFIN_ENEMY_0", 64);
								StringIntConCat(&cVar0, Local_138.f_1825[iVar2 /*33*/].f_16 + 1, 64);
								Var1 = { Local_138.f_3786 };
							}
						}
						else if (Local_138.f_1825[iVar2 /*33*/].f_10 == 2)
						{
							StringCopy(&cVar0, "LEVEL_05_GRAVEYARD_COFFIN_ENEMY_05", 64);
							Var1 = { Local_138.f_3786 };
						}
						break;
				}
				if (Local_138.f_1825[iVar2 /*33*/].f_27 > 0f && Local_138.f_1825[iVar2 /*33*/].f_27 < 1920f)
				{
					__LIB_36__::func_716(&Var1, &cVar0, Local_138.f_1825[iVar2 /*33*/].f_27, __LIB_5__::func_403((Local_138.f_1825[iVar2 /*33*/].f_31 * fVar3), (Local_138.f_1825[iVar2 /*33*/].f_31.f_1 * fVar3)), 0f, Var5);
				}
			}
		}
		else if (Local_138.f_1825[iVar2 /*33*/].f_21 == iParam0 && Local_138.f_1825[iVar2 /*33*/].f_10 == 0)
		{
			switch (Local_138.f_1825[iVar2 /*33*/].f_9)
			{
				case 18:
					if (Local_138.f_1825[iVar2 /*33*/].f_27 > 0f && Local_138.f_1825[iVar2 /*33*/].f_27 < 1920f)
					{
						__LIB_36__::func_716(&Var1, "OUTHOUSE_01", Local_138.f_1825[iVar2 /*33*/].f_27, __LIB_5__::func_403((Local_138.f_1825[iVar2 /*33*/].f_31 * fVar3), (Local_138.f_1825[iVar2 /*33*/].f_31.f_1 * fVar3)), 0f, Local_138.f_111);
					}
					break;
				case 19:
					if (Local_138.f_1825[iVar2 /*33*/].f_27 > 0f && Local_138.f_1825[iVar2 /*33*/].f_27 < 1920f)
					{
						Var1 = { Local_138.f_3786 };
						__LIB_36__::func_716(&Var1, "GRAVEYARD_COFFIN_01", Local_138.f_1825[iVar2 /*33*/].f_27, __LIB_5__::func_403((Local_138.f_1825[iVar2 /*33*/].f_31 * fVar3), (Local_138.f_1825[iVar2 /*33*/].f_31.f_1 * fVar3)), 0f, Local_138.f_111);
					}
					break;
				}
		}
		iVar2++;
	}
}

float func_762(int iParam0, int iParam1)//Position - 0x71A09
{
	float fVar0;
	fVar0 = 1f;
	if (iParam1 == 0)
	{
		if (iParam0 == 18)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 0.9f;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam0 == 18 || iParam0 == 19)
		{
			fVar0 = 1.1f;
		}
		else
		{
			fVar0 = 1.2f;
		}
	}
	else if (iParam1 == 2)
	{
		fVar0 = 1.2f;
	}
	else if (iParam1 == 3 || iParam1 == 4)
	{
		fVar0 = 0.9f;
	}
	return fVar0;
}

void func_763(int iParam0)//Position - 0x71A88
{
	char cVar0[24];
	int iVar1;
	if (iParam0 == 1)
	{
	}
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (Local_138.f_3146[iVar1 /*19*/].f_12 == iParam0)
		{
			if (Local_138.f_3146[iVar1 /*19*/].f_10 > 0)
			{
				switch (Local_138.f_3146[iVar1 /*19*/].f_11)
				{
					case 0:
						StringCopy(&cVar0, "hostage1", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
					case 1:
						StringCopy(&cVar0, "hostage2", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
					case 6:
						StringCopy(&cVar0, "eagle", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
					case 5:
						StringCopy(&cVar0, "vulture_0", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
					case 7:
						StringCopy(&cVar0, "bat_0", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
					case 9:
						StringCopy(&cVar0, "ANIMALBONUS_SCORPION_0", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
					case 8:
						StringCopy(&cVar0, "ANIMALBONUS_RAT_0", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
					case 2:
						StringCopy(&cVar0, "prisoner", 24);
						StringIntConCat(&cVar0, Local_138.f_3146[iVar1 /*19*/].f_9 + 1, 24);
						break;
				}
				if (Local_138.f_3146[iVar1 /*19*/].f_3 && (Local_138.f_3146[iVar1 /*19*/].f_11 != 6 && Local_138.f_3146[iVar1 /*19*/].f_11 != 5))
				{
					__LIB_36__::func_716(&(Local_138.f_3834), &cVar0, Local_138.f_3146[iVar1 /*19*/].f_15, __LIB_5__::func_403(-Local_138.f_3146[iVar1 /*19*/].f_17, Local_138.f_3146[iVar1 /*19*/].f_17.f_1), 0f, Local_138.f_111);
				}
				else
				{
					__LIB_36__::func_716(&(Local_138.f_3834), &cVar0, Local_138.f_3146[iVar1 /*19*/].f_15, __LIB_5__::func_403(Local_138.f_3146[iVar1 /*19*/].f_17, Local_138.f_3146[iVar1 /*19*/].f_17.f_1), 0f, Local_138.f_111);
				}
			}
			else if (Local_138.f_3146[iVar1 /*19*/].f_2)
			{
				switch (Local_138.f_3146[iVar1 /*19*/].f_11)
				{
					case 0:
						StringCopy(&cVar0, "ouch1", 24);
						__LIB_36__::func_716(&(Local_138.f_3834), &cVar0, Local_138.f_3146[iVar1 /*19*/].f_15, __LIB_5__::func_403(116f, 96f), 0f, Local_138.f_111);
						break;
					case 1:
						StringCopy(&cVar0, "ouch1", 24);
						__LIB_36__::func_716(&(Local_138.f_3834), &cVar0, Local_138.f_3146[iVar1 /*19*/].f_15, __LIB_5__::func_403(116f, 96f), 0f, Local_138.f_111);
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_764()//Position - 0x71D3B
{
	char cVar0[64];
	struct<8> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	Var1 = { Local_138.f_3706 };
	switch (Local_138.f_139)
	{
		case 0:
			StringCopy(&cVar0, "LEVEL_01_DESERT_BACKGROUND_TILE", 64);
			Var1 = { Local_138.f_3754 };
			break;
		case 1:
			StringCopy(&cVar0, "LEVEL_02_TOWN_BACKGROUND_TILE", 64);
			Var1 = { Local_138.f_3762 };
			break;
		case 2:
			StringCopy(&cVar0, "LEVEL_03_FOREST_BACKGROUND_TILE", 64);
			Var1 = { Local_138.f_3770 };
			break;
		case 3:
			StringCopy(&cVar0, "LEVEL_04_GOLDMINE_BACKGROUND_TILE", 64);
			Var1 = { Local_138.f_3778 };
			break;
		case 4:
			StringCopy(&cVar0, "LEVEL_05_GRAVEYARD_BACKGROUND_TILE", 64);
			Var1 = { Local_138.f_3786 };
			break;
	}
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		__LIB_36__::func_716(&Var1, &cVar0, __LIB_5__::func_403(Local_138.f_1424[iVar2 /*7*/].f_1, (1080f / 2f)), __LIB_5__::func_403(276f, 930f), 0f, Local_138.f_111);
		if (Local_138.f_1424[iVar2 /*7*/].f_1 < (276f / 2f))
		{
			iVar3 = (iVar2 - 1);
			if (iVar3 < 0)
			{
				iVar3 = 6;
			}
			Local_138.f_1424[iVar2 /*7*/].f_1 = (Local_138.f_1424[iVar3 /*7*/].f_1 + 276f);
		}
		if (func_640())
		{
			Local_138.f_1424[iVar2 /*7*/].f_1 = (Local_138.f_1424[iVar2 /*7*/].f_1 - func_647());
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 49)
	{
		if (Local_138.f_1474[iVar2 /*7*/] && Local_138.f_1474[iVar2 /*7*/].f_6 == 0)
		{
			__LIB_36__::func_716(&Var1, Local_138.f_1474[iVar2 /*7*/].f_5, Local_138.f_1474[iVar2 /*7*/].f_1, Local_138.f_1474[iVar2 /*7*/].f_3, 0f, Local_138.f_111);
			if (func_646(Local_138.f_1474[iVar2 /*7*/].f_5))
			{
				if (func_542() == 0)
				{
					if ((Local_138.f_1474[iVar2 /*7*/].f_1 + (1232f / 2f)) <= 0f)
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = ((1232f + 1232f) + (1232f / 2f));
					}
					if (func_640())
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_645());
					}
				}
				else if (func_542() == 1)
				{
					fVar5 = 100f;
					fVar4 = ((((((((((((188f + fVar5) + 96f) + fVar5) + 112f) + fVar5) + 304f) + fVar5) + 252f) + fVar5) + 140f) + fVar5) + 128f);
					if ((Local_138.f_1474[iVar2 /*7*/].f_1 + (Local_138.f_1474[iVar2 /*7*/].f_3 / 2f)) <= 300f)
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = ((300f + fVar4) + (Local_138.f_1474[iVar2 /*7*/].f_3 / 2f));
					}
					if (func_640())
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_645());
					}
				}
				else if (func_542() == 2)
				{
					fVar5 = 100f;
					fVar4 = ((((((((((((188f + fVar5) + 96f) + fVar5) + 112f) + fVar5) + 304f) + fVar5) + 252f) + fVar5) + 140f) + fVar5) + 128f);
					if ((Local_138.f_1474[iVar2 /*7*/].f_1 + (Local_138.f_1474[iVar2 /*7*/].f_3 / 2f)) <= 300f)
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = ((300f + fVar4) + (Local_138.f_1474[iVar2 /*7*/].f_3 / 2f));
					}
					if (func_640())
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_645());
					}
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar2 /*7*/].f_5, "mountains"))
			{
				if ((Local_138.f_1474[iVar2 /*7*/].f_1 + (1300f / 2f)) <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = ((1300f + 1300f) + (1300f / 2f));
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_644());
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar2 /*7*/].f_5, "LEVEL_03_FOREST_BACKGROUND_TREES"))
			{
				fVar4 = (7f * 276f);
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_644());
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar2 /*7*/].f_5, "LEVEL_04_GOLDMINE_CAVE_BACKGROUND_CAVE"))
			{
				fVar4 = (7f * 276f);
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_645());
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar2 /*7*/].f_5, "LEVEL_04_GOLDMINE_CAVE_TILE_02"))
			{
				fVar4 = (7f * 276f);
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_644());
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar2 /*7*/].f_5, "LEVEL_05_GRAVEYARD_BACKGROUND_CLOUDS"))
			{
				fVar4 = (7f * 276f);
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_645());
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar2 /*7*/].f_5, "LEVEL_05_GRAVEYARD_BACKGROUND_TILE_TREES"))
			{
				fVar4 = (7f * 276f);
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_644());
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar2 /*7*/].f_5, "LEVEL_05_GRAVEYARD_BACKGROUND_TILE_GATE"))
			{
				fVar4 = (7f * 276f);
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_643());
				}
			}
			else
			{
				if (Local_138.f_1474[iVar2 /*7*/].f_1 < (276f / 2f))
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = 1920f;
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_644());
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 49)
	{
		if (Local_138.f_1474[iVar2 /*7*/] && Local_138.f_1474[iVar2 /*7*/].f_6 == 1)
		{
			__LIB_36__::func_716(&Var1, Local_138.f_1474[iVar2 /*7*/].f_5, Local_138.f_1474[iVar2 /*7*/].f_1, Local_138.f_1474[iVar2 /*7*/].f_3, 0f, Local_138.f_111);
			if (MISC::ARE_STRINGS_EQUAL("LEVEL_04_GOLDMINE_CAVE_TILE", Local_138.f_1474[iVar2 /*7*/].f_5) || MISC::ARE_STRINGS_EQUAL("LEVEL_04_GOLDMINE_ASSETS_10", Local_138.f_1474[iVar2 /*7*/].f_5))
			{
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_766());
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL("fence-small", Local_138.f_1474[iVar2 /*7*/].f_5))
			{
				if (Local_138.f_1474[iVar2 /*7*/].f_1 <= 0f)
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = func_767(iVar2);
				}
				if (func_640())
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_643());
				}
			}
			else
			{
				if (Local_138.f_1474[iVar2 /*7*/].f_1 < (276f / 2f))
				{
					Local_138.f_1474[iVar2 /*7*/].f_1 = 1920f;
				}
				if (func_640())
				{
					if ((((MISC::ARE_STRINGS_EQUAL("rocks", Local_138.f_1474[iVar2 /*7*/].f_5) || MISC::ARE_STRINGS_EQUAL("FOREST_FLOOR_GRASS", Local_138.f_1474[iVar2 /*7*/].f_5)) || MISC::ARE_STRINGS_EQUAL("LEVEL_03_FOREST_ROCKS", Local_138.f_1474[iVar2 /*7*/].f_5)) || MISC::ARE_STRINGS_EQUAL("LEVEL_04_GOLDMINE_ROCK", Local_138.f_1474[iVar2 /*7*/].f_5)) || MISC::ARE_STRINGS_EQUAL("WOODENSTRUCTURE", Local_138.f_1474[iVar2 /*7*/].f_5))
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_766());
					}
					else if (MISC::ARE_STRINGS_EQUAL("mountain-small1", Local_138.f_1474[iVar2 /*7*/].f_5) || MISC::ARE_STRINGS_EQUAL("mountain-small2", Local_138.f_1474[iVar2 /*7*/].f_5))
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_765());
					}
					else
					{
						Local_138.f_1474[iVar2 /*7*/].f_1 = (Local_138.f_1474[iVar2 /*7*/].f_1 - func_643());
					}
				}
			}
		}
		iVar2++;
	}
}

float func_765()//Position - 0x72662
{
	return (2.5f * func_636());
}

float func_766()//Position - 0x72674
{
	return func_635();
}

float func_767(int iParam0)//Position - 0x72680
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	fVar0 = Local_138.f_1474[iParam0 /*7*/].f_3;
	iVar1 = func_769(Local_138.f_1474[iParam0 /*7*/].f_5);
	iVar2 = func_768(Local_138.f_1474[iParam0 /*7*/].f_5, iVar1);
	iVar3 = (iParam0 - 1);
	if (iVar3 < iVar1)
	{
		iVar3 = (iVar1 + (iVar2 - 1));
	}
	return (Local_138.f_1474[iVar3 /*7*/].f_1 + fVar0);
}

int func_768(char* sParam0, var uParam1)//Position - 0x726DD
{
	int iVar0;
	int iVar1;
	iVar1 = uParam1;
	while (iVar1 <= 49)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_138.f_1474[iVar1 /*7*/].f_5))
			{
				if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar1 /*7*/].f_5, sParam0))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_769(char* sParam0)//Position - 0x72732
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_138.f_1474[iVar0 /*7*/].f_5, sParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_770()//Position - 0x72767
{
	if (Local_138.f_140 == 1)
	{
		if (func_45() <= 0f)
		{
			func_561(40);
			Local_138.f_140 = 2;
			if (!BitTest(Local_138.f_3546, 3))
			{
				func_532(8);
				MISC::SET_BIT(&(Local_138.f_3546), 3);
			}
			func_778();
		}
		else if (func_772())
		{
			Local_138.f_1[Local_138.f_139] = 1;
			Local_138.f_0 = 1;
			Local_138.f_140 = 3;
			func_778();
		}
	}
	else if (Local_138.f_140 == 2)
	{
		if (Local_138.f_141[0 /*82*/].f_8 == 0)
		{
			Local_138.f_141[0 /*82*/].f_8 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_8) >= 2000)
		{
			Local_138.f_0 = 1;
			Local_138.f_140 = 3;
		}
	}
	else if (Local_138.f_140 == 3)
	{
		if (Local_138.f_21 >= 255)
		{
			func_522(1);
			func_771(0);
			func_537(8);
		}
	}
}

void func_771(int iParam0)//Position - 0x72833
{
	switch (iParam0)
	{
		case 0:
			AUDIO::START_AUDIO_SCENE("dlc_ch_am_br_in_menus_scene");
			break;
		case 1:
			AUDIO::START_AUDIO_SCENE("dlc_ch_am_br_in_gameplay_scene");
			break;
		case 2:
			AUDIO::START_AUDIO_SCENE("dlc_ch_badlands_revenge_powerup_active_scene");
			break;
	}
}

int func_772()//Position - 0x72878
{
	int iVar0;
	switch (Local_138.f_139)
	{
		case 0:
			if (func_42() == (func_43() - 1))
			{
				if (func_40() == 0)
				{
					func_561(106);
					return 1;
				}
			}
			else
			{
				switch (func_42())
				{
					case 0:
						if (func_777() == 0)
						{
							if (!func_639(0))
							{
								func_556(0);
								func_627();
								func_617(1);
							}
						}
						break;
					}
			}
			break;
		case 1:
			if (func_42() == (func_43() - 1))
			{
				if (func_40() == 0)
				{
					func_561(106);
					return 1;
				}
			}
			else
			{
				switch (func_42())
				{
					case 0:
						if (func_777() <= 3)
						{
							if (!func_639(0))
							{
								func_556(0);
							}
						}
						break;
					case 1:
						if (func_777() == 0)
						{
							func_776(1, 0);
							func_776(1, 1);
							func_625();
							iVar0 = func_613();
							iVar0++;
							if (iVar0 > 4)
							{
								iVar0 = 1;
							}
							func_774(5, iVar0);
							func_773();
							func_627();
							func_617(2);
						}
						break;
					case 2:
						if (func_777() == 0)
						{
							if (!func_639(0))
							{
								func_556(0);
							}
						}
						break;
					}
			}
			break;
		case 2:
			if (func_42() == (func_43() - 1))
			{
				if (func_40() == 0)
				{
					func_561(106);
					return 1;
				}
			}
			else
			{
				switch (func_42())
				{
					case 0:
						if (func_777() <= 5)
						{
							if (!func_639(0))
							{
								func_556(0);
							}
						}
						break;
					}
			}
			break;
		case 3:
			if (func_42() == (func_43() - 1))
			{
				if (func_40() == 0)
				{
					func_561(106);
					return 1;
				}
			}
			else
			{
				switch (func_42())
				{
					case 0:
						if (func_777() <= 5)
						{
							if (!func_639(0))
							{
								func_556(0);
							}
						}
						break;
					}
			}
			break;
		case 4:
			if (func_42() == (func_43() - 1))
			{
				if (func_40() == 0)
				{
					func_561(106);
					return 1;
				}
			}
			else
			{
				switch (func_42())
				{
					case 0:
						if (func_777() <= 5)
						{
							if (!func_639(0))
							{
								func_556(0);
							}
						}
						break;
					}
			}
			break;
	}
	return 0;
}

void func_773()//Position - 0x72A9B
{
	Local_138.f_86 = Local_138.f_85;
	Local_138.f_85 = -1;
}

void func_774(int iParam0, int iParam1)//Position - 0x72AB0
{
	struct<2> Var0;
	float fVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar3 = -1;
	switch (Local_138.f_139)
	{
		case 1:
			func_775(iParam0, iParam1, &iVar5, &Var0, &fVar1);
			iVar4 = 0;
			while (iVar4 < 50)
			{
				if (iVar3 == -1)
				{
					if (Local_138.f_224[iVar4 /*23*/].f_22 == iParam1)
					{
						if (func_616(Local_138.f_224[iVar4 /*23*/].f_14))
						{
							iVar3 = iVar4;
						}
					}
				}
				iVar4++;
			}
			if (iVar3 != -1)
			{
				Var2 = { Local_138.f_224[iVar3 /*23*/].f_15 };
				Var0.f_0 = (Var2.f_0 + fVar1);
				func_631(Var0, iParam0, iVar5, 0, iParam1, 0, 0, 0);
			}
			break;
	}
}

void func_775(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x72B47
{
	switch (func_542())
	{
		case 1:
			switch (iParam0)
			{
				case 5:
					switch (iParam1)
					{
						case 1:
							*uParam3 = { __LIB_5__::func_403(851.625f, 534.25f) };
							*uParam4 = { __LIB_5__::func_403(-348.375f, 94.25f) };
							*uParam2 = 0;
							break;
						case 2:
							*uParam3 = { __LIB_5__::func_403(867.375f, 604.5f) };
							*uParam4 = { __LIB_5__::func_403(-332.625f, 164.5f) };
							*uParam2 = 0;
							break;
						case 3:
							*uParam3 = { __LIB_5__::func_403(917.125f, 664.675f) };
							*uParam4 = { __LIB_5__::func_403(-282.875f, 224.675f) };
							*uParam2 = 0;
							break;
						case 4:
							*uParam3 = { __LIB_5__::func_403(850.375f, 612.75f) };
							*uParam4 = { __LIB_5__::func_403(-349.625f, 172.75f) };
							*uParam2 = 0;
							break;
					}
					break;
			}
			break;
	}
}

void func_776(int iParam0, int iParam1)//Position - 0x72C3C
{
	if (func_558(iParam0, iParam1))
	{
		MISC::CLEAR_BIT(&(Local_138.f_36[iParam0]), iParam1);
	}
}

int func_777()//Position - 0x72C5D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_42();
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= 39)
	{
		if (Local_138.f_1825[iVar1 /*33*/].f_22 == iVar0)
		{
			if (func_41(iVar1))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_778()//Position - 0x72CA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	bool bVar14;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = __LIB_0__::func_356(92, -1);
	iVar4 = __LIB_42__::func_420();
	iVar11 = (iVar3 + iVar4);
	if (iVar3 < func_707())
	{
		if (iVar4 > 0)
		{
			if (iVar11 >= func_707())
			{
				MISC::SET_BIT(&(Local_138.f_84), 0);
				func_793(iVar11, 1);
			}
			else
			{
				if (iVar3 < func_708())
				{
					bVar5 = true;
				}
				if (iVar3 < func_709())
				{
					bVar7 = true;
				}
				if (iVar3 < func_714())
				{
					bVar9 = true;
				}
				if (bVar5)
				{
					if (iVar11 >= func_708())
					{
						bVar6 = true;
					}
				}
				if (bVar7)
				{
					if (iVar11 >= func_709())
					{
						bVar8 = true;
					}
				}
				if (bVar9)
				{
					if (iVar11 >= func_714())
					{
						bVar10 = true;
					}
				}
				if (bVar6)
				{
					func_715(9);
					MISC::SET_BIT(&(Local_138.f_84), 5);
				}
				else if (bVar8)
				{
					func_715(8);
					MISC::SET_BIT(&(Local_138.f_84), 4);
				}
				else if (bVar10)
				{
					func_715(7);
					MISC::SET_BIT(&(Local_138.f_84), 3);
				}
				func_793(iVar11, 0);
			}
		}
	}
	if (iVar4 >= func_707())
	{
		MISC::SET_BIT(&(Local_138.f_84), 0);
		MISC::SET_BIT(&(Local_138.f_84), 5);
		MISC::SET_BIT(&(Local_138.f_84), 4);
		MISC::SET_BIT(&(Local_138.f_84), 3);
	}
	else if (iVar4 >= func_708())
	{
		MISC::SET_BIT(&(Local_138.f_84), 5);
		MISC::SET_BIT(&(Local_138.f_84), 4);
		MISC::SET_BIT(&(Local_138.f_84), 3);
	}
	else if (iVar4 >= func_709())
	{
		MISC::SET_BIT(&(Local_138.f_84), 4);
		MISC::SET_BIT(&(Local_138.f_84), 3);
	}
	else if (iVar4 >= func_714())
	{
		MISC::SET_BIT(&(Local_138.f_84), 3);
	}
	fVar12 = func_789();
	fVar13 = func_706();
	if (!__LIB_0__::func_355(77, -1))
	{
		if (__LIB_42__::func_419())
		{
			if (!func_788())
			{
				if (fVar12 > fVar13)
				{
					func_787();
					iVar1 = 1;
				}
			}
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (!__LIB_0__::func_355(78, -1))
	{
		if (__LIB_42__::func_419())
		{
			if (!func_788())
			{
				if (!func_786())
				{
					func_784();
					iVar2 = 1;
				}
			}
		}
	}
	else
	{
		iVar2 = 1;
	}
	if ((iVar0 && iVar2) && iVar1)
	{
		bVar14 = __LIB_1__::func_124(PLAYER::PLAYER_ID());
		__LIB_5__::func_170(3);
		__LIB_15__::func_824(0, bVar14);
		Local_138.f_3539 = 1;
	}
}

void func_784()//Position - 0x733CA
{
	__LIB_16__::func_767(78, 1, -1);
	MISC::SET_BIT(&(Local_138.f_84), 2);
	func_561(96);
	func_715(11);
	__LIB_5__::func_170(1);
}

int func_786()//Position - 0x73418
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_558(iVar0, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_787()//Position - 0x73441
{
	__LIB_16__::func_767(77, 1, -1);
	MISC::SET_BIT(&(Local_138.f_84), 1);
	__LIB_5__::func_170(0);
	func_561(98);
	func_715(6);
}

int func_788()//Position - 0x7346A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_558(func_542(), 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_789()//Position - 0x73495
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = SYSTEM::TO_FLOAT(__LIB_42__::func_422());
	fVar1 = SYSTEM::TO_FLOAT(__LIB_42__::func_421());
	fVar2 = SYSTEM::TO_FLOAT(func_790());
	fVar3 = ((100f * (fVar1 + fVar2)) / fVar0);
	return fVar3;
}

int func_790()//Position - 0x734CD
{
	return __LIB_37__::func_122(func_542());
}

void func_793(int iParam0, bool bParam1)//Position - 0x73514
{
	__LIB_16__::func_766(92, iParam0, -1);
	if (bParam1)
	{
		func_715(10);
		func_561(97);
		__LIB_5__::func_170(2);
	}
}

void func_795()//Position - 0x7355F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_138.f_1375[iVar0 /*8*/])
		{
			Local_138.f_1375[iVar0 /*8*/].f_1 = (Local_138.f_1375[iVar0 /*8*/].f_1 + Local_138.f_1375[iVar0 /*8*/].f_3);
			if (func_640() && Local_138.f_106 == 7)
			{
				Local_138.f_1375[iVar0 /*8*/].f_6 = (Local_138.f_1375[iVar0 /*8*/].f_6 - func_796());
			}
			switch (Local_138.f_1375[iVar0 /*8*/].f_5)
			{
				case 1:
					if (Local_138.f_1375[iVar0 /*8*/].f_1 >= 1)
					{
						Local_138.f_1375[iVar0 /*8*/].f_1 = 0;
						Local_138.f_1375[iVar0 /*8*/] = 0;
					}
					break;
				case 0:
					if (Local_138.f_1375[iVar0 /*8*/].f_1 >= 3)
					{
						Local_138.f_1375[iVar0 /*8*/].f_1 = 0;
						Local_138.f_1375[iVar0 /*8*/] = 0;
					}
					break;
				case 3:
					if (Local_138.f_1375[iVar0 /*8*/].f_1 >= 3)
					{
						Local_138.f_1375[iVar0 /*8*/].f_1 = 0;
						Local_138.f_1375[iVar0 /*8*/] = 0;
					}
					break;
				case 4:
					if (Local_138.f_1375[iVar0 /*8*/].f_1 >= 3)
					{
						Local_138.f_1375[iVar0 /*8*/].f_1 = 0;
						Local_138.f_1375[iVar0 /*8*/] = 0;
					}
					break;
				case 5:
					if (Local_138.f_1375[iVar0 /*8*/].f_1 >= 8)
					{
						Local_138.f_1375[iVar0 /*8*/].f_1 = 0;
						Local_138.f_1375[iVar0 /*8*/] = 0;
					}
					break;
				}
		}
		iVar0++;
	}
}

float func_796()//Position - 0x736CB
{
	return func_635();
}

void func_797()//Position - 0x736D7
{
	if (func_748(0))
	{
		if ((MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_31) > 12000)
		{
			func_757(0);
			func_756(110);
			func_522(2);
			func_561(84);
		}
	}
	if (func_748(1))
	{
		if ((MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_32) > 10000)
		{
			func_757(1);
			func_561(84);
			func_756(111);
			func_522(2);
		}
	}
}

void func_798()//Position - 0x73743
{
	func_801();
	func_799();
}

void func_799()//Position - 0x73753
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	struct<2> Var15;
	struct<2> Var16;
	float fVar17;
	float fVar18;
	if (func_752())
	{
		if (func_45() <= 0f)
		{
			return;
		}
	}
	fVar0 = 1f;
	fVar1 = 305f;
	fVar2 = 1605f;
	fVar3 = 80f;
	fVar4 = 995f;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
		fVar6 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
		fVar7 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar8 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		fVar0 = 0.5f;
		bVar9 = (fVar5 < (-0.65f * fVar0) || fVar7 < (-0.65f * fVar0));
		bVar10 = (fVar5 > (0.65f * fVar0) || fVar7 > (0.65f * fVar0));
		bVar11 = (fVar6 < (-0.65f * fVar0) || fVar8 < (-0.65f * fVar0));
		bVar12 = (fVar6 > (0.65f * fVar0) || fVar8 > (0.65f * fVar0));
		if (bVar9 && Local_138.f_141[0 /*82*/].f_39 >= fVar1)
		{
			Local_138.f_141[0 /*82*/].f_39 = (Local_138.f_141[0 /*82*/].f_39 - (IntToFloat((30 - __LIB_1__::func_137(Local_138.f_141[0 /*82*/].f_2) * 15)) * func_636()));
			if (Local_138.f_141[0 /*82*/].f_39 < fVar1)
			{
				Local_138.f_141[0 /*82*/].f_39 = fVar1;
			}
		}
		else if (bVar10 && Local_138.f_141[0 /*82*/].f_39 <= fVar2)
		{
			Local_138.f_141[0 /*82*/].f_39 = (Local_138.f_141[0 /*82*/].f_39 + (IntToFloat((30 - __LIB_1__::func_137(Local_138.f_141[0 /*82*/].f_2) * 15)) * func_636()));
			if (Local_138.f_141[0 /*82*/].f_39 > fVar2)
			{
				Local_138.f_141[0 /*82*/].f_39 = fVar2;
			}
		}
		if (bVar11 && Local_138.f_141[0 /*82*/].f_39.f_1 >= fVar3)
		{
			Local_138.f_141[0 /*82*/].f_39.f_1 = (Local_138.f_141[0 /*82*/].f_39.f_1 - (IntToFloat((30 - __LIB_1__::func_137(Local_138.f_141[0 /*82*/].f_2) * 15)) * func_636()));
			if (Local_138.f_141[0 /*82*/].f_39.f_1 < fVar3)
			{
				Local_138.f_141[0 /*82*/].f_39.f_1 = fVar3;
			}
		}
		else if (bVar12 && Local_138.f_141[0 /*82*/].f_39.f_1 <= fVar4)
		{
			Local_138.f_141[0 /*82*/].f_39.f_1 = (Local_138.f_141[0 /*82*/].f_39.f_1 + (IntToFloat((30 - __LIB_1__::func_137(Local_138.f_141[0 /*82*/].f_2) * 15)) * func_636()));
			if (Local_138.f_141[0 /*82*/].f_39.f_1 > fVar4)
			{
				Local_138.f_141[0 /*82*/].f_39.f_1 = fVar4;
			}
		}
	}
	else
	{
		fVar13 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		fVar14 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
		Var15 = { __LIB_5__::func_403(fVar1, fVar4) };
		Var16 = { __LIB_5__::func_403(fVar2, fVar3) };
		fVar17 = (Var16.f_0 - Var15.f_0);
		fVar18 = (Var15.f_1 - Var16.f_1);
		Local_138.f_141[0 /*82*/].f_39 = { __LIB_5__::func_403((Var15.f_0 + (fVar13 * fVar17)), (Var16.f_1 + (fVar14 * fVar18))) };
	}
}

void func_801()//Position - 0x73A31
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		Local_138.f_141[iVar3 /*82*/].f_2 = 0;
		iVar4 = 0;
		while (iVar4 <= 39)
		{
			if ((Local_138.f_1825[iVar4 /*33*/].f_10 == 1 || Local_138.f_1825[iVar4 /*33*/].f_10 == 2) && Local_138.f_1825[iVar4 /*33*/].f_17 > 0)
			{
				fVar0 = (Local_138.f_141[iVar3 /*82*/].f_39 - Local_138.f_1825[iVar4 /*33*/].f_27);
				fVar1 = (Local_138.f_141[iVar3 /*82*/].f_39.f_1 - Local_138.f_1825[iVar4 /*33*/].f_27.f_1);
				fVar2 = SYSTEM::SQRT(((fVar0 * fVar0) + (fVar1 * fVar1)));
				if (fVar2 < 150f)
				{
					Local_138.f_141[iVar3 /*82*/].f_2 = 1;
					return;
				}
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= 11)
		{
			if (!Local_138.f_3318[iVar4 /*12*/].f_2)
			{
				if (Local_138.f_3318[iVar4 /*12*/].f_1)
				{
					fVar0 = (Local_138.f_141[iVar3 /*82*/].f_39 - Local_138.f_3318[iVar4 /*12*/].f_8);
					fVar1 = (Local_138.f_141[iVar3 /*82*/].f_39.f_1 - Local_138.f_3318[iVar4 /*12*/].f_8.f_1);
					fVar2 = SYSTEM::SQRT(((fVar0 * fVar0) + (fVar1 * fVar1)));
					if (fVar2 < 150f)
					{
						Local_138.f_141[iVar3 /*82*/].f_2 = 1;
					}
				}
			}
			iVar4++;
		}
		iVar3++;
	}
}

void func_802()//Position - 0x73B87
{
	int iVar0;
	iVar0 = Local_138.f_141[0 /*82*/].f_11;
	if (!func_808())
	{
		if (Local_138.f_141[0 /*82*/].f_22[iVar0])
		{
			Local_138.f_141[0 /*82*/].f_22[iVar0] = 0;
		}
		if (Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_3 != 0)
		{
			Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_3 = 0;
		}
		if (func_748(5))
		{
			func_757(5);
		}
		return;
	}
	if (func_724() > 0)
	{
		if (func_807(0, 0))
		{
			if (Local_138.f_141[0 /*82*/].f_22[iVar0])
			{
				Local_138.f_141[0 /*82*/].f_22[iVar0] = 0;
			}
			if (Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_3 != 0)
			{
				Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_3 = 0;
			}
			if (func_748(5))
			{
				func_757(5);
			}
			return;
		}
	}
	if (Local_138.f_141[0 /*82*/].f_22[iVar0])
	{
		func_803();
	}
}

void func_803()//Position - 0x73C69
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = Local_138.f_141[0 /*82*/].f_11;
	iVar1 = func_743();
	Var2 = { func_560(iVar1) };
	if (Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_3 == 0 || (MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_3) >= Var2.f_4)
	{
		iVar4 = func_724();
		iVar5 = func_737(0);
		iVar6 = 1;
		if (iVar4 < iVar5)
		{
			if (iVar6 > iVar5)
			{
				iVar6 = iVar5;
			}
			bVar3 = (iVar4 < (Var2.f_0 - 2) && !func_748(5));
			func_806((iVar4 + iVar6), iVar5);
			if (bVar3)
			{
				func_805(5);
				func_804(1, 0, 0);
			}
			else if (func_724() == Var2.f_0)
			{
				func_804(0, 0, 1);
			}
			else
			{
				func_804(0, 1, 0);
			}
			Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_3 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_804(bool bParam0, bool bParam1, bool bParam2)//Position - 0x73D41
{
	int iVar0;
	iVar0 = func_743();
	switch (iVar0)
	{
		case 0:
			if (bParam0)
			{
				func_561(29);
			}
			else if (bParam1)
			{
				func_561(30);
			}
			else if (bParam2)
			{
				func_561(31);
			}
			break;
		case 1:
			if (bParam0)
			{
				func_561(32);
			}
			else if (bParam1)
			{
				func_561(33);
			}
			else if (bParam2)
			{
				func_561(34);
			}
			break;
		case 2:
			if (bParam0)
			{
				func_561(35);
			}
			else if (bParam1)
			{
				func_561(36);
			}
			else if (bParam2)
			{
				func_561(37);
			}
			break;
	}
}

void func_805(int iParam0)//Position - 0x73DE6
{
	if (!func_748(iParam0))
	{
		MISC::SET_BIT(&(Local_138.f_141[0 /*82*/].f_30), iParam0);
	}
}

void func_806(int iParam0, int iParam1)//Position - 0x73E07
{
	int iVar0;
	iVar0 = Local_138.f_141[0 /*82*/].f_11;
	Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/] = iParam0;
	Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_1 = iParam1;
}

int func_807(int iParam0, bool bParam1)//Position - 0x73E3A
{
	struct<7> Var0;
	if (func_724() > 0 || bParam1)
	{
		if (func_723())
		{
			if (func_743() == __LIB_0__::func_114())
			{
				if (!bParam1)
				{
					Local_138.f_141[0 /*82*/].f_13[0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				}
				return 1;
			}
			else if (func_743() == 2 || func_743() == 1)
			{
				Var0 = { func_560(func_743()) };
				if (Local_138.f_141[0 /*82*/].f_13[1 /*4*/].f_2 == 0 || (MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_13[1 /*4*/].f_2) >= Var0.f_3)
				{
					Local_138.f_141[0 /*82*/].f_13[1 /*4*/].f_2 = MISC::GET_GAME_TIMER();
					return 1;
				}
			}
		}
		if ((func_743() == 3 && (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))) && (MISC::GET_GAME_TIMER() - Local_138.f_141[iParam0 /*82*/].f_6) > 100)
		{
			if (!func_748(3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_808()//Position - 0x73F33
{
	int iVar0;
	struct<7> Var1;
	int iVar2;
	iVar0 = func_743();
	switch (iVar0)
	{
		case -1:
		case 3:
			return 0;
		default:
	}
	Var1 = { func_560(iVar0) };
	iVar2 = func_724();
	if (iVar2 == Var1.f_0)
	{
		return 0;
	}
	return 1;
}

void func_809(int iParam0, bool bParam1)//Position - 0x73F74
{
	int iVar0;
	Local_138.f_141[iParam0 /*82*/] = 0;
	if (func_807(iParam0, bParam1))
	{
		if (bParam1 || func_45() > 0f)
		{
			Local_138.f_141[iParam0 /*82*/].f_6 = MISC::GET_GAME_TIMER();
			PAD::SET_CONTROL_SHAKE(2 /*FRONTEND_CONTROL*/, 100, 20);
			Local_138.f_141[iParam0 /*82*/] = 1;
			Local_138.f_141[iParam0 /*82*/].f_41[Local_138.f_141[iParam0 /*82*/].f_4 /*10*/].f_8 = { Local_138.f_141[iParam0 /*82*/].f_39 };
			Local_138.f_141[iParam0 /*82*/].f_41[Local_138.f_141[iParam0 /*82*/].f_4 /*10*/].f_4 = 0;
			Local_138.f_141[iParam0 /*82*/].f_41[Local_138.f_141[iParam0 /*82*/].f_4 /*10*/] = 1;
			Local_138.f_141[iParam0 /*82*/].f_4 = (Local_138.f_141[iParam0 /*82*/].f_4 + 1 % 4);
		}
		if (!bParam1)
		{
			if (func_45() > 0f)
			{
				func_867();
				func_866();
				func_865(1);
			}
		}
		else
		{
			func_866();
		}
	}
	if (Local_138.f_106 == 7)
	{
		if (func_45() > 0f)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				if (!Local_138.f_141[0 /*82*/].f_22[Local_138.f_141[0 /*82*/].f_11])
				{
					Local_138.f_141[0 /*82*/].f_22[Local_138.f_141[0 /*82*/].f_11] = 1;
				}
			}
			else if (func_724() == 0 && !func_863())
			{
				if (func_737(0) > 0)
				{
					if (func_723())
					{
						func_862();
					}
				}
				else if (Local_138.f_141[0 /*82*/].f_11 == 1)
				{
					func_559(0);
					func_555(-1, 0);
					func_554();
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/])
		{
			Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_4 = (Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_4 + Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_6);
			if (bParam1)
			{
				func_858(iParam0, iVar0);
			}
			else
			{
				func_812(iParam0, iVar0);
				if (func_640())
				{
					Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_8 = (Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_8 - func_811());
				}
			}
			if (Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_4 >= 2)
			{
				Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/] = 0;
				Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_1 = 0;
				Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_2 = 0;
				Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_3 = 0;
				Local_138.f_141[iParam0 /*82*/].f_41[iVar0 /*10*/].f_4 = 0;
			}
		}
		iVar0++;
	}
	func_810();
}

void func_810()//Position - 0x741F3
{
	float fVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	fVar0 = 5f;
	fVar1 = 2f;
	fVar3 = MISC::GET_FRAME_TIME();
	if (func_743() == 3)
	{
		bVar2 = (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/) || (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && func_45() > 0f));
		if (func_748(3))
		{
			if (!func_748(4))
			{
				if (!bVar2)
				{
					func_805(4);
				}
			}
			if (bVar2)
			{
				if (Local_138.f_141[0 /*82*/].f_7 == 0 || (MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_7) > 100)
				{
					Local_138.f_141[0 /*82*/].f_7 = MISC::GET_GAME_TIMER();
					func_561(39);
				}
				if (!func_748(4))
				{
					Local_138.f_141[0 /*82*/].f_36 = 1f;
					return;
				}
			}
			if (Local_138.f_141[0 /*82*/].f_36 > 0f)
			{
				Local_138.f_141[0 /*82*/].f_36 = (Local_138.f_141[0 /*82*/].f_36 - (1f / (fVar1 / fVar3)));
			}
			else
			{
				Local_138.f_141[0 /*82*/].f_36 = 0f;
				func_757(3);
				func_757(4);
			}
			return;
		}
		if (bVar2)
		{
			if (Local_138.f_141[0 /*82*/].f_36 < 1f)
			{
				if (!func_748(3))
				{
					Local_138.f_141[0 /*82*/].f_36 = (Local_138.f_141[0 /*82*/].f_36 + (1f / (fVar0 / fVar3)));
					if (Local_138.f_141[0 /*82*/].f_36 >= 1f)
					{
						func_561(38);
						func_805(3);
					}
				}
			}
			else
			{
				Local_138.f_141[0 /*82*/].f_36 = 1f;
			}
		}
		else if (Local_138.f_141[0 /*82*/].f_36 > 0f)
		{
			Local_138.f_141[0 /*82*/].f_36 = (Local_138.f_141[0 /*82*/].f_36 - (1f / (fVar1 / fVar3)));
		}
		else
		{
			Local_138.f_141[0 /*82*/].f_36 = 0f;
			func_757(3);
			func_757(4);
		}
	}
	else if (Local_138.f_141[0 /*82*/].f_36 != 0f)
	{
		Local_138.f_141[0 /*82*/].f_36 = 0f;
	}
}

float func_811()//Position - 0x7439A
{
	return func_635();
}

void func_812(int iParam0, int iParam1)//Position - 0x743A6
{
	int iVar0;
	struct<7> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<2> Var11;
	bool bVar12;
	int iVar13[4];
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	bool bVar22;
	float fVar23;
	float fVar24;
	struct<2> Var25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	if (!Local_138.f_141[iParam0 /*82*/])
	{
		return;
	}
	Var1 = { func_560(func_743()) };
	fVar2 = Var1.f_6;
	iVar3 = Var1.f_2;
	Var11 = { __LIB_5__::func_403(Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8, Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1) };
	bVar12 = false;
	iVar14 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar13[iVar0] = -1;
		iVar0++;
	}
	iVar15 = -1;
	iVar16 = -1;
	iVar17 = -1;
	iVar18 = -1;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (Local_138.f_224[iVar0 /*23*/])
		{
			fVar19 = func_855(Local_138.f_224[iVar0 /*23*/].f_14);
			fVar20 = (Local_138.f_224[iVar0 /*23*/].f_19 * fVar19);
			fVar21 = (Local_138.f_224[iVar0 /*23*/].f_20 * fVar19);
			fVar7 = (Local_138.f_224[iVar0 /*23*/].f_15 - (fVar20 / 2f));
			fVar9 = (Local_138.f_224[iVar0 /*23*/].f_15.f_1 - (fVar21 / 2f));
			fVar8 = (Local_138.f_224[iVar0 /*23*/].f_15 + (fVar20 / 2f));
			fVar10 = (Local_138.f_224[iVar0 /*23*/].f_15.f_1 + (fVar21 / 2f));
			if (((Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 > fVar7 && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 < fVar8) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 > fVar9) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 < fVar10)
			{
				if (((iVar15 == -1 || Local_138.f_224[iVar0 /*23*/].f_7 > Local_138.f_224[iVar15 /*23*/].f_7) || (Local_138.f_224[iVar0 /*23*/].f_2 && !Local_138.f_224[iVar15 /*23*/].f_2)) || (Local_138.f_224[iVar0 /*23*/].f_3 && !Local_138.f_224[iVar15 /*23*/].f_3))
				{
					bVar12 = true;
					iVar15 = iVar0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		bVar22 = false;
		if (Local_138.f_1825[iVar0 /*33*/].f_10 == 2 || Local_138.f_1825[iVar0 /*33*/].f_10 == 1)
		{
			if (Local_138.f_1825[iVar0 /*33*/].f_17 > 0)
			{
				fVar7 = (Local_138.f_1825[iVar0 /*33*/].f_27 - (Local_138.f_1825[iVar0 /*33*/].f_31 / 2f));
				fVar9 = (Local_138.f_1825[iVar0 /*33*/].f_27.f_1 - (Local_138.f_1825[iVar0 /*33*/].f_31.f_1 / 2f));
				fVar8 = (Local_138.f_1825[iVar0 /*33*/].f_27 + (Local_138.f_1825[iVar0 /*33*/].f_31 / 2f));
				fVar10 = (Local_138.f_1825[iVar0 /*33*/].f_27.f_1 + (Local_138.f_1825[iVar0 /*33*/].f_31.f_1 / 2f));
				if (fVar2 == 1f)
				{
					if (((Var11.f_0 > fVar7 && Var11.f_0 < fVar8) && Var11.f_1 > fVar9) && Var11.f_1 < fVar10)
					{
						bVar22 = true;
					}
				}
				else
				{
					fVar23 = (Local_138.f_1825[iVar0 /*33*/].f_27 - Var11.f_0);
					fVar24 = (Local_138.f_1825[iVar0 /*33*/].f_27.f_1 - Var11.f_1);
					if ((fVar23 * fVar23) + (fVar24 * fVar24)) < (fVar2 * fVar2)
					{
						bVar22 = true;
					}
				}
				if (bVar22)
				{
					if (iVar3 == 1)
					{
						if (((iVar13[iVar14] == -1 || Local_138.f_1825[iVar0 /*33*/].f_21 > Local_138.f_1825[iVar13[iVar14] /*33*/].f_21) || Local_138.f_1825[iVar13[iVar14] /*33*/].f_9 == 18) || Local_138.f_1825[iVar13[iVar14] /*33*/].f_9 == 19)
						{
							bVar12 = true;
							iVar13[iVar14] = iVar0;
							iVar14++;
						}
					}
					else if (iVar14 < iVar3)
					{
						if (iVar13[iVar14] == -1)
						{
							bVar12 = true;
							iVar13[iVar14] = iVar0;
							iVar14++;
						}
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (Local_138.f_3146[iVar0 /*19*/].f_10 > 0)
		{
			fVar7 = (Local_138.f_3146[iVar0 /*19*/].f_15 - (Local_138.f_3146[iVar0 /*19*/].f_17 / 2f));
			fVar9 = (Local_138.f_3146[iVar0 /*19*/].f_15.f_1 - (Local_138.f_3146[iVar0 /*19*/].f_17.f_1 / 2f));
			fVar8 = (Local_138.f_3146[iVar0 /*19*/].f_15 + (Local_138.f_3146[iVar0 /*19*/].f_17 / 2f));
			fVar10 = (Local_138.f_3146[iVar0 /*19*/].f_15.f_1 + (Local_138.f_3146[iVar0 /*19*/].f_17.f_1 / 2f));
			if (((Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 > fVar7 && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 < fVar8) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 > fVar9) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 < fVar10)
			{
				if (iVar16 == -1 || Local_138.f_3146[iVar0 /*19*/].f_12 > Local_138.f_3146[iVar16 /*19*/].f_12)
				{
					iVar16 = iVar0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!Local_138.f_3318[iVar0 /*12*/].f_2)
		{
			if (Local_138.f_3318[iVar0 /*12*/].f_1)
			{
				fVar5 = (Local_138.f_141[iParam0 /*82*/].f_39 - Local_138.f_3318[iVar0 /*12*/].f_8);
				fVar6 = (Local_138.f_141[iParam0 /*82*/].f_39.f_1 - Local_138.f_3318[iVar0 /*12*/].f_8.f_1);
				fVar4 = SYSTEM::SQRT(((fVar5 * fVar5) + (fVar6 * fVar6)));
				if (fVar4 < 60f)
				{
					if (iVar17 == -1 || Local_138.f_3318[iVar0 /*12*/].f_4 > Local_138.f_3318[iVar17 /*12*/].f_4)
					{
						iVar17 = iVar0;
						bVar12 = true;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (Local_138.f_3463[iVar0 /*10*/].f_5 == 0)
		{
			if (Local_138.f_3463[iVar0 /*10*/].f_4 == 1)
			{
				switch (Local_138.f_3463[iVar0 /*10*/].f_2)
				{
					case 0:
						Var25 = { __LIB_5__::func_403(76f, 76f) };
						break;
					case 1:
						Var25 = { __LIB_5__::func_403(76f, 76f) };
						break;
					case 2:
						Var25 = { __LIB_5__::func_403(128f, 128f) };
						break;
					case 3:
						Var25 = { __LIB_5__::func_403(128f, 128f) };
						break;
					case 4:
						Var25 = { __LIB_5__::func_403(284f, 276f) };
						break;
					case 5:
						Var25 = { __LIB_5__::func_403(284f, 276f) };
						break;
				}
				fVar7 = (Local_138.f_3463[iVar0 /*10*/].f_6 - (Var25.f_0 / 2f));
				fVar9 = (Local_138.f_3463[iVar0 /*10*/].f_6.f_1 - (Var25.f_1 / 2f));
				fVar8 = (Local_138.f_3463[iVar0 /*10*/].f_6 + (Var25.f_0 / 2f));
				fVar10 = (Local_138.f_3463[iVar0 /*10*/].f_6.f_1 + (Var25.f_1 / 2f));
				if (((Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 > fVar7 && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 < fVar8) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 > fVar9) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 < fVar10)
				{
					if (iVar18 == -1)
					{
						iVar18 = iVar0;
						bVar12 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if ((((iVar18 == -1 && iVar15 == -1) && iVar17 == -1) && iVar13[0] == -1) && iVar16 == -1)
	{
		func_562(17, Var11);
	}
	iVar26 = 0;
	iVar27 = 0;
	iVar28 = 0;
	iVar29 = 0;
	iVar0 = 0;
	if (iVar18 >= 0)
	{
		func_854(iVar18, iParam0, iParam1, &iVar29);
	}
	if (iVar14 == 0)
	{
		iVar14 = 1;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar14 - 1))
	{
		if (iVar13[iVar0] > -1 && Local_138.f_1825[iVar13[iVar0] /*33*/].f_21 == 2)
		{
			func_848(iVar13[iVar0], iParam0, iParam1, __LIB_5__::func_403((Local_138.f_1825[iVar13[iVar0] /*33*/].f_27 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31 / 2f)), (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))), Var11);
		}
		else if (iVar16 > -1 && Local_138.f_3146[iVar16 /*19*/].f_12 == 2)
		{
			func_845(iVar16, iParam0, iParam1, &iVar28);
		}
		else if (iVar17 > -1 && Local_138.f_3318[iVar17 /*12*/].f_4 == 2)
		{
			func_834(iVar17, iParam0, iParam1, &iVar27);
		}
		else if (iVar13[iVar0] > -1 && Local_138.f_1825[iVar13[iVar0] /*33*/].f_1)
		{
			func_848(iVar13[iVar0], iParam0, iParam1, __LIB_5__::func_403((Local_138.f_1825[iVar13[iVar0] /*33*/].f_27 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31 / 2f)), (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))), Var11);
		}
		else if (iVar15 > -1)
		{
			if (Local_138.f_224[iVar15 /*23*/].f_7 == 1 && !func_832(iVar15))
			{
				func_817(iVar15, iParam0, iParam1, &iVar26);
			}
			else if (Local_138.f_224[iVar15 /*23*/].f_7 == 0 || func_832(iVar15))
			{
				if (iVar17 > -1 && Local_138.f_3318[iVar17 /*12*/].f_4 == 1)
				{
					func_834(iVar17, iParam0, iParam1, &iVar27);
				}
				else if (iVar13[iVar0] > -1 && (Local_138.f_1825[iVar13[iVar0] /*33*/].f_21 == 1 || func_832(iVar15)))
				{
					func_848(iVar13[iVar0], iParam0, iParam1, __LIB_5__::func_403((Local_138.f_1825[iVar13[iVar0] /*33*/].f_27 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31 / 2f)), (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))), Var11);
				}
				else if (iVar13[iVar0] > -1 && Local_138.f_1825[iVar13[iVar0] /*33*/].f_21 == 0)
				{
					fVar19 = func_855(Local_138.f_224[iVar15 /*23*/].f_14);
					fVar21 = (Local_138.f_224[iVar15 /*23*/].f_20 * fVar19);
					if (Local_138.f_224[iVar15 /*23*/].f_15.f_1 - (fVar21 / 2f)) < (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 + (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))
					{
						func_848(iVar13[iVar0], iParam0, iParam1, __LIB_5__::func_403((Local_138.f_1825[iVar13[iVar0] /*33*/].f_27 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31 / 2f)), (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))), Var11);
					}
				}
				else if (iVar16 > -1 && Local_138.f_3146[iVar16 /*19*/].f_12 == 1)
				{
					func_845(iVar16, iParam0, iParam1, &iVar28);
				}
				else
				{
					func_817(iVar15, iParam0, iParam1, &iVar26);
				}
			}
		}
		else if (iVar17 > -1)
		{
			if (Local_138.f_3318[iVar17 /*12*/].f_4 == 1)
			{
				func_834(iVar17, iParam0, iParam1, &iVar27);
			}
			else if (Local_138.f_3318[iVar17 /*12*/].f_4 == 0)
			{
				if (iVar13[iVar0] > -1 && Local_138.f_1825[iVar13[iVar0] /*33*/].f_21 == 1)
				{
					func_848(iVar13[iVar0], iParam0, iParam1, __LIB_5__::func_403((Local_138.f_1825[iVar13[iVar0] /*33*/].f_27 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31 / 2f)), (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))), Var11);
				}
				else if (iVar16 > -1 && Local_138.f_3146[iVar16 /*19*/].f_12 == 1)
				{
					func_845(iVar16, iParam0, iParam1, &iVar28);
				}
				else
				{
					func_834(iVar17, iParam0, iParam1, &iVar27);
				}
			}
		}
		else if (iVar13[iVar0] > -1)
		{
			if (Local_138.f_1825[iVar13[iVar0] /*33*/].f_21 == 1)
			{
				func_848(iVar13[iVar0], iParam0, iParam1, __LIB_5__::func_403((Local_138.f_1825[iVar13[iVar0] /*33*/].f_27 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31 / 2f)), (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))), Var11);
			}
			else if (Local_138.f_1825[iVar13[iVar0] /*33*/].f_21 == 0)
			{
				if (iVar16 > -1 && Local_138.f_3146[iVar16 /*19*/].f_12 == 1)
				{
					func_845(iVar16, iParam0, iParam1, &iVar28);
				}
				else
				{
					func_848(iVar13[iVar0], iParam0, iParam1, __LIB_5__::func_403((Local_138.f_1825[iVar13[iVar0] /*33*/].f_27 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31 / 2f)), (Local_138.f_1825[iVar13[iVar0] /*33*/].f_27.f_1 - (Local_138.f_1825[iVar13[iVar0] /*33*/].f_31.f_1 / 2f))), Var11);
				}
			}
		}
		else if (iVar16 > -1)
		{
			if (Local_138.f_3146[iVar16 /*19*/].f_12 == 2)
			{
				func_845(iVar16, iParam0, iParam1, &iVar28);
			}
			else if (Local_138.f_3146[iVar16 /*19*/].f_12 == 1)
			{
				func_845(iVar16, iParam0, iParam1, &iVar28);
			}
			else if (Local_138.f_3146[iVar16 /*19*/].f_12 == 0)
			{
				func_845(iVar16, iParam0, iParam1, &iVar28);
			}
		}
		iVar0++;
	}
	if (!bVar12)
	{
		if (func_816() != 1)
		{
			func_813();
		}
	}
}

void func_813()//Position - 0x7510B
{
	Local_138.f_141[0 /*82*/].f_26 = 0;
	func_815();
	func_814(Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[func_541()]);
}

void func_814(int iParam0)//Position - 0x75136
{
	Local_138.f_141[0 /*82*/].f_28 = iParam0;
}

void func_815()//Position - 0x75149
{
	Local_138.f_141[0 /*82*/].f_27 = 0;
}

int func_816()//Position - 0x7515B
{
	return Local_138.f_141[0 /*82*/].f_26;
}

void func_817(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7516C
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	if (*iParam3)
	{
		return;
	}
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_2 = 1;
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_7 = MISC::GET_GAME_TIMER();
	Local_138.f_224[iParam0 /*23*/].f_8++;
	if (Local_138.f_224[iParam0 /*23*/].f_2)
	{
		Local_138.f_224[iParam0 /*23*/] = 0;
		func_562(54, Local_138.f_224[iParam0 /*23*/].f_15);
		func_830(Local_138.f_224[iParam0 /*23*/].f_15, 0, Local_138.f_224[iParam0 /*23*/].f_7);
		if (Local_138.f_224[iParam0 /*23*/].f_14 == 42 || Local_138.f_224[iParam0 /*23*/].f_14 == 41)
		{
			func_631(Local_138.f_224[iParam0 /*23*/].f_15, Local_138.f_224[iParam0 /*23*/].f_14, Local_138.f_224[iParam0 /*23*/].f_7, 0, Local_138.f_224[iParam0 /*23*/].f_22, 0, 1, 0);
		}
		func_829(Local_138.f_224[iParam0 /*23*/].f_15, 1132068864);
		func_821(2);
	}
	else if (Local_138.f_224[iParam0 /*23*/].f_3)
	{
		if (Local_138.f_224[iParam0 /*23*/])
		{
			if (Local_138.f_224[iParam0 /*23*/].f_14 == 5)
			{
				if (Local_138.f_224[iParam0 /*23*/].f_8 > 2)
				{
					Local_138.f_224[iParam0 /*23*/] = 0;
					func_830(Local_138.f_224[iParam0 /*23*/].f_15, 4, 1);
					if (func_542() == 0)
					{
						func_622(__LIB_5__::func_403(Local_138.f_224[iParam0 /*23*/].f_15, Local_138.f_224[iParam0 /*23*/].f_15.f_1), 0, 2, 0, 1065353216, 0);
					}
					else if (func_542() == 1)
					{
						func_622(__LIB_5__::func_403(Local_138.f_224[iParam0 /*23*/].f_15, Local_138.f_224[iParam0 /*23*/].f_15.f_1), 2, Local_138.f_224[iParam0 /*23*/].f_7, 0, 1065353216, 0);
					}
				}
			}
			else if (Local_138.f_224[iParam0 /*23*/].f_14 == 0)
			{
				if (!Local_138.f_224[iParam0 /*23*/].f_1)
				{
					if (Local_138.f_224[iParam0 /*23*/].f_8 > 0)
					{
						Local_138.f_224[iParam0 /*23*/].f_1 = 1;
						Var2 = { Local_138.f_224[iParam0 /*23*/].f_15 };
						Var2.f_0 = (Var2.f_0 + 16.75f);
						Var2.f_1 = (Var2.f_1 + 102.5f);
						func_622(Var2, 5, 2, 0, 1065353216, 0);
						Local_138.f_224[iParam0 /*23*/].f_1 = 1;
					}
				}
			}
			else if (Local_138.f_224[iParam0 /*23*/].f_14 == 39)
			{
				if (!Local_138.f_224[iParam0 /*23*/].f_1)
				{
					if (Local_138.f_224[iParam0 /*23*/].f_8 > 0)
					{
						Var2 = { Local_138.f_224[iParam0 /*23*/].f_15 };
						Var2.f_0 = (Var2.f_0 + 21.375f);
						Var2.f_1 = (Var2.f_1 + 77f);
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
						if (func_542() == 4)
						{
							if (func_820() || func_638())
							{
								iVar1 = func_819();
								if (iVar1 == 0)
								{
									iVar0 = 8;
								}
								else if (iVar1 == 1)
								{
									iVar0 = 5;
								}
							}
						}
						switch (iVar0)
						{
							case 0:
								func_622(Var2, 7, 2, 0, 0.75f, 0);
								break;
							case 1:
								func_622(Var2, 8, 2, 0, 0.75f, 0);
								break;
							case 2:
								func_622(Var2, 5, 2, 0, 0.75f, 0);
								break;
							case 3:
								func_622(Var2, 0, 2, 0, 0.75f, 0);
								break;
							case 4:
								func_622(Var2, 2, 2, 0, 0.75f, 0);
								break;
							case 5:
								func_622(Var2, 1, 2, 0, 0.75f, 0);
								break;
							case 8:
								func_622(Var2, 6, 2, 0, 0.75f, 0);
								break;
						}
						Local_138.f_224[iParam0 /*23*/].f_1 = 1;
					}
				}
			}
		}
	}
	func_818(iParam0);
	*iParam3 = 1;
}

void func_818(int iParam0)//Position - 0x7550C
{
	int iVar0;
	struct<2> Var1;
	iVar0 = Local_138.f_224[iParam0 /*23*/].f_14;
	Var1 = { Local_138.f_224[iParam0 /*23*/].f_15 };
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			func_562(12, Var1);
			break;
		case 5:
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
		case 23:
		case 24:
		case 30:
		case 31:
		case 41:
		case 42:
		case 43:
		case 32:
			func_562(8, Var1);
			break;
		case 25:
		case 26:
		case 27:
			func_562(11, Var1);
			break;
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 28:
		case 29:
			func_562(13, Var1);
			break;
		case 39:
			func_562(10, Var1);
			break;
		case 0:
			func_562(9, Var1);
			break;
		default:
			func_562(17, Var1);
			break;
	}
}

int func_819()//Position - 0x75694
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (Local_138.f_224[iVar0 /*23*/])
		{
			if (Local_138.f_224[iVar0 /*23*/].f_14 == 39)
			{
				if (__LIB_37__::func_121(Local_138.f_224[iVar0 /*23*/].f_15, 0))
				{
					if (Local_138.f_224[iVar0 /*23*/].f_1)
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_820()//Position - 0x756F2
{
	return (func_639(0) && func_639(1));
}

void func_821(int iParam0)//Position - 0x75709
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	iVar0 = func_828(iParam0);
	iVar1 = func_541();
	func_827();
	iVar2 = func_816();
	fVar3 = 0f;
	if (iVar2 > 1)
	{
		fVar3 = (SYSTEM::TO_FLOAT(iVar2) / 10f);
	}
	func_826(iVar0);
	iVar4 = func_825();
	if (iVar2 == 1)
	{
		Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar1] = (Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar1] + iVar0);
		func_824(iVar0);
		func_757(2);
	}
	else
	{
		if (!func_748(2))
		{
			func_805(2);
			func_814((Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar1] - func_823()));
		}
		iVar0 = (iVar4 + SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar4) * fVar3)));
		Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar1] = (func_822() + iVar0);
	}
	if (func_692() < Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar1])
	{
		Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_8[iVar1] = Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/].f_2[iVar1];
	}
}

int func_822()//Position - 0x75803
{
	return Local_138.f_141[0 /*82*/].f_28;
}

int func_823()//Position - 0x75814
{
	return Local_138.f_141[0 /*82*/].f_29;
}

void func_824(int iParam0)//Position - 0x75825
{
	Local_138.f_141[0 /*82*/].f_29 = iParam0;
}

var func_825()//Position - 0x75838
{
	return Local_138.f_141[0 /*82*/].f_27;
}

void func_826(int iParam0)//Position - 0x75849
{
	Local_138.f_141[0 /*82*/].f_27 = (Local_138.f_141[0 /*82*/].f_27 + iParam0);
}

void func_827()//Position - 0x75866
{
	Local_138.f_141[0 /*82*/].f_26++;
}

int func_828(int iParam0)//Position - 0x75882
{
	switch (iParam0)
	{
		case 0:
			return 100;
		case 1:
			return 150;
		case 4:
			return 250;
		case 2:
			return 10;
		case 3:
			return 100;
		default:
	}
	return 0;
}

void func_829(struct<2> Param0, float fParam1)//Position - 0x758C9
{
	int iVar0;
	struct<2> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Local_138.f_1825[iVar0 /*33*/].f_10 == 1 || Local_138.f_1825[iVar0 /*33*/].f_10 == 2)
		{
			if (Local_138.f_1825[iVar0 /*33*/].f_9 != 18)
			{
				Var1 = { Local_138.f_1825[iVar0 /*33*/].f_27 };
				fVar2 = (Var1.f_0 - Param0.f_0);
				fVar3 = (Var1.f_1 - Param0.f_1);
				fVar4 = ((fVar2 * fVar2) + (fVar3 * fVar3));
				if (fVar4 <= (fParam1 * fParam1))
				{
					Local_138.f_1825[iVar0 /*33*/].f_17 = 0;
					Local_138.f_1825[iVar0 /*33*/].f_10 = 3;
					func_821(3);
				}
			}
		}
		iVar0++;
	}
}

void func_830(struct<2> Param0, int iParam1, int iParam2)//Position - 0x7596F
{
	int iVar0;
	iVar0 = func_831();
	Local_138.f_1375[iVar0 /*8*/].f_6 = { Param0 };
	Local_138.f_1375[iVar0 /*8*/].f_5 = iParam1;
	if (iParam2 == 4 || iParam2 == 3)
	{
		iParam2 = 0;
	}
	Local_138.f_1375[iVar0 /*8*/].f_4 = iParam2;
	Local_138.f_1375[iVar0 /*8*/].f_1 = 0;
	Local_138.f_1375[iVar0 /*8*/] = 1;
}

int func_831()//Position - 0x759D2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_138.f_1375[iVar0 /*8*/] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_832(int iParam0)//Position - 0x759FF
{
	if (Local_138.f_224[iParam0 /*23*/].f_14 == 39 && Local_138.f_224[iParam0 /*23*/].f_6)
	{
		return 0;
	}
	return func_833(Local_138.f_224[iParam0 /*23*/].f_14);
}

int func_833(int iParam0)//Position - 0x75A38
{
	if (func_542() == 2)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 17:
		case 20:
		case 21:
		case 40:
		case 14:
			return 1;
			break;
	}
	return 0;
}

void func_834(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x75A91
{
	if (*iParam3)
	{
		return;
	}
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_1 = 1;
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_7 = MISC::GET_GAME_TIMER();
	Local_138.f_3318[iParam0 /*12*/].f_2 = 1;
	func_835(iParam0);
	*iParam3 = 1;
}

void func_835(int iParam0)//Position - 0x75ADD
{
	int iVar0;
	struct<7> Var1;
	switch (Local_138.f_3318[iParam0 /*12*/].f_3)
	{
		case 6:
			func_555(3, 1);
			func_561(103);
			Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
			Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
			break;
		case 0:
			func_561(81);
			Local_138.f_141[0 /*82*/].f_35 = __LIB_0__::func_331((Local_138.f_141[0 /*82*/].f_35 + 0.5f), 0f, 1f);
			Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
			Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
			break;
		case 5:
			Var1 = { func_560(0) };
			func_561(45);
			Local_138.f_141[0 /*82*/].f_13[0 /*4*/] = Var1.f_0;
			Local_138.f_141[0 /*82*/].f_13[0 /*4*/].f_1 = Var1.f_1;
			Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
			Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
			break;
		case 7:
			func_561(105);
			func_555(1, 1);
			Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
			Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
			break;
		case 8:
			func_561(104);
			func_555(2, 1);
			Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
			Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
			break;
		case 2:
			func_561(82);
			func_805(0);
			Local_138.f_141[0 /*82*/].f_31 = MISC::GET_GAME_TIMER();
			Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
			Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
			func_771(2);
			func_842(110);
			break;
		case 1:
			func_561(83);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			switch (iVar0)
			{
				case 0:
					Local_138.f_141[0 /*82*/].f_35 = 1f;
					break;
				case 1:
					func_837(3, 1065353216);
					break;
				case 2:
					func_805(1);
					Local_138.f_141[0 /*82*/].f_32 = MISC::GET_GAME_TIMER();
					func_771(2);
					func_842(111);
					break;
				case 3:
					func_805(0);
					func_771(2);
					func_842(110);
					Local_138.f_141[0 /*82*/].f_31 = MISC::GET_GAME_TIMER();
					break;
			}
			Local_138.f_3318[iParam0 /*12*/].f_1 = 0;
			Local_138.f_3318[iParam0 /*12*/].f_5 = 0;
			break;
	}
	func_836();
}

void func_836()//Position - 0x75D01
{
	Local_138.f_78[func_542()]++;
}

void func_837(int iParam0, float fParam1)//Position - 0x75D1F
{
	float fVar0;
	if (func_748(0))
	{
		return;
	}
	if (iParam0 == 3)
	{
		if (func_45() <= 0.3f)
		{
			return;
		}
	}
	fVar0 = func_841(iParam0);
	fVar0 = (fVar0 * fParam1);
	Local_138.f_141[0 /*82*/].f_35 = __LIB_0__::func_331((Local_138.f_141[0 /*82*/].f_35 - fVar0), 0f, 1f);
	if (Local_138.f_141[0 /*82*/].f_35 > 0f)
	{
		func_838(Local_138.f_141[0 /*82*/].f_35);
	}
	if (Local_138.f_141[0 /*82*/].f_35 == 0f)
	{
		Local_138.f_141[0 /*82*/].f_25 = 128;
	}
	else
	{
		Local_138.f_141[0 /*82*/].f_25 = 3;
	}
}

void func_838(float fParam0)//Position - 0x75DB3
{
	if (fParam0 <= 0f)
	{
		return;
	}
	if (func_839())
	{
		if (fParam0 >= 0.8f)
		{
			func_561(44);
		}
		else if (fParam0 >= 0.5f)
		{
			func_561(43);
		}
		else if (fParam0 >= 0.2f)
		{
			func_561(42);
		}
		else if (fParam0 > 0f)
		{
			func_561(41);
		}
	}
}

bool func_839()//Position - 0x75E18
{
	return (((func_840(41) && func_840(42)) && func_840(43)) && func_840(44));
}

bool func_840(int iParam0)//Position - 0x75E47
{
	if (Local_138.f_3547[iParam0] == -1)
	{
		return 1;
	}
	return AUDIO::HAS_SOUND_FINISHED(Local_138.f_3547[iParam0]);
}

float func_841(int iParam0)//Position - 0x75E6D
{
	switch (iParam0)
	{
		case 0:
			return 0.1f;
		case 1:
			return 0.3f;
		case 2:
			return 0.2f;
		case 3:
			return 0.2f;
		default:
	}
	return 0f;
}

void func_842(int iParam0)//Position - 0x75EB5
{
	func_843(iParam0, __LIB_5__::func_403(0f, 0f));
}

void func_843(int iParam0, struct<2> Param1)//Position - 0x75EC9
{
	char* sVar0;
	char[] cVar1[8];
	struct<2> Var2;
	func_564(iParam0, &sVar0, &cVar1);
	if (Local_138.f_3547[iParam0] == -1)
	{
		Local_138.f_3547[iParam0] = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_138.f_3547[iParam0], &sVar0, &cVar1, false);
	if (Param1.f_0 != 0f)
	{
		Var2 = { __LIB_16__::func_772(Param1) };
		AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_3547[iParam0], "Screen_Position", Var2.f_0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_138.f_3547[iParam0], "Screen_Position", 0.5f);
	}
}

void func_845(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x75F6D
{
	if (*iParam3)
	{
		return;
	}
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_1 = 1;
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_7 = MISC::GET_GAME_TIMER();
	Local_138.f_3146[iParam0 /*19*/].f_10 = (Local_138.f_3146[iParam0 /*19*/].f_10 - 10);
	if (!Local_138.f_3146[iParam0 /*19*/].f_2 == 1)
	{
		if (Local_138.f_3146[iParam0 /*19*/].f_10 <= 0)
		{
			Local_138.f_3146[iParam0 /*19*/].f_2 = 1;
			func_847(Local_138.f_3146[iParam0 /*19*/].f_11, Local_138.f_3146[iParam0 /*19*/].f_15);
			if (Local_138.f_3146[iParam0 /*19*/].f_11 == 6 || Local_138.f_3146[iParam0 /*19*/].f_11 == 5)
			{
				func_846();
				func_821(4);
				func_830(Local_138.f_3146[iParam0 /*19*/].f_15, 5, 0);
			}
			else if (Local_138.f_3146[iParam0 /*19*/].f_11 == 7)
			{
				func_846();
				func_821(4);
			}
			else if ((Local_138.f_3146[iParam0 /*19*/].f_11 == 7 || Local_138.f_3146[iParam0 /*19*/].f_11 == 8) || Local_138.f_3146[iParam0 /*19*/].f_11 == 9)
			{
				func_821(4);
			}
		}
	}
	*iParam3 = 1;
}

void func_846()//Position - 0x760A1
{
	Local_138.f_66[func_542()]++;
}

void func_847(int iParam0, struct<2> Param1)//Position - 0x760BF
{
	switch (iParam0)
	{
		case 0:
			func_562(57, Param1);
			break;
		case 1:
			func_562(61, Param1);
			break;
		case 6:
			func_562(74, Param1);
			func_561(95);
			break;
		case 7:
			func_562(69, Param1);
			func_561(95);
			break;
		case 8:
			func_562(76, Param1);
			func_561(95);
			break;
		case 9:
			func_562(78, Param1);
			func_561(95);
			break;
		case 5:
			func_562(80, Param1);
			func_561(95);
			break;
	}
}

void func_848(int iParam0, int iParam1, int iParam2, struct<2> Param3, struct<2> Param4)//Position - 0x76171
{
	bool bVar0;
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_1 = 1;
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_7 = MISC::GET_GAME_TIMER();
	if (!Local_138.f_1825[iParam0 /*33*/].f_5)
	{
		Local_138.f_1825[iParam0 /*33*/].f_5 = 1;
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_9 != 18 && Local_138.f_1825[iParam0 /*33*/].f_9 != 19)
	{
		bVar0 = func_853(Param3, Param4, Local_138.f_1825[iParam0 /*33*/].f_21, Local_138.f_1825[iParam0 /*33*/].f_9);
		Local_138.f_1825[iParam0 /*33*/].f_17 = (Local_138.f_1825[iParam0 /*33*/].f_17 - func_852(iParam0, bVar0));
		if (Local_138.f_1825[iParam0 /*33*/].f_17 > 0)
		{
			func_562(7, Local_138.f_1825[iParam0 /*33*/].f_27);
			func_562(47, Local_138.f_1825[iParam0 /*33*/].f_27);
			func_851();
		}
		else
		{
			if (bVar0 && !func_850(iParam0))
			{
				if (!func_717(5))
				{
					func_715(5);
				}
				func_821(1);
				func_849();
				func_851();
				func_561(94);
			}
			else
			{
				func_821(0);
				func_851();
			}
			if (Local_138.f_1825[iParam0 /*33*/].f_9 == 16)
			{
				func_562(53, Local_138.f_1825[iParam0 /*33*/].f_27);
			}
			else if (func_850(iParam0))
			{
				func_562(71, Local_138.f_1825[iParam0 /*33*/].f_27);
			}
			else
			{
				func_562(7, Local_138.f_1825[iParam0 /*33*/].f_27);
				func_562(46, Local_138.f_1825[iParam0 /*33*/].f_27);
			}
			Local_138.f_1825[iParam0 /*33*/].f_10 = 3;
		}
	}
	else
	{
		if (!Local_138.f_1825[iParam0 /*33*/].f_7)
		{
			if (Local_138.f_1825[iParam0 /*33*/].f_9 == 18)
			{
				func_562(92, Local_138.f_1825[iParam0 /*33*/].f_27);
				func_562(18, Local_138.f_1825[iParam0 /*33*/].f_27);
			}
			else if (Local_138.f_1825[iParam0 /*33*/].f_9 == 19)
			{
				func_561(93);
			}
			Local_138.f_1825[iParam0 /*33*/].f_7 = 1;
		}
		if (Local_138.f_1825[iParam0 /*33*/].f_16 == 4)
		{
			Local_138.f_1825[iParam0 /*33*/].f_17 = (Local_138.f_1825[iParam0 /*33*/].f_17 - 10);
			bVar0 = func_853(Param3, Param4, Local_138.f_1825[iParam0 /*33*/].f_21, Local_138.f_1825[iParam0 /*33*/].f_9);
			if (bVar0)
			{
				func_821(1);
				func_851();
				func_849();
				func_561(94);
			}
			else
			{
				func_821(0);
				func_851();
			}
			if (Local_138.f_1825[iParam0 /*33*/].f_17 <= 0)
			{
				Local_138.f_1825[iParam0 /*33*/].f_10 = 3;
			}
		}
	}
}

void func_849()//Position - 0x76407
{
	Local_138.f_60[func_542()]++;
}

bool func_850(int iParam0)//Position - 0x76425
{
	return Local_138.f_1825[iParam0 /*33*/].f_9 == 15;
}

void func_851()//Position - 0x7643B
{
	Local_138.f_54[func_542()]++;
}

int func_852(int iParam0, bool bParam1)//Position - 0x76459
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;
	if (bParam1)
	{
		return func_619(Local_138.f_1825[iParam0 /*33*/].f_9);
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_9 == 18 || Local_138.f_1825[iParam0 /*33*/].f_9 == 19)
	{
		return func_619(Local_138.f_1825[iParam0 /*33*/].f_9);
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_21 == 2)
	{
		return func_619(Local_138.f_1825[iParam0 /*33*/].f_9);
	}
	iVar2 = func_743();
	Var3 = { func_560(iVar2) };
	iVar0 = Var3.f_5;
	if (Local_138.f_141[0 /*82*/].f_11 == 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		iVar0 = (iVar0 + iVar1);
		return iVar0;
	}
	return Var3.f_5;
}

int func_853(struct<2> Param0, struct<2> Param1, int iParam2, int iParam3)//Position - 0x7650B
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::ABSF((Param1.f_1 - Param0.f_1));
	if (iParam3 != 18 && iParam3 != 19)
	{
		switch (iParam2)
		{
			case 0:
				fVar1 = 0f;
				fVar2 = 63f;
				break;
			case 1:
				fVar1 = 0f;
				fVar2 = 43f;
				break;
			case 2:
				fVar1 = 0f;
				fVar2 = 148f;
				break;
		}
	}
	else if (iParam3 == 18)
	{
		fVar1 = 126.5f;
		fVar2 = 159.25f;
	}
	else
	{
		fVar1 = 0f;
		fVar2 = 90f;
	}
	fVar0 = MISC::ABSF((Param1.f_1 - Param0.f_1));
	if (fVar0 >= fVar1 && fVar0 <= fVar2)
	{
		return 1;
	}
	return 0;
}

void func_854(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x765BF
{
	if (*iParam3)
	{
		return;
	}
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_1 = 1;
	Local_138.f_141[iParam1 /*82*/].f_41[iParam2 /*10*/].f_7 = MISC::GET_GAME_TIMER();
	Local_138.f_3463[iParam0 /*10*/].f_4 = 2;
	func_830(Local_138.f_3463[iParam0 /*10*/].f_6, 3, 1);
	PAD::SET_CONTROL_SHAKE(2 /*FRONTEND_CONTROL*/, 100, 20);
	func_562(55, Local_138.f_3463[iParam0 /*10*/].f_6);
	func_829(Local_138.f_3463[iParam0 /*10*/].f_6, 1132068864);
	*iParam3 = 1;
}

float func_855(int iParam0)//Position - 0x76649
{
	if (func_856(iParam0))
	{
		return 0.6f;
	}
	if (iParam0 == 32)
	{
		return 0.8f;
	}
	if (((iParam0 == 38 || iParam0 == 34) || iParam0 == 35) || iParam0 == 36)
	{
		return 0.7f;
	}
	return 1f;
}

bool func_856(int iParam0)//Position - 0x766A3
{
	return (func_616(iParam0) || func_857(iParam0));
}

int func_857(int iParam0)//Position - 0x766BD
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		default:
	}
	return 0;
}

void func_858(int iParam0, int iParam1)//Position - 0x766E9
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	if (!Local_138.f_141[iParam0 /*82*/])
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_138.f_3474[iVar0 /*6*/] == Local_138.f_106)
		{
			Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_1 = 1;
			fVar1 = (Local_138.f_3474[iVar0 /*6*/].f_2 - (Local_138.f_3474[iVar0 /*6*/].f_4 / 2f));
			fVar3 = (Local_138.f_3474[iVar0 /*6*/].f_2.f_1 - (Local_138.f_3474[iVar0 /*6*/].f_4.f_1 / 2f));
			fVar2 = (Local_138.f_3474[iVar0 /*6*/].f_2 + (Local_138.f_3474[iVar0 /*6*/].f_4 / 2f));
			fVar4 = (Local_138.f_3474[iVar0 /*6*/].f_2.f_1 + (Local_138.f_3474[iVar0 /*6*/].f_4.f_1 / 2f));
			if (((Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 > fVar1 && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8 < fVar2) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 > fVar3) && Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_8.f_1 < fVar4)
			{
				bVar5 = true;
				Local_138.f_141[iParam0 /*82*/].f_41[iParam1 /*10*/].f_7 = MISC::GET_GAME_TIMER();
				if (func_860(Local_138.f_3474[iVar0 /*6*/].f_1))
				{
					func_859(Local_138.f_3474[iVar0 /*6*/].f_1);
				}
				else
				{
					func_561(3);
				}
			}
		}
		iVar0++;
	}
	if (!bVar5)
	{
		func_561(14);
	}
}

void func_859(int iParam0)//Position - 0x76855
{
	switch (iParam0)
	{
		case 0:
			func_561(85);
			func_561(16);
			func_537(5);
			break;
		case 1:
			if (!__LIB_37__::func_136())
			{
				func_675(0);
				func_674(0);
				func_561(15);
				func_537(10);
			}
			break;
		case 2:
			Local_138.f_139 = 0;
			func_561(2);
			func_561(86);
			func_537(6);
			break;
		case 3:
			Local_138.f_139 = 1;
			func_561(2);
			func_561(87);
			func_537(6);
			break;
		case 4:
			Local_138.f_139 = 2;
			func_561(2);
			func_561(88);
			func_537(6);
			break;
		case 5:
			Local_138.f_139 = 3;
			func_561(2);
			func_561(89);
			func_537(6);
			break;
		case 6:
			Local_138.f_139 = 4;
			func_561(2);
			func_561(90);
			func_537(6);
			break;
	}
}

int func_860(int iParam0)//Position - 0x7693B
{
	switch (iParam0)
	{
		case 4:
			return func_861(2);
		case 5:
			return func_861(3);
		case 6:
			return func_861(4);
		default:
	}
	return 1;
}

int func_861(int iParam0)//Position - 0x76975
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
			break;
		case 2:
			return 1;
			break;
		case 3:
			if (Local_138.f_1[1] || Local_138.f_1[2])
			{
				return 1;
			}
			break;
		case 4:
			if (Local_138.f_1[2] || Local_138.f_1[3])
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_862()//Position - 0x769ED
{
	int iVar0;
	iVar0 = func_743();
	switch (iVar0)
	{
		case 0:
			if (func_840(21))
			{
				func_561(21);
			}
			break;
		case 1:
			if (func_840(24))
			{
				func_561(24);
			}
			break;
		case 2:
			if (func_840(27))
			{
				func_561(27);
			}
			break;
	}
}

bool func_863()//Position - 0x76A4A
{
	return __LIB_37__::func_127(func_743());
}

void func_865(int iParam0)//Position - 0x76A6D
{
	int iVar0;
	if (func_863())
	{
		return;
	}
	iVar0 = Local_138.f_141[0 /*82*/].f_11;
	Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/] = (Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/] - iParam0);
	if (Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/] < 0)
	{
		Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/] = 0;
	}
	Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_1 = (Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_1 - iParam0);
	if (Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_1 < 0)
	{
		Local_138.f_141[0 /*82*/].f_13[iVar0 /*4*/].f_1 = 0;
	}
}

void func_866()//Position - 0x76B0A
{
	int iVar0;
	iVar0 = func_743();
	switch (iVar0)
	{
		case 0:
			func_561(20);
			break;
		case 1:
			func_561(22);
			break;
		case 2:
			func_561(25);
			break;
		case 3:
			func_561(28);
			break;
	}
}

void func_867()//Position - 0x76B5B
{
	Local_138.f_48[func_542()]++;
}

void func_868()//Position - 0x76B79
{
	float fVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (Local_138.f_3146[iVar1 /*19*/].f_1)
		{
			Local_138.f_3146[iVar1 /*19*/].f_9 = (Local_138.f_3146[iVar1 /*19*/].f_9 + Local_138.f_3146[iVar1 /*19*/].f_8);
			if (Local_138.f_3146[iVar1 /*19*/].f_10 > 0)
			{
				if (Local_138.f_3146[iVar1 /*19*/].f_9 >= 2)
				{
					Local_138.f_3146[iVar1 /*19*/].f_9 = 0;
				}
				if (Local_138.f_3146[iVar1 /*19*/].f_3 == 0 && Local_138.f_3146[iVar1 /*19*/].f_14 != 0f)
				{
					if (Local_138.f_3146[iVar1 /*19*/].f_15 < Local_138.f_3146[iVar1 /*19*/].f_14)
					{
						Local_138.f_3146[iVar1 /*19*/].f_3 = 1;
					}
					else
					{
						Local_138.f_3146[iVar1 /*19*/].f_15 = (Local_138.f_3146[iVar1 /*19*/].f_15 - func_875());
					}
				}
				else
				{
					Local_138.f_3146[iVar1 /*19*/].f_15 = (Local_138.f_3146[iVar1 /*19*/].f_15 + func_875());
				}
				fVar0 = Local_138.f_3146[iVar1 /*19*/].f_15;
				if (!func_874(iVar1, 0))
				{
					if (fVar0 > 250f && fVar0 < 1605f)
					{
						func_873(iVar1, 0);
						func_872(Local_138.f_3146[iVar1 /*19*/].f_11, Local_138.f_3146[iVar1 /*19*/].f_15);
					}
				}
				else if (Local_138.f_3146[iVar1 /*19*/].f_11 == 0 || Local_138.f_3146[iVar1 /*19*/].f_11 == 1)
				{
					if (!func_874(iVar1, 1))
					{
						if (fVar0 < 250f || fVar0 > 1605f)
						{
							func_873(iVar1, 1);
							func_871(Local_138.f_3146[iVar1 /*19*/].f_11, Local_138.f_3146[iVar1 /*19*/].f_15);
							func_870();
							func_546(iVar1);
						}
						else
						{
							Jump @520; //curOff = 442
							if (Local_138.f_3146[iVar1 /*19*/].f_2)
							{
								if (func_640())
								{
									Local_138.f_3146[iVar1 /*19*/].f_15 = (Local_138.f_3146[iVar1 /*19*/].f_15 - func_869());
								}
								if (Local_138.f_3146[iVar1 /*19*/].f_9 >= 3)
								{
									Local_138.f_3146[iVar1 /*19*/].f_2 = 0;
								}
							}
						}
						iVar1++;
					}
float func_869()//Position - 0x76D8D
{
	return func_635();
}

void func_870()//Position - 0x76D99
{
	Local_138.f_72[func_542()]++;
}

void func_871(int iParam0, struct<2> Param1)//Position - 0x76DB7
{
	switch (iParam0)
	{
		case 0:
			func_562(59, Param1);
			break;
		case 1:
			func_562(63, Param1);
			break;
	}
}

void func_872(int iParam0, struct<2> Param1)//Position - 0x76DEC
{
	switch (iParam0)
	{
		case 0:
			func_562(56, Param1);
			break;
		case 1:
			func_562(60, Param1);
			break;
		case 6:
			func_562(73, Param1);
			break;
		case 7:
			func_562(68, Param1);
			break;
		case 8:
			func_562(75, Param1);
			break;
		case 9:
			func_562(77, Param1);
			break;
		case 5:
			func_562(79, Param1);
			break;
	}
}

void func_873(int iParam0, int iParam1)//Position - 0x76E80
{
	if (!func_874(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Local_138.f_3146[iParam0 /*19*/].f_13), iParam1);
	}
}

bool func_874(int iParam0, int iParam1)//Position - 0x76EA5
{
	return BitTest(Local_138.f_3146[iParam0 /*19*/].f_13, iParam1);
}

float func_875()//Position - 0x76EBB
{
	return (6f * func_636());
}

void func_876()//Position - 0x76EC9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (Local_138.f_3463[iVar0 /*10*/].f_4)
		{
			case 1:
				Local_138.f_3463[iVar0 /*10*/].f_2 = (Local_138.f_3463[iVar0 /*10*/].f_2 + Local_138.f_3463[iVar0 /*10*/].f_1);
				if (Local_138.f_3463[iVar0 /*10*/].f_2 >= 6)
				{
					Local_138.f_3463[iVar0 /*10*/].f_4 = 2;
					func_837(1, 1065353216);
					func_830(Local_138.f_3463[iVar0 /*10*/].f_6, 3, 1);
					PAD::SET_CONTROL_SHAKE(2 /*FRONTEND_CONTROL*/, 100, 20);
					func_562(55, Local_138.f_3463[iVar0 /*10*/].f_6);
				}
				break;
			case 2:
				func_548(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_877()//Position - 0x76F80
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	float fVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	struct<2> Var8;
	iVar0 = MISC::GET_GAME_TIMER();
	iVar2 = 0;
	while (iVar2 <= 39)
	{
		iVar1 = -1;
		if (!Local_138.f_1825[iVar2 /*33*/].f_8)
		{
			if ((Local_138.f_1825[iVar2 /*33*/].f_10 == 1 || Local_138.f_1825[iVar2 /*33*/].f_10 == 2) || Local_138.f_1825[iVar2 /*33*/].f_10 == 3)
			{
				fVar4 = Local_138.f_1825[iVar2 /*33*/].f_27;
				if (fVar4 > 250f && fVar4 < 1605f)
				{
					Local_138.f_1825[iVar2 /*33*/].f_8 = 1;
					if (func_850(iVar2))
					{
						func_562(70, Local_138.f_1825[iVar2 /*33*/].f_27);
					}
				}
			}
		}
		switch (Local_138.f_1825[iVar2 /*33*/].f_10)
		{
			case 1:
				if (Local_138.f_1825[iVar2 /*33*/].f_9 == 16)
				{
					Local_138.f_1825[iVar2 /*33*/].f_16 = 0;
				}
				else if (Local_138.f_1825[iVar2 /*33*/].f_9 == 18 || Local_138.f_1825[iVar2 /*33*/].f_9 == 19)
				{
					if (Local_138.f_1825[iVar2 /*33*/].f_5)
					{
						Local_138.f_1825[iVar2 /*33*/].f_16 = (Local_138.f_1825[iVar2 /*33*/].f_16 + Local_138.f_1825[iVar2 /*33*/].f_15);
						if (Local_138.f_1825[iVar2 /*33*/].f_16 > 4)
						{
							Local_138.f_1825[iVar2 /*33*/].f_16 = 4;
						}
					}
				}
				else
				{
					Local_138.f_1825[iVar2 /*33*/].f_16 = (Local_138.f_1825[iVar2 /*33*/].f_16 + Local_138.f_1825[iVar2 /*33*/].f_15);
					if (Local_138.f_1825[iVar2 /*33*/].f_16 >= 2)
					{
						Local_138.f_1825[iVar2 /*33*/].f_16 = 0;
					}
				}
				if (Local_138.f_1825[iVar2 /*33*/].f_17 <= 0)
				{
					Local_138.f_1825[iVar2 /*33*/].f_10 = 3;
				}
				if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
				{
					if (!Local_138.f_1825[iVar2 /*33*/].f_1)
					{
						if (Local_138.f_1825[iVar2 /*33*/].f_27 >= (Local_138.f_1825[iVar2 /*33*/].f_26 - 10f) && Local_138.f_1825[iVar2 /*33*/].f_27 <= (Local_138.f_1825[iVar2 /*33*/].f_26 + 10f))
						{
							if (func_901(Local_138.f_1825[iVar2 /*33*/].f_21, Local_138.f_1825[iVar2 /*33*/].f_26, &iVar1) && !Local_138.f_1825[iVar2 /*33*/].f_6)
							{
								func_900(iVar2, iVar1);
							}
							else
							{
								Local_138.f_1825[iVar2 /*33*/].f_10 = 2;
								Local_138.f_1825[iVar2 /*33*/].f_19 = MISC::GET_GAME_TIMER();
							}
						}
						else if (Local_138.f_1825[iVar2 /*33*/].f_10 == 1 && !Local_138.f_1825[iVar2 /*33*/].f_6)
						{
							if (func_896(Local_138.f_97[Local_138.f_34], iVar2))
							{
								Local_138.f_1825[iVar2 /*33*/].f_10 = 2;
								Local_138.f_1825[iVar2 /*33*/].f_19 = MISC::GET_GAME_TIMER();
							}
						}
					}
					switch (Local_138.f_1825[iVar2 /*33*/].f_21)
					{
						case 2:
							if (Local_138.f_1825[iVar2 /*33*/])
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 + func_895(1));
							}
							else
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 - func_895(0));
							}
							break;
						case 1:
							if (Local_138.f_1825[iVar2 /*33*/])
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 + func_894(1));
							}
							else
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 - func_894(0));
							}
							break;
						case 0:
							if (Local_138.f_1825[iVar2 /*33*/])
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 + func_893(1));
							}
							else
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 - func_893(0));
							}
							break;
					}
				}
				else
				{
					if (Local_138.f_1825[iVar2 /*33*/].f_16 == 4)
					{
						Local_138.f_1825[iVar2 /*33*/].f_10 = 2;
						Local_138.f_1825[iVar2 /*33*/].f_19 = MISC::GET_GAME_TIMER();
					}
					if (func_640() && Local_138.f_1825[iVar2 /*33*/].f_21 != 2)
					{
						Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 - func_892());
						fVar6 = func_762(Local_138.f_1825[iVar2 /*33*/].f_9, Local_138.f_1825[iVar2 /*33*/].f_21);
						if (Local_138.f_1825[iVar2 /*33*/].f_27 <= 0f)
						{
							if (Local_138.f_1825[iVar2 /*33*/].f_9 == 18)
							{
								if (Local_138.f_1825[iVar2 /*33*/].f_27 < 200f)
								{
									Local_138.f_1825[iVar2 /*33*/].f_27 = (1920f + ((Local_138.f_1825[iVar2 /*33*/].f_31 * fVar6) / 2f));
									Local_138.f_1825[iVar2 /*33*/].f_23++;
								}
							}
							else if (Local_138.f_1825[iVar2 /*33*/].f_9 == 19)
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = func_630();
								Local_138.f_1825[iVar2 /*33*/].f_23++;
							}
						}
						else if (!Local_138.f_1825[iVar2 /*33*/].f_5)
						{
							if (func_891(iVar2))
							{
								fVar7 = ((1920f / 2f) + (1920f - 1605f));
								if ((Local_138.f_1825[iVar2 /*33*/].f_27 - ((Local_138.f_1825[iVar2 /*33*/].f_31 * func_762(18, Local_138.f_1825[iVar2 /*33*/].f_21)) / 2f)) < fVar7)
								{
									bVar5 = true;
								}
							}
						}
					}
					else if (!Local_138.f_1825[iVar2 /*33*/].f_5)
					{
						if (func_889())
						{
							if (Local_138.f_1825[iVar2 /*33*/].f_27 < 1605f)
							{
								if (Local_138.f_1825[iVar2 /*33*/].f_25 == 0)
								{
									Local_138.f_1825[iVar2 /*33*/].f_25 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - Local_138.f_1825[iVar2 /*33*/].f_25) > 15000)
								{
									bVar5 = true;
								}
								else if (func_887() == func_42())
								{
									if (func_40() == 1)
									{
										bVar5 = true;
									}
								}
							}
						}
					}
					if (bVar5)
					{
						Local_138.f_1825[iVar2 /*33*/].f_5 = 1;
						func_562(49, Local_138.f_1825[iVar2 /*33*/].f_27);
					}
				}
				if (Local_138.f_1825[iVar2 /*33*/].f_10 == 1)
				{
					if (func_886(iVar2))
					{
						Local_138.f_1825[iVar2 /*33*/].f_10 = 4;
						if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
						{
							Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] = (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] - 1);
						}
						if (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] < 0)
						{
							Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] = 0;
						}
					}
				}
				break;
			case 2:
				if (func_640() && Local_138.f_1825[iVar2 /*33*/].f_21 != 2)
				{
					Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 - func_885());
				}
				if (func_884(iVar2))
				{
					if (iVar0 - Local_138.f_1825[iVar2 /*33*/].f_19) > (2000 - Local_138.f_139 * 200)
					{
						Local_138.f_1825[iVar2 /*33*/].f_19 = MISC::GET_GAME_TIMER();
						if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
						{
							if (Local_138.f_1825[iVar2 /*33*/].f_21 == 2)
							{
								func_830(__LIB_5__::func_403((Local_138.f_1825[iVar2 /*33*/].f_27 + 30f), (Local_138.f_1825[iVar2 /*33*/].f_27.f_1 + 45f)), 1, Local_138.f_1825[iVar2 /*33*/].f_21);
							}
							else if (Local_138.f_1825[iVar2 /*33*/].f_9 != 17)
							{
								func_830(__LIB_5__::func_403((Local_138.f_1825[iVar2 /*33*/].f_27 + -20f), (Local_138.f_1825[iVar2 /*33*/].f_27.f_1 + -30f)), 1, Local_138.f_1825[iVar2 /*33*/].f_21);
							}
						}
						else
						{
							func_830(__LIB_5__::func_403(Local_138.f_1825[iVar2 /*33*/].f_27, Local_138.f_1825[iVar2 /*33*/].f_27.f_1), 1, Local_138.f_1825[iVar2 /*33*/].f_21);
						}
						if (func_750() <= 0)
						{
							if (Local_138.f_141[0 /*82*/].f_33 == 0)
							{
								Local_138.f_141[0 /*82*/].f_33 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - Local_138.f_141[0 /*82*/].f_33) >= 1000)
							{
								if (Local_138.f_141[0 /*82*/].f_35 > 0.05f)
								{
									Local_138.f_141[0 /*82*/].f_35 = 0.05f;
								}
							}
						}
						else if (Local_138.f_141[0 /*82*/].f_33 != 0)
						{
							Local_138.f_141[0 /*82*/].f_33 = 0;
						}
						func_837(0, 1065353216);
						func_562(49, Local_138.f_1825[iVar2 /*33*/].f_27);
					}
					else
					{
						if (!Local_138.f_1825[iVar2 /*33*/].f_3)
						{
							if (iVar0 - Local_138.f_1825[iVar2 /*33*/].f_19) > ((2000 - Local_138.f_139 * 200) - 1000)
							{
								if (func_45() <= 0.1f && func_45() > 0f)
								{
									Local_138.f_1825[iVar2 /*33*/].f_3 = 1;
									func_562(50, Local_138.f_1825[iVar2 /*33*/].f_27);
								}
							}
						}
						else if (func_45() > 0.4f)
						{
							Local_138.f_1825[iVar2 /*33*/].f_3 = 0;
						}
						if (!Local_138.f_1825[iVar2 /*33*/].f_2)
						{
							func_562(48, Local_138.f_1825[iVar2 /*33*/].f_27);
							Local_138.f_1825[iVar2 /*33*/].f_2 = 1;
						}
					}
				}
				else if (func_850(iVar2))
				{
					if (iVar0 - Local_138.f_1825[iVar2 /*33*/].f_19) > (2000 - Local_138.f_139 * 200)
					{
						Local_138.f_1825[iVar2 /*33*/].f_19 = MISC::GET_GAME_TIMER();
						func_556(6);
						func_562(72, Local_138.f_1825[iVar2 /*33*/].f_27);
						Local_138.f_3536 = MISC::GET_GAME_TIMER();
						func_837(2, 1065353216);
					}
				}
				if (func_886(iVar2))
				{
					Local_138.f_1825[iVar2 /*33*/].f_10 = 4;
					if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
					{
						Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] = (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] - 1);
					}
					if (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] < 0)
					{
						Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] = 0;
					}
				}
				if (Local_138.f_1825[iVar2 /*33*/].f_9 == 17)
				{
					if (!Local_138.f_1825[iVar2 /*33*/].f_6)
					{
						Local_138.f_1825[iVar2 /*33*/].f_16 = (Local_138.f_1825[iVar2 /*33*/].f_16 + Local_138.f_1825[iVar2 /*33*/].f_15);
						if (Local_138.f_1825[iVar2 /*33*/].f_16 > 2)
						{
							Local_138.f_1825[iVar2 /*33*/].f_16 = 2;
							Local_138.f_1825[iVar2 /*33*/].f_6 = 1;
							Local_138.f_1825[iVar2 /*33*/].f_19 = MISC::GET_GAME_TIMER();
							Var3 = { Local_138.f_1825[iVar2 /*33*/].f_27 };
							Var3.f_0 = (Var3.f_0 - 23.75f);
							Var3.f_1 = (Var3.f_1 - 95.125f);
							func_883(0, Var3);
							func_562(51, Local_138.f_1825[iVar2 /*33*/].f_27);
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_138.f_1825[iVar2 /*33*/].f_19) > 1000)
					{
						if (Local_138.f_1825[iVar2 /*33*/])
						{
							Local_138.f_1825[iVar2 /*33*/].f_26 = 1700f;
						}
						else
						{
							Local_138.f_1825[iVar2 /*33*/].f_26 = 0f;
						}
						Local_138.f_1825[iVar2 /*33*/].f_10 = 1;
					}
				}
				func_882(iVar2);
				break;
			case 3:
				if (func_640())
				{
					Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 - func_881());
				}
				if (Local_138.f_1825[iVar2 /*33*/].f_9 == 16)
				{
					Local_138.f_1825[iVar2 /*33*/].f_16 = (Local_138.f_1825[iVar2 /*33*/].f_16 + Local_138.f_1825[iVar2 /*33*/].f_15);
					if (Local_138.f_1825[iVar2 /*33*/].f_16 >= 4)
					{
						Local_138.f_1825[iVar2 /*33*/].f_10 = 4;
						if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
						{
							Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] = (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] - 1);
						}
						Local_138.f_1825[iVar2 /*33*/].f_16 = 0;
						if (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] < 0)
						{
							Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] = 0;
						}
					}
				}
				else
				{
					if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
					{
						switch (Local_138.f_1825[iVar2 /*33*/].f_21)
						{
							case 2:
								Local_138.f_1825[iVar2 /*33*/].f_27.f_1 = (Local_138.f_1825[iVar2 /*33*/].f_27.f_1 - 10f);
								Local_138.f_1825[iVar2 /*33*/].f_11 += 5;
								break;
							case 1:
								Local_138.f_1825[iVar2 /*33*/].f_27.f_1 = (Local_138.f_1825[iVar2 /*33*/].f_27.f_1 - 10f);
								Local_138.f_1825[iVar2 /*33*/].f_11 += 10;
								break;
							case 0:
							case 4:
							case 3:
								Local_138.f_1825[iVar2 /*33*/].f_27.f_1 = (Local_138.f_1825[iVar2 /*33*/].f_27.f_1 - 2f);
								Local_138.f_1825[iVar2 /*33*/].f_11 += 5;
								break;
							}
					}
					if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
					{
						if (Local_138.f_1825[iVar2 /*33*/].f_11 > 50)
						{
							Local_138.f_1825[iVar2 /*33*/].f_10 = 4;
							if (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] > 0)
							{
								Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] = (Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] - 1);
							}
							if (Local_138.f_1825[iVar2 /*33*/].f_21 == 4 || Local_138.f_1825[iVar2 /*33*/].f_21 == 3)
							{
								if (Local_138.f_1825[iVar2 /*33*/].f_4)
								{
									Local_138.f_15[Local_138.f_1825[iVar2 /*33*/].f_21] = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						Local_138.f_1825[iVar2 /*33*/].f_16 = (Local_138.f_1825[iVar2 /*33*/].f_16 + Local_138.f_1825[iVar2 /*33*/].f_15);
						if (Local_138.f_1825[iVar2 /*33*/].f_16 > 6)
						{
							Local_138.f_1825[iVar2 /*33*/].f_16 = 6;
						}
						if (!func_889())
						{
							if ((Local_138.f_1825[iVar2 /*33*/].f_27 + Local_138.f_1825[iVar2 /*33*/].f_31) < 250f)
							{
								Local_138.f_1825[iVar2 /*33*/].f_10 = 4;
								if (Local_138.f_1825[iVar2 /*33*/].f_9 == 18)
								{
									Var8 = { __LIB_5__::func_403((Local_138.f_1825[iVar2 /*33*/].f_27 + (1920f * 2f)), 676.125f) };
									func_631(Var8, 0, Local_138.f_1825[iVar2 /*33*/].f_21, 0, 0, 0, 0, 0);
								}
								else if (!func_638() && !func_820())
								{
									func_618(Local_138.f_1825[iVar2 /*33*/].f_27, Local_138.f_1825[iVar2 /*33*/].f_27.f_1, Local_138.f_1825[iVar2 /*33*/].f_27, 1, 0, 19, 0, 0, 0, 1);
								}
							}
						}
					}
				}
				break;
			case 0:
				if (((Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21] < 1 || Local_138.f_1825[iVar2 /*33*/].f_9 == 18) || Local_138.f_1825[iVar2 /*33*/].f_9 == 19) || (Local_138.f_1825[iVar2 /*33*/].f_9 == 16 && func_542() == 3))
				{
					if (Local_138.f_1825[iVar2 /*33*/].f_22 <= func_42())
					{
						if (Local_138.f_1825[iVar2 /*33*/].f_4)
						{
							if (func_640())
							{
								break;
							}
						}
						if (Local_138.f_1825[iVar2 /*33*/].f_1)
						{
							if (Local_138.f_1825[iVar2 /*33*/].f_4)
							{
								if (Local_138.f_15[Local_138.f_1825[iVar2 /*33*/].f_21] == 0 || (MISC::GET_GAME_TIMER() - Local_138.f_15[Local_138.f_1825[iVar2 /*33*/].f_21]) > 4000)
								{
									Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21]++;
									Local_138.f_1825[iVar2 /*33*/].f_10 = 2;
								}
							}
							else if (func_880(iVar2, 10f))
							{
								Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21]++;
								Local_138.f_1825[iVar2 /*33*/].f_10 = 2;
							}
						}
						else if (Local_138.f_1825[iVar2 /*33*/].f_24 == 0 || Local_138.f_1825[iVar2 /*33*/].f_24 == Local_138.f_1825[iVar2 /*33*/].f_23)
						{
							if (Local_138.f_1825[iVar2 /*33*/].f_9 != 18 && Local_138.f_1825[iVar2 /*33*/].f_9 != 19)
							{
								Local_138.f_9[Local_138.f_1825[iVar2 /*33*/].f_21]++;
							}
							Local_138.f_1825[iVar2 /*33*/].f_10 = 1;
						}
					}
				}
				if (func_640())
				{
					if ((Local_138.f_1825[iVar2 /*33*/].f_1 || (func_542() == 3 && func_879(iVar2))) || Local_138.f_1825[iVar2 /*33*/].f_24 > 0)
					{
						if (!Local_138.f_1825[iVar2 /*33*/].f_4)
						{
							Local_138.f_1825[iVar2 /*33*/].f_27 = (Local_138.f_1825[iVar2 /*33*/].f_27 - func_878());
						}
						if (Local_138.f_1825[iVar2 /*33*/].f_24 > 0)
						{
							if (Local_138.f_1825[iVar2 /*33*/].f_27 <= 0f)
							{
								Local_138.f_1825[iVar2 /*33*/].f_27 = func_630();
								Local_138.f_1825[iVar2 /*33*/].f_23++;
							}
						}
					}
				}
				break;
		}
		iVar2++;
	}
	if (func_639(6))
	{
		if ((MISC::GET_GAME_TIMER() - Local_138.f_3536) > 3000)
		{
			func_776(func_542(), 6);
		}
	}
}

float func_878()//Position - 0x78100
{
	return func_635();
}

bool func_879(int iParam0)//Position - 0x7810C
{
	return Local_138.f_1825[iParam0 /*33*/].f_9 == 16;
}

bool func_880(int iParam0, float fParam1)//Position - 0x78122
{
	return __LIB_37__::func_121(Local_138.f_1825[iParam0 /*33*/].f_27, fParam1);
}

float func_881()//Position - 0x7813D
{
	return func_635();
}

void func_882(int iParam0)//Position - 0x78149
{
	if (!Local_138.f_1825[iParam0 /*33*/].f_1)
	{
		return;
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_20 == 0)
	{
		if (Local_138.f_1825[iParam0 /*33*/].f_27.f_1 > Local_138.f_1825[iParam0 /*33*/].f_26)
		{
			Local_138.f_1825[iParam0 /*33*/].f_27.f_1 = (Local_138.f_1825[iParam0 /*33*/].f_27.f_1 - 4f);
		}
		else
		{
			Local_138.f_1825[iParam0 /*33*/].f_20 = MISC::GET_GAME_TIMER();
		}
	}
	else if ((MISC::GET_GAME_TIMER() - Local_138.f_1825[iParam0 /*33*/].f_20) > 5000)
	{
		if (Local_138.f_1825[iParam0 /*33*/].f_27.f_1 < Local_138.f_1825[iParam0 /*33*/].f_29.f_1)
		{
			Local_138.f_1825[iParam0 /*33*/].f_27.f_1 = (Local_138.f_1825[iParam0 /*33*/].f_27.f_1 + 4f);
		}
		else if ((MISC::GET_GAME_TIMER() - Local_138.f_1825[iParam0 /*33*/].f_20) > 8000)
		{
			Local_138.f_1825[iParam0 /*33*/].f_20 = 0;
		}
	}
}

void func_883(int iParam0, struct<2> Param1)//Position - 0x78234
{
	if (Local_138.f_24 > 0)
	{
		return;
	}
	Local_138.f_3463[Local_138.f_24 /*10*/].f_4 = 1;
	Local_138.f_3463[Local_138.f_24 /*10*/].f_5 = iParam0;
	Local_138.f_3463[Local_138.f_24 /*10*/].f_6 = { Param1 };
}

int func_884(int iParam0)//Position - 0x78277
{
	float fVar0;
	float fVar1;
	if (Local_138.f_1825[iParam0 /*33*/].f_27 >= 1605f)
	{
		return 0;
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_27 <= 300f)
	{
		return 0;
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_9 == 17)
	{
		return 0;
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_9 == 17)
	{
		return 0;
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_9 == 15)
	{
		return 0;
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_1)
	{
		fVar0 = Local_138.f_1825[iParam0 /*33*/].f_27.f_1;
		fVar1 = (Local_138.f_1825[iParam0 /*33*/].f_26 + 10f);
		if (fVar0 > fVar1)
		{
			return 0;
		}
	}
	return 1;
}

float func_885()//Position - 0x78328
{
	return func_635();
}

int func_886(int iParam0)//Position - 0x78334
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Var0 = { Local_138.f_1825[iParam0 /*33*/].f_27 };
	Var1 = { Local_138.f_1825[iParam0 /*33*/].f_31 };
	fVar2 = func_762(Local_138.f_1825[iParam0 /*33*/].f_9, Local_138.f_1825[iParam0 /*33*/].f_21);
	uVar3 = Local_138.f_1825[iParam0 /*33*/];
	uVar4 = Local_138.f_1825[iParam0 /*33*/].f_6;
	iVar5 = Local_138.f_1825[iParam0 /*33*/].f_9;
	if (iVar5 == 19)
	{
		if (func_639(1))
		{
			if (!Local_138.f_1825[iParam0 /*33*/].f_8)
			{
				return 1;
			}
		}
	}
	if (Local_138.f_1825[iParam0 /*33*/].f_10 == 1)
	{
		if (!Local_138.f_1825[iParam0 /*33*/].f_8)
		{
			return 0;
		}
		else if (Local_138.f_1825[iParam0 /*33*/].f_9 == 18 || Local_138.f_1825[iParam0 /*33*/].f_9 == 19)
		{
			if (!Local_138.f_1825[iParam0 /*33*/].f_5)
			{
				if (!func_820())
				{
					return 0;
				}
			}
		}
	}
	if (Var0.f_0 < (250f - (Var1.f_0 * fVar2)))
	{
		return 1;
	}
	if ((uVar3 && uVar4) && Var0.f_0 > (1605f + (Var1.f_0 * fVar2)))
	{
		return 1;
	}
	if ((uVar3 && Local_138.f_1825[iParam0 /*33*/].f_8) && Var0.f_0 > (1920f * 2f))
	{
		return 1;
	}
	if (func_820())
	{
		if (Local_138.f_1825[iParam0 /*33*/].f_10 == 2 || ((iVar5 == 19 || iVar5 == 18) && Local_138.f_1825[iParam0 /*33*/].f_10 == 1))
		{
			if (Var0.f_0 > 1605f)
			{
				return 1;
			}
			else if (Var0.f_0 <= 300f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_887()//Position - 0x784E7
{
	return func_888(Local_138.f_139);
}

int func_888(int iParam0)//Position - 0x784F7
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 1;
			break;
		case 4:
			return 1;
			break;
	}
	return 0;
}

bool func_889()//Position - 0x78548
{
	int iVar0;
	int iVar1;
	iVar0 = Local_138.f_139;
	iVar1 = func_42();
	return func_890(iVar0, iVar1);
}

int func_890(int iParam0, int iParam1)//Position - 0x78564
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return 1;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 1;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return 1;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					return 1;
				default:
			}
			break;
	}
	return 0;
}

int func_891(int iParam0)//Position - 0x785F6
{
	if (Local_138.f_1825[iParam0 /*33*/].f_24 == 0)
	{
		if (Local_138.f_1825[iParam0 /*33*/].f_23 > 0)
		{
			return 1;
		}
	}
	else if (Local_138.f_1825[iParam0 /*33*/].f_23 > Local_138.f_1825[iParam0 /*33*/].f_24)
	{
		return 1;
	}
	return 0;
}

float func_892()//Position - 0x78641
{
	return func_635();
}

float func_893(bool bParam0)//Position - 0x7864D
{
	if (bParam0)
	{
		return (16f * func_636());
	}
	return (20f * func_636());
}

float func_894(bool bParam0)//Position - 0x78671
{
	if (bParam0)
	{
		return (11f * func_636());
	}
	return (15f * func_636());
}

float func_895(bool bParam0)//Position - 0x78695
{
	if (bParam0)
	{
		return (6f * func_636());
	}
	return (10f * func_636());
}

int func_896(int iParam0, int iParam1)//Position - 0x786B5
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	if (Local_138.f_1825[iParam1 /*33*/].f_21 == 2)
	{
		return 0;
	}
	iVar0 = Local_138.f_224[iParam0 /*23*/].f_14;
	if (Local_138.f_1825[iParam1 /*33*/].f_21 != Local_138.f_224[iParam0 /*23*/].f_7)
	{
		return 0;
	}
	if (!func_899(iVar0))
	{
		return 0;
	}
	if (!func_898(iParam0))
	{
		return 0;
	}
	Var1 = { Local_138.f_1825[iParam1 /*33*/].f_27 };
	Var2 = { Local_138.f_224[iParam0 /*23*/].f_15 };
	fVar3 = Local_138.f_224[iParam0 /*23*/].f_19;
	fVar6 = func_641(iVar0, Local_138.f_224[iParam0 /*23*/].f_7);
	fVar3 = (fVar3 * fVar6);
	fVar7 = MISC::ABSF((Var1.f_1 - Var2.f_1));
	if (!func_897(iParam0, 0))
	{
		return 0;
	}
	bVar8 = Local_138.f_1825[iParam1 /*33*/];
	if (bVar8)
	{
		if (Var2.f_0 < (1920f / 3f))
		{
			return 0;
		}
	}
	else if (Var2.f_0 > (1605f - 100f))
	{
		return 0;
	}
	if (fVar7 > 175f)
	{
		return 0;
	}
	fVar4 = (Var2.f_0 + (fVar3 / 2f));
	fVar5 = (Var2.f_0 - (fVar3 / 2f));
	if (Var1.f_0 > fVar5 && Var1.f_0 < fVar4)
	{
		return 1;
	}
	return 0;
}

bool func_897(int iParam0, float fParam1)//Position - 0x787E9
{
	return __LIB_37__::func_121(Local_138.f_224[iParam0 /*23*/].f_15, fParam1);
}

bool func_898(int iParam0)//Position - 0x78803
{
	return Local_138.f_224[iParam0 /*23*/];
}

int func_899(int iParam0)//Position - 0x78813
{
	switch (iParam0)
	{
		case 32:
		case 14:
		case 28:
		case 29:
		case 27:
		case 42:
		case 30:
			return 1;
			break;
		case 26:
			if (func_542() != 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_900(int iParam0, int iParam1)//Position - 0x78869
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = Local_138.f_224[iParam1 /*23*/].f_19;
	iVar2 = Local_138.f_1825[iParam0 /*33*/].f_21;
	switch (func_542())
	{
		case 2:
			fVar1 = 1920f;
			if (!Local_138.f_1825[iParam0 /*33*/])
			{
				Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 - fVar1);
			}
			else
			{
				Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 + fVar1);
			}
			break;
		case 4:
			if (iVar2 == 0)
			{
				if (Local_138.f_1825[iParam0 /*33*/])
				{
					Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 + 16f);
				}
				else
				{
					Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 - 20f);
				}
			}
			else if (iVar2 == 1)
			{
				if (Local_138.f_1825[iParam0 /*33*/])
				{
					Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 + 11f);
				}
				else
				{
					Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 - 15f);
				}
			}
			break;
		default:
			fVar1 = (fVar0 * 0.75f);
			if (!Local_138.f_1825[iParam0 /*33*/])
			{
				Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 - fVar1);
			}
			else
			{
				Local_138.f_1825[iParam0 /*33*/].f_26 = (Local_138.f_1825[iParam0 /*33*/].f_26 + fVar1);
			}
			break;
	}
}

int func_901(int iParam0, float fParam1, int iParam2)//Position - 0x789DA
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (Local_138.f_224[iVar0 /*23*/].f_7 == iParam0)
		{
			if (func_902(Local_138.f_224[iVar0 /*23*/].f_14))
			{
				fVar1 = func_641(Local_138.f_224[iVar0 /*23*/].f_14, iParam0);
				fVar2 = (Local_138.f_224[iVar0 /*23*/].f_15 + ((Local_138.f_224[iVar0 /*23*/].f_19 * fVar1) / 2f));
				fVar3 = (Local_138.f_224[iVar0 /*23*/].f_15 - ((Local_138.f_224[iVar0 /*23*/].f_19 * fVar1) / 2f));
				if (fParam1 >= fVar3 && fParam1 <= fVar2)
				{
					*iParam2 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_902(int iParam0)//Position - 0x78A7B
{
	switch (iParam0)
	{
		case 5:
		case 39:
		case 0:
		case 40:
		case 6:
		case 7:
		case 8:
		case 9:
		case 23:
		case 24:
		case 31:
		case 33:
		case 35:
		case 34:
			return 1;
		default:
	}
	return 0;
}

void func_903()//Position - 0x78AE3
{
	struct<8> Var0;
	int iVar1;
	func_913();
	Var0 = { func_912(Local_138.f_139) };
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Var0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Var0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Local_138.f_90[iVar1] = -1;
		iVar1++;
	}
	func_674(Local_138.f_139);
	func_617(0);
	func_910();
	func_909();
	func_675(Local_138.f_139);
	func_908();
	func_907();
	func_971();
	func_539();
	func_522(0);
	func_771(1);
	func_906();
	Local_138.f_29 = MISC::GET_GAME_TIMER();
	Local_138.f_42[Local_138.f_139] = 0;
	Local_138.f_48[Local_138.f_139] = 0;
	Local_138.f_54[Local_138.f_139] = 0;
	Local_138.f_60[Local_138.f_139] = 0;
	Local_138.f_78[Local_138.f_139] = 0;
	Local_138.f_34 = 0;
	func_773();
	Local_138.f_89 = 1;
	Local_138.f_88 = 100000000f;
	Local_138.f_87 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Local_138.f_9[iVar1] = 0;
		Local_138.f_15[iVar1] = 0;
		iVar1++;
	}
	Local_138.f_30 = 0;
	Local_138.f_3544 = 0;
	Local_138.f_3545 = 0;
	func_776(Local_138.f_139, 0);
	func_776(Local_138.f_139, 1);
	func_776(Local_138.f_139, 5);
	func_776(Local_138.f_139, 7);
	func_776(Local_138.f_139, 9);
	func_776(Local_138.f_139, 8);
	func_776(Local_138.f_139, 11);
	func_776(Local_138.f_139, 10);
	func_776(Local_138.f_139, 12);
	func_776(Local_138.f_139, 8);
	func_776(Local_138.f_139, 13);
	if (func_659(func_541()) > 0)
	{
		func_556(3);
	}
	MISC::CLEAR_BIT(&(Local_138.f_3546), 1);
	MISC::CLEAR_BIT(&(Local_138.f_3546), 3);
	MISC::CLEAR_BIT(&(Local_138.f_3546), 4);
	__LIB_37__::func_133();
	func_537(7);
	func_905(7);
	func_532(__LIB_37__::func_128(func_542()));
}

void func_905(int iParam0)//Position - 0x78CEE
{
	char cVar0[32];
	StringCopy(&cVar0, func_533(iParam0), 32);
	AUDIO::PREPARE_MUSIC_EVENT(&cVar0);
}

void func_906()//Position - 0x78D07
{
	int iVar0;
	iVar0 = func_743();
	switch (iVar0)
	{
		case 0:
			func_561(19);
			break;
		case 1:
			func_561(23);
			break;
		case 2:
			func_561(26);
			break;
	}
}

void func_907()//Position - 0x78D49
{
	Local_138.f_140 = 1;
}

void func_908()//Position - 0x78D56
{
	float fVar0;
	struct<2> Var1;
	var uVar2;
	switch (Local_138.f_139)
	{
		case 0:
			func_622(__LIB_5__::func_403(5000f, 500f), 0, 1, 0, 1065353216, 0);
			func_622(__LIB_5__::func_403(8800f, 504.375f), 0, 1, 0, 1065353216, 0);
			func_622(__LIB_5__::func_403(10000f, 500f), 5, 1, 0, 1065353216, 0);
			break;
		case 1:
			func_622(__LIB_5__::func_403((928f + 1920f), 812f), 2, 1, 0, 1065353216, 0);
			fVar0 = (1920f / 2f);
			func_624(0, 2, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 0, 1, 1, 1065353216, 0);
			func_622(Var1, 5, 1, 0, 1065353216, 2);
			fVar0 = (1920f + (1920f / 2f));
			func_624(5, 3, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 5, 1, 1, 1065353216, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_624(0, 4, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 0, 1, 0, 1065353216, 0);
			func_622(Var1, 0, 1, 0, 1065353216, 2);
			break;
		case 2:
			func_624(5, 1, &Var1, &uVar2);
			func_622(Var1, 5, 1, 2, 1065353216, 0);
			func_624(1, 1, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 1, 1, 3, 1065353216, 0);
			fVar0 = (1920f / 2f);
			func_624(7, 2, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 7, 1, 0, 1065353216, 0);
			func_624(0, 2, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 0, 1, 0, 1065353216, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_624(1, 3, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 1, 1, 0, 1065353216, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_624(0, 4, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 0, 1, 0, 1065353216, 0);
			break;
		case 3:
			func_624(7, 1, &Var1, &uVar2);
			func_622(Var1, 7, 1, 0, 1065353216, 0);
			func_624(0, 1, &Var1, &uVar2);
			func_622(Var1, 0, 1, 2, 1065353216, 0);
			fVar0 = (1920f / 2f);
			func_624(2, 2, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 2, 1, 1, 1065353216, 0);
			func_624(7, 2, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 7, 1, 2, 1065353216, 0);
			fVar0 = 1920f;
			func_624(1, 3, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 1, 1, 2, 1065353216, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_624(0, 4, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 0, 1, 0, 1065353216, 0);
			func_624(8, 4, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 8, 1, 1, 1065353216, 0);
			break;
		case 4:
			func_624(7, 1, &Var1, &uVar2);
			func_622(Var1, 7, 1, 0, 1065353216, 0);
			func_624(1, 1, &Var1, &uVar2);
			func_622(Var1, 1, 1, 0, 1065353216, 0);
			fVar0 = (1920f / 2f);
			func_624(2, 2, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 2, 1, 1, 1065353216, 0);
			fVar0 = 1920f;
			func_624(8, 3, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 8, 1, 1, 1065353216, 0);
			fVar0 = (1920f + (1920f / 2f));
			func_624(0, 4, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 0, 1, 1, 1065353216, 0);
			func_624(7, 4, &Var1, &uVar2);
			Var1.f_0 = (Var1.f_0 + fVar0);
			func_622(Var1, 7, 1, 1, 1065353216, 0);
			break;
	}
}

void func_909()//Position - 0x79181
{
	Local_138.f_141[0 /*82*/].f_37 = { __LIB_5__::func_403(200f, 860f) };
	Local_138.f_141[0 /*82*/].f_39 = { __LIB_5__::func_403((1920f / 2f), (1080f / 2f)) };
	Local_138.f_141[0 /*82*/].f_30 = 0;
	Local_138.f_141[0 /*82*/].f_31 = 0;
	Local_138.f_141[0 /*82*/].f_32 = 0;
	Local_138.f_141[0 /*82*/].f_7 = 0;
	Local_138.f_141[0 /*82*/].f_8 = 0;
	Local_138.f_141[0 /*82*/].f_33 = 0;
	func_813();
}

void func_910()//Position - 0x791FF
{
	switch (Local_138.f_139)
	{
		case 0:
			func_911(7200f, 410f, -200f, 0, 0, 0);
			func_911(10000f, 931.125f, -200f, 2, 0, 9);
			func_911(12000f, 730f, 800f, 1, 0, 1);
			func_911(20000f, 610f, 800f, 1, 0, 0);
			func_911(-1000f, 170f, 100f, 0, 1, 6);
			func_911(-8000f, 170f, 100f, 0, 1, 6);
			func_911(-14000f, 170f, 100f, 0, 1, 6);
			func_911(25000f, 410f, 100f, 0, 0, 0);
			break;
		case 1:
			func_911(7200f, 410f, -200f, 0, 0, 0);
			func_911(5000f, 931.125f, -200f, 2, 0, 8);
			func_911(10000f, 931.125f, -200f, 2, 0, 9);
			func_911(12000f, 730f, 800f, 1, 0, 1);
			func_911(20000f, 730f, 800f, 1, 0, 0);
			func_911(-1000f, 170f, 100f, 0, 1, 6);
			func_911(-8000f, 170f, 100f, 0, 1, 6);
			func_911(25000f, 410f, 100f, 0, 0, 0);
			break;
		case 2:
			func_911(7200f, 410f, -200f, 0, 0, 0);
			func_911(12000f, 730f, 800f, 1, 0, 1);
			func_911(5000f, 931.125f, -200f, 2, 0, 8);
			func_911(15000f, 730f, 800f, 2, 0, 0);
			func_911(-1000f, 170f, 100f, 0, 1, 5);
			func_911(-8000f, 170f, 100f, 0, 1, 5);
			func_911(-14000f, 170f, 100f, 0, 1, 5);
			func_911(20000f, 410f, 100f, 0, 0, 0);
			break;
		case 3:
			func_911(5000f, 931.125f, -200f, 2, 0, 8);
			func_911(7200f, 410f, -200f, 0, 0, 0);
			func_911(12000f, 730f, 800f, 1, 0, 1);
			func_911(20000f, 730f, 800f, 1, 0, 0);
			func_911(2800f, 200f, 100f, 0, 0, 7);
			func_911(8000f, 300f, 100f, 0, 0, 7);
			func_911(14000f, 170f, 100f, 0, 0, 7);
			func_911(25000f, 410f, 100f, 0, 0, 0);
			break;
		case 4:
			func_911(5000f, 931.125f, -200f, 2, 0, 8);
			func_911(7200f, 410f, -200f, 0, 0, 0);
			func_911(12000f, 730f, 800f, 1, 0, 1);
			func_911(20000f, 730f, 800f, 1, 0, 0);
			func_911(-1000f, 160f, 100f, 0, 1, 5);
			func_911(-8000f, 170f, 100f, 0, 1, 5);
			func_911(-14000f, 160f, 100f, 0, 1, 5);
			func_911(25000f, 410f, 100f, 0, 0, 0);
			break;
	}
}

void func_911(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x795B3
{
	Local_138.f_3146[Local_138.f_25 /*19*/].f_1 = 1;
	Local_138.f_3146[Local_138.f_25 /*19*/].f_15 = fParam0;
	Local_138.f_3146[Local_138.f_25 /*19*/].f_15.f_1 = fParam1;
	Local_138.f_3146[Local_138.f_25 /*19*/].f_14 = fParam2;
	Local_138.f_3146[Local_138.f_25 /*19*/].f_11 = iParam5;
	Local_138.f_3146[Local_138.f_25 /*19*/].f_12 = iParam3;
	Local_138.f_3146[Local_138.f_25 /*19*/].f_3 = iParam4;
	Local_138.f_3146[Local_138.f_25 /*19*/].f_10 = 10;
	switch (Local_138.f_3146[Local_138.f_25 /*19*/].f_11)
	{
		case 0:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 116f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 196f;
			break;
		case 1:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 160f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 200f;
			break;
		case 6:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 192f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 140f;
			break;
		case 5:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 192f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 140f;
			break;
		case 7:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 68f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 64f;
			break;
		case 9:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 100f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 84f;
			break;
		case 8:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 140f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 64f;
			break;
		case 2:
		case 3:
		case 4:
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17 = 116f;
			Local_138.f_3146[Local_138.f_25 /*19*/].f_17.f_1 = 196f;
			break;
	}
	Local_138.f_25++;
}

struct<8> func_912(int iParam0)//Position - 0x797D4
{
	struct<8> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { Local_138.f_3754 };
			break;
		case 1:
			Var0 = { Local_138.f_3762 };
			break;
		case 2:
			Var0 = { Local_138.f_3770 };
			break;
		case 3:
			Var0 = { Local_138.f_3778 };
			break;
		case 4:
			Var0 = { Local_138.f_3786 };
			break;
	}
	return Var0;
}

void func_913()//Position - 0x79856
{
	func_682();
	func_914();
	func_755(1);
	func_751();
	func_567();
}

void func_914()//Position - 0x79873
{
	float fVar0;
	char cVar1[24];
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	fVar0 = 0.65f;
	iVar3 = func_736();
	iVar5 = 2;
	StringCopy(&cVar1, "selectbounty", 24);
	__LIB_36__::func_716(&(Local_138.f_3738), &cVar1, __LIB_5__::func_403((1920f / 2f), (1080f / 8f)), __LIB_5__::func_403(328f, 52f), 0f, Local_138.f_111);
	Var2 = { Local_138.f_3738 };
	StringCopy(&cVar1, "LVL01", 24);
	if (Local_138.f_1[0])
	{
		StringConCat(&cVar1, "_COMPLETED", 24);
		Var2 = { Local_138.f_3746 };
	}
	__LIB_36__::func_716(&Var2, &cVar1, __LIB_5__::func_403(((1920f / 10f) * 3f), ((1080f / 8f) * 3f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 0f, Local_138.f_111);
	Var2 = { Local_138.f_3738 };
	StringCopy(&cVar1, "LVL02", 24);
	if (Local_138.f_1[1])
	{
		StringConCat(&cVar1, "_COMPLETED", 24);
		Var2 = { Local_138.f_3746 };
	}
	__LIB_36__::func_716(&Var2, &cVar1, __LIB_5__::func_403(((1920f / 10f) * 5f), ((1080f / 8f) * 3f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 0f, Local_138.f_111);
	Var2 = { Local_138.f_3738 };
	if (Local_138.f_1[2])
	{
		StringCopy(&cVar1, "LVL03_COMPLETED", 24);
		Var2 = { Local_138.f_3746 };
	}
	else if (func_861(2))
	{
		StringCopy(&cVar1, "LVL03", 24);
	}
	else
	{
		StringCopy(&cVar1, "LVL03_LOCKED", 24);
	}
	__LIB_36__::func_716(&Var2, &cVar1, __LIB_5__::func_403(((1920f / 10f) * 7f), ((1080f / 8f) * 3f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 0f, Local_138.f_111);
	Var2 = { Local_138.f_3738 };
	if (Local_138.f_1[3])
	{
		StringCopy(&cVar1, "LVL04_COMPLETED", 24);
		Var2 = { Local_138.f_3746 };
	}
	else if (func_861(3))
	{
		StringCopy(&cVar1, "LVL04", 24);
	}
	else
	{
		StringCopy(&cVar1, "LVL04_LOCKED", 24);
	}
	__LIB_36__::func_716(&Var2, &cVar1, __LIB_5__::func_403(((1920f / 10f) * 4f), ((1080f / 8f) * 6f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 0f, Local_138.f_111);
	Var2 = { Local_138.f_3738 };
	if (Local_138.f_1[4])
	{
		StringCopy(&cVar1, "LVL05_COMPLETED", 24);
		Var2 = { Local_138.f_3746 };
	}
	else if (func_861(4))
	{
		StringCopy(&cVar1, "LVL05", 24);
	}
	else
	{
		StringCopy(&cVar1, "LVL05_LOCKED", 24);
	}
	__LIB_36__::func_716(&Var2, &cVar1, __LIB_5__::func_403(((1920f / 10f) * 6f), ((1080f / 8f) * 6f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 0f, Local_138.f_111);
	if (iVar3 == 1)
	{
		bVar6 = true;
		iVar7 = 2;
		if (__LIB_5__::func_106(PLAYER::PLAYER_ID()) == 1)
		{
			bVar6 = false;
		}
		if (!bVar6)
		{
			iVar7 = 3;
		}
		iVar4 = 0;
		iVar8 = func_659(iVar4);
		if (iVar8 > 0)
		{
			func_918(iVar8, __LIB_5__::func_403(579.5f, 551.25f), Local_138.f_111, iVar7, 0.5f);
		}
		iVar4 = 1;
		iVar8 = func_659(iVar4);
		if (iVar8 > 0)
		{
			func_918(iVar8, __LIB_5__::func_403(965.75f, 551.25f), Local_138.f_111, iVar7, 0.5f);
		}
		iVar4 = 2;
		iVar8 = func_659(iVar4);
		if (iVar8 > 0)
		{
			func_918(iVar8, __LIB_5__::func_403(1348.125f, 551.25f), Local_138.f_111, iVar7, 0.5f);
		}
		iVar4 = 3;
		iVar8 = func_659(iVar4);
		if (iVar8 > 0)
		{
			func_918(iVar8, __LIB_5__::func_403(771.25f, 957.25f), Local_138.f_111, iVar7, 0.5f);
		}
		iVar4 = 4;
		iVar8 = func_659(iVar4);
		if (iVar8 > 0)
		{
			func_918(iVar8, __LIB_5__::func_403(1159.5f, 957.25f), Local_138.f_111, iVar7, 0.5f);
		}
		iVar9 = func_654();
		if (iVar9 > 0)
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "NUMERICAL_DOLLAR", __LIB_5__::func_403(486.375f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
			func_697(func_654(), 6, __LIB_5__::func_403(592.125f, 130f), Local_138.f_111, iVar7, 1065353216);
		}
	}
	else if (iVar3 > 1)
	{
		iVar4 = 0;
		iVar10 = func_727(iVar4);
		iVar11 = func_726(iVar4);
		iVar5 = 2;
		if (iVar10 > 0)
		{
			func_701("NUMERICAL_DOLLAR", __LIB_5__::func_403(462.875f, 551.25f), __LIB_5__::func_403((28f * 0.5f), (40f * 0.5f)));
			func_698(iVar10, __LIB_5__::func_403(475.875f, 551.25f), Local_138.f_111, iVar5, 0.5f, 0);
		}
		if (iVar11 > 0)
		{
			func_917(iVar11, __LIB_5__::func_403(675.75f, 551.25f), Local_138.f_111, 3, "NUMERICAL_DOLLAR", 0.5f);
		}
		if (func_727(iVar4) > func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_RED", __LIB_5__::func_403(469.75f, 533.25f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		else if (func_727(iVar4) < func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_BLUE", __LIB_5__::func_403(671f, 533.25f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		iVar4 = 1;
		iVar10 = func_727(iVar4);
		iVar11 = func_726(iVar4);
		if (iVar10 > 0)
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "NUMERICAL_DOLLAR", __LIB_5__::func_403(846.625f, 551.25f), __LIB_5__::func_403((28f * 0.5f), (40f * 0.5f)), 0f, Local_138.f_111);
			func_698(iVar10, __LIB_5__::func_403(860.375f, 551.25f), Local_138.f_111, iVar5, 0.5f, 0);
		}
		if (iVar11 > 0)
		{
			func_917(iVar11, __LIB_5__::func_403(1062.375f, 551.25f), Local_138.f_111, 3, "NUMERICAL_DOLLAR", 0.5f);
		}
		if (func_727(iVar4) > func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_RED", __LIB_5__::func_403(854.125f, 533.25f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		else if (func_727(iVar4) < func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_BLUE", __LIB_5__::func_403(1057.75f, 533.25f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		iVar4 = 2;
		iVar10 = func_727(iVar4);
		iVar11 = func_726(iVar4);
		if (iVar10 > 0)
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "NUMERICAL_DOLLAR", __LIB_5__::func_403(1231.87f, 551.25f), __LIB_5__::func_403((28f * 0.5f), (40f * 0.5f)), 0f, Local_138.f_111);
			func_698(iVar10, __LIB_5__::func_403(1245.62f, 551.25f), Local_138.f_111, iVar5, 0.5f, 0);
		}
		if (iVar11 > 0)
		{
			func_917(iVar11, __LIB_5__::func_403(1446.875f, 551.25f), Local_138.f_111, 3, "NUMERICAL_DOLLAR", 0.5f);
		}
		if (func_727(iVar4) > func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_RED", __LIB_5__::func_403(1238.625f, 533.25f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		else if (func_727(iVar4) < func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_BLUE", __LIB_5__::func_403(1442f, 533.25f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		iVar4 = 3;
		iVar10 = func_727(iVar4);
		iVar11 = func_726(iVar4);
		if (iVar10 > 0)
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "NUMERICAL_DOLLAR", __LIB_5__::func_403(655.25f, 957f), __LIB_5__::func_403((28f * 0.5f), (40f * 0.5f)), 0f, Local_138.f_111);
			func_698(iVar10, __LIB_5__::func_403(669f, 957f), Local_138.f_111, iVar5, 0.5f, 0);
		}
		if (iVar11 > 0)
		{
			func_917(iVar11, __LIB_5__::func_403(868.5f, 957f), Local_138.f_111, 3, "NUMERICAL_DOLLAR", 0.5f);
		}
		if (func_727(iVar4) > func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_RED", __LIB_5__::func_403(663.625f, 938.625f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		else if (func_727(iVar4) < func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_BLUE", __LIB_5__::func_403(863.625f, 938.625f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		iVar4 = 4;
		iVar10 = func_727(iVar4);
		iVar11 = func_726(iVar4);
		if (iVar10 > 0)
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "NUMERICAL_DOLLAR", __LIB_5__::func_403(1039.625f, 957f), __LIB_5__::func_403((28f * 0.5f), (40f * 0.5f)), 0f, Local_138.f_111);
			func_698(iVar10, __LIB_5__::func_403(1053.375f, 957f), Local_138.f_111, iVar5, 0.5f, 0);
		}
		if (iVar11 > 0)
		{
			func_917(iVar11, __LIB_5__::func_403(1252.625f, 957f), Local_138.f_111, 3, "NUMERICAL_DOLLAR", 0.5f);
		}
		if (func_727(iVar4) > func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_RED", __LIB_5__::func_403(1046.5f, 938.625f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		else if (func_727(iVar4) < func_726(iVar4))
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_BLUE", __LIB_5__::func_403(1248f, 938.625f), __LIB_5__::func_403((52f * 0.5f), (32f * 0.5f)), 0f, Local_138.f_111);
		}
		__LIB_36__::func_716(&(Local_138.f_3722), "NUMERICAL_DOLLAR", __LIB_5__::func_403(486.375f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
		func_697(func_916(), 6, __LIB_5__::func_403(592.125f, 130f), Local_138.f_111, iVar5, 1065353216);
		__LIB_36__::func_716(&(Local_138.f_3722), "NUMERICAL_DOLLAR", __LIB_5__::func_403(1247.625f, 130f), __LIB_5__::func_403(28f, 40f), 0f, Local_138.f_111);
		func_697(func_915(), 6, __LIB_5__::func_403(1353.625f, 130f), Local_138.f_111, 3, 1065353216);
		if (func_916() > func_915())
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_RED", __LIB_5__::func_403(717.375f, 130f), __LIB_5__::func_403(52f, 32f), 0f, Local_138.f_111);
		}
		else if (func_916() < func_915())
		{
			__LIB_36__::func_716(&(Local_138.f_3722), "SCORE_TEXT_WIN_GRAPHIC_BLUE", __LIB_5__::func_403(1481.375f, 130f), __LIB_5__::func_403(52f, 32f), 0f, Local_138.f_111);
		}
	}
}

int func_915()//Position - 0x7A43B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = (iVar1 + func_726(iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_916()//Position - 0x7A462
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = (iVar1 + func_727(iVar0));
		iVar0++;
	}
	return iVar1;
}

void func_917(int iParam0, struct<2> Param1, struct<4> Param2, int iParam3, char[4] cParam4, float fParam5)//Position - 0x7A489
{
	struct<2> Var0;
	var uVar1[6];
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	struct<2> Var6;
	struct<2> Var7;
	struct<2> Var8;
	Var0 = { __LIB_5__::func_403((32f * fParam5), (36f * fParam5)) };
	iVar4 = SYSTEM::FLOOR(SYSTEM::LOG10(SYSTEM::TO_FLOAT(iParam0))) + 1;
	__LIB_37__::func_125(iParam0, iVar4, &uVar1);
	iVar2 = (iVar4 - 1);
	while (iVar2 >= 0)
	{
		cVar5 = { func_694(iParam3, uVar1[iVar2]) };
		Var6.f_1 = Param1.f_1;
		Var6.f_0 = (Param1.f_0 - (IntToFloat(iVar3) * Var0.f_0));
		iVar3++;
		__LIB_36__::func_716(&(Local_138.f_3722), &cVar5, Var6, Var0, 0f, Param2);
		iVar2 = (iVar2 + -1);
	}
	Var7.f_1 = Param1.f_1;
	Var7.f_0 = (Var6.f_0 - (fParam5 * 28f));
	Var8 = { __LIB_5__::func_403((28f * fParam5), (40f * fParam5)) };
	func_701(cParam4, Var7, Var8);
}

void func_918(int iParam0, struct<2> Param1, struct<4> Param2, int iParam3, float fParam4)//Position - 0x7A55C
{
	struct<2> Var0;
	struct<2> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[128];
	Var0 = { Param1 };
	Var1 = { __LIB_5__::func_403((32f * fParam4), (36f * fParam4)) };
	bVar2 = iParam0 == false;
	iVar4 = 0;
	if (iVar4 == 0)
	{
		iVar5 = iParam0;
		if (iParam0 > 0)
		{
			iVar4 = SYSTEM::FLOOR(SYSTEM::LOG10(SYSTEM::TO_FLOAT(iParam0))) + 1;
		}
		else if (iParam0 == 0)
		{
			iVar4 = 1;
		}
		while (iVar5 > 0 || bVar2)
		{
			bVar2 = false;
			Var0.f_0 = ((Param1.f_0 + ((Var1.f_0 * IntToFloat((iVar4 - 1))) / 2f)) - (Var1.f_0 * IntToFloat(iVar3)));
			cVar6 = { func_694(iParam3, (iVar5 % 10)) };
			iVar5 = (iVar5 / 10);
			__LIB_36__::func_716(&(Local_138.f_3722), &cVar6, Var0, Var1, 0f, Param2);
			iVar3++;
		}
		Var0.f_0 = ((Param1.f_0 + ((Var1.f_0 * IntToFloat((iVar4 - 1))) / 2f)) - (Var1.f_0 * IntToFloat(iVar3)));
		func_701("NUMERICAL_DOLLAR", Var0, __LIB_5__::func_403((28f * 0.5f), (40f * 0.5f)));
	}
}

void func_919()//Position - 0x7A658
{
	func_671();
	func_920();
	func_809(0, 1);
	func_913();
	func_536(1, 0, 0, 0);
	func_705();
}

void func_920()//Position - 0x7A67E
{
	func_921();
	func_799();
}

void func_921()//Position - 0x7A68E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		iVar5 = 0;
		while (iVar5 <= 6)
		{
			if (Local_138.f_3474[iVar5 /*6*/] == Local_138.f_106)
			{
				fVar0 = (Local_138.f_3474[iVar5 /*6*/].f_2 - (Local_138.f_3474[iVar5 /*6*/].f_4 / 2f));
				fVar2 = (Local_138.f_3474[iVar5 /*6*/].f_2.f_1 - (Local_138.f_3474[iVar5 /*6*/].f_4.f_1 / 2f));
				fVar1 = (Local_138.f_3474[iVar5 /*6*/].f_2 + (Local_138.f_3474[iVar5 /*6*/].f_4 / 2f));
				fVar3 = (Local_138.f_3474[iVar5 /*6*/].f_2.f_1 + (Local_138.f_3474[iVar5 /*6*/].f_4.f_1 / 2f));
				if (((Local_138.f_141[iVar4 /*82*/].f_39 > fVar0 && Local_138.f_141[iVar4 /*82*/].f_39 < fVar1) && Local_138.f_141[iVar4 /*82*/].f_39.f_1 > fVar2) && Local_138.f_141[iVar4 /*82*/].f_39.f_1 < fVar3)
				{
					Local_138.f_141[iVar4 /*82*/].f_2 = 1;
				}
			}
			iVar5++;
		}
		iVar4++;
	}
}

void func_922()//Position - 0x7A793
{
	func_671();
	func_920();
	func_809(0, 1);
	func_923();
	func_705();
}

void func_923()//Position - 0x7A7B1
{
	func_682();
	func_924();
	func_755(1);
	func_751();
	func_567();
}

void func_924()//Position - 0x7A7CE
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char cVar5[32];
	fVar1 = (Local_138.f_3474[0 /*6*/].f_2 - (Local_138.f_3474[0 /*6*/].f_4 / 2f));
	fVar3 = (Local_138.f_3474[0 /*6*/].f_2.f_1 - (Local_138.f_3474[0 /*6*/].f_4.f_1 / 2f));
	fVar2 = (Local_138.f_3474[0 /*6*/].f_2 + (Local_138.f_3474[0 /*6*/].f_4 / 2f));
	fVar4 = (Local_138.f_3474[0 /*6*/].f_2.f_1 + (Local_138.f_3474[0 /*6*/].f_4.f_1 / 2f));
	StringCopy(&cVar5, "COWBOY_CHARACTER", 32);
	__LIB_36__::func_716(&(Local_138.f_3714), &cVar5, __LIB_5__::func_403((1920f / 2f), ((1080f / 3f) + 60f)), __LIB_5__::func_403(412f, 640f), 0f, Local_138.f_111);
	StringCopy(&cVar5, "TITLE_SCREEN_LOGO", 32);
	__LIB_36__::func_716(&(Local_138.f_3714), &cVar5, __LIB_5__::func_403((1920f / 2f), ((1080f / 2f) + 80f)), __LIB_5__::func_403(536f, 276f), 0f, Local_138.f_111);
	fVar1 = (Local_138.f_3474[0 /*6*/].f_2 - (Local_138.f_3474[0 /*6*/].f_4 / 2f));
	fVar3 = (Local_138.f_3474[0 /*6*/].f_2.f_1 - (Local_138.f_3474[0 /*6*/].f_4.f_1 / 2f));
	fVar2 = (Local_138.f_3474[0 /*6*/].f_2 + (Local_138.f_3474[0 /*6*/].f_4 / 2f));
	fVar4 = (Local_138.f_3474[0 /*6*/].f_2.f_1 + (Local_138.f_3474[0 /*6*/].f_4.f_1 / 2f));
	if ((Local_138.f_141[0 /*82*/].f_39 > fVar1 && Local_138.f_141[0 /*82*/].f_39 < fVar2) && (Local_138.f_141[0 /*82*/].f_39.f_1 > fVar3 && Local_138.f_141[0 /*82*/].f_39.f_1 < fVar4))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		StringCopy(&cVar5, "start", 32);
		__LIB_36__::func_716(&(Local_138.f_3714), &cVar5, Local_138.f_3474[0 /*6*/].f_2, Local_138.f_3474[0 /*6*/].f_4, 0f, Local_138.f_111);
	}
	else
	{
		__LIB_36__::func_716(&(Local_138.f_3714), "TYPE_MAIN_MENU_START_HIGHLIGHT", Local_138.f_3474[0 /*6*/].f_2, Local_138.f_3474[0 /*6*/].f_4, 0f, Local_138.f_111);
	}
	bVar0 = false;
	if (!__LIB_37__::func_136())
	{
		fVar1 = (Local_138.f_3474[1 /*6*/].f_2 - (Local_138.f_3474[1 /*6*/].f_4 / 2f));
		fVar3 = (Local_138.f_3474[1 /*6*/].f_2.f_1 - (Local_138.f_3474[1 /*6*/].f_4.f_1 / 2f));
		fVar2 = (Local_138.f_3474[1 /*6*/].f_2 + (Local_138.f_3474[1 /*6*/].f_4 / 2f));
		fVar4 = (Local_138.f_3474[1 /*6*/].f_2.f_1 + (Local_138.f_3474[1 /*6*/].f_4.f_1 / 2f));
		if ((Local_138.f_141[0 /*82*/].f_39 > fVar1 && Local_138.f_141[0 /*82*/].f_39 < fVar2) && (Local_138.f_141[0 /*82*/].f_39.f_1 > fVar3 && Local_138.f_141[0 /*82*/].f_39.f_1 < fVar4))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			StringCopy(&cVar5, "leaderboards", 32);
			__LIB_36__::func_716(&(Local_138.f_3714), &cVar5, Local_138.f_3474[1 /*6*/].f_2, Local_138.f_3474[1 /*6*/].f_4, 0f, Local_138.f_111);
		}
		else
		{
			__LIB_36__::func_716(&(Local_138.f_3714), "TYPE_MAIN_MENU_LEADERBOARDS_HIGHLIGHT", Local_138.f_3474[1 /*6*/].f_2, Local_138.f_3474[1 /*6*/].f_4, 0f, Local_138.f_111);
		}
	}
	StringCopy(&cVar5, "PIXTRO_LOGO", 32);
	__LIB_36__::func_716(&(Local_138.f_3714), &cVar5, __LIB_5__::func_403((1920f / 2f), (((1080f / 6f) * 5f) + 60f)), __LIB_5__::func_403(196f, 44f), 0f, Local_138.f_111);
}

void func_925()//Position - 0x7AB4E
{
	float fVar0;
	float fVar1;
	bool bVar2;
	func_682();
	fVar0 = (1f * __LIB_16__::func_770());
	fVar1 = 1f;
	bVar2 = __LIB_37__::func_124(Local_138.f_3542, fVar0, fVar1);
	func_567();
	if (!bVar2)
	{
		if (!BitTest(Local_138.f_3546, 0))
		{
			if (GRAPHICS::GET_BINK_MOVIE_TIME(Local_138.f_3542) >= 34f)
			{
				func_532(0);
				MISC::SET_BIT(&(Local_138.f_3546), 0);
			}
		}
		return;
	}
	func_771(0);
	func_537(4);
}

void func_926()//Position - 0x7ABB7
{
	func_682();
	__LIB_36__::func_716(&(Local_138.f_3714), "BADLANDS_PSA_SCREEN", __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1260f, 920f), 0f, Local_138.f_111);
	func_567();
	if (Local_138.f_32 == 0)
	{
		Local_138.f_32 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - Local_138.f_32) > 5000 || func_723())
	{
		__LIB_16__::func_769(&(Local_138.f_3542), "TLG_Intro");
		func_537(3);
	}
}

void func_927()//Position - 0x7AC3C
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3714), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3722), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3738), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3794), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3826), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3802), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3810), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3818), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3834), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3858), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3746), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3842), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3866), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3754), false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(Local_138.f_3730), false);
	if (!__LIB_36__::func_715())
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3714)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3722)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3730)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3738)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3746)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3754)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3794)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3826)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3802)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3810)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3818)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3834)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3858)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3842)))
	{
		return;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(Local_138.f_3866)))
	{
		return;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3/H3_ArcMac_BR2", false, -1))
	{
		return;
	}
	func_537(2);
}

void func_930()//Position - 0x7AE5B
{
	__LIB_16__::func_781();
	func_934();
	func_931();
	func_553();
	func_537(1);
}

void func_931()//Position - 0x7AE78
{
	func_932();
	Local_138.f_139 = 0;
	Local_138.f_141[0 /*82*/].f_39 = { __LIB_5__::func_403((1920f / 3f), (1080f / 3f)) };
	Local_138.f_3517.f_2 = 2;
	Local_138.f_3517.f_3 = 202;
	Local_138.f_3521.f_2 = 2;
	Local_138.f_3521.f_3 = 214;
}

void func_932()//Position - 0x7AEC8
{
	float fVar0;
	func_933(__LIB_5__::func_403((1920f / 2f), (((1080f / 6f) * 4f) + 80f)), __LIB_5__::func_403(116f, 52f), 0, 4);
	func_933(__LIB_5__::func_403((1920f / 2f), (((1080f / 6f) * 4f) + 150f)), __LIB_5__::func_403(280f, 52f), 1, 4);
	fVar0 = 0.65f;
	func_933(__LIB_5__::func_403(((1920f / 10f) * 3f), ((1080f / 8f) * 3f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 2, 5);
	func_933(__LIB_5__::func_403(((1920f / 10f) * 5f), ((1080f / 8f) * 3f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 3, 5);
	func_933(__LIB_5__::func_403(((1920f / 10f) * 7f), ((1080f / 8f) * 3f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 4, 5);
	func_933(__LIB_5__::func_403(((1920f / 10f) * 4f), ((1080f / 8f) * 6f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 5, 5);
	func_933(__LIB_5__::func_403(((1920f / 10f) * 6f), ((1080f / 8f) * 6f)), __LIB_5__::func_403((420f * fVar0), (520f * fVar0)), 6, 5);
}

void func_933(struct<2> Param0, struct<2> Param1, int iParam2, int iParam3)//Position - 0x7B04B
{
	Local_138.f_3474[Local_138.f_28 /*6*/].f_2 = { Param0 };
	Local_138.f_3474[Local_138.f_28 /*6*/].f_4 = { Param1 };
	Local_138.f_3474[Local_138.f_28 /*6*/].f_1 = iParam2;
	Local_138.f_3474[Local_138.f_28 /*6*/] = iParam3;
	Local_138.f_28++;
}

void func_934()//Position - 0x7B09F
{
	__LIB_15__::func_812(&(Local_138.f_107), 0, 0, 0, 255);
	__LIB_15__::func_812(&(Local_138.f_119), 255, 50, 0, 155);
	__LIB_15__::func_812(&(Local_138.f_123), 255, 0, 0, 255);
	__LIB_15__::func_812(&(Local_138.f_111), 255, 255, 255, 255);
	__LIB_15__::func_812(&(Local_138.f_115), 255, 255, 255, 255);
	__LIB_15__::func_812(&(Local_138.f_127), 0, 255, 0, 255);
	__LIB_15__::func_812(&(Local_138.f_135), 255, 255, 0, 255);
	__LIB_15__::func_812(&(Local_138.f_131), 255, 255, 255, 50);
}

void func_944()//Position - 0x7B2AF
{
	bool bVar0;
	int iVar1;
	if (Local_138.f_106 >= 12)
	{
		return;
	}
	if (!__LIB_0__::func_893() || __LIB_16__::func_778())
	{
		func_537(12);
		return;
	}
	__LIB_37__::func_131();
	func_958(&(Local_138.f_3664), &(Local_146.f_30), &Local_147, &(Local_146.f_61));
	func_955(&(Local_138.f_3664), 6, &(Local_146.f_61));
	func_954();
	bVar0 = Local_138.f_106 >= 3;
	if (bVar0)
	{
		if (Local_138.f_34 == 0)
		{
			Local_138.f_96 = 0;
			iVar1 = 0;
			while (iVar1 < 50)
			{
				if (Local_138.f_96 < 8)
				{
					if (func_899(Local_138.f_224[iVar1 /*23*/].f_14))
					{
						if (func_897(iVar1, 0))
						{
							Local_138.f_97[Local_138.f_96] = iVar1;
							Local_138.f_96++;
						}
					}
				}
				iVar1++;
			}
		}
	}
	__LIB_36__::func_717(bVar0);
	func_945();
}

void func_945()//Position - 0x7B37C
{
	Local_138.f_3663 = (SYSTEM::TO_FLOAT(30) / (1f / MISC::GET_FRAME_TIME()));
}

void func_954()//Position - 0x7B4DF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_138.f_141[iVar0 /*82*/].f_41[iVar1 /*10*/].f_5 = (Local_138.f_141[iVar0 /*82*/].f_41[iVar1 /*10*/].f_5 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
			Local_138.f_141[iVar0 /*82*/].f_41[iVar1 /*10*/].f_6 = SYSTEM::FLOOR((IntToFloat(Local_138.f_141[iVar0 /*82*/].f_41[iVar1 /*10*/].f_5) / 165f));
			Local_138.f_141[iVar0 /*82*/].f_41[iVar1 /*10*/].f_5 = (Local_138.f_141[iVar0 /*82*/].f_41[iVar1 /*10*/].f_5 - SYSTEM::ROUND((165f * IntToFloat(Local_138.f_141[iVar0 /*82*/].f_41[iVar1 /*10*/].f_6))));
			iVar1++;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 39)
	{
		Local_138.f_1825[iVar1 /*33*/].f_14 = (Local_138.f_1825[iVar1 /*33*/].f_14 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		Local_138.f_1825[iVar1 /*33*/].f_15 = SYSTEM::FLOOR((IntToFloat(Local_138.f_1825[iVar1 /*33*/].f_14) / 165f));
		Local_138.f_1825[iVar1 /*33*/].f_14 = (Local_138.f_1825[iVar1 /*33*/].f_14 - SYSTEM::ROUND((165f * IntToFloat(Local_138.f_1825[iVar1 /*33*/].f_15))));
		Local_138.f_1825[iVar1 /*33*/].f_12 = (Local_138.f_1825[iVar1 /*33*/].f_12 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		Local_138.f_1825[iVar1 /*33*/].f_13 = SYSTEM::FLOOR((IntToFloat(Local_138.f_1825[iVar1 /*33*/].f_12) / 33f));
		Local_138.f_1825[iVar1 /*33*/].f_12 = (Local_138.f_1825[iVar1 /*33*/].f_12 - SYSTEM::ROUND((33f * IntToFloat(Local_138.f_1825[iVar1 /*33*/].f_13))));
		if (Local_138.f_1825[iVar1 /*33*/].f_9 == 18 || Local_138.f_1825[iVar1 /*33*/].f_9 == 19)
		{
			if (Local_138.f_1825[iVar1 /*33*/].f_10 == 1)
			{
				if (Local_138.f_1825[iVar1 /*33*/].f_16 == 4)
				{
					Local_138.f_1825[iVar1 /*33*/].f_14 = 0;
					Local_138.f_1825[iVar1 /*33*/].f_14 = 0;
					Local_138.f_1825[iVar1 /*33*/].f_15 = 0;
					Local_138.f_1825[iVar1 /*33*/].f_12 = 0;
					Local_138.f_1825[iVar1 /*33*/].f_13 = 0;
					Local_138.f_1825[iVar1 /*33*/].f_12 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		Local_138.f_3146[iVar1 /*19*/].f_7 = (Local_138.f_3146[iVar1 /*19*/].f_7 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		Local_138.f_3146[iVar1 /*19*/].f_8 = SYSTEM::FLOOR((IntToFloat(Local_138.f_3146[iVar1 /*19*/].f_7) / 165f));
		Local_138.f_3146[iVar1 /*19*/].f_7 = (Local_138.f_3146[iVar1 /*19*/].f_7 - SYSTEM::ROUND((165f * IntToFloat(Local_138.f_3146[iVar1 /*19*/].f_8))));
		Local_138.f_3146[iVar1 /*19*/].f_5 = (Local_138.f_3146[iVar1 /*19*/].f_5 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		Local_138.f_3146[iVar1 /*19*/].f_6 = SYSTEM::FLOOR((IntToFloat(Local_138.f_3146[iVar1 /*19*/].f_5) / 33f));
		Local_138.f_3146[iVar1 /*19*/].f_5 = (Local_138.f_3146[iVar1 /*19*/].f_5 - SYSTEM::ROUND((33f * IntToFloat(Local_138.f_3146[iVar1 /*19*/].f_6))));
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		Local_138.f_1375[iVar1 /*8*/].f_2 = (Local_138.f_1375[iVar1 /*8*/].f_2 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		Local_138.f_1375[iVar1 /*8*/].f_3 = SYSTEM::FLOOR((IntToFloat(Local_138.f_1375[iVar1 /*8*/].f_2) / 165f));
		Local_138.f_1375[iVar1 /*8*/].f_2 = (Local_138.f_1375[iVar1 /*8*/].f_2 - SYSTEM::ROUND((165f * IntToFloat(Local_138.f_1375[iVar1 /*8*/].f_3))));
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 49)
	{
		if (Local_138.f_224[iVar1 /*23*/].f_3 && Local_138.f_224[iVar1 /*23*/].f_8 > 0)
		{
			Local_138.f_224[iVar1 /*23*/].f_11 = (Local_138.f_224[iVar1 /*23*/].f_11 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
			Local_138.f_224[iVar1 /*23*/].f_12 = SYSTEM::FLOOR((IntToFloat(Local_138.f_224[iVar1 /*23*/].f_11) / 165f));
			Local_138.f_224[iVar1 /*23*/].f_11 = (Local_138.f_224[iVar1 /*23*/].f_11 - SYSTEM::ROUND((165f * IntToFloat(Local_138.f_224[iVar1 /*23*/].f_12))));
			Local_138.f_224[iVar1 /*23*/].f_9 = (Local_138.f_224[iVar1 /*23*/].f_9 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
			Local_138.f_224[iVar1 /*23*/].f_10 = SYSTEM::FLOOR((IntToFloat(Local_138.f_224[iVar1 /*23*/].f_9) / 33f));
			Local_138.f_224[iVar1 /*23*/].f_9 = (Local_138.f_224[iVar1 /*23*/].f_9 - SYSTEM::ROUND((33f * IntToFloat(Local_138.f_224[iVar1 /*23*/].f_10))));
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		Local_138.f_3463[iVar1 /*10*/] = (Local_138.f_3463[iVar1 /*10*/] + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		Local_138.f_3463[iVar1 /*10*/].f_1 = SYSTEM::FLOOR((IntToFloat(Local_138.f_3463[iVar1 /*10*/]) / 165f));
		Local_138.f_3463[iVar1 /*10*/] = (Local_138.f_3463[iVar1 /*10*/] - SYSTEM::ROUND((165f * IntToFloat(Local_138.f_3463[iVar1 /*10*/].f_1))));
		iVar1++;
	}
}

void func_955(var uParam0, int iParam1, var uParam2)//Position - 0x7BA27
{
	if ((!*uParam2 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) && (uParam0->f_35 == -2147483647 || (NETWORK::GET_NETWORK_TIME() - uParam0->f_35) > 5000))
	{
		__LIB_37__::func_129(__LIB_1__::func_874(PLAYER::PLAYER_ID()), __LIB_3__::func_969());
		uParam0->f_35 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_958(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7BAC9
{
	int iVar0;
	struct<15> Var1;
	struct<3> Var2;
	Var1.f_3 = 10;
	Var1.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) != 174)
		{
		}
		else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 25))
		{
			if (Var1.f_0 == -1168862534)
			{
				if (*uParam3)
				{
				}
				else if (Var1.f_2 != 6)
				{
				}
				else
				{
					func_961(uParam1, &(Var1.f_3), &(Var1.f_14), uParam3);
					Jump @155; //curOff = 110
					if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 3))
					{
						if (Var2.f_0 == -1536908883)
						{
							func_959(Var2.f_1, uParam1, uParam2, Var2.f_2);
						}
					}
				}
				iVar0++;
			}
void func_959(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7BB70
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	iVar1 = __LIB_37__::func_130(uParam1, iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	(*uParam1)[iVar1 /*3*/] = uParam3;
	__LIB_16__::func_765(__LIB_1__::func_874(PLAYER::PLAYER_ID()), 6, iVar1, (*uParam1)[iVar1 /*3*/], (uParam1[iVar1 /*3*/])->f_1, 0);
}

void func_961(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7BBFF
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam2)[iVar0] <= 0)
		{
			(uParam0[iVar0 /*3*/])->f_1 = (50 - iVar0 * 2);
			(*uParam0)[iVar0 /*3*/] = func_962(iVar0);
			__LIB_16__::func_765(__LIB_1__::func_874(PLAYER::PLAYER_ID()), 6, iVar0, (*uParam0)[iVar0 /*3*/], (uParam0[iVar0 /*3*/])->f_1, 0);
		}
		else
		{
			(uParam0[iVar0 /*3*/])->f_1 = (*uParam2)[iVar0];
			(*uParam0)[iVar0 /*3*/] = (*uParam1)[iVar0];
		}
		iVar0++;
	}
	*uParam3 = 1;
}

int func_962(int iParam0)//Position - 0x7BC89
{
	switch (iParam0)
	{
		case 0:
			return 46034;
		case 1:
			return 53519;
		case 2:
			return 53635;
		case 3:
			return 70547;
		case 4:
			return 57490;
		case 5:
			return 17924;
		case 6:
			return 49681;
		case 7:
			return 5001;
		case 8:
			return 73932;
		case 9:
			return 13522;
		default:
	}
	return 0;
}

void func_969(int iParam0)//Position - 0x7BE14
{
	Local_147[NETWORK::PARTICIPANT_ID_TO_INT() /*16*/] = iParam0;
}

void func_970(int iParam0)//Position - 0x7BE27
{
	Local_643.f_137 = iParam0;
	__LIB_15__::func_812(&(Local_643[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_643[1 /*17*/].f_6 = 1000;
	Local_643[1 /*17*/].f_7 = 10000;
	Local_643[2 /*17*/].f_1 = 1;
	Local_643[2 /*17*/].f_8 = 40;
	__LIB_15__::func_812(&(Local_643[2 /*17*/].f_9), 0, 0, 0, 0);
	__LIB_15__::func_812(&(Local_643[3 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_812(&(Local_643[4 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_812(&(Local_643[5 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_812(&(Local_643[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_643.f_137)
	{
		case 2:
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_812(&(Local_643[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 1;
			Local_643[3 /*17*/] = 1;
			break;
		case 3:
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_812(&(Local_643[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 1;
			Local_643[4 /*17*/] = 1;
			break;
		case 4:
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_812(&(Local_643[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 1;
			Local_643[5 /*17*/] = 1;
			break;
		case 1:
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 1;
			Local_643[3 /*17*/] = 1;
			break;
		case 0:
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 10);
			__LIB_15__::func_812(&(Local_643[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 1;
			Local_643[5 /*17*/] = 1;
			break;
		case 6:
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 8);
			__LIB_15__::func_812(&(Local_643[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_643[0 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 1;
			Local_643[7 /*17*/] = 1;
			break;
		case 7:
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_643[2 /*17*/] = 1;
			Local_643[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_643[3 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_643[6 /*17*/] = 1;
			break;
		case 5:
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 1;
			Local_643[3 /*17*/] = 1;
			break;
		case 8:
			Local_643[1 /*17*/] = 0;
			Local_643[2 /*17*/] = 0;
			Local_643[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_643[6 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_643[7 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 9:
			Local_643[1 /*17*/] = 0;
			Local_643[2 /*17*/] = 0;
			Local_643[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_643[6 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_643[7 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 10:
			Local_643[1 /*17*/] = 0;
			Local_643[2 /*17*/] = 0;
			Local_643[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_643[6 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_643[7 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_643[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 11:
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 15);
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			Local_643[1 /*17*/] = 1;
			Local_643[3 /*17*/] = 1;
			break;
		case 12:
			__LIB_15__::func_812(&(Local_643[1 /*17*/].f_9), 255, 255, 255, 3);
			__LIB_15__::func_812(&(Local_643[2 /*17*/].f_13), 0, 0, 0, 15);
			__LIB_15__::func_812(&(Local_643[0 /*17*/].f_9), 0, 0, 255, 90);
			__LIB_15__::func_812(&(Local_643[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_643[1 /*17*/] = 1;
			Local_643[2 /*17*/] = 0;
			Local_643[0 /*17*/] = 1;
			Local_643[6 /*17*/] = 1;
			break;
	}
}

void func_971()//Position - 0x7C3FD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 112)
	{
		Local_138.f_3547[iVar0] = -1;
		iVar0++;
	}
}

void func_972(int iParam0)//Position - 0x7C422
{
	int iVar0;
	Local_148.f_0 = iParam0;
	iVar0 = 0;
	while (iVar0 < 494)
	{
		Local_148.f_19[iVar0] = -1;
		iVar0++;
	}
}

void func_973()//Position - 0x7C44D
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() == 0)
	{
		Local_138.f_33 = 1;
	}
	else
	{
		Local_138.f_33 = 0;
	}
}

void func_974()//Position - 0x7C46A
{
	StringCopy(&(Local_138.f_3706), "MPLastGunslingers", 32);
	StringCopy(&(Local_138.f_3714), "MPLastGunslingersTitle", 32);
	StringCopy(&(Local_138.f_3722), "MPLastGunslingersHud", 32);
	StringCopy(&(Local_138.f_3730), "MPLastGunslingersFacade", 32);
	StringCopy(&(Local_138.f_3738), "MPLastGunslingersLevels", 32);
	StringCopy(&(Local_138.f_3746), "MPLastGunslingersLevelsComp", 32);
	StringCopy(&(Local_138.f_3754), "MPLastGunslingersLevel1", 32);
	StringCopy(&(Local_138.f_3762), "MPLastGunslingersLevel2", 32);
	StringCopy(&(Local_138.f_3770), "MPLastGunslingersLevel3", 32);
	StringCopy(&(Local_138.f_3778), "MPLastGunslingersLevel4", 32);
	StringCopy(&(Local_138.f_3786), "MPLastGunslingersLevel5", 32);
	StringCopy(&(Local_138.f_3794), "MPLastGunslingersEnemy", 32);
	StringCopy(&(Local_138.f_3802), "MPLastGunslingersEnemyFGA", 32);
	StringCopy(&(Local_138.f_3810), "MPLastGunslingersEnemyFGB", 32);
	StringCopy(&(Local_138.f_3818), "MPLastGunslingersEnemyFGC", 32);
	StringCopy(&(Local_138.f_3826), "MPLastGunslingersCommon", 32);
	StringCopy(&(Local_138.f_3834), "MPLastGunslingersHost", 32);
	StringCopy(&(Local_138.f_3858), "MPLastGunslingersProps", 32);
	StringCopy(&(Local_138.f_3842), "MPLastGunslingersResult", 32);
	StringCopy(&(Local_138.f_3866), "MPLastGunslingersDead", 32);
}

int func_976(int iParam0)//Position - 0x7C56C
{
	return Local_147[iParam0 /*16*/];
}

void func_977()//Position - 0x7C57B
{
	func_519();
	__LIB_0__::func_202();
}

void func_979(struct<21> Param0)//Position - 0x7C598
{
	Param0 = { Param0 };
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_146, 62, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_147, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_905(0);
}

