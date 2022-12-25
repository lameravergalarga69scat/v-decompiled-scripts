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
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_120[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_122[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_123[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_124[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	struct<3> Local_173[175];
	struct<3> Local_174[15];
	struct<3> Local_175[35];
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_183 = { 0, 0, 0 } ;
	struct<3> Local_184 = { 0, 0, 0 } ;
	char cLocal_185[64] = "";
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_204[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_205[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 12;
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
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265[4] = { 0, 0, 0, 0 };
	int iLocal_266 = 0;
	var uLocal_267[3] = { 0, 0, 0 };
	int iLocal_268[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	int iLocal_276[2] = { 0, 0 };
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280[2] = { 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286[2] = { 0, 0 };
	int iLocal_287 = 0;
	int iLocal_288[2] = { 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293[2] = { 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364[2] = { 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429[2] = { 0, 0 };
	int iLocal_430[2] = { 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_436[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[3] = { 0, 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[3] = { 0, 0, 0 };
	int iLocal_466[3] = { 0, 0, 0 };
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487[4] = { 0, 0, 0, 0 };
	int iLocal_488 = 0;
	char* sLocal_489 = NULL;
	var uLocal_490 = 16;
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
	var uLocal_643 = 0;
	var uLocal_644 = 0;
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
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 21;
	var uLocal_663 = 6;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	int iLocal_667[3] = { 0, 0, 0 };
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	iLocal_73 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_74 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_128 = 120f;
	fLocal_129 = 0f;
	fLocal_131 = 1f;
	fLocal_132 = 0f;
	fLocal_133 = 1f;
	fLocal_134 = 30f;
	fLocal_136 = 1f;
	fLocal_137 = 5f;
	fLocal_138 = 1f;
	fLocal_139 = 1f;
	fLocal_140 = 100f;
	fLocal_141 = 100f;
	fLocal_142 = 0f;
	fLocal_143 = 7000f;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_146 = 0.3f;
	fLocal_147 = 0.5f;
	fLocal_148 = 50f;
	iLocal_159 = -1;
	iLocal_167 = -1;
	iLocal_168 = -1;
	Local_306 = { -1024.1f, -485.3321f, 35.9816f };
	Local_307 = { -428.0263f, -2153.577f, 9.2997f };
	Local_308 = { -498.7f, -2136.5f, 8.4f };
	Local_316 = { -272.8615f, -2186.9316f, 9.3174f };
	fLocal_319 = 209.7233f;
	fLocal_320 = 90.947f;
	fLocal_323 = 46.7161f;
	if (__LIB_0__::func_2(0))
	{
		__LIB_15__::func_283(24, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_16__::func_326(PLAYER::PLAYER_PED_ID(), 0);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		func_432();
		func_430();
	}
	__LIB_0__::func_424(1);
	MISC::SET_MISSION_FLAG(true);
	iLocal_223 = 0;
	iLocal_222 = 0;
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
		if (iLocal_249 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		func_425();
		func_424();
		func_422();
		func_418();
		func_417();
		switch (iLocal_222)
		{
			case 0:
				func_413();
				break;
			case 1:
				func_368();
				break;
			case 2:
				func_362();
				break;
			case 3:
				func_359();
				break;
			case 4:
				func_259();
				break;
			case 5:
				func_247();
				break;
			case 6:
				func_241();
				break;
			case 7:
				func_231();
				break;
			case 8:
				func_5();
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
		}
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0x28A
{
	if (iLocal_411 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 476);
			iLocal_411 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_412 == 0)
			{
				iLocal_289 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_289, false))
					{
						__LIB_0__::func_505(iLocal_289, -1);
						__LIB_0__::func_377(iLocal_289, 479);
						iLocal_412 = 1;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_377(0, 479);
			__LIB_0__::func_505(0, -1);
			if (iLocal_412 == 1)
			{
				iLocal_412 = 0;
			}
		}
	}
	if (iLocal_413[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[0]))
		{
			if (PED::IS_PED_INJURED(uLocal_267[0]))
			{
				iLocal_233++;
				iLocal_413[0] = 1;
			}
		}
	}
	if (iLocal_413[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[1]))
		{
			if (PED::IS_PED_INJURED(uLocal_267[1]))
			{
				iLocal_233++;
				iLocal_413[1] = 1;
			}
		}
	}
	if (iLocal_413[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[2]))
		{
			if (PED::IS_PED_INJURED(uLocal_267[2]))
			{
				iLocal_233++;
				iLocal_413[2] = 1;
			}
		}
	}
	if (iLocal_413[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[0]))
			{
				iLocal_233++;
				iLocal_413[3] = 1;
			}
		}
	}
	if (iLocal_413[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[1]))
			{
				iLocal_233++;
				iLocal_413[4] = 1;
			}
		}
	}
	if (iLocal_413[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[2]))
			{
				iLocal_233++;
				iLocal_413[5] = 1;
			}
		}
	}
	if (iLocal_413[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[3]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[3]))
			{
				iLocal_233++;
				iLocal_413[6] = 1;
			}
		}
	}
	if (iLocal_413[7] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[4]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[4]))
			{
				iLocal_233++;
				iLocal_413[7] = 1;
			}
		}
	}
	if (iLocal_413[8] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[5]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[5]))
			{
				iLocal_233++;
				iLocal_413[8] = 1;
			}
		}
	}
	if (iLocal_413[9] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[6]))
			{
				iLocal_233++;
				iLocal_413[9] = 1;
			}
		}
	}
	if (iLocal_413[10] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[7]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[7]))
			{
				iLocal_233++;
				iLocal_413[10] = 1;
			}
		}
	}
	if (iLocal_413[11] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[8]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[8]))
			{
				iLocal_233++;
				iLocal_413[11] = 1;
			}
		}
	}
	if (iLocal_413[12] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[9]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[9]))
			{
				iLocal_233++;
				iLocal_413[12] = 1;
			}
		}
	}
	if (iLocal_413[13] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[10]))
		{
			if (PED::IS_PED_INJURED(iLocal_268[10]))
			{
				iLocal_233++;
				iLocal_413[13] = 1;
			}
		}
	}
	if (iLocal_413[14] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
		{
			if (PED::IS_PED_INJURED(iLocal_272))
			{
				iLocal_233++;
				iLocal_413[14] = 1;
			}
		}
	}
	if (iLocal_413[15] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
		{
			if (PED::IS_PED_INJURED(iLocal_273))
			{
				iLocal_233++;
				iLocal_413[15] = 1;
			}
		}
	}
	if (iLocal_413[16] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
		{
			if (PED::IS_PED_INJURED(iLocal_274))
			{
				iLocal_233++;
				iLocal_413[16] = 1;
			}
		}
	}
	if (iLocal_413[17] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_275[0]))
			{
				iLocal_233++;
				iLocal_413[17] = 1;
			}
		}
	}
	if (iLocal_222 == 8)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (iLocal_414 == 0)
			{
				__LIB_0__::func_499(482, 0);
				iLocal_414 = 1;
			}
		}
	}
}

void func_5()//Position - 0x7B2
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_285, 0, false, true);
		}
	}
	if (iLocal_223 > 0)
	{
		func_229();
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_343 == 1)
		{
			func_120();
			iLocal_343 = 0;
		}
		__LIB_37__::func_197(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_367 = 0;
		iLocal_368 = 0;
		iLocal_369 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_418 = 0;
		iLocal_419 = 0;
		iLocal_423 = 0;
		iLocal_426 = 0;
		iLocal_227 = 0;
		STREAMING::REQUEST_ANIM_DICT("Misssolomon_3");
		STREAMING::REQUEST_MODEL(joaat("oracle2"));
		STREAMING::REQUEST_MODEL(joaat("baller2"));
		if (HUD::DOES_BLIP_EXIST(iLocal_297))
		{
			HUD::REMOVE_BLIP(&iLocal_297);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", false, 1f, 1f);
			TASK::REMOVE_WAYPOINT_RECORDING("Trev4_5");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_279);
		}
		SYSTEM::SETTIMERA(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(0, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
		{
			if (!PED::IS_PED_INJURED(iLocal_266))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_266, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266, false);
			}
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
		{
			AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
		}
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_229("TRV4_END1", 7500, 1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (__LIB_38__::func_980(2))
		{
			__LIB_16__::func_793(2, 0);
		}
		iLocal_263 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, false, 7);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_284, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285, false))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_285, false);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_418 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("oracle2")))
				{
					iLocal_293[0] = VEHICLE::CREATE_VEHICLE(joaat("oracle2"), -1025.5964f, -2869.2366f, 12.9585f, 241.0686f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_293[0], true, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_293[0], 5f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("oracle2"));
					iLocal_418 = 1;
				}
			}
		}
		if (iLocal_419 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293[1]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("baller2")))
				{
					iLocal_293[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -971.4223f, -2903.3535f, 12.9652f, 61.0213f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_293[1], true, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_293[1], 5f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller2"));
					iLocal_419 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_293[0], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_293[0], false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_293[0], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_293[0], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_293[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_293[1], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_293[1], false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_293[1], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_293[1], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_293[1]));
			}
		}
		if (iLocal_398 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_268[0]))
			{
				__LIB_0__::func_640(iLocal_268[0], "SURROUNDED", 24);
				iLocal_398 = 1;
			}
		}
		if (iLocal_367 == 0)
		{
			if (SYSTEM::TIMERA() > 8000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[0], false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_286[0], 68, "BB_Chase", true);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_286[0], 0f, 0f, 0.15f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[1], false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_286[1], 69, "BB_Chase", true);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_286[1], 0f, 0f, 0.15f);
				}
				iLocal_367 = 1;
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_286[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_286[0]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_286[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_286[0]);
						}
					}
				}
				else if (iLocal_368 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_268[6]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[6], false);
					}
					if (!PED::IS_PED_INJURED(iLocal_268[7]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[7], false);
					}
					iLocal_368 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[1], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_286[1]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_286[1]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_286[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_286[1]);
						}
					}
				}
				else if (iLocal_369 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_268[8]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[8], false);
					}
					if (!PED::IS_PED_INJURED(iLocal_268[9]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[9], false);
					}
					iLocal_369 = 1;
				}
			}
		}
		func_12();
		if (iLocal_423 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_285, false))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_JET_ENTERED");
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 15f, 4);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_285);
						iLocal_423 = 1;
					}
					else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_285, 1) > 200f)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_285);
					}
				}
			}
		}
		if (iLocal_423 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_285, false))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
						iLocal_423 = 0;
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_426 == 0)
			{
				iLocal_235 = MISC::GET_GAME_TIMER();
				iLocal_426 = 1;
			}
		}
		if (iLocal_426 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_235 + 3500)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("TRV4_COPS_LOST");
					__LIB_0__::func_498(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_426 = 0;
			}
		}
	}
}

void func_6()//Position - 0xE96
{
	__LIB_0__::func_497(481, iLocal_233, 0);
	__LIB_0__::func_526(0, 0);
	func_430();
}

void func_12()//Position - 0x1137
{
	iLocal_231 = 0;
	while (iLocal_231 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[iLocal_231]))
		{
			if (!PED::IS_PED_INJURED(iLocal_268[iLocal_231]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_268[iLocal_231], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_268[iLocal_231]) > 200f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_268[iLocal_231]);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[iLocal_231]));
						}
						else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_268[iLocal_231]) > 20f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 0)
							{
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_268[iLocal_231], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, true, 15f, 20f, false, false, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_COMBAT")) != 0)
						{
							TASK::TASK_COMBAT_PED(iLocal_268[iLocal_231], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_268[iLocal_231], 50, true);
						}
					}
					else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_268[iLocal_231]) > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[iLocal_231]));
					}
					else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_268[iLocal_231]) > 5f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 0)
						{
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_268[iLocal_231], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, true, 15f, 20f, false, false, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_268[iLocal_231], joaat("SCRIPT_TASK_COMBAT")) != 0)
					{
						TASK::TASK_COMBAT_PED(iLocal_268[iLocal_231], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_268[iLocal_231], 50, true);
					}
				}
			}
		}
		iLocal_231++;
	}
	if (iLocal_367 == 1)
	{
		if (iLocal_344 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_286[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[0], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_286[0]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_268[6]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[6], false);
								TASK::CLEAR_PED_TASKS(iLocal_268[6]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_286[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_268[6], iLocal_304);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[7]))
						{
							if (!PED::IS_PED_INJURED(iLocal_268[7]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[7], false);
								TASK::CLEAR_PED_TASKS(iLocal_268[7]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_286[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_268[7], iLocal_304);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
							}
						}
						iLocal_344 = 1;
					}
				}
			}
		}
		else if (iLocal_399 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_286[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
					{
						if (!PED::IS_PED_INJURED(iLocal_268[6]))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_268[6], iLocal_286[0], false))
							{
								if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_268[6]) < 20f)
								{
									__LIB_0__::func_640(iLocal_268[6], "DRAW_GUN", 24);
									iLocal_399 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_345 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_286[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_286[1], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_286[1]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[8]))
						{
							if (!PED::IS_PED_INJURED(iLocal_268[8]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[8], false);
								TASK::CLEAR_PED_TASKS(iLocal_268[8]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_286[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_268[8], iLocal_304);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[9]))
						{
							if (!PED::IS_PED_INJURED(iLocal_268[9]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[9], false);
								TASK::CLEAR_PED_TASKS(iLocal_268[9]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_286[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_268[9], iLocal_304);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
							}
						}
						iLocal_345 = 1;
					}
				}
			}
		}
	}
	if (iLocal_346 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[10]))
		{
			if (!PED::IS_PED_INJURED(iLocal_268[10]))
			{
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_268[10]) > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[iLocal_231]));
					STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_268[10]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_268[10]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
							TASK::TASK_PLAY_ANIM(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_268[10], iLocal_304);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
							iLocal_346 = 1;
						}
					}
				}
			}
		}
	}
}

void func_120()//Position - 0xAA7C
{
	MISC::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
	func_228();
	func_200();
	func_122();
	if (!__LIB_0__::func_324())
	{
		func_121();
	}
	iLocal_349 = 1;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_121()//Position - 0xAAAB
{
	switch (iLocal_222)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.5793f, -484.872f, 36.0795f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_279, -1);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_279, 3000, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_279, false, true, false, false, false, false, false, false);
			}
			break;
		case 5:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -935.4413f, -2928.061f, 12.9451f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 178.466f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
			break;
		case 8:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -937.5466f, -2968.7126f, 12.9451f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.5016f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
			break;
	}
}

void func_122()//Position - 0xABC4
{
	switch (iLocal_222)
	{
		case 2:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::CLEAR_AREA(-1026.8f, -492.1f, 36f, 18f, true, false, false, false);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
			{
				MISC::CLEAR_AREA(Local_306, 5f, true, false, false, false);
				iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_306, fLocal_319, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_279, 3000, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_279, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_290))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.3977f, -491.6539f, 35.5545f, 5f, true, false, false, false);
					iLocal_290 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.3977f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_290, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_290, 3000, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_290, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_290, true);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_306, 5f, true, false, false, false);
					iLocal_291 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.9381f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_291, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_291, 3000, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_291, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_291, true);
				}
			}
			break;
		case 3:
			AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			func_197();
			MISC::CLEAR_AREA(Local_307, 200f, true, false, false, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), Local_307, fLocal_320, true, true, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_278, true, true, true, true, true, false, false, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				iLocal_264 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_278, 26, joaat("IG_Molly"), -1, true, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_264, true, true, true, true, true, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_264, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_264, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Molly"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_264, joaat("PLAYER"));
			}
			if (__LIB_0__::func_323())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
				{
					if (__LIB_13__::func_821())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_13__::func_791()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_13__::func_791()))
						{
							iLocal_279 = __LIB_14__::func_616(Local_316, fLocal_323);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_791());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
						}
						else
						{
							iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_316, fLocal_323, true, true, false);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
						}
					}
					else
					{
						iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_316, fLocal_323, true, true, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_279, 3000, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_279, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_279, false, true, false, false, false, false, false, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
			{
				iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_316, fLocal_323, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_279, 3000, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_279, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_279, false, true, false, false, false, false, false, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
			}
			break;
		case 5:
			iLocal_350 = 0;
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, true, false, false, false);
			SYSTEM::SETTIMERA(0);
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_AirWorker"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("IG_Molly"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			while (((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("BB_MOLLY_2")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_AirWorker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				iLocal_264 = PED::CREATE_PED(26, joaat("IG_Molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, true, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_264, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_264, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Molly"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_264, true, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_264, joaat("PLAYER"));
			}
			iLocal_295 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_295, iLocal_264, PED::GET_PED_BONE_INDEX(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_284))
			{
				iLocal_284 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.2688f, 12.9451f, 240.7726f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_284, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_284, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_284, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_284, true, true, true, true, true, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_284, 500);
			}
			if (__LIB_0__::func_323())
			{
				if (__LIB_13__::func_821())
				{
					__LIB_14__::func_532();
					while (!__LIB_14__::func_531())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
				{
					if (__LIB_13__::func_821())
					{
						iLocal_279 = __LIB_14__::func_616(-918.6263f, -2926.6309f, 12.9666f, 43.1705f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_791());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
					}
					else
					{
						iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.6309f, 12.9666f, 43.1705f, true, true, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
			{
				iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.6309f, 12.9666f, 43.1705f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.1604f, 12.945f, 61.7688f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_281))
			{
				iLocal_281 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.3708f, 12.945f, 86.6188f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_272))
			{
				iLocal_272 = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -922.942f, -2912.5088f, 12.945f, 156.2652f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_272, joaat("WEAPON_PISTOL"), 1000, true, true);
				__LIB_0__::func_609(iLocal_272, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
			}
			SYSTEM::SETTIMERA(0);
			__LIB_15__::func_955(2, 1);
			iLocal_358 = 1;
			break;
		case 8:
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, true, false, false, false);
			SYSTEM::SETTIMERA(0);
			iLocal_350 = 0;
			iLocal_358 = 0;
			iLocal_337 = 0;
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_AirWorker"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			STREAMING::REQUEST_PTFX_ASSET();
			while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_AirWorker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			func_125();
			if (__LIB_0__::func_323())
			{
				if (__LIB_13__::func_821())
				{
					__LIB_14__::func_532();
					while (!__LIB_14__::func_531())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
				{
					if (__LIB_13__::func_821())
					{
						iLocal_279 = __LIB_14__::func_616(-918.6263f, -2926.6309f, 12.9666f, 43.1705f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_791());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
					}
					else
					{
						iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.6309f, 12.9666f, 43.1705f, true, true, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
			{
				iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.6309f, 12.9666f, 43.1705f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.1604f, 12.945f, 61.7688f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_281))
			{
				iLocal_281 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.3708f, 12.945f, 86.6188f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_272))
			{
				iLocal_272 = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -922.942f, -2912.5088f, 12.945f, 156.2652f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_272, joaat("WEAPON_PISTOL"), 1000, true, true);
				__LIB_0__::func_609(iLocal_272, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_294))
			{
				iLocal_294 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_294, 0f, 0f, -121.5948f, 2, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_284))
			{
				iLocal_284 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.2688f, 12.9451f, 240.7726f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_284, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_284, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_284, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_284, true, true, true, true, true, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				iLocal_672 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, false, false, false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_284, 500);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_266))
			{
				iLocal_266 = PED::CREATE_PED(26, joaat("S_M_Y_AirWorker"), -933.8942f, -2965.7854f, 12.9451f, 331.7339f, true, true);
				__LIB_0__::func_222(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_AirWorker"));
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_266, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266, true);
				TASK::TASK_SMART_FLEE_PED(iLocal_266, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_266, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_266, false, false, false, false, false, false, false, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_266);
			}
			if (__LIB_16__::func_306(0) == 0 || __LIB_16__::func_306(0) == joaat("WEAPON_UNARMED"))
			{
				func_123(1);
			}
			break;
	}
}

