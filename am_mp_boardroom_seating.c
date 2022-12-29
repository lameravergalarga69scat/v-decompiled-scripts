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
	int iLocal_130 = 0;
	struct<10> Local_131 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 8;
	var uLocal_135 = 0;
	var uLocal_136 = -1;
	var uLocal_137 = 0;
	var uLocal_138 = -1;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = -1;
	var uLocal_143 = 0;
	var uLocal_144 = -1;
	var uLocal_145 = 0;
	var uLocal_146 = -1;
	var uLocal_147 = 0;
	var uLocal_148 = -1;
	var uLocal_149 = 0;
	var uLocal_150 = -1;
	var uLocal_151 = 6;
	var uLocal_152 = 6;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	struct<10> Local_155[32];
	struct<2484> Local_156 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_157 = { 0, 0, 0, 0, -1, 0, -1 } ;
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
	fLocal_109 = 3f;
	fLocal_110 = 0f;
	fLocal_111 = 2f;
	fLocal_112 = 100f;
	iLocal_122 = -1;
	fLocal_124 = 0.5f;
	iLocal_130 = 7;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5575();
	}
	else
	{
		func_5571();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (func_5562())
		{
			func_5571();
		}
		func_5545();
		if (__LIB_9__::func_659())
		{
			func_4709();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_78();
			if (__LIB_9__::func_659())
			{
				__LIB_31__::func_853(&(Local_131.f_9), &(Local_155[Local_156.f_14 /*10*/].f_1), &Local_156, &Global_4194304);
			}
		}
	}
}

void func_78()//Position - 0x2ADD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = func_4708();
	iVar1 = 0;
	while (iVar1 < iLocal_130)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_131[iVar1]))
		{
			STREAMING::REQUEST_MODEL(iVar0);
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return;
			}
			STREAMING::REQUEST_ANIM_DICT(func_4707(iVar1, 0, 0));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4707(iVar1, 0, 0)))
			{
				return;
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4707(iVar1, 0, 0), "enter_chair", func_4705(iVar1, 1), func_79(iVar1), 0f, 2) };
				Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4707(iVar1, 0, 0), "enter_chair", func_4705(iVar1, 1), func_79(iVar1), 0f, 2) };
				iVar2 = OBJECT::CREATE_OBJECT(iVar0, Var3, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar2, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar2, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar2, Var3, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar2, Var4, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
				Local_131[iVar1] = NETWORK::OBJ_TO_NET(iVar2);
				STREAMING::REMOVE_ANIM_DICT(func_4707(iVar1, 0, 0));
			}
		}
		iVar1++;
	}
}

