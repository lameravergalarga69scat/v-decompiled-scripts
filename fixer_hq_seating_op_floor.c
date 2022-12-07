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
	int* iLocal_130 = NULL;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 8;
	var uLocal_134 = 0;
	var uLocal_135 = -1;
	var uLocal_136 = 0;
	var uLocal_137 = -1;
	var uLocal_138 = 0;
	var uLocal_139 = -1;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = 0;
	var uLocal_143 = -1;
	var uLocal_144 = 0;
	var uLocal_145 = -1;
	var uLocal_146 = 0;
	var uLocal_147 = -1;
	var uLocal_148 = 0;
	var uLocal_149 = -1;
	var uLocal_150 = 6;
	var uLocal_151 = 6;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	struct<9> Local_154[32];
	struct<2484> Local_155 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_156 = { 0, 0, 0, 0, 0, 0, -1, 0, -1, 0 } ;
	var uLocal_157 = 0;
	var uLocal_158 = -1;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 31;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 1061158912;
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
	var uLocal_184 = 1061158912;
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
	var uLocal_198 = 1061158912;
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
	var uLocal_212 = 1061158912;
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
	var uLocal_226 = 1061158912;
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
	var uLocal_240 = 1061158912;
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
	var uLocal_254 = 1061158912;
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
	var uLocal_268 = 1061158912;
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
	var uLocal_282 = 1061158912;
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
	var uLocal_296 = 1061158912;
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
	var uLocal_310 = 1061158912;
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
	var uLocal_324 = 1061158912;
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
	var uLocal_338 = 1061158912;
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
	var uLocal_352 = 1061158912;
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
	var uLocal_366 = 1061158912;
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
	var uLocal_380 = 1061158912;
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
	var uLocal_394 = 1061158912;
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
	var uLocal_408 = 1061158912;
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
	var uLocal_422 = 1061158912;
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
	var uLocal_436 = 1061158912;
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
	var uLocal_450 = 1061158912;
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
	var uLocal_464 = 1061158912;
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
	var uLocal_478 = 1061158912;
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
	var uLocal_492 = 1061158912;
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
	var uLocal_506 = 1061158912;
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
	var uLocal_520 = 1061158912;
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
	var uLocal_534 = 1061158912;
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
	var uLocal_548 = 1061158912;
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
	var uLocal_562 = 1061158912;
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
	var uLocal_576 = 1061158912;
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
	var uLocal_590 = 1061158912;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_5598())
		{
			func_5593();
		}
	}
	else
	{
		func_5593();
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (func_5584())
		{
			func_5593();
		}
		__LIB_41__::func_13(&Local_156);
		func_78();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			__LIB_42__::func_803(&iLocal_130, &(Local_154[Local_155.f_14 /*9*/]), &Local_155, &Global_4194304);
		}
	}
	func_5593();
}

void func_78()//Position - 0x2ACA
{
	if (!BitTest(Local_155.f_0, 31))
	{
		MISC::SET_BIT(&Local_155, 31);
	}
	if (Local_154[PLAYER::PLAYER_ID() /*9*/].f_8 != 0)
	{
		if ((__LIB_20__::func_871(&Local_156, 0, 0, 0) || __LIB_20__::func_871(&Local_156, 1, 0, 0)) || __LIB_20__::func_871(&Local_156, 2, 0, 0))
		{
			if (!BitTest(Local_154[PLAYER::PLAYER_ID() /*9*/], 2))
			{
				MISC::SET_BIT(&(Local_154[PLAYER::PLAYER_ID() /*9*/]), 2);
				MISC::CLEAR_BIT(&(Local_154[PLAYER::PLAYER_ID() /*9*/]), 1);
				Local_154[PLAYER::PLAYER_ID() /*9*/].f_6 = Local_156.f_9;
				__LIB_6__::func_463(&(Local_154[PLAYER::PLAYER_ID() /*9*/]), 2);
			}
			switch (Local_154[PLAYER::PLAYER_ID() /*9*/].f_8)
			{
				case 2:
					if ((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/) && !__LIB_1__::func_156()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_77(0)) && !__LIB_0__::func_661())
					{
						__LIB_6__::func_463(&(Local_154[PLAYER::PLAYER_ID() /*9*/]), 1);
						MISC::CLEAR_BIT(&(Local_154[PLAYER::PLAYER_ID() /*9*/]), 2);
						Local_154[PLAYER::PLAYER_ID() /*9*/].f_6 = -1;
						__LIB_6__::func_463(&(Local_154[PLAYER::PLAYER_ID() /*9*/]), 1);
						__LIB_6__::func_404(&(Local_155.f_3));
						__LIB_11__::func_266(&Local_156);
					}
					__LIB_20__::func_489(&Local_156);
					__LIB_20__::func_488(&Local_156);
					break;
				case 3:
				case 1:
					__LIB_20__::func_488(&Local_156);
					__LIB_11__::func_279(&Local_156);
					break;
				}
			}
	}
	func_79(&iLocal_130, &(Local_154[PLAYER::PLAYER_ID() /*9*/]), &Local_155, &Global_4194304);
}

void func_79(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x2C31
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!BitTest(Global_1931419, 2))
	{
		if ((((((((((((((!Global_1931426 && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !BitTest(Global_2703735.f_876.f_4, 0)) && !BitTest(Global_2621446, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_3__::func_633()) && !__LIB_2__::func_368()) && ((__LIB_2__::func_246(PLAYER::PLAYER_ID()) && __LIB_19__::func_535(uParam3)) || (__LIB_5__::func_610(PLAYER::PLAYER_ID()) && __LIB_6__::func_568()))) && !__LIB_0__::func_661()) && !__LIB_6__::func_567()) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__::func_190()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) <= 0.001f)
		{
			bVar1 = __LIB_12__::func_235(&iVar0);
			if ((__LIB_5__::func_610(PLAYER::PLAYER_ID()) && Global_1579064 == 0) || Global_1579064 == 1)
			{
				iVar0++;
			}
			if (iVar0 >= 3)
			{
				__LIB_6__::func_566(1, 0);
				__LIB_6__::func_565(1);
				if (bVar1)
				{
					__LIB_19__::func_677(0);
				}
			}
			else
			{
				__LIB_6__::func_565(0);
				__LIB_6__::func_566(0, 1);
			}
		}
		else if (!BitTest(Global_1931419, 0) && !BitTest(Global_1931419, 4))
		{
			__LIB_6__::func_566(0, 1);
			__LIB_6__::func_565(0);
		}
		else
		{
			__LIB_6__::func_565(0);
		}
		if (BitTest(Global_1931419, 0))
		{
			if (BitTest(Global_1931419, 7) && __LIB_6__::func_563())
			{
				MISC::CLEAR_BIT(&Global_1931419, 7);
			}
		}
		else
		{
			__LIB_19__::func_676();
		}
		if ((BitTest(Global_1931419, 0) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, __LIB_4__::func_261(1))) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
		{
			if ((((((((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_190()) && !__LIB_0__::func_661()) && !__LIB_0__::func_77(0)) && iParam1->f_8 != 3) && !__LIB_6__::func_567()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_0__::func_104(1)) && !__LIB_6__::func_360())
			{
				if (iParam1->f_8 == 2)
				{
					if (__LIB_8__::func_854())
					{
						__LIB_19__::func_677(1);
						return;
					}
				}
				else
				{
					__LIB_19__::func_677(1);
					return;
				}
			}
		}
	}
	else
	{
		if ((!BitTest(Global_1931419, 3) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)) && iParam1->f_8 != 3)
		{
			if (__LIB_32__::func_484())
			{
				MISC::SET_BIT(&Global_1931419, 3);
			}
		}
		if (iParam2->f_3 != -1)
		{
			__LIB_6__::func_404(&(iParam2->f_3));
			iParam2->f_3 = -1;
		}
		if (((__LIB_2__::func_246(PLAYER::PLAYER_ID()) || (iParam2->f_2481 && BitTest(*iParam2, 30))) || (iParam2->f_2482 && BitTest(*iParam2, 30))) || (iParam2->f_2483 && BitTest(*iParam2, 30)))
		{
			__LIB_0__::func_495(&(Global_1931419.f_4), 1, 0);
		}
		return;
	}
	iVar2 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_33;
	if (__LIB_3__::func_859(PLAYER::PLAYER_ID()))
	{
		iVar2 = (__LIB_4__::func_673() + __LIB_3__::func_977(PLAYER::PLAYER_ID()));
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(__LIB_18__::func_502(194), iVar2, true, 0))
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1) && BitTest(*iParam1, 12))
	{
		MISC::CLEAR_BIT(iParam1, 12);
	}
	func_5492(uParam0, iParam1, iParam2);
	if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::PLAYER_ID()))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID()))
		{
			__LIB_9__::func_95(iParam2, uParam0);
		}
	}
	if (iParam1->f_8 != 3)
	{
		if (iParam1->f_1 != 0)
		{
			iParam1->f_1 = 0;
		}
	}
	if (((((((__LIB_1__::func_188(uParam3->f_31) || __LIB_1__::func_984(uParam3->f_31) == 97) || __LIB_18__::func_376(uParam3->f_31, 0, 0)) || __LIB_7__::func_916(PLAYER::PLAYER_ID())) || __LIB_4__::func_958(PLAYER::PLAYER_ID())) || iParam2->f_2481) || iParam2->f_2482) || iParam2->f_2483)
	{
		iVar3 = 0;
	}
	else if (__LIB_1__::func_984(uParam3->f_31) == 91)
	{
		iVar3 = 1;
	}
	if (((((((__LIB_1__::func_188(uParam3->f_31) || __LIB_0__::func_630(uParam3->f_31, -1)) || __LIB_18__::func_376(uParam3->f_31, 0, 0)) || __LIB_7__::func_916(PLAYER::PLAYER_ID())) || __LIB_4__::func_958(PLAYER::PLAYER_ID())) || iParam2->f_2481) || iParam2->f_2482) || iParam2->f_2483)
	{
		if (BitTest(uParam0->f_3[iVar3 /*2*/], 0))
		{
			if (!BitTest(*iParam2, 29))
			{
				if (__LIB_4__::func_715())
				{
					if (iParam1->f_8 != 2)
					{
						if (__LIB_2__::func_47(&(iParam2->f_82), 5000, 0))
						{
							__LIB_6__::func_463(iParam1, 2);
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
				__LIB_9__::func_94(iParam2, iParam1);
				if (func_5484(uParam0, iParam1, iParam2, uParam3))
				{
					if (!BitTest(*iParam2, 31) || !iParam2->f_2481)
					{
						GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
					}
					else
					{
						GRAPHICS::SET_TV_AUDIO_FRONTEND(true);
					}
					__LIB_6__::func_463(iParam1, 1);
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
				__LIB_2__::func_333();
				MISC::CLEAR_BIT(iParam2, 2);
			}
			if (BitTest(*iParam2, 3))
			{
				__LIB_0__::func_801();
				MISC::CLEAR_BIT(iParam2, 3);
			}
			if (BitTest(*iParam2, 14))
			{
				MISC::CLEAR_BIT(iParam2, 14);
			}
			if (BitTest(*iParam1, 3))
			{
				if (func_5475(iParam1, iParam2))
				{
					__LIB_10__::func_812(iParam2, iParam2->f_87);
					__LIB_6__::func_463(iParam1, 3);
					__LIB_6__::func_566(0, 0);
				}
			}
			else if (BitTest(*iParam1, 4))
			{
				if (__LIB_26__::func_677(uParam0, iParam1, iParam2, uParam3))
				{
					MISC::CLEAR_BIT(iParam1, 4);
					if ((Global_2789733 && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						if (BitTest(*iParam2, 25))
						{
							MISC::CLEAR_BIT(iParam2, 25);
						}
						func_5465(iParam2);
					}
					__LIB_6__::func_463(iParam1, 1);
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
				if (((((((!__LIB_1__::func_188(uParam3->f_31) && !__LIB_0__::func_630(uParam3->f_31, -1)) && !__LIB_18__::func_376(uParam3->f_31, 0, 0)) && !__LIB_7__::func_916(PLAYER::PLAYER_ID())) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !iParam2->f_2481) && !iParam2->f_2482) && !iParam2->f_2483)
				{
					if (__LIB_41__::func_680(uParam0, iParam1, iParam2, uParam3, 0))
					{
						__LIB_6__::func_463(iParam1, 2);
					}
				}
			}
			break;
		case 2:
			if (!BitTest(Global_2621446, 16))
			{
				MISC::SET_BIT(&Global_2621446, 16);
			}
			if (!__LIB_2__::func_334())
			{
				__LIB_4__::func_70();
				MISC::SET_BIT(iParam2, 2);
			}
			if (!__LIB_2__::func_245())
			{
				__LIB_0__::func_802();
				MISC::SET_BIT(iParam2, 3);
			}
			if (BitTest(*iParam2, 14))
			{
				MISC::CLEAR_BIT(iParam2, 14);
			}
			if (func_5475(iParam1, iParam2) && !__LIB_20__::func_317(0))
			{
				__LIB_18__::func_319();
				__LIB_10__::func_812(iParam2, iParam2->f_87);
				HUD::DISPLAY_CASH(false);
				__LIB_6__::func_463(iParam1, 3);
				__LIB_6__::func_566(0, 0);
			}
			if (__LIB_26__::func_677(uParam0, iParam1, iParam2, uParam3))
			{
				if ((Global_2789733 && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (BitTest(*iParam2, 25))
					{
						MISC::CLEAR_BIT(iParam2, 25);
					}
					func_5465(iParam2);
				}
				__LIB_6__::func_463(iParam1, 1);
			}
			break;
		case 3:
			if (!Global_262145.f_23081 /* Tunable: -1189246650 */)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					__LIB_1__::func_60();
				}
			}
			if (!Global_262145.f_23080 /* Tunable: -618382164 */)
			{
				if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					__LIB_1__::func_60();
				}
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			if (!__LIB_2__::func_334())
			{
				__LIB_4__::func_70();
				MISC::SET_BIT(iParam2, 2);
			}
			if (!__LIB_2__::func_245())
			{
				__LIB_0__::func_802();
				MISC::SET_BIT(iParam2, 3);
			}
			if (!BitTest(*iParam2, 14))
			{
				MISC::SET_BIT(iParam2, 14);
			}
			__LIB_6__::func_559();
			if (!BitTest(*iParam2, 25))
			{
				Global_2789733 = 1;
				MISC::SET_BIT(iParam2, 25);
			}
			func_4968(&(iParam2->f_88));
			if (Global_1946106)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_6__::func_463(iParam1, 2);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::SET_NOISINESSOVERIDE(0f);
					GRAPHICS::SET_NOISEOVERIDE(false);
				}
			}
			if (__LIB_25__::func_288(0, 1, 0))
			{
				if (func_84(uParam0, iParam1, iParam2, uParam3))
				{
					func_5465(iParam2);
					Global_2789733 = 0;
					if (BitTest(*iParam2, 25))
					{
						MISC::CLEAR_BIT(iParam2, 25);
					}
					if (BitTest(*iParam1, 3))
					{
						if (__LIB_4__::func_739())
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
						__LIB_6__::func_463(iParam1, 1);
					}
					else
					{
						__LIB_6__::func_463(iParam1, 2);
					}
				}
			}
			__LIB_4__::func_62(1);
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
		__LIB_0__::func_184();
		__LIB_4__::func_62(1);
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

int func_84(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x362F
{
	__LIB_1__::func_304();
	HUD::DISPLAY_AMMO_THIS_FRAME(false);
	HUD::HUD_FORCE_WEAPON_WHEEL(false);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	__LIB_4__::func_62(1);
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_26__::func_64(&(iParam2->f_88));
	}
	__LIB_0__::func_186();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	__LIB_8__::func_611(0);
	if (!Global_1574747)
	{
		__LIB_0__::func_651();
	}
	if (!BitTest(*iParam2, 8))
	{
		func_4911(iParam1, iParam2, uParam3, 0);
		if (func_108(uParam0, iParam1, iParam2, uParam3))
		{
			if (((func_89(uParam0, iParam1, iParam2, uParam3) || Global_1853198) || Global_1931426) || BitTest(Global_2621446.f_1, 2))
			{
				__LIB_20__::func_316(iParam2, iParam2->f_87);
				MISC::SET_BIT(iParam2, 8);
			}
		}
		else if (iParam1->f_1 != 0)
		{
			iParam1->f_1 = 0;
		}
	}
	else if (func_108(uParam0, iParam1, iParam2, uParam3))
	{
		if (__LIB_0__::func_630(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, 91))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(200f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
		else
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		__LIB_6__::func_531(iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
		MISC::CLEAR_BIT(iParam2, 8);
		return 1;
	}
	return 0;
}

int func_89(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x3874
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_77(0)) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !__LIB_0__::func_661()) && iParam2->f_25 == 13) && !BitTest(Global_1931419, 2))
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
			if (__LIB_6__::func_533(uParam0, iParam1) == 1)
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 0);
			}
		}
		if (BitTest(iParam1->f_1, 1))
		{
			if (__LIB_6__::func_533(uParam0, iParam1) == 2)
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 1);
			}
		}
		if (iParam1->f_4 != __LIB_6__::func_532(uParam0, iParam1))
		{
			MISC::CLEAR_BIT(&(iParam1->f_1), 2);
			MISC::CLEAR_BIT(&(iParam1->f_1), 3);
			iParam1->f_4 = __LIB_6__::func_532(uParam0, iParam1);
		}
		if (iParam1->f_5 != __LIB_6__::func_458(uParam0, iParam1))
		{
			MISC::CLEAR_BIT(&(iParam1->f_1), 4);
			MISC::CLEAR_BIT(&(iParam1->f_1), 5);
			iParam1->f_5 = __LIB_6__::func_458(uParam0, iParam1);
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
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, __LIB_4__::func_261(0)))
		{
			if (BitTest(*iParam1, 3))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			MISC::SET_BIT(iParam2, 0);
			__LIB_6__::func_566(0, 1);
			return 1;
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			if (!Global_2725435)
			{
				if ((__LIB_4__::func_264(&(iParam2->f_29), &iVar1, 1, -1, 0, 0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)) || (((iParam2->f_87 == 6 || iParam2->f_87 == 7) || iParam2->f_87 == 8) && __LIB_4__::func_264(&(iParam2->f_29), &iVar2, 0, -1, 0, 0)))
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
						if (__LIB_6__::func_533(uParam0, iParam1) == 2)
						{
							MISC::SET_BIT(&(iParam1->f_1), 0);
						}
						else if (__LIB_6__::func_533(uParam0, iParam1) == 1)
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
			if (__LIB_9__::func_90(uParam0, iParam1, iParam2))
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/))
				{
					iParam2->f_8++;
					if (iParam2->f_8 > 1)
					{
						iParam2->f_8 = 0;
					}
					__LIB_6__::func_531(iParam2);
					func_4911(iParam1, iParam2, uParam3, 0);
				}
			}
			if (!(__LIB_6__::func_533(uParam0, iParam1) == 1 && iParam2->f_87 == 4))
			{
				if (BitTest(*iParam2, 0) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/))
				{
					__LIB_6__::func_498(&(iParam2->f_88.f_47.f_1474));
					__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, __LIB_4__::func_261(0), true), "HUD_INPUT3" /* GXT: Back */, &(iParam2->f_88.f_47.f_1474), 0);
					if (__LIB_6__::func_533(uParam0, iParam1) == 2 && !Global_2725435)
					{
						__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, iVar0, true), "HUD_INPUT81" /* GXT: Turn On */, &(iParam2->f_88.f_47.f_1474), 0);
					}
					else if (__LIB_6__::func_533(uParam0, iParam1) == 1 && !Global_2725435)
					{
						__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, iVar0, true), "HUD_INPUT82" /* GXT: Turn Off */, &(iParam2->f_88.f_47.f_1474), 0);
						if (iParam2->f_2481 && !BitTest(*iParam2, 31))
						{
							__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true), "HUD_INPUT_97" /* GXT: Select Movie */, &(iParam2->f_88.f_47.f_1474), 0);
						}
						else
						{
							__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true), "HUD_INPUT75" /* GXT: Select Channel */, &(iParam2->f_88.f_47.f_1474), 0);
						}
						if ((iParam2->f_87 == 6 || iParam2->f_87 == 7) || iParam2->f_87 == 8)
						{
							__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/, true), "HUD_INPUT77" /* GXT: Change Volume */, &(iParam2->f_88.f_47.f_1474), 0);
						}
					}
					if (__LIB_9__::func_90(uParam0, iParam1, iParam2))
					{
						__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0 /*PLAYER_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/, true), "HUD_INPUT87" /* GXT: Camera */, &(iParam2->f_88.f_47.f_1474), 0);
					}
					MISC::CLEAR_BIT(iParam2, 0);
				}
				Var3 = { __LIB_1__::func_59() };
				__LIB_4__::func_260(&(iParam2->f_88.f_47.f_1474), 1f);
				__LIB_7__::func_693(&(iParam2->f_88.f_47.f_2174), &Var3, &(iParam2->f_88.f_47.f_1474), __LIB_1__::func_57(&(iParam2->f_88.f_47.f_1474)));
				__LIB_0__::func_660(1);
			}
		}
	}
	return 0;
}

int func_108(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x449E
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
	if (((((!BitTest(iParam2->f_28, 3) && !BitTest(iParam2->f_28, 4)) && !BitTest(iParam2->f_28, 5)) && !BitTest(iParam2->f_28, 6)) && __LIB_8__::func_827(iParam2->f_26)) && __LIB_8__::func_827(iParam2->f_27))
	{
		bVar4 = true;
		if (__LIB_5__::func_112(iParam2->f_26) && __LIB_5__::func_112(iParam2->f_27))
		{
			bVar5 = true;
		}
	}
	switch (__LIB_6__::func_543(iParam2))
	{
		case 0:
			if (((((!BitTest(iParam2->f_28, 4) && !BitTest(iParam2->f_28, 3)) && !BitTest(iParam2->f_28, 5)) && !BitTest(iParam2->f_28, 6)) && iParam2->f_26 == 5) && BitTest(*uParam0, 0))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "SET_TEXT");
					__LIB_0__::func_478("MPTV_CETTL" /* GXT: CRIMINAL ESCAPED */);
					__LIB_0__::func_478("MPTV_CESTTL" /* GXT: Police have lost the trail */);
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
				__LIB_6__::func_542();
				__LIB_6__::func_464(iParam2, 1);
			}
			else
			{
				bVar0 = false;
				if (BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6))
				{
					if (!__LIB_8__::func_827(iParam2->f_26) || BitTest(iParam2->f_28, 10))
					{
						bVar0 = true;
					}
				}
				else if (BitTest(iParam2->f_28, 5))
				{
					if (!__LIB_8__::func_827(iParam2->f_27) || BitTest(iParam2->f_28, 10))
					{
						bVar0 = true;
					}
				}
				else if (BitTest(iParam2->f_28, 3))
				{
					if (!__LIB_8__::func_827(iParam2->f_27))
					{
						bVar0 = true;
					}
				}
				else if (!__LIB_8__::func_827(iParam2->f_26) && !__LIB_8__::func_827(iParam2->f_27))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					MISC::SET_BIT(iParam2, 0);
					__LIB_6__::func_464(iParam2, 12);
				}
				else
				{
					if (bVar5)
					{
						MISC::SET_BIT(iParam2, 19);
					}
					__LIB_6__::func_464(iParam2, 2);
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
				__LIB_6__::func_464(iParam2, 2);
			}
			break;
		case 2:
			__LIB_4__::func_75(1);
			if (!CAM::IS_SCREEN_FADED_OUT() && !bVar4)
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					if ((BitTest(iParam2->f_28, 3) || BitTest(iParam2->f_28, 5)) || (!__LIB_8__::func_827(iParam2->f_26) && __LIB_8__::func_827(iParam2->f_27)))
					{
						__LIB_6__::func_541(iParam2, 500);
					}
					else
					{
						__LIB_6__::func_541(iParam2, 500);
					}
				}
			}
			else
			{
				if (bVar4)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity_FUZZ");
					__LIB_7__::func_793(&(iParam2->f_30), 0);
					MISC::SET_BIT(iParam2, 23);
					if (!Global_2787852)
					{
						__LIB_6__::func_540(iParam2);
					}
					__LIB_18__::func_721(0, 0);
					MISC::SET_BIT(iParam2, 26);
					if (!bVar5)
					{
						MISC::CLEAR_BIT(iParam2, 19);
					}
				}
				iParam2->f_24 = MISC::GET_GAME_TIMER();
				CAM::DO_SCREEN_FADE_OUT(250);
				__LIB_6__::func_464(iParam2, 3);
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
					__LIB_6__::func_468(iParam2);
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
					if (__LIB_6__::func_153(&(iParam2->f_88.f_1)))
					{
						__LIB_6__::func_152();
						__LIB_40__::func_13(&(iParam2->f_88), 32);
					}
					else if (__LIB_8__::func_679(&(iParam2->f_88.f_1)))
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						if (CAM::DOES_CAM_EXIST(iParam2->f_5))
						{
							CAM::DESTROY_CAM(iParam2->f_5, false);
						}
						if (__LIB_5__::func_112(iParam2->f_27))
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
					__LIB_41__::func_727(&(iParam2->f_88));
				}
				__LIB_6__::func_464(iParam2, 4);
			}
			break;
		case 4:
			if (BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6))
			{
				if (func_4911(iParam1, iParam2, uParam3, 0))
				{
					if (__LIB_8__::func_827(iParam2->f_26))
					{
						__LIB_20__::func_868(iParam2, uParam3, iParam1, 0);
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
								__LIB_0__::func_478("MPTV_CCTV3" /* GXT: GARAGE 22 - 06 - 84 */);
							}
							else if (iParam2->f_27 == 1)
							{
								if (__LIB_1__::func_188(uParam3->f_31))
								{
									__LIB_0__::func_478("MPTV_CCTV7" /* GXT: ROOF 04 - 11 - 87 */);
								}
								else
								{
									__LIB_0__::func_478("MPTV_CCTV6" /* GXT: GARAGE DOOR 04 - 11 - 87 */);
								}
							}
							else
							{
								__LIB_0__::func_478("MPTV_CCTV0" /* GXT: MAIN DOOR 04 - 11 - 87 */);
							}
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "SET_DETAILS");
							if (iParam2->f_27 == 3)
							{
								__LIB_0__::func_478("MPTV_CCTV4" /* GXT: 38 : 06 : 35    5N/0BR2 */);
							}
							else
							{
								__LIB_0__::func_478("MPTV_CCTV1" /* GXT: 38 : 06 : 35    5N/0BR2 */);
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
								__LIB_20__::func_868(iParam2, uParam3, iParam1, 1);
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
						if (!__LIB_6__::func_153(&(iParam2->f_88.f_1)) && __LIB_37__::func_107(5))
						{
							if (BitTest(iParam2->f_88.f_1, 13))
							{
								if (!__LIB_6__::func_153(&(iParam2->f_88.f_1)))
								{
									__LIB_40__::func_13(&(iParam2->f_88), 0);
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
								__LIB_19__::func_387(&(iParam2->f_88), 5, 0, 8);
							}
						}
						else if (__LIB_4__::func_746(&(iParam2->f_88.f_1)))
						{
							MISC::SET_BIT(iParam2, 12);
							MISC::SET_BIT(iParam2, 11);
							__LIB_20__::func_868(iParam2, uParam3, iParam1, 1);
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
						else if (!__LIB_37__::func_107(5))
						{
							if (!__LIB_6__::func_153(&(iParam2->f_88.f_1)))
							{
								__LIB_40__::func_13(&(iParam2->f_88), 0);
							}
							bVar0 = true;
						}
						break;
					case 5:
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
						if (Global_1835502.f_383 != -1 && __LIB_1__::func_264(Global_1835502.f_383, 1, 1))
						{
							if (!__LIB_6__::func_153(&(iParam2->f_88.f_1)))
							{
								if (BitTest(*iParam2, 1))
								{
									STREAMING::CLEAR_FOCUS();
									MISC::CLEAR_BIT(iParam2, 1);
								}
								__LIB_19__::func_387(&(iParam2->f_88), 3, PLAYER::GET_PLAYER_PED(Global_1835502.f_383), 0);
							}
							else if (__LIB_4__::func_746(&(iParam2->f_88.f_1)))
							{
								iParam2->f_7 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
								if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2->f_7))
								{
									if (!HUD::IS_PAUSE_MENU_ACTIVE())
									{
										__LIB_19__::func_509(iParam2);
									}
									HUD::DISPLAY_RADAR(false);
									MISC::SET_BIT(iParam2, 12);
									MISC::SET_BIT(iParam2, 11);
									__LIB_20__::func_868(iParam2, uParam3, iParam1, 1);
									if (!__LIB_5__::func_112(iParam2->f_26))
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
							if (__LIB_6__::func_153(&(iParam2->f_88.f_1)))
							{
								func_4739(&(iParam2->f_88), 0);
							}
							bVar0 = true;
						}
						break;
					case 6:
					case 7:
					case 8:
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
						if (func_4911(iParam1, iParam2, uParam3, 0))
						{
							if (__LIB_8__::func_827(iParam2->f_26))
							{
								MISC::SET_BIT(&(iParam2->f_28), 0);
								iParam2->f_17 = { CAM::GET_CAM_COORD(iParam2->f_6) };
								iParam2->f_20 = { CAM::GET_CAM_ROT(iParam2->f_6, 2) };
								__LIB_20__::func_868(iParam2, uParam3, iParam1, 1);
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
				__LIB_6__::func_464(iParam2, 10);
			}
			break;
		case 10:
			if ((MISC::GET_GAME_TIMER() - iParam2->f_24) > 200)
			{
				if (BitTest(iParam2->f_28, 0))
				{
					__LIB_6__::func_464(iParam2, 5);
				}
				else
				{
					__LIB_6__::func_464(iParam2, 11);
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
			__LIB_6__::func_464(iParam2, 6);
			break;
		case 6:
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || (MISC::GET_GAME_TIMER() - iParam2->f_24) > 10000)
			{
				if (BitTest(iParam2->f_28, 1))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					MISC::CLEAR_BIT(&(iParam2->f_28), 1);
				}
				if (iParam2->f_27 == 3 && !__LIB_18__::func_376(uParam3->f_31, 0, 0))
				{
					iParam2->f_24 = MISC::GET_GAME_TIMER();
					__LIB_6__::func_464(iParam2, 7);
				}
				else if ((__LIB_7__::func_916(PLAYER::PLAYER_ID()) && ((iParam2->f_27 == 6 || iParam2->f_27 == 7) || iParam2->f_27 == 8)) && __LIB_8__::func_827(iParam2->f_26))
				{
					iParam2->f_24 = MISC::GET_GAME_TIMER();
					__LIB_6__::func_464(iParam2, 7);
				}
				else
				{
					__LIB_6__::func_464(iParam2, 8);
				}
			}
			break;
		case 7:
			iParam2->f_23 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_19__::func_943(uParam3), __LIB_19__::func_942(uParam3));
			if ((MISC::GET_GAME_TIMER() - iParam2->f_24) > 5000)
			{
				__LIB_6__::func_464(iParam2, 8);
			}
			else if (INTERIOR::IS_VALID_INTERIOR(iParam2->f_23))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam2->f_23);
				if (INTERIOR::IS_INTERIOR_READY(iParam2->f_23))
				{
					INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(__LIB_19__::func_941(uParam3));
					if (INTERIOR::IS_INTERIOR_SCENE())
					{
						__LIB_6__::func_464(iParam2, 8);
					}
				}
			}
			break;
		case 8:
			bVar0 = false;
			if ((BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6)) || (__LIB_8__::func_827(iParam2->f_26) && !__LIB_8__::func_827(iParam2->f_27)))
			{
				if (func_4911(iParam1, iParam2, uParam3, 0))
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
				__LIB_6__::func_464(iParam2, 9);
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
						if (((((((((((!__LIB_4__::func_710(uParam3->f_31) && !__LIB_4__::func_711(uParam3->f_31, -1)) && !__LIB_4__::func_712(uParam3->f_31)) && !__LIB_1__::func_188(uParam3->f_31)) && !__LIB_0__::func_630(uParam3->f_31, -1)) && !__LIB_18__::func_376(uParam3->f_31, 0, 0)) && !__LIB_7__::func_916(PLAYER::PLAYER_ID())) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !iParam2->f_2481) && !iParam2->f_2482) && !iParam2->f_2483) || BitTest(*iParam1, 3))
						{
							if (func_4734(iParam1, iParam2, uParam3))
							{
								bVar0 = true;
							}
						}
						else if (func_125(iParam1, iParam2, uParam3))
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
					if (((((((((((!__LIB_4__::func_710(uParam3->f_31) && !__LIB_4__::func_711(uParam3->f_31, -1)) && !__LIB_4__::func_712(uParam3->f_31)) && !__LIB_1__::func_188(uParam3->f_31)) && !__LIB_0__::func_630(uParam3->f_31, -1)) && !__LIB_18__::func_376(uParam3->f_31, 0, 0)) && !__LIB_7__::func_916(PLAYER::PLAYER_ID())) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !iParam2->f_2481) && !iParam2->f_2482) && !iParam2->f_2483) || BitTest(*iParam1, 3))
					{
						if (func_4734(iParam1, iParam2, uParam3))
						{
							bVar0 = true;
						}
					}
					else if (func_125(iParam1, iParam2, uParam3))
					{
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				MISC::SET_BIT(iParam2, 18);
				__LIB_6__::func_464(iParam2, 11);
			}
			break;
		case 11:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					if (bVar4)
					{
						__LIB_6__::func_467(iParam2, 0);
					}
					else if ((BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6)) || (__LIB_8__::func_827(iParam2->f_26) && !__LIB_8__::func_827(iParam2->f_27)))
					{
						__LIB_6__::func_467(iParam2, 500);
					}
					else
					{
						__LIB_6__::func_467(iParam2, 500);
					}
				}
			}
			else
			{
				__LIB_6__::func_464(iParam2, 12);
			}
			break;
		case 12:
			__LIB_6__::func_469(iParam2);
			if (__LIB_5__::func_112(iParam2->f_27) && !((BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6)) || ((!BitTest(*iParam1, 3) && uParam0->f_22 == 2) || (BitTest(*iParam1, 3) && uParam0->f_23 == 2))))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
				GRAPHICS::SET_NOISINESSOVERIDE(0.1f);
				__LIB_6__::func_534(iParam2);
			}
			else
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_NOISINESSOVERIDE(0f);
				GRAPHICS::SET_NOISEOVERIDE(false);
			}
			__LIB_18__::func_721(1, 0);
			MISC::CLEAR_BIT(&(iParam2->f_28), 0);
			iParam2->f_17 = { 0f, 0f, 0f };
			iParam2->f_20 = { 0f, 0f, 0f };
			MISC::SET_BIT(iParam2, 0);
			MISC::CLEAR_BIT(iParam2, 23);
			__LIB_7__::func_793(&(iParam2->f_30), 1);
			__LIB_4__::func_71();
			MISC::SET_BIT(iParam2, 0);
			__LIB_6__::func_464(iParam2, 13);
			break;
		case 13:
			if (!__LIB_1__::func_563(111, -1))
			{
				if (__LIB_8__::func_827(iParam2->f_87))
				{
					__LIB_6__::func_905(111, 1, -1, 1);
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
					if (__LIB_6__::func_153(&(iParam2->f_88.f_1)))
					{
						if (__LIB_4__::func_746(&(iParam2->f_88.f_1)))
						{
							if (Global_1835502.f_383 != -1 && __LIB_1__::func_264(Global_1835502.f_383, 0, 1))
							{
								if (__LIB_1__::func_282() != PLAYER::GET_PLAYER_PED(Global_1835502.f_383))
								{
									__LIB_8__::func_824(&(iParam2->f_88), PLAYER::GET_PLAYER_PED(Global_1835502.f_383));
								}
							}
							if (!__LIB_1__::func_563(107, -1))
							{
								__LIB_6__::func_905(107, 1, -1, 1);
							}
						}
					}
					if (Global_1835502.f_383 == -1 || !__LIB_1__::func_264(Global_1835502.f_383, 1, 1))
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
			__LIB_7__::func_792(&(iParam2->f_30), __LIB_4__::func_73(&(iParam2->f_30)));
		}
		if (BitTest(*iParam2, 19))
		{
			if (__LIB_6__::func_543(iParam2) == 1)
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
								if (__LIB_6__::func_232())
								{
									__LIB_19__::func_509(iParam2);
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

int func_125(int* iParam0, int* iParam1, var uParam2)//Position - 0x5AB9
{
	int iVar0;
	struct<3> Var1;
	if (!BitTest(*iParam1, 15))
	{
		MISC::SET_BIT(iParam1, 15);
	}
	if (!BitTest(*iParam1, 27))
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_134(iParam1, iParam0, uParam2, 0), 7f, __LIB_26__::func_396(iParam1, uParam2, iParam0), false, false, true);
		iParam1->f_4 = iVar0;
		if (iVar0 != 0)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		}
		if ((Var1.f_0 != 0f || Var1.f_1 != 0f) || Var1.f_2 != 0f)
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_19__::func_940(iParam1, uParam2)))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(__LIB_19__::func_940(iParam1, uParam2));
			}
			MISC::SET_BIT(iParam1, 27);
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam1->f_4);
			__LIB_6__::func_536(iParam1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(iParam1, 4);
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_19__::func_940(iParam1, uParam2)))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(__LIB_19__::func_940(iParam1, uParam2), false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_4))
		{
			if (STREAMING::IS_MODEL_VALID(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
			{
				if (HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
				{
					iParam1->f_2 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(__LIB_19__::func_940(iParam1, uParam2));
					iParam1->f_86 = __LIB_6__::func_535(iParam1->f_87);
					__LIB_8__::func_825();
					GRAPHICS::SET_TV_CHANNEL(-1);
					MISC::SET_BIT(iParam1, 5);
					__LIB_0__::func_579(&(iParam1->f_80));
					return 1;
				}
				else
				{
					HUD::RELEASE_NAMED_RENDERTARGET(__LIB_19__::func_940(iParam1, uParam2));
					HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iParam1->f_4));
				}
			}
		}
		else if (BitTest(*iParam1, 27))
		{
			MISC::CLEAR_BIT(iParam1, 27);
		}
	}
	if (__LIB_2__::func_47(&(iParam1->f_80), 10000, 0))
	{
		__LIB_0__::func_579(&(iParam1->f_80));
		return 1;
	}
	return 0;
}

Vector3 func_134(int* iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x617B
{
	struct<3> Var0;
	var uVar1;
	func_135(iParam0, uParam1, uParam2, &Var0, &uVar1, bParam3);
	return Var0;
}

void func_135(int* iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x6197
{
	struct<4> Var0;
	*uParam3 = { 0f, 0f, 0f };
	*uParam4 = { 0f, 0f, 0f };
	if (!BitTest(*uParam1, 3) && !bParam5)
	{
		if (__LIB_4__::func_712(uParam2->f_31))
		{
			if (((Global_4196256 == 1 || Global_4196256 == 2) || Global_4196256 == 5) || Global_4196256 == 6)
			{
				__LIB_18__::func_381(uParam2->f_31, 14, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
			else if (Global_4196256 == 3 || Global_4196256 == 7)
			{
				__LIB_18__::func_381(uParam2->f_31, 557, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
			else if (Global_4196256 == 4)
			{
				__LIB_18__::func_381(uParam2->f_31, 559, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
			else
			{
				__LIB_18__::func_381(uParam2->f_31, 558, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
			}
		}
		else if (__LIB_4__::func_710(uParam2->f_31))
		{
			__LIB_7__::func_201(__LIB_19__::func_663(0), 14, &Var0, 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_1__::func_188(uParam2->f_31))
		{
			__LIB_18__::func_381(uParam2->f_31, 14, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_0__::func_630(uParam2->f_31, -1))
		{
			__LIB_18__::func_381(uParam2->f_31, 14, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_18__::func_376(uParam2->f_31, 0, 0))
		{
			__LIB_18__::func_381(uParam2->f_31, 14, &Var0, __LIB_1__::func_984(uParam2->f_31), 1);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
		else if (__LIB_7__::func_916(PLAYER::PLAYER_ID()))
		{
			Var0 = { -1235.235f, -3010.295f, -42.873f };
			Var0.f_3 = { 0f, 0f, -45f };
			*uParam3 = { -1235.235f, -3010.295f, -42.873f };
			*uParam4 = { 0f, 0f, -45f };
		}
		else if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
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
			*uParam3 = { func_4725(*uParam3, __LIB_3__::func_977(PLAYER::PLAYER_ID())) };
			uParam4->f_2 = func_136(uParam4->f_2, __LIB_3__::func_977(PLAYER::PLAYER_ID()));
		}
		else if (__LIB_1__::func_984(uParam2->f_31) == 8)
		{
			Var0 = { 337.2845f, -996.6658f, -99.0276f };
			Var0.f_3 = { 0f, 0f, 90f };
			*uParam3 = { 337.2845f, -996.6658f, -99.0276f };
			*uParam4 = { 0f, 0f, 90f };
		}
		else if (__LIB_1__::func_984(uParam2->f_31) == 17)
		{
			Var0 = { 256.7323f, -995.4481f, -98.8606f };
			Var0.f_3 = { 0f, 0f, 45f };
			*uParam3 = { 256.7323f, -995.4481f, -98.8606f };
			*uParam4 = { 0f, 0f, 45f };
		}
		else
		{
			__LIB_18__::func_381(uParam2->f_31, 14, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
			*uParam3 = { Var0 };
			*uParam4 = { Var0.f_3 };
		}
	}
	else
	{
		*uParam3 = { 228.8359f, -974.6591f, -98.3713f };
	}
}

float func_136(float fParam0, int iParam1)//Position - 0x66C8
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_137(iParam1, &uVar2, &uVar0, &fVar1, 0);
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

void func_137(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x6712
{
	struct<31> Var0;
	func_138(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_138(int iParam0, var uParam1, int iParam2)//Position - 0x6732
{
	func_4720(uParam1, iParam2);
	func_4714(uParam1, iParam2);
	func_4706(uParam1, iParam2);
	func_139(__LIB_0__::func_170(iParam0), uParam1, iParam2);
}

void func_139(int iParam0, var uParam1, int iParam2)//Position - 0x6760
{
	switch (iParam0)
	{
		case 0:
			func_4633(uParam1, iParam2);
			break;
		case 1:
			func_4501(uParam1, iParam2);
			break;
		case 2:
			func_4424(uParam1, iParam2);
			break;
		case 3:
			func_4347(uParam1, iParam2);
			break;
		case 4:
			func_4173(uParam1, iParam2);
			break;
		case 5:
			func_4007(uParam1, iParam2);
			break;
		case 6:
			func_3943(uParam1, iParam2);
			break;
		case 7:
			func_3775(uParam1, iParam2);
			break;
		case 8:
			func_3605(uParam1, iParam2);
			break;
		case 9:
			func_3361(uParam1, iParam2);
			break;
		case 10:
			func_3283(uParam1, iParam2);
			break;
		case 11:
			func_3052(uParam1, iParam2);
			break;
		case 12:
			func_2909(uParam1, iParam2);
			break;
		case 13:
			func_2741(uParam1, iParam2);
			break;
		case 14:
			func_2567(uParam1, iParam2);
			break;
		case 15:
			func_2389(uParam1, iParam2);
			break;
		case 16:
			func_2279(uParam1, iParam2);
			break;
		case 17:
			func_2026(uParam1, iParam2);
			break;
		case 18:
			func_1932(uParam1, iParam2);
			break;
		case 19:
			func_1808(uParam1, iParam2);
			break;
		case 20:
			func_1361(uParam1, iParam2);
			break;
		case 21:
			func_1240(uParam1, iParam2);
			break;
		case 22:
			func_1067(uParam1, iParam2);
			break;
		case 23:
			func_845(uParam1, iParam2);
			break;
		case 24:
			func_140(uParam1, iParam2);
			break;
	}
}

void func_140(var uParam0, int iParam1)//Position - 0x6918
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 334443/*func_844*/;
			break;
		case 111:
			uParam0->f_35 = 334429/*func_843*/;
			break;
		case 1:
			uParam0->f_30 = 334333/*func_842*/;
			break;
		case 2:
			uParam0->f_31 = 332990/*func_836*/;
			break;
		case 3:
			uParam0->f_34 = 332761/*func_835*/;
			break;
		case 4:
			uParam0->f_12 = 332749/*func_834*/;
			break;
		case 5:
			uParam0->f_11 = 332739/*func_833*/;
			break;
		case 37:
			uParam0->f_18 = 332551/*func_832*/;
			break;
		case 38:
			uParam0->f_9 = 332504/*func_831*/;
			break;
		case 42:
			uParam0->f_10 = 332476/*func_830*/;
			break;
		case 6:
			uParam0->f_32 = 332167/*func_829*/;
			break;
		case 11:
			uParam0->f_11 = 332158/*func_828*/;
			break;
		case 12:
			uParam0->f_33 = 329490/*func_820*/;
			break;
		case 14:
			uParam0->f_11 = 329481/*func_819*/;
			break;
		case 109:
			uParam0->f_56 = 322894/*func_816*/;
			break;
		case 8:
			uParam0->f_37 = 322019/*func_815*/;
			break;
		case 7:
			uParam0->f_36 = 321902/*func_814*/;
			break;
		case 79:
			*uParam0 = 321846/*func_811*/;
			break;
		case 9:
			uParam0->f_29 = 321693/*func_810*/;
			break;
		case 10:
			uParam0->f_27 = 321549/*func_808*/;
			break;
		case 13:
			uParam0->f_2 = 321467/*func_806*/;
			break;
		case 15:
			uParam0->f_2 = 319727/*func_784*/;
			break;
		case 16:
			uParam0->f_5 = 318530/*func_775*/;
			break;
		case 108:
			uParam0->f_55 = 262494/*func_650*/;
			break;
		case 17:
			uParam0->f_17 = 260773/*func_631*/;
			break;
		case 19:
			uParam0->f_17 = 260623/*func_626*/;
			break;
		case 18:
			uParam0->f_8 = 260598/*func_625*/;
			break;
		case 20:
			uParam0->f_3 = 260378/*func_623*/;
			break;
		case 21:
			uParam0->f_3 = 258937/*func_609*/;
			break;
		case 74:
			uParam0->f_53 = 258747/*func_607*/;
			break;
		case 75:
			uParam0->f_4 = 257412/*func_601*/;
			break;
		case 22:
			uParam0->f_24 = 257295/*func_599*/;
			break;
		case 23:
			uParam0->f_26 = 257252/*func_598*/;
			break;
		case 24:
			uParam0->f_26 = 257218/*func_597*/;
			break;
		case 26:
			uParam0->f_38 = 257210/*func_596*/;
			break;
		case 25:
			uParam0->f_23 = 254223/*func_576*/;
			break;
		case 27:
			uParam0->f_25 = 254215/*func_575*/;
			break;
		case 28:
			uParam0->f_24 = 254207/*func_574*/;
			break;
		case 30:
			uParam0->f_8 = 254057/*func_572*/;
			break;
		case 31:
			uParam0->f_39 = 253838/*func_569*/;
			break;
		case 33:
			uParam0->f_40 = 252845/*func_559*/;
			break;
		case 32:
			*uParam0 = 252790/*func_558*/;
			break;
		case 76:
			uParam0->f_13 = 252779/*func_557*/;
			break;
		case 34:
			uParam0->f_41 = 249027/*func_554*/;
			break;
		case 36:
			uParam0->f_58 = 248982/*func_553*/;
			break;
		case 35:
			uParam0->f_42 = 227820/*func_550*/;
			break;
		case 45:
			uParam0->f_14 = 227811/*func_549*/;
			break;
		case 46:
			uParam0->f_14 = 227802/*func_548*/;
			break;
		case 110:
			uParam0->f_57 = 227794/*func_547*/;
			break;
		case 77:
			uParam0->f_13 = 227771/*func_546*/;
			break;
		case 82:
			uParam0->f_19 = 227725/*func_544*/;
			break;
		case 47:
			uParam0->f_43 = 227593/*func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 226451/*func_534*/;
			break;
		case 49:
			uParam0->f_8 = 226433/*func_533*/;
			break;
		case 50:
			*uParam0 = 226084/*func_529*/;
			break;
		case 51:
			*uParam0 = 225982/*func_528*/;
			break;
		case 52:
			uParam0->f_15 = 225971/*func_527*/;
			break;
		case 53:
			uParam0->f_13 = 225845/*func_526*/;
			break;
		case 54:
			uParam0->f_45 = 225458/*func_525*/;
			break;
		case 56:
			uParam0->f_46 = 225439/*func_524*/;
			break;
		case 57:
			uParam0->f_11 = 224195/*func_515*/;
			break;
		case 58:
			uParam0->f_13 = 224069/*func_514*/;
			break;
		case 59:
			*uParam0 = 222557/*func_499*/;
			break;
		case 60:
			*uParam0 = 222548/*func_498*/;
			break;
		case 61:
			uParam0->f_15 = 222537/*func_497*/;
			break;
		case 62:
			uParam0->f_13 = 222411/*func_496*/;
			break;
		case 55:
			uParam0->f_45 = 222403/*func_495*/;
			break;
		case 63:
			uParam0->f_11 = 222389/*func_494*/;
			break;
		case 64:
			uParam0->f_47 = 222381/*func_493*/;
			break;
		case 65:
			uParam0->f_21 = 221013/*func_484*/;
			break;
		case 66:
			uParam0->f_21 = 220278/*func_480*/;
			break;
		case 67:
			uParam0->f_21 = 220138/*func_478*/;
			break;
		case 68:
			*uParam0 = 218933/*func_473*/;
			break;
		case 69:
			*uParam0 = 218924/*func_472*/;
			break;
		case 70:
			uParam0->f_48 = 218912/*func_471*/;
			break;
		case 71:
			uParam0->f_49 = 218903/*func_470*/;
			break;
		case 107:
			uParam0->f_50 = 218891/*func_469*/;
			break;
		case 80:
			uParam0->f_7 = 218444/*func_467*/;
			break;
		case 84:
			uParam0->f_1 = 218435/*func_466*/;
			break;
		case 85:
			uParam0->f_1 = 46184/*func_280*/;
			break;
		case 87:
			uParam0->f_1 = 42331/*func_259*/;
			break;
		case 88:
			uParam0->f_1 = 42322/*func_258*/;
			break;
		case 89:
			uParam0->f_54 = 42314/*func_257*/;
			break;
		case 90:
			uParam0->f_1 = 41364/*func_237*/;
			break;
		case 91:
			uParam0->f_1 = 41330/*func_236*/;
			break;
		case 92:
			uParam0->f_1 = 39443/*func_223*/;
			break;
		case 94:
			uParam0->f_1 = 37399/*func_208*/;
			break;
		case 95:
			uParam0->f_22 = 35260/*func_181*/;
			break;
		case 96:
			uParam0->f_1 = 35251/*func_180*/;
			break;
		case 97:
			uParam0->f_1 = 35242/*func_179*/;
			break;
		case 98:
			uParam0->f_1 = 35233/*func_178*/;
			break;
		case 100:
			uParam0->f_22 = 35225/*func_177*/;
			break;
		case 101:
			uParam0->f_22 = 35217/*func_176*/;
			break;
		case 112:
			uParam0->f_13 = 35103/*func_175*/;
			break;
		case 113:
			uParam0->f_3 = 34949/*func_171*/;
			break;
		case 114:
			uParam0->f_16 = 34281/*func_170*/;
			break;
		case 115:
			uParam0->f_3 = 34272/*func_169*/;
			break;
		case 116:
			*uParam0 = 34263/*func_168*/;
			break;
		case 117:
			uParam0->f_16 = 29847/*func_167*/;
			break;
		case 118:
			uParam0->f_11 = 29838/*func_166*/;
			break;
		case 119:
			uParam0->f_27 = 29711/*func_161*/;
			break;
		case 120:
			uParam0->f_19 = 29656/*func_158*/;
			break;
		case 78:
			uParam0->f_59 = 28716/*func_143*/;
			break;
		case 124:
			uParam0->f_1 = 28707/*func_142*/;
			break;
		case 125:
			uParam0->f_19 = 28699/*func_141*/;
			break;
	}
}

int func_280(int iParam0, var uParam1)//Position - 0xB468
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
			func_377(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_289(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_415(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_415(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_414(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_414(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_289(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xBBDD
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
						__LIB_36__::func_115(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_307(int iParam0, int iParam1, int iParam2)//Position - 0xCCC7
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
				if (func_308(iParam0, iParam1, iVar0))
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
				if (func_308(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_308(int iParam0, int iParam1, int iParam2)//Position - 0xCD68
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
	Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
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
				if (!func_308(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_308(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_41__::func_676(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_308(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_41__::func_676(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_308(iParam0, 14, uVar11[iVar10]))
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
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_308(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_308(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_377(int iParam0, var uParam1, int iParam2)//Position - 0x2BFAB
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
		if (__LIB_0__::func_517(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_517(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_517(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_42__::func_106(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_25__::func_536(*iParam0, &Var0);
			__LIB_41__::func_677(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_138(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_652(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
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
			if (!__LIB_0__::func_517(iParam2, 32))
			{
				func_289(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_517(iParam2, 16), __LIB_0__::func_517(iParam2, 128), __LIB_0__::func_517(iParam2, 64), !__LIB_0__::func_517(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_517(iParam2, 4))
			{
				__LIB_42__::func_614(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_517(iParam2, 8))
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
			if (__LIB_0__::func_517(iParam2, 8))
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

void func_525(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x370B2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_7__::func_926(iParam0))
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
		if (!__LIB_2__::func_432(PLAYER::PLAYER_ID(), __LIB_2__::func_433(iParam0)) && __LIB_2__::func_432(__LIB_0__::func_582(), __LIB_2__::func_433(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_2__::func_432(iVar1, __LIB_2__::func_433(iParam0)))
					{
						Var3 = { __LIB_1__::func_267(iVar1) };
						if (__LIB_0__::func_585(Var3))
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
Vector3 func_526(int iParam0)//Position - 0x37235
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

void func_576(int iParam0, int iParam1)//Position - 0x3E10F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_2__::func_399();
	Var3 = { __LIB_2__::func_462(iParam0, iVar2) };
	if (__LIB_7__::func_372(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_587(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_2__::func_447(0);
			}
			else
			{
				__LIB_2__::func_447(1);
			}
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_379(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_25());
			}
			__LIB_25__::func_417(iParam0, __LIB_6__::func_25());
		}
	}
	else
	{
		if (__LIB_4__::func_973(0))
		{
			if (iVar2 == 3 && __LIB_5__::func_705(__LIB_0__::func_582()) == iParam0)
			{
				__LIB_2__::func_447(1);
			}
		}
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_587(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x3E76D
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
	if (__LIB_6__::func_911())
	{
		iVar0 = __LIB_3__::func_808();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_807(iParam0)), 2f);
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
						Var7 = { __LIB_1__::func_267(iVar5) };
						bVar8 = false;
						if (__LIB_2__::func_461(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_2__::func_180(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_425(iVar5, 1) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && !((__LIB_4__::func_682(iVar5, 1) && !__LIB_2__::func_457(iVar2, iVar5)) && __LIB_6__::func_25() != 0)) && !func_588(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_7__::func_291(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_0__::func_811(iVar6)) && !__LIB_8__::func_303(iVar5)) && !__LIB_8__::func_108(iVar5, 1)) && __LIB_2__::func_192(PLAYER::PLAYER_ID())) && !func_588(iVar5)) && !__LIB_3__::func_998(iVar5)) && !bVar8)
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
int func_588(bool bParam0)//Position - 0x3E9A8
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

int func_650(var uParam0, var uParam1, var uParam2)//Position - 0x4015E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_2__::func_384(iVar2, 1)) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 26))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if (__LIB_2__::func_384(iVar2, 1) && __LIB_8__::func_154(iVar2) != iVar4)
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar4) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2) && !__LIB_2__::func_384(iVar2, 1))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar4)
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_182(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(iVar4, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 26)) && __LIB_2__::func_469(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
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
						if ((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) || Global_2689235[iVar4 /*453*/].f_318.f_10 != __LIB_0__::func_160()) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_668(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 24))
								{
									if (__LIB_7__::func_376() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 24))
									{
										if ((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_88(uParam1, 0);
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 24)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_88(uParam1, 0);
											__LIB_18__::func_518(iVar2);
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
					func_653(*uParam0);
					bVar5 = __LIB_2__::func_480(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_2__::func_479(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_88(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_88(uParam1, 1);
	return 0;
}

void func_653(var uParam0)//Position - 0x4071C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar2))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (PED::IS_PED_A_PLAYER(iVar0))
					{
						iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
						if (iVar1 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar1, 1, 1))
						{
							if ((BitTest(Global_2689235[iVar1 /*453*/].f_318, 5) && __LIB_4__::func_2(iVar1) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(iVar1)) == 24)
							{
								if (func_656(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if ((__LIB_2__::func_426(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar1 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar1 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_656(var uParam0)//Position - 0x408F3
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_784(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_668(var uParam0, int iParam1, bool bParam2)//Position - 0x40D12
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1)) && !__LIB_2__::func_384(iParam1, 1))
		{
			if (!func_669(iParam1, 128, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_669(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x40E04
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
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_1__::func_104(iParam0, 1))
					{
						__LIB_7__::func_381("PROP_BLOCK_1" /* GXT: Unable to enter garage. Please enter property on foot. */, iParam1, 0);
					}
					else
					{
						__LIB_7__::func_381("PROP_BLOCK_2" /* GXT: Unable to enter garage. Please take this vehicle to mod shop to apply a tracker. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if ((((iParam1 != 1234 && iParam1 != 1235) && iParam1 != 117) && Global_262145.f_21136 /* Tunable: -1119737689 */) && __LIB_6__::func_132(iParam0))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_1__::func_104(iParam0, 1))
					{
						__LIB_7__::func_381("PROP_BLOCK_1" /* GXT: Unable to enter garage. Please enter property on foot. */, iParam1, 0);
					}
					else
					{
						__LIB_7__::func_381("PROP_BLOCK_2" /* GXT: Unable to enter garage. Please take this vehicle to mod shop to apply a tracker. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if (iParam1 == 1234)
	{
		if (PLAYER::PLAYER_ID() == __LIB_7__::func_297(iParam7, 1, 0))
		{
			if (bParam5 == 0 && bParam6 == 0)
			{
				if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!bParam4)
						{
							__LIB_7__::func_381("PROP_NO_PVMOD", iParam1, 0);
							bParam4 = true;
						}
					}
				}
				return 0;
			}
			else if (bParam6 == 1 && bParam5 == 0)
			{
				if (!__LIB_25__::func_382(iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!bParam4)
							{
								__LIB_7__::func_381("PROP_NO_WORK", iParam1, 0);
								bParam4 = true;
							}
						}
					}
					return 0;
				}
			}
			else if (bParam6 == 0 && bParam5 == 1)
			{
				if (!__LIB_2__::func_494(iParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!bParam4)
							{
								__LIB_7__::func_381("MP_PROP_IVD_VEHT" /* GXT: This vehicle cannot be stored in your Vehicle Storage. */, iParam1, 0);
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
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if ((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sadler2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sadler"))
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					else
					{
						__LIB_7__::func_381("PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if (__LIB_0__::func_630(iParam1, -1))
	{
		if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !__LIB_1__::func_376(iVar0))
		{
		}
		else
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
						bParam4 = true;
					}
				}
			}
			return 0;
		}
	}
	if (((iParam1 != 122 && iParam1 != 123) && iParam1 != 124) && __LIB_2__::func_343(iVar0))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_0__::func_630(iParam1, -1))
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
					}
					else
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if (iVar0 == joaat("rcbandito") || iVar0 == joaat("minitank"))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_0__::func_630(iParam1, -1))
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
					}
					else
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if ((__LIB_1__::func_179(iParam0) || __LIB_1__::func_180(iVar0)) || ((((((((__LIB_3__::func_812(iVar0, 0) && iParam1 != 117) && iParam1 != 118) && iParam1 != 119) && iParam1 != 120) && iParam1 != 121) && iParam1 != 122) && iParam1 != 123) && iParam1 != 124))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_0__::func_630(iParam1, -1))
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH4" /* GXT: This vehicle cannot be stored in your Clubhouse. */, iParam1, 0);
					}
					else
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
		return 0;
	}
	if ((((((__LIB_18__::func_376(iParam1, 0, 0) || __LIB_1__::func_188(iParam1)) || iParam1 == 1234) || iParam1 == 1235) || iParam1 == 117) || iParam1 == 127) || iParam1 == 128)
	{
		if (__LIB_1__::func_376(iVar0))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
						bParam4 = true;
					}
				}
			}
			return 0;
		}
	}
	if (__LIB_1__::func_177(iVar0))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
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
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!bParam4)
							{
								__LIB_7__::func_381("MP_PROP_CARBOB" /* GXT: Please detach the vehicle from the Cargobob to proceed. */, 0, 0);
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
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_909() || __LIB_26__::func_626(0, __LIB_7__::func_380(iParam1)))
	{
		if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!bParam4)
				{
					if (__LIB_26__::func_626(1, __LIB_7__::func_380(iParam1)))
					{
						if (iParam1 == 1234)
						{
							__LIB_32__::func_61(0, iParam1, uParam2);
						}
						else if (iParam1 == 1235)
						{
						}
						else if (iParam1 == 117)
						{
							__LIB_32__::func_61(0, iParam1, uParam2);
						}
						else
						{
							__LIB_32__::func_61(1, iParam1, uParam2);
						}
					}
					else
					{
						__LIB_7__::func_381("CUST_GAR_MISO" /* GXT: You can't access your Garage with a mission objective. */, iParam1, 0);
					}
					bParam4 = true;
				}
			}
		}
	}
	else if ((((!__LIB_2__::func_471(iParam0) && !bVar2) && !bVar3) && (__LIB_1__::func_371(ENTITY::GET_ENTITY_MODEL(iParam0)) || (__LIB_18__::func_179(iParam0, 0) && iParam1 == 1234))) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		iVar4 = __LIB_2__::func_486(iVar0);
		if (!__LIB_7__::func_193(iVar0, 1))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						if (iVar4 != -1 && !__LIB_1__::func_378(iVar4))
						{
							__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
						}
						else
						{
							__LIB_7__::func_381("MP_PROP_IVD_4" /* GXT: This vehicle cannot be stored in your Garage unless you purchase the corresponding Downloadable Content. */, iParam1, 0);
							if (iVar4 != -1)
							{
							}
							bParam4 = true;
						}
					}
				}
			}
		}
		else if (iVar4 != -1 && !__LIB_1__::func_378(iVar4))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
						bParam4 = true;
					}
				}
			}
		}
		else if ((!__LIB_1__::func_185(iVar0) || (__LIB_1__::func_185(iVar0) && iVar1)) || (__LIB_18__::func_179(iParam0, 0) && iParam1 == 1234))
		{
			return 1;
		}
		else if (__LIB_1__::func_185(iVar0))
		{
			if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!bParam4)
					{
						__LIB_7__::func_381(__LIB_25__::func_108(iVar0), iParam1, 0);
						bParam4 = true;
					}
				}
			}
		}
	}
	else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!bParam4)
			{
				if (__LIB_0__::func_630(iParam1, -1) && bVar2)
				{
					__LIB_7__::func_381("MP_PROP_IVD_VEH3" /* GXT: You cannot enter the Clubhouse with another player's Personal Vehicle. */, iParam1, 0);
				}
				else if (iParam1 == 117)
				{
					__LIB_7__::func_381("MP_PROP_IVD_VEH5", iParam1, 0);
				}
				else
				{
					__LIB_7__::func_381("MP_PROP_IVD_VEH" /* GXT: This vehicle cannot be stored in your Garage. */, iParam1, 0);
				}
				bParam4 = true;
			}
		}
	}
	return 0;
}

int func_784(var uParam0)//Position - 0x4E0EF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523.f_1, 13))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_806(var uParam0)//Position - 0x4E7BB
{
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (__LIB_1__::func_302(17))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

void func_845(var uParam0, int iParam1)//Position - 0x51A74
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 390982/*func_1066*/;
			break;
		case 111:
			uParam0->f_35 = 390973/*func_1065*/;
			break;
		case 1:
			uParam0->f_30 = 390894/*func_1063*/;
			break;
		case 2:
			uParam0->f_31 = 390258/*func_1059*/;
			break;
		case 3:
			uParam0->f_34 = 389992/*func_1058*/;
			break;
		case 4:
			uParam0->f_12 = 389980/*func_1057*/;
			break;
		case 6:
			uParam0->f_32 = 389881/*func_1056*/;
			break;
		case 37:
			uParam0->f_18 = 389751/*func_1055*/;
			break;
		case 38:
			uParam0->f_9 = 389704/*func_1054*/;
			break;
		case 39:
			uParam0->f_11 = 389669/*func_1053*/;
			break;
		case 41:
			uParam0->f_20 = 389550/*func_1050*/;
			break;
		case 42:
			uParam0->f_10 = 389522/*func_1049*/;
			break;
		case 11:
			uParam0->f_11 = 389512/*func_1048*/;
			break;
		case 12:
			uParam0->f_33 = 387361/*func_1044*/;
			break;
		case 14:
			uParam0->f_11 = 387352/*func_1043*/;
			break;
		case 109:
			uParam0->f_56 = 384790/*func_1040*/;
			break;
		case 8:
			uParam0->f_37 = 384782/*func_1039*/;
			break;
		case 7:
			uParam0->f_36 = 384773/*func_1038*/;
			break;
		case 79:
			*uParam0 = 384764/*func_1037*/;
			break;
		case 13:
			uParam0->f_2 = 384702/*func_1036*/;
			break;
		case 15:
			uParam0->f_2 = 384621/*func_1035*/;
			break;
		case 16:
			uParam0->f_5 = 384268/*func_1034*/;
			break;
		case 108:
			uParam0->f_55 = 379835/*func_1019*/;
			break;
		case 17:
			uParam0->f_17 = 378695/*func_1017*/;
			break;
		case 19:
			uParam0->f_17 = 378670/*func_1016*/;
			break;
		case 20:
			uParam0->f_3 = 378661/*func_1015*/;
			break;
		case 21:
			uParam0->f_3 = 378530/*func_1013*/;
			break;
		case 74:
			uParam0->f_53 = 378426/*func_1012*/;
			break;
		case 75:
			uParam0->f_4 = 378410/*func_1011*/;
			break;
		case 22:
			uParam0->f_24 = 378260/*func_1010*/;
			break;
		case 23:
			uParam0->f_26 = 378252/*func_1009*/;
			break;
		case 26:
			uParam0->f_38 = 370412/*func_970*/;
			break;
		case 25:
			uParam0->f_23 = 369363/*func_966*/;
			break;
		case 27:
			uParam0->f_25 = 369149/*func_963*/;
			break;
		case 28:
			uParam0->f_24 = 369111/*func_962*/;
			break;
		case 29:
			uParam0->f_28 = 369088/*func_961*/;
			break;
		case 30:
			uParam0->f_8 = 368329/*func_957*/;
			break;
		case 31:
			uParam0->f_39 = 368301/*func_956*/;
			break;
		case 43:
			uParam0->f_8 = 368187/*func_955*/;
			break;
		case 33:
			uParam0->f_40 = 368069/*func_954*/;
			break;
		case 76:
			uParam0->f_13 = 368020/*func_953*/;
			break;
		case 34:
			uParam0->f_41 = 359024/*func_952*/;
			break;
		case 36:
			uParam0->f_58 = 358976/*func_951*/;
			break;
		case 35:
			uParam0->f_42 = 347888/*func_944*/;
			break;
		case 45:
			uParam0->f_14 = 347879/*func_943*/;
			break;
		case 46:
			uParam0->f_14 = 347870/*func_942*/;
			break;
		case 110:
			uParam0->f_57 = 347862/*func_941*/;
			break;
		case 77:
			uParam0->f_13 = 347851/*func_940*/;
			break;
		case 47:
			uParam0->f_43 = 347734/*func_939*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 346801/*func_925*/;
			break;
		case 49:
			uParam0->f_8 = 346792/*func_924*/;
			break;
		case 50:
			*uParam0 = 346623/*func_923*/;
			break;
		case 51:
			*uParam0 = 346614/*func_922*/;
			break;
		case 52:
			uParam0->f_15 = 346603/*func_921*/;
			break;
		case 53:
			uParam0->f_13 = 346580/*func_920*/;
			break;
		case 54:
			uParam0->f_45 = 346532/*func_919*/;
			break;
		case 56:
			uParam0->f_46 = 346514/*func_918*/;
			break;
		case 57:
			uParam0->f_11 = 346472/*func_916*/;
			break;
		case 58:
			uParam0->f_13 = 346430/*func_915*/;
			break;
		case 59:
			*uParam0 = 346301/*func_913*/;
			break;
		case 60:
			*uParam0 = 346292/*func_912*/;
			break;
		case 61:
			uParam0->f_15 = 346281/*func_911*/;
			break;
		case 62:
			uParam0->f_13 = 346258/*func_910*/;
			break;
		case 63:
			uParam0->f_11 = 346249/*func_909*/;
			break;
		case 55:
			uParam0->f_45 = 346208/*func_908*/;
			break;
		case 64:
			uParam0->f_47 = 346200/*func_907*/;
			break;
		case 65:
			uParam0->f_21 = 346192/*func_906*/;
			break;
		case 66:
			uParam0->f_21 = 345921/*func_905*/;
			break;
		case 67:
			uParam0->f_21 = 345851/*func_904*/;
			break;
		case 68:
			*uParam0 = 345179/*func_902*/;
			break;
		case 69:
			*uParam0 = 345170/*func_901*/;
			break;
		case 70:
			uParam0->f_48 = 345158/*func_900*/;
			break;
		case 71:
			uParam0->f_49 = 344938/*func_899*/;
			break;
		case 107:
			uParam0->f_50 = 344926/*func_898*/;
			break;
		case 80:
			uParam0->f_7 = 344402/*func_895*/;
			break;
		case 84:
			uParam0->f_1 = 344287/*func_890*/;
			break;
		case 85:
			uParam0->f_1 = 343383/*func_888*/;
			break;
		case 87:
			uParam0->f_1 = 340754/*func_879*/;
			break;
		case 88:
			uParam0->f_1 = 340745/*func_878*/;
			break;
		case 89:
			uParam0->f_54 = 340737/*func_877*/;
			break;
		case 96:
			uParam0->f_1 = 340728/*func_876*/;
			break;
		case 97:
			uParam0->f_1 = 340719/*func_875*/;
			break;
		case 98:
			uParam0->f_1 = 340710/*func_874*/;
			break;
		case 100:
			uParam0->f_22 = 340702/*func_873*/;
			break;
		case 101:
			uParam0->f_22 = 340694/*func_872*/;
			break;
		case 112:
			uParam0->f_13 = 340659/*func_870*/;
			break;
		case 113:
			uParam0->f_3 = 340650/*func_869*/;
			break;
		case 114:
			uParam0->f_16 = 338712/*func_867*/;
			break;
		case 115:
			uParam0->f_3 = 338703/*func_866*/;
			break;
		case 116:
			*uParam0 = 338694/*func_865*/;
			break;
		case 117:
			uParam0->f_16 = 337474/*func_864*/;
			break;
		case 121:
			*uParam0 = 337392/*func_863*/;
			break;
		case 122:
			*uParam0 = 337375/*func_862*/;
			break;
		case 123:
			uParam0->f_19 = 337343/*func_860*/;
			break;
		case 78:
			uParam0->f_59 = 336127/*func_848*/;
			break;
		case 124:
			uParam0->f_1 = 336118/*func_847*/;
			break;
		case 125:
			uParam0->f_19 = 336110/*func_846*/;
			break;
	}
}

int func_888(int iParam0, var uParam1)//Position - 0x53D57
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
		iVar0 = __LIB_2__::func_399();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_377(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_289(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_533(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_2__::func_533(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_966(int iParam0, int iParam1)//Position - 0x5A2D3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_2__::func_399();
	iVar4 = 0;
	Var5 = { __LIB_2__::func_561(iVar3) };
	func_587(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_3__::func_805(iParam1, 0, 1);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				if (__LIB_2__::func_444(0, iParam1))
				{
					__LIB_2__::func_447(1);
				}
				break;
			default:
				__LIB_3__::func_805(iParam1, 0, !bVar2);
				__LIB_3__::func_805(iParam1, 1, 0);
				__LIB_3__::func_805(iParam1, 2, 0);
				__LIB_2__::func_447(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_3__::func_805(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_927(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_927(iParam0, -1);
			__LIB_2__::func_447(iVar4);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_18__::func_905(iVar4, 1);
		}
	}
	else
	{
		__LIB_2__::func_447(iVar4);
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_970(var uParam0, var uParam1)//Position - 0x5A6EC
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (!__LIB_4__::func_10() && iVar0 != 1)
	{
		__LIB_2__::func_565(1);
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_36__::func_119(uParam0, uParam1);
			break;
		case 1:
			func_971(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_971(var uParam0, var uParam1)//Position - 0x5A742
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
	bVar2 = __LIB_3__::func_820();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_4__::func_724(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_2__::func_566() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_7__::func_396();
				if (bVar2)
				{
					__LIB_2__::func_447(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_3__::func_816(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_2__::func_551();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_4__::func_724(iVar8);
		if (__LIB_2__::func_563(iVar8, bVar0, bVar1))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_7__::func_286(1, sVar6, sVar6);
		__LIB_3__::func_874();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_25__::func_557(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_7__::func_396();
			if (bVar2)
			{
				__LIB_2__::func_447(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_3__::func_816(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_25__::func_296(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_4__::func_10();
		__LIB_7__::func_396();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

int func_1019(var uParam0, var uParam1, var uParam2)//Position - 0x5CBBB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar2))
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (!__LIB_1__::func_393(iVar3))
				{
					return 0;
				}
				if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					if (!__LIB_0__::func_657(iVar2, 1))
					{
						return 0;
					}
					if (uParam0->f_1 == 9 || uParam0->f_1 == 10)
					{
						if (!__LIB_5__::func_570(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
					}
				}
			}
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar5) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar5)
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_184(uParam1);
				return 0;
			}
			if (__LIB_1__::func_264(iVar5, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
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
						if (__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_1029(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23))
								{
									if (__LIB_4__::func_725() || ((__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23))
									{
										if ((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_90(uParam1, 0);
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 23)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_90(uParam1, 0);
											__LIB_18__::func_518(iVar2);
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
					func_1021(*uParam0);
					bVar6 = __LIB_2__::func_480(iVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_2__::func_568(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_90(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_90(uParam1, 1);
	return 0;
}

void func_1021(var uParam0)//Position - 0x5D19A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar2))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (PED::IS_PED_A_PLAYER(iVar0))
					{
						iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
						if (iVar1 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar1, 1, 1))
						{
							if ((BitTest(Global_2689235[iVar1 /*453*/].f_318, 5) && __LIB_4__::func_2(iVar1) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(iVar1)) == 23)
							{
								if (func_1022(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if ((__LIB_2__::func_426(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar1 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar1 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_1022(var uParam0)//Position - 0x5D350
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_1035(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1029(var uParam0, int iParam1, bool bParam2)//Position - 0x5D953
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CAR_M_EXT_V_T" /* GXT: LS CAR MEET */))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1))
		{
			if (!func_669(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1035(var uParam0)//Position - 0x5DE6D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523.f_1, 10))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_1067(var uParam0, int iParam1)//Position - 0x5F74F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 431410/*func_1239*/;
			break;
		case 111:
			uParam0->f_35 = 431396/*func_1238*/;
			break;
		case 1:
			uParam0->f_30 = 431305/*func_1236*/;
			break;
		case 2:
			uParam0->f_31 = 431086/*func_1233*/;
			break;
		case 3:
			uParam0->f_34 = 430929/*func_1232*/;
			break;
		case 4:
			uParam0->f_12 = 430917/*func_1231*/;
			break;
		case 5:
			uParam0->f_11 = 430907/*func_1230*/;
			break;
		case 37:
			uParam0->f_18 = 430793/*func_1229*/;
			break;
		case 38:
			uParam0->f_9 = 430746/*func_1228*/;
			break;
		case 42:
			uParam0->f_10 = 430718/*func_1227*/;
			break;
		case 6:
			uParam0->f_32 = 430630/*func_1226*/;
			break;
		case 11:
			uParam0->f_11 = 430621/*func_1225*/;
			break;
		case 12:
			uParam0->f_33 = 428876/*func_1220*/;
			break;
		case 14:
			uParam0->f_11 = 428867/*func_1219*/;
			break;
		case 109:
			uParam0->f_56 = 424833/*func_1216*/;
			break;
		case 8:
			uParam0->f_37 = 424356/*func_1215*/;
			break;
		case 7:
			uParam0->f_36 = 424262/*func_1214*/;
			break;
		case 79:
			*uParam0 = 424253/*func_1213*/;
			break;
		case 13:
			uParam0->f_2 = 424191/*func_1212*/;
			break;
		case 15:
			uParam0->f_2 = 424110/*func_1211*/;
			break;
		case 16:
			uParam0->f_5 = 423212/*func_1209*/;
			break;
		case 108:
			uParam0->f_55 = 419933/*func_1197*/;
			break;
		case 17:
			uParam0->f_17 = 418691/*func_1194*/;
			break;
		case 19:
			uParam0->f_17 = 418666/*func_1193*/;
			break;
		case 20:
			uParam0->f_3 = 418452/*func_1191*/;
			break;
		case 21:
			uParam0->f_3 = 418388/*func_1190*/;
			break;
		case 74:
			uParam0->f_53 = 418284/*func_1189*/;
			break;
		case 75:
			uParam0->f_4 = 418268/*func_1188*/;
			break;
		case 22:
			uParam0->f_24 = 418166/*func_1187*/;
			break;
		case 23:
			uParam0->f_26 = 418158/*func_1186*/;
			break;
		case 26:
			uParam0->f_38 = 414146/*func_1166*/;
			break;
		case 25:
			uParam0->f_23 = 413696/*func_1163*/;
			break;
		case 27:
			uParam0->f_25 = 413688/*func_1162*/;
			break;
		case 28:
			uParam0->f_24 = 413680/*func_1161*/;
			break;
		case 30:
			uParam0->f_8 = 413043/*func_1156*/;
			break;
		case 31:
			uParam0->f_39 = 412913/*func_1155*/;
			break;
		case 33:
			uParam0->f_40 = 412039/*func_1146*/;
			break;
		case 32:
			*uParam0 = 411836/*func_1142*/;
			break;
		case 76:
			uParam0->f_13 = 411683/*func_1141*/;
			break;
		case 34:
			uParam0->f_41 = 410071/*func_1137*/;
			break;
		case 36:
			uParam0->f_58 = 410026/*func_1136*/;
			break;
		case 35:
			uParam0->f_42 = 400988/*func_1133*/;
			break;
		case 45:
			uParam0->f_14 = 400979/*func_1132*/;
			break;
		case 46:
			uParam0->f_14 = 400970/*func_1131*/;
			break;
		case 110:
			uParam0->f_57 = 400962/*func_1130*/;
			break;
		case 77:
			uParam0->f_13 = 400939/*func_1129*/;
			break;
		case 47:
			uParam0->f_43 = 400890/*func_1128*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 400753/*func_1126*/;
			break;
		case 49:
			uParam0->f_8 = 400735/*func_1125*/;
			break;
		case 50:
			*uParam0 = 399903/*func_1121*/;
			break;
		case 51:
			*uParam0 = 399801/*func_1120*/;
			break;
		case 52:
			uParam0->f_15 = 399790/*func_1119*/;
			break;
		case 53:
			uParam0->f_13 = 399637/*func_1118*/;
			break;
		case 54:
			uParam0->f_45 = 399404/*func_1117*/;
			break;
		case 56:
			uParam0->f_46 = 399395/*func_1116*/;
			break;
		case 57:
			uParam0->f_11 = 398982/*func_1112*/;
			break;
		case 58:
			uParam0->f_13 = 398829/*func_1111*/;
			break;
		case 59:
			*uParam0 = 398820/*func_1110*/;
			break;
		case 60:
			*uParam0 = 398811/*func_1109*/;
			break;
		case 61:
			uParam0->f_15 = 398800/*func_1108*/;
			break;
		case 62:
			uParam0->f_13 = 398789/*func_1107*/;
			break;
		case 63:
			uParam0->f_11 = 398780/*func_1106*/;
			break;
		case 64:
			uParam0->f_47 = 398772/*func_1105*/;
			break;
		case 65:
			uParam0->f_21 = 397716/*func_1102*/;
			break;
		case 66:
			uParam0->f_21 = 397496/*func_1101*/;
			break;
		case 67:
			uParam0->f_21 = 397421/*func_1100*/;
			break;
		case 68:
			*uParam0 = 396732/*func_1099*/;
			break;
		case 69:
			*uParam0 = 396723/*func_1098*/;
			break;
		case 70:
			uParam0->f_48 = 396711/*func_1097*/;
			break;
		case 71:
			uParam0->f_49 = 396619/*func_1096*/;
			break;
		case 107:
			uParam0->f_50 = 396607/*func_1095*/;
			break;
		case 80:
			uParam0->f_7 = 396240/*func_1094*/;
			break;
		case 84:
			uParam0->f_1 = 396231/*func_1093*/;
			break;
		case 85:
			uParam0->f_1 = 395439/*func_1091*/;
			break;
		case 87:
			uParam0->f_1 = 394061/*func_1084*/;
			break;
		case 88:
			uParam0->f_1 = 394052/*func_1083*/;
			break;
		case 89:
			uParam0->f_54 = 394044/*func_1082*/;
			break;
		case 96:
			uParam0->f_1 = 394035/*func_1081*/;
			break;
		case 97:
			uParam0->f_1 = 394026/*func_1080*/;
			break;
		case 98:
			uParam0->f_1 = 394017/*func_1079*/;
			break;
		case 100:
			uParam0->f_22 = 394009/*func_1078*/;
			break;
		case 101:
			uParam0->f_22 = 394001/*func_1077*/;
			break;
		case 112:
			uParam0->f_13 = 393989/*func_1076*/;
			break;
		case 113:
			uParam0->f_3 = 393980/*func_1075*/;
			break;
		case 114:
			uParam0->f_16 = 338712/*func_867*/;
			break;
		case 115:
			uParam0->f_3 = 393971/*func_1074*/;
			break;
		case 116:
			*uParam0 = 393962/*func_1073*/;
			break;
		case 117:
			uParam0->f_16 = 392737/*func_1072*/;
			break;
		case 78:
			uParam0->f_59 = 392565/*func_1070*/;
			break;
		case 124:
			uParam0->f_1 = 392556/*func_1069*/;
			break;
		case 125:
			uParam0->f_19 = 392548/*func_1068*/;
			break;
	}
}

int func_1091(int iParam0, var uParam1)//Position - 0x608AF
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
			func_377(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_289(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_586(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_2__::func_586(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_25__::func_103(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1117(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6182C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0)) && !__LIB_2__::func_590(__LIB_0__::func_582(), __LIB_2__::func_591(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_590(iVar1, __LIB_2__::func_591(iParam0)) && __LIB_7__::func_33(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
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
Vector3 func_1118(int iParam0)//Position - 0x61915
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

void func_1163(int iParam0, int iParam1)//Position - 0x65000
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_611(iParam0) };
	if (__LIB_7__::func_408(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_587(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_19__::func_95(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_19__::func_174(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_1166(var uParam0, var uParam1)//Position - 0x651C2
{
	if (__LIB_2__::func_399() == 2 || __LIB_2__::func_399() == 1)
	{
		func_1169(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_590(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_591(*uParam0)))
	{
		__LIB_3__::func_829(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_612(uParam1);
	}
}

void func_1169(var uParam0, var uParam1)//Position - 0x652A1
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_38__::func_187(uParam0, uParam1);
			break;
		case 1:
			func_1183(uParam0, uParam1);
			break;
		case 2:
			__LIB_38__::func_186(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1183(var uParam0, var uParam1)//Position - 0x65E9F
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_36__::func_120(*uParam0))
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
			__LIB_1__::func_319("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_19__::func_95(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

int func_1197(var uParam0, var uParam1, var uParam2)//Position - 0x6685D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 25))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar4) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar4)
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_185(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(iVar4, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 25)) && (__LIB_1__::func_354(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)) || __LIB_36__::func_120(*uParam0)))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
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
						if ((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) || Global_2689235[iVar4 /*453*/].f_318.f_10 != __LIB_0__::func_160()) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_1204(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 22))
								{
									if (__LIB_4__::func_725() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 22))
									{
										if (((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 15))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_91(uParam1, 0);
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 22)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if (((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_5, 15))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_91(uParam1, 0);
											__LIB_18__::func_518(iVar2);
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
					func_1199(*uParam0);
					bVar5 = __LIB_2__::func_480(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_2__::func_614(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_91(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_91(uParam1, 1);
	return 0;
}

void func_1199(var uParam0)//Position - 0x66DFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar2))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (PED::IS_PED_A_PLAYER(iVar0))
					{
						iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
						if (iVar1 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar1, 1, 1))
						{
							if ((BitTest(Global_2689235[iVar1 /*453*/].f_318, 5) && __LIB_4__::func_2(iVar1) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(iVar1)) == 22)
							{
								if (func_1200(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if ((__LIB_2__::func_426(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar1 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar1 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_1200(var uParam0)//Position - 0x66FB1
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_1211(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1204(var uParam0, int iParam1, bool bParam2)//Position - 0x67173
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1))
		{
			if (!func_669(iParam1, 127, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1211(var uParam0)//Position - 0x678AE
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523.f_1, 9))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_1216(int iParam0, var uParam1, int iParam2)//Position - 0x67B81
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_2__::func_617(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_11__::func_277(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_11__::func_277(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_11__::func_277(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_11__::func_277(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
					if (__LIB_11__::func_277(iParam0))
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
						if (__LIB_0__::func_308(PLAYER::PLAYER_ID()))
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
			if (!__LIB_4__::func_973(1) || (__LIB_2__::func_232() && __LIB_2__::func_590(PLAYER::PLAYER_ID(), __LIB_2__::func_591(iParam0))))
			{
				func_587(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_36__::func_120(iParam0))
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

void func_1240(var uParam0, int iParam1)//Position - 0x6953B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 447688/*func_1360*/;
			break;
		case 111:
			uParam0->f_35 = 447679/*func_1359*/;
			break;
		case 1:
			uParam0->f_30 = 447612/*func_1357*/;
			break;
		case 2:
			uParam0->f_31 = 447174/*func_1354*/;
			break;
		case 3:
			uParam0->f_34 = 447026/*func_1353*/;
			break;
		case 4:
			uParam0->f_12 = 447014/*func_1352*/;
			break;
		case 37:
			uParam0->f_18 = 446800/*func_1351*/;
			break;
		case 38:
			uParam0->f_9 = 446711/*func_1350*/;
			break;
		case 39:
			uParam0->f_11 = 446691/*func_1349*/;
			break;
		case 40:
			uParam0->f_6 = 446586/*func_1348*/;
			break;
		case 41:
			uParam0->f_20 = 446561/*func_1347*/;
			break;
		case 42:
			uParam0->f_10 = 446548/*func_1346*/;
			break;
		case 6:
			uParam0->f_32 = 446484/*func_1345*/;
			break;
		case 11:
			uParam0->f_11 = 446475/*func_1344*/;
			break;
		case 12:
			uParam0->f_33 = 445938/*func_1340*/;
			break;
		case 14:
			uParam0->f_11 = 445929/*func_1339*/;
			break;
		case 109:
			uParam0->f_56 = 445007/*func_1337*/;
			break;
		case 8:
			uParam0->f_37 = 444999/*func_1336*/;
			break;
		case 7:
			uParam0->f_36 = 444990/*func_1335*/;
			break;
		case 79:
			*uParam0 = 444981/*func_1334*/;
			break;
		case 13:
			uParam0->f_2 = 444919/*func_1333*/;
			break;
		case 15:
			uParam0->f_2 = 444838/*func_1332*/;
			break;
		case 16:
			uParam0->f_5 = 444511/*func_1331*/;
			break;
		case 108:
			uParam0->f_55 = 444502/*func_1330*/;
			break;
		case 17:
			uParam0->f_17 = 444491/*func_1329*/;
			break;
		case 19:
			uParam0->f_17 = 444480/*func_1328*/;
			break;
		case 18:
			uParam0->f_8 = 444438/*func_1326*/;
			break;
		case 20:
			uParam0->f_3 = 444429/*func_1325*/;
			break;
		case 21:
			uParam0->f_3 = 444381/*func_1324*/;
			break;
		case 74:
			uParam0->f_53 = 444326/*func_1323*/;
			break;
		case 75:
			uParam0->f_4 = 444317/*func_1322*/;
			break;
		case 22:
			uParam0->f_24 = 444215/*func_1321*/;
			break;
		case 23:
			uParam0->f_26 = 444207/*func_1320*/;
			break;
		case 25:
			uParam0->f_23 = 443780/*func_1317*/;
			break;
		case 27:
			uParam0->f_25 = 443772/*func_1316*/;
			break;
		case 28:
			uParam0->f_24 = 443764/*func_1315*/;
			break;
		case 30:
			uParam0->f_8 = 443729/*func_1314*/;
			break;
		case 31:
			uParam0->f_39 = 443701/*func_1313*/;
			break;
		case 33:
			uParam0->f_40 = 443534/*func_1312*/;
			break;
		case 76:
			uParam0->f_13 = 443511/*func_1311*/;
			break;
		case 34:
			uParam0->f_41 = 439892/*func_1308*/;
			break;
		case 36:
			uParam0->f_58 = 439847/*func_1307*/;
			break;
		case 35:
			uParam0->f_42 = 436653/*func_1303*/;
			break;
		case 45:
			uParam0->f_14 = 436644/*func_1302*/;
			break;
		case 46:
			uParam0->f_14 = 436635/*func_1301*/;
			break;
		case 110:
			uParam0->f_57 = 436627/*func_1300*/;
			break;
		case 77:
			uParam0->f_13 = 436616/*func_1299*/;
			break;
		case 47:
			uParam0->f_43 = 436454/*func_1298*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 435182/*func_1290*/;
			break;
		case 49:
			uParam0->f_8 = 435173/*func_1289*/;
			break;
		case 50:
			*uParam0 = 434748/*func_1282*/;
			break;
		case 51:
			*uParam0 = 434739/*func_1281*/;
			break;
		case 52:
			uParam0->f_15 = 434728/*func_1280*/;
			break;
		case 53:
			uParam0->f_13 = 434705/*func_1279*/;
			break;
		case 54:
			uParam0->f_45 = 434697/*func_1278*/;
			break;
		case 56:
			uParam0->f_46 = 434688/*func_1277*/;
			break;
		case 57:
			uParam0->f_11 = 434675/*func_1276*/;
			break;
		case 58:
			uParam0->f_13 = 434633/*func_1275*/;
			break;
		case 59:
			*uParam0 = 434624/*func_1274*/;
			break;
		case 60:
			*uParam0 = 434615/*func_1273*/;
			break;
		case 61:
			uParam0->f_15 = 434604/*func_1272*/;
			break;
		case 62:
			uParam0->f_13 = 434593/*func_1271*/;
			break;
		case 63:
			uParam0->f_11 = 434584/*func_1270*/;
			break;
		case 64:
			uParam0->f_47 = 434576/*func_1269*/;
			break;
		case 65:
			uParam0->f_21 = 434568/*func_1268*/;
			break;
		case 66:
			uParam0->f_21 = 433955/*func_1265*/;
			break;
		case 67:
			uParam0->f_21 = 433885/*func_1264*/;
			break;
		case 68:
			*uParam0 = 433196/*func_1263*/;
			break;
		case 69:
			*uParam0 = 433187/*func_1262*/;
			break;
		case 70:
			uParam0->f_48 = 433175/*func_1261*/;
			break;
		case 71:
			uParam0->f_49 = 433166/*func_1260*/;
			break;
		case 107:
			uParam0->f_50 = 433154/*func_1259*/;
			break;
		case 80:
			uParam0->f_7 = 433145/*func_1258*/;
			break;
		case 84:
			uParam0->f_1 = 433136/*func_1257*/;
			break;
		case 85:
			uParam0->f_1 = 433127/*func_1256*/;
			break;
		case 87:
			uParam0->f_1 = 433118/*func_1255*/;
			break;
		case 88:
			uParam0->f_1 = 433109/*func_1254*/;
			break;
		case 89:
			uParam0->f_54 = 433101/*func_1253*/;
			break;
		case 96:
			uParam0->f_1 = 433092/*func_1252*/;
			break;
		case 97:
			uParam0->f_1 = 433083/*func_1251*/;
			break;
		case 98:
			uParam0->f_1 = 433074/*func_1250*/;
			break;
		case 100:
			uParam0->f_22 = 433066/*func_1249*/;
			break;
		case 101:
			uParam0->f_22 = 433058/*func_1248*/;
			break;
		case 112:
			uParam0->f_13 = 433046/*func_1247*/;
			break;
		case 113:
			uParam0->f_3 = 433037/*func_1246*/;
			break;
		case 114:
			uParam0->f_16 = 338712/*func_867*/;
			break;
		case 115:
			uParam0->f_3 = 433028/*func_1245*/;
			break;
		case 116:
			*uParam0 = 433019/*func_1244*/;
			break;
		case 117:
			uParam0->f_16 = 392737/*func_1072*/;
			break;
		case 78:
			uParam0->f_59 = 433011/*func_1243*/;
			break;
		case 124:
			uParam0->f_1 = 433002/*func_1242*/;
			break;
		case 125:
			uParam0->f_19 = 432994/*func_1241*/;
			break;
	}
}

void func_1290(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x6A3EE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_2__::func_635();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 1:
			__LIB_3__::func_805(iParam3, 0, 0);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 1);
			__LIB_3__::func_805(iParam3, 3, 1);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 3:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			__LIB_3__::func_805(iParam3, 4, 0);
			__LIB_3__::func_805(iParam3, 5, 0);
			break;
		case 2:
			__LIB_3__::func_805(iParam3, 0, 1);
			__LIB_3__::func_805(iParam3, 1, 0);
			__LIB_3__::func_805(iParam3, 2, 0);
			__LIB_3__::func_805(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_4__::func_727(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_587(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_3__::func_805(iParam3, 4, bVar1);
		__LIB_3__::func_805(iParam3, 5, bVar2);
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
	if (__LIB_2__::func_444(0, iParam3) || __LIB_2__::func_444(1, iParam3))
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
	else if (__LIB_2__::func_444(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_2__::func_444(4, iParam3) || __LIB_2__::func_444(5, iParam3))
	{
		iVar5 = __LIB_8__::func_220(__LIB_2__::func_444(4, iParam3));
		__LIB_2__::func_633(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_2__::func_626())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_3__::func_834())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_2__::func_549(iParam0, -1);
		}
	}
}

void func_1317(int iParam0, int iParam1)//Position - 0x6C584
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_2__::func_399();
		Var2 = { __LIB_2__::func_640(iParam0, iVar3) };
		func_587(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && Global_1946250.f_3606 != 148)
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_928(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_907();
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

int func_1332(var uParam0)//Position - 0x6C9A6
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523.f_1, 8))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_1361(var uParam0, int iParam1)//Position - 0x6D4D1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 724452/*func_1807*/;
			break;
		case 1:
			uParam0->f_30 = 724397/*func_1806*/;
			break;
		case 2:
			uParam0->f_31 = 723737/*func_1804*/;
			break;
		case 3:
			uParam0->f_34 = 723610/*func_1803*/;
			break;
		case 4:
			uParam0->f_12 = 723578/*func_1802*/;
			break;
		case 5:
			uParam0->f_11 = 723567/*func_1801*/;
			break;
		case 6:
			uParam0->f_32 = 723503/*func_1800*/;
			break;
		case 111:
			uParam0->f_35 = 723480/*func_1799*/;
			break;
		case 79:
			*uParam0 = 723471/*func_1798*/;
			break;
		case 37:
			uParam0->f_18 = 723358/*func_1797*/;
			break;
		case 38:
			uParam0->f_9 = 723262/*func_1795*/;
			break;
		case 11:
			uParam0->f_11 = 723253/*func_1794*/;
			break;
		case 12:
			uParam0->f_33 = 722863/*func_1792*/;
			break;
		case 109:
			uParam0->f_56 = 722560/*func_1791*/;
			break;
		case 15:
			uParam0->f_2 = 720592/*func_1778*/;
			break;
		case 13:
			uParam0->f_2 = 720583/*func_1777*/;
			break;
		case 75:
			uParam0->f_4 = 720574/*func_1776*/;
			break;
		case 16:
			uParam0->f_5 = 720191/*func_1773*/;
			break;
		case 108:
			uParam0->f_55 = 716250/*func_1755*/;
			break;
		case 17:
			uParam0->f_17 = 715526/*func_1752*/;
			break;
		case 19:
			uParam0->f_17 = 715501/*func_1751*/;
			break;
		case 20:
			uParam0->f_3 = 715332/*func_1750*/;
			break;
		case 21:
			uParam0->f_3 = 715269/*func_1749*/;
			break;
		case 74:
			uParam0->f_53 = 715117/*func_1748*/;
			break;
		case 22:
			uParam0->f_24 = 715036/*func_1747*/;
			break;
		case 25:
			uParam0->f_23 = 714099/*func_1743*/;
			break;
		case 30:
			uParam0->f_8 = 712771/*func_1737*/;
			break;
		case 31:
			uParam0->f_39 = 712195/*func_1734*/;
			break;
		case 33:
			uParam0->f_40 = 710960/*func_1729*/;
			break;
		case 14:
			uParam0->f_11 = 710951/*func_1728*/;
			break;
		case 34:
			uParam0->f_41 = 708184/*func_1725*/;
			break;
		case 36:
			uParam0->f_58 = 708131/*func_1724*/;
			break;
		case 35:
			uParam0->f_42 = 702678/*func_1720*/;
			break;
		case 45:
			uParam0->f_14 = 702669/*func_1719*/;
			break;
		case 46:
			uParam0->f_14 = 702660/*func_1718*/;
			break;
		case 110:
			uParam0->f_57 = 702652/*func_1717*/;
			break;
		case 77:
			uParam0->f_13 = 702629/*func_1716*/;
			break;
		case 47:
			uParam0->f_43 = 702580/*func_1715*/;
			break;
		case 49:
			uParam0->f_8 = 702555/*func_1714*/;
			break;
		case 50:
			*uParam0 = 702517/*func_1713*/;
			break;
		case 51:
			*uParam0 = 702443/*func_1710*/;
			break;
		case 52:
			uParam0->f_15 = 702432/*func_1709*/;
			break;
		case 53:
			uParam0->f_13 = 702353/*func_1708*/;
			break;
		case 54:
			uParam0->f_45 = 702345/*func_1707*/;
			break;
		case 56:
			uParam0->f_46 = 702336/*func_1706*/;
			break;
		case 57:
			uParam0->f_11 = 702326/*func_1705*/;
			break;
		case 58:
			uParam0->f_13 = 702079/*func_1704*/;
			break;
		case 64:
			uParam0->f_47 = 700866/*func_1698*/;
			break;
		case 65:
			uParam0->f_21 = 699674/*func_1693*/;
			break;
		case 66:
			uParam0->f_21 = 698508/*func_1681*/;
			break;
		case 67:
			uParam0->f_21 = 698332/*func_1679*/;
			break;
		case 68:
			*uParam0 = 696672/*func_1665*/;
			break;
		case 69:
			*uParam0 = 696663/*func_1664*/;
			break;
		case 70:
			uParam0->f_48 = 696651/*func_1663*/;
			break;
		case 71:
			uParam0->f_49 = 696642/*func_1662*/;
			break;
		case 107:
			uParam0->f_50 = 696630/*func_1661*/;
			break;
		case 80:
			uParam0->f_7 = 695797/*func_1655*/;
			break;
		case 73:
			uParam0->f_51 = 695788/*func_1654*/;
			break;
		case 84:
			uParam0->f_1 = 695136/*func_1652*/;
			break;
		case 85:
			uParam0->f_1 = 694264/*func_1644*/;
			break;
		case 87:
			uParam0->f_1 = 693053/*func_1635*/;
			break;
		case 88:
			uParam0->f_1 = 693033/*func_1634*/;
			break;
		case 89:
			uParam0->f_54 = 692939/*func_1633*/;
			break;
		case 90:
			uParam0->f_1 = 692808/*func_1630*/;
			break;
		case 91:
			uParam0->f_1 = 692180/*func_1629*/;
			break;
		case 92:
			uParam0->f_1 = 691413/*func_1626*/;
			break;
		case 94:
			uParam0->f_1 = 690861/*func_1625*/;
			break;
		case 95:
			uParam0->f_22 = 690267/*func_1620*/;
			break;
		case 18:
			uParam0->f_8 = 689909/*func_1616*/;
			break;
		case 96:
			uParam0->f_1 = 689816/*func_1615*/;
			break;
		case 97:
			uParam0->f_1 = 688970/*func_1610*/;
			break;
		case 98:
			uParam0->f_1 = 454322/*func_1416*/;
			break;
		case 100:
			uParam0->f_22 = 451042/*func_1394*/;
			break;
		case 101:
			uParam0->f_22 = 449886/*func_1381*/;
			break;
		case 78:
			uParam0->f_59 = 449678/*func_1378*/;
			break;
		case 104:
			uParam0->f_1 = 449210/*func_1369*/;
			break;
		case 102:
			uParam0->f_1 = 449201/*func_1368*/;
			break;
		case 103:
			uParam0->f_22 = 449091/*func_1363*/;
			break;
		case 81:
			*uParam0 = 449048/*func_1362*/;
			break;
	}
}

int func_1416(var uParam0, var uParam1)//Position - 0x6EEB2
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
	if (__LIB_2__::func_675())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_3__::func_842())
	{
		func_1433(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_7__::func_43(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_2__::func_684(Global_1946250.f_3377) };
			Var2 = { __LIB_2__::func_683(Global_1946250.f_3377) };
			sVar3 = __LIB_2__::func_669(0, 1);
			sVar4 = __LIB_2__::func_682(0, 1);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_2__::func_669(bVar0, 0);
			sVar4 = __LIB_2__::func_682(bVar0, 0);
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
		if (__LIB_2__::func_668(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_667(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_7__::func_636(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_7__::func_636(uParam1, iVar8))
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
			func_377(&iVar9, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_2__::func_660(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_7__::func_423(uParam1->f_109);
			return 0;
		}
		__LIB_2__::func_663(1);
		if (__LIB_12__::func_202())
		{
			__LIB_7__::func_635(iVar8);
			__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
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
							__LIB_2__::func_677(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_2__::func_676(&Var6, &Var7, uParam1, iVar10);
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

int func_1433(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6FADD
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!__LIB_36__::func_115(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1434(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1434(var uParam0, int iParam1)//Position - 0x6FB3B
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_2__::func_204(iParam1))
	{
		iVar0 = __LIB_25__::func_208(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1438(&Var1, __LIB_2__::func_262(iVar0), 0, 1, 1, !__LIB_18__::func_523(), 0, __LIB_19__::func_138(), __LIB_2__::func_685(__LIB_6__::func_417(iParam1), 0), __LIB_2__::func_261(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(iParam1, 0), __LIB_7__::func_306(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1438(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6FC58
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
					if (__LIB_42__::func_109(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_7__::func_307(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_18__::func_485(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
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
							if (!__LIB_2__::func_257(uParam0, &Global_78200))
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
								if (__LIB_1__::func_200(*uParam0))
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
										if (__LIB_2__::func_256(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_2__::func_256(uParam0->f_2) == 8 || __LIB_2__::func_256(uParam0->f_2) == 50) || __LIB_2__::func_256(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
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
											if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
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
												if (__LIB_7__::func_241(iVar1, 7, __LIB_0__::func_350(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
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
								__LIB_25__::func_113(*uParam0, &Global_78200, uParam0->f_8);
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
											iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_6__::func_911())
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
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
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
												iVar10 = __LIB_0__::func_350(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_7__::func_240(iVar1, 10, iVar10, -1))
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
										__LIB_6__::func_810(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
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
									__LIB_18__::func_734(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!__LIB_26__::func_620(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_41__::func_676(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_709(iVar1, 14, __LIB_1__::func_556(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_2__::func_255(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_2__::func_255(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_155(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1562(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1562(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_597(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_0__::func_812(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_2__::func_254(*uParam0))
									{
										iVar13 = __LIB_2__::func_253(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_2__::func_254(*uParam0) && __LIB_2__::func_252(*uParam0))
									{
										iVar15 = __LIB_2__::func_253(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										__LIB_26__::func_632(*uParam0);
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
									if (__LIB_2__::func_251(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_6__::func_810(*uParam0, 0, -1, 0);
											__LIB_6__::func_810(*uParam0, 1, -1, 0);
											__LIB_6__::func_810(*uParam0, 2, -1, 0);
											func_1482(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_1482(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_556(2153, -1, 0);
											iVar19 = __LIB_1__::func_556(2160, -1, 0);
											if (__LIB_1__::func_563(161, -1))
											{
												iVar21 = __LIB_1__::func_556(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_181(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_18__::func_186(iVar21);
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
														iVar21 = __LIB_18__::func_181(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_18__::func_186(iVar21);
														if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_18__::func_186(__LIB_6__::func_758(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1482(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_556(753, -1, 0);
												func_1482(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_155(0))
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
									func_1477(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1448(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_2__::func_250(iVar28, iParam8, &uVar26, &uVar27))
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
									iVar37 = __LIB_0__::func_250(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_6__::func_785(&Var36, iVar31, iVar37, *uParam0, -1))
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
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_235(*uParam0, Var36.f_4, Var36.f_5);
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
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_1__::func_867(PLAYER::PLAYER_ID(), 0), __LIB_7__::func_306(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_235(*uParam0, Var35.f_2, Var35.f_3);
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
							__LIB_2__::func_249(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_155(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_2__::func_249(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_2__::func_249(*uParam0);
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

void func_1448(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x75A7E
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
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_1475(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_1466(iParam0, iParam3);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_38__::func_190(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_1466(int iParam0, int iParam1)//Position - 0x7FF2E
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_307(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
				iVar5 = func_307(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_1475(int iParam0, bool bParam1)//Position - 0x803C4
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
							iVar2 = __LIB_32__::func_850(joaat("MP_M_Freemode_01"), 11, func_307(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_307(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_307(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_32__::func_850(joaat("MP_F_Freemode_01"), 11, func_307(iParam0, 11, -1), 0);
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
						iVar8 = func_307(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_32__::func_850(joaat("MP_F_Freemode_01"), 11, func_307(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_32__::func_850(joaat("MP_F_Freemode_01"), 11, func_307(iParam0, 11, -1), 0);
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
						iVar12 = func_307(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

void func_1477(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x81422
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
		iVar1 = __LIB_0__::func_250(iParam0);
		bVar2 = func_1475(iParam0, 0);
		bVar3 = __LIB_31__::func_887(iParam0);
		bVar4 = func_1466(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_6__::func_785(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
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
						if (__LIB_25__::func_27(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_235(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

int func_1482(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x8247D
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
		Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
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
			func_1546(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 10, 0, -1) };
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
						func_1546(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1546(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1482(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1546(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iVar0, func_307(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_1482(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_1540(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1546(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_42__::func_615(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1482(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_1546(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1482(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_26__::func_632(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_42__::func_615(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1482(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_42__::func_615(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1482(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_1537(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_42__::func_615(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_1482(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_42__::func_107(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1482(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1482(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_1482(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_42__::func_107(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_1482(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1482(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1482(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_39__::func_943(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1540(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1537(iVar5, func_307(iParam0, 8, -1), iParam2, func_307(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_1523(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_1537(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_42__::func_615(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_1540(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_39__::func_943(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1537(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1482(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_1482(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_41__::func_676(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1537(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1537(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_42__::func_615(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
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
					iVar3 = __LIB_42__::func_615(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1482(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1537(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_42__::func_615(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1482(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_308(iParam0, 9, iVar63))
						{
							func_1482(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1482(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1482(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1482(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_307(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_307(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_1482(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_1482(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1482(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1482(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1482(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1482(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_1482(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1482(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_1482(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1482(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_26__::func_632(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_42__::func_615(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1482(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_42__::func_615(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1482(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1483(iParam0, &uVar4))
		{
			func_1482(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1482(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1482(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1482(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_307(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_1482(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1483(int iParam0, var uParam1)//Position - 0x84328
{
	int iVar0;
	int iVar1;
	*uParam1 = func_307(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_308(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_1523(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8ED22
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_1448(iParam0, bParam3, 0, -1);
}

int func_1537(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x96913
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_1537(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_1537(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
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

void func_1540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x99EBF
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1542(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_36__::func_121(iVar0, iParam2, 13) && !__LIB_36__::func_121(iVar0, iParam2, 14)) && !__LIB_36__::func_121(iVar0, iParam2, 15)) && !__LIB_36__::func_121(iVar0, iParam2, 16)) && !__LIB_36__::func_121(iVar0, iParam2, 71)) && !__LIB_36__::func_121(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_32__::func_850(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_1542(int iParam0)//Position - 0x9A04E
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_307(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_2__::func_204(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_307(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

void func_1546(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x9A4A7
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
		Global_78130[2 /*14*/] = { __LIB_41__::func_676(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1546(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1546(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1546(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_1546(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1546(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1546(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1546(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_41__::func_676(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1546(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1546(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1546(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1562(int iParam0, int iParam1, int iParam2)//Position - 0x9CD32
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
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1563(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
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
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_307(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
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

void func_1563(int iParam0)//Position - 0x9CF3E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1564(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1564(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9CFD3
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
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
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
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_1482(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1482(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_1626(var uParam0, var uParam1)//Position - 0xA8CD5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_2__::func_399();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_2__::func_696();
	}
	__LIB_2__::func_695(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_7__::func_636(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_7__::func_636(uParam1, iVar3))
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
					if (!__LIB_7__::func_636(uParam1, iVar3))
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
			func_377(&iVar2, &(uParam1->f_109), 4);
			__LIB_2__::func_416(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_7__::func_423(uParam1->f_109);
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
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_7__::func_423(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1433(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_95())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_2__::func_671());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_7__::func_635(iVar3);
	__LIB_2__::func_681(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_1644(int iParam0, var uParam1)//Position - 0xA97F8
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_3__::func_845())
	{
		return 1;
	}
	if (__LIB_39__::func_944())
	{
		return 1;
	}
	iVar0 = __LIB_2__::func_399();
	iVar1 = __LIB_12__::func_204();
	Var2 = { __LIB_26__::func_636(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1433(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_2__::func_702(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_26__::func_635(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_377(&iVar1, &(uParam1->f_109), 32);
		__LIB_2__::func_416(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_26__::func_634(iParam0, iVar0));
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
		iVar5 = __LIB_2__::func_701(iParam0, iVar0);
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_1681(var uParam0, var uParam1)//Position - 0xAA88C
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (__LIB_2__::func_715())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		__LIB_2__::func_714(0);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_6__::func_404(&(uParam0->f_22.f_94));
		}
	}
	if (__LIB_2__::func_713(PLAYER::PLAYER_ID()))
	{
		func_1682();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
	if (!BitTest(Global_1946250.f_7, 20))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_Submarine", false, -1);
		MISC::SET_BIT(&(Global_1946250.f_7), 20);
	}
}

void func_1682()//Position - 0xAA982
{
	if (Global_1574582.f_1 == 1)
	{
		__LIB_26__::func_637(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_9 = 0;
	}
}

void func_1743(int iParam0, int iParam1)//Position - 0xAE573
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
	if (__LIB_32__::func_855(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_32__::func_853(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_32__::func_853(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_20__::func_827(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1744(iParam0, 0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_20__::func_827(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1744(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_1744(int iParam0, bool bParam1)//Position - 0xAE802
{
	__LIB_32__::func_853(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_7__::func_394(2);
	}
}

void func_1808(var uParam0, int iParam1)//Position - 0xB0DED
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 745531/*func_1931*/;
			break;
		case 111:
			uParam0->f_35 = 745522/*func_1930*/;
			break;
		case 1:
			uParam0->f_30 = 745455/*func_1928*/;
			break;
		case 2:
			uParam0->f_31 = 745131/*func_1925*/;
			break;
		case 3:
			uParam0->f_34 = 744970/*func_1924*/;
			break;
		case 4:
			uParam0->f_12 = 744958/*func_1923*/;
			break;
		case 6:
			uParam0->f_32 = 744894/*func_1922*/;
			break;
		case 11:
			uParam0->f_11 = 744885/*func_1921*/;
			break;
		case 12:
			uParam0->f_33 = 744549/*func_1917*/;
			break;
		case 14:
			uParam0->f_11 = 744540/*func_1916*/;
			break;
		case 109:
			uParam0->f_56 = 743810/*func_1914*/;
			break;
		case 8:
			uParam0->f_37 = 743802/*func_1913*/;
			break;
		case 7:
			uParam0->f_36 = 743793/*func_1912*/;
			break;
		case 79:
			*uParam0 = 743784/*func_1911*/;
			break;
		case 72:
			uParam0->f_12 = 743772/*func_1910*/;
			break;
		case 13:
			uParam0->f_2 = 743763/*func_1909*/;
			break;
		case 15:
			uParam0->f_2 = 743684/*func_1908*/;
			break;
		case 16:
			uParam0->f_5 = 743340/*func_1907*/;
			break;
		case 108:
			uParam0->f_55 = 743331/*func_1906*/;
			break;
		case 17:
			uParam0->f_17 = 742823/*func_1904*/;
			break;
		case 19:
			uParam0->f_17 = 742770/*func_1903*/;
			break;
		case 18:
			uParam0->f_8 = 742682/*func_1901*/;
			break;
		case 20:
			uParam0->f_3 = 742662/*func_1900*/;
			break;
		case 21:
			uParam0->f_3 = 742635/*func_1899*/;
			break;
		case 74:
			uParam0->f_53 = 742613/*func_1898*/;
			break;
		case 75:
			uParam0->f_4 = 742604/*func_1897*/;
			break;
		case 22:
			uParam0->f_24 = 742502/*func_1896*/;
			break;
		case 23:
			uParam0->f_26 = 742494/*func_1895*/;
			break;
		case 26:
			uParam0->f_38 = 742486/*func_1894*/;
			break;
		case 25:
			uParam0->f_23 = 741725/*func_1890*/;
			break;
		case 27:
			uParam0->f_25 = 741717/*func_1889*/;
			break;
		case 28:
			uParam0->f_24 = 741709/*func_1888*/;
			break;
		case 30:
			uParam0->f_8 = 741598/*func_1887*/;
			break;
		case 31:
			uParam0->f_39 = 741551/*func_1886*/;
			break;
		case 33:
			uParam0->f_40 = 741482/*func_1885*/;
			break;
		case 76:
			uParam0->f_13 = 741459/*func_1884*/;
			break;
		case 34:
			uParam0->f_41 = 737386/*func_1881*/;
			break;
		case 36:
			uParam0->f_58 = 737329/*func_1880*/;
			break;
		case 35:
			uParam0->f_42 = 731106/*func_1871*/;
			break;
		case 45:
			uParam0->f_14 = 731097/*func_1870*/;
			break;
		case 46:
			uParam0->f_14 = 731088/*func_1869*/;
			break;
		case 110:
			uParam0->f_57 = 731080/*func_1868*/;
			break;
		case 77:
			uParam0->f_13 = 731069/*func_1867*/;
			break;
		case 47:
			uParam0->f_43 = 730965/*func_1866*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 729898/*func_1858*/;
			break;
		case 49:
			uParam0->f_8 = 729889/*func_1857*/;
			break;
		case 50:
			*uParam0 = 729492/*func_1850*/;
			break;
		case 51:
			*uParam0 = 729483/*func_1849*/;
			break;
		case 52:
			uParam0->f_15 = 729473/*func_1848*/;
			break;
		case 53:
			uParam0->f_13 = 729450/*func_1847*/;
			break;
		case 54:
			uParam0->f_45 = 728956/*func_1845*/;
			break;
		case 56:
			uParam0->f_46 = 728947/*func_1844*/;
			break;
		case 57:
			uParam0->f_11 = 728938/*func_1843*/;
			break;
		case 58:
			uParam0->f_13 = 728896/*func_1842*/;
			break;
		case 59:
			*uParam0 = 728887/*func_1841*/;
			break;
		case 60:
			*uParam0 = 728878/*func_1840*/;
			break;
		case 61:
			uParam0->f_15 = 728867/*func_1839*/;
			break;
		case 62:
			uParam0->f_13 = 728856/*func_1838*/;
			break;
		case 63:
			uParam0->f_11 = 728847/*func_1837*/;
			break;
		case 64:
			uParam0->f_47 = 728839/*func_1836*/;
			break;
		case 65:
			uParam0->f_21 = 728831/*func_1835*/;
			break;
		case 66:
			uParam0->f_21 = 728521/*func_1834*/;
			break;
		case 67:
			uParam0->f_21 = 728451/*func_1833*/;
			break;
		case 68:
			*uParam0 = 727762/*func_1832*/;
			break;
		case 69:
			*uParam0 = 727753/*func_1831*/;
			break;
		case 70:
			uParam0->f_48 = 727741/*func_1830*/;
			break;
		case 71:
			uParam0->f_49 = 727732/*func_1829*/;
			break;
		case 107:
			uParam0->f_50 = 727720/*func_1828*/;
			break;
		case 80:
			uParam0->f_7 = 727711/*func_1827*/;
			break;
		case 84:
			uParam0->f_1 = 727702/*func_1826*/;
			break;
		case 85:
			uParam0->f_1 = 727693/*func_1825*/;
			break;
		case 87:
			uParam0->f_1 = 727684/*func_1824*/;
			break;
		case 88:
			uParam0->f_1 = 727675/*func_1823*/;
			break;
		case 89:
			uParam0->f_54 = 727667/*func_1822*/;
			break;
		case 96:
			uParam0->f_1 = 727642/*func_1821*/;
			break;
		case 97:
			uParam0->f_1 = 727533/*func_1820*/;
			break;
		case 98:
			uParam0->f_1 = 726822/*func_1819*/;
			break;
		case 100:
			uParam0->f_22 = 726159/*func_1817*/;
			break;
		case 101:
			uParam0->f_22 = 726032/*func_1816*/;
			break;
		case 112:
			uParam0->f_13 = 726020/*func_1815*/;
			break;
		case 113:
			uParam0->f_3 = 726011/*func_1814*/;
			break;
		case 114:
			uParam0->f_16 = 338712/*func_867*/;
			break;
		case 115:
			uParam0->f_3 = 726002/*func_1813*/;
			break;
		case 116:
			*uParam0 = 725993/*func_1812*/;
			break;
		case 117:
			uParam0->f_16 = 392737/*func_1072*/;
			break;
		case 78:
			uParam0->f_59 = 725985/*func_1811*/;
			break;
		case 124:
			uParam0->f_1 = 725976/*func_1810*/;
			break;
		case 125:
			uParam0->f_19 = 725968/*func_1809*/;
			break;
	}
}

int func_1819(var uParam0, var uParam1)//Position - 0xB1726
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
		func_1433(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

void func_1890(int iParam0, int iParam1)//Position - 0xB515D
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
	if (__LIB_3__::func_856(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_2__::func_776(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_588(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(iVar7, 14)) && !func_588(iVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_7__::func_937(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_18__::func_917(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_1891())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
bool func_1891()//Position - 0xB53EB
{
	return BitTest(Global_1946250.f_3, 2);
}

int func_1908(var uParam0)//Position - 0xB5904
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 25))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_1932(var uParam0, int iParam1)//Position - 0xB6044
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 753833/*func_2025*/;
			break;
		case 111:
			uParam0->f_35 = 753824/*func_2024*/;
			break;
		case 1:
			uParam0->f_30 = 753753/*func_2022*/;
			break;
		case 2:
			uParam0->f_31 = 753516/*func_2019*/;
			break;
		case 3:
			uParam0->f_34 = 753465/*func_2018*/;
			break;
		case 4:
			uParam0->f_12 = 753453/*func_2017*/;
			break;
		case 6:
			uParam0->f_32 = 753389/*func_2016*/;
			break;
		case 11:
			uParam0->f_11 = 753380/*func_2015*/;
			break;
		case 12:
			uParam0->f_33 = 752940/*func_2011*/;
			break;
		case 14:
			uParam0->f_11 = 752931/*func_2010*/;
			break;
		case 109:
			uParam0->f_56 = 752263/*func_2008*/;
			break;
		case 8:
			uParam0->f_37 = 752255/*func_2007*/;
			break;
		case 7:
			uParam0->f_36 = 752246/*func_2006*/;
			break;
		case 79:
			*uParam0 = 752237/*func_2005*/;
			break;
		case 13:
			uParam0->f_2 = 752175/*func_2004*/;
			break;
		case 15:
			uParam0->f_2 = 752095/*func_2003*/;
			break;
		case 16:
			uParam0->f_5 = 751726/*func_2001*/;
			break;
		case 108:
			uParam0->f_55 = 751717/*func_2000*/;
			break;
		case 17:
			uParam0->f_17 = 751706/*func_1999*/;
			break;
		case 19:
			uParam0->f_17 = 751695/*func_1998*/;
			break;
		case 20:
			uParam0->f_3 = 751686/*func_1997*/;
			break;
		case 21:
			uParam0->f_3 = 751677/*func_1996*/;
			break;
		case 74:
			uParam0->f_53 = 751655/*func_1995*/;
			break;
		case 75:
			uParam0->f_4 = 751646/*func_1994*/;
			break;
		case 22:
			uParam0->f_24 = 751634/*func_1993*/;
			break;
		case 23:
			uParam0->f_26 = 751626/*func_1992*/;
			break;
		case 26:
			uParam0->f_38 = 751618/*func_1991*/;
			break;
		case 25:
			uParam0->f_23 = 751610/*func_1990*/;
			break;
		case 27:
			uParam0->f_25 = 751602/*func_1989*/;
			break;
		case 28:
			uParam0->f_24 = 751594/*func_1988*/;
			break;
		case 30:
			uParam0->f_8 = 751559/*func_1987*/;
			break;
		case 31:
			uParam0->f_39 = 751531/*func_1986*/;
			break;
		case 33:
			uParam0->f_40 = 751461/*func_1985*/;
			break;
		case 76:
			uParam0->f_13 = 751438/*func_1984*/;
			break;
		case 34:
			uParam0->f_41 = 751342/*func_1983*/;
			break;
		case 36:
			uParam0->f_58 = 751297/*func_1982*/;
			break;
		case 35:
			uParam0->f_42 = 748784/*func_1980*/;
			break;
		case 45:
			uParam0->f_14 = 748775/*func_1979*/;
			break;
		case 46:
			uParam0->f_14 = 748766/*func_1978*/;
			break;
		case 110:
			uParam0->f_57 = 748758/*func_1977*/;
			break;
		case 77:
			uParam0->f_13 = 748747/*func_1976*/;
			break;
		case 47:
			uParam0->f_43 = 748707/*func_1975*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 748599/*func_1974*/;
			break;
		case 49:
			uParam0->f_8 = 748590/*func_1973*/;
			break;
		case 50:
			*uParam0 = 748387/*func_1972*/;
			break;
		case 51:
			*uParam0 = 748378/*func_1971*/;
			break;
		case 52:
			uParam0->f_15 = 748367/*func_1970*/;
			break;
		case 53:
			uParam0->f_13 = 748344/*func_1969*/;
			break;
		case 54:
			uParam0->f_45 = 748336/*func_1968*/;
			break;
		case 56:
			uParam0->f_46 = 748327/*func_1967*/;
			break;
		case 57:
			uParam0->f_11 = 748314/*func_1966*/;
			break;
		case 58:
			uParam0->f_13 = 748272/*func_1965*/;
			break;
		case 59:
			*uParam0 = 748263/*func_1964*/;
			break;
		case 60:
			*uParam0 = 748254/*func_1963*/;
			break;
		case 61:
			uParam0->f_15 = 748243/*func_1962*/;
			break;
		case 62:
			uParam0->f_13 = 748232/*func_1961*/;
			break;
		case 63:
			uParam0->f_11 = 748223/*func_1960*/;
			break;
		case 64:
			uParam0->f_47 = 748215/*func_1959*/;
			break;
		case 65:
			uParam0->f_21 = 748207/*func_1958*/;
			break;
		case 66:
			uParam0->f_21 = 747974/*func_1957*/;
			break;
		case 67:
			uParam0->f_21 = 747904/*func_1956*/;
			break;
		case 68:
			*uParam0 = 747215/*func_1955*/;
			break;
		case 69:
			*uParam0 = 747206/*func_1954*/;
			break;
		case 70:
			uParam0->f_48 = 747194/*func_1953*/;
			break;
		case 71:
			uParam0->f_49 = 747185/*func_1952*/;
			break;
		case 107:
			uParam0->f_50 = 747173/*func_1951*/;
			break;
		case 80:
			uParam0->f_7 = 747164/*func_1950*/;
			break;
		case 84:
			uParam0->f_1 = 747155/*func_1949*/;
			break;
		case 85:
			uParam0->f_1 = 747146/*func_1948*/;
			break;
		case 87:
			uParam0->f_1 = 747137/*func_1947*/;
			break;
		case 88:
			uParam0->f_1 = 747128/*func_1946*/;
			break;
		case 89:
			uParam0->f_54 = 747120/*func_1945*/;
			break;
		case 96:
			uParam0->f_1 = 747111/*func_1944*/;
			break;
		case 97:
			uParam0->f_1 = 747102/*func_1943*/;
			break;
		case 98:
			uParam0->f_1 = 747093/*func_1942*/;
			break;
		case 100:
			uParam0->f_22 = 747085/*func_1941*/;
			break;
		case 101:
			uParam0->f_22 = 747077/*func_1940*/;
			break;
		case 112:
			uParam0->f_13 = 747065/*func_1939*/;
			break;
		case 113:
			uParam0->f_3 = 747056/*func_1938*/;
			break;
		case 114:
			uParam0->f_16 = 338712/*func_867*/;
			break;
		case 115:
			uParam0->f_3 = 747047/*func_1937*/;
			break;
		case 116:
			*uParam0 = 747038/*func_1936*/;
			break;
		case 117:
			uParam0->f_16 = 392737/*func_1072*/;
			break;
		case 78:
			uParam0->f_59 = 747030/*func_1935*/;
			break;
		case 124:
			uParam0->f_1 = 747021/*func_1934*/;
			break;
		case 125:
			uParam0->f_19 = 747013/*func_1933*/;
			break;
	}
}

int func_2003(var uParam0)//Position - 0xB79DF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523.f_1, 1))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_2026(var uParam0, int iParam1)//Position - 0xB80B2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 832714/*func_2278*/;
			break;
		case 111:
			uParam0->f_35 = 832700/*func_2277*/;
			break;
		case 1:
			uParam0->f_30 = 832544/*func_2275*/;
			break;
		case 2:
			uParam0->f_31 = 832068/*func_2271*/;
			break;
		case 3:
			uParam0->f_34 = 831869/*func_2270*/;
			break;
		case 4:
			uParam0->f_12 = 831747/*func_2269*/;
			break;
		case 5:
			uParam0->f_11 = 831737/*func_2268*/;
			break;
		case 37:
			uParam0->f_18 = 831600/*func_2267*/;
			break;
		case 38:
			uParam0->f_9 = 831556/*func_2266*/;
			break;
		case 42:
			uParam0->f_10 = 831472/*func_2264*/;
			break;
		case 6:
			uParam0->f_32 = 831378/*func_2263*/;
			break;
		case 11:
			uParam0->f_11 = 831369/*func_2262*/;
			break;
		case 12:
			uParam0->f_33 = 830191/*func_2258*/;
			break;
		case 14:
			uParam0->f_11 = 830182/*func_2257*/;
			break;
		case 109:
			uParam0->f_56 = 823720/*func_2255*/;
			break;
		case 8:
			uParam0->f_37 = 823420/*func_2254*/;
			break;
		case 7:
			uParam0->f_36 = 823363/*func_2253*/;
			break;
		case 79:
			*uParam0 = 823119/*func_2251*/;
			break;
		case 13:
			uParam0->f_2 = 823057/*func_2250*/;
			break;
		case 15:
			uParam0->f_2 = 822977/*func_2249*/;
			break;
		case 16:
			uParam0->f_5 = 822257/*func_2247*/;
			break;
		case 108:
			uParam0->f_55 = 819063/*func_2235*/;
			break;
		case 17:
			uParam0->f_17 = 816758/*func_2231*/;
			break;
		case 19:
			uParam0->f_17 = 816732/*func_2230*/;
			break;
		case 20:
			uParam0->f_3 = 816556/*func_2229*/;
			break;
		case 21:
			uParam0->f_3 = 816492/*func_2228*/;
			break;
		case 74:
			uParam0->f_53 = 816388/*func_2227*/;
			break;
		case 75:
			uParam0->f_4 = 816372/*func_2226*/;
			break;
		case 22:
			uParam0->f_24 = 816269/*func_2225*/;
			break;
		case 23:
			uParam0->f_26 = 816222/*func_2224*/;
			break;
		case 24:
			uParam0->f_26 = 816185/*func_2223*/;
			break;
		case 26:
			uParam0->f_38 = 814142/*func_2211*/;
			break;
		case 25:
			uParam0->f_23 = 813820/*func_2209*/;
			break;
		case 30:
			uParam0->f_8 = 812963/*func_2207*/;
			break;
		case 31:
			uParam0->f_39 = 812829/*func_2206*/;
			break;
		case 33:
			uParam0->f_40 = 812257/*func_2205*/;
			break;
		case 32:
			*uParam0 = 812043/*func_2201*/;
			break;
		case 34:
			uParam0->f_41 = 809557/*func_2199*/;
			break;
		case 36:
			uParam0->f_58 = 809500/*func_2198*/;
			break;
		case 35:
			uParam0->f_42 = 782533/*func_2195*/;
			break;
		case 45:
			uParam0->f_14 = 782524/*func_2194*/;
			break;
		case 46:
			uParam0->f_14 = 782515/*func_2193*/;
			break;
		case 110:
			uParam0->f_57 = 782507/*func_2192*/;
			break;
		case 77:
			uParam0->f_13 = 782484/*func_2191*/;
			break;
		case 47:
			uParam0->f_43 = 782412/*func_2189*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 782284/*func_2188*/;
			break;
		case 49:
			uParam0->f_8 = 782258/*func_2187*/;
			break;
		case 50:
			*uParam0 = 781571/*func_2183*/;
			break;
		case 51:
			*uParam0 = 781301/*func_2180*/;
			break;
		case 52:
			uParam0->f_15 = 781290/*func_2179*/;
			break;
		case 53:
			uParam0->f_13 = 781128/*func_2178*/;
			break;
		case 54:
			uParam0->f_45 = 780604/*func_2171*/;
			break;
		case 56:
			uParam0->f_46 = 780586/*func_2170*/;
			break;
		case 57:
			uParam0->f_11 = 780334/*func_2169*/;
			break;
		case 58:
			uParam0->f_13 = 780172/*func_2168*/;
			break;
		case 59:
			*uParam0 = 779676/*func_2161*/;
			break;
		case 60:
			*uParam0 = 779661/*func_2160*/;
			break;
		case 61:
			uParam0->f_15 = 779650/*func_2159*/;
			break;
		case 62:
			uParam0->f_13 = 779488/*func_2158*/;
			break;
		case 55:
			uParam0->f_45 = 779309/*func_2157*/;
			break;
		case 63:
			uParam0->f_11 = 779282/*func_2156*/;
			break;
		case 64:
			uParam0->f_47 = 777849/*func_2149*/;
			break;
		case 65:
			uParam0->f_21 = 776462/*func_2146*/;
			break;
		case 66:
			uParam0->f_21 = 776103/*func_2145*/;
			break;
		case 67:
			uParam0->f_21 = 775989/*func_2144*/;
			break;
		case 68:
			*uParam0 = 775029/*func_2141*/;
			break;
		case 69:
			*uParam0 = 775020/*func_2140*/;
			break;
		case 70:
			uParam0->f_48 = 775008/*func_2139*/;
			break;
		case 71:
			uParam0->f_49 = 774464/*func_2138*/;
			break;
		case 107:
			uParam0->f_50 = 774452/*func_2137*/;
			break;
		case 80:
			uParam0->f_7 = 774264/*func_2136*/;
			break;
		case 84:
			uParam0->f_1 = 774255/*func_2135*/;
			break;
		case 85:
			uParam0->f_1 = 772669/*func_2132*/;
			break;
		case 87:
			uParam0->f_1 = 771153/*func_2125*/;
			break;
		case 88:
			uParam0->f_1 = 771144/*func_2124*/;
			break;
		case 89:
			uParam0->f_54 = 771136/*func_2123*/;
			break;
		case 96:
			uParam0->f_1 = 771106/*func_2122*/;
			break;
		case 97:
			uParam0->f_1 = 770661/*func_2121*/;
			break;
		case 98:
			uParam0->f_1 = 764922/*func_2065*/;
			break;
		case 100:
			uParam0->f_22 = 756487/*func_2040*/;
			break;
		case 101:
			uParam0->f_22 = 755565/*func_2034*/;
			break;
		case 112:
			uParam0->f_13 = 755554/*func_2033*/;
			break;
		case 113:
			uParam0->f_3 = 755545/*func_2032*/;
			break;
		case 114:
			uParam0->f_16 = 755536/*func_2031*/;
			break;
		case 117:
			uParam0->f_16 = 755527/*func_2030*/;
			break;
		case 78:
			uParam0->f_59 = 755355/*func_2028*/;
			break;
		case 76:
			uParam0->f_13 = 755332/*func_2027*/;
			break;
	}
}

int func_2132(int iParam0, var uParam1)//Position - 0xBCA3D
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
			func_377(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_289(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_2__::func_842(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_842(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_841(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_841(iParam0, &Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2171(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBE93C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_2__::func_851(PLAYER::PLAYER_ID(), __LIB_2__::func_852(iParam0)) && !__LIB_2__::func_851(__LIB_0__::func_582(), __LIB_2__::func_852(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_264(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_2__::func_851(iVar1, __LIB_2__::func_852(iParam0)) && __LIB_12__::func_207(iVar1))
				{
					Var3 = { __LIB_1__::func_267(iVar1) };
					if (__LIB_0__::func_585(Var3))
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
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_18__::func_676(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_2__::func_856(iParam0) };
								iVar6 = __LIB_2__::func_855(iParam0);
								*iParam2 = __LIB_0__::func_392(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2172(iParam2, 18);
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
void func_2172(var uParam0, int iParam1)//Position - 0xBEAB5
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_48(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2209(int iParam0, int iParam1)//Position - 0xC6AFC
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_848(iParam0, 0) };
	if (__LIB_7__::func_461(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_587(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_939(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_914(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2211(var uParam0, var uParam1)//Position - 0xC6C3E
{
	if (__LIB_2__::func_399() == 3)
	{
		func_2215(uParam0, uParam1);
	}
	else if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_851(__LIB_2__::func_191(PLAYER::PLAYER_ID()), __LIB_2__::func_852(*uParam0)))
	{
		__LIB_3__::func_862(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 2)
	{
		func_2213(uParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_868(uParam1);
	}
}

void func_2213(var uParam0, var uParam1)//Position - 0xC6CC7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_7__::func_396();
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
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

void func_2215(var uParam0, var uParam1)//Position - 0xC6DE5
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_38__::func_193(uParam0, uParam1);
			break;
		case 1:
			func_2220(uParam0, uParam1);
			break;
		case 2:
			__LIB_38__::func_192(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2220(var uParam0, var uParam1)//Position - 0xC7166
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_36__::func_126(*uParam0))
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
			if (__LIB_2__::func_399() == 3)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_939(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

int func_2235(var uParam0, var uParam1, var uParam2)//Position - 0xC7F77
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 22))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar4) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar4)
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_187(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(iVar4, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 22)) && __LIB_2__::func_762(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
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
						if (__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_2242(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 17))
								{
									if (__LIB_4__::func_725() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 17))
									{
										if ((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_88(uParam1, 0);
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 17)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_518(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_88(uParam1, 0);
											__LIB_18__::func_518(iVar2);
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
					func_2237(*uParam0);
					bVar5 = __LIB_2__::func_480(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_2__::func_614(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_88(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_88(uParam1, 1);
	return 0;
}

void func_2237(var uParam0)//Position - 0xC84C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (iVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar2, 1, 1))
						{
							if ((BitTest(Global_2689235[iVar2 /*453*/].f_318, 5) && __LIB_4__::func_2(iVar2) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(iVar2)) == 17)
							{
								if (func_2238(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if ((__LIB_2__::func_426(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar2 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_2238(var uParam0)//Position - 0xC8676
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_2249(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_2242(var uParam0, int iParam1, bool bParam2)//Position - 0xC8838
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1))
		{
			if (!func_669(iParam1, 126, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_2249(var uParam0)//Position - 0xC8EC1
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523.f_1, 0))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_2279(var uParam0, int iParam1)//Position - 0xCB4D3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 848919/*func_2388*/;
			break;
		case 111:
			uParam0->f_35 = 848910/*func_2387*/;
			break;
		case 1:
			uParam0->f_30 = 848842/*func_2385*/;
			break;
		case 2:
			uParam0->f_31 = 848396/*func_2382*/;
			break;
		case 3:
			uParam0->f_34 = 848291/*func_2381*/;
			break;
		case 4:
			uParam0->f_12 = 848278/*func_2380*/;
			break;
		case 6:
			uParam0->f_32 = 848214/*func_2379*/;
			break;
		case 11:
			uParam0->f_11 = 848205/*func_2378*/;
			break;
		case 12:
			uParam0->f_33 = 847744/*func_2373*/;
			break;
		case 14:
			uParam0->f_11 = 847735/*func_2372*/;
			break;
		case 109:
			uParam0->f_56 = 847348/*func_2370*/;
			break;
		case 8:
			uParam0->f_37 = 847340/*func_2369*/;
			break;
		case 7:
			uParam0->f_36 = 847331/*func_2368*/;
			break;
		case 79:
			*uParam0 = 847307/*func_2367*/;
			break;
		case 13:
			uParam0->f_2 = 847245/*func_2366*/;
			break;
		case 15:
			uParam0->f_2 = 847166/*func_2365*/;
			break;
		case 16:
			uParam0->f_5 = 846869/*func_2364*/;
			break;
		case 108:
			uParam0->f_55 = 846860/*func_2363*/;
			break;
		case 17:
			uParam0->f_17 = 846849/*func_2362*/;
			break;
		case 19:
			uParam0->f_17 = 846823/*func_2361*/;
			break;
		case 20:
			uParam0->f_3 = 846814/*func_2360*/;
			break;
		case 21:
			uParam0->f_3 = 846805/*func_2359*/;
			break;
		case 74:
			uParam0->f_53 = 846783/*func_2358*/;
			break;
		case 75:
			uParam0->f_4 = 846774/*func_2357*/;
			break;
		case 22:
			uParam0->f_24 = 846766/*func_2356*/;
			break;
		case 23:
			uParam0->f_26 = 846758/*func_2355*/;
			break;
		case 26:
			uParam0->f_38 = 846750/*func_2354*/;
			break;
		case 25:
			uParam0->f_23 = 846418/*func_2351*/;
			break;
		case 27:
			uParam0->f_25 = 846410/*func_2350*/;
			break;
		case 28:
			uParam0->f_24 = 846402/*func_2349*/;
			break;
		case 30:
			uParam0->f_8 = 846081/*func_2346*/;
			break;
		case 31:
			uParam0->f_39 = 846053/*func_2345*/;
			break;
		case 33:
			uParam0->f_40 = 845984/*func_2344*/;
			break;
		case 34:
			uParam0->f_41 = 842252/*func_2343*/;
			break;
		case 36:
			uParam0->f_58 = 842207/*func_2342*/;
			break;
		case 35:
			uParam0->f_42 = 839040/*func_2339*/;
			break;
		case 45:
			uParam0->f_14 = 839031/*func_2338*/;
			break;
		case 46:
			uParam0->f_14 = 839022/*func_2337*/;
			break;
		case 110:
			uParam0->f_57 = 839014/*func_2336*/;
			break;
		case 77:
			uParam0->f_13 = 839003/*func_2335*/;
			break;
		case 47:
			uParam0->f_43 = 838895/*func_2334*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 837780/*func_2331*/;
			break;
		case 49:
			uParam0->f_8 = 837771/*func_2330*/;
			break;
		case 50:
			*uParam0 = 837762/*func_2329*/;
			break;
		case 51:
			*uParam0 = 837753/*func_2328*/;
			break;
		case 52:
			uParam0->f_15 = 837742/*func_2327*/;
			break;
		case 53:
			uParam0->f_13 = 837731/*func_2326*/;
			break;
		case 54:
			uParam0->f_45 = 837723/*func_2325*/;
			break;
		case 56:
			uParam0->f_46 = 837714/*func_2324*/;
			break;
		case 57:
			uParam0->f_11 = 837705/*func_2323*/;
			break;
		case 58:
			uParam0->f_13 = 837663/*func_2322*/;
			break;
		case 59:
			*uParam0 = 837654/*func_2321*/;
			break;
		case 60:
			*uParam0 = 837645/*func_2320*/;
			break;
		case 61:
			uParam0->f_15 = 837634/*func_2319*/;
			break;
		case 62:
			uParam0->f_13 = 837623/*func_2318*/;
			break;
		case 63:
			uParam0->f_11 = 837614/*func_2317*/;
			break;
		case 64:
			uParam0->f_47 = 837606/*func_2316*/;
			break;
		case 65:
			uParam0->f_21 = 837598/*func_2315*/;
			break;
		case 66:
			uParam0->f_21 = 837295/*func_2314*/;
			break;
		case 67:
			uParam0->f_21 = 837225/*func_2313*/;
			break;
		case 68:
			*uParam0 = 836576/*func_2312*/;
			break;
		case 69:
			*uParam0 = 836567/*func_2311*/;
			break;
		case 70:
			uParam0->f_48 = 836559/*func_2310*/;
			break;
		case 71:
			uParam0->f_49 = 836550/*func_2309*/;
			break;
		case 107:
			uParam0->f_50 = 836538/*func_2308*/;
			break;
		case 80:
			uParam0->f_7 = 836104/*func_2307*/;
			break;
		case 18:
			uParam0->f_8 = 836079/*func_2306*/;
			break;
		case 84:
			uParam0->f_1 = 836062/*func_2305*/;
			break;
		case 85:
			uParam0->f_1 = 835520/*func_2301*/;
			break;
		case 87:
			uParam0->f_1 = 834479/*func_2292*/;
			break;
		case 88:
			uParam0->f_1 = 834470/*func_2291*/;
			break;
		case 89:
			uParam0->f_54 = 834462/*func_2290*/;
			break;
		case 96:
			uParam0->f_1 = 834453/*func_2289*/;
			break;
		case 97:
			uParam0->f_1 = 834444/*func_2288*/;
			break;
		case 98:
			uParam0->f_1 = 834435/*func_2287*/;
			break;
		case 100:
			uParam0->f_22 = 834427/*func_2286*/;
			break;
		case 101:
			uParam0->f_22 = 834419/*func_2285*/;
			break;
		case 112:
			uParam0->f_13 = 834407/*func_2284*/;
			break;
		case 113:
			uParam0->f_3 = 834398/*func_2283*/;
			break;
		case 78:
			uParam0->f_59 = 834095/*func_2280*/;
			break;
	}
}

int func_2301(var uParam0, var uParam1)//Position - 0xCBFC0
{
	return func_2302(uParam1);
}

int func_2302(var uParam0)//Position - 0xCBFCE
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
			func_377(&iVar0, &(uParam0->f_109), 60);
			__LIB_2__::func_416(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_289(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_2__::func_890(&Var1, &Var3, &uVar9, 1);
		__LIB_2__::func_890(&Var2, &Var4, &uVar10, 0);
		__LIB_2__::func_889(&Var5, &Var7, &uVar11, 1);
		__LIB_2__::func_889(&Var6, &Var8, &uVar12, 0);
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
		__LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2351(int iParam0, int iParam1)//Position - 0xCEA52
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_364(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_587(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_937(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_917(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

int func_2365(var uParam0)//Position - 0xCED3E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 26))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_2389(var uParam0, int iParam1)//Position - 0xCF420
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 883943/*func_2566*/;
			break;
		case 111:
			uParam0->f_35 = 883920/*func_2565*/;
			break;
		case 1:
			uParam0->f_30 = 883790/*func_2563*/;
			break;
		case 2:
			uParam0->f_31 = 883125/*func_2559*/;
			break;
		case 3:
			uParam0->f_34 = 882862/*func_2558*/;
			break;
		case 4:
			uParam0->f_12 = 882849/*func_2557*/;
			break;
		case 5:
			uParam0->f_11 = 882839/*func_2556*/;
			break;
		case 37:
			uParam0->f_18 = 882641/*func_2555*/;
			break;
		case 38:
			uParam0->f_9 = 882593/*func_2554*/;
			break;
		case 42:
			uParam0->f_10 = 882557/*func_2553*/;
			break;
		case 6:
			uParam0->f_32 = 882442/*func_2552*/;
			break;
		case 11:
			uParam0->f_11 = 882433/*func_2551*/;
			break;
		case 12:
			uParam0->f_33 = 881503/*func_2545*/;
			break;
		case 14:
			uParam0->f_11 = 881494/*func_2544*/;
			break;
		case 109:
			uParam0->f_56 = 880351/*func_2542*/;
			break;
		case 8:
			uParam0->f_37 = 880307/*func_2541*/;
			break;
		case 7:
			uParam0->f_36 = 880284/*func_2540*/;
			break;
		case 79:
			*uParam0 = 880260/*func_2539*/;
			break;
		case 13:
			uParam0->f_2 = 880198/*func_2538*/;
			break;
		case 15:
			uParam0->f_2 = 880119/*func_2537*/;
			break;
		case 16:
			uParam0->f_5 = 879445/*func_2532*/;
			break;
		case 108:
			uParam0->f_55 = 876163/*func_2519*/;
			break;
		case 17:
			uParam0->f_17 = 875245/*func_2518*/;
			break;
		case 19:
			uParam0->f_17 = 875200/*func_2517*/;
			break;
		case 20:
			uParam0->f_3 = 875027/*func_2516*/;
			break;
		case 21:
			uParam0->f_3 = 874942/*func_2515*/;
			break;
		case 74:
			uParam0->f_53 = 874802/*func_2514*/;
			break;
		case 75:
			uParam0->f_4 = 874786/*func_2513*/;
			break;
		case 22:
			uParam0->f_24 = 874683/*func_2512*/;
			break;
		case 23:
			uParam0->f_26 = 874636/*func_2511*/;
			break;
		case 24:
			uParam0->f_26 = 874599/*func_2510*/;
			break;
		case 26:
			uParam0->f_38 = 873194/*func_2497*/;
			break;
		case 25:
			uParam0->f_23 = 872828/*func_2494*/;
			break;
		case 27:
			uParam0->f_25 = 872015/*func_2490*/;
			break;
		case 28:
			uParam0->f_24 = 871976/*func_2489*/;
			break;
		case 29:
			uParam0->f_28 = 871741/*func_2485*/;
			break;
		case 30:
			uParam0->f_8 = 871416/*func_2481*/;
			break;
		case 31:
			uParam0->f_39 = 871219/*func_2480*/;
			break;
		case 43:
			uParam0->f_8 = 871113/*func_2479*/;
			break;
		case 33:
			uParam0->f_40 = 870797/*func_2478*/;
			break;
		case 34:
			uParam0->f_41 = 865804/*func_2475*/;
			break;
		case 36:
			uParam0->f_58 = 865747/*func_2474*/;
			break;
		case 35:
			uParam0->f_42 = 859543/*func_2470*/;
			break;
		case 45:
			uParam0->f_14 = 859534/*func_2469*/;
			break;
		case 46:
			uParam0->f_14 = 859525/*func_2468*/;
			break;
		case 110:
			uParam0->f_57 = 859517/*func_2467*/;
			break;
		case 77:
			uParam0->f_13 = 859494/*func_2466*/;
			break;
		case 82:
			uParam0->f_19 = 859481/*func_2465*/;
			break;
		case 47:
			uParam0->f_43 = 859189/*func_2462*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 857037/*func_2457*/;
			break;
		case 49:
			uParam0->f_8 = 856989/*func_2456*/;
			break;
		case 50:
			*uParam0 = 856797/*func_2454*/;
			break;
		case 51:
			*uParam0 = 856788/*func_2453*/;
			break;
		case 52:
			uParam0->f_15 = 856777/*func_2452*/;
			break;
		case 53:
			uParam0->f_13 = 856735/*func_2451*/;
			break;
		case 54:
			uParam0->f_45 = 856727/*func_2450*/;
			break;
		case 56:
			uParam0->f_46 = 856718/*func_2449*/;
			break;
		case 57:
			uParam0->f_11 = 856709/*func_2448*/;
			break;
		case 58:
			uParam0->f_13 = 856667/*func_2447*/;
			break;
		case 59:
			*uParam0 = 856658/*func_2446*/;
			break;
		case 60:
			*uParam0 = 856649/*func_2445*/;
			break;
		case 61:
			uParam0->f_15 = 856638/*func_2444*/;
			break;
		case 62:
			uParam0->f_13 = 856608/*func_2443*/;
			break;
		case 63:
			uParam0->f_11 = 856599/*func_2442*/;
			break;
		case 64:
			uParam0->f_47 = 856591/*func_2441*/;
			break;
		case 65:
			uParam0->f_21 = 855505/*func_2438*/;
			break;
		case 66:
			uParam0->f_21 = 855164/*func_2437*/;
			break;
		case 67:
			uParam0->f_21 = 855050/*func_2436*/;
			break;
		case 68:
			*uParam0 = 854222/*func_2435*/;
			break;
		case 69:
			*uParam0 = 854213/*func_2434*/;
			break;
		case 70:
			uParam0->f_48 = 854201/*func_2433*/;
			break;
		case 71:
			uParam0->f_49 = 854109/*func_2432*/;
			break;
		case 107:
			uParam0->f_50 = 854097/*func_2431*/;
			break;
		case 80:
			uParam0->f_7 = 853909/*func_2430*/;
			break;
		case 84:
			uParam0->f_1 = 853900/*func_2429*/;
			break;
		case 85:
			uParam0->f_1 = 853886/*func_2428*/;
			break;
		case 87:
			uParam0->f_1 = 853870/*func_2427*/;
			break;
		case 88:
			uParam0->f_1 = 853861/*func_2426*/;
			break;
		case 89:
			uParam0->f_54 = 853853/*func_2425*/;
			break;
		case 96:
			uParam0->f_1 = 853844/*func_2424*/;
			break;
		case 97:
			uParam0->f_1 = 853401/*func_2420*/;
			break;
		case 98:
			uParam0->f_1 = 851937/*func_2410*/;
			break;
		case 100:
			uParam0->f_22 = 851058/*func_2405*/;
			break;
		case 101:
			uParam0->f_22 = 850881/*func_2402*/;
			break;
		case 112:
			uParam0->f_13 = 850869/*func_2401*/;
			break;
		case 113:
			uParam0->f_3 = 850855/*func_2400*/;
			break;
		case 114:
			uParam0->f_16 = 338712/*func_867*/;
			break;
		case 117:
			uParam0->f_16 = 392737/*func_1072*/;
			break;
		case 118:
			uParam0->f_11 = 850846/*func_2399*/;
			break;
		case 119:
			uParam0->f_27 = 850745/*func_2395*/;
			break;
		case 120:
			uParam0->f_19 = 850720/*func_2393*/;
			break;
		case 78:
			uParam0->f_59 = 850548/*func_2391*/;
			break;
		case 125:
			uParam0->f_19 = 850521/*func_2390*/;
			break;
	}
}

int func_2410(int iParam0, var uParam1)//Position - 0xCFFE1
{
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2411(iParam0, uParam1);
	}
	return 1;
}

int func_2411(int iParam0, var uParam1)//Position - 0xCFFFE
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
		if (__LIB_36__::func_115(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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
		if (!__LIB_7__::func_476(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_2__::func_914(-395939522);
		iVar3 = __LIB_2__::func_914(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-395939522), iVar2);
			__LIB_2__::func_912(__LIB_2__::func_913(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(uParam1->f_50), __LIB_2__::func_913(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_2__::func_911(&(uParam1->f_58), __LIB_2__::func_913(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_3__::func_869(uParam1, 6);
		iVar7 = 3500;
		__LIB_2__::func_681(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2428(var uParam0, var uParam1)//Position - 0xD077E
{
	return func_2302(uParam1);
}

void func_2494(int iParam0, int iParam1)//Position - 0xD517C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_2__::func_935(iParam0) };
	if (__LIB_7__::func_480(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_587(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_943(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_919(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2497(var uParam0, var uParam1)//Position - 0xD52EA
{
	if (__LIB_0__::func_834(PLAYER::PLAYER_ID()) || __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		func_2498(uParam0, uParam1);
	}
}

void func_2498(var uParam0, var uParam1)//Position - 0xD5316
{
	int iVar0;
	if (__LIB_2__::func_399() == 2 && __LIB_2__::func_566() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2509(*uParam0, 0, 0))
		{
			__LIB_2__::func_447(0);
			__LIB_2__::func_565(1);
		}
		else
		{
			__LIB_7__::func_648(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			func_2504(uParam0, uParam1);
			break;
		case 1:
			func_2500(uParam0, uParam1);
			break;
		case 2:
			__LIB_7__::func_647(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2500(var uParam0, var uParam1)//Position - 0xD53D5
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
	sVar3 = __LIB_2__::func_936();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_4__::func_724(iVar5);
		if (__LIB_2__::func_563(iVar5, bVar6, bVar7))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar3, sVar3);
		__LIB_3__::func_874();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_25__::func_557(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_394(5);
		__LIB_7__::func_396();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_25__::func_301(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
		if (__LIB_2__::func_399() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2504(var uParam0, var uParam1)//Position - 0xD55D4
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_2__::func_939(iVar6);
		uVar1[iVar6] = __LIB_2__::func_938(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_0__::func_834(PLAYER::PLAYER_ID()) && __LIB_2__::func_934(PLAYER::PLAYER_ID()))
	{
		__LIB_7__::func_647(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_342(__LIB_2__::func_937(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_2__::func_565(2);
			}
			else if (func_2509(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_2__::func_447(1);
				__LIB_2__::func_565(1);
			}
			else
			{
				__LIB_7__::func_648(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_2509(int iParam0, bool bParam1, bool bParam2)//Position - 0xD5835
{
	int iVar0;
	int iVar1;
	func_587(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

int func_2519(var uParam0, var uParam1, var uParam2)//Position - 0xD5E83
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar4) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar4)
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_189(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(iVar4, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 21)) && (__LIB_0__::func_834(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)) || __LIB_2__::func_934(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3))))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
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
						if (__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1.5f)))
						{
							if (func_2527(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || (((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 15))
								{
									if (__LIB_4__::func_725() || ((__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_4__::func_2(PLAYER::PLAYER_ID()) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 15))
									{
										if ((__LIB_18__::func_482(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2), 0) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_94(uParam1, 0);
											__LIB_18__::func_535(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 15)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_535(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_94(uParam1, 0);
											__LIB_18__::func_535(iVar2);
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
					func_2521(*uParam0);
					bVar5 = __LIB_2__::func_480(iVar4) == uParam0->f_1;
					if (bVar5)
					{
						if (!__LIB_2__::func_941(uParam0->f_1))
						{
							bVar5 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar5 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar5)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_94(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_94(uParam1, 1);
	return 0;
}

void func_2521(var uParam0)//Position - 0xD6401
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (iVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar2, 1, 1))
						{
							if ((BitTest(Global_2689235[iVar2 /*453*/].f_318, 5) && __LIB_4__::func_2(iVar2) != -1) && __LIB_0__::func_170(__LIB_4__::func_2(iVar2)) == 15)
							{
								if (func_2522(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if ((__LIB_2__::func_426(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar2 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !__LIB_2__::func_482())
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_2522(var uParam0)//Position - 0xD65B7
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_2537(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_2527(var uParam0, int iParam1, bool bParam2)//Position - 0xD679B
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1))
		{
			if (!func_669(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_2537(var uParam0)//Position - 0xD6DF7
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 24))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

void func_2567(var uParam0, int iParam1)//Position - 0xD7CF0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 914420/*func_2740*/;
			break;
		case 111:
			uParam0->f_35 = 914411/*func_2739*/;
			break;
		case 1:
			uParam0->f_30 = 914343/*func_2737*/;
			break;
		case 2:
			uParam0->f_31 = 913992/*func_2734*/;
			break;
		case 3:
			uParam0->f_34 = 913759/*func_2733*/;
			break;
		case 4:
			uParam0->f_12 = 913746/*func_2732*/;
			break;
		case 6:
			uParam0->f_32 = 913682/*func_2731*/;
			break;
		case 11:
			uParam0->f_11 = 913673/*func_2730*/;
			break;
		case 12:
			uParam0->f_33 = 912948/*func_2726*/;
			break;
		case 14:
			uParam0->f_11 = 912939/*func_2725*/;
			break;
		case 109:
			uParam0->f_56 = 911817/*func_2724*/;
			break;
		case 8:
			uParam0->f_37 = 911809/*func_2723*/;
			break;
		case 7:
			uParam0->f_36 = 911800/*func_2722*/;
			break;
		case 79:
			*uParam0 = 911776/*func_2721*/;
			break;
		case 13:
			uParam0->f_2 = 911704/*func_2720*/;
			break;
		case 15:
			uParam0->f_2 = 911615/*func_2719*/;
			break;
		case 16:
			uParam0->f_5 = 911255/*func_2718*/;
			break;
		case 108:
			uParam0->f_55 = 911116/*func_2716*/;
			break;
		case 17:
			uParam0->f_17 = 910460/*func_2715*/;
			break;
		case 19:
			uParam0->f_17 = 910434/*func_2714*/;
			break;
		case 20:
			uParam0->f_3 = 910425/*func_2713*/;
			break;
		case 21:
			uParam0->f_3 = 910377/*func_2712*/;
			break;
		case 74:
			uParam0->f_53 = 910322/*func_2711*/;
			break;
		case 75:
			uParam0->f_4 = 910209/*func_2710*/;
			break;
		case 22:
			uParam0->f_24 = 910201/*func_2709*/;
			break;
		case 23:
			uParam0->f_26 = 910193/*func_2708*/;
			break;
		case 26:
			uParam0->f_38 = 907651/*func_2692*/;
			break;
		case 25:
			uParam0->f_23 = 907643/*func_2691*/;
			break;
		case 27:
			uParam0->f_25 = 907635/*func_2690*/;
			break;
		case 28:
			uParam0->f_24 = 907627/*func_2689*/;
			break;
		case 30:
			uParam0->f_8 = 907346/*func_2688*/;
			break;
		case 31:
			uParam0->f_39 = 907318/*func_2687*/;
			break;
		case 33:
			uParam0->f_40 = 907249/*func_2686*/;
			break;
		case 76:
			uParam0->f_13 = 907226/*func_2685*/;
			break;
		case 34:
			uParam0->f_41 = 904672/*func_2682*/;
			break;
		case 36:
			uParam0->f_58 = 904627/*func_2681*/;
			break;
		case 35:
			uParam0->f_42 = 904531/*func_2680*/;
			break;
		case 45:
			uParam0->f_14 = 904522/*func_2679*/;
			break;
		case 46:
			uParam0->f_14 = 904513/*func_2678*/;
			break;
		case 110:
			uParam0->f_57 = 904505/*func_2677*/;
			break;
		case 77:
			uParam0->f_13 = 904494/*func_2676*/;
			break;
		case 47:
			uParam0->f_43 = 904387/*func_2675*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 903549/*func_2674*/;
			break;
		case 49:
			uParam0->f_8 = 903540/*func_2673*/;
			break;
		case 50:
			*uParam0 = 903327/*func_2672*/;
			break;
		case 51:
			*uParam0 = 903318/*func_2671*/;
			break;
		case 52:
			uParam0->f_15 = 903307/*func_2670*/;
			break;
		case 53:
			uParam0->f_13 = 903265/*func_2669*/;
			break;
		case 54:
			uParam0->f_45 = 903226/*func_2668*/;
			break;
		case 56:
			uParam0->f_46 = 903217/*func_2667*/;
			break;
		case 57:
			uParam0->f_11 = 903175/*func_2665*/;
			break;
		case 58:
			uParam0->f_13 = 903133/*func_2664*/;
			break;
		case 59:
			*uParam0 = 903124/*func_2663*/;
			break;
		case 60:
			*uParam0 = 903115/*func_2662*/;
			break;
		case 61:
			uParam0->f_15 = 903104/*func_2661*/;
			break;
		case 62:
			uParam0->f_13 = 903093/*func_2660*/;
			break;
		case 63:
			uParam0->f_11 = 903084/*func_2659*/;
			break;
		case 64:
			uParam0->f_47 = 902998/*func_2657*/;
			break;
		case 65:
			uParam0->f_21 = 902990/*func_2656*/;
			break;
		case 66:
			uParam0->f_21 = 902649/*func_2655*/;
			break;
		case 67:
			uParam0->f_21 = 902579/*func_2654*/;
			break;
		case 68:
			*uParam0 = 901882/*func_2653*/;
			break;
		case 69:
			*uParam0 = 901873/*func_2652*/;
			break;
		case 70:
			uParam0->f_48 = 901800/*func_2651*/;
			break;
		case 71:
			uParam0->f_49 = 901791/*func_2650*/;
			break;
		case 107:
			uParam0->f_50 = 901779/*func_2649*/;
			break;
		case 80:
			uParam0->f_7 = 901770/*func_2648*/;
			break;
		case 84:
			uParam0->f_1 = 901245/*func_2645*/;
			break;
		case 85:
			uParam0->f_1 = 899689/*func_2642*/;
			break;
		case 87:
			uParam0->f_1 = 896462/*func_2629*/;
			break;
		case 88:
			uParam0->f_1 = 896447/*func_2628*/;
			break;
		case 89:
			uParam0->f_54 = 896086/*func_2626*/;
			break;
		case 96:
			uParam0->f_1 = 895795/*func_2623*/;
			break;
		case 97:
			uParam0->f_1 = 895289/*func_2621*/;
			break;
		case 98:
			uParam0->f_1 = 893660/*func_2619*/;
			break;
		case 100:
			uParam0->f_22 = 893383/*func_2618*/;
			break;
		case 101:
			uParam0->f_22 = 892834/*func_2614*/;
			break;
		case 112:
			uParam0->f_13 = 892822/*func_2613*/;
			break;
		case 113:
			uParam0->f_3 = 892813/*func_2612*/;
			break;
		case 114:
			uParam0->f_16 = 338712/*func_867*/;
			break;
		case 115:
			uParam0->f_3 = 892676/*func_2609*/;
			break;
		case 116:
			*uParam0 = 892628/*func_2608*/;
			break;
		case 117:
			uParam0->f_16 = 392737/*func_1072*/;
			break;
		case 118:
			uParam0->f_11 = 850846/*func_2399*/;
			break;
		case 119:
			uParam0->f_27 = 850745/*func_2395*/;
			break;
		case 120:
			uParam0->f_19 = 850720/*func_2393*/;
			break;
		case 78:
			uParam0->f_59 = 892620/*func_2607*/;
			break;
		case 124:
			uParam0->f_1 = 885534/*func_2569*/;
			break;
		case 125:
			uParam0->f_19 = 885478/*func_2568*/;
			break;
	}
}

int func_2569(int iParam0, int* iParam1)//Position - 0xD831E
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
			__LIB_39__::func_949(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_7__::func_394(0);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(3);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(4);
					__LIB_2__::func_962(iParam1, 1);
				}
				__LIB_3__::func_878(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_265(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_7__::func_394(1);
					__LIB_2__::func_962(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_399() == 0)
			{
				if (__LIB_18__::func_751(iParam0, iParam1))
				{
					__LIB_2__::func_961();
					__LIB_2__::func_962(iParam1, 2);
				}
			}
			else
			{
				__LIB_7__::func_484(iParam0, iParam1, __LIB_2__::func_399());
				__LIB_2__::func_962(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_399() == 0)
			{
				if (func_2642(iParam0, iParam1))
				{
					__LIB_2__::func_959(&(Global_1946250.f_3638), 60);
					__LIB_2__::func_962(iParam1, 3);
				}
			}
			else if (func_2595(iParam1))
			{
				__LIB_2__::func_962(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_399() == 0)
			{
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				__LIB_25__::func_302(iParam0, iParam1);
				if (__LIB_2__::func_413(&(Global_1946250.f_3638), 0))
				{
					__LIB_39__::func_948(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_2__::func_962(iParam1, 4);
				}
			}
			else
			{
				__LIB_18__::func_749(iParam1);
				__LIB_39__::func_948(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_2__::func_962(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_399() == 0)
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
				__LIB_35__::func_658(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_25__::func_302(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_39__::func_949(iParam1);
				}
			}
			else if (__LIB_18__::func_749(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_39__::func_949(iParam1);
			}
			break;
	}
	return 1;
}

int func_2595(int* iParam0)//Position - 0xD9576
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
		func_1433(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_2619(int iParam0, var uParam1)//Position - 0xDA2DC
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_2__::func_909(iParam0))
	{
		return func_2411(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_160())
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
		__LIB_8__::func_454(1, 1, 1, 0, 0, 0, 0);
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
			__LIB_2__::func_966(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1433(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
		__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_2642(int iParam0, int* iParam1)//Position - 0xDBA69
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
		if (!__LIB_36__::func_115(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_2__::func_912(__LIB_2__::func_913(-1805228339), __LIB_2__::func_914(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_2__::func_911(&(iParam1->f_50), __LIB_2__::func_913(-1805228339), __LIB_2__::func_974(-1805228339), __LIB_2__::func_914(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_2__::func_917())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
		Var3 = { __LIB_2__::func_913(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_2__::func_972(6);
		__LIB_2__::func_681(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_657(iVar6, 0)) && __LIB_6__::func_407(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) == -1)
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
			func_377(&iVar7, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (__LIB_36__::func_115(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
		if (!__LIB_7__::func_476(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_2__::func_915(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_915());
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
		sVar11 = __LIB_7__::func_487(iParam1, 6);
		iVar12 = __LIB_2__::func_973(__LIB_2__::func_970(iParam1));
		__LIB_2__::func_681(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1433(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_2__::func_913(-1805228339), 0.1f, __LIB_2__::func_914(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_2__::func_914(-1805228339), __LIB_2__::func_913(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_2__::func_913(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__::func_914(-1805228339));
			__LIB_25__::func_103(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_2692(var uParam0, var uParam1)//Position - 0xDD983
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	if (__LIB_2__::func_399() == 0 || __LIB_2__::func_399() == 2)
	{
		if (!__LIB_2__::func_779(PLAYER::PLAYER_ID()) || __LIB_2__::func_380())
		{
			if (!__LIB_2__::func_380())
			{
				if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
				{
					__LIB_25__::func_303(1, *uParam0);
				}
			}
			if (__LIB_2__::func_192(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_303(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			if (__LIB_2__::func_380())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_2__::func_380())
	{
		if ((__LIB_2__::func_399() == 3 || __LIB_2__::func_399() == 4) || __LIB_2__::func_399() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_7__::func_396();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_2696(uParam0, uParam1);
			break;
		case 4:
			__LIB_7__::func_652(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2693(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2693(var uParam0, var uParam1)//Position - 0xDDAC1
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
	iVar1 = __LIB_2__::func_566();
	bVar0 = iVar1 != 5;
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_2__::func_936();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_4__::func_724(iVar9);
		if (__LIB_2__::func_563(iVar9, bVar2, bVar3))
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
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar7, sVar7);
		__LIB_3__::func_874();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_25__::func_557(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_2__::func_566() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			if ((__LIB_2__::func_399() == 1 || __LIB_2__::func_399() == 3) || __LIB_2__::func_399() == 4)
			{
				__LIB_2__::func_924();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_2__::func_566() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_7__::func_396();
			__LIB_2__::func_932(*uParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			if (__LIB_2__::func_566() == 3)
			{
				__LIB_2__::func_924();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_25__::func_303(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_7__::func_396();
	}
}

void func_2696(var uParam0, var uParam1)//Position - 0xDDD4B
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_2__::func_936();
	if (__LIB_2__::func_399() == 0)
	{
		uVar0 = __LIB_12__::func_242(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_26__::func_652(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_193(0, 1);
		__LIB_1__::func_319("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_7__::func_286(1, sVar4, sVar4);
		__LIB_3__::func_874();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_25__::func_557(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_8__::func_86(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_2__::func_399() == 0)
		{
			__LIB_1__::func_342(__LIB_2__::func_986(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_342(__LIB_12__::func_211(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_2__::func_399() == 0)
			{
				func_2698(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2697(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2697(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDDE68
{
	if (iParam1 == 0)
	{
		if (func_2509(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_2__::func_924();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_2__::func_447(0);
		if (func_2509(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_2509(iParam0, 1, 0))
		{
			__LIB_2__::func_565(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_2__::func_565(4);
		__LIB_2__::func_924();
	}
	else
	{
		__LIB_2__::func_447(1);
		if (func_2509(iParam0, 0, 0))
		{
			__LIB_2__::func_565(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
			__LIB_2__::func_924();
		}
	}
	*uParam2 = 1;
}

void func_2698(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDDF70
{
	if (iParam1 == 0)
	{
		if (func_2509(iParam0, 0, 0))
		{
			__LIB_2__::func_565(1);
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
		__LIB_2__::func_447(0);
		if (func_2509(iParam0, 0, 0))
		{
			__LIB_2__::func_565(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_2__::func_932(iParam0, 124);
			__LIB_7__::func_394(0);
			__LIB_2__::func_548(1);
		}
	}
}

int func_2719(var uParam0)//Position - 0xDE8FF
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 0) && !__LIB_2__::func_380())
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 23))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_2720(var uParam0)//Position - 0xDE958
{
	if (__LIB_26__::func_626(1, 0) && !__LIB_2__::func_380())
	{
		return 1;
	}
	if (__LIB_1__::func_302(17))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

void func_2741(var uParam0, int iParam1)//Position - 0xDF3FD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 950017/*func_2908*/;
			break;
		case 111:
			uParam0->f_35 = 950003/*func_2907*/;
			break;
		case 1:
			uParam0->f_30 = 949904/*func_2906*/;
			break;
		case 2:
			uParam0->f_31 = 948842/*func_2902*/;
			break;
		case 3:
			uParam0->f_34 = 948688/*func_2901*/;
			break;
		case 4:
			uParam0->f_12 = 948635/*func_2899*/;
			break;
		case 5:
			uParam0->f_11 = 948580/*func_2898*/;
			break;
		case 37:
			uParam0->f_18 = 948462/*func_2897*/;
			break;
		case 38:
			uParam0->f_9 = 948330/*func_2893*/;
			break;
		case 6:
			uParam0->f_32 = 948215/*func_2892*/;
			break;
		case 11:
			uParam0->f_11 = 948205/*func_2891*/;
			break;
		case 12:
			uParam0->f_33 = 947036/*func_2886*/;
			break;
		case 14:
			uParam0->f_11 = 947027/*func_2885*/;
			break;
		case 109:
			uParam0->f_56 = 945715/*func_2884*/;
			break;
		case 8:
			uParam0->f_37 = 945671/*func_2883*/;
			break;
		case 7:
			uParam0->f_36 = 945648/*func_2882*/;
			break;
		case 79:
			*uParam0 = 945624/*func_2881*/;
			break;
		case 13:
			uParam0->f_2 = 945561/*func_2880*/;
			break;
		case 15:
			uParam0->f_2 = 945481/*func_2879*/;
			break;
		case 16:
			uParam0->f_5 = 944838/*func_2875*/;
			break;
		case 108:
			uParam0->f_55 = 941698/*func_2862*/;
			break;
		case 17:
			uParam0->f_17 = 940997/*func_2861*/;
			break;
		case 19:
			uParam0->f_17 = 940971/*func_2860*/;
			break;
		case 20:
			uParam0->f_3 = 940792/*func_2859*/;
			break;
		case 21:
			uParam0->f_3 = 940728/*func_2858*/;
			break;
		case 74:
			uParam0->f_53 = 940454/*func_2856*/;
			break;
		case 75:
			uParam0->f_4 = 940438/*func_2855*/;
			break;
		case 22:
			uParam0->f_24 = 940335/*func_2854*/;
			break;
		case 23:
			uParam0->f_26 = 940288/*func_2853*/;
			break;
		case 24:
			uParam0->f_26 = 940251/*func_2852*/;
			break;
		case 26:
			uParam0->f_38 = 939424/*func_2845*/;
			break;
		case 25:
			uParam0->f_23 = 939058/*func_2842*/;
			break;
		case 27:
			uParam0->f_25 = 938676/*func_2840*/;
			break;
		case 28:
			uParam0->f_24 = 938625/*func_2839*/;
			break;
		case 29:
			uParam0->f_28 = 938617/*func_2838*/;
			break;
		case 30:
			uParam0->f_8 = 938380/*func_2834*/;
			break;
		case 31:
			uParam0->f_39 = 938259/*func_2833*/;
			break;
		case 33:
			uParam0->f_40 = 937839/*func_2832*/;
			break;
		case 34:
			uParam0->f_41 = 926543/*func_2818*/;
			break;
		case 36:
			uParam0->f_58 = 926498/*func_2817*/;
			break;
		case 35:
			uParam0->f_42 = 923411/*func_2814*/;
			break;
		case 45:
			uParam0->f_14 = 923402/*func_2813*/;
			break;
		case 46:
			uParam0->f_14 = 923393/*func_2812*/;
			break;
		case 110:
			uParam0->f_57 = 923385/*func_2811*/;
			break;
		case 77:
			uParam0->f_13 = 923336/*func_2810*/;
			break;
		case 47:
			uParam0->f_43 = 923254/*func_2809*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 922490/*func_2802*/;
			break;
		case 49:
			uParam0->f_8 = 922443/*func_2801*/;
			break;
		case 50:
			*uParam0 = 922384/*func_2800*/;
			break;
		case 51:
			*uParam0 = 922152/*func_2797*/;
			break;
		case 52:
			uParam0->f_15 = 922141/*func_2796*/;
			break;
		case 53:
			uParam0->f_13 = 922099/*func_2795*/;
			break;
		case 54:
			uParam0->f_45 = 922091/*func_2794*/;
			break;
		case 56:
			uParam0->f_46 = 922082/*func_2793*/;
			break;
		case 57:
			uParam0->f_11 = 922073/*func_2792*/;
			break;
		case 58:
			uParam0->f_13 = 922031/*func_2791*/;
			break;
		case 59:
			*uParam0 = 922022/*func_2790*/;
			break;
		case 60:
			*uParam0 = 922013/*func_2789*/;
			break;
		case 61:
			uParam0->f_15 = 922002/*func_2788*/;
			break;
		case 62:
			uParam0->f_13 = 921960/*func_2787*/;
			break;
		case 63:
			uParam0->f_11 = 921951/*func_2786*/;
			break;
		case 64:
			uParam0->f_47 = 921943/*func_2785*/;
			break;
		case 65:
			uParam0->f_21 = 920881/*func_2782*/;
			break;
		case 66:
			uParam0->f_21 = 920578/*func_2781*/;
			break;
		case 67:
			uParam0->f_21 = 920464/*func_2780*/;
			break;
		case 68:
			*uParam0 = 919621/*func_2779*/;
			break;
		case 69:
			*uParam0 = 919612/*func_2778*/;
			break;
		case 70:
			uParam0->f_48 = 919539/*func_2777*/;
			break;
		case 71:
			uParam0->f_49 = 919530/*func_2776*/;
			break;
		case 107:
			uParam0->f_50 = 919518/*func_2775*/;
			break;
		case 80:
			uParam0->f_7 = 919316/*func_2774*/;
			break;
		case 84:
			uParam0->f_1 = 919307/*func_2773*/;
			break;
		case 85:
			uParam0->f_1 = 917574/*func_2760*/;
			break;
		case 87:
			uParam0->f_1 = 916117/*func_2752*/;
			break;
		case 88:
			uParam0->f_1 = 916108/*func_2751*/;
			break;
		case 89:
			uParam0->f_54 = 916100/*func_2750*/;
			break;
		case 96:
			uParam0->f_1 = 916091/*func_2749*/;
			break;
		case 97:
			uParam0->f_1 = 916082/*func_2748*/;
			break;
		case 98:
			uParam0->f_1 = 916073/*func_2747*/;
			break;
		case 100:
			uParam0->f_22 = 916065/*func_2746*/;
			break;
		case 101:
			uParam0->f_22 = 916057/*func_2745*/;
			break;
		case 78:
			uParam0->f_59 = 915885/*func_2743*/;
			break;
		case 125:
			uParam0->f_19 = 915852/*func_2742*/;
			break;
	}
}

int func_2760(int iParam0, var uParam1)//Position - 0xE0046
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
	if (__LIB_18__::func_483())
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
			func_377(&iVar0, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_289(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_3__::func_10(iParam0, __LIB_2__::func_399()) };
		Var2 = { __LIB_3__::func_9(iParam0, __LIB_2__::func_399()) };
		uVar3 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var4 = { __LIB_3__::func_8(iParam0, __LIB_2__::func_399()) };
		Var5 = { __LIB_3__::func_7(iParam0, __LIB_2__::func_399()) };
		uVar6 = __LIB_3__::func_6(iParam0, __LIB_2__::func_399());
		Var7 = { __LIB_3__::func_5(iParam0, __LIB_2__::func_399()) };
		Var8 = { __LIB_3__::func_4(iParam0, __LIB_2__::func_399()) };
		uVar9 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
		Var10 = { __LIB_3__::func_3(iParam0, __LIB_2__::func_399()) };
		Var11 = { __LIB_3__::func_2(iParam0, __LIB_2__::func_399()) };
		uVar12 = __LIB_3__::func_1(iParam0, __LIB_2__::func_399());
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
		return __LIB_31__::func_942(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2842(int iParam0, int iParam1)//Position - 0xE5432
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_33(iParam0) };
	if (__LIB_7__::func_499(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_587(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_7__::func_948(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_18__::func_923(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_2845(var uParam0, var uParam1)//Position - 0xE55A0
{
	if (__LIB_2__::func_710(PLAYER::PLAYER_ID()))
	{
		func_2846(uParam0, uParam1);
	}
}

void func_2846(var uParam0, var uParam1)//Position - 0xE55BE
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_572(uParam0, uParam1);
			break;
		case 1:
			func_2847(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2847(var uParam0, var uParam1)//Position - 0xE55F8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_32())
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
			__LIB_1__::func_319("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

int func_2862(var uParam0, var uParam1, var uParam2)//Position - 0xE5E82
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_3__::func_17(*uParam0);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 18))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar5) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar5)
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_193(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(iVar5, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 18)) && __LIB_3__::func_16(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
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
						if (__LIB_18__::func_537(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (func_2870(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 13))
								{
									if (__LIB_4__::func_725() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 13))
									{
										if ((__LIB_18__::func_537(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_95(uParam1, 0);
											__LIB_18__::func_535(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 13)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_535(iVar2);
											return 1;
										}
										else if ((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_95(uParam1, 0);
											__LIB_18__::func_535(iVar2);
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
					func_2864(*uParam0);
					bVar6 = __LIB_2__::func_480(iVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_3__::func_38(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_95(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_95(uParam1, 1);
	return 0;
}

void func_2864(var uParam0)//Position - 0xE63E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (iVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar2, 1, 1))
						{
							if (BitTest(Global_2689235[iVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(iVar2)) == 13)
							{
								if (func_2865(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar2 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_2865(var uParam0)//Position - 0xE6548
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_2879(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_2870(var uParam0, int iParam1, bool bParam2)//Position - 0xE672C
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARENA_ENT_T" /* GXT: ARENA WORKSHOP */))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1))
		{
			if (!func_669(iParam1, 122, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_2879(var uParam0)//Position - 0xE6D49
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 13))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 10))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_2880(var uParam0)//Position - 0xE6D99
{
	if (__LIB_26__::func_626(1, 13))
	{
		return 1;
	}
	if (__LIB_1__::func_302(17))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

void func_2909(var uParam0, int iParam1)//Position - 0xE7F0A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1041741/*func_3051*/;
			break;
		case 1:
			uParam0->f_30 = 1041685/*func_3050*/;
			break;
		case 2:
			uParam0->f_31 = 1041341/*func_3049*/;
			break;
		case 3:
			uParam0->f_34 = 1041302/*func_3048*/;
			break;
		case 4:
			uParam0->f_12 = 1041269/*func_3047*/;
			break;
		case 5:
			uParam0->f_11 = 1041258/*func_3046*/;
			break;
		case 6:
			uParam0->f_32 = 1041194/*func_3045*/;
			break;
		case 111:
			uParam0->f_35 = 1041171/*func_3044*/;
			break;
		case 79:
			*uParam0 = 1041147/*func_3043*/;
			break;
		case 37:
			uParam0->f_18 = 1041029/*func_3042*/;
			break;
		case 38:
			uParam0->f_9 = 1040950/*func_3041*/;
			break;
		case 11:
			uParam0->f_11 = 1040941/*func_3040*/;
			break;
		case 12:
			uParam0->f_33 = 1040345/*func_3037*/;
			break;
		case 109:
			uParam0->f_56 = 1040337/*func_3036*/;
			break;
		case 15:
			uParam0->f_2 = 1035141/*func_3011*/;
			break;
		case 13:
			uParam0->f_2 = 1035132/*func_3010*/;
			break;
		case 75:
			uParam0->f_4 = 1035117/*func_3009*/;
			break;
		case 16:
			uParam0->f_5 = 1034642/*func_3005*/;
			break;
		case 108:
			uParam0->f_55 = 1030670/*func_2989*/;
			break;
		case 17:
			uParam0->f_17 = 1029894/*func_2988*/;
			break;
		case 19:
			uParam0->f_17 = 1029868/*func_2987*/;
			break;
		case 20:
			uParam0->f_3 = 1029657/*func_2986*/;
			break;
		case 21:
			uParam0->f_3 = 1029494/*func_2985*/;
			break;
		case 74:
			uParam0->f_53 = 1028885/*func_2982*/;
			break;
		case 22:
			uParam0->f_24 = 1028803/*func_2981*/;
			break;
		case 25:
			uParam0->f_23 = 1027887/*func_2978*/;
			break;
		case 30:
			uParam0->f_8 = 1026636/*func_2969*/;
			break;
		case 31:
			uParam0->f_39 = 1025961/*func_2965*/;
			break;
		case 33:
			uParam0->f_40 = 1025058/*func_2962*/;
			break;
		case 14:
			uParam0->f_11 = 1025049/*func_2961*/;
			break;
		case 34:
			uParam0->f_41 = 1024274/*func_2958*/;
			break;
		case 36:
			uParam0->f_58 = 1024221/*func_2957*/;
			break;
		case 35:
			uParam0->f_42 = 955801/*func_2945*/;
			break;
		case 45:
			uParam0->f_14 = 955792/*func_2944*/;
			break;
		case 46:
			uParam0->f_14 = 955783/*func_2943*/;
			break;
		case 110:
			uParam0->f_57 = 955775/*func_2942*/;
			break;
		case 77:
			uParam0->f_13 = 955752/*func_2941*/;
			break;
		case 47:
			uParam0->f_43 = 955612/*func_2940*/;
			break;
		case 49:
			uParam0->f_8 = 955577/*func_2939*/;
			break;
		case 50:
			*uParam0 = 955539/*func_2938*/;
			break;
		case 51:
			*uParam0 = 955515/*func_2937*/;
			break;
		case 52:
			uParam0->f_15 = 955504/*func_2936*/;
			break;
		case 53:
			uParam0->f_13 = 955425/*func_2935*/;
			break;
		case 54:
			uParam0->f_45 = 955417/*func_2934*/;
			break;
		case 56:
			uParam0->f_46 = 955408/*func_2933*/;
			break;
		case 57:
			uParam0->f_11 = 955398/*func_2932*/;
			break;
		case 58:
			uParam0->f_13 = 955109/*func_2931*/;
			break;
		case 64:
			uParam0->f_47 = 953732/*func_2925*/;
			break;
		case 65:
			uParam0->f_21 = 952769/*func_2922*/;
			break;
		case 66:
			uParam0->f_21 = 952574/*func_2921*/;
			break;
		case 67:
			uParam0->f_21 = 952471/*func_2920*/;
			break;
		case 68:
			*uParam0 = 951782/*func_2919*/;
			break;
		case 69:
			*uParam0 = 951773/*func_2918*/;
			break;
		case 70:
			uParam0->f_48 = 951761/*func_2917*/;
			break;
		case 71:
			uParam0->f_49 = 951752/*func_2916*/;
			break;
		case 107:
			uParam0->f_50 = 951740/*func_2915*/;
			break;
		case 80:
			uParam0->f_7 = 951403/*func_2913*/;
			break;
		case 73:
			uParam0->f_51 = 951394/*func_2912*/;
			break;
		case 78:
			uParam0->f_59 = 951277/*func_2910*/;
			break;
	}
}

void func_2978(int iParam0, int iParam1)//Position - 0xFAF2F
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
	if (__LIB_26__::func_660(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_425(iVar7, 1)) && !__LIB_7__::func_291(iVar7)) && !__LIB_2__::func_509(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_20__::func_845(PLAYER::PLAYER_ID())) && __LIB_2__::func_457(iVar7, PLAYER::PLAYER_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_32__::func_859(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_229(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_32__::func_859(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_2979(iParam0);
						}
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_465(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_3__::func_903(PLAYER::PLAYER_ID()))
						{
							func_2979(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_2979(int iParam0)//Position - 0xFB1E7
{
	__LIB_32__::func_859(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_2989(var uParam0, var uParam1, var uParam2)//Position - 0xFBA0E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	*uParam2 = 1;
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_96(uParam1, 1);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_96(uParam1, 1);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 15))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if (!__LIB_0__::func_657(iVar2, 1))
			{
				__LIB_25__::func_194(uParam1);
				if (__LIB_18__::func_539(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar4) && !Global_1852994.f_171)
			{
				__LIB_25__::func_194(uParam1);
				if (__LIB_18__::func_539(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar4) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar4)
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if (__LIB_6__::func_136())
			{
				__LIB_25__::func_194(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(iVar4, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 15)) && __LIB_3__::func_61(iVar4))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_4__::func_973(0))
					{
						if (__LIB_18__::func_539(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
						{
							if (func_2998(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 12))
								{
									if (__LIB_4__::func_725() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 12))
									{
										if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 12)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_535(iVar2);
											return 1;
										}
										else
										{
											if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_72(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 1075838976, 0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												bVar0 = true;
												if (uParam1->f_22.f_94 == -1)
												{
													__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, "HACKER_ENTER0" /* GXT: Press ~INPUT_CONTEXT~ to enter the Nerve Center with current vehicle. */, 0, 0, 0, 0);
												}
											}
											if ((__LIB_18__::func_539(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (__LIB_2__::func_187(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												__LIB_6__::func_404(&(uParam1->f_22.f_94));
												__LIB_7__::func_375(1, *uParam0);
												__LIB_25__::func_96(uParam1, 0);
												__LIB_18__::func_535(iVar2);
												return 1;
											}
										}
									}
								}
							}
							else
							{
								if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
								{
									HUD::CLEAR_HELP(true);
									__LIB_6__::func_404(&(uParam1->f_22.f_94));
								}
								__LIB_25__::func_96(uParam1, 1);
							}
						}
					}
				}
				else
				{
					func_2990(*uParam0);
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_96(uParam1, 1);
				return 0;
			}
		}
		else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_96(uParam1, 1);
	return 0;
}

void func_2990(int iParam0)//Position - 0xFC02E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (iVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar2, 1, 1))
						{
							if (BitTest(Global_2689235[iVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(iVar2)) == 12)
							{
								if (func_2991(iParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar2 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_2991(int iParam0)//Position - 0xFC193
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3011(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_2998(var uParam0, int iParam1, bool bParam2)//Position - 0xFC5EC
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (!__LIB_2__::func_739())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1))
		{
			if (!func_669(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_3011(int iParam0)//Position - 0xFCB85
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = __LIB_8__::func_321();
	iVar2 = __LIB_7__::func_296(iVar1, 1, 0);
	bVar3 = false;
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_60()) || __LIB_3__::func_59(PLAYER::PLAYER_ID()))
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_655(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_3__::func_60()) || __LIB_3__::func_59(PLAYER::PLAYER_ID()))
		{
			bVar3 = true;
		}
	}
	if (__LIB_26__::func_626(bVar0, 12))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 12))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1, false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if ((!ENTITY::IS_ENTITY_VISIBLE(iVar1) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) > 0.5f && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
		{
			__LIB_7__::func_433(0, iParam0, 0);
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if (((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !__LIB_1__::func_229(iVar2)) && (__LIB_0__::func_121(iVar1) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true)))
	{
		if (!__LIB_1__::func_229(iVar2) && !__LIB_3__::func_903(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
		}
		return 1;
	}
	if (__LIB_3__::func_87(iVar2) || __LIB_3__::func_86(iVar2))
	{
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || ENTITY::IS_ENTITY_UPSIDEDOWN(iVar1))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
			return 1;
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
			return 1;
		}
	}
	__LIB_8__::func_467(iParam0, &Var4);
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == iVar2)
		{
			return 1;
		}
	}
	if (__LIB_3__::func_85(iVar2))
	{
		return 1;
	}
	if (__LIB_7__::func_513(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_7__::func_512(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_7__::func_511(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_3__::func_80(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_3__::func_79(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_3__::func_78(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_7__::func_510(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_3__::func_906(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_232()))
		{
			if (__LIB_0__::func_529(__LIB_1__::func_232(), Var4, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_6__::func_136())
	{
		return 1;
	}
	if (__LIB_3__::func_76(iVar2))
	{
		return 1;
	}
	if (__LIB_1__::func_229(iVar2) || __LIB_3__::func_68(iVar2))
	{
		if (!__LIB_3__::func_859(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		else if (__LIB_12__::func_196())
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_160() && iVar2 != PLAYER::PLAYER_ID())
	{
		if (__LIB_3__::func_63(iVar2))
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_160())
	{
		if (__LIB_3__::func_67(iVar2))
		{
			return 1;
		}
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 23))
		{
			return 1;
		}
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (Global_2815059.f_317 && !__LIB_3__::func_903(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_2__::func_746())
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !__LIB_1__::func_229(iVar2)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8.1f, 0f) };
		if (MISC::ABSF((Var5.f_2 - Var4.f_2)) > 4f)
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
			return 1;
		}
	}
	if (__LIB_3__::func_75(Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_4__::func_980())
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_1__::func_400(iVar2))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_8__::func_466(Var4))
	{
		if (!__LIB_1__::func_229(iVar2) && !__LIB_3__::func_903(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
		}
		return 1;
	}
	if (__LIB_1__::func_156())
	{
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 12)
		{
		}
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_2, 13))
	{
		return 1;
	}
	if (__LIB_2__::func_744())
	{
		return 1;
	}
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	if (Global_2815059.f_317 && !__LIB_3__::func_903(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_64(iVar2))
	{
		return 1;
	}
	if (Global_1835491)
	{
		return 1;
	}
	if (__LIB_2__::func_743(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_1("MBSOT_POST3" /* GXT: Press ~INPUT_CONTEXT~ to place the poster. */))
	{
		return 1;
	}
	if (Global_2789734)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_2, 30))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			HUD::CLEAR_HELP(true);
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 30);
	}
	return 0;
}

void func_3052(var uParam0, int iParam1)//Position - 0xFE556
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1104823/*func_3282*/;
			break;
		case 1:
			uParam0->f_30 = 1104583/*func_3280*/;
			break;
		case 2:
			uParam0->f_31 = 1102282/*func_3274*/;
			break;
		case 3:
			uParam0->f_34 = 1102073/*func_3273*/;
			break;
		case 4:
			uParam0->f_12 = 1101867/*func_3271*/;
			break;
		case 5:
			uParam0->f_11 = 1101789/*func_3270*/;
			break;
		case 37:
			uParam0->f_18 = 1101650/*func_3269*/;
			break;
		case 38:
			uParam0->f_9 = 1101594/*func_3268*/;
			break;
		case 42:
			uParam0->f_10 = 1101433/*func_3265*/;
			break;
		case 6:
			uParam0->f_32 = 1101197/*func_3264*/;
			break;
		case 111:
			uParam0->f_35 = 1101183/*func_3263*/;
			break;
		case 11:
			uParam0->f_11 = 1101174/*func_3262*/;
			break;
		case 12:
			uParam0->f_33 = 1097804/*func_3253*/;
			break;
		case 14:
			uParam0->f_11 = 1097795/*func_3252*/;
			break;
		case 109:
			uParam0->f_56 = 1084106/*func_3251*/;
			break;
		case 79:
			*uParam0 = 1083850/*func_3247*/;
			break;
		case 13:
			uParam0->f_2 = 1083801/*func_3246*/;
			break;
		case 15:
			uParam0->f_2 = 1083590/*func_3243*/;
			break;
		case 44:
			*uParam0 = 1083581/*func_3242*/;
			break;
		case 75:
			uParam0->f_4 = 1083552/*func_3241*/;
			break;
		case 16:
			uParam0->f_5 = 1082825/*func_3238*/;
			break;
		case 108:
			uParam0->f_55 = 1078970/*func_3225*/;
			break;
		case 17:
			uParam0->f_17 = 1077657/*func_3221*/;
			break;
		case 19:
			uParam0->f_17 = 1077612/*func_3220*/;
			break;
		case 20:
			uParam0->f_3 = 1077447/*func_3219*/;
			break;
		case 21:
			uParam0->f_3 = 1077383/*func_3218*/;
			break;
		case 74:
			uParam0->f_53 = 1077156/*func_3217*/;
			break;
		case 22:
			uParam0->f_24 = 1077033/*func_3216*/;
			break;
		case 26:
			uParam0->f_38 = 1073655/*func_3190*/;
			break;
		case 25:
			uParam0->f_23 = 1073334/*func_3188*/;
			break;
		case 27:
			uParam0->f_25 = 1072186/*func_3179*/;
			break;
		case 28:
			uParam0->f_24 = 1072074/*func_3178*/;
			break;
		case 29:
			uParam0->f_28 = 1071993/*func_3177*/;
			break;
		case 30:
			uParam0->f_8 = 1071103/*func_3175*/;
			break;
		case 31:
			uParam0->f_39 = 1070556/*func_3173*/;
			break;
		case 33:
			uParam0->f_40 = 1069874/*func_3171*/;
			break;
		case 32:
			*uParam0 = 1069781/*func_3169*/;
			break;
		case 34:
			uParam0->f_41 = 1060514/*func_3154*/;
			break;
		case 36:
			uParam0->f_58 = 1060456/*func_3153*/;
			break;
		case 35:
			uParam0->f_42 = 956670/*func_2948*/;
			break;
		case 45:
			uParam0->f_14 = 1060447/*func_3152*/;
			break;
		case 46:
			uParam0->f_14 = 1060438/*func_3151*/;
			break;
		case 110:
			uParam0->f_57 = 1060430/*func_3150*/;
			break;
		case 77:
			uParam0->f_13 = 1060381/*func_3149*/;
			break;
		case 47:
			uParam0->f_43 = 1060089/*func_3148*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1057064/*func_3124*/;
			break;
		case 49:
			uParam0->f_8 = 1056960/*func_3123*/;
			break;
		case 50:
			*uParam0 = 1056677/*func_3122*/;
			break;
		case 51:
			*uParam0 = 1056515/*func_3121*/;
			break;
		case 52:
			uParam0->f_15 = 1056504/*func_3120*/;
			break;
		case 53:
			uParam0->f_13 = 1056246/*func_3119*/;
			break;
		case 54:
			uParam0->f_45 = 1055984/*func_3118*/;
			break;
		case 56:
			uParam0->f_46 = 1055975/*func_3117*/;
			break;
		case 57:
			uParam0->f_11 = 1054818/*func_3110*/;
			break;
		case 58:
			uParam0->f_13 = 1054560/*func_3109*/;
			break;
		case 59:
			*uParam0 = 1054281/*func_3106*/;
			break;
		case 60:
			*uParam0 = 1054272/*func_3105*/;
			break;
		case 61:
			uParam0->f_15 = 1054261/*func_3104*/;
			break;
		case 62:
			uParam0->f_13 = 1054003/*func_3103*/;
			break;
		case 55:
			uParam0->f_45 = 1053995/*func_3102*/;
			break;
		case 63:
			uParam0->f_11 = 1053937/*func_3101*/;
			break;
		case 64:
			uParam0->f_47 = 1053787/*func_3100*/;
			break;
		case 65:
			uParam0->f_21 = 1052081/*func_3093*/;
			break;
		case 66:
			uParam0->f_21 = 1051770/*func_3092*/;
			break;
		case 67:
			uParam0->f_21 = 1051618/*func_3091*/;
			break;
		case 68:
			*uParam0 = 1050618/*func_3088*/;
			break;
		case 69:
			*uParam0 = 1050609/*func_3087*/;
			break;
		case 70:
			uParam0->f_48 = 1050160/*func_3086*/;
			break;
		case 71:
			uParam0->f_49 = 1049881/*func_3085*/;
			break;
		case 107:
			uParam0->f_50 = 1049869/*func_3084*/;
			break;
		case 80:
			uParam0->f_7 = 1049636/*func_3083*/;
			break;
		case 84:
			uParam0->f_1 = 1049627/*func_3082*/;
			break;
		case 85:
			uParam0->f_1 = 1047532/*func_3073*/;
			break;
		case 87:
			uParam0->f_1 = 1044637/*func_3064*/;
			break;
		case 88:
			uParam0->f_1 = 1044628/*func_3063*/;
			break;
		case 89:
			uParam0->f_54 = 1044620/*func_3062*/;
			break;
		case 96:
			uParam0->f_1 = 1044594/*func_3061*/;
			break;
		case 97:
			uParam0->f_1 = 1044485/*func_3060*/;
			break;
		case 98:
			uParam0->f_1 = 1043774/*func_3059*/;
			break;
		case 100:
			uParam0->f_22 = 1043612/*func_3058*/;
			break;
		case 101:
			uParam0->f_22 = 1043485/*func_3057*/;
			break;
		case 78:
			uParam0->f_59 = 1043195/*func_3054*/;
			break;
		case 125:
			uParam0->f_19 = 1043171/*func_3053*/;
			break;
	}
}

int func_3059(var uParam0, var uParam1)//Position - 0xFED3E
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
		func_1433(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_2__::func_681(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_3073(int iParam0, var uParam1)//Position - 0xFFBEC
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
	iVar0 = __LIB_3__::func_103(iParam0);
	if (__LIB_18__::func_486(iVar0))
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
			func_377(&iVar1, &(uParam1->f_109), 60);
			__LIB_2__::func_416(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_289(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_3__::func_110(iVar0) };
		Var3 = { __LIB_3__::func_109(iVar0) };
		fVar4 = __LIB_3__::func_108(iVar0);
		fVar5 = __LIB_3__::func_107(iVar0);
		bVar6 = false;
		Var7 = { __LIB_3__::func_106(iVar0) };
		Var8 = { __LIB_3__::func_105(iVar0) };
		fVar9 = __LIB_3__::func_104(iVar0);
		return __LIB_25__::func_164(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3188(int iParam0, int iParam1)//Position - 0x1060B6
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_82(iParam0) };
	if (__LIB_12__::func_217(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_587(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_3__::func_805(iParam1, 1, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_3__::func_805(iParam1, 2, 1);
		}
		else
		{
			__LIB_3__::func_805(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_2__::func_560())
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		if (__LIB_2__::func_444(0, iParam1))
		{
			__LIB_25__::func_396(iParam0, -1);
		}
		else if (__LIB_2__::func_444(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
		else if (__LIB_2__::func_444(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_25__::func_430(iParam0);
		}
	}
	else
	{
		__LIB_3__::func_805(iParam1, 1, 0);
		__LIB_3__::func_805(iParam1, 2, 0);
	}
}

void func_3190(var uParam0, var uParam1)//Position - 0x1061F7
{
	if (__LIB_2__::func_399() == 2)
	{
		func_3204(uParam0, uParam1);
	}
	else if (__LIB_2__::func_399() == 0)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			func_3192(uParam0, uParam1);
		}
	}
	else if (__LIB_2__::func_399() == 3)
	{
		if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_25__::func_432(uParam0, uParam1);
		}
		else
		{
			__LIB_3__::func_157(uParam1);
		}
	}
}

void func_3192(var uParam0, var uParam1)//Position - 0x106282
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_32__::func_860(uParam0, uParam1);
			break;
		case 1:
			func_3193(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3193(var uParam0, var uParam1)//Position - 0x1062BC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_7__::func_514(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_7__::func_396();
		if (!__LIB_3__::func_156())
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
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_7__::func_396();
		}
	}
}

void func_3204(var uParam0, var uParam1)//Position - 0x1067D6
{
	int iVar0;
	iVar0 = __LIB_2__::func_566();
	switch (iVar0)
	{
		case 0:
			__LIB_25__::func_574(uParam0, uParam1);
			break;
		case 1:
			func_3213(uParam0, uParam1);
			break;
		case 2:
			__LIB_35__::func_822(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3213(var uParam0, var uParam1)//Position - 0x106C83
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_587(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_7__::func_396();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_7__::func_396();
		if (__LIB_19__::func_53(*uParam0))
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
			if (__LIB_2__::func_399() == 2)
			{
				__LIB_1__::func_319("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_319("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_25__::func_396(*uParam0, -1);
			__LIB_7__::func_396();
		}
	}
}

int func_3225(var uParam0, var uParam1, var uParam2)//Position - 0x1076BA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_3__::func_103(*uParam0);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 15))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == iVar5) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if (__LIB_0__::func_655(iVar2, 1) && __LIB_7__::func_296(iVar2, 1, 0) != iVar5)
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_195(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(iVar5, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 15)) && __LIB_3__::func_118(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_4__::func_973(0))
					{
						if (__LIB_18__::func_487(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (func_3233(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 11))
								{
									if (__LIB_4__::func_725() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 11))
									{
										if ((__LIB_18__::func_487(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_97(uParam1, 0);
											__LIB_26__::func_664(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 11)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_26__::func_664(iVar2);
											return 1;
										}
										else if (((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && __LIB_7__::func_523(uParam0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_97(uParam1, 0);
											__LIB_26__::func_664(iVar2);
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
					func_3226(*uParam0);
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_2__::func_425();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_97(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_97(uParam1, 1);
	return 0;
}

void func_3226(var uParam0)//Position - 0x107BBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (iVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(iVar2, 1, 1))
						{
							if ((BitTest(Global_2689235[iVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(iVar2)) == 11) && (__LIB_0__::func_582() == iVar2 || __LIB_0__::func_582() == __LIB_0__::func_160()))
							{
								if (func_3227(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[iVar2 /*453*/].f_318.f_3, 2))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_3227(var uParam0)//Position - 0x107D3A
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3243(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_3233(var uParam0, int iParam1, bool bParam2)//Position - 0x108285
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_655(iParam1, 1))
		{
			if (!func_669(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_3243(var uParam0)//Position - 0x1088C6
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_26__::func_626(1, 11))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 11))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_3283(var uParam0, int iParam1)//Position - 0x10DBC0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1112346/*func_3360*/;
			break;
		case 1:
			uParam0->f_30 = 1112290/*func_3359*/;
			break;
		case 2:
			uParam0->f_31 = 1112021/*func_3358*/;
			break;
		case 3:
			uParam0->f_34 = 1111960/*func_3357*/;
			break;
		case 4:
			uParam0->f_12 = 1111929/*func_3356*/;
			break;
		case 6:
			uParam0->f_32 = 1111865/*func_3355*/;
			break;
		case 111:
			uParam0->f_35 = 1111856/*func_3354*/;
			break;
		case 11:
			uParam0->f_11 = 1111847/*func_3353*/;
			break;
		case 14:
			uParam0->f_11 = 1111838/*func_3352*/;
			break;
		case 12:
			uParam0->f_33 = 1111627/*func_3350*/;
			break;
		case 109:
			uParam0->f_56 = 1111619/*func_3349*/;
			break;
		case 79:
			*uParam0 = 1111595/*func_3348*/;
			break;
		case 13:
			uParam0->f_2 = 1111586/*func_3347*/;
			break;
		case 15:
			uParam0->f_2 = 1110644/*func_3340*/;
			break;
		case 75:
			uParam0->f_4 = 1110635/*func_3339*/;
			break;
		case 16:
			uParam0->f_5 = 1110610/*func_3338*/;
			break;
		case 108:
			uParam0->f_55 = 1110601/*func_3337*/;
			break;
		case 17:
			uParam0->f_17 = 1110576/*func_3336*/;
			break;
		case 19:
			uParam0->f_17 = 1110565/*func_3335*/;
			break;
		case 20:
			uParam0->f_3 = 1110556/*func_3334*/;
			break;
		case 21:
			uParam0->f_3 = 1110547/*func_3333*/;
			break;
		case 74:
			uParam0->f_53 = 1110079/*func_3330*/;
			break;
		case 22:
			uParam0->f_24 = 1109960/*func_3329*/;
			break;
		case 25:
			uParam0->f_23 = 1109190/*func_3325*/;
			break;
		case 30:
			uParam0->f_8 = 1109044/*func_3323*/;
			break;
		case 31:
			uParam0->f_39 = 1109033/*func_3322*/;
			break;
		case 33:
			uParam0->f_40 = 1108826/*func_3320*/;
			break;
		case 34:
			uParam0->f_41 = 1108509/*func_3318*/;
			break;
		case 36:
			uParam0->f_58 = 1108456/*func_3317*/;
			break;
		case 35:
			uParam0->f_42 = 1107683/*func_3314*/;
			break;
		case 45:
			uParam0->f_14 = 1107674/*func_3313*/;
			break;
		case 46:
			uParam0->f_14 = 1107665/*func_3312*/;
			break;
		case 110:
			uParam0->f_57 = 1107657/*func_3311*/;
			break;
		case 77:
			uParam0->f_13 = 1107646/*func_3310*/;
			break;
		case 47:
			uParam0->f_43 = 1107407/*func_3308*/;
			break;
		case 49:
			uParam0->f_8 = 1107398/*func_3307*/;
			break;
		case 50:
			*uParam0 = 1107389/*func_3306*/;
			break;
		case 51:
			*uParam0 = 1107380/*func_3305*/;
			break;
		case 52:
			uParam0->f_15 = 1107369/*func_3304*/;
			break;
		case 53:
			uParam0->f_13 = 1107358/*func_3303*/;
			break;
		case 54:
			uParam0->f_45 = 1107350/*func_3302*/;
			break;
		case 56:
			uParam0->f_46 = 1107341/*func_3301*/;
			break;
		case 57:
			uParam0->f_11 = 1107332/*func_3300*/;
			break;
		case 58:
			uParam0->f_13 = 1107039/*func_3298*/;
			break;
		case 64:
			uParam0->f_47 = 1106495/*func_3295*/;
			break;
		case 65:
			uParam0->f_21 = 1106487/*func_3294*/;
			break;
		case 66:
			uParam0->f_21 = 1106419/*func_3293*/;
			break;
		case 67:
			uParam0->f_21 = 1106279/*func_3291*/;
			break;
		case 68:
			*uParam0 = 1105835/*func_3290*/;
			break;
		case 69:
			*uParam0 = 1105826/*func_3289*/;
			break;
		case 70:
			uParam0->f_48 = 1105814/*func_3288*/;
			break;
		case 71:
			uParam0->f_49 = 1105805/*func_3287*/;
			break;
		case 107:
			uParam0->f_50 = 1105793/*func_3286*/;
			break;
		case 80:
			uParam0->f_7 = 1105784/*func_3285*/;
			break;
		case 78:
			uParam0->f_59 = 1105776/*func_3284*/;
			break;
	}
}

void func_3325(int iParam0, int iParam1)//Position - 0x10ECC6
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
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_19__::func_148(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_425(iVar7, 1) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_7__::func_291(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_20__::func_851(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_20__::func_851(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3326(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3326(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3326(int iParam0)//Position - 0x10EEF0
{
	__LIB_20__::func_851(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3361(var uParam0, int iParam1)//Position - 0x10F923
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1211190/*func_3604*/;
			break;
		case 1:
			uParam0->f_30 = 1211086/*func_3603*/;
			break;
		case 2:
			uParam0->f_31 = 1210351/*func_3601*/;
			break;
		case 3:
			uParam0->f_34 = 1210269/*func_3600*/;
			break;
		case 4:
			uParam0->f_12 = 1210126/*func_3599*/;
			break;
		case 5:
			uParam0->f_11 = 1210116/*func_3598*/;
			break;
		case 37:
			uParam0->f_18 = 1209981/*func_3597*/;
			break;
		case 42:
			uParam0->f_10 = 1209914/*func_3596*/;
			break;
		case 6:
			uParam0->f_32 = 1209802/*func_3595*/;
			break;
		case 111:
			uParam0->f_35 = 1209563/*func_3591*/;
			break;
		case 11:
			uParam0->f_11 = 1209554/*func_3590*/;
			break;
		case 12:
			uParam0->f_33 = 1209054/*func_3587*/;
			break;
		case 14:
			uParam0->f_11 = 1209045/*func_3586*/;
			break;
		case 109:
			uParam0->f_56 = 1209037/*func_3585*/;
			break;
		case 79:
			*uParam0 = 1209013/*func_3584*/;
			break;
		case 38:
			uParam0->f_9 = 1208933/*func_3583*/;
			break;
		case 13:
			uParam0->f_2 = 1208837/*func_3582*/;
			break;
		case 15:
			uParam0->f_2 = 1208632/*func_3581*/;
			break;
		case 75:
			uParam0->f_4 = 1208616/*func_3580*/;
			break;
		case 16:
			uParam0->f_5 = 1207807/*func_3577*/;
			break;
		case 108:
			uParam0->f_55 = 1203102/*func_3559*/;
			break;
		case 17:
			uParam0->f_17 = 1202285/*func_3558*/;
			break;
		case 19:
			uParam0->f_17 = 1202259/*func_3557*/;
			break;
		case 20:
			uParam0->f_3 = 1202175/*func_3556*/;
			break;
		case 21:
			uParam0->f_3 = 1202111/*func_3555*/;
			break;
		case 74:
			uParam0->f_53 = 1201959/*func_3554*/;
			break;
		case 22:
			uParam0->f_24 = 1201792/*func_3553*/;
			break;
		case 25:
			uParam0->f_23 = 1200742/*func_3548*/;
			break;
		case 30:
			uParam0->f_8 = 1200124/*func_3546*/;
			break;
		case 31:
			uParam0->f_39 = 1199813/*func_3545*/;
			break;
		case 33:
			uParam0->f_40 = 1198874/*func_3543*/;
			break;
		case 34:
			uParam0->f_41 = 1197514/*func_3542*/;
			break;
		case 36:
			uParam0->f_58 = 1197456/*func_3541*/;
			break;
		case 35:
			uParam0->f_42 = 1149755/*func_3538*/;
			break;
		case 45:
			uParam0->f_14 = 1149746/*func_3537*/;
			break;
		case 46:
			uParam0->f_14 = 1149737/*func_3536*/;
			break;
		case 110:
			uParam0->f_57 = 1149729/*func_3535*/;
			break;
		case 77:
			uParam0->f_13 = 1149706/*func_3534*/;
			break;
		case 47:
			uParam0->f_43 = 1149578/*func_3533*/;
			break;
		case 49:
			uParam0->f_8 = 1149537/*func_3532*/;
			break;
		case 50:
			*uParam0 = 1149269/*func_3529*/;
			break;
		case 51:
			*uParam0 = 1149200/*func_3528*/;
			break;
		case 52:
			uParam0->f_15 = 1149189/*func_3527*/;
			break;
		case 53:
			uParam0->f_13 = 1148955/*func_3526*/;
			break;
		case 54:
			uParam0->f_45 = 1148605/*func_3523*/;
			break;
		case 56:
			uParam0->f_46 = 1148596/*func_3522*/;
			break;
		case 57:
			uParam0->f_11 = 1148525/*func_3521*/;
			break;
		case 58:
			uParam0->f_13 = 1148291/*func_3520*/;
			break;
		case 64:
			uParam0->f_47 = 1148091/*func_3518*/;
			break;
		case 65:
			uParam0->f_21 = 1147193/*func_3516*/;
			break;
		case 66:
			uParam0->f_21 = 1146465/*func_3507*/;
			break;
		case 67:
			uParam0->f_21 = 1144203/*func_3488*/;
			break;
		case 68:
			*uParam0 = 1143570/*func_3484*/;
			break;
		case 69:
			*uParam0 = 1143561/*func_3483*/;
			break;
		case 70:
			uParam0->f_48 = 1143549/*func_3482*/;
			break;
		case 71:
			uParam0->f_49 = 1143540/*func_3481*/;
			break;
		case 107:
			uParam0->f_50 = 1143528/*func_3480*/;
			break;
		case 80:
			uParam0->f_7 = 1142835/*func_3474*/;
			break;
		case 84:
			uParam0->f_1 = 1142295/*func_3472*/;
			break;
		case 85:
			uParam0->f_1 = 1138193/*func_3464*/;
			break;
		case 87:
			uParam0->f_1 = 1134206/*func_3452*/;
			break;
		case 88:
			uParam0->f_1 = 1133692/*func_3448*/;
			break;
		case 89:
			uParam0->f_54 = 1133521/*func_3447*/;
			break;
		case 90:
			uParam0->f_1 = 1133315/*func_3442*/;
			break;
		case 91:
			uParam0->f_1 = 1133119/*func_3440*/;
			break;
		case 92:
			uParam0->f_1 = 1131667/*func_3436*/;
			break;
		case 94:
			uParam0->f_1 = 1127529/*func_3425*/;
			break;
		case 95:
			uParam0->f_22 = 1127233/*func_3422*/;
			break;
		case 96:
			uParam0->f_1 = 1127203/*func_3421*/;
			break;
		case 97:
			uParam0->f_1 = 1126536/*func_3418*/;
			break;
		case 98:
			uParam0->f_1 = 1123887/*func_3399*/;
			break;
		case 100:
			uParam0->f_22 = 1115826/*func_3375*/;
			break;
		case 101:
			uParam0->f_22 = 1113883/*func_3365*/;
			break;
		case 78:
			uParam0->f_59 = 1113663/*func_3363*/;
			break;
		case 125:
			uParam0->f_19 = 1113639/*func_3362*/;
			break;
	}
}

int func_3399(int iParam0, int* iParam1)//Position - 0x11262F
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
	if ((__LIB_0__::func_175() || __LIB_2__::func_500()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_4__::func_715() || __LIB_2__::func_835())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_2__::func_47(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
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
			if ((__LIB_1__::func_264(bVar2, 1, 1) && !__LIB_8__::func_303(bVar2)) && !Global_2824892)
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
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_3__::func_198(0), false);
				Var4 = { __LIB_3__::func_207() };
				__LIB_7__::func_660(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_160())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1433(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
					if (__LIB_1__::func_264(bVar2, 0, 1) && !__LIB_8__::func_303(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1433(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
			__LIB_3__::func_223();
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
		if (__LIB_1__::func_206() || BitTest(Global_1574942, 4))
		{
			if (__LIB_4__::func_715() || __LIB_2__::func_835())
			{
			}
			else
			{
				__LIB_36__::func_125(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_7__::func_659(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_25__::func_125(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_18__::func_635(&(iParam1->f_176[3]), Var5, Var5.f_3);
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
			func_1433(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
			Var7 = { __LIB_3__::func_207() };
			__LIB_7__::func_660(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_6__::func_925())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_2__::func_681(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_3__::func_209(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_7__::func_449(iParam1, 0);
	__LIB_0__::func_495(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_3436(int iParam0, int* iParam1)//Position - 0x114493
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_3__::func_208() };
		__LIB_7__::func_660(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
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
				__LIB_42__::func_110(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_377(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3438(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
					if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_3__::func_977(bVar5) == iParam0) && __LIB_3__::func_998(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1433(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_7__::func_536(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_25__::func_126(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_3__::func_198(0));
	return 1;
}

int func_3438(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1147A5
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
		if ((*uParam3)[iVar1] != __LIB_0__::func_160() && __LIB_1__::func_264((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					__LIB_36__::func_115(uParam2[iVar1], iVar3, 1, 0);
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

int func_3464(int iParam0, int* iParam1)//Position - 0x115E11
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
			func_377(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_3__::func_234(ENTITY::GET_ENTITY_MODEL(iVar0)))
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
		else if (func_289(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_3__::func_246(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1433(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_7__::func_659(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_25__::func_125(iParam0, 3) };
	__LIB_7__::func_660(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_7__::func_542(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_25__::func_125(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_7__::func_660(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_25__::func_125(iParam0, 0) };
	__LIB_18__::func_635(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_25__::func_166(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_25__::func_127(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

int func_3472(int iParam0, var uParam1)//Position - 0x116E17
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_7__::func_538(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_240(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_240(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_222());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_222()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_3__::func_221());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_221()))
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
				__LIB_0__::func_584(__LIB_3__::func_226());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_3__::func_226()))
				{
					bVar0 = false;
				}
				else if (!__LIB_42__::func_110(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_377(&iVar1, &(uParam1->f_122), 24);
					__LIB_3__::func_237(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_3__::func_247(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_6__::func_925())
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

void func_3523(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x1186BD
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_7__::func_926(iParam0))
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
	if (__LIB_0__::func_170(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_3__::func_77(iParam0) };
					iVar1 = __LIB_2__::func_855(iParam0);
					*iParam2 = __LIB_0__::func_392(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2172(iParam2, 166);
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

void func_3548(int iParam0, int iParam1)//Position - 0x125266
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
	if (__LIB_12__::func_222(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_77(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_588(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(uVar0[iVar6])) && !__LIB_8__::func_303(bVar7)) && !__LIB_8__::func_108(bVar7, 1)) && !__LIB_7__::func_878(bVar7)) && !func_588(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_398(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3549(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3549(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3549(int iParam0)//Position - 0x1254F6
{
	__LIB_25__::func_398(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_3559(var uParam0, var uParam1, var uParam2)//Position - 0x125B9E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	*uParam2 = 0;
	if (__LIB_3__::func_286())
	{
		return 0;
	}
	if (__LIB_3__::func_285())
	{
		return 0;
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_0__::func_631(*uParam0);
			if (__LIB_1__::func_178(iVar2))
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 13))
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != bVar5) && !Global_1852994.f_171)
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) == bVar5) && __LIB_7__::func_94()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && !__LIB_2__::func_427(PLAYER::PLAYER_ID()))
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if (__LIB_2__::func_475())
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if (__LIB_1__::func_580(iVar2, 1) && __LIB_4__::func_925(iVar2, 1, 0) != bVar5)
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if (__LIB_0__::func_656(iVar2, 1))
			{
				__LIB_25__::func_308(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_264(bVar5, 1, 1) && __LIB_7__::func_283(ENTITY::GET_ENTITY_MODEL(iVar2), 13)) && __LIB_3__::func_274(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_4__::func_973(0))
					{
						if (__LIB_3__::func_927(uParam0) || __LIB_3__::func_232())
						{
							if (func_3571(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 9))
								{
									if ((__LIB_4__::func_28() || (__LIB_2__::func_427(PLAYER::PLAYER_ID()) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 9)) || (__LIB_4__::func_28() && __LIB_3__::func_232()))
									{
										if ((__LIB_18__::func_488(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && __LIB_2__::func_483(PLAYER::PLAYER_PED_ID()))
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_7__::func_375(1, *uParam0);
											__LIB_25__::func_198(uParam1, 0);
											__LIB_18__::func_758(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(__LIB_4__::func_2(PLAYER::PLAYER_ID())) == 9)
										{
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_18__::func_758(iVar2);
											return 1;
										}
										else
										{
											if ((__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_3__::func_232()) && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
											{
												bVar0 = true;
												if (uParam1->f_22.f_94 == -1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, "BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, 0, 0, 0, 0);
													AUDIO::HINT_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", 0, -1);
												}
											}
											if (__LIB_2__::func_187(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
											{
												MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 30);
												__LIB_6__::func_404(&(uParam1->f_22.f_94));
												__LIB_25__::func_198(uParam1, 0);
												__LIB_7__::func_375(1, *uParam0);
												__LIB_18__::func_758(iVar2);
												return 1;
											}
											if (__LIB_3__::func_232())
											{
												__LIB_6__::func_404(&(uParam1->f_22.f_94));
												__LIB_7__::func_375(1, *uParam0);
												__LIB_25__::func_198(uParam1, 0);
												return 1;
											}
											if (((__LIB_2__::func_483(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1)) && __LIB_7__::func_548(uParam0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												if (!Global_1963928)
												{
													__LIB_7__::func_375(1, *uParam0);
													__LIB_25__::func_198(uParam1, 0);
													__LIB_18__::func_758(iVar2);
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
						else if ((Global_1963928 && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_3__::func_998(PLAYER::PLAYER_ID()))
						{
							Global_1963928 = 0;
						}
					}
				}
				else
				{
					func_3560(*uParam0);
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_198(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_198(uParam1, 1);
	return 0;
}

void func_3560(var uParam0)//Position - 0x1261AB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
						{
							if ((BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 9) || __LIB_3__::func_283(bVar2))
							{
								if (func_3561(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_1, 31))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_481();
									__LIB_2__::func_424(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		__LIB_2__::func_425();
		__LIB_2__::func_424(0);
	}
}

int func_3561(var uParam0)//Position - 0x126306
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3581(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_3571(var uParam0, int iParam1, bool bParam2)//Position - 0x126C28
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
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_0__::func_190())
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && !__LIB_1__::func_580(iParam1, 1))
		{
			if (!func_669(iParam1, 117, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_3581(var uParam0)//Position - 0x127138
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	bVar0 = false;
	if (__LIB_26__::func_626(bVar0, 9) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 9))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_178(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (Global_262145.f_21914 /* Tunable: -481896422 */)
		{
			return 1;
		}
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_302(23))
	{
		return 1;
	}
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_3605(var uParam0, int iParam1)//Position - 0x127B3F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1239284/*func_3774*/;
			break;
		case 1:
			uParam0->f_30 = 1239228/*func_3773*/;
			break;
		case 2:
			uParam0->f_31 = 1238959/*func_3772*/;
			break;
		case 3:
			uParam0->f_34 = 1238900/*func_3771*/;
			break;
		case 4:
			uParam0->f_12 = 1238869/*func_3770*/;
			break;
		case 37:
			uParam0->f_18 = 1238751/*func_3769*/;
			break;
		case 38:
			uParam0->f_9 = 1238667/*func_3768*/;
			break;
		case 6:
			uParam0->f_32 = 1238603/*func_3767*/;
			break;
		case 111:
			uParam0->f_35 = 1238580/*func_3766*/;
			break;
		case 11:
			uParam0->f_11 = 1238571/*func_3765*/;
			break;
		case 12:
			uParam0->f_33 = 1238118/*func_3762*/;
			break;
		case 14:
			uParam0->f_11 = 1238109/*func_3761*/;
			break;
		case 109:
			uParam0->f_56 = 1238101/*func_3760*/;
			break;
		case 79:
			*uParam0 = 1238077/*func_3759*/;
			break;
		case 13:
			uParam0->f_2 = 1238068/*func_3758*/;
			break;
		case 15:
			uParam0->f_2 = 1232998/*func_3732*/;
			break;
		case 75:
			uParam0->f_4 = 1232989/*func_3731*/;
			break;
		case 16:
			uParam0->f_5 = 1232805/*func_3730*/;
			break;
		case 108:
			uParam0->f_55 = 1229706/*func_3716*/;
			break;
		case 17:
			uParam0->f_17 = 1229200/*func_3714*/;
			break;
		case 19:
			uParam0->f_17 = 1229174/*func_3713*/;
			break;
		case 20:
			uParam0->f_3 = 1229096/*func_3712*/;
			break;
		case 21:
			uParam0->f_3 = 1229033/*func_3711*/;
			break;
		case 74:
			uParam0->f_53 = 1228818/*func_3709*/;
			break;
		case 22:
			uParam0->f_24 = 1228698/*func_3708*/;
			break;
		case 25:
			uParam0->f_23 = 1227751/*func_3703*/;
			break;
		case 30:
			uParam0->f_8 = 1227187/*func_3701*/;
			break;
		case 31:
			uParam0->f_39 = 1227009/*func_3698*/;
			break;
		case 33:
			uParam0->f_40 = 1225897/*func_3693*/;
			break;
		case 34:
			uParam0->f_41 = 1225203/*func_3691*/;
			break;
		case 36:
			uParam0->f_58 = 1225150/*func_3690*/;
			break;
		case 35:
			uParam0->f_42 = 1224573/*func_3688*/;
			break;
		case 45:
			uParam0->f_14 = 1224564/*func_3687*/;
			break;
		case 46:
			uParam0->f_14 = 1224555/*func_3686*/;
			break;
		case 110:
			uParam0->f_57 = 1224378/*func_3685*/;
			break;
		case 77:
			uParam0->f_13 = 1224367/*func_3684*/;
			break;
		case 47:
			uParam0->f_43 = 1223869/*func_3681*/;
			break;
		case 49:
			uParam0->f_8 = 1223828/*func_3680*/;
			break;
		case 50:
			*uParam0 = 1223819/*func_3679*/;
			break;
		case 51:
			*uParam0 = 1223810/*func_3678*/;
			break;
		case 52:
			uParam0->f_15 = 1223799/*func_3677*/;
			break;
		case 53:
			uParam0->f_13 = 1223788/*func_3676*/;
			break;
		case 54:
			uParam0->f_45 = 1223780/*func_3675*/;
			break;
		case 56:
			uParam0->f_46 = 1223771/*func_3674*/;
			break;
		case 57:
			uParam0->f_11 = 1223762/*func_3673*/;
			break;
		case 58:
			uParam0->f_13 = 1223533/*func_3672*/;
			break;
		case 64:
			uParam0->f_47 = 1217614/*func_3641*/;
			break;
		case 65:
			uParam0->f_21 = 1216030/*func_3633*/;
			break;
		case 66:
			uParam0->f_21 = 1215704/*func_3630*/;
			break;
		case 67:
			uParam0->f_21 = 1214979/*func_3626*/;
			break;
		case 68:
			*uParam0 = 1214434/*func_3625*/;
			break;
		case 69:
			*uParam0 = 1214425/*func_3624*/;
			break;
		case 70:
			uParam0->f_48 = 1214413/*func_3623*/;
			break;
		case 71:
			uParam0->f_49 = 1214404/*func_3622*/;
			break;
		case 107:
			uParam0->f_50 = 1214392/*func_3621*/;
			break;
		case 80:
			uParam0->f_7 = 1212661/*func_3610*/;
			break;
		case 78:
			uParam0->f_59 = 1212210/*func_3607*/;
			break;
		case 125:
			uParam0->f_19 = 1212194/*func_3606*/;
			break;
	}
}

void func_3641(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x12944E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = func_3669();
	if ((func_3732(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
	{
		__LIB_25__::func_199(uParam0, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_7__::func_556(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_25__::func_490(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_3732(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			__LIB_25__::func_199(uParam0, 1);
			__LIB_3__::func_307(0);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_3__::func_326(PLAYER::PLAYER_ID()) || __LIB_3__::func_325(PLAYER::PLAYER_ID())) && func_3659(iParam1))
	{
		if (!__LIB_4__::func_658())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_3__::func_324(0);
			__LIB_3__::func_323(0);
			__LIB_3__::func_309(0);
			__LIB_3__::func_322(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_2__::func_560())
			{
				__LIB_3__::func_321(1);
			}
			__LIB_3__::func_320(0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_319(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_3__::func_320(0);
		}
	}
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_1__::func_237(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_3__::func_283(PLAYER::PLAYER_ID()) || __LIB_3__::func_233()) || __LIB_3__::func_232()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_4__::func_27(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
				{
					__LIB_26__::func_668(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_264(bVar3, 1, 1))
				{
					if (__LIB_3__::func_311(bVar3))
					{
						if (func_3732(iParam1) && !__LIB_4__::func_27(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_3__::func_319(0);
							__LIB_3__::func_320(0);
							__LIB_3__::func_321(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_18__::func_584();
	if (!__LIB_4__::func_715() || __LIB_0__::func_706())
	{
		__LIB_3__::func_272(0);
	}
}

int func_3659(int iParam0)//Position - 0x12A05C
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3732(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if (((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_3__::func_311(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3669()//Position - 0x12A7DA
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	char* sVar3;
	int iVar4;
	int iVar5;
	var uVar6[25];
	int iVar7;
	int iVar8;
	var uVar9[25];
	int iVar10;
	int iVar11;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16 != -1 && __LIB_4__::func_735(PLAYER::PLAYER_ID())) && __LIB_0__::func_170(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_16) == 9)
	{
		return -1;
	}
	if (__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_3__::func_325(PLAYER::PLAYER_ID()) && __LIB_1__::func_237(Global_1853191))
		{
			iVar4 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
						{
							if (__LIB_1__::func_580(uVar2[iVar0], 1))
							{
								sVar3 = ENTITY::GET_ENTITY_SCRIPT(uVar2[iVar0], &uVar1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
								{
									if (MISC::ARE_STRINGS_EQUAL(sVar3, "am_mp_defunct_base"))
									{
										if (__LIB_1__::func_264(Global_1853191, 1, 1))
										{
											if (__LIB_4__::func_925(uVar2[iVar0], 1, 0) == Global_1853191)
											{
												return uVar2[iVar0];
											}
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_582())
		{
			iVar7 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar6);
			iVar5 = 0;
			while (iVar5 < iVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar5]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar6[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar5], false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar6[iVar5], __LIB_3__::func_328()))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
							{
								if (__LIB_1__::func_580(uVar6[iVar5], 1))
								{
									if (__LIB_1__::func_264(__LIB_0__::func_582(), 1, 1))
									{
										if (__LIB_4__::func_925(uVar6[iVar5], 1, 0) == __LIB_0__::func_582())
										{
											return uVar6[iVar5];
										}
									}
								}
							}
						}
					}
				}
				iVar5++;
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
		{
			if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1640744))
				{
					Global_2815059.f_293 = Global_1640744;
					return Global_1640744;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_293))
			{
				iVar10 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar9);
				iVar8 = 0;
				while (iVar8 < iVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar9[iVar8]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar9[iVar8]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar9[iVar8], false))
						{
							if (VEHICLE::IS_VEHICLE_MODEL(uVar9[iVar8], __LIB_3__::func_328()))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Avenger", 3))
								{
									if (__LIB_1__::func_580(uVar9[iVar8], 1))
									{
										if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
										{
											if (__LIB_4__::func_925(uVar9[iVar8], 1, 0) == Global_1946250.f_3630)
											{
												Global_2815059.f_293 = uVar9[iVar8];
												return uVar9[iVar8];
											}
										}
									}
								}
							}
						}
					}
					iVar8++;
				}
			}
			else
			{
				return Global_2815059.f_293;
			}
		}
	}
	else if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_322(0);
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		iVar11 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
		if (iVar11 != __LIB_0__::func_160() && __LIB_3__::func_330(iVar11))
		{
			return __LIB_3__::func_329(iVar11);
		}
	}
	return Global_2815059.f_308;
}

Vector3 func_3672(var uParam0)//Position - 0x12AB6D
{
	int iVar0;
	iVar0 = func_3669();
	if (Global_1853190 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_237(Global_1853190))
		{
			return 487.6422f, 4792.5854f, -59.3939f;
		}
		else if (Global_1853190 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			return ENTITY::GET_ENTITY_COORDS(iVar0, true);
		}
		else
		{
			return Global_2689235[Global_1853190 /*453*/].f_318.f_18;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return ENTITY::GET_ENTITY_COORDS(iVar0, true);
	}
	else if (__LIB_4__::func_925(iVar0, 1, 0) != __LIB_0__::func_160())
	{
		return Global_2689235[__LIB_4__::func_925(iVar0, 1, 0) /*453*/].f_318.f_18;
	}
	return 0f, 0f, 0f;
}

void func_3703(int iParam0, int iParam1)//Position - 0x12BBE7
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
	if (__LIB_12__::func_226(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_588(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_588(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_32__::func_862(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_339(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_32__::func_862(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							func_3705(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3704(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							func_3705(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3704(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3704(int iParam0)//Position - 0x12BE7A
{
	__LIB_32__::func_862(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3705(int iParam0)//Position - 0x12BEA8
{
	int iVar0;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || iParam0)
	{
		iVar0 = func_3669();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if ((__LIB_4__::func_925(iVar0, 1, 0) == PLAYER::PLAYER_ID() && !__LIB_1__::func_237(PLAYER::PLAYER_ID())) && !__LIB_3__::func_931())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 2f, -17f, 0f) };
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_24 = ENTITY::GET_ENTITY_HEADING(iVar0);
			}
		}
	}
}

int func_3716(var uParam0, var uParam1, var uParam2)//Position - 0x12C38A
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = func_3669();
	if (__LIB_3__::func_233() || __LIB_3__::func_232())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_4__::func_925(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_199(uParam1, 1);
		__LIB_3__::func_307(0);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_199(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (((__LIB_7__::func_556(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_4__::func_958(PLAYER::PLAYER_ID())) || __LIB_3__::func_285())
					{
						if (!func_3732(*uParam0) && __LIB_25__::func_490(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_2__::func_161("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_3__::func_345(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_3__::func_311(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_2__::func_187(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_25__::func_199(uParam1, 0);
									__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_6__::func_404(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_4__::func_736(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_343(1);
									}
									__LIB_7__::func_375(1, 88);
									__LIB_3__::func_307(1);
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
								__LIB_8__::func_611(0);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
								HUD::DISABLE_FRONTEND_THIS_FRAME();
								HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
								VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
								if (__LIB_4__::func_32() && __LIB_7__::func_560())
								{
									if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
									{
										__LIB_3__::func_308(1);
									}
									if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_3__::func_335(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_692(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_3__::func_285())
									{
										__LIB_7__::func_394(1);
										__LIB_3__::func_934(88, uParam1, 0, 0);
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_18__::func_904(1);
										__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_3__::func_345(0);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
									else if (!__LIB_2__::func_560())
									{
										__LIB_3__::func_324(1);
										__LIB_3__::func_323(1);
										__LIB_18__::func_904(1);
										__LIB_7__::func_375(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_4__::func_32())
									{
									}
									if (!__LIB_7__::func_560())
									{
									}
								}
							}
						}
						else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
						__LIB_25__::func_199(uParam1, 1);
						__LIB_3__::func_307(0);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					__LIB_25__::func_199(uParam1, 1);
					__LIB_3__::func_307(0);
				}
			}
			else
			{
				func_3717(*uParam0);
				if (__LIB_3__::func_186(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_4__::func_27(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_649(&(uParam1->f_22.f_101)))
						{
							if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
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
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_3__::func_320(0);
								__LIB_3__::func_322(0);
								__LIB_3__::func_319(0);
								__LIB_0__::func_579(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_8__::func_611(0);
					__LIB_2__::func_452(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_3__::func_343(1);
					__LIB_7__::func_375(1, 88);
					__LIB_3__::func_307(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_579(&(uParam1->f_22.f_101));
					return 1;
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_199(uParam1, 1);
			__LIB_3__::func_307(0);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_3717(int iParam0)//Position - 0x12CAB3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_325(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if ((__LIB_3__::func_311(bVar2) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 8) || __LIB_3__::func_311(bVar2))
								{
									if (func_3659(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_326(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_320(0);
											__LIB_3__::func_322(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_320(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
											{
												__LIB_3__::func_309(1);
												__LIB_3__::func_324(1);
												__LIB_3__::func_308(1);
												__LIB_3__::func_323(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_319(1);
											__LIB_3__::func_320(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_322(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_3732(int iParam0)//Position - 0x12D066
{
	int iVar0;
	bool bVar1;
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = func_3669();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_165()) || __LIB_3__::func_334())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_580(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_3__::func_165()) || __LIB_3__::func_334())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID())) && !__LIB_3__::func_326(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_4__::func_925(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (func_3753(iParam0, iVar0))
	{
		return 1;
	}
	if (func_3752(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3749(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3748(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3742(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3741(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_3__::func_347(1);
			}
		}
		else
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3738(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (func_3737(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_186(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_3736(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_233())
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_3__::func_185(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_3__::func_338(__LIB_4__::func_925(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_2__::func_745())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (__LIB_3__::func_931())
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && func_3734())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_3__::func_348(__LIB_4__::func_925(iVar0, 1, 0))))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_186(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID())) && !__LIB_3__::func_311(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_237(__LIB_4__::func_925(iVar0, 1, 0)) && !__LIB_4__::func_958(PLAYER::PLAYER_ID()))
		{
			__LIB_3__::func_347(1);
		}
		return 1;
	}
	if (((__LIB_4__::func_958(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_2__::func_161("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_4__::func_958(PLAYER::PLAYER_ID()) && __LIB_2__::func_39(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_1__::func_909())
	{
		return 1;
	}
	if (__LIB_1__::func_302(23))
	{
		return 1;
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	__LIB_3__::func_347(0);
	return 0;
}

int func_3734()//Position - 0x12D798
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = func_3669();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
	{
		func_3735(88, &Var0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar2, 0f, -8f, -0.6f) };
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3735(int iParam0, var uParam1)//Position - 0x12D7F0
{
	int iVar0;
	var uVar1;
	switch (iParam0)
	{
		case 88:
			iVar0 = func_3669();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -8f, -0.6f) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar1, false, false) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
				{
					*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
				}
				else
				{
					*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
				}
			}
			break;
	}
}

int func_3736(int iParam0)//Position - 0x12D879
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = func_3669();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		func_3735(iParam0, &Var1);
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if (!__LIB_0__::func_78(Global_1310720.f_1445[iVar2 /*3*/], 0f, 0f, 0f, 0))
			{
				if (SYSTEM::VDIST2(Global_1310720.f_1445[iVar2 /*3*/], Var1) <= 225f)
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_3737(int iParam0, int iParam1)//Position - 0x12D8F4
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if (!__LIB_2__::func_710(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(-376.2393f, -1878.2488f, 19.5278f, Var0) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3738(int iParam0, int iParam1)//Position - 0x12D94F
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if (SYSTEM::VDIST2(__LIB_3__::func_82(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f || SYSTEM::VDIST2(__LIB_3__::func_81(__LIB_6__::func_932(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3741(int iParam0, int iParam1)//Position - 0x12DBE1
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if (!__LIB_1__::func_233(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(__LIB_3__::func_77(__LIB_6__::func_933(__LIB_4__::func_925(iParam1, 1, 0))), Var0) <= 3600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3742(int iParam0, int iParam1)//Position - 0x12DC3D
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if (!__LIB_1__::func_247(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_83(__LIB_7__::func_561(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3748(int iParam0, int iParam1)//Position - 0x12DDF2
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if ((((SYSTEM::VDIST2(759.36f, -675.13f, 27.86f, Var0) <= 900f || SYSTEM::VDIST2(-144.58f, -1341.37f, 28.87f, Var0) <= 900f) || SYSTEM::VDIST2(-171f, -31.4f, 51.27f, Var0) <= 900f) || SYSTEM::VDIST2(231.54f, -1875.7f, 25.41f, Var0) <= 900f) || SYSTEM::VDIST2(488.98f, -897.41f, 24.79f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3749(int iParam0, int iParam1)//Position - 0x12DEC9
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if (((((SYSTEM::VDIST2(-237.12f, 6228.7554f, 30.5005f, Var0) <= 900f || SYSTEM::VDIST2(1710.83f, 4760.13f, 41.0504f, Var0) <= 900f) || SYSTEM::VDIST2(-105.19f, -1778.3f, 28.51f, Var0) <= 900f) || SYSTEM::VDIST2(-617.7421f, 285.8363f, 80.6871f, Var0) <= 900f) || SYSTEM::VDIST2(-1287.1135f, -278.0045f, 37.5935f, Var0) <= 900f) || SYSTEM::VDIST2(726.7626f, -822.4685f, 23.8603f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3752(int iParam0, int iParam1)//Position - 0x12E02B
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if (((((((((SYSTEM::VDIST2(931.99f, 43.83f, 80.1f, Var0) <= 900f || SYSTEM::VDIST2(930.45f, 41.36f, 80.1f, Var0) <= 900f) || SYSTEM::VDIST2(964.4556f, 57.9093f, 112.1931f, Var0) <= 900f) || SYSTEM::VDIST2(926.4164f, 45.5401f, 59.9018f, Var0) <= 900f) || SYSTEM::VDIST2(936.3319f, 1.1849f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(968.591f, 63.923855f, 111.55298f, Var0) <= 900f) || SYSTEM::VDIST2(967.22f, 62.69f, 111.5531f, Var0) <= 900f) || SYSTEM::VDIST2(936.5542f, 1.1273f, 77.7649f, Var0) <= 900f) || SYSTEM::VDIST2(925.04f, 46.48f, 80.096f, Var0) <= 900f) || SYSTEM::VDIST2(924.507f, 60.3318f, 79.89629f, Var0) <= 900f)
		{
			return 1;
		}
	}
	return 0;
}

int func_3753(int iParam0, int iParam1)//Position - 0x12E1B1
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_3735(iParam0, &Var0);
		if (!__LIB_3__::func_932(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Var0, __LIB_3__::func_84(__LIB_5__::func_702(__LIB_4__::func_925(iParam1, 1, 0)))) <= 1600f)
		{
			return 1;
		}
	}
	return 0;
}

void func_3762(int iParam0, int iParam1, var uParam2)//Position - 0x12E466
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = func_3669();
	switch (iParam1)
	{
		case 0:
			func_3735(iParam0, &(uParam2->f_4));
			uParam2->f_7 = { 1f, 1f, 2f };
			MISC::SET_BIT(&(uParam2->f_3), 4);
			MISC::SET_BIT(&(uParam2->f_3), 1);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
				uParam2->f_18 = 0;
			}
			else
			{
				__LIB_2__::func_749(iParam0, &(uParam2->f_15), &(uParam2->f_16), &(uParam2->f_17), &(uParam2->f_18));
			}
			break;
		case 1:
			func_3763(iParam0, &(uParam2->f_4), &(uParam2->f_7), &(uParam2->f_10), &(uParam2->f_13), &(uParam2->f_14));
			uParam2->f_2 = 1;
			MISC::SET_BIT(&(uParam2->f_3), 0);
			MISC::SET_BIT(&(uParam2->f_3), 2);
			MISC::SET_BIT(&(uParam2->f_3), 5);
			break;
	}
}

void func_3763(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x12E564
{
	int iVar0;
	var uVar1;
	iVar0 = func_3669();
	switch (iParam0)
	{
		case 88:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == __LIB_3__::func_328())
				{
					*uParam1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -5f, 0f) };
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, 6f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &uVar1, false, false))
					{
						*uParam2 = { *uParam2, uParam2->f_1, uVar1 };
					}
					*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -6f, 2.5f) };
					*uParam4 = 1f;
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iVar0);
				}
			}
			break;
	}
}

void func_3775(var uParam0, int iParam1)//Position - 0x12E8FD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1292328/*func_3942*/;
			break;
		case 1:
			uParam0->f_30 = 1292248/*func_3941*/;
			break;
		case 2:
			uParam0->f_31 = 1291749/*func_3940*/;
			break;
		case 3:
			uParam0->f_34 = 1291699/*func_3939*/;
			break;
		case 4:
			uParam0->f_12 = 1291612/*func_3938*/;
			break;
		case 5:
			uParam0->f_11 = 1291602/*func_3937*/;
			break;
		case 37:
			uParam0->f_18 = 1291484/*func_3936*/;
			break;
		case 38:
			uParam0->f_9 = 1291362/*func_3935*/;
			break;
		case 6:
			uParam0->f_32 = 1291274/*func_3934*/;
			break;
		case 111:
			uParam0->f_35 = 1291260/*func_3933*/;
			break;
		case 11:
			uParam0->f_11 = 1291251/*func_3932*/;
			break;
		case 12:
			uParam0->f_33 = 1290872/*func_3929*/;
			break;
		case 14:
			uParam0->f_11 = 1290863/*func_3928*/;
			break;
		case 109:
			uParam0->f_56 = 1290855/*func_3927*/;
			break;
		case 79:
			*uParam0 = 1290831/*func_3926*/;
			break;
		case 13:
			uParam0->f_2 = 1290699/*func_3925*/;
			break;
		case 15:
			uParam0->f_2 = 1290417/*func_3923*/;
			break;
		case 75:
			uParam0->f_4 = 1290403/*func_3922*/;
			break;
		case 16:
			uParam0->f_5 = 1289885/*func_3920*/;
			break;
		case 108:
			uParam0->f_55 = 1286261/*func_3908*/;
			break;
		case 17:
			uParam0->f_17 = 1285725/*func_3906*/;
			break;
		case 19:
			uParam0->f_17 = 1285699/*func_3905*/;
			break;
		case 20:
			uParam0->f_3 = 1285615/*func_3904*/;
			break;
		case 21:
			uParam0->f_3 = 1285551/*func_3903*/;
			break;
		case 74:
			uParam0->f_53 = 1285371/*func_3902*/;
			break;
		case 22:
			uParam0->f_24 = 1285228/*func_3901*/;
			break;
		case 25:
			uParam0->f_23 = 1284604/*func_3899*/;
			break;
		case 30:
			uParam0->f_8 = 1284089/*func_3897*/;
			break;
		case 31:
			uParam0->f_39 = 1283804/*func_3896*/;
			break;
		case 33:
			uParam0->f_40 = 1283133/*func_3894*/;
			break;
		case 34:
			uParam0->f_41 = 1281869/*func_3893*/;
			break;
		case 36:
			uParam0->f_58 = 1281824/*func_3892*/;
			break;
		case 35:
			uParam0->f_42 = 1255231/*func_3884*/;
			break;
		case 45:
			uParam0->f_14 = 1255222/*func_3883*/;
			break;
		case 46:
			uParam0->f_14 = 1255213/*func_3882*/;
			break;
		case 110:
			uParam0->f_57 = 1255205/*func_3881*/;
			break;
		case 77:
			uParam0->f_13 = 1255182/*func_3880*/;
			break;
		case 47:
			uParam0->f_43 = 1255078/*func_3879*/;
			break;
		case 49:
			uParam0->f_8 = 1255037/*func_3878*/;
			break;
		case 50:
			*uParam0 = 1254823/*func_3875*/;
			break;
		case 51:
			*uParam0 = 1254754/*func_3874*/;
			break;
		case 52:
			uParam0->f_15 = 1254743/*func_3873*/;
			break;
		case 53:
			uParam0->f_13 = 1254605/*func_3872*/;
			break;
		case 54:
			uParam0->f_45 = 1254417/*func_3871*/;
			break;
		case 56:
			uParam0->f_46 = 1254408/*func_3870*/;
			break;
		case 57:
			uParam0->f_11 = 1254231/*func_3868*/;
			break;
		case 58:
			uParam0->f_13 = 1254093/*func_3867*/;
			break;
		case 64:
			uParam0->f_47 = 1254085/*func_3866*/;
			break;
		case 65:
			uParam0->f_21 = 1253249/*func_3864*/;
			break;
		case 66:
			uParam0->f_21 = 1253142/*func_3863*/;
			break;
		case 67:
			uParam0->f_21 = 1253078/*func_3862*/;
			break;
		case 68:
			*uParam0 = 1252590/*func_3861*/;
			break;
		case 69:
			*uParam0 = 1252581/*func_3860*/;
			break;
		case 70:
			uParam0->f_48 = 1252569/*func_3859*/;
			break;
		case 71:
			uParam0->f_49 = 1252560/*func_3858*/;
			break;
		case 107:
			uParam0->f_50 = 1252548/*func_3857*/;
			break;
		case 80:
			uParam0->f_7 = 1251845/*func_3853*/;
			break;
		case 84:
			uParam0->f_1 = 1251745/*func_3851*/;
			break;
		case 85:
			uParam0->f_1 = 1249761/*func_3848*/;
			break;
		case 87:
			uParam0->f_1 = 1247338/*func_3836*/;
			break;
		case 88:
			uParam0->f_1 = 1247329/*func_3835*/;
			break;
		case 96:
			uParam0->f_1 = 1247266/*func_3834*/;
			break;
		case 97:
			uParam0->f_1 = 1246945/*func_3831*/;
			break;
		case 98:
			uParam0->f_1 = 1242937/*func_3797*/;
			break;
		case 100:
			uParam0->f_22 = 1240661/*func_3779*/;
			break;
		case 78:
			uParam0->f_59 = 1240457/*func_3777*/;
			break;
		case 125:
			uParam0->f_19 = 1240441/*func_3776*/;
			break;
	}
}

int func_3797(int iParam0, int* iParam1)//Position - 0x12F739
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_25__::func_129(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_377(&iVar0, &(iParam1->f_109), 12);
		__LIB_7__::func_568(iParam0, &(iParam1->f_109));
	}
	__LIB_38__::func_196(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_3__::func_936(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_7__::func_665(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_7__::func_449(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_3848(int iParam0, int* iParam1)//Position - 0x1311E1
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
			func_377(&iVar0, &(iParam1->f_109), 60);
			__LIB_2__::func_416(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_289(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1433(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_3__::func_390(iParam0, &(iParam1->f_109));
	}
	__LIB_25__::func_130(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_38__::func_196(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_7__::func_449(iParam1, 0);
	return 1;
}

void func_3899(int iParam0, int iParam1)//Position - 0x1399FC
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
	if (__LIB_12__::func_227(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar1 = __LIB_3__::func_808();
		}
		Var4 = { __LIB_3__::func_83(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_588(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !func_588(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_309(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3900(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3900(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3900(int iParam0)//Position - 0x139C3E
{
	__LIB_25__::func_309(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_3908(var uParam0, var uParam1, var uParam2)//Position - 0x13A075
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	*uParam2 = 0;
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_0__::func_625(*uParam0);
			if (__LIB_0__::func_657(iVar2, 1) && Global_1958624)
			{
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			if (__LIB_1__::func_178(iVar2) && (Global_1958625 || Global_262145.f_21914 /* Tunable: -481896422 */))
			{
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			if (((VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob3"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("cargobob4")))
			{
				iVar4 = VEHICLE::GET_ENTITY_ATTACHED_TO_CARGOBOB(iVar2);
				iVar5 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) || ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					__LIB_25__::func_200(uParam1);
					return 0;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(iVar2)))
			{
				if (__LIB_7__::func_573(uParam0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("thruster"))
					{
						if (!__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
						{
							if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("HANGAR_ENTER2" /* GXT: This vehicle cannot be stored in the Hangar. */, false);
								}
							}
						}
					}
				}
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar6) || PED::IS_PED_INJURED(iVar6))
			{
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
			if (__LIB_0__::func_657(iVar2, 1) && __LIB_6__::func_407(iVar2) != bVar7)
			{
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			if (__LIB_1__::func_178(iVar2) && __LIB_0__::func_269(iVar2) != bVar7)
			{
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			if (__LIB_2__::func_471(iVar2))
			{
				__LIB_25__::func_200(uParam1);
				return 0;
			}
			if (!__LIB_0__::func_657(iVar2, 1) && !__LIB_1__::func_178(iVar2))
			{
				if (__LIB_7__::func_573(uParam0))
				{
					if (!__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
					{
						if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::DISPLAY_HELP_TEXT_THIS_FRAME("HANGAR_ENTER1" /* GXT: Only Pegasus or Personal aircraft can be stored in the Hangar. */, false);
							}
						}
					}
					__LIB_25__::func_200(uParam1);
					return 0;
				}
			}
			if ((__LIB_1__::func_264(bVar7, 1, 1) && __LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(iVar2))) && __LIB_3__::func_397(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6), iVar3))
			{
				if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_657(iVar2, 1))
					{
						if (__LIB_1__::func_165() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_165() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_4__::func_973(0))
					{
						if (__LIB_7__::func_573(uParam0))
						{
							if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
							{
								__LIB_0__::func_495(&(uParam1->f_397), 1, 0);
							}
							if (__LIB_0__::func_649(&(uParam1->f_397)) && !__LIB_2__::func_47(&(uParam1->f_397), 750, 1))
							{
								iVar1 = 1;
							}
							if (iVar1 || (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID())))
							{
								if (__LIB_4__::func_28() || __LIB_2__::func_427(PLAYER::PLAYER_ID()))
								{
									if (__LIB_18__::func_489(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
										__LIB_7__::func_375(1, *uParam0);
										__LIB_25__::func_99(uParam1, 0);
										__LIB_18__::func_760(iVar2);
										return 1;
									}
									else if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_2__::func_427(PLAYER::PLAYER_ID()))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
										__LIB_18__::func_760(iVar2);
										return 1;
									}
									else
									{
										if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_72(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 1075838976, 0))
										{
											bVar0 = true;
											if (uParam1->f_22.f_94 == -1)
											{
												__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, "HANGAR_ENTER0" /* GXT: Press ~INPUT_CONTEXT~ to enter the Hangar with current vehicle. */, 0, 0, 0, 0);
											}
										}
										if (__LIB_2__::func_187(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
										{
											MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 30);
											__LIB_6__::func_404(&(uParam1->f_22.f_94));
											__LIB_25__::func_99(uParam1, 0);
											__LIB_7__::func_375(1, *uParam0);
											__LIB_18__::func_760(iVar2);
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
					func_3909(*uParam0);
					if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_6__::func_404(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_7__::func_375(0, -1);
				}
				__LIB_25__::func_99(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (!bVar0)
		{
			__LIB_6__::func_404(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_7__::func_375(0, -1);
	}
	__LIB_25__::func_99(uParam1, 1);
	return 0;
}

void func_3909(var uParam0)//Position - 0x13A5CE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_183(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
						{
							if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5))
							{
								if (func_3910(uParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (__LIB_2__::func_426(PLAYER::PLAYER_ID()))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_1, 31))
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else
									{
										__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_2__::func_424(1);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_3910(var uParam0)//Position - 0x13A6E5
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3923(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_3923(var uParam0)//Position - 0x13B0B1
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	bVar0 = false;
	bVar1 = false;
	if (__LIB_26__::func_626(bVar1, 8) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_1__::func_178(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (Global_1958625 || Global_262145.f_21914 /* Tunable: -481896422 */)
		{
			return 1;
		}
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0) && !__LIB_6__::func_506())
	{
		return 0;
	}
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1) && !bVar0)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 8))
	{
		return 1;
	}
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_3943(var uParam0, int iParam1)//Position - 0x13B831
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1301744/*func_4006*/;
			break;
		case 1:
			uParam0->f_30 = 1301688/*func_4005*/;
			break;
		case 2:
			uParam0->f_31 = 1301469/*func_4004*/;
			break;
		case 3:
			uParam0->f_34 = 1301418/*func_4003*/;
			break;
		case 4:
			uParam0->f_12 = 1301385/*func_4002*/;
			break;
		case 6:
			uParam0->f_32 = 1301321/*func_4001*/;
			break;
		case 111:
			uParam0->f_35 = 1301312/*func_4000*/;
			break;
		case 79:
			*uParam0 = 1301288/*func_3999*/;
			break;
		case 11:
			uParam0->f_11 = 1301279/*func_3998*/;
			break;
		case 12:
			uParam0->f_33 = 1301187/*func_3997*/;
			break;
		case 14:
			uParam0->f_11 = 1301178/*func_3996*/;
			break;
		case 109:
			uParam0->f_56 = 1301170/*func_3995*/;
			break;
		case 15:
			uParam0->f_2 = 1300918/*func_3994*/;
			break;
		case 13:
			uParam0->f_2 = 1300909/*func_3993*/;
			break;
		case 75:
			uParam0->f_4 = 1300900/*func_3992*/;
			break;
		case 16:
			uParam0->f_5 = 1300891/*func_3991*/;
			break;
		case 108:
			uParam0->f_55 = 1300882/*func_3990*/;
			break;
		case 17:
			uParam0->f_17 = 1300838/*func_3989*/;
			break;
		case 19:
			uParam0->f_17 = 1300827/*func_3988*/;
			break;
		case 20:
			uParam0->f_3 = 1300780/*func_3987*/;
			break;
		case 21:
			uParam0->f_3 = 1300728/*func_3986*/;
			break;
		case 74:
			uParam0->f_53 = 1300672/*func_3985*/;
			break;
		case 22:
			uParam0->f_24 = 1300590/*func_3984*/;
			break;
		case 25:
			uParam0->f_23 = 1299623/*func_3979*/;
			break;
		case 30:
			uParam0->f_8 = 1299413/*func_3978*/;
			break;
		case 31:
			uParam0->f_39 = 1299382/*func_3977*/;
			break;
		case 33:
			uParam0->f_40 = 1299192/*func_3976*/;
			break;
		case 34:
			uParam0->f_41 = 1295189/*func_3973*/;
			break;
		case 36:
			uParam0->f_58 = 1295136/*func_3972*/;
			break;
		case 35:
			uParam0->f_42 = 1293945/*func_3970*/;
			break;
		case 45:
			uParam0->f_14 = 1293936/*func_3969*/;
			break;
		case 46:
			uParam0->f_14 = 1293927/*func_3968*/;
			break;
		case 110:
			uParam0->f_57 = 1293919/*func_3967*/;
			break;
		case 77:
			uParam0->f_13 = 1293908/*func_3966*/;
			break;
		case 47:
			uParam0->f_43 = 1293805/*func_3965*/;
			break;
		case 49:
			uParam0->f_8 = 1293780/*func_3964*/;
			break;
		case 50:
			*uParam0 = 1293742/*func_3963*/;
			break;
		case 51:
			*uParam0 = 1293733/*func_3962*/;
			break;
		case 52:
			uParam0->f_15 = 1293722/*func_3961*/;
			break;
		case 53:
			uParam0->f_13 = 1293641/*func_3960*/;
			break;
		case 54:
			uParam0->f_45 = 1293633/*func_3959*/;
			break;
		case 56:
			uParam0->f_46 = 1293624/*func_3958*/;
			break;
		case 57:
			uParam0->f_11 = 1293614/*func_3957*/;
			break;
		case 58:
			uParam0->f_13 = 1293407/*func_3956*/;
			break;
		case 64:
			uParam0->f_47 = 1293399/*func_3955*/;
			break;
		case 65:
			uParam0->f_21 = 1293391/*func_3954*/;
			break;
		case 66:
			uParam0->f_21 = 1293383/*func_3953*/;
			break;
		case 67:
			uParam0->f_21 = 1293375/*func_3952*/;
			break;
		case 68:
			*uParam0 = 1293366/*func_3951*/;
			break;
		case 69:
			*uParam0 = 1293357/*func_3950*/;
			break;
		case 70:
			uParam0->f_48 = 1293345/*func_3949*/;
			break;
		case 71:
			uParam0->f_49 = 1293336/*func_3948*/;
			break;
		case 107:
			uParam0->f_50 = 1293324/*func_3947*/;
			break;
		case 80:
			uParam0->f_7 = 1293315/*func_3946*/;
			break;
		case 73:
			uParam0->f_51 = 1293306/*func_3945*/;
			break;
		case 78:
			uParam0->f_59 = 1293298/*func_3944*/;
			break;
	}
}

void func_3979(int iParam0, int iParam1)//Position - 0x13D4A7
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
	if (__LIB_20__::func_861(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		__LIB_6__::func_439(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_20__::func_860(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_20__::func_860(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3980(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_438(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_137()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3980(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_3980(int iParam0)//Position - 0x13D724
{
	__LIB_20__::func_860(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4007(var uParam0, int iParam1)//Position - 0x13DCF9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1381198/*func_4172*/;
			break;
		case 1:
			uParam0->f_30 = 1381142/*func_4171*/;
			break;
		case 2:
			uParam0->f_31 = 1379597/*func_4170*/;
			break;
		case 3:
			uParam0->f_34 = 1379548/*func_4169*/;
			break;
		case 4:
			uParam0->f_12 = 1379515/*func_4168*/;
			break;
		case 6:
			uParam0->f_32 = 1379451/*func_4167*/;
			break;
		case 111:
			uParam0->f_35 = 1379428/*func_4166*/;
			break;
		case 79:
			*uParam0 = 1379404/*func_4165*/;
			break;
		case 37:
			uParam0->f_18 = 1379286/*func_4164*/;
			break;
		case 38:
			uParam0->f_9 = 1379219/*func_4163*/;
			break;
		case 11:
			uParam0->f_11 = 1379210/*func_4162*/;
			break;
		case 12:
			uParam0->f_33 = 1378865/*func_4160*/;
			break;
		case 14:
			uParam0->f_11 = 1378856/*func_4159*/;
			break;
		case 109:
			uParam0->f_56 = 1378848/*func_4158*/;
			break;
		case 15:
			uParam0->f_2 = 1373520/*func_4136*/;
			break;
		case 13:
			uParam0->f_2 = 1373511/*func_4135*/;
			break;
		case 75:
			uParam0->f_4 = 1373502/*func_4134*/;
			break;
		case 16:
			uParam0->f_5 = 1373477/*func_4133*/;
			break;
		case 108:
			uParam0->f_55 = 1365292/*func_4112*/;
			break;
		case 17:
			uParam0->f_17 = 1364710/*func_4111*/;
			break;
		case 19:
			uParam0->f_17 = 1364684/*func_4110*/;
			break;
		case 20:
			uParam0->f_3 = 1364623/*func_4109*/;
			break;
		case 21:
			uParam0->f_3 = 1364503/*func_4108*/;
			break;
		case 74:
			uParam0->f_53 = 1364447/*func_4107*/;
			break;
		case 22:
			uParam0->f_24 = 1364365/*func_4106*/;
			break;
		case 25:
			uParam0->f_23 = 1363393/*func_4101*/;
			break;
		case 30:
			uParam0->f_8 = 1362653/*func_4100*/;
			break;
		case 31:
			uParam0->f_39 = 1362383/*func_4099*/;
			break;
		case 33:
			uParam0->f_40 = 1361447/*func_4096*/;
			break;
		case 34:
			uParam0->f_41 = 1358100/*func_4095*/;
			break;
		case 36:
			uParam0->f_58 = 1358047/*func_4094*/;
			break;
		case 35:
			uParam0->f_42 = 1357364/*func_4092*/;
			break;
		case 45:
			uParam0->f_14 = 1357355/*func_4091*/;
			break;
		case 46:
			uParam0->f_14 = 1357346/*func_4090*/;
			break;
		case 110:
			uParam0->f_57 = 1356903/*func_4089*/;
			break;
		case 77:
			uParam0->f_13 = 1356892/*func_4088*/;
			break;
		case 47:
			uParam0->f_43 = 1356789/*func_4087*/;
			break;
		case 49:
			uParam0->f_8 = 1356764/*func_4086*/;
			break;
		case 50:
			*uParam0 = 1356726/*func_4085*/;
			break;
		case 51:
			*uParam0 = 1356702/*func_4084*/;
			break;
		case 52:
			uParam0->f_15 = 1356691/*func_4083*/;
			break;
		case 53:
			uParam0->f_13 = 1356612/*func_4082*/;
			break;
		case 54:
			uParam0->f_45 = 1356604/*func_4081*/;
			break;
		case 56:
			uParam0->f_46 = 1356595/*func_4080*/;
			break;
		case 57:
			uParam0->f_11 = 1356585/*func_4079*/;
			break;
		case 58:
			uParam0->f_13 = 1356356/*func_4078*/;
			break;
		case 64:
			uParam0->f_47 = 1309951/*func_4044*/;
			break;
		case 65:
			uParam0->f_21 = 1308813/*func_4041*/;
			break;
		case 66:
			uParam0->f_21 = 1308590/*func_4039*/;
			break;
		case 67:
			uParam0->f_21 = 1307695/*func_4035*/;
			break;
		case 68:
			*uParam0 = 1307150/*func_4034*/;
			break;
		case 69:
			*uParam0 = 1307141/*func_4033*/;
			break;
		case 70:
			uParam0->f_48 = 1307129/*func_4032*/;
			break;
		case 71:
			uParam0->f_49 = 1307120/*func_4031*/;
			break;
		case 107:
			uParam0->f_50 = 1307108/*func_4030*/;
			break;
		case 80:
			uParam0->f_7 = 1305049/*func_4022*/;
			break;
		case 73:
			uParam0->f_51 = 1303281/*func_4014*/;
			break;
		case 78:
			uParam0->f_59 = 1302748/*func_4008*/;
			break;
	}
}

void func_4044(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x13FCFF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_8__::func_97();
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_3__::func_455())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_454(0);
			}
		}
		if (__LIB_3__::func_942(PLAYER::PLAYER_ID()))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == joaat("GtaMloRoom001") && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
				{
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_26__::func_671(uParam0);
		}
		if (__LIB_3__::func_317(PLAYER::PLAYER_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_506, 11))
			{
				if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && __LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1) || BitTest(Global_1946250.f_506, 11))
				{
					if (!__LIB_3__::func_432() && !__LIB_1__::func_251(Global_1853185))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						__LIB_3__::func_316(0);
						Global_1946250.f_3630 = 0;
						__LIB_3__::func_453(0);
						CAM::DO_SCREEN_FADE_IN(500);
						__LIB_3__::func_444(iParam1);
						__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
						__LIB_3__::func_321(1);
						__LIB_3__::func_452(0);
						__LIB_3__::func_309(0);
					}
					else
					{
						__LIB_25__::func_310(iParam1);
					}
				}
			}
		}
		if (__LIB_3__::func_432() || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam0->f_22.f_94));
			}
		}
		if (Global_1853185 != __LIB_0__::func_160())
		{
			if (PLAYER::PLAYER_ID() == Global_1853185)
			{
				if (__LIB_1__::func_251(PLAYER::PLAYER_ID()))
				{
					if ((((__LIB_3__::func_449(PLAYER::PLAYER_ID()) || __LIB_3__::func_76(PLAYER::PLAYER_ID())) || __LIB_2__::func_746()) || __LIB_3__::func_455()) || Global_1957730)
					{
						__LIB_8__::func_611(1);
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_306(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_3__::func_317(PLAYER::PLAYER_ID()))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (__LIB_1__::func_264(bVar2, 1, 1))
					{
						if (__LIB_2__::func_427(bVar2))
						{
							if (__LIB_4__::func_2(bVar2) == 81)
							{
								if (func_4136(iParam1) && !__LIB_3__::func_942(PLAYER::PLAYER_ID()))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									__LIB_3__::func_316(0);
									__LIB_3__::func_448(0);
									CAM::DO_SCREEN_FADE_IN(500);
									__LIB_3__::func_444(iParam1);
									__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
									if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
									{
										NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
									}
									__LIB_3__::func_321(1);
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_3__::func_449(PLAYER::PLAYER_ID()))
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
	if (__LIB_0__::func_618())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if ((((func_4136(iParam1) && !__LIB_3__::func_942(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_20__::func_857()) && !__LIB_1__::func_251(PLAYER::PLAYER_ID())) || !__LIB_4__::func_715())
	{
		if (!__LIB_0__::func_618())
		{
			__LIB_25__::func_201(uParam0, 1);
		}
	}
	if ((((BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 25)) && func_4054(iParam1)) && !__LIB_1__::func_251(__LIB_20__::func_857())) || BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_3__::func_432() && !__LIB_1__::func_251(Global_1853185))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("am_mp_smpl_interior_int")) > 0)
			{
				__LIB_3__::func_945(0);
				__LIB_3__::func_321(1);
			}
			__LIB_7__::func_375(0, -1);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			__LIB_3__::func_309(0);
			__LIB_3__::func_453(0);
			__LIB_3__::func_447(0);
			CAM::DO_SCREEN_FADE_IN(500);
			__LIB_3__::func_444(iParam1);
			__LIB_3__::func_448(0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_3__::func_452(0);
		}
		else
		{
			__LIB_25__::func_310(iParam1);
		}
	}
	if (__LIB_18__::func_638(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_4046(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4136(iParam1))
		{
		}
		else if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_20__::func_857())
		{
			__LIB_25__::func_201(uParam0, 1);
		}
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_7__::func_297(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
		}
	}
	if (__LIB_3__::func_445())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (__LIB_2__::func_731(PLAYER::PLAYER_ID()) || __LIB_3__::func_317(PLAYER::PLAYER_ID()))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

int func_4046(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x140249
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
	if (((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1) && !BitTest(uParam0->f_22, 1)) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("oppressor2")) && !__LIB_4__::func_394(PLAYER::PLAYER_ID(), 81))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_2__::func_477())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (((iVar1 == joaat("caddy2") || iVar1 == joaat("caddy3")) || iVar1 == joaat("hauler2")) || iVar1 == joaat("phantom3"))
		{
			return 0;
		}
	}
	if (!__LIB_3__::func_327())
	{
		return 0;
	}
	if (__LIB_0__::func_190())
	{
		return 0;
	}
	if (__LIB_1__::func_156())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_4__::func_715())
	{
		return 0;
	}
	if (!__LIB_2__::func_739())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!__LIB_4__::func_37())
		{
			return 0;
		}
		bVar2 = __LIB_3__::func_416(PLAYER::PLAYER_ID());
		bVar3 = __LIB_0__::func_333(PLAYER::PLAYER_ID());
		if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (!func_669(iParam1, 1234, &Var0, 0, 0, bVar2, bVar3, iParam2))
			{
				return 0;
			}
		}
	}
	if (__LIB_3__::func_446(ENTITY::GET_ENTITY_MODEL(iParam1)))
	{
		return 0;
	}
	if (__LIB_3__::func_87(PLAYER::PLAYER_ID()) || __LIB_3__::func_86(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_20__::func_857() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if ((!__LIB_1__::func_104(iParam1, 1) && !__LIB_18__::func_179(iParam1, 0)) && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_2815059.f_303 != iParam1 && __LIB_18__::func_179(iParam1, 0)) && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_18__::func_179(iParam1, 0) && Global_2703735.f_501[PLAYER::PLAYER_ID()] == iParam1)
	{
		return 0;
	}
	if (Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */ && __LIB_0__::func_657(iParam1, 1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_278("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if ((Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_3__::func_416(PLAYER::PLAYER_ID())) && __LIB_6__::func_132(iParam1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_278("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if (Global_262145.f_21137 /* Tunable: -1117138206 */)
	{
		__LIB_1__::func_327(156, &iVar4, 1);
		__LIB_1__::func_252(__LIB_1__::func_165(), &iVar5);
		if (iVar5 == 156 && __LIB_1__::func_104(iParam1, 1))
		{
		}
		else if (iVar4 > 0)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_1__::func_278("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
			}
			return 0;
		}
	}
	if (__LIB_2__::func_342(iParam1, 0) || __LIB_2__::func_342(iParam1, 1))
	{
		return 0;
	}
	return 1;
}

int func_4054(int iParam0)//Position - 0x1408B8
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_4136(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_4__::func_715())
			{
				return 1;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 1;
			}
			if (NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_160())
				{
					if ((!__LIB_3__::func_998(Global_1946250.f_3630) && !__LIB_3__::func_859(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_4089(var uParam0)//Position - 0x14B467
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (BitTest(uParam0->f_22, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22.f_256, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_256))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam0->f_22.f_256, false);
				if (uParam0->f_22.f_255 != 0 && uParam0->f_22.f_255 != VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(uParam0->f_22.f_256))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_22.f_256, uParam0->f_22.f_255);
				}
				__LIB_25__::func_201(uParam0, 1);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_256);
			}
		}
		else
		{
			__LIB_25__::func_201(uParam0, 1);
		}
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 5)
								{
									if ((((func_4054(__LIB_4__::func_2(bVar2)) || !__LIB_4__::func_31()) || !__LIB_4__::func_715()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_4101(int iParam0, int iParam1)//Position - 0x14CDC1
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
	if (__LIB_26__::func_672(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_1__::func_265(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_588(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_0__::func_811(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_425(bVar7, 1)) && !__LIB_7__::func_291(bVar7)) && !__LIB_2__::func_509(bVar7, 14)) && !func_588(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_2__::func_560()) && !__LIB_4__::func_15(PLAYER::PLAYER_ID()))
					{
						__LIB_32__::func_865(iParam0, -1);
					}
					bVar9 = __LIB_3__::func_419(PLAYER::PLAYER_ID());
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_32__::func_865(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_237(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4102(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_237(1);
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4102(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4102(int iParam0)//Position - 0x14D054
{
	__LIB_32__::func_865(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4112(var uParam0, var uParam1, var uParam2)//Position - 0x14D52C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	var uVar4;
	*uParam2 = 1;
	if (__LIB_2__::func_746() || __LIB_3__::func_455())
	{
		return 0;
	}
	if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_20__::func_857() != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if (Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_8__::func_97();
	if ((!__LIB_4__::func_715() || __LIB_2__::func_368()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_25__::func_201(uParam1, 1);
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_201(uParam1, 1);
		}
	}
	if (__LIB_2__::func_498(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (__LIB_3__::func_87(PLAYER::PLAYER_ID()))
					{
						__LIB_6__::func_404(&(uParam1->f_22.f_94));
					}
					if (((((__LIB_18__::func_638(iVar0) && __LIB_3__::func_464(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && func_4046(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4136(*uParam0)) || ((__LIB_3__::func_445() && !func_4136(*uParam0)) && __LIB_1__::func_251(PLAYER::PLAYER_ID())))
					{
						if (MISC::IS_PC_VERSION())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
								{
									if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_2__::func_161("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
									}
								}
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("scramjet")))
								{
									if ((__LIB_2__::func_278(uParam1->f_22.f_94, 0) || __LIB_2__::func_161("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_2__::func_161("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
									}
								}
							}
						}
						__LIB_3__::func_345(1);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
						if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
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
									else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */, false);
									}
								}
								return 0;
							}
							if (__LIB_1__::func_177(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Mobile Operations Center. */, false);
									}
									else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_AIR" /* GXT: You cannot store this aircraft in your Mobile Operations Center. */, false);
									}
								}
								return 0;
							}
							if (__LIB_3__::func_416(PLAYER::PLAYER_ID()) && __LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MP_TRUCK_PEG" /* GXT: You cannot store a Pegasus vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()) && !__LIB_25__::func_382(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()) && (__LIB_3__::func_463(PLAYER::PLAYER_ID()) || __LIB_3__::func_462(PLAYER::PLAYER_ID())))
							{
								if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_191(8, -1)) && !__LIB_0__::func_190())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_VEHIN" /* GXT: You must remove the vehicle currently inside your Mobile Operations Center to modify this vehicle. */, false);
									}
								}
								return 0;
							}
							if (__LIB_0__::func_333(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */;
							}
							else if (__LIB_3__::func_416(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */;
							}
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
							if (uParam1->f_22.f_94 == -1 && __LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
							{
								__LIB_7__::func_508(&(uParam1->f_22.f_94), 5, sVar3, 0, 0, 0, 0);
								if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
								{
									__LIB_3__::func_312(0);
								}
							}
							if (__LIB_0__::func_77(0))
							{
								__LIB_6__::func_404(&(uParam1->f_22.f_94));
							}
							if ((__LIB_2__::func_187(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || BitTest(uParam1->f_22, 1))
							{
								__LIB_25__::func_201(uParam1, 0);
								if (!__LIB_3__::func_416(PLAYER::PLAYER_ID()) || func_4119(uParam1, uParam0))
								{
									if (__LIB_19__::func_153(&(uParam1->f_22), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										__LIB_6__::func_404(&(uParam1->f_22.f_94));
										if (BitTest(uParam1->f_22, 1))
										{
											MISC::CLEAR_BIT(&(uParam1->f_22), 1);
										}
										if (__LIB_7__::func_581(3, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 16);
										}
										else if (__LIB_7__::func_581(7, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 17);
										}
										if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
										{
											__LIB_3__::func_309(1);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f);
											VEHICLE::SET_VEHICLE_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1f);
											VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
										}
										if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
										{
											__LIB_4__::func_736(1, 0);
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
										}
										__LIB_7__::func_375(1, 81);
										__LIB_3__::func_310(1);
									}
								}
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
							__LIB_8__::func_611(0);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							HUD::DISABLE_FRONTEND_THIS_FRAME();
							HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
							if (__LIB_4__::func_41() && __LIB_7__::func_560())
							{
								if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
								{
									__LIB_3__::func_453(1);
									__LIB_3__::func_447(1);
								}
								__LIB_7__::func_394(1);
								__LIB_8__::func_240(81, uParam1, 0, 0);
								__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
								if (__LIB_18__::func_179(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
								{
									__LIB_3__::func_335(PLAYER::PLAYER_ID(), 81, 2);
								}
								else if (__LIB_0__::func_657(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
								{
									__LIB_4__::func_692(PLAYER::PLAYER_ID(), 81, 2);
								}
								__LIB_3__::func_344(__LIB_1__::func_265(PLAYER::PLAYER_ID()), 25f, 0);
								__LIB_3__::func_345(0);
								return 1;
							}
						}
					}
					else
					{
						__LIB_3__::func_345(0);
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
						__LIB_25__::func_201(uParam1, 1);
					}
				}
				else
				{
					if (__LIB_3__::func_997(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_6__::func_404(&(uParam1->f_22.f_94));
						}
					}
					__LIB_25__::func_201(uParam1, 1);
				}
			}
			else
			{
				func_4113(*uParam0);
				if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_649(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_580(&(uParam1->f_22.f_101), 0, 0);
					}
					else if (__LIB_2__::func_47(&(uParam1->f_22.f_101), 10000, 0))
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
							__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_3__::func_448(0);
							__LIB_3__::func_316(0);
							__LIB_3__::func_452(0);
							__LIB_0__::func_579(&(uParam1->f_22.f_101));
						}
					}
					if (__LIB_1__::func_264(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_4__::func_735(Global_1946250.f_3630) && __LIB_3__::func_942(Global_1946250.f_3630))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_8__::func_611(0);
						__LIB_2__::func_452(Global_1946250.f_3630);
						MISC::SET_BIT(&(Global_1946250.f_506), 1);
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_3__::func_343(1);
						__LIB_7__::func_375(1, 81);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_0__::func_579(&(uParam1->f_22.f_101));
					}
					if (__LIB_4__::func_735(Global_1946250.f_3630) || __LIB_3__::func_942(Global_1946250.f_3630))
					{
						if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
						{
							__LIB_3__::func_309(1);
							__LIB_3__::func_453(1);
							__LIB_3__::func_447(1);
						}
						return 1;
					}
				}
				else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
				{
					if (__LIB_4__::func_2(Global_1946250.f_3630) != 81 && !__LIB_3__::func_942(PLAYER::PLAYER_ID()))
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
							__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_3__::func_448(0);
							__LIB_3__::func_316(0);
							__LIB_3__::func_452(0);
							MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 7);
							__LIB_0__::func_579(&(uParam1->f_22.f_101));
						}
					}
				}
			}
		}
		else
		{
			if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_6__::func_404(&(uParam1->f_22.f_94));
			}
			__LIB_25__::func_201(uParam1, 1);
		}
	}
	else if (__LIB_2__::func_278(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_6__::func_404(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_4113(int iParam0)//Position - 0x14DF4C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_3__::func_317(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 5)
								{
									if (func_4054(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
										}
										if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_3__::func_448(0);
											__LIB_3__::func_316(0);
										}
									}
									else if (__LIB_4__::func_31())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_3__::func_448(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false), true, false);
												NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_3__::func_452(1);
											__LIB_3__::func_448(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
											__LIB_3__::func_452(0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_3__::func_316(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_1(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_1__::func_183(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_264(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_170(__LIB_4__::func_2(bVar2)) == 5)
								{
									if ((((func_4054(iParam0) || !__LIB_4__::func_31()) || !__LIB_4__::func_715()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (__LIB_2__::func_731(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
										}
										__LIB_3__::func_448(0);
										__LIB_3__::func_316(0);
										__LIB_3__::func_452(0);
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_4119(var uParam0, var uParam1)//Position - 0x14E765
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	iVar2 = -1;
	iVar6 = 18;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Vehicle"))
		{
			if (DECORATOR::DECOR_GET_INT(iVar0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				bVar3 = true;
			}
			else
			{
				bVar4 = true;
			}
		}
	}
	if (bVar3 || (!bVar4 && ENTITY::DOES_ENTITY_EXIST(iVar0)))
	{
		__LIB_1__::func_327(156, &iVar2, 1);
		__LIB_1__::func_252(__LIB_1__::func_165(), &iVar1);
		if (iVar1 == 156 && bVar3)
		{
			MISC::SET_BIT(&(Global_1852994.f_22), 27);
			MISC::CLEAR_BIT(&(Global_1852994.f_22), 19);
			MISC::CLEAR_BIT(&(Global_1852994.f_22), 10);
			return 1;
		}
		else if (iVar2 < 0)
		{
			Global_1852994.f_189 = iVar0;
			MISC::CLEAR_BIT(&(Global_1852994.f_22), 19);
			if (!bVar3)
			{
				__LIB_25__::func_564(iVar0, &(Global_1852994.f_29), 1);
				Global_1852994.f_183 = 0;
				if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
				}
				if (VEHICLE::GET_VEHICLE_MOD_KIT(iVar0) >= 0)
				{
					Global_1852994.f_173 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
					Global_1852994.f_174 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
					Global_1852994.f_175 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
					Global_1852994.f_176 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
					Global_1852994.f_177 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
					Global_1852994.f_178 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
					Global_1852994.f_179 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
					Global_1852994.f_180 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(iVar0);
					Global_1852994.f_181 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
					Global_1852994.f_182 = __LIB_0__::func_265(iVar0);
					Global_1852994.f_183 = 1;
				}
				MISC::SET_BIT(&(Global_1852994.f_22), 19);
			}
			MISC::SET_BIT(&(Global_1852994.f_22), 27);
			return 1;
		}
		else
		{
			__LIB_1__::func_327(156, &iVar2, 1);
			if (bVar3 && !__LIB_7__::func_582(Global_1585857[iVar2 /*142*/].f_66, __LIB_32__::func_867(iVar1)))
			{
				iVar5 = 1;
			}
			if (bVar3 && iVar1 == 223)
			{
				if (Global_1585857[iVar2 /*142*/].f_66 != joaat("oppressor2"))
				{
					iVar5 = 1;
				}
			}
			if (bVar3 && iVar5 == 0)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULL2" /* GXT: Adding this vehicle to your Mobile Operations Center will cause your currently stored Personal Vehicle to be transferred to a Garage. */, iVar6, 0, false, -1, 0, 0, true, 0);
			}
			else if (bVar3 && iVar5)
			{
				iVar6 = 16;
				if (iVar1 == 223)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULLT" /* GXT: You cannot store this vehicle in your Mobile Operations Center. The vehicle in the Mobile Operations Center cannot be moved to your Terrorbyte. */, iVar6, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULLC" /* GXT: You cannot store this vehicle in your Mobile Operations Center. The vehicle in the Mobile Operations Center cannot be moved to your Clubhouse. */, iVar6, 0, false, -1, 0, 0, true, 0);
				}
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULL1" /* GXT: Adding this vehicle to your Mobile Operations Center will cause your currently stored Personal Vehicle (and any purchased upgrades) to be lost. */, iVar6, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(uParam1->f_3, 9) && !(bVar3 && iVar5))
			{
				if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || BitTest(uParam1->f_3, 11))
				{
					Global_1852994.f_189 = iVar0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_25__::func_564(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &(Global_1852994.f_29), 1);
					Global_1852994.f_183 = 0;
					if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
					}
					if (VEHICLE::GET_VEHICLE_MOD_KIT(iVar0) >= 0)
					{
						Global_1852994.f_173 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
						Global_1852994.f_174 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
						Global_1852994.f_175 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
						Global_1852994.f_176 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
						Global_1852994.f_177 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
						Global_1852994.f_178 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
						Global_1852994.f_179 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
						Global_1852994.f_180 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(iVar0);
						Global_1852994.f_181 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
						Global_1852994.f_182 = __LIB_0__::func_265(iVar0);
						Global_1852994.f_183 = 1;
					}
					MISC::SET_BIT(&(Global_1852994.f_22), 27);
					MISC::SET_BIT(&(uParam1->f_3), 11);
					if (bVar3 && iVar5 == 0)
					{
						MISC::SET_BIT(&(Global_1852994.f_22), 10);
						MISC::CLEAR_BIT(&(Global_1852994.f_22), 19);
					}
					else
					{
						MISC::SET_BIT(&(Global_1852994.f_22), 19);
						MISC::CLEAR_BIT(&(Global_1852994.f_22), 10);
						if (!bVar3)
						{
							__LIB_3__::func_437(1, 0, 1, 0, 0, 0, 0);
						}
						if (iVar5 || !bVar3)
						{
							MISC::SET_BIT(&(Global_1852994.f_22), 28);
						}
					}
					return 1;
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				MISC::CLEAR_BIT(&(uParam1->f_3), 9);
			}
			if (!BitTest(uParam1->f_3, 10))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					HUD::CLEAR_HELP(true);
					__LIB_6__::func_404(&(uParam0->f_22.f_94));
					__LIB_25__::func_201(uParam0, 1);
					if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_312(0);
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				MISC::CLEAR_BIT(&(uParam1->f_3), 10);
			}
		}
	}
	else if (bVar4)
	{
		if (__LIB_2__::func_278(uParam0->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_6__::func_404(&(uParam0->f_22.f_94));
			if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
			{
				__LIB_3__::func_312(0);
			}
		}
	}
	return 0;
}

int func_4136(int iParam0)//Position - 0x14F550
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = __LIB_8__::func_97();
	iVar2 = __LIB_7__::func_297(iVar1, 1, 0);
	if (__LIB_26__::func_626(bVar0, 7))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1, false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar1) && !__LIB_4__::func_394(PLAYER::PLAYER_ID(), 81))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if ((!ENTITY::IS_ENTITY_VISIBLE(iVar1) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) > 0.5f && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
		{
			__LIB_7__::func_433(0, iParam0, 0);
			return 1;
		}
	}
	if (__LIB_2__::func_477())
	{
		return 1;
	}
	if (__LIB_0__::func_706())
	{
		return 1;
	}
	if ((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_251(iVar2) && !__LIB_4__::func_972(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_3__::func_87(iVar2) || __LIB_3__::func_86(iVar2))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_20__::func_857())
		{
			return 1;
		}
	}
	if (__LIB_3__::func_85(iVar2))
	{
		return 1;
	}
	__LIB_8__::func_239(iParam0, &Var3);
	if (__LIB_3__::func_949(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_948(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_7__::func_583(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_26__::func_673(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_947(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_80(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_79(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_78(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_466(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_3__::func_465(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_232()))
		{
			__LIB_8__::func_239(iParam0, &Var4);
			if (__LIB_0__::func_529(__LIB_1__::func_232(), Var4, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_154(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_6__::func_139())
	{
		return 1;
	}
	if (__LIB_3__::func_76(iVar2))
	{
		return 1;
	}
	if (iVar2 != __LIB_0__::func_160() && iVar2 != PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318, 12))
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_160())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 20))
		{
			return 1;
		}
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 23))
		{
			return 1;
		}
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (Global_2815059.f_310 && !__LIB_4__::func_972(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_2__::func_746())
	{
		return 1;
	}
	__LIB_8__::func_239(iParam0, &Var5);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !__LIB_1__::func_251(iVar2)) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8.1f, 0f) };
		if (MISC::ABSF((Var6.f_2 - Var5.f_2)) > 4f)
		{
			if (__LIB_4__::func_510(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_3__::func_75(Var5))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_5__::func_945())
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_4__::func_510(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_1__::func_396(iVar2))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 3))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_9, 5))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_307()) && !__LIB_0__::func_494())
	{
		return 1;
	}
	if (__LIB_1__::func_174(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_19__::func_154(iVar1) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
	{
		if ((!__LIB_1__::func_251(iVar2) && !__LIB_4__::func_972(PLAYER::PLAYER_ID())) && __LIB_4__::func_510(iVar2))
		{
			if (!BitTest(Global_1946250.f_1, 3))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_3__::func_998(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_170(__LIB_4__::func_721(PLAYER::PLAYER_ID())) != 5)
		{
		}
	}
	if (__LIB_2__::func_104())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_1, 3))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 3);
	}
	return 0;
}

void func_4173(var uParam0, int iParam1)//Position - 0x151357
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1417165/*func_4346*/;
			break;
		case 1:
			uParam0->f_30 = 1417049/*func_4345*/;
			break;
		case 2:
			uParam0->f_31 = 1415819/*func_4342*/;
			break;
		case 3:
			uParam0->f_34 = 1415749/*func_4341*/;
			break;
		case 4:
			uParam0->f_12 = 1415576/*func_4340*/;
			break;
		case 6:
			uParam0->f_32 = 1415452/*func_4339*/;
			break;
		case 106:
			uParam0->f_52 = 1415229/*func_4337*/;
			break;
		case 111:
			uParam0->f_35 = 1415215/*func_4336*/;
			break;
		case 79:
			*uParam0 = 1415191/*func_4335*/;
			break;
		case 37:
			uParam0->f_18 = 1415073/*func_4334*/;
			break;
		case 38:
			uParam0->f_9 = 1414835/*func_4331*/;
			break;
		case 11:
			uParam0->f_11 = 1414826/*func_4330*/;
			break;
		case 12:
			uParam0->f_33 = 1413122/*func_4328*/;
			break;
		case 14:
			uParam0->f_11 = 1413113/*func_4327*/;
			break;
		case 109:
			uParam0->f_56 = 1413105/*func_4326*/;
			break;
		case 15:
			uParam0->f_2 = 1412599/*func_4322*/;
			break;
		case 13:
			uParam0->f_2 = 1412560/*func_4321*/;
			break;
		case 44:
			*uParam0 = 1412551/*func_4320*/;
			break;
		case 75:
			uParam0->f_4 = 1412542/*func_4319*/;
			break;
		case 16:
			uParam0->f_5 = 1412074/*func_4314*/;
			break;
		case 108:
			uParam0->f_55 = 1410035/*func_4310*/;
			break;
		case 17:
			uParam0->f_17 = 1407899/*func_4302*/;
			break;
		case 19:
			uParam0->f_17 = 1407873/*func_4301*/;
			break;
		case 20:
			uParam0->f_3 = 1407789/*func_4300*/;
			break;
		case 21:
			uParam0->f_3 = 1407689/*func_4299*/;
			break;
		case 74:
			uParam0->f_53 = 1407522/*func_4298*/;
			break;
		case 22:
			uParam0->f_24 = 1407419/*func_4297*/;
			break;
		case 25:
			uParam0->f_23 = 1406767/*func_4295*/;
			break;
		case 30:
			uParam0->f_8 = 1406267/*func_4292*/;
			break;
		case 31:
			uParam0->f_39 = 1405974/*func_4291*/;
			break;
		case 33:
			uParam0->f_40 = 1404976/*func_4287*/;
			break;
		case 32:
			*uParam0 = 1404872/*func_4286*/;
			break;
		case 34:
			uParam0->f_41 = 1402727/*func_4285*/;
			break;
		case 35:
			uParam0->f_42 = 1315477/*func_4069*/;
			break;
		case 36:
			uParam0->f_58 = 1402667/*func_4284*/;
			break;
		case 45:
			uParam0->f_14 = 1402658/*func_4283*/;
			break;
		case 46:
			uParam0->f_14 = 1402649/*func_4282*/;
			break;
		case 110:
			uParam0->f_57 = 1402383/*func_4281*/;
			break;
		case 77:
			uParam0->f_13 = 1402372/*func_4280*/;
			break;
		case 47:
			uParam0->f_43 = 1402232/*func_4279*/;
			break;
		case 49:
			uParam0->f_8 = 1402191/*func_4278*/;
			break;
		case 50:
			*uParam0 = 1401994/*func_4275*/;
			break;
		case 51:
			*uParam0 = 1401910/*func_4274*/;
			break;
		case 52:
			uParam0->f_15 = 1401899/*func_4273*/;
			break;
		case 53:
			uParam0->f_13 = 1401617/*func_4272*/;
			break;
		case 54:
			uParam0->f_45 = 1401609/*func_4271*/;
			break;
		case 56:
			uParam0->f_46 = 1401600/*func_4270*/;
			break;
		case 57:
			uParam0->f_11 = 1401539/*func_4269*/;
			break;
		case 58:
			uParam0->f_13 = 1401257/*func_4268*/;
			break;
		case 64:
			uParam0->f_47 = 1399342/*func_4259*/;
			break;
		case 65:
			uParam0->f_21 = 1399299/*func_4258*/;
			break;
		case 66:
			uParam0->f_21 = 1398596/*func_4255*/;
			break;
		case 67:
			uParam0->f_21 = 1397512/*func_4247*/;
			break;
		case 68:
			*uParam0 = 1396921/*func_4245*/;
			break;
		case 69:
			*uParam0 = 1396912/*func_4244*/;
			break;
		case 70:
			uParam0->f_48 = 1396900/*func_4243*/;
			break;
		case 71:
			uParam0->f_49 = 1396891/*func_4242*/;
			break;
		case 107:
			uParam0->f_50 = 1396879/*func_4241*/;
			break;
		case 80:
			uParam0->f_7 = 1394209/*func_4229*/;
			break;
		case 84:
			uParam0->f_1 = 1392361/*func_4218*/;
			break;
		case 85:
			uParam0->f_1 = 1390027/*func_4212*/;
			break;
		case 87:
			uParam0->f_1 = 1385802/*func_4191*/;
			break;
		case 88:
			uParam0->f_1 = 1385793/*func_4190*/;
			break;
		case 90:
			uParam0->f_1 = 1385750/*func_4189*/;
			break;
		case 91:
			uParam0->f_1 = 1385449/*func_4187*/;
			break;
		case 92:
			uParam0->f_1 = 1384686/*func_4185*/;
			break;
		case 94:
			uParam0->f_1 = 1383187/*func_4184*/;
			break;
		case 102:
			uParam0->f_1 = 1382619/*func_4178*/;
			break;
		case 103:
			uParam0->f_22 = 1382611/*func_4177*/;
			break;
		case 104:
			uParam0->f_1 = 1382536/*func_4176*/;
			break;
		case 78:
			uParam0->f_59 = 1382462/*func_4175*/;
			break;
		case 125:
			uParam0->f_19 = 1382438/*func_4174*/;
			break;
	}
}

int func_4185(var uParam0, var uParam1)//Position - 0x1520EE
{
	__LIB_25__::func_103(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_25__::func_103(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_377(&(uParam1->f_248), &(uParam1->f_109), 14);
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
		__LIB_2__::func_818(&(uParam1->f_109), 1);
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
	__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4218(int iParam0, var uParam1)//Position - 0x153EE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_3__::func_478(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_2__::func_399() == 1)
		{
			__LIB_7__::func_394(0);
		}
	}
	switch (__LIB_2__::func_399())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1433(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_7__::func_673(iParam0, &(uParam1->f_140[0]));
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
								func_377(&iVar2, &(uParam1->f_109), 14);
								func_289(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_377(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_377(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_377(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_289(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_7__::func_673(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_7__::func_673(iParam0, &(uParam1->f_109.f_12));
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
			__LIB_3__::func_477(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_7__::func_676(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_18__::func_706(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_2__::func_399() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1433(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_3__::func_493(&(uParam1->f_109.f_1), 5f);
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
		if (!__LIB_7__::func_587(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_3__::func_491(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4295(int iParam0, int iParam1)//Position - 0x15772F
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
	if (__LIB_7__::func_680(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_6__::func_911())
		{
			iVar4 = __LIB_3__::func_808();
		}
		Var6 = { __LIB_3__::func_84(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_807(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_267(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_2__::func_180(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_425(bVar7, 1) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_588(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_2__::func_457(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_7__::func_291(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_509(bVar7, 14)) && !func_588(bVar7))
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
						__LIB_3__::func_805(iParam1, 1, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_3__::func_805(iParam1, 2, 1);
					}
					else
					{
						__LIB_3__::func_805(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_2__::func_560())
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					if (__LIB_2__::func_444(0, iParam1))
					{
						__LIB_25__::func_444(iParam0, -1);
					}
					else if (__LIB_2__::func_444(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4296(iParam0);
					}
					else if (__LIB_2__::func_444(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_25__::func_181(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4296(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_3__::func_805(iParam1, 1, 0);
					__LIB_3__::func_805(iParam1, 2, 0);
				}
void func_4296(int iParam0)//Position - 0x15798D
{
	__LIB_25__::func_444(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_18__::func_658(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4322(var uParam0)//Position - 0x158DF7
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	bVar0 = false;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_4__::func_44(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			return 1;
		}
		else if (__LIB_8__::func_100())
		{
			return 1;
		}
	}
	if (!__LIB_32__::func_187(1) && !bVar0)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 7))
	{
		return 1;
	}
	bVar1 = false;
	if (__LIB_26__::func_626(bVar1, 6) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_2__::func_509(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_4347(var uParam0, int iParam1)//Position - 0x159FD6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1459148/*func_4422*/;
			break;
		case 1:
			uParam0->f_30 = 1456830/*func_4417*/;
			break;
		case 2:
			uParam0->f_31 = 1456767/*func_4415*/;
			break;
		case 3:
			uParam0->f_34 = 1456711/*func_4414*/;
			break;
		case 4:
			uParam0->f_12 = 1455996/*func_4413*/;
			break;
		case 6:
			uParam0->f_32 = 1455988/*func_4412*/;
			break;
		case 111:
			uParam0->f_35 = 1455979/*func_4411*/;
			break;
		case 79:
			*uParam0 = 1455955/*func_4410*/;
			break;
		case 11:
			uParam0->f_11 = 1455946/*func_4409*/;
			break;
		case 12:
			uParam0->f_33 = 1454118/*func_4406*/;
			break;
		case 14:
			uParam0->f_11 = 1454109/*func_4405*/;
			break;
		case 109:
			uParam0->f_56 = 1454101/*func_4404*/;
			break;
		case 13:
			uParam0->f_2 = 1454092/*func_4403*/;
			break;
		case 15:
			uParam0->f_2 = 1454083/*func_4402*/;
			break;
		case 75:
			uParam0->f_4 = 1454074/*func_4401*/;
			break;
		case 16:
			uParam0->f_5 = 1454065/*func_4400*/;
			break;
		case 108:
			uParam0->f_55 = 1454056/*func_4399*/;
			break;
		case 17:
			uParam0->f_17 = 1454031/*func_4398*/;
			break;
		case 19:
			uParam0->f_17 = 1454020/*func_4397*/;
			break;
		case 20:
			uParam0->f_3 = 1454011/*func_4396*/;
			break;
		case 21:
			uParam0->f_3 = 1454002/*func_4395*/;
			break;
		case 74:
			uParam0->f_53 = 1453993/*func_4394*/;
			break;
		case 22:
			uParam0->f_24 = 1453985/*func_4393*/;
			break;
		case 25:
			uParam0->f_23 = 1453977/*func_4392*/;
			break;
		case 30:
			uParam0->f_8 = 1452816/*func_4390*/;
			break;
		case 31:
			uParam0->f_39 = 1452805/*func_4389*/;
			break;
		case 33:
			uParam0->f_40 = 1452777/*func_4388*/;
			break;
		case 34:
			uParam0->f_41 = 1452768/*func_4387*/;
			break;
		case 36:
			uParam0->f_58 = 1452723/*func_4386*/;
			break;
		case 35:
			uParam0->f_42 = 1419037/*func_4383*/;
			break;
		case 45:
			uParam0->f_14 = 1419028/*func_4382*/;
			break;
		case 46:
			uParam0->f_14 = 1419019/*func_4381*/;
			break;
		case 110:
			uParam0->f_57 = 1419011/*func_4380*/;
			break;
		case 77:
			uParam0->f_13 = 1419000/*func_4379*/;
			break;
		case 47:
			uParam0->f_43 = 1418992/*func_4378*/;
			break;
		case 49:
			uParam0->f_8 = 1418983/*func_4377*/;
			break;
		case 50:
			*uParam0 = 1418684/*func_4371*/;
			break;
		case 51:
			*uParam0 = 1418655/*func_4370*/;
			break;
		case 52:
			uParam0->f_15 = 1418624/*func_4369*/;
			break;
		case 53:
			uParam0->f_13 = 1418590/*func_4368*/;
			break;
		case 54:
			uParam0->f_45 = 1418546/*func_4367*/;
			break;
		case 56:
			uParam0->f_46 = 1418517/*func_4366*/;
			break;
		case 57:
			uParam0->f_11 = 1418508/*func_4365*/;
			break;
		case 58:
			uParam0->f_13 = 1418451/*func_4363*/;
			break;
		case 64:
			uParam0->f_47 = 1418443/*func_4362*/;
			break;
		case 65:
			uParam0->f_21 = 1418435/*func_4361*/;
			break;
		case 66:
			uParam0->f_21 = 1418427/*func_4360*/;
			break;
		case 67:
			uParam0->f_21 = 1418419/*func_4359*/;
			break;
		case 68:
			*uParam0 = 1418393/*func_4358*/;
			break;
		case 69:
			*uParam0 = 1418367/*func_4357*/;
			break;
		case 70:
			uParam0->f_48 = 1418355/*func_4356*/;
			break;
		case 71:
			uParam0->f_49 = 1418346/*func_4355*/;
			break;
		case 107:
			uParam0->f_50 = 1418334/*func_4354*/;
			break;
		case 80:
			uParam0->f_7 = 1418325/*func_4353*/;
			break;
		case 78:
			uParam0->f_59 = 1418317/*func_4352*/;
			break;
		case 126:
			*uParam0 = 1418134/*func_4348*/;
			break;
	}
}

void func_4424(var uParam0, int iParam1)//Position - 0x1648BD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1503011/*func_4500*/;
			break;
		case 1:
			uParam0->f_30 = 1502701/*func_4499*/;
			break;
		case 2:
			uParam0->f_31 = 1497766/*func_4493*/;
			break;
		case 3:
			uParam0->f_34 = 1497737/*func_4492*/;
			break;
		case 4:
			uParam0->f_12 = 1497543/*func_4491*/;
			break;
		case 6:
			uParam0->f_32 = 1497193/*func_4490*/;
			break;
		case 111:
			uParam0->f_35 = 1497051/*func_4488*/;
			break;
		case 79:
			*uParam0 = 1497027/*func_4487*/;
			break;
		case 37:
			uParam0->f_18 = 1496491/*func_4485*/;
			break;
		case 38:
			uParam0->f_9 = 1496386/*func_4484*/;
			break;
		case 11:
			uParam0->f_11 = 1496377/*func_4483*/;
			break;
		case 12:
			uParam0->f_33 = 1496272/*func_4481*/;
			break;
		case 14:
			uParam0->f_11 = 1496263/*func_4480*/;
			break;
		case 109:
			uParam0->f_56 = 1496255/*func_4479*/;
			break;
		case 13:
			uParam0->f_2 = 1496246/*func_4478*/;
			break;
		case 44:
			*uParam0 = 1496237/*func_4477*/;
			break;
		case 15:
			uParam0->f_2 = 1495948/*func_4476*/;
			break;
		case 75:
			uParam0->f_4 = 1495939/*func_4475*/;
			break;
		case 16:
			uParam0->f_5 = 1495855/*func_4474*/;
			break;
		case 108:
			uParam0->f_55 = 1495846/*func_4473*/;
			break;
		case 17:
			uParam0->f_17 = 1495226/*func_4471*/;
			break;
		case 19:
			uParam0->f_17 = 1495026/*func_4470*/;
			break;
		case 20:
			uParam0->f_3 = 1494962/*func_4469*/;
			break;
		case 21:
			uParam0->f_3 = 1494902/*func_4468*/;
			break;
		case 74:
			uParam0->f_53 = 1494893/*func_4467*/;
			break;
		case 22:
			uParam0->f_24 = 1494652/*func_4466*/;
			break;
		case 25:
			uParam0->f_23 = 1494279/*func_4463*/;
			break;
		case 30:
			uParam0->f_8 = 1494141/*func_4462*/;
			break;
		case 31:
			uParam0->f_39 = 1493701/*func_4460*/;
			break;
		case 33:
			uParam0->f_40 = 1493036/*func_4455*/;
			break;
		case 34:
			uParam0->f_41 = 1490453/*func_4454*/;
			break;
		case 36:
			uParam0->f_58 = 1490408/*func_4453*/;
			break;
		case 35:
			uParam0->f_42 = 1464564/*func_4452*/;
			break;
		case 45:
			uParam0->f_14 = 1464336/*func_4451*/;
			break;
		case 46:
			uParam0->f_14 = 1464160/*func_4450*/;
			break;
		case 110:
			uParam0->f_57 = 1464152/*func_4449*/;
			break;
		case 77:
			uParam0->f_13 = 1464141/*func_4448*/;
			break;
		case 47:
			uParam0->f_43 = 1463899/*func_4447*/;
			break;
		case 49:
			uParam0->f_8 = 1463867/*func_4446*/;
			break;
		case 50:
			*uParam0 = 1463801/*func_4445*/;
			break;
		case 51:
			*uParam0 = 1463777/*func_4444*/;
			break;
		case 52:
			uParam0->f_15 = 1463594/*func_4443*/;
			break;
		case 53:
			uParam0->f_13 = 1462999/*func_4441*/;
			break;
		case 54:
			uParam0->f_45 = 1462762/*func_4440*/;
			break;
		case 56:
			uParam0->f_46 = 1462753/*func_4439*/;
			break;
		case 57:
			uParam0->f_11 = 1462688/*func_4438*/;
			break;
		case 58:
			uParam0->f_13 = 1462266/*func_4437*/;
			break;
		case 64:
			uParam0->f_47 = 1462258/*func_4436*/;
			break;
		case 65:
			uParam0->f_21 = 1462250/*func_4435*/;
			break;
		case 66:
			uParam0->f_21 = 1462190/*func_4434*/;
			break;
		case 67:
			uParam0->f_21 = 1462172/*func_4433*/;
			break;
		case 68:
			*uParam0 = 1462163/*func_4432*/;
			break;
		case 69:
			*uParam0 = 1462154/*func_4431*/;
			break;
		case 70:
			uParam0->f_48 = 1461650/*func_4430*/;
			break;
		case 71:
			uParam0->f_49 = 1461502/*func_4429*/;
			break;
		case 107:
			uParam0->f_50 = 1461457/*func_4428*/;
			break;
		case 80:
			uParam0->f_7 = 1461448/*func_4427*/;
			break;
		case 78:
			uParam0->f_59 = 1461440/*func_4426*/;
			break;
		case 125:
			uParam0->f_19 = 1461424/*func_4425*/;
			break;
	}
}

int func_4445(int iParam0)//Position - 0x1655F9
{
	if (__LIB_8__::func_108(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (__LIB_2__::func_431() == iParam0)
	{
		return 0;
	}
	if (__LIB_18__::func_948(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		if (!func_4476(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4476(int iParam0)//Position - 0x16D38C
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	bool bVar3;
	if (__LIB_1__::func_909() && !__LIB_7__::func_379(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 6))
	{
		return 1;
	}
	bVar0 = false;
	if (__LIB_4__::func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_7__::func_379(PLAYER::PLAYER_ID()))
		{
			if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 192)
			{
				bVar1 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
				if (bVar1 != -1)
				{
					Var2 = { Global_1892703[bVar1 /*599*/].f_10.f_194 };
					if (__LIB_3__::func_499(iParam0) != Var2.f_0)
					{
						return 1;
					}
					else
					{
						bVar0 = true;
					}
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (!__LIB_32__::func_187(1) && !bVar0)
	{
		return 1;
	}
	bVar3 = false;
	if ((__LIB_26__::func_626(bVar3, 4) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !__LIB_2__::func_104())
	{
		return 1;
	}
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_4501(var uParam0, int iParam1)//Position - 0x16EF2C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1537982/*func_4632*/;
			break;
		case 1:
			uParam0->f_30 = 1537872/*func_4631*/;
			break;
		case 2:
			uParam0->f_31 = 1535418/*func_4626*/;
			break;
		case 3:
			uParam0->f_34 = 1535389/*func_4625*/;
			break;
		case 4:
			uParam0->f_12 = 1535229/*func_4624*/;
			break;
		case 6:
			uParam0->f_32 = 1535111/*func_4623*/;
			break;
		case 111:
			uParam0->f_35 = 1534894/*func_4620*/;
			break;
		case 79:
			*uParam0 = 1534870/*func_4619*/;
			break;
		case 37:
			uParam0->f_18 = 1534752/*func_4618*/;
			break;
		case 38:
			uParam0->f_9 = 1534601/*func_4615*/;
			break;
		case 11:
			uParam0->f_11 = 1534592/*func_4614*/;
			break;
		case 12:
			uParam0->f_33 = 1533589/*func_4611*/;
			break;
		case 14:
			uParam0->f_11 = 1533580/*func_4610*/;
			break;
		case 109:
			uParam0->f_56 = 1533572/*func_4609*/;
			break;
		case 13:
			uParam0->f_2 = 1533563/*func_4608*/;
			break;
		case 15:
			uParam0->f_2 = 1533409/*func_4607*/;
			break;
		case 75:
			uParam0->f_4 = 1533400/*func_4606*/;
			break;
		case 16:
			uParam0->f_5 = 1533312/*func_4605*/;
			break;
		case 108:
			uParam0->f_55 = 1532525/*func_4599*/;
			break;
		case 17:
			uParam0->f_17 = 1531897/*func_4595*/;
			break;
		case 19:
			uParam0->f_17 = 1531871/*func_4594*/;
			break;
		case 20:
			uParam0->f_3 = 1531832/*func_4593*/;
			break;
		case 21:
			uParam0->f_3 = 1531772/*func_4592*/;
			break;
		case 74:
			uParam0->f_53 = 1531763/*func_4591*/;
			break;
		case 22:
			uParam0->f_24 = 1531710/*func_4590*/;
			break;
		case 25:
			uParam0->f_23 = 1531406/*func_4589*/;
			break;
		case 30:
			uParam0->f_8 = 1531283/*func_4588*/;
			break;
		case 31:
			uParam0->f_39 = 1531063/*func_4587*/;
			break;
		case 33:
			uParam0->f_40 = 1530778/*func_4586*/;
			break;
		case 34:
			uParam0->f_41 = 1530372/*func_4585*/;
			break;
		case 36:
			uParam0->f_58 = 1530327/*func_4584*/;
			break;
		case 35:
			uParam0->f_42 = 1512797/*func_4583*/;
			break;
		case 45:
			uParam0->f_14 = 1512788/*func_4582*/;
			break;
		case 46:
			uParam0->f_14 = 1512704/*func_4581*/;
			break;
		case 110:
			uParam0->f_57 = 1512696/*func_4580*/;
			break;
		case 77:
			uParam0->f_13 = 1512673/*func_4579*/;
			break;
		case 47:
			uParam0->f_43 = 1512621/*func_4578*/;
			break;
		case 49:
			uParam0->f_8 = 1512589/*func_4577*/;
			break;
		case 50:
			*uParam0 = 1512411/*func_4576*/;
			break;
		case 51:
			*uParam0 = 1512314/*func_4575*/;
			break;
		case 52:
			uParam0->f_15 = 1512303/*func_4574*/;
			break;
		case 53:
			uParam0->f_13 = 1511988/*func_4572*/;
			break;
		case 54:
			uParam0->f_45 = 1511124/*func_4565*/;
			break;
		case 56:
			uParam0->f_46 = 1511115/*func_4564*/;
			break;
		case 57:
			uParam0->f_11 = 1506305/*func_4527*/;
			break;
		case 58:
			uParam0->f_13 = 1506291/*func_4526*/;
			break;
		case 64:
			uParam0->f_47 = 1504853/*func_4513*/;
			break;
		case 65:
			uParam0->f_21 = 1504845/*func_4512*/;
			break;
		case 66:
			uParam0->f_21 = 1504794/*func_4511*/;
			break;
		case 67:
			uParam0->f_21 = 1504766/*func_4510*/;
			break;
		case 68:
			*uParam0 = 1504757/*func_4509*/;
			break;
		case 69:
			*uParam0 = 1504748/*func_4508*/;
			break;
		case 70:
			uParam0->f_48 = 1504464/*func_4507*/;
			break;
		case 71:
			uParam0->f_49 = 1504368/*func_4506*/;
			break;
		case 107:
			uParam0->f_50 = 1504356/*func_4505*/;
			break;
		case 80:
			uParam0->f_7 = 1504170/*func_4504*/;
			break;
		case 78:
			uParam0->f_59 = 1503998/*func_4502*/;
			break;
	}
}

int func_4607(var uParam0)//Position - 0x1765E1
{
	bool bVar0;
	if (__LIB_1__::func_909())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 178)
		{
			return 1;
		}
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	bVar0 = false;
	if (__LIB_26__::func_626(bVar0, 5) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_4633(var uParam0, int iParam1)//Position - 0x1777C7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1565819/*func_4705*/;
			break;
		case 1:
			uParam0->f_30 = 1565673/*func_4704*/;
			break;
		case 2:
			uParam0->f_31 = 1560485/*func_4698*/;
			break;
		case 3:
			uParam0->f_34 = 1560456/*func_4697*/;
			break;
		case 4:
			uParam0->f_12 = 1560046/*func_4695*/;
			break;
		case 6:
			uParam0->f_32 = 1559876/*func_4694*/;
			break;
		case 111:
			uParam0->f_35 = 1559481/*func_4691*/;
			break;
		case 79:
			*uParam0 = 1559457/*func_4690*/;
			break;
		case 11:
			uParam0->f_11 = 1559448/*func_4689*/;
			break;
		case 12:
			uParam0->f_33 = 1559353/*func_4687*/;
			break;
		case 14:
			uParam0->f_11 = 1559344/*func_4686*/;
			break;
		case 109:
			uParam0->f_56 = 1559336/*func_4685*/;
			break;
		case 13:
			uParam0->f_2 = 1559327/*func_4684*/;
			break;
		case 15:
			uParam0->f_2 = 1559042/*func_4681*/;
			break;
		case 75:
			uParam0->f_4 = 1559033/*func_4680*/;
			break;
		case 16:
			uParam0->f_5 = 1558945/*func_4679*/;
			break;
		case 108:
			uParam0->f_55 = 1558936/*func_4678*/;
			break;
		case 17:
			uParam0->f_17 = 1558683/*func_4677*/;
			break;
		case 19:
			uParam0->f_17 = 1558657/*func_4676*/;
			break;
		case 20:
			uParam0->f_3 = 1558648/*func_4675*/;
			break;
		case 21:
			uParam0->f_3 = 1558639/*func_4674*/;
			break;
		case 74:
			uParam0->f_53 = 1558630/*func_4673*/;
			break;
		case 22:
			uParam0->f_24 = 1558622/*func_4672*/;
			break;
		case 25:
			uParam0->f_23 = 1558614/*func_4671*/;
			break;
		case 30:
			uParam0->f_8 = 1558491/*func_4670*/;
			break;
		case 31:
			uParam0->f_39 = 1558245/*func_4669*/;
			break;
		case 33:
			uParam0->f_40 = 1557989/*func_4668*/;
			break;
		case 34:
			uParam0->f_41 = 1555835/*func_4666*/;
			break;
		case 36:
			uParam0->f_58 = 1555790/*func_4665*/;
			break;
		case 35:
			uParam0->f_42 = 1541342/*func_4664*/;
			break;
		case 45:
			uParam0->f_14 = 1541333/*func_4663*/;
			break;
		case 46:
			uParam0->f_14 = 1541324/*func_4662*/;
			break;
		case 110:
			uParam0->f_57 = 1541316/*func_4661*/;
			break;
		case 77:
			uParam0->f_13 = 1541305/*func_4660*/;
			break;
		case 47:
			uParam0->f_43 = 1541253/*func_4659*/;
			break;
		case 49:
			uParam0->f_8 = 1541221/*func_4658*/;
			break;
		case 50:
			*uParam0 = 1541092/*func_4657*/;
			break;
		case 51:
			*uParam0 = 1541068/*func_4656*/;
			break;
		case 52:
			uParam0->f_15 = 1541057/*func_4655*/;
			break;
		case 53:
			uParam0->f_13 = 1540406/*func_4653*/;
			break;
		case 54:
			uParam0->f_45 = 1539721/*func_4649*/;
			break;
		case 56:
			uParam0->f_46 = 1539712/*func_4648*/;
			break;
		case 57:
			uParam0->f_11 = 1539645/*func_4647*/;
			break;
		case 58:
			uParam0->f_13 = 1539631/*func_4646*/;
			break;
		case 64:
			uParam0->f_47 = 1539252/*func_4645*/;
			break;
		case 65:
			uParam0->f_21 = 1539177/*func_4643*/;
			break;
		case 66:
			uParam0->f_21 = 1539126/*func_4642*/;
			break;
		case 67:
			uParam0->f_21 = 1539108/*func_4641*/;
			break;
		case 68:
			*uParam0 = 1539099/*func_4640*/;
			break;
		case 69:
			*uParam0 = 1539090/*func_4639*/;
			break;
		case 70:
			uParam0->f_48 = 1538973/*func_4638*/;
			break;
		case 71:
			uParam0->f_49 = 1538964/*func_4637*/;
			break;
		case 107:
			uParam0->f_50 = 1538952/*func_4636*/;
			break;
		case 80:
			uParam0->f_7 = 1538943/*func_4635*/;
			break;
		case 78:
			uParam0->f_59 = 1538935/*func_4634*/;
			break;
	}
}

int func_4681(var uParam0)//Position - 0x17CA02
{
	bool bVar0;
	if (Global_262145.f_15872 /* Tunable: EXEC_DISABLE_WAREHOUSE_ENTRY */)
	{
		return 1;
	}
	if (!__LIB_32__::func_187(1))
	{
		return 1;
	}
	if (!__LIB_7__::func_621(PLAYER::PLAYER_ID()) && __LIB_1__::func_909())
	{
		return 1;
	}
	if (__LIB_1__::func_425(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 168 && !BitTest(Global_1943920.f_3, 4))
		{
			return 1;
		}
		else if (__LIB_3__::func_803(PLAYER::PLAYER_ID()) == 167)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 1;
			}
		}
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	bVar0 = false;
	if (__LIB_26__::func_626(bVar0, 2) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_165() || __LIB_3__::func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_60() || __LIB_3__::func_74(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_4706(var uParam0, int iParam1)//Position - 0x17E484
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1566286/*func_4713*/;
			break;
		case 97:
			uParam0->f_1 = 1566277/*func_4712*/;
			break;
		case 98:
			uParam0->f_1 = 1566268/*func_4711*/;
			break;
		case 99:
			uParam0->f_1 = 1566108/*func_4710*/;
			break;
		case 100:
			uParam0->f_22 = 1566100/*func_4709*/;
			break;
		case 101:
			uParam0->f_22 = 1565945/*func_4707*/;
			break;
	}
}

void func_4714(var uParam0, int iParam1)//Position - 0x17E657
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1566503/*func_4719*/;
			break;
		case 91:
			uParam0->f_1 = 1566494/*func_4718*/;
			break;
		case 92:
			uParam0->f_1 = 1566485/*func_4717*/;
			break;
		case 93:
			uParam0->f_1 = 1566108/*func_4710*/;
			break;
		case 94:
			uParam0->f_1 = 1566476/*func_4716*/;
			break;
		case 95:
			uParam0->f_22 = 1566412/*func_4715*/;
			break;
	}
}

void func_4720(var uParam0, int iParam1)//Position - 0x17E730
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1566730/*func_4724*/;
			break;
		case 85:
			uParam0->f_1 = 1566721/*func_4723*/;
			break;
		case 86:
			uParam0->f_1 = 1566108/*func_4710*/;
			break;
		case 87:
			uParam0->f_1 = 1566712/*func_4722*/;
			break;
		case 89:
			uParam0->f_54 = 1566612/*func_4721*/;
			break;
	}
}

Vector3 func_4725(struct<3> Param0, int iParam1)//Position - 0x17E813
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_137(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

int func_4734(int* iParam0, int* iParam1, var uParam2)//Position - 0x181ADE
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
	if (((((iParam1->f_87 == 3 && iParam0->f_8 == 3) && uParam2->f_33 == 10) && !BitTest(iParam1->f_28, 4)) && !BitTest(iParam1->f_28, 6)) && !__LIB_18__::func_376(uParam2->f_31, 0, 0))
	{
		bVar0 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_4))
	{
		if (__LIB_4__::func_713(uParam2->f_31))
		{
			func_135(iParam1, iParam0, uParam2, &Var1, &Var2, bVar0);
		}
		else
		{
			iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_134(iParam1, iParam0, uParam2, bVar0), 5f, __LIB_26__::func_396(iParam1, uParam2, iParam0), false, false, true);
			if (iVar3 != 0)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
				Var2 = { ENTITY::GET_ENTITY_ROTATION(iVar3, 2) };
			}
		}
		if ((Var1.f_0 != 0f || Var1.f_1 != 0f) || Var1.f_2 != 0f)
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_19__::func_940(iParam1, uParam2)))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(__LIB_19__::func_940(iParam1, uParam2));
			}
			MISC::CLEAR_BIT(iParam1, 4);
			iParam1->f_4 = OBJECT::CREATE_OBJECT(__LIB_26__::func_399(iParam1, uParam2), Var1, false, false, false);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_4, Var2, 2, true);
			ENTITY::SET_ENTITY_COORDS(iParam1->f_4, Var1, true, false, false, true);
			ENTITY::SET_ENTITY_LOD_DIST(iParam1->f_4, 200);
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam1->f_4);
			__LIB_6__::func_536(iParam1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(iParam1, 4);
		if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(__LIB_19__::func_940(iParam1, uParam2)))
		{
			HUD::REGISTER_NAMED_RENDERTARGET(__LIB_19__::func_940(iParam1, uParam2), false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_4))
		{
			if (STREAMING::IS_MODEL_VALID(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
			{
				if (HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iParam1->f_4)))
				{
					iParam1->f_2 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(__LIB_19__::func_940(iParam1, uParam2));
					iParam1->f_86 = __LIB_6__::func_535(iParam1->f_87);
					__LIB_8__::func_825();
					GRAPHICS::SET_TV_CHANNEL(-1);
					MISC::SET_BIT(iParam1, 5);
					__LIB_0__::func_579(&(iParam1->f_80));
					return 1;
				}
				else
				{
					HUD::RELEASE_NAMED_RENDERTARGET(__LIB_19__::func_940(iParam1, uParam2));
					HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iParam1->f_4));
				}
			}
		}
		else if (BitTest(*iParam1, 27))
		{
			MISC::CLEAR_BIT(iParam1, 27);
		}
	}
	if (__LIB_2__::func_47(&(iParam1->f_80), 10000, 0))
	{
		__LIB_0__::func_579(&(iParam1->f_80));
		return 1;
	}
	return 0;
}

void func_4739(var uParam0, bool bParam1)//Position - 0x181FEB
{
	if (__LIB_6__::func_144(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_8__::func_788(uParam0, 1);
		}
		func_4740(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_4740(var uParam0)//Position - 0x182023
{
	func_4807(uParam0);
	if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (uParam0->f_1.f_35 == 3)
		{
		}
		else if (__LIB_1__::func_381(PLAYER::PLAYER_ID()))
		{
		}
		else if (__LIB_1__::func_99(PLAYER::PLAYER_ID()) == 3 || Global_1574962)
		{
			NETWORK::NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
	{
		if (!PED::IS_PED_INJURED(__LIB_0__::func_727()))
		{
			PED::SET_PED_LOD_MULTIPLIER(__LIB_0__::func_727(), 1f);
		}
	}
	if (!__LIB_1__::func_593() && !BitTest(Global_2621446, 13))
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
	}
	if (!BitTest(uParam0->f_1.f_2, 3) && (!__LIB_0__::func_734() || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)))
	{
		if (!BitTest(uParam0->f_1.f_2, 0) || !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_8__::func_786())
			{
				if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || Global_2621446.f_69 == Global_2621446.f_69.f_1)
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
		}
	}
	__LIB_35__::func_769(uParam0);
	__LIB_19__::func_475(&(uParam0->f_47));
	__LIB_26__::func_62(uParam0);
	__LIB_6__::func_285(&(uParam0->f_1));
	__LIB_6__::func_152();
	uParam0->f_1.f_4 = 0;
	HUD::UNLOCK_MINIMAP_POSITION();
	MISC::CLEAR_BIT(&(uParam0->f_47), 0);
	uParam0->f_1.f_26 = 0;
	uParam0->f_1.f_33 = 0;
	__LIB_6__::func_274(&(uParam0->f_1), 0);
	uParam0->f_1.f_27 = 0;
	uParam0->f_1.f_25 = 0;
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 0);
	MISC::CLEAR_BIT(&(uParam0->f_1), 10);
	if (!BitTest(uParam0->f_1.f_2, 2))
	{
		if (!__LIB_6__::func_284())
		{
			NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		}
		__LIB_7__::func_176(0, 0, 1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_8__::func_784(&(uParam0->f_1));
	__LIB_8__::func_783();
	__LIB_6__::func_283();
	if (__LIB_6__::func_284())
	{
		__LIB_1__::func_687(1);
	}
	else
	{
		NETWORK::NETWORK_SET_NO_SPECTATOR_CHAT(false);
	}
	__LIB_6__::func_282(&(uParam0->f_1.f_7), 0);
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
		__LIB_4__::func_742(&(uParam0->f_1), 0);
	}
	if (!BitTest(Global_2621446, 9))
	{
		__LIB_4__::func_71();
	}
	__LIB_6__::func_334(&(uParam0->f_47));
	if (BitTest(uParam0->f_1, 2))
	{
		__LIB_6__::func_330(&(uParam0->f_1));
	}
	if (!__LIB_6__::func_281(Global_4718592.f_168757))
	{
		Global_1836146 = 0;
	}
	if (!Global_1836610 && !__LIB_6__::func_174())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	uParam0->f_1.f_1 = 0;
	uParam0->f_1.f_2 = 0;
	Global_2715699.f_2846.f_180 = 0;
	__LIB_27__::func_312();
	uParam0->f_47.f_2197 = 0;
	STREAMING::CLEAR_FOCUS();
	__LIB_4__::func_741(&(uParam0->f_1), 0);
}

void func_4807(var uParam0)//Position - 0x1830DC
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_4808(uParam0->f_2262, 0);
		}
		uParam0->f_2262 = -1;
	}
}

void func_4808(int iParam0, bool bParam1)//Position - 0x18310D
{
	if (bParam1)
	{
		if (!__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
		{
			__LIB_4__::func_745(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
			if (__LIB_32__::func_206(iParam0))
			{
				__LIB_25__::func_678(iParam0, 1);
			}
		}
	}
	else if (__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
	{
		__LIB_4__::func_743(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
	}
	if (iParam0 == 10)
	{
		func_4808(11, bParam1);
		func_4808(12, bParam1);
		func_4808(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_4808(37, bParam1);
		func_4808(38, bParam1);
		func_4808(39, bParam1);
		func_4808(40, bParam1);
		func_4808(41, bParam1);
	}
}

int func_4911(int* iParam0, int* iParam1, var uParam2, bool bParam3)//Position - 0x18D691
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (BitTest(*iParam1, 7))
	{
		return 1;
	}
	else if (func_4912(iParam1, iParam0, uParam2, &Var0, &Var1, &fVar2, iParam1->f_8))
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
			TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), func_134(iParam1, iParam0, uParam2, 0), 0);
		}
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), func_134(iParam1, iParam0, uParam2, 0), -1, 0, 2);
		AUDIO::START_AUDIO_SCENE("WATCHING_SAFEHOUSE_TV");
		MISC::SET_BIT(iParam1, 7);
		MISC::SET_BIT(iParam1, 0);
	}
	return 0;
}

int func_4912(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x18D7AD
{
	struct<4> Var0;
	int iVar1;
	if (__LIB_4__::func_958(PLAYER::PLAYER_ID()))
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
		iVar1 = __LIB_3__::func_977(PLAYER::PLAYER_ID());
		*uParam3 = { func_4725(*uParam3, iVar1) };
		uParam4->f_2 = func_136(uParam4->f_2, iVar1);
		return 1;
	}
	if (!__LIB_4__::func_710(uParam2->f_31))
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
				else if (!__LIB_4__::func_712(uParam2->f_31))
				{
					switch (iParam6)
					{
						case 0:
							if (__LIB_4__::func_713(uParam2->f_31))
							{
								__LIB_18__::func_381(uParam2->f_31, 34, &Var0, 61, 0);
							}
							else
							{
								__LIB_18__::func_381(uParam2->f_31, 34, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
							}
							*uParam3 = { Var0 };
							*uParam4 = { Var0.f_3 };
							*uParam5 = 45f;
							if (__LIB_4__::func_711(uParam2->f_31, -1) || __LIB_4__::func_712(uParam2->f_31))
							{
								*uParam5 = 53.5191f;
							}
							return 1;
							break;
						case 1:
							if (__LIB_4__::func_713(uParam2->f_31))
							{
								__LIB_18__::func_381(uParam2->f_31, 35, &Var0, 61, 0);
							}
							else
							{
								__LIB_18__::func_381(uParam2->f_31, 35, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
							}
							*uParam3 = { Var0 };
							*uParam4 = { Var0.f_3 };
							*uParam5 = 33.4744f;
							if (__LIB_4__::func_711(uParam2->f_31, -1) || __LIB_4__::func_712(uParam2->f_31))
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
							__LIB_18__::func_381(uParam2->f_31, 34, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
							*uParam3 = { Var0 };
							*uParam4 = { Var0.f_3 };
							*uParam5 = 53.5191f;
							return 1;
							break;
						case 1:
							if (Global_4196256 == 3 || Global_4196256 == 7)
							{
								__LIB_18__::func_381(uParam2->f_31, 36, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
							}
							else if (Global_4196256 == 4 || Global_4196256 == 8)
							{
								__LIB_18__::func_381(uParam2->f_31, 560, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
							}
							else
							{
								__LIB_18__::func_381(uParam2->f_31, 35, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
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
		if (__LIB_1__::func_188(uParam2->f_31) || __LIB_0__::func_630(uParam2->f_31, -1))
		{
			switch (iParam6)
			{
				case 0:
					__LIB_18__::func_381(uParam2->f_31, 34, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				case 1:
					__LIB_18__::func_381(uParam2->f_31, 35, &Var0, __LIB_1__::func_984(uParam2->f_31), 0);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				}
		}
		if (__LIB_18__::func_376(uParam2->f_31, 0, 0))
		{
			switch (iParam6)
			{
				case 0:
					__LIB_18__::func_381(uParam2->f_31, 34, &Var0, __LIB_1__::func_984(uParam2->f_31), 1);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				case 1:
					__LIB_18__::func_381(uParam2->f_31, 35, &Var0, __LIB_1__::func_984(uParam2->f_31), 1);
					*uParam3 = { Var0 };
					*uParam4 = { Var0.f_3 };
					*uParam5 = 53.5191f;
					return 1;
					break;
				}
		}
		if (__LIB_7__::func_916(PLAYER::PLAYER_ID()))
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
				__LIB_7__::func_201(__LIB_19__::func_663(0), 34, &Var0, 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
				*uParam5 = 33.4744f;
				return 1;
				break;
			case 1:
				__LIB_7__::func_201(__LIB_19__::func_663(0), 35, &Var0, 0);
				*uParam3 = { Var0 };
				*uParam4 = { Var0.f_3 };
				*uParam5 = 33.4744f;
				return 1;
				break;
			}
	}
	return 0;
}

void func_4968(var uParam0)//Position - 0x18ED03
{
	int iVar0;
	var uVar1;
	Global_2715699.f_2846.f_180 = uParam0->f_1.f_34;
	if ((__LIB_6__::func_338() == 3 || __LIB_6__::func_337() == 3) || (__LIB_0__::func_734() && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)))
	{
		return;
	}
	if (__LIB_4__::func_766(Global_4718592.f_116524))
	{
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(__LIB_0__::func_727());
			}
		}
	}
	if (__LIB_6__::func_338() == 1)
	{
		if (__LIB_3__::func_646() && __LIB_0__::func_706())
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_6__::func_336() == 1 || __LIB_6__::func_336() == 2)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					__LIB_6__::func_335(0);
				}
			}
			return;
		}
	}
	if (!BitTest(uParam0->f_1, 13))
	{
		if (__LIB_1__::func_593())
		{
			if (__LIB_6__::func_144(&(uParam0->f_1)) != 0)
			{
				func_4739(uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_1), 13);
			}
		}
	}
	if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_7__::func_452(PLAYER::PLAYER_ID(), 1))
		{
			if (__LIB_9__::func_50(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_1__::func_769(PLAYER::PLAYER_ID(), 0);
			}
			if (!BitTest(Global_2621446, 9))
			{
				__LIB_4__::func_71();
			}
			__LIB_6__::func_334(&(uParam0->f_47));
		}
	}
	if (__LIB_6__::func_153(&(uParam0->f_1)))
	{
		__LIB_42__::func_114(uParam0);
		if (((__LIB_6__::func_333() && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			__LIB_8__::func_852(&(uParam0->f_1), 0);
		}
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 11)
		{
			__LIB_6__::func_558(&(uParam0->f_1));
		}
		else if (BitTest(uParam0->f_1, 2))
		{
			__LIB_6__::func_330(&(uParam0->f_1));
		}
	}
	else
	{
		__LIB_26__::func_74(&(uParam0->f_1), 0);
		if (BitTest(uParam0->f_1, 2))
		{
			__LIB_6__::func_330(&(uParam0->f_1));
		}
	}
	if ((__LIB_6__::func_144(&(uParam0->f_1)) == 0 || __LIB_6__::func_144(&(uParam0->f_1)) == 1) || __LIB_6__::func_144(&(uParam0->f_1)) == 6)
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
		if (__LIB_6__::func_144(&(uParam0->f_1)) == 3)
		{
			if (!BitTest(uParam0->f_1, 5))
			{
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&Global_2621446, 4);
			}
		}
	}
	if (((__LIB_6__::func_144(&(uParam0->f_1)) == 0 || __LIB_6__::func_144(&(uParam0->f_1)) == 4) || __LIB_6__::func_144(&(uParam0->f_1)) == 5) || __LIB_6__::func_144(&(uParam0->f_1)) == 6)
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
		func_5409(uParam0);
		__LIB_1__::func_60();
	}
	if (BitTest(uParam0->f_1, 14))
	{
		if (!Global_1931426)
		{
			__LIB_6__::func_320(&(uParam0->f_47));
		}
		MISC::CLEAR_BIT(&(uParam0->f_1), 14);
	}
	switch (__LIB_6__::func_144(&(uParam0->f_1)))
	{
		case 0:
			__LIB_6__::func_554(uParam0);
			break;
		case 1:
			__LIB_38__::func_313(uParam0);
			break;
		case 2:
			func_5399(uParam0);
			break;
		case 3:
			func_5370(uParam0);
			break;
		case 4:
			func_5346(uParam0);
			break;
		case 5:
			func_5252(uParam0);
			break;
		case 6:
			func_4740(uParam0);
			break;
	}
	if (__LIB_6__::func_280())
	{
		__LIB_41__::func_727(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_6__::func_276();
		if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_4__::func_746(&(uParam0->f_1))))
		{
			if (!__LIB_6__::func_275(__LIB_0__::func_727()) || !__LIB_19__::func_338(&(uParam0->f_47), &iVar0, &uVar1, __LIB_0__::func_727()))
			{
				__LIB_42__::func_113(uParam0, 0, 1);
				if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
				{
					if (!__LIB_38__::func_312(uParam0, &iVar0, &uVar1, 0, 0, 0))
					{
						if (__LIB_6__::func_272())
						{
							__LIB_6__::func_271();
							if (!__LIB_0__::func_649(&(uParam0->f_2245)))
							{
								__LIB_0__::func_580(&(uParam0->f_2245), 0, 0);
							}
							else if (__LIB_2__::func_47(&(uParam0->f_2245), 10000, 0))
							{
								__LIB_32__::func_482();
							}
						}
						else if (__LIB_25__::func_839() && !__LIB_1__::func_215())
						{
							if (__LIB_6__::func_247())
							{
								if (!__LIB_0__::func_649(&(uParam0->f_2253)))
								{
									__LIB_0__::func_580(&(uParam0->f_2253), 0, 0);
								}
								else if (__LIB_2__::func_47(&(uParam0->f_2253), 5000, 0))
								{
									__LIB_12__::func_233(0);
									Global_2621446.f_81 = 3;
								}
							}
							else
							{
								__LIB_12__::func_233(0);
								Global_2621446.f_81 = 3;
							}
						}
					}
				}
			}
		}
	}
	__LIB_8__::func_842();
	func_5007(uParam0);
	__LIB_42__::func_112(uParam0);
}

void func_5007(var uParam0)//Position - 0x1902BD
{
	if ((((!__LIB_0__::func_191(8, -1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_6__::func_245()) && !__LIB_0__::func_706())
	{
		if (BitTest(uParam0->f_47, 0) || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			if (uParam0->f_1.f_36 != 6)
			{
				func_5154(uParam0);
				__LIB_6__::func_549(&(uParam0->f_47));
				__LIB_32__::func_481(uParam0);
			}
		}
		if (BitTest(uParam0->f_47, 0) || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_6__::func_218() && __LIB_6__::func_217())
			{
				__LIB_6__::func_216(1);
			}
			if (!__LIB_6__::func_154())
			{
				__LIB_1__::func_304();
			}
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			__LIB_26__::func_64(uParam0);
			__LIB_0__::func_186();
			HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0.466664f);
			if ((__LIB_4__::func_73(&(uParam0->f_1)) != 3 && __LIB_4__::func_73(&(uParam0->f_1)) != 5) && __LIB_4__::func_73(&(uParam0->f_1)) != 4)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
				__LIB_8__::func_611(0);
			}
			HUD::DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
			if ((!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || __LIB_6__::func_338() == 1) || __LIB_6__::func_338() == 2)
			{
				if (__LIB_6__::func_215(&(uParam0->f_47)) != 5)
				{
					if (__LIB_6__::func_215(&(uParam0->f_47)) != 3)
					{
						uParam0->f_47.f_1456 = __LIB_6__::func_215(&(uParam0->f_47));
					}
					uParam0->f_47.f_1457 = __LIB_6__::func_215(&(uParam0->f_47));
				}
				if (__LIB_6__::func_215(&(uParam0->f_47)) == 0)
				{
					if (__LIB_4__::func_762(0, &(uParam0->f_47.f_1473), 1))
					{
						if (__LIB_36__::func_10(uParam0))
						{
							if (__LIB_6__::func_214(&(uParam0->f_47)) >= uParam0->f_47.f_1460 || __LIB_6__::func_214(&(uParam0->f_47)) > uParam0->f_47.f_1461)
							{
								__LIB_6__::func_213(&(uParam0->f_47), 0);
							}
							__LIB_6__::func_212(&(uParam0->f_47), 1);
						}
					}
				}
				else if ((Global_2824886 || Global_4718592 != 0) || !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (BitTest(uParam0->f_47, 0) || (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) && (__LIB_6__::func_338() == 2 || __LIB_6__::func_338() == 1)))
					{
						if (!__LIB_26__::func_314())
						{
							__LIB_39__::func_952(uParam0, __LIB_6__::func_215(&(uParam0->f_47)));
						}
						switch (__LIB_6__::func_215(&(uParam0->f_47)))
						{
							case 1:
							case 4:
								if (__LIB_27__::func_785())
								{
									__LIB_6__::func_212(&(uParam0->f_47), 6);
								}
								__LIB_38__::func_198(uParam0);
								break;
							case 2:
								__LIB_38__::func_197(uParam0);
								break;
							case 3:
								__LIB_39__::func_951(uParam0);
								break;
							case 5:
								__LIB_38__::func_99(uParam0);
								break;
							case 6:
								if (__LIB_27__::func_785())
								{
									__LIB_6__::func_212(&(uParam0->f_47), 1);
								}
								if (!__LIB_27__::func_192())
								{
									__LIB_6__::func_212(&(uParam0->f_47), 1);
								}
								break;
						}
						__LIB_6__::func_192(__LIB_6__::func_215(&(uParam0->f_47)) == 6);
						if ((uParam0->f_1.f_4 || uParam0->f_1.f_3 > 2) && !BitTest(Global_2621446, 28))
						{
							__LIB_36__::func_3(uParam0, __LIB_6__::func_215(&(uParam0->f_47)));
						}
						if (BitTest(uParam0->f_47, 15))
						{
							if (BitTest(Global_1965451, 1) || !__LIB_0__::func_493())
							{
								if (__LIB_2__::func_47(&(uParam0->f_47.f_2186), 500, 0))
								{
									if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || !__LIB_0__::func_493())
										{
											CAM::DO_SCREEN_FADE_IN(250);
										}
										GRAPHICS::ANIMPOSTFX_STOP_ALL();
										__LIB_6__::func_966(1);
									}
									MISC::CLEAR_BIT(&(uParam0->f_47), 15);
								}
							}
						}
					}
				}
				__LIB_8__::func_829(uParam0);
			}
		}
	}
	else
	{
		if (__LIB_6__::func_245())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
		if (uParam0->f_47.f_1469 > 0 && uParam0->f_47.f_1469 < 99)
		{
			func_5154(uParam0);
		}
	}
}

void func_5154(var uParam0)//Position - 0x196612
{
	bool bVar0;
	bVar0 = false;
	if (BitTest(Global_2621446.f_69.f_5, 17))
	{
		uParam0->f_47.f_1469 = 0;
		MISC::CLEAR_BIT(&(Global_2621446.f_69.f_5), 17);
	}
	switch (uParam0->f_47.f_1469)
	{
		case 0:
			if (__LIB_8__::func_841(uParam0))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity_FUZZ");
				__LIB_6__::func_244(&(uParam0->f_47));
			}
			uParam0->f_47.f_1470 = MISC::GET_GAME_TIMER();
			uParam0->f_47.f_1469++;
			break;
		case 1:
			switch (uParam0->f_47.f_1467)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					bVar0 = true;
					break;
				case 10:
					HUD::DISPLAY_RADAR(true);
					__LIB_6__::func_147();
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_47.f_1471));
					bVar0 = true;
					break;
				case 11:
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(true);
						}
						__LIB_6__::func_243(&(uParam0->f_47.f_1));
						__LIB_1__::func_801();
						bVar0 = true;
					}
					else
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(true);
						}
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_47.f_1471));
						bVar0 = true;
					}
					break;
			}
			if (bVar0)
			{
				uParam0->f_47.f_1469++;
			}
			break;
		case 2:
			switch (uParam0->f_47.f_1468)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					bVar0 = true;
					break;
				case 10:
					uParam0->f_47.f_1471 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1471))
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(false);
						}
						__LIB_1__::func_802();
						__LIB_12__::func_232(uParam0);
						bVar0 = true;
					}
					break;
				case 11:
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(false);
						}
						bVar0 = true;
					}
					else
					{
						uParam0->f_47.f_1471 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SOCIAL_CLUB_TV");
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1471))
						{
							__LIB_35__::func_924(uParam0, 1);
							__LIB_26__::func_676(uParam0, 0);
							__LIB_19__::func_673(uParam0);
							if (!BitTest(Global_2621446, 18))
							{
								HUD::DISPLAY_RADAR(false);
							}
							bVar0 = true;
						}
					}
					break;
			}
			if (bVar0)
			{
				uParam0->f_47.f_1469++;
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_47.f_1470) > 200)
			{
				uParam0->f_47.f_1469++;
			}
			break;
		case 4:
			switch (uParam0->f_47.f_1468)
			{
				case 0:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator1");
					break;
				case 1:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator2");
					break;
				case 2:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator3");
					break;
				case 3:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator4");
					break;
				case 4:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator5");
					break;
				case 5:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator6");
					break;
				case 6:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator7");
					break;
				case 7:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator8");
					break;
				case 8:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator9");
					break;
				case 9:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator10");
					break;
				case 10:
				case 11:
					GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator1");
					break;
			}
			__LIB_6__::func_233(&(uParam0->f_47));
			uParam0->f_47.f_1469++;
			break;
		case 5:
			uParam0->f_47.f_1467 = uParam0->f_47.f_1468;
			uParam0->f_47.f_1469 = 99;
			uParam0->f_47.f_2185 = -1;
			break;
		case 99:
			if (uParam0->f_47.f_1467 == 10)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
				Global_2727091 = 1;
				if (!BitTest(Global_2621446, 12))
				{
					MISC::SET_BIT(&Global_2621446, 12);
				}
				if (__LIB_6__::func_232())
				{
					__LIB_12__::func_232(uParam0);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_47.f_1453) >= 5000)
					{
						if (!BitTest(Global_2621446, 18))
						{
							HUD::DISPLAY_RADAR(false);
						}
						uParam0->f_47.f_1454 = (uParam0->f_47.f_1454 + 1f);
						if (uParam0->f_47.f_1454 >= 4f)
						{
							uParam0->f_47.f_1454 = 0f;
						}
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_47.f_1454);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						uParam0->f_47.f_1453 = NETWORK::GET_NETWORK_TIME();
					}
				}
			}
			else if (BitTest(Global_2621446, 12))
			{
				MISC::CLEAR_BIT(&Global_2621446, 12);
			}
			if (uParam0->f_47.f_1467 == 11)
			{
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					__LIB_26__::func_70(&(uParam0->f_47.f_1));
				}
				else if (BitTest(Global_2621446.f_69.f_5, 6))
				{
					__LIB_26__::func_676(uParam0, 0);
					MISC::CLEAR_BIT(&(Global_2621446.f_69.f_5), 6);
				}
				else if (__LIB_2__::func_47(&(uParam0->f_47.f_2176), uParam0->f_47.f_2178, 0))
				{
					MISC::SET_BIT(&(Global_2621446.f_69.f_5), 6);
					__LIB_0__::func_579(&(uParam0->f_47.f_2176));
				}
			}
			break;
	}
}

void func_5252(var uParam0)//Position - 0x19A5DC
{
	if (func_5253(uParam0))
	{
		__LIB_4__::func_741(&(uParam0->f_1), 6);
	}
}

int func_5253(var uParam0)//Position - 0x19A5F6
{
	if (!BitTest(uParam0->f_1, 11))
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
		else if (!__LIB_8__::func_786())
		{
			CAM::DO_SCREEN_FADE_IN(250);
			MISC::SET_BIT(&(uParam0->f_1), 11);
		}
	}
	if (func_5254(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		return 1;
	}
	return 0;
}

int func_5254(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x19A664
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	Global_2727793 = MISC::GET_GAME_TIMER();
	if (((((!__LIB_1__::func_598() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2727896) && !__LIB_0__::func_496() == 63)
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
		func_5262();
		__LIB_18__::func_742(1, 0);
		MISC::PREVENT_ARREST_STATE_THIS_FRAME();
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__::func_81())
		{
			if (__LIB_0__::func_496() == 58)
			{
				__LIB_1__::func_594(1);
			}
			if (__LIB_1__::func_593())
			{
				if (BitTest(Global_2621446, 3))
				{
					MISC::CLEAR_BIT(&Global_2621446, 3);
				}
			}
			return 0;
		}
	}
	if (__LIB_0__::func_491() == 4)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() == 0)
		{
			__LIB_0__::func_708(0);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_18__::func_742(1, 0);
		if (bParam10)
		{
			__LIB_0__::func_921(0);
			__LIB_7__::func_6(0);
		}
		return 0;
	}
	__LIB_8__::func_626();
	__LIB_6__::func_298();
	if (iParam9 == 0)
	{
	}
	if (!bParam11)
	{
		if (!__LIB_1__::func_592())
		{
			__LIB_1__::func_591();
		}
	}
	if (!__LIB_2__::func_283())
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
		if ((__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_3() == 0) && !__LIB_0__::func_394(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), false, false, false, false);
			bParam4 = true;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 != 0)
		{
			bParam4 = true;
			if (__LIB_1__::func_217())
			{
				bParam2 = false;
			}
		}
		if (Global_2725323)
		{
			if ((Global_2715699.f_6597 || __LIB_3__::func_858(-1046478848)) || __LIB_4__::func_977())
			{
				if (__LIB_18__::func_741(0))
				{
					bParam12 = true;
					if (__LIB_1__::func_590() > 800 || (__LIB_26__::func_63() && !__LIB_7__::func_7()))
					{
						if (__LIB_4__::func_715() && !__LIB_0__::func_706())
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
					__LIB_0__::func_705();
				}
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19))
		{
			bParam4 = true;
			__LIB_7__::func_6(1);
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
		if (bParam2 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_16__::func_621(1, 0, 1);
		}
		if (((__LIB_4__::func_715() && ((HUD::IS_PAUSE_MENU_ACTIVE() == 0 || bParam1 == 0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && __LIB_6__::func_297())
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
			__LIB_1__::func_589();
			__LIB_1__::func_210();
			if (__LIB_0__::func_791())
			{
				if (__LIB_1__::func_588())
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
				if (iParam13 || __LIB_1__::func_217())
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
				}
				else
				{
					STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
				}
			}
			else if (iParam13 || __LIB_1__::func_217())
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
			__LIB_0__::func_708(1);
			HUD::SET_BIGMAP_ACTIVE(false, false);
			if (bParam2 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_16__::func_621(1, 0, 1);
			}
		}
		if (__LIB_0__::func_491() == 1)
		{
			if (__LIB_0__::func_791())
			{
				if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					if (Global_2725330)
					{
						Global_2725330 = 0;
					}
					if (Global_2815059.f_6776 != -1)
					{
						__LIB_1__::func_214();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1577841))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, true);
						PED::DELETE_PED(&Global_1577841);
					}
					__LIB_16__::func_621(0, 0, 1);
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (__LIB_0__::func_493())
						{
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_708(2);
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
						__LIB_7__::func_311();
						__LIB_16__::func_621(0, 0, 1);
						if (((__LIB_1__::func_241() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() == 0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA() == 0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() == 0)
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
						__LIB_7__::func_311();
					}
					__LIB_16__::func_621(0, 0, 1);
				}
			}
			if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
			{
				if (bParam8 == 0 || __LIB_7__::func_311())
				{
					if (bParam2)
					{
						if (bParam8)
						{
							__LIB_7__::func_311();
						}
						__LIB_16__::func_621(0, 0, 1);
					}
					__LIB_0__::func_708(2);
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

void func_5262()//Position - 0x19AEDE
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_160())
	{
		if (__LIB_6__::func_945(PLAYER::PLAYER_ID()))
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
			Var1[0] = __LIB_0__::func_228(387, iVar2);
			Var1[1] = __LIB_0__::func_228(388, iVar2);
			Var1[2] = __LIB_0__::func_228(389, iVar2);
			Var1[3] = __LIB_0__::func_228(390, iVar2);
			Var1[4] = __LIB_0__::func_228(391, iVar2);
			Var1[5] = __LIB_0__::func_228(392, iVar2);
			Var1[6] = __LIB_0__::func_228(393, iVar2);
			Var1[7] = __LIB_0__::func_228(394, iVar2);
			Var1[8] = __LIB_0__::func_228(395, iVar2);
			Var1[9] = __LIB_0__::func_228(396, iVar2);
			Var1[10] = __LIB_0__::func_228(397, iVar2);
			Var1[11] = __LIB_0__::func_228(398, iVar2);
			Var1.f_13[0] = __LIB_0__::func_228(399, iVar2);
			Var1.f_13[1] = (__LIB_0__::func_228(400, iVar2) + __LIB_0__::func_228(18092, iVar2));
			Var1.f_13[2] = __LIB_0__::func_228(401, iVar2);
			Var1.f_13[3] = (__LIB_0__::func_228(402, iVar2) + __LIB_0__::func_228(18093, iVar2));
			Var1.f_13[4] = __LIB_0__::func_228(403, iVar2);
			Var1.f_13[5] = __LIB_0__::func_228(404, iVar2);
			Var1.f_13[6] = __LIB_0__::func_228(405, iVar2);
			Var1.f_13[7] = __LIB_0__::func_228(406, iVar2);
			Var1.f_13[8] = (__LIB_0__::func_228(407, iVar2) + __LIB_0__::func_228(18094, iVar2));
			Var1.f_13[9] = __LIB_0__::func_228(408, iVar2);
			Var1.f_13[10] = __LIB_0__::func_228(409, iVar2);
			Var1.f_13[11] = (__LIB_0__::func_228(410, iVar2) + __LIB_0__::func_228(18095, iVar2));
			Var1.f_26[0] = __LIB_0__::func_228(411, iVar2);
			Var1.f_26[1] = __LIB_0__::func_228(412, iVar2);
			Var1.f_26[2] = __LIB_0__::func_228(413, iVar2);
			Var1.f_26[3] = __LIB_0__::func_228(414, iVar2);
			Var1.f_26[4] = __LIB_0__::func_228(415, iVar2);
			Var1.f_26[5] = __LIB_0__::func_228(416, iVar2);
			Var1.f_26[6] = __LIB_0__::func_228(417, iVar2);
			Var1.f_26[7] = __LIB_0__::func_228(418, iVar2);
			Var1.f_26[8] = __LIB_0__::func_228(419, iVar2);
			Var1.f_26[9] = __LIB_0__::func_228(420, iVar2);
			Var1.f_26[10] = __LIB_0__::func_228(421, iVar2);
			Var1.f_26[11] = __LIB_0__::func_228(422, iVar2);
			Var1.f_39[0] = __LIB_0__::func_228(423, iVar2);
			Var1.f_39[1] = __LIB_0__::func_228(424, iVar2);
			Var1.f_39[2] = __LIB_0__::func_228(425, iVar2);
			Var1.f_39[3] = __LIB_0__::func_228(426, iVar2);
			Var1.f_39[4] = __LIB_0__::func_228(427, iVar2);
			Var1.f_39[5] = __LIB_0__::func_228(428, iVar2);
			Var1.f_39[6] = __LIB_0__::func_228(429, iVar2);
			Var1.f_39[7] = __LIB_0__::func_228(430, iVar2);
			Var1.f_39[8] = __LIB_0__::func_228(431, iVar2);
			Var1.f_49[0] = __LIB_0__::func_228(432, iVar2);
			Var1.f_49[1] = __LIB_0__::func_228(433, iVar2);
			Var1.f_49[2] = __LIB_0__::func_228(434, iVar2);
			Var1.f_49[3] = __LIB_0__::func_228(435, iVar2);
			Var1.f_49[4] = __LIB_0__::func_228(436, iVar2);
			Var1.f_49[5] = __LIB_0__::func_228(437, iVar2);
			Var1.f_49[6] = __LIB_0__::func_228(438, iVar2);
			Var1.f_49[7] = __LIB_0__::func_228(439, iVar2);
			Var1.f_49[8] = __LIB_0__::func_228(440, iVar2);
			if (__LIB_1__::func_563(161, -1))
			{
				Var1.f_59 = __LIB_1__::func_556(2053, iVar2, 0);
			}
			else
			{
				Var1.f_59 = __LIB_1__::func_556(753, iVar2, 0);
			}
			Var1.f_60 = __LIB_1__::func_556(754, iVar2, 0);
			Var1.f_61 = __LIB_1__::func_556(755, iVar2, 0);
			func_5263(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_5263(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x19B3B6
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
		iVar0 = __LIB_18__::func_168(iParam0);
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
			if (func_5338(iParam0, iVar1, &iVar2, 0))
			{
				func_5323(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_5264(iParam0, iVar1, &iVar2))
			{
				func_5323(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_1542(iParam0);
			__LIB_1__::func_597(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_597(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_1482(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_1482(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_1482(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_1__::func_597(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_597(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_905(161, 1, -1, 1);
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

int func_5264(int iParam0, int iParam1, int iParam2)//Position - 0x19B853
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_5265(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_5265(int iParam0, int iParam1, int iParam2)//Position - 0x19B8DF
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
	Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_5265(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_5265(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_37__::func_904(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_5265(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_37__::func_904(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_5265(iParam0, 14, uVar8[iVar7]))
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

int func_5323(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1AEBAE
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
		Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_8__::func_105(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_8__::func_105(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_954(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_5323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_8__::func_105(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_954(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_5323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, iVar0, func_5327(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_5338(iParam0, iVar10, &iVar4, 1))
							{
								func_5323(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_5323(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_37__::func_904(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_5323(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_5323(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_5323(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_5323(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_37__::func_904(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_5323(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_37__::func_904(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_8__::func_105(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_954(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_5323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_8__::func_105(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_954(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_5323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__::func_954(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_5323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_836(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_5338(iParam0, iVar10, &iVar4, 0))
		{
			func_5323(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_5264(iParam0, iVar10, &iVar4))
		{
			func_5323(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_5327(int iParam0, int iParam1, int iParam2)//Position - 0x1AF54E
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
				if (func_5265(iParam0, iParam1, iVar0))
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
				if (func_5265(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_5338(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B120C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_5265(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_5346(var uParam0)//Position - 0x1B1353
{
	if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_8__::func_824(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_6__::func_274(&(uParam0->f_1), 1);
	}
	if (func_5347(uParam0, 0, 1))
	{
		__LIB_4__::func_741(&(uParam0->f_1), 6);
	}
}

int func_5347(var uParam0, bool bParam1, bool bParam2)//Position - 0x1B138D
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
	if (__LIB_6__::func_171(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (((__LIB_1__::func_282() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_282())) && (!bParam1 || __LIB_36__::func_129(uParam0, __LIB_1__::func_282(), 1))) && !__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
	{
		iVar1 = __LIB_1__::func_282();
	}
	else if (__LIB_27__::func_784(uParam0, 0))
	{
		__LIB_41__::func_727(uParam0);
		if (__LIB_38__::func_312(uParam0, &iVar6, &iVar7, 0, 1, 1))
		{
			__LIB_8__::func_824(uParam0, __LIB_8__::func_835(&(uParam0->f_47), iVar6, iVar7));
			__LIB_36__::func_2(uParam0, iVar6, iVar7);
			__LIB_5__::func_951(&(uParam0->f_1), 0);
		}
		else if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_25__::func_839())
			{
				__LIB_12__::func_233(0);
				Global_2621446.f_81 = 3;
			}
		}
		else if (__LIB_0__::func_80())
		{
			if (Global_1574667)
			{
				if (__LIB_6__::func_552())
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
			switch (__LIB_0__::func_997(&(uParam0->f_1)))
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
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()) && __LIB_0__::func_727() != iVar1)
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(__LIB_0__::func_727(), false) };
						}
						else
						{
							Var4 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						}
						fVar3 = SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(iVar1, false));
						if ((__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && __LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if (((uParam0->f_1.f_4 && !__LIB_6__::func_304(&(uParam0->f_1))) && fVar3 < 2500f) && !__LIB_4__::func_766(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 0;
							uParam0->f_1.f_6 = 1;
						}
						else if ((fVar3 < 2500f && __LIB_6__::func_174()) && __LIB_4__::func_755(Global_4718592.f_116524))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if ((fVar3 < 2500f && __LIB_6__::func_174()) && (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749))
						{
							uParam0->f_1.f_5 = 100;
						}
						else if (fVar3 < 90000f)
						{
							uParam0->f_1.f_5 = 3000;
						}
						else if (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749)
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
						if (__LIB_8__::func_248(Global_4718592.f_168757) || Global_2815059.f_6749)
						{
							uParam0->f_1.f_5 = 100;
						}
					}
					__LIB_5__::func_951(&(uParam0->f_1), 1);
					break;
				case 1:
					if (__LIB_6__::func_168(Global_4718592.f_168757))
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
						HUD::THEFEED_FLUSH_QUEUE();
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if ((!CAM::IS_SCREEN_FADED_OUT() && Global_2715699.f_2846.f_85 == 0) && uParam0->f_1.f_5 > 0)
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							__LIB_26__::func_315(uParam0);
							if ((!__LIB_8__::func_786() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_6__::func_272())
							{
								if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() == 1)
								{
									CAM::DO_SCREEN_FADE_OUT(250);
								}
								else
								{
									__LIB_26__::func_315(uParam0);
									__LIB_5__::func_951(&(uParam0->f_1), 2);
								}
							}
							else
							{
								__LIB_26__::func_315(uParam0);
								__LIB_5__::func_951(&(uParam0->f_1), 2);
							}
						}
					}
					else
					{
						__LIB_5__::func_951(&(uParam0->f_1), 2);
					}
					break;
				case 2:
					__LIB_32__::func_483();
					__LIB_26__::func_62(uParam0);
					__LIB_1__::func_3();
					if (!Global_1931426)
					{
						__LIB_27__::func_312();
					}
					if (!__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0) || !__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544()), 0))
					{
						if (!__LIB_6__::func_171(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_6__::func_544())))
						{
							__LIB_38__::func_200(1, 1);
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
							if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_727()))
							{
								if (!PED::IS_PED_INJURED(__LIB_0__::func_727()))
								{
									PED::SET_PED_LOD_MULTIPLIER(__LIB_0__::func_727(), 1f);
								}
							}
							if (!__LIB_6__::func_272())
							{
								__LIB_7__::func_176(1, iVar1, 1);
							}
						}
						if (iVar1 == PLAYER::PLAYER_PED_ID())
						{
							__LIB_6__::func_282(&(uParam0->f_1.f_7), 0);
						}
						else
						{
							__LIB_6__::func_302(&(uParam0->f_1.f_7), 0);
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
									if (!BitTest(Global_2621446, 18) && __LIB_4__::func_73(&(uParam0->f_1)) != 3)
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
							func_5409(uParam0);
							if (__LIB_6__::func_304(&(uParam0->f_1)))
							{
								uParam0->f_1.f_30 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
							}
							else
							{
								uParam0->f_1.f_30 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
								if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::func_160())
								{
								}
							}
							if (Global_2621443 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
							{
								Var5 = { uParam0->f_1.f_30 };
								Var5.f_2 = (Var5.f_2 + 25f);
								if ((((__LIB_4__::func_73(&(uParam0->f_1)) != 5 && __LIB_4__::func_73(&(uParam0->f_1)) != 3) && __LIB_4__::func_73(&(uParam0->f_1)) != 4) && !BitTest(Global_2621446, 16)) && MISC::ABSF(Var5.f_2) < 2600f)
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
									if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var5, false, true, false, false);
										ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
									}
								}
							}
							if (__LIB_6__::func_304(&(uParam0->f_1)))
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
					__LIB_32__::func_628(uParam0);
					MISC::SET_BIT(&(uParam0->f_47), 6);
					uParam0->f_1.f_24 = NETWORK::GET_NETWORK_TIME();
					__LIB_6__::func_301(uParam0);
					__LIB_0__::func_579(&(uParam0->f_2257));
					__LIB_5__::func_951(&(uParam0->f_1), 3);
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
						else if (!__LIB_6__::func_304(&(uParam0->f_1)))
						{
							if (ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
							}
							if (SYSTEM::VDIST2(uParam0->f_1.f_30, ENTITY::GET_ENTITY_COORDS(iVar1, false)) > 2500f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = true;
								if (__LIB_9__::func_91(PLAYER::PLAYER_ID()))
								{
									bVar0 = false;
								}
							}
							if (ENTITY::GET_ENTITY_SPEED(iVar1) > 2f)
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
								MISC::CLEAR_BIT(&(uParam0->f_1), 10);
								bVar0 = false;
								__LIB_0__::func_579(&(uParam0->f_2257));
								__LIB_0__::func_580(&(uParam0->f_2257), 0, 0);
							}
							if (__LIB_0__::func_649(&(uParam0->f_2257)))
							{
								if (!__LIB_2__::func_47(&(uParam0->f_2257), 6000, 0))
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
					if (__LIB_6__::func_551(iVar2))
					{
						bVar0 = false;
					}
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 != __LIB_0__::func_160())
					{
						if (__LIB_1__::func_264(iVar2, 0, 1))
						{
							if (__LIB_0__::func_743(iVar2))
							{
								if (__LIB_7__::func_276(iVar2))
								{
									if (__LIB_0__::func_706())
									{
										if (!__LIB_0__::func_827(109))
										{
											if (__LIB_0__::func_742() == 6)
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
							if (((uParam0->f_1.f_35 != 3 && uParam0->f_1.f_35 != 5) && uParam0->f_1.f_35 != 4) && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
								MISC::SET_BIT(&(uParam0->f_1), 14);
							}
							MISC::SET_BIT(&(uParam0->f_1), 12);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
						__LIB_0__::func_579(&(uParam0->f_2257));
						__LIB_5__::func_951(&(uParam0->f_1), 4);
					}
					__LIB_32__::func_628(uParam0);
					break;
				case 4:
					__LIB_32__::func_628(uParam0);
					if (BitTest(uParam0->f_47, 15))
					{
						if (__LIB_0__::func_706() || __LIB_26__::func_72())
						{
							MISC::CLEAR_BIT(&(uParam0->f_47), 15);
						}
					}
					if (bParam2 && PED::IS_PED_INJURED(iVar1))
					{
						__LIB_5__::func_951(&(uParam0->f_1), 5);
					}
					else if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!BitTest(uParam0->f_47, 15))
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								if (!__LIB_8__::func_786() && !__LIB_6__::func_300(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), Global_2815059.f_6749))
								{
									if (__LIB_0__::func_706() || __LIB_26__::func_72())
									{
										CAM::DO_SCREEN_FADE_IN(250);
									}
									else
									{
										MISC::SET_BIT(&(uParam0->f_47), 15);
									}
									__LIB_0__::func_579(&(uParam0->f_47.f_2186));
									HUD::BUSYSPINNER_OFF();
									PAD::SET_CONTROL_VALUE_NEXT_FRAME(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, 1f);
								}
								else
								{
									__LIB_5__::func_951(&(uParam0->f_1), 5);
								}
							}
						}
						else
						{
							__LIB_5__::func_951(&(uParam0->f_1), 5);
						}
					}
					else
					{
						__LIB_5__::func_951(&(uParam0->f_1), 5);
					}
					break;
				case 5:
					__LIB_6__::func_273();
					__LIB_6__::func_285(&(uParam0->f_1));
					if (!bParam2 || !PED::IS_PED_INJURED(iVar1))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_5__::func_951(&(uParam0->f_1), 0);
					__LIB_6__::func_274(&(uParam0->f_1), 0);
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
		__LIB_6__::func_299();
		__LIB_6__::func_550(uParam0, __LIB_1__::func_282());
		if (PED::IS_PED_A_PLAYER(__LIB_1__::func_282()))
		{
			uParam0->f_1.f_42 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282());
		}
		else
		{
			uParam0->f_1.f_42 = -1;
		}
		return 1;
	}
	return 0;
}

void func_5370(var uParam0)//Position - 0x1B252F
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_0__::func_497())
		{
			if (uParam0->f_1.f_4)
			{
				if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
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
				if (__LIB_26__::func_317() && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
				{
					return;
				}
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
				__LIB_6__::func_301(uParam0);
				if (__LIB_6__::func_318(uParam0))
				{
					if (PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)) != __LIB_0__::func_727())
					{
						__LIB_6__::func_550(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_8__::func_824(uParam0, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)));
						__LIB_7__::func_176(1, __LIB_0__::func_727(), 1);
						__LIB_6__::func_246();
					}
				}
				if (__LIB_6__::func_275(__LIB_1__::func_282()))
				{
					if (__LIB_1__::func_282() != PLAYER::PLAYER_PED_ID())
					{
						if (PED::IS_PED_A_PLAYER(__LIB_1__::func_282()))
						{
							__LIB_26__::func_316(uParam0);
							if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
								func_5388(uParam0);
							}
							iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
							if (PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())) > iVar0)
							{
								iVar0 = PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
							}
							if (iVar0 != uParam0->f_47.f_1465)
							{
								uParam0->f_47.f_1465 = iVar0;
								MISC::SET_FAKE_WANTED_LEVEL(uParam0->f_47.f_1465);
							}
							if (__LIB_1__::func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 1, 1))
							{
								if (PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())) != uParam0->f_47.f_1466)
								{
									uParam0->f_47.f_1466 = PLAYER::ARE_PLAYER_STARS_GREYED_OUT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()));
									HUD::FLASH_WANTED_DISPLAY(uParam0->f_47.f_1466);
								}
							}
							iVar1 = 1;
							if ((uParam0->f_1.f_35 == 3 || uParam0->f_1.f_35 == 5) || uParam0->f_1.f_35 == 4)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
								{
									if (__LIB_0__::func_743(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282())))
									{
										__LIB_6__::func_246();
										if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(0);
										}
										iVar1 = 0;
									}
								}
							}
							if (__LIB_0__::func_649(&(uParam0->f_2255)))
							{
								if (__LIB_37__::func_6(__LIB_1__::func_282(), __LIB_4__::func_73(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::func_579(&(uParam0->f_2255));
								}
							}
							func_5375(uParam0, __LIB_1__::func_282());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							__LIB_41__::func_727(uParam0);
						}
					}
					if ((__LIB_6__::func_144(&(uParam0->f_1)) != 6 && __LIB_6__::func_144(&(uParam0->f_1)) != 4) && __LIB_6__::func_144(&(uParam0->f_1)) != 5)
					{
						if (__LIB_1__::func_282() != __LIB_0__::func_727())
						{
							if (!__LIB_8__::func_694())
							{
								__LIB_5__::func_951(&(uParam0->f_1), 0);
								__LIB_4__::func_741(&(uParam0->f_1), 2);
								__LIB_6__::func_274(&(uParam0->f_1), 1);
								__LIB_8__::func_784(&(uParam0->f_1));
							}
						}
					}
				}
				else
				{
					__LIB_42__::func_113(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_42__::func_25(uParam0);
	}
	__LIB_42__::func_422(uParam0);
}

void func_5375(var uParam0, int iParam1)//Position - 0x1B2933
{
	if (__LIB_8__::func_849(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_32__::func_241(iParam1);
		}
		else if (!__LIB_3__::func_962(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_4808(uParam0->f_2262, 1);
		}
	}
	else
	{
		func_4807(uParam0);
	}
}

void func_5388(var uParam0)//Position - 0x1B2ED3
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282());
	if (iVar1 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (BitTest(Global_2621446.f_69.f_5, 11))
		{
			if ((__LIB_6__::func_305(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775, 0) && !__LIB_8__::func_303(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_9__::func_49(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775))
			{
				if ((Global_4718592 == 2 || Global_4718592 == 8) || Global_4718592 == 0)
				{
					if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775 == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 0))
			{
				bVar0 = true;
			}
		}
		else if (__LIB_6__::func_305(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_282()), 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0 == 1)
	{
		if (__LIB_6__::func_154() && __LIB_1__::func_212())
		{
			bVar0 = false;
		}
	}
	if (__LIB_1__::func_592())
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_491() == 2)
		{
			__LIB_6__::func_283();
		}
	}
	else
	{
		if (bVar0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || __LIB_0__::func_491() == 1)
			{
				if ((!__LIB_0__::func_649(&(uParam0->f_2251)) || __LIB_2__::func_47(&(uParam0->f_2251), 5000, 0)) || __LIB_0__::func_491() == 1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_0__::func_579(&(uParam0->f_2251));
					__LIB_8__::func_788(uParam0, __LIB_6__::func_314());
					__LIB_7__::func_176(0, 0, 1);
					func_5254(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_495(&(uParam0->f_2251), 0, 0);
			}
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (__LIB_6__::func_336() == 0)
			{
				__LIB_6__::func_335(1);
			}
		}
		switch (__LIB_6__::func_336())
		{
			case 0:
				break;
			case 1:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if ((!__LIB_8__::func_786() && !BitTest(uParam0->f_1.f_1, 4)) && !__LIB_6__::func_272())
						{
							CAM::DO_SCREEN_FADE_OUT(250);
						}
						else
						{
							__LIB_7__::func_176(1, __LIB_0__::func_727(), 1);
							__LIB_1__::func_748();
							__LIB_38__::func_200(1, 1);
							__LIB_6__::func_313(1);
							__LIB_6__::func_335(0);
						}
					}
				}
				else
				{
					uParam0->f_1.f_28 = NETWORK::GET_NETWORK_TIME();
					__LIB_7__::func_176(1, __LIB_0__::func_727(), 1);
					__LIB_1__::func_748();
					__LIB_38__::func_200(1, 1);
					__LIB_6__::func_313(1);
					__LIB_6__::func_335(2);
				}
				break;
			case 2:
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_1.f_28) > 8000)
				{
					__LIB_6__::func_335(3);
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if (!__LIB_8__::func_786())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						else
						{
							__LIB_6__::func_335(0);
						}
					}
				}
				else
				{
					__LIB_6__::func_335(0);
				}
				break;
			}
	}
}

void func_5399(var uParam0)//Position - 0x1B35B9
{
	if (__LIB_6__::func_153(&(uParam0->f_1)) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_4__::func_764(16))
		{
			if (func_5347(uParam0, 1, 0))
			{
				__LIB_4__::func_741(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_8__::func_783();
		__LIB_8__::func_784(&(uParam0->f_1));
		__LIB_42__::func_25(uParam0);
	}
	__LIB_42__::func_422(uParam0);
}

void func_5409(var uParam0)//Position - 0x1B39A2
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
	if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
	{
		fVar1 = 0.15f;
	}
	if (__LIB_6__::func_304(&(uParam0->f_1)) && CAM::GET_RENDERING_CAM() == uParam0->f_1.f_39)
	{
		CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
		PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
		if ((!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			Var2 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
			if (__LIB_6__::func_329())
			{
				Var2 = { __LIB_6__::func_328() };
			}
			if (!__LIB_0__::func_86(Var2))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var2, 0f, 0f, 0f);
			}
		}
	}
	if (uParam0->f_1.f_34 && __LIB_0__::func_997(&(uParam0->f_1)) > 1)
	{
		iVar0 = __LIB_6__::func_544();
	}
	else
	{
		iVar0 = __LIB_0__::func_727();
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
					iVar6 = __LIB_4__::func_962(iVar3, 0);
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
							if (((Global_2689235[iVar4 /*453*/].f_244 != -1 && !__LIB_0__::func_630(iVar5, -1)) && !__LIB_18__::func_376(iVar5, 0, 0)) && !__LIB_3__::func_813(iVar3))
							{
								iVar14 = __LIB_0__::func_299(Global_2689235[iVar4 /*453*/].f_244);
								if (iVar14 != 3 && !__LIB_11__::func_264(iVar14, iVar3))
								{
									bVar7 = true;
									if (!__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (__LIB_6__::func_327(Global_2689235[iVar4 /*453*/].f_244, &Var8, &Var9, &fVar13))
										{
											uParam0->f_1.f_41 = 1;
											__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
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
							iVar15 = __LIB_4__::func_721(iVar3);
							if (iVar15 == -1)
							{
								iVar15 = __LIB_3__::func_977(iVar3);
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
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_160())
								{
									iVar17 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11, 50f, iVar16, 131078);
									Var18 = { 0f, -15f, 5f };
									if (__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar17))
										{
											__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar17, Var18);
										}
									}
								}
							}
							else if (iVar15 == 88 || iVar15 == 101)
							{
								iVar19 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								Var20 = { 0f, -15f, 5f };
								if (__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar19))
									{
										__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar19, Var20);
									}
								}
							}
						}
						if (!bVar7)
						{
							iVar21 = __LIB_4__::func_721(iVar3);
							if (iVar21 == -1)
							{
								iVar21 = __LIB_3__::func_977(iVar3);
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
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_160())
								{
									Var23 = { Global_2689235[Global_2689235[iVar3 /*453*/].f_318.f_9 /*453*/].f_318.f_11 };
									iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(Var23, 50f, iVar22, 131078);
									if (!__LIB_0__::func_86(Var23))
									{
										__LIB_6__::func_326(Var23);
									}
									Var25 = { 0f, -15f, 5f };
									if (!__LIB_6__::func_304(&(uParam0->f_1)))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar24))
										{
											__LIB_26__::func_318(uParam0, iVar24, Var25, 0, Var23);
										}
										else
										{
											if (!__LIB_0__::func_86(Var23))
											{
												STREAMING::SET_FOCUS_POS_AND_VEL(Var23, 0f, 0f, 0f);
											}
											__LIB_26__::func_318(uParam0, iVar24, Var25, 0, Var23);
										}
									}
									else if (ENTITY::DOES_ENTITY_EXIST(iVar24))
									{
										CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar24, Var25, true);
										__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar24, Var25);
									}
								}
								bVar7 = true;
							}
							else if (iVar21 == 88 || iVar21 == 101)
							{
								iVar26 = VEHICLE::GET_CLOSEST_VEHICLE(Global_2689235[iVar3 /*453*/].f_318.f_21, 50f, joaat("avenger"), 86138);
								if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
								{
									__LIB_6__::func_326(Global_2689235[iVar3 /*453*/].f_318.f_21);
								}
								Var27 = { 0f, -15f, 5f };
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar26))
									{
										__LIB_26__::func_318(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
										Global_2815059.f_5195.f_764 = iVar26;
									}
									else
									{
										if (!__LIB_0__::func_86(Global_2689235[iVar3 /*453*/].f_318.f_21))
										{
											STREAMING::SET_FOCUS_POS_AND_VEL(Global_2689235[iVar3 /*453*/].f_318.f_21, 0f, 0f, 0f);
										}
										__LIB_26__::func_318(uParam0, iVar26, Var27, 0, Global_2689235[iVar3 /*453*/].f_318.f_21);
									}
								}
								else if (Global_2815059.f_5195.f_764 != iVar26)
								{
									__LIB_26__::func_62(uParam0);
								}
								else if (ENTITY::DOES_ENTITY_EXIST(iVar26))
								{
									CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1.f_39, iVar26, Var27, true);
									__LIB_8__::func_695(&(uParam0->f_1.f_39), iVar26, Var27);
								}
								bVar7 = true;
							}
						}
						if (!bVar7)
						{
							if (((__LIB_1__::func_155(iVar3, 1, 0) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 8)) || (!PED::IS_PED_INJURED(iVar0) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0) == MISC::GET_HASH_KEY("YachtRm_Bridge"))) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 9))
							{
								if (iVar5 != -1)
								{
									if (!__LIB_4__::func_710(iVar5) || (__LIB_4__::func_710(iVar5) && iVar6 != -1))
									{
										bVar7 = true;
										__LIB_6__::func_325(uParam0);
										if (uParam0->f_1.f_41 > 2)
										{
											__LIB_26__::func_62(uParam0);
										}
										if (!__LIB_6__::func_304(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 2;
											if (__LIB_4__::func_710(iVar5))
											{
												__LIB_6__::func_326(Global_4196263[iVar6 /*2012*/].f_3[0 /*3*/]);
												__LIB_26__::func_319(uParam0, fVar1, Global_4196263[iVar6 /*2012*/].f_24, Global_4196263[iVar6 /*2012*/].f_24.f_3, Global_4196263[iVar6 /*2012*/].f_24.f_6, 1, 1);
											}
											else
											{
												__LIB_6__::func_326(Global_1312193[iVar5 /*1951*/].f_3[0 /*3*/]);
												__LIB_26__::func_319(uParam0, fVar1, Global_1312193[iVar5 /*1951*/].f_24, Global_1312193[iVar5 /*1951*/].f_24.f_3, Global_1312193[iVar5 /*1951*/].f_24.f_6, 1, 1);
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_3__::func_859(iVar3) || __LIB_3__::func_998(iVar3))
							{
								iVar28 = __LIB_4__::func_721(iVar3);
								if (iVar28 == -1)
								{
									iVar28 = __LIB_3__::func_977(iVar3);
								}
								if (iVar28 != -1)
								{
									if ((((((((((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_0__::func_170(iVar28) != 4)) && __LIB_0__::func_170(iVar28) != 12) && __LIB_0__::func_170(iVar28) != 8) && __LIB_0__::func_170(iVar28) != 5) && __LIB_0__::func_170(iVar28) != 10) && __LIB_0__::func_170(iVar28) != 6) && __LIB_0__::func_170(iVar28) != 14) && __LIB_0__::func_170(iVar28) != 15) && __LIB_0__::func_170(iVar28) != 16) && __LIB_0__::func_170(iVar28) != 17)
									{
										iVar29 = 0;
										if (__LIB_0__::func_170(iVar28) == 11)
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
										func_5417(iVar28, &Var30, iVar29, 0);
										__LIB_6__::func_325(uParam0);
										if (!__LIB_6__::func_304(&(uParam0->f_1)))
										{
											uParam0->f_1.f_41 = 14;
											Var31 = { Var30.f_22.f_59 };
											Var32 = { Var30.f_22.f_62 };
											fVar33 = Var30.f_22.f_65;
											__LIB_6__::func_326(Global_1946250.f_533[iVar28 /*3*/]);
											if (SYSTEM::VDIST(Var31, 0f, 0f, 0f) < 0.01f)
											{
												Var31 = { Var30.f_22.f_13 };
												Var32 = { Var30.f_22.f_16 };
												fVar33 = Var30.f_22.f_19;
											}
											if (!__LIB_0__::func_86(Var31))
											{
												__LIB_26__::func_319(uParam0, fVar1, Var31, Var32, fVar33, 1, 1);
												bVar7 = true;
											}
										}
									}
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 7))
							{
								bVar7 = true;
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 3;
									__LIB_26__::func_319(uParam0, fVar1, 122.0654f, -1327.9208f, 33.6793f, -2.9863f, 2.0975f, -9.7207f, 32.8998f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 12))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 4;
									__LIB_26__::func_319(uParam0, fVar1, 1291.5598f, -1730.0697f, 58.7646f, -7.1113f, 0f, 65.8008f, 41.2371f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 13))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 5;
									__LIB_26__::func_319(uParam0, fVar1, 1989.2953f, 3812.5586f, 33.4393f, -0.5562f, 0f, 69.5306f, 40.2409f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_0__::func_702(iVar3, 14))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 6;
									__LIB_26__::func_319(uParam0, fVar1, 689.6125f, -996.7897f, 37.070427f, -7.501717f, 0f, -43.41461f, 45f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_9__::func_93(iVar3))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
									Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
									uParam0->f_1.f_41 = 7;
									__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (BitTest(Global_1853348[iVar4 /*834*/].f_833, 12))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									__LIB_6__::func_324(&uVar10, &uVar11, &Var8, &Var9, &uVar12, Global_4718592.f_162483, 1);
									uParam0->f_1.f_41 = 8;
									__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, 40f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (((BitTest(Global_1853348[iVar4 /*834*/].f_833, 14) || BitTest(Global_1853348[iVar4 /*834*/].f_833, 15)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_ROLLERCOASTER", -1)) || NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar3, "AM_FERRISWHEEL", -1))
							{
								bVar7 = true;
								__LIB_6__::func_325(uParam0);
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									uParam0->f_1.f_41 = 9;
									__LIB_26__::func_319(uParam0, fVar1, -1703.854f, -1082.2223f, 42.006f, -8.3096f, 0f, -111.8213f, 45f, 1, 0);
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
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									__LIB_6__::func_323(0);
									uParam0->f_1.f_41 = 10;
									__LIB_26__::func_319(uParam0, fVar1, -1155.4f, -2715.5f, 64f, -10.3f, 0f, 113.1f, 50f, 1, 0);
								}
							}
						}
						if (!bVar7)
						{
							if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
							{
								if ((__LIB_0__::func_743(iVar3) && __LIB_1__::func_566(iVar3) < 41) && !__LIB_1__::func_155(iVar3, 1, 0))
								{
									if ((__LIB_6__::func_144(&(uParam0->f_1)) == 3 && __LIB_9__::func_888(iVar3)) && Global_4718592.f_117083)
									{
										if (__LIB_6__::func_304(&(uParam0->f_1)))
										{
											bVar7 = true;
										}
										else
										{
											bVar7 = true;
											Var8 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
											Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
											fVar13 = CAM::GET_FINAL_RENDERED_CAM_FOV();
											if (!__LIB_0__::func_86(Global_4718592.f_634) && __LIB_0__::func_706())
											{
												Var8 = { Global_4718592.f_634 };
												Var9 = { Global_4718592.f_637 };
											}
											__LIB_16__::func_621(0, 0, 1);
											uParam0->f_1.f_41 = 11;
											__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
										}
									}
									else if (__LIB_6__::func_304(&(uParam0->f_1)))
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
										__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
							else if (__LIB_0__::func_702(iVar3, 0))
							{
								bVar7 = true;
								if (!__LIB_6__::func_304(&(uParam0->f_1)))
								{
									if (__LIB_6__::func_322(__LIB_1__::func_265(iVar3), &Var8, &Var9, &fVar13))
									{
										uParam0->f_1.f_41 = 13;
										__LIB_26__::func_319(uParam0, fVar1, Var8, Var9, fVar13, 1, 0);
									}
								}
							}
						}
					}
					if (!bVar7 && !__LIB_0__::func_706())
					{
						if (__LIB_9__::func_92(uParam0, iVar3) && !__LIB_6__::func_321())
						{
							__LIB_26__::func_62(uParam0);
						}
					}
				}
			}
		}
	}
}

void func_5417(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1B4B78
{
	var uVar0;
	func_5418(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_5418(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1B4B8E
{
	struct<33> Var0;
	func_138(iParam0, &Var0, 2);
	func_138(iParam0, &Var0, 6);
	func_138(iParam0, &Var0, 1);
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

void func_5465(int* iParam0)//Position - 0x1B681C
{
	__LIB_6__::func_469(iParam0);
	__LIB_6__::func_468(iParam0);
	MISC::CLEAR_BIT(iParam0, 12);
	MISC::CLEAR_BIT(iParam0, 13);
	__LIB_1__::func_769(PLAYER::PLAYER_ID(), 1);
	__LIB_7__::func_909();
	__LIB_21__::func_361();
	func_4739(&(iParam0->f_88), 0);
	if (!BitTest(*iParam0, 17))
	{
		HUD::SET_RADAR_ZOOM(0);
		HUD::DISPLAY_RADAR(true);
	}
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	GRAPHICS::SET_NOISEOVERIDE(false);
	GRAPHICS::SET_NOISINESSOVERIDE(0f);
	if (__LIB_19__::func_666())
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
	__LIB_6__::func_916();
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_7));
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_4 < 1)
	{
		__LIB_35__::func_769(&(iParam0->f_88));
	}
	func_4739(&(iParam0->f_88), 0);
	__LIB_0__::func_579(&(iParam0->f_80));
	MISC::CLEAR_BIT(iParam0, 11);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			if (BitTest(iParam0->f_28, 2))
			{
				__LIB_6__::func_467(iParam0, 0);
			}
		}
	}
	if (((Global_2789733 && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1)) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2789733 = 0;
}

int func_5475(int* iParam0, int* iParam1)//Position - 0x1B6C4C
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	iVar0 = 0;
	uVar1 = __LIB_2__::func_246(PLAYER::PLAYER_ID());
	uVar2 = __LIB_4__::func_520(PLAYER::PLAYER_ID());
	uVar3 = __LIB_19__::func_534(PLAYER::PLAYER_ID());
	if ((iParam1->f_2483 && !BitTest(*iParam1, 31)) && !BitTest(iParam1->f_1, 0))
	{
		return 0;
	}
	if (!Global_1931426 && !BitTest(Global_1931419, 2))
	{
		if (((((__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && !BitTest(Global_2703735.f_876.f_4, 0)) && !BitTest(Global_2621446, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_3__::func_633()) && !__LIB_2__::func_368())
		{
			if (BitTest(*iParam0, 3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 226.86108f, -975.7418f, -99.99992f, 230.35152f, -975.6111f, -96.041504f, 4.875f, false, true, 0) && !__LIB_3__::func_633())
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
			if ((((((iParam0->f_8 != 3 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0)) && !__LIB_6__::func_567()) && !__LIB_0__::func_661()) && !__LIB_0__::func_190()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_6__::func_566(1, 0);
			}
			else
			{
				__LIB_6__::func_566(0, 0);
			}
			if ((BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3, 0) && __LIB_26__::func_75()) && !BitTest(Global_1931419, 5))
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
			__LIB_6__::func_566(0, 1);
		}
	}
	else if (((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30)))
	{
		__LIB_0__::func_495(&(Global_1931419.f_4), 1, 0);
	}
	if (((((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30))) && __LIB_0__::func_649(&(Global_1931419.f_4))) && !__LIB_2__::func_47(&(Global_1931419.f_4), 3000, 1))
	{
		iVar0 = 0;
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_6__::func_404(&(iParam1->f_3));
		iParam1->f_3 = -1;
	}
	if ((BitTest(Global_1931419, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_190())
	{
		__LIB_6__::func_404(&(iParam1->f_3));
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
					__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_GBILL" /* GXT: Unable to watch TV until utility charge is paid. */, 0, 0, 0, 0);
				}
				else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SBILL_KM" /* GXT: Unable to watch TV until utility charge is paid.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SBILL" /* GXT: Unable to watch TV until utility charge is paid.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
				}
			}
		}
		else
		{
			if (Global_262145.f_24101 /* Tunable: ON_CALL_BLOCKS_TV */)
			{
				if (__LIB_0__::func_706() || __LIB_0__::func_494())
				{
					__LIB_6__::func_404(&(iParam1->f_3));
					return 0;
				}
			}
			if ((((iParam1->f_2481 || iParam1->f_2482) || iParam1->f_2483) && !BitTest(*iParam1, 31)) && Global_2725435)
			{
				if (__LIB_0__::func_1("MPTV_SEAT" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && __LIB_0__::func_1("MPTV_SEAT_KM" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)))
				{
					__LIB_6__::func_404(&(iParam1->f_3));
					iParam1->f_3 = -1;
					HUD::CLEAR_HELP(true);
				}
			}
			else if (__LIB_0__::func_1("MPTV_SEAT_NA" /* GXT: Press ~INPUT_FRONTEND_CANCEL~ to stand up. */) || __LIB_0__::func_1("MPTV_SEAT_NA_PC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
			{
				__LIB_6__::func_404(&(iParam1->f_3));
				iParam1->f_3 = -1;
				HUD::CLEAR_HELP(true);
			}
			if (iParam1->f_3 == -1)
			{
				if (BitTest(*iParam0, 3))
				{
					__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_GRGE" /* GXT: Press ~INPUT_CONTEXT~ to watch TV. */, 0, 0, 0, 0);
				}
				else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (((((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30))) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_190())
					{
						if (BitTest(Global_1931419, 0))
						{
							if (__LIB_20__::func_317(1))
							{
								if (func_5476())
								{
									__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_KMO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_ST_KMO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
							else if (__LIB_8__::func_854())
							{
								if (func_5476())
								{
									__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_KMO" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_KMONP" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
						}
						else if (__LIB_20__::func_317(1))
						{
							if (func_5476())
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_KMO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_ST_KMO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
						else if (__LIB_8__::func_854())
						{
							if (func_5476())
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_KM_OF" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_ST_KM_OFNP" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else if (uVar2 || uVar3)
					{
						if (__LIB_8__::func_854())
						{
							if (func_5476())
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_CLUP" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_KM" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else if ((((iParam1->f_2481 || iParam1->f_2482) || iParam1->f_2483) && !BitTest(*iParam1, 31)) && Global_2725435)
					{
						__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_NA_PC" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_KM" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else if (((uVar1 || (iParam1->f_2481 && BitTest(*iParam1, 30))) || (iParam1->f_2482 && BitTest(*iParam1, 30))) || (iParam1->f_2483 && BitTest(*iParam1, 30)))
				{
					if (BitTest(Global_1931419, 0))
					{
						if (__LIB_20__::func_317(1))
						{
							if (func_5476())
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEATO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEATO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
						}
						else if (__LIB_8__::func_854())
						{
							if (func_5476())
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEATO" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEATONP" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to play "Don't Cross The Line", or wait for more players to join.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else if (__LIB_20__::func_317(1))
					{
						if (func_5476())
						{
							__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEATO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEATO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_8__::func_854())
					{
						if (func_5476())
						{
							__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_OFF" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_OFFNP" /* GXT: Wait for another available player to play "Don't Cross The Line".~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
					}
				}
				else if (uVar2 || uVar3)
				{
					if (__LIB_8__::func_854())
					{
						if (func_5476())
						{
							__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_CLU" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
						}
					}
				}
				else if ((((iParam1->f_2481 || iParam1->f_2482) || iParam1->f_2483) && !BitTest(*iParam1, 31)) && Global_2725435)
				{
					__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT_NA" /* GXT: Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
				}
				else
				{
					__LIB_7__::func_508(&(iParam1->f_3), 3, "MPTV_SEAT" /* GXT: Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */, 0, 0, 0, 0);
				}
			}
			else
			{
				if (!__LIB_20__::func_317(0))
				{
					if (((__LIB_0__::func_1("MPTV_SEATO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */) || __LIB_0__::func_1("MPTV_SEATO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_FRONTEND_CANCEL~ to stand up. */)) || __LIB_0__::func_1("MPTV_SEAT_KMO2" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change pose.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */)) || __LIB_0__::func_1("MPTV_ST_KMO2NP" /* GXT: A game of "Don't Cross The Line" is in progress. You will join in when the game ends.~n~Press ~INPUT_CONTEXT~ to watch TV.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */))
					{
						__LIB_6__::func_404(&(iParam1->f_3));
					}
				}
				if (Global_262145.f_24101 /* Tunable: ON_CALL_BLOCKS_TV */)
				{
					if (__LIB_0__::func_706() || __LIB_0__::func_494())
					{
						__LIB_6__::func_404(&(iParam1->f_3));
					}
				}
				if (__LIB_2__::func_187(iParam1->f_3, 1))
				{
					__LIB_6__::func_404(&(iParam1->f_3));
					return 1;
				}
			}
		}
	}
	else
	{
		__LIB_6__::func_404(&(iParam1->f_3));
	}
	return 0;
}

int func_5476()//Position - 0x1B7538
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_925())
	{
		iVar0 = func_307(PLAYER::PLAYER_PED_ID(), 11, -1);
		iVar1 = func_307(PLAYER::PLAYER_PED_ID(), 4, -1);
		if (__LIB_6__::func_802(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 11, iVar0, -1) || __LIB_8__::func_853(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 4, iVar1, -1))
		{
			return 0;
		}
	}
	return 1;
}

int func_5484(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x1B7869
{
	if (!BitTest(*iParam2, 24))
	{
		__LIB_32__::func_613(iParam2, uParam3);
	}
	if (BitTest(*iParam2, 5))
	{
		return 1;
	}
	else
	{
		if (__LIB_26__::func_399(iParam2, uParam3) == 0)
		{
			return 0;
		}
		STREAMING::REQUEST_MODEL(__LIB_26__::func_399(iParam2, uParam3));
		if (STREAMING::HAS_MODEL_LOADED(__LIB_26__::func_399(iParam2, uParam3)))
		{
			if (__LIB_6__::func_533(uParam0, iParam1) > 0)
			{
				iParam2->f_87 = __LIB_6__::func_532(uParam0, iParam1);
				__LIB_6__::func_464(iParam2, 13);
				MISC::SET_BIT(iParam2, 0);
				if (__LIB_26__::func_407(iParam2, uParam3->f_31, *iParam1))
				{
					if (func_125(iParam1, iParam2, uParam3))
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
				else if (func_4734(iParam1, iParam2, uParam3))
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

void func_5492(var uParam0, int* iParam1, int* iParam2)//Position - 0x1B8459
{
	if (!BitTest(*iParam2, 8))
	{
		switch (__LIB_6__::func_533(uParam0, iParam1))
		{
			case 1:
				if (iParam2->f_87 != __LIB_6__::func_532(uParam0, iParam1))
				{
					__LIB_9__::func_89(iParam2, iParam2->f_87, __LIB_6__::func_532(uParam0, iParam1));
					iParam2->f_86 = __LIB_6__::func_535(__LIB_6__::func_532(uParam0, iParam1));
					iParam2->f_87 = __LIB_6__::func_532(uParam0, iParam1);
				}
				if ((iParam2->f_87 == 3 && iParam1->f_8 == 3) && __LIB_6__::func_543(iParam2) > 11)
				{
					switch (uParam0->f_23)
					{
						case 1:
							if (GRAPHICS::GET_TV_CHANNEL() != __LIB_6__::func_535(uParam0->f_21))
							{
								__LIB_32__::func_614(iParam2, uParam0->f_21);
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
					__LIB_32__::func_614(iParam2, iParam2->f_87);
				}
				if (BitTest(iParam2->f_28, 8))
				{
					MISC::CLEAR_BIT(&(iParam2->f_28), 8);
				}
				if (!BitTest(iParam2->f_28, 7))
				{
					__LIB_10__::func_814(iParam2, iParam2->f_87);
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
					__LIB_10__::func_813(iParam2, iParam2->f_87);
					MISC::SET_BIT(&(iParam2->f_28), 8);
				}
				break;
			}
	}
	if (BitTest(*iParam2, 18))
	{
		__LIB_6__::func_466(iParam2);
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
					__LIB_6__::func_536(iParam2, 1);
				}
				else
				{
					__LIB_6__::func_536(iParam2, 1);
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
	func_5493(uParam0, iParam1, iParam2);
}

void func_5493(var uParam0, var uParam1, int* iParam2)//Position - 0x1B8684
{
	GRAPHICS::SET_TV_VOLUME(func_5494(uParam0, uParam1, iParam2));
}

float func_5494(var uParam0, var uParam1, var uParam2)//Position - 0x1B869A
{
	if (BitTest(*uParam2, 31) && uParam2->f_2481)
	{
		if (((Global_100493.f_374 == joaat("Apart_Entry_Room") || Global_100493.f_374 == joaat("Apart_Spare_Room")) || Global_100493.f_374 == joaat("Apart_Spare_Bath_Rm")) || Global_100493.f_374 == joaat("Apart_wardrobe"))
		{
			return func_5495(GRAPHICS::GET_TV_VOLUME(), -50f, 0.05f, 0);
		}
		else
		{
			return func_5495(GRAPHICS::GET_TV_VOLUME(), __LIB_6__::func_458(uParam0, uParam1), 0.05f, 0);
		}
	}
	if (BitTest(*uParam2, 22) && !BitTest(*uParam1, 3))
	{
		return -36f;
	}
	else
	{
		return __LIB_6__::func_458(uParam0, uParam1);
	}
	return -36f;
}

float func_5495(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x1B875F
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
			fVar0 = func_5495(fParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_5495(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

int func_5584()//Position - 0x1BD375
{
	if (__LIB_6__::func_949())
	{
		return 1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() && !__LIB_6__::func_350()) && (Local_154[PLAYER::PLAYER_ID() /*9*/].f_8 != 3 || BitTest(Global_1946250.f_6, 10)))
	{
		return 1;
	}
	if (!__LIB_4__::func_738(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_6__::func_445(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (!__LIB_4__::func_715())
	{
		return 1;
	}
	if (Global_100493.f_374 != joaat("room_office_hacker") && Global_100493.f_374 != joaat("room_backstairs"))
	{
		if (!BitTest(Local_154[PLAYER::PLAYER_ID() /*9*/], 2))
		{
			return 1;
		}
	}
	return 0;
}

void func_5593()//Position - 0x1BD576
{
	Global_1946234 = 0;
	__LIB_26__::func_697(&Local_156);
	func_5595(&iLocal_130, &(Local_154[PLAYER::PLAYER_ID() /*9*/]), &Local_155, &Global_4194304);
	if (BitTest(Local_155.f_0, 31))
	{
		MISC::CLEAR_BIT(&Local_155, 31);
	}
	__LIB_0__::func_199();
}

void func_5595(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x1BD5C1
{
	int iVar0;
	int iVar1;
	if (iParam2->f_2481 && BitTest(*iParam2, 31))
	{
		GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
	}
	Global_32231 = 0;
	iVar0 = __LIB_32__::func_318(iParam2, uParam3);
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
	func_5596(iParam1, iParam2, uParam3);
	MISC::CLEAR_BIT(&(Global_2621446.f_1), 2);
	iParam2->f_14 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			uParam0->f_20 = 6;
			uParam0->f_21 = 6;
			*uParam0 = 0;
			__LIB_6__::func_459(uParam0, 0, 1);
			__LIB_6__::func_459(uParam0, 0, 0);
		}
	}
}

void func_5596(int* iParam0, int* iParam1, var uParam2)//Position - 0x1BD66E
{
	MISC::CLEAR_BIT(iParam0, 12);
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_5465(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_44212))
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		if (__LIB_19__::func_665())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_2789006))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER(&Global_2789006);
			}
		}
		else if (__LIB_19__::func_944())
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
		__LIB_2__::func_333();
		MISC::CLEAR_BIT(iParam1, 2);
	}
	if (BitTest(*iParam1, 3))
	{
		__LIB_0__::func_801();
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
		__LIB_18__::func_721(1, 0);
		MISC::CLEAR_BIT(iParam1, 26);
	}
	__LIB_6__::func_466(iParam1);
	__LIB_20__::func_868(iParam1, uParam2, iParam0, 1);
	if (iParam1->f_87 == 4 || iParam1->f_87 == 5)
	{
		if (__LIB_6__::func_949())
		{
			STREAMING::CLEAR_FOCUS();
		}
	}
	if (__LIB_26__::func_399(iParam1, uParam2) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_26__::func_399(iParam1, uParam2));
	}
	MISC::CLEAR_BIT(&Global_2621446, 7);
	MISC::CLEAR_BIT(&Global_2621446, 16);
	MISC::CLEAR_BIT(&Global_2621446, 17);
	MISC::CLEAR_BIT(iParam1, 27);
	iParam1->f_87 = 6;
	__LIB_6__::func_464(iParam1, 13);
	iParam1->f_86 = -1;
	Global_1836103 = -1;
	if (iParam1->f_3 != -1)
	{
		__LIB_6__::func_404(&(iParam1->f_3));
	}
	*iParam1 = 0;
	iParam1->f_28 = 0;
	iParam0->f_7 = 6;
	__LIB_6__::func_463(iParam0, 0);
	*iParam0 = 0;
	iParam0->f_1 = 0;
}

int func_5598()//Position - 0x1BD8AB
{
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_160())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("fixer_hq_seating_op_floor", Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, true, 0))
	{
		return 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9);
	__LIB_1__::func_569(0, -1, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_130, 24, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_154, 289, 0);
	if (!__LIB_0__::func_672())
	{
		func_5593();
	}
	__LIB_0__::func_371();
	func_5599();
	Global_4194304.f_31 = -1;
	Global_4194304.f_33 = 0;
	Global_4194304.f_34 = -1;
	Global_4194304.f_35 = -1;
	Local_155.f_2483 = 1;
	return 1;
}

void func_5599()//Position - 0x1BD95F
{
	bool bVar0;
	bVar0 = false;
	if (!BitTest(Global_1946250.f_10, 8))
	{
		bVar0 = true;
	}
	else if (__LIB_5__::func_152(Global_1977036) != 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_5600(0, &Local_156, 0, 1);
	}
	func_5600(1, &Local_156, 1, 2);
	func_5600(2, &Local_156, 2, 2);
}

void func_5600(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1BD9AF
{
	struct<3> Var0;
	float fVar1;
	func_5604(iParam0, &Var0, &fVar1);
	uParam1->f_16[iParam2 /*14*/].f_13 = iParam3;
	uParam1->f_16[iParam2 /*14*/] = { Var0 };
	uParam1->f_16[iParam2 /*14*/].f_3 = { 0f, 0f, fVar1 };
	uParam1->f_16[iParam2 /*14*/].f_6.f_1 = { __LIB_0__::func_298(__LIB_9__::func_978(), __LIB_12__::func_238(iParam3, fVar1)) + Var0 };
	uParam1->f_16[iParam2 /*14*/].f_6.f_4 = { __LIB_0__::func_298(__LIB_9__::func_977(), __LIB_12__::func_238(iParam3, fVar1)) + Var0 };
	uParam1->f_16[iParam2 /*14*/].f_6 = 1.25f;
}

void func_5604(int iParam0, var uParam1, var uParam2)//Position - 0x1BDAA5
{
	if (__LIB_6__::func_925())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -7.66923f, 7.25021f, 8.6f };
				*uParam2 = 180.5f;
				break;
			case 1:
				*uParam1 = { -8.41115f, 7.20686f, 8.6f };
				*uParam2 = 180.5f;
				break;
			case 2:
				*uParam1 = { -9.24418f, 7.30273f, 8.6f };
				*uParam2 = 180.5f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -7.66923f, 7.25021f, 8.6f };
				*uParam2 = 180.5f;
				break;
			case 1:
				*uParam1 = { -8.41115f, 7.20686f, 8.6f };
				*uParam2 = 180.5f;
				break;
			case 2:
				*uParam1 = { -9.24418f, 7.30273f, 8.6f };
				*uParam2 = 180.5f;
				break;
			}
	}
	*uParam2 = func_136(*uParam2, __LIB_3__::func_977(PLAYER::PLAYER_ID()));
	*uParam1 = { func_4725(*uParam1, __LIB_3__::func_977(PLAYER::PLAYER_ID())) };
}