void func_123(bool bParam0)//Position - 0xB958
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		if (iVar0 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, bParam0);
		}
	}
}

void func_125()//Position - 0xB9B7
{
	if (iLocal_337 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_286[0]))
		{
			iLocal_286[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -994.5278f, -2903.2852f, 12.9447f, 158.7951f, true, true, false);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_286[0], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
		{
			iLocal_268[0] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -969.06f, -2955.1858f, 12.945f, 241.1703f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_268[0], joaat("WEAPON_PISTOL"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_268[0], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_268[0], true, 1);
			TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_268[0], PLAYER::PLAYER_PED_ID(), -1, true);
			__LIB_0__::func_609(iLocal_268[0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_285))
		{
			iLocal_285 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.2976f, 12.9451f, 114.9439f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_285, 5f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
			ENTITY::SET_ENTITY_HEALTH(iLocal_285, 2000, 0);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_285, 0, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
		{
			iLocal_268[6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_286[0], 6, joaat("S_M_Y_Cop_01"), 0, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_268[6], joaat("WEAPON_PISTOL"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_268[6], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_268[6], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[6], true);
			__LIB_0__::func_609(iLocal_268[6], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[7]))
		{
			iLocal_268[7] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_286[0], 6, joaat("S_M_Y_Cop_01"), -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_268[7], joaat("WEAPON_PISTOL"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_268[7], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_268[7], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[7], true);
			__LIB_0__::func_609(iLocal_268[7], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_286[1]))
		{
			iLocal_286[1] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -962.2432f, -2864.1602f, 12.9447f, 149.5586f, true, true, false);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_286[1], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[8]))
		{
			iLocal_268[8] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_286[1], 6, joaat("S_M_Y_Cop_01"), 0, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_268[8], joaat("WEAPON_PISTOL"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_268[8], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_268[8], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[8], true);
			__LIB_0__::func_609(iLocal_268[8], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[9]))
		{
			iLocal_268[9] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_286[1], 6, joaat("S_M_Y_Cop_01"), -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_268[9], joaat("WEAPON_PISTOL"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_268[9], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_268[9], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[9], true);
			__LIB_0__::func_609(iLocal_268[9], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[10]))
		{
			iLocal_268[10] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -922.1185f, -2939.5947f, 12.9451f, 156.1408f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_268[10], joaat("WEAPON_PISTOL"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_268[10], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_268[10], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[10], true);
			__LIB_0__::func_609(iLocal_268[10], 0);
			PED::SET_PED_DUCKING(iLocal_268[10], true);
		}
		iLocal_337 = 1;
	}
}

void func_197()//Position - 0x13127
{
	iLocal_305 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
	STREAMING::REQUEST_MODEL(joaat("jet"));
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("maverick"));
	STREAMING::REQUEST_MODEL(joaat("bison"));
	STREAMING::REQUEST_MODEL(joaat("blista"));
	STREAMING::REQUEST_MODEL(joaat("IG_Molly"));
	STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
	STREAMING::REQUEST_MODEL(joaat("rapidgt"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
	__LIB_39__::func_396(1, "BB_Chase");
	if (__LIB_0__::func_323())
	{
		if (__LIB_13__::func_821())
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_13__::func_791()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_13__::func_791()))
			{
				__LIB_14__::func_532();
				while (!__LIB_14__::func_531())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")))
	{
		SYSTEM::WAIT(0);
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_305) || !__LIB_39__::func_395(1, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_200()//Position - 0x1331C
{
	__LIB_0__::func_325();
	__LIB_0__::func_429();
	HUD::CLEAR_PRINTS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_262))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_262, 0);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_263))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_263);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.5793f, -484.872f, 36.0795f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_279))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_279);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_278, 0f);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_278);
			}
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_668))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_668, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_669))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_669, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_670))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_670, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_671))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_671, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_672))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_672, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_667[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[0], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_667[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[1], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_667[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[2], false);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		PED::DELETE_PED(&iLocal_264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
	{
		PED::DELETE_PED(&iLocal_266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		PED::DELETE_PED(&iLocal_269);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
	{
		PED::DELETE_PED(&iLocal_270);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
	{
		PED::DELETE_PED(&iLocal_271);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
	{
		PED::DELETE_PED(&iLocal_272);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
	{
		PED::DELETE_PED(&iLocal_273);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
	{
		PED::DELETE_PED(&iLocal_274);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[0]))
	{
		PED::DELETE_PED(&(iLocal_265[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[1]))
	{
		PED::DELETE_PED(&(iLocal_265[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[2]))
	{
		PED::DELETE_PED(&(iLocal_265[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[3]))
	{
		PED::DELETE_PED(&(iLocal_265[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[0]))
	{
		PED::DELETE_PED(&(uLocal_267[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[1]))
	{
		PED::DELETE_PED(&(uLocal_267[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[2]))
	{
		PED::DELETE_PED(&(uLocal_267[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
	{
		PED::DELETE_PED(&(iLocal_268[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[1]))
	{
		PED::DELETE_PED(&(iLocal_268[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[2]))
	{
		PED::DELETE_PED(&(iLocal_268[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[3]))
	{
		PED::DELETE_PED(&(iLocal_268[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[4]))
	{
		PED::DELETE_PED(&(iLocal_268[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[5]))
	{
		PED::DELETE_PED(&(iLocal_268[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
	{
		PED::DELETE_PED(&(iLocal_268[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[7]))
	{
		PED::DELETE_PED(&(iLocal_268[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[8]))
	{
		PED::DELETE_PED(&(iLocal_268[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[9]))
	{
		PED::DELETE_PED(&(iLocal_268[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[10]))
	{
		PED::DELETE_PED(&(iLocal_268[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
	{
		PED::DELETE_PED(&(iLocal_275[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[0]))
	{
		PED::DELETE_PED(&(iLocal_276[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[1]))
	{
		PED::DELETE_PED(&(iLocal_276[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_278);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_279))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_279, true, false);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_279);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_283);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_285);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_287))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_287);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_289);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_293[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_293[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_280[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_280[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_293[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_293[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_286[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_286[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_288[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_288[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_281))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_281);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_294))
	{
		OBJECT::DELETE_OBJECT(&iLocal_294);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
	{
		OBJECT::DELETE_OBJECT(&iLocal_295);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
	{
		OBJECT::DELETE_OBJECT(&iLocal_296);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
	}
	AUDIO::STOP_SOUND(iLocal_253);
	AUDIO::STOP_SOUND(iLocal_255);
	AUDIO::STOP_SOUND(iLocal_256);
	AUDIO::STOP_SOUND(iLocal_257);
	AUDIO::STOP_SOUND(iLocal_258);
	AUDIO::STOP_SOUND(iLocal_259);
	AUDIO::STOP_SOUND(iLocal_260);
	AUDIO::STOP_SOUND(iLocal_261);
	AUDIO::STOP_SOUND(iLocal_254);
	__LIB_0__::func_345(&uLocal_28, 0, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_301))
	{
		CAM::DESTROY_CAM(iLocal_301, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_302))
	{
		CAM::DESTROY_CAM(iLocal_302, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_303))
	{
		CAM::DESTROY_CAM(iLocal_303, false);
	}
	func_201(1, 1);
	STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_clipboard@male@base");
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(68, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(69, "BB_Chase");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_305);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
}

void func_201(bool bParam0, bool bParam1)//Position - 0x13AE9
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_185))
	{
		iLocal_91 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_194);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_107)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_397());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_216();
			func_215();
			func_212();
		}
		else
		{
			func_208();
			func_207();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_207()//Position - 0x13D13
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_201[iVar0] = 0;
		Local_173[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_149[iVar0] = 0;
		fLocal_113[iVar0] = 0f;
		iLocal_150[iVar0] = 0;
		iLocal_195[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_202[iVar0] = 0;
		iVar0++;
	}
	iLocal_156 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_203[iVar0] = 0;
		Local_174[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		iLocal_155[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_205[iVar0] = 0;
		iVar0++;
	}
	iLocal_158 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_204[iVar0] = 0;
		Local_175[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_118[iVar0] = 0f;
		fLocal_119[iVar0] = 0f;
		fLocal_120[iVar0] = 0f;
		fLocal_121[iVar0] = 0f;
		iLocal_152[iVar0] = 0;
		fLocal_122[iVar0] = 0f;
		iLocal_153[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iVar0++;
	}
	iLocal_157 = 0;
	iLocal_160 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_165 = 0;
}

void func_208()//Position - 0x13EA0
{
	func_211();
	func_210();
	func_209();
}

void func_209()//Position - 0x13EB4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_204[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_204[iVar0]));
			}
		}
		iLocal_153[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_197[iVar0]);
		}
		iVar0++;
	}
}

void func_210()//Position - 0x13FAB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_203[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_203[iVar0]));
			}
		}
		iLocal_155[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_211()//Position - 0x1402A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_201[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_201[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_201[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_201[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_201[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_201[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

void func_212()//Position - 0x14129
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[iVar0]);
				}
			}
			func_214(iLocal_204[iVar0]);
			__LIB_15__::func_908(iLocal_204[iVar0]);
		}
		iLocal_153[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_197[iVar0]);
		}
		iVar0++;
	}
	iLocal_162 = 0;
}

void func_214(int iParam0)//Position - 0x1420D
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
				if (bLocal_108)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_215()//Position - 0x142A7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_203[iVar0], true, false);
			}
			__LIB_15__::func_908(iLocal_203[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_216()//Position - 0x1432B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_201[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_201[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_201[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_201[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_201[iVar0]);
				}
			}
			func_214(iLocal_201[iVar0]);
			__LIB_15__::func_908(iLocal_201[iVar0]);
		}
		iLocal_150[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

void func_228()//Position - 0x1460C
{
	if (HUD::DOES_BLIP_EXIST(iLocal_297))
	{
		HUD::REMOVE_BLIP(&iLocal_297);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_298))
	{
		HUD::REMOVE_BLIP(&iLocal_298);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_299))
	{
		HUD::REMOVE_BLIP(&iLocal_299);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_300))
	{
		HUD::REMOVE_BLIP(&iLocal_300);
	}
}

void func_229()//Position - 0x14658
{
	if (iLocal_486 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
		{
			if (!PED::IS_PED_INJURED(iLocal_266))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_266, PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_486 = 1;
				}
			}
		}
	}
	if (iLocal_486 == 0)
	{
		if (iLocal_456 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
			{
				if (!PED::IS_PED_INJURED(iLocal_266))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
					{
						if (!PED::IS_PED_INJURED(iLocal_264))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_264))
							{
								if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_264) > 18)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(iLocal_296))
										{
											ENTITY::DETACH_ENTITY(iLocal_296, true, true);
										}
									}
									iLocal_252 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_266, iLocal_252, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1000f, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_266, PLAYER::PLAYER_PED_ID(), 9000, 1024, 3);
									iLocal_456 = 1;
									iLocal_457 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_456 == 1 && iLocal_458 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
			{
				if (!PED::IS_PED_INJURED(iLocal_266))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
					{
						if (!iLocal_457)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.25f)
							{
								__LIB_0__::func_222(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
								__LIB_0__::func_709(iLocal_266, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_457 = 1;
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_252) > 0.99f)
						{
							iLocal_252 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_266, iLocal_252, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1000f, 0);
							iLocal_458 = 1;
						}
					}
				}
			}
		}
		if (iLocal_458 == 1 && iLocal_461 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
			{
				if (!PED::IS_PED_INJURED(iLocal_266))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_252))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_266, MISC::GET_HASH_KEY("ENDS_IN_RUN")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
							TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Sprint"), false);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_266, iLocal_304);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
							PED::FORCE_PED_MOTION_STATE(iLocal_266, joaat("MotionState_Sprint"), false, 0, false);
							iLocal_461 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_461 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
		{
			if (!PED::IS_PED_INJURED(iLocal_266))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_266, iLocal_304);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
				iLocal_461 = 1;
			}
		}
	}
}

void func_231()//Position - 0x14951
{
	if (iLocal_223 == 0)
	{
		iLocal_225 = 0;
		iLocal_253 = AUDIO::GET_SOUND_ID();
		CUTSCENE::REQUEST_CUTSCENE("TRV_4_MCS_2", 8);
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", false, 0.5f, 1f);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		switch (iLocal_225)
		{
			case 0:
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_264, "Molly", 1, joaat("IG_Molly"), 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_266))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_266, "Airworker_Tackle_trevor", 0, joaat("S_M_Y_AirWorker"), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_284, "JET_TRV4", 0, joaat("jet"), 0);
				}
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_SUCK_CS");
				CUTSCENE::START_CUTSCENE(0);
				iLocal_225++;
				break;
			case 1:
				func_125();
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("JET_TRV4", joaat("jet")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_284, false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_284, true);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Airworker_Tackle_trevor", joaat("S_M_Y_AirWorker")))
				{
					if (!PED::IS_PED_INJURED(iLocal_266))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266, true);
						TASK::TASK_SMART_FLEE_PED(iLocal_266, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_266, false);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_266, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_266, false, false, false, false, false, false, false, false);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					func_125();
					func_123(1);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					iLocal_336 = 1;
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_294))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_294 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_294, 0f, 0f, -121.5948f, 2, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
						}
					}
					CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(false);
					__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMG"), 150, true, true);
					}
					iLocal_223 = 2;
				}
				break;
			}
	}
	if (iLocal_223 == 2)
	{
		iLocal_223 = 0;
		iLocal_222 = 8;
	}
}

void func_241()//Position - 0x14E66
{
	if (iLocal_442 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.02576f, -2958.6145f, 12.464674f, -930.65247f, -2956.061f, 16.459446f, 2.75f, false, true, 0))
		{
			iLocal_442 = 1;
		}
	}
	else if (iLocal_446 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -938.5178f, -2972.0225f, 12.467147f, -934.1034f, -2974.613f, 15.967147f, 5.25f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		}
		else
		{
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.975f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_324);
		}
	}
	if (iLocal_223 > 0)
	{
		func_229();
	}
	if (iLocal_223 == 0)
	{
		iLocal_337 = 0;
		iLocal_338 = 0;
		iLocal_339 = 0;
		iLocal_340 = 0;
		iLocal_342 = 0;
		iLocal_358 = 0;
		iLocal_420 = 0;
		iLocal_421 = 0;
		iLocal_422 = 0;
		iLocal_428 = 0;
		iLocal_443 = 0;
		iLocal_444 = 0;
		iLocal_445 = 0;
		iLocal_446 = 0;
		iLocal_447[0] = 0;
		iLocal_448[0] = 0;
		iLocal_447[1] = 0;
		iLocal_448[1] = 0;
		iLocal_447[2] = 0;
		iLocal_456 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_460 = 0;
		iLocal_461 = 0;
		iLocal_464 = 0;
		iLocal_484 = 0;
		iLocal_486 = 0;
		iLocal_487[3] = 0;
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_60_HangerRm");
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
		{
			if (!PED::IS_PED_INJURED(iLocal_264))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_264))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_264, 3f, true);
				}
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_428 == 0)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Trv_4_747", false, -1))
			{
				iLocal_428 = 1;
			}
		}
		if (iLocal_420 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_264))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_264) > 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
								{
									func_246(&iLocal_284);
									AUDIO::PLAY_SOUND_FROM_COORD(iLocal_253, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, false, 0, false);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_284, true, false, false);
									iLocal_420 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_443 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_264))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_264) > 23)
						{
							TASK::CLEAR_PED_TASKS(iLocal_264);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_251 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_251, iLocal_284, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_284, "chassis_Control"));
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_264, iLocal_251, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_251, true);
									iLocal_443 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_444 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					if (iLocal_443 == 1)
					{
						Local_318 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (Local_318.f_1 < -2965f)
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_264, 0f, 0f, 0f, true, 6000, 1000, 2000, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_264, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_264, 4000, 48, 4);
							iLocal_444 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_445 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				CAM::STOP_GAMEPLAY_HINT(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_268[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_268[0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[0], false);
					}
				}
				iLocal_445 = 1;
			}
		}
		if (iLocal_422 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_295, iLocal_264))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_251) > 0.59f)
								{
									ENTITY::DETACH_ENTITY(iLocal_295, true, true);
									if (HUD::DOES_BLIP_EXIST(iLocal_297))
									{
										HUD::REMOVE_BLIP(&iLocal_297);
									}
									if (!HUD::DOES_BLIP_EXIST(iLocal_300))
									{
										__LIB_0__::func_709(iLocal_264, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
										{
											AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
										}
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0);
										iLocal_422 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_446 == 0)
		{
			if (iLocal_422 == 1 && SYSTEM::TIMERB() > 2500)
			{
				iLocal_300 = __LIB_0__::func_643(iLocal_295);
				__LIB_0__::func_229("SOL3_GOD1", 7500, -1);
				SYSTEM::SETTIMERB(0);
				iLocal_446 = 1;
			}
		}
		if (iLocal_487[3] == 0)
		{
			if (iLocal_446 == 1 && iLocal_445 == 1)
			{
				if (SYSTEM::TIMERB() > 2500)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
					iLocal_487[3] = 1;
				}
			}
		}
		if (iLocal_421 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_264))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_251) > 0.89f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
							{
								PED::DELETE_PED(&iLocal_264);
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_blood_impact", iLocal_284, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, false, false, false);
								iLocal_673 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
								AUDIO::PLAY_SOUND_FROM_COORD(iLocal_254, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, false, 0, false);
								iLocal_234 = MISC::GET_GAME_TIMER();
								iLocal_421 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (MISC::GET_GAME_TIMER() > iLocal_234 + 574)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_294))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_294 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_294, 0f, 0f, -121.5948f, 2, true);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_484 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_engine_debris", iLocal_284, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, false, false, false);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_284, false, false, false);
							func_242();
							AUDIO::STOP_SOUND(iLocal_253);
							iLocal_484 = 1;
						}
					}
				}
			}
			if (iLocal_447[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_234 + 300)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_673))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_673, false);
					}
					iLocal_447[0] = 1;
				}
			}
			else if (iLocal_448[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_234 + 700)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
						{
							iLocal_673 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_448[0] = 1;
						}
					}
				}
			}
			else if (iLocal_447[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_234 + 1000)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_673))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_673, false);
					}
					iLocal_447[1] = 1;
				}
			}
			else if (iLocal_448[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_234 + 1400)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
						{
							iLocal_673 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_672 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, false, false, false);
							iLocal_448[1] = 1;
						}
					}
				}
			}
			else if (iLocal_447[2] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_234 + 3500)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_673))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_673, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_284, false))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_284, false, false, false, false, false, false, false, false);
						}
					}
					iLocal_447[2] = 1;
				}
			}
		}
		if (iLocal_459 == 0)
		{
			if (iLocal_422 == 1)
			{
				if (iLocal_460 == 0)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_295))
					{
						iLocal_244 = MISC::GET_GAME_TIMER();
						iLocal_460 = 1;
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_244 + 2000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_295, true);
					iLocal_459 = 1;
				}
			}
		}
		if (iLocal_464 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_284, false);
					iLocal_464 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_300))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_295, 1) < 1.5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					HUD::REMOVE_BLIP(&iLocal_300);
					OBJECT::DELETE_OBJECT(&iLocal_295);
					func_125();
					iLocal_223 = 0;
					iLocal_222 = 8;
				}
			}
		}
	}
}