Vector3 func_79(int iParam0)//Position - 0x2BEC
{
	float fVar0;
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 180f;
			case 1:
				return 0f, 0f, 180f;
			case 2:
				return 0f, 0f, -90f;
			case 3:
				return 0f, 0f, 0f;
			case 4:
				return 0f, 0f, 0f;
			default:
		}
	}
	else if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 90f;
			case 1:
				return 0f, 0f, 90f;
			case 2:
				return 0f, 0f, 90f;
			case 3:
				return 0f, 0f, -90f;
			case 4:
				return 0f, 0f, -90f;
			default:
		}
	}
	else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, -75f;
			case 1:
				return 0f, 0f, 15f;
			case 2:
				return 0f, 0f, 15f;
			case 3:
				return 0f, 0f, 15f;
			case 4:
				return 0f, 0f, -165f;
			case 5:
				return 0f, 0f, -165f;
			case 6:
				return 0f, 0f, -165f;
			case 7:
				return 0f, 0f, 105f;
			default:
		}
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				fVar0 = 180f;
				break;
			case 1:
				fVar0 = 90f;
				break;
			case 2:
				fVar0 = 90f;
				break;
			case 3:
				fVar0 = 90f;
				break;
			case 4:
				fVar0 = 0f;
				break;
			case 5:
				fVar0 = 270f;
				break;
			case 6:
				fVar0 = 270f;
				break;
			case 7:
				fVar0 = 270f;
				break;
		}
		fVar0 = func_80(fVar0, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
		return 0f, 0f, fVar0;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 0f, 0f, 148f;
			case 1:
				return 0f, 0f, 148f;
			case 2:
				return 0f, 0f, 148f;
			case 3:
				return 0f, 0f, 58f;
			case 4:
				return 0f, 0f, -32f;
			case 5:
				return 0f, 0f, -32f;
			case 6:
				return 0f, 0f, -32f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

float func_80(float fParam0, int iParam1)//Position - 0x2E6D
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_81(iParam1, &uVar2, &uVar0, &fVar1, 0);
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

void func_81(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x2EB7
{
	struct<31> Var0;
	func_82(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_82(int iParam0, var uParam1, int iParam2)//Position - 0x2ED7
{
	func_4696(uParam1, iParam2);
	func_4690(uParam1, iParam2);
	func_4682(uParam1, iParam2);
	func_83(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_83(int iParam0, var uParam1, int iParam2)//Position - 0x2F05
{
	switch (iParam0)
	{
		case 0:
			func_4609(uParam1, iParam2);
			break;
		case 1:
			func_4477(uParam1, iParam2);
			break;
		case 2:
			func_4400(uParam1, iParam2);
			break;
		case 3:
			func_4323(uParam1, iParam2);
			break;
		case 4:
			func_4149(uParam1, iParam2);
			break;
		case 5:
			func_3984(uParam1, iParam2);
			break;
		case 6:
			func_3920(uParam1, iParam2);
			break;
		case 7:
			func_3752(uParam1, iParam2);
			break;
		case 8:
			func_3580(uParam1, iParam2);
			break;
		case 9:
			func_3336(uParam1, iParam2);
			break;
		case 10:
			func_3258(uParam1, iParam2);
			break;
		case 11:
			func_3027(uParam1, iParam2);
			break;
		case 12:
			func_2884(uParam1, iParam2);
			break;
		case 13:
			func_2716(uParam1, iParam2);
			break;
		case 14:
			func_2542(uParam1, iParam2);
			break;
		case 15:
			func_2364(uParam1, iParam2);
			break;
		case 16:
			func_2254(uParam1, iParam2);
			break;
		case 17:
			func_1999(uParam1, iParam2);
			break;
		case 18:
			func_1905(uParam1, iParam2);
			break;
		case 19:
			func_1781(uParam1, iParam2);
			break;
		case 20:
			func_1332(uParam1, iParam2);
			break;
		case 21:
			func_1211(uParam1, iParam2);
			break;
		case 22:
			func_1038(uParam1, iParam2);
			break;
		case 23:
			func_815(uParam1, iParam2);
			break;
		case 24:
			func_84(uParam1, iParam2);
			break;
	}
}

void func_84(var uParam0, int iParam1)//Position - 0x30BD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 323464/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 323450/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 323354/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 322013/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 321784/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 321772/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 321762/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 321574/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 321527/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 321499/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 321190/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 321181/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 318513/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 318504/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 311929/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 311052/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 310935/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 310879/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 310726/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 310582/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 310500/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 308716/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 307519/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 250283/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 248563/*__LIB_9__::func_463*/;
			break;
		case 19:
			uParam0->f_17 = 248413/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 248388/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 248168/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 246727/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 246537/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 245202/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 245085/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 245042/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 245008/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 245000/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 242013/*func_541*/;
			break;
		case 27:
			uParam0->f_25 = 242005/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 241997/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 241847/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 241628/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 240635/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 240580/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 240569/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 236817/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 236772/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 215771/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 215762/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 215753/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 215745/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 215722/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 215676/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 215544/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 214402/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 214384/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 214035/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 213933/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 213922/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 213796/*func_491*/;
			break;
		case 54:
			uParam0->f_45 = 213409/*func_490*/;
			break;
		case 56:
			uParam0->f_46 = 213390/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 212145/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 212019/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 210507/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 210498/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 210487/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 210361/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 210353/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 210339/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 210331/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 208785/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 208050/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 207910/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 206776/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 206767/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 206755/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 206746/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 206734/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 206289/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 206280/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 33876/*func_240*/;
			break;
		case 87:
			uParam0->f_1 = 30023/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 30014/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 30006/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 29056/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 29022/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 27095/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 25055/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 20844/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 20835/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 20826/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 20817/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 20809/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 20801/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 20687/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 20533/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 19865/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 19856/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 19847/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 15429/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 15420/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 15293/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 15238/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 14289/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 14280/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 14272/*__LIB_0__::func_467*/;
			break;
	}
}

int func_240(int iParam0, var uParam1)//Position - 0x8454
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
			func_338(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_249(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

int func_249(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x8BC7
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
						func_250(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_250(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x8D29
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
		if (func_265(iParam1) || __LIB_1__::func_554(iParam1))
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

int func_265(int iParam0)//Position - 0x9BAE
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_267(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0, int iParam1, int iParam2)//Position - 0x9CAF
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
				if (func_268(iParam0, iParam1, iVar0))
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
				if (func_268(iParam0, iParam1, iVar1))
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

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0x9D50
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
				if (!func_268(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_268(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_268(iParam0, 14, iVar6))
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
			if (!func_268(iParam0, 14, uVar11[iVar10]))
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
						return func_268(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_268(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_338(int iParam0, var uParam1, int iParam2)//Position - 0x2907F
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
				func_249(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
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

void func_490(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x341A1
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
Vector3 func_491(int iParam0)//Position - 0x34324
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

void func_541(int iParam0, int iParam1)//Position - 0x3B15D
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
		func_552(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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

void func_552(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x3B7BB
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
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_553(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_553(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
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
int func_553(bool bParam0)//Position - 0x3B9F6
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

void func_815(var uParam0, int iParam1)//Position - 0x4EF91
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 379934/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 379925/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 379846/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 379210/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 378944/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 378932/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 378833/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 378703/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 378656/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 378621/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 378502/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 378474/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 378464/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 376234/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 376225/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 373665/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 373657/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 373648/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 373639/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 373577/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 373496/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 373143/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 368710/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 367570/*__LIB_9__::func_464*/;
			break;
		case 19:
			uParam0->f_17 = 367545/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 367536/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 367405/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 367301/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 367285/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 367135/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 367127/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 359287/*func_941*/;
			break;
		case 25:
			uParam0->f_23 = 358238/*func_937*/;
			break;
		case 27:
			uParam0->f_25 = 358024/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 357986/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 357963/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 357204/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 357176/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 357062/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 356944/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 356895/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 348057/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 348009/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 336920/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 336911/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 336902/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 336894/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 336883/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 336766/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 335833/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 335824/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 335655/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 335646/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 335635/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 335612/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 335564/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 335546/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 335504/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 335462/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 335333/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 335324/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 335313/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 335290/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 335281/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 335240/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 335232/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 335224/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 334953/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 334883/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 334211/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 334202/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 334190/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 333970/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 333958/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 333422/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 333307/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 332404/*func_858*/;
			break;
		case 87:
			uParam0->f_1 = 329777/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 329768/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 329760/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 329751/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 329742/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 329733/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 329725/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 329717/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 329682/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 329673/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 327735/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 327726/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 327717/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 326495/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 326413/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 326396/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 326364/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 325148/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 325139/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 325131/*__LIB_0__::func_467*/;
			break;
	}
}

int func_858(int iParam0, var uParam1)//Position - 0x51274
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
			func_338(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_249(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_937(int iParam0, int iParam1)//Position - 0x5775E
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
	func_552(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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

void func_941(var uParam0, var uParam1)//Position - 0x57B77
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
			func_942(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_942(var uParam0, var uParam1)//Position - 0x57BCD
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
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
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

void func_1038(var uParam0, int iParam1)//Position - 0x5CC27
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 420344/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 420330/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 420239/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 420022/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 419865/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 419853/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 419843/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 419729/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 419682/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 419654/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 419566/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 419557/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 417812/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 417803/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 413780/*func_1187*/;
			break;
		case 8:
			uParam0->f_37 = 413303/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 413209/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 413200/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 413138/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 413057/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 412159/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 408879/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 407637/*__LIB_12__::func_44*/;
			break;
		case 19:
			uParam0->f_17 = 407612/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 407398/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 407334/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 407230/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 407214/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 407112/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 407104/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 403092/*func_1137*/;
			break;
		case 25:
			uParam0->f_23 = 402642/*func_1134*/;
			break;
		case 27:
			uParam0->f_25 = 402634/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 402626/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 401989/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 401859/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 400985/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 400782/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 400629/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 399017/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 398972/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 389933/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 389924/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 389915/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 389907/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 389884/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 389835/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 389698/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 389680/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 388848/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 388746/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 388735/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 388582/*func_1089*/;
			break;
		case 54:
			uParam0->f_45 = 388349/*func_1088*/;
			break;
		case 56:
			uParam0->f_46 = 388340/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 387927/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 387774/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 387765/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 387756/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 387745/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 387734/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 387725/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 387717/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 386661/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 386441/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 386366/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 385677/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 385668/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 385656/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 385564/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 385552/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 385185/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 385176/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 384384/*func_1062*/;
			break;
		case 87:
			uParam0->f_1 = 383008/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 382999/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 382991/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 382982/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 382973/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 382964/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 382956/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 382948/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 382936/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 382927/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 327735/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 382918/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 382909/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 381689/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 381517/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 381508/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 381500/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1062(int iParam0, var uParam1)//Position - 0x5DD80
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
			func_338(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_249(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1088(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x5ECFD
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
Vector3 func_1089(int iParam0)//Position - 0x5EDE6
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

void func_1134(int iParam0, int iParam1)//Position - 0x624D2
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
		func_552(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1137(var uParam0, var uParam1)//Position - 0x62694
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1140(uParam0, uParam1);
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

void func_1140(var uParam0, var uParam1)//Position - 0x62773
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_51(uParam0, uParam1);
			break;
		case 1:
			func_1154(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_484(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1154(var uParam0, var uParam1)//Position - 0x63371
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1187(int iParam0, var uParam1, int iParam2)//Position - 0x65054
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
				func_552(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1211(var uParam0, int iParam1)//Position - 0x66A01
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 436619/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 436610/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 436543/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 436105/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 435957/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 435945/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 435731/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 435642/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 435622/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 435517/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 435492/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 435479/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 435415/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 435406/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 434869/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 434860/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 433938/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 433930/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 433921/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 433912/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 433850/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 433769/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 433442/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 433433/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 433422/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 433411/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 433369/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 433360/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 433312/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 433257/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 433248/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 433146/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 433138/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 432711/*func_1288*/;
			break;
		case 27:
			uParam0->f_25 = 432703/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 432695/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 432660/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 432632/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 432465/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 432442/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 428828/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 428783/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 425587/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 425578/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 425569/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 425561/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 425550/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 425388/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 424116/*func_1261*/;
			break;
		case 49:
			uParam0->f_8 = 424107/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 423682/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 423673/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 423662/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 423639/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 423631/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 423622/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 423609/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 423567/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 423558/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 423549/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 423538/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 423527/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 423518/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 423510/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 423502/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 422889/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 422819/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 422130/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 422121/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 422109/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 422100/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 422088/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 422079/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 422070/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 422061/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 422052/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 422043/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 422035/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 422026/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 422017/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 422008/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 422000/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 421992/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 421980/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 421971/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 327735/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 421962/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 421953/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 381689/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 421945/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 421936/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 421928/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1261(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x678B4
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
			func_552(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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

void func_1288(int iParam0, int iParam1)//Position - 0x69A47
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_552(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1332(var uParam0, int iParam1)//Position - 0x6A994
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 713169/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 713114/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 712454/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 712327/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 712295/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 712284/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 712220/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 712197/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 712188/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 712075/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 711979/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 711970/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 711580/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 711277/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 709310/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 709301/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 709292/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 708909/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 704954/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 704229/*__LIB_9__::func_466*/;
			break;
		case 19:
			uParam0->f_17 = 704204/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 704035/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 703972/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 703820/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 703739/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 702802/*func_1715*/;
			break;
		case 30:
			uParam0->f_8 = 701474/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 700898/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 699663/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 699654/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 696887/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 696834/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 691382/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 691373/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 691364/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 691356/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 691333/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 691284/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 691259/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 691221/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 691147/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 691136/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 691057/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 691049/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 691040/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 691030/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 690783/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 689620/*__LIB_9__::func_756*/;
			break;
		case 65:
			uParam0->f_21 = 688428/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 687319/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 687143/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 685483/*__LIB_7__::func_836*/;
			break;
		case 69:
			*uParam0 = 685474/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 685462/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 685453/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 685441/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 684608/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 684599/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 683947/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 683075/*func_1617*/;
			break;
		case 87:
			uParam0->f_1 = 681864/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 681844/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 681750/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 681619/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 680991/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 680224/*func_1599*/;
			break;
		case 94:
			uParam0->f_1 = 679672/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 679078/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 678720/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 678627/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 677781/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 443254/*func_1387*/;
			break;
		case 100:
			uParam0->f_22 = 439973/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 438817/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 438609/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 438141/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 438132/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 438022/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 437979/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1387(var uParam0, var uParam1)//Position - 0x6C376
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
		func_1404(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_338(&iVar9, &(uParam1->f_109), 4);
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

int func_1404(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6CFA1
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_250(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1405(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1405(var uParam0, int iParam1)//Position - 0x6CFFF
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
		func_1409(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1409(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6D11C
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
								if (!func_265(*uParam0))
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
										func_1533(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1533(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_1522(*uParam0);
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
											func_1453(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_1453(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_1453(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1453(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_1448(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1419(*uParam0, bVar24, 0, iVar25);
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

void func_1419(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x72EE1
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
		bVar3 = func_1446(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1437(iParam0, iParam3);
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

int func_1437(int iParam0, int iParam1)//Position - 0x7D3F6
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
				iVar3 = func_267(iParam0, 11, -1);
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
				iVar5 = func_267(iParam0, 11, -1);
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

int func_1446(int iParam0, bool bParam1)//Position - 0x7D854
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_267(iParam0, 11, -1), 0);
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
						iVar3 = func_267(iParam0, 11, -1);
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
						iVar5 = func_267(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_267(iParam0, 11, -1), 0);
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
						iVar8 = func_267(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_267(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_267(iParam0, 11, -1), 0);
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
						iVar12 = func_267(iParam0, 8, -1);
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

void func_1448(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x7E8B2
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
		bVar2 = func_1446(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_1437(iParam0, iParam3);
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

int func_1453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x7F90D
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
			func_1517(iVar5, iParam1, iParam2, 1);
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
						func_1517(iVar5, 10, 0, 1);
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
									func_1517(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1453(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1517(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_267(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1453(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1511(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1517(iVar5, 14, uVar18[iVar1], 1);
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
							func_1453(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1517(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1453(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1522(iParam0);
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
						func_1453(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1453(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1508(iVar5, iVar24, iVar23, iVar25);
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
							func_1453(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1453(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1453(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1453(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1453(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1453(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1453(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1511(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1508(iVar5, func_267(iParam0, 8, -1), iParam2, func_267(iParam0, 4, -1));
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
				func_1494(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1508(iVar5, iParam2, iVar44, iVar45);
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
			func_1511(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1508(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_1453(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1453(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1508(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1508(iVar5, iVar58, iVar57, iParam2);
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
						func_1453(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1508(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1453(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_268(iParam0, 9, iVar63))
						{
							func_1453(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1453(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1453(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1453(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_267(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_267(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1453(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1453(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1453(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1453(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1453(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1453(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1453(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1453(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1453(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1453(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1522(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1453(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1453(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1454(iParam0, &uVar4))
		{
			func_1453(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1453(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1453(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1453(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_267(iParam0, 3, -1), iVar10);
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
				func_1453(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1454(int iParam0, var uParam1)//Position - 0x817B8
{
	int iVar0;
	int iVar1;
	*uParam1 = func_267(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_268(iParam0, iVar1, iVar0))
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

void func_1494(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8C1B2
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
	func_1419(iParam0, bParam3, 0, -1);
}

int func_1508(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x93DA3
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
					iVar0 = func_1508(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1508(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1511(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9734E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1513(iParam0))
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

int func_1513(int iParam0)//Position - 0x974DD
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
				iVar1 = func_267(iParam0, 11, -1);
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
				iVar3 = func_267(iParam0, 11, -1);
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

void func_1517(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x97936
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
							func_1517(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1517(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1517(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1517(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1517(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1517(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1517(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1517(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1517(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1517(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1522(int iParam0)//Position - 0x99039
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
		if (!func_1527(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1527(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x99A03
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_267(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1533(int iParam0, int iParam1, int iParam2)//Position - 0x9A1C0
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
			func_1534(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_267(iParam0, 7, -1), -1))
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

void func_1534(int iParam0)//Position - 0x9A3CC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1535(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1535(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9A461
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
					func_1453(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1453(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_1599(var uParam0, var uParam1)//Position - 0xA6120
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
			func_338(&iVar2, &(uParam1->f_109), 4);
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
			func_1404(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_1617(int iParam0, var uParam1)//Position - 0xA6C43
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
		if (func_1404(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
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
		func_338(&iVar1, &(uParam1->f_109), 32);
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

void func_1715(int iParam0, int iParam1)//Position - 0xAB952
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
						func_1716(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1716(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1716(int iParam0, bool bParam1)//Position - 0xABBE1
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

void func_1781(var uParam0, int iParam1)//Position - 0xAE1DA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 734244/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 734235/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 734168/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 733844/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 733683/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 733671/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 733607/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 733598/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 733262/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 733253/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 732523/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 732515/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 732506/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 732497/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 732485/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 732476/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 732397/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 732053/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 732044/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 731536/*__LIB_9__::func_467*/;
			break;
		case 19:
			uParam0->f_17 = 731483/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 731395/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 731375/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 731348/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 731326/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 731317/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 731215/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 731207/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 731199/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 730438/*func_1863*/;
			break;
		case 27:
			uParam0->f_25 = 730430/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 730422/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 730311/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 730264/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 730195/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 730172/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 726099/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 726042/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 719823/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 719814/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 719805/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 719797/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 719786/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 719682/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 718615/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 718606/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 718209/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 718200/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 718190/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 718167/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 717673/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 717664/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 717655/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 717613/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 717604/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 717595/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 717584/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 717573/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 717564/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 717556/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 717548/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 717238/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 717168/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 716479/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 716470/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 716458/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 716449/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 716437/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 716428/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 716419/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 716410/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 716401/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 716392/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 716384/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 716359/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 716250/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 715539/*func_1792*/;
			break;
		case 100:
			uParam0->f_22 = 714876/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 714749/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 714737/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 714728/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 327735/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 714719/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 714710/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 381689/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 714702/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 714693/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 714685/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1792(var uParam0, var uParam1)//Position - 0xAEB13
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
		func_1404(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_1863(int iParam0, int iParam1)//Position - 0xB2546
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
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_553(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_553(iVar7))
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
					else if ((!bVar1 && !bVar0) && !func_1864())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_1864()//Position - 0xB27D4
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_1905(var uParam0, int iParam1)//Position - 0xB342D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 742546/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 742537/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 742466/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 742230/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 742179/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 742167/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 742103/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 742094/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 741654/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 741645/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 740977/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 740969/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 740960/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 740951/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 740889/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 740809/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 740440/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 740431/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 740420/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 740409/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 740400/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 740391/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 740369/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 740360/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 740348/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 740340/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 740332/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 740324/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 740316/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 740308/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 740273/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 740245/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 740175/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 740152/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 740056/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 740011/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 737498/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 737489/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 737480/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 737472/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 737461/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 737421/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 737313/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 737304/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 737100/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 737091/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 737080/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 737057/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 737049/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 737040/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 737027/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 736985/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 736976/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 736967/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 736956/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 736945/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 736936/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 736928/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 736920/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 736687/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 736617/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 735928/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 735919/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 735907/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 735898/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 735886/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 735877/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 735868/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 735859/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 735850/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 735841/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 735833/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 735824/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 735815/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 735806/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 735798/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 735790/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 735778/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 735769/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 327735/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 735760/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 735751/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 381689/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 735743/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 735734/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 735726/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1999(var uParam0, int iParam1)//Position - 0xB549B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 821649/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 821635/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 821479/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 821003/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 820804/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 820682/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 820672/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 820535/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 820491/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 820407/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 820313/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 820304/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 819122/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 819113/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 812663/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 812363/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 812306/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 812062/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 812000/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 811920/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 811200/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 808009/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 805704/*__LIB_9__::func_518*/;
			break;
		case 19:
			uParam0->f_17 = 805678/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 805502/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 805438/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 805334/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 805318/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 805215/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 805168/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 805131/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 803088/*func_2186*/;
			break;
		case 25:
			uParam0->f_23 = 802764/*func_2184*/;
			break;
		case 30:
			uParam0->f_8 = 801907/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 801773/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 801201/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 800987/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 798501/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 798444/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 771346/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 771337/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 771328/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 771320/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 771297/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 771225/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 771097/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 771071/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 770384/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 770114/*__LIB_9__::func_423*/;
			break;
		case 52:
			uParam0->f_15 = 770103/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 769936/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 769412/*func_2146*/;
			break;
		case 56:
			uParam0->f_46 = 769394/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 769142/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 768980/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 768484/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 768469/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 768458/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 768296/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 768117/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 768090/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 766555/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 765168/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 764809/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 764695/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 763735/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 763726/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 763714/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 763170/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 763158/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 762970/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 762961/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 761375/*func_2106*/;
			break;
		case 87:
			uParam0->f_1 = 759861/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 759852/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 759844/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 759814/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 759369/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 753598/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 745200/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 744278/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 744267/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 744258/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 744249/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 744240/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 744068/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 744045/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2106(int iParam0, var uParam1)//Position - 0xB9E1F
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
			func_338(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_249(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2146(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBBD84
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
								func_2147(iParam2, 18);
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
void func_2147(var uParam0, int iParam1)//Position - 0xBBEFD
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2184(int iParam0, int iParam1)//Position - 0xC3FCC
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
		func_552(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2186(var uParam0, var uParam1)//Position - 0xC4110
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2190(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2188(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2188(var uParam0, var uParam1)//Position - 0xC4199
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2190(var uParam0, var uParam1)//Position - 0xC42B7
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_53(uParam0, uParam1);
			break;
		case 1:
			func_2195(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_481(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2195(var uParam0, var uParam1)//Position - 0xC4638
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2254(var uParam0, int iParam1)//Position - 0xC899A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 837851/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 837842/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 837774/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 837328/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 837223/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 837210/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 837146/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 837137/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 836676/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 836667/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 836282/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 836274/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 836265/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 836241/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 836179/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 836100/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 835803/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 835794/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 835783/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 835757/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 835748/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 835739/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 835717/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 835708/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 835700/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 835692/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 835684/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 835351/*func_2326*/;
			break;
		case 27:
			uParam0->f_25 = 835343/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 835335/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 835014/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 834986/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 834917/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 831185/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 831140/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 827973/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 827964/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 827955/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 827947/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 827936/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 827828/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 826713/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 826704/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 826695/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 826686/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 826675/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 826664/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 826656/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 826647/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 826638/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 826596/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 826587/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 826578/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 826567/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 826556/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 826547/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 826539/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 826531/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 826228/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 826158/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 825509/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 825500/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 825492/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 825483/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 825471/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 825037/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 825012/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 824995/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 824453/*func_2276*/;
			break;
		case 87:
			uParam0->f_1 = 823414/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 823405/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 823397/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 823388/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 823379/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 823370/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 823362/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 823354/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 823342/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 823333/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 823030/*__LIB_7__::func_798*/;
			break;
	}
}

int func_2276(var uParam0, var uParam1)//Position - 0xC9485
{
	return func_2277(uParam1);
}

int func_2277(var uParam0)//Position - 0xC9493
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
			func_338(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_249(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2326(int iParam0, int iParam1)//Position - 0xCBF17
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
		func_552(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2364(var uParam0, int iParam1)//Position - 0xCC8E4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 872872/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 872849/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 872719/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 872054/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 871791/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 871778/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 871768/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 871570/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 871522/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 871486/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 871371/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 871362/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 870432/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 870423/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 869282/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 869238/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 869215/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 869191/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 869129/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 869050/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 868376/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 865093/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 864175/*__LIB_9__::func_468*/;
			break;
		case 19:
			uParam0->f_17 = 864130/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 863957/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 863872/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 863732/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 863716/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 863613/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 863566/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 863529/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 862124/*func_2472*/;
			break;
		case 25:
			uParam0->f_23 = 861758/*func_2469*/;
			break;
		case 27:
			uParam0->f_25 = 860945/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 860906/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 860671/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 860346/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 860149/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 860043/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 859727/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 854735/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 854678/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 848473/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 848464/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 848455/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 848447/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 848424/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 848411/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 848119/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 845967/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 845919/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 845727/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 845718/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 845707/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 845665/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 845657/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 845648/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 845639/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 845597/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 845588/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 845579/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 845568/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 845538/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 845529/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 845521/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 844435/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 844094/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 843980/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 843152/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 843143/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 843131/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 843039/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 843027/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 842839/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 842830/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 842816/*func_2403*/;
			break;
		case 87:
			uParam0->f_1 = 842800/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 842791/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 842783/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 842774/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 842331/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 840869/*func_2385*/;
			break;
		case 100:
			uParam0->f_22 = 839990/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 839813/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 839801/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 839787/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 327735/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 381689/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 839778/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 839677/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 839652/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 839480/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 839453/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2385(int iParam0, var uParam1)//Position - 0xCD4A5
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2386(iParam0, uParam1);
	}
	return 1;
}

int func_2386(int iParam0, var uParam1)//Position - 0xCD4C2
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
		if (func_250(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_2403(var uParam0, var uParam1)//Position - 0xCDC40
{
	return func_2277(uParam1);
}

void func_2469(int iParam0, int iParam1)//Position - 0xD263E
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
		func_552(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2472(var uParam0, var uParam1)//Position - 0xD27AC
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2473(uParam0, uParam1);
	}
}

void func_2473(var uParam0, var uParam1)//Position - 0xD27D8
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2484(*uParam0, 0, 0))
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
			func_2479(uParam0, uParam1);
			break;
		case 1:
			func_2475(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2475(var uParam0, var uParam1)//Position - 0xD2897
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
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
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

void func_2479(var uParam0, var uParam1)//Position - 0xD2A96
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
			else if (func_2484(*uParam0, 0, 0))
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

int func_2484(int iParam0, bool bParam1, bool bParam2)//Position - 0xD2CF7
{
	int iVar0;
	int iVar1;
	func_552(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2542(var uParam0, int iParam1)//Position - 0xD51B1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 903348/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 903339/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 903271/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 902920/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 902687/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 902674/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 902610/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 902601/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 901876/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 901867/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 900744/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 900736/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 900727/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 900703/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 900631/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 900542/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 900182/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 900043/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 899387/*__LIB_9__::func_424*/;
			break;
		case 19:
			uParam0->f_17 = 899361/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 899352/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 899304/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 899249/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 899136/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 899128/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 899120/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 896578/*func_2667*/;
			break;
		case 25:
			uParam0->f_23 = 896570/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 896562/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 896554/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 896273/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 896245/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 896176/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 896153/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 893599/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 893554/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 893458/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 893449/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 893440/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 893432/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 893421/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 893314/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 892476/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 892467/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 892254/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 892245/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 892234/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 892192/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 892153/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 892144/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 892102/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 892060/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 892051/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 892042/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 892031/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 892020/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 892011/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 891925/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 891917/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 891576/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 891506/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 890809/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 890800/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 890727/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 890718/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 890706/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 890697/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 890172/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 888616/*func_2617*/;
			break;
		case 87:
			uParam0->f_1 = 885389/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 885374/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 885013/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 884720/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 884214/*func_2596*/;
			break;
		case 98:
			uParam0->f_1 = 882585/*func_2594*/;
			break;
		case 100:
			uParam0->f_22 = 882308/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 881759/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 881747/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 881738/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 327735/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 881601/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 881553/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 381689/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 839778/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 839677/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 839652/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 881545/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 874461/*func_2544*/;
			break;
		case 125:
			uParam0->f_19 = 874405/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2544(int iParam0, int* iParam1)//Position - 0xD57DD
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
				if (func_2617(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2570(iParam1))
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

int func_2570(int* iParam0)//Position - 0xD6A34
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
		func_1404(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_2594(int iParam0, var uParam1)//Position - 0xD7799
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2386(iParam0, uParam1);
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
			func_1404(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_2596(int iParam0, var uParam1)//Position - 0xD7DF6
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
				if (!func_2597(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_2597(var uParam0, int iParam1)//Position - 0xD7F04
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
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_267(*uParam0, 14, 0), -1))
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

int func_2617(int iParam0, int* iParam1)//Position - 0xD8F28
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
		if (!func_250(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			func_338(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_250(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_1404(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_2667(var uParam0, var uParam1)//Position - 0xDAE42
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
			func_2671(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2668(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2668(var uParam0, var uParam1)//Position - 0xDAF80
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
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
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

void func_2671(var uParam0, var uParam1)//Position - 0xDB20A
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
				func_2673(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2672(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2672(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDB327
{
	if (iParam1 == 0)
	{
		if (func_2484(iParam0, 0, 0))
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
		if (func_2484(iParam0, 0, 0))
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
		if (func_2484(iParam0, 1, 0))
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
		if (func_2484(iParam0, 0, 0))
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

void func_2673(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDB42F
{
	if (iParam1 == 0)
	{
		if (func_2484(iParam0, 0, 0))
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
		if (func_2484(iParam0, 0, 0))
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

void func_2716(var uParam0, int iParam1)//Position - 0xDC8BD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 938937/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 938923/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 938824/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 937762/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 937608/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 937555/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 937500/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 937382/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 937250/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 937135/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 937125/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 935956/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 935947/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 934637/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 934593/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 934570/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 934546/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 934483/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 934403/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 933758/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 930618/*__LIB_10__::func_71*/;
			break;
		case 17:
			uParam0->f_17 = 929917/*__LIB_9__::func_469*/;
			break;
		case 19:
			uParam0->f_17 = 929891/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 929712/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 929648/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 929374/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 929358/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 929255/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 929208/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 929171/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 928344/*func_2820*/;
			break;
		case 25:
			uParam0->f_23 = 927978/*func_2817*/;
			break;
		case 27:
			uParam0->f_25 = 927596/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 927545/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 927537/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 927300/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 927179/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 926759/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 915465/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 915420/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 912333/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 912324/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 912315/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 912307/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 912258/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 912176/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 911412/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 911365/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 911306/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 911074/*__LIB_9__::func_425*/;
			break;
		case 52:
			uParam0->f_15 = 911063/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 911021/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 911013/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 911004/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 910995/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 910953/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 910944/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 910935/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 910924/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 910882/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 910873/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 910865/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 909803/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 909500/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 909386/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 908543/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 908534/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 908461/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 908452/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 908440/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 908238/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 908229/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 906496/*func_2735*/;
			break;
		case 87:
			uParam0->f_1 = 905045/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 905036/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 905028/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 905019/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 905010/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 905001/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 904993/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 904985/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 904813/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 904780/*__LIB_4__::func_215*/;
			break;
	}
}

int func_2735(int iParam0, var uParam1)//Position - 0xDD500
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
			func_338(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_249(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2817(int iParam0, int iParam1)//Position - 0xE28EA
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
		func_552(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2820(var uParam0, var uParam1)//Position - 0xE2A58
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_2821(uParam0, uParam1);
	}
}

void func_2821(var uParam0, var uParam1)//Position - 0xE2A76
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_54(uParam0, uParam1);
			break;
		case 1:
			func_2822(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2822(var uParam0, var uParam1)//Position - 0xE2AB0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2884(var uParam0, int iParam1)//Position - 0xE53C2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1030673/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1030617/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1030273/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1030234/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1030201/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1030190/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1030126/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1030103/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1030079/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1029961/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1029882/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1029873/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1029277/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1029269/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1024073/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1024064/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1024049/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1023574/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1019604/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1018828/*__LIB_12__::func_40*/;
			break;
		case 19:
			uParam0->f_17 = 1018802/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1018591/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1018428/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1017819/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1017737/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1016821/*func_2953*/;
			break;
		case 30:
			uParam0->f_8 = 1015570/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1014895/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1013992/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1013983/*__LIB_0__::func_162*/;
			break;
		case 34:
			uParam0->f_41 = 1013208/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1013155/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 944482/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 944473/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 944464/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 944456/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 944433/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 944293/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 944258/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 944220/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 944196/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 944185/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 944106/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 944098/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 944089/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 944079/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 943790/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 942413/*__LIB_9__::func_978*/;
			break;
		case 65:
			uParam0->f_21 = 941450/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 941255/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 941152/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 940463/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 940454/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 940442/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 940433/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 940421/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 940084/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 940075/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 939958/*__LIB_7__::func_810*/;
			break;
	}
}

void func_2953(int iParam0, int iParam1)//Position - 0xF83F5
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
							func_2954(iParam0);
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
							func_2954(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2954(int iParam0)//Position - 0xF86AD
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3027(var uParam0, int iParam1)//Position - 0xFBA1A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1093720/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1093480/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1091179/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1090970/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1090764/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1090686/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1090547/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1090491/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1090330/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1090094/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1090080/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1090071/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1086701/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1086692/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1073039/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1072783/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1072734/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1072523/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1072514/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1072485/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1071758/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1067904/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1066591/*__LIB_9__::func_470*/;
			break;
		case 19:
			uParam0->f_17 = 1066546/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1066381/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1066317/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1066090/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1065967/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1062588/*func_3165*/;
			break;
		case 25:
			uParam0->f_23 = 1062267/*func_3163*/;
			break;
		case 27:
			uParam0->f_25 = 1061119/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1061007/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1060926/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1060036/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1059489/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1058807/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1058714/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1049448/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1049390/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 945351/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1049381/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1049372/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1049364/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1049315/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1049023/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1045996/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1045892/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1045609/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1045447/*__LIB_9__::func_426*/;
			break;
		case 52:
			uParam0->f_15 = 1045436/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1045178/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1044916/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1044907/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1043750/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1043492/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1043213/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1043204/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1043193/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1042935/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1042927/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1042869/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1042719/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1041013/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1040702/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1040550/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1039550/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1039541/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1039092/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1038813/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1038801/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1038568/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1038559/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1036466/*func_3048*/;
			break;
		case 87:
			uParam0->f_1 = 1033571/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1033562/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1033554/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1033528/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1033419/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1032708/*func_3034*/;
			break;
		case 100:
			uParam0->f_22 = 1032546/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1032419/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1032127/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1032103/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3034(var uParam0, var uParam1)//Position - 0xFC204
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
		func_1404(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3048(int iParam0, var uParam1)//Position - 0xFD0B2
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
			func_338(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_249(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_3163(int iParam0, int iParam1)//Position - 0x10357B
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
		func_552(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3165(var uParam0, var uParam1)//Position - 0x1036BC
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3179(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3167(uParam0, uParam1);
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

void func_3167(var uParam0, var uParam1)//Position - 0x103747
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_55(uParam0, uParam1);
			break;
		case 1:
			func_3168(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3168(var uParam0, var uParam1)//Position - 0x103781
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
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

void func_3179(var uParam0, var uParam1)//Position - 0x103C9B
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_56(uParam0, uParam1);
			break;
		case 1:
			func_3188(uParam0, uParam1);
			break;
		case 2:
			__LIB_13__::func_482(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3188(var uParam0, var uParam1)//Position - 0x104149
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_552(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3258(var uParam0, int iParam1)//Position - 0x10B061
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1101248/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1101192/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1100923/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1100862/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1100831/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1100767/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1100758/*__LIB_0__::func_162*/;
			break;
		case 11:
			uParam0->f_11 = 1100749/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1100740/*__LIB_0__::func_162*/;
			break;
		case 12:
			uParam0->f_33 = 1100529/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1100521/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1100497/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1100488/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1099546/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1099537/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1099512/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1099503/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1099478/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1099467/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1099458/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1099449/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1098981/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1098862/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1098092/*func_3300*/;
			break;
		case 30:
			uParam0->f_8 = 1097946/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1097935/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1097723/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1097406/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1097353/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1096580/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1096571/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1096562/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1096554/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1096543/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1096304/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1096295/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1096286/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1096277/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1096266/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1096255/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1096247/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1096238/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1096229/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1095936/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1095392/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1095384/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1095316/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1095176/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1094732/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1094723/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1094711/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1094702/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1094690/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1094681/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1094673/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3300(int iParam0, int iParam1)//Position - 0x10C16C
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
						func_3301(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3301(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3301(int iParam0)//Position - 0x10C396
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3336(var uParam0, int iParam1)//Position - 0x10CDC9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1200092/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1199988/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1199253/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1199171/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1199028/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1199018/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1198883/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1198816/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1198704/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1198465/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1198456/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1197956/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1197947/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1197939/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1197915/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1197835/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1197739/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1197534/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1197518/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1196709/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1192004/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1191187/*__LIB_9__::func_471*/;
			break;
		case 19:
			uParam0->f_17 = 1191161/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1191077/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1191013/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1190861/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1190694/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1189644/*func_3523*/;
			break;
		case 30:
			uParam0->f_8 = 1189026/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1188715/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1187776/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1186416/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1186358/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1138657/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1138648/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1138639/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1138631/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1138608/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1138480/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1138439/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1138171/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1138102/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1138091/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1137857/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1137507/*func_3498*/;
			break;
		case 56:
			uParam0->f_46 = 1137498/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1137427/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1137193/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1136993/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1136095/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1135369/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1133107/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1132474/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1132465/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1132453/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1132444/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1132432/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1131739/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1131199/*func_3447*/;
			break;
		case 85:
			uParam0->f_1 = 1127095/*func_3439*/;
			break;
		case 87:
			uParam0->f_1 = 1123108/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1122594/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1122423/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1122217/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1122021/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1120569/*func_3411*/;
			break;
		case 94:
			uParam0->f_1 = 1116432/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1116136/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1116106/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1115439/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1112789/*func_3374*/;
			break;
		case 100:
			uParam0->f_22 = 1104728/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1102785/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1102565/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1102541/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3374(int iParam0, int* iParam1)//Position - 0x10FAD5
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
							func_1404(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
								func_1404(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
			func_1404(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3411(int iParam0, int* iParam1)//Position - 0x111939
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
				func_338(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3413(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_1404(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_3413(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x111C4B
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
					func_250(uParam2[iVar1], iVar3, 1, 0);
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

int func_3439(int iParam0, int* iParam1)//Position - 0x1132B7
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
			func_338(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_249(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_1404(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3447(int iParam0, var uParam1)//Position - 0x1142BF
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
					func_338(&iVar1, &(uParam1->f_122), 24);
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

void func_3498(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x115B63
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
					func_2147(iParam2, 166);
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

void func_3523(int iParam0, int iParam1)//Position - 0x12270C
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_553(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_553(bVar7))
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
						func_3524(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3524(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3524(int iParam0)//Position - 0x12299C
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3580(var uParam0, int iParam1)//Position - 0x124FE5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1228246/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1228190/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1227921/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1227862/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1227831/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1227713/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1227629/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1227565/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1227542/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1227533/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1227080/*__LIB_9__::func_474*/;
			break;
		case 14:
			uParam0->f_11 = 1227071/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1227063/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1227039/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1227030/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1221960/*__LIB_9__::func_759*/;
			break;
		case 75:
			uParam0->f_4 = 1221951/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1221767/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1218668/*__LIB_10__::func_150*/;
			break;
		case 17:
			uParam0->f_17 = 1218162/*__LIB_8__::func_938*/;
			break;
		case 19:
			uParam0->f_17 = 1218136/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1218058/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1217995/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1217780/*__LIB_6__::func_909*/;
			break;
		case 22:
			uParam0->f_24 = 1217661/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1216714/*func_3680*/;
			break;
		case 30:
			uParam0->f_8 = 1216150/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1215972/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1214860/*__LIB_8__::func_973*/;
			break;
		case 34:
			uParam0->f_41 = 1214166/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1214113/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1213536/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1213527/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1213518/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1213341/*__LIB_8__::func_972*/;
			break;
		case 77:
			uParam0->f_13 = 1213330/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1212832/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1212791/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1212782/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1212773/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1212762/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1212751/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1212743/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1212734/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1212725/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1212496/*__LIB_8__::func_859*/;
			break;
		case 64:
			uParam0->f_47 = 1206578/*__LIB_10__::func_61*/;
			break;
		case 65:
			uParam0->f_21 = 1204916/*__LIB_8__::func_988*/;
			break;
		case 66:
			uParam0->f_21 = 1204590/*__LIB_6__::func_759*/;
			break;
		case 67:
			uParam0->f_21 = 1203865/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1203320/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1203311/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1203299/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1203290/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1203278/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1201562/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1201112/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1201096/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3680(int iParam0, int iParam1)//Position - 0x1290CA
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_553(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_553(bVar7))
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
						func_3681(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3681(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3681(int iParam0)//Position - 0x12935D
{
	__LIB_8__::func_973(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3752(var uParam0, int iParam1)//Position - 0x12BDDF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1280744/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1280664/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1280165/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1280115/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1280028/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1280018/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1279900/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1279778/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1279690/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1279676/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1279667/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1279288/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1279279/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1279271/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1279247/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1279115/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1278833/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1278819/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1278301/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1274676/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1274140/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1274114/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1274030/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1273966/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1273786/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1273643/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1273019/*func_3876*/;
			break;
		case 30:
			uParam0->f_8 = 1272504/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1272219/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1271548/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1270284/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1270239/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1244192/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1244183/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1244174/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1244166/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1244143/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1244039/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1243998/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1243784/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1243715/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1243704/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1243566/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1243378/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1243369/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1243192/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1243054/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1243046/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1242210/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1242103/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1242039/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1241551/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1241542/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1241530/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1241521/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1241509/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1240806/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1240706/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1238722/*func_3825*/;
			break;
		case 87:
			uParam0->f_1 = 1236299/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1236290/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1236227/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1235906/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1231899/*func_3774*/;
			break;
		case 100:
			uParam0->f_22 = 1229623/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1229419/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1229403/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3774(int iParam0, int* iParam1)//Position - 0x12CC1B
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_338(&iVar0, &(iParam1->f_109), 12);
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

int func_3825(int iParam0, int* iParam1)//Position - 0x12E6C2
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
			func_338(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_249(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1404(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_3876(int iParam0, int iParam1)//Position - 0x136CBB
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_553(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_553(bVar7))
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
						func_3877(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3877(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3877(int iParam0)//Position - 0x136EFD
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3920(var uParam0, int iParam1)//Position - 0x138AF1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1290160/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1290104/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1289885/*__LIB_6__::func_912*/;
			break;
		case 3:
			uParam0->f_34 = 1289834/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1289801/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1289737/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1289728/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1289704/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1289695/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1289603/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1289594/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1289586/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1289334/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1289325/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1289316/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1289307/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1289298/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1289254/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1289243/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1289196/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1289144/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1289088/*__LIB_6__::func_911*/;
			break;
		case 22:
			uParam0->f_24 = 1289006/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1288039/*func_3956*/;
			break;
		case 30:
			uParam0->f_8 = 1287829/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1287798/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1287608/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1283605/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1283552/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1282361/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1282352/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1282343/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1282335/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1282324/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1282221/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1282196/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1282158/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1282149/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1282138/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1282057/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1282049/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1282040/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1282030/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1281823/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1281815/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1281807/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1281799/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1281791/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1281782/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1281773/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1281761/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1281752/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1281740/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1281731/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1281722/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1281714/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3956(int iParam0, int iParam1)//Position - 0x13A767
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
						func_3957(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3957(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3957(int iParam0)//Position - 0x13A9E4
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3984(var uParam0, int iParam1)//Position - 0x13AFB9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1369570/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1369514/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1367969/*__LIB_8__::func_869*/;
			break;
		case 3:
			uParam0->f_34 = 1367920/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1367887/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1367823/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1367800/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1367776/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1367658/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1367591/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1367582/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1367237/*__LIB_9__::func_505*/;
			break;
		case 14:
			uParam0->f_11 = 1367228/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1367220/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1361896/*__LIB_9__::func_800*/;
			break;
		case 13:
			uParam0->f_2 = 1361887/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1361878/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1361853/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1353667/*__LIB_12__::func_848*/;
			break;
		case 17:
			uParam0->f_17 = 1353085/*__LIB_9__::func_477*/;
			break;
		case 19:
			uParam0->f_17 = 1353059/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1352998/*__LIB_9__::func_476*/;
			break;
		case 21:
			uParam0->f_3 = 1352878/*__LIB_6__::func_914*/;
			break;
		case 74:
			uParam0->f_53 = 1352822/*__LIB_6__::func_913*/;
			break;
		case 22:
			uParam0->f_24 = 1352740/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1351768/*func_4077*/;
			break;
		case 30:
			uParam0->f_8 = 1351028/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1350758/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1349822/*__LIB_9__::func_504*/;
			break;
		case 34:
			uParam0->f_41 = 1346478/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1346425/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1345742/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1345733/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1345724/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1345281/*__LIB_10__::func_65*/;
			break;
		case 77:
			uParam0->f_13 = 1345270/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1345167/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1345142/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1345104/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1345080/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1345069/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1344990/*__LIB_8__::func_865*/;
			break;
		case 54:
			uParam0->f_45 = 1344982/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1344973/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1344963/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1344734/*__LIB_8__::func_864*/;
			break;
		case 64:
			uParam0->f_47 = 1298367/*__LIB_10__::func_154*/;
			break;
		case 65:
			uParam0->f_21 = 1297229/*__LIB_8__::func_989*/;
			break;
		case 66:
			uParam0->f_21 = 1297006/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1296111/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1295566/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1295557/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1295545/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1295536/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1295524/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1293464/*__LIB_9__::func_503*/;
			break;
		case 73:
			uParam0->f_51 = 1291697/*__LIB_10__::func_153*/;
			break;
		case 78:
			uParam0->f_59 = 1291164/*__LIB_8__::func_974*/;
			break;
	}
}

void func_4077(int iParam0, int iParam1)//Position - 0x14A058
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_553(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_553(bVar7))
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
						func_4078(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_866(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4078(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4078(int iParam0)//Position - 0x14A2EB
{
	__LIB_9__::func_504(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4149(var uParam0, int iParam1)//Position - 0x14E5EB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1405583/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1405467/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1404237/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1404167/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1403994/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1403870/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1403647/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1403633/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1403609/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1403491/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1403253/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1403244/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1401540/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1401531/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1401523/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1401017/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1400978/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1400969/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1400960/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1400492/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1398453/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1396319/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1396293/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1396209/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1396109/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1395942/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1395839/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1395187/*func_4271*/;
			break;
		case 30:
			uParam0->f_8 = 1394687/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1394394/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1393396/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1393292/*__LIB_6__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 1391099/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1303815/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1391039/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1391030/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1391021/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1390755/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1390744/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1390604/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1390563/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1390366/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1390282/*__LIB_9__::func_435*/;
			break;
		case 52:
			uParam0->f_15 = 1390271/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1389989/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1389981/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1389972/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1389911/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1389629/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1387714/*__LIB_9__::func_521*/;
			break;
		case 65:
			uParam0->f_21 = 1387671/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1386968/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1385884/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1385293/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1385284/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1385272/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1385263/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1385251/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1382581/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1380735/*func_4194*/;
			break;
		case 85:
			uParam0->f_1 = 1378401/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1374175/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1374166/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1374123/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1373822/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1373059/*func_4161*/;
			break;
		case 94:
			uParam0->f_1 = 1371559/*__LIB_5__::func_362*/;
			break;
		case 102:
			uParam0->f_1 = 1370991/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1370983/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1370908/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1370834/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1370810/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4161(var uParam0, var uParam1)//Position - 0x14F383
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_338(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_4194(int iParam0, var uParam1)//Position - 0x15117F
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
				func_1404(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_338(&iVar2, &(uParam1->f_109), 14);
								func_249(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_338(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_338(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_338(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_249(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_1404(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4271(int iParam0, int iParam1)//Position - 0x1549F3
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_553(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_553(bVar7))
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
						func_4272(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4272(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4272(int iParam0)//Position - 0x154C51
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4323(var uParam0, int iParam1)//Position - 0x157298
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1447566/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1445248/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1445185/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1445129/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1444414/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1444406/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1444397/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1444373/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1444364/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1442536/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1442527/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1442519/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1442510/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1442501/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1442492/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1442483/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1442474/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1442449/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1442438/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1442429/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1442420/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1442411/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1442403/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1442395/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1441231/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1441220/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1441192/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1441183/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1441138/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1407455/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1407446/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1407437/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1407429/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1407418/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1407410/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1407401/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1407102/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1407073/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1407042/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1407008/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1406964/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1406935/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1406926/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1406869/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1406861/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1406853/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1406845/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1406837/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1406811/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1406785/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1406773/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1406764/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1406752/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1406743/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1406735/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1406552/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4400(var uParam0, int iParam1)//Position - 0x161B7F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1491425/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1491115/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1486178/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1486149/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1485955/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1485605/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1485463/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1485439/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1484903/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1484798/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1484789/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1484684/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1484675/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1484667/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1484658/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1484649/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1484360/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1484351/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1484267/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1484258/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1483638/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1483438/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1483374/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1483314/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1483305/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1483064/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1482691/*func_4439*/;
			break;
		case 30:
			uParam0->f_8 = 1482553/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1482113/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1481448/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1478870/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1478825/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1452982/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1452754/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1452578/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1452570/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1452559/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1452317/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1452285/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1452219/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1452195/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1452012/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1451417/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1451180/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1451171/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1451106/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1450684/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1450676/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1450668/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1450608/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1450590/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1450581/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1450572/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1450068/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1449920/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1449875/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1449866/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1449858/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1449842/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4439(int iParam0, int iParam1)//Position - 0x169FC3
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
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_553(bVar2))
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

void func_4477(var uParam0, int iParam1)//Position - 0x16C1EA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1526382/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1526272/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1523829/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1523800/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1523636/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1523518/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1523301/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1523277/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1523159/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1523008/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1522999/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1521996/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1521987/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1521979/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1521970/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1521816/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1521807/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1521719/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1520935/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1520307/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1520281/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1520242/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1520182/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1520173/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1520120/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1519816/*func_4565*/;
			break;
		case 30:
			uParam0->f_8 = 1519693/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1519473/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1519188/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1518782/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1518737/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1501208/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1501199/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1501115/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1501107/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1501084/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1501032/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1501000/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1500822/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1500725/*__LIB_12__::func_51*/;
			break;
		case 52:
			uParam0->f_15 = 1500714/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1500399/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1499535/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1499526/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1494719/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1494705/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1493267/*__LIB_9__::func_777*/;
			break;
		case 65:
			uParam0->f_21 = 1493259/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1493208/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1493180/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1493171/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1493162/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1492878/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1492782/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1492770/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1492584/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1492412/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4565(int iParam0, int iParam1)//Position - 0x1730C8
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
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_553(bVar2))
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

void func_4609(var uParam0, int iParam1)//Position - 0x174A77
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1554170/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1554024/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1548836/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1548807/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1548397/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1548227/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1547832/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1547808/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1547799/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1547704/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1547695/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1547687/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1547678/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1547393/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1547384/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1547296/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1547287/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1547034/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1547008/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1546999/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1546990/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1546981/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1546973/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1546965/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1546842/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1546596/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1546340/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1544187/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1544142/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1529693/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1529684/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1529675/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1529667/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1529656/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1529604/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1529572/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1529443/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1529419/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1529408/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1528757/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1528121/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1528112/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1528045/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1528031/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1527652/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1527577/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1527526/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1527508/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1527499/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1527490/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1527373/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1527364/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1527352/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1527343/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1527335/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4682(var uParam0, int iParam1)//Position - 0x17B703
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1554637/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1554628/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1554619/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1554459/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1554451/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1554296/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4690(var uParam0, int iParam1)//Position - 0x17B8D6
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1554854/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1554845/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1554836/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1554459/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1554827/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1554763/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4696(var uParam0, int iParam1)//Position - 0x17B9AF
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1555081/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1555072/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1554459/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1555063/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1554963/*__LIB_8__::func_992*/;
			break;
	}
}

Vector3 func_4705(int iParam0, bool bParam1)//Position - 0x17BBEF
{
	struct<3> Var0;
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 2703.905f, -370.476f, -55.1649f };
				break;
			case 1:
				Var0 = { 2705.002f, -370.476f, -55.1649f };
				break;
			case 2:
				Var0 = { 2706.05f, -369.538f, -55.1649f };
				break;
			case 3:
				Var0 = { 2705.002f, -368.526f, -55.1649f };
				break;
			case 4:
				Var0 = { 2703.905f, -368.526f, -55.1649f };
				break;
		}
	}
	else if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 1562.65f, 390.55f, -53.68f };
				break;
			case 1:
				Var0 = { 1562.65f, 389.4f, -53.68f };
				break;
			case 2:
				Var0 = { 1562.65f, 387.8866f, -53.68f };
				break;
			case 3:
				Var0 = { 1564.1f, 389.9674f, -53.68f };
				break;
			case 4:
				Var0 = { 1564.1f, 387.3691f, -53.68f };
				break;
		}
	}
	else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { -1349.4037f, 142.068f, -95.5057f };
				break;
			case 1:
				Var0 = { -1350.6766f, 142.6623f, -95.5057f };
				break;
			case 2:
				Var0 = { -1351.8383f, 142.3551f, -95.5057f };
				break;
			case 3:
				Var0 = { -1353.0413f, 142.0094f, -95.5057f };
				break;
			case 4:
				Var0 = { -1350.215f, 140.8773f, -95.5057f };
				break;
			case 5:
				Var0 = { -1351.3978f, 140.5723f, -95.5057f };
				break;
			case 6:
				Var0 = { -1352.6111f, 140.2685f, -95.5057f };
				break;
			case 7:
				Var0 = { -1353.8767f, 140.8985f, -95.5057f };
				break;
		}
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { -6.78359f, -1.02747f, 4.397f };
				break;
			case 1:
				Var0 = { -7.87022f, -0.253249f, 4.397f };
				break;
			case 2:
				Var0 = { -7.88755f, 1.29342f, 4.397f };
				break;
			case 3:
				Var0 = { -7.91141f, 2.79893f, 4.397f };
				break;
			case 4:
				Var0 = { -6.79927f, 3.54576f, 4.397f };
				break;
			case 5:
				Var0 = { -5.66434f, 2.7327f, 4.397f };
				break;
			case 6:
				Var0 = { -5.62514f, 1.24466f, 4.397f };
				break;
			case 7:
				Var0 = { -5.62118f, -0.163204f, 4.397f };
				break;
		}
		Var0 = { func_4706(Var0, __LIB_2__::func_717(PLAYER::PLAYER_ID())) };
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 970.3333f, 55.555f, 115.7754f };
				break;
			case 1:
				Var0 = { 969.3386f, 56.1765f, 115.7754f };
				break;
			case 2:
				Var0 = { 968.3069f, 56.8211f, 115.7754f };
				break;
			case 3:
				Var0 = { 967.8962f, 58.3022f, 115.7754f };
				break;
			case 4:
				Var0 = { 969.4728f, 58.6255f, 115.7754f };
				break;
			case 5:
				Var0 = { 970.4819f, 57.995f, 115.7754f };
				break;
			case 6:
				Var0 = { 971.4991f, 57.3593f, 115.7754f };
				break;
		}
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					Var0.f_0 = (Var0.f_0 - 0.0837f);
					Var0.f_1 = (Var0.f_1 - 0.1338f);
					break;
				case 3:
					Var0.f_0 = (Var0.f_0 - 0.063f);
					Var0.f_1 = (Var0.f_1 + 0.0407f);
					break;
				case 4:
				case 5:
				case 6:
					Var0.f_0 = (Var0.f_0 + 0.0837f);
					Var0.f_1 = (Var0.f_1 + 0.1338f);
					break;
				}
			}
	}
	return Var0;
}

Vector3 func_4706(struct<3> Param0, int iParam1)//Position - 0x17C08F
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_81(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

char* func_4707(int iParam0, int iParam1, int iParam2)//Position - 0x17C0B2
{
	if ((__LIB_5__::func_409(PLAYER::PLAYER_ID()) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_394())
		{
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_a@base_r@";
						default:
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_b@base_r@";
						default:
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@female@var_c@base_r@";
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
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_a@base_r@";
						default:
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_b@base_r@";
						default:
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base@";
						case 1:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base_l@";
						case 2:
							return "anim@amb@clubhouse@boardroom@crew@male@var_c@base_r@";
						default:
					}
					break;
				}
		}
	}
	else if (__LIB_1__::func_394())
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				if (!__LIB_5__::func_188(PLAYER::PLAYER_ID()))
				{
					return "anim@amb@office@boardroom@boss@female@";
				}
			case 4:
			case 5:
			case 6:
			case 7:
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_a@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_a@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_a@base_r@";
							default:
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_b@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_b@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_b@base_r@";
							default:
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@female@var_c@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@female@var_c@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@female@var_c@base_r@";
							default:
						}
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				if (!__LIB_5__::func_188(PLAYER::PLAYER_ID()))
				{
					return "anim@amb@office@boardroom@boss@male@";
				}
			case 4:
			case 5:
			case 6:
			case 7:
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_a@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_a@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_a@base_r@";
							default:
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_b@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_b@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_b@base_r@";
							default:
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "anim@amb@office@boardroom@crew@male@var_c@base@";
							case 1:
								return "anim@amb@office@boardroom@crew@male@var_c@base_l@";
							case 2:
								return "anim@amb@office@boardroom@crew@male@var_c@base_r@";
							default:
						}
						break;
				}
				break;
			}
	}
	return "";
}

int func_4708()//Position - 0x17C46B
{
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()) || __LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		return MISC::GET_HASH_KEY("bkr_prop_clubhouse_chair_01");
	}
	else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		return MISC::GET_HASH_KEY("tr_Prop_Tr_Chair_01a");
	}
	return MISC::GET_HASH_KEY("vw_prop_vw_offchair_01");
}

void func_4709()//Position - 0x17C4BB
{
	if (Local_155[PLAYER::PLAYER_ID() /*10*/].f_1.f_8 != 0 && Local_157.f_0 >= 5)
	{
		if (!BitTest(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1, 2) && Local_157.f_0 != 7)
		{
			MISC::SET_BIT(&(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), 2);
			MISC::CLEAR_BIT(&(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), 1);
			Local_155[PLAYER::PLAYER_ID() /*10*/].f_1.f_6 = Local_157.f_4;
			__LIB_10__::func_777(&(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), 2);
		}
		if (Local_155[PLAYER::PLAYER_ID() /*10*/].f_1.f_8 != 3 && BitTest(Local_157.f_3, 3))
		{
			MISC::CLEAR_BIT(&(Local_157.f_3), 3);
		}
	}
	func_4710(&(Local_131.f_9), &(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), &Local_156, &Global_4194304);
}

void func_4710(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x17C576
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
	func_5507(uParam0, iParam1, iParam2);
	if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::PLAYER_ID()))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID()))
		{
			__LIB_10__::func_867(iParam2, uParam0);
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
				if (func_5501(uParam0, iParam1, iParam2, uParam3))
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
				if (func_5493(iParam1, iParam2))
				{
					func_5492(iParam2, iParam2->f_87);
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
						func_5483(iParam2);
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
			if (func_5493(iParam1, iParam2) && !__LIB_13__::func_556(0))
			{
				__LIB_2__::func_976();
				func_5492(iParam2, iParam2->f_87);
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
					func_5483(iParam2);
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
			func_4996(&(iParam2->f_88));
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
				if (func_4714(uParam0, iParam1, iParam2, uParam3))
				{
					func_5483(iParam2);
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

int func_4714(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x17CF63
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
		func_4941(iParam1, iParam2, uParam3, 0);
		if (func_4737(uParam0, iParam1, iParam2, uParam3))
		{
			if (((func_4719(uParam0, iParam1, iParam2, uParam3) || Global_1853198) || Global_1931426) || BitTest(Global_2621446.f_1, 2))
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
	else if (func_4737(uParam0, iParam1, iParam2, uParam3))
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

int func_4719(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x17D1AA
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
					func_4941(iParam1, iParam2, uParam3, 0);
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

int func_4737(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x17DDE3
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
					__LIB_0__::func_610("MPTV_CETTL" /* GXT: CRIMINAL ESCAPED */);
					__LIB_0__::func_610("MPTV_CESTTL" /* GXT: Police have lost the trail */);
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
						__LIB_17__::func_859(&(iParam2->f_88), 32);
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
					__LIB_23__::func_732(&(iParam2->f_88));
				}
				__LIB_10__::func_778(iParam2, 4);
			}
			break;
		case 4:
			if (BitTest(iParam2->f_28, 4) || BitTest(iParam2->f_28, 6))
			{
				if (func_4941(iParam1, iParam2, uParam3, 0))
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
								__LIB_0__::func_610("MPTV_CCTV3" /* GXT: GARAGE 22 - 06 - 84 */);
							}
							else if (iParam2->f_27 == 1)
							{
								if (__LIB_1__::func_597(uParam3->f_31))
								{
									__LIB_0__::func_610("MPTV_CCTV7" /* GXT: ROOF 04 - 11 - 87 */);
								}
								else
								{
									__LIB_0__::func_610("MPTV_CCTV6" /* GXT: GARAGE DOOR 04 - 11 - 87 */);
								}
							}
							else
							{
								__LIB_0__::func_610("MPTV_CCTV0" /* GXT: MAIN DOOR 04 - 11 - 87 */);
							}
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam2->f_7, "SET_DETAILS");
							if (iParam2->f_27 == 3)
							{
								__LIB_0__::func_610("MPTV_CCTV4" /* GXT: 38 : 06 : 35    5N/0BR2 */);
							}
							else
							{
								__LIB_0__::func_610("MPTV_CCTV1" /* GXT: 38 : 06 : 35    5N/0BR2 */);
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
						if (!__LIB_10__::func_206(&(iParam2->f_88.f_1)) && __LIB_16__::func_254(5))
						{
							if (BitTest(iParam2->f_88.f_1, 13))
							{
								if (!__LIB_10__::func_206(&(iParam2->f_88.f_1)))
								{
									__LIB_17__::func_859(&(iParam2->f_88), 0);
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
						else if (!__LIB_16__::func_254(5))
						{
							if (!__LIB_10__::func_206(&(iParam2->f_88.f_1)))
							{
								__LIB_17__::func_859(&(iParam2->f_88), 0);
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
								func_4772(&(iParam2->f_88), 0);
							}
							bVar0 = true;
						}
						break;
					case 6:
					case 7:
					case 8:
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
						if (func_4941(iParam1, iParam2, uParam3, 0))
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
				if (func_4941(iParam1, iParam2, uParam3, 0))
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
							if (func_4767(iParam1, iParam2, uParam3))
							{
								bVar0 = true;
							}
						}
						else if (func_4749(iParam1, iParam2, uParam3))
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
						if (func_4767(iParam1, iParam2, uParam3))
						{
							bVar0 = true;
						}
					}
					else if (func_4749(iParam1, iParam2, uParam3))
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

int func_4749(int* iParam0, int* iParam1, var uParam2)//Position - 0x17F371
{
	int iVar0;
	struct<3> Var1;
	if (!BitTest(*iParam1, 15))
	{
		MISC::SET_BIT(iParam1, 15);
	}
	if (!BitTest(*iParam1, 27))
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_4757(iParam1, iParam0, uParam2, 0), 7f, __LIB_11__::func_899(iParam1, uParam2, iParam0), false, false, true);
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
					__LIB_0__::func_794(&(iParam1->f_80));
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
		__LIB_0__::func_794(&(iParam1->f_80));
		return 1;
	}
	return 0;
}

Vector3 func_4757(int* iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x17FA3D
{
	struct<3> Var0;
	var uVar1;
	func_4758(iParam0, uParam1, uParam2, &Var0, &uVar1, bParam3);
	return Var0;
}

void func_4758(int* iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x17FA59
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
			*uParam3 = { func_4706(*uParam3, __LIB_2__::func_717(PLAYER::PLAYER_ID())) };
			uParam4->f_2 = func_80(uParam4->f_2, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
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

int func_4767(int* iParam0, int* iParam1, var uParam2)//Position - 0x183232
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
			func_4758(iParam1, iParam0, uParam2, &Var1, &Var2, bVar0);
		}
		else
		{
			iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_4757(iParam1, iParam0, uParam2, bVar0), 5f, __LIB_11__::func_899(iParam1, uParam2, iParam0), false, false, true);
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
					__LIB_0__::func_794(&(iParam1->f_80));
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
		__LIB_0__::func_794(&(iParam1->f_80));
		return 1;
	}
	return 0;
}

void func_4772(var uParam0, bool bParam1)//Position - 0x18373F
{
	if (__LIB_10__::func_197(&(uParam0->f_1)) != 0)
	{
		if (bParam1)
		{
			__LIB_10__::func_892(uParam0, 1);
		}
		func_4773(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 3);
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
}

void func_4773(var uParam0)//Position - 0x183777
{
	func_4837(uParam0);
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

void func_4837(var uParam0)//Position - 0x1846ED
{
	if (uParam0->f_2262 != -1)
	{
		if (__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_4838(uParam0->f_2262, 0);
		}
		uParam0->f_2262 = -1;
	}
}

void func_4838(int iParam0, bool bParam1)//Position - 0x18471E
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
		func_4838(11, bParam1);
		func_4838(12, bParam1);
		func_4838(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_4838(37, bParam1);
		func_4838(38, bParam1);
		func_4838(39, bParam1);
		func_4838(40, bParam1);
		func_4838(41, bParam1);
	}
}

int func_4941(int* iParam0, int* iParam1, var uParam2, bool bParam3)//Position - 0x18ECA3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (BitTest(*iParam1, 7))
	{
		return 1;
	}
	else if (func_4942(iParam1, iParam0, uParam2, &Var0, &Var1, &fVar2, iParam1->f_8))
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
			TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), func_4757(iParam1, iParam0, uParam2, 0), 0);
		}
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), func_4757(iParam1, iParam0, uParam2, 0), -1, 0, 2);
		AUDIO::START_AUDIO_SCENE("WATCHING_SAFEHOUSE_TV");
		MISC::SET_BIT(iParam1, 7);
		MISC::SET_BIT(iParam1, 0);
	}
	return 0;
}

int func_4942(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)//Position - 0x18EDC1
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
		*uParam3 = { func_4706(*uParam3, iVar1) };
		uParam4->f_2 = func_80(uParam4->f_2, iVar1);
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

void func_4996(var uParam0)//Position - 0x1902BC
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
				func_4772(uParam0, 1);
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
		__LIB_27__::func_903(uParam0);
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
		func_5437(uParam0);
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
			__LIB_17__::func_849(uParam0);
			break;
		case 2:
			func_5427(uParam0);
			break;
		case 3:
			func_5398(uParam0);
			break;
		case 4:
			func_5374(uParam0);
			break;
		case 5:
			func_5280(uParam0);
			break;
		case 6:
			func_4773(uParam0);
			break;
	}
	if (__LIB_10__::func_333())
	{
		__LIB_23__::func_732(uParam0);
		MISC::SET_BIT(&(uParam0->f_47), 6);
		__LIB_10__::func_329();
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
		{
			if (!__LIB_10__::func_328(__LIB_1__::func_4()) || !__LIB_11__::func_782(&(uParam0->f_47), &iVar0, &uVar1, __LIB_1__::func_4()))
			{
				__LIB_27__::func_906(uParam0, 0, 1);
				if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					if (!__LIB_17__::func_848(uParam0, &iVar0, &uVar1, 0, 0, 0))
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
								__LIB_15__::func_183();
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
	__LIB_17__::func_862(uParam0);
	__LIB_27__::func_905(uParam0);
}

void func_5280(var uParam0)//Position - 0x19BBE8
{
	if (func_5281(uParam0))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_5281(var uParam0)//Position - 0x19BC02
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
	if (func_5282(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		return 1;
	}
	return 0;
}

int func_5282(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14)//Position - 0x19BC70
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
		func_5290();
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
			if ((Global_2715699.f_6597 || __LIB_5__::func_253(-1046478848)) || __LIB_1__::func_35())
			{
				if (__LIB_6__::func_953(0))
				{
					bParam12 = true;
					if (__LIB_2__::func_174() > 800 || (__LIB_13__::func_566() && !__LIB_1__::func_683()))
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

void func_5290()//Position - 0x19C4EB
{
	int iVar0;
	struct<62> Var1;
	int iVar2;
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
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
			func_5291(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
		}
	}
}

void func_5291(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x19C9C3
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
			if (func_5366(iParam0, iVar1, &iVar2, 0))
			{
				func_5351(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_5292(iParam0, iVar1, &iVar2))
			{
				func_5351(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_1513(iParam0);
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
			func_1453(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_1453(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_1453(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_5292(int iParam0, int iParam1, int iParam2)//Position - 0x19CE60
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_5293(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_5293(int iParam0, int iParam1, int iParam2)//Position - 0x19CEEC
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
				if (!func_5293(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_5293(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_5293(iParam0, 14, iVar4))
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
			if (!func_5293(iParam0, 14, uVar8[iVar7]))
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

int func_5351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1AFC09
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
										func_5351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_5351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, func_5355(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_5366(iParam0, iVar10, &iVar4, 1))
							{
								func_5351(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_5351(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_5351(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_5351(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_5351(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_5351(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_5351(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_5351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_5351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_5351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_5366(iParam0, iVar10, &iVar4, 0))
		{
			func_5351(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_5292(iParam0, iVar10, &iVar4))
		{
			func_5351(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_5355(int iParam0, int iParam1, int iParam2)//Position - 0x1B05AC
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
				if (func_5293(iParam0, iParam1, iVar0))
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
				if (func_5293(iParam0, iParam1, iVar1))
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

int func_5366(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B2269
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_5293(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_5374(var uParam0)//Position - 0x1B23B0
{
	if (__LIB_1__::func_711() != PLAYER::PLAYER_PED_ID())
	{
		__LIB_10__::func_909(uParam0, PLAYER::PLAYER_PED_ID());
		__LIB_10__::func_327(&(uParam0->f_1), 1);
	}
	if (func_5375(uParam0, 0, 1))
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_5375(var uParam0, bool bParam1, bool bParam2)//Position - 0x1B23EA
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
	if (((__LIB_1__::func_711() != -1 && ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_711())) && (!bParam1 || __LIB_15__::func_488(uParam0, __LIB_1__::func_711(), 1))) && !__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711())))
	{
		iVar1 = __LIB_1__::func_711();
	}
	else if (__LIB_15__::func_169(uParam0, 0))
	{
		__LIB_23__::func_732(uParam0);
		if (__LIB_17__::func_848(uParam0, &iVar6, &iVar7, 0, 1, 1))
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
							__LIB_17__::func_845(1, 1);
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
							func_5437(uParam0);
							if (__LIB_10__::func_354(&(uParam0->f_1)))
							{
								uParam0->f_1.f_30 = { CAM::GET_CAM_COORD(uParam0->f_1.f_39) };
							}
							else
							{
								uParam0->f_1.f_30 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
								if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::func_162())
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
					__LIB_0__::func_794(&(uParam0->f_2257));
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
								__LIB_0__::func_794(&(uParam0->f_2257));
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
					if (iVar2 != __LIB_0__::func_162())
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
						__LIB_0__::func_794(&(uParam0->f_2257));
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
									__LIB_0__::func_794(&(uParam0->f_47.f_2186));
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

void func_5398(var uParam0)//Position - 0x1B358C
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
								func_5416(uParam0);
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
								if (__LIB_15__::func_483(__LIB_1__::func_711(), __LIB_5__::func_839(&(uParam0->f_1))) && iVar1)
								{
									__LIB_0__::func_794(&(uParam0->f_2255));
								}
							}
							func_5403(uParam0, __LIB_1__::func_711());
						}
					}
					if (!BitTest(uParam0->f_47, 0))
					{
						if (!BitTest(uParam0->f_47, 3))
						{
							MISC::SET_BIT(&(uParam0->f_47), 0);
							__LIB_23__::func_732(uParam0);
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
					__LIB_27__::func_906(uParam0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_10__::func_887(&(uParam0->f_1));
		__LIB_27__::func_902(uParam0);
	}
	__LIB_31__::func_725(uParam0);
}

void func_5403(var uParam0, int iParam1)//Position - 0x1B3990
{
	if (__LIB_10__::func_939(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
	{
		if (uParam0->f_2262 == -1)
		{
			uParam0->f_2262 = __LIB_13__::func_580(iParam1);
		}
		else if (!__LIB_5__::func_374(PLAYER::PLAYER_ID(), uParam0->f_2262))
		{
			func_4838(uParam0->f_2262, 1);
		}
	}
	else
	{
		func_4837(uParam0);
	}
}

void func_5416(var uParam0)//Position - 0x1B3F30
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_711());
	if (iVar1 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
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
					__LIB_0__::func_794(&(uParam0->f_2251));
					__LIB_10__::func_892(uParam0, __LIB_10__::func_364());
					__LIB_1__::func_36(0, 0, 1);
					func_5282(1, 1, 1, 1, 0, 0f, 0f, 0f, 1, 0, 0, 1, 1, 0, 0);
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
							__LIB_17__::func_845(1, 1);
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
					__LIB_17__::func_845(1, 1);
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

void func_5427(var uParam0)//Position - 0x1B4617
{
	if (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
	{
		if (!__LIB_7__::func_719(16))
		{
			if (func_5375(uParam0, 1, 0))
			{
				__LIB_7__::func_694(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		__LIB_10__::func_886();
		__LIB_10__::func_887(&(uParam0->f_1));
		__LIB_27__::func_902(uParam0);
	}
	__LIB_31__::func_725(uParam0);
}

void func_5437(var uParam0)//Position - 0x1B4A00
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
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_162())
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
								if (Global_2689235[iVar3 /*453*/].f_318.f_9 != __LIB_0__::func_162())
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
										func_5445(iVar28, &Var30, iVar29, 0);
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

void func_5445(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1B5BD6
{
	var uVar0;
	func_5446(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_5446(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1B5BEC
{
	struct<33> Var0;
	func_82(iParam0, &Var0, 2);
	func_82(iParam0, &Var0, 6);
	func_82(iParam0, &Var0, 1);
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

void func_5483(int* iParam0)//Position - 0x1B72B1
{
	__LIB_10__::func_783(iParam0);
	__LIB_10__::func_782(iParam0);
	MISC::CLEAR_BIT(iParam0, 12);
	MISC::CLEAR_BIT(iParam0, 13);
	__LIB_2__::func_346(PLAYER::PLAYER_ID(), 1);
	__LIB_6__::func_704();
	__LIB_1__::func_553();
	func_4772(&(iParam0->f_88), 0);
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
	func_4772(&(iParam0->f_88), 0);
	__LIB_0__::func_794(&(iParam0->f_80));
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

void func_5492(int* iParam0, var uParam1)//Position - 0x1B76AE
{
	MISC::SET_BIT(iParam0, 0);
	__LIB_11__::func_723(iParam0, uParam1, uParam1);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
	__LIB_0__::func_866();
	MISC::SET_BIT(&(iParam0->f_28), 5);
	iParam0->f_8 = 0;
	Global_2789733 = 1;
}

int func_5493(int* iParam0, int* iParam1)//Position - 0x1B76E3
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
								if (func_5494())
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
								if (func_5494())
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
							if (func_5494())
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
							if (func_5494())
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
							if (func_5494())
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
							if (func_5494())
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
							if (func_5494())
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
						if (func_5494())
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
						if (func_5494())
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
						if (func_5494())
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

int func_5494()//Position - 0x1B7FCF
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_394())
	{
		iVar0 = func_267(PLAYER::PLAYER_PED_ID(), 11, -1);
		iVar1 = func_267(PLAYER::PLAYER_PED_ID(), 4, -1);
		if (__LIB_0__::func_240(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 11, iVar0, -1) || __LIB_10__::func_945(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 4, iVar1, -1))
		{
			return 0;
		}
	}
	return 1;
}

int func_5501(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x1B82E4
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
					if (func_4749(iParam1, iParam2, uParam3))
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
				else if (func_4767(iParam1, iParam2, uParam3))
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

void func_5507(var uParam0, int* iParam1, int* iParam2)//Position - 0x1B8E5E
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
	func_5508(uParam0, iParam1, iParam2);
}

void func_5508(var uParam0, var uParam1, int* iParam2)//Position - 0x1B9089
{
	GRAPHICS::SET_TV_VOLUME(func_5509(uParam0, uParam1, iParam2));
}

float func_5509(var uParam0, var uParam1, var uParam2)//Position - 0x1B909F
{
	if (BitTest(*uParam2, 31) && uParam2->f_2481)
	{
		if (((Global_100493.f_374 == joaat("Apart_Entry_Room") || Global_100493.f_374 == joaat("Apart_Spare_Room")) || Global_100493.f_374 == joaat("Apart_Spare_Bath_Rm")) || Global_100493.f_374 == joaat("Apart_wardrobe"))
		{
			return func_5510(GRAPHICS::GET_TV_VOLUME(), -50f, 0.05f, 0);
		}
		else
		{
			return func_5510(GRAPHICS::GET_TV_VOLUME(), __LIB_10__::func_772(uParam0, uParam1), 0.05f, 0);
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

float func_5510(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0x1B9164
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
			fVar0 = func_5510(fParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_5510(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

void func_5545()//Position - 0x1BC083
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	func_5561();
	iVar0 = 0;
	if (__LIB_0__::func_629() || (!__LIB_0__::func_893() && Local_157.f_0 > 2))
	{
		func_5560(1);
	}
	if (__LIB_7__::func_690(PLAYER::PLAYER_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (Local_157.f_0 >= 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1563.3784f, 388.8997f, -54.2859f, true) <= 3f)
		{
			PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.17f);
		}
	}
	switch (Local_157.f_0)
	{
		case 0:
			__LIB_35__::func_475(1);
			break;
		case 1:
			if (((((((((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !Global_262145.f_26918 /* Tunable: VC_PENTHOUSE_DISABLE_DINING */) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !BitTest(Global_1946250.f_4, 2)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && func_5553(PLAYER::PLAYER_ID(), -1, 1)) && func_5552()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_157.f_2, func_5551()))
			{
				if (Local_157.f_6 == -1)
				{
					if (((((Local_157.f_4 == 3 && __LIB_7__::func_826() != PLAYER::PLAYER_ID()) && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
					{
						__LIB_0__::func_190("MPJAC_NO_SIT" /* GXT: Only the owner can sit at the head of the table. */);
					}
					else
					{
						__LIB_5__::func_569(&(Local_157.f_6), 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
					}
				}
				else if (__LIB_3__::func_113(Local_157.f_6, 1))
				{
					if (__LIB_0__::func_1("MPJAC_NO_SIT" /* GXT: Only the owner can sit at the head of the table. */))
					{
						HUD::CLEAR_HELP(true);
					}
					__LIB_3__::func_122(&(Local_157.f_6));
					Local_157.f_6 = -1;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
					MISC::SET_BIT(&(Global_1946250.f_6), 11);
					if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
					{
						switch (Local_157.f_4)
						{
							case 0:
								Local_157.f_1 = 0;
								break;
							case 1:
								Local_157.f_1 = 1;
								break;
							case 2:
								Local_157.f_1 = 2;
								break;
							case 3:
								Local_157.f_1 = 0;
								break;
							case 4:
								Local_157.f_1 = 1;
								break;
						}
					}
					else if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
					{
						switch (Local_157.f_4)
						{
							case 0:
								Local_157.f_1 = 0;
								break;
							case 1:
								Local_157.f_1 = 1;
								break;
							case 2:
								Local_157.f_1 = 2;
								break;
							case 3:
								Local_157.f_1 = 0;
								break;
							case 4:
								Local_157.f_1 = 1;
								break;
							case 5:
								Local_157.f_1 = 2;
								break;
							case 6:
								Local_157.f_1 = 0;
								break;
							case 7:
								Local_157.f_1 = 1;
								break;
						}
					}
					else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
					{
						switch (Local_157.f_4)
						{
							case 0:
								Local_157.f_1 = 0;
								break;
							case 1:
								Local_157.f_1 = 1;
								break;
							case 2:
								Local_157.f_1 = 2;
								break;
							case 3:
								Local_157.f_1 = 0;
								break;
							case 4:
								Local_157.f_1 = 1;
								break;
							case 5:
								Local_157.f_1 = 2;
								break;
							case 6:
								Local_157.f_1 = 0;
								break;
							case 7:
								Local_157.f_1 = 1;
								break;
						}
					}
					else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
					{
						switch (Local_157.f_4)
						{
							case 0:
								Local_157.f_1 = 0;
								break;
							case 1:
								Local_157.f_1 = 1;
								break;
							case 2:
								Local_157.f_1 = 2;
								break;
							case 3:
								Local_157.f_1 = 0;
								break;
							case 4:
								Local_157.f_1 = 0;
								break;
							case 5:
								Local_157.f_1 = 2;
								break;
							case 6:
								Local_157.f_1 = 1;
								break;
							case 7:
								Local_157.f_1 = 1;
								break;
						}
					}
					else
					{
						switch (Local_157.f_4)
						{
							case 0:
								Local_157.f_1 = 0;
								break;
							case 1:
								Local_157.f_1 = 1;
								break;
							case 2:
								Local_157.f_1 = 2;
								break;
							case 3:
								Local_157.f_1 = 0;
								break;
							case 4:
								Local_157.f_1 = 0;
								break;
							case 5:
								Local_157.f_1 = 2;
								break;
							case 6:
								Local_157.f_1 = 1;
								break;
							}
					}
					__LIB_35__::func_475(2);
				}
			}
			else
			{
				if (Local_157.f_6 != -1)
				{
					__LIB_3__::func_122(&(Local_157.f_6));
					Local_157.f_6 = -1;
				}
				if (__LIB_0__::func_1("MPJAC_NO_SIT" /* GXT: Only the owner can sit at the head of the table. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 2:
			if ((((Local_157.f_4 != 3 || __LIB_5__::func_409(PLAYER::PLAYER_ID())) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
			{
				STREAMING::REQUEST_ANIM_DICT(func_4707(Local_157.f_4, Local_157.f_1, 0));
				STREAMING::REQUEST_ANIM_DICT(func_4707(Local_157.f_4, Local_157.f_1, 1));
				STREAMING::REQUEST_ANIM_DICT(func_4707(Local_157.f_4, Local_157.f_1, 2));
				if ((STREAMING::HAS_ANIM_DICT_LOADED(func_4707(Local_157.f_4, Local_157.f_1, 0)) && STREAMING::HAS_ANIM_DICT_LOADED(func_4707(Local_157.f_4, Local_157.f_1, 1))) && STREAMING::HAS_ANIM_DICT_LOADED(func_4707(Local_157.f_4, Local_157.f_1, 2)))
				{
					iVar4 = 1;
				}
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(func_4707(Local_157.f_4, 0, 0));
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_4707(Local_157.f_4, 0, 0)))
				{
					iVar4 = 1;
				}
			}
			if (iVar4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4707(Local_157.f_4, Local_157.f_1, 0), "enter", func_4705(Local_157.f_4, 1), func_79(Local_157.f_4), 0f, 2) };
				Var6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4707(Local_157.f_4, Local_157.f_1, 0), "enter", func_4705(Local_157.f_4, 1), func_79(Local_157.f_4), 0f, 2) };
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var5, 1f, 20000, Var6.f_2, func_5549());
				__LIB_35__::func_475(3);
			}
			break;
		case 3:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
				{
					if ((((Local_157.f_4 == 3 && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
					{
						sVar2 = "enter_b";
						sVar3 = "enter_b_chair";
					}
					else
					{
						sVar2 = "enter";
						sVar3 = "enter_chair";
					}
					Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), sVar2, 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), sVar3, 2f, -2f, 13);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
					__LIB_35__::func_475(4);
				}
			}
			break;
		case 4:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]);
			}
			if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
			{
				func_5548(1048576000, 1);
			}
			iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_157.f_5);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_RATE(iVar1) != func_5547())
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iVar1, func_5547());
				}
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
			{
				if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.99f)
				{
					Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), "base", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), "base_chair", 2f, -2f, 13);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
					__LIB_35__::func_475(5);
				}
			}
			break;
		case 5:
			if (BitTest(Local_157.f_3, 3))
			{
				return;
			}
			if (((!BitTest(Local_157.f_3, 2) && !BitTest(Local_157.f_3, 0)) && !BitTest(Local_157.f_3, 1)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_131[3]))
			{
				iVar7 = __LIB_7__::func_826();
				if (iVar7 != __LIB_0__::func_162() && __LIB_1__::func_693(iVar7, 1, 1))
				{
					if ((((Local_155[iVar7 /*10*/] == 3 && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(Local_131[3])))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(Local_131[3]), -1, 2048, 3);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(Local_131[3])))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(Local_131[3])))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
			{
				iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_157.f_5);
				if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.99f)
				{
					if (!BitTest(Local_157.f_3, 2))
					{
						iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						if ((((!BitTest(Local_157.f_3, 0) && !BitTest(Local_157.f_3, 1)) && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID()))
						{
							switch (iVar8)
							{
								case 0:
									sVar2 = "idle_a";
									sVar3 = "idle_a_chair";
									break;
								case 1:
									sVar2 = "idle_d";
									sVar3 = "idle_d_chair";
									break;
								case 2:
									sVar2 = "idle_e";
									sVar3 = "idle_e_chair";
									break;
							}
						}
						else
						{
							switch (iVar8)
							{
								case 0:
									sVar2 = "idle_a";
									sVar3 = "idle_a_chair";
									break;
								case 1:
									sVar2 = "idle_b";
									sVar3 = "idle_b_chair";
									break;
								case 2:
									sVar2 = "idle_c";
									sVar3 = "idle_c_chair";
									break;
								}
						}
						Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
						if (BitTest(Local_157.f_3, 0))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), sVar3, 2f, -2f, 13);
						}
						else if (BitTest(Local_157.f_3, 1))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), sVar3, 2f, -2f, 13);
						}
						else
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), sVar3, 2f, -2f, 13);
						}
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
						MISC::SET_BIT(&(Local_157.f_3), 2);
					}
					else
					{
						Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
						if (BitTest(Local_157.f_3, 0))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "base", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "base_chair", 2f, -2f, 13);
						}
						else if (BitTest(Local_157.f_3, 1))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "base", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "base_chair", 2f, -2f, 13);
						}
						else
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), "base", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), "base_chair", 2f, -2f, 13);
						}
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
						MISC::CLEAR_BIT(&(Local_157.f_3), 2);
					}
				}
				if ((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && !__LIB_1__::func_512())
				{
					if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/) || BitTest(Local_157.f_3, 2))
					{
						if (Local_157.f_6 != -1)
						{
							__LIB_3__::func_122(&(Local_157.f_6));
							Local_157.f_6 = -1;
						}
					}
					if (Local_157.f_6 == -1)
					{
						if (!BitTest(Local_157.f_3, 2))
						{
							if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
							{
								if ((((Local_157.f_4 == 3 && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
								{
									__LIB_5__::func_569(&(Local_157.f_6), 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else if (__LIB_9__::func_659())
								{
									__LIB_5__::func_569(&(Local_157.f_6), 4, "FHQ_BR_TV_PC" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RLEFT~ to watch TV. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
								else
								{
									__LIB_5__::func_569(&(Local_157.f_6), 4, "MPOFSEAT_EX_PCC" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
								}
							}
							else if ((((Local_157.f_4 == 3 && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
							{
								__LIB_5__::func_569(&(Local_157.f_6), 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else if (__LIB_9__::func_659())
							{
								__LIB_5__::func_569(&(Local_157.f_6), 4, "FHQ_BR_TV" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_LEFT~ to watch TV. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
							else
							{
								__LIB_5__::func_569(&(Local_157.f_6), 4, "MPOFSEAT_EXIT_C" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to face direction. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
							}
						}
					}
					else
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							iVar9 = 225;
						}
						else
						{
							iVar9 = 190;
						}
						if (__LIB_9__::func_659())
						{
							if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
							{
								iVar10 = 224;
							}
							else
							{
								iVar10 = 189;
							}
							if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar10))
							{
								MISC::SET_BIT(&(Local_157.f_3), 3);
								func_5492(&Local_156, Local_156.f_87);
								__LIB_10__::func_777(&(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), 3);
								__LIB_3__::func_122(&(Local_157.f_6));
								Local_157.f_6 = -1;
								return;
							}
						}
						iVar11 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							iVar9 = 225;
						}
						else
						{
							iVar9 = 190;
						}
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar9))
						{
							if ((((Local_157.f_4 == 3 && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
							{
								sVar2 = "exit_b";
								sVar3 = "exit_b_chair";
							}
							else if (BitTest(Local_157.f_3, 0))
							{
								sVar2 = "exit_seat";
								sVar3 = "exit_seat_chair";
								iVar0 = 1;
							}
							else if (BitTest(Local_157.f_3, 1))
							{
								sVar2 = "exit_seat";
								sVar3 = "exit_seat_chair";
								iVar0 = 2;
							}
							else
							{
								sVar2 = "exit";
								sVar3 = "exit_chair";
								iVar0 = 0;
							}
							Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, false, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, iVar0), sVar2, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, iVar0), sVar3, 2f, -2f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
							__LIB_3__::func_122(&(Local_157.f_6));
							Local_157.f_6 = -1;
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							}
							if (__LIB_9__::func_659())
							{
								__LIB_10__::func_777(&(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), 1);
								MISC::CLEAR_BIT(&(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), 2);
								Local_155[PLAYER::PLAYER_ID() /*10*/].f_1.f_6 = -1;
								__LIB_10__::func_777(&(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), 1);
								__LIB_3__::func_122(&(Local_156.f_3));
							}
							__LIB_35__::func_475(7);
						}
						else if ((((Local_157.f_4 != 3 || __LIB_5__::func_409(PLAYER::PLAYER_ID())) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
						{
							if (iVar11 < 100 && !BitTest(Local_157.f_3, 0))
							{
								if (BitTest(Local_157.f_3, 1))
								{
									Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "exit", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "exit_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
									MISC::CLEAR_BIT(&(Local_157.f_3), 0);
									MISC::CLEAR_BIT(&(Local_157.f_3), 1);
								}
								else
								{
									Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "enter", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "enter_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
									MISC::SET_BIT(&(Local_157.f_3), 0);
									MISC::CLEAR_BIT(&(Local_157.f_3), 1);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								}
								__LIB_3__::func_122(&(Local_157.f_6));
								Local_157.f_6 = -1;
								__LIB_35__::func_475(6);
							}
							else if (iVar11 > 150 && !BitTest(Local_157.f_3, 1))
							{
								if (BitTest(Local_157.f_3, 0))
								{
									Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "exit", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "exit_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
									MISC::CLEAR_BIT(&(Local_157.f_3), 0);
									MISC::CLEAR_BIT(&(Local_157.f_3), 1);
								}
								else
								{
									Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "enter", 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "enter_chair", 2f, -2f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
									MISC::CLEAR_BIT(&(Local_157.f_3), 0);
									MISC::SET_BIT(&(Local_157.f_3), 1);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								}
								__LIB_3__::func_122(&(Local_157.f_6));
								Local_157.f_6 = -1;
								__LIB_35__::func_475(6);
							}
						}
					}
				}
				else if (Local_157.f_6 != -1)
				{
					__LIB_3__::func_122(&(Local_157.f_6));
					Local_157.f_6 = -1;
				}
			}
			break;
		case 6:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
			{
				iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_157.f_5);
				if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.99f)
				{
					Local_157.f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), 2), 2, true, false, 1f, 0f, 1f);
					if (BitTest(Local_157.f_3, 0))
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "base", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 1), "base_chair", 2f, -2f, 13);
					}
					else if (BitTest(Local_157.f_3, 1))
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "base", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 2), "base_chair", 2f, -2f, 13);
					}
					else
					{
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), "base", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Local_157.f_5, func_4707(Local_157.f_4, Local_157.f_1, 0), "base_chair", 2f, -2f, 13);
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_157.f_5);
					__LIB_35__::func_475(5);
				}
			}
			break;
		case 7:
			iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_157.f_5);
			if (iVar1 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= func_5546())
			{
				func_5560(0);
			}
			break;
	}
}

float func_5546()//Position - 0x1BD8E9
{
	if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		return 0.8f;
	}
	return 0.99f;
}

float func_5547()//Position - 0x1BD909
{
	if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		return 1.15f;
	}
	return 1f;
}

void func_5548(float fParam0, bool bParam1)//Position - 0x1BD925
{
	if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4])))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), fParam0);
		CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]));
		if (bParam1)
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true);
		}
	}
}

float func_5549()//Position - 0x1BD977
{
	if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		return 0.15f;
	}
	return 0.05f;
}

float func_5551()//Position - 0x1BD9AD
{
	if (__LIB_5__::func_186(PLAYER::PLAYER_ID()) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		return 50f;
	}
	return 45f;
}

int func_5552()//Position - 0x1BD9DB
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_693(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_5553(iVar1, Local_157.f_4, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_5553(int iParam0, int iParam1, bool bParam2)//Position - 0x1BDA32
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_693(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < iLocal_130)
			{
				if (iParam1 == -1 || iParam1 == iVar1)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, func_5555(iVar1, 0), func_5555(iVar1, 1), 1.25f, false, true, 0))
					{
						if (bParam2)
						{
							Local_157.f_4 = iVar1;
							Local_155[PLAYER::PLAYER_ID() /*10*/] = iVar1;
							Local_157.f_2 = func_5554(iVar1);
						}
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

float func_5554(int iParam0)//Position - 0x1BDAC0
{
	float fVar0;
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0f;
			case 1:
				return 0f;
			case 2:
				return 90f;
			case 3:
				return 180f;
			case 4:
				return 180f;
			default:
		}
	}
	else if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 306.5716f;
			case 1:
				return 272.9339f;
			case 2:
				return 293.9756f;
			case 3:
				return 135.1971f;
			case 4:
				return 86.5222f;
			default:
		}
	}
	else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 107.0537f;
			case 1:
				return 182.2757f;
			case 2:
				return 182.2757f;
			case 3:
				return 182.2757f;
			case 4:
				return 14.0876f;
			case 5:
				return 14.0876f;
			case 6:
				return 14.0876f;
			case 7:
				return 286.4302f;
			default:
		}
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				fVar0 = 357.1952f;
				break;
			case 1:
				fVar0 = 277.7608f;
				break;
			case 2:
				fVar0 = 277.7608f;
				break;
			case 3:
				fVar0 = 277.7608f;
				break;
			case 4:
				fVar0 = 181.41281f;
				break;
			case 5:
				fVar0 = 81.97089f;
				break;
			case 6:
				fVar0 = 81.97089f;
				break;
			case 7:
				fVar0 = 81.97089f;
				break;
		}
		fVar0 = func_80(fVar0, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
		return fVar0;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 330f;
			case 1:
				return 330f;
			case 2:
				return 330f;
			case 3:
				return 235f;
			case 4:
				return 145f;
			case 5:
				return 145f;
			case 6:
				return 145f;
			}
		default:
	}
	return 0f;
}

Vector3 func_5555(int iParam0, bool bParam1)//Position - 0x1BDD0F
{
	struct<3> Var0;
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
					return 2703.514f, -370.77536f, -55.780895f;
				case 1:
					return 2704.6138f, -370.78662f, -55.780895f;
				case 2:
					return 2706.25f, -369.94553f, -55.780895f;
				case 3:
					return 2705.3804f, -368.30917f, -55.780895f;
				case 4:
					return 2704.242f, -368.2946f, -55.780895f;
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 2704.3215f, -370.77094f, -53.780895f;
				case 1:
					return 2705.4749f, -370.7686f, -53.780895f;
				case 2:
					return 2706.2415f, -369.1244f, -53.780895f;
				case 3:
					return 2704.5881f, -368.3117f, -53.780895f;
				case 4:
					return 2703.461f, -368.31332f, -53.780895f;
				}
			default:
		}
	}
	else if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
					return 1563.45f, 390.63f, -54.28f;
				case 1:
					return 1563.45f, 389.35f, -54.28f;
				case 2:
					return 1563.45f, 387.8f, -54.28f;
				case 3:
					return 1563.8f, 390f, -54.28f;
				case 4:
					return 1563.8f, 387.4f, -54.28f;
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 1562.1f, 390.63f, -52.28f;
				case 1:
					return 1562.1f, 389.2f, -52.28f;
				case 2:
					return 1562.1f, 387.95f, -52.28f;
				case 3:
					return 1565.35f, 390f, -52.28f;
				case 4:
					return 1565.35f, 387.4f, -52.28f;
				}
			default:
		}
	}
	else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
					return -1349.404f, 142.068f, -96.15f;
				case 1:
					return -1350.677f, 142.662f, -96.15f;
				case 2:
					return -1351.838f, 142.355f, -96.15f;
				case 3:
					return -1353.041f, 142.009f, -96.15f;
				case 4:
					return -1350.215f, 140.877f, -96.15f;
				case 5:
					return -1351.398f, 140.572f, -96.15f;
				case 6:
					return -1352.611f, 140.269f, -96.15f;
				case 7:
					return -1353.877f, 140.899f, -96.15f;
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return -1348.3088f, 142.3617f, -94.2f;
				case 1:
					return -1350.972f, 143.766f, -94.2f;
				case 2:
					return -1352.132f, 143.452f, -94.2f;
				case 3:
					return -1353.338f, 143.115f, -94.2f;
				case 4:
					return -1349.931f, 139.815f, -94.2f;
				case 5:
					return -1351.108f, 139.49f, -94.2f;
				case 6:
					return -1352.318f, 139.175f, -94.2f;
				case 7:
					return -1354.98f, 140.603f, -94.2f;
				}
			default:
		}
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		if (!bParam1)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { -7.824f, -1.388f, 3.8f };
					break;
				case 1:
					Var0 = { -8.32683f, 0.518825f, 3.8003f };
					break;
				case 2:
					Var0 = { -8.34352f, 2.10567f, 3.8003f };
					break;
				case 3:
					Var0 = { -8.31509f, 3.82615f, 3.8003f };
					break;
				case 4:
					Var0 = { -5.8089f, 4.0711f, 3.8003f };
					break;
				case 5:
					Var0 = { -5.0809f, 2.13945f, 3.8003f };
					break;
				case 6:
					Var0 = { -5.12508f, 0.507945f, 3.8003f };
					break;
				case 7:
					Var0 = { -5.21689f, -1.15697f, 3.8003f };
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { -5.672f, -1.325f, 5.8f };
					break;
				case 1:
					Var0 = { -8.25242f, -1.24265f, 5.8003f };
					break;
				case 2:
					Var0 = { -8.31406f, 0.553645f, 5.8003f };
					break;
				case 3:
					Var0 = { -8.40686f, 2.18833f, 5.8003f };
					break;
				case 4:
					Var0 = { -7.66931f, 4.10364f, 5.8003f };
					break;
				case 5:
					Var0 = { -5.12323f, 3.70668f, 5.8003f };
					break;
				case 6:
					Var0 = { -5.12872f, 2.04745f, 5.8003f };
					break;
				case 7:
					Var0 = { -5.18656f, 0.461797f, 5.8003f };
					break;
				}
		}
		return func_4706(Var0, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
	else if (!bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 969.8056f, 55.40404f, 115.17421f;
			case 1:
				return 968.8292f, 56.27096f, 115.17421f;
			case 2:
				return 967.8247f, 56.87987f, 115.17421f;
			case 3:
				return 967.9557f, 58.791992f, 115.17421f;
			case 4:
				return 969.93866f, 58.579243f, 115.1742f;
			case 5:
				return 970.9537f, 57.93294f, 115.1742f;
			case 6:
				return 971.97046f, 57.33719f, 115.1742f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 970.58875f, 54.95844f, 117.1742f;
			case 1:
				return 969.60657f, 55.76311f, 117.17421f;
			case 2:
				return 968.5153f, 56.42958f, 117.17421f;
			case 3:
				return 967.4798f, 58.034542f, 117.17421f;
			case 4:
				return 969.18756f, 59.031597f, 117.1742f;
			case 5:
				return 970.22705f, 58.390736f, 117.1742f;
			case 6:
				return 971.2681f, 57.7982f, 117.1742f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

void func_5560(int iParam0)//Position - 0x1BE509
{
	struct<3> Var0;
	struct<3> Var1;
	if (Local_157.f_0 > 2)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_157.f_5);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_131[Local_157.f_4]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
		{
			Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4707(Local_157.f_4, Local_157.f_1, 0), "enter_chair", func_4705(Local_157.f_4, 1), func_79(Local_157.f_4), 0f, 2) };
			Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4707(Local_157.f_4, Local_157.f_1, 0), "enter_chair", func_4705(Local_157.f_4, 1), func_79(Local_157.f_4), 0f, 2) };
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Var0, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), Var1, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_131[Local_157.f_4]), true);
		}
	}
	if (Local_157.f_6 != -1)
	{
		__LIB_3__::func_122(&(Local_157.f_6));
		Local_157.f_6 = -1;
	}
	if (__LIB_0__::func_1("MPJAC_NO_SIT" /* GXT: Only the owner can sit at the head of the table. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam0 && Local_157.f_0 > 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_131[Local_157.f_4]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_131[Local_157.f_4]))
		{
			__LIB_1__::func_445(&(Local_131[Local_157.f_4]));
		}
	}
	Local_157.f_3 = 0;
	if ((__LIB_5__::func_409(PLAYER::PLAYER_ID()) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@female@var_c@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@clubhouse@boardroom@crew@male@var_c@base_r@");
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@female@var_c@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_a@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_a@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_a@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_b@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_b@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_b@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_c@base@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_c@base_l@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@crew@male@var_c@base_r@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@boss@female@");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@office@boardroom@boss@male@");
	}
	if (Local_157.f_0 > 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_6), 11);
	}
	Local_157.f_4 = -1;
	Local_155[PLAYER::PLAYER_ID() /*10*/] = -1;
	__LIB_35__::func_475(1);
}

void func_5561()//Position - 0x1BE821
{
	if (Local_157.f_0 > 3)
	{
		CAM::INVALIDATE_IDLE_CAM();
		HUD::HUD_FORCE_WEAPON_WHEEL(false);
		HUD::DISPLAY_AMMO_THIS_FRAME(false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
		__LIB_3__::func_570(1);
		__LIB_1__::func_33(0);
		__LIB_0__::func_189();
	}
}

int func_5562()//Position - 0x1BE85B
{
	if (__LIB_0__::func_959())
	{
		return 1;
	}
	if (((CAM::IS_SCREEN_FADED_OUT() && !__LIB_10__::func_397()) && !BitTest(Global_1946250.f_6, 10)) && (Local_155[PLAYER::PLAYER_ID() /*10*/].f_1.f_8 != 3 || BitTest(Global_1946250.f_6, 10)))
	{
		return 1;
	}
	if (__LIB_7__::func_725(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		if (Global_100493.f_374 != joaat("room_main"))
		{
			if (!BitTest(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1, 2))
			{
				return 1;
			}
		}
	}
	if (((((!__LIB_4__::func_899(PLAYER::PLAYER_ID()) || __LIB_0__::func_509() != 0) && !__LIB_5__::func_409(PLAYER::PLAYER_ID())) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_5571()//Position - 0x1BEAAB
{
	func_5560(0);
	if (__LIB_9__::func_659())
	{
		func_5573(&(Local_131.f_9), &(Local_155[PLAYER::PLAYER_ID() /*10*/].f_1), &Local_156, &Global_4194304);
	}
	__LIB_0__::func_202();
}

void func_5573(var uParam0, int* iParam1, int* iParam2, var uParam3)//Position - 0x1BEAE8
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
	func_5574(iParam1, iParam2, uParam3);
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

void func_5574(int* iParam0, int* iParam1, var uParam2)//Position - 0x1BEB95
{
	MISC::CLEAR_BIT(iParam0, 12);
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_5483(iParam1);
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

void func_5575()//Position - 0x1BED61
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, __LIB_7__::func_254());
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_131, 33, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_155, 321, 0);
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()) || __LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		iLocal_130 = 5;
	}
	else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		iLocal_130 = 8;
	}
	else if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		iLocal_130 = 8;
		Local_156.f_2483 = 1;
	}
	else
	{
		iLocal_130 = 7;
	}
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(iLocal_130);
	Global_4194304.f_31 = -1;
	Global_4194304.f_33 = 0;
	Global_4194304.f_34 = -1;
	Global_4194304.f_35 = -1;
	if (!__LIB_0__::func_934())
	{
		func_5571();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_5571();
	}
}

