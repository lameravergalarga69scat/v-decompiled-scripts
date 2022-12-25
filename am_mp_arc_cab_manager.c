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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	float fLocal_117 = 0f;
	float fLocal_118 = 0f;
	struct<4> Local_119 = { 0, 0, 0, 255 } ;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	int iLocal_122 = 0;
	struct<4> Local_123 = { 0, 0, 0, 255 } ;
	struct<4> Local_124 = { 0, 0, 0, 255 } ;
	struct<4> Local_125 = { 0, 0, 0, 255 } ;
	struct<23> Local_126[13];
	int iLocal_127 = 0;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	struct<2> Local_133 = { 0, 0 } ;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	float fLocal_142 = 0f;
	int iLocal_143 = 0;
	int iLocal_144[3] = { 0, 0, 0 };
	int iLocal_145[3] = { 0, 0, 0 };
	int iLocal_146 = 0;
	struct<4> Local_147[3];
	var uLocal_148[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<786> Local_149 = { 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 41, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<1534> Local_150 = { 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1062333317, 1062501089, 0, 4, 1056964608, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 41, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	struct<997> Local_151 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 255 } ;
	struct<930> Local_152 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 6, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255 } ;
	struct<87> Local_153 = { 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_140 = -1;
	iLocal_141 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5496(ScriptParam_153);
	}
	else
	{
		func_5489();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_5489();
		}
		if (func_5480())
		{
			func_5489();
		}
		func_511();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xD4
{
	switch (Local_149.f_784)
	{
		case 0:
			func_491();
			break;
		case 1:
			func_4();
			break;
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x10E
{
	if (BitTest(Global_1973079, 3) && !BitTest(Local_149.f_0, 3))
	{
	}
	else
	{
		Local_149.f_0 = 0;
		func_3(0);
	}
}

void func_3(int iParam0)//Position - 0x136
{
	if (Local_149.f_784 != iParam0)
	{
		Local_149.f_784 = iParam0;
	}
}

void func_4()//Position - 0x151
{
	func_489();
	func_481();
	func_5();
}

void func_5()//Position - 0x165
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<103> Var4;
	if (BitTest(Local_149.f_0, 2))
	{
		Var4.f_1 = 14;
		Var4.f_16 = 14;
		Var4.f_59 = 14;
		Var4.f_102 = 14;
		iVar0 = 0;
		while (iVar0 <= (func_480() - 1))
		{
			if (Local_150.f_357[iVar0] != -1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar0]))
				{
					func_6(Local_150.f_357[iVar0], &Var4);
					if (Var4.f_0 > 0)
					{
						iVar1 = 0;
						while (iVar1 <= (Var4.f_0 - 1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_149.f_168[iVar0 /*15*/][iVar1]))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(NETWORK::NET_TO_OBJ(Local_149.f_168[iVar0 /*15*/][iVar1])))
								{
									iVar2++;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_149.f_168[iVar0 /*15*/][iVar1]))
									{
										iVar3++;
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_149.f_168[iVar0 /*15*/][iVar1]), true, false);
									}
									else
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_149.f_168[iVar0 /*15*/][iVar1]);
									}
								}
							}
							iVar1++;
						}
					}
				}
			}
			iVar0++;
		}
		if (iVar3 == iVar2)
		{
			MISC::CLEAR_BIT(&Local_149, 2);
		}
	}
}

void func_6(int iParam0, var uParam1)//Position - 0x27D
{
	struct<11> Var0;
	func_7(iParam0, &Var0, 10);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Var0.f_10);
}

void func_7(int iParam0, var uParam1, int iParam2)//Position - 0x298
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
			func_81(uParam1, iParam2);
			break;
		case 12:
			func_66(uParam1, iParam2);
			break;
		case 11:
			func_51(uParam1, iParam2);
			break;
		case 13:
			func_33(uParam1, iParam2);
			break;
		case 14:
			func_8(uParam1, iParam2);
			break;
	}
}

void func_8(var uParam0, int iParam1)//Position - 0x356
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 4134/*__LIB_5__::func_49*/;
			break;
		case 1:
			*uParam0 = 4105/*__LIB_5__::func_48*/;
			break;
		case 2:
			uParam0->f_1 = 4083/*__LIB_5__::func_47*/;
			break;
		case 3:
			uParam0->f_3 = 4032/*__LIB_5__::func_46*/;
			break;
		case 4:
			uParam0->f_4 = 1407/*__LIB_5__::func_126*/;
			break;
		case 5:
			uParam0->f_5 = 1398/*__LIB_0__::func_109*/;
			break;
		case 6:
			uParam0->f_6 = 1389/*__LIB_0__::func_114*/;
			break;
		case 7:
			uParam0->f_7 = 1380/*__LIB_0__::func_114*/;
			break;
		case 8:
			uParam0->f_8 = 1372/*__LIB_0__::func_467*/;
			break;
		case 9:
			uParam0->f_9 = 1337/*__LIB_5__::func_45*/;
			break;
		case 10:
			uParam0->f_10 = 1133/*__LIB_5__::func_44*/;
			break;
		case 11:
			uParam0->f_11 = 1122/*__LIB_3__::func_554*/;
			break;
		case 12:
			uParam0->f_12 = 1114/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_13 = 1106/*__LIB_0__::func_467*/;
			break;
	}
}

void func_33(var uParam0, int iParam1)//Position - 0x1040
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 5515/*__LIB_5__::func_55*/;
			break;
		case 1:
			*uParam0 = 5486/*__LIB_5__::func_54*/;
			break;
		case 2:
			uParam0->f_1 = 5442/*__LIB_5__::func_53*/;
			break;
		case 3:
			uParam0->f_3 = 5390/*__LIB_5__::func_52*/;
			break;
		case 4:
			uParam0->f_4 = 4557/*__LIB_5__::func_694*/;
			break;
		case 5:
			uParam0->f_5 = 4548/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 4539/*__LIB_0__::func_109*/;
			break;
		case 7:
			uParam0->f_7 = 4530/*__LIB_0__::func_114*/;
			break;
		case 8:
			uParam0->f_8 = 4522/*__LIB_0__::func_467*/;
			break;
		case 9:
			uParam0->f_9 = 4482/*__LIB_5__::func_51*/;
			break;
		case 10:
			uParam0->f_10 = 4470/*__LIB_3__::func_635*/;
			break;
		case 11:
			uParam0->f_11 = 4428/*__LIB_5__::func_50*/;
			break;
		case 12:
			uParam0->f_12 = 4420/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_13 = 4412/*__LIB_0__::func_467*/;
			break;
	}
}

void func_51(var uParam0, int iParam1)//Position - 0x15A5
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 6194/*__LIB_5__::func_59*/;
			break;
		case 1:
			*uParam0 = 6165/*__LIB_5__::func_58*/;
			break;
		case 2:
			uParam0->f_1 = 6143/*__LIB_5__::func_57*/;
			break;
		case 3:
			uParam0->f_3 = 6091/*__LIB_5__::func_56*/;
			break;
		case 4:
			uParam0->f_4 = 5875/*__LIB_5__::func_40*/;
			break;
		case 5:
			uParam0->f_5 = 5866/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 5857/*__LIB_0__::func_114*/;
			break;
		case 7:
			uParam0->f_7 = 5848/*__LIB_0__::func_114*/;
			break;
		case 8:
			uParam0->f_8 = 5840/*__LIB_0__::func_467*/;
			break;
		case 9:
			uParam0->f_9 = 5832/*__LIB_0__::func_467*/;
			break;
		case 10:
			uParam0->f_10 = 5820/*__LIB_3__::func_635*/;
			break;
		case 11:
			uParam0->f_11 = 5809/*__LIB_3__::func_554*/;
			break;
		case 12:
			uParam0->f_12 = 5801/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_13 = 5793/*__LIB_0__::func_467*/;
			break;
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x184C
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 7480/*__LIB_5__::func_64*/;
			break;
		case 1:
			*uParam0 = 7451/*__LIB_5__::func_63*/;
			break;
		case 2:
			uParam0->f_1 = 7429/*__LIB_5__::func_57*/;
			break;
		case 3:
			uParam0->f_3 = 7377/*__LIB_5__::func_62*/;
			break;
		case 4:
			uParam0->f_4 = 7103/*__LIB_5__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 7094/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 7085/*__LIB_0__::func_114*/;
			break;
		case 7:
			uParam0->f_7 = 7076/*__LIB_0__::func_114*/;
			break;
		case 8:
			uParam0->f_8 = 7068/*__LIB_0__::func_467*/;
			break;
		case 9:
			uParam0->f_9 = 7028/*__LIB_5__::func_61*/;
			break;
		case 10:
			uParam0->f_10 = 6499/*__LIB_5__::func_60*/;
			break;
		case 11:
			uParam0->f_11 = 6488/*__LIB_3__::func_554*/;
			break;
		case 12:
			uParam0->f_12 = 6480/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_13 = 6472/*__LIB_0__::func_467*/;
			break;
	}
}

void func_81(var uParam0, int iParam1)//Position - 0x1D52
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_2 = 390576/*__LIB_5__::func_105*/;
			break;
		case 1:
			*uParam0 = 390027/*__LIB_5__::func_104*/;
			break;
		case 2:
			uParam0->f_1 = 389786/*__LIB_5__::func_103*/;
			break;
		case 3:
			uParam0->f_3 = 389233/*__LIB_5__::func_102*/;
			break;
		case 4:
			uParam0->f_4 = 385598/*__LIB_5__::func_174*/;
			break;
		case 5:
			uParam0->f_5 = 385589/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 385475/*__LIB_5__::func_100*/;
			break;
		case 7:
			uParam0->f_7 = 375219/*__LIB_31__::func_6*/;
			break;
		case 8:
			uParam0->f_8 = 10303/*func_93*/;
			break;
		case 9:
			uParam0->f_9 = 9761/*__LIB_5__::func_68*/;
			break;
		case 10:
			uParam0->f_10 = 8936/*__LIB_5__::func_67*/;
			break;
		case 11:
			uParam0->f_11 = 8733/*__LIB_5__::func_66*/;
			break;
		case 12:
			uParam0->f_12 = 8156/*__LIB_42__::func_536*/;
			break;
		case 13:
			uParam0->f_13 = 7758/*__LIB_5__::func_65*/;
			break;
	}
}

void func_93(int iParam0, var uParam1)//Position - 0x283F
{
	switch (iParam0)
	{
		case 9:
			__LIB_42__::func_541(iParam0, uParam1);
			break;
		case 10:
			__LIB_42__::func_540(iParam0, uParam1);
			break;
		case 18:
			func_103(uParam1);
			break;
		case 3:
		case 4:
		case 5:
			__LIB_42__::func_537(uParam1, iParam0);
			break;
	}
}

void func_103(var uParam0)//Position - 0x2C39
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	int iVar4;
	iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	iVar1 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2;
	bVar2 = false;
	if (__LIB_38__::func_779(&sVar3))
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
					__LIB_38__::func_792(1);
				}
				else
				{
					__LIB_38__::func_792(0);
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
				func_104(&(uParam0->f_583), &(uParam0->f_1528), &(uParam0->f_583.f_9), iVar4, NETWORK::PARTICIPANT_ID_TO_INT(), -1, iVar0, 0, joaat("hei_p_m_bag_var22_arm_s"), 2);
				break;
		}
		if (BitTest(uParam0->f_583, 1) || BitTest(uParam0->f_583, 15))
		{
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			uParam0->f_583.f_8 = 3;
			__LIB_38__::func_785(&(uParam0->f_523), 11);
		}
	}
	else
	{
		__LIB_38__::func_785(&(uParam0->f_523), 11);
	}
}

void func_104(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x2D92
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
			if ((__LIB_42__::func_539(iParam0, uParam1, iVar0, bVar1, 1) && __LIB_38__::func_782(iParam0, uParam1, iVar0, bVar1, 1, bParam7, iParam8)) && __LIB_38__::func_781(iParam0, uParam1, iParam3, iVar0, bVar1, ENTITY::GET_ENTITY_COORDS(iParam3, true), ENTITY::GET_ENTITY_ROTATION(iParam3, 2) + Vector(0f, 0f, 0f)))
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
			__LIB_42__::func_538(iParam0, uParam1, iParam6, iParam4);
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
						__LIB_25__::func_472(iVar11, iParam6, (*uParam1)[0], 0, 1);
					}
					else
					{
						__LIB_25__::func_472(iVar11, iParam6, (*uParam1)[0], 0, 0);
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
			if (__LIB_15__::func_826(iParam0, iVar0, iParam4))
			{
				iVar12 = __LIB_5__::func_172(iParam4);
				if (!BitTest(Global_1966339[iVar12], 2))
				{
					if (BitTest(*iParam0, 8))
					{
						__LIB_25__::func_472(iVar12, iParam6, (*uParam1)[0], 0, 1);
					}
					else
					{
						__LIB_25__::func_472(iVar12, iParam6, (*uParam1)[0], 0, 0);
					}
				}
				if (BitTest(*iParam0, 16) && iParam5 <= 1)
				{
					func_343(iParam0, uParam1, uParam2, iVar0, iParam4, iParam9, bParam7);
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
				__LIB_38__::func_780(uParam1);
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
					__LIB_38__::func_780(uParam1);
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
					func_111(iVar0, iParam9);
				}
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_5)) >= 0.9f) || __LIB_5__::func_71(*uParam2, 12000))
			{
				if (bParam7)
				{
					func_111(iVar0, iParam9);
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
			__LIB_38__::func_780(uParam1);
			__LIB_38__::func_789(uParam1);
			if (CAM::DOES_CAM_EXIST(iParam0->f_39))
			{
				CAM::DESTROY_CAM(iParam0->f_39, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			HUD::UNLOCK_MINIMAP_ANGLE();
			__LIB_38__::func_792(2);
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
				func_111(iVar0, iParam9);
			}
			*uParam2 = MISC::GET_GAME_TIMER();
			iParam0->f_2 = 8;
			break;
	}
}

void func_111(int iParam0, int iParam1)//Position - 0x44B3
{
	int iVar0;
	iVar0 = 2;
	if (__LIB_0__::func_995(1))
	{
		iVar0 = iParam1;
	}
	func_112(iParam0, iVar0, -1);
}

void func_112(int iParam0, int iParam1, int iParam2)//Position - 0x44D3
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
			func_210(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_114(iParam0, 7, -1), -1))
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

int func_114(int iParam0, int iParam1, int iParam2)//Position - 0x4820
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
				if (func_121(iParam0, iParam1, iVar0))
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
				if (func_121(iParam0, iParam1, iVar1))
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

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0x4CE1
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar0, iParam1, iParam2, -1) };
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
				if (!func_121(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_121(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_121(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, iVar4, iVar1, -1) };
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
			if (!func_121(iParam0, 14, uVar11[iVar10]))
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
						return func_121(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_121(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_210(int iParam0)//Position - 0x25923
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_211(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x259B8
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
					func_217(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_217(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x25E53
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
			func_325(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 10, 0, -1) };
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
						func_325(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_325(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_217(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_325(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_114(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_217(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_316(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_325(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_5__::func_129(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_217(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_325(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_217(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_307(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_217(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_217(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_306(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_217(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_408(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_217(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_217(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar32, -1) };
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
								func_217(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_408(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
								func_217(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_217(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_217(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_303(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_316(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_306(iVar5, func_114(iParam0, 8, -1), iParam2, func_114(iParam0, 4, -1));
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
				func_244(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_306(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_316(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_306(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_217(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_217(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_306(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_306(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_217(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_306(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_217(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_121(iParam0, 9, iVar63))
						{
							func_217(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_217(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_217(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_217(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_114(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_114(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_217(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_217(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_217(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_217(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_217(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_217(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_217(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_217(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_217(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_217(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_307(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_217(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_217(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_218(iParam0, &uVar4))
		{
			func_217(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_217(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_217(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_217(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_114(iParam0, 3, -1), iVar10);
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
				func_217(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_218(int iParam0, var uParam1)//Position - 0x27CFD
{
	int iVar0;
	int iVar1;
	*uParam1 = func_114(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_121(iParam0, iVar1, iVar0))
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

void func_244(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3196F
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
	func_245(iParam0, bParam3, 0, -1);
}

void func_245(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x319BC
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
		bVar3 = func_283(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_274(iParam0, iParam3);
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
							if (!__LIB_3__::func_228(Var9.f_2, Var9.f_3, iVar10))
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

int func_274(int iParam0, int iParam1)//Position - 0x40693
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
				iVar3 = func_114(iParam0, 11, -1);
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
				iVar5 = func_114(iParam0, 11, -1);
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

int func_283(int iParam0, bool bParam1)//Position - 0x40AF1
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_114(iParam0, 11, -1), 0);
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
						iVar3 = func_114(iParam0, 11, -1);
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
						iVar5 = func_114(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_114(iParam0, 11, -1), 0);
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
						iVar8 = func_114(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_114(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_114(iParam0, 11, -1), 0);
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
						iVar12 = func_114(iParam0, 8, -1);
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

int func_306(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4A703
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
					iVar0 = func_306(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_306(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_307(int iParam0)//Position - 0x4BA3E
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
		if (!func_312(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_312(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4C40C
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_114(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4EDF4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_318(iParam0))
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
				if (((((!__LIB_3__::func_223(iVar0, iParam2, 13) && !__LIB_3__::func_223(iVar0, iParam2, 14)) && !__LIB_3__::func_223(iVar0, iParam2, 15)) && !__LIB_3__::func_223(iVar0, iParam2, 16)) && !__LIB_3__::func_223(iVar0, iParam2, 71)) && !__LIB_3__::func_223(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_2__::func_999(iVar0, iParam1, iParam2, iParam4);
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

int func_318(int iParam0)//Position - 0x4EF83
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
				iVar1 = func_114(iParam0, 11, -1);
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
				iVar3 = func_114(iParam0, 11, -1);
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

void func_325(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4F49C
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
		Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
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
							func_325(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_325(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_325(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_325(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_325(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_325(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_325(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_325(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_325(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_325(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_343(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x5880F
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
	__LIB_38__::func_780(uParam1);
	if (bParam6)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[1]))
		{
			ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ((*uParam1)[1]), true, true);
		}
		__LIB_38__::func_789(uParam1);
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
		func_111(iParam3, iParam5);
	}
}

int func_480()//Position - 0x5F694
{
	return Local_150.f_43;
}

void func_481()//Position - 0x5F6A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_150.f_357[Local_150.f_44] != -1)
	{
		iVar2 = func_488(Local_150.f_357[Local_150.f_44]);
		iVar1 = 0;
		while (iVar1 <= iVar2)
		{
			iVar0 = func_487(&Local_149, Local_150.f_44, iVar1, Local_150.f_1533);
			if (iVar0 != -1)
			{
				if (func_484(iVar0))
				{
					func_482(Local_150.f_44, iVar1, -1);
				}
			}
			iVar1++;
		}
	}
}

void func_482(int iParam0, int iParam1, int iParam2)//Position - 0x5F711
{
	if (iParam0 > -1 && iParam0 < __LIB_5__::func_132(Local_150.f_1533))
	{
		if (iParam1 > -1 && iParam1 < 2)
		{
			if (Local_149.f_44[iParam0 /*3*/][iParam1] != iParam2)
			{
				Local_149.f_44[iParam0 /*3*/][iParam1] = iParam2;
			}
		}
	}
}

int func_484(int iParam0)//Position - 0x5F7A1
{
	int iVar0;
	iVar0 = iParam0;
	if (!__LIB_1__::func_693(iVar0, 1, 1))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return 1;
	}
	if (!func_486(iVar0) && !__LIB_3__::func_853(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x5F816
{
	if (iParam0 != __LIB_0__::func_162())
	{
		return BitTest(uLocal_148[iParam0], 1);
	}
	return 0;
}

int func_487(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5F834
{
	if (iParam1 > -1 && iParam1 <= (__LIB_5__::func_132(iParam3) - 1))
	{
		if (iParam2 > -1 && iParam2 < 2)
		{
			return uParam0->f_44[iParam1 /*3*/][iParam2];
		}
	}
	return -1;
}

int func_488(int iParam0)//Position - 0x5F879
{
	struct<7> Var0;
	func_7(iParam0, &Var0, 6);
	Stack.Push(iParam0);
	Call_Loc(Var0.f_6);
	return StackVal;
}

void func_489()//Position - 0x5F891
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Local_150.f_47;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (func_486(iVar0) && !__LIB_3__::func_853(iVar0))
		{
			iVar1 = __LIB_5__::func_38(iVar0);
			iVar2 = __LIB_5__::func_106(iVar0);
			if (func_487(&Local_149, iVar1, iVar2, Local_150.f_1533) == -1)
			{
				func_482(iVar1, iVar2, Local_150.f_47);
			}
		}
	}
}

void func_491()//Position - 0x5F91E
{
	if (!BitTest(Local_149.f_0, 0))
	{
		func_505();
	}
	else if (func_504() > 0)
	{
		if (func_492())
		{
			MISC::CLEAR_BIT(&Local_149, 3);
			func_3(1);
		}
	}
	else
	{
		func_3(1);
	}
}

int func_492()//Position - 0x5F95D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (func_480() - 1))
	{
		if (!func_493(&Local_150, &Local_149, iVar0, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_493(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x5F992
{
	struct<103> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	Var0.f_1 = 14;
	Var0.f_16 = 14;
	Var0.f_59 = 14;
	Var0.f_102 = 14;
	if (uParam0->f_357[iParam2] != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam2]))
		{
			func_6(uParam0->f_357[iParam2], &Var0);
			if (Var0.f_0 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= (Var0.f_0 - 1))
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_168[iParam2 /*15*/][iVar4]))
					{
						if (!BitTest(uParam1->f_1[iParam2], 0))
						{
							if (__LIB_2__::func_852((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + Var0.f_0), 0, 1))
							{
								NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + Var0.f_0));
								MISC::SET_BIT(&(uParam1->f_1[iParam2]), 0);
							}
						}
						else if (__LIB_0__::func_799(Var0.f_102[iVar4]))
						{
							if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(Var0.f_0))
							{
								Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_746[iParam2], Var0.f_16[iVar4 /*3*/]) };
								fVar3 = ENTITY::GET_ENTITY_HEADING(uParam0->f_746[iParam2]);
								Var2 = { Var0.f_59[iVar4 /*3*/] };
								if (!func_496(Var0.f_102[iVar4]))
								{
									bParam3 = true;
								}
								if (__LIB_1__::func_671(&(uParam1->f_168[iParam2 /*15*/][iVar4]), Var0.f_102[iVar4], Var1, 1, 1, 1, 0, 1, 1, bParam3))
								{
									if (__LIB_0__::func_109(uParam0->f_357[iParam2], iVar4))
									{
										ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), true);
									}
									else
									{
										PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]));
									}
									if (func_494(uParam0->f_357[iParam2], iVar4))
									{
										ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), false, false);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), Var1, false, false, true);
									ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), Var2.f_0, Var2.f_1, fVar3, 2, true);
									NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(uParam1->f_168[iParam2 /*15*/][iVar4], true);
									NETWORK::NETWORK_SET_OBJECT_CAN_BLEND_WHEN_FIXED(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), true);
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), true);
									OBJECT::SET_OBJECT_TINT_INDEX(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), Var0.f_1[iVar4]);
									if (!bParam3)
									{
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar4]), true, false);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_102[iVar4]);
								}
							}
						}
						return 0;
					}
					iVar4++;
				}
			}
		}
	}
	return 1;
}

int func_494(int iParam0, int iParam1)//Position - 0x5FC01
{
	switch (iParam0)
	{
		case 17:
			return 1;
			break;
	}
	return 0;
}

int func_496(int iParam0)//Position - 0x5FC27
{
	if ((iParam0 == joaat("ch_prop_arcade_claw_01a_c") || iParam0 == joaat("ch_prop_ch_usb_drive01x")) || iParam0 == joaat("ch_prop_fingerprint_scanner_01a"))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("prop_phone_ing"):
			return 0;
			break;
	}
	return 1;
}

int func_504()//Position - 0x5FEC4
{
	return Local_149.f_43;
}

void func_505()//Position - 0x5FED1
{
	struct<103> Var0;
	int iVar1;
	if (!BitTest(Local_149.f_0, 0))
	{
		if (func_506())
		{
			Var0.f_1 = 14;
			Var0.f_16 = 14;
			Var0.f_59 = 14;
			Var0.f_102 = 14;
			iVar1 = 0;
			while (iVar1 <= (func_480() - 1))
			{
				if (Local_150.f_357[iVar1] != -1)
				{
					func_6(Local_150.f_357[iVar1], &Var0);
					Local_149.f_43 = (Local_149.f_43 + Var0.f_0);
				}
				iVar1++;
			}
			MISC::SET_BIT(&Local_149, 0);
		}
	}
}

int func_506()//Position - 0x5FF52
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (func_480() - 1))
	{
		if ((!ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar0]) && Local_150.f_357[iVar0] != -1) && func_507(Local_150.f_357[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_507(int iParam0)//Position - 0x5FFAC
{
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != __LIB_0__::func_162())
		{
			if (!__LIB_5__::func_773(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
			{
				if (iParam0 != 10)
				{
					return 0;
				}
			}
		}
		switch (iParam0)
		{
			case 19:
				return 0;
			}
		default:
	}
	return 1;
}

void func_511()//Position - 0x60081
{
	func_5479();
	func_5476();
	func_5471();
	func_5470();
	func_5469();
	switch (Local_150.f_356)
	{
		case 0:
			func_5468();
			break;
		case 1:
			if (func_5466())
			{
				func_5465(2);
			}
			break;
		case 2:
			func_5432();
			break;
		case 3:
			func_5419();
			break;
		case 4:
			func_5407();
			break;
		case 5:
			func_5393();
			break;
		case 6:
			func_5389();
			break;
		case 7:
			func_5384();
			break;
		case 8:
			func_5140();
			break;
		case 9:
			func_5133();
			break;
		case 10:
			func_5132();
			break;
		case 11:
			func_5110();
			break;
	}
	func_5064();
	func_5060();
	func_5058();
	func_5055();
	func_5047();
	func_4943(&Local_150, &Local_149);
	func_4941();
	func_4940();
	func_4939();
	func_4938();
	func_538();
	func_536();
	func_534();
	func_528();
	func_523(0);
	func_522();
	func_512();
}

void func_512()//Position - 0x60197
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_4__::func_63(joaat("Main_RM")) && __LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (__LIB_5__::func_182(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
	{
		iVar0 = 36;
		func_517();
		if (Local_150.f_357[iVar0] != -1)
		{
			iVar1 = func_488(Local_150.f_357[iVar0]);
			iVar4 = -1;
			iVar2 = 0;
			while (iVar2 <= iVar1)
			{
				iVar3 = Local_150.f_746[iVar0];
				iVar4 = func_487(&Local_149, iVar0, iVar2, Local_150.f_1533);
				if (iVar4 != -1)
				{
					if (Global_2689235[iVar4 /*453*/].f_428.f_2 == 1)
					{
						iVar3 = Local_150.f_912[iVar0 /*15*/][0];
					}
					func_513(&(Local_150.f_583), NETWORK::PARTICIPANT_ID_TO_INT(), iVar3, iVar4);
				}
				iVar2++;
			}
		}
	}
}

void func_513(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x60267
{
	if (iParam2 == 0)
	{
		return;
	}
	__LIB_26__::func_516(uParam0, iParam2, iParam1, iParam3);
}

void func_517()//Position - 0x607FC
{
	if (BitTest(Local_149.f_0, 4))
	{
		if (!BitTest(uLocal_148[PLAYER::PLAYER_ID()], 3))
		{
			if (__LIB_25__::func_496(BitTest(Local_149.f_0, 5), joaat("hei_p_m_bag_var22_arm_s")))
			{
				MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 3);
			}
		}
	}
	else if (BitTest(uLocal_148[PLAYER::PLAYER_ID()], 3))
	{
		__LIB_25__::func_495(BitTest(Local_149.f_0, 5), joaat("hei_p_m_bag_var22_arm_s"));
		MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 3);
	}
}

void func_522()//Position - 0x60A45
{
	Global_1973079.f_63 = Local_150.f_356;
}

void func_523(int iParam0)//Position - 0x60A59
{
	if (BitTest(Global_1973079, 2))
	{
		if (!__LIB_5__::func_130())
		{
			if (!__LIB_0__::func_864(&(Local_150.f_737)) || iParam0)
			{
				__LIB_1__::func_333(577459505, 15, 0);
				__LIB_0__::func_795(&(Local_150.f_737), 0, 0);
				MISC::CLEAR_BIT(&Global_1973079, 2);
			}
			else if (__LIB_0__::func_937(&(Local_150.f_737), 120000, 0))
			{
				__LIB_0__::func_794(&(Local_150.f_737));
			}
		}
	}
}

void func_528()//Position - 0x60BBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_3__::func_853(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
		iVar1 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
		iVar2 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
		switch (iVar2)
		{
			case 1:
			case 16:
				if (func_530(0, func_532(iVar2, 0, iVar1, 1)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_912[iVar0 /*15*/][iVar1]))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_150.f_912[iVar0 /*15*/][iVar1]))
						{
							if (__LIB_4__::func_987(Local_150.f_912[iVar0 /*15*/][iVar1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_150.f_912[iVar0 /*15*/][iVar1], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
					}
				}
				if (func_530(32, func_532(iVar2, 32, iVar1, 0)) || func_530(11, func_532(iVar2, 11, iVar1, 0)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_912[iVar0 /*15*/][iVar1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_150.f_912[iVar0 /*15*/][iVar1]))
						{
							if (__LIB_4__::func_987(Local_150.f_912[iVar0 /*15*/][iVar1]))
							{
								ENTITY::DETACH_ENTITY(Local_150.f_912[iVar0 /*15*/][iVar1], false, true);
							}
						}
					}
				}
				break;
			}
	}
}

int func_530(int iParam0, float fParam1)//Position - 0x60D34
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	Var1.f_2 = 14;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&(Global_1973079.f_47)))
	{
		return 0;
	}
	if (iVar0 != -1)
	{
		iVar2 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
		func_531(iVar0, iParam0, iVar2, &Var1);
		iVar3 = __LIB_5__::func_166();
		if (iVar3 != -1)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1973079.f_47), Var1.f_1, 3))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar3))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar3) >= fParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_531(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x60DCB
{
	struct<5> Var0;
	func_7(iParam0, &Var0, 4);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(uParam3);
	Call_Loc(Var0.f_4);
}

float func_532(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x60DE9
{
	switch (iParam0)
	{
		case 1:
		case 16:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							if (bParam3)
							{
								if (!__LIB_1__::func_394())
								{
									return 0.356f;
								}
								else
								{
									return 0.422f;
								}
							}
							break;
						case 1:
							if (bParam3)
							{
								if (!__LIB_1__::func_394())
								{
									return 0.19f;
								}
								else
								{
									return 0.439f;
								}
							}
							break;
					}
					break;
				case 32:
					switch (iParam2)
					{
						case 0:
							if (!bParam3)
							{
								if (!__LIB_1__::func_394())
								{
									return 0.303f;
								}
								else
								{
									return 0.365f;
								}
							}
							break;
						case 1:
							if (!bParam3)
							{
								if (!__LIB_1__::func_394())
								{
									return 0.367f;
								}
								else
								{
									return 0.275f;
								}
							}
							break;
					}
					break;
				case 11:
					switch (iParam2)
					{
						case 0:
							if (!bParam3)
							{
								if (!__LIB_1__::func_394())
								{
									return 0.32f;
								}
								else
								{
									return 0.319f;
								}
							}
							break;
						case 1:
							if (!bParam3)
							{
								if (!__LIB_1__::func_394())
								{
									return 0.292f;
								}
								else
								{
									return 0.352f;
								}
							}
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_534()//Position - 0x60F5C
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		iVar1 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
		if (iVar1 != -1)
		{
			switch (iVar0)
			{
				case 17:
					func_535(iVar1);
					break;
				}
			}
	}
}

void func_535(int iParam0)//Position - 0x60F9A
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_912[iParam0 /*15*/][0]))
	{
		if (func_530(0, 0.1f))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_150.f_912[iParam0 /*15*/][0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_150.f_912[iParam0 /*15*/][0], true, false);
			}
		}
		else if (func_530(78, 0.8f) || func_530(11, 0.98f))
		{
			if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_150.f_912[iParam0 /*15*/][0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_150.f_912[iParam0 /*15*/][0], false, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_912[iParam0 /*15*/][1]))
	{
		if (func_530(0, 0.72f))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_150.f_912[iParam0 /*15*/][1]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_150.f_912[iParam0 /*15*/][1], true, false);
			}
		}
		else if (func_530(78, 0.24f) || func_530(11, 0.98f))
		{
			if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_150.f_912[iParam0 /*15*/][1]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_150.f_912[iParam0 /*15*/][1], false, false);
			}
		}
	}
}

void func_536()//Position - 0x610C6
{
	struct<103> Var0;
	int iVar1;
	int iVar2;
	if ((BitTest(Local_149.f_0, 2) || __LIB_5__::func_130()) || BitTest(Global_1973079, 3))
	{
		Var0.f_1 = 14;
		Var0.f_16 = 14;
		Var0.f_59 = 14;
		Var0.f_102 = 14;
		iVar1 = 0;
		while (iVar1 <= (__LIB_5__::func_132(Local_150.f_1533) - __LIB_5__::func_183(Local_150.f_1533, 0) + 1))
		{
			if (Local_150.f_357[iVar1] != -1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar1]))
				{
					func_6(Local_150.f_357[iVar1], &Var0);
					if (Var0.f_0 > 0)
					{
						iVar2 = 0;
						while (iVar2 <= (Var0.f_0 - 1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_149.f_168[iVar1 /*15*/][iVar2]))
							{
								NETWORK::SET_ENTITY_LOCALLY_VISIBLE(NETWORK::NET_TO_ENT(Local_149.f_168[iVar1 /*15*/][iVar2]));
							}
							iVar2++;
						}
					}
				}
			}
			iVar1++;
		}
	}
}

void func_538()//Position - 0x611C6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_162())
	{
		return;
	}
	if (BitTest(Global_1973079, 3))
	{
		bVar4 = false;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
		{
			iVar0 = __LIB_5__::func_118(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, iVar9, Local_150.f_1533);
			iVar1 = __LIB_4__::func_997(iVar0);
			StringCopy(&(Local_150.f_323), "", 64);
			if (func_4936(iVar9))
			{
			}
			else
			{
				if (Local_150.f_357[iVar9] != -1)
				{
					if (func_4935(Local_150.f_357[iVar9], &(Local_150.f_323), 0))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_150.f_323)))
						{
							bVar4 = true;
						}
						if (__LIB_3__::func_853(PLAYER::PLAYER_ID()))
						{
							if (__LIB_5__::func_35(PLAYER::PLAYER_ID()) == Local_150.f_357[iVar9])
							{
								bVar4 = false;
							}
						}
					}
				}
				if (bVar4)
				{
					if (!func_4934(iVar9, 5))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_150.f_323)))
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Local_150.f_323))) > 0)
							{
								if (__LIB_12__::func_909(Local_150.f_357[iVar9]))
								{
									if (!__LIB_5__::func_121(Local_150.f_357[iVar9]))
									{
										func_4931(iVar9, 0);
										func_4930(iVar9, 5);
										__LIB_5__::func_169(Local_150.f_357[iVar9], 1);
									}
								}
								else
								{
									MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(&(Local_150.f_323));
									func_4931(iVar9, 0);
									func_4930(iVar9, 5);
								}
							}
						}
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_150.f_323)))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Local_150.f_323))) < 1 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Local_150.f_323), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), true, 0))
						{
							if (__LIB_12__::func_909(Local_150.f_357[iVar9]))
							{
								if (__LIB_5__::func_121(Local_150.f_357[iVar9]))
								{
									__LIB_5__::func_169(Local_150.f_357[iVar9], 0);
								}
							}
						}
					}
				}
				if (iVar1 != 10)
				{
					if (iVar1 != -1 || !ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar9]))
					{
						if (iVar1 != Local_150.f_357[iVar9] || !ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar9]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar9]))
							{
								OBJECT::DELETE_OBJECT(&(Local_150.f_746[iVar9]));
								Local_150.f_357[iVar9] = -1;
							}
							else
							{
								Local_150.f_357[iVar9] = iVar1;
								func_550(Local_150.f_1533, iVar9, -1, &Var2, &fVar3, 0);
								if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var2, 1) < 1.5f)
								{
									if (!BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
									{
										Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar3, 0f, -1.5f, 0f) };
										TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var10, 1f, 7000, 40000f, 0.01f);
										MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
									}
								}
								else
								{
									MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
								}
								if (!BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
									{
										func_543(&Local_150, iVar9, 0);
									}
								}
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar9]))
					{
						OBJECT::DELETE_OBJECT(&(Local_150.f_746[iVar9]));
						Local_150.f_357[iVar9] = -1;
					}
				}
				else if (iVar1 != Local_150.f_357[iVar9] || (!ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar9]) && iVar1 == Local_150.f_357[iVar9]))
				{
					func_542(iVar9, &iVar5, &iVar6);
					iVar7 = iVar5;
					while (iVar7 <= iVar6)
					{
						if (iVar1 == 10)
						{
							iVar8++;
							if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar7]) && Local_150.f_357[iVar7] != 10)
							{
								OBJECT::DELETE_OBJECT(&(Local_150.f_746[iVar7]));
							}
							Local_150.f_357[iVar7] = 10;
							if (!ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar7]) && Local_150.f_357[iVar7] == 10)
							{
								func_550(Local_150.f_1533, iVar7, -1, &Var2, &fVar3, 0);
								if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var2, 1) < 1.5f)
								{
									if (!BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
									{
										Var11 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar3, 0f, -1.5f, 0f) };
										TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var11, 1f, 7000, 40000f, 0.01f);
										MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
									}
								}
								else
								{
									MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
								}
								if (!BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
									{
										func_543(&Local_150, iVar7, iVar8);
									}
								}
							}
						}
						iVar7++;
					}
				}
			}
			iVar9++;
		}
		if (func_540() && func_5466())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!BitTest(Local_149.f_0, 2))
				{
					MISC::SET_BIT(&Local_149, 2);
				}
			}
			func_539();
			MISC::CLEAR_BIT(&Global_1973079, 3);
		}
	}
}

void func_539()//Position - 0x616D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		func_4931(iVar0, 5);
		iVar0++;
	}
}

int func_540()//Position - 0x61701
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		iVar0 = __LIB_5__::func_118(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, iVar2, Local_150.f_1533);
		iVar1 = __LIB_4__::func_997(iVar0);
		if (iVar1 != -1)
		{
			if ((iVar1 != Local_150.f_357[iVar2] || !ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar2])) && !func_541(iVar1))
			{
				return 0;
			}
		}
		else if (iVar1 != Local_150.f_357[iVar2])
		{
			return 0;
		}
		iVar2++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(Local_149.f_0, 3))
		{
			MISC::SET_BIT(&Local_149, 3);
		}
	}
	return 1;
}

int func_541(int iParam0)//Position - 0x617B9
{
	switch (iParam0)
	{
		case 17:
		case 19:
			return 1;
		default:
	}
	return 0;
}

void func_542(int iParam0, int iParam1, int iParam2)//Position - 0x617D9
{
	switch (iParam0)
	{
		case 23:
		case 24:
		case 25:
		case 26:
			*iParam1 = 23;
			*iParam2 = 26;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			*iParam1 = 3;
			*iParam2 = 6;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			*iParam1 = 9;
			*iParam2 = 12;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
			*iParam1 = 17;
			*iParam2 = 20;
			break;
	}
}

void func_543(var uParam0, int iParam1, int iParam2)//Position - 0x6187A
{
	if (uParam0->f_357[iParam1] == 10)
	{
		Global_1973079.f_3[iParam1] = iParam2;
		uParam0->f_48 = iParam2;
	}
	if (uParam0->f_357[iParam1] != -1 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1]))
	{
		func_550(uParam0->f_1533, iParam1, uParam0->f_357[iParam1], &(uParam0->f_199[iParam1 /*3*/]), &(uParam0->f_157[iParam1]), 0);
		if (func_507(uParam0->f_357[iParam1]))
		{
			func_548(uParam0->f_357[iParam1], uParam0);
			if (__LIB_0__::func_799(uParam0->f_745))
			{
				if (!__LIB_0__::func_86(uParam0->f_199[iParam1 /*3*/]))
				{
					uParam0->f_746[iParam1] = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_745, uParam0->f_199[iParam1 /*3*/], false, false, true);
					if (func_546(uParam0->f_357[iParam1]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iParam1], true);
					}
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_746[iParam1], uParam0->f_199[iParam1 /*3*/], false, false, true);
					if (!func_545(uParam0->f_357[iParam1]))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_746[iParam1], false, false);
					}
					ENTITY::SET_ENTITY_HEADING(uParam0->f_746[iParam1], uParam0->f_157[iParam1]);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_746[iParam1], true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_746[iParam1], false);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_746[iParam1], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_745);
				}
			}
		}
		else if (__LIB_0__::func_114(uParam0->f_357[iParam1]))
		{
			func_548(uParam0->f_357[iParam1], uParam0);
			func_550(uParam0->f_1533, iParam1, uParam0->f_357[iParam1], &(uParam0->f_199[iParam1 /*3*/]), &(uParam0->f_157[iParam1]), 0);
			uParam0->f_746[iParam1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(uParam0->f_199[iParam1 /*3*/], 10f, uParam0->f_745, false, false, false);
		}
	}
}

int func_545(int iParam0)//Position - 0x61A5B
{
	switch (iParam0)
	{
		case 18:
		case 17:
			return 0;
		default:
	}
	return 1;
}

int func_546(int iParam0)//Position - 0x61A7B
{
	switch (iParam0)
	{
		case 18:
		case 17:
			return 1;
		default:
	}
	return 0;
}

void func_548(int iParam0, var uParam1)//Position - 0x61AC5
{
	var uVar0;
	func_7(iParam0, &uVar0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(uVar0);
}

void func_550(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, bool bParam5)//Position - 0x61B17
{
	int iVar0;
	iVar0 = __LIB_2__::func_717(PLAYER::PLAYER_ID());
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 12:
							*uParam3 = { 2731.353f, -371.671f, -50f };
							*fParam4 = 0f;
							break;
						case 14:
							*uParam3 = { 2731.353f, -371.671f, -49.99f };
							*fParam4 = 0f;
							break;
						case 13:
							*uParam3 = { 2731.353f, -371.401f, -50f };
							*fParam4 = 0f;
							break;
						default:
							*uParam3 = { 2731.353f, -371.489f, -50f };
							*fParam4 = 0f;
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 12:
							*uParam3 = { 2733.5f, -371.671f, -50f };
							*fParam4 = 0f;
							break;
						case 14:
							*uParam3 = { 2733.5f, -371.671f, -49.99f };
							*fParam4 = 0f;
							break;
						case 13:
							*uParam3 = { 2733.5f, -371.401f, -50f };
							*fParam4 = 0f;
							break;
						default:
							*uParam3 = { 2733.5f, -371.489f, -50f };
							*fParam4 = 0f;
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 12:
							*uParam3 = { 2735.393f, -371.681f, -50f };
							*fParam4 = 0f;
							break;
						case 14:
							*uParam3 = { 2735.393f, -371.681f, -49.99f };
							*fParam4 = 0f;
							break;
						case 13:
							*uParam3 = { 2735.393f, -371.401f, -50f };
							*fParam4 = 0f;
							break;
						default:
							*uParam3 = { 2735.393f, -371.489f, -50f };
							*fParam4 = 0f;
							break;
					}
					break;
				case 33:
					*uParam3 = { 2730.043f, -374.551f, -50f };
					*fParam4 = 90f;
					break;
				case 32:
					*uParam3 = { 2730.043f, -375.461f, -50f };
					*fParam4 = 90f;
					break;
				case 31:
					switch (iParam2)
					{
						case 1:
						case 16:
							*uParam3 = { 2730.474f, -377.572f, -50f };
							*fParam4 = 90f;
							break;
						case 5:
						case 3:
						case 4:
							*uParam3 = { 2730.444f, -377.692f, -50f };
							*fParam4 = 90f;
							break;
						case 12:
							*uParam3 = { 2730.404f, -377.572f, -50f };
							*fParam4 = 90f;
							break;
						case 14:
							*uParam3 = { 2730.404f, -377.572f, -49.99f };
							*fParam4 = 90f;
							break;
						case 13:
							*uParam3 = { 2730.094f, -377.572f, -50f };
							*fParam4 = 90f;
							break;
						default:
							*uParam3 = { 2730.144f, -377.562f, -50f };
							*fParam4 = 90f;
							break;
					}
					break;
				case 30:
					switch (iParam2)
					{
						case 1:
						case 16:
							*uParam3 = { 2730.474f, -377.572f, -50f };
							*fParam4 = 90f;
							break;
						case 5:
						case 3:
						case 4:
							*uParam3 = { 2730.444f, -377.692f, -50f };
							*fParam4 = 90f;
							break;
						case 12:
							*uParam3 = { 2730.404f, -377.572f, -50f };
							*fParam4 = 90f;
							break;
						case 14:
							*uParam3 = { 2730.404f, -377.572f, -49.99f };
							*fParam4 = 90f;
							break;
						case 13:
							*uParam3 = { 2730.094f, -377.572f, -50f };
							*fParam4 = 90f;
							break;
						default:
							*uParam3 = { 2730.144f, -378.494f, -50f };
							*fParam4 = 90f;
							break;
					}
					break;
				case 29:
					*uParam3 = { 2729.147f, -379.508f, -50f };
					*fParam4 = 0f;
					break;
				case 28:
					*uParam3 = { 2728.201f, -379.508f, -50f };
					*fParam4 = 0f;
					break;
				case 27:
					*uParam3 = { 2727.211f, -379.508f, -50f };
					*fParam4 = 0f;
					break;
				case 26:
					*uParam3 = { 2726.251f, -379.508f, -50f };
					*fParam4 = 0f;
					break;
				case 25:
					*uParam3 = { 2725.291f, -379.508f, -50f };
					*fParam4 = 0f;
					break;
				case 24:
					*uParam3 = { 2724.33f, -379.508f, -50f };
					*fParam4 = 0f;
					break;
				case 23:
					*uParam3 = { 2723.36f, -379.508f, -50f };
					*fParam4 = 0f;
					break;
				case 12:
					*uParam3 = { 2732.556f, -387.504f, -50f };
					if (!bParam5)
					{
						*fParam4 = -135f;
					}
					else
					{
						*fParam4 = -225f;
					}
					break;
				case 11:
					*uParam3 = { 2733.226f, -386.83f, -50f };
					if (!bParam5)
					{
						*fParam4 = -135f;
					}
					else
					{
						*fParam4 = -225f;
					}
					break;
				case 10:
					*uParam3 = { 2733.891f, -386.164f, -50f };
					if (!bParam5)
					{
						*fParam4 = -135f;
					}
					else
					{
						*fParam4 = -225f;
					}
					break;
				case 9:
					*uParam3 = { 2734.327f, -385.089f, -50f };
					*fParam4 = -90f;
					break;
				case 8:
					switch (iParam2)
					{
						case 1:
						case 16:
							*uParam3 = { 2733.95f, -382.63f, -50f };
							*fParam4 = -90f;
							break;
						case 5:
						case 3:
						case 4:
							*uParam3 = { 2733.93f, -382.84f, -50f };
							*fParam4 = -90f;
							break;
						case 12:
							*uParam3 = { 2734.147f, -382.62f, -50f };
							*fParam4 = -90f;
							break;
						case 14:
							*uParam3 = { 2734.147f, -382.62f, -49.99f };
							*fParam4 = -90f;
							break;
						case 13:
							*uParam3 = { 2734.357f, -382.62f, -50f };
							*fParam4 = -90f;
							break;
						default:
							*uParam3 = { 2734.237f, -383.259f, -50f };
							*fParam4 = -90f;
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 1:
						case 16:
							*uParam3 = { 2733.95f, -382.63f, -50f };
							*fParam4 = -90f;
							break;
						case 5:
						case 3:
						case 4:
							*uParam3 = { 2733.93f, -382.9f, -50f };
							*fParam4 = -90f;
							break;
						case 12:
							*uParam3 = { 2734.147f, -382.62f, -50f };
							*fParam4 = -90f;
							break;
						case 14:
							*uParam3 = { 2734.147f, -382.62f, -49.99f };
							*fParam4 = -90f;
							break;
						case 13:
							*uParam3 = { 2734.357f, -382.62f, -50f };
							*fParam4 = -90f;
							break;
						default:
							*uParam3 = { 2734.237f, -382.289f, -50f };
							*fParam4 = -90f;
							break;
					}
					break;
				case 6:
					*uParam3 = { 2733.8096f, -377.882f, -50f };
					*fParam4 = -90f;
					break;
				case 5:
					*uParam3 = { 2733.8096f, -376.9826f, -50f };
					*fParam4 = -90f;
					break;
				case 4:
					*uParam3 = { 2733.8096f, -376.0827f, -50f };
					*fParam4 = -90f;
					break;
				case 3:
					*uParam3 = { 2733.8096f, -375.1803f, -50f };
					*fParam4 = -90f;
					break;
				case 19:
					*uParam3 = { 2729.6401f, -383.07f, -50f };
					*fParam4 = 180f;
					break;
				case 20:
					*uParam3 = { 2728.7383f, -383.07f, -50f };
					*fParam4 = 180f;
					break;
				case 22:
					switch (iParam2)
					{
						case 11:
							*uParam3 = { 2727.888f, -383.899f, -50f };
							*fParam4 = -90f;
							break;
						default:
							*uParam3 = { 2728.3484f, -383.899f, -50f };
							*fParam4 = -90f;
							break;
					}
					break;
				case 17:
					*uParam3 = { 2728.7383f, -384.72f, -50f };
					*fParam4 = 0f;
					break;
				case 18:
					*uParam3 = { 2729.6382f, -384.72f, -50f };
					*fParam4 = 0f;
					break;
				case 21:
					switch (iParam2)
					{
						case 11:
							*uParam3 = { 2730.479f, -383.899f, -50f };
							*fParam4 = 90f;
							break;
						default:
							*uParam3 = { 2730.1494f, -383.899f, -50f };
							*fParam4 = 90f;
							break;
					}
					break;
				case 13:
					switch (iParam2)
					{
						case 1:
						case 5:
						case 3:
						case 4:
						case 16:
							*uParam3 = { 2738.078f, -385.993f, -49.41f };
							*fParam4 = -90f;
							break;
						case 12:
							*uParam3 = { 2738.177f, -385.993f, -49.41f };
							*fParam4 = -90f;
							break;
						case 14:
							*uParam3 = { 2738.467f, -385.969f, -49.396f };
							*fParam4 = -90f;
							break;
						case 13:
							*uParam3 = { 2738.467f, -385.969f, -49.41f };
							*fParam4 = -90f;
							break;
						default:
							*uParam3 = { 2738.437f, -385.319f, -49.41f };
							*fParam4 = -90f;
							break;
					}
					break;
				case 14:
					switch (iParam2)
					{
						case 1:
						case 5:
						case 3:
						case 4:
						case 16:
							*uParam3 = { 2738.078f, -385.993f, -49.41f };
							*fParam4 = -90f;
							break;
						case 12:
							*uParam3 = { 2738.177f, -385.993f, -49.41f };
							*fParam4 = -90f;
							break;
						case 14:
							*uParam3 = { 2738.177f, -385.969f, -49.396f };
							*fParam4 = -90f;
							break;
						case 13:
							*uParam3 = { 2738.177f, -385.969f, -49.41f };
							*fParam4 = -90f;
							break;
						default:
							*uParam3 = { 2738.437f, -386.659f, -49.41f };
							*fParam4 = -90f;
							break;
					}
					break;
				case 15:
					switch (iParam2)
					{
						case 1:
						case 16:
							*uParam3 = { 2731.237f, -391.719f, -49.41f };
							*fParam4 = 180f;
							break;
						case 5:
						case 3:
						case 4:
							*uParam3 = { 2731.607f, -391.659f, -49.41f };
							*fParam4 = 180f;
							break;
						case 12:
							*uParam3 = { 2731.607f, -391.839f, -49.41f };
							*fParam4 = 180f;
							break;
						case 14:
							*uParam3 = { 2731.297f, -392.009f, -49.396f };
							*fParam4 = 180f;
							break;
						case 13:
							*uParam3 = { 2731.297f, -392.009f, -49.41f };
							*fParam4 = 180f;
							break;
						default:
							*uParam3 = { 2731.697f, -392.009f, -49.41f };
							*fParam4 = 180f;
							break;
					}
					break;
				case 16:
					switch (iParam2)
					{
						case 1:
						case 16:
							*uParam3 = { 2731.237f, -391.719f, -49.41f };
							*fParam4 = 180f;
							break;
						case 5:
						case 3:
						case 4:
							*uParam3 = { 2731.607f, -391.659f, -49.41f };
							*fParam4 = 180f;
							break;
						case 12:
							*uParam3 = { 2731.607f, -391.839f, -49.41f };
							*fParam4 = 180f;
							break;
						case 14:
							*uParam3 = { 2731.297f, -392.009f, -49.396f };
							*fParam4 = 180f;
							break;
						case 13:
							*uParam3 = { 2731.297f, -392.009f, -49.41f };
							*fParam4 = 180f;
							break;
						default:
							*uParam3 = { 2730.487f, -392.009f, -49.41f };
							*fParam4 = 180f;
							break;
					}
					break;
				case 34:
					*uParam3 = { 2730.043f, -373.551f, -50f };
					*fParam4 = 90f;
					break;
				case 35:
					*uParam3 = { 2693.017f, -372.428f, -54.442f };
					*fParam4 = -180f;
					break;
				case 36:
					*uParam3 = { 2687.497f, -370.42f, -54.45f };
					*fParam4 = 90f;
					break;
				case 37:
					*uParam3 = { 2696.054f, -368.974f, -55.78f };
					*fParam4 = 135f;
					break;
				case 38:
					*uParam3 = { 2696.054f, -370.124f, -55.78f };
					*fParam4 = 45f;
					break;
				case 39:
					*uParam3 = { 2694.954f, -370.074f, -55.78f };
					*fParam4 = -45f;
					break;
				case 40:
					*uParam3 = { 2694.954f, -368.974f, -55.78f };
					*fParam4 = -135f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 3:
						case 4:
						case 5:
							*uParam3 = { -1349.791f, 145.681f, -100.197f };
							*fParam4 = -180f;
							break;
					}
					break;
				case 1:
					*uParam3 = { -1354.709f, 144.414f, -96.125f };
					*fParam4 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam3 = { func_4926(-1.6217f, 11.999f, 8.596f, iVar0) };
					*fParam4 = func_551(0.199997f, iVar0);
					break;
				case 1:
					*uParam3 = { func_4926(3.15086f, -8.38502f, 8.596f, iVar0) };
					*fParam4 = func_551(89.479996f, iVar0);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = { -1007.562f, -84.96226f, -100.4084f };
					*fParam4 = 180f;
					break;
			}
			break;
	}
}

float func_551(float fParam0, int iParam1)//Position - 0x62A02
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_552(iParam1, &uVar2, &uVar0, &fVar1, 0);
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

void func_552(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x62A4C
{
	struct<31> Var0;
	func_553(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_553(int iParam0, var uParam1, int iParam2)//Position - 0x62A6C
{
	func_4921(uParam1, iParam2);
	func_4915(uParam1, iParam2);
	func_4907(uParam1, iParam2);
	func_554(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_554(int iParam0, var uParam1, int iParam2)//Position - 0x62A9A
{
	switch (iParam0)
	{
		case 0:
			func_4834(uParam1, iParam2);
			break;
		case 1:
			func_4701(uParam1, iParam2);
			break;
		case 2:
			func_4624(uParam1, iParam2);
			break;
		case 3:
			func_4546(uParam1, iParam2);
			break;
		case 4:
			func_4372(uParam1, iParam2);
			break;
		case 5:
			func_4206(uParam1, iParam2);
			break;
		case 6:
			func_4141(uParam1, iParam2);
			break;
		case 7:
			func_3974(uParam1, iParam2);
			break;
		case 8:
			func_3800(uParam1, iParam2);
			break;
		case 9:
			func_3555(uParam1, iParam2);
			break;
		case 10:
			func_3477(uParam1, iParam2);
			break;
		case 11:
			func_3246(uParam1, iParam2);
			break;
		case 12:
			func_3100(uParam1, iParam2);
			break;
		case 13:
			func_2932(uParam1, iParam2);
			break;
		case 14:
			func_2757(uParam1, iParam2);
			break;
		case 15:
			func_2578(uParam1, iParam2);
			break;
		case 16:
			func_2468(uParam1, iParam2);
			break;
		case 17:
			func_2219(uParam1, iParam2);
			break;
		case 18:
			func_2125(uParam1, iParam2);
			break;
		case 19:
			func_2001(uParam1, iParam2);
			break;
		case 20:
			func_1697(uParam1, iParam2);
			break;
		case 21:
			func_1576(uParam1, iParam2);
			break;
		case 22:
			func_1404(uParam1, iParam2);
			break;
		case 23:
			func_1181(uParam1, iParam2);
			break;
		case 24:
			func_555(uParam1, iParam2);
			break;
	}
}

void func_555(var uParam0, int iParam1)//Position - 0x62C52
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 582055/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 582041/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 581945/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 580610/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 580381/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 580369/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 580359/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 580172/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 580125/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 580097/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 579788/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 579779/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 577111/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 577102/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 570622/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 569747/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 569630/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 569574/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 569421/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 569278/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 569196/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 567423/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 566226/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 509574/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 507775/*__LIB_9__::func_260*/;
			break;
		case 19:
			uParam0->f_17 = 507626/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 507601/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 507381/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 505940/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 505750/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 504415/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 504298/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 504255/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 504221/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 504213/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 501226/*func_907*/;
			break;
		case 27:
			uParam0->f_25 = 501218/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 501210/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 501060/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 500845/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 499852/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 499797/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 499786/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 496034/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 495989/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 474878/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 474869/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 474860/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 474852/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 474829/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 474783/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 474651/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 473509/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 473491/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 473142/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 473040/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 473029/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 472903/*func_857*/;
			break;
		case 54:
			uParam0->f_45 = 472516/*func_856*/;
			break;
		case 56:
			uParam0->f_46 = 472497/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 471253/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 471127/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 469464/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 469455/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 469444/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 469318/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 469310/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 469296/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 469288/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 467693/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 466958/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 466818/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 465613/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 465604/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 465592/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 465583/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 465571/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 465089/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 465080/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 423389/*func_684*/;
			break;
		case 87:
			uParam0->f_1 = 419552/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 419543/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 419535/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 418613/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 418579/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 416739/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 414695/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 412897/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 412888/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 412879/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 412870/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 412862/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 412854/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 412740/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 412586/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 411918/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 411909/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 411900/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 407480/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 407471/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 407344/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 407289/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 406374/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 406365/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 406357/*__LIB_0__::func_467*/;
			break;
	}
}

int func_684(int iParam0, var uParam1)//Position - 0x675DD
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
			func_699(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_693(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

int func_693(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x67D52
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
						func_694(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_694(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x67EB4
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
		if (func_696(iParam1) || __LIB_1__::func_554(iParam1))
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

int func_696(int iParam0)//Position - 0x68014
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_114(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_699(int iParam0, var uParam1, int iParam2)//Position - 0x68102
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
				func_693(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
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

void func_856(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x735C4
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
Vector3 func_857(int iParam0)//Position - 0x73747
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

void func_907(int iParam0, int iParam1)//Position - 0x7A5EA
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
		func_918(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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

void func_918(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x7AC48
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
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_919(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_919(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
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
int func_919(bool bParam0)//Position - 0x7AE83
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

void func_1181(var uParam0, int iParam1)//Position - 0x8E1B0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 638411/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 638402/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 638323/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 637689/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 637423/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 637411/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 637312/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 637183/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 637136/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 637101/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 636982/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 636954/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 636944/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 634793/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 634784/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 632243/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 632235/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 632226/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 632217/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 632155/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 632074/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 631721/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 627288/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 626150/*__LIB_9__::func_261*/;
			break;
		case 19:
			uParam0->f_17 = 626126/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 626117/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 625986/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 625882/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 625866/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 625716/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 625708/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 617882/*func_1307*/;
			break;
		case 25:
			uParam0->f_23 = 616833/*func_1303*/;
			break;
		case 27:
			uParam0->f_25 = 616619/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 616581/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 616558/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 615799/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 615773/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 615659/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 615541/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 615492/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 606654/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 606606/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 595513/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 595504/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 595495/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 595487/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 595476/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 595359/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 594426/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 594417/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 594248/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 594239/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 594228/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 594205/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 594157/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 594139/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 594097/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 594055/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 593926/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 593917/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 593906/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 593883/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 593874/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 593833/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 593825/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 593817/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 593546/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 593476/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 592804/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 592795/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 592783/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 592563/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 592551/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 592015/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 591900/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 590997/*func_1224*/;
			break;
		case 87:
			uParam0->f_1 = 588366/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 588357/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 588349/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 588340/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 588331/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 588322/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 588314/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 588306/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 588271/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 588262/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 586324/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 586315/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 586306/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 585086/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 585004/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 584987/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 584955/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 583739/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 583730/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 583722/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1224(int iParam0, var uParam1)//Position - 0x90495
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
			func_699(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_693(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1303(int iParam0, int iParam1)//Position - 0x96981
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
	func_918(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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

void func_1307(var uParam0, var uParam1)//Position - 0x96D9A
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
			__LIB_8__::func_959(uParam0, uParam1);
			break;
		case 1:
			func_1308(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1308(var uParam0, var uParam1)//Position - 0x96DF0
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
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
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
			__LIB_8__::func_233(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_5__::func_460(0, 1, 1);
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

void func_1404(var uParam0, int iParam1)//Position - 0x9BDD4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 678772/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 678758/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 678667/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 678450/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 678293/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 678281/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 678271/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 678158/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 678111/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 678083/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 677995/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 677986/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 676241/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 676232/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 672239/*func_1552*/;
			break;
		case 8:
			uParam0->f_37 = 671762/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 671663/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 671654/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 671592/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 671511/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 670613/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 667334/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 666095/*__LIB_9__::func_263*/;
			break;
		case 19:
			uParam0->f_17 = 666071/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 665857/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 665793/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 665689/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 665673/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 665571/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 665563/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 661568/*func_1503*/;
			break;
		case 25:
			uParam0->f_23 = 661118/*func_1500*/;
			break;
		case 27:
			uParam0->f_25 = 661110/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 661102/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 660465/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 660339/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 659465/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 659262/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 659109/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 657497/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 657452/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 648413/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 648404/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 648395/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 648387/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 648364/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 648315/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 648178/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 648160/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 647328/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 647226/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 647215/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 647062/*func_1455*/;
			break;
		case 54:
			uParam0->f_45 = 646829/*func_1454*/;
			break;
		case 56:
			uParam0->f_46 = 646820/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 646407/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 646254/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 646245/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 646236/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 646225/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 646214/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 646205/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 646197/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 645141/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 644921/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 644846/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 644157/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 644148/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 644136/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 644044/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 644032/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 643665/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 643656/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 642864/*func_1428*/;
			break;
		case 87:
			uParam0->f_1 = 641486/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 641477/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 641469/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 641460/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 641451/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 641442/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 641434/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 641426/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 641414/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 641405/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 586324/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 641396/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 641387/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 640167/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 639995/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 639986/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 639978/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1428(int iParam0, var uParam1)//Position - 0x9CF30
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
			func_699(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_693(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1454(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x9DEAD
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
Vector3 func_1455(int iParam0)//Position - 0x9DF96
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

void func_1500(int iParam0, int iParam1)//Position - 0xA167E
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
		func_918(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1503(var uParam0, var uParam1)//Position - 0xA1840
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1506(uParam0, uParam1);
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

void func_1506(var uParam0, var uParam1)//Position - 0xA191F
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_262(uParam0, uParam1);
			break;
		case 1:
			func_1519(uParam0, uParam1);
			break;
		case 2:
			__LIB_16__::func_187(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1519(var uParam0, var uParam1)//Position - 0xA250C
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1552(int iParam0, var uParam1, int iParam2)//Position - 0xA41EF
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
				func_918(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1576(var uParam0, int iParam1)//Position - 0xA5B7D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 695094/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 695085/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 695017/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 694579/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 694431/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 694418/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 694193/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 694103/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 694083/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 693978/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 693953/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 693940/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 693876/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 693867/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 693330/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 693321/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 692426/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 692418/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 692409/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 692400/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 692338/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 692257/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 691930/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 691921/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 691911/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 691901/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 691859/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 691850/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 691802/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 691647/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 691638/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 691536/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 691528/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 691101/*func_1652*/;
			break;
		case 27:
			uParam0->f_25 = 691093/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 691085/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 691050/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 691024/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 690857/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 690834/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 687219/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 687174/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 683980/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 683971/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 683962/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 683954/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 683943/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 683781/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 682544/*func_1626*/;
			break;
		case 49:
			uParam0->f_8 = 682535/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 682110/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 682101/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 682090/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 682067/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 682059/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 682050/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 682037/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 681995/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 681986/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 681977/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 681966/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 681955/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 681946/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 681938/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 681930/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 681317/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 681247/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 680558/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 680549/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 680537/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 680528/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 680516/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 680507/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 680498/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 680489/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 680480/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 680471/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 680463/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 680454/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 680445/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 680436/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 680428/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 680420/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 680408/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 680399/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 586324/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 680390/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 680381/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 640167/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 680373/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 680364/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 680356/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1626(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA6A30
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
			func_918(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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

void func_1652(int iParam0, int iParam1)//Position - 0xA8B9D
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_918(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1697(var uParam0, int iParam1)//Position - 0xA9B3F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 755528/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 755472/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 754810/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 754683/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 754649/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 754638/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 754574/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 754551/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 754542/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 754426/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 754329/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 754320/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 753930/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 753617/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 751704/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 751695/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 751686/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 751303/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 747385/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 746648/*__LIB_9__::func_267*/;
			break;
		case 19:
			uParam0->f_17 = 746623/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 746454/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 746391/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 746239/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 746157/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 745220/*func_1937*/;
			break;
		case 30:
			uParam0->f_8 = 743892/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 743310/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 742075/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 742066/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 739299/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 739246/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 733791/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 733782/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 733773/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 733765/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 733742/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 733690/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 733665/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 733627/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 733553/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 733542/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 733463/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 733455/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 733446/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 733436/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 733189/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 732024/*__LIB_9__::func_756*/;
			break;
		case 65:
			uParam0->f_21 = 730831/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 729723/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 729547/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 727887/*__LIB_7__::func_836*/;
			break;
		case 69:
			*uParam0 = 727878/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 727866/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 727857/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 727845/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 727012/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 727003/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 726331/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 725458/*func_1839*/;
			break;
		case 87:
			uParam0->f_1 = 724245/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 724225/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 724131/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 724000/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 723354/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 722586/*func_1821*/;
			break;
		case 94:
			uParam0->f_1 = 722033/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 721441/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 721083/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 720990/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 720120/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 701159/*func_1746*/;
			break;
		case 100:
			uParam0->f_22 = 698421/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 697266/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 697058/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 696618/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 696609/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 696497/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 696454/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1746(var uParam0, var uParam1)//Position - 0xAB2E7
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
		func_1761(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_699(&iVar9, &(uParam1->f_109), 4);
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

int func_1761(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xABC8C
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_694(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1762(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1762(var uParam0, int iParam1)//Position - 0xABCEA
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
		func_1766(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1766(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xABE07
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
					if (__LIB_6__::func_447(&Global_78200, *uParam0, bParam1))
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
								if (!func_696(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_3__::func_310(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
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
										func_112(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_112(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_307(*uParam0);
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
											func_217(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_217(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_217(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_217(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_1769(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_245(*uParam0, bVar24, 0, iVar25);
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

void func_1769(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xAD3F5
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
		bVar2 = func_283(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_274(iParam0, iParam3);
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

int func_1821(var uParam0, var uParam1)//Position - 0xB069A
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
			func_699(&iVar2, &(uParam1->f_109), 4);
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
			func_1761(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_1839(int iParam0, var uParam1)//Position - 0xB11D2
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
		if (func_1761(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
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
		func_699(&iVar1, &(uParam1->f_109), 32);
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

void func_1937(int iParam0, int iParam1)//Position - 0xB5F04
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
						func_1938(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1938(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1938(int iParam0, bool bParam1)//Position - 0xB6193
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

void func_2001(var uParam0, int iParam1)//Position - 0xB8751
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 776686/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 776677/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 776609/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 776285/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 776124/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 776111/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 776047/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 776038/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 775702/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 775693/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 774969/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 774961/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 774952/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 774943/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 774930/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 774921/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 774842/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 774498/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 774489/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 773964/*__LIB_6__::func_949*/;
			break;
		case 19:
			uParam0->f_17 = 773910/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 773822/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 773802/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 773775/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 773753/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 773744/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 773641/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 773633/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 773625/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 772864/*func_2083*/;
			break;
		case 27:
			uParam0->f_25 = 772856/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 772848/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 772737/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 772691/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 772622/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 772599/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 768521/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 768464/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 762246/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 762237/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 762228/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 762220/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 762209/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 762096/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 761021/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 761012/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 760615/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 760606/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 760596/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 760573/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 760077/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 760068/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 760059/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 760017/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 760008/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 759999/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 759988/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 759977/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 759968/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 759960/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 759952/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 759642/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 759572/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 758883/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 758874/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 758862/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 758853/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 758841/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 758832/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 758823/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 758814/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 758805/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 758796/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 758788/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 758763/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 758653/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 757936/*func_2012*/;
			break;
		case 100:
			uParam0->f_22 = 757236/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 757108/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 757096/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 757087/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 586324/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 757078/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 757069/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 640167/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 757061/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 757052/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 757044/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2012(var uParam0, var uParam1)//Position - 0xB90B0
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
		func_1761(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_2083(int iParam0, int iParam1)//Position - 0xBCB00
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
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_919(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_919(iVar7))
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
					else if ((!bVar1 && !bVar0) && !func_2084())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_2084()//Position - 0xBCD8E
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2125(var uParam0, int iParam1)//Position - 0xBD9F7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 784984/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 784975/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 784903/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 784668/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 784617/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 784604/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 784540/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 784531/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 784091/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 784082/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 783416/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 783408/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 783399/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 783390/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 783328/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 783248/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 782879/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 782870/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 782860/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 782850/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 782841/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 782832/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 782810/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 782801/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 782789/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 782781/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 782773/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 782765/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 782757/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 782749/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 782714/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 782688/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 782618/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 782595/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 782499/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 782454/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 779941/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 779932/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 779923/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 779915/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 779904/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 779862/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 779754/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 779745/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 779542/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 779533/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 779522/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 779499/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 779491/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 779482/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 779469/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 779427/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 779418/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 779409/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 779398/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 779387/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 779378/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 779370/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 779362/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 779129/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 779059/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 778370/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 778361/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 778349/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 778340/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 778328/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 778319/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 778310/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 778301/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 778292/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 778283/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 778275/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 778266/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 778257/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 778248/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 778240/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 778232/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 778220/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 778211/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 586324/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 778202/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 778193/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 640167/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 778185/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 778176/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 778168/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2219(var uParam0, int iParam1)//Position - 0xBFA61
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 863791/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 863777/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 863621/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 863151/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 862952/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 862830/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 862820/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 862684/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 862641/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 862557/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 862463/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 862454/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 861276/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 861267/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 854879/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 854579/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 854522/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 854278/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 854216/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 854136/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 853416/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 850221/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 847920/*__LIB_9__::func_269*/;
			break;
		case 19:
			uParam0->f_17 = 847895/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 847719/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 847655/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 847551/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 847535/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 847432/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 847385/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 847348/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 845305/*func_2400*/;
			break;
		case 25:
			uParam0->f_23 = 844983/*func_2398*/;
			break;
		case 30:
			uParam0->f_8 = 844126/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 843996/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 843424/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 843369/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 840883/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 840826/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 813858/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 813849/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 813840/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 813832/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 813809/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 813737/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 813609/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 813583/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 812896/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 812626/*__LIB_6__::func_955*/;
			break;
		case 52:
			uParam0->f_15 = 812615/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 812453/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 811929/*func_2363*/;
			break;
		case 56:
			uParam0->f_46 = 811911/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 811659/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 811497/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 811079/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 811064/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 811053/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 810891/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 810712/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 810685/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 809150/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 807763/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 807404/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 807290/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 806388/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 806379/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 806367/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 805823/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 805811/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 805623/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 805614/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 804028/*func_2327*/;
			break;
		case 87:
			uParam0->f_1 = 802511/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 802502/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 802494/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 802464/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 802019/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 796221/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 787658/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 786717/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 786706/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 786697/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 786688/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 786679/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 786507/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 786484/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2327(int iParam0, var uParam1)//Position - 0xC44BC
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
			func_699(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_693(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2363(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xC6399
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
								func_2364(iParam2, 18);
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
void func_2364(var uParam0, int iParam1)//Position - 0xC6512
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2398(int iParam0, int iParam1)//Position - 0xCE4B7
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
		func_918(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2400(var uParam0, var uParam1)//Position - 0xCE5F9
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2404(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2402(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2402(var uParam0, var uParam1)//Position - 0xCE682
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2404(var uParam0, var uParam1)//Position - 0xCE7A0
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_268(uParam0, uParam1);
			break;
		case 1:
			func_2409(uParam0, uParam1);
			break;
		case 2:
			__LIB_16__::func_186(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2409(var uParam0, var uParam1)//Position - 0xCEB21
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2468(var uParam0, int iParam1)//Position - 0xD2E38
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 880003/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 879994/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 879926/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 879482/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 879377/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 879364/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 879300/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 879291/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 878830/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 878821/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 878438/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 878430/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 878421/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 878397/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 878335/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 878256/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 877959/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 877950/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 877940/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 877915/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 877906/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 877897/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 877875/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 877866/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 877858/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 877850/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 877842/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 877510/*func_2540*/;
			break;
		case 27:
			uParam0->f_25 = 877502/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 877494/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 877173/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 877147/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 877078/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 873346/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 873301/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 870134/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 870125/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 870116/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 870108/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 870097/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 869984/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 868861/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 868852/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 868843/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 868834/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 868823/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 868812/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 868804/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 868795/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 868786/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 868744/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 868735/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 868726/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 868715/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 868704/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 868695/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 868687/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 868679/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 868376/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 868302/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 867653/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 867644/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 867636/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 867627/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 867615/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 867181/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 867156/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 867139/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 866597/*func_2490*/;
			break;
		case 87:
			uParam0->f_1 = 865556/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 865547/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 865539/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 865530/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 865521/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 865512/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 865504/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 865496/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 865484/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 865475/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 865172/*__LIB_7__::func_798*/;
			break;
	}
}

int func_2490(var uParam0, var uParam1)//Position - 0xD3925
{
	return func_2491(uParam1);
}

int func_2491(var uParam0)//Position - 0xD3933
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
			func_699(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_693(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2540(int iParam0, int iParam1)//Position - 0xD63C6
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
		func_918(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2578(var uParam0, int iParam1)//Position - 0xD6D8C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 915125/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 915102/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 914972/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 914309/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 914046/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 914033/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 914023/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 913826/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 913778/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 913742/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 913627/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 913618/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 912688/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 912679/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 911548/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 911504/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 911481/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 911457/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 911395/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 911316/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 910642/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 907360/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 906429/*__LIB_9__::func_272*/;
			break;
		case 19:
			uParam0->f_17 = 906385/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 906212/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 906127/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 905987/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 905971/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 905868/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 905821/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 905784/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 904376/*func_2687*/;
			break;
		case 25:
			uParam0->f_23 = 904010/*func_2684*/;
			break;
		case 27:
			uParam0->f_25 = 903196/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 903155/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 902920/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 902595/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 902401/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 902295/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 901979/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 896982/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 896925/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 890721/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 890712/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 890703/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 890695/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 890672/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 890659/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 890356/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 888122/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 888074/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 887882/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 887873/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 887862/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 887820/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 887812/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 887803/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 887794/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 887752/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 887743/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 887734/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 887723/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 887693/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 887684/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 887676/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 886590/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 886249/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 886135/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 885307/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 885298/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 885286/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 885194/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 885182/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 884994/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 884985/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 884971/*func_2617*/;
			break;
		case 87:
			uParam0->f_1 = 884955/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 884946/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 884938/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 884929/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 884483/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 883021/*func_2599*/;
			break;
		case 100:
			uParam0->f_22 = 882142/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 881965/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 881953/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 881939/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 586324/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 640167/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 881930/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 881829/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 881804/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 881632/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 881605/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2599(int iParam0, var uParam1)//Position - 0xD794D
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2600(iParam0, uParam1);
	}
	return 1;
}

int func_2600(int iParam0, var uParam1)//Position - 0xD796A
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
		if (func_694(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_2617(var uParam0, var uParam1)//Position - 0xD80EB
{
	return func_2491(uParam1);
}

void func_2684(int iParam0, int iParam1)//Position - 0xDCB4A
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
		func_918(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2687(var uParam0, var uParam1)//Position - 0xDCCB8
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2688(uParam0, uParam1);
	}
}

void func_2688(var uParam0, var uParam1)//Position - 0xDCCE4
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2699(*uParam0, 0, 0))
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
			func_2694(uParam0, uParam1);
			break;
		case 1:
			func_2690(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2690(var uParam0, var uParam1)//Position - 0xDCDA3
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
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
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
			__LIB_8__::func_233(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_5__::func_460(0, 1, 1);
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

void func_2694(var uParam0, var uParam1)//Position - 0xDCFA2
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
			__LIB_8__::func_233(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_5__::func_460(0, 1, 1);
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
			else if (func_2699(*uParam0, 0, 0))
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

int func_2699(int iParam0, bool bParam1, bool bParam2)//Position - 0xDD206
{
	int iVar0;
	int iVar1;
	func_918(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2757(var uParam0, int iParam1)//Position - 0xDF6BE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 945687/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 945678/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 945610/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 945261/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 945028/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 945015/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 944951/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 944942/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 944217/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 944208/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 943104/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 943096/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 943087/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 943063/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 942991/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 942902/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 942542/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 942403/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 941733/*__LIB_8__::func_852*/;
			break;
		case 19:
			uParam0->f_17 = 941708/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 941699/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 941651/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 941596/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 941483/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 941475/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 941467/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 938915/*func_2883*/;
			break;
		case 25:
			uParam0->f_23 = 938907/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 938899/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 938891/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 938610/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 938584/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 938515/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 938492/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 935938/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 935893/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 935797/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 935788/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 935779/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 935771/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 935760/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 935647/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 934800/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 934791/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 934578/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 934569/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 934558/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 934516/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 934477/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 934468/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 934426/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 934384/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 934375/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 934366/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 934355/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 934344/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 934335/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 934249/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 934241/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 933900/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 933826/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 933129/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 933120/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 933047/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 933038/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 933026/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 933017/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 932490/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 930934/*func_2833*/;
			break;
		case 87:
			uParam0->f_1 = 927705/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 927690/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 927328/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 926966/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 926459/*func_2811*/;
			break;
		case 98:
			uParam0->f_1 = 924825/*func_2809*/;
			break;
		case 100:
			uParam0->f_22 = 924548/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 923998/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 923986/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 923977/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 586324/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 923840/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 923792/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 640167/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 881930/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 881829/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 881804/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 923784/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 916714/*func_2759*/;
			break;
		case 125:
			uParam0->f_19 = 916658/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2759(int iParam0, int* iParam1)//Position - 0xDFCEA
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
				if (func_2833(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2785(iParam1))
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

int func_2785(int* iParam0)//Position - 0xE0F43
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
		func_1761(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_2809(int iParam0, var uParam1)//Position - 0xE1C99
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2600(iParam0, uParam1);
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
			func_1761(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_2811(int iParam0, var uParam1)//Position - 0xE22FB
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
				if (!func_2812(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_2812(var uParam0, int iParam1)//Position - 0xE240A
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
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_114(*uParam0, 14, 0), -1))
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

int func_2833(int iParam0, int* iParam1)//Position - 0xE3476
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
		if (!func_694(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			func_699(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_694(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_1761(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_2883(var uParam0, var uParam1)//Position - 0xE53A3
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
			func_2887(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2884(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2884(var uParam0, var uParam1)//Position - 0xE54E1
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
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
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
			__LIB_8__::func_233(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_5__::func_460(0, 1, 1);
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

void func_2887(var uParam0, var uParam1)//Position - 0xE576B
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
			__LIB_8__::func_233(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_5__::func_460(0, 1, 1);
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
				func_2889(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2888(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2888(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xE5888
{
	if (iParam1 == 0)
	{
		if (func_2699(iParam0, 0, 0))
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
		if (func_2699(iParam0, 0, 0))
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
		if (func_2699(iParam0, 1, 0))
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
		if (func_2699(iParam0, 0, 0))
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

void func_2889(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xE5990
{
	if (iParam1 == 0)
	{
		if (func_2699(iParam0, 0, 0))
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
		if (func_2699(iParam0, 0, 0))
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

void func_2932(var uParam0, int iParam1)//Position - 0xE6E20
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 981257/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 981243/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 981144/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 980084/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 979930/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 979878/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 979823/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 979707/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 979575/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 979460/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 979450/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 978281/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 978272/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 976973/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 976929/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 976906/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 976882/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 976819/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 976739/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 976096/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 972956/*__LIB_10__::func_71*/;
			break;
		case 17:
			uParam0->f_17 = 972256/*__LIB_9__::func_274*/;
			break;
		case 19:
			uParam0->f_17 = 972231/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 972052/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 971988/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 971714/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 971698/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 971595/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 971548/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 971511/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 970684/*func_3036*/;
			break;
		case 25:
			uParam0->f_23 = 970318/*func_3033*/;
			break;
		case 27:
			uParam0->f_25 = 969936/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 969885/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 969877/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 969640/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 969522/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 969102/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 957807/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 957762/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 954675/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 954666/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 954657/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 954649/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 954600/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 954518/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 953754/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 953707/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 953648/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 953416/*__LIB_6__::func_969*/;
			break;
		case 52:
			uParam0->f_15 = 953405/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 953363/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 953355/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 953346/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 953337/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 953295/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 953286/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 953277/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 953266/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 953224/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 953215/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 953207/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 952145/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 951842/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 951728/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 950885/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 950876/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 950803/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 950794/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 950782/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 950580/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 950571/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 948837/*func_2951*/;
			break;
		case 87:
			uParam0->f_1 = 947384/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 947375/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 947367/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 947358/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 947349/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 947340/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 947332/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 947324/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 947152/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 947119/*__LIB_4__::func_215*/;
			break;
	}
}

int func_2951(int iParam0, var uParam1)//Position - 0xE7A65
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
			func_699(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_693(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3033(int iParam0, int iParam1)//Position - 0xECE4E
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
		func_918(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3036(var uParam0, var uParam1)//Position - 0xECFBC
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_3037(uParam0, uParam1);
	}
}

void func_3037(var uParam0, var uParam1)//Position - 0xECFDA
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_273(uParam0, uParam1);
			break;
		case 1:
			func_3038(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3038(var uParam0, var uParam1)//Position - 0xED014
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3100(var uParam0, int iParam1)//Position - 0xEF912
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1072997/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1072941/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1072597/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1072558/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1072524/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1072513/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1072449/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1072426/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1072402/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1072286/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1072207/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1072198/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1071602/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1071594/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1066394/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1066385/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1066370/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1065895/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1061919/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1061144/*__LIB_9__::func_276*/;
			break;
		case 19:
			uParam0->f_17 = 1061119/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1060908/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1060745/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1060136/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1060054/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1059138/*func_3172*/;
			break;
		case 30:
			uParam0->f_8 = 1057887/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1057214/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1056311/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1056302/*__LIB_0__::func_162*/;
			break;
		case 34:
			uParam0->f_41 = 1055527/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1055474/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 987054/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 987045/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 987036/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 987028/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 987005/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 986865/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 986830/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 986792/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 986768/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 986757/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 986678/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 986670/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 986661/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 986651/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 986362/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 984771/*__LIB_9__::func_978*/;
			break;
		case 65:
			uParam0->f_21 = 983808/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 983613/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 983510/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 982820/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 982811/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 982799/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 982790/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 982778/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 982404/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 982395/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 982278/*__LIB_7__::func_810*/;
			break;
	}
}

void func_3172(int iParam0, int iParam1)//Position - 0x102942
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
							func_3173(iParam0);
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
							func_3173(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3173(int iParam0)//Position - 0x102BFA
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3246(var uParam0, int iParam1)//Position - 0x105F6E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1135938/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1135698/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1133399/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1133190/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1132985/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1132907/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1132769/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1132713/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1132552/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1132316/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1132302/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1132293/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1128922/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1128913/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1115388/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1115132/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1115083/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1114872/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1114863/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1114834/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1114105/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1110250/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1108938/*__LIB_9__::func_279*/;
			break;
		case 19:
			uParam0->f_17 = 1108894/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1108729/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1108665/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1108438/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1108315/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1104937/*func_3384*/;
			break;
		case 25:
			uParam0->f_23 = 1104616/*func_3382*/;
			break;
		case 27:
			uParam0->f_25 = 1103468/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1103355/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1103274/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1102384/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1101840/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1101158/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1101065/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1091778/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1091720/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 987923/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1091711/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1091702/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1091694/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1091645/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1091353/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1088328/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1088224/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1087941/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1087779/*__LIB_6__::func_978*/;
			break;
		case 52:
			uParam0->f_15 = 1087768/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1087510/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1087248/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1087239/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1086082/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1085824/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1085545/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1085536/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1085525/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1085267/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1085259/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1085201/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1085051/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1083346/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1083035/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1082883/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1081883/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1081874/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1081425/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1081145/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1081133/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1080900/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1080891/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1078796/*func_3267*/;
			break;
		case 87:
			uParam0->f_1 = 1075901/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1075892/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1075884/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1075858/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1075748/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1075031/*func_3253*/;
			break;
		case 100:
			uParam0->f_22 = 1074869/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1074741/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1074451/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1074427/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3253(var uParam0, var uParam1)//Position - 0x106757
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
		func_1761(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3267(int iParam0, var uParam1)//Position - 0x10760C
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
			func_699(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_693(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_3382(int iParam0, int iParam1)//Position - 0x10DAE8
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
		func_918(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3384(var uParam0, var uParam1)//Position - 0x10DC29
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3398(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3386(uParam0, uParam1);
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

void func_3386(var uParam0, var uParam1)//Position - 0x10DCB4
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_307(uParam0, uParam1);
			break;
		case 1:
			func_3387(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3387(var uParam0, var uParam1)//Position - 0x10DCEE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
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

void func_3398(var uParam0, var uParam1)//Position - 0x10E208
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_278(uParam0, uParam1);
			break;
		case 1:
			func_3407(uParam0, uParam1);
			break;
		case 2:
			__LIB_16__::func_188(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3407(var uParam0, var uParam1)//Position - 0x10E6B5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_918(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3477(var uParam0, int iParam1)//Position - 0x11554B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1143460/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1143404/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1143135/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1143074/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1143043/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1142979/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1142970/*__LIB_0__::func_162*/;
			break;
		case 11:
			uParam0->f_11 = 1142961/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1142952/*__LIB_0__::func_162*/;
			break;
		case 12:
			uParam0->f_33 = 1142741/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1142733/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1142709/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1142700/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1141756/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1141747/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1141722/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1141713/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1141689/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1141679/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1141670/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1141661/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1141193/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1141074/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1140304/*func_3519*/;
			break;
		case 30:
			uParam0->f_8 = 1140158/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1140148/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1139941/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1139624/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1139571/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1138798/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1138789/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1138780/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1138772/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1138761/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1138522/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1138513/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1138504/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1138495/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1138484/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1138473/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1138465/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1138456/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1138447/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1138154/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1137610/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1137602/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1137534/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1137394/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1136950/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1136941/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1136929/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1136920/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1136908/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1136899/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1136891/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3519(int iParam0, int iParam1)//Position - 0x116650
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
						func_3520(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3520(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3520(int iParam0)//Position - 0x11687A
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3555(var uParam0, int iParam1)//Position - 0x1172AD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1242498/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1242394/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1241659/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1241577/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1241434/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1241424/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1241291/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1241224/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1241112/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1240873/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1240864/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1240364/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1240355/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1240347/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1240323/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1240243/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1240147/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1239942/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1239926/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1239117/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1234412/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1233596/*__LIB_10__::func_19*/;
			break;
		case 19:
			uParam0->f_17 = 1233571/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1233487/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1233423/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1233271/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1233104/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1231958/*func_3742*/;
			break;
		case 30:
			uParam0->f_8 = 1231340/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1231031/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1230092/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1228633/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1228575/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1180878/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1180869/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1180860/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1180852/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1180829/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1180701/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1180660/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1180392/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1180323/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1180312/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1180078/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1179728/*func_3717*/;
			break;
		case 56:
			uParam0->f_46 = 1179719/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1179645/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1179411/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1179211/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1178313/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1177587/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1175288/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1174655/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1174646/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1174634/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1174625/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1174613/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1173920/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1173380/*func_3665*/;
			break;
		case 85:
			uParam0->f_1 = 1169278/*func_3657*/;
			break;
		case 87:
			uParam0->f_1 = 1165291/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1164777/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1164606/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1164400/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1164234/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1162780/*func_3630*/;
			break;
		case 94:
			uParam0->f_1 = 1158643/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1158347/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1158317/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1157651/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1155002/*func_3593*/;
			break;
		case 100:
			uParam0->f_22 = 1146941/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1144997/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1144777/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1144753/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3593(int iParam0, int* iParam1)//Position - 0x119FBA
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
							func_1761(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
								func_1761(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
			func_1761(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3630(int iParam0, int* iParam1)//Position - 0x11BE1C
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
				func_699(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3632(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_1761(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_3632(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x11C130
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
					func_694(uParam2[iVar1], iVar3, 1, 0);
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

int func_3657(int iParam0, int* iParam1)//Position - 0x11D77E
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
			func_699(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_693(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_1761(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3665(int iParam0, var uParam1)//Position - 0x11E784
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
					func_699(&iVar1, &(uParam1->f_122), 24);
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

void func_3717(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x120050
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
					func_2364(iParam2, 166);
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

void func_3742(int iParam0, int iParam1)//Position - 0x12CC56
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_919(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_919(bVar7))
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
						func_3743(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3743(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3743(int iParam0)//Position - 0x12CEE6
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3800(var uParam0, int iParam1)//Position - 0x12F58B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1270790/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1270734/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1270465/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1270406/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1270375/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1270259/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1270175/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1270111/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1270088/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1270079/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1269626/*__LIB_12__::func_69*/;
			break;
		case 14:
			uParam0->f_11 = 1269617/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1269609/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1269585/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1269576/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1264506/*__LIB_12__::func_283*/;
			break;
		case 75:
			uParam0->f_4 = 1264497/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1264313/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1261212/*__LIB_16__::func_189*/;
			break;
		case 17:
			uParam0->f_17 = 1260708/*__LIB_10__::func_22*/;
			break;
		case 19:
			uParam0->f_17 = 1260683/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1260605/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1260542/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1260327/*__LIB_9__::func_134*/;
			break;
		case 22:
			uParam0->f_24 = 1260208/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1259261/*func_3902*/;
			break;
		case 30:
			uParam0->f_8 = 1258697/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1258520/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1257408/*__LIB_12__::func_9*/;
			break;
		case 34:
			uParam0->f_41 = 1256714/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1256661/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1256084/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1256075/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1256066/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1255889/*__LIB_10__::func_21*/;
			break;
		case 77:
			uParam0->f_13 = 1255878/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1255380/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1255339/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1255330/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1255321/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1255310/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1255299/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1255291/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1255282/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1255273/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1255044/*__LIB_11__::func_983*/;
			break;
		case 64:
			uParam0->f_47 = 1249054/*__LIB_13__::func_81*/;
			break;
		case 65:
			uParam0->f_21 = 1247322/*__LIB_10__::func_23*/;
			break;
		case 66:
			uParam0->f_21 = 1246996/*__LIB_6__::func_392*/;
			break;
		case 67:
			uParam0->f_21 = 1246271/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1245726/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1245717/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1245705/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1245696/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1245684/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1243968/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1243518/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1243502/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3902(int iParam0, int iParam1)//Position - 0x1336FD
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_919(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_919(bVar7))
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
						__LIB_12__::func_9(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_9(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3903(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3903(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3903(int iParam0)//Position - 0x133990
{
	__LIB_12__::func_9(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3974(var uParam0, int iParam1)//Position - 0x13640F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1323278/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1323198/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1322699/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1322649/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1322562/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1322552/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1322436/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1322314/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1322226/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1322212/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1322203/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1321824/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1321815/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1321807/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1321783/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1321651/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1321369/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1321355/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1320837/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1317213/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1316678/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1316653/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1316569/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1316505/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1316325/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1316182/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1315558/*func_4097*/;
			break;
		case 30:
			uParam0->f_8 = 1315043/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1314760/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1314089/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1312825/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1312780/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1286732/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1286723/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1286714/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1286706/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1286683/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1286579/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1286538/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1286324/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1286255/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1286244/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1286106/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1285918/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1285909/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1285732/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1285594/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1285586/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1284750/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1284643/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1284579/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1284091/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1284082/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1284070/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1284061/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1284049/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1283346/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1283246/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1281262/*func_4046*/;
			break;
		case 87:
			uParam0->f_1 = 1278869/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1278860/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1278797/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1278477/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1274443/*func_3996*/;
			break;
		case 100:
			uParam0->f_22 = 1272167/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1271963/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1271947/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3996(int iParam0, int* iParam1)//Position - 0x13724B
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_699(&iVar0, &(iParam1->f_109), 12);
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

int func_4046(int iParam0, int* iParam1)//Position - 0x138CEE
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
			func_699(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_693(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1761(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4097(int iParam0, int iParam1)//Position - 0x1412E6
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_919(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_919(bVar7))
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
						func_4098(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4098(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4098(int iParam0)//Position - 0x141528
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4141(var uParam0, int iParam1)//Position - 0x143117
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1332787/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1332731/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1332512/*__LIB_5__::func_807*/;
			break;
		case 3:
			uParam0->f_34 = 1332461/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1332427/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1332363/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1332354/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1332330/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1332321/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1332229/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1332220/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1332212/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1331960/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1331951/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1331942/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1331933/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1331924/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1331881/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1331871/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1331824/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1331772/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1331716/*__LIB_5__::func_806*/;
			break;
		case 22:
			uParam0->f_24 = 1331634/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1330667/*func_4178*/;
			break;
		case 30:
			uParam0->f_8 = 1330362/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1330332/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1330142/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1326139/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1326086/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1324895/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1324886/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1324877/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1324869/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1324858/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1324755/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1324730/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1324692/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1324683/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1324672/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1324591/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1324583/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1324574/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1324564/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1324357/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1324349/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1324341/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1324333/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1324325/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1324316/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1324307/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1324295/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1324286/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1324274/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1324265/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1324256/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1324248/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4178(int iParam0, int iParam1)//Position - 0x144DEB
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
						func_4179(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4179(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4179(int iParam0)//Position - 0x145068
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4206(var uParam0, int iParam1)//Position - 0x14563C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1412194/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1412138/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1410593/*__LIB_11__::func_992*/;
			break;
		case 3:
			uParam0->f_34 = 1410544/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1410510/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1410446/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1410423/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1410399/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1410283/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1410216/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1410207/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1409862/*__LIB_12__::func_78*/;
			break;
		case 14:
			uParam0->f_11 = 1409853/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1409845/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1404518/*__LIB_12__::func_285*/;
			break;
		case 13:
			uParam0->f_2 = 1404509/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1404500/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1404475/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1396282/*__LIB_17__::func_835*/;
			break;
		case 17:
			uParam0->f_17 = 1395702/*__LIB_12__::func_77*/;
			break;
		case 19:
			uParam0->f_17 = 1395677/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1395616/*__LIB_12__::func_71*/;
			break;
		case 21:
			uParam0->f_3 = 1395496/*__LIB_5__::func_810*/;
			break;
		case 74:
			uParam0->f_53 = 1395440/*__LIB_5__::func_809*/;
			break;
		case 22:
			uParam0->f_24 = 1395358/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1394386/*func_4300*/;
			break;
		case 30:
			uParam0->f_8 = 1393646/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1393377/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1392440/*__LIB_12__::func_76*/;
			break;
		case 34:
			uParam0->f_41 = 1389096/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1389043/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1388360/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1388351/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1388342/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1387899/*__LIB_16__::func_191*/;
			break;
		case 77:
			uParam0->f_13 = 1387888/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1387785/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1387760/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1387722/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1387698/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1387687/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1387608/*__LIB_11__::func_988*/;
			break;
		case 54:
			uParam0->f_45 = 1387600/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1387591/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1387581/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1387352/*__LIB_11__::func_987*/;
			break;
		case 64:
			uParam0->f_47 = 1341029/*__LIB_16__::func_193*/;
			break;
		case 65:
			uParam0->f_21 = 1339891/*__LIB_10__::func_24*/;
			break;
		case 66:
			uParam0->f_21 = 1339668/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1338773/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1338228/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1338219/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1338207/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1338198/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1338186/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1336092/*__LIB_9__::func_503*/;
			break;
		case 73:
			uParam0->f_51 = 1334324/*__LIB_12__::func_80*/;
			break;
		case 78:
			uParam0->f_59 = 1333791/*__LIB_8__::func_974*/;
			break;
	}
}

void func_4300(int iParam0, int iParam1)//Position - 0x1546D2
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
	if (__LIB_12__::func_71(PLAYER::PLAYER_ID(), iParam0))
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_919(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_919(bVar7))
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
						__LIB_12__::func_76(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_76(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4301(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4301(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4301(int iParam0)//Position - 0x154965
{
	__LIB_12__::func_76(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4372(var uParam0, int iParam1)//Position - 0x158C6B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1448158/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1448042/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1446812/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1446742/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1446568/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1446444/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1446221/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1446207/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1446183/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1446067/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1445829/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1445820/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1444116/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1444107/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1444099/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1443593/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1443554/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1443545/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1443536/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1443068/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1441027/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1438895/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1438870/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1438786/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1438686/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1438519/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1438416/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1437764/*func_4494*/;
			break;
		case 30:
			uParam0->f_8 = 1437264/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1436973/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1435975/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1435871/*__LIB_5__::func_814*/;
			break;
		case 34:
			uParam0->f_41 = 1433726/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1346477/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1433666/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1433657/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1433648/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1433382/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1433371/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1433231/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1433190/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1432993/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1432909/*__LIB_6__::func_916*/;
			break;
		case 52:
			uParam0->f_15 = 1432898/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1432616/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1432608/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1432599/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1432538/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1432256/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1430341/*__LIB_10__::func_25*/;
			break;
		case 65:
			uParam0->f_21 = 1430298/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1429595/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1428511/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1427920/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1427911/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1427899/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1427890/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1427878/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1425201/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1423355/*func_4417*/;
			break;
		case 85:
			uParam0->f_1 = 1421021/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1416797/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1416788/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1416745/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1416444/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1415681/*func_4384*/;
			break;
		case 94:
			uParam0->f_1 = 1414181/*__LIB_5__::func_362*/;
			break;
		case 102:
			uParam0->f_1 = 1413615/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1413607/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1413532/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1413458/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1413434/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4384(var uParam0, var uParam1)//Position - 0x159A01
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_699(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_4417(int iParam0, var uParam1)//Position - 0x15B7FB
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
				func_1761(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_699(&iVar2, &(uParam1->f_109), 14);
								func_693(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_699(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_699(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_699(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_693(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_1761(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4494(int iParam0, int iParam1)//Position - 0x15F044
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_919(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_919(bVar7))
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
						func_4495(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4495(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4495(int iParam0)//Position - 0x15F2A2
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4546(var uParam0, int iParam1)//Position - 0x1618E7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1490157/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1487840/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1487777/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1487721/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1487007/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1486999/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1486990/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1486966/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1486957/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1485129/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1485120/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1485112/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1485103/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1485094/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1485085/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1485076/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1485067/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1485043/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1485033/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1485024/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1485015/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1485006/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1484998/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1484990/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1483829/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1483819/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1483791/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1483782/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1483737/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1450051/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1450042/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1450033/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1450025/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1450014/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1450006/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1449997/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1449677/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1449648/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1449617/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1449583/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1449539/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1449510/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1449501/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1449444/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1449436/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1449428/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1449420/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1449412/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1449386/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1449360/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1449348/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1449339/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1449327/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1449318/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1449310/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1449127/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4624(var uParam0, int iParam1)//Position - 0x16C1E0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1534056/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1533746/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1528774/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1528745/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1528550/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1528200/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1528058/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1528034/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1527500/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1527395/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1527386/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1527281/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1527272/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1527264/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1527255/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1527246/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1526957/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1526948/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1526864/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1526855/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1526236/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1526037/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1525973/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1525913/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1525904/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1525663/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1525290/*func_4663*/;
			break;
		case 30:
			uParam0->f_8 = 1525152/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1524714/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1524049/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1521469/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1521424/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1495575/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1495347/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1495171/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1495163/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1495152/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1494910/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1494878/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1494812/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1494788/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1494605/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1494010/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1493773/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1493764/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1493699/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1493277/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1493269/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1493261/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1493201/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1493183/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1493174/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1493165/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1492661/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1492513/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1492468/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1492459/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1492451/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1492435/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4663(int iParam0, int iParam1)//Position - 0x17462A
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
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_919(bVar2))
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

void func_4701(var uParam0, int iParam1)//Position - 0x176871
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1569286/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1569176/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1566714/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1566685/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1566525/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1566407/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1566190/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1566166/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1566050/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1565899/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1565890/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1564887/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1564878/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1564870/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1564861/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1564707/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1564698/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1564610/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1563823/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1563196/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1563171/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1563132/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1563072/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1563063/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1563010/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1562706/*func_4790*/;
			break;
		case 30:
			uParam0->f_8 = 1562583/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1562364/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1562079/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1561673/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1561628/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1543908/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1543899/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1543815/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1543807/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1543784/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1543732/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1543700/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1543522/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1543425/*__LIB_9__::func_319*/;
			break;
		case 52:
			uParam0->f_15 = 1543414/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1543099/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1542236/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1542227/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1537420/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1537406/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1535898/*__LIB_9__::func_522*/;
			break;
		case 65:
			uParam0->f_21 = 1535890/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1535839/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1535811/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1535802/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1535793/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1535509/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1535413/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1535401/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1535215/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1535043/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4790(int iParam0, int iParam1)//Position - 0x17D852
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
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_919(bVar2))
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

void func_4834(var uParam0, int iParam1)//Position - 0x17F20F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1597108/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1596962/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1591740/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1591711/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1591302/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1591132/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1590737/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1590713/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1590704/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1590609/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1590600/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1590592/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1590583/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1590298/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1590289/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1590201/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1590192/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1589940/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1589915/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1589906/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1589897/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1589888/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1589880/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1589872/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1589749/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1589504/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1589244/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1587091/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1587046/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1572597/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1572588/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1572579/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1572571/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1572560/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1572508/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1572476/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1572347/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1572323/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1572312/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1571661/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1571025/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1571016/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1570949/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1570935/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1570556/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1570481/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1570430/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1570412/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1570403/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1570394/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1570277/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1570268/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1570256/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1570247/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1570239/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4907(var uParam0, int iParam1)//Position - 0x185EBD
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1597575/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1597566/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1597557/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1597397/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1597389/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1597234/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4915(var uParam0, int iParam1)//Position - 0x186090
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1597792/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1597783/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1597774/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1597397/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1597765/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1597701/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4921(var uParam0, int iParam1)//Position - 0x186169
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1598019/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1598010/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1597397/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1598001/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1597901/*__LIB_8__::func_992*/;
			break;
	}
}

Vector3 func_4926(struct<3> Param0, int iParam1)//Position - 0x18624C
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_552(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

void func_4930(int iParam0, bool bParam1)//Position - 0x18635F
{
	if (!BitTest(Local_150[iParam0], bParam1))
	{
		MISC::SET_BIT(&(Local_150[iParam0]), bParam1);
	}
}

void func_4931(int iParam0, bool bParam1)//Position - 0x186382
{
	if (BitTest(Local_150[iParam0], bParam1))
	{
		MISC::CLEAR_BIT(&(Local_150[iParam0]), bParam1);
	}
}

bool func_4934(int iParam0, int iParam1)//Position - 0x1863E6
{
	return BitTest(Local_150[iParam0], iParam1);
}

bool func_4935(int iParam0, var uParam1, int iParam2)//Position - 0x1863F8
{
	struct<3> Var0;
	func_7(iParam0, &Var0, 0);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(iParam2);
	Call_Loc(Var0.f_2);
	return StackVal;
}

int func_4936(int iParam0)//Position - 0x186414
{
	if (__LIB_3__::func_853(PLAYER::PLAYER_ID()))
	{
		if (__LIB_5__::func_38(PLAYER::PLAYER_ID()) == iParam0)
		{
			return 1;
		}
		if (__LIB_5__::func_38(PLAYER::PLAYER_ID()) == __LIB_12__::func_907(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_4938()//Position - 0x1864B6
{
	Local_150.f_45 = (Local_150.f_45 + 1 % 2);
}

void func_4939()//Position - 0x1864CC
{
	Local_150.f_47 = (Local_150.f_47 + 1 % 32);
}

void func_4940()//Position - 0x1864E3
{
	Local_150.f_44 = (Local_150.f_44 + 1 % func_480());
}

void func_4941()//Position - 0x1864FC
{
	int iVar0;
	int iVar1;
	if (Local_150.f_357[Local_150.f_44] != -1)
	{
		if (((!BitTest(Global_1946250.f_6, 24) && !BitTest(Global_1946250.f_6, 25)) && !BitTest(Global_1946250.f_9, 30)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (!__LIB_0__::func_833() || func_4942())
			{
				if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[Local_150.f_44]))
					{
						if (!func_4934(Local_150.f_44, 6))
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44]))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44], false, false);
								func_4930(Local_150.f_44, 6);
							}
						}
					}
					else
					{
						func_4931(Local_150.f_44, 6);
					}
				}
				else if (func_4934(Local_150.f_44, 6))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[Local_150.f_44]))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44], true, false);
							func_4931(Local_150.f_44, 6);
						}
					}
				}
			}
		}
		if (BitTest(Global_1973079, 7))
		{
			iVar0 = Local_150.f_44;
			if (iVar0 == 19 || iVar0 == 20)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[Local_150.f_44]))
				{
					if (!func_4934(Local_150.f_44, 8))
					{
						if (ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44], false, false);
							func_4930(Local_150.f_44, 8);
						}
					}
				}
				else
				{
					func_4931(Local_150.f_44, 8);
				}
			}
		}
		else
		{
			if (func_4934(19, 8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[19]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[19]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[19], true, false);
						func_4931(19, 8);
					}
				}
			}
			if (func_4934(20, 8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[20]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[20]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[20], true, false);
						func_4931(20, 8);
					}
				}
			}
		}
		if (BitTest(Global_1973079, 9))
		{
			iVar1 = Local_150.f_44;
			if (iVar1 == 30 || iVar1 == 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[Local_150.f_44]))
				{
					if ((Local_150.f_357[Local_150.f_44] == 3 || Local_150.f_357[Local_150.f_44] == 4) || Local_150.f_357[Local_150.f_44] == 5)
					{
						if (!func_4934(Local_150.f_44, 9))
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44]))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[Local_150.f_44], false, false);
								func_4930(Local_150.f_44, 9);
							}
						}
					}
				}
				else
				{
					func_4931(Local_150.f_44, 9);
				}
			}
		}
		else
		{
			if (func_4934(30, 9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[30]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[30]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[30], true, false);
						func_4931(30, 9);
					}
				}
			}
			if (func_4934(31, 9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[31]))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_150.f_746[31]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_150.f_746[31], true, false);
						func_4931(31, 9);
					}
				}
			}
		}
	}
}

var func_4942()//Position - 0x186878
{
	return BitTest(Global_1946250.f_6, 18);
}

void func_4943(var uParam0, int* iParam1)//Position - 0x186889
{
	switch (uParam0->f_532.f_41)
	{
		case 0:
			func_5041(uParam0, iParam1);
			break;
		case 1:
			func_4984(uParam0, iParam1);
			func_4979(uParam0, iParam1);
			func_4978(uParam0, iParam1);
			break;
		case 2:
			func_4977(uParam0);
			break;
		case 3:
			func_4969(uParam0, iParam1);
			break;
	}
	func_4947(uParam0, iParam1);
	func_4944(uParam0);
}

void func_4944(var uParam0)//Position - 0x1868FD
{
	if (func_4946(uParam0, 8))
	{
		if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_532.f_48, 1500)))
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		}
		else
		{
			func_4945(uParam0, 8);
		}
	}
}

void func_4945(var uParam0, bool bParam1)//Position - 0x18693B
{
	if (BitTest(uParam0->f_532, bParam1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_532), bParam1);
	}
}

bool func_4946(var uParam0, int iParam1)//Position - 0x186959
{
	return BitTest(uParam0->f_532, iParam1);
}

void func_4947(var uParam0, int* iParam1)//Position - 0x186969
{
	switch (uParam0->f_532.f_42)
	{
		case 0:
			func_4963(uParam0, iParam1);
			break;
		case 1:
			func_4961(uParam0, iParam1);
			break;
		case 2:
			func_4959(uParam0, iParam1);
			break;
		case 4:
			func_4957(uParam0, iParam1);
			break;
		case 3:
			func_4948(uParam0, iParam1);
			break;
	}
}

void func_4948(var uParam0, var uParam1)//Position - 0x1869D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = uParam0->f_532.f_44;
	iVar6 = __LIB_12__::func_907(uParam0->f_532.f_44);
	if (__LIB_12__::func_920(uParam0->f_532.f_44))
	{
		if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533)) == uParam0->f_357[iVar0] && __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar6, uParam0->f_1533)) == uParam0->f_357[iVar6])
		{
			func_4955(uParam0, 6);
			func_4954(uParam0, 0);
		}
		else
		{
			if (iVar6 > iVar0)
			{
				iVar3 = iVar0;
				iVar4 = iVar6;
			}
			else
			{
				iVar3 = iVar6;
				iVar4 = iVar0;
			}
			iVar2 = iVar3;
			while (iVar2 <= iVar4)
			{
				if (iVar2 == iVar0)
				{
					iVar5 = iVar0;
				}
				else if (iVar2 == iVar6)
				{
					iVar5 = iVar6;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar5]))
				{
					func_4953(uParam0, iVar5);
				}
				else if (func_4952(uParam0, uParam1, iVar5))
				{
					uParam0->f_357[iVar5] = -1;
					iVar1++;
				}
				iVar2++;
			}
			if (iVar1 == func_4950(uParam0->f_532.f_44) + 1)
			{
				func_4954(uParam0, 4);
			}
		}
	}
	else if (func_4950(uParam0->f_532.f_44) == 3 && !func_4949(uParam0))
	{
		func_542(uParam0->f_532.f_44, &iVar3, &iVar4);
		iVar2 = iVar3;
		while (iVar2 <= iVar4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar2]))
			{
				func_4953(uParam0, iVar2);
				if (func_4952(uParam0, uParam1, iVar2))
				{
					uParam0->f_357[iVar2] = -1;
				}
			}
			else
			{
				if (func_4952(uParam0, uParam1, iVar2))
				{
					uParam0->f_357[iVar2] = -1;
					iVar1++;
				}
				if (iVar1 == func_4950(uParam0->f_532.f_44) + 1)
				{
					func_4954(uParam0, 4);
				}
			}
			iVar2++;
		}
	}
	else if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533)) == uParam0->f_357[iVar0])
	{
		func_4955(uParam0, 6);
		func_4954(uParam0, 0);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]))
	{
		func_4953(uParam0, iVar0);
		if (func_4952(uParam0, uParam1, iVar0))
		{
			uParam0->f_357[iVar0] = -1;
		}
	}
	else if (func_4952(uParam0, uParam1, iVar0))
	{
		uParam0->f_357[iVar0] = -1;
		if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_44, uParam0->f_1533)) == -1)
		{
			uParam0->f_357[iVar0] = -1;
			func_4955(uParam0, 6);
			func_4954(uParam0, 0);
		}
		else
		{
			func_4954(uParam0, 4);
		}
	}
}

int func_4949(var uParam0)//Position - 0x186C59
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_44, uParam0->f_1533)) != 10)
	{
		func_542(uParam0->f_532.f_44, &iVar1, &iVar2);
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]) && uParam0->f_357[iVar0] != 10) && uParam0->f_532.f_43 != iVar0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	else
	{
		func_542(uParam0->f_532.f_44, &iVar1, &iVar2);
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]) && uParam0->f_357[iVar0] == 10)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar3 == 4)
		{
			return 1;
		}
	}
	return 0;
}

int func_4950(int iParam0)//Position - 0x186D2D
{
	if (__LIB_12__::func_917(iParam0))
	{
		return 3;
	}
	else if (__LIB_12__::func_920(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_4952(var uParam0, var uParam1, int iParam2)//Position - 0x186DD5
{
	struct<103> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	Var0.f_1 = 14;
	Var0.f_16 = 14;
	Var0.f_59 = 14;
	Var0.f_102 = 14;
	if (uParam0->f_357[iParam2] != -1)
	{
		func_6(uParam0->f_357[iParam2], &Var0);
		if (Var0.f_0 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= (Var0.f_0 - 1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_168[iParam2 /*15*/][iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam1->f_168[iParam2 /*15*/][iVar1]))
					{
						iVar3 = NETWORK::NET_TO_OBJ(uParam1->f_168[iParam2 /*15*/][iVar1]);
						OBJECT::DELETE_OBJECT(&iVar3);
						NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
						iVar2++;
						MISC::CLEAR_BIT(&(uParam1->f_1[iParam2]), 0);
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam1->f_168[iParam2 /*15*/][iVar1]);
					}
				}
				else
				{
					iVar2++;
				}
				iVar1++;
			}
		}
		else
		{
			return 1;
		}
		if (iVar2 == Var0.f_0)
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

void func_4953(var uParam0, int iParam1)//Position - 0x186ECA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_746[iParam1]));
	}
}

void func_4954(var uParam0, int iParam1)//Position - 0x186EEF
{
	if (uParam0->f_532.f_42 != iParam1)
	{
		uParam0->f_532.f_42 = iParam1;
	}
}

void func_4955(var uParam0, bool bParam1)//Position - 0x186F0C
{
	if (!BitTest(uParam0->f_532, bParam1))
	{
		MISC::SET_BIT(&(uParam0->f_532), bParam1);
	}
}

void func_4957(var uParam0, var uParam1)//Position - 0x186F7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = uParam0->f_532.f_44;
	iVar7 = __LIB_12__::func_907(uParam0->f_532.f_44);
	if (__LIB_12__::func_920(uParam0->f_532.f_44))
	{
		if (iVar7 > iVar0)
		{
			iVar3 = iVar0;
			iVar4 = iVar7;
		}
		else
		{
			iVar3 = iVar7;
			iVar4 = iVar0;
		}
		iVar5 = iVar3;
		while (iVar5 <= iVar4)
		{
			if (iVar5 == iVar0)
			{
				iVar5 = iVar0;
				uParam0->f_357[iVar5] = __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533));
			}
			else if (iVar5 == iVar7)
			{
				iVar5 = iVar7;
				uParam0->f_357[iVar5] = __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar7, uParam0->f_1533));
			}
			if (uParam0->f_357[iVar5] != -1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar5]))
				{
					func_543(uParam0, iVar5, 0);
				}
				else if (func_4958(uParam0->f_357[iVar5]) || func_493(uParam0, uParam1, iVar5, 1))
				{
					iVar1++;
				}
			}
			else if (func_4958(uParam0->f_357[iVar5]) || func_493(uParam0, uParam1, iVar5, 1))
			{
				iVar1++;
			}
			iVar5++;
		}
		if (iVar1 == func_4950(uParam0->f_532.f_44) + 1)
		{
			func_4955(uParam0, 6);
			func_4954(uParam0, 0);
		}
	}
	else if (func_4950(uParam0->f_532.f_44) == 3)
	{
		func_542(uParam0->f_532.f_44, &iVar3, &iVar4);
		iVar2 = iVar3;
		while (iVar2 <= iVar4)
		{
			uParam0->f_357[iVar2] = __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar2, uParam0->f_1533));
			if (uParam0->f_357[iVar2] == 10)
			{
				iVar6++;
			}
			if (uParam0->f_357[iVar2] != -1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar2]))
				{
					func_543(uParam0, iVar2, iVar6);
				}
				else if (func_4958(uParam0->f_357[iVar2]) || func_493(uParam0, uParam1, iVar2, 1))
				{
					iVar1++;
				}
			}
			else if (func_4958(uParam0->f_357[iVar2]) || func_493(uParam0, uParam1, iVar2, 1))
			{
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 == func_4950(uParam0->f_532.f_44) + 1)
		{
			func_4955(uParam0, 6);
			func_4954(uParam0, 0);
		}
	}
	else
	{
		uParam0->f_357[iVar0] = __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533));
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]))
		{
			func_543(uParam0, iVar0, 0);
		}
		else if (func_4958(uParam0->f_357[iVar0]) || func_493(uParam0, uParam1, iVar0, 1))
		{
			func_4955(uParam0, 6);
			func_4954(uParam0, 0);
		}
	}
}

int func_4958(int iParam0)//Position - 0x187232
{
	switch (iParam0)
	{
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_4959(var uParam0, var uParam1)//Position - 0x18724F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = uParam0->f_532.f_43;
	iVar6 = __LIB_12__::func_907(uParam0->f_532.f_43);
	uParam0->f_357[iVar0] = uParam0->f_532.f_19[uParam0->f_532.f_14];
	if ((func_4950(uParam0->f_532.f_43) == 1 && __LIB_12__::func_908(uParam0->f_532.f_19[uParam0->f_532.f_14], 1) == 1) && __LIB_12__::func_908(__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar6, uParam0->f_1533)), 1) == 1)
	{
		if (iVar6 > iVar0)
		{
			iVar3 = iVar0;
			iVar4 = iVar6;
		}
		else
		{
			iVar3 = iVar6;
			iVar4 = iVar0;
		}
		iVar1 = iVar3;
		while (iVar1 <= iVar4)
		{
			if (iVar1 == iVar0)
			{
				iVar5 = iVar0;
			}
			else if (iVar1 == iVar6)
			{
				iVar5 = iVar6;
				uParam0->f_357[iVar6] = __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar6, uParam0->f_1533));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar5]) && uParam0->f_357[iVar5] != -1)
			{
				func_543(uParam0, iVar5, 0);
			}
			else
			{
				iVar2++;
				if (iVar2 == func_4950(uParam0->f_532.f_43) + 1)
				{
					func_4954(uParam0, 0);
				}
			}
			iVar1++;
		}
	}
	else if (func_4950(uParam0->f_532.f_43) == 3)
	{
		func_542(uParam0->f_532.f_43, &iVar3, &iVar4);
		iVar5 = iVar3;
		while (iVar5 <= iVar4)
		{
			if (uParam0->f_532.f_19[uParam0->f_532.f_14] == 10)
			{
				uParam0->f_357[iVar5] = 10;
				iVar1++;
			}
			else if (iVar5 != iVar0)
			{
				if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar5, uParam0->f_1533)) == 10)
				{
					uParam0->f_357[iVar5] = -1;
				}
				else
				{
					uParam0->f_357[iVar5] = __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar5, uParam0->f_1533));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar5]) && uParam0->f_357[iVar5] != -1)
			{
				func_543(uParam0, iVar5, iVar1);
			}
			else
			{
				iVar2++;
				if (iVar2 == func_4950(uParam0->f_532.f_43) + 1)
				{
					func_4954(uParam0, 0);
				}
			}
			iVar5++;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]) && uParam0->f_357[iVar0] != -1)
	{
		func_543(uParam0, iVar0, 0);
	}
	else if (func_4958(uParam0->f_357[iVar0]) || func_493(uParam0, uParam1, iVar0, 1))
	{
		func_4954(uParam0, 0);
	}
}

void func_4961(var uParam0, var uParam1)//Position - 0x187521
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = uParam0->f_532.f_43;
	iVar5 = __LIB_12__::func_907(uParam0->f_532.f_43);
	if ((func_4950(uParam0->f_532.f_43) == 1 && (__LIB_12__::func_908(uParam0->f_532.f_19[uParam0->f_532.f_14], 1) == 2 || __LIB_12__::func_908(uParam0->f_357[iVar5], 1) == 2)) || (func_4950(uParam0->f_532.f_43) == 3 && !func_4962(uParam0)))
	{
		if (func_4950(uParam0->f_532.f_43) != 3)
		{
			if (iVar5 > iVar0)
			{
				iVar3 = iVar0;
				iVar4 = iVar5;
			}
			else
			{
				iVar3 = iVar5;
				iVar4 = iVar0;
			}
		}
		else
		{
			func_542(uParam0->f_532.f_43, &iVar3, &iVar4);
		}
		iVar1 = iVar3;
		while (iVar1 <= iVar4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar1]))
			{
				func_4953(uParam0, iVar1);
				if (func_4952(uParam0, uParam1, iVar1))
				{
					uParam0->f_357[iVar1] = -1;
				}
			}
			else
			{
				if (func_4952(uParam0, uParam1, iVar1))
				{
					uParam0->f_357[iVar1] = -1;
					iVar2++;
				}
				if (iVar2 == func_4950(uParam0->f_532.f_43) + 1)
				{
					if (uParam0->f_532.f_14 == 0)
					{
						func_4954(uParam0, 0);
					}
					else
					{
						func_4954(uParam0, 2);
					}
				}
			}
			iVar1++;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]))
	{
		func_4953(uParam0, iVar0);
		if (func_4952(uParam0, uParam1, iVar0))
		{
			uParam0->f_357[iVar0] = -1;
		}
	}
	else if (func_4952(uParam0, uParam1, iVar0))
	{
		if (uParam0->f_532.f_14 == 0)
		{
			uParam0->f_357[iVar0] = -1;
			func_4954(uParam0, 0);
		}
		else
		{
			uParam0->f_357[iVar0] = -1;
			func_4954(uParam0, 2);
		}
	}
}

int func_4962(var uParam0)//Position - 0x1876E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_532.f_19[uParam0->f_532.f_14] != 10 && __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_43, uParam0->f_1533)) != 10)
	{
		func_542(uParam0->f_532.f_43, &iVar1, &iVar2);
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]) && uParam0->f_357[iVar0] != 10) && uParam0->f_532.f_43 != iVar0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_4963(var uParam0, var uParam1)//Position - 0x18777D
{
	int iVar0;
	int iVar1;
	if (!func_4946(uParam0, 6) && func_4966(uParam1, uParam0, uParam0->f_532.f_19[uParam0->f_532.f_14]))
	{
		if (uParam0->f_532.f_41 == 1)
		{
			iVar0 = uParam0->f_532.f_43;
			iVar1 = __LIB_12__::func_907(uParam0->f_532.f_43);
			if (func_4950(uParam0->f_532.f_43) == 1 && (__LIB_12__::func_908(uParam0->f_357[iVar1], 1) == 2 || __LIB_12__::func_908(uParam0->f_532.f_19[uParam0->f_532.f_14], 1) == 2))
			{
				if (func_4965(uParam0))
				{
					func_4954(uParam0, 1);
				}
			}
			else if (func_4950(uParam0->f_532.f_43) == 3)
			{
				if ((func_4950(uParam0->f_532.f_43) == 3 && func_4964(uParam0, uParam0->f_532.f_43)) && uParam0->f_532.f_19[uParam0->f_532.f_14] == 10)
				{
				}
				else if (uParam0->f_532.f_19[uParam0->f_532.f_14] != 10 && uParam0->f_357[iVar0] == uParam0->f_532.f_19[uParam0->f_532.f_14])
				{
				}
				else
				{
					func_4954(uParam0, 1);
				}
			}
			else if (uParam0->f_532.f_14 == 0)
			{
				if (uParam0->f_357[iVar0] != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]))
					{
						func_4954(uParam0, 1);
					}
				}
			}
			else if (uParam0->f_357[iVar0] != -1)
			{
				if (uParam0->f_357[iVar0] != uParam0->f_532.f_19[uParam0->f_532.f_14])
				{
					func_4954(uParam0, 1);
				}
			}
			else
			{
				func_4954(uParam0, 2);
			}
		}
	}
}

int func_4964(var uParam0, int iParam1)//Position - 0x18791D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_12__::func_917(iParam1))
	{
		func_542(iParam1, &iVar1, &iVar2);
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (uParam0->f_357[iVar0] != 10)
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_4965(var uParam0)//Position - 0x187974
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_532.f_43;
	iVar1 = __LIB_12__::func_907(uParam0->f_532.f_43);
	if (__LIB_12__::func_908(uParam0->f_357[iVar1], 1) == 2)
	{
		if (uParam0->f_357[iVar0] == -1 && (uParam0->f_532.f_14 == 0 || uParam0->f_532.f_19[uParam0->f_532.f_14] == uParam0->f_357[iVar1]))
		{
			return 0;
		}
	}
	if (__LIB_12__::func_908(uParam0->f_357[iVar0], 1) == 2)
	{
		if (uParam0->f_357[iVar0] != -1 && uParam0->f_532.f_19[uParam0->f_532.f_14] == uParam0->f_357[iVar0])
		{
			return 0;
		}
	}
	return 1;
}

int func_4966(var uParam0, var uParam1, int iParam2)//Position - 0x187A28
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam2 != -1)
	{
		if (!__LIB_0__::func_262(PLAYER::PLAYER_ID(), iParam2, uParam1->f_1533))
		{
			return 0;
		}
		if (!__LIB_4__::func_996(PLAYER::PLAYER_ID(), iParam2, uParam1->f_1533))
		{
			return 0;
		}
	}
	if (func_4968(uParam1, uParam0))
	{
		return 0;
	}
	if (__LIB_12__::func_909(iParam2))
	{
		iVar0 = func_4967(uParam1, iParam2);
		if (iVar0 != -1)
		{
			if (uParam1->f_357[iVar0] != -1)
			{
				iVar1 = func_488(uParam1->f_357[iVar0]);
				iVar2 = 0;
				while (iVar2 <= iVar1)
				{
					if (func_487(uParam0, iVar0, iVar2, uParam1->f_1533) != -1)
					{
						return 0;
					}
					iVar2++;
				}
			}
		}
	}
	return 1;
}

int func_4967(var uParam0, int iParam1)//Position - 0x187AD3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (41 - 1))
	{
		if (iVar0 != uParam0->f_532.f_43)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0]))
			{
				if (iParam1 == uParam0->f_357[iVar0])
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_4968(var uParam0, var uParam1)//Position - 0x187B20
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = uParam0->f_532.f_43;
	iVar1 = __LIB_12__::func_907(uParam0->f_532.f_43);
	if (iVar0 > -1)
	{
		if (func_4950(uParam0->f_532.f_43) == 3)
		{
			func_542(uParam0->f_532.f_43, &iVar3, &iVar4);
			iVar5 = iVar3;
			while (iVar5 <= iVar4)
			{
				if (func_487(uParam1, iVar5, 0, uParam0->f_1533) != -1)
				{
					return 1;
				}
				iVar5++;
			}
		}
		else if (func_4950(uParam0->f_532.f_43) == 1)
		{
			if (iVar1 > iVar0)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
			}
			else
			{
				iVar3 = iVar1;
				iVar4 = iVar0;
			}
			iVar5 = iVar3;
			while (iVar5 <= iVar4)
			{
				if (uParam0->f_357[iVar5] != -1)
				{
					iVar6 = func_488(uParam0->f_357[iVar5]);
					iVar2 = 0;
					while (iVar2 <= iVar6)
					{
						if (func_487(uParam1, iVar5, iVar2, uParam0->f_1533) != -1)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar5++;
			}
		}
		else if (uParam0->f_357[iVar0] != -1)
		{
			iVar7 = func_488(uParam0->f_357[iVar0]);
			iVar2 = 0;
			while (iVar2 <= iVar7)
			{
				if (func_487(uParam1, iVar0, iVar2, uParam0->f_1533) != -1)
				{
					return 1;
				}
				iVar2++;
			}
		}
	}
	return 0;
}

void func_4969(var uParam0, int* iParam1)//Position - 0x187C5C
{
	func_4976(uParam0);
	func_4945(uParam0, 12);
	if (BitTest(*iParam1, 1) || __LIB_5__::func_130())
	{
		__LIB_1__::func_895(1, -1);
		__LIB_31__::func_7(1);
		__LIB_5__::func_391(0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		if (!__LIB_0__::func_833())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		MISC::CLEAR_BIT(iParam1, 1);
	}
	func_4970(uParam0, 0);
}

void func_4970(var uParam0, int iParam1)//Position - 0x187CCC
{
	if (uParam0->f_532.f_41 != iParam1)
	{
		uParam0->f_532.f_41 = iParam1;
	}
}

void func_4976(var uParam0)//Position - 0x187ED8
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_532.f_49))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_532.f_49, false);
	}
}

void func_4977(var uParam0)//Position - 0x187F06
{
	struct<50> Var0;
	if (!func_4946(uParam0, 7) && uParam0->f_532.f_42 == 0)
	{
		Var0.f_9 = 4;
		Var0.f_19 = 21;
		uParam0->f_532 = { Var0 };
		func_4970(uParam0, 3);
	}
	else if (uParam0->f_532.f_42 != 0)
	{
	}
}

void func_4978(var uParam0, int* iParam1)//Position - 0x187F5C
{
	if (iParam1->f_785 != uParam0->f_532.f_43)
	{
		iParam1->f_785 = uParam0->f_532.f_43;
	}
}

void func_4979(var uParam0, int* iParam1)//Position - 0x187F7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (func_4966(iParam1, uParam0, uParam0->f_532.f_19[uParam0->f_532.f_14]) && (func_4946(uParam0, 2) || func_4946(uParam0, 7)))
	{
		func_4955(uParam0, 7);
		bVar4 = true;
		switch (uParam0->f_532.f_19[uParam0->f_532.f_14])
		{
			case 1:
			case 5:
			case 3:
			case 4:
			case 16:
				__LIB_12__::func_916(__LIB_12__::func_907(uParam0->f_532.f_43), 0, uParam0->f_1533);
				__LIB_12__::func_916(uParam0->f_532.f_43, __LIB_12__::func_906(uParam0->f_532.f_19[uParam0->f_532.f_14], 0), uParam0->f_1533);
				break;
			case 10:
				func_542(uParam0->f_532.f_43, &iVar0, &iVar1);
				iVar2 = iVar0;
				while (iVar2 <= iVar1)
				{
					iVar3++;
					__LIB_12__::func_916(iVar2, __LIB_12__::func_906(uParam0->f_532.f_19[uParam0->f_532.f_14], iVar3), uParam0->f_1533);
					iVar2++;
				}
				break;
			case 12:
			case 11:
			case 13:
			case 14:
				iVar5 = func_4967(uParam0, uParam0->f_532.f_19[uParam0->f_532.f_14]);
				if (iVar5 != -1)
				{
					if (func_4952(uParam0, iParam1, iVar5))
					{
						func_4953(uParam0, iVar5);
						uParam0->f_357[iVar5] = -1;
					}
					bVar4 = false;
					__LIB_12__::func_916(iVar5, 0, uParam0->f_1533);
				}
				else
				{
					if (__LIB_12__::func_908(uParam0->f_532.f_19[uParam0->f_532.f_14], 1) == 2)
					{
						__LIB_12__::func_916(__LIB_12__::func_907(uParam0->f_532.f_43), 0, uParam0->f_1533);
					}
					else if (__LIB_12__::func_917(uParam0->f_532.f_43))
					{
						func_542(uParam0->f_532.f_43, &iVar0, &iVar1);
						iVar2 = iVar0;
						while (iVar2 <= iVar1)
						{
							if (iVar2 != uParam0->f_532.f_43)
							{
								if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar2, uParam0->f_1533)) == 10)
								{
									__LIB_12__::func_916(__LIB_12__::func_907(iVar2), 0, uParam0->f_1533);
								}
							}
							iVar2++;
						}
					}
					else if (__LIB_12__::func_908(__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), __LIB_12__::func_907(uParam0->f_532.f_43), uParam0->f_1533)), 1) == 2)
					{
						__LIB_12__::func_916(__LIB_12__::func_907(uParam0->f_532.f_43), 0, uParam0->f_1533);
					}
					__LIB_12__::func_916(uParam0->f_532.f_43, __LIB_12__::func_906(uParam0->f_532.f_19[uParam0->f_532.f_14], 0), uParam0->f_1533);
				}
				break;
			default:
				if (__LIB_12__::func_917(uParam0->f_532.f_43))
				{
					func_542(uParam0->f_532.f_43, &iVar0, &iVar1);
					iVar2 = iVar0;
					while (iVar2 <= iVar1)
					{
						if (iVar2 != uParam0->f_532.f_43)
						{
							if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar2, uParam0->f_1533)) == 10)
							{
								__LIB_12__::func_916(__LIB_12__::func_907(iVar2), 0, uParam0->f_1533);
							}
						}
						else
						{
							__LIB_12__::func_916(iVar2, __LIB_12__::func_906(uParam0->f_532.f_19[uParam0->f_532.f_14], 0), uParam0->f_1533);
						}
						iVar2++;
					}
				}
				else if (__LIB_12__::func_920(uParam0->f_532.f_43))
				{
					if (__LIB_12__::func_908(uParam0->f_532.f_19[uParam0->f_532.f_14], 1) == 2)
					{
						__LIB_12__::func_916(__LIB_12__::func_907(uParam0->f_532.f_43), 0, uParam0->f_1533);
					}
					else if (__LIB_12__::func_908(__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), __LIB_12__::func_907(uParam0->f_532.f_43), uParam0->f_1533)), 1) == 2)
					{
						__LIB_12__::func_916(__LIB_12__::func_907(uParam0->f_532.f_43), 0, uParam0->f_1533);
					}
					__LIB_12__::func_916(uParam0->f_532.f_43, __LIB_12__::func_906(uParam0->f_532.f_19[uParam0->f_532.f_14], 0), uParam0->f_1533);
				}
				else
				{
					__LIB_12__::func_916(uParam0->f_532.f_43, __LIB_12__::func_906(uParam0->f_532.f_19[uParam0->f_532.f_14], 0), uParam0->f_1533);
				}
				break;
		}
		if (bVar4)
		{
			func_4945(uParam0, 7);
			uParam0->f_532.f_15 = __LIB_5__::func_392();
			func_4955(uParam0, 6);
		}
	}
}

void func_4984(var uParam0, int* iParam1)//Position - 0x1887AA
{
	func_5029(uParam0, iParam1, 1);
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (func_4946(uParam0, 6))
		{
			func_5018(uParam0, iParam1);
			func_4945(uParam0, 6);
		}
		else
		{
			__LIB_3__::func_781(uParam0->f_532.f_14, 1, 1);
		}
		func_5015(uParam0);
		func_5012(uParam0, iParam1);
		__LIB_9__::func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	}
	if (func_4992(uParam0))
	{
		func_4991(uParam0);
		func_4954(uParam0, 3);
		func_4970(uParam0, 3);
	}
	func_4989(uParam0);
	func_4986(uParam0);
	func_4985();
}

void func_4985()//Position - 0x18883A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_3__::func_853(iVar1))
			{
				NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(PLAYER::GET_PLAYER_PED(iVar1));
			}
		}
		iVar0++;
	}
}

void func_4986(var uParam0)//Position - 0x188880
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (CAM::DOES_CAM_EXIST(uParam0->f_532.f_49))
	{
		func_4988(uParam0->f_532.f_43, &Var0, &Var1, &fVar2);
		if (!func_4987(uParam0))
		{
			if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_532.f_49))
			{
				CAM::SET_CAM_PARAMS(uParam0->f_532.f_49, Var0, Var1, fVar2, 0, 1, 1, 2);
			}
		}
		else if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_532.f_49))
		{
			if (!func_4946(uParam0, 12))
			{
				func_4988(uParam0->f_532.f_44, &Var0, &Var1, &fVar2);
				CAM::SET_CAM_PARAMS(uParam0->f_532.f_49, Var0, Var1, fVar2, 0, 1, 1, 2);
				func_4988(uParam0->f_532.f_43, &Var0, &Var1, &fVar2);
				CAM::SET_CAM_PARAMS(uParam0->f_532.f_49, Var0, Var1, fVar2, 250, 1, 1, 2);
				func_4955(uParam0, 12);
			}
		}
	}
}

int func_4987(var uParam0)//Position - 0x188954
{
	switch (uParam0->f_532.f_43)
	{
		case 24:
			if (uParam0->f_532.f_44 == 25)
			{
				return 1;
			}
			break;
		case 25:
			if (uParam0->f_532.f_44 == 24)
			{
				return 1;
			}
			break;
		case 28:
			if (uParam0->f_532.f_44 == 29)
			{
				return 1;
			}
			break;
		case 34:
			if (uParam0->f_532.f_44 == 0)
			{
				return 1;
			}
			break;
		case 0:
			if (uParam0->f_532.f_44 == 34)
			{
				return 1;
			}
			break;
		case 2:
			if (uParam0->f_532.f_44 == 3)
			{
				return 1;
			}
			break;
		case 3:
			if (uParam0->f_532.f_44 == 2)
			{
				return 1;
			}
			break;
		case 6:
			if (uParam0->f_532.f_44 == 7)
			{
				return 1;
			}
			break;
		case 7:
			if (uParam0->f_532.f_44 == 6)
			{
				return 1;
			}
			break;
		case 12:
			if (uParam0->f_532.f_44 == 13)
			{
				return 1;
			}
			break;
		case 13:
			if (uParam0->f_532.f_44 == 12)
			{
				return 1;
			}
			break;
		case 14:
			if (uParam0->f_532.f_44 == 15)
			{
				return 1;
			}
			break;
		case 15:
			if (uParam0->f_532.f_44 == 14)
			{
				return 1;
			}
			break;
		case 16:
			if (uParam0->f_532.f_44 == 17)
			{
				return 1;
			}
			break;
		case 17:
			if (uParam0->f_532.f_44 == 16)
			{
				return 1;
			}
			break;
		case 18:
			if (uParam0->f_532.f_44 == 19)
			{
				return 1;
			}
			break;
		case 19:
			if (uParam0->f_532.f_44 == 18)
			{
				return 1;
			}
			break;
		case 20:
			if (uParam0->f_532.f_44 == 21)
			{
				return 1;
			}
			break;
		case 21:
			if (uParam0->f_532.f_44 == 22 || uParam0->f_532.f_44 == 20)
			{
				return 1;
			}
			break;
		case 22:
			if (uParam0->f_532.f_44 == 21)
			{
				return 1;
			}
			break;
		case 29:
			if (uParam0->f_532.f_44 == 30 || uParam0->f_532.f_44 == 28)
			{
				return 1;
			}
			break;
		case 30:
			if (uParam0->f_532.f_44 == 29)
			{
				return 1;
			}
			break;
		case 31:
			if (uParam0->f_532.f_44 == 32)
			{
				return 1;
			}
			break;
		case 32:
			if (uParam0->f_532.f_44 == 31)
			{
				return 1;
			}
			break;
		case 10:
			if (uParam0->f_532.f_44 == 11)
			{
				return 1;
			}
			break;
		case 11:
			if (uParam0->f_532.f_44 == 10)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_4988(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x188C10
{
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				*uParam1 = { 2732.2646f, -375.2436f, -48.2872f };
				*uParam2 = { -1.5224f, 0f, -3.7113f };
				*fParam3 = 65.4157f;
				break;
			case 30:
			case 31:
				*uParam1 = { 2732.7944f, -377.6685f, -47.878f };
				*uParam2 = { -21.4616f, 0f, 90.0891f };
				*fParam3 = 67.4f;
				break;
			case 32:
			case 33:
			case 34:
				*uParam1 = { 2734.4597f, -373.0278f, -47.7808f };
				*uParam2 = { -8.0694f, 0f, 123.6167f };
				*fParam3 = 43.2f;
				break;
			case 23:
			case 24:
				*uParam1 = { 2724.294f, -382.6304f, -48.4285f };
				*uParam2 = { -0.3996f, 0f, -1.27f };
				*fParam3 = 67.4f;
				break;
			case 25:
			case 26:
			case 27:
			case 28:
				*uParam1 = { 2726.1958f, -382.6548f, -48.4285f };
				*uParam2 = { -0.3996f, 0f, -1.27f };
				*fParam3 = 67.4f;
				break;
			case 29:
				*uParam1 = { 2730.9624f, -381.6673f, -48.426f };
				*uParam2 = { -0.3996f, 0f, 35.9577f };
				*fParam3 = 67.4f;
				break;
			case 7:
			case 8:
				*uParam1 = { 2729.6982f, -381.6277f, -48.0543f };
				*uParam2 = { -8.5024f, 0f, -102.5527f };
				*fParam3 = 46.95f;
				break;
			case 9:
			case 10:
			case 11:
			case 12:
				*uParam1 = { 2730.423f, -384.4293f, -48.2102f };
				*uParam2 = { -3.6031f, 0f, -125.0199f };
				*fParam3 = 46.95f;
				break;
			case 3:
			case 4:
			case 5:
			case 6:
				*uParam1 = { 2731.1306f, -376.2206f, -47.6664f };
				*uParam2 = { -14.9062f, 0f, -89.9739f };
				*fParam3 = 68.27f;
				break;
			case 19:
			case 20:
				*uParam1 = { 2732.7856f, -379.7342f, -47.4701f };
				*uParam2 = { -14.1115f, 0f, 135.9931f };
				*fParam3 = 44.1075f;
				break;
			case 21:
				*uParam1 = { 2733.8718f, -381.7208f, -47.4049f };
				*uParam2 = { -12.5768f, 0f, 118.4625f };
				*fParam3 = 44.1075f;
				break;
			case 22:
				*uParam1 = { 2724.7441f, -381.4478f, -47.4701f };
				*uParam2 = { -13.0712f, 0f, -118.799f };
				*fParam3 = 44.1075f;
				break;
			case 17:
			case 18:
				*uParam1 = { 2732.0305f, -388.6134f, -47.4701f };
				*uParam2 = { -14.7815f, 0f, 36.6859f };
				*fParam3 = 44.1075f;
				break;
			case 13:
			case 14:
				*uParam1 = { 2734.9138f, -387.1254f, -47.9171f };
				*uParam2 = { -7.8252f, 0f, -70.2962f };
				*fParam3 = 65.5289f;
				break;
			case 15:
			case 16:
				*uParam1 = { 2733.889f, -387.4872f, -47.2307f };
				*uParam2 = { -12.2466f, 0f, 155.224f };
				*fParam3 = 49.2f;
				break;
		}
	}
	else if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -1346.4277f, 149.9023f, -97.0959f };
				*uParam2 = { -19.3025f, 0f, 141.9718f };
				*fParam3 = 65.4157f;
				break;
			case 1:
				*uParam1 = { -1355.3109f, 141.4747f, -93.2596f };
				*uParam2 = { -24.6498f, 0f, -12.8019f };
				*fParam3 = 65.4157f;
				break;
			}
	}
}

void func_4989(var uParam0)//Position - 0x18901A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	if (func_4946(uParam0, 6))
	{
		return;
	}
	if (!__LIB_0__::func_864(&(uParam0->f_532.f_45)))
	{
		__LIB_0__::func_795(&(uParam0->f_532.f_45), 0, 0);
	}
	iVar6 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_532.f_45));
	fVar7 = 0.09f;
	fVar8 = 0.09f;
	fVar9 = 2.81f;
	iVar10 = -1;
	if (uParam0->f_532.f_14 != -1)
	{
		iVar10 = uParam0->f_532.f_19[uParam0->f_532.f_14];
		if (__LIB_12__::func_908(iVar10, 1) != 2 && iVar10 != 11)
		{
			iVar10 = -1;
		}
	}
	func_550(uParam0->f_1533, uParam0->f_532.f_43, iVar10, &Var5, &fVar4, 1);
	if (iVar10 == 13)
	{
		if (func_4990(uParam0->f_532.f_43))
		{
			fVar9 = 3.1f;
		}
		else
		{
			fVar9 = 3f;
		}
	}
	Var5 = { Var5 + Vector(fVar9, 0f, 0f) };
	Var5.f_2 = (Var5.f_2 + (SYSTEM::SIN(((IntToFloat(iVar6) * 3.1415927f) * fVar8)) * fVar7));
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::DRAW_MARKER(2, Var5, 0f, 0f, 0f, 0f, 180f, fVar4, 0.7f, 0.7f, 0.7f, iVar0, iVar1, iVar2, 255, false, false, 2, false, 0, 0, false);
}

int func_4990(int iParam0)//Position - 0x18914F
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
			return 0;
			break;
	}
	return 1;
}

void func_4991(var uParam0)//Position - 0x18917E
{
	uParam0->f_532.f_44 = uParam0->f_532.f_43;
	uParam0->f_532.f_16 = uParam0->f_532.f_14;
}

int func_4992(var uParam0)//Position - 0x1891A2
{
	if (__LIB_0__::func_833())
	{
		return 1;
	}
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	if (func_4946(uParam0, 3))
	{
		if (!func_4946(uParam0, 9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			return 1;
		}
		else
		{
			func_4945(uParam0, 9);
		}
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (__LIB_1__::func_16() || __LIB_5__::func_133())
	{
		return 1;
	}
	if (BitTest(Global_1946250, 27))
	{
		return 1;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	if (__LIB_3__::func_718() || __LIB_0__::func_877())
	{
		return 1;
	}
	return 0;
}

void func_5012(var uParam0, var uParam1)//Position - 0x18C9D0
{
	int iVar0;
	struct<4> Var1;
	iVar0 = uParam0->f_532.f_19[uParam0->f_532.f_14];
	if (uParam0->f_532.f_14 == 0)
	{
		if (__LIB_5__::func_186(PLAYER::PLAYER_ID()) && !__LIB_7__::func_258(PLAYER::PLAYER_ID()))
		{
			__LIB_1__::func_789("PIM_AS_ARC_RNC" /* GXT: This slot is unavailable because you have not unlocked Race And Chase for the Auto Shop. */, 0, 0);
		}
		return;
	}
	if (!__LIB_0__::func_262(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533))
	{
		__LIB_1__::func_789("ARC_CAB_DEC_2" /* GXT: Unavailable. This game can be purchased from your Arcade laptop. */, 0, 0);
		return;
	}
	if (!__LIB_4__::func_996(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533))
	{
		__LIB_1__::func_789("ARC_CAB_DEC_5" /* GXT: Unavailable. This game has not been delivered yet. */, 0, 0);
		return;
	}
	switch (iVar0)
	{
		case 12:
		case 11:
		case 13:
		case 14:
			if (func_4946(uParam0, 9))
			{
				__LIB_1__::func_789("ARC_CAB_DEC_3" /* GXT: Are you sure to move this arcade game to this location? */, 0, 0);
			}
			else if (!func_4966(uParam1, uParam0, iVar0))
			{
				__LIB_1__::func_789("ARC_CAB_DEC_4" /* GXT: You cannot move this arcade game right now. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_789("ARC_CAB_DEC_1" /* GXT: Please note: only one version of this game can be present in your Arcade at a time. */, 0, 0);
			}
			break;
		default:
			if (!func_4966(uParam1, uParam0, iVar0))
			{
				__LIB_1__::func_789("ARC_CAB_DEC_4" /* GXT: You cannot move this arcade game right now. */, 0, 0);
			}
			else
			{
				Var1 = { __LIB_12__::func_903(iVar0, 1, 0) };
				__LIB_1__::func_789(&Var1, 0, 0);
			}
			break;
	}
}

void func_5015(var uParam0)//Position - 0x18CBBB
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_5016(uParam0);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_5016(var uParam0)//Position - 0x18CBE2
{
	int iVar0;
	int iVar1;
	if (uParam0->f_532.f_42 != 0)
	{
		return;
	}
	if (func_4946(uParam0, 9))
	{
		return;
	}
	if (func_4946(uParam0, 7))
	{
		return;
	}
	if ((func_4946(uParam0, 0) && __LIB_4__::func_845(&(uParam0->f_532.f_47), &(uParam0->f_532.f_6), 1)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && __LIB_4__::func_845(&(uParam0->f_532.f_47), &(uParam0->f_532.f_6), 1)))
	{
		if (uParam0->f_532.f_6 > 0)
		{
			uParam0->f_532.f_14 = (uParam0->f_532.f_14 - 1);
			if (uParam0->f_532.f_14 < 0)
			{
				uParam0->f_532.f_14 = (uParam0->f_532.f_7 - 1);
			}
			__LIB_3__::func_781(uParam0->f_532.f_14, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
		uParam0->f_532.f_15 = __LIB_5__::func_392();
	}
	else if ((func_4946(uParam0, 1) && __LIB_4__::func_845(&(uParam0->f_532.f_47), &(uParam0->f_532.f_6), 1)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && __LIB_4__::func_845(&(uParam0->f_532.f_47), &(uParam0->f_532.f_6), 1)))
	{
		if (uParam0->f_532.f_6 < 0)
		{
			uParam0->f_532.f_14++;
			if (uParam0->f_532.f_14 > (uParam0->f_532.f_7 - 1))
			{
				uParam0->f_532.f_14 = 0;
			}
			__LIB_3__::func_781(uParam0->f_532.f_14, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
		uParam0->f_532.f_15 = __LIB_5__::func_392();
	}
	else if (func_4946(uParam0, 5))
	{
		func_4991(uParam0);
		iVar0 = uParam0->f_532.f_43;
		iVar0++;
		if (uParam0->f_1533 == 0)
		{
			if (iVar0 > (41 - __LIB_5__::func_183(uParam0->f_1533, 0) + 1))
			{
				iVar0 = 0;
			}
		}
		else if (iVar0 > (__LIB_5__::func_132(1) - 1))
		{
			iVar0 = 0;
		}
		uParam0->f_532.f_43 = iVar0;
		uParam0->f_532.f_15 = __LIB_5__::func_392();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_4954(uParam0, 3);
		func_4945(uParam0, 12);
	}
	else if (func_4946(uParam0, 4))
	{
		func_4991(uParam0);
		iVar1 = uParam0->f_532.f_43;
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			if (uParam0->f_1533 == 0)
			{
				iVar1 = (41 - __LIB_5__::func_183(uParam0->f_1533, 0) + 1);
			}
			else
			{
				iVar1 = (__LIB_5__::func_132(1) - 1);
			}
		}
		uParam0->f_532.f_43 = iVar1;
		uParam0->f_532.f_15 = __LIB_5__::func_392();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_4954(uParam0, 3);
		func_4945(uParam0, 12);
	}
}

void func_5018(var uParam0, var uParam1)//Position - 0x18CFD7
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("ARC_CAB_MEN_T" /* GXT: SLOT (~1~/~1~) */);
	__LIB_16__::func_727(uParam0->f_532.f_43 + 1);
	__LIB_16__::func_727(func_5025(uParam0->f_1533));
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	uParam0->f_532.f_7 = 0;
	iVar0 = __LIB_12__::func_907(uParam0->f_532.f_43);
	iVar1 = -1;
	while (iVar1 <= (20 - 1))
	{
		if (iVar1 == -1)
		{
			__LIB_8__::func_233(0, "ARC_CAB_MEN_1" /* GXT: None */, 0, !func_4968(uParam0, uParam1), 0, 0, 0);
			if (func_5024(uParam0))
			{
				__LIB_8__::func_233(0, "", 1, 1, 0, 0, 0);
				__LIB_31__::func_247(4, 0);
			}
			uParam0->f_532.f_19[uParam0->f_532.f_7] = -1;
			if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_43, uParam0->f_1533)) == -1)
			{
				uParam0->f_532.f_14 = uParam0->f_532.f_7;
			}
			uParam0->f_532.f_7++;
		}
		else if (!func_5022(iVar1))
		{
			if (__LIB_31__::func_650(uParam0->f_532.f_43, iVar1, 1))
			{
				Var2 = { __LIB_12__::func_903(iVar1, 1, 0) };
				__LIB_8__::func_233(uParam0->f_532.f_7, &Var2, 0, func_4966(uParam1, uParam0, iVar1), 0, 0, 0);
				uParam0->f_532.f_19[uParam0->f_532.f_7] = iVar1;
				if (func_4950(uParam0->f_532.f_43) == 1)
				{
					if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_43, uParam0->f_1533)) != -1 && __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_43, uParam0->f_1533)) == iVar1)
					{
						uParam0->f_532.f_14 = uParam0->f_532.f_7;
						__LIB_8__::func_233(uParam0->f_532.f_7, "", 1, 1, 0, 0, 0);
						__LIB_31__::func_247(4, 0);
					}
					else if (__LIB_12__::func_908(__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533)), 1) == 2 && __LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar0, uParam0->f_1533)) == iVar1)
					{
						uParam0->f_532.f_14 = uParam0->f_532.f_7;
						__LIB_8__::func_233(uParam0->f_532.f_7, "", 1, 1, 0, 0, 0);
						__LIB_31__::func_247(4, 0);
					}
				}
				else if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_43, uParam0->f_1533)) == iVar1)
				{
					uParam0->f_532.f_14 = uParam0->f_532.f_7;
					__LIB_8__::func_233(uParam0->f_532.f_7, "", 1, 1, 0, 0, 0);
					__LIB_31__::func_247(4, 0);
				}
				uParam0->f_532.f_7++;
			}
		}
		iVar1++;
	}
	__LIB_5__::func_393(uParam0->f_532.f_15);
	__LIB_3__::func_781(uParam0->f_532.f_14, 1, 1);
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
	if (func_5025(uParam0->f_1533) > 1)
	{
		func_4955(uParam0, 13);
		__LIB_1__::func_792(205, "ARC_CAB_HEL_P" /* GXT: Previous Slot */, -1, 0);
		__LIB_1__::func_792(206, "ARC_CAB_HEL_N" /* GXT: Next Slot */, -1, 0);
	}
	else
	{
		func_4945(uParam0, 13);
	}
}

int func_5022(int iParam0)//Position - 0x18D557
{
	switch (iParam0)
	{
		case 15:
			if (!Global_262145.f_29264 /* Tunable: SUM_CABINET_QUB3D_ENABLE */)
			{
				return 1;
			}
			break;
		case 16:
			if (!Global_262145.f_30976 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_5024(var uParam0)//Position - 0x18D6D2
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_12__::func_907(uParam0->f_532.f_43);
	iVar0 = -1;
	while (iVar0 <= (20 - 1))
	{
		if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_43, uParam0->f_1533)) != -1)
		{
			return 0;
		}
		if (func_4950(uParam0->f_532.f_43) == 1)
		{
			if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar1, uParam0->f_1533)) == iVar0)
			{
				if (__LIB_12__::func_908(__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), iVar1, uParam0->f_1533)), 1) == 2)
				{
					return 0;
				}
			}
			else if (__LIB_4__::func_997(__LIB_5__::func_118(PLAYER::PLAYER_ID(), uParam0->f_532.f_43, uParam0->f_1533)) == iVar0)
			{
				uParam0->f_532.f_14 = uParam0->f_532.f_7;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_5025(int iParam0)//Position - 0x18D792
{
	switch (iParam0)
	{
		case 1:
			return __LIB_5__::func_132(iParam0);
			break;
	}
	return (__LIB_5__::func_132(iParam0) - __LIB_5__::func_183(iParam0, 0));
}

void func_5029(var uParam0, var uParam1, int iParam2)//Position - 0x18D9AF
{
	func_4945(uParam0, 0);
	func_4945(uParam0, 1);
	func_4945(uParam0, 2);
	func_4945(uParam0, 3);
	func_4945(uParam0, 4);
	func_4945(uParam0, 5);
	__LIB_0__::func_603(&(uParam0->f_532.f_1), &(uParam0->f_532.f_2), &(uParam0->f_532.f_3), &(uParam0->f_532.f_4), 0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if ((((__LIB_3__::func_67(0, -1, 0) && HUD::GET_PAUSE_MENU_STATE() == 0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100493.f_1458)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (iParam2 && uParam0->f_532.f_42 != 0)
			{
			}
			else if (func_5039(uParam0, uParam1))
			{
				func_4955(uParam0, 9);
			}
			else
			{
				func_4945(uParam0, 9);
				func_4955(uParam0, 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) && !func_4946(uParam0, 2))
		{
			func_4955(uParam0, 3);
			func_4955(uParam0, 8);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			uParam0->f_532.f_48 = NETWORK::GET_NETWORK_TIME();
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/)) && !func_4946(uParam0, 2)) && func_4946(uParam0, 13))
		{
			func_4955(uParam0, 5);
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/)) && !func_4946(uParam0, 2)) && func_4946(uParam0, 13))
		{
			func_4955(uParam0, 4);
		}
		if ((uParam0->f_532.f_2 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) && !func_4946(uParam0, 2))
		{
			func_4955(uParam0, 0);
		}
		if ((uParam0->f_532.f_2 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) && !func_4946(uParam0, 2))
		{
			func_4955(uParam0, 1);
		}
		if (MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, true);
				if ((Global_4539961 == -1 || Global_4539961 == -4) || Global_4539961 == -6)
				{
					PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				}
				__LIB_3__::func_567(0, 0, 0, 1);
				__LIB_3__::func_52(0, -1, 1);
			}
			if (__LIB_3__::func_51())
			{
				if (Global_4539961 == uParam0->f_532.f_14)
				{
					if (func_5039(uParam0, uParam1))
					{
						func_4955(uParam0, 9);
					}
					else
					{
						func_4945(uParam0, 9);
						func_4955(uParam0, 2);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					}
				}
				else
				{
					uParam0->f_532.f_14 = Global_4539961;
					__LIB_3__::func_781(uParam0->f_532.f_14, 1, 1);
				}
			}
			if (__LIB_3__::func_528() && !func_4946(uParam0, 2))
			{
				func_4955(uParam0, 3);
			}
			if (__LIB_3__::func_557(0, 0, 0) && !func_4946(uParam0, 2))
			{
				func_4955(uParam0, 0);
			}
			if (__LIB_3__::func_556(0, 0, 0) && !func_4946(uParam0, 2))
			{
				func_4955(uParam0, 1);
			}
			uParam0->f_532.f_5 = 0;
			if (Global_4539961 > -1)
			{
				if (func_4946(uParam0, 2))
				{
					if (Global_4539961 == uParam0->f_532.f_14)
					{
						if (Global_4539961 == uParam0->f_532.f_14)
						{
							uParam0->f_532.f_5 = __LIB_4__::func_848(0);
						}
					}
				}
			}
			if (uParam0->f_532.f_5 == -1 && !func_4946(uParam0, 2))
			{
				func_4955(uParam0, 4);
			}
			else if (uParam0->f_532.f_5 == 1 && !func_4946(uParam0, 2))
			{
				func_4955(uParam0, 5);
			}
		}
	}
}

int func_5039(var uParam0, var uParam1)//Position - 0x18E3DE
{
	int iVar0;
	if (!func_4946(uParam0, 9))
	{
		iVar0 = uParam0->f_532.f_19[uParam0->f_532.f_14];
		if (__LIB_12__::func_909(iVar0))
		{
			if (func_4967(uParam0, iVar0) != -1 && func_4966(uParam1, uParam0, iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_5041(var uParam0, int* iParam1)//Position - 0x18E503
{
	if (func_5045())
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
		func_5044(uParam0);
		func_5043(uParam0, 0);
		func_5042(uParam0);
		func_4985();
		MISC::SET_BIT(iParam1, 1);
		func_4955(uParam0, 6);
		func_4970(uParam0, 1);
	}
}

void func_5042(var uParam0)//Position - 0x18E561
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_532.f_49))
	{
		uParam0->f_532.f_49 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_ACTIVE(uParam0->f_532.f_49, true);
		iVar3 = uParam0->f_532.f_43;
		func_4988(iVar3, &Var0, &Var1, &fVar2);
		CAM::SET_CAM_PARAMS(uParam0->f_532.f_49, Var0, Var1, fVar2, 0, 1, 1, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_5043(var uParam0, bool bParam1)//Position - 0x18E5CF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		if (BitTest(uParam0->f_156, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_156), 0);
		}
		if (BitTest(uParam0->f_155, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_155), 0);
		}
		if (bParam1)
		{
			uParam0->f_134[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_5044(var uParam0)//Position - 0x18E61E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (__LIB_5__::func_132(uParam0->f_1533) - 1))
	{
		if (uParam0->f_357[iVar0] != -1)
		{
			if (uParam0->f_91[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(uParam0->f_91[iVar0]);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_91[iVar0]);
				uParam0->f_91[iVar0] = -1;
			}
			if (uParam0->f_49[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(uParam0->f_49[iVar0]);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_49[iVar0]);
				uParam0->f_49[iVar0] = -1;
			}
		}
		iVar0++;
	}
	uParam0->f_156 = 0;
	uParam0->f_155 = 0;
}

int func_5045()//Position - 0x18E6B3
{
	if (!__LIB_9__::func_729() && __LIB_5__::func_130())
	{
		return 1;
	}
	return 0;
}

void func_5047()//Position - 0x18E76C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_5__::func_130())
	{
		return;
	}
	if (__LIB_4__::func_63(joaat("Main_RM")) && __LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		if (!func_5054(2))
		{
			func_5044(&Local_150);
			func_5053(2);
		}
		return;
	}
	else if (func_5054(2))
	{
		func_5052(2);
	}
	if (Local_150.f_357[Local_150.f_44] != -1 && ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[Local_150.f_44]))
	{
		iVar0 = func_488(Local_150.f_357[Local_150.f_44]);
		bVar3 = true;
		iVar1 = 0;
		while (iVar1 <= iVar0)
		{
			iVar2 = func_487(&Local_149, Local_150.f_44, iVar1, Local_150.f_1533);
			if (Local_150.f_356 == 9 || Local_150.f_356 == 11)
			{
				bVar3 = false;
			}
			else
			{
				if (__LIB_5__::func_36(PLAYER::INT_TO_PLAYERINDEX(iVar2)))
				{
					bVar3 = true;
					Jump @241; //curOff = 223
				}
				else
				{
					bVar3 = false;
				}
				iVar1++;
			}
		}
		func_5048(bVar3);
	}
}

void func_5048(bool bParam0)//Position - 0x18E866
{
	var uVar0;
	var uVar1;
	if (bParam0)
	{
		if (Local_150.f_134[func_5050(Local_150.f_44)] == Local_150.f_44)
		{
			func_5049(Local_150.f_357[Local_150.f_44], &uVar0, &uVar1, 0);
			if (Local_150.f_91[Local_150.f_44] != -1)
			{
				AUDIO::STOP_SOUND(Local_150.f_91[Local_150.f_44]);
				AUDIO::RELEASE_SOUND_ID(Local_150.f_91[Local_150.f_44]);
				Local_150.f_91[Local_150.f_44] = -1;
				MISC::CLEAR_BIT(&(Local_150.f_156), func_5050(Local_150.f_44));
				MISC::CLEAR_BIT(&(Local_150.f_155), Local_150.f_357[Local_150.f_44]);
			}
		}
		func_5049(Local_150.f_357[Local_150.f_44], &uVar0, &uVar1, 1);
		if (Local_150.f_49[Local_150.f_44] == -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
		{
			Local_150.f_49[Local_150.f_44] = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(Local_150.f_49[Local_150.f_44], &uVar1, Local_150.f_199[Local_150.f_44 /*3*/], &uVar0, false, 0, false);
		}
	}
	else
	{
		func_5049(Local_150.f_357[Local_150.f_44], &uVar0, &uVar1, 1);
		if (Local_150.f_49[Local_150.f_44] != -1)
		{
			AUDIO::STOP_SOUND(Local_150.f_49[Local_150.f_44]);
			AUDIO::RELEASE_SOUND_ID(Local_150.f_49[Local_150.f_44]);
			Local_150.f_49[Local_150.f_44] = -1;
		}
		if (Local_150.f_134[func_5050(Local_150.f_44)] == Local_150.f_44)
		{
			func_5049(Local_150.f_357[Local_150.f_44], &uVar0, &uVar1, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
			{
				if (Local_150.f_91[Local_150.f_44] == -1)
				{
					Local_150.f_91[Local_150.f_44] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_COORD(Local_150.f_91[Local_150.f_44], &uVar1, Local_150.f_199[Local_150.f_44 /*3*/], &uVar0, false, 20, false);
				}
				else if (AUDIO::HAS_SOUND_FINISHED(Local_150.f_91[Local_150.f_44]))
				{
					AUDIO::RELEASE_SOUND_ID(Local_150.f_91[Local_150.f_44]);
					Local_150.f_91[Local_150.f_44] = -1;
					MISC::CLEAR_BIT(&(Local_150.f_156), func_5050(Local_150.f_44));
					MISC::CLEAR_BIT(&(Local_150.f_155), Local_150.f_357[Local_150.f_44]);
				}
			}
		}
	}
}

void func_5049(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x18EA9D
{
	struct<10> Var0;
	func_7(iParam0, &Var0, 9);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(iParam3);
	Call_Loc(Var0.f_9);
}

int func_5050(int iParam0)//Position - 0x18EABC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
			break;
		case 0:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
			break;
		case 13:
		case 14:
			return 2;
			break;
		case 15:
		case 16:
			return 3;
			break;
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return 4;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 5;
			break;
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 6;
			break;
	}
	return 0;
}

void func_5052(bool bParam0)//Position - 0x18EBF2
{
	if (BitTest(Local_150.f_42, bParam0))
	{
		MISC::CLEAR_BIT(&(Local_150.f_42), bParam0);
	}
}

void func_5053(bool bParam0)//Position - 0x18EC10
{
	if (!BitTest(Local_150.f_42, bParam0))
	{
		MISC::SET_BIT(&(Local_150.f_42), bParam0);
	}
}

bool func_5054(int iParam0)//Position - 0x18EC2F
{
	return BitTest(Local_150.f_42, iParam0);
}

void func_5055()//Position - 0x18EC3F
{
	int iVar0;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (func_5057(iVar0))
	{
		if (Local_150.f_356 >= 5 && Local_150.f_356 <= 8)
		{
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(func_5056(iVar0));
		}
	}
}

int func_5056(int iParam0)//Position - 0x18EC7E
{
	int iVar0;
	switch (iParam0)
	{
		case 13:
			iVar0 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
			if (iVar0 == 0)
			{
				return joaat("ARCADE_LOVE_PROFESSOR_P1_CAMERA");
			}
			else
			{
				return joaat("ARCADE_LOVE_PROFESSOR_P2_CAMERA");
			}
			break;
	}
	return joaat("CASINO_SLOT_MACHINE_CAMERA");
}

int func_5057(int iParam0)//Position - 0x18ECBE
{
	switch (iParam0)
	{
		case 11:
		case 13:
		case 19:
			return 1;
			break;
	}
	return 0;
}

void func_5058()//Position - 0x18ECE7
{
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == PLAYER::PLAYER_ID())
		{
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!__LIB_0__::func_864(&(Local_150.f_735)))
				{
					if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__::func_162())
					{
						NETWORK::NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT();
						__LIB_0__::func_795(&(Local_150.f_735), 1, 0);
					}
				}
				else if (__LIB_0__::func_937(&(Local_150.f_735), 1000, 1))
				{
					__LIB_0__::func_794(&(Local_150.f_735));
				}
			}
		}
	}
}

void func_5060()//Position - 0x18ED6B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (Local_150.f_357[Local_150.f_44] != -1)
	{
		bVar0 = true;
		iVar1 = func_488(Local_150.f_357[Local_150.f_44]);
		iVar2 = 0;
		while (iVar2 <= iVar1)
		{
			bVar0 = true;
			if ((func_487(&Local_149, Local_150.f_44, iVar2, Local_150.f_1533) == -1 || __LIB_5__::func_130()) || __LIB_3__::func_853(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_5062(&Local_150, Local_150.f_44, iVar2);
			}
			else
			{
				func_5061(&Local_150, Local_150.f_44, iVar2);
			}
			iVar2++;
		}
	}
}

void func_5061(var uParam0, int iParam1, int iParam2)//Position - 0x18EE08
{
	if (uParam0->f_357[iParam1] != -1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_788[iParam1 /*3*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_788[iParam1 /*3*/][iParam2]));
	}
}

void func_5062(var uParam0, int iParam1, int iParam2)//Position - 0x18EE45
{
	int iVar0;
	if (uParam0->f_357[iParam1] != -1 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_788[iParam1 /*3*/][iParam2]))
	{
		func_550(uParam0->f_1533, iParam1, uParam0->f_357[iParam1], &(uParam0->f_199[iParam1 /*3*/]), &(uParam0->f_157[iParam1]), 0);
		if (func_507(uParam0->f_357[iParam1]))
		{
			func_5063(uParam0->f_357[iParam1], iParam2, &iVar0);
			if (STREAMING::IS_MODEL_VALID(iVar0))
			{
				if (__LIB_0__::func_799(iVar0))
				{
					if (!__LIB_0__::func_86(uParam0->f_199[iParam1 /*3*/]))
					{
						uParam0->f_788[iParam1 /*3*/][iParam2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, uParam0->f_199[iParam1 /*3*/], false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_788[iParam1 /*3*/][iParam2], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_788[iParam1 /*3*/][iParam2], uParam0->f_199[iParam1 /*3*/], false, false, true);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_788[iParam1 /*3*/][iParam2], uParam0->f_157[iParam1]);
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_788[iParam1 /*3*/][iParam2], true, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_788[iParam1 /*3*/][iParam2], true);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_788[iParam1 /*3*/][iParam2], false);
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_788[iParam1 /*3*/][iParam2], true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					}
				}
			}
		}
	}
}

void func_5063(int iParam0, int iParam1, var uParam2)//Position - 0x18EF97
{
	struct<14> Var0;
	func_7(iParam0, &Var0, 13);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Stack.Push(uParam2);
	Call_Loc(Var0.f_13);
}

void func_5064()//Position - 0x18EFB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1887020194:
						if (Global_1663509.f_822)
						{
							return;
						}
						func_5097(iVar0);
						break;
					case 1423658626:
						if (Global_1663509.f_824)
						{
							return;
						}
						func_5095(iVar0);
						break;
					case -877773232:
						if (Global_1663509.f_827)
						{
							return;
						}
						func_5068(iVar0);
						break;
					case -525890435:
						if (Global_1663509.f_205)
						{
							return;
						}
						func_5067(iVar0);
						break;
					case -1902798417:
						if (Global_1663509.f_204)
						{
							return;
						}
						func_5065(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_5065(int iParam0)//Position - 0x18F087
{
	struct<9> Var0;
	int iVar1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		if (Var0.f_0 == -1902798417)
		{
			iVar1 = Var0.f_2;
			Global_1966372[iVar1] = Var0.f_3;
			__LIB_25__::func_579(Var0, iVar1);
		}
	}
}

void func_5067(int iParam0)//Position - 0x18F163
{
	struct<3> Var0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
		{
			if (Var0.f_2 == 0 || Var0.f_2 == 1)
			{
				MISC::SET_BIT(&Local_149, 4);
				if (Var0.f_2 == 1)
				{
					MISC::SET_BIT(&Local_149, 5);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&Local_149, 4);
				MISC::CLEAR_BIT(&Local_149, 5);
			}
		}
	}
}

void func_5068(int iParam0)//Position - 0x18F1BF
{
	struct<39> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1))
		{
			func_5069(Var0.f_36, Var0.f_35, &(Var0.f_2), Var0.f_38, Var0.f_34);
		}
	}
}

void func_5069(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x18F1FE
{
	char* sVar0;
	struct<3> Var1;
	float fVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || !func_5094(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 12:
			sVar0 = "CLAW_MACHINE";
			iParam4 = 3;
			break;
		case 14:
			sVar0 = "STRENGTH_TEST";
			break;
		case 13:
			sVar0 = "LOVE_MACHINE";
			iParam4 = 3;
			break;
		case 11:
			sVar0 = "MADAM_NAZAR";
			iParam4 = 3;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	func_550(Local_150.f_1533, iParam1, iParam0, &Var1, &fVar2, 0);
	if (!func_5093(PLAYER::PLAYER_ID(), Var1))
	{
		return;
	}
	if (bParam3)
	{
		cVar3 = func_5092(iParam0);
		iVar4 = func_5091(iParam0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(cVar3))
		{
			return;
		}
		if (iVar4 == -1)
		{
			return;
		}
		uVar5 = 16;
		__LIB_0__::func_222(&uVar5, iVar4, 0, sVar0, 0, 1);
		__LIB_5__::func_395(&uVar5, iVar4, Var1);
		iVar6 = 1;
		if (func_5088(iParam0))
		{
			iVar6 = 0;
		}
		__LIB_10__::func_563(&uVar5, cVar3, sParam2, 7, iVar6, 0, 0);
	}
	else
	{
		__LIB_4__::func_893(sParam2, sVar0, Var1, iParam4);
		__LIB_0__::func_795(&(Local_150.f_739), 0, 0);
	}
}

int func_5088(int iParam0)//Position - 0x18FB9A
{
	switch (iParam0)
	{
		case 11:
			return (__LIB_3__::func_853(PLAYER::PLAYER_ID()) && __LIB_5__::func_35(PLAYER::PLAYER_ID()) == 11);
		default:
	}
	return 0;
}

int func_5091(int iParam0)//Position - 0x18FC7E
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 11:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

char* func_5092(int iParam0)//Position - 0x18FC9E
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 11:
			sVar0 = "HS3MNAU";
			break;
	}
	return sVar0;
}

int func_5093(int iParam0, struct<3> Param1)//Position - 0x18FCC3
{
	struct<3> Var0;
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)) || ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
	{
		return 0;
	}
	Var0 = { __LIB_1__::func_694(iParam0) };
	fVar1 = Var0.f_2;
	if (fVar1 <= -48f)
	{
		return SYSTEM::VDIST(Var0, Param1) <= 4f;
	}
	return 0;
}

int func_5094(int iParam0)//Position - 0x18FD1B
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (__LIB_0__::func_833())
	{
		return 0;
	}
	if (__LIB_3__::func_853(PLAYER::PLAYER_ID()) && __LIB_5__::func_35(PLAYER::PLAYER_ID()) != iParam0)
	{
		return 0;
	}
	if (__LIB_0__::func_864(&(Local_150.f_739)))
	{
		if (!__LIB_0__::func_937(&(Local_150.f_739), 500, 0))
		{
			return 0;
		}
		else
		{
			__LIB_0__::func_794(&(Local_150.f_739));
		}
	}
	return 1;
}

void func_5095(int iParam0)//Position - 0x18FD93
{
	struct<2> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1))
		{
			func_5096();
			MISC::SET_BIT(&Global_1973079, 3);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_3(2);
			}
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == PLAYER::PLAYER_ID())
			{
				MISC::SET_BIT(&Global_1973079, 2);
			}
		}
	}
}

void func_5096()//Position - 0x18FDF2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		func_4931(iVar0, 2);
		func_4931(iVar0, 0);
		func_4931(iVar0, 7);
		iVar0++;
	}
	Local_150.f_156 = 0;
	Local_150.f_155 = 0;
}

void func_5097(int iParam0)//Position - 0x18FE38
{
	struct<8> Var0;
	int iVar1;
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		iVar1 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
		if (iVar1 != -1)
		{
			if (!func_5109(iVar1))
			{
				func_5102(Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, 0, Var0.f_7);
			}
		}
		if (func_5101(Var0.f_2))
		{
			if (__LIB_5__::func_38(PLAYER::PLAYER_ID()) != -1)
			{
				func_4930(__LIB_5__::func_38(PLAYER::PLAYER_ID()), 3);
			}
			if (!__LIB_18__::func_744(Var0.f_2))
			{
				func_5044(&Local_150);
				func_5099();
				func_5098();
			}
			func_5465(9);
		}
	}
}

void func_5098()//Position - 0x18FEE4
{
	var uVar0;
	var uVar1;
	int iVar2;
	if (__LIB_4__::func_63(joaat("Main_RM")) && __LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		if (Local_150.f_357[iVar2] != -1)
		{
			if (Local_150.f_134[func_5050(iVar2)] == iVar2)
			{
				func_5049(Local_150.f_357[iVar2], &uVar0, &uVar1, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
				{
					if (Local_150.f_91[iVar2] == -1)
					{
						Local_150.f_91[iVar2] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(Local_150.f_91[iVar2], &uVar1, Local_150.f_199[iVar2 /*3*/], &uVar0, false, 20, false);
					}
					else if (AUDIO::HAS_SOUND_FINISHED(Local_150.f_91[iVar2]))
					{
						AUDIO::RELEASE_SOUND_ID(Local_150.f_91[iVar2]);
						Local_150.f_91[iVar2] = -1;
						MISC::CLEAR_BIT(&(Local_150.f_156), func_5050(iVar2));
						MISC::CLEAR_BIT(&(Local_150.f_155), Local_150.f_357[iVar2]);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_5099()//Position - 0x18FFE8
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_150.f_339)))
	{
		AUDIO::STOP_AUDIO_SCENE(&(Local_150.f_339));
	}
}

int func_5101(int iParam0)//Position - 0x19002A
{
	switch (iParam0)
	{
		case 11:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 32:
		case 78:
		case 13:
			return 1;
			break;
	}
	return 0;
}

void func_5102(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5, int iParam6)//Position - 0x1900B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	struct<3> Var4;
	struct<3> Var5;
	char cVar6[64];
	int iVar7;
	struct<103> Var8;
	iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	iVar1 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
	iVar2 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	Var3.f_2 = 14;
	if (iVar0 > -1)
	{
		func_531(iVar2, iParam0, Global_1973079.f_3[iVar0], &Var3);
	}
	if (__LIB_18__::func_744(iParam0))
	{
		__LIB_5__::func_698();
	}
	Var4 = { Local_150.f_199[iVar0 /*3*/] };
	Var5 = { func_5107(iVar2, iParam0, iVar1, 0) };
	if (!__LIB_0__::func_86(Var5))
	{
		Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_150.f_746[iVar0], Var5) };
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
	{
		Local_150.f_523 = iParam0;
		Global_1973079.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var4, 0f, 0f, Local_150.f_157[iVar0], 2, bParam1, bParam2, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), __LIB_5__::func_34(), &(Global_1973079.f_47), Var3.f_1, fParam3, fParam4, 5, 0, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(__LIB_5__::func_34());
		if (func_5101(iParam0))
		{
			func_4930(iVar0, 4);
		}
		if (bParam5)
		{
			StringCopy(&cVar6, "", 64);
			StringCopy(&cVar6, Var3.f_1, 64);
			StringConCat(&cVar6, "_Facial", 64);
			PED::PLAY_FACIAL_ANIM(PLAYER::PLAYER_PED_ID(), &cVar6, &(Global_1973079.f_47));
		}
		Var8.f_1 = 14;
		Var8.f_16 = 14;
		Var8.f_59 = 14;
		Var8.f_102 = 14;
		func_6(iVar2, &Var8);
		if (iParam6 == 0)
		{
			if (Var3.f_0 > 0)
			{
				Var4 = { Local_150.f_199[iVar0 /*3*/] };
				Var5 = { func_5107(iVar2, iParam0, iVar1, 1) };
				if (!__LIB_0__::func_86(Var5))
				{
					Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_150.f_746[iVar0], Var5) };
				}
				if (!__LIB_0__::func_114(iVar2))
				{
					if (func_5105(iVar2, Var3))
					{
						Global_1973079.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var4, 0f, 0f, Local_150.f_157[iVar0], 2, bParam1, bParam2, 1f, 0f, 1f);
					}
				}
				iVar7 = 0;
				while (iVar7 <= (Var8.f_0 - 1))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar7]))
					{
						if (iVar1 == 0)
						{
							if ((__LIB_5__::func_100(iVar2) == 1 && iVar7 == 0) || __LIB_5__::func_100(iVar2) == 0)
							{
								iParam6 = Local_150.f_912[iVar0 /*15*/][iVar7];
								if (ENTITY::DOES_ENTITY_EXIST(iParam6))
								{
									func_5104(iParam6, iVar2, iParam0);
									if (!__LIB_0__::func_114(iVar2))
									{
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam6, __LIB_5__::func_42(), &(Global_1973079.f_47), Var3.f_2[iVar7], fParam3, fParam4, 5);
									}
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (iVar7 == 1)
							{
								iParam6 = Local_150.f_912[iVar0 /*15*/][iVar7];
								if (ENTITY::DOES_ENTITY_EXIST(iParam6))
								{
									func_5104(iParam6, iVar2, iParam0);
									if (!__LIB_0__::func_114(iVar2))
									{
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam6, __LIB_5__::func_42(), &(Global_1973079.f_47), Var3.f_2[iVar7], fParam3, fParam4, 5);
									}
								}
							}
						}
					}
					iVar7++;
				}
				if (!__LIB_0__::func_114(iVar2))
				{
					if (func_5105(iVar2, Var3))
					{
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(__LIB_5__::func_42());
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam6) && !MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[0]))
		{
			func_5104(iParam6, iVar2, iParam0);
			Var4 = { Local_150.f_199[iVar0 /*3*/] };
			Var5 = { func_5107(iVar2, iParam0, iVar1, 1) };
			if (!__LIB_0__::func_86(Var5))
			{
				Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_150.f_746[iVar0], Var5) };
			}
			if (!__LIB_0__::func_114(iVar2))
			{
				Global_1973079.f_2 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var4, 0f, 0f, Local_150.f_157[iVar0], 2, bParam1, bParam2, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam6, __LIB_5__::func_42(), &(Global_1973079.f_47), Var3.f_2[0], fParam3, fParam4, 5);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(__LIB_5__::func_42());
			}
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
	{
	}
}

void func_5104(int iParam0, int iParam1, int iParam2)//Position - 0x1904AF
{
	int iVar0;
	switch (iParam1)
	{
		case 17:
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iVar0 == joaat("ch_prop_ch_usb_drive01x"))
			{
			}
			break;
	}
}

int func_5105(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)//Position - 0x1904D9
{
	int iVar0;
	struct<103> Var1;
	if (iParam0 != -1)
	{
		Var1.f_1 = 14;
		Var1.f_16 = 14;
		Var1.f_59 = 14;
		Var1.f_102 = 14;
		func_6(iParam0, &Var1);
		iVar0 = 0;
		while (iVar0 <= (Var1.f_0 - 1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Param1.f_2[iVar0]))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_5107(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x190541
{
	struct<12> Var0;
	func_7(iParam0, &Var0, 11);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Call_Loc(Var0.f_11);
	return StackVal, StackVal, StackVal;
}

bool func_5109(int iParam0)//Position - 0x19057D
{
	struct<6> Var0;
	func_7(iParam0, &Var0, 5);
	Stack.Push(iParam0);
	Call_Loc(Var0.f_5);
	return StackVal;
}

void func_5110()//Position - 0x190595
{
	func_5131();
	func_5130();
	func_5129();
	func_5099();
	func_5043(&Local_150, 0);
	func_5128();
	if (func_5127())
	{
		if (__LIB_3__::func_853(PLAYER::PLAYER_ID()))
		{
			if (Local_150.f_582 != 4)
			{
				if (func_5054(1))
				{
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, Local_150.f_582);
				}
			}
			func_5121();
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			func_5120(0);
			__LIB_5__::func_398(0);
		}
	}
	Local_150.f_42 = 0;
	Global_1973079.f_45 = -1;
	__LIB_0__::func_794(&(Local_150.f_741));
	func_5118(0);
	func_5117(0);
	func_5116(0);
	__LIB_10__::func_618(0);
	func_5112(0, -1, -1);
	__LIB_5__::func_396(-1);
	func_5465(2);
}

void func_5112(bool bParam0, int iParam1, int iParam2)//Position - 0x19069A
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_162())
	{
		return;
	}
	if (bParam0)
	{
		if ((!func_5113(PLAYER::PLAYER_ID()) || __LIB_5__::func_38(PLAYER::PLAYER_ID()) != iParam1) || __LIB_5__::func_106(PLAYER::PLAYER_ID()) != iParam2)
		{
			MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 0);
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_1 = iParam1;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2 = iParam2;
		}
	}
	else if (func_5113(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 0);
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_1 = -1;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2 = -1;
	}
}

int func_5113(int iParam0)//Position - 0x190753
{
	if (iParam0 != __LIB_0__::func_162())
	{
		return BitTest(uLocal_148[iParam0], 0);
	}
	return 0;
}

void func_5116(bool bParam0)//Position - 0x1907B3
{
	if (bParam0)
	{
		if (!__LIB_5__::func_36(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428), 1);
		}
	}
	else if (__LIB_5__::func_36(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428), 1);
	}
}

void func_5117(bool bParam0)//Position - 0x190800
{
	if (bParam0)
	{
		if (!__LIB_5__::func_101())
		{
			MISC::SET_BIT(&Global_1973079, 8);
		}
	}
	else if (__LIB_5__::func_101())
	{
		MISC::CLEAR_BIT(&Global_1973079, 8);
	}
}

void func_5118(bool bParam0)//Position - 0x190833
{
	if (bParam0)
	{
		if (!func_486(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 1);
		}
	}
	else if (func_486(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 1);
	}
}

void func_5120(bool bParam0)//Position - 0x1908C3
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, bParam0);
	}
}

void func_5121()//Position - 0x1908E2
{
	int iVar0;
	struct<146> Var1;
	struct<2> Var2;
	struct<997> Var3;
	struct<930> Var4;
	struct<2> Var5;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 18:
			Var1.f_3 = -1;
			Var1.f_4 = -1;
			Var1.f_34 = 1062333317;
			Var1.f_35 = 1062501089;
			Var1.f_37 = 4;
			Var1.f_38 = 1056964608;
			Var1.f_47 = 32;
			Var1.f_80 = 32;
			Var1.f_113 = 32;
			Local_150.f_583 = { Var1 };
			Local_150.f_729 = { Var2 };
			break;
		case 17:
			func_5122();
			Var3 = 1;
			Var3.f_12 = 4;
			Var3.f_29.f_1 = 12;
			Var3.f_29.f_699 = 1065353216;
			Var3.f_739 = -1;
			Var3.f_757 = 8;
			Var3.f_766 = 8;
			Var3.f_766.f_1 = 8;
			Var3.f_766.f_1.f_25 = 8;
			Var3.f_766.f_1.f_25.f_25 = 8;
			Var3.f_766.f_1.f_25.f_25.f_25 = 8;
			Var3.f_766.f_1.f_25.f_25.f_25.f_25 = 8;
			Var3.f_766.f_1.f_25.f_25.f_25.f_25.f_25 = 8;
			Var3.f_766.f_1.f_25.f_25.f_25.f_25.f_25.f_25 = 8;
			Var3.f_766.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25 = 8;
			Var3.f_967 = 3;
			Var3.f_971 = 8;
			Var3.f_980 = 8;
			Var3.f_992 = -1;
			Var3.f_993.f_3 = 255;
			Local_151 = { Var3 };
			Var4 = 1;
			Var4.f_12 = 4;
			Var4.f_29.f_1 = 12;
			Var4.f_29.f_699 = 1065353216;
			Var4.f_739 = -1;
			Var4.f_757 = 4;
			Var4.f_757.f_1 = 6;
			Var4.f_757.f_1.f_1 = 5;
			Var4.f_757.f_1.f_1.f_6 = 5;
			Var4.f_757.f_1.f_1.f_6.f_6 = 5;
			Var4.f_757.f_1.f_1.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_1.f_6.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37 = 6;
			Var4.f_757.f_1.f_37.f_1 = 5;
			Var4.f_757.f_1.f_37.f_1.f_6 = 5;
			Var4.f_757.f_1.f_37.f_1.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_1.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_1.f_6.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37 = 6;
			Var4.f_757.f_1.f_37.f_37.f_1 = 5;
			Var4.f_757.f_1.f_37.f_37.f_1.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_1.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_1.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_1.f_6.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_37 = 6;
			Var4.f_757.f_1.f_37.f_37.f_37.f_1 = 5;
			Var4.f_757.f_1.f_37.f_37.f_37.f_1.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6.f_6.f_6 = 5;
			Var4.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
			Var4.f_906 = 4;
			Var4.f_911 = 6;
			Var4.f_926.f_3 = 255;
			Local_152 = { Var4 };
			Local_150.f_729 = { Var5 };
			break;
	}
}

int func_5122()//Position - 0x190B00
{
	struct<103> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	Var0.f_1 = 14;
	Var0.f_16 = 14;
	Var0.f_59 = 14;
	Var0.f_102 = 14;
	iVar4 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	func_6(Local_150.f_357[iVar4], &Var0);
	if (iVar4 != -1)
	{
		if (Var0.f_0 > 0)
		{
			__LIB_15__::func_820();
			__LIB_5__::func_698();
			if (func_5124() || __LIB_16__::func_761())
			{
				return 0;
			}
			iVar5 = 0;
			while (iVar5 <= (Var0.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_912[iVar4 /*15*/][iVar5]))
				{
					if (!__LIB_4__::func_987(Local_150.f_912[iVar4 /*15*/][iVar5]))
					{
						return 0;
					}
					if (ENTITY::IS_ENTITY_ATTACHED(Local_150.f_912[iVar4 /*15*/][iVar5]))
					{
						ENTITY::DETACH_ENTITY(Local_150.f_912[iVar4 /*15*/][iVar5], true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_150.f_912[iVar4 /*15*/][iVar5], true);
					ENTITY::SET_ENTITY_VISIBLE(Local_150.f_912[iVar4 /*15*/][iVar5], false, false);
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_150.f_746[iVar4], Var0.f_16[iVar5 /*3*/]) };
					fVar3 = ENTITY::GET_ENTITY_HEADING(Local_150.f_746[iVar4]);
					Var2 = { Var0.f_59[iVar5 /*3*/] };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_150.f_912[iVar4 /*15*/][iVar5], Var1, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_150.f_912[iVar4 /*15*/][iVar5], Var2.f_0, Var2.f_1, fVar3, 2, true);
				}
				iVar5++;
			}
		}
	}
	return 1;
}

bool func_5124()//Position - 0x190C7E
{
	return PED::IS_SYNCHRONIZED_SCENE_RUNNING(__LIB_5__::func_42());
}

int func_5127()//Position - 0x190CD7
{
	int iVar0;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (iVar0 == 13)
		{
			return 0;
		}
	}
	return 1;
}

void func_5128()//Position - 0x190CFB
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
	{
		STREAMING::REMOVE_ANIM_DICT(&(Global_1973079.f_47));
		StringCopy(&(Global_1973079.f_47), "", 64);
	}
}

void func_5129()//Position - 0x190D25
{
	Global_1931414 = -1;
	Global_1931416 = -1;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_4 = -1;
	}
}

void func_5130()//Position - 0x190D55
{
	struct<50> Var0;
	if (func_4946(&Local_150, 10))
	{
		__LIB_1__::func_895(1, -1);
		Var0.f_9 = 4;
		Var0.f_19 = 21;
		Local_150.f_532 = { Var0 };
	}
}

void func_5131()//Position - 0x190D8D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		func_4931(iVar0, 1);
		func_4931(iVar0, 4);
		func_4931(iVar0, 3);
		iVar0++;
	}
	func_5052(0);
}

void func_5132()//Position - 0x190DCC
{
	if (func_5122())
	{
		if (func_5127())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			func_5120(0);
		}
		func_5465(11);
	}
}

void func_5133()//Position - 0x190E0F
{
	int iVar0;
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	if (iVar0 > -1)
	{
		if (func_4934(iVar0, 4))
		{
			if (__LIB_5__::func_35(PLAYER::PLAYER_ID()) == 13)
			{
				if (!func_5139())
				{
					func_5465(11);
				}
			}
			else if (func_5138(Local_150.f_523) && func_5136(Local_150.f_523, 0, 0, 0))
			{
				if (__LIB_16__::func_229() || func_530(Local_150.f_523, 0.98f))
				{
					if (func_494(__LIB_5__::func_35(PLAYER::PLAYER_ID())))
					{
						func_5465(10);
					}
					else
					{
						if (func_5127())
						{
							__LIB_5__::func_698();
							__LIB_15__::func_820();
							if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
							{
								CAM::STOP_GAMEPLAY_HINT(false);
							}
							if (!__LIB_1__::func_81())
							{
								__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
							}
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							func_5120(0);
						}
						func_5465(11);
					}
				}
			}
			else if (!__LIB_0__::func_864(&(Local_150.f_741)))
			{
				__LIB_0__::func_795(&(Local_150.f_741), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_150.f_741), 10000, 0))
			{
				__LIB_0__::func_794(&(Local_150.f_741));
				if (func_494(__LIB_5__::func_35(PLAYER::PLAYER_ID())))
				{
					func_5465(10);
				}
				else
				{
					func_5465(11);
				}
			}
		}
		else if (func_494(__LIB_5__::func_35(PLAYER::PLAYER_ID())))
		{
			func_5465(10);
		}
		else
		{
			func_5465(11);
		}
	}
	else if (func_494(__LIB_5__::func_35(PLAYER::PLAYER_ID())))
	{
		func_5465(10);
	}
	else
	{
		func_5465(11);
	}
}

int func_5136(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x191030
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
		func_531(iVar0, iParam0, iVar2, &Var1);
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
									__LIB_15__::func_820();
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

int func_5138(int iParam0)//Position - 0x1911EC
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
				func_531(iVar2, iParam0, __LIB_5__::func_106(PLAYER::PLAYER_ID()), &Var1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var1.f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
				{
					return ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1973079.f_47), Var1.f_1, 3);
				}
			}
		}
	}
	return 0;
}

int func_5139()//Position - 0x191270
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
		if (iVar0 > -1)
		{
			if (__LIB_5__::func_35(PLAYER::PLAYER_ID()) == 13)
			{
				Var1.f_2 = 14;
				iVar2 = 55;
				while (iVar2 <= 69)
				{
					func_531(13, iVar2, __LIB_5__::func_106(PLAYER::PLAYER_ID()), &Var1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(Var1.f_1))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1973079.f_47), Var1.f_1, 3))
						{
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

void func_5140()//Position - 0x1912F7
{
	int iVar0;
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (func_5383(iVar0))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
		func_5382(iVar0, &Local_150);
		switch (iVar0)
		{
			case 17:
				func_5144();
				break;
			case 14:
				if (func_5143(PLAYER::PLAYER_ID()))
				{
					func_5465(11);
					return;
				}
				break;
		}
		Local_150.f_731.f_2 = 2;
		Local_150.f_731.f_3 = 202;
		if (__LIB_5__::func_120(&(Local_150.f_731), 1, 500))
		{
			func_4955(&Local_150, 8);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			Local_150.f_532.f_48 = NETWORK::GET_NETWORK_TIME();
		}
		if (func_5141(iVar0))
		{
			if (Local_150.f_523 != 11)
			{
				__LIB_38__::func_785(&(Local_150.f_523), 11);
			}
		}
	}
	else
	{
		func_5465(11);
	}
}

int func_5141(int iParam0)//Position - 0x1913C3
{
	if (iParam0 != 19)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_5143(int iParam0)//Position - 0x191447
{
	if (iParam0 != __LIB_0__::func_162())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_428, 3);
	}
	return 0;
}

void func_5144()//Position - 0x19146A
{
	switch (Local_150.f_532.f_14)
	{
		case 0:
			if ((Local_150.f_523 != 79 && Local_150.f_523 != 80) && Local_150.f_523 != 11)
			{
				func_5345(&Local_151, &(Local_150.f_729), 4, -1, 0);
			}
			if (BitTest(Local_150.f_729, 0))
			{
				func_5344(&Local_151, &(Local_150.f_729), 0, joaat("practice"), 0);
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 78);
			}
			else if (BitTest(Local_150.f_729, 2) || BitTest(Local_150.f_729, 1))
			{
				func_5344(&Local_151, &(Local_150.f_729), 0, joaat("practice"), 0);
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 79);
			}
			if ((Local_150.f_523 == 79 && func_5138(79)) && func_5136(79, 0, 0, 0))
			{
				__LIB_38__::func_785(&(Local_150.f_523), 11);
			}
			break;
		case 1:
			if ((Local_150.f_523 != 79 && Local_150.f_523 != 80) && Local_150.f_523 != 11)
			{
				func_5300(&Local_152, &(Local_150.f_729), 4, -1, 0);
			}
			if (BitTest(Local_150.f_729, 0))
			{
				func_5298(&Local_152, &(Local_150.f_729), 0, joaat("practice"), 0);
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 78);
			}
			else if (BitTest(Local_150.f_729, 2) || BitTest(Local_150.f_729, 1))
			{
				func_5298(&Local_152, &(Local_150.f_729), 0, joaat("practice"), 0);
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 79);
			}
			if ((Local_150.f_523 == 79 && func_5138(79)) && func_5136(79, 0, 0, 0))
			{
				__LIB_38__::func_785(&(Local_150.f_523), 11);
			}
			break;
		case 2:
			if ((Local_150.f_523 != 79 && Local_150.f_523 != 80) && Local_150.f_523 != 11)
			{
				func_5241(&Local_151, &(Local_150.f_729), 8, -1);
			}
			if (BitTest(Local_150.f_729, 0))
			{
				func_5239(&Local_151, &(Local_150.f_729), 0, joaat("practice"), __LIB_1__::func_360(9572, -1, 0));
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 78);
			}
			else if (BitTest(Local_150.f_729, 2) || BitTest(Local_150.f_729, 1))
			{
				func_5239(&Local_151, &(Local_150.f_729), 0, joaat("practice"), __LIB_1__::func_360(9572, -1, 0));
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 79);
			}
			if ((Local_150.f_523 == 79 && func_5138(79)) && func_5136(79, 0, 0, 0))
			{
				__LIB_38__::func_785(&(Local_150.f_523), 11);
			}
			break;
		case 3:
			if ((Local_150.f_523 != 79 && Local_150.f_523 != 80) && Local_150.f_523 != 11)
			{
				func_5155(&(Local_150.f_729), &Local_151, 1);
			}
			if (BitTest(Local_150.f_729, 0))
			{
				func_5145(&(Local_150.f_729), &Local_151);
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 78);
			}
			else if (BitTest(Local_150.f_729, 2) || BitTest(Local_150.f_729, 1))
			{
				func_5145(&(Local_150.f_729), &Local_151);
				Local_150.f_523.f_3 = 0;
				Local_150.f_523.f_4 = 0;
				__LIB_38__::func_785(&(Local_150.f_523), 79);
			}
			if ((Local_150.f_523 == 79 && func_5138(79)) && func_5136(79, 0, 0, 0))
			{
				__LIB_38__::func_785(&(Local_150.f_523), 11);
			}
			break;
	}
}

void func_5145(int* iParam0, var* uParam1)//Position - 0x191873
{
	var uVar0;
	__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPIsland_Voltage");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPIsland_Voltage_BG");
	if (!BitTest(*iParam0, 5))
	{
		__LIB_1__::func_354(9534, __LIB_1__::func_360(9534, -1, 0) + 1, -1, 1, 0);
	}
	uVar0 = Global_1944552;
	func_5151(iParam0, uParam1, uVar0, 11129822, iLocal_127 + 1, SYSTEM::ROUND(fLocal_128));
	fLocal_128 = 0f;
	iLocal_122 = 0;
	iLocal_127 = 0;
	iLocal_146 = 5;
	func_5149(uParam1);
	AUDIO::STOP_SOUND(uParam1->f_740);
	AUDIO::STOP_SOUND(uParam1->f_739);
	uParam1->f_740 = -1;
	uParam1->f_739 = -1;
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_V_MG");
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_H4_Voltage_Hack_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_H4_Voltage_Hack_Scene");
	}
	HUD::CLEAR_HELP(true);
	__LIB_20__::func_877(iParam0, uParam1, 0);
}

void func_5149(var uParam0)//Position - 0x191A5A
{
	if (uParam0->f_28 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_28));
		__LIB_1__::func_403(&(uParam0->f_29));
		uParam0->f_28 = 0;
		uParam0->f_1 = 1;
		fLocal_130 = 0f;
	}
	if (!uParam0->f_1)
	{
		uParam0->f_1 = 1;
	}
}

void func_5151(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x191B76
{
	int iVar0;
	__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
	if (BitTest(*iParam0, 0))
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = iParam4;
	}
	STATS::PLAYSTATS_HEIST4_HACK(uParam2, iParam3, BitTest(*iParam0, 0), iVar0, iParam5);
}

void func_5155(int* iParam0, var* uParam1, bool bParam2)//Position - 0x191C38
{
	func_5185(iParam0, uParam1);
	func_5182(uParam1);
	func_5170(iParam0, uParam1);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_5__::func_120(&(uParam1->f_24), 1, 1500))
		{
			__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
			MISC::SET_BIT(iParam0, 2);
		}
	}
	else if (__LIB_5__::func_120(&(uParam1->f_20), 1, 1500))
	{
		__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
		MISC::SET_BIT(iParam0, 2);
	}
	if (BitTest(*iParam0, 5))
	{
		return;
	}
	if ((fLocal_128 >= 120000f && !__LIB_0__::func_703(iLocal_122, 64)) && !BitTest(*iParam0, 0))
	{
		if (bParam2 && !func_5169())
		{
			return;
		}
		if (!__LIB_0__::func_703(iLocal_122, 2048))
		{
			AUDIO::STOP_SOUND(uParam1->f_739);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Fail_Bink", uParam1->f_741, true);
			HUD::CLEAR_HELP(true);
			__LIB_1__::func_330(&iLocal_122, 2048);
		}
		if (func_5161(iParam0, uParam1, 4000, "Voltage_Fail"))
		{
			AUDIO::STOP_SOUND(uParam1->f_739);
			if (bParam2)
			{
				MISC::SET_BIT(iParam0, 1);
				__LIB_1__::func_289(uParam1, 6);
			}
			else
			{
				iLocal_127++;
				func_5156(iParam0);
				fLocal_128 = 0f;
				iParam0->f_1 = SYSTEM::ROUND(fLocal_128);
				iLocal_146 = 3;
			}
		}
	}
}

void func_5156(int* iParam0)//Position - 0x191D7A
{
	func_5159(iParam0);
	Local_147[0 /*4*/] = 0;
	Local_147[1 /*4*/] = 1;
	Local_147[2 /*4*/] = 2;
	Local_147[0 /*4*/].f_1 = 2;
	Local_147[1 /*4*/].f_1 = 1;
	Local_147[2 /*4*/].f_1 = 0;
	Local_147[0 /*4*/].f_2 = 1;
	Local_147[1 /*4*/].f_2 = 0;
	Local_147[2 /*4*/].f_2 = 2;
	Local_147[0 /*4*/].f_3 = 0;
	Local_147[1 /*4*/].f_3 = 0;
	Local_147[2 /*4*/].f_3 = 0;
	iLocal_137 = 0;
	iLocal_138 = 0;
	iLocal_139 = 0;
	if (__LIB_0__::func_703(iLocal_122, 2))
	{
		__LIB_2__::func_712(&iLocal_122, 2);
	}
	if (__LIB_0__::func_703(iLocal_122, 4))
	{
		__LIB_2__::func_712(&iLocal_122, 4);
	}
	if (__LIB_0__::func_703(iLocal_122, 8))
	{
		__LIB_2__::func_712(&iLocal_122, 8);
	}
	if (__LIB_0__::func_703(iLocal_122, 128))
	{
		__LIB_2__::func_712(&iLocal_122, 128);
	}
	if (__LIB_0__::func_703(iLocal_122, 256))
	{
		__LIB_2__::func_712(&iLocal_122, 256);
	}
	if (__LIB_0__::func_703(iLocal_122, 512))
	{
		__LIB_2__::func_712(&iLocal_122, 512);
	}
	if (__LIB_0__::func_703(iLocal_122, 2048))
	{
		__LIB_2__::func_712(&iLocal_122, 2048);
	}
	if (__LIB_0__::func_703(iLocal_122, 1024))
	{
		__LIB_2__::func_712(&iLocal_122, 1024);
	}
}

void func_5159(var uParam0)//Position - 0x191EBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_144[0] = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	iLocal_144[1] = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	while (iLocal_144[0] == iLocal_144[1])
	{
		iLocal_144[1] = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	}
	iLocal_144[2] = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	while (iLocal_144[1] == iLocal_144[2])
	{
		iLocal_144[2] = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	}
	iLocal_145[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	iLocal_145[1] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	while (iLocal_145[0] == iLocal_145[1])
	{
		iLocal_145[1] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	iLocal_145[2] = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	while (iLocal_145[1] == iLocal_145[2])
	{
		iLocal_145[2] = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	while (iVar0 == iVar1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	while (iVar0 == iVar2 || iVar1 == iVar2)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (BitTest(*uParam0, 5))
	{
		iLocal_144[0] = 5;
		iLocal_144[1] = 2;
		iLocal_144[2] = 5;
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iLocal_145[iVar0] = 0;
		iLocal_145[iVar1] = 1;
		iLocal_145[iVar2] = 2;
	}
	iLocal_136 = ((__LIB_20__::func_800(iLocal_144[0], iLocal_145[iVar0]) + __LIB_20__::func_800(iLocal_144[1], iLocal_145[iVar1])) + __LIB_20__::func_800(iLocal_144[2], iLocal_145[iVar2]));
}

int func_5161(int* iParam0, var* uParam1, int iParam2, char* sParam3)//Position - 0x192077
{
	if (!__LIB_0__::func_864(&(uParam1->f_744)))
	{
		__LIB_0__::func_627(&(uParam1->f_744), 0, 0);
		__LIB_20__::func_803(uParam1, sParam3);
	}
	else if (func_5162(uParam1) || __LIB_0__::func_937(&(uParam1->f_744), iParam2, 0))
	{
		GRAPHICS::RELEASE_BINK_MOVIE(uParam1->f_5);
		return 1;
	}
	return 0;
}

int func_5162(var* uParam0)//Position - 0x1920CA
{
	GRAPHICS::PLAY_BINK_MOVIE(uParam0->f_5);
	GRAPHICS::DRAW_BINK_MOVIE(uParam0->f_5, func_5165(0.5f), 0.5f, (__LIB_20__::func_802(1920f) * fLocal_118), __LIB_20__::func_801(1080f), 0f, 255, 255, 255, 255);
	GRAPHICS::SET_BINK_SHOULD_SKIP(uParam0->f_5, true);
	if (GRAPHICS::GET_BINK_MOVIE_TIME(uParam0->f_5) >= 99f)
	{
		GRAPHICS::STOP_BINK_MOVIE(uParam0->f_5);
		GRAPHICS::RELEASE_BINK_MOVIE(uParam0->f_5);
		return 1;
	}
	return 0;
}

float func_5165(float fParam0)//Position - 0x192166
{
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_117));
	return fParam0;
}

int func_5169()//Position - 0x1921B6
{
	if (Local_124.f_3 > 0)
	{
		Local_124.f_3 = (Local_124.f_3 - SYSTEM::ROUND(((0f + (100f * SYSTEM::TIMESTEP())) * 2f)));
	}
	else
	{
		Local_124.f_3 = 0;
		return 1;
	}
	return 0;
}

void func_5170(int* iParam0, var* uParam1)//Position - 0x1921EE
{
	struct<9> Var0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (*uParam1 == 4)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/))
			{
				uParam1->f_1 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			uParam1->f_1 = 1;
		}
		Var0 = { __LIB_1__::func_404() };
		if (uParam1->f_1)
		{
			__LIB_1__::func_539(&(uParam1->f_29));
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					fLocal_130 = (fLocal_130 + (0f + (1000f * SYSTEM::TIMESTEP())));
					__LIB_7__::func_603(SYSTEM::ROUND(fLocal_130), 1500, "HG_INT_04a" /* GXT: Aborting Hack */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, 2, 1);
					__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam1->f_29), 0, 363);
				}
				else
				{
					fLocal_130 = 0f;
					__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam1->f_29), 0, 363);
				}
			}
			else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/))
			{
				fLocal_130 = (fLocal_130 + (0f + (1000f * SYSTEM::TIMESTEP())));
				__LIB_7__::func_603(SYSTEM::ROUND(fLocal_130), 1500, "HG_INT_04a" /* GXT: Aborting Hack */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, 2, 1);
				__LIB_1__::func_513(2, 214, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam1->f_29), 0, 363);
			}
			else
			{
				fLocal_130 = 0f;
				__LIB_1__::func_513(2, 214, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam1->f_29), 0, 363);
			}
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "HG_INT_01" /* GXT: Select */, &(uParam1->f_29), 0);
			__LIB_2__::func_817(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 6, true), "HG_INT_03" /* GXT: Move Selector */, &(uParam1->f_29), 0);
			uParam1->f_1 = 0;
		}
		__LIB_5__::func_693(&(uParam1->f_28), &Var0, &(uParam1->f_29), 0);
	}
	else
	{
		func_5149(uParam1);
	}
}

void func_5182(var* uParam0)//Position - 0x192B9E
{
	if (*uParam0 != 4 || __LIB_0__::func_75())
	{
		return;
	}
	if (!__LIB_0__::func_703(iLocal_122, 16))
	{
		switch (SYSTEM::FLOOR((fLocal_128 / 12000f)))
		{
			case 0:
				__LIB_1__::func_707("HG_VH_HELP_00" /* GXT: To bypass the system you will need to link the numbers on the left to the modifiers on the right. You must link them in a specific way to achieve a target sum. */, -1);
				break;
			case 1:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_1__::func_707("HG_VH_HELP_01_PC" /* GXT: Use ~INPUTGROUP_CURSOR~ or ~INPUT_CELLPHONE_UP~/~INPUT_CELLPHONE_DOWN~ to link the nodes.~n~Press ~INPUT_CURSOR_ACCEPT~ to register the link and add it to the total.~n~Press ~INPUT_CURSOR_CANCEL~ to go back a step. */, -1);
				}
				else
				{
					__LIB_1__::func_707("HG_VH_HELP_01" /* GXT: Use ~INPUTGROUP_FRONTEND_LSTICK_ALL~ or ~INPUTGROUP_FRONTEND_DPAD_ALL~ to link the nodes.~n~Press ~INPUT_FRONTEND_ACCEPT~ to register the link and add it to the total.~n~Press ~INPUT_FRONTEND_CANCEL~ to go back a step. */, -1);
				}
				break;
			case 2:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_1__::func_707("HG_VH_HELP_02_PC" /* GXT: You need to solve the grid before the battery depletes.~n~You will receive a time penalty for an incorrect sum.~n~Hold ~INPUT_FRONTEND_DELETE~ to exit. */, -1);
				}
				else
				{
					__LIB_1__::func_707("HG_VH_HELP_02" /* GXT: You need to solve the grid before the battery depletes.~n~You will receive a time penalty for an incorrect sum.~n~Hold ~INPUT_FRONTEND_CANCEL~ to exit. */, -1);
				}
				break;
			case 3:
				__LIB_5__::func_401("HG_VH_HELP_03" /* GXT: Match the numerical value on the left with the symbols on the right.~n~Your result must match the Target value at the top of the screen. */);
				__LIB_1__::func_330(&iLocal_122, 16);
				break;
			}
	}
}

void func_5185(int* iParam0, var* uParam1)//Position - 0x192C8E
{
	int iVar0;
	bool bVar1;
	func_5231(uParam1, iParam0);
	if (MISC::IS_PC_VERSION())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	switch (iLocal_146)
	{
		case 5:
			__LIB_20__::func_818(uParam1, iParam0);
			iLocal_146 = 0;
			break;
		case 0:
			func_5228(iParam0, uParam1);
			if (uParam1->f_5 != 0)
			{
				__LIB_20__::func_817(iParam0, uParam1);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
				__LIB_1__::func_92();
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			__LIB_0__::func_963(1, 1, 1, 0);
			Global_4718592.f_163007 = 1;
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 16);
			uParam1->f_20.f_3 = 202;
			uParam1->f_20.f_2 = 2;
			uParam1->f_24.f_2 = 2;
			uParam1->f_24.f_3 = 214;
			MISC::CLEAR_BIT(iParam0, 2);
			__LIB_1__::func_403(&(uParam1->f_29));
			iLocal_146 = 1;
			break;
		case 1:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPIsland_Voltage", false);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPIsland_Voltage_BG", false);
			uParam1->f_741 = "DLC_H4_Voltage_Minigame_Sounds";
			if (uParam1->f_739 == -1)
			{
				uParam1->f_739 = AUDIO::GET_SOUND_ID();
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_V_MG", false, -1))
			{
				return;
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Loading_Bink", uParam1->f_741, true);
			iLocal_146 = 2;
			break;
		case 2:
			if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPIsland_Voltage"))
			{
				break;
			}
			if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPIsland_Voltage_BG"))
			{
				break;
			}
			if (func_5162(uParam1) || __LIB_0__::func_937(&(uParam1->f_750), 4000, 0))
			{
				GRAPHICS::RELEASE_BINK_MOVIE(uParam1->f_5);
				__LIB_1__::func_289(uParam1, 4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Main_Screen_Draw", uParam1->f_741, true);
				iLocal_146 = 3;
			}
			break;
		case 3:
			if (*uParam1 != 4)
			{
				break;
			}
			func_5223(iParam0);
			func_5220(SYSTEM::ROUND(fLocal_142), __LIB_5__::func_403(956f, 920f), 0);
			func_5219();
			if (func_5218(uParam1, 1))
			{
				func_5217();
				while (func_5216(iLocal_139))
				{
					func_5217();
				}
			}
			if (func_5215(uParam1, 1))
			{
				func_5214();
				while (func_5216(iLocal_139))
				{
					func_5214();
				}
			}
			if (fLocal_128 >= 120000f)
			{
				return;
			}
			switch (iLocal_139)
			{
				case 0:
					func_5213(Local_126[0 /*23*/][1 /*2*/], 1);
					func_5212(Local_126[0 /*23*/][1 /*2*/], 1);
					break;
				case 1:
					func_5213(Local_126[0 /*23*/][5 /*2*/], 0);
					func_5212(Local_126[0 /*23*/][5 /*2*/], 0);
					break;
				case 2:
					func_5213(Local_126[0 /*23*/][9 /*2*/], 2);
					func_5212(Local_126[0 /*23*/][9 /*2*/], 2);
					break;
			}
			if (fLocal_128 < 120000f && !func_5211())
			{
				__LIB_33__::func_684("MPIsland_Voltage_BG", "VOLTAGE_PIXEL_GRID", __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), 0f, Local_125);
				return;
			}
			if (__LIB_20__::func_814())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OS_Draw", uParam1->f_741, true);
				iLocal_134 = 12;
				iLocal_135 = __LIB_20__::func_813(iLocal_139);
				__LIB_2__::func_712(&iLocal_122, 2048);
				__LIB_2__::func_712(&iLocal_122, 1024);
				iLocal_143 = iLocal_139;
				while (func_5207(iLocal_143))
				{
					iLocal_143++;
					if (iLocal_143 >= 3)
					{
						iLocal_143 = 0;
					}
					iLocal_135 = __LIB_20__::func_813(iLocal_143);
				}
				iLocal_146 = 4;
			}
			if (__LIB_0__::func_703(iLocal_122, 128))
			{
				func_5206(Local_147[0 /*4*/], Local_147[0 /*4*/].f_1, 5, 0);
			}
			if (__LIB_0__::func_703(iLocal_122, 256))
			{
				func_5206(Local_147[1 /*4*/], Local_147[1 /*4*/].f_1, 4, 1);
			}
			if (__LIB_0__::func_703(iLocal_122, 512))
			{
				func_5206(Local_147[2 /*4*/], Local_147[2 /*4*/].f_1, 6, 2);
			}
			if (fLocal_142 > IntToFloat(iLocal_137))
			{
				fLocal_142 = (fLocal_142 - (0f + (50f * SYSTEM::TIMESTEP())));
				if (fLocal_142 < IntToFloat(iLocal_137))
				{
					fLocal_142 = SYSTEM::TO_FLOAT(iLocal_137);
				}
			}
			if (fLocal_142 < IntToFloat(iLocal_137))
			{
				fLocal_142 = (fLocal_142 + (0f + (50f * SYSTEM::TIMESTEP())));
				if (fLocal_142 > IntToFloat(iLocal_137))
				{
					fLocal_142 = SYSTEM::TO_FLOAT(iLocal_137);
				}
			}
			if (__LIB_20__::func_812() && iLocal_138 > 0)
			{
				iLocal_138 = (iLocal_138 - 1);
				func_5204(Local_147[iLocal_139 /*4*/].f_1, iLocal_139);
				Local_147[iLocal_139 /*4*/].f_3 = 0;
				if (iLocal_138 == 0)
				{
					if (iLocal_140 >= 0)
					{
						iLocal_139 = iLocal_140;
						iLocal_140 = -1;
					}
				}
				if (iLocal_138 == 1)
				{
					if (iLocal_141 >= 0)
					{
						iLocal_139 = iLocal_141;
						iLocal_141 = -1;
					}
				}
				func_5204(Local_147[iLocal_139 /*4*/].f_1, iLocal_139);
				switch (iLocal_139)
				{
					case 0:
						Local_147[0 /*4*/] = 0;
						Local_147[0 /*4*/].f_1 = 2;
						Local_147[0 /*4*/].f_2 = 1;
						Local_147[0 /*4*/].f_3 = 0;
						break;
					case 1:
						Local_147[1 /*4*/] = 1;
						Local_147[1 /*4*/].f_1 = 1;
						Local_147[1 /*4*/].f_2 = 0;
						Local_147[1 /*4*/].f_3 = 0;
						break;
					case 2:
						Local_147[2 /*4*/] = 2;
						Local_147[2 /*4*/].f_1 = 0;
						Local_147[2 /*4*/].f_2 = 2;
						Local_147[2 /*4*/].f_3 = 0;
						break;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Disconnect_Wire", uParam1->f_741, true);
			}
			break;
		case 4:
			if (*uParam1 != 4)
			{
				break;
			}
			iLocal_137 = ((Local_147[0 /*4*/].f_3 + Local_147[1 /*4*/].f_3) + Local_147[2 /*4*/].f_3);
			func_5223(iParam0);
			if (!__LIB_0__::func_703(iLocal_122, 64) && iLocal_138 < 3)
			{
				if (__LIB_0__::func_703(iLocal_122, 128))
				{
					func_5206(Local_147[0 /*4*/], Local_147[0 /*4*/].f_1, 5, 0);
				}
				if (__LIB_0__::func_703(iLocal_122, 256))
				{
					func_5206(Local_147[1 /*4*/], Local_147[1 /*4*/].f_1, 4, 1);
				}
				if (__LIB_0__::func_703(iLocal_122, 512))
				{
					func_5206(Local_147[2 /*4*/], Local_147[2 /*4*/].f_1, 6, 2);
				}
			}
			if (iLocal_138 < 3)
			{
				Local_147[iLocal_139 /*4*/].f_1 = __LIB_20__::func_811(iLocal_135);
				if (!__LIB_0__::func_703(iLocal_122, 64))
				{
					func_5192(uParam1, Local_147[iLocal_139 /*4*/], Local_147[iLocal_139 /*4*/].f_2, iLocal_139);
				}
				if (iLocal_134 >= 9)
				{
					Local_147[iLocal_139 /*4*/].f_3 = __LIB_20__::func_800(iLocal_144[iLocal_139], iLocal_145[Local_147[iLocal_139 /*4*/].f_1]);
				}
				else
				{
					Local_147[iLocal_139 /*4*/].f_3 = 0;
				}
				if (fLocal_128 >= 120000f && !__LIB_0__::func_703(iLocal_122, 64))
				{
					AUDIO::STOP_SOUND(uParam1->f_740);
					AUDIO::STOP_SOUND(uParam1->f_739);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Minigame_Failure", uParam1->f_741, true);
					iLocal_127++;
					__LIB_2__::func_712(&iLocal_122, 2048);
					__LIB_1__::func_330(&iLocal_122, 64);
				}
				if ((__LIB_20__::func_814() && !func_5207(Local_147[iLocal_139 /*4*/].f_1)) && !__LIB_0__::func_703(iLocal_122, 64))
				{
					func_5191(Local_147[iLocal_139 /*4*/].f_1);
					__LIB_20__::func_806(iLocal_145[iLocal_139], uParam1);
					switch (iLocal_139)
					{
						case 0:
							__LIB_1__::func_330(&iLocal_122, 128);
							break;
						case 1:
							__LIB_1__::func_330(&iLocal_122, 256);
							break;
						case 2:
							__LIB_1__::func_330(&iLocal_122, 512);
							break;
					}
					if (iLocal_138 >= 2)
					{
						if (iLocal_137 == iLocal_136)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "All_Connected_Correct", uParam1->f_741, true);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "All_Connected_Incorrect", uParam1->f_741, true);
						}
					}
					__LIB_1__::func_330(&iLocal_122, 64);
				}
				if (__LIB_0__::func_703(iLocal_122, 64))
				{
					fLocal_129 = (fLocal_129 + (0f + (1000f * SYSTEM::TIMESTEP())));
					if (fLocal_128 < 120000f && fLocal_129 < 1250f)
					{
						if ((fLocal_129 % 500f) <= 250f)
						{
							func_5206(Local_147[iLocal_139 /*4*/], Local_147[iLocal_139 /*4*/].f_1, Local_147[iLocal_139 /*4*/].f_2, iLocal_139);
						}
						else
						{
							func_5206(Local_147[iLocal_139 /*4*/], Local_147[iLocal_139 /*4*/].f_1, Local_147[iLocal_139 /*4*/].f_2 + 4, iLocal_139);
						}
					}
					if (fLocal_129 >= 1250f)
					{
						if (iLocal_138 >= 2)
						{
							if (fLocal_129 <= 2500f)
							{
								if (iLocal_137 == iLocal_136)
								{
									if (!__LIB_0__::func_703(iLocal_122, 1024))
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Minigame_Success", uParam1->f_741, true);
										__LIB_1__::func_330(&iLocal_122, 1024);
									}
									iVar0 = 2;
								}
								else
								{
									if (!__LIB_0__::func_703(iLocal_122, 2048))
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Minigame_Failure", uParam1->f_741, true);
										iLocal_127++;
										__LIB_1__::func_330(&iLocal_122, 2048);
									}
									iVar0 = 1;
								}
								func_5220(SYSTEM::ROUND(fLocal_142), __LIB_5__::func_403(956f, 920f), iVar0);
								__LIB_33__::func_684("MPIsland_Voltage_BG", "result_text", __LIB_5__::func_403(((1920f / 2f) - 4f), (1080f - 88f)), __LIB_5__::func_403(76f, 16f), 0f, func_5189(iVar0));
								if ((fLocal_129 % 500f) <= 250f)
								{
									func_5213(Local_126[0 /*23*/][1 /*2*/], Local_147[0 /*4*/].f_2);
									func_5212(Local_126[0 /*23*/][1 /*2*/], Local_147[0 /*4*/].f_2);
									func_5206(Local_147[0 /*4*/], Local_147[0 /*4*/].f_1, Local_147[0 /*4*/].f_2, 0);
									func_5187(Local_126[12 /*23*/][__LIB_20__::func_813(Local_147[0 /*4*/].f_1) /*2*/], Local_147[0 /*4*/].f_2);
									func_5213(Local_126[0 /*23*/][5 /*2*/], Local_147[1 /*4*/].f_2);
									func_5212(Local_126[0 /*23*/][5 /*2*/], Local_147[1 /*4*/].f_2);
									func_5206(Local_147[1 /*4*/], Local_147[1 /*4*/].f_1, Local_147[1 /*4*/].f_2, 1);
									func_5187(Local_126[12 /*23*/][__LIB_20__::func_813(Local_147[1 /*4*/].f_1) /*2*/], Local_147[1 /*4*/].f_2);
									func_5213(Local_126[0 /*23*/][9 /*2*/], Local_147[2 /*4*/].f_2);
									func_5212(Local_126[0 /*23*/][9 /*2*/], Local_147[2 /*4*/].f_2);
									func_5206(Local_147[2 /*4*/], Local_147[2 /*4*/].f_1, Local_147[2 /*4*/].f_2, 2);
									func_5187(Local_126[12 /*23*/][__LIB_20__::func_813(Local_147[2 /*4*/].f_1) /*2*/], Local_147[2 /*4*/].f_2);
								}
								else
								{
									func_5213(Local_126[0 /*23*/][1 /*2*/], Local_147[0 /*4*/].f_2 + 4);
									func_5212(Local_126[0 /*23*/][1 /*2*/], Local_147[0 /*4*/].f_2 + 4);
									func_5206(Local_147[0 /*4*/], Local_147[0 /*4*/].f_1, Local_147[0 /*4*/].f_2 + 4, 0);
									func_5187(Local_126[12 /*23*/][__LIB_20__::func_813(Local_147[0 /*4*/].f_1) /*2*/], Local_147[0 /*4*/].f_2 + 4);
									func_5213(Local_126[0 /*23*/][5 /*2*/], Local_147[1 /*4*/].f_2 + 4);
									func_5212(Local_126[0 /*23*/][5 /*2*/], Local_147[1 /*4*/].f_2 + 4);
									func_5206(Local_147[1 /*4*/], Local_147[1 /*4*/].f_1, Local_147[1 /*4*/].f_2 + 4, 1);
									func_5187(Local_126[12 /*23*/][__LIB_20__::func_813(Local_147[1 /*4*/].f_1) /*2*/], Local_147[1 /*4*/].f_2 + 4);
									func_5213(Local_126[0 /*23*/][9 /*2*/], Local_147[2 /*4*/].f_2 + 4);
									func_5212(Local_126[0 /*23*/][9 /*2*/], Local_147[2 /*4*/].f_2 + 4);
									func_5206(Local_147[2 /*4*/], Local_147[2 /*4*/].f_1, Local_147[2 /*4*/].f_2 + 4, 2);
									func_5187(Local_126[12 /*23*/][__LIB_20__::func_813(Local_147[2 /*4*/].f_1) /*2*/], Local_147[2 /*4*/].f_2 + 4);
								}
								__LIB_33__::func_684("MPIsland_Voltage_BG", "VOLTAGE_PIXEL_GRID", __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), 0f, Local_125);
								return;
							}
						}
						__LIB_2__::func_712(&iLocal_122, 64);
						fLocal_129 = 0f;
						if (iLocal_138 == 0)
						{
							iLocal_140 = iLocal_139;
						}
						if (iLocal_138 == 1)
						{
							iLocal_141 = iLocal_139;
						}
						iLocal_138++;
						if (iLocal_138 <= 2)
						{
							while (func_5216(iLocal_139))
							{
								func_5214();
							}
							iLocal_146 = 3;
						}
					}
				}
			}
			else if (iLocal_137 == iLocal_136)
			{
				func_5220(SYSTEM::ROUND(fLocal_142), __LIB_5__::func_403(956f, 920f), 2);
				__LIB_33__::func_684("MPIsland_Voltage_BG", "result_text", __LIB_5__::func_403(((1920f / 2f) - 4f), (1080f - 88f)), __LIB_5__::func_403(76f, 16f), 0f, func_5189(2));
				if (!func_5169())
				{
					break;
				}
				else if (!__LIB_0__::func_703(iLocal_122, 4096))
				{
					AUDIO::STOP_SOUND(uParam1->f_739);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Success_Bink", uParam1->f_741, true);
					HUD::CLEAR_HELP(true);
					__LIB_1__::func_330(&iLocal_122, 4096);
				}
				if (func_5161(iParam0, uParam1, 4000, "Voltage_Success"))
				{
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPIsland_Voltage");
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPIsland_Voltage_BG");
					__LIB_20__::func_877(iParam0, uParam1, 0);
					MISC::SET_BIT(iParam0, 0);
					if (BitTest(*iParam0, 5))
					{
						__LIB_1__::func_354(9534, __LIB_1__::func_360(9534, -1, 0) + 1, -1, 1, 0);
					}
					AUDIO::STOP_SOUND(uParam1->f_739);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_V_MG");
				}
				break;
			}
			else
			{
				func_5156(iParam0);
				break;
			}
			if (__LIB_20__::func_812())
			{
				Local_147[iLocal_139 /*4*/].f_3 = 0;
				func_5204(Local_147[iLocal_139 /*4*/].f_1, iLocal_139);
				switch (iLocal_139)
				{
					case 0:
						Local_147[0 /*4*/] = 0;
						Local_147[0 /*4*/].f_1 = 2;
						Local_147[0 /*4*/].f_2 = 1;
						Local_147[0 /*4*/].f_3 = 0;
						break;
					case 1:
						Local_147[1 /*4*/] = 1;
						Local_147[1 /*4*/].f_1 = 1;
						Local_147[1 /*4*/].f_2 = 0;
						Local_147[1 /*4*/].f_3 = 0;
						break;
					case 2:
						Local_147[2 /*4*/] = 2;
						Local_147[2 /*4*/].f_1 = 0;
						Local_147[2 /*4*/].f_2 = 2;
						Local_147[2 /*4*/].f_3 = 0;
						break;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Disconnect_Wire", uParam1->f_741, true);
				iLocal_146 = 3;
			}
			if (fLocal_142 > IntToFloat(iLocal_137))
			{
				fLocal_142 = (fLocal_142 - (0f + (50f * SYSTEM::TIMESTEP())));
				if (fLocal_142 < IntToFloat(iLocal_137))
				{
					fLocal_142 = SYSTEM::TO_FLOAT(iLocal_137);
				}
			}
			if (fLocal_142 < IntToFloat(iLocal_137))
			{
				fLocal_142 = (fLocal_142 + (0f + (50f * SYSTEM::TIMESTEP())));
				if (fLocal_142 > IntToFloat(iLocal_137))
				{
					fLocal_142 = SYSTEM::TO_FLOAT(iLocal_137);
				}
			}
			if (iLocal_137 < iLocal_136)
			{
				func_5220(SYSTEM::ROUND(fLocal_142), __LIB_5__::func_403(956f, 920f), 0);
				__LIB_33__::func_684("MPIsland_Voltage_BG", "result_text", __LIB_5__::func_403(((1920f / 2f) - 4f), (1080f - 88f)), __LIB_5__::func_403(76f, 16f), 0f, func_5189(0));
			}
			else if (iLocal_137 == iLocal_136)
			{
				func_5220(SYSTEM::ROUND(fLocal_142), __LIB_5__::func_403(956f, 920f), 2);
				__LIB_33__::func_684("MPIsland_Voltage_BG", "result_text", __LIB_5__::func_403(((1920f / 2f) - 4f), (1080f - 88f)), __LIB_5__::func_403(76f, 16f), 0f, func_5189(2));
			}
			else if (iLocal_137 > iLocal_136)
			{
				func_5220(SYSTEM::ROUND(fLocal_142), __LIB_5__::func_403(956f, 920f), 1);
				__LIB_33__::func_684("MPIsland_Voltage_BG", "result_text", __LIB_5__::func_403(((1920f / 2f) - 4f), (1080f - 88f)), __LIB_5__::func_403(76f, 16f), 0f, func_5189(1));
			}
			break;
	}
	if (iLocal_146 == 3 || iLocal_146 == 4)
	{
		if (!BitTest(*iParam0, 0))
		{
			__LIB_33__::func_684("MPIsland_Voltage_BG", "VOLTAGE_PIXEL_GRID", __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), 0f, Local_125);
		}
		if (__LIB_0__::func_864(&(uParam1->f_744)))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(uParam1->f_739))
			{
				AUDIO::STOP_SOUND(uParam1->f_739);
			}
			return;
		}
		if (AUDIO::HAS_SOUND_FINISHED(uParam1->f_739))
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam1->f_739, "Background_loop", uParam1->f_741, true);
		}
		bVar1 = (iLocal_138 >= 3 && iLocal_137 != iLocal_136);
		if (iLocal_137 > iLocal_136)
		{
			bVar1 = true;
		}
		AUDIO::SET_VARIABLE_ON_SOUND(uParam1->f_739, "Timebar", ((120000f - fLocal_128) / 10000f));
		AUDIO::SET_VARIABLE_ON_SOUND(uParam1->f_739, "Voltage_Current", SYSTEM::TO_FLOAT(iLocal_137));
		AUDIO::SET_VARIABLE_ON_SOUND(uParam1->f_739, "Voltage_Target", SYSTEM::TO_FLOAT(iLocal_136));
		AUDIO::SET_VARIABLE_ON_SOUND(uParam1->f_739, "Glitch", SYSTEM::TO_FLOAT(__LIB_1__::func_137(bVar1)));
	}
}

void func_5187(struct<2> Param0, int iParam1)//Position - 0x193D0F
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<4> Var3;
	__LIB_20__::func_805(iParam1, &uVar0, &uVar1, &uVar2);
	Var3.f_3 = 255;
	Var3.f_0 = uVar0;
	Var3.f_1 = uVar1;
	Var3.f_2 = uVar2;
	Var3.f_3 = Local_124.f_3;
	__LIB_33__::func_684("MPIsland_Voltage", "CIRCLE_NODE", __LIB_5__::func_403((Param0.f_0 + 68f), Param0.f_1), __LIB_5__::func_403(164f, 152f), 0f, Var3);
}

struct<4> func_5189(int iParam0)//Position - 0x193E0B
{
	struct<4> Var0;
	Var0 = { Local_124 };
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = Local_124.f_3;
			Var0.f_0 = 160;
			Var0.f_1 = 160;
			Var0.f_2 = 160;
			break;
		case 1:
			Var0.f_3 = Local_124.f_3;
			Var0.f_0 = 231;
			Var0.f_1 = 99;
			Var0.f_2 = 99;
			break;
		case 2:
			Var0.f_3 = Local_124.f_3;
			Var0.f_0 = 93;
			Var0.f_1 = 234;
			Var0.f_2 = 154;
			break;
	}
	return Var0;
}

void func_5191(int iParam0)//Position - 0x193EE3
{
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_703(iLocal_122, 2))
			{
				__LIB_1__::func_330(&iLocal_122, 2);
			}
			break;
		case 1:
			if (!__LIB_0__::func_703(iLocal_122, 4))
			{
				__LIB_1__::func_330(&iLocal_122, 4);
			}
			break;
		case 2:
			if (!__LIB_0__::func_703(iLocal_122, 8))
			{
				__LIB_1__::func_330(&iLocal_122, 8);
			}
			break;
	}
}

void func_5192(var* uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x193F45
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	iVar0 = 12;
	func_5202(uParam0, &iLocal_134, &iLocal_135);
	func_5212(Local_126[iLocal_134 /*23*/][iLocal_135 /*2*/], iParam2);
	if (__LIB_20__::func_813(iParam1) == iLocal_135)
	{
		func_5213(Local_126[0 /*23*/][iLocal_135 /*2*/], iParam2);
		func_5212(Local_126[0 /*23*/][iLocal_135 /*2*/], iParam2);
		func_5194(Local_126[0 /*23*/][iLocal_135 /*2*/], Local_126[iLocal_134 /*23*/][iLocal_135 /*2*/], iParam2, 1);
		func_5187(Local_126[iLocal_134 /*23*/][iLocal_135 /*2*/], iParam2);
		return;
	}
	iVar2 = __LIB_20__::func_813(iParam1);
	iVar3 = iLocal_135;
	fVar4 = 0.5f;
	switch (iParam3)
	{
		case 1:
			fVar4 = 0.3f;
			break;
		case 2:
			fVar4 = 0.7f;
			break;
	}
	__LIB_20__::func_807(iVar2, iLocal_135, &iVar1, fVar4);
	if (iVar3 > iVar2)
	{
		if (MISC::ABSI((iLocal_135 - iVar2)) <= 4 || iLocal_134 <= 3)
		{
			func_5213(Local_126[0 /*23*/][iVar2 /*2*/], iParam2);
			func_5212(Local_126[0 /*23*/][iVar2 /*2*/], iParam2);
			func_5194(Local_126[0 /*23*/][iVar2 /*2*/], Local_126[SYSTEM::ROUND((IntToFloat(iLocal_134) * fVar4)) /*23*/][iVar2 /*2*/], iParam2, 1);
			func_5194(Local_126[SYSTEM::ROUND((IntToFloat(iLocal_134) * fVar4)) /*23*/][iVar2 /*2*/], Local_126[SYSTEM::ROUND((IntToFloat(iLocal_134) * fVar4)) /*23*/][iVar3 /*2*/], iParam2, 1);
			func_5194(Local_126[SYSTEM::ROUND((IntToFloat(iLocal_134) * fVar4)) /*23*/][iVar3 /*2*/], Local_126[iLocal_134 /*23*/][iVar3 /*2*/], iParam2, 1);
			func_5187(Local_126[iLocal_134 /*23*/][iVar3 /*2*/], iParam2);
			return;
		}
	}
	iVar5 = 3;
	iVar6 = 6;
	switch (iParam3)
	{
		case 1:
			iVar5 = 5;
			iVar6 = 8;
			break;
		case 2:
			iVar5 = 7;
			iVar6 = 10;
			break;
	}
	func_5212(Local_126[0 /*23*/][iVar2 /*2*/], iParam2);
	func_5194(Local_126[0 /*23*/][iVar2 /*2*/], Local_126[iVar5 /*23*/][iVar2 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar5 /*23*/][iVar2 /*2*/], Local_126[iVar5 /*23*/][iVar1 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar5 /*23*/][iVar1 /*2*/], Local_126[iVar6 /*23*/][iVar1 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar6 /*23*/][iVar1 /*2*/], Local_126[iVar6 /*23*/][iVar3 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar6 /*23*/][iVar3 /*2*/], Local_126[iVar0 /*23*/][iVar3 /*2*/], iParam2, 1);
	func_5213(Local_126[0 /*23*/][iVar2 /*2*/], iParam2);
	func_5187(Local_126[iVar0 /*23*/][iVar3 /*2*/], iParam2);
}

void func_5194(struct<2> Param0, struct<2> Param1, int iParam2, bool bParam3)//Position - 0x194266
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	Var0 = { __LIB_20__::func_810(__LIB_5__::func_402(Param0, Param1), 2f) };
	__LIB_20__::func_805(iParam2, &iVar2, &iVar3, &iVar4);
	if (Param0.f_0 == Param1.f_0)
	{
		Var1.f_0 = 4f;
		Var1.f_1 = MISC::ABSF((Param1.f_1 - Param0.f_1));
	}
	if (Param0.f_1 == Param1.f_1)
	{
		Var1.f_0 = MISC::ABSF((Param1.f_0 - Param0.f_0));
		Var1.f_1 = 4f;
	}
	__LIB_32__::func_380(&Var0, &Var1);
	__LIB_20__::func_808(Var0, Var1, iVar2, iVar3, iVar4, Local_124.f_3);
	Var5 = { __LIB_5__::func_403(Param1.f_0, Param1.f_1) };
	Var1 = { __LIB_5__::func_403(20f, 20f) };
	__LIB_32__::func_380(&Var5, &Var1);
	if (bParam3)
	{
		__LIB_20__::func_808(Var5, Var1, iVar2, iVar3, iVar4, Local_124.f_3);
	}
}

void func_5202(var* uParam0, int iParam1, int iParam2)//Position - 0x19445C
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__::func_811(*iParam2);
	bVar1 = false;
	func_5219();
	switch (iVar0)
	{
		case 0:
			if (func_5218(uParam0, 1))
			{
				iVar0 = 2;
			}
			if (func_5215(uParam0, 1))
			{
				iVar0 = 1;
			}
			bVar1 = true;
			break;
		case 1:
			if (func_5218(uParam0, 1))
			{
				iVar0 = 0;
			}
			if (func_5215(uParam0, 1))
			{
				iVar0 = 2;
			}
			bVar1 = true;
			break;
		case 2:
			if (func_5218(uParam0, 1))
			{
				iVar0 = 1;
			}
			if (func_5215(uParam0, 1))
			{
				iVar0 = 0;
			}
			bVar1 = true;
			break;
	}
	if (func_5218(uParam0, 0))
	{
		while (func_5207(iVar0))
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 2;
			}
		}
	}
	if (func_5215(uParam0, 0))
	{
		while (func_5207(iVar0))
		{
			iVar0++;
			if (iVar0 >= 3)
			{
				iVar0 = 0;
			}
		}
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_703(iLocal_122, 1))
		{
			__LIB_1__::func_330(&iLocal_122, 1);
		}
	}
	if (__LIB_0__::func_703(iLocal_122, 1))
	{
		*iParam1 = 12;
		*iParam2 = __LIB_20__::func_813(iVar0);
	}
}

void func_5204(int iParam0, int iParam1)//Position - 0x1945CD
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_703(iLocal_122, 2))
			{
				__LIB_2__::func_712(&iLocal_122, 2);
			}
			break;
		case 1:
			if (__LIB_0__::func_703(iLocal_122, 4))
			{
				__LIB_2__::func_712(&iLocal_122, 4);
			}
			break;
		case 2:
			if (__LIB_0__::func_703(iLocal_122, 8))
			{
				__LIB_2__::func_712(&iLocal_122, 8);
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			__LIB_2__::func_712(&iLocal_122, 128);
			break;
		case 1:
			__LIB_2__::func_712(&iLocal_122, 256);
			break;
		case 2:
			__LIB_2__::func_712(&iLocal_122, 512);
			break;
	}
}

void func_5206(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x19468F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	iVar0 = 12;
	if (iParam0 == iParam1)
	{
		switch (iParam0)
		{
			case 0:
				func_5212(Local_126[0 /*23*/][1 /*2*/], iParam2);
				func_5194(Local_126[0 /*23*/][1 /*2*/], Local_126[12 /*23*/][1 /*2*/], iParam2, 1);
				break;
			case 1:
				func_5212(Local_126[0 /*23*/][iParam3 * 2 + 3 /*2*/], iParam2);
				func_5194(Local_126[0 /*23*/][iParam3 * 2 + 3 /*2*/], Local_126[12 /*23*/][iParam3 * 2 + 3 /*2*/], iParam2, 1);
				break;
			case 2:
				func_5212(Local_126[0 /*23*/][9 /*2*/], iParam2);
				func_5194(Local_126[0 /*23*/][9 /*2*/], Local_126[12 /*23*/][9 /*2*/], iParam2, 1);
				break;
		}
		return;
	}
	switch (iParam0)
	{
		case 0:
			iVar2 = 1;
			break;
		case 1:
			iVar2 = 5;
			break;
		case 2:
			iVar2 = 9;
			break;
	}
	switch (iParam1)
	{
		case 0:
			iVar3 = 1;
			break;
		case 1:
			iVar3 = 5;
			break;
		case 2:
			iVar3 = 9;
			break;
	}
	fVar4 = 0.5f;
	switch (iParam3)
	{
		case 1:
			fVar4 = 0.3f;
			break;
		case 2:
			fVar4 = 0.7f;
			break;
	}
	__LIB_20__::func_807(iVar2, iVar3, &iVar1, fVar4);
	if (iVar3 > iVar2)
	{
		if (MISC::ABSI((iVar3 - iVar2)) <= 4 || iVar0 <= 3)
		{
			func_5212(Local_126[0 /*23*/][iVar2 /*2*/], iParam2);
			func_5194(Local_126[0 /*23*/][iVar2 /*2*/], Local_126[SYSTEM::ROUND((IntToFloat(iVar0) * fVar4)) /*23*/][iVar2 /*2*/], iParam2, 1);
			func_5194(Local_126[SYSTEM::ROUND((IntToFloat(iVar0) * fVar4)) /*23*/][iVar2 /*2*/], Local_126[SYSTEM::ROUND((IntToFloat(iVar0) * fVar4)) /*23*/][iVar3 /*2*/], iParam2, 1);
			func_5194(Local_126[SYSTEM::ROUND((IntToFloat(iVar0) * fVar4)) /*23*/][iVar3 /*2*/], Local_126[iVar0 /*23*/][iVar3 /*2*/], iParam2, 1);
			return;
		}
	}
	iVar5 = 3;
	iVar6 = 6;
	switch (iParam3)
	{
		case 1:
			iVar5 = 5;
			iVar6 = 8;
			break;
		case 2:
			iVar5 = 7;
			iVar6 = 10;
			break;
	}
	func_5212(Local_126[0 /*23*/][iVar2 /*2*/], iParam2);
	func_5194(Local_126[0 /*23*/][iVar2 /*2*/], Local_126[iVar5 /*23*/][iVar2 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar5 /*23*/][iVar2 /*2*/], Local_126[iVar5 /*23*/][iVar1 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar5 /*23*/][iVar1 /*2*/], Local_126[iVar6 /*23*/][iVar1 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar6 /*23*/][iVar1 /*2*/], Local_126[iVar6 /*23*/][iVar3 /*2*/], iParam2, 1);
	func_5194(Local_126[iVar6 /*23*/][iVar3 /*2*/], Local_126[iVar0 /*23*/][iVar3 /*2*/], iParam2, 1);
}

int func_5207(int iParam0)//Position - 0x194975
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_703(iLocal_122, 2))
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_703(iLocal_122, 4))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_0__::func_703(iLocal_122, 8))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_5211()//Position - 0x194A85
{
	if (Local_124.f_3 < 255)
	{
		Local_124.f_3 = (Local_124.f_3 + SYSTEM::ROUND(((0f + (100f * SYSTEM::TIMESTEP())) * 2f)));
	}
	else
	{
		Local_124.f_3 = 255;
		return 1;
	}
	return 0;
}

void func_5212(struct<2> Param0, int iParam1)//Position - 0x194ABF
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	Var0 = { __LIB_5__::func_403(20f, 20f) };
	Var1 = { Param0 };
	__LIB_32__::func_380(&Var1, &Var0);
	__LIB_20__::func_805(iParam1, &iVar2, &iVar3, &iVar4);
	__LIB_20__::func_808(Var1, Var0, iVar2, iVar3, iVar4, Local_124.f_3);
}

void func_5213(struct<2> Param0, int iParam1)//Position - 0x194B0B
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<4> Var3;
	__LIB_20__::func_805(iParam1, &uVar0, &uVar1, &uVar2);
	Var3.f_3 = 255;
	Var3.f_0 = uVar0;
	Var3.f_1 = uVar1;
	Var3.f_2 = uVar2;
	Var3.f_3 = Local_124.f_3;
	__LIB_33__::func_684("MPIsland_Voltage", "NUMBER_NODE", __LIB_5__::func_403((Param0.f_0 - 54f), Param0.f_1), __LIB_5__::func_403(128f, 120f), 0f, Var3);
}

void func_5214()//Position - 0x194B72
{
	iLocal_139++;
	if (iLocal_139 > 2)
	{
		iLocal_139 = 0;
	}
}

bool func_5215(var* uParam0, int iParam1)//Position - 0x194B8D
{
	bool bVar0;
	bVar0 = false;
	bVar0 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/);
	if (PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) > 0.1f && !Local_133.f_1)
	{
		Local_133.f_1 = 1;
		bVar0 = true;
	}
	if (!bVar0 && PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))
		{
			bVar0 = true;
		}
	}
	if (bVar0 && iParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_down", uParam0->f_741, true);
	}
	return bVar0;
}

int func_5216(int iParam0)//Position - 0x194C0D
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_703(iLocal_122, 128);
			break;
		case 1:
			return __LIB_0__::func_703(iLocal_122, 256);
			break;
		case 2:
			return __LIB_0__::func_703(iLocal_122, 512);
			break;
	}
	return 0;
}

void func_5217()//Position - 0x194C5B
{
	iLocal_139 = (iLocal_139 - 1);
	if (iLocal_139 < 0)
	{
		iLocal_139 = 2;
	}
}

bool func_5218(var* uParam0, int iParam1)//Position - 0x194C76
{
	bool bVar0;
	bVar0 = false;
	bVar0 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/);
	if (PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < -0.1f && !Local_133.f_0)
	{
		Local_133.f_0 = 1;
		bVar0 = true;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))
		{
			bVar0 = true;
		}
	}
	if (bVar0 && iParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Nav_up", uParam0->f_741, true);
	}
	return bVar0;
}

void func_5219()//Position - 0x194CEA
{
	if (Local_133.f_0 && PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) >= -0.1f)
	{
		Local_133.f_0 = 0;
	}
	if (Local_133.f_1 && PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) <= 0.1f)
	{
		Local_133.f_1 = 0;
	}
}

void func_5220(int iParam0, struct<2> Param1, int iParam2)//Position - 0x194D2E
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	Var0 = { Param1 };
	Var0.f_0 = (Var0.f_0 - 90f);
	Var1 = { Param1 };
	Var1.f_0 = (Var1.f_0 + 90f);
	if (iParam0 < 0)
	{
		__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(0), Var0, __LIB_5__::func_403(64f, 104f), 0f, func_5189(iParam2));
		__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(0), Param1, __LIB_5__::func_403(64f, 104f), 0f, func_5189(iParam2));
		__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(0), Var1, __LIB_5__::func_403(64f, 104f), 0f, func_5189(iParam2));
		return;
	}
	iVar2 = SYSTEM::FLOOR((IntToFloat(iParam0) / 100f));
	iVar3 = SYSTEM::FLOOR(((IntToFloat(iParam0) - (IntToFloat(iVar2) * 100f)) / 10f));
	iVar4 = (iParam0 - (iVar2 * 100 + iVar3 * 10));
	__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(iVar2), Var0, __LIB_5__::func_403(64f, 104f), 0f, func_5189(iParam2));
	__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(iVar3), Param1, __LIB_5__::func_403(64f, 104f), 0f, func_5189(iParam2));
	__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(iVar4), Var1, __LIB_5__::func_403(64f, 104f), 0f, func_5189(iParam2));
}

void func_5223(int* iParam0)//Position - 0x194F5A
{
	if (BitTest(*iParam0, 0))
	{
		return;
	}
	__LIB_33__::func_684("MPIsland_Voltage_BG", "PHONE_BACKGROUND", __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1920f, 1080f), 0f, Local_123);
	__LIB_33__::func_684("MPIsland_Voltage_BG", "target_text", __LIB_5__::func_403(((1920f / 2f) - 4f), 88f), __LIB_5__::func_403(76f, 16f), 0f, func_5189(1));
	__LIB_33__::func_684("MPIsland_Voltage", "Phone_Icons", __LIB_5__::func_403((0.99f * ((1920f / 1.778f) * __LIB_20__::func_809())), 66f), __LIB_5__::func_403(132f, 44f), 0f, Local_124);
	__LIB_33__::func_684("MPIsland_Voltage", "MainInterface_BG", __LIB_5__::func_403((1920f / 2f), (1080f / 2f)), __LIB_5__::func_403(1064f, 880f), 0f, Local_124);
	__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(iLocal_144[0]), __LIB_5__::func_403(512f, 307f), __LIB_5__::func_403(64f, 104f), 0f, Local_124);
	__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(iLocal_144[1]), __LIB_5__::func_403(512f, 543f), __LIB_5__::func_403(64f, 104f), 0f, Local_124);
	__LIB_33__::func_684("MPIsland_Voltage", __LIB_20__::func_815(iLocal_144[2]), __LIB_5__::func_403(512f, 777f), __LIB_5__::func_403(64f, 104f), 0f, Local_124);
	__LIB_33__::func_684("MPIsland_voltage", __LIB_20__::func_816(iLocal_145[0]), __LIB_5__::func_403(1383f, 307f), __LIB_5__::func_403(108f, 96f), 0f, Local_124);
	__LIB_33__::func_684("MPIsland_voltage", __LIB_20__::func_816(iLocal_145[1]), __LIB_5__::func_403(1383f, 543f), __LIB_5__::func_403(108f, 96f), 0f, Local_124);
	__LIB_33__::func_684("MPIsland_voltage", __LIB_20__::func_816(iLocal_145[2]), __LIB_5__::func_403(1383f, 777f), __LIB_5__::func_403(108f, 96f), 0f, Local_124);
	func_5224(iParam0);
	func_5220(iLocal_136, __LIB_5__::func_403(956f, 158f), 1);
	__LIB_33__::func_684("MPIsland_Voltage_BG", "result_text", __LIB_5__::func_403(((1920f / 2f) - 4f), (1080f - 88f)), __LIB_5__::func_403(76f, 16f), 0f, func_5189(0));
}

void func_5224(var uParam0)//Position - 0x1951D5
{
	if (BitTest(*uParam0, 5))
	{
		__LIB_33__::func_685(__LIB_5__::func_403(602f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(624f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(646f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(668f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(690f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(712f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		return;
	}
	if (!__LIB_0__::func_703(iLocal_122, 64) && !BitTest(*uParam0, 0))
	{
		fLocal_128 = (fLocal_128 + (0f + (1000f * SYSTEM::TIMESTEP())));
	}
	if (fLocal_128 < 20000f)
	{
		__LIB_33__::func_685(__LIB_5__::func_403(602f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(624f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(646f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(668f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(690f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(712f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
	}
	else if (fLocal_128 < 40000f)
	{
		__LIB_33__::func_685(__LIB_5__::func_403(624f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(646f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(668f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(690f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(712f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
	}
	else if (fLocal_128 < 60000f)
	{
		__LIB_33__::func_685(__LIB_5__::func_403(646f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(668f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(690f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(712f, 919f), __LIB_5__::func_403(16f, 38f), 93, 234, 154, Local_124.f_3);
	}
	else if (fLocal_128 < 80000f)
	{
		__LIB_33__::func_685(__LIB_5__::func_403(668f, 919f), __LIB_5__::func_403(16f, 38f), 240, 220, 60, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(690f, 919f), __LIB_5__::func_403(16f, 38f), 240, 220, 60, Local_124.f_3);
		__LIB_33__::func_685(__LIB_5__::func_403(712f, 919f), __LIB_5__::func_403(16f, 38f), 240, 220, 60, Local_124.f_3);
	}
	else if (fLocal_128 < 100000f)
	{
		if ((fLocal_128 % 1000f) <= 500f)
		{
			__LIB_33__::func_685(__LIB_5__::func_403(690f, 919f), __LIB_5__::func_403(16f, 38f), 240, 10, 10, Local_124.f_3);
			__LIB_33__::func_685(__LIB_5__::func_403(712f, 919f), __LIB_5__::func_403(16f, 38f), 240, 10, 10, Local_124.f_3);
		}
	}
	else if (fLocal_128 < 120000f)
	{
		if ((fLocal_128 % 500f) <= 250f)
		{
			__LIB_33__::func_685(__LIB_5__::func_403(712f, 919f), __LIB_5__::func_403(16f, 38f), 240, 10, 10, Local_124.f_3);
		}
	}
}

void func_5228(int* iParam0, var* uParam1)//Position - 0x1957AD
{
	Local_124.f_0 = 255;
	Local_124.f_1 = 255;
	Local_124.f_2 = 255;
	Local_124.f_3 = 0;
	Local_123.f_0 = 255;
	Local_123.f_1 = 255;
	Local_123.f_2 = 255;
	Local_123.f_3 = 255;
	Local_125.f_0 = 255;
	Local_125.f_1 = 255;
	Local_125.f_2 = 255;
	Local_125.f_3 = 190;
	fLocal_128 = 0f;
	iLocal_134 = 12;
	iLocal_135 = 5;
	fLocal_142 = 0f;
	Local_133.f_0 = 0;
	Local_133.f_1 = 0;
	MISC::CLEAR_BIT(iParam0, 5);
	if (__LIB_1__::func_360(9534, -1, 0) == 0 && !BitTest(*iParam0, 5))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	func_5229();
	func_5156(iParam0);
	MISC::CLEAR_BIT(iParam0, 2);
	MISC::CLEAR_BIT(iParam0, 3);
	MISC::CLEAR_BIT(iParam0, 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	__LIB_20__::func_803(uParam1, "Voltage_Intro");
	__LIB_0__::func_795(&(uParam1->f_742), 0, 0);
	__LIB_0__::func_794(&(uParam1->f_744));
	__LIB_0__::func_794(&(uParam1->f_750));
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_H4_Voltage_Hack_Scene"))
	{
		AUDIO::START_AUDIO_SCENE("DLC_H4_Voltage_Hack_Scene");
	}
}

void func_5229()//Position - 0x19589B
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	fVar2 = ((1920f / 2f) - 375f);
	fVar3 = (59f + (1f / 3f));
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			Local_126[iVar0 /*23*/][iVar1 /*2*/] = (fVar2 + (fVar3 * IntToFloat(iVar0)));
			Local_126[iVar0 /*23*/][iVar1 /*2*/].f_1 = (248f + ((58f + (1f / 3f)) * IntToFloat(iVar1)));
			iVar1++;
		}
		iVar0++;
	}
}

void func_5231(var uParam0, int* iParam1)//Position - 0x19593A
{
	__LIB_1__::func_33(0);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	__LIB_0__::func_876(1);
	__LIB_0__::func_612(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	__LIB_0__::func_866();
	__LIB_0__::func_189();
	__LIB_1__::func_733();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (!__LIB_0__::func_893())
	{
		__LIB_1__::func_289(uParam0, 7);
	}
	__LIB_0__::func_502();
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	func_5234();
	func_5233();
	if (BitTest(*iParam1, 7))
	{
		MISC::CLEAR_BIT(iParam1, 7);
	}
	if (BitTest(*iParam1, 6))
	{
		MISC::CLEAR_BIT(iParam1, 6);
	}
	__LIB_20__::func_819(uParam0);
}

void func_5233()//Position - 0x195A9D
{
	fLocal_118 = (1.778f / fLocal_117);
	fLocal_118 = fLocal_118;
}

void func_5234()//Position - 0x195AB3
{
	fLocal_117 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_117 >= 4f)
		{
			fLocal_117 = (fLocal_117 / 3f);
		}
	}
}

void func_5239(var* uParam0, int* iParam1, bool bParam2, int iParam3, var uParam4)//Position - 0x195B38
{
	int iVar0;
	char cVar1[32];
	if (!bParam2)
	{
		uParam4 = __LIB_1__::func_360(9572, -1, 0);
		func_5151(iParam1, uParam0, uParam4, -2060373942, uParam0->f_755 + 1, __LIB_1__::func_724(&(uParam0->f_748), 0, 0));
	}
	__LIB_25__::func_431(uParam0, "DLC_H4_Fingerprint_Hack_Scene");
	MISC::CLEAR_BIT(&(uParam0->f_740), 2);
	__LIB_20__::func_877(iParam1, uParam0, bParam2);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Retro");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Retro_LIFE");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Retro_BACKGROUND");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Retro_LOADING");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Retro_MESSAGES");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Retro_NUMBERS");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Retro_SCRAMBLER");
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		StringCopy(&cVar1, "MPFClone_Retro_Print", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		if (BitTest(uParam0->f_752, 7))
		{
			StringCopy(&cVar1, "MPFClone_Retro_PrintFull", 32);
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar1);
		iVar0++;
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_FH_MG");
}

void func_5241(var* uParam0, int* iParam1, int iParam2, int iParam3)//Position - 0x195C51
{
	if (*uParam0 == 4 && !BitTest(uParam0->f_752, 1))
	{
		if (__LIB_0__::func_937(&(uParam0->f_748), uParam0->f_732, 0))
		{
			if (!__LIB_0__::func_864(&(uParam0->f_744)))
			{
				__LIB_0__::func_627(&(uParam0->f_744), 0, 0);
				__LIB_20__::func_803(uParam0, "FingerPrint_Fail");
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Failed", uParam0->f_741, true);
			}
			else if (func_5162(uParam0) || __LIB_0__::func_937(&(uParam0->f_744), 8000, 0))
			{
				__LIB_1__::func_289(uParam0, 7);
				MISC::SET_BIT(iParam1, 1);
			}
			return;
		}
	}
	if ((*uParam0 > 0 && *uParam0 < 7) || *uParam0 == 8)
	{
		if (*uParam0 != 7)
		{
			func_5296(uParam0, iParam1);
		}
		if ((!Global_1963986 && *uParam0 > 2) && *uParam0 != 7)
		{
			func_5292(uParam0);
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_20__::func_818(uParam0, iParam1);
			break;
		case 1:
			func_5289(uParam0, iParam1);
			break;
		case 2:
			func_5280(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_5279(uParam0, iParam1);
			break;
		case 4:
			func_5249(uParam0, iParam1, iParam3);
			break;
		case 5:
			func_5247(uParam0, iParam1);
			break;
		case 6:
			func_5245(uParam0, iParam1);
			break;
		case 7:
			func_5239(uParam0, iParam1, 0, joaat("practice"), __LIB_1__::func_360(9572, -1, 0));
			break;
	}
	if (((!Global_1963986 && *uParam0 > 2) && *uParam0 != 7) || *uParam0 == 8)
	{
		func_5242();
	}
}

void func_5242()//Position - 0x195E01
{
	func_5243("MPFClone_Retro", "PIXEL_OVERLAY", 0.5f, 0.5f, 1920f, 1080f, 0f, 255, 255, 255, 255, 0);
}

void func_5243(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x195E33
{
	fParam2 = (fParam2 + (fParam2 % 0.00105f));
	fParam3 = (fParam3 + (fParam3 % 0.00185f));
	fParam4 = (fParam4 + (fParam4 % 2f));
	fParam5 = (fParam5 + (fParam5 % 2f));
	func_5244(sParam0, sParam1, fParam2, fParam3, fParam4, fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11);
}

void func_5244(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x195E83
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_5165(fParam2), fParam3, (__LIB_20__::func_802(fParam4) * fLocal_118), __LIB_20__::func_801(fParam5), fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, 0);
}

void func_5245(var* uParam0, int* iParam1)//Position - 0x195EB7
{
	func_5246(iParam1, uParam0, 8000, "FingerPrint_Fail");
}

void func_5246(int* iParam0, var* uParam1, int iParam2, char* sParam3)//Position - 0x195ECF
{
	if (!__LIB_0__::func_864(&(uParam1->f_744)))
	{
		__LIB_0__::func_627(&(uParam1->f_744), 0, 0);
		__LIB_20__::func_803(uParam1, sParam3);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Failed", uParam1->f_741, true);
	}
	else if (func_5162(uParam1) || __LIB_0__::func_937(&(uParam1->f_744), iParam2, 0))
	{
		if (uParam1->f_3 <= 0)
		{
			MISC::SET_BIT(iParam0, 4);
		}
		MISC::SET_BIT(iParam0, 1);
		__LIB_1__::func_289(uParam1, 7);
	}
}

void func_5247(var* uParam0, int* iParam1)//Position - 0x195F42
{
	func_5248(iParam1, uParam0, 8000, "FingerPrint_Success");
}

void func_5248(int* iParam0, var* uParam1, int iParam2, char* sParam3)//Position - 0x195F5A
{
	if (!__LIB_0__::func_864(&(uParam1->f_744)))
	{
		__LIB_0__::func_627(&(uParam1->f_744), 0, 0);
		__LIB_20__::func_803(uParam1, sParam3);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", uParam1->f_741, true);
	}
	else if (func_5162(uParam1) || __LIB_0__::func_937(&(uParam1->f_744), iParam2, 0))
	{
		__LIB_1__::func_289(uParam1, 7);
		MISC::SET_BIT(iParam0, 0);
	}
}

void func_5249(var* uParam0, int* iParam1, int iParam2)//Position - 0x195FBE
{
	bool bVar0;
	bVar0 = __LIB_25__::func_440(uParam0);
	func_5277(iParam1, uParam0, iParam2, bVar0);
	if (bVar0)
	{
		__LIB_33__::func_617(uParam0);
	}
	func_5259(uParam0, iParam1);
	func_5251(uParam0);
	func_5250(uParam0);
}

void func_5250(var* uParam0)//Position - 0x195FF9
{
	struct<9> Var0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (*uParam0 == 4)
	{
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				uParam0->f_1 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/))
		{
			uParam0->f_1 = 1;
		}
		Var0 = { __LIB_1__::func_404() };
		if (uParam0->f_1)
		{
			__LIB_1__::func_539(&(uParam0->f_29));
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					fLocal_121 = (fLocal_121 + (0f + (1000f * SYSTEM::TIMESTEP())));
					__LIB_7__::func_603(SYSTEM::ROUND(fLocal_121), 1500, "HG_INT_04a" /* GXT: Aborting Hack */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
					__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
				}
				else
				{
					fLocal_121 = 0f;
					__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
				}
			}
			else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/))
			{
				fLocal_121 = (fLocal_121 + (0f + (1000f * SYSTEM::TIMESTEP())));
				__LIB_7__::func_603(SYSTEM::ROUND(fLocal_121), 1500, "HG_INT_04a" /* GXT: Aborting Hack */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
				__LIB_1__::func_513(2, 214, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
			}
			else
			{
				fLocal_121 = 0f;
				__LIB_1__::func_513(2, 214, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
			}
			__LIB_2__::func_817(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 6, true), "HG_INT_03" /* GXT: Move Selector */, &(uParam0->f_29), 0);
			uParam0->f_1 = 0;
		}
		__LIB_5__::func_693(&(uParam0->f_28), &Var0, &(uParam0->f_29), 0);
	}
	else
	{
		__LIB_1__::func_403(&(uParam0->f_29));
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_28));
	}
}

void func_5251(var* uParam0)//Position - 0x1961CB
{
	struct<8> Var0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	StringCopy(&Var0, "MPFClone_Retro_Print", 32);
	if (BitTest(uParam0->f_752, 7))
	{
		StringCopy(&Var0, "MPFClone_Retro_PrintFull", 32);
	}
	iVar1 = uParam0->f_757[uParam0->f_755];
	if (BitTest(uParam0->f_752, 7))
	{
		iVar1++;
	}
	StringIntConCat(&Var0, iVar1, 32);
	StringCopy(&Var2, "FINGERPRINT_HACKING_MINIGAME_FINGERPRINTS_0", 64);
	func_5258(uParam0, Var2, Var0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		func_5256(uParam0, Var2, iVar1, Var0);
		iVar1++;
	}
	iVar1 = 1;
	while (iVar1 <= 8)
	{
		func_5254(uParam0, iVar1);
		iVar1++;
	}
	if (BitTest(uParam0->f_752, 1))
	{
		__LIB_25__::func_432();
		if (BitTest(uParam0->f_752, 2))
		{
			func_5243("MPFClone_Retro_LOADING", "FINGERPRINT_HACKING_MINIGAME_LOADING_WINDOW", 0.5f, 0.5f, (480f + 32f), (128f - 8f), 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
			iVar3 = __LIB_1__::func_724(&(uParam0->f_750), 0, 0);
			if (*uParam0 == 8)
			{
				iVar3 = 2000;
			}
			fVar4 = (SYSTEM::TO_FLOAT(iVar3) / SYSTEM::TO_FLOAT(2000));
			fVar4 = (fVar4 * 100f);
			fVar5 = ((SYSTEM::TO_FLOAT(17) / 100f) * fVar4);
			iVar1 = 1;
			while (iVar1 <= SYSTEM::FLOOR(fVar5))
			{
				fVar6 = (0.279f + (0.0245f * IntToFloat(iVar1)));
				func_5243("MPFClone_Retro_LOADING", "FINGERPRINT_HACKING_MINIGAME_LOADING_BAR_SEGMENT", fVar6, 0.516f, 40f, 37f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
				iVar1++;
			}
		}
		else if (BitTest(uParam0->f_752, 4))
		{
			func_5252(uParam0, &(uParam0->f_731), 2, 1, "MPFClone_Retro_MESSAGES", "FINGERPRINT_HACKING_MINIGAME_MESSAGES_INCORRECT_0", 0.5f, 0.5f, 600f, 140f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
		}
		else if (BitTest(uParam0->f_752, 3))
		{
			func_5252(uParam0, &(uParam0->f_731), 2, 1, "MPFClone_Retro_CORRECT", "FINGERPRINT_HACKING_MINIGAME_MESSAGES_CORRECT_0", 0.5f, 0.5f, 600f, 140f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
		}
	}
}

void func_5252(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15)//Position - 0x1963F0
{
	struct<8> Var0;
	if (iParam3 == 1)
	{
		*uParam1 = (*uParam1 + uParam0->f_9);
	}
	else if (iParam3 == 2)
	{
		*uParam1 = (*uParam1 + uParam0->f_7);
	}
	else
	{
		*uParam1 = (*uParam1 + uParam0->f_7);
	}
	if (*uParam1 >= iParam2)
	{
		*uParam1 = 0;
	}
	StringCopy(&Var0, sParam5, 64);
	StringIntConCat(&Var0, *uParam1, 64);
	func_5244(sParam4, &Var0, fParam6, fParam7, fParam8, fParam9, fParam10, iParam11, iParam12, iParam13, iParam14, bParam15);
}

void func_5254(var uParam0, int iParam1)//Position - 0x1964A4
{
	char cVar0[64];
	struct<4> Var1;
	float fVar2;
	StringCopy(&cVar0, "FINGERPRINT_HACKING_MINIGAME_FINGERPRINTS_0", 64);
	StringCopy(&Var1, "MPFClone_Retro_Print", 32);
	if (BitTest(uParam0->f_752, 7))
	{
		StringCopy(&Var1, "MPFClone_Retro_PrintFull", 32);
		StringIntConCat(&cVar0, iParam1 + 1, 64);
		StringIntConCat(&Var1, iParam1 + 1, 32);
	}
	else
	{
		StringIntConCat(&cVar0, iParam1 + 1, 64);
		StringIntConCat(&Var1, iParam1, 32);
	}
	fVar2 = __LIB_25__::func_433(iParam1);
	if (iParam1 <= uParam0->f_735)
	{
		if (iParam1 == uParam0->f_755 + 1)
		{
			func_5243(&Var1, &cVar0, fVar2, 0.182f, 100f, 128f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
			func_5243("MPFClone_Retro", "Decyphered_Selector", fVar2, 0.182f, 128f, 128f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
		}
		else
		{
			func_5243(&Var1, &cVar0, fVar2, 0.182f, 100f, 128f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
			func_5243("MPFClone_Retro", "Decyphered_Selector", fVar2, 0.182f, 128f, 128f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
	}
}

void func_5256(var uParam0, struct<16> Param1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x19662C
{
	float fVar0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	__LIB_25__::func_434(uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/].f_2, &fVar0, &fVar1);
	iVar2 = uParam0->f_757[uParam0->f_755] + 1;
	StringIntConCat(&Param1, iVar2, 64);
	cVar3 = { Param1 };
	StringConCat(&cVar3, "_SLICE_0", 64);
	if (BitTest(uParam0->f_752, 5))
	{
		if (uParam0->f_2 <= 0)
		{
			uParam0->f_971[iParam2] = 0;
		}
		else if ((uParam0->f_2 + iParam2) == 10)
		{
			uParam0->f_971[iParam2] = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
		}
		if (uParam0->f_971[iParam2] == 0)
		{
			func_5243("MPFClone_Retro", "comp_blank", fVar0, fVar1, 468f, 72f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
		}
		else
		{
			StringIntConCat(&cVar3, uParam0->f_971[iParam2], 64);
			func_5243(&sParam3, &cVar3, fVar0, fVar1, 468f, 72f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
	}
	else
	{
		iVar2 = uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/] + 1;
		StringIntConCat(&cVar3, iVar2, 64);
		if (BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/].f_1, 0))
		{
			func_5243(&sParam3, &cVar3, fVar0, fVar1, 468f, 72f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
		}
		else
		{
			func_5243(&sParam3, &cVar3, fVar0, fVar1, 468f, 72f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
		if (uParam0->f_753 == uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/].f_2)
		{
			func_5243("MPFClone_Retro", "selectorFrame", fVar0, fVar1, 468f, 72f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
		}
	}
}

void func_5258(var uParam0, char[64] cParam1, char* sParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9)//Position - 0x1968D5
{
	char cVar0[64];
	int iVar1;
	cVar0 = { cParam1 };
	iVar1 = uParam0->f_757[uParam0->f_755] + 1;
	StringIntConCat(&cVar0, iVar1, 64);
	if (BitTest(uParam0->f_752, 1))
	{
		func_5243(&sParam2, &cVar0, 0.75f, 0.6f, 512f, 648f, 0f, Local_119.f_0, Local_119.f_1, Local_119.f_2, Local_119.f_3, 0);
	}
	else
	{
		func_5243(&sParam2, &cVar0, 0.75f, 0.6f, 512f, 648f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
	}
}

void func_5259(var* uParam0, int* iParam1)//Position - 0x19696E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_5231(uParam0, iParam1);
	if (!BitTest(uParam0->f_752, 7))
	{
		if ((BitTest(uParam0->f_752, 1) && !BitTest(uParam0->f_752, 3)) && !BitTest(uParam0->f_752, 4))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (__LIB_25__::func_437(uParam0, iVar1))
				{
				}
				if (__LIB_26__::func_454(uParam0, iVar1))
				{
					iVar0++;
				}
				iVar1++;
			}
			if (iVar0 >= 4)
			{
				MISC::SET_BIT(&(uParam0->f_752), 3);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_752), 4);
				uParam0->f_754 = iVar0;
			}
			__LIB_0__::func_794(&(uParam0->f_750));
		}
	}
	else if (BitTest(uParam0->f_752, 1) && !BitTest(uParam0->f_752, 3))
	{
		MISC::SET_BIT(&(uParam0->f_752), 3);
		__LIB_0__::func_794(&(uParam0->f_750));
	}
	if (BitTest(uParam0->f_752, 1) && BitTest(uParam0->f_752, 2))
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_992))
		{
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_992, "Processing", uParam0->f_741, true);
		}
		if (__LIB_0__::func_937(&(uParam0->f_750), 2000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 2);
			AUDIO::STOP_SOUND(uParam0->f_992);
			if (BitTest(uParam0->f_752, 3))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Print_Match", uParam0->f_741, true);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Print_Not_Match", uParam0->f_741, true);
			}
		}
	}
	func_5266(uParam0);
	if (!BitTest(uParam0->f_740, 2))
	{
		AUDIO::STOP_SOUND(-1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Pattern_Shift", uParam0->f_741, true);
		MISC::SET_BIT(&(uParam0->f_740), 2);
	}
	if (__LIB_0__::func_937(&(uParam0->f_729), uParam0->f_733, 0) && __LIB_25__::func_440(uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_752), 5);
		MISC::CLEAR_BIT(&(uParam0->f_752), 6);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Pattern_Scramble", uParam0->f_741, true);
		__LIB_0__::func_794(&(uParam0->f_750));
	}
	else if (BitTest(uParam0->f_752, 5))
	{
		if (!BitTest(uParam0->f_752, 6))
		{
			__LIB_33__::func_801(uParam0);
		}
		if (__LIB_0__::func_937(&(uParam0->f_750), 4000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 5);
			__LIB_0__::func_794(&(uParam0->f_729));
		}
	}
	if (__LIB_0__::func_937(&(uParam0->f_750), 4000, 0) && !__LIB_25__::func_440(uParam0))
	{
		if (BitTest(uParam0->f_752, 1))
		{
			if (BitTest(uParam0->f_752, 4))
			{
				AUDIO::STOP_SOUND(-1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Window_Clear", uParam0->f_741, true);
				MISC::CLEAR_BIT(&(uParam0->f_752), 4);
				MISC::CLEAR_BIT(&(uParam0->f_752), 1);
				uParam0->f_1 = 1;
				__LIB_0__::func_794(&(uParam0->f_750));
				__LIB_0__::func_794(&(uParam0->f_729));
				uParam0->f_3 = (uParam0->f_3 - 1);
				uParam0->f_753 = 0;
				if (uParam0->f_3 <= 0)
				{
					__LIB_1__::func_289(uParam0, 6);
				}
				else if (!BitTest(*iParam1, 6))
				{
					MISC::SET_BIT(iParam1, 6);
				}
			}
			else if (BitTest(uParam0->f_752, 3))
			{
				MISC::CLEAR_BIT(&(uParam0->f_752), 3);
				MISC::CLEAR_BIT(&(uParam0->f_752), 1);
				__LIB_0__::func_794(&(uParam0->f_750));
				__LIB_0__::func_794(&(uParam0->f_729));
				if (BitTest(uParam0->f_752, 7))
				{
					iVar2 = 0;
					while (iVar2 <= 7)
					{
						if (BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar2 /*3*/].f_1, 0))
						{
							uParam0->f_756 = (uParam0->f_756 - 1);
							MISC::CLEAR_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar2 /*3*/].f_1), 0);
						}
						iVar2++;
					}
				}
				uParam0->f_755++;
				uParam0->f_1 = 1;
				uParam0->f_753 = 0;
				uParam0->f_756 = 0;
				if (BitTest(uParam0->f_752, 7))
				{
					iVar3 = 0;
					while (iVar3 <= 7)
					{
						if (uParam0->f_766[uParam0->f_755 /*25*/][iVar3 /*3*/].f_2 == 0)
						{
							if (!BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar3 /*3*/].f_1, 0))
							{
								uParam0->f_756++;
								MISC::SET_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar3 /*3*/].f_1), 0);
							}
						}
						iVar3++;
					}
				}
				if (uParam0->f_755 >= uParam0->f_735)
				{
					uParam0->f_755 = (uParam0->f_755 - 1);
					__LIB_1__::func_289(uParam0, 5);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Window_Clear", uParam0->f_741, true);
					if (!BitTest(*iParam1, 7))
					{
						MISC::SET_BIT(iParam1, 7);
					}
				}
			}
		}
	}
}

void func_5266(var uParam0)//Position - 0x196FC0
{
	if (!BitTest(uParam0->f_752, 8))
	{
		fLocal_120 = (fLocal_120 + (0f + (1000f * SYSTEM::TIMESTEP())));
		switch (SYSTEM::FLOOR((fLocal_120 / 12000f)))
		{
			case 0:
				__LIB_1__::func_707("HG_fr_HELP_01" /* GXT: Use ~INPUTGROUP_FRONTEND_LSTICK_ALL~/~INPUTGROUP_FRONTEND_DPAD_UD~ to move between each component.~n~Match up each component using ~INPUTGROUP_FRONTEND_LSTICK_ALL~/~INPUTGROUP_FRONTEND_DPAD_LR~ until it matches the print shown in the target window. */, -1);
				break;
			case 1:
				__LIB_1__::func_707("HG_fr_HELP_02" /* GXT: Once all components are matched correctly the system will automatically bypass the target lock.~n~Clear all targets to bypass the system. */, -1);
				break;
			case 2:
				__LIB_1__::func_707("HG_fr_HELP_03" /* GXT: The security system will scramble the component panel if you don't work quickly. */, -1);
				break;
			case 3:
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					__LIB_1__::func_707("HG_FR_HELP_04_PC" /* GXT: Hold ~INPUT_FRONTEND_DELETE~ down for two seconds to exit the hacking interface. */, -1);
				}
				else
				{
					__LIB_1__::func_707("HG_fr_HELP_04" /* GXT: Hold ~INPUT_FRONTEND_CANCEL~ down for two seconds to exit the hacking interface. */, -1);
				}
				break;
			case 4:
				MISC::SET_BIT(&(uParam0->f_752), 8);
				break;
		}
	}
	else
	{
		fLocal_120 = 0f;
	}
}

void func_5277(int* iParam0, var* uParam1, int iParam2, float fParam3)//Position - 0x1976FE
{
	if (iParam2 == 0 && !BitTest(*iParam0, 5))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (__LIB_5__::func_120(&(uParam1->f_24), 1, 1500) && fParam3)
		{
			__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
			__LIB_1__::func_289(uParam1, 6);
			MISC::SET_BIT(iParam0, 2);
		}
	}
	else if (__LIB_5__::func_120(&(uParam1->f_20), 1, 1500) && fParam3)
	{
		__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
		__LIB_1__::func_289(uParam1, 6);
		MISC::SET_BIT(iParam0, 2);
	}
	if (__LIB_0__::func_937(&(uParam1->f_742), uParam1->f_732, 0))
	{
		__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
		__LIB_1__::func_289(uParam1, 6);
		MISC::SET_BIT(iParam0, 3);
	}
	uParam1->f_2++;
	if (uParam1->f_2 >= 20)
	{
		uParam1->f_2 = 0;
	}
}

void func_5279(var* uParam0, int* iParam1)//Position - 0x197832
{
	int iVar0;
	__LIB_20__::func_817(iParam1, uParam0);
	if (func_5162(uParam0) || __LIB_0__::func_937(&(uParam0->f_750), 8000, 0))
	{
		GRAPHICS::RELEASE_BINK_MOVIE(uParam0->f_5);
		__LIB_0__::func_794(&(uParam0->f_744));
		__LIB_1__::func_289(uParam0, 4);
	}
	if (BitTest(uParam0->f_752, 7))
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_2 == 0)
			{
				if (!BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1, 0))
				{
					uParam0->f_756++;
					MISC::SET_BIT(&(uParam0->f_766[uParam0->f_755 /*25*/][iVar0 /*3*/].f_1), 0);
				}
			}
			iVar0++;
		}
	}
}

void func_5280(var* uParam0, int* iParam1, int iParam2)//Position - 0x1978E3
{
	__LIB_25__::func_447(uParam0, iParam2);
	__LIB_33__::func_679(uParam0, iParam1);
	if (!__LIB_26__::func_456(uParam0, iParam1))
	{
		return;
	}
	__LIB_20__::func_803(uParam0, "FingerPrint_Intro");
	__LIB_0__::func_627(&(uParam0->f_750), 0, 0);
	__LIB_1__::func_289(uParam0, 3);
}

void func_5289(var* uParam0, int* iParam1)//Position - 0x197CE4
{
	struct<994> Var0;
	if (BitTest(*iParam1, 1))
	{
		return;
	}
	Var0 = 1;
	Var0.f_12 = 4;
	Var0.f_29.f_1 = 12;
	Var0.f_29.f_699 = 1065353216;
	Var0.f_739 = -1;
	Var0.f_757 = 8;
	Var0.f_766 = 8;
	Var0.f_766.f_1 = 8;
	Var0.f_766.f_1.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25 = 8;
	Var0.f_967 = 3;
	Var0.f_971 = 8;
	Var0.f_980 = 8;
	Var0.f_992 = -1;
	Var0.f_993.f_3 = 255;
	MISC::COPY_SCRIPT_STRUCT(uParam0, &Var0, 997);
	if (!func_5291())
	{
		return;
	}
	func_5290(uParam0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro_BACKGROUND", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro_BACKGROUND"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro_LIFE", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro_LIFE"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro_LOADING", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro_LOADING"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro_MESSAGES", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro_MESSAGES"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro_CORRECT", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro_CORRECT"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro_NUMBERS", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro_NUMBERS"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPFClone_Retro_SCRAMBLER", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPFClone_Retro_SCRAMBLER"))
	{
		return;
	}
	uParam0->f_741 = "DLC_H4_Fingerprint_Hack_Minigame_Sounds";
	if (uParam0->f_992 == -1)
	{
		uParam0->f_992 = AUDIO::GET_SOUND_ID();
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_FH_MG", false, -1))
	{
		return;
	}
	if (!BitTest(uParam0->f_752, 7))
	{
		MISC::SET_BIT(&(uParam0->f_752), 7);
	}
	fLocal_120 = 0f;
	if (BitTest(uParam0->f_752, 8))
	{
		MISC::CLEAR_BIT(&(uParam0->f_752), 8);
	}
	__LIB_0__::func_963(1, 1, 1, 0);
	Global_4718592.f_163007 = 1;
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 16);
	uParam0->f_20.f_3 = 202;
	uParam0->f_20.f_2 = 2;
	uParam0->f_24.f_2 = 2;
	uParam0->f_24.f_3 = 214;
	uParam0->f_739 = AUDIO::GET_SOUND_ID();
	MISC::CLEAR_BIT(iParam1, 2);
	__LIB_0__::func_795(&(uParam0->f_748), 0, 0);
	__LIB_0__::func_627(&(uParam0->f_748), 0, 0);
	__LIB_1__::func_289(uParam0, 2);
}

void func_5290(var* uParam0)//Position - 0x197F44
{
	int iVar0;
	uParam0->f_752 = 0;
	uParam0->f_3 = 6;
	uParam0->f_755 = 0;
	uParam0->f_993 = 41;
	uParam0->f_993.f_1 = 194;
	uParam0->f_993.f_2 = 82;
	uParam0->f_993.f_3 = 255;
	Local_119.f_0 = 255;
	Local_119.f_2 = 255;
	Local_119.f_1 = 255;
	Local_119.f_3 = 255;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_971[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_980[iVar0] = 255;
		iVar0++;
	}
	uParam0->f_732 = 300000;
	uParam0->f_733 = 90000;
	if (BitTest(uParam0->f_752, 7))
	{
		uParam0->f_732 = 300000;
		uParam0->f_733 = 90000;
	}
	uParam0->f_734 = 0;
	uParam0->f_1 = 1;
}

int func_5291()//Position - 0x198008
{
	char cVar0[24];
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
		__LIB_1__::func_92();
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	StringCopy(&cVar0, "mphackinggameoverlay", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "mphackinggameoverlay1", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	return 1;
}

void func_5292(var* uParam0)//Position - 0x198070
{
	func_5243("MPFClone_Retro_BACKGROUND", "FINGERPRINT_HACKING_MINIGAME_BACKGROUND", 0.5f, 0.5f, 1980f, 1080f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
	func_5294(uParam0, uParam0->f_732, 0.1325f, 0.144f, 30f, 42f, Local_119, 0.031f, 1);
	func_5293(uParam0, uParam0->f_733, 0.184f, 0.235f, 500f, 28f, uParam0->f_993, 0.23337f, 0.01114f, 8f, 18f, __LIB_25__::func_440(uParam0), 0f, BitTest(uParam0->f_752, 5));
}

void func_5293(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, struct<4> Param6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)//Position - 0x198127
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	if (*uParam0 != 4)
	{
		return;
	}
	if ((__LIB_0__::func_864(&(uParam0->f_729)) && *uParam0 == 4) && fParam11)
	{
		iVar0 = (iParam1 - __LIB_1__::func_724(&(uParam0->f_729), 0, 0));
		if (iVar0 < 0)
		{
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	func_5243("MPFClone_Retro_SCRAMBLER", "FINGERPRINT_HACKING_MINIGAME_SCRAMBLER_BACKGROUND", fParam2, fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, (Param6.f_3 / 2), 0);
	fVar1 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = (fVar1 * 100f);
	fVar2 = (SYSTEM::TO_FLOAT(41) / 100f);
	fVar2 = (fVar2 * fVar1);
	uParam0->f_738 = SYSTEM::FLOOR(fVar2);
	if (uParam0->f_738 != uParam0->f_737 && !bParam13)
	{
		if (uParam0->f_737 != uParam0->f_738 && !BitTest(uParam0->f_752, 5))
		{
			switch (SYSTEM::CEIL((IntToFloat(uParam0->f_738) / 10f)))
			{
				case 0:
				case 1:
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_High", uParam0->f_741, true);
					break;
				case 2:
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_MED", uParam0->f_741, true);
					break;
			}
			if (SYSTEM::CEIL((IntToFloat(uParam0->f_738) / 10f)) >= 3)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Scramble_Countdown_Low", uParam0->f_741, true);
			}
			uParam0->f_737 = uParam0->f_738;
		}
	}
	iVar3 = 1;
	while (iVar3 <= uParam0->f_738)
	{
		fVar4 = ((fParam2 - fParam7) + (fParam8 * IntToFloat(iVar3)));
		GRAPHICS::DRAW_RECT(func_5165(fVar4), (fParam3 + fParam12), ((fParam9 / 1920f) * fLocal_118), (fParam10 / 1080f), Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, false);
		iVar3++;
	}
}

void func_5294(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, struct<4> Param6, float fParam7, bool bParam8)//Position - 0x1982D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	if (__LIB_0__::func_864(&(uParam0->f_748)))
	{
		iVar0 = (iParam1 - __LIB_1__::func_724(&(uParam0->f_748), 0, 0));
		if (*uParam0 == 8 || !bParam8)
		{
			iVar0 = iParam1;
		}
		if (iVar0 < 0)
		{
		}
		iVar1 = ((iVar0 / 1000) / 60);
		iVar2 = ((iVar0 - iVar1 * 60 * 1000) / 1000);
		iVar3 = (iVar0 - (iVar2 + iVar1 * 60) * 1000);
		if (iVar1 <= 0)
		{
			func_5243("MPFClone_Retro_NUMBERS", "FINGERPRINT_HACKING_MINIGAME_NUMBERS_00", (fParam2 - (fParam7 * 2f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
			func_5243("MPFClone_Retro_NUMBERS", "FINGERPRINT_HACKING_MINIGAME_NUMBERS_00", (fParam2 - fParam7), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		}
		else
		{
			__LIB_25__::func_448(&sVar4, (iVar1 % 10));
			func_5243("MPFClone_Retro_NUMBERS", &sVar4, (fParam2 - fParam7), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
			iVar1 = (iVar1 / 10);
			__LIB_25__::func_448(&sVar4, iVar1);
			func_5243("MPFClone_Retro_NUMBERS", &sVar4, (fParam2 - (fParam7 * 2f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		}
		func_5243("MPFClone_Retro_NUMBERS", "FINGERPRINT_HACKING_MINIGAME_NUMBERS_COLON", fParam2, fParam3, 32f, 32f, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		__LIB_25__::func_448(&sVar4, (iVar2 % 10));
		func_5243("MPFClone_Retro_NUMBERS", &sVar4, (fParam2 + (fParam7 * 2f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		iVar2 = (iVar2 / 10);
		__LIB_25__::func_448(&sVar4, iVar2);
		func_5243("MPFClone_Retro_NUMBERS", &sVar4, (fParam2 + fParam7), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		func_5243("MPFClone_Retro_NUMBERS", "FINGERPRINT_HACKING_MINIGAME_NUMBERS_COLON", (fParam2 + (fParam7 * 3f)), fParam3, 32f, 32f, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		__LIB_25__::func_448(&sVar4, (iVar3 % 10));
		func_5243("MPFClone_Retro_NUMBERS", &sVar4, (fParam2 + (fParam7 * 4f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		iVar3 = (iVar3 / 10);
		iVar3 = (iVar3 % 10);
		__LIB_25__::func_448(&sVar4, iVar3);
		func_5243("MPFClone_Retro_NUMBERS", &sVar4, (fParam2 + (fParam7 * 5f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
	}
}

void func_5296(var* uParam0, int* iParam1)//Position - 0x19856F
{
	__LIB_25__::func_449(uParam0, "DLC_H4_Fingerprint_Hack_Scene");
	func_5231(uParam0, iParam1);
}

void func_5298(var* uParam0, int* iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x1985CA
{
	if (!bParam2)
	{
		func_5299(iParam1, uParam0, iParam3, iParam4, 600335024, uParam0->f_755 + 1);
	}
	__LIB_25__::func_431(uParam0, "DLC_H3_Door_Hack_Scene");
	__LIB_20__::func_877(iParam1, uParam0, bParam2);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPOrderUnlock");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPOrderUnlock_Decor");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPOrderUnlock_Decor1");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEIST3/Door_Hacking");
}

void func_5299(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x198629
{
	int iVar0;
	int iVar1;
	__LIB_20__::func_804(iParam0, &(uParam1->f_742), uParam1->f_732);
	iVar1 = iParam0->f_1;
	if (BitTest(*iParam0, 0))
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = iParam5;
	}
	STATS::PLAYSTATS_HEIST3_HACK(uParam2, iParam3, iParam4, BitTest(*iParam0, 0), iVar0, iVar1);
}

void func_5300(var* uParam0, int* iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x19866C
{
	if ((*uParam0 > 0 && *uParam0 < 7) || *uParam0 == 8)
	{
		if (*uParam0 != 7)
		{
			func_5343(uParam0, iParam1);
		}
		if ((!Global_1963986 && *uParam0 > 2) && *uParam0 != 7)
		{
			func_5333(uParam0);
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_20__::func_818(uParam0, iParam1);
			break;
		case 1:
			func_5330(uParam0, iParam1);
			break;
		case 2:
			func_5325(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_5324(uParam0, iParam1);
			break;
		case 4:
			func_5304(uParam0, iParam1, iParam3, bParam4);
			break;
		case 5:
			func_5303(uParam0, iParam1);
			break;
		case 6:
			func_5302(uParam0, iParam1);
			break;
		case 7:
			func_5298(uParam0, iParam1, 0, joaat("practice"), 0);
			break;
	}
	if (((!Global_1963986 && *uParam0 > 2) && *uParam0 != 7) || *uParam0 == 8)
	{
		func_5301(uParam0);
	}
}

void func_5301(var* uParam0)//Position - 0x19878E
{
	func_5244("mphackinggameoverlay", "grid_rgb_pixels", 0.5f, 0.5f, 1920f, 1080f, 0f, 255, 255, 255, 255, 0);
	func_5244("mphackinggameoverlay1", "ScreenGrid", 0.5f, 0.5f, 1920f, 1080f, 0f, 255, 255, 255, 255, 0);
}

void func_5302(var* uParam0, int* iParam1)//Position - 0x1987EA
{
	func_5246(iParam1, uParam0, 4000, "Fail_OU");
}

void func_5303(var* uParam0, int* iParam1)//Position - 0x198802
{
	func_5248(iParam1, uParam0, 4000, "Success_OU");
}

void func_5304(var* uParam0, int* iParam1, int iParam2, bool bParam3)//Position - 0x19881A
{
	bool bVar0;
	bVar0 = __LIB_25__::func_468(uParam0);
	if (!BitTest(uParam0->f_740, 2))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Play_Start", uParam0->f_741, true);
		MISC::SET_BIT(&(uParam0->f_740), 2);
	}
	func_5277(iParam1, uParam0, iParam2, bVar0);
	if (bVar0)
	{
		func_5318(uParam0);
	}
	func_5315(uParam0, iParam1, bParam3);
	func_5306(uParam0);
	func_5305(uParam0);
}

void func_5305(var* uParam0)//Position - 0x19887C
{
	struct<9> Var0;
	if (*uParam0 == 4)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			uParam0->f_1 = 1;
		}
		Var0 = { __LIB_1__::func_404() };
		if (uParam0->f_1)
		{
			__LIB_1__::func_539(&(uParam0->f_29));
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				__LIB_7__::func_603(__LIB_1__::func_724(&(uParam0->f_746), 0, 0), 1500, "HG_INT_04a" /* GXT: Aborting Hack */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
				__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
			}
			else
			{
				__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
			}
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "HG_INT_01" /* GXT: Select */, &(uParam0->f_29), 0);
			__LIB_2__::func_817(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 6, true), "HG_INT_03" /* GXT: Move Selector */, &(uParam0->f_29), 0);
			uParam0->f_1 = 0;
		}
		__LIB_5__::func_693(&(uParam0->f_28), &Var0, &(uParam0->f_29), 0);
	}
	else
	{
		__LIB_1__::func_403(&(uParam0->f_29));
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_28));
	}
}

void func_5306(var* uParam0)//Position - 0x19898F
{
	func_5309(uParam0);
	func_5307(uParam0);
	if (BitTest(uParam0->f_752, 1))
	{
		if (BitTest(uParam0->f_752, 3))
		{
			if (BitTest(uParam0->f_752, 10))
			{
				func_5252(uParam0, &(uParam0->f_731), 2, 1, "mphackinggame", "Correct_", 0.5f, 0.5f, 600f, 140f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
			}
		}
	}
}

void func_5307(var uParam0)//Position - 0x198A09
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 < uParam0->f_755)
		{
			StringCopy(&Var1, "Keypad_", 24);
			StringIntConCat(&Var1, uParam0->f_906[iVar0], 24);
			func_5244("mporderunlock", &Var1, __LIB_25__::func_459(uParam0->f_906[iVar0], 1), __LIB_25__::func_459(uParam0->f_906[iVar0], 0), 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
			StringCopy(&Var1, "Keypad_Feedback_", 24);
			StringIntConCat(&Var1, uParam0->f_906[iVar0], 24);
			func_5244("mporderunlock", &Var1, (0.777f + (0.067f * IntToFloat(iVar0))), 0.773f, 64f, 64f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
		}
		else if (((BitTest(uParam0->f_752, 1) && BitTest(uParam0->f_752, 3)) && BitTest(uParam0->f_752, 10)) && iVar0 == uParam0->f_755)
		{
			if (uParam0->f_731 == 0)
			{
				StringCopy(&Var1, "Keypad_", 24);
				StringIntConCat(&Var1, uParam0->f_906[iVar0], 24);
				func_5244("mporderunlock", &Var1, __LIB_25__::func_459(uParam0->f_906[iVar0], 1), __LIB_25__::func_459(uParam0->f_906[iVar0], 0), 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
				StringCopy(&Var1, "Keypad_Feedback_", 24);
				StringIntConCat(&Var1, uParam0->f_906[iVar0], 24);
				func_5244("mporderunlock", &Var1, (0.777f + (0.067f * IntToFloat(iVar0))), 0.773f, 64f, 64f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
			}
		}
		else if (iVar0 >= uParam0->f_735)
		{
			func_5244("mporderunlock", "Disabled_Digit", (0.777f + (0.067f * IntToFloat(iVar0))), 0.773f, 64f, 64f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
		}
		if (iVar0 == uParam0->f_755)
		{
			func_5244("mporderunlock", "Keypad_Feedback_Box", (0.777f + (0.067f * IntToFloat(iVar0))), 0.773f, 80f, 80f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
		}
		iVar0++;
	}
	if (*uParam0 == 8)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			StringCopy(&Var1, "Keypad_", 24);
			StringIntConCat(&Var1, iVar0, 24);
			func_5244("mporderunlock", &Var1, __LIB_25__::func_459(iVar0, 1), __LIB_25__::func_459(iVar0, 0), 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
			iVar0++;
		}
	}
}

void func_5309(var uParam0)//Position - 0x198DFD
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	uParam0->f_918 = (uParam0->f_918 + uParam0->f_9);
	uParam0->f_919 = (uParam0->f_919 + uParam0->f_7);
	if (uParam0->f_918 >= 2)
	{
		uParam0->f_918 = 0;
	}
	if (uParam0->f_919 >= 2)
	{
		uParam0->f_919 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		fVar2 = (0.073f + (IntToFloat(iVar0) * 0.1f));
		if (BitTest(uParam0->f_752, 8) || BitTest(uParam0->f_752, 5))
		{
			if (uParam0->f_918 != 0)
			{
				uParam0->f_911[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				__LIB_0__::func_794(&(uParam0->f_922));
			}
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			fVar3 = (0.317f + (IntToFloat(iVar1) * 0.1f));
			if (BitTest(uParam0->f_752, 8) || BitTest(uParam0->f_752, 5))
			{
				if (uParam0->f_918 == 0)
				{
					if (iVar0 < uParam0->f_756)
					{
						if (__LIB_25__::func_464(uParam0, iVar0, iVar1))
						{
							func_5244("mporderunlock", "correct_circles", fVar2, fVar3, 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
						}
					}
					else if (iVar1 == uParam0->f_911[iVar0])
					{
						func_5244("mporderunlock", "correct_circles", fVar2, fVar3, 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
					}
				}
			}
			else if (BitTest(uParam0->f_752, 7))
			{
				if (uParam0->f_918 == 0)
				{
					if (__LIB_25__::func_463(uParam0, iVar0, iVar1))
					{
						func_5244("mporderunlock", "correct_circles", fVar2, fVar3, 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
					}
				}
			}
			else if (__LIB_25__::func_464(uParam0, iVar0, iVar1))
			{
				if (__LIB_25__::func_462(uParam0, iVar0, iVar1))
				{
					if (BitTest(uParam0->f_752, 11))
					{
						if (uParam0->f_919 == 0)
						{
							func_5244("mporderunlock", "correct_circles", fVar2, fVar3, 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
						}
					}
					else
					{
						__LIB_25__::func_461(uParam0, iVar0, iVar1);
					}
				}
				else
				{
					func_5244("mporderunlock", "correct_circles", fVar2, fVar3, 100f, 100f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
				}
			}
			else if (__LIB_25__::func_460(uParam0, iVar0, iVar1))
			{
				if (__LIB_25__::func_462(uParam0, iVar0, iVar1))
				{
					if (BitTest(uParam0->f_752, 11))
					{
						if (uParam0->f_919 == 0)
						{
							func_5244("mporderunlock", "incorrect_circles", fVar2, fVar3, 32f, 32f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
						}
					}
					else
					{
						__LIB_25__::func_461(uParam0, iVar0, iVar1);
					}
				}
				else
				{
					func_5244("mporderunlock", "incorrect_circles", fVar2, fVar3, 32f, 32f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
				}
			}
			if (iVar0 <= uParam0->f_756)
			{
				if (BitTest(uParam0->f_752, 12) && iVar0 == uParam0->f_756)
				{
					if (uParam0->f_919 == 0 && !BitTest(uParam0->f_752, 11))
					{
						func_5244("mporderunlock", "Inner_Circles", fVar2, fVar3, 128f, 128f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
					}
				}
				else
				{
					func_5244("mporderunlock", "Inner_Circles", fVar2, fVar3, 128f, 128f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
				}
			}
			if ((uParam0->f_756 == iVar0 && uParam0->f_753 == iVar1) && __LIB_25__::func_468(uParam0))
			{
				func_5244("mporderunlock", "selector", fVar2, fVar3, 128f, 128f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_5315(var* uParam0, int* iParam1, bool bParam2)//Position - 0x19930E
{
	if ((BitTest(uParam0->f_752, 1) && !BitTest(uParam0->f_752, 3)) && !BitTest(uParam0->f_752, 4))
	{
		MISC::SET_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][uParam0->f_756 /*6*/][uParam0->f_753]), 1);
		MISC::SET_BIT(&(uParam0->f_757[uParam0->f_755 /*37*/][uParam0->f_756 /*6*/][uParam0->f_753]), 2);
		MISC::SET_BIT(&(uParam0->f_752), 11);
		__LIB_0__::func_794(&(uParam0->f_750));
		uParam0->f_919 = 0;
		if (__LIB_25__::func_464(uParam0, uParam0->f_756, uParam0->f_753))
		{
			MISC::SET_BIT(&(uParam0->f_752), 3);
			MISC::SET_BIT(&(uParam0->f_752), 12);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Choose_Good", uParam0->f_741, true);
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_752), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Cursor_Choose_Bad", uParam0->f_741, true);
		}
	}
	func_5317(uParam0, bParam2, *iParam1);
	if (__LIB_0__::func_937(&(uParam0->f_729), uParam0->f_733, 0) && __LIB_25__::func_468(uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_752), 5);
		MISC::CLEAR_BIT(&(uParam0->f_752), 6);
		__LIB_0__::func_794(&(uParam0->f_750));
	}
	else if (BitTest(uParam0->f_752, 5))
	{
		if (!BitTest(uParam0->f_752, 6))
		{
			__LIB_25__::func_975(uParam0);
			MISC::SET_BIT(&(uParam0->f_752), 6);
		}
		MISC::SET_BIT(&(uParam0->f_752), 7);
		MISC::SET_BIT(&(uParam0->f_752), 8);
		__LIB_0__::func_794(&(uParam0->f_750));
		MISC::CLEAR_BIT(&(uParam0->f_752), 5);
		MISC::CLEAR_BIT(&(uParam0->f_752), 6);
	}
	if (uParam0->f_918 == 0)
	{
		if (BitTest(uParam0->f_752, 12) && !BitTest(uParam0->f_752, 11))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "New_Line_Flash", uParam0->f_741, true);
		}
		else if (BitTest(uParam0->f_752, 8) || BitTest(uParam0->f_752, 5))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Dot_Sequence_Change", uParam0->f_741, true);
		}
		else if (BitTest(uParam0->f_752, 7))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Dot_Sequence_Choose_Flash", uParam0->f_741, true);
		}
	}
	if (((BitTest(uParam0->f_752, 1) && BitTest(uParam0->f_752, 3)) && BitTest(uParam0->f_752, 10)) && !BitTest(uParam0->f_740, 4))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Section_Success_Window_Appears", uParam0->f_741, true);
		MISC::SET_BIT(&(uParam0->f_740), 4);
	}
	else if (((!BitTest(uParam0->f_752, 1) && !BitTest(uParam0->f_752, 3)) && !BitTest(uParam0->f_752, 10)) && BitTest(uParam0->f_740, 4))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Section_Success_Window_Cleared", uParam0->f_741, true);
		MISC::CLEAR_BIT(&(uParam0->f_740), 4);
	}
	if (BitTest(uParam0->f_752, 8))
	{
		if (__LIB_0__::func_937(&(uParam0->f_750), 2000, 0) && uParam0->f_918 != 0)
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 8);
			__LIB_0__::func_794(&(uParam0->f_750));
		}
	}
	else if (BitTest(uParam0->f_752, 7))
	{
		if (!BitTest(uParam0->f_752, 9) && uParam0->f_918 != 0)
		{
			__LIB_0__::func_627(&(uParam0->f_742), 0, 0);
			__LIB_0__::func_627(&(uParam0->f_729), 0, 0);
		}
		if (__LIB_0__::func_937(&(uParam0->f_750), 2000, 0) && uParam0->f_918 != 0)
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 7);
			if (!BitTest(uParam0->f_752, 9))
			{
				__LIB_0__::func_627(&(uParam0->f_742), 0, 0);
				__LIB_0__::func_627(&(uParam0->f_729), 0, 0);
				MISC::SET_BIT(&(uParam0->f_752), 9);
			}
			else
			{
				__LIB_0__::func_794(&(uParam0->f_729));
			}
		}
	}
	if (BitTest(uParam0->f_752, 11))
	{
		if (__LIB_0__::func_937(&(uParam0->f_750), 825, 0) && uParam0->f_919 == 0)
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 11);
			uParam0->f_919 = 0;
			if (BitTest(uParam0->f_752, 12))
			{
				__LIB_0__::func_794(&(uParam0->f_750));
			}
		}
	}
	else if (BitTest(uParam0->f_752, 12))
	{
		if (__LIB_0__::func_937(&(uParam0->f_750), 825, 0) && uParam0->f_919 == 0)
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 12);
		}
	}
	if (BitTest(uParam0->f_752, 1))
	{
		if (BitTest(uParam0->f_752, 3))
		{
			if (!BitTest(uParam0->f_752, 10))
			{
				uParam0->f_756++;
			}
			if (uParam0->f_756 >= 6)
			{
				if (!BitTest(uParam0->f_752, 11))
				{
					if (!BitTest(uParam0->f_752, 10))
					{
						__LIB_0__::func_794(&(uParam0->f_750));
						MISC::SET_BIT(&(uParam0->f_752), 10);
					}
					else if (__LIB_0__::func_937(&(uParam0->f_750), 2500, 0))
					{
						uParam0->f_755++;
						uParam0->f_756 = 0;
						MISC::SET_BIT(&(uParam0->f_752), 7);
						MISC::SET_BIT(&(uParam0->f_752), 8);
						MISC::CLEAR_BIT(&(uParam0->f_752), 10);
						__LIB_0__::func_794(&(uParam0->f_922));
						__LIB_0__::func_794(&(uParam0->f_750));
						__LIB_0__::func_794(&(uParam0->f_729));
						if (uParam0->f_755 >= uParam0->f_735)
						{
							uParam0->f_755 = (uParam0->f_735 - 1);
							__LIB_1__::func_289(uParam0, 5);
						}
						else if (!BitTest(*iParam1, 7))
						{
							MISC::SET_BIT(iParam1, 7);
						}
						MISC::CLEAR_BIT(&(uParam0->f_752), 1);
						MISC::CLEAR_BIT(&(uParam0->f_752), 3);
						MISC::CLEAR_BIT(&(uParam0->f_752), 4);
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam0->f_752), 1);
				MISC::CLEAR_BIT(&(uParam0->f_752), 3);
				MISC::CLEAR_BIT(&(uParam0->f_752), 4);
			}
		}
		else if (BitTest(uParam0->f_752, 4))
		{
			uParam0->f_3 = (uParam0->f_3 - 1);
			if (uParam0->f_3 <= 0)
			{
				__LIB_1__::func_289(uParam0, 6);
			}
			else if (!BitTest(*iParam1, 6))
			{
				MISC::SET_BIT(iParam1, 6);
			}
			MISC::CLEAR_BIT(&(uParam0->f_752), 1);
			MISC::CLEAR_BIT(&(uParam0->f_752), 3);
			MISC::CLEAR_BIT(&(uParam0->f_752), 4);
		}
	}
}

void func_5317(var uParam0, bool bParam1, var uParam2, var uParam3)//Position - 0x199942
{
	if (__LIB_0__::func_1("HG_FC_HELP_04a" /* GXT: Your hacker is blocking the abort signal. Aborting a second in-progress hack will set off the alarm. */) && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		return;
	}
	if (BitTest(uParam0->f_752, 30))
	{
		if (!BitTest(uParam2, 8))
		{
			if (!bParam1)
			{
				__LIB_1__::func_707("HG_FC_HELP_04a" /* GXT: Your hacker is blocking the abort signal. Aborting a second in-progress hack will set off the alarm. */, 10000);
			}
			else
			{
				__LIB_1__::func_707("HG_FC_HELP_04" /* GXT: Aborting an in-progress hack will set off the alarm. */, -1);
			}
		}
		if (__LIB_0__::func_937(&(uParam0->f_746), 2000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 30);
		}
		return;
	}
	if (BitTest(uParam0->f_752, 13))
	{
		__LIB_1__::func_707("HG_OU_HELP_00" /* GXT: Memorize the final positions of the signal nodes then repeat the pattern. */, -1);
		if (__LIB_0__::func_937(&(uParam0->f_924), 5000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 13);
		}
		return;
	}
	if (BitTest(uParam0->f_752, 5))
	{
		__LIB_1__::func_707("HG_FC_HELP_03" /* GXT: The security system will scramble the element panel if you don't work quickly. Hiring better hackers will make this happen less frequently. */, -1);
		return;
	}
	if (__LIB_25__::func_468(uParam0))
	{
		__LIB_1__::func_707("HG_OU_HELP_01" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to select the correct node. */, -1);
	}
}

void func_5318(var* uParam0)//Position - 0x199A13
{
	int iVar0;
	iVar0 = __LIB_25__::func_442(uParam0);
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || iVar0 == 188)
	{
		__LIB_25__::func_467(uParam0, 188);
	}
	else if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || iVar0 == 187)
	{
		__LIB_25__::func_467(uParam0, 187);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		if (!BitTest(uParam0->f_752, 30))
		{
			__LIB_0__::func_794(&(uParam0->f_746));
			MISC::SET_BIT(&(uParam0->f_752), 30);
		}
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)))
	{
		__LIB_26__::func_460(uParam0);
	}
}

void func_5324(var* uParam0, int* iParam1)//Position - 0x199C54
{
	__LIB_20__::func_817(iParam1, uParam0);
	if (func_5162(uParam0) || __LIB_0__::func_937(&(uParam0->f_750), 4000, 0))
	{
		GRAPHICS::RELEASE_BINK_MOVIE(uParam0->f_5);
		__LIB_1__::func_289(uParam0, 4);
		MISC::SET_BIT(&(uParam0->f_752), 7);
		MISC::SET_BIT(&(uParam0->f_752), 8);
		__LIB_0__::func_794(&(uParam0->f_922));
		__LIB_0__::func_794(&(uParam0->f_750));
		__LIB_0__::func_627(&(uParam0->f_742), 0, 0);
		__LIB_0__::func_794(&(uParam0->f_924));
		MISC::SET_BIT(&(uParam0->f_752), 13);
	}
}

void func_5325(var* uParam0, int* iParam1, int iParam2)//Position - 0x199CD5
{
	int iVar0;
	__LIB_25__::func_447(uParam0, iParam2);
	__LIB_0__::func_467(iParam1);
	__LIB_25__::func_469(uParam0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_906[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		iVar0++;
	}
	func_5326(uParam0);
	__LIB_0__::func_627(&(uParam0->f_750), 0, 0);
	__LIB_0__::func_627(&(uParam0->f_742), 0, 0);
	__LIB_20__::func_803(uParam0, "Intro_OU");
	__LIB_1__::func_289(uParam0, 3);
}

void func_5326(var uParam0)//Position - 0x199D41
{
	int iVar0;
	iVar0 = __LIB_5__::func_140(__LIB_0__::func_797(), 0);
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = 4;
	}
	switch (iVar0)
	{
		case 0:
		case 6:
			uParam0->f_732 = 300000;
			uParam0->f_733 = 30000;
			uParam0->f_4 = 6;
			uParam0->f_3 = 6;
			uParam0->f_734 = 0;
			break;
		case 1:
			uParam0->f_732 = 120000;
			uParam0->f_733 = 40000;
			uParam0->f_4 = 3;
			uParam0->f_3 = 3;
			uParam0->f_734 = 40;
			break;
		case 2:
			uParam0->f_732 = 180000;
			uParam0->f_733 = 70000;
			uParam0->f_4 = 4;
			uParam0->f_3 = 4;
			uParam0->f_734 = 25;
			break;
		case 3:
			uParam0->f_732 = 180000;
			uParam0->f_733 = 60000;
			uParam0->f_4 = 5;
			uParam0->f_3 = 5;
			uParam0->f_734 = 20;
			break;
		case 4:
			uParam0->f_732 = 240000;
			uParam0->f_733 = 110000;
			uParam0->f_4 = 6;
			uParam0->f_3 = 6;
			uParam0->f_734 = 5;
			break;
		case 5:
			uParam0->f_732 = 240000;
			uParam0->f_733 = 100000;
			uParam0->f_4 = 6;
			uParam0->f_3 = 6;
			uParam0->f_734 = 5;
			break;
	}
}

void func_5330(var* uParam0, int* iParam1)//Position - 0x199FA0
{
	struct<927> Var0;
	char cVar1[24];
	if (BitTest(*iParam1, 1))
	{
		return;
	}
	Var0 = 1;
	Var0.f_12 = 4;
	Var0.f_29.f_1 = 12;
	Var0.f_29.f_699 = 1065353216;
	Var0.f_739 = -1;
	Var0.f_757 = 4;
	Var0.f_757.f_1 = 6;
	Var0.f_757.f_1.f_1 = 5;
	Var0.f_757.f_1.f_1.f_6 = 5;
	Var0.f_757.f_1.f_1.f_6.f_6 = 5;
	Var0.f_757.f_1.f_1.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_1.f_6.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37 = 6;
	Var0.f_757.f_1.f_37.f_1 = 5;
	Var0.f_757.f_1.f_37.f_1.f_6 = 5;
	Var0.f_757.f_1.f_37.f_1.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_1.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_1.f_6.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37 = 6;
	Var0.f_757.f_1.f_37.f_37.f_1 = 5;
	Var0.f_757.f_1.f_37.f_37.f_1.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_1.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_1.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_1.f_6.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_37 = 6;
	Var0.f_757.f_1.f_37.f_37.f_37.f_1 = 5;
	Var0.f_757.f_1.f_37.f_37.f_37.f_1.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6.f_6.f_6 = 5;
	Var0.f_757.f_1.f_37.f_37.f_37.f_1.f_6.f_6.f_6.f_6.f_6 = 5;
	Var0.f_906 = 4;
	Var0.f_911 = 6;
	Var0.f_926.f_3 = 255;
	MISC::COPY_SCRIPT_STRUCT(uParam0, &Var0, 930);
	if (!func_5332(iParam1, uParam0))
	{
		return;
	}
	__LIB_25__::func_470(uParam0);
	StringCopy(&cVar1, "MPOrderUnlock", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPOrderUnlock_Decor", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPOrderUnlock_Decor1", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	uParam0->f_741 = "DLC_H3_Cas_Door_Minigame_Sounds";
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3/Door_Hacking", false, -1))
	{
		return;
	}
	__LIB_1__::func_289(uParam0, 2);
}

int func_5332(int* iParam0, var* uParam1)//Position - 0x19A193
{
	char cVar0[24];
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
		__LIB_1__::func_92();
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	StringCopy(&cVar0, "MPHackingGame", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameBG", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameWin", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameWin1", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameWin2", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameWin2_1", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameWin2_2", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameWin2_3", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "MPHackingGameWin3", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "mphackinggameoverlay", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar0, "mphackinggameoverlay1", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar0, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar0))
	{
		return 0;
	}
	__LIB_0__::func_963(1, 1, 1, 0);
	Global_4718592.f_163007 = 1;
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 16);
	uParam1->f_20.f_3 = 202;
	uParam1->f_20.f_2 = 2;
	uParam1->f_24.f_2 = 2;
	uParam1->f_24.f_3 = 214;
	uParam1->f_739 = AUDIO::GET_SOUND_ID();
	MISC::CLEAR_BIT(iParam0, 2);
	return 1;
}

void func_5333(var uParam0)//Position - 0x19A35F
{
	func_5340(uParam0);
	func_5244("MPOrderUnlock", "background_layout", 0.5f, 0.5f, 1264f, 940f, 0f, uParam0->f_926, uParam0->f_926.f_1, uParam0->f_926.f_2, uParam0->f_926.f_3, 0);
	func_5338(uParam0, uParam0->f_733, 0.313f, 0.846f, 400f, 64f, uParam0->f_926, 0.178f, 0.0115f, 12f, 80f, 1, 0.005f, BitTest(uParam0->f_752, 5));
	func_5336(uParam0, uParam0->f_732, 0.122f, 0.144f, 40f, 60f, uParam0->f_926, 0.031f, BitTest(uParam0->f_752, 9));
	func_5335(uParam0, 0, 0.535f, 0.145f, 64f, 64f, uParam0->f_926, 0.055f);
	func_5334(uParam0, "MPOrderUnlock_Decor", 0.5f, 0.5f, 1264f, 940f, uParam0->f_926);
}

void func_5334(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, struct<4> Param6)//Position - 0x19A472
{
	char cVar0[24];
	struct<3> Var1;
	uParam0->f_17 = (uParam0->f_17 + uParam0->f_9);
	if (uParam0->f_17 >= 4)
	{
		uParam0->f_17 = 0;
	}
	StringCopy(&cVar0, "techaration_", 24);
	StringIntConCat(&cVar0, uParam0->f_17, 24);
	StringCopy(&Var1, sParam1, 24);
	if (uParam0->f_17 > 1)
	{
		StringConCat(&Var1, "1", 24);
	}
	func_5244(&Var1, &cVar0, fParam2, fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
}

void func_5335(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, struct<4> Param6, float fParam7)//Position - 0x19A4DC
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = 1;
	while (iVar0 <= uParam0->f_3)
	{
		if (bParam1)
		{
			fVar1 = fParam2;
			fVar2 = (fParam3 + (fParam7 * IntToFloat(iVar0)));
		}
		else
		{
			fVar1 = (fParam2 + (fParam7 * IntToFloat(iVar0)));
			fVar2 = fParam3;
		}
		func_5244("mphackinggame", "Life", fVar1, fVar2, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, (Param6.f_3 / 2), 0);
		iVar0++;
	}
}

void func_5336(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, struct<4> Param6, float fParam7, bool bParam8)//Position - 0x19A547
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	if (__LIB_0__::func_864(&(uParam0->f_742)))
	{
		iVar0 = (iParam1 - __LIB_1__::func_724(&(uParam0->f_742), 0, 0));
		if (*uParam0 == 8 || !bParam8)
		{
			iVar0 = iParam1;
		}
		if (iVar0 < 0)
		{
		}
		iVar1 = ((iVar0 / 1000) / 60);
		iVar2 = ((iVar0 - iVar1 * 60 * 1000) / 1000);
		iVar3 = (iVar0 - (iVar2 + iVar1 * 60) * 1000);
		if (iVar1 <= 0)
		{
			func_5244("mphackinggame", "Numbers_0", (fParam2 - (fParam7 * 2f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
			func_5244("mphackinggame", "Numbers_0", (fParam2 - fParam7), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		}
		else
		{
			__LIB_25__::func_457(&sVar4, (iVar1 % 10));
			func_5244("mphackinggame", &sVar4, (fParam2 - fParam7), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
			iVar1 = (iVar1 / 10);
			__LIB_25__::func_457(&sVar4, iVar1);
			func_5244("mphackinggame", &sVar4, (fParam2 - (fParam7 * 2f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		}
		func_5244("mphackinggame", "Numbers_Colon", fParam2, fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		__LIB_25__::func_457(&sVar4, (iVar2 % 10));
		func_5244("mphackinggame", &sVar4, (fParam2 + (fParam7 * 2f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		iVar2 = (iVar2 / 10);
		__LIB_25__::func_457(&sVar4, iVar2);
		func_5244("mphackinggame", &sVar4, (fParam2 + fParam7), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		func_5244("mphackinggame", "Numbers_Colon", (fParam2 + (fParam7 * 3f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		__LIB_25__::func_457(&sVar4, (iVar3 % 10));
		func_5244("mphackinggame", &sVar4, (fParam2 + (fParam7 * 4f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		iVar3 = (iVar3 / 10);
		iVar3 = (iVar3 % 10);
		__LIB_25__::func_457(&sVar4, iVar3);
		func_5244("mphackinggame", &sVar4, (fParam2 + (fParam7 * 5f)), fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
	}
}

void func_5338(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, struct<4> Param6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)//Position - 0x19A7D5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	if ((__LIB_0__::func_864(&(uParam0->f_729)) && *uParam0 == 4) && fParam11)
	{
		iVar0 = (iParam1 - __LIB_1__::func_724(&(uParam0->f_729), 0, 0));
		if (iVar0 < 0)
		{
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	func_5244("mphackinggame", "Scrambler_BG", fParam2, fParam3, fParam4, fParam5, 0f, Param6.f_0, Param6.f_1, Param6.f_2, (Param6.f_3 / 2), 0);
	fVar1 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = (fVar1 * 100f);
	fVar2 = (SYSTEM::TO_FLOAT(31) / 100f);
	fVar2 = (fVar2 * fVar1);
	uParam0->f_738 = SYSTEM::FLOOR(fVar2);
	if (uParam0->f_738 != uParam0->f_737 && !bParam13)
	{
		__LIB_25__::func_458(uParam0, uParam0->f_738, 31);
	}
	iVar3 = 1;
	while (iVar3 <= uParam0->f_738)
	{
		fVar4 = ((fParam2 - fParam7) + (fParam8 * IntToFloat(iVar3)));
		func_5244("mphackinggame", "Scrambler_Fill_Segment", fVar4, (fParam3 + fParam12), fParam9, fParam10, 0f, Param6.f_0, Param6.f_1, Param6.f_2, Param6.f_3, 0);
		iVar3++;
	}
	uParam0->f_737 = uParam0->f_738;
}

void func_5340(var uParam0)//Position - 0x19A95B
{
	func_5244("mphackinggamebg", "bg", 0.5f, 0.5f, 1920f, 1080f, 0f, 255, 255, 255, 255, 0);
	func_5342(uParam0);
	func_5341(uParam0);
	func_5252(uParam0, &(uParam0->f_12[2]), 1, 0, "mphackinggamewin", "tech_3_", 0.073f, 0.489f, 980f, 780f, 0f, 255, 255, 255, 255, 0);
	func_5252(uParam0, &(uParam0->f_12[3]), 2, 0, "mphackinggamewin3", "tech_4_", 0.044f, 0.672f, 980f, 580f, 0f, 255, 255, 255, 255, 0);
	func_5244("mphackinggame", "Black_BG", 0.5f, 0.5f, 1920f, 1080f, 0f, 5, 5, 5, 100, 0);
}

void func_5341(var uParam0)//Position - 0x19AA2C
{
	struct<3> Var0;
	char cVar1[24];
	uParam0->f_12[1] = (uParam0->f_12[1] + uParam0->f_7);
	if (uParam0->f_12[1] >= 11)
	{
		uParam0->f_12[1] = 0;
	}
	StringCopy(&Var0, "mphackinggamewin2", 24);
	if (uParam0->f_12[1] > 8)
	{
		StringConCat(&Var0, "_3", 24);
	}
	else if (uParam0->f_12[1] > 5)
	{
		StringConCat(&Var0, "_2", 24);
	}
	else if (uParam0->f_12[1] > 2)
	{
		StringConCat(&Var0, "_1", 24);
	}
	StringCopy(&cVar1, "tech_2_", 24);
	StringIntConCat(&cVar1, uParam0->f_12[1], 24);
	func_5244(&Var0, &cVar1, 0.993f, 0.642f, 840f, 580f, 0f, 255, 255, 255, 255, 0);
}

void func_5342(var uParam0)//Position - 0x19AADF
{
	struct<3> Var0;
	char cVar1[24];
	uParam0->f_12[0] = (uParam0->f_12[0] + uParam0->f_7);
	if (uParam0->f_12[0] >= 10)
	{
		uParam0->f_12[0] = 0;
	}
	StringCopy(&Var0, "mphackinggamewin", 24);
	if (uParam0->f_12[0] > 4)
	{
		StringConCat(&Var0, "1", 24);
	}
	StringCopy(&cVar1, "tech_1_", 24);
	StringIntConCat(&cVar1, uParam0->f_12[0], 24);
	func_5244(&Var0, &cVar1, 1f, 0.358f, 780f, 512f, 0f, 255, 255, 255, 255, 0);
}

void func_5343(var uParam0, int* iParam1)//Position - 0x19AB5F
{
	func_5231(uParam0, iParam1);
	__LIB_25__::func_449(uParam0, "DLC_H3_Door_Hack_Scene");
}

void func_5344(var* uParam0, int* iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x19AB7A
{
	int iVar0;
	char cVar1[24];
	if (!bParam2)
	{
		func_5299(iParam1, uParam0, iParam3, iParam4, -2060373942, uParam0->f_755 + 1);
	}
	__LIB_25__::func_431(uParam0, "DLC_H3_Fingerprint_Hack_Scene");
	__LIB_20__::func_877(iParam1, uParam0, bParam2);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Common");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Grid");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Grid1");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Grid2");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_GridDetails");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Decor");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPFClone_Decor1");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar1, "MPFClone_Print", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cVar1);
		iVar0++;
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEIST3/Fingerprint_Match");
}

void func_5345(var* uParam0, int* iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x19AC24
{
	if ((*uParam0 > 0 && *uParam0 < 7) || *uParam0 == 8)
	{
		if (*uParam0 != 7)
		{
			func_5381(uParam0, iParam1);
		}
		if ((!Global_1963986 && *uParam0 > 2) && *uParam0 != 7)
		{
			func_5380(uParam0);
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_20__::func_818(uParam0, iParam1);
			break;
		case 1:
			func_5378(uParam0, iParam1);
			break;
		case 2:
			func_5371(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_5370(uParam0, iParam1);
			break;
		case 4:
			func_5348(uParam0, iParam1, iParam3, bParam4);
			break;
		case 5:
			func_5347(uParam0, iParam1);
			break;
		case 6:
			func_5346(uParam0, iParam1);
			break;
		case 7:
			func_5344(uParam0, iParam1, 0, joaat("practice"), 0);
			break;
	}
	if (((!Global_1963986 && *uParam0 > 2) && *uParam0 != 7) || *uParam0 == 8)
	{
		func_5301(uParam0);
	}
}

void func_5346(var* uParam0, int* iParam1)//Position - 0x19AD46
{
	func_5246(iParam1, uParam0, 4000, "Fail_FC");
}

void func_5347(var* uParam0, int* iParam1)//Position - 0x19AD5E
{
	func_5248(iParam1, uParam0, 4000, "Success_FC");
}

void func_5348(var* uParam0, int* iParam1, int iParam2, bool bParam3)//Position - 0x19AD76
{
	bool bVar0;
	bVar0 = __LIB_25__::func_440(uParam0);
	func_5277(iParam1, uParam0, iParam2, bVar0);
	if (bVar0)
	{
		func_5365(uParam0);
	}
	func_5358(uParam0, iParam1, bParam3);
	func_5350(uParam0);
	func_5349(uParam0);
}

void func_5349(var* uParam0)//Position - 0x19ADB3
{
	struct<9> Var0;
	if (*uParam0 == 4)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			uParam0->f_1 = 1;
		}
		Var0 = { __LIB_1__::func_404() };
		if (uParam0->f_1)
		{
			__LIB_1__::func_539(&(uParam0->f_29));
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				__LIB_7__::func_603(__LIB_1__::func_724(&(uParam0->f_746), 0, 0), 1500, "HG_INT_04a" /* GXT: Aborting Hack */, 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
				__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
			}
			else
			{
				__LIB_1__::func_513(2, 202, "HG_INT_04" /* GXT: Abort Hack (Hold) */, &(uParam0->f_29), 0, 363);
			}
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "HG_INT_01" /* GXT: Select */, &(uParam0->f_29), 0);
			if (uParam0->f_756 >= 4)
			{
				__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), "HG_INT_02" /* GXT: Run Check */, &(uParam0->f_29), 0);
			}
			__LIB_2__::func_817(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 6, true), "HG_INT_03" /* GXT: Move Selector */, &(uParam0->f_29), 0);
			uParam0->f_1 = 0;
		}
		__LIB_5__::func_693(&(uParam0->f_28), &Var0, &(uParam0->f_29), 0);
	}
	else
	{
		__LIB_1__::func_403(&(uParam0->f_29));
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_28));
	}
}

void func_5350(var* uParam0)//Position - 0x19AEE5
{
	int iVar0;
	struct<6> Var1;
	struct<6> Var2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	StringCopy(&Var1, "MPFClone_Print", 24);
	StringIntConCat(&Var1, uParam0->f_757[uParam0->f_755], 24);
	StringCopy(&Var2, "FP", 24);
	StringIntConCat(&Var2, uParam0->f_757[uParam0->f_755] + 1, 24);
	StringConCat(&Var2, "_", 24);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_5356(uParam0, Var2, iVar0, Var1);
		iVar0++;
	}
	func_5355(uParam0, Var2, Var1);
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		func_5353(uParam0, iVar0);
		iVar0++;
	}
	func_5351(uParam0, uParam0, uParam0->f_993);
	if (BitTest(uParam0->f_752, 1))
	{
		if (BitTest(uParam0->f_752, 2))
		{
			func_5244("mphackinggame", "Loading_Window", 0.5f, 0.5f, 480f, 128f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
			iVar3 = __LIB_1__::func_724(&(uParam0->f_750), 0, 0);
			if (*uParam0 == 8)
			{
				iVar3 = 2000;
			}
			fVar4 = (SYSTEM::TO_FLOAT(iVar3) / SYSTEM::TO_FLOAT(2000));
			fVar4 = (fVar4 * 100f);
			fVar5 = ((SYSTEM::TO_FLOAT(35) / 100f) * fVar4);
			iVar0 = 1;
			while (iVar0 <= SYSTEM::FLOOR(fVar5))
			{
				fVar6 = (0.32f + (0.01f * IntToFloat(iVar0)));
				func_5244("mphackinggame", "Loading_Bar_Segment", fVar6, 0.516f, 12f, 40f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
				iVar0++;
			}
		}
		else if (BitTest(uParam0->f_752, 4))
		{
			func_5252(uParam0, &(uParam0->f_731), 2, 1, "mphackinggame", "Incorrect_", 0.5f, 0.5f, 600f, 140f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
		else if (BitTest(uParam0->f_752, 3))
		{
			func_5252(uParam0, &(uParam0->f_731), 2, 1, "mphackinggame", "Correct_", 0.5f, 0.5f, 600f, 140f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
	}
}

void func_5351(var uParam0, var uParam1, struct<4> Param2)//Position - 0x19B124
{
	if (BitTest(uParam0->f_752, 1))
	{
		func_5352(uParam0, uParam1, Param2);
	}
	func_5252(uParam1, &(uParam0->f_990), 4, 0, "MPFClone_GridDetails", "GridDetails_", 0.439f, 0.379f, 16f, 512f, 0f, Param2.f_0, Param2.f_1, Param2.f_2, Param2.f_3, 0);
	func_5252(uParam1, &(uParam0->f_991), 4, 0, "MPFClone_GridDetails", "GridDetails_", 0.902f, 0.379f, 16f, 512f, 0f, Param2.f_0, Param2.f_1, Param2.f_2, Param2.f_3, 0);
}

void func_5352(var uParam0, var uParam1, struct<4> Param2)//Position - 0x19B1B8
{
	char cVar0[24];
	struct<3> Var1;
	uParam0->f_989 = (uParam0->f_989 + uParam1->f_7);
	if (uParam0->f_989 >= 7)
	{
		uParam0->f_989 = 0;
	}
	StringCopy(&cVar0, "Grid_Noise_", 24);
	StringIntConCat(&cVar0, uParam0->f_989, 24);
	StringCopy(&Var1, "MPFClone_Grid", 24);
	if (uParam0->f_989 > 4)
	{
		StringConCat(&Var1, "2", 24);
	}
	else if (uParam0->f_989 > 2)
	{
		StringConCat(&Var1, "1", 24);
	}
	func_5244(&Var1, &cVar0, 0.653f, 0.379f, 800f, 800f, 0f, Param2.f_0, Param2.f_1, Param2.f_2, Param2.f_3, 0);
}

void func_5353(var uParam0, int iParam1)//Position - 0x19B24C
{
	struct<3> Var0;
	float fVar1;
	StringCopy(&Var0, "Decypher_", 24);
	StringIntConCat(&Var0, iParam1, 24);
	fVar1 = __LIB_25__::func_450(iParam1);
	if (iParam1 <= uParam0->f_735)
	{
		func_5244("MPFClone_Common", &Var0, fVar1, 0.832f, 128f, 128f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, (uParam0->f_993.f_3 / 2), 0);
		if (iParam1 == uParam0->f_755 + 1)
		{
			func_5244("MPFClone_Common", "Decyphered_Selector", fVar1, 0.832f, 180f, 180f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
	}
	else
	{
		func_5244("MPFClone_Common", "Disabled_Signal", fVar1, 0.832f, 128f, 128f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, (uParam0->f_993.f_3 / 2), 0);
	}
}

void func_5355(var uParam0, struct<6> Param1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x19B387
{
	int iVar0;
	char cVar1[24];
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		cVar1 = { Param1 };
		StringIntConCat(&cVar1, iVar0 + 1, 24);
		if (BitTest(uParam0->f_752, 1))
		{
			if (((((uParam0->f_2 + iVar0) == 0 || (uParam0->f_2 - iVar0) == 5) || (uParam0->f_2 + iVar0) == 10) || (uParam0->f_2 - iVar0) == 15) || (uParam0->f_2 + iVar0) == 20)
			{
				uParam0->f_980[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(127, 255);
			}
			func_5244(&sParam2, &cVar1, 0.674f, 0.379f, 400f, 512f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_980[iVar0], 0);
		}
		else
		{
			func_5244(&sParam2, &cVar1, 0.674f, 0.379f, 400f, 512f, 0f, (uParam0->f_993 / 4), (uParam0->f_993.f_1 / 4), (uParam0->f_993.f_2 / 4), uParam0->f_993.f_3, 0);
		}
		iVar0++;
	}
}

void func_5356(var uParam0, char[24] cParam1, int iParam2, char* sParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8)//Position - 0x19B491
{
	float fVar0;
	float fVar1;
	char cVar2[24];
	__LIB_25__::func_451(uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/].f_2, &fVar0, &fVar1);
	cVar2 = { cParam1 };
	StringConCat(&cVar2, "Comp_", 24);
	if (BitTest(uParam0->f_752, 5))
	{
		if (uParam0->f_2 <= 0)
		{
			uParam0->f_971[iParam2] = 0;
		}
		else if ((uParam0->f_2 + iParam2) == 10)
		{
			uParam0->f_971[iParam2] = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
		}
		if (uParam0->f_971[iParam2] == 0)
		{
			func_5244("mpfclone_common", "comp_blank", fVar0, fVar1, 128f, 128f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
		else
		{
			StringIntConCat(&cVar2, uParam0->f_971[iParam2], 24);
			func_5244(&sParam3, &cVar2, fVar0, fVar1, 128f, 128f, 0f, (uParam0->f_993 / 4), (uParam0->f_993.f_1 / 4), (uParam0->f_993.f_2 / 4), uParam0->f_993.f_3, 0);
		}
	}
	else
	{
		StringIntConCat(&cVar2, uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/] + 1, 24);
		if (BitTest(uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/].f_1, 0))
		{
			func_5244(&sParam3, &cVar2, fVar0, fVar1, 128f, 128f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
		else
		{
			func_5244(&sParam3, &cVar2, fVar0, fVar1, 128f, 128f, 0f, (uParam0->f_993 / 4), (uParam0->f_993.f_1 / 4), (uParam0->f_993.f_2 / 4), uParam0->f_993.f_3, 0);
		}
		if (uParam0->f_753 == uParam0->f_766[uParam0->f_755 /*25*/][iParam2 /*3*/].f_2)
		{
			func_5244("MPFClone_Common", "selectorFrame", fVar0, fVar1, 180f, 180f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
		}
	}
}

void func_5358(var* uParam0, int* iParam1, bool bParam2)//Position - 0x19B752
{
	int iVar0;
	int iVar1;
	if ((BitTest(uParam0->f_752, 1) && !BitTest(uParam0->f_752, 3)) && !BitTest(uParam0->f_752, 4))
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (__LIB_25__::func_437(uParam0, iVar1))
			{
			}
			if (__LIB_26__::func_454(uParam0, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (iVar0 >= 4)
		{
			MISC::SET_BIT(&(uParam0->f_752), 3);
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_752), 4);
			uParam0->f_754 = iVar0;
		}
		__LIB_0__::func_794(&(uParam0->f_750));
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Window_Draw", uParam0->f_741, true);
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_992, "Processing", uParam0->f_741, true);
	}
	if (BitTest(uParam0->f_752, 1) && BitTest(uParam0->f_752, 2))
	{
		if (__LIB_0__::func_937(&(uParam0->f_750), 2000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 2);
			AUDIO::STOP_SOUND(uParam0->f_992);
			if (BitTest(uParam0->f_752, 3))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_992, "Target_Match", uParam0->f_741, true);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_992, "No_Match", uParam0->f_741, true);
			}
		}
	}
	func_5361(uParam0, bParam2, *iParam1);
	if (!BitTest(uParam0->f_740, 2))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Print_Appears", uParam0->f_741, true);
		MISC::SET_BIT(&(uParam0->f_740), 2);
	}
	if (__LIB_0__::func_937(&(uParam0->f_729), uParam0->f_733, 0) && __LIB_25__::func_440(uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_752), 5);
		MISC::CLEAR_BIT(&(uParam0->f_752), 6);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Print_Shuffle", uParam0->f_741, true);
		__LIB_0__::func_794(&(uParam0->f_750));
	}
	else if (BitTest(uParam0->f_752, 5))
	{
		if (!BitTest(uParam0->f_752, 6))
		{
			__LIB_33__::func_600(uParam0);
		}
		if (__LIB_0__::func_937(&(uParam0->f_750), 4000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 5);
			__LIB_0__::func_794(&(uParam0->f_729));
		}
	}
	if (__LIB_0__::func_937(&(uParam0->f_750), 4000, 0) && !__LIB_25__::func_440(uParam0))
	{
		if (BitTest(uParam0->f_752, 1))
		{
			if (BitTest(uParam0->f_752, 4))
			{
				MISC::CLEAR_BIT(&(uParam0->f_752), 4);
				MISC::CLEAR_BIT(&(uParam0->f_752), 1);
				uParam0->f_1 = 1;
				__LIB_0__::func_794(&(uParam0->f_750));
				__LIB_0__::func_794(&(uParam0->f_729));
				uParam0->f_3 = (uParam0->f_3 - 1);
				uParam0->f_753 = 0;
				if (uParam0->f_3 <= 0)
				{
					__LIB_1__::func_289(uParam0, 6);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Window_Clear", uParam0->f_741, true);
					if (!BitTest(*iParam1, 6))
					{
						MISC::SET_BIT(iParam1, 6);
					}
				}
			}
			else if (BitTest(uParam0->f_752, 3))
			{
				MISC::CLEAR_BIT(&(uParam0->f_752), 3);
				MISC::CLEAR_BIT(&(uParam0->f_752), 1);
				__LIB_0__::func_794(&(uParam0->f_750));
				__LIB_0__::func_794(&(uParam0->f_729));
				uParam0->f_755++;
				uParam0->f_1 = 1;
				uParam0->f_753 = 0;
				uParam0->f_756 = 0;
				if (uParam0->f_755 >= uParam0->f_735)
				{
					uParam0->f_755 = (uParam0->f_755 - 1);
					__LIB_1__::func_289(uParam0, 5);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Print_Appears", uParam0->f_741, true);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Window_Clear", uParam0->f_741, true);
					if (!BitTest(*iParam1, 7))
					{
						MISC::SET_BIT(iParam1, 7);
					}
				}
			}
		}
	}
}

void func_5361(var uParam0, bool bParam1, var uParam2, var uParam3)//Position - 0x19BB7A
{
	if (__LIB_0__::func_1("HG_FC_HELP_04a" /* GXT: Your hacker is blocking the abort signal. Aborting a second in-progress hack will set off the alarm. */) && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		return;
	}
	if (BitTest(uParam0->f_752, 30))
	{
		if (!BitTest(uParam2, 8))
		{
			if (!bParam1)
			{
				__LIB_1__::func_707("HG_FC_HELP_04a" /* GXT: Your hacker is blocking the abort signal. Aborting a second in-progress hack will set off the alarm. */, 10000);
			}
			else
			{
				__LIB_1__::func_707("HG_FC_HELP_04" /* GXT: Aborting an in-progress hack will set off the alarm. */, -1);
			}
		}
		if (__LIB_0__::func_937(&(uParam0->f_746), 2000, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_752), 30);
		}
		return;
	}
	if (BitTest(uParam0->f_752, 5))
	{
		__LIB_1__::func_707("HG_FC_HELP_03" /* GXT: The security system will scramble the element panel if you don't work quickly. Hiring better hackers will make this happen less frequently. */, -1);
		return;
	}
	if (uParam0->f_756 >= 4 && __LIB_25__::func_440(uParam0))
	{
		__LIB_1__::func_707("HG_FC_HELP_02" /* GXT: Press ~INPUT_FRONTEND_Y~ to check if the match is correct. */, -1);
		return;
	}
	if (__LIB_25__::func_440(uParam0))
	{
		__LIB_1__::func_707("HG_FC_HELP_01" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to select 4 elements that make up the fingerprint. */, -1);
	}
}

void func_5365(var* uParam0)//Position - 0x19BC8F
{
	int iVar0;
	iVar0 = __LIB_25__::func_442(uParam0);
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || iVar0 == 188)
	{
		__LIB_25__::func_453(uParam0, 188);
	}
	else if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || iVar0 == 187)
	{
		__LIB_25__::func_453(uParam0, 187);
	}
	else if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/)) || iVar0 == 189)
	{
		__LIB_25__::func_453(uParam0, 189);
	}
	else if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) || iVar0 == 190)
	{
		__LIB_25__::func_453(uParam0, 190);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		if (!BitTest(uParam0->f_752, 30))
		{
			__LIB_0__::func_794(&(uParam0->f_746));
			MISC::SET_BIT(&(uParam0->f_752), 30);
		}
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)))
	{
		uParam0->f_1 = 1;
		__LIB_25__::func_452(uParam0, uParam0->f_753);
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
	{
		uParam0->f_1 = 1;
		__LIB_25__::func_438(uParam0);
	}
}

void func_5370(var* uParam0, int* iParam1)//Position - 0x19BFDF
{
	__LIB_20__::func_817(iParam1, uParam0);
	if (func_5162(uParam0) || __LIB_0__::func_937(&(uParam0->f_750), 4000, 0))
	{
		GRAPHICS::RELEASE_BINK_MOVIE(uParam0->f_5);
		__LIB_1__::func_289(uParam0, 4);
	}
}

void func_5371(var* uParam0, int* iParam1, int iParam2)//Position - 0x19C01B
{
	__LIB_25__::func_447(uParam0, iParam2);
	__LIB_0__::func_467(iParam1);
	__LIB_33__::func_618(uParam0, iParam1);
	if (!__LIB_26__::func_458(uParam0, iParam1))
	{
		return;
	}
	__LIB_20__::func_803(uParam0, "Intro_FC");
	__LIB_0__::func_627(&(uParam0->f_750), 0, 0);
	func_5326(uParam0);
	__LIB_1__::func_289(uParam0, 3);
}

void func_5378(var* uParam0, int* iParam1)//Position - 0x19C3B3
{
	struct<994> Var0;
	char cVar1[24];
	if (BitTest(*iParam1, 1))
	{
		return;
	}
	Var0 = 1;
	Var0.f_12 = 4;
	Var0.f_29.f_1 = 12;
	Var0.f_29.f_699 = 1065353216;
	Var0.f_739 = -1;
	Var0.f_757 = 8;
	Var0.f_766 = 8;
	Var0.f_766.f_1 = 8;
	Var0.f_766.f_1.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25.f_25.f_25 = 8;
	Var0.f_766.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25 = 8;
	Var0.f_967 = 3;
	Var0.f_971 = 8;
	Var0.f_980 = 8;
	Var0.f_992 = -1;
	Var0.f_993.f_3 = 255;
	MISC::COPY_SCRIPT_STRUCT(uParam0, &Var0, 997);
	if (!func_5332(iParam1, uParam0))
	{
		return;
	}
	__LIB_25__::func_456(uParam0);
	StringCopy(&cVar1, "MPFClone_Common", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPFClone_Grid", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPFClone_Grid1", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPFClone_Grid2", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPFClone_GridDetails", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPFClone_Decor", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	StringCopy(&cVar1, "MPFClone_Decor1", 24);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cVar1, false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cVar1))
	{
		return;
	}
	uParam0->f_741 = "DLC_H3_Cas_Finger_Minigame_Sounds";
	if (uParam0->f_992 == -1)
	{
		uParam0->f_992 = AUDIO::GET_SOUND_ID();
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3/Fingerprint_Match", false, -1))
	{
		return;
	}
	__LIB_1__::func_289(uParam0, 2);
}

void func_5380(var uParam0)//Position - 0x19C639
{
	func_5340(uParam0);
	func_5244("MPFClone_Common", "background_layout", 0.5f, 0.5f, 1264f, 940f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
	func_5338(uParam0, uParam0->f_733, 0.169f, 0.845f, 400f, 64f, uParam0->f_993, 0.178f, 0.0115f, 12f, 80f, __LIB_25__::func_440(uParam0), 0.005f, BitTest(uParam0->f_752, 5));
	func_5336(uParam0, uParam0->f_732, 0.122f, 0.144f, 40f, 60f, uParam0->f_993, 0.031f, 1);
	func_5335(uParam0, 1, 0.983f, 0.19f, 64f, 64f, uParam0->f_993, 0.055f);
	func_5252(uParam0, &(uParam0->f_967[0]), 3, 0, "mpfclone_common", "disc_A", 0.983f, 0.669f, 100f, 100f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
	func_5252(uParam0, &(uParam0->f_967[1]), 3, 0, "mpfclone_common", "disc_B", 0.983f, 0.669f, 100f, 100f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
	func_5252(uParam0, &(uParam0->f_967[2]), 3, 0, "mpfclone_common", "disc_C", 0.983f, 0.669f, 100f, 100f, 0f, uParam0->f_993, uParam0->f_993.f_1, uParam0->f_993.f_2, uParam0->f_993.f_3, 0);
	func_5334(uParam0, "MPFClone_Decor", 0.5f, 0.5f, 1264f, 940f, uParam0->f_993);
}

void func_5381(var uParam0, int* iParam1)//Position - 0x19C828
{
	__LIB_25__::func_449(uParam0, "DLC_H3_Fingerprint_Hack_Scene");
	func_5231(uParam0, iParam1);
}

void func_5382(int iParam0, var uParam1)//Position - 0x19C843
{
	struct<9> Var0;
	func_7(iParam0, &Var0, 8);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Var0.f_8);
}

int func_5383(int iParam0)//Position - 0x19C85E
{
	switch (iParam0)
	{
		case 19:
			return 0;
			break;
	}
	return 1;
}

void func_5384()//Position - 0x19C87B
{
	int iVar0;
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (func_5387(Local_150.f_357[iVar0], func_5388(iVar0), Local_150.f_1533))
		{
			func_5116(1);
			func_5386();
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 524544, 0);
			func_5120(1);
			func_5465(8);
			if (!__LIB_0__::func_263(Local_150.f_357[iVar0]))
			{
				__LIB_1__::func_28(178);
			}
		}
	}
}

void func_5386()//Position - 0x19C951
{
	int iVar0;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		func_548(iVar0, &Local_150);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_150.f_339)))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&(Local_150.f_339)))
			{
				AUDIO::START_AUDIO_SCENE(&(Local_150.f_339));
			}
		}
	}
}

bool func_5387(int iParam0, var uParam1, var uParam2)//Position - 0x19C999
{
	struct<8> Var0;
	func_7(iParam0, &Var0, 7);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Call_Loc(Var0.f_7);
	return StackVal;
}

int func_5388(int iParam0)//Position - 0x19C9B5
{
	if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 23:
			case 24:
			case 25:
			case 26:
				return 1;
			case 3:
			case 4:
			case 5:
			case 6:
				return 2;
			case 9:
			case 10:
			case 11:
			case 12:
				return 3;
			case 17:
			case 18:
			case 19:
			case 20:
				return 4;
			case 7:
			case 8:
				return 1;
			case 13:
			case 14:
				return 2;
			case 15:
			case 16:
				return 3;
			case 30:
			case 31:
				return 4;
			}
		default:
	}
	return 0;
}

void func_5389()//Position - 0x19CA80
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<18> Var5;
	int iVar6;
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	iVar1 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	if (!func_4934(__LIB_5__::func_38(PLAYER::PLAYER_ID()), 1))
	{
		if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 1)
		{
			if (func_5392(iVar0))
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
			}
			if (!func_5109(iVar0))
			{
				if (iVar1 != -1)
				{
					iVar2 = 0;
					if (func_5054(0))
					{
						iVar2 = 37;
					}
					fVar3 = 4f;
					fVar4 = -4f;
					func_5102(iVar2, 0, 0, fVar3, fVar4, 0, 0);
					if (func_5391(iVar0))
					{
						Local_150.f_582 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
						if (Local_150.f_582 != 4)
						{
							CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
							func_5053(1);
						}
					}
					func_4930(__LIB_5__::func_38(PLAYER::PLAYER_ID()), 1);
				}
			}
			else
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 524544, 0);
				func_5116(1);
				func_5386();
				func_5120(1);
				func_5465(8);
				if (!__LIB_0__::func_263(iVar0))
				{
					__LIB_1__::func_28(178);
				}
			}
		}
	}
	else if (iVar1 != -1)
	{
		Var5.f_2 = 14;
		iVar6 = 0;
		if (func_5054(0))
		{
			iVar6 = 37;
		}
		func_531(iVar0, iVar6, Global_1973079.f_3[iVar1], &Var5);
		Global_1973079.f_47 = { Var5.f_17 };
		if (func_5390(iVar0))
		{
			if (__LIB_5__::func_101())
			{
				if (func_530(iVar6, 0.6f))
				{
					if (!func_5054(5))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Kick_Machine", Local_150.f_199[iVar1 /*3*/], "DLC_H3_Arc_Mac_Degen_DotF_Sounds", true, 20, false);
						func_5053(5);
					}
				}
			}
		}
		if (func_5136(iVar6, 0, 0, 0))
		{
			func_5102(1, 0, 1, 1073741824, -1073741824, 0, 0);
			if (Local_150.f_357[iVar1] != -1)
			{
				if (func_4935(Local_150.f_357[iVar1], &(Local_150.f_323), 1))
				{
					func_5465(7);
				}
				else
				{
					func_5116(1);
					func_5386();
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 524544, 0);
					func_5120(1);
					func_5465(8);
					if (!__LIB_0__::func_263(Local_150.f_357[iVar1]))
					{
						__LIB_1__::func_28(178);
					}
				}
			}
		}
	}
}

int func_5390(int iParam0)//Position - 0x19CCD3
{
	switch (iParam0)
	{
		case 6:
		case 7:
		case 8:
			return 1;
			break;
	}
	return 0;
}

int func_5391(int iParam0)//Position - 0x19CCFC
{
	switch (iParam0)
	{
		case 12:
			break;
	}
	return 0;
}

int func_5392(int iParam0)//Position - 0x19CD15
{
	switch (iParam0)
	{
		case 5:
		case 3:
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_5393()//Position - 0x19CD3E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3[2];
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<18> Var7;
	int iVar8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(Global_1973079.f_47));
		if (STREAMING::HAS_ANIM_DICT_LOADED(&(Global_1973079.f_47)))
		{
			iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
			iVar1 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
			if (iVar0 != -1)
			{
				if (func_4946(&Local_150, 10))
				{
					__LIB_1__::func_895(1, -1);
					func_4945(&Local_150, 10);
				}
				iVar2 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
				if (func_541(iVar2))
				{
					func_550(Local_150.f_1533, iVar0, iVar2, &(Local_150.f_199[iVar0 /*3*/]), &(Local_150.f_157[iVar0]), 0);
				}
				if (func_5406(iVar2))
				{
					if (iVar1 != -1)
					{
						func_5405(iVar2, &Var3);
						Var3[iVar1 /*3*/] = { Var3[iVar1 /*3*/], (Var3[iVar1 /*3*/].f_1 * 2f), Var3[iVar1 /*3*/].f_2 };
						func_550(Local_150.f_1533, iVar0, iVar2, &Var5, &fVar6, 0);
						Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var5, fVar6, Var3[iVar1 /*3*/]) };
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var4, (0.45f / 2f), 0.45f, 2f, false, true, 1))
						{
							func_5053(0);
						}
					}
				}
				Var7.f_2 = 14;
				iVar8 = 0;
				if (func_5054(0))
				{
					iVar8 = 37;
				}
				func_531(iVar2, iVar8, Global_1973079.f_3[iVar0], &Var7);
				Global_1973079.f_47 = { Var7.f_17 };
				fVar9 = 0.1f;
				Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&(Global_1973079.f_47), Var7.f_1, Local_150.f_199[iVar0 /*3*/], 0f, 0f, Local_150.f_157[iVar0], 0f, 2) };
				Var11 = { func_5107(iVar2, iVar8, iVar1, 0) };
				Var12 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&(Global_1973079.f_47), Var7.f_1, Local_150.f_199[iVar0 /*3*/], 0f, 0f, Local_150.f_157[iVar0], 0f, 2) };
				Var13 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Var10.f_2 = Var13.f_2;
				if (!__LIB_0__::func_86(Var11))
				{
					Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var10, Local_150.f_157[iVar0], Var11) };
				}
				if (iVar2 == 14)
				{
					fVar9 = 0.01f;
				}
				if (!__LIB_0__::func_86(Var10))
				{
					if (!__LIB_0__::func_490(Var13, Var10, 0.01f, 0))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var10, 1f, 4000, Var12.f_2, fVar9);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(PLAYER::PLAYER_PED_ID(), Var12.f_2, 0);
					}
				}
				if (iVar2 == 15)
				{
					if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_8__::func_395(1000);
						__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
					}
				}
				if (Local_150.f_357[iVar0] == 18)
				{
					func_5386();
					func_5116(1);
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 524544, 0);
					func_5120(1);
					func_5465(8);
				}
				else
				{
					func_5465(6);
				}
			}
		}
	}
}

void func_5405(int iParam0, var uParam1)//Position - 0x19D2C4
{
	struct<2> Var0;
	func_7(iParam0, &Var0, 2);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Var0.f_1);
}

int func_5406(int iParam0)//Position - 0x19D2DE
{
	switch (iParam0)
	{
		case 3:
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_5407()//Position - 0x19D301
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	if (MONEY::NETWORK_CAN_SPEND_MONEY(1, false, true, false, -1, 0))
	{
		iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
		Var1 = { __LIB_12__::func_903(iVar0, 0, 1) };
		if (__LIB_0__::func_112())
		{
			Global_4534105[iVar2 /*85*/] = MISC::GET_HASH_KEY(&Var1);
			__LIB_9__::func_982(joaat("SERVICE_SPEND_ARCADE_GAME"), 1, &iVar2, 0, 1, 0);
		}
		else
		{
			MONEY::NETWORK_SPEND_PLAY_ARCADE(1, 0, 1, MISC::GET_HASH_KEY(&Var1), 2);
		}
		HUD::USE_FAKE_MP_CASH(false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		func_5465(5);
	}
	else
	{
		func_5465(11);
	}
}

void func_5419()//Position - 0x19E133
{
	func_5029(&Local_150, &Local_149, 0);
	func_5431();
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (func_4946(&Local_150, 6))
		{
			func_5429();
			func_4945(&Local_150, 6);
		}
		else
		{
			__LIB_3__::func_781(Local_150.f_532.f_14, 1, 1);
		}
		func_5424();
		func_5420();
		__LIB_9__::func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	}
}

void func_5420()//Position - 0x19E195
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 19:
			if (func_5421(&sVar1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar1))
				{
					__LIB_1__::func_789(&sVar1, 0, 0);
				}
			}
			break;
		case 18:
			switch (Local_150.f_532.f_14)
			{
				case 0:
					if (__LIB_38__::func_779(&sVar1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar1))
						{
							__LIB_1__::func_789(&sVar1, 0, 0);
						}
					}
					break;
				case 1:
					if (__LIB_38__::func_778(&sVar1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar1))
						{
							__LIB_1__::func_789(&sVar1, 0, 0);
						}
					}
					break;
			}
			break;
	}
}

int func_5421(char* sParam0)//Position - 0x19E230
{
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != PLAYER::PLAYER_ID())
	{
		StringCopy(sParam0, "ARC_START_M_D1" /* GXT: Owner can start this mission. */, 64);
		return 1;
	}
	if (!__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		StringCopy(sParam0, "ARC_START_M_D2" /* GXT: You must be a gang boss to launch this mission. */, 64);
		return 1;
	}
	if (!func_5422())
	{
		StringCopy(sParam0, "ARC_START_M_D3" /* GXT: You need more than one player to launch this mission. */, 64);
		return 1;
	}
	return 0;
}

int func_5422()//Position - 0x19E29E
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = iVar1;
			if (PLAYER::PLAYER_ID() != iVar0)
			{
				if (func_5423(__LIB_5__::func_38(iVar0)))
				{
					if (__LIB_3__::func_853(iVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_5423(int iParam0)//Position - 0x19E2F0
{
	switch (iParam0)
	{
		case 37:
		case 38:
		case 39:
		case 40:
			return 1;
			break;
	}
	return 0;
}

void func_5424()//Position - 0x19E31F
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_5425();
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
}

void func_5425()//Position - 0x19E348
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (func_4946(&Local_150, 2))
	{
		if (BitTest(Local_150.f_532.f_18, Local_150.f_532.f_14))
		{
			iVar1 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
			Global_1973079.f_3[iVar1] = func_5428(iVar0, iVar1, __LIB_5__::func_106(PLAYER::PLAYER_ID()));
			Var2.f_2 = 14;
			func_531(iVar0, -1, Global_1973079.f_3[iVar1], &Var2);
			Global_1973079.f_47 = { Var2.f_17 };
			func_5427();
			func_4955(&Local_150, 10);
			func_5465(5);
		}
	}
	else if (func_4946(&Local_150, 0) && __LIB_4__::func_845(&(Local_150.f_532.f_47), &(Local_150.f_532.f_6), 1))
	{
		if (Local_150.f_532.f_6 > 0)
		{
			Local_150.f_532.f_14 = (Local_150.f_532.f_14 - 1);
			if (Local_150.f_532.f_14 < 0)
			{
				Local_150.f_532.f_14 = (Local_150.f_532.f_7 - 1);
			}
			if (BitTest(Local_150.f_532.f_17, Local_150.f_532.f_14))
			{
				__LIB_4__::func_846(0, 1, 0, 0, 0);
			}
			__LIB_3__::func_781(Local_150.f_532.f_14, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
	else if (func_4946(&Local_150, 1) && __LIB_4__::func_845(&(Local_150.f_532.f_47), &(Local_150.f_532.f_6), 1))
	{
		if (Local_150.f_532.f_6 < 0)
		{
			Local_150.f_532.f_14++;
			if (Local_150.f_532.f_14 > (Local_150.f_532.f_7 - 1))
			{
				Local_150.f_532.f_14 = 0;
			}
			if (BitTest(Local_150.f_532.f_17, Local_150.f_532.f_14))
			{
				__LIB_4__::func_846(0, 1, 0, 0, 0);
			}
			__LIB_3__::func_781(Local_150.f_532.f_14, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
	else if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) && __LIB_4__::func_845(&(Local_150.f_532.f_47), &(Local_150.f_532.f_6), 0)) || Local_150.f_532.f_5 == -1) && BitTest(Local_150.f_532.f_17, Local_150.f_532.f_14)) && BitTest(Local_150.f_532.f_18, Local_150.f_532.f_14))
	{
		if (Local_150.f_532.f_6 > 0 || Local_150.f_532.f_5 == -1)
		{
			Local_150.f_532.f_9[Local_150.f_532.f_14]++;
			if (Local_150.f_532.f_9[Local_150.f_532.f_14] > (Local_150.f_532.f_8 - 1))
			{
				Local_150.f_532.f_9[Local_150.f_532.f_14] = 0;
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			__LIB_3__::func_781(Local_150.f_532.f_14, 1, 1);
			__LIB_4__::func_846(0, 1, 0, 0, 0);
			func_4955(&Local_150, 6);
		}
	}
	else if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) && __LIB_4__::func_845(&(Local_150.f_532.f_47), &(Local_150.f_532.f_6), 0)) || Local_150.f_532.f_5 == 1) && BitTest(Local_150.f_532.f_17, Local_150.f_532.f_14)) && BitTest(Local_150.f_532.f_18, Local_150.f_532.f_14))
	{
		if (Local_150.f_532.f_6 < 0 || Local_150.f_532.f_5 == 1)
		{
			Local_150.f_532.f_9[Local_150.f_532.f_14] = (Local_150.f_532.f_9[Local_150.f_532.f_14] - 1);
			if (Local_150.f_532.f_9[Local_150.f_532.f_14] < 0)
			{
				Local_150.f_532.f_9[Local_150.f_532.f_14] = (Local_150.f_532.f_8 - 1);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			__LIB_3__::func_781(Local_150.f_532.f_14, 1, 1);
			__LIB_4__::func_846(0, 1, 0, 0, 0);
			func_4955(&Local_150, 6);
		}
	}
	else if (func_4946(&Local_150, 3) || func_5141(iVar0))
	{
		func_4955(&Local_150, 10);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_5044(&Local_150);
		func_5099();
		func_5098();
		func_5465(9);
	}
}

void func_5427()//Position - 0x19E7AF
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1973079.f_47)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(Global_1973079.f_47));
	}
}

int func_5428(int iParam0, int iParam1, int iParam2)//Position - 0x19E7CF
{
	if (func_488(iParam0) > 0)
	{
		return iParam2;
	}
	else if (__LIB_12__::func_909(iParam0) && func_488(iParam0) == 0)
	{
		return 0;
	}
	else if (__LIB_12__::func_910(iParam0))
	{
		switch (__LIB_5__::func_118(PLAYER::PLAYER_ID(), iParam1, Local_150.f_1533))
		{
			case 2:
				return 1;
			case 3:
				return 2;
			case 4:
				return 3;
			default:
		}
		return 0;
	}
	else
	{
		switch (iParam0)
		{
			case 6:
			case 7:
			case 8:
			case 0:
			case 2:
			case 15:
				return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
		default:
	}
	return 0;
}

void func_5429()//Position - 0x19E87E
{
	int iVar0;
	char* sVar1;
	var uVar2[4];
	var uVar3[4];
	bool bVar4;
	__LIB_1__::func_602(0, 0);
	iVar0 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		func_5430(iVar0, &sVar1, &uVar2, &uVar3, &(Local_150.f_532));
		__LIB_1__::func_767(&sVar1);
		__LIB_1__::func_765(1, 2, 1, 1, 1);
		__LIB_1__::func_766(1, 1, 0, 0, 0);
		bVar4 = false;
		while (bVar4 <= (Local_150.f_532.f_7 - 1))
		{
			__LIB_8__::func_233(bVar4, uVar2[bVar4], 0, BitTest(Local_150.f_532.f_18, bVar4), 0, 0, 0);
			if (BitTest(Local_150.f_532.f_17, bVar4))
			{
				__LIB_8__::func_233(bVar4, uVar3[Local_150.f_532.f_9[bVar4]], 0, BitTest(Local_150.f_532.f_18, bVar4), 0, 0, 0);
				if (BitTest(Local_150.f_532.f_18, bVar4))
				{
					__LIB_4__::func_846(0, 1, 0, 0, 0);
				}
			}
			bVar4++;
		}
		__LIB_5__::func_393(Local_150.f_532.f_15);
		__LIB_3__::func_781(Local_150.f_532.f_14, 1, 1);
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
	}
}

void func_5430(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x19E985
{
	struct<13> Var0;
	func_7(iParam0, &Var0, 12);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_12);
}

void func_5431()//Position - 0x19E9A6
{
	Local_150.f_532.f_5 = 0;
	if (BitTest(Local_150.f_532.f_18, Local_150.f_532.f_14) && BitTest(Local_150.f_532.f_17, Local_150.f_532.f_14))
	{
		if (Global_4539961 > -1)
		{
			if (func_4946(&Local_150, 2))
			{
				if (Global_4539961 == Local_150.f_532.f_14)
				{
					if (Global_4539961 == Local_150.f_532.f_14)
					{
						Local_150.f_532.f_5 = __LIB_4__::func_848(0);
					}
				}
			}
		}
	}
}

void func_5432()//Position - 0x19EA1F
{
	func_5459();
	func_5457();
	func_5434();
	func_5433();
}

void func_5433()//Position - 0x19EA37
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	if (BitTest(Local_149.f_0, 1))
	{
		if (!BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
		{
			iVar5 = __LIB_12__::func_907(Local_149.f_785);
			if (func_4950(Local_149.f_785) == 3)
			{
				func_542(Local_149.f_785, &iVar0, &iVar1);
				iVar2 = iVar0;
				while (iVar2 <= iVar1)
				{
					func_550(Local_150.f_1533, iVar2, -1, &Var3, &fVar4, 0);
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var3, 1) < 1.5f && !BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
					{
						Var6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0f, -1.5f, 0f) };
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							func_5120(0);
						}
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var6, 1f, 7000, 40000f, 0.01f);
						MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
					}
					iVar2++;
				}
			}
			else if (func_4950(Local_149.f_785) == 1)
			{
				if (iVar5 > Local_149.f_785)
				{
					iVar0 = Local_149.f_785;
					iVar1 = iVar5;
				}
				else
				{
					iVar0 = iVar5;
					iVar1 = Local_149.f_785;
				}
				iVar2 = iVar0;
				while (iVar2 <= iVar1)
				{
					func_550(Local_150.f_1533, iVar2, 4, &Var3, &fVar4, 0);
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var3, 1) < 1.5f && !BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
					{
						Var7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0f, -1.5f, 0f) };
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							func_5120(0);
						}
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var7, 1f, 7000, 40000f, 0.01f);
						MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
					}
					iVar2++;
				}
			}
			else
			{
				func_550(Local_150.f_1533, Local_149.f_785, -1, &Var3, &fVar4, 0);
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var3, 1) < 1.5f)
				{
					Var8 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar4, 0f, -1.5f, 0f) };
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_5120(0);
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var8, 1f, 7000, 40000f, 0.01f);
					MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
			}
			MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
		}
	}
	else if (BitTest(uLocal_148[PLAYER::PLAYER_ID()], 2))
	{
		MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 2);
	}
}

void func_5434()//Position - 0x19ECC1
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;
	int iVar3;
	struct<18> Var4;
	iVar2 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_150.f_355))
	{
		if (__LIB_0__::func_1(Local_150.f_355) || func_5456(iVar2))
		{
			if (func_5443(&sVar0, &cVar1, 0, 0))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					func_5118(1);
				}
				if (func_5390(iVar2))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						func_5117(1);
						func_5118(1);
					}
				}
			}
			else
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	if (func_5443(&sVar0, &cVar1, 1, 0))
	{
		if (func_487(&Local_149, __LIB_5__::func_38(PLAYER::PLAYER_ID()), __LIB_5__::func_106(PLAYER::PLAYER_ID()), Local_150.f_1533) == PLAYER::PLAYER_ID())
		{
			func_5442();
			iVar3 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
			if (iVar3 != -1)
			{
				if (func_5441(iVar2))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar3]))
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(Local_150.f_746[iVar3], -1f, 2.5f, 1f, true, 10000, 2000, 2000, 0);
					}
				}
				if (func_5440(iVar2))
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 524544, 0);
				}
				else
				{
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 524288, 0);
				}
				__LIB_5__::func_398(1);
				func_5118(0);
				if (func_494(iVar2))
				{
					func_4955(&Local_150, 6);
					func_5465(3);
				}
				else
				{
					Global_1973079.f_3[iVar3] = func_5428(iVar2, iVar3, __LIB_5__::func_106(PLAYER::PLAYER_ID()));
					Var4.f_2 = 14;
					func_531(iVar2, -1, Global_1973079.f_3[iVar3], &Var4);
					Global_1973079.f_47 = { Var4.f_17 };
					func_5427();
					func_5436(iVar2);
					if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != PLAYER::PLAYER_ID())
					{
						if (!func_5435(iVar2))
						{
							func_5465(4);
						}
						else
						{
							func_5465(5);
						}
					}
					else
					{
						func_5465(5);
					}
				}
			}
		}
	}
	else
	{
		func_5118(0);
		func_5117(0);
	}
}

int func_5435(int iParam0)//Position - 0x19EE9C
{
	switch (iParam0)
	{
		case 19:
		case 18:
		case 17:
			return 0;
			break;
	}
	return 0;
}

void func_5436(int iParam0)//Position - 0x19EEC5
{
	struct<16> Var0;
	switch (iParam0)
	{
		case 11:
			StringCopy(&Var0, "HS3MN_NEW", 64);
			func_5437(11, Var0, 1, 1);
			break;
		case 14:
			StringCopy(&Var0, "STRENGTH_START_PLAY", 64);
			func_5437(14, Var0, 1, 0);
			break;
	}
}

void func_5437(int iParam0, char[64] cParam1, bool bParam2, int iParam3)//Position - 0x19EF10
{
	struct<35> Var0;
	int iVar1;
	iVar1 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	Var0.f_36 = iParam0;
	Var0.f_35 = iVar1;
	Var0 = { cParam1 };
	Var0.f_33 = iParam3;
	Var0.f_34 = 3;
	func_5438(&Var0, bParam2);
}

void func_5438(var uParam0, bool bParam1)//Position - 0x19EF4B
{
	struct<39> Var0;
	bool bVar1;
	int iVar2;
	Var0.f_0 = -877773232;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { *uParam0 };
	Var0.f_34 = uParam0->f_34;
	Var0.f_37 = bParam1;
	Var0.f_35 = uParam0->f_35;
	Var0.f_36 = uParam0->f_36;
	Var0.f_38 = uParam0->f_33;
	if (!__LIB_0__::func_864(&(uParam0->f_37)))
	{
		__LIB_0__::func_795(&(uParam0->f_37), 0, 0);
	}
	bVar1 = true;
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_16), &(Var0.f_2)))
	{
		if (__LIB_0__::func_864(&(uParam0->f_37)) && !__LIB_0__::func_937(&(uParam0->f_37), 1000, 0))
		{
			bVar1 = false;
		}
		else
		{
			__LIB_0__::func_794(&(uParam0->f_37));
		}
	}
	else
	{
		uParam0->f_16 = { Var0.f_2 };
		__LIB_0__::func_794(&(uParam0->f_37));
	}
	uParam0->f_32 = 0;
	if (bVar1)
	{
		iVar2 = __LIB_1__::func_705(PLAYER::PLAYER_ID());
		if (bParam1)
		{
			iVar2 = __LIB_5__::func_410(1, 1);
		}
		if (iVar2 != 0)
		{
			uParam0->f_32 = 1;
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 39, iVar2);
		}
	}
}

int func_5440(int iParam0)//Position - 0x19F05A
{
	switch (iParam0)
	{
		case 17:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_5441(int iParam0)//Position - 0x19F07D
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 12:
		case 11:
		case 13:
		case 17:
		case 18:
		case 14:
			return 0;
			break;
	}
	return 1;
}

void func_5442()//Position - 0x19F0C4
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_150.f_355))
	{
		if (__LIB_0__::func_1(Local_150.f_355))
		{
			HUD::CLEAR_HELP(true);
		}
		Local_150.f_355 = "";
	}
}

int func_5443(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x19F0F4
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
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	if (__LIB_5__::func_130())
	{
		return 0;
	}
	if (!func_5113(PLAYER::PLAYER_ID()) && !bParam3)
	{
		return 0;
	}
	iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	iVar1 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
	if (iVar0 == -1 && !bParam3)
	{
		return 0;
	}
	iVar2 = func_487(&Local_149, iVar0, iVar1, Local_150.f_1533);
	if ((iVar2 != -1 && iVar2 != PLAYER::PLAYER_ID()) && !bParam3)
	{
		return 0;
	}
	if (__LIB_3__::func_853(PLAYER::PLAYER_ID()) && !bParam3)
	{
		return 0;
	}
	if (iParam2 && !bParam3)
	{
		if (!func_486(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (BitTest(Global_1973079, 3))
	{
		return 0;
	}
	iVar3 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
	if (iVar3 == 10)
	{
		func_542(iVar0, &uVar4, &iVar5);
		iVar6 = uVar4;
		while (iVar6 <= iVar5)
		{
			iVar7 = func_487(&Local_149, iVar6, 0, Local_150.f_1533);
			if (iVar7 != -1)
			{
				iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar7);
				if (iVar8 != PLAYER::PLAYER_ID())
				{
					if (Global_2689235[iVar8 /*453*/].f_428.f_4 > 2)
					{
						StringCopy(sParam0, "ARC_BLOCK_R_5" /* GXT: A game of Street Crimes has already been started. Please wait for the next round. */, 64);
						return 0;
					}
					if (__LIB_36__::func_765(iVar8))
					{
						return 0;
					}
				}
			}
			iVar6++;
		}
	}
	if (__LIB_3__::func_100())
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 10)
	{
		return 0;
	}
	if (Global_2667225.f_2681)
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_4, 2))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (__LIB_0__::func_104(1))
	{
		return 0;
	}
	if (func_5451())
	{
		return 0;
	}
	if (!bParam3 && func_4934(iVar0, 3))
	{
		return 0;
	}
	if (BitTest(Local_149.f_0, 1))
	{
		StringCopy(sParam0, "ARC_BLOCK_R_1" /* GXT: Owner is managing arcade games. */, 64);
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_5435(iVar3))
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 != PLAYER::PLAYER_ID())
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(1, false, false, true, -1, 0))
			{
				StringCopy(sParam0, "ARC_BLOCK_R_2" /* GXT: Sorry - you cannot afford to play this game. */, 64);
				StringCopy(sParam1, "", 64);
				return 0;
			}
		}
	}
	if (__LIB_0__::func_945())
	{
		StringCopy(sParam0, "MPCT_UNVLPASS" /* GXT: Unavailable in Passive Mode. */, 64);
		return 0;
	}
	if (func_5450())
	{
		return 0;
	}
	switch (iVar3)
	{
		case 19:
			if (__LIB_12__::func_640() && !__LIB_12__::func_639())
			{
				iVar9 = __LIB_6__::func_179(PLAYER::PLAYER_ID());
				if (iVar9 != -1)
				{
					iVar9 = (__LIB_6__::func_178() - iVar9);
					if (iVar9 < 0)
					{
						iVar9 = 0;
					}
				}
				MemCopy(sParam1, {__LIB_5__::func_405(iVar9, 0, 1)}, 16);
				StringCopy(sParam0, "PIM_DRONAVT" /* GXT: Nano Drone available again in ~a~. */, 64);
				return 0;
			}
			break;
		case 18:
			if (__LIB_38__::func_778(sParam0) && __LIB_38__::func_779(sParam0))
			{
				StringCopy(sParam0, "ARC_BLOCK_R_4" /* GXT: Unavailable: The vault drill or laser is required to practice on the vault door. */, 64);
				StringCopy(sParam1, "", 64);
				return 0;
			}
			break;
		case 12:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_149.f_168[iVar0 /*15*/][2]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_ENT(Local_149.f_168[iVar0 /*15*/][2]), "anim_heist@arcade@claw@male@", "prop_claw_win", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_ENT(Local_149.f_168[iVar0 /*15*/][2]), "anim_heist@arcade@claw@female@", "prop_claw_win", 3))
				{
					return 0;
				}
				Var10 = { -0.29f, -0.097f, 1.68f };
				Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_150.f_746[iVar0], Var10) };
				fVar12 = __LIB_0__::func_724(NETWORK::NET_TO_ENT(Local_149.f_168[iVar0 /*15*/][2]), Var11, 1);
				if (fVar12 > 0.03f)
				{
					return 0;
				}
				if (func_5138(13) || func_5138(20))
				{
					return 0;
				}
			}
			break;
		case 17:
			if (!__LIB_5__::func_404(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9))
			{
				StringCopy(sParam0, "ARC_BLOCK_R_6" /* GXT: The hacking device is required to practice on the secure keypad. */, 64);
				return 0;
			}
			break;
	}
	return 1;
}

int func_5450()//Position - 0x19F72F
{
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_77(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_5451()//Position - 0x19F755
{
	int iVar0;
	struct<18> Var1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
		if (iVar0 > -1)
		{
			Var1.f_2 = 14;
			if (Local_150.f_357[iVar0] != -1)
			{
				func_531(Local_150.f_357[iVar0], 11, __LIB_5__::func_106(PLAYER::PLAYER_ID()), &Var1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var1.f_1))
				{
					return ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Var1.f_17), Var1.f_1, 3);
				}
			}
		}
	}
	return 0;
}

int func_5456(int iParam0)//Position - 0x19F8A2
{
	switch (iParam0)
	{
		case 14:
			return __LIB_0__::func_1("ARD_CAB_AOF_TROP1" /* GXT: Congratulations!~n~You won a Trophy for completing all challenges in Axe of Fury. */);
			break;
	}
	return 0;
}

void func_5457()//Position - 0x19F8C7
{
	char* sVar0;
	char[] cVar1[8];
	if (func_5443(&sVar0, &cVar1, 0, 0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_150.f_355))
		{
			if (!__LIB_0__::func_1(Local_150.f_355) && !func_5456(__LIB_5__::func_35(PLAYER::PLAYER_ID())))
			{
				__LIB_0__::func_190(Local_150.f_355);
			}
		}
	}
}

void func_5459()//Position - 0x19F92A
{
	struct<16> Var0;
	struct<16> Var1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6[2];
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	if (func_486(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (__LIB_3__::func_853(PLAYER::PLAYER_ID()))
	{
		return;
	}
	fVar2 = 1f;
	fVar3 = 1f;
	iVar4 = Local_150.f_44;
	iVar5 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
	if (iVar5 != -1)
	{
		iVar4 = iVar5;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar4]) || func_541(Local_150.f_357[iVar4]))
	{
		fVar10 = 80f;
		if (Local_150.f_357[iVar4] != -1)
		{
			func_5405(Local_150.f_357[iVar4], &Var6);
			iVar11 = func_488(Local_150.f_357[iVar4]);
			iVar12 = 0;
			while (iVar12 <= iVar11)
			{
				func_550(Local_150.f_1533, iVar4, Local_150.f_357[iVar4], &Var8, &fVar9, 0);
				Var7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var8, fVar9, Var6[iVar12 /*3*/]) };
				if (__LIB_4__::func_257(Local_150.f_357[iVar4]))
				{
					fVar2 = 2f;
					if (fVar9 == 180f)
					{
						fVar3 = 2f;
						fVar2 = 1f;
					}
					if (iVar12 == 0)
					{
						fVar9 = (fVar9 - 45f);
					}
					else
					{
						fVar9 = (fVar9 + 45f);
					}
				}
				if (Local_150.f_357[iVar4] == 13)
				{
					fVar2 = 0.7f;
				}
				else if (Local_150.f_357[iVar4] == 14)
				{
					fVar2 = 1.75f;
					fVar3 = 1.75f;
					fVar10 = 50f;
				}
				if ((func_5443(&Var0, &Var1, 0, 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var7, (0.45f * fVar2), (0.45f * fVar3), 2f, false, true, 1)) && __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar9, fVar10))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (__LIB_0__::func_1(&Var0))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					if (__LIB_5__::func_35(PLAYER::PLAYER_ID()) != Local_150.f_357[iVar4])
					{
						func_5442();
					}
					func_5112(1, iVar4, iVar12);
					__LIB_5__::func_396(Local_150.f_357[iVar4]);
					if (MISC::IS_STRING_NULL_OR_EMPTY(Local_150.f_355))
					{
						func_5463(Local_150.f_357[iVar4], &Local_150);
					}
				}
				else if (!func_5443(&Var0, &Var1, 0, 1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var7, (0.45f * fVar2), (0.45f * fVar3), 2f, false, true, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
						{
							if (!__LIB_0__::func_1(&Var0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_0__::func_151(&Var0, -1);
							}
						}
						else if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
						{
							if (!__LIB_13__::func_672(&Var0, &Var1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_9__::func_21(&Var0, &Var1, 1, -1);
							}
						}
						if (!__LIB_3__::func_853(PLAYER::PLAYER_ID()))
						{
							func_5112(0, -1, -1);
							__LIB_5__::func_396(-1);
						}
					}
					else if (iVar4 == __LIB_5__::func_38(PLAYER::PLAYER_ID()) && iVar12 == __LIB_5__::func_106(PLAYER::PLAYER_ID()))
					{
						if (!__LIB_3__::func_853(PLAYER::PLAYER_ID()))
						{
							func_5112(0, -1, -1);
							__LIB_5__::func_396(-1);
							func_5442();
							func_5460(Var0, Var1);
						}
					}
				}
				else if (iVar4 == __LIB_5__::func_38(PLAYER::PLAYER_ID()) && iVar12 == __LIB_5__::func_106(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_3__::func_853(PLAYER::PLAYER_ID()))
					{
						func_5112(0, -1, -1);
						__LIB_5__::func_396(-1);
						func_5442();
						func_5460(Var0, Var1);
					}
				}
				iVar12++;
			}
		}
	}
}

void func_5460(char* sParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15, char[4] cParam16, char[4] cParam17, char[4] cParam18, char[4] cParam19, char[4] cParam20, char[4] cParam21, char[4] cParam22, char[4] cParam23, char[4] cParam24, char[4] cParam25, char[4] cParam26, char[4] cParam27, char[4] cParam28, char[4] cParam29, char[4] cParam30, char[4] cParam31)//Position - 0x19FC89
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&sParam0) && MISC::IS_STRING_NULL_OR_EMPTY(&cParam16))
	{
		if (__LIB_0__::func_1(&sParam0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&sParam0) && !MISC::IS_STRING_NULL_OR_EMPTY(&cParam16))
	{
		if (__LIB_13__::func_672(&sParam0, &cParam16))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_5463(int iParam0, var uParam1)//Position - 0x19FD21
{
	struct<4> Var0;
	func_7(iParam0, &Var0, 3);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Var0.f_3);
}

void func_5465(int iParam0)//Position - 0x19FD64
{
	if (Local_150.f_356 != iParam0)
	{
		Local_150.f_356 = iParam0;
	}
}

int func_5466()//Position - 0x19FD7F
{
	int iVar0;
	struct<103> Var1;
	struct<18> Var2;
	if (Local_150.f_357[Local_150.f_44] != -1)
	{
		if (__LIB_12__::func_909(Local_150.f_357[Local_150.f_44]))
		{
			if (__LIB_5__::func_121(Local_150.f_357[Local_150.f_44]))
			{
				return 0;
			}
		}
	}
	if (!func_5467())
	{
		if (Local_150.f_357[Local_150.f_44] != -1)
		{
			if (func_4935(Local_150.f_357[Local_150.f_44], &(Local_150.f_323), 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_150.f_323)))
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Local_150.f_323))) == 0)
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Local_150.f_323), NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), true, 0))
						{
							SCRIPT::REQUEST_SCRIPT(&(Local_150.f_323));
							if (SCRIPT::HAS_SCRIPT_LOADED(&(Local_150.f_323)))
							{
								Var1.f_1 = 14;
								Var1.f_16 = 14;
								Var1.f_59 = 14;
								Var1.f_102 = 14;
								Var2.f_2 = 14;
								Var2.f_0 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
								Var2.f_1 = Local_150.f_746[Local_150.f_44];
								Var2.f_17 = Local_150.f_357[Local_150.f_44];
								func_6(Local_150.f_357[Local_150.f_44], &Var1);
								if (Var1.f_0 > 0)
								{
									iVar0 = 0;
									while (iVar0 <= (Var1.f_0 - 1))
									{
										if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_149.f_168[Local_150.f_44 /*15*/][iVar0]))
										{
											Var2.f_2[iVar0] = NETWORK::NET_TO_OBJ(Local_149.f_168[Local_150.f_44 /*15*/][iVar0]);
										}
										else
										{
											return 0;
										}
										iVar0++;
									}
								}
								SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(Local_150.f_323), &Var2, 18, 1424);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_150.f_323));
								func_4930(Local_150.f_44, 0);
							}
						}
					}
					else
					{
						func_4930(Local_150.f_44, 0);
					}
				}
			}
			else
			{
				func_4930(Local_150.f_44, 0);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_5467()//Position - 0x19FF44
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (func_480() - 1))
	{
		if (!func_4934(iVar0, 0) && Local_150.f_357[iVar0] != -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_5468()//Position - 0x19FF84
{
	if (func_480() > 0)
	{
		if (!func_506())
		{
			func_543(&Local_150, Local_150.f_44, Local_150.f_48);
		}
		else if (Local_149.f_784 == 1)
		{
			func_5465(1);
		}
	}
}

void func_5469()//Position - 0x19FFC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<103> Var4;
	if (__LIB_3__::func_853(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_5__::func_38(PLAYER::PLAYER_ID());
		iVar1 = __LIB_5__::func_106(PLAYER::PLAYER_ID());
		iVar3 = __LIB_5__::func_35(PLAYER::PLAYER_ID());
		if (iVar0 != -1)
		{
			Var4.f_1 = 14;
			Var4.f_16 = 14;
			Var4.f_59 = 14;
			Var4.f_102 = 14;
			if (Local_150.f_357[iVar0] != -1 && Local_150.f_357[iVar0] != 12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[iVar0]))
				{
					func_6(Local_150.f_357[iVar0], &Var4);
					if (Var4.f_0 > 0)
					{
						iVar2 = 0;
						while (iVar2 <= (Var4.f_0 - 1))
						{
							if (iVar1 == 0)
							{
								if ((__LIB_5__::func_100(iVar3) == 1 && iVar2 == 0) || __LIB_5__::func_100(iVar3) == 0)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_912[iVar0 /*15*/][iVar2]))
									{
										__LIB_4__::func_987(Local_150.f_912[iVar0 /*15*/][iVar2]);
									}
								}
							}
							else if (iVar1 == 1)
							{
								if (iVar2 == 1)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_150.f_912[iVar0 /*15*/][iVar2]))
									{
										__LIB_4__::func_987(Local_150.f_912[iVar0 /*15*/][iVar2]);
									}
								}
							}
							iVar2++;
						}
					}
				}
			}
		}
	}
}

void func_5470()//Position - 0x1A00FD
{
	int iVar0;
	struct<103> Var1;
	if (!BitTest(Local_150[Local_150.f_44], 2))
	{
		if (Local_150.f_357[Local_150.f_44] != -1)
		{
			if (Local_149.f_784 == 1)
			{
				Var1.f_1 = 14;
				Var1.f_16 = 14;
				Var1.f_59 = 14;
				Var1.f_102 = 14;
				func_6(Local_150.f_357[Local_150.f_44], &Var1);
				if (Var1.f_0 > 0)
				{
					iVar0 = 0;
					while (iVar0 <= (Var1.f_0 - 1))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_149.f_168[Local_150.f_44 /*15*/][iVar0]))
						{
							Local_150.f_912[Local_150.f_44 /*15*/][iVar0] = NETWORK::NET_TO_OBJ(Local_149.f_168[Local_150.f_44 /*15*/][iVar0]);
						}
						iVar0++;
					}
				}
				MISC::SET_BIT(&(Local_150[Local_150.f_44]), 2);
			}
		}
	}
}

void func_5471()//Position - 0x1A01C8
{
	int iVar0;
	if (Local_150.f_357[Local_150.f_44] != -1 && ENTITY::DOES_ENTITY_EXIST(Local_150.f_746[Local_150.f_44]))
	{
		if (func_5475(Local_150.f_357[Local_150.f_44], Local_150.f_1533))
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			{
				if (Local_150.f_133 == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_5__::func_406())
					{
						if (!func_4934(Local_150.f_44, 7))
						{
							INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_150.f_746[Local_150.f_44], INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), func_5473(Local_150.f_357[Local_150.f_44], Local_150.f_1533));
							func_4930(Local_150.f_44, 7);
						}
					}
				}
			}
		}
	}
	if (__LIB_4__::func_998(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(uLocal_148[PLAYER::PLAYER_ID()], 4))
		{
			MISC::SET_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 4);
		}
	}
	else if (BitTest(uLocal_148[PLAYER::PLAYER_ID()], 4))
	{
		iVar0 = 0;
		while (iVar0 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
		{
			func_4931(iVar0, 7);
			iVar0++;
		}
		MISC::CLEAR_BIT(&(uLocal_148[PLAYER::PLAYER_ID()]), 4);
	}
}

int func_5473(int iParam0, int iParam1)//Position - 0x1A0324
{
	if (iParam1 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return joaat("room_office_hacker");
				break;
			case 2:
				return joaat("room_aprtment");
				break;
			}
	}
	return Local_150.f_133;
}

int func_5475(int iParam0, int iParam1)//Position - 0x1A036F
{
	if (iParam1 == 2)
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_150.f_133 != Global_100493.f_374)
				{
					return 1;
				}
				break;
			}
	}
	switch (iParam0)
	{
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_5476()//Position - 0x1A03BB
{
	if (__LIB_5__::func_130())
	{
		return;
	}
	if ((Local_150.f_356 == 0 || Local_150.f_356 == 1) || Local_150.f_356 == 11)
	{
		return;
	}
	if (!BitTest(Local_150.f_156, 0))
	{
		Local_150.f_134[0] = func_5477(0);
		MISC::SET_BIT(&(Local_150.f_156), 0);
	}
	if (!BitTest(Local_150.f_156, 1))
	{
		Local_150.f_134[1] = func_5477(1);
		MISC::SET_BIT(&(Local_150.f_156), 1);
	}
	if (!BitTest(Local_150.f_156, 2))
	{
		Local_150.f_134[2] = func_5477(2);
		MISC::SET_BIT(&(Local_150.f_156), 2);
	}
	if (!BitTest(Local_150.f_156, 3))
	{
		Local_150.f_134[3] = func_5477(3);
		MISC::SET_BIT(&(Local_150.f_156), 3);
	}
	if (!BitTest(Local_150.f_156, 4))
	{
		Local_150.f_134[4] = func_5477(4);
		MISC::SET_BIT(&(Local_150.f_156), 4);
	}
	if (!BitTest(Local_150.f_156, 5))
	{
		Local_150.f_134[5] = func_5477(5);
		MISC::SET_BIT(&(Local_150.f_156), 5);
	}
	if (!BitTest(Local_150.f_156, 6))
	{
		Local_150.f_134[6] = func_5477(6);
		MISC::SET_BIT(&(Local_150.f_156), 6);
	}
}

int func_5477(int iParam0)//Position - 0x1A04E6
{
	int iVar0;
	int iVar1[41];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	iVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
	if (iVar0 == __LIB_0__::func_162())
	{
		return -1;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		if (func_5478(iParam0, iVar3))
		{
			bVar5 = __LIB_4__::func_997(__LIB_5__::func_118(iVar0, iVar3, Local_150.f_1533));
			if (bVar5 != -1)
			{
				func_5049(bVar5, &uVar6, &uVar7, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar7))
				{
					if (!BitTest(Local_150.f_155, bVar5))
					{
						iVar1[iVar2] = iVar3;
						iVar2++;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar2 > 0)
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar2);
		iVar4 = (iVar4 - 1);
		if (iVar4 > -1)
		{
			if (Local_150.f_357[iVar1[iVar4]] != -1)
			{
				MISC::SET_BIT(&(Local_150.f_155), Local_150.f_357[iVar1[iVar4]]);
				return iVar1[iVar4];
			}
		}
	}
	return -1;
}

int func_5478(int iParam0, int iParam1)//Position - 0x1A05D8
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
					return 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 13:
				case 14:
					return 1;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 15:
				case 16:
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_5479()//Position - 0x1A075B
{
	int iVar0;
	iVar0 = (Local_150.f_44 - 1);
	if (Local_150.f_357[Local_150.f_44] == 10)
	{
		if (iVar0 > -1)
		{
			if (Local_150.f_357[iVar0] != 10)
			{
				Local_150.f_48 = 0;
			}
		}
		if (Local_150.f_48 >= 4)
		{
			Local_150.f_48 = 0;
		}
		Local_150.f_48++;
	}
	else
	{
		Local_150.f_48 = 0;
	}
}

int func_5480()//Position - 0x1A07BD
{
	if (__LIB_4__::func_999())
	{
		return 1;
	}
	if (!__LIB_0__::func_893())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
	{
		if ((__LIB_4__::func_972(PLAYER::PLAYER_ID()) && !__LIB_1__::func_11()) && !Global_2789733)
		{
			return 1;
		}
	}
	if (__LIB_7__::func_725(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_5489()//Position - 0x1A097B
{
	__LIB_7__::func_362(1);
	func_5494();
	func_5442();
	func_5044(&Local_150);
	func_5043(&Local_150, 0);
	func_523(1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_4969(&Local_150, &Local_149);
		}
	}
	Global_1973079.f_63 = 0;
	__LIB_5__::func_169(13, 0);
	__LIB_5__::func_169(11, 0);
	__LIB_5__::func_169(12, 0);
	__LIB_5__::func_169(14, 0);
	__LIB_5__::func_408(0);
	__LIB_5__::func_407(0);
	__LIB_10__::func_618(0);
	func_5099();
	func_5110();
	func_5491();
	func_5128();
	__LIB_0__::func_202();
}

void func_5491()//Position - 0x1A0A0E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (func_480() - 1))
	{
		func_4953(&Local_150, iVar0);
		iVar1 = 0;
		while (iVar1 <= (2 - 1))
		{
			func_5061(&Local_150, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_5494()//Position - 0x1A0AC3
{
	__LIB_5__::func_398(0);
	func_5116(0);
	MISC::CLEAR_BIT(&Global_1973079, 3);
}

void func_5496(struct<87> Param0)//Position - 0x1A0B0F
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_149, 786, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_148, 33, 0);
	func_5502();
	if (!__LIB_0__::func_934())
	{
		func_5489();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_5489();
	}
	func_5499(Param0);
	func_5497();
}

void func_5497()//Position - 0x1A0B68
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_5498();
	}
}

void func_5498()//Position - 0x1A0B7B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		iVar1 = 0;
		while (iVar1 <= (2 - 1))
		{
			Local_149.f_44[iVar0 /*3*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_5499(struct<87> Param0)//Position - 0x1A0BC2
{
	func_5502();
	func_5500(Param0);
	if (func_480() > 0)
	{
		func_5465(0);
	}
}

void func_5500(struct<87> Param0)//Position - 0x1A0BE7
{
	int iVar0;
	Local_150.f_1533 = Param0.f_86;
	iVar0 = 0;
	while (iVar0 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		Local_150.f_357[iVar0] = Param0.f_44[iVar0];
		Global_1973079.f_3[iVar0] = Param0.f_1[iVar0];
		Local_150.f_43++;
		iVar0++;
	}
	func_5043(&Local_150, 1);
	Local_150.f_133 = Param0.f_43;
	Global_1931414 = -1;
	Global_1931416 = -1;
}

void func_5502()//Position - 0x1A0CBA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (__LIB_5__::func_132(Local_150.f_1533) - 1))
	{
		Local_150.f_357[iVar0] = -1;
		Local_150.f_91[iVar0] = -1;
		Local_150.f_49[iVar0] = -1;
		iVar0++;
	}
}