void func_242()//Position - 0x15764
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_668))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_668, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_669))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_669, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_670))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_670, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_671))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_671, false);
	}
}

void func_246(int iParam0)//Position - 0x1587F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var1 = { 12.6349f, 7.89711f, -7.09742f };
		Var2 = { -22.5879f, -2.2931f, -6.22542f };
		Var3 = { -12.6675f, 8.15519f, -6.98833f };
		Var4 = { 180f, 0f, 0f };
		iLocal_668 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var4, 1f, false, false, false);
		iLocal_669 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var1, Var4, 1f, false, false, false);
		iLocal_670 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var2, Var4, 1f, false, false, false);
		iLocal_671 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var4, 1f, false, false, false);
	}
}

void func_247()//Position - 0x15962
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		if (!PED::IS_PED_INJURED(iLocal_264))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_264))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_264, 1) < 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_264, 3f, true);
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_264, 1) < 22f && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_264, 1) > 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_264, 2f, true);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -921.7f, -2946.4f, 13.4f, true) > 8f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_264))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_264, 1) > 22f)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_264, 1f, true);
					}
				}
				else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_264, 1) > 22f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_264, 2f, true);
				}
			}
		}
	}
	if (iLocal_223 > 0)
	{
		if (iLocal_442 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.02576f, -2958.6145f, 12.464674f, -930.65247f, -2956.061f, 16.459446f, 2.75f, false, true, 0))
			{
				iLocal_442 = 1;
			}
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.98f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_324);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
			{
				iLocal_284 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.2688f, 12.9451f, 240.7726f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_284, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_284, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_284, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_284, true, true, true, true, true, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_284, 500);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_266))
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_AirWorker"));
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
			if ((STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_AirWorker")) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01")))
			{
				iLocal_266 = PED::CREATE_PED(26, joaat("S_M_Y_AirWorker"), -932.1812f, -2967.9468f, 12.9451f, 170.7182f, true, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_266, false, false, false, false, false, false, false, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_266, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_266, true);
				__LIB_0__::func_222(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				iLocal_296 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), -932.1812f, -2967.9468f, 12.9451f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_296, iLocal_266, PED::GET_PED_BONE_INDEX(iLocal_264, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				iLocal_252 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_266, iLocal_252, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1000f, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_AirWorker"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_clipboard_01"));
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01")))
			{
				iLocal_268[0] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -969.06f, -2955.1858f, 12.945f, 241.1703f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_268[0], joaat("WEAPON_PISTOL"), 1000, true, true);
				PED::SET_PED_ACCURACY(iLocal_268[0], 20);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_268[0], true, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_268[0], true);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_268[0], PLAYER::PLAYER_PED_ID(), -1, true);
				__LIB_0__::func_609(iLocal_268[0], 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_285))
		{
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")))
			{
				iLocal_285 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.2976f, 12.9451f, 114.9439f, true, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_285, 0, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_285, 5f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_285, 2000, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_285, false))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_285, 1) > 5f)
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_285, 0, false, false);
				}
			}
		}
	}
	if (iLocal_223 == 0)
	{
		__LIB_37__::func_197(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_343 == 1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_120();
			__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_343 = 0;
		}
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_442 = 0;
		fLocal_324 = 3f;
		iLocal_227 = 0;
		func_201(0, 1);
		VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_305);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_278, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_287))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_287);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[0]))
		{
			PED::DELETE_PED(&(iLocal_276[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_280[0]));
		}
		MISC::SET_FAKE_WANTED_LEVEL(0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		if (!PED::IS_PED_INJURED(iLocal_264))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_297))
			{
				iLocal_297 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_264);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_297, true);
			}
		}
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", true);
		if (iLocal_363[2] == 1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_261))
			{
				AUDIO::STOP_SOUND(iLocal_261);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_261);
			iLocal_390 = 0;
			iLocal_363[2] = 0;
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_RUN");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_284))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_266))
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_AirWorker"));
		}
		STREAMING::REQUEST_MODEL(joaat("shamal"));
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
		VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
		STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
		SYSTEM::SETTIMERA(0);
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", true, 1f, 1f);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(0, -1, 1);
			__LIB_0__::func_229("TRV4_CHASE1", 7500, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, false, true, 0))
		{
			func_248("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, false, true, 0))
		{
			func_248("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 15000)
		{
			func_248("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_264))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_264))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_264, "BB_MOLLY_2", 10, 4, -1);
					TASK::TASK_PLAY_ANIM(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
				}
			}
			SYSTEM::SETTIMERA(0);
			iLocal_223 = 3;
		}
	}
	if (iLocal_223 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_264))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_264))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_264) > 18 && iLocal_405 == 0)
				{
					iLocal_350 = 0;
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_264, 3f, true);
					iLocal_223 = 0;
					iLocal_222 = 6;
				}
			}
		}
		if (SYSTEM::TIMERA() > 50000)
		{
			if (!PED::IS_PED_INJURED(iLocal_264))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_264);
				ENTITY::SET_ENTITY_COORDS(iLocal_264, -932.5f, -2964.1f, 13.4f, true, false, false, true);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_264, "BB_MOLLY_2", 18, 4, -1);
				TASK::TASK_PLAY_ANIM(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
				iLocal_350 = 0;
				iLocal_223 = 0;
				iLocal_222 = 6;
			}
		}
	}
}

void func_248(char* sParam0)//Position - 0x161C0
{
	if (iLocal_405 == 0)
	{
		if (iLocal_334)
		{
			__LIB_0__::func_963(0, 1, 1, 0);
			CAM::SET_CAM_ACTIVE(iLocal_301, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(true);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::STOP_SOUND(iLocal_261);
			__LIB_17__::func_59();
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			iLocal_363[2] = 0;
			iLocal_334 = 0;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		sLocal_489 = sParam0;
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_325();
		__LIB_0__::func_429();
		func_249(sLocal_489);
		iLocal_405 = 1;
	}
}

void func_249(char* sParam0)//Position - 0x16249
{
	__LIB_0__::func_381(sParam0);
	func_250(0);
}

void func_250(int iParam0)//Position - 0x1625C
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_251(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_251(int iParam0)//Position - 0x162A1
{
	int iVar0;
	int iVar1;
	__LIB_14__::func_534();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_252(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_252(var uParam0, int iParam1)//Position - 0x163B1
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_254(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_254(int iParam0, var uParam1, float fParam2)//Position - 0x16585
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_254(8, uParam1, fParam2);
			break;
		case 10:
			return func_254(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_259()//Position - 0x1706D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_284))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 30000f)
					{
						STREAMING::REQUEST_MODEL(joaat("jet"));
						if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
						{
							iLocal_284 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.2688f, 12.9451f, 240.7726f, true, true, false);
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_284, 2);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_284, false);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_284, true);
							ENTITY::SET_ENTITY_PROOFS(iLocal_284, true, true, true, true, true, false, false, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
							ENTITY::SET_ENTITY_LOD_DIST(iLocal_284, 500);
						}
					}
				}
			}
		}
	}
	func_358();
	if (HUD::DOES_BLIP_EXIST(iLocal_297))
	{
		__LIB_14__::func_655(iLocal_297, iLocal_264, 300f, 0.9f, 0);
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_224 < 2)
		{
			PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), false);
		}
		func_356();
		func_324();
		if (iLocal_395 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[20]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[20], false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_204[20], true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_204[20]);
					iLocal_395 = 1;
				}
			}
		}
		func_323();
		func_322();
		if (iLocal_347 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
					{
						__LIB_39__::func_400(iLocal_301, iLocal_287, "BB_Chase", 1);
						iLocal_347 = 1;
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
			{
				__LIB_39__::func_399(iLocal_301, iLocal_287, fLocal_321);
				CAM::SET_CAM_FOV(iLocal_301, 45f);
			}
		}
		if (iLocal_335 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
				{
					if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 125464f) && __LIB_0__::func_669(1, 0, 0))
					{
						iLocal_350 = 1;
						if (iLocal_405 == 0)
						{
							HUD::CLEAR_HELP(true);
							__LIB_0__::func_151("TRV4_HELP1", -1);
							__LIB_0__::func_671(1);
							__LIB_0__::func_345(&uLocal_28, 0, 0);
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
							iLocal_335 = 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_305) && __LIB_39__::func_395(1, "BB_Chase"))
				{
					if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 125464f) && iLocal_405 == 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_282();
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 125464f || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (iLocal_334)
						{
							HUD::CLEAR_HELP(true);
							__LIB_0__::func_963(0, 1, 1, 0);
							CAM::SET_CAM_ACTIVE(iLocal_301, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							HUD::DISPLAY_RADAR(true);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
							}
							AUDIO::STOP_SOUND(iLocal_261);
							__LIB_17__::func_59();
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
							iLocal_363[2] = 0;
							iLocal_334 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_224)
		{
			case 0:
				if (iLocal_487[0] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 44255f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1187.3f, -2847.8f, 13.6f, true) < 100f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
								iLocal_487[0] = 1;
							}
						}
					}
				}
				if (iLocal_487[1] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 52875f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1349f, -2720f, 14f, true) < 50f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 2f, 3);
								iLocal_487[1] = 1;
							}
						}
					}
				}
				if (iLocal_487[2] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 87085f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1507f, -2520f, 14f, true) < 70f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
								iLocal_487[2] = 1;
							}
						}
					}
				}
				func_281();
				func_280();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 64280f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 72000f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1149.6f, -2323.7f, 22.5f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 130f)
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 72500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 78000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 85000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 85500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 100000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 107000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 107500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 10000f)
							{
								func_279();
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 30000f)
						{
							func_278(iLocal_278, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278));
						}
					}
				}
				if (iLocal_408 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 22000f)
							{
								AUDIO::PREPARE_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
								iLocal_408 = 1;
							}
						}
					}
				}
				else if (iLocal_409 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -940.8253f, -2858.6016f, 11.944824f, -1001.27234f, -2823.7642f, 21.006737f, 5.75f, false, true, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
						iLocal_409 = 1;
					}
				}
				if (iLocal_341 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (__LIB_0__::func_76(iLocal_278, PLAYER::PLAYER_PED_ID(), 1) < 170f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_299))
							{
								HUD::REMOVE_BLIP(&iLocal_299);
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
							{
								AUDIO::START_AUDIO_SCENE("SOL_3_MAIN_CHASE");
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_297))
							{
								if (!PED::IS_PED_INJURED(iLocal_264))
								{
									iLocal_297 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_264);
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_297, true);
								}
							}
							HUD::CLEAR_GPS_MULTI_ROUTE();
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_0__::func_229("TRV4_CHASE2", 7500, 1);
								__LIB_37__::func_197(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
								iLocal_341 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -536.03656f, -2102.793f, 5.672412f, -464.5755f, -2165.1333f, 14.751824f, 65.25f, false, true, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_299))
						{
							HUD::REMOVE_BLIP(&iLocal_299);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_297))
						{
							if (!PED::IS_PED_INJURED(iLocal_264))
							{
								iLocal_297 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_264);
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_297, true);
							}
						}
						HUD::CLEAR_GPS_MULTI_ROUTE();
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__::func_229("TRV4_CHASE2", 7500, 1);
							__LIB_37__::func_197(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
							iLocal_341 = 1;
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 15000f)
						{
						}
					}
				}
				if (iLocal_326 == 0)
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 18490f)
								{
									iLocal_280[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -441.3117f, -3435.7363f, 409.9454f, 148.3975f, true, true, false);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_280[1], 2, "BB_Chase", true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_326 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[1], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_280[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_280[1], fLocal_321);
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_280[1]) > 20000f)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_280[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_280[1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_280[1]);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[1]))
									{
										PED::DELETE_PED(&(iLocal_276[1]));
									}
									VEHICLE::DELETE_VEHICLE(&(iLocal_280[1]));
									iLocal_249 = MISC::GET_GAME_TIMER() + 1000;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[1]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_280[1]) > 31543f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_280[1]);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_280[1], true);
								}
							}
						}
						else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_280[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_280[1]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[1]))
							{
								PED::DELETE_PED(&(iLocal_276[1]));
							}
							VEHICLE::DELETE_VEHICLE(&(iLocal_280[1]));
							iLocal_249 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
				if (iLocal_432 == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 23000f)
								{
									STREAMING::REQUEST_MODEL(joaat("tanker"));
									if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")))
									{
										iLocal_283 = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, true, true, false);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_283, 57, 57);
										iLocal_432 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[1], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[1]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_204[1]) > 13000f)
							{
								if (iLocal_370 == 0)
								{
									fLocal_123[1] = 0.5f;
									iLocal_269 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[1], -1, false);
									iLocal_370 = 1;
								}
							}
						}
					}
				}
				if (iLocal_332 == 0)
				{
					STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1325f, -2779f, 14f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[1]))
					{
						if (iLocal_361 == 0)
						{
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_204[1], 57, 57);
							iLocal_361 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[1], false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_283, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[1]))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_204[1], iLocal_283, 1f);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 41430f)
									{
										ENTITY::DETACH_ENTITY(iLocal_283, true, true);
										iLocal_332 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_373 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[1], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 42700f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
									{
										if (!PED::IS_PED_INJURED(iLocal_269))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_269, 0, 0);
										}
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[1]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[1]);
										iLocal_373 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (iLocal_467 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 38000f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[1], false))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Horn", iLocal_204[1], 0, false, 0);
										iLocal_467 = 1;
									}
								}
							}
							if (iLocal_363[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 39000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true, true, false, false, false, false, false);
									}
									iLocal_363[1] = 1;
								}
							}
							if (iLocal_403 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 41611f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_283, false))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[7]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[7], false))
												{
													AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Explosion", iLocal_283, 0, false, 0);
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[7]);
													VEHICLE::EXPLODE_VEHICLE(iLocal_204[7], true, false);
													VEHICLE::EXPLODE_VEHICLE(iLocal_283, true, false);
													FIRE::ADD_EXPLOSION(-1221f, -2852f, 17f, 14, 1f, true, false, 1f, false);
													FIRE::ADD_EXPLOSION(-1212f, -2855f, 14.34f, 14, 1f, true, false, 1f, false);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_204[1]));
													iLocal_403 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_364[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 43204f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false, false, false, false, false, false, false);
									}
									iLocal_364[1] = 1;
								}
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 40000f)
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[0], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 43204f)
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_325 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 60500f)
							{
								STREAMING::REQUEST_MODEL(joaat("jet"));
							}
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 66500f)
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
								{
									iLocal_280[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -1119.0723f, -1864.5477f, -8.2205f, 148.3975f, true, true, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_280[0], true);
									VEHICLE::SET_VEHICLE_LIVERY(iLocal_280[0], 2);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_280[0], 35, "BB_Chase", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_280[0], 3491f);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[0], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_280[0]))
								{
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_280[0], fLocal_321);
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 80000f)
									{
										if (__LIB_0__::func_76(iLocal_280[0], PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_280[0]);
										}
									}
								}
								else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 80000f)
								{
									if (__LIB_0__::func_76(iLocal_280[0], PLAYER::PLAYER_PED_ID(), 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_280[0]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[0]))
										{
											PED::DELETE_PED(&(iLocal_276[0]));
										}
										VEHICLE::DELETE_VEHICLE(&(iLocal_280[0]));
										iLocal_249 = MISC::GET_GAME_TIMER() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_392 == 0)
				{
					if (iLocal_391 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 50000f)
									{
										STREAMING::REQUEST_MODEL(joaat("S_M_Y_AirWorker"));
										STREAMING::REQUEST_ANIM_DICT("misstrevor4");
										if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_AirWorker")))
										{
											iLocal_270 = PED::CREATE_PED(26, joaat("S_M_Y_AirWorker"), -1170.541f, -2507.1108f, 12.9455f, 218.3035f, true, true);
											iLocal_271 = PED::CREATE_PED(26, joaat("S_M_Y_AirWorker"), -1168.2637f, -2508.715f, 12.9455f, 70.7735f, true, true);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_270, true);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_271, true);
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_AirWorker"));
											iLocal_391 = 1;
										}
									}
								}
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 58000f)
								{
									if (!PED::IS_PED_INJURED(iLocal_270))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_270, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0f, false, false, false);
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_271))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_271, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0f, false, false, false);
											}
										}
									}
									iLocal_392 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
				{
					if (!PED::IS_PED_INJURED(iLocal_270))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
							{
								if (!PED::IS_PED_INJURED(iLocal_271))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
									{
										STREAMING::REMOVE_ANIM_DICT("misstrevor4");
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_270);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_271);
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[8]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[8]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 50200f)
										{
											if (iLocal_328 == 0)
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_204[8], 1f);
												if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_204[8], 1) < 100f)
												{
													MISC::SET_TIME_SCALE(0.3f);
													iLocal_366 = 0;
													if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
													{
														AUDIO::START_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
													}
													CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_204[8], 0f, 0f, 0f, true, 1500, 500, 100);
												}
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_204[8], true, 1);
												VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_204[8], 1, false);
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_255, "Trevor_4_747_Flying_Car", iLocal_204[8], 0, false, 0);
												SYSTEM::SETTIMERB(0);
												iLocal_328 = 1;
											}
										}
										if (iLocal_328 == 1)
										{
											if (SYSTEM::TIMERB() > 662)
											{
												if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
												{
													AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
												}
												MISC::SET_TIME_SCALE(1f);
												iLocal_366 = 1;
											}
											if (SYSTEM::TIMERB() > 1872)
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[8]);
											}
										}
									}
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 50200f)
									{
										if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_204[8]))
										{
											if (iLocal_378 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_255, "Trevor_4_747_Carsplosion", iLocal_204[8], 0, false, 0);
												VEHICLE::EXPLODE_VEHICLE(iLocal_204[8], true, false);
												iLocal_378 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_366 == 0)
					{
						if (iLocal_328 == 1)
						{
							if (SYSTEM::TIMERB() > 662)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
								{
									AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
								}
								MISC::SET_TIME_SCALE(1f);
								iLocal_366 = 1;
							}
						}
					}
				}
				else if (iLocal_366 == 0)
				{
					if (iLocal_328 == 1)
					{
						if (SYSTEM::TIMERB() > 662)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
							}
							MISC::SET_TIME_SCALE(1f);
							iLocal_366 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[11]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[11], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[11]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 82683f)
										{
											if (iLocal_329 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_257, "Trevor_4_747_Flying_Car", iLocal_204[11], 0, false, 0);
												iLocal_329 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_329 == 1)
											{
												if (SYSTEM::TIMERB() > 1872)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_204[11]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_329 == 1)
						{
							if (iLocal_379 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_204[11]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_257, "Trevor_4_747_Carsplosion", iLocal_204[11], 0, false, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_204[11], true, false);
									iLocal_379 = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[12]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[12], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[12]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 82463f)
										{
											if (iLocal_330 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_258, "Trevor_4_747_Flying_Car", iLocal_204[12], 0, false, 0);
												iLocal_330 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_330 == 1)
											{
												if (SYSTEM::TIMERB() > 1000)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_204[12]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_463 == 0)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[12]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_204[12]) > 22216f && __LIB_0__::func_76(iLocal_279, iLocal_204[12], 1) < 90f)
									{
										MISC::SET_TIME_SCALE(0.3f);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_204[12], 0f, 0f, 0f, true, 2000, 1000, 500);
										iLocal_245 = MISC::GET_GAME_TIMER();
										iLocal_463 = 1;
									}
								}
							}
						}
						else if (iLocal_330 == 1)
						{
							if (iLocal_380 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_204[12]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_258, "Trevor_4_747_Carsplosion", iLocal_204[12], 0, false, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_204[12], true, false);
									iLocal_380 = 1;
								}
							}
						}
					}
				}
				if (iLocal_463 == 1)
				{
				}
				if (iLocal_462 == 0 && iLocal_463 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[12]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[12], false))
						{
							Local_317 = { ENTITY::GET_ENTITY_COORDS(iLocal_204[12], true) };
						}
					}
					Local_318 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (MISC::GET_GAME_TIMER() > iLocal_245 + 1579 || Local_318.f_1 < Local_317.f_1)
					{
						MISC::SET_TIME_SCALE(1f);
						CAM::STOP_GAMEPLAY_HINT(false);
						iLocal_462 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 105000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 113000f)
							{
								STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[13]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[13], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[13]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 108830f)
										{
											VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_204[13], false);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_204[13], true, 1);
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_204[13], false);
											SYSTEM::SETTIMERA(0);
											iLocal_431 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_431 == 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iLocal_204[13], 0, 0);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_204[13], true);
							ENTITY::SET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[13], -1, false), 0, 0);
						}
					}
				}
				if (iLocal_427 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[5]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[5], false))
						{
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_204[5], 0);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_204[5], true);
							iLocal_427 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[15]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[15], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[15]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 104989f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[15]);
											func_276(iLocal_204[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_276(iLocal_204[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											VEHICLE::EXPLODE_VEHICLE(iLocal_204[15], true, false);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
											AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Carsplosion", iLocal_204[15], 0, false, 0);
											AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 112000f)
							{
								TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
								STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
								STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
								iLocal_224 = 1;
							}
						}
					}
				}
				break;
			case 1:
				if (iLocal_439 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.15607f, -2957.1062f, 12.467661f, -848.10803f, -2997.5876f, 18.234352f, 5f, false, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_288[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_288[0], false))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_288[0], 0f);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_288[0]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_275[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_275[0]);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_275[0]));
					}
				}
				if (iLocal_394 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 115000f)
								{
									TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
									STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
									if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
									{
										STREAMING::NEW_LOAD_SCENE_START_SPHERE(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_394 = 1;
								}
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 120000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
									}
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_278);
								}
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 125513f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_278);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_278, true);
									func_275();
									PED::CLEAR_PED_NON_CREATION_AREA();
									PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, true, 0);
									AUDIO::STOP_AUDIO_SCENE("TREVOR_4_MAIN_CHASE");
									if (!CAM::DOES_CAM_EXIST(iLocal_303))
									{
										iLocal_303 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!CAM::DOES_CAM_EXIST(iLocal_302))
									{
										iLocal_302 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_236 = MISC::GET_GAME_TIMER();
									CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
									MISC::SET_INSTANCE_PRIORITY_HINT(0);
									iLocal_224 = 2;
								}
							}
						}
					}
				}
				break;
			case 2:
				Local_318 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_278);
				if (iLocal_439 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.15607f, -2957.1062f, 12.467661f, -848.10803f, -2997.5876f, 18.234352f, 5f, false, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (iLocal_405 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, -930.7f, -2916.9f, 13.4f, true) < 45f)
					{
						iLocal_224 = 3;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278))
						{
							if (iLocal_439 == 1)
							{
								iLocal_224 = 3;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_236 + 5000 && iLocal_439 == 1)
					{
						iLocal_224 = 3;
					}
				}
				break;
			case 3:
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_278);
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_415 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
								{
									if (!PED::IS_PED_INJURED(iLocal_264))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_295))
										{
											if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01")))
											{
												iLocal_295 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_295, iLocal_264, PED::GET_PED_BONE_INDEX(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
											}
										}
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_278, false);
											iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_278, iLocal_250, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_264, iLocal_250, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_250, false);
											AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_417 == 0)
				{
					if (iLocal_415 == 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_264))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_264, -937.6656f, -2927.864f, 12.770065f, -934.8479f, -2929.4836f, 14.465233f, 1.5f, false, true, 0))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_264, -1000f, true);
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_264);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, true);
								ENTITY::SET_ENTITY_COORDS(iLocal_264, -934.8388f, -2932.8306f, 12.9649f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_264, 236.5739f);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
								if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
								{
									TASK::TASK_PLAY_ANIM(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
								}
								iLocal_417 = 1;
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (iLocal_425 == 0)
					{
						if (iLocal_424 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_264))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.18f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -930.7f, -2916.9f, 13.4f, true) < 10f)
									{
										iLocal_225 = 0;
										iLocal_424 = 1;
									}
								}
							}
						}
						while (iLocal_424 == 1)
						{
							RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
							switch (iLocal_225)
							{
								case 0:
									CAM::SET_CAM_PARAMS(iLocal_303, -927.08514f, -2921.1733f, 13.663039f, 1.738541f, 1.294743f, 28.057985f, 34.664043f, 0, 1, 1, 2);
									CAM::SET_CAM_PARAMS(iLocal_302, -927.08514f, -2921.1733f, 13.663039f, 1.738541f, 1.294742f, 32.599148f, 34.664043f, 0, 1, 1, 2);
									CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_302, iLocal_303, 4000, 1, 1);
									HUD::DISPLAY_RADAR(false);
									HUD::DISPLAY_HUD(false);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_287))
									{
										VEHICLE::DELETE_VEHICLE(&iLocal_287);
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -918.6157f, -2926.6455f, 12.9667f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 47.9465f);
									}
									else
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -918.6157f, -2926.6455f, 12.9667f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 47.9465f);
									}
									if (!PED::IS_PED_INJURED(iLocal_264))
									{
										__LIB_0__::func_222(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
										PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_264, true);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 0f, 3);
									RECORDING::REPLAY_START_EVENT(4);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									iLocal_451 = 0;
									iLocal_225++;
									break;
								case 1:
									if (!PED::IS_PED_INJURED(iLocal_264))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_451 == 0)
											{
												if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.3f)
												{
													if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 7f, 4);
														iLocal_451 = 1;
													}
												}
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.5f)
											{
												CAM::SET_CAM_PARAMS(iLocal_303, -926.0932f, -2916.891f, 14.470739f, -3.471637f, 1.294743f, 125.83152f, 34.664043f, 0, 1, 1, 2);
												CAM::SET_CAM_PARAMS(iLocal_302, -926.0932f, -2916.891f, 14.470739f, -3.471636f, 1.294743f, 135.4584f, 34.664043f, 0, 1, 1, 2);
												CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_302, iLocal_303, 4000, 1, 1);
												iLocal_248 = MISC::GET_GAME_TIMER();
												iLocal_225++;
											}
										}
									}
									break;
								case 2:
									if (!PED::IS_PED_INJURED(iLocal_264))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_248 != -1 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_248) >= 2230)
											{
												GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
												iLocal_248 = -1;
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.85f)
											{
												HUD::DISPLAY_HUD(true);
												HUD::DISPLAY_RADAR(true);
												CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
												CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
												iLocal_262 = 346732587;
												OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_262, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.1853f, 14.0945f, true, true, false);
												OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_262, 1f, false, true);
												PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0);
													if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
													{
														PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
													}
												}
												PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_264, false);
												RECORDING::REPLAY_STOP_EVENT();
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 4f, 3);
												iLocal_237 = MISC::GET_GAME_TIMER();
												iLocal_424 = 0;
												iLocal_425 = 1;
												iLocal_225++;
											}
										}
									}
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
				if (iLocal_425 == 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_262, 5, false, true);
					if (iLocal_468 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
						{
							if (!PED::IS_PED_INJURED(iLocal_264))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_264, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, false, true, 0))
								{
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, false, 0, false);
									iLocal_468 = 1;
								}
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_260();
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -929.7908f, -2928.2134f, 12.19499f, -935.72833f, -2924.685f, 15.448324f, 4.75f, false, true, 1))
				{
					if (iLocal_417 == 0)
					{
						if (!PED::IS_PED_INJURED(iLocal_264))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_264, -1000f, true);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_264);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, true);
							ENTITY::SET_ENTITY_COORDS(iLocal_264, -934.8388f, -2932.8306f, 12.9649f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_264, 236.5739f);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
							if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
							{
								TASK::TASK_PLAY_ANIM(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
							}
							iLocal_417 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_284);
					}
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 5;
				}
				break;
			}
	}
}

void func_260()//Position - 0x1953B
{
	if (iLocal_401 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[14], false))
			{
				iLocal_272 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[14], -1, false);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_272, joaat("WEAPON_PISTOL"), 1000, true, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_272, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_272, true);
				PED::SET_PED_ACCURACY(iLocal_272, 5);
				ENTITY::SET_ENTITY_HEALTH(iLocal_272, 150, 0);
				__LIB_0__::func_222(&uLocal_490, 3, iLocal_272, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_401 = 1;
	}
	else if (iLocal_400 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
		{
			if (!PED::IS_PED_INJURED(iLocal_272))
			{
				TASK::CLEAR_PED_TASKS(iLocal_272);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_272, ENTITY::GET_ENTITY_COORDS(iLocal_272, true), 5f, false, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, true);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_272, iLocal_304);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
				iLocal_400 = 1;
			}
		}
	}
	else if (iLocal_434 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
		{
			if (!PED::IS_PED_INJURED(iLocal_272))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_272, false) && __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_272) < 20f)
				{
					if (!__LIB_0__::func_75())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							__LIB_0__::func_222(&uLocal_490, 4, iLocal_272, "SOL3COP", 0, 1);
							if (__LIB_14__::func_535(&uLocal_490, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_434 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_275()//Position - 0x19DE9
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_667[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[0], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_667[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[1], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_667[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[2], false);
	}
	if (iLocal_381 == 1)
	{
		AUDIO::RELEASE_SOUND_ID(iLocal_259);
		iLocal_389 = 0;
	}
}

void func_276(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x19E4B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (bParam4)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var2 = { __LIB_0__::func_79(Var0 - Var1) };
		Var2 = { Var2 * Vector(fParam3, fParam3, fParam3) };
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, Var2, Param2, 0, false, true, true, false, true);
	}
}

void func_278(int iParam0, float fParam1)//Position - 0x19F07
{
	int iVar0;
	struct<3> Var1;
	if (iLocal_166 < 15)
	{
		if (iLocal_166 == 0)
		{
			Local_181 = { 99999.9f, 99999.9f, 99999.9f };
			Local_182 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
				Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_166 - 1)) * 2000f))) };
				if (Var1.f_0 < Local_181.f_0)
				{
					Local_181.f_0 = Var1.f_0;
				}
				if (Var1.f_1 < Local_181.f_1)
				{
					Local_181.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_181.f_2)
				{
					Local_181.f_2 = Var1.f_2;
				}
				if (Var1.f_0 > Local_182.f_0)
				{
					Local_182.f_0 = Var1.f_0;
				}
				if (Var1.f_1 > Local_182.f_1)
				{
					Local_182.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_182.f_2)
				{
					Local_182.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_166++;
	}
	else if (!bLocal_106)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_181 = { Local_181 + Vector((fLocal_148 * -1f), (fLocal_148 * -1f), (fLocal_148 * -1f)) };
		Local_182 = { Local_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
		Local_179 = { Local_181 };
		Local_180 = { Local_182 };
		PATHFIND::SET_ROADS_IN_AREA(Local_179, Local_180, false, false);
		iLocal_166 = 0;
	}
}

void func_279()//Position - 0x1A07B
{
	iLocal_89 = 1;
}

void func_280()//Position - 0x1A086
{
	if (iLocal_331 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 55000f)
				{
					STREAMING::REQUEST_MODEL(joaat("firetruk"));
					STREAMING::REQUEST_MODEL(joaat("S_M_Y_Fireman_01"));
					STREAMING::REQUEST_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
					if ((STREAMING::HAS_MODEL_LOADED(joaat("firetruk")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Fireman_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3aig_lift_waitped_a"))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_282))
						{
							MISC::CLEAR_AREA(-1129.5664f, -2319.8877f, 12.9445f, 10f, false, false, false, false);
							iLocal_282 = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -1129.5664f, -2319.8877f, 12.9445f, 16.5423f, true, true, false);
						}
						iLocal_667[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1f, false, false, false, false);
						if (iLocal_381 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_259, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, false, 0, false);
							iLocal_381 = 1;
						}
						iLocal_667[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1f, false, false, false, false);
						iLocal_667[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1f, false, false, false, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265[0]))
						{
							iLocal_265[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_282, 21, joaat("S_M_Y_Fireman_01"), -1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265[0], true);
							PED::SET_PED_KEEP_TASK(iLocal_265[0], true);
							TASK::TASK_VEHICLE_SHOOT_AT_COORD(iLocal_265[0], -1147.07f, -2320.65f, 18.93f, 20f);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265[1]))
						{
							iLocal_265[1] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), -1138.3129f, -2313.2773f, 12.9445f, 155.4271f, true, true);
							TASK::TASK_PLAY_ANIM(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0f, false, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265[1], true);
							PED::SET_PED_KEEP_TASK(iLocal_265[1], true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265[2]))
						{
							iLocal_265[2] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), -1145.3617f, -2309.387f, 12.9445f, 96.0786f, true, true);
							TASK::TASK_PLAY_ANIM(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0f, false, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265[2], true);
							PED::SET_PED_KEEP_TASK(iLocal_265[2], true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265[3]))
						{
							iLocal_265[3] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), -1147.4609f, -2314.5107f, 13.1518f, 57.8707f, true, true);
							TASK::TASK_PLAY_ANIM(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0f, false, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265[3], true);
							PED::SET_PED_KEEP_TASK(iLocal_265[3], true);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Fireman_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
						iLocal_331 = 1;
					}
				}
			}
		}
	}
	if (iLocal_331 == 1)
	{
		if (iLocal_465[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_265[1]))
				{
					if (iLocal_466[0] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_466[0] = 1;
						}
					}
					if (iLocal_466[0] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							TASK::TASK_COWER(iLocal_265[1], -1);
							PED::SET_PED_KEEP_TASK(iLocal_265[1], true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265[1], false);
							iLocal_465[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[1] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_265[2]))
				{
					if (iLocal_466[1] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_466[1] = 1;
						}
					}
					if (iLocal_466[1] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							TASK::TASK_COWER(iLocal_265[2], -1);
							PED::SET_PED_KEEP_TASK(iLocal_265[2], true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265[2], false);
							iLocal_465[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[2] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[3]))
			{
				if (!PED::IS_PED_INJURED(iLocal_265[3]))
				{
					if (iLocal_466[2] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_466[2] = 1;
						}
					}
					if (iLocal_466[2] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							TASK::TASK_COWER(iLocal_265[3], -1);
							PED::SET_PED_KEEP_TASK(iLocal_265[3], true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265[3], false);
							iLocal_465[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_281()//Position - 0x1A567
{
	if (iLocal_402 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_AIChase");
		if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01")))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 15500f)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_288[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -847.2593f, -2379.9868f, 15.9304f, 196.4921f, true, true, false);
						iLocal_275[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_288[0], 6, joaat("S_M_Y_Cop_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_275[0], true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_288[0], "SOL_3_POLICE_CARS_Group", 0f);
						__LIB_0__::func_609(iLocal_275[0], 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_288[0], true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_288[0], 1, "BB_AIChase", true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_275[0], joaat("WEAPON_PISTOL"), 1000, true, true);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_288[0], true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
						iLocal_402 = 1;
					}
				}
			}
		}
	}
	if (iLocal_402 == 1)
	{
		if (iLocal_429[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_288[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_288[0], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_288[0]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_288[0], fLocal_321);
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_288[0]) > 13000f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_288[0]);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_275[0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_275[0], true);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								TASK::TASK_VEHICLE_CHASE(iLocal_275[0], PLAYER::PLAYER_PED_ID());
								PED::SET_PED_KEEP_TASK(iLocal_275[0], true);
							}
							else
							{
								TASK::TASK_COMBAT_PED(iLocal_275[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_PED_KEEP_TASK(iLocal_275[0], true);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_AIChase");
							iLocal_238 = MISC::GET_GAME_TIMER();
							iLocal_429[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_430[0] == 0)
		{
			if (iLocal_429[0] == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_238 + 500)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_275[0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_275[0], 16, true);
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_275[0], 1, true);
								iLocal_430[0] = 1;
							}
							else
							{
								iLocal_430[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_282()//Position - 0x1A7F2
{
	if (!iLocal_333)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[20], false))
		{
			iLocal_301 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::SET_CAM_ACTIVE(iLocal_301, true);
			iLocal_334 = 0;
			iLocal_333 = 1;
		}
	}
	else if (__LIB_13__::func_796(&uLocal_28, 1, 0, 0) && iLocal_405 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_75())
		{
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_429();
		}
		if (iLocal_363[2] == 0)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_261, "Trevor_4_747_TV", 0, true);
			iLocal_363[2] = 1;
		}
		func_288(1, 1, 30, 5, 0);
		if (iLocal_352 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_TEXT");
			__LIB_0__::func_610("TRV4_NEWS1");
			__LIB_0__::func_610("");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_352 = 1;
		}
		if (iLocal_353 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			__LIB_0__::func_610("TRV4_NEWS2");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			__LIB_0__::func_610("TRV4_NEWS6");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			__LIB_0__::func_610("TRV4_NEWS7");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
			__LIB_0__::func_610("TRV4_NEWS8");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
			__LIB_0__::func_610("TRV4_NEWS9");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
			__LIB_0__::func_610("TRV4_NEWS10");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "DISPLAY_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_243 = (MISC::GET_GAME_TIMER() - 5000);
			iLocal_353 = 1;
		}
		if (MISC::GET_GAME_TIMER() > iLocal_243 + 5000)
		{
			func_286();
			iLocal_243 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_354 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 50000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						__LIB_0__::func_610("TRV4_NEWS5");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_354 = 1;
					}
				}
			}
		}
		if (iLocal_355 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 77600f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						__LIB_0__::func_610("TRV4_NEWS3");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_355 = 1;
					}
				}
			}
		}
		if (iLocal_356 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						__LIB_0__::func_610("TRV4_NEWS4");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_356 = 1;
					}
				}
			}
		}
		HUD::SET_TEXT_RENDER_ID(iLocal_226);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_305, 255, 255, 255, 0, 0);
		if (iLocal_334 == 0)
		{
			__LIB_0__::func_963(1, 1, 1, 0);
			CAM::SHAKE_CAM(iLocal_301, "ROAD_VIBRATION_SHAKE", 1f);
			CAM::SET_CAM_ACTIVE(iLocal_301, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			__LIB_17__::func_60();
			iLocal_334 = 1;
		}
		__LIB_0__::func_646();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
	}
	else if (iLocal_334)
	{
		__LIB_0__::func_963(0, 1, 1, 0);
		CAM::SET_CAM_ACTIVE(iLocal_301, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::DISPLAY_RADAR(true);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
		}
		AUDIO::STOP_SOUND(iLocal_261);
		__LIB_17__::func_59();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		iLocal_363[2] = 0;
		iLocal_334 = 0;
	}
}

void func_286()//Position - 0x1AC5D
{
	if (iLocal_228 > 4)
	{
		iLocal_228 = 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_305, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_228);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_228++;
}

void func_288(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1ACA6
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_295(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_292(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_292(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_289(1, 40, 1, 1, 1);
		}
	}
}

void func_289(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1AD74
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_291(0))
			{
				func_290(0);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_291(1))
			{
				func_290(1);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_291(2))
			{
				func_290(2);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_290(int iParam0)//Position - 0x1AE7E
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&uLocal_54, iParam0);
	}
}

int func_291(bool bParam0)//Position - 0x1AE98
{
	if (BitTest(uLocal_54, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_292(bool bParam0, int iParam1)//Position - 0x1AEAD
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		iLocal_46 = func_294(5);
		iLocal_45 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_294(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_291(3))
			{
				func_290(3);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_40)), (1f * __LIB_40__::func_480(bLocal_41)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_291(4))
			{
				func_290(4);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_40)), (1f * __LIB_40__::func_480(bLocal_41)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_291(5))
			{
				func_290(5);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_40)), (1f * __LIB_40__::func_480(bLocal_41)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_291(6))
			{
				func_290(6);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_40)), (1f * __LIB_40__::func_480(bLocal_41)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_291(7))
			{
				func_290(7);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * __LIB_40__::func_480(bLocal_40)), (1f * __LIB_40__::func_480(bLocal_41)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
	}
}

int func_294(int iParam0)//Position - 0x1B061
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0);
}

void func_295(bool bParam0, int iParam1)//Position - 0x1B09A
{
	if (!__LIB_39__::func_398())
	{
		__LIB_39__::func_398();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_291(8))
			{
				func_290(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_291(8))
			{
				func_290(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			iLocal_42 = 1;
		}
	}
}

void func_322()//Position - 0x1BCF6
{
	if (iLocal_260 != -1)
	{
		if (iLocal_382 == 1)
		{
			if (iLocal_374 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_260);
				iLocal_384 = 0;
				iLocal_374 = 1;
			}
		}
	}
	if (iLocal_255 != -1)
	{
		if (iLocal_378 == 1)
		{
			if (iLocal_376 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_255);
				iLocal_385 = 0;
				iLocal_376 = 1;
			}
		}
	}
	if (iLocal_256 != -1)
	{
		if (iLocal_383 == 1)
		{
			if (iLocal_365 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_256);
				iLocal_386 = 0;
				iLocal_365 = 1;
			}
		}
	}
	if (iLocal_257 != -1)
	{
		if (iLocal_379 == 1)
		{
			if (iLocal_375 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_257);
				iLocal_387 = 0;
				iLocal_375 = 1;
			}
		}
	}
	if (iLocal_258 != -1)
	{
		if (iLocal_380 == 1)
		{
			if (iLocal_377 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_258);
				iLocal_388 = 0;
				iLocal_377 = 1;
			}
		}
	}
}

void func_323()//Position - 0x1BDB2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[19]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[19], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[19]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[19], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[7]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[7], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[7]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[7], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[8]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[8], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[8]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[8], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[9]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[9], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[9]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[9], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[10]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[10], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[10]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[10], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[11]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[11], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[11]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[11], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[13]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[13], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[13]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[13], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[14]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[14], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[14]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[14], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[15]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[15], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[15]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[15], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[16]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[16], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[16]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[16], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[17]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[17], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_204[17]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_204[17], true);
			}
		}
	}
}

void func_324()//Position - 0x1C02C
{
	if (func_355())
	{
		fLocal_322 = 0.5f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 40f)
		{
			fLocal_322 = 0.85f;
		}
		else
		{
			fLocal_322 = 0.9f;
		}
	}
	else
	{
		fLocal_322 = 0.9f;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_278, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
			{
				if (iLocal_357 == 0)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 10000f)
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_278, 1) < 100f || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278))
						{
							func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
						else
						{
							func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
					}
				}
				else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_278, 1) > 175f)
				{
					fLocal_321 = 0.6f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
					func_325(iLocal_278, fLocal_321);
				}
				else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 10000f)
				{
					func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_322, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
					func_325(iLocal_278, fLocal_321);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 10000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 23000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
					{
						func_351(iLocal_204[8], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_322, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
					else
					{
						func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_322, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 23000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 32000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[7], false))
						{
							func_351(iLocal_204[7], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[8]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
							{
								func_351(iLocal_204[8], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
								func_325(iLocal_278, fLocal_321);
							}
							else
							{
								func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
								func_325(iLocal_278, fLocal_321);
							}
						}
						else
						{
							func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[8]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
						{
							func_351(iLocal_204[8], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
						else
						{
							func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 32000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 39000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[7], false))
						{
							func_351(iLocal_204[7], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_322, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
						else
						{
							func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 39000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 56000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
					{
						func_351(iLocal_204[8], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
					else
					{
						func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_322, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 56000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 65000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[11], false))
					{
						func_351(iLocal_204[11], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
					else
					{
						func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_322, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 65000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 90000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[13]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[13], false))
						{
							func_351(iLocal_204[13], PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
						else
						{
							func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
							func_325(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
						func_325(iLocal_278, fLocal_321);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 90000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 110000f)
				{
					func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_322, 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
					func_325(iLocal_278, fLocal_321);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 110000f)
				{
					func_351(iLocal_278, PLAYER::PLAYER_PED_ID(), &fLocal_321, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_322, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_278, fLocal_321);
					func_325(iLocal_278, fLocal_321);
				}
			}
		}
	}
}

void func_325(int iParam0, float fParam1)//Position - 0x1C8E3
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			__LIB_15__::func_907();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		__LIB_15__::func_912();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_133 = 0f;
		}
		else
		{
			fLocal_133 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_927(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_130 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_131) * fLocal_133));
				if (bLocal_85)
				{
					func_348(iParam0, fLocal_130);
					func_347(iParam0, fLocal_140);
					if (fLocal_135 > 1000f)
					{
						if (iLocal_172 == 0)
						{
							func_346(iParam0, fLocal_140);
						}
						fVar0 = ((fLocal_130 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_172) * 2000f));
						func_345(iParam0, fVar0, fLocal_134);
						iLocal_172++;
						if (iLocal_172 > 2)
						{
							fLocal_135 = 0f;
						}
					}
					else
					{
						iLocal_172 = 0;
						fLocal_135 = (fLocal_135 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_130 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_342(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_341(iParam0);
			}
			if (!iLocal_75)
			{
				func_328(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
			}
		}
		if (iLocal_83)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_206 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_176 = { ENTITY::GET_ENTITY_COORDS(iLocal_206, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_206, &fLocal_114, &fLocal_115, &fLocal_116, &fLocal_117);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_206))
			{
				__LIB_15__::func_908(iLocal_207);
				iLocal_207 = iLocal_206;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_207, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_207, Local_176, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_207, fLocal_114, fLocal_115, fLocal_116, fLocal_117);
			}
			fLocal_129 = fLocal_132;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_326(&iParam0, fLocal_129))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_326(int iParam0, float fParam1)//Position - 0x1CB7E
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_208();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_159 == -1)
			{
				while (!func_327(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_133 = 0f;
					iLocal_160 = 0;
					iLocal_162 = 0;
					iLocal_161 = 0;
					iLocal_156 = 0;
					iLocal_157 = 0;
					iLocal_158 = 0;
					iLocal_163 = 0;
					iLocal_164 = 0;
					iLocal_165 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_131) * fLocal_133));
				func_327(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_130 = fParam1;
		iLocal_166 = 0;
		iLocal_169 = 0;
		fLocal_145 = 0f;
		fLocal_144 = 0f;
		func_328(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_342(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_341(*iParam0);
		if ((iLocal_163 == 0 && iLocal_164 == 0) && iLocal_165 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

int func_327(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1CCB0
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_185);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_185))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_185, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_185, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_185, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_185))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_185);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_185, 10f, 786603);
					}
					else if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_185, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_185, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_328(int iParam0, float fParam1, bool bParam2)//Position - 0x1CE96
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bVar9 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar10 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar11 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar12 = false;
	if (bVar9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = iLocal_162;
		while (iVar0 < 35)
		{
			if (iLocal_153[iVar0] != 99)
			{
				if (iLocal_153[iVar0] == 0)
				{
					if (iLocal_152[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 > (fLocal_122[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_896(iLocal_197[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_154[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_197[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_154[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_154[iVar0]), 1);
								iLocal_153[iVar0]++;
								iLocal_164++;
							}
						}
						else
						{
							fVar6 = (fLocal_130 - fLocal_122[iVar0]);
							fVar6 = (fVar6 * fLocal_123[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_339(iLocal_152[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_197[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_154[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_197[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_154[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_154[iVar0]), 1);
									iLocal_153[iVar0]++;
									iLocal_164++;
								}
								else
								{
									iLocal_153[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_153[iVar0] = 99;
					}
				}
				else if (iLocal_153[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_152[iVar0], &cLocal_185);
					if (BitTest(iLocal_154[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
					}
					else if (!bLocal_102 && ((!BitTest(iLocal_154[iVar0], 2) && bVar10) || (BitTest(iLocal_154[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_39__::func_397());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_39__::func_397());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_204[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_197[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_197[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 >= (fLocal_122[iVar0] - (fLocal_143 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_338(Local_175[iVar0 /*3*/], Var5, 5f, fLocal_141)))
									{
										if (bLocal_85)
										{
											func_337(Local_175[iVar0 /*3*/], Var5, fLocal_134);
										}
										iLocal_204[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_197[iVar0], Local_175[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_197[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_204[iVar0], 0);
										}
										if (uLocal_98 && !BitTest(iLocal_154[iVar0], 0))
										{
											func_336(iLocal_204[iVar0]);
										}
										if (BitTest(iLocal_154[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_204[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_204[iVar0], Local_175[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_197[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_197[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_204[iVar0], 5f);
										}
										if (!BitTest(iLocal_154[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_204[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_204[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_204[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_197[iVar0]);
										iLocal_164 = (iLocal_164 - 1);
										iLocal_153[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_204[iVar0], Local_175[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_197[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_197[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_204[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_204[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_197[iVar0]);
							iLocal_164 = (iLocal_164 - 1);
							iLocal_153[iVar0]++;
						}
					}
				}
				else if (iLocal_153[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_152[iVar0], &cLocal_185);
					if (!BitTest(iLocal_154[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_154[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
							iVar13 = 2;
						}
						else if (!bLocal_102 && ((!BitTest(iLocal_154[iVar0], 2) && bVar10) || (BitTest(iLocal_154[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(__LIB_39__::func_397());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_39__::func_397());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[iVar0], false))
						{
							if (!bLocal_106 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_204[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_204[iVar0], true), Var5) < 10000f || bParam2) || iLocal_89)
									{
										func_334(&(iLocal_204[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_154[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
					{
						if (fLocal_130 >= fLocal_122[iVar0])
						{
							if (14 > iLocal_157)
							{
								fVar6 = (fLocal_130 - fLocal_122[iVar0]);
								fVar6 = (fVar6 * fLocal_123[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_152[iVar0], &cLocal_185))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_152[iVar0], &cLocal_185))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_204[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_152[iVar0], fVar6, &cLocal_185) };
										if (((!func_338(Var3, Var5, 5f, fLocal_141) && func_338(Var4, Var5, 5f, fLocal_141)) && !iLocal_89) && !bParam2)
										{
											if (!BitTest(iLocal_154[iVar0], 1))
											{
												func_334(&(iLocal_204[iVar0]), iVar13, 1);
											}
											iLocal_157++;
											iLocal_153[iVar0]++;
										}
										else if (((!bLocal_106 || BitTest(iLocal_154[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_327(&(iLocal_204[iVar0]), iLocal_152[iVar0], fVar6, 1, 0, 0, bLocal_104, bLocal_103))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
												{
													if (BitTest(iLocal_154[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_204[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_204[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_204[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_197[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_204[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_154[iVar0], 1))
												{
													func_334(&(iLocal_204[iVar0]), iVar13, 1);
												}
												iLocal_157++;
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_154[iVar0], 1))
										{
											func_334(&(iLocal_204[iVar0]), iVar13, 1);
										}
										iLocal_157++;
										iLocal_153[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_154[iVar0], 1))
								{
									func_334(&(iLocal_204[iVar0]), iVar13, 1);
								}
								iLocal_157++;
								iLocal_153[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_154[iVar0], 1))
						{
							func_334(&(iLocal_204[iVar0]), iVar13, 1);
						}
						iLocal_157++;
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_204[iVar0])) || func_333(iLocal_204[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_97)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_204[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_925(iLocal_204[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_941(iVar2, iLocal_204[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_329(iLocal_204[iVar0]);
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[iVar0]);
							}
						}
						else
						{
							iLocal_153[iVar0]++;
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[iVar0]))
						{
							iLocal_153[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_122[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_152[iVar0], &cLocal_185)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[iVar0]);
							}
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 5)
				{
					if (!iLocal_204[iVar0] == iLocal_208)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_204[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_152[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_152[iVar0], &cLocal_185);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								__LIB_15__::func_908(iLocal_204[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_204[iVar0]));
						}
					}
					iLocal_157 = (iLocal_157 - 1);
					iLocal_153[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_162 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_212();
	}
}

void func_329(int iParam0)//Position - 0x1DA74
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_214(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_333(int iParam0)//Position - 0x1DBD7
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_101)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_334(var uParam0, int iParam1, bool bParam2)//Position - 0x1DC35
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_15__::func_909(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_194);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, true);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, true, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, __LIB_39__::func_397(), -1, false, false);
				if (bLocal_107)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_397());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_108)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_15__::func_895(iVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_336(int iParam0)//Position - 0x1DD43
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_199 >= -1 && iLocal_200 >= -1)
	{
		while (iVar0 == iLocal_199 || iVar0 == iLocal_200)
		{
			iVar0++;
		}
	}
	else if (iLocal_199 >= -1)
	{
		if (iVar0 == iLocal_199)
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

void func_337(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x1DEBC
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_338(Param0, Param1, fParam2, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam2, fParam2, fParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam2, false, false, false, false, false, false, 0);
			}
		}
	}
}

int func_338(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x1DF2F
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
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

float func_339(int iParam0)//Position - 0x1DF76
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_185);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_185))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_185);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_185);
	return fVar0;
}

void func_341(int iParam0)//Position - 0x1E02C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_161;
		while (iVar0 < 15)
		{
			switch (iLocal_155[iVar0])
			{
				case 0:
					if (!iLocal_196[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_174[iVar0 /*3*/], fLocal_128, fLocal_128, fLocal_128, false, true, 0))
						{
							iLocal_163++;
							iLocal_155[iVar0]++;
						}
					}
					else
					{
						iLocal_155[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_158)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_196[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_196[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_338(Local_174[iVar0 /*3*/], Var1, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_337(Local_174[iVar0 /*3*/], Var1, fLocal_134);
									}
									iLocal_203[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_196[iVar0], Local_174[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_196[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_203[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_203[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0], fLocal_127[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_196[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_203[iVar0], __LIB_15__::func_910()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_203[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_196[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_203[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_203[iVar0], __LIB_15__::func_911()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_203[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_203[iVar0], true);
									iLocal_163 = (iLocal_163 - 1);
									iLocal_158++;
									iLocal_155[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_163 = (iLocal_163 - 1);
							iLocal_158++;
							iLocal_155[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[iVar0], true) };
						}
						if (fLocal_142 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_142 * fLocal_142))
						{
							if (!__LIB_15__::func_941(iLocal_203[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									__LIB_15__::func_908(iLocal_203[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_203[iVar0]));
								}
								iLocal_158 = (iLocal_158 - 1);
								iLocal_155[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_155[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_161 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_215();
	}
}

void func_342(int iParam0, float fParam1, int iParam2)//Position - 0x1E323
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	iVar5 = 0;
	bVar12 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar13 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar14 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_130 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_160;
		while (iVar0 < 175 && !bVar17)
		{
			if (iLocal_150[iVar0] != 99)
			{
				if (iLocal_150[iVar0] == 0)
				{
					if (iLocal_149[iVar0] > 0 && iLocal_195[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 < (fLocal_113[iVar0] + 20000f))
							{
								if (fLocal_130 >= (fLocal_113[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_896(iLocal_195[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_151[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_151[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_151[iVar0]), 1);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_344(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_130 - fLocal_113[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_339(iLocal_149[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_195[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_151[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_151[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_151[iVar0]), 1);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else
								{
									func_344(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_344(iVar0, 1090519040);
					}
				}
				else if (iLocal_150[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_149[iVar0], &cLocal_185);
					bVar11 = false;
					if (BitTest(iLocal_151[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_102 && ((!BitTest(iLocal_151[iVar0], 2) && bVar13) || (BitTest(iLocal_151[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_39__::func_397());
						bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_39__::func_397());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_201[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_195[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_195[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_149[iVar0], &cLocal_185)) && bVar11)
						{
							if (fLocal_130 >= (fLocal_113[iVar0] - (fLocal_143 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_338(Local_173[iVar0 /*3*/], Var8, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_337(Local_173[iVar0 /*3*/], Var8, fLocal_134);
									}
									iLocal_201[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_195[iVar0], Local_173[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_195[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_201[iVar0], 0);
									}
									if (uLocal_98 && !BitTest(iLocal_151[iVar0], 0))
									{
										func_336(iLocal_201[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_201[iVar0], Local_173[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_201[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_195[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_195[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_201[iVar0], 5f);
									}
									if (BitTest(iLocal_151[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_201[iVar0], true);
									}
									if (!BitTest(iLocal_151[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_201[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_201[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_201[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_201[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iVar0]);
									iLocal_165 = (iLocal_165 - 1);
									iLocal_150[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_130 > fLocal_113[iVar0])
								{
									iLocal_165 = (iLocal_165 - 1);
									func_344(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_150[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_171 || iLocal_171 == 0)) || iLocal_89) || iParam2)
					{
						if (!BitTest(iLocal_151[iVar0], 1))
						{
							if (BitTest(iLocal_151[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
								iVar15 = 2;
							}
							else if (!bLocal_102 && ((!BitTest(iLocal_151[iVar0], 2) && bVar13) || (BitTest(iLocal_151[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(__LIB_39__::func_397());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_39__::func_397());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_201[iVar0], false))
							{
								if (!bLocal_106 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_201[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_201[iVar0], true), Var8) < 10000f || iParam2) || iLocal_89)
										{
											func_334(&(iLocal_201[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_151[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_149[iVar0], &cLocal_185);
							if (fLocal_130 >= fLocal_113[iVar0])
							{
								if (12 > iLocal_156)
								{
									fVar9 = (fLocal_130 - fLocal_113[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_149[iVar0], &cLocal_185))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_149[iVar0], &cLocal_185))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_201[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_149[iVar0], fVar9, &cLocal_185) };
											if (!func_338(Var6, Var8, 5f, fLocal_141) && func_338(Var7, Var8, 5f, fLocal_141))
											{
												if (!BitTest(iLocal_151[iVar0], 1))
												{
													func_334(&(iLocal_201[iVar0]), iVar15, 0);
												}
												func_344(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || BitTest(iLocal_151[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_327(&(iLocal_201[iVar0]), iLocal_149[iVar0], fVar9, 1, 0, 0, 1, bLocal_103))
												{
													if (!BitTest(iLocal_151[iVar0], 1))
													{
														func_334(&(iLocal_201[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_201[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_201[iVar0], fParam1);
													iLocal_156++;
													iLocal_150[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_151[iVar0], 1))
											{
												func_334(&(iLocal_201[iVar0]), iVar15, 0);
											}
											func_344(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_149[iVar0], &cLocal_185))
									{
										if (!BitTest(iLocal_151[iVar0], 1))
										{
											func_334(&(iLocal_201[iVar0]), iVar15, 0);
										}
										func_344(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_151[iVar0], 1))
									{
										func_334(&(iLocal_201[iVar0]), iVar15, 0);
									}
									func_344(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!BitTest(iLocal_151[iVar0], 1))
								{
									func_334(&(iLocal_201[iVar0]), iVar15, 0);
								}
								func_344(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_151[iVar0], 1))
							{
								func_334(&(iLocal_201[iVar0]), iVar15, 0);
							}
							func_344(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_171 = iVar0;
					}
				}
				else if (iLocal_150[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_201[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_201[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_333(iLocal_201[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_170 || iLocal_170 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_926(iLocal_201[iVar0], iVar5) || __LIB_15__::func_941(iVar5, iLocal_201[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_170 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !BitTest(iLocal_151[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_170 || iLocal_170 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_201[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_170 = iVar0;
										}
									}
									if (bVar18)
									{
										func_329(iLocal_201[iVar0]);
										iLocal_150[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_201[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_201[iVar0]);
							}
						}
						else
						{
							iLocal_150[iVar0]++;
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_201[iVar0]))
						{
							iLocal_150[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_201[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_201[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_201[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_149[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_113[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_149[iVar0], &cLocal_185)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_201[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_201[iVar0]);
							}
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_201[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_201[iVar0]);
					}
					iLocal_156 = (iLocal_156 - 1);
					func_344(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_160 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_170 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_171 = 0;
		}
	}
	else
	{
		func_216();
	}
}

void func_344(int iParam0, float fParam1)//Position - 0x1EEC2
{
	int iVar0;
	if (!iLocal_195[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_195[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_201[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_201[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_201[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_201[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_201[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_108)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			__LIB_15__::func_895(iVar0);
			__LIB_15__::func_908(iLocal_201[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_201[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_201[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_149[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_149[iParam0], &cLocal_185);
		}
	}
	iLocal_150[iParam0] = 99;
}

void func_345(int iParam0, float fParam1, float fParam2)//Position - 0x1F01D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var3 = { Var2 - Var1 };
			fVar5 = SYSTEM::VMAG(Var3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_337(Var1, Var4, fVar5);
		}
	}
}

void func_346(int iParam0, float fParam1)//Position - 0x1F0A0
{
	if (!bLocal_88)
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

void func_347(int iParam0, float fParam1)//Position - 0x1F0EE
{
	if (!bLocal_88)
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

void func_348(int iParam0, float fParam1)//Position - 0x1F13C
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_144 + 2000f);
		fVar2 = (fLocal_145 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_166 == 0)
				{
					Local_181 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_144) };
					iLocal_166++;
				}
				else if (iLocal_166 == 1)
				{
					Local_182 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_166++;
				}
				else if (!bLocal_106)
				{
					if (Local_181.f_0 > Local_182.f_0)
					{
						fVar3 = Local_181.f_0;
						Local_181.f_0 = Local_182.f_0;
						Local_182.f_0 = fVar3;
					}
					if (Local_181.f_1 > Local_182.f_1)
					{
						fVar3 = Local_181.f_1;
						Local_181.f_1 = Local_182.f_1;
						Local_182.f_1 = fVar3;
					}
					if (Local_181.f_2 > Local_182.f_2)
					{
						fVar3 = Local_181.f_2;
						Local_181.f_2 = Local_182.f_2;
						Local_182.f_2 = fVar3;
					}
					Local_181 = { Local_181 - Vector(fLocal_148, fLocal_148, fLocal_148) };
					Local_182 = { Local_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
					PATHFIND::SET_ROADS_IN_AREA(Local_181, Local_182, false, false);
					fLocal_144 = fVar1;
					iLocal_166 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_169 == 0)
			{
				Local_183 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_145) };
				iLocal_169++;
			}
			else if (iLocal_169 == 1)
			{
				Local_184 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_169++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (Local_183.f_0 > Local_184.f_0)
				{
					fVar3 = Local_183.f_0;
					Local_183.f_0 = Local_184.f_0;
					Local_184.f_0 = fVar3;
				}
				if (Local_183.f_1 > Local_184.f_1)
				{
					fVar3 = Local_183.f_1;
					Local_183.f_1 = Local_184.f_1;
					Local_184.f_1 = fVar3;
				}
				if (Local_183.f_2 > Local_184.f_2)
				{
					fVar3 = Local_183.f_2;
					Local_183.f_2 = Local_184.f_2;
					Local_184.f_2 = fVar3;
				}
				Local_183 = { Local_183 - Vector(fLocal_148, fLocal_148, fLocal_148) };
				Local_184 = { Local_184 + Vector(fLocal_148, fLocal_148, fLocal_148) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_183, Local_184, 1);
				fLocal_145 = fVar2;
				iLocal_169 = 0;
			}
		}
	}
}

void func_351(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x1F477
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
	int iVar9;
	int iVar10;
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_139;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = __LIB_17__::func_498(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_15__::func_927(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (__LIB_17__::func_497(iParam0, iParam1) < fParam5)
			{
				fVar1 = __LIB_17__::func_496(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_146 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_147 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_137 - fLocal_138));
							fVar1 = (fVar1 + fLocal_138);
							fLocal_136 = fVar1;
							if (fLocal_136 < fLocal_138)
							{
								fLocal_136 = fLocal_138;
							}
							if (fLocal_136 > fLocal_137)
							{
								fLocal_136 = fLocal_137;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_136);
						}
					}
				}
			}
		}
	}
}

int func_355()//Position - 0x1F8A0
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278))
			{
				iLocal_396 = 1;
			}
			else
			{
				iLocal_396 = 0;
			}
		}
		else
		{
			iLocal_396 = 1;
		}
	}
	else
	{
		iLocal_396 = 1;
	}
	iLocal_232 = 0;
	while (iLocal_232 <= 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[iLocal_232]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[iLocal_232], false))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_204[iLocal_232]))
				{
					iLocal_397[iLocal_232] = 1;
				}
				else
				{
					iLocal_397[iLocal_232] = 0;
				}
			}
			else
			{
				iLocal_397[iLocal_232] = 1;
			}
		}
		else
		{
			iLocal_397[iLocal_232] = 1;
		}
		iLocal_232++;
	}
	if (((((((((((((((((((((((((iLocal_396 == 1 && iLocal_397[0] == 1) && iLocal_397[1] == 1) && iLocal_397[2] == 1) && iLocal_397[3] == 1) && iLocal_397[4] == 1) && iLocal_397[5] == 1) && iLocal_397[6] == 1) && iLocal_397[7] == 1) && iLocal_397[8] == 1) && iLocal_397[9] == 1) && iLocal_397[10] == 1) && iLocal_397[11] == 1) && iLocal_397[12] == 1) && iLocal_397[13] == 1) && iLocal_397[14] == 1) && iLocal_397[15] == 1) && iLocal_397[16] == 1) && iLocal_397[17] == 1) && iLocal_397[18] == 1) && iLocal_397[19] == 1) && iLocal_397[20] == 1) && iLocal_397[21] == 1) && iLocal_397[22] == 1) && iLocal_397[23] == 1) && iLocal_397[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_356()//Position - 0x1FABA
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[4], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[4]))
			{
				Local_309 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_204[4], true) };
				if (Local_309.f_0 < (Var1.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_204[4]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[4]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_204[4]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[3]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[3], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[3]))
			{
				Local_309 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_204[3], true) };
				if (Local_309.f_0 < (Var0.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_204[3]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[3]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_204[3]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[21]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[21], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[21]))
			{
				Local_309 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_204[21], true) };
				if (Local_309.f_0 < (Var2.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_204[21]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[21]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_204[21]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[0], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 50000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_204[0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_204[0]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_204[0]);
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_204[0]));
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_282, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 90000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_282))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[0], false);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[1], false);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_667[2], false);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[0]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[0]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[1]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[1]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[2]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[2]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[3]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[3]));
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_282);
							STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_358()//Position - 0x1FEE2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[2], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 50530f)
						{
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_204[2]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_204[2], true, true, false);
							}
						}
						else if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_204[2]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_204[2], false, false, false);
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[5]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[5], false))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_204[5]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_204[5], true, true, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[0], false))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_280[0]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_280[0], true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_280[0], -1, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_276[0]))
				{
					STREAMING::REQUEST_MODEL(joaat("S_M_M_GenTransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_GenTransport")))
					{
						iLocal_276[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_280[0], 26, joaat("S_M_M_GenTransport"), -1, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_GenTransport"));
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[1], false))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_280[1]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_280[1], true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_280[1], -1, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_276[1]))
				{
					STREAMING::REQUEST_MODEL(joaat("S_M_M_GenTransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_GenTransport")))
					{
						iLocal_276[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_280[1], 26, joaat("S_M_M_GenTransport"), -1, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_GenTransport"));
					}
				}
			}
		}
	}
}

void func_359()//Position - 0x200BD
{
	if (iLocal_223 == 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Plane_Explosion", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TV_Monitors", false, -1);
		if (iLocal_385 == 0)
		{
			iLocal_255 = AUDIO::GET_SOUND_ID();
			iLocal_385 = 1;
		}
		if (iLocal_386 == 0)
		{
			iLocal_256 = AUDIO::GET_SOUND_ID();
			iLocal_386 = 1;
		}
		if (iLocal_387 == 0)
		{
			iLocal_257 = AUDIO::GET_SOUND_ID();
			iLocal_387 = 1;
		}
		if (iLocal_388 == 0)
		{
			iLocal_258 = AUDIO::GET_SOUND_ID();
			iLocal_388 = 1;
		}
		if (iLocal_389 == 0)
		{
			iLocal_259 = AUDIO::GET_SOUND_ID();
			iLocal_389 = 1;
		}
		if (iLocal_384 == 0)
		{
			iLocal_260 = AUDIO::GET_SOUND_ID();
			iLocal_384 = 1;
		}
		if (iLocal_390 == 0)
		{
			iLocal_261 = AUDIO::GET_SOUND_ID();
			iLocal_390 = 1;
		}
		if (iLocal_343 == 1)
		{
			func_120();
			iLocal_343 = 0;
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_301))
		{
			iLocal_301 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_FOV(iLocal_301, 40f);
		}
		iLocal_341 = 0;
		iLocal_335 = 0;
		iLocal_347 = 0;
		iLocal_331 = 0;
		iLocal_326 = 0;
		iLocal_332 = 0;
		iLocal_325 = 0;
		iLocal_361 = 0;
		iLocal_363[0] = 0;
		iLocal_364[0] = 0;
		iLocal_363[1] = 0;
		iLocal_364[1] = 0;
		iLocal_363[2] = 0;
		iLocal_365 = 0;
		iLocal_366 = 0;
		iLocal_329 = 0;
		iLocal_330 = 0;
		iLocal_328 = 0;
		iLocal_370 = 0;
		iLocal_373 = 0;
		iLocal_374 = 0;
		iLocal_375 = 0;
		iLocal_377 = 0;
		iLocal_376 = 0;
		iLocal_378 = 0;
		iLocal_379 = 0;
		iLocal_380 = 0;
		iLocal_381 = 0;
		iLocal_382 = 0;
		iLocal_383 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_467 = 0;
		iLocal_349 = 1;
		iLocal_350 = 1;
		iLocal_358 = 1;
		iLocal_408 = 0;
		iLocal_409 = 0;
		iLocal_415 = 0;
		iLocal_417 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_427 = 0;
		iLocal_429[0] = 0;
		iLocal_429[1] = 0;
		iLocal_430[0] = 0;
		iLocal_430[1] = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_434 = 0;
		iLocal_439 = 0;
		iLocal_440 = 0;
		iLocal_441 = 0;
		iLocal_462 = 0;
		iLocal_463 = 0;
		iLocal_468 = 0;
		iLocal_227 = 0;
		iLocal_240 = 0;
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_465[iLocal_231] = 0;
			iLocal_466[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_487[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 6)
		{
			iLocal_435[iLocal_231] = 0;
			iLocal_436[iLocal_231] = 0;
			iLocal_231++;
		}
		STREAMING::REQUEST_PTFX_ASSET();
		iLocal_89 = 1;
		bLocal_95 = true;
		__LIB_39__::func_398();
		iLocal_226 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
		MISC::CLEAR_AREA(-823.71f, -2548.2f, 13.75f, 20f, true, false, false, false);
		PED::SET_PED_NON_CREATION_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, false, 0);
		PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, true);
		__LIB_15__::func_955(2, 1);
		func_361("BB_Chase", 45, 0, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(3);
		__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(iLocal_279, -1, 1);
		}
		iLocal_224 = 0;
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		func_360();
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_287))
		{
			iLocal_287 = VEHICLE::CREATE_VEHICLE(joaat("blista"), 0f, 0f, 1f, 0f, true, true, false);
		}
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase"))
		{
			SYSTEM::WAIT(0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_279, true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_279, 30f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_278, 45, "BB_Chase", true);
				SYSTEM::SETTIMERB(0);
				func_279();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_279);
					}
				}
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_223 = 0;
				iLocal_222 = 4;
			}
		}
	}
}

void func_360()//Position - 0x204FC
{
	Local_174[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_124[0] = -0.0003f;
	fLocal_125[0] = -0.0085f;
	fLocal_126[0] = 0.9998f;
	fLocal_127[0] = 0.0158f;
	iLocal_196[0] = joaat("blista");
	Local_173[4 /*3*/] = { -827.2035f, -2575.6968f, 13.5688f };
	fLocal_109[4] = 0.0004f;
	fLocal_110[4] = -0.0003f;
	fLocal_111[4] = -0.2526f;
	fLocal_112[4] = 0.9676f;
	iLocal_149[4] = 50;
	fLocal_113[4] = 20310f;
	iLocal_195[4] = joaat("manana");
	Local_174[1 /*3*/] = { -1033.7168f, -2949.0144f, 13.4922f };
	fLocal_124[1] = 0.0032f;
	fLocal_125[1] = -0.0003f;
	fLocal_126[1] = -0.0255f;
	fLocal_127[1] = 0.9997f;
	iLocal_196[1] = joaat("bison2");
	Local_175[0 /*3*/] = { -1178.3645f, -2845.9807f, 13.9027f };
	fLocal_118[0] = 0.0018f;
	fLocal_119[0] = 0.0123f;
	fLocal_120[0] = 0.9644f;
	fLocal_121[0] = 0.2642f;
	iLocal_152[0] = 9;
	fLocal_122[0] = 22357f;
	fLocal_123[0] = 1f;
	iLocal_197[0] = joaat("buzzard");
	Local_175[1 /*3*/] = { -1376.1969f, -2755.1675f, 14.0646f };
	fLocal_118[1] = -0.0012f;
	fLocal_119[1] = 0.0013f;
	fLocal_120[1] = 0.8439f;
	fLocal_121[1] = -0.5365f;
	iLocal_152[1] = 10;
	fLocal_122[1] = 27135f;
	fLocal_123[1] = 1f;
	iLocal_197[1] = joaat("packer");
	Local_175[2 /*3*/] = { -1342.5435f, -2688.4822f, 22.8254f };
	fLocal_118[2] = 0.0057f;
	fLocal_119[2] = -0.0014f;
	fLocal_120[2] = -0.2451f;
	fLocal_121[2] = 0.9695f;
	iLocal_152[2] = 11;
	fLocal_122[2] = 35135f;
	fLocal_123[2] = 1f;
	iLocal_197[2] = joaat("jet");
	Local_175[3 /*3*/] = { -898.3506f, -2698.9648f, 20.159f };
	fLocal_118[3] = 0.0065f;
	fLocal_119[3] = 0.0191f;
	fLocal_120[3] = -0.2629f;
	fLocal_121[3] = 0.9646f;
	iLocal_152[3] = 3;
	fLocal_122[3] = 6764f;
	fLocal_123[3] = 1f;
	iLocal_197[3] = joaat("bus");
	Local_175[4 /*3*/] = { -576.655f, -2231.9053f, 5.2834f };
	fLocal_118[4] = 0.0043f;
	fLocal_119[4] = 0.0331f;
	fLocal_120[4] = -0.3125f;
	fLocal_121[4] = 0.9493f;
	iLocal_152[4] = 4;
	fLocal_122[4] = 2102f;
	fLocal_123[4] = 1f;
	iLocal_197[4] = joaat("bison");
	Local_175[5 /*3*/] = { -994.9925f, -3154.1252f, 23.1145f };
	fLocal_118[5] = 0.0056f;
	fLocal_119[5] = 0.0029f;
	fLocal_120[5] = 0.4915f;
	fLocal_121[5] = 0.8708f;
	iLocal_152[5] = 21;
	fLocal_122[5] = 92500f;
	fLocal_123[5] = 1f;
	iLocal_197[5] = joaat("jet");
	Local_175[7 /*3*/] = { -553.3315f, -2073.9514f, 6.8909f };
	fLocal_118[7] = 0.0072f;
	fLocal_119[7] = 0.0176f;
	fLocal_120[7] = 0.9739f;
	fLocal_121[7] = -0.2263f;
	iLocal_152[7] = 54;
	fLocal_122[7] = 0f;
	fLocal_123[7] = 1f;
	iLocal_197[7] = joaat("police3");
	Local_175[8 /*3*/] = { -561.7264f, -2076.7615f, 6.7664f };
	fLocal_118[8] = -0.027f;
	fLocal_119[8] = 0.0016f;
	fLocal_120[8] = 0.9169f;
	fLocal_121[8] = -0.3981f;
	iLocal_152[8] = 108;
	fLocal_122[8] = 150f;
	fLocal_123[8] = 1f;
	iLocal_197[8] = joaat("police3");
	Local_175[11 /*3*/] = { -1563.918f, -2745.4094f, 13.5643f };
	fLocal_118[11] = -0.0022f;
	fLocal_119[11] = -0.0019f;
	fLocal_120[11] = 0.928f;
	fLocal_121[11] = -0.3726f;
	iLocal_152[11] = 111;
	fLocal_122[11] = 36000f;
	fLocal_123[11] = 1f;
	iLocal_197[11] = joaat("police3");
	Local_175[12 /*3*/] = { -1026.0242f, -2336.3955f, 13.5678f };
	fLocal_118[12] = -0.0083f;
	fLocal_119[12] = -0.0054f;
	fLocal_120[12] = 0.55f;
	fLocal_121[12] = 0.8351f;
	iLocal_152[12] = 112;
	fLocal_122[12] = 60000f;
	fLocal_123[12] = 1f;
	iLocal_197[12] = joaat("police3");
	Local_175[13 /*3*/] = { -1013.3156f, -2340.457f, 13.5678f };
	fLocal_118[13] = -0.0086f;
	fLocal_119[13] = -0.005f;
	fLocal_120[13] = 0.5052f;
	fLocal_121[13] = 0.8629f;
	iLocal_152[13] = 113;
	fLocal_122[13] = 60000f;
	fLocal_123[13] = 1f;
	iLocal_197[13] = joaat("police3");
	Local_175[14 /*3*/] = { -1221.0494f, -2731.1687f, 13.5681f };
	fLocal_118[14] = -0.0083f;
	fLocal_119[14] = -0.0057f;
	fLocal_120[14] = 0.6469f;
	fLocal_121[14] = 0.7625f;
	iLocal_152[14] = 61;
	fLocal_122[14] = 80000f;
	fLocal_123[14] = 1f;
	iLocal_197[14] = joaat("police3");
	Local_175[15 /*3*/] = { -1227.2032f, -2735.8723f, 13.568f };
	fLocal_118[15] = -0.0041f;
	fLocal_119[15] = -0.0091f;
	fLocal_120[15] = 0.9133f;
	fLocal_121[15] = 0.4072f;
	iLocal_152[15] = 62;
	fLocal_122[15] = 80000f;
	fLocal_123[15] = 1f;
	iLocal_197[15] = joaat("police3");
	Local_175[19 /*3*/] = { -1240.0482f, -2203.4565f, 14.0347f };
	fLocal_118[19] = 0.0002f;
	fLocal_119[19] = 0.0018f;
	fLocal_120[19] = 0.9611f;
	fLocal_121[19] = -0.2763f;
	iLocal_152[19] = 66;
	fLocal_122[19] = 55125f;
	fLocal_123[19] = 1f;
	iLocal_197[19] = joaat("firetruk");
	Local_175[20 /*3*/] = { -438.0192f, -2060.7515f, 73.6354f };
	fLocal_118[20] = -0.0005f;
	fLocal_119[20] = 0.0018f;
	fLocal_120[20] = 0.9559f;
	fLocal_121[20] = 0.2938f;
	iLocal_152[20] = 67;
	fLocal_122[20] = 0f;
	fLocal_123[20] = 1f;
	iLocal_197[20] = joaat("maverick");
	Local_175[21 /*3*/] = { -546.8047f, -2187.9248f, 5.8819f };
	fLocal_118[21] = -0.0252f;
	fLocal_119[21] = -0.0034f;
	fLocal_120[21] = 0.9369f;
	fLocal_121[21] = 0.3487f;
	iLocal_152[21] = 5;
	fLocal_122[21] = 3834f;
	fLocal_123[21] = 1f;
	iLocal_197[21] = joaat("blista");
	Local_175[22 /*3*/] = { -1001.6743f, -2947.7324f, 13.3947f };
	fLocal_118[22] = 0.001f;
	fLocal_119[22] = -0.0004f;
	fLocal_120[22] = 0.8616f;
	fLocal_121[22] = 0.5075f;
	iLocal_152[22] = 6;
	fLocal_122[22] = 20176f;
	fLocal_123[22] = 1f;
	iLocal_197[22] = joaat("airtug");
	Local_175[23 /*3*/] = { -1249.5879f, -2525.9001f, 13.3942f };
	fLocal_118[23] = 0.001f;
	fLocal_119[23] = -0.0001f;
	fLocal_120[23] = 0.9749f;
	fLocal_121[23] = -0.2228f;
	iLocal_152[23] = 7;
	fLocal_122[23] = 48538f;
	fLocal_123[23] = 1f;
	iLocal_197[23] = joaat("airtug");
	Local_175[24 /*3*/] = { -1362.5382f, -2625.609f, 13.3895f };
	fLocal_118[24] = -0.0001f;
	fLocal_119[24] = 0.0018f;
	fLocal_120[24] = 0.5344f;
	fLocal_121[24] = 0.8452f;
	iLocal_152[24] = 8;
	fLocal_122[24] = 75112f;
	fLocal_123[24] = 1f;
	iLocal_197[24] = joaat("airtug");
}

void func_361(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x20E0E
{
	struct<3> Var0;
	StringCopy(&cLocal_185, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_156 = 0;
	iLocal_157 = 0;
	iLocal_158 = 0;
	iLocal_159 = iParam1;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	iLocal_166 = 0;
	iLocal_169 = 0;
	iLocal_167 = -1;
	iLocal_168 = -1;
	iLocal_170 = 0;
	iLocal_171 = 0;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_130 = 0f;
	iLocal_91 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_177.f_0 = (Var0.f_0 - 100f);
		Local_177.f_1 = (Var0.f_1 - 100f);
		Local_177.f_2 = (Var0.f_2 - 100f);
		Local_178.f_0 = (Var0.f_0 + 100f);
		Local_178.f_1 = (Var0.f_1 + 100f);
		Local_178.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_177, Local_178, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_194);
	__LIB_15__::func_907();
	if (bParam3)
	{
		__LIB_14__::func_804(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_207();
}

void func_362()//Position - 0x20F31
{
	if (iLocal_223 == 0)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 14f, 4);
		if (iLocal_343 == 1)
		{
			func_120();
			iLocal_343 = 0;
		}
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_372 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_329 = 0;
		iLocal_331 = 0;
		iLocal_332 = 0;
		iLocal_333 = 0;
		iLocal_334 = 0;
		iLocal_335 = 0;
		iLocal_336 = 0;
		iLocal_341 = 0;
		iLocal_350 = 0;
		iLocal_348 = 0;
		iLocal_407 = 0;
		iLocal_410 = 0;
		iLocal_449 = 0;
		iLocal_371 = 0;
		iLocal_349 = 1;
		iLocal_227 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_359 = 1;
		}
		else
		{
			iLocal_359 = 0;
		}
		__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
		PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, false, true);
		iLocal_230 = MISC::GET_GAME_TIMER();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(0, -1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_279);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_290);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_291);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_299))
		{
			iLocal_299 = __LIB_0__::func_488(Local_308, 0);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_GAMEPLAY_START");
		Local_318 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_348 == 0 && iLocal_362 == 1)
		{
			if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				__LIB_0__::func_229("TRV4_GO1", 7500, 1);
				iLocal_348 = 1;
			}
		}
		if (iLocal_371 == 0 && !__LIB_0__::func_689())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_308, true) < 800f)
			{
				iLocal_229 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iLocal_229 == 0)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
					iLocal_371 = 1;
				}
				if (iLocal_229 == 1)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
					iLocal_371 = 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_308, true) < 600f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio")))
				{
					iLocal_278 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -428.0226f, -2153.5579f, 9.2992f, 90.9098f, true, true, false);
					ENTITY::SET_ENTITY_PROOFS(iLocal_278, false, true, true, true, false, false, false, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_278, 27, 27);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0f);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				STREAMING::REQUEST_MODEL(joaat("IG_Molly"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("IG_Molly")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							iLocal_264 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_278, 26, joaat("IG_Molly"), -1, true, true);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_264, true);
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_264, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Molly"));
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_264, joaat("PLAYER"));
							iLocal_358 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				PED::DELETE_PED(&iLocal_264);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_278);
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_308, true) < 500f)
		{
			if (iLocal_360 == 0)
			{
				iLocal_305 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("maverick"));
				STREAMING::REQUEST_MODEL(joaat("bison"));
				STREAMING::REQUEST_MODEL(joaat("blista"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
				__LIB_39__::func_396(1, "BB_Chase");
				AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
				iLocal_360 = 1;
			}
		}
		else if (iLocal_360 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
			VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
			__LIB_39__::func_401(1, "BB_Chase");
			AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
			iLocal_360 = 0;
		}
		if (iLocal_372 == 0)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_230 + 135000))
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_229("TRV4_WARN1", 7500, 1);
				iLocal_230 = MISC::GET_GAME_TIMER();
				iLocal_372 = 1;
			}
		}
		if (iLocal_372 == 1)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_230 + 135000))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_407 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CAR_ENTERED");
				iLocal_407 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
			{
				iLocal_279 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_279, false, true, false, false, false, false, false, false);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_279);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279, false))
			{
				if (iLocal_359 == 0)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_279, false, false, false, false, false, false, false, false);
					iLocal_359 = 1;
				}
				if (iLocal_351 == 1)
				{
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_279);
					iLocal_351 = 0;
				}
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_279, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_279);
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_410 == 0)
			{
				HUD::START_GPS_MULTI_ROUTE(156, true, false);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-244f, -1842.74f, 28.48f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1.5f, -2014.4f, 11.5f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-498.7f, -2136.5f, 8.4f);
				HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
				iLocal_410 = 1;
			}
		}
		else if (iLocal_410 == 1)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
			iLocal_410 = 0;
		}
		if ((iLocal_360 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_278)) && ENTITY::DOES_ENTITY_EXIST(iLocal_264))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_278, __LIB_2__::func_85(PLAYER::PLAYER_PED_ID()), 0))
				{
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_278))
				{
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_278, true), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_357 = 0;
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, false, true, 0))
				{
					iLocal_357 = 1;
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, false, true, 0))
				{
					HUD::CLEAR_GPS_MULTI_ROUTE();
					PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
					iLocal_357 = 1;
					func_363();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
		}
	}
}

void func_363()//Position - 0x21641
{
	while (((!STREAMING::HAS_MODEL_LOADED(joaat("police3")) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista")))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_368()//Position - 0x21762
{
	if (iLocal_223 == 0)
	{
		iLocal_336 = 1;
		iLocal_416 = 0;
		iLocal_433 = 0;
		iLocal_437 = 0;
		while (iLocal_336 == 1)
		{
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
			switch (iLocal_225)
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("sol_3_int", 8);
					if (__LIB_0__::func_90())
					{
						while (!__LIB_39__::func_402(61, &uLocal_655, 0, 1, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_406 = 0;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
								iLocal_279 = Global_96938[0];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
								iLocal_290 = Global_96938[1];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[2], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[2], true, true);
								iLocal_291 = Global_96938[2];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938[3]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[3], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[3], true, true);
								iLocal_292 = Global_96938[3];
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						__LIB_17__::func_159();
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						iLocal_225++;
					}
					break;
				case 1:
					if (iLocal_416 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (iLocal_437 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_292))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_292, false))
									{
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_292)))
										{
											VEHICLE::CONTROL_LANDING_GEAR(iLocal_292, 2);
											ENTITY::SET_ENTITY_COORDS(iLocal_292, -1048.7219f, -506.8387f, 35.0386f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iLocal_292, 357.1288f);
											VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_292, true);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_292, 5f);
											__LIB_17__::func_635(-1048.7219f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_437 = 1;
										}
										if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_292)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_292))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_292))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_292)))
										{
											if ((((((((ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("bus") && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("pounder")) && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("packer")) && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("airbus")) && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("ambulance")) && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("barracks")) && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("barracks2")) && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("benson")) && ENTITY::GET_ENTITY_MODEL(iLocal_292) != joaat("biff"))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_292, -1027.6575f, -486.6945f, 35.9571f, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(iLocal_292, 207.7515f);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_292, 5f);
												__LIB_17__::func_635(-1027.6575f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_437 = 1;
											}
										}
										if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_292)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_292))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_292))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_292))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_292)))
										{
											VEHICLE::DELETE_VEHICLE(&iLocal_292);
											iLocal_437 = 1;
										}
									}
								}
							}
							__LIB_17__::func_455(&uLocal_655, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_416 = 1;
						}
					}
					if (iLocal_406 == 0)
					{
						PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_488);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_488);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_488, joaat("PLAYER"));
						HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
						iLocal_406 = 1;
					}
					if (iLocal_433 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
							PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
							PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
							if (CUTSCENE::GET_CUTSCENE_TIME() > 120000)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START");
								iLocal_433 = 1;
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1012.2676f, -480.0742f, 38.9757f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 121.4087f);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0f, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						__LIB_0__::func_468(61);
						if (iLocal_433 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_CS_SKIP");
							iLocal_433 = 1;
						}
						RECORDING::REPLAY_STOP_EVENT();
						__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
						iLocal_225++;
					}
					break;
				case 2:
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279, false))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_279, true))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_279);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_290))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_290, false))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_290, true))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_290);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_291))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_291, false))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_291, true))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_291);
							}
						}
					}
					__LIB_16__::func_887();
					iLocal_336 = 0;
					iLocal_225 = 0;
					iLocal_223 = 0;
					iLocal_222 = 2;
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_413()//Position - 0x24834
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!__LIB_0__::func_323())
	{
		if (__LIB_0__::func_2(0))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
			{
				MISC::CLEAR_AREA(Local_306, 5f, true, false, false, false);
				iLocal_279 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_306, fLocal_319, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_279, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_279, 3000, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_279, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_279, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_279, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_290))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.3977f, -491.6539f, 35.5545f, 5f, true, false, false, false);
					iLocal_290 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.3977f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_290, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_290, 3000, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_290, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_290, true);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_291))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_306, 5f, true, false, false, false);
					iLocal_291 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.9381f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_291, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_291, 3000, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_291, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_291, true);
				}
			}
		}
		iLocal_223 = 0;
		iLocal_225 = 0;
		iLocal_343 = 0;
		iLocal_222 = 1;
	}
	else
	{
		PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_488);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_488);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_488, joaat("PLAYER"));
		if (Global_94618 == 1)
		{
			if (__LIB_0__::func_344() == 0)
			{
				__LIB_0__::func_427(Local_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (__LIB_0__::func_344() == 1)
			{
				__LIB_0__::func_427(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (__LIB_0__::func_344() == 2)
			{
				__LIB_0__::func_427(-937.5466f, -2968.7126f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
			if (__LIB_0__::func_344() == 3)
			{
				__LIB_0__::func_427(-920.0547f, -2744.6614f, 12.9322f, 357.1374f, 1, 0);
				func_414();
			}
		}
		else
		{
			if (__LIB_0__::func_344() == 0)
			{
				__LIB_0__::func_427(-1019.5793f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_222 = 2;
			}
			if (__LIB_0__::func_344() == 1)
			{
				__LIB_0__::func_427(Local_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (__LIB_0__::func_344() == 2)
			{
				__LIB_0__::func_427(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (__LIB_0__::func_344() == 3)
			{
				__LIB_0__::func_427(-937.5466f, -2968.7126f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
		}
		HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_414()//Position - 0x24C21
{
	if (iLocal_223 == 0)
	{
		MISC::CLEAR_AREA(-920.0547f, -2744.6616f, 12.8434f, 20f, true, false, false, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		iLocal_223++;
	}
	if (iLocal_223 == 1)
	{
		STREAMING::LOAD_SCENE(-920.0547f, -2744.6616f, 12.8434f);
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			__LIB_0__::func_433(0, -1, 1);
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_6();
	}
}

void func_417()//Position - 0x24D5A
{
	if (iLocal_435[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[7]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[7], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_204[7], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[0] = 1;
			}
		}
	}
	if (iLocal_436[0] == 0)
	{
		if (iLocal_435[0] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[7]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[7], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[7], 0f);
					iLocal_436[0] = 1;
				}
				else if (iLocal_222 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[7], 0f);
					iLocal_436[0] = 1;
				}
			}
			else
			{
				iLocal_436[0] = 1;
			}
		}
	}
	if (iLocal_435[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[8]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_204[8], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[1] = 1;
			}
		}
	}
	if (iLocal_436[1] == 0)
	{
		if (iLocal_435[1] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[8]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[8], 0f);
					iLocal_436[1] = 1;
				}
				else if (iLocal_222 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[8], 0f);
					iLocal_436[1] = 1;
				}
			}
			else
			{
				iLocal_436[1] = 1;
			}
		}
	}
	if (iLocal_435[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[11]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[11], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_204[11], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[2] = 1;
			}
		}
	}
	if (iLocal_436[2] == 0)
	{
		if (iLocal_435[2] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[11]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[11], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[11], 0f);
					iLocal_436[2] = 1;
				}
				else if (iLocal_222 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[11], 0f);
					iLocal_436[2] = 1;
				}
			}
			else
			{
				iLocal_436[2] = 1;
			}
		}
	}
	if (iLocal_435[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[12]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[12], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_204[12], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[3] = 1;
			}
		}
	}
	if (iLocal_436[3] == 0)
	{
		if (iLocal_435[3] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[12]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[12], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[12], 0f);
					iLocal_436[3] = 1;
				}
				else if (iLocal_222 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[12], 0f);
					iLocal_436[3] = 1;
				}
			}
			else
			{
				iLocal_436[3] = 1;
			}
		}
	}
	if (iLocal_435[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[13]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[13], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_204[13], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[4] = 1;
			}
		}
	}
	if (iLocal_436[4] == 0)
	{
		if (iLocal_435[4] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[13]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[13], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[13], 0f);
					iLocal_436[4] = 1;
				}
				else if (iLocal_222 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[13], 0f);
					iLocal_436[4] = 1;
				}
			}
			else
			{
				iLocal_436[4] = 1;
			}
		}
	}
	if (iLocal_435[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[14], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_204[14], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[5] = 1;
			}
		}
	}
	if (iLocal_436[5] == 0)
	{
		if (iLocal_435[5] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[14]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[14], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[14], 0f);
					iLocal_436[5] = 1;
				}
				else if (iLocal_222 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[14], 0f);
					iLocal_436[5] = 1;
				}
			}
			else
			{
				iLocal_436[5] = 1;
			}
		}
	}
	if (iLocal_435[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[15]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[15], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_204[15], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_435[6] = 1;
			}
		}
	}
	if (iLocal_436[6] == 0)
	{
		if (iLocal_435[6] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[15]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[15], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[15], 0f);
					iLocal_436[6] = 1;
				}
				else if (iLocal_222 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_204[15], 0f);
					iLocal_436[6] = 1;
				}
			}
			else
			{
				iLocal_436[6] = 1;
			}
		}
	}
}

void func_418()//Position - 0x25201
{
	switch (iLocal_222)
	{
		case 2:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_362 = 0;
					iLocal_449 = 0;
					iLocal_472 = 0;
					iLocal_473 = 0;
					__LIB_0__::func_222(&uLocal_490, 1, 0, "Devin", 0, 1);
					__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_362 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 2f)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_449 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_318, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 100f)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (__LIB_3__::func_74(&uLocal_490, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
									iLocal_449 = 1;
								}
							}
						}
					}
					if (iLocal_472 == 0 && iLocal_449 == 1)
					{
						if (__LIB_14__::func_521())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_472 = 1;
								}
							}
						}
					}
					if (iLocal_473 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_278, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 4);
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if (iLocal_223 >= 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_450[0] = 0;
					iLocal_450[1] = 0;
					iLocal_450[2] = 0;
					iLocal_450[3] = 0;
					iLocal_469 = 0;
					iLocal_470 = 0;
					iLocal_471 = 0;
					iLocal_474 = 0;
					iLocal_475 = 0;
					iLocal_476 = 0;
					iLocal_477 = 0;
					iLocal_478 = 0;
					iLocal_241 = MISC::GET_GAME_TIMER();
					__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					__LIB_0__::func_222(&uLocal_490, 4, 0, "SOL3COP", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_473 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_278, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
							{
								if (iLocal_450[0] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[7], false) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 7000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 28000f)
										{
											if (!__LIB_0__::func_75())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_450[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[1] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[7], false) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 28000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 34500f)
										{
											if (!__LIB_0__::func_75())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
														iLocal_450[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[2] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[7], false) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_204[8], false))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 41000f)
										{
											if (!__LIB_0__::func_75())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 4);
														iLocal_450[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_470 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 41000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 43500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_283) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_283))
										{
											if (!__LIB_0__::func_75())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
														iLocal_470 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_471 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 50509f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 50872f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_283) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_283))
										{
											if (!__LIB_0__::func_75())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_471 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[3] == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 58000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 68000f)
									{
										if (!__LIB_0__::func_75())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_450[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_474 == 0 && iLocal_450[3] == 1)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 76000f)
									{
										if (!__LIB_0__::func_75())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_474 = 1;
												}
											}
										}
									}
								}
								if (iLocal_469 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 80000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 82000f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[0]))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_280[0], false))
											{
												if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_280[0]))
												{
													if (!__LIB_0__::func_75())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
																iLocal_469 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_475 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 82100f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 83500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[11]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_204[11]))
											{
												if (!__LIB_0__::func_75())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iLocal_204[12]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_204[12]))
											{
												if (!__LIB_0__::func_75())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_478 == 0)
								{
									if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 101891f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 105000f) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_278))
									{
										if (!__LIB_0__::func_75())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
													iLocal_478 = 1;
												}
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_241 + 7000) && iLocal_477 == 0)
								{
									if (!__LIB_0__::func_75())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = MISC::GET_GAME_TIMER();
												iLocal_477 = 1;
											}
										}
									}
								}
								if (iLocal_476 == 0 && iLocal_477 == 1)
								{
									if (!__LIB_0__::func_75())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_476 = 1;
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_241 + 7000) && iLocal_476 == 1)
								{
									if (!__LIB_0__::func_75())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 5:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_452 = 0;
					iLocal_479 = 0;
					iLocal_485 = 0;
					iLocal_480 = 1;
					iLocal_246 = MISC::GET_GAME_TIMER();
					__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_264))
					{
						__LIB_0__::func_222(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_485 == 0)
					{
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_485 = 1;
					}
					if (iLocal_480 == 1)
					{
						if (iLocal_452 == 0)
						{
							if (!__LIB_0__::func_75())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
										iLocal_242 = MISC::GET_GAME_TIMER();
										iLocal_452 = 1;
										iLocal_479 = 1;
										iLocal_480 = 0;
									}
								}
							}
						}
						if (MISC::GET_GAME_TIMER() > iLocal_242 + 5000)
						{
							if (!__LIB_0__::func_75())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
										iLocal_242 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_479 == 1 && MISC::GET_GAME_TIMER() > iLocal_246 + 4000)
					{
						if (!__LIB_0__::func_75())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
									iLocal_246 = MISC::GET_GAME_TIMER();
									iLocal_480 = 1;
									iLocal_479 = 0;
								}
							}
						}
					}
				}
			}
			break;
		case 6:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_455 = 0;
					iLocal_481 = 0;
					iLocal_482 = 0;
					__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_264))
					{
						__LIB_0__::func_222(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_453 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_453 = 1;
								}
							}
						}
					}
					if (iLocal_453 == 1 && iLocal_455 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_455 = 1;
								}
							}
						}
					}
					if (iLocal_454 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
						{
							if (!PED::IS_PED_INJURED(iLocal_264))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_251))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_251) > 0.65f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_251) < 0.835f)
									{
										if (!__LIB_0__::func_75())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
													iLocal_454 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_481 == 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
						{
							if (!__LIB_0__::func_75())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_481 = 1;
									}
								}
							}
						}
					}
					if (iLocal_481 == 1 && iLocal_482 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_482 = 1;
								}
							}
						}
					}
				}
			}
			break;
		case 8:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_483 = 0;
					iLocal_247 = MISC::GET_GAME_TIMER();
					__LIB_0__::func_222(&uLocal_490, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_483 == 0)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_277 = __LIB_17__::func_169(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_277, 1) < 40f)
								{
									if (!__LIB_0__::func_75())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_483 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_483 == 1 && MISC::GET_GAME_TIMER() > iLocal_247 + 5000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_277 = __LIB_17__::func_169(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_277))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_277, 1) < 40f)
								{
									if (!__LIB_0__::func_75())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (__LIB_2__::func_859(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_247 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_422()//Position - 0x26183
{
	if (((iLocal_222 == 4 || iLocal_222 == 5) || iLocal_222 == 8) || iLocal_222 == 6)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2, 200, 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	}
	if (iLocal_441 == 0)
	{
		if (iLocal_222 == 4)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2, 200, 0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					iLocal_441 = 1;
				}
			}
		}
	}
}

void func_424()//Position - 0x26F7E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_279 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_425()//Position - 0x26FAA
{
	if (iLocal_349 == 1)
	{
		if (iLocal_222 == 4)
		{
			if (iLocal_224 > 1 && iLocal_424 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -828.6987f, -2938.0732f, 12.217451f, -807.6911f, -2905.1477f, 16.356258f, 28f, false, true, 0))
				{
					func_248("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_295))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_300))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_295, 1) > 100f)
					{
						func_248("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_224 == 2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_236 + 7000 && iLocal_439 == 0)
				{
					func_248("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 62000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 77000f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1219f, -2570f, 13f, true) < 210f)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 200f && ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 125f)
									{
										if (iLocal_438 == 0)
										{
											iLocal_239 = MISC::GET_GAME_TIMER();
											iLocal_438 = 1;
										}
										if (iLocal_438 == 1 && MISC::GET_GAME_TIMER() > iLocal_239 + 4000)
										{
											func_248("TRV4_FAIL1");
										}
									}
									else if (iLocal_438 == 1)
									{
										iLocal_438 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 5 || iLocal_222 == 6)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -928.9f, -2935f, 13f, true) < 5f && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2, 200, 0))
				{
					func_248("TRV4_FAIL2");
				}
				else if (!__LIB_0__::func_1("TRV4_HELP3"))
				{
					__LIB_0__::func_190("TRV4_HELP3");
				}
			}
			else if (__LIB_0__::func_1("TRV4_HELP3"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
				{
					if (!PED::IS_PED_INJURED(iLocal_264))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_264, false);
						ENTITY::SET_ENTITY_HEALTH(iLocal_264, 0, 0);
					}
				}
			}
		}
		if (iLocal_358 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				if (PED::IS_PED_INJURED(iLocal_264))
				{
					func_248("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_350 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_264) > 300f)
					{
						if (iLocal_404 == 1)
						{
							HUD::CLEAR_PRINTS();
							__LIB_0__::func_229("TRV4_WARN1", 7500, 1);
							iLocal_404 = 0;
						}
					}
					else if (iLocal_404 == 0)
					{
						iLocal_404 = 1;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) < 40000f)
							{
								if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_264) > 400f)
								{
									func_248("TRV4_FAIL1");
								}
							}
							else if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_264) > 350f)
							{
								func_248("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_224 == 3)
			{
				if (iLocal_425 == 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -934.4f, -2927.2f, 13.2f, true) > 25f || MISC::GET_GAME_TIMER() > iLocal_237 + 12000)
					{
						func_248("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_278, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_278))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 111509f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1070.8376f, -2942.2412f, 12.195338f, -1009.038f, -2977.609f, 17.444427f, 89.5f, false, true, 0))
						{
							func_248("TRV4_FAIL1");
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_278) > 122000f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (iLocal_440 == 0)
								{
									iLocal_240 = MISC::GET_GAME_TIMER();
									iLocal_440 = 1;
								}
								if (iLocal_440 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_240 + 4000)
									{
										func_248("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_440 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 2)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.41077f, -2173.417f, -1.911488f, -605.6846f, -2358.2285f, 27.328419f, 250f, false, true, 0))
			{
				func_248("TRV4_FAIL1");
			}
		}
		if (iLocal_405 == 1)
		{
			if (__LIB_0__::func_223())
			{
				func_426();
			}
		}
	}
}

void func_426()//Position - 0x274B9
{
	__LIB_16__::func_326(PLAYER::PLAYER_PED_ID(), 0);
	func_430();
}

void func_430()//Position - 0x2753D
{
	__LIB_15__::func_283(24, 1);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, true, true);
	__LIB_0__::func_753();
	__LIB_0__::func_345(&uLocal_28, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_287))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_287);
	}
	__LIB_0__::func_424(0);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_263))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		if (!PED::IS_PED_INJURED(iLocal_264))
		{
			PED::SET_PED_KEEP_TASK(iLocal_264, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
	{
		if (!PED::IS_PED_INJURED(iLocal_266))
		{
			PED::SET_PED_KEEP_TASK(iLocal_266, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		if (!PED::IS_PED_INJURED(iLocal_269))
		{
			PED::SET_PED_KEEP_TASK(iLocal_269, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_269);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
	{
		if (!PED::IS_PED_INJURED(iLocal_270))
		{
			PED::SET_PED_KEEP_TASK(iLocal_270, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_270);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
	{
		if (!PED::IS_PED_INJURED(iLocal_271))
		{
			PED::SET_PED_KEEP_TASK(iLocal_271, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_271);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
	{
		if (!PED::IS_PED_INJURED(iLocal_272))
		{
			PED::SET_PED_KEEP_TASK(iLocal_272, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_272);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
	{
		if (!PED::IS_PED_INJURED(iLocal_273))
		{
			PED::SET_PED_KEEP_TASK(iLocal_273, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_273);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
	{
		if (!PED::IS_PED_INJURED(iLocal_274))
		{
			PED::SET_PED_KEEP_TASK(iLocal_274, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_274);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_265[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_265[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_265[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_265[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_265[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_265[2], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_265[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_265[3], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_265[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_267[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_267[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_267[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_267[1]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_267[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_267[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_267[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_267[2]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_267[2], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_267[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[2], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[3], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[4]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[4]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[4], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[5]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[5]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[5], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[6]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[6], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[7]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[7]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[7], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[8]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[8]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[8], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[9]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[9]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[9], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[10]))
	{
		if (!PED::IS_PED_INJURED(iLocal_268[10]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_268[10], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_268[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_275[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_275[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_275[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_276[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_276[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_276[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_276[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_276[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_276[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_278))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_278);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_279, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_279);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_282))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_283))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_283);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_285);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_287))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_287);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_289, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_289);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_293[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_293[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_280[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_280[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_293[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_293[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_286[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_286[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_286[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_288[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_288[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_281))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_281);
	}
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_GAMEPLAY_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_CS_SKIP");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_EVADE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CAR_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_JET_ENTERED");
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_262))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_262, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_672))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_672, false);
	}
	HUD::CLEAR_GPS_MULTI_ROUTE();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_305);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
	PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, true, true);
	PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, true);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", false, 0.5f, 1f);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	MISC::SET_TIME_SCALE(1f);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	__LIB_0__::func_671(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (__LIB_38__::func_980(2))
	{
		__LIB_16__::func_793(2, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_432()//Position - 0x27DA2
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_251(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_14__::func_534();
		}
	}
}

