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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	var uLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	float fLocal_82[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_83[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_84[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_92[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_93[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_94[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_95[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_96[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_97[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_98[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_99[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_100[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	int iLocal_122[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_123[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_124[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_125[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_126[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_127[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_128[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	struct<3> Local_146[150];
	struct<3> Local_147[50];
	struct<3> Local_148[25];
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_150 = { 0, 0, 0 } ;
	struct<3> Local_151 = { 0, 0, 0 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	struct<3> Local_158 = { 0, 0, 0 } ;
	struct<3> Local_159 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	char cLocal_162[64] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_179[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_180[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_181[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_182[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	var uLocal_186 = 14;
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
	char* sLocal_201 = NULL;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_204 = { 0, 0, 0 } ;
	struct<3> Local_205 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_207 = { 0, 0, 0 } ;
	char* sLocal_208 = NULL;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	struct<3> Local_212 = { 0, 0, 0 } ;
	struct<2> Local_213 = { 0, 0 } ;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	struct<2> Local_216 = { 0, 0 } ;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	struct<2> Local_219 = { 0, 0 } ;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	struct<2> Local_222 = { 0, 0 } ;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	char cLocal_225[16] = "";
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	char cLocal_228[16] = "";
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	struct<2> Local_231 = { 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	struct<17> Local_239 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_240 = 0;
	struct<16> Local_241 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	struct<12> Local_244 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<12> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	struct<7> Local_258 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<12> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<22> Local_285 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<22> Local_286 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_287 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<8> Local_303 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_304 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_305 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_306 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_307 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_308 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_309 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_310 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 4;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 4;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 4;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 4;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 4;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 4;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 4;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	struct<21> Local_359 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<14> Local_373 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 3;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = -1;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1000;
	var uLocal_395 = 1000;
	var uLocal_396 = 0;
	var uLocal_397 = 16;
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
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	var uLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	int iLocal_571[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	float fLocal_584 = 0f;
	var uLocal_585 = 0;
	bool bLocal_586 = 0;
	int iLocal_587 = 0;
	var uLocal_588 = 0;
	float fLocal_589 = 0f;
	float fLocal_590 = 0f;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	struct<6> Local_606 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_607 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	float fLocal_625 = 0f;
	float fLocal_626 = 0f;
	float fLocal_627 = 0f;
	int iLocal_628 = 0;
	float fLocal_629 = 0f;
	struct<3> Local_630 = { 0, 0, 0 } ;
	struct<3> Local_631 = { 0, 0, 0 } ;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	bool bLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	bool bLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	float fLocal_660 = 0f;
	float fLocal_661 = 0f;
	float fLocal_662 = 0f;
	float fLocal_663 = 0f;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	int iLocal_691[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_692 = 8;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 6;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 1;
	var uLocal_709 = 0;
	var uLocal_710[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_711[8];
	struct<3> Local_712[2];
	struct<22> Local_713[2];
	struct<18> Local_714[2];
	struct<18> Local_715[2];
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_51 = true;
	bLocal_58 = true;
	bLocal_80 = true;
	fLocal_101 = 120f;
	fLocal_102 = 0f;
	fLocal_104 = 1f;
	fLocal_105 = 0f;
	fLocal_106 = 1f;
	fLocal_107 = 30f;
	fLocal_109 = 1f;
	fLocal_110 = 5f;
	fLocal_111 = 1f;
	fLocal_112 = 1f;
	fLocal_113 = 100f;
	fLocal_114 = 100f;
	fLocal_115 = 0f;
	fLocal_116 = 7000f;
	fLocal_117 = 0f;
	fLocal_118 = 0f;
	fLocal_119 = 0.3f;
	fLocal_120 = 0.5f;
	fLocal_121 = 50f;
	iLocal_132 = -1;
	iLocal_140 = -1;
	iLocal_141 = -1;
	sLocal_201 = "ropeFamily3";
	Local_202 = { -813.8f, 179.23f, 71.16f };
	Local_203 = { 40f, 40f, 40f };
	Local_204 = { -991.65f, 645.38f, 138.64f };
	Local_205 = { -822.26f, 182.9f, 70.9f };
	Local_206 = { -977.222f, 634.37f, 156f };
	Local_207 = { -1015.8f, 656.4f, 149.2f };
	sLocal_208 = "famthree";
	Local_209 = { -0.875f, -1.75f, -0.475f };
	Local_210 = { 0.875f, -1.75f, -0.475f };
	Local_211 = { 0f, 0f, 0f };
	Local_212 = { 0f, -2.6f, 0.2f };
	StringCopy(&Local_213, "FAM3_GIT", 16);
	StringCopy(&Local_216, "FAM3_DCAN", 16);
	StringCopy(&Local_219, "FAM3_DHOUSE", 16);
	StringCopy(&Local_222, "FAM3_GBIT", 16);
	StringCopy(&cLocal_225, "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, 16);
	StringCopy(&cLocal_228, "CMN_MLEAVE" /* GXT: ~s~Return to ~b~Michael.~s~ */, 16);
	StringCopy(&Local_231, "LOSE_WANTED" /* GXT: Lose the Cops. */, 16);
	StringCopy(&Local_606, "", 24);
	StringCopy(&Local_607, "", 24);
	fLocal_626 = 0.65f;
	iLocal_665 = -1;
	iLocal_666 = -1;
	iLocal_667 = -1;
	iLocal_668 = -1;
	iLocal_673 = 250;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_980();
		func_979(1, 1);
		func_976();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_0__::func_323())
	{
		func_973(&iLocal_234, __LIB_0__::func_344());
		iLocal_566 = 1;
		if (Global_94618 == 1)
		{
			iLocal_234 = __LIB_17__::func_177(iLocal_234);
		}
	}
	else
	{
		__LIB_42__::func_970(0, "CAR CHASE", 0, 0, 0, 1);
	}
	if (__LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_323())
		{
			iLocal_234 = 0;
			iLocal_566 = 1;
		}
	}
	while (true)
	{
		__LIB_38__::func_131(0);
		if (iLocal_567 == 1)
		{
			func_921(&iLocal_234, &uLocal_235);
		}
		if (iLocal_311 == 1)
		{
			func_864();
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_MarriageCounselling", 0);
		if (iLocal_690 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		switch (iLocal_234)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_828(iLocal_234, &iLocal_563, &iLocal_567, &uLocal_565, &iLocal_566))
				{
					if (func_813(&iLocal_564))
					{
						func_812();
						iLocal_234 = 1;
					}
				}
				break;
			case 1:
				func_811();
				if (func_828(iLocal_234, &iLocal_563, &iLocal_567, &uLocal_565, &iLocal_566))
				{
					if (func_412(&iLocal_564))
					{
						func_812();
						iLocal_234 = 2;
					}
				}
				break;
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_828(iLocal_234, &iLocal_563, &iLocal_567, &uLocal_565, &iLocal_566))
				{
					if (func_411(&iLocal_564))
					{
						func_812();
						iLocal_234 = 3;
					}
				}
				break;
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_828(iLocal_234, &iLocal_563, &iLocal_567, &uLocal_565, &iLocal_566))
				{
					if (func_393(&iLocal_564))
					{
						func_812();
						iLocal_234 = 4;
					}
				}
				break;
			case 4:
				if (iLocal_636 == 0)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
				}
				if (func_828(iLocal_234, &iLocal_563, &iLocal_567, &uLocal_565, &iLocal_566))
				{
					if (func_216(&iLocal_564))
					{
						func_812();
						iLocal_234 = 5;
					}
				}
				break;
			case 5:
				if (func_828(iLocal_234, &iLocal_563, &iLocal_567, &uLocal_565, &iLocal_566))
				{
					if (func_120(&iLocal_564))
					{
						func_812();
						if (!__LIB_0__::func_2(0))
						{
							iLocal_234 = 6;
						}
						else
						{
							iLocal_234 = 7;
						}
					}
				}
				break;
			case 6:
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				if (func_828(iLocal_234, &iLocal_563, &iLocal_567, &uLocal_565, &iLocal_566))
				{
					if (func_24(&iLocal_564))
					{
						func_812();
						iLocal_234 = 7;
					}
				}
				break;
			case 7:
				__LIB_0__::func_526(0, 0);
				func_976();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			case 8:
				func_4(&uLocal_235);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_325();
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_FAIL");
				while (!__LIB_0__::func_223())
				{
					SYSTEM::WAIT(0);
				}
				func_979(1, 0);
				func_976();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_4(var uParam0)//Position - 0x577
{
	switch (*uParam0)
	{
		case 1:
			func_5("FAM3_TDEST");
			break;
		case 2:
			func_5("FAM3_TUND");
			break;
		case 3:
			func_5("CMN_MDIED" /* GXT: ~s~Michael died. */);
			break;
		case 4:
			func_5("CMN_MLEFT" /* GXT: ~s~Michael was left behind. */);
			break;
		case 5:
			func_5("CMN_FDIED" /* GXT: ~s~Franklin died. */);
			break;
		case 6:
			func_5("CMN_FLEFT" /* GXT: ~s~Franklin was left behind. */);
			break;
		case 7:
			func_5("FAM3_CDEAD");
			break;
		case 8:
			func_5("FAM3_CATTA");
			break;
		case 9:
			func_5("FAM3_CSPOOK");
			break;
		case 0:
		case 10:
			func_5("FAM3_FAIL");
			break;
	}
}

void func_5(char* sParam0)//Position - 0x62D
{
	__LIB_0__::func_381(sParam0);
	func_6(0);
}

void func_6(int iParam0)//Position - 0x640
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_7(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_7(int iParam0)//Position - 0x685
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_40();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_8(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
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

void func_8(var uParam0, int iParam1)//Position - 0x795
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_10(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_10(int iParam0, var uParam1, float fParam2)//Position - 0x969
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
			return func_10(8, uParam1, fParam2);
			break;
		case 10:
			return func_10(8, uParam1, fParam2);
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

int func_24(int iParam0)//Position - 0x1721
{
	struct<6> Var0;
	struct<6> Var1;
	struct<21> Var2;
	struct<20> Var3;
	switch (*iParam0)
	{
		case 0:
			__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), Local_241.f_2, Local_241.f_5, 0, 1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				__LIB_13__::func_762(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			MISC::SET_WEATHER_TYPE_NOW("CLOUDS");
			CLOCK::ADVANCE_CLOCK_TIME_TO(11, 0, 0);
			iLocal_676 = MISC::GET_GAME_TIMER();
			*iParam0++;
			break;
		case 1:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START(-97.12f, -410.58f, 35.89f, 0.31f, -0.9f, 0.5f, 500f, 0);
				iLocal_676 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_16__::func_302(10000, iLocal_676))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_669 = 0;
				*iParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(Local_305.f_7);
			STREAMING::REQUEST_ANIM_DICT("switch@michael@bench");
			if (STREAMING::HAS_MODEL_LOADED(Local_305.f_7) && STREAMING::HAS_ANIM_DICT_LOADED("switch@michael@bench"))
			{
				if (Global_78579 == 0)
				{
					if (iLocal_669 == 0)
					{
						iLocal_669 = MISC::GET_GAME_TIMER();
					}
					if (iLocal_669 != 0 && __LIB_16__::func_302(1000, iLocal_669))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_665))
						{
							iLocal_665 = PED::CREATE_SYNCHRONIZED_SCENE(-95.55f, -415.1f, 35.675f, 0f, 0f, 133f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_665, true);
							if (func_109(&Local_305, 0))
							{
								OBJECT::SET_OBJECT_TINT_INDEX(Local_305.f_0, __LIB_17__::func_166(__LIB_15__::func_944()));
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_305.f_0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_665, "switch@michael@bench", "bench_on_phone_idle_listen", 1000f, -1.5f, 1, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_305.f_7);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							HUD::DISPLAY_HUD(false);
							HUD::DISPLAY_RADAR(false);
							__LIB_0__::func_671(1);
							CAM::DESTROY_ALL_CAMS(false);
							iLocal_575 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
							CAM::SET_CAM_PARAMS(iLocal_575, -90.22699f, -417.33316f, 45.110085f, 37.580025f, -0.04153f, -165.6635f, 50f, 0, 1, 1, 2);
							CAM::SHAKE_CAM(iLocal_575, "HAND_SHAKE", 0.15f);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							*iParam0++;
						}
					}
				}
			}
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_665))
			{
				CAM::SET_CAM_PARAMS(iLocal_575, -90.22699f, -417.33316f, 45.110085f, 37.580025f, -0.04153f, -165.6635f, 50f, 0, 1, 1, 2);
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(2500);
				}
				if (!func_100("FAM3_LOUT_1"))
				{
					if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_LOUT", 7, 0, 0, 0))
					{
						func_96("FAM3_LOUT_1", 1);
						iLocal_674 = MISC::GET_GAME_TIMER();
						iLocal_675 = 0;
						*iParam0++;
					}
				}
			}
			break;
		case 4:
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_665))
			{
				switch (iLocal_675)
				{
					case 0:
						if ((MISC::GET_GAME_TIMER() - iLocal_674) > 250)
						{
							CAM::SET_CAM_PARAMS(iLocal_575, -90.22699f, -417.33316f, 45.110085f, 37.580025f, -0.04153f, -165.6635f, 50f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iLocal_575, -93.94202f, -413.06097f, 36.347176f, 7.278719f, 0f, 134.3314f, 50f, 14000, 1, 1, 2);
							iLocal_674 = MISC::GET_GAME_TIMER();
							iLocal_675 = 1;
						}
						break;
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_674) > 14000)
						{
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
							CAM::DESTROY_CAM(iLocal_575, false);
							iLocal_665 = PED::CREATE_SYNCHRONIZED_SCENE(-95.55f, -415.1f, 35.675f, 0f, 0f, 133f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_665, false);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_665, "switch@michael@bench", "exit_forward", 1.5f, -4f, 7, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							*iParam0++;
						}
						break;
					}
			}
			break;
		case 5:
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 265 /*INPUT_WHISTLE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_665))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_665) > 0.99f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							iLocal_685 = 1;
						}
						else
						{
							HUD::DISPLAY_HUD(true);
							HUD::DISPLAY_RADAR(true);
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_listen_base", 1000f, -1.5f, -1, 49, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						*iParam0++;
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_665) > 0.9f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (iLocal_687 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_687 = 1;
							}
						}
					}
				}
			}
			break;
		case 6:
			if (iLocal_685 == 1)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					iLocal_685 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_listen_base", 3))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 265 /*INPUT_WHISTLE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (iLocal_677 == 0)
					{
						if (func_100("FAM3_LOUT_1"))
						{
							if (__LIB_0__::func_75())
							{
								Var0 = { __LIB_0__::func_486() };
								Var1 = { __LIB_13__::func_743() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var0, "FAM3_LOUT") && MISC::ARE_STRINGS_EQUAL(&Var1, "FAM3_LOUT_17"))
									{
										__LIB_0__::func_325();
										__LIB_0__::func_638();
										iLocal_677 = 1;
									}
								}
							}
						}
					}
					if (func_100("FAM3_LOUT_1"))
					{
						if (!__LIB_0__::func_75())
						{
							Var2.f_4 = 1065353216;
							Var2.f_5 = 1065353216;
							Var2.f_9 = 1065353216;
							Var2.f_10 = 1065353216;
							Var2.f_14 = 1065353216;
							Var2.f_15 = 1065353216;
							Var2.f_17 = 1040187392;
							Var2.f_18 = 1040187392;
							Var2.f_19 = -1;
							Var3.f_4 = 1065353216;
							Var3.f_5 = 1065353216;
							Var3.f_9 = 1065353216;
							Var3.f_10 = 1065353216;
							Var3.f_14 = 1065353216;
							Var3.f_15 = 1065353216;
							Var3.f_17 = 1040187392;
							Var3.f_18 = 1040187392;
							Var3.f_19 = -1;
							Var2.f_0 = 1;
							Var2.f_1 = "switch@michael@bench";
							Var2.f_2 = "cellphone_call_out";
							Var2.f_20 = 32;
							Var2.f_17 = 1.5f;
							Var2.f_18 = -1.5f;
							Var2.f_16 = MISC::GET_HASH_KEY("bonemask_head_neck_and_r_arm");
							TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var2, &Var3, &Var3, 0.25f, 0.25f);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							*iParam0++;
						}
					}
				}
			}
			break;
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_out", 3))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 265 /*INPUT_WHISTLE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (!func_100("FAM3_LOUT_2"))
					{
						if (__LIB_17__::func_244(&uLocal_397, "FAM3AUD", "FAM3_LOUT", "FAM3_LOUT_19", 7, 0, 0))
						{
							func_96("FAM3_LOUT_2", 1);
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "switch@michael@bench", "cellphone_call_out") > 0.3f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_305.f_0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_305.f_0))
							{
								ENTITY::DETACH_ENTITY(Local_305.f_0, false, true);
							}
							OBJECT::DELETE_OBJECT(&Local_305);
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						*iParam0++;
					}
				}
			}
			break;
		case 8:
			if (!__LIB_0__::func_75())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_258.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_258.f_0, false))
					{
						__LIB_17__::func_477(Local_258.f_0, Local_258.f_2, Local_258.f_5, 24, 0);
					}
				}
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				__LIB_0__::func_671(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				STREAMING::REMOVE_ANIM_DICT("switch@michael@bench");
				return 1;
			}
			break;
	}
	return 0;
}

void func_96(char* sParam0, bool bParam1)//Position - 0x8F7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_100(sParam0))
		{
			iVar1 = iLocal_571;
			if (iLocal_572 < iVar1)
			{
				iLocal_571[iLocal_572] = iVar0;
				iLocal_572++;
			}
		}
	}
	else
	{
		iVar2 = func_98(iVar0);
		if (iVar2 != -1)
		{
			iLocal_571[iVar2] = 0;
			func_97();
			iLocal_572 = (iLocal_572 - 1);
		}
	}
}

void func_97()//Position - 0x8FE0
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_571;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_571[iVar1] == 0)
		{
			if (iLocal_571[iVar1 + 1] != 0)
			{
				iLocal_571[iVar1] = iLocal_571[iVar1 + 1];
				iLocal_571[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_98(int iParam0)//Position - 0x9037
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_572)
	{
		if (iLocal_571[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_100(char* sParam0)//Position - 0x90B6
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_98(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, bool bParam1)//Position - 0x9449
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_7);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_7))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_7, iParam0->f_1, true, true, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_1, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_4, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam1);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0xCBD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_17__::func_216("family_3_ext", 1))
			{
				switch (__LIB_15__::func_944())
				{
					case 0:
						if (!PED::IS_PED_INJURED(func_212(1)))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_212(1), "Franklin", 0, __LIB_0__::func_518(1), 0);
						}
						break;
					case 1:
						if (!PED::IS_PED_INJURED(func_212(0)))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_212(0), "Michael", 0, __LIB_0__::func_518(0), 0);
						}
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_287.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_287.f_0, false))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_287.f_0, true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_287.f_0, "Madrazos_Car", 1, joaat("baller"), 0);
					}
				}
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED(func_212(0)))
				{
					PED::REMOVE_PED_HELMET(func_212(0), true);
				}
				if (!PED::IS_PED_INJURED(func_212(1)))
				{
					PED::REMOVE_PED_HELMET(func_212(1), true);
				}
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_429();
				}
				AUDIO::STOP_AUDIO_SCENES();
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_END");
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(func_212(0)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_212(0), 0);
				}
				if (!PED::IS_PED_INJURED(func_212(1)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_212(1), 0);
				}
				iLocal_619 = 1;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -846.193f, 159.14116f, 66.49907f, 10f, 4f, 4f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -835.58966f, 158.53612f, 65.89433f, -827.6454f, 177.585f, 73.08789f, 8f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
							}
							__LIB_17__::func_168(iVar0);
							if (__LIB_17__::func_167(24) && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_343(24)))
							{
								ENTITY::SET_ENTITY_COORDS(iVar0, -821.2841f, 157.5416f, 69.2754f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar0, 95.1204f);
							}
							else
							{
								ENTITY::SET_ENTITY_COORDS(iVar0, -867.9103f, 158.2215f, 63.9014f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar0, 174.2918f);
							}
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_205, ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 15f)
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
							}
							__LIB_17__::func_168(iVar0);
							ENTITY::SET_ENTITY_COORDS(iVar0, Local_274.f_2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, __LIB_0__::func_373(bLocal_653, 126.8534f, Local_274.f_5));
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							ENTITY::SET_ENTITY_LOD_DIST(iVar0, 50);
							VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar0, 2f);
							if (__LIB_0__::func_527(iVar0, -824.8156f, 185.37852f, 69.95421f, -820.6133f, 179.7895f, 73.63923f, 7.5f))
							{
								if (__LIB_17__::func_167(24) && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_343(24)))
								{
									ENTITY::SET_ENTITY_COORDS(iVar0, -821.2841f, 157.5416f, 69.2754f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iVar0, 95.1204f);
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS(iVar0, -867.9103f, 158.2215f, 63.9014f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iVar0, 174.2918f);
								}
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							}
						}
					}
					if (iVar0 != Local_274.f_0)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_274);
					}
				}
				if (!PED::IS_PED_INJURED(func_212(0)))
				{
					PED::CLEAR_PED_BLOOD_DAMAGE(func_212(0));
					PED::RESET_PED_VISIBLE_DAMAGE(func_212(0));
				}
				if (!PED::IS_PED_INJURED(func_212(1)))
				{
					PED::CLEAR_PED_BLOOD_DAMAGE(func_212(1));
					PED::RESET_PED_VISIBLE_DAMAGE(func_212(1));
				}
				MISC::CLEAR_AREA_OF_PEDS(Local_205, 1000f, 0);
				MISC::CLEAR_AREA_OF_COPS(Local_205, 1000f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_205, 1000f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_205, 1000f, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, false, true);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(true);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				switch (iLocal_670)
				{
					case 0:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 14500f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_287.f_0, false))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_287.f_0, true, true, false);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_287.f_0, 3);
								iLocal_670++;
							}
						}
						break;
					case 1:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 19200f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_287.f_0, false))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_287.f_0, false, false, false);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_287.f_0, 4);
								iLocal_670++;
							}
						}
						break;
					case 2:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 127760f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_287.f_0, false))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_287.f_0, true, true, false);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_287.f_0, 3);
								iLocal_670++;
							}
						}
						break;
					case 3:
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 131850f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_287.f_0, false))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(Local_287.f_0, 4);
								iLocal_670++;
							}
						}
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (__LIB_15__::func_944() != 0)
				{
					if (__LIB_17__::func_760(&iLocal_315, 0))
					{
						__LIB_32__::func_7(&iLocal_315, 1, 1, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Madrazos_Car", 0))
			{
				func_125(&Local_287, 1, 1);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, false, true);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				if (__LIB_17__::func_80() == 1)
				{
					iVar2 = __LIB_0__::func_343(24);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
						{
							__LIB_17__::func_232(func_212(1), iVar2, &(Global_99845[1 /*98*/]), &(Global_100148[1 /*3*/]), &(Global_100158[1]), &(Global_100140[1]), &(Global_4541522[1]), 0);
							__LIB_17__::func_477(iVar2, -25.02f, -1467.7142f, 29.7815f, 275.6534f, 24, 0);
							MISC::CLEAR_AREA(-867.91f, 158.22f, 63.9f, 5f, true, false, false, false);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_212(1)))
				{
					Local_239.f_0 = func_212(1);
					iLocal_315[1] = Local_239.f_0;
					PED::DELETE_PED(&Local_239);
				}
				func_125(&Local_287, 1, 1);
				*iParam0++;
			}
			break;
		case 3:
			__LIB_0__::func_46(1, 1);
			*iParam0++;
			break;
		case 4:
			if (Global_78579 == 1)
			{
				*iParam0++;
			}
			break;
		case 5:
			if (!__LIB_0__::func_2(0))
			{
				return 1;
			}
			else if (Global_78579 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_125(int* iParam0, int iParam1, int iParam2)//Position - 0xD91F
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
			else if (iParam2 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
				}
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam0, 0f);
					VEHICLE::DELETE_VEHICLE(iParam0);
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_11 = 0;
		iParam0->f_12 = 0;
		iParam0->f_13 = 0;
		iParam0->f_17 = { 0f, 0f, 0f };
		iParam0->f_20 = 0f;
		iParam0->f_21 = 0f;
	}
}

int func_212(int iParam0)//Position - 0x15D3B
{
	if (__LIB_15__::func_944() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_315[__LIB_0__::func_682(iParam0)];
}

int func_216(int iParam0)//Position - 0x15DE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	MISC::SET_BIT(&(Local_373.f_13), 20);
	__LIB_11__::func_618();
	func_391();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	func_308(&iLocal_632);
	if (iLocal_311 == 1)
	{
		if (iLocal_636 == 1)
		{
			if (!__LIB_0__::func_477())
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_311 = 0;
				}
				else if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					if (__LIB_1__::func_606(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1))
					{
						iLocal_311 = 0;
					}
				}
			}
		}
		if (iLocal_312 == 0)
		{
			__LIB_17__::func_78(&iLocal_315, 1, 1);
			iLocal_312 = 1;
		}
		if (iLocal_313 == 0)
		{
			if (!func_100("FAM3_HSWITCH2"))
			{
				if (iLocal_314 == 0)
				{
					iLocal_314 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_16__::func_302(30000, iLocal_314))
				{
					__LIB_0__::func_151("FAM3_HSWITCH", 12500);
					func_96("FAM3_HSWITCH2", 1);
				}
			}
		}
	}
	func_296(&iLocal_595);
	func_295(&Local_219);
	func_295(&Local_222);
	func_295(&cLocal_225);
	func_295(&cLocal_228);
	func_295(&Local_231);
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_594))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			iLocal_594 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_ray_fam3_dust_settle", -1016f, 642f, 141f, 0f, 0f, 0f, 1f, false, false, false, false);
		}
	}
	switch (__LIB_15__::func_944())
	{
		case 0:
			func_284(func_212(1), &Local_239, PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), iLocal_635);
			if (!HUD::DOES_BLIP_EXIST(Local_373.f_5) && !HUD::DOES_BLIP_EXIST(Local_373.f_1[0]))
			{
				if (Local_239.f_15 > 50f)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_239.f_1))
					{
						Local_239.f_1 = __LIB_0__::func_511(func_212(1), 1, 0);
					}
					if (!func_100(&cLocal_225))
					{
						func_281(&cLocal_225, 7500, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_239.f_1))
				{
					if (Local_239.f_15 <= (50f / 3f))
					{
						if (__LIB_0__::func_501(&cLocal_225, 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						HUD::REMOVE_BLIP(&(Local_239.f_1));
					}
				}
			}
			if (iLocal_635 == 1)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_MICHAEL"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_MICHAEL");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_FRANKLIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_FRANKLIN");
				}
			}
			break;
		case 1:
			func_284(func_212(0), &Local_239, PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), iLocal_635);
			if (HUD::DOES_BLIP_EXIST(Local_373.f_5) && !HUD::DOES_BLIP_EXIST(Local_373.f_1[0]))
			{
				if (Local_239.f_15 > 50f)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_241.f_1))
					{
						Local_241.f_1 = __LIB_0__::func_511(func_212(0), 1, 0);
					}
					if (!func_100(&cLocal_228))
					{
						func_281(&cLocal_228, 7500, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_241.f_1))
				{
					if (Local_241.f_15 <= (50f / 3f))
					{
						if (__LIB_0__::func_501(&cLocal_228, 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						HUD::REMOVE_BLIP(&(Local_241.f_1));
					}
				}
			}
			if (iLocal_635 == 1)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_FRANKLIN"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_FRANKLIN");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_MICHAEL"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_MICHAEL");
				}
			}
			break;
	}
	if (iLocal_636 == 1)
	{
		if (__LIB_0__::func_719() || __LIB_6__::func_181())
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_3_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_205, true) < 100f)
		{
			STREAMING::REQUEST_MODEL(joaat("baller"));
			CUTSCENE::REQUEST_CUTSCENE("family_3_ext", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(func_212(0)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_212(0), 0);
				}
				if (!PED::IS_PED_INJURED(func_212(1)))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_212(1), 0);
				}
				iLocal_619 = 1;
			}
		}
		else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_3_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
			iLocal_619 = 0;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (iLocal_635 == 0)
			{
				if (iLocal_603 == 1)
				{
					if (iLocal_636 == 0)
					{
						if (func_277(&Local_373, Local_205, -824.81f, 185.38f, 69.95f, -820.61f, 179.79f, 73.64f, 8.5f, 1, func_212(1), &Local_219, &cLocal_225, 0, 1, 1, -1))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
								{
									__LIB_0__::func_325();
									__LIB_0__::func_638();
									iLocal_622 = 1;
									SYSTEM::SETTIMERA(0);
									iLocal_636 = 1;
									*iParam0++;
								}
							}
							else
							{
								__LIB_0__::func_325();
								__LIB_0__::func_638();
								iLocal_622 = 1;
								SYSTEM::SETTIMERA(0);
								iLocal_636 = 1;
								*iParam0++;
							}
						}
					}
					else
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_MICHAEL"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_MICHAEL");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ESCAPE_AS_FRANKLIN"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ESCAPE_AS_FRANKLIN");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_DRIVE_HOME"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								AUDIO::START_AUDIO_SCENE("FAMILY_3_DRIVE_HOME");
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_239.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_239.f_1));
						}
						if (HUD::DOES_BLIP_EXIST(Local_241.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_241.f_1));
						}
						if (__LIB_0__::func_1("FAM3_HSWITCH"))
						{
							HUD::CLEAR_HELP(true);
						}
						if (!func_100("FAM3_HSTAT1"))
						{
							if (func_100("FAM3_STATA") || func_100("FAM3_STATB"))
							{
								if (iLocal_623 == 1)
								{
									if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
									{
										__LIB_0__::func_151("FAM3_HSTAT1", 12500);
										func_96("FAM3_HSTAT1", 1);
									}
								}
							}
						}
						else if (!func_100("FAM3_HSTAT2"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (!__LIB_0__::func_1("FAM3_HSTAT1"))
								{
									__LIB_0__::func_151("FAM3_HSTAT2", 12500);
									func_96("FAM3_HSTAT2", 1);
								}
							}
						}
						switch (__LIB_15__::func_944())
						{
							case 0:
								func_234(&Local_373, Local_205, __LIB_15__::func_996(), 1, func_212(1), &Local_219, &cLocal_225, 0, 1, !iLocal_640, -1);
								break;
							case 1:
								func_234(&Local_373, Local_205, __LIB_15__::func_996(), 1, func_212(0), &Local_219, &cLocal_228, 0, 1, !iLocal_640, -1);
								break;
						}
						if (iLocal_640 == 0)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								{
									if (func_100(&Local_231))
									{
										iLocal_640 = 1;
									}
								}
							}
						}
						else if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								StringCopy(&Local_231, "LOSE_WANTED" /* GXT: Lose the Cops. */, 16);
								iLocal_640 = 0;
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
						{
							if (__LIB_1__::func_854(func_212(0), func_212(1)))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_212(0), -824.81f, 185.38f, 69.95f, -820.61f, 179.79f, 73.64f, 8.5f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_212(1), -824.81f, 185.38f, 69.95f, -820.61f, 179.79f, 73.64f, 8.5f, false, true, 0))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										__LIB_16__::func_21(&Local_373, 0);
										__LIB_0__::func_325();
										__LIB_0__::func_638();
										iLocal_622 = 1;
										SYSTEM::SETTIMERA(0);
										*iParam0++;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(func_212(0), -823.28f, 180.69f, 71.63f, 8f, 8f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(func_212(1), -823.28f, 180.69f, 71.63f, 8f, 8f, 3f, false, true, 0))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										__LIB_16__::func_21(&Local_373, 0);
										__LIB_0__::func_325();
										__LIB_0__::func_638();
										iLocal_622 = 1;
										SYSTEM::SETTIMERA(0);
										*iParam0++;
									}
								}
								else
								{
									__LIB_16__::func_21(&Local_373, 0);
									__LIB_0__::func_325();
									__LIB_0__::func_638();
									iLocal_622 = 1;
									SYSTEM::SETTIMERA(0);
									*iParam0++;
								}
							}
						}
					}
				}
			}
			else
			{
				if (iLocal_603 == 1)
				{
					__LIB_16__::func_21(&Local_373, 0);
					PED::SET_PED_CONFIG_FLAG(func_212(0), 32, false);
					PED::SET_PED_CONFIG_FLAG(func_212(1), 32, false);
					iLocal_603 = 0;
				}
				if (iLocal_639 == 0)
				{
					if (__LIB_1__::func_854(func_212(0), func_212(1)))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							if (__LIB_2__::func_837(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) != -1)
							{
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								{
									iLocal_639 = 1;
								}
							}
						}
					}
				}
				if (iLocal_638 == 0)
				{
					if (iLocal_634 == 0)
					{
						if (((func_225(PLAYER::PLAYER_PED_ID(), Local_714[0 /*18*/], 1, 1089470464) || func_225(PLAYER::PLAYER_PED_ID(), Local_714[1 /*18*/], 1, 1089470464)) || func_225(PLAYER::PLAYER_PED_ID(), Local_714[0 /*18*/], 1, 1089470464)) || func_225(PLAYER::PLAYER_PED_ID(), Local_715[1 /*18*/], 1, 1089470464))
						{
							iLocal_634 = 1;
						}
					}
					if ((func_100("FAM3_GCSGS") || func_100("FAM3_GCSGT")) || iLocal_634 == 1)
					{
						iLocal_638 = 1;
					}
				}
				if (!func_100("FAM3_LGOONS"))
				{
					if (func_100("FAM3_GCSFA") || func_100("FAM3_GCSFB"))
					{
						if (!__LIB_13__::func_755(&Local_373, 1))
						{
							func_281("FAM3_LGOONS", 7500, 1);
						}
					}
				}
				else if (iLocal_638 == 1)
				{
					iLocal_311 = 1;
					if (PED::IS_PED_IN_ANY_VEHICLE(func_212(0), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(func_212(0), true);
						if (ENTITY::DOES_ENTITY_EXIST(iVar0))
						{
							if ((!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
							{
								iLocal_311 = 0;
							}
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(func_212(1), false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(func_212(1), true);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if ((!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar1)))
							{
								iLocal_311 = 0;
							}
						}
					}
					if (!func_100("FAM3_HSWITCH"))
					{
						if (iLocal_311 == 1)
						{
							__LIB_0__::func_151("FAM3_HSWITCH", 12500);
							func_96("FAM3_HSWITCH", 1);
						}
					}
					else
					{
						if (__LIB_0__::func_1("FAM3_HSWITCH"))
						{
							if ((__LIB_0__::func_477() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || iLocal_313 == 1)
							{
								HUD::CLEAR_HELP(true);
							}
						}
						if (!func_100("FAM3_HPASS1"))
						{
							if (__LIB_1__::func_854(func_212(0), func_212(1)))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
								{
									if (__LIB_2__::func_837(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) != -1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											__LIB_0__::func_151("FAM3_HPASS1", 12500);
											func_96("FAM3_HPASS1", 1);
										}
									}
								}
							}
						}
						else if (!func_100("FAM3_HPASS2"))
						{
							if (__LIB_1__::func_854(func_212(0), func_212(1)))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
								{
									if (__LIB_2__::func_837(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) != -1)
									{
										if (iLocal_639 == 1)
										{
											if ((((((((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG"), false) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SAWNOFFSHOTGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMOKEGRENADE"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MOLOTOV"), false))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													__LIB_0__::func_151(__LIB_1__::func_295(PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/), "FAM3_HPASS3", "FAM3_HPASS2"), 12500);
													func_96("FAM3_HPASS2", 1);
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
			break;
		case 1:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (bLocal_653 == 0)
				{
					if (__LIB_17__::func_226(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
					{
						bLocal_653 = true;
					}
				}
				if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2f, 1, 1056964608, 0, 1, 0))
				{
					if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !__LIB_0__::func_75()) || SYSTEM::TIMERA() > 5000)
					{
						func_217();
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_672, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(func_212(0), iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_673, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(func_212(1), iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						iLocal_680 = 1;
						*iParam0++;
					}
				}
			}
			else if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !__LIB_0__::func_75()) || SYSTEM::TIMERA() > 5000)
			{
				*iParam0++;
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_ANY_VEHICLE(func_212(0), false) && !PED::IS_PED_IN_ANY_VEHICLE(func_212(1), false))
			{
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !__LIB_0__::func_75()) || SYSTEM::TIMERA() > 5000)
				{
					if (iLocal_619 == 1)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_212(0), 0f);
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_212(1), 0f);
						AUDIO::STOP_AUDIO_SCENE("FAMILY_3_DRIVE_HOME");
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_594))
						{
							GRAPHICS::REMOVE_PARTICLE_FX(iLocal_594, false);
						}
						STREAMING::REMOVE_PTFX_ASSET();
						return 1;
					}
				}
			}
			else if (iLocal_680 == 0)
			{
				func_217();
				if (PED::IS_PED_IN_ANY_VEHICLE(func_212(0), false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_212(0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_672, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_PERFORM_SEQUENCE(func_212(0), iVar3);
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(func_212(0), false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_212(0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, iLocal_673, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -819.05f, 177.24f, 70.83f, 1f, 60000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_PERFORM_SEQUENCE(func_212(1), iVar3);
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					}
				}
				iLocal_680 = 1;
			}
			break;
	}
	return 0;
}

void func_217()//Position - 0x16C7C
{
	int iVar0;
	iLocal_672 = 0;
	iLocal_673 = 250;
	if ((!PED::IS_PED_INJURED(func_212(0)) && !PED::IS_PED_INJURED(func_212(1))) && __LIB_1__::func_854(func_212(0), func_212(1)))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(func_212(0));
		if (__LIB_1__::func_483(func_212(0), iVar0) && __LIB_1__::func_483(func_212(1), iVar0))
		{
			switch (__LIB_2__::func_837(func_212(0), iVar0))
			{
				case -1:
					switch (__LIB_2__::func_837(func_212(1), iVar0))
					{
						case 1:
							iLocal_672 = 1250;
							iLocal_673 = 0;
							break;
						default:
							iLocal_672 = 0;
							iLocal_673 = 250;
							break;
					}
					break;
				case 1:
					switch (__LIB_2__::func_837(func_212(1), iVar0))
					{
						case -1:
							iLocal_672 = 0;
							iLocal_673 = 1250;
							break;
						default:
							iLocal_672 = 0;
							iLocal_673 = 250;
							break;
					}
					break;
				default:
					iLocal_672 = 0;
					iLocal_673 = 250;
					break;
				}
			}
	}
}

int func_225(int iParam0, int iParam1, bool bParam2, float fParam3)//Position - 0x17012
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (bParam2 == 1)
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam1, true), fParam3, bParam2))
				{
					return 1;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam0, false))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_234(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x173E3
{
	return func_235(iParam0, Param1, Param2, bParam3, iParam4, 0, 0, sParam5, sParam6, sParam6, sParam6, sParam6, bParam7, bParam8, bParam9, iParam10);
}

int func_235(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x17411
{
	return func_236(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 1, uParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, __LIB_0__::func_591(), bParam12, bParam13, __LIB_0__::func_591(), 0, 0, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_236(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)//Position - 0x1745E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = uParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = uParam7;
	__LIB_0__::func_590(iParam0);
	__LIB_0__::func_589(iParam0);
	__LIB_0__::func_496();
	if (__LIB_15__::func_945(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		__LIB_0__::func_576(sParam12);
		__LIB_0__::func_576(sParam13);
		__LIB_0__::func_576(sParam14);
		__LIB_0__::func_576(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 23);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (__LIB_13__::func_792(iParam0, iParam21))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				__LIB_0__::func_576(sParam16);
				__LIB_0__::func_576(sParam19);
				__LIB_0__::func_576("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						__LIB_0__::func_576(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!__LIB_13__::func_755(iParam0, 1) && !__LIB_0__::func_573(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							__LIB_0__::func_572(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!__LIB_13__::func_755(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = __LIB_0__::func_488(Var3, 0);
						if (!iParam23 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							__LIB_0__::func_571(iParam0->f_5, iParam0);
						}
					}
					else if (!__LIB_0__::func_490(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam27)
						{
							__LIB_0__::func_571(iParam0->f_5, iParam0);
						}
					}
					if (!__LIB_13__::func_755(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							__LIB_0__::func_572(iParam0, sParam11, 0);
							MISC::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param3, Param4, fParam28, false, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], __LIB_0__::func_495()) || !__LIB_13__::func_742(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (__LIB_13__::func_754(iParam0))
							{
								__LIB_0__::func_576(sParam11);
								__LIB_0__::func_576(sParam16);
								__LIB_0__::func_576(sParam12);
								__LIB_0__::func_576(sParam13);
								__LIB_0__::func_576(sParam14);
								__LIB_0__::func_576(sParam15);
								__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
								__LIB_0__::func_576("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
								__LIB_0__::func_576(sParam19);
								__LIB_13__::func_815(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					__LIB_0__::func_576(sParam16);
					__LIB_0__::func_576(sParam19);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						__LIB_0__::func_576(sParam11);
					}
					if ((!__LIB_13__::func_755(iParam0, 1) && !__LIB_0__::func_573(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							__LIB_0__::func_572(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!__LIB_13__::func_755(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								__LIB_0__::func_576(sParam11);
							}
							*iParam0 = __LIB_0__::func_639(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								__LIB_0__::func_571(*iParam0, iParam0);
							}
						}
						if (!__LIB_13__::func_755(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										__LIB_0__::func_572(iParam0, sParam19, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									__LIB_0__::func_572(iParam0, sParam16, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										__LIB_0__::func_640(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					__LIB_0__::func_576(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!__LIB_13__::func_755(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar7]))
									{
										__LIB_0__::func_640(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									__LIB_0__::func_572(iParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									__LIB_0__::func_572(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!__LIB_13__::func_755(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							__LIB_0__::func_572(iParam0, sParam16, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									__LIB_0__::func_572(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		__LIB_0__::func_576(sParam11);
		__LIB_0__::func_576(sParam16);
		__LIB_0__::func_576(sParam19);
		__LIB_0__::func_576(sParam16);
		__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	MISC::CLEAR_BIT(&(iParam0->f_13), 11);
	MISC::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

bool func_277(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x19B9E
{
	return func_236(iParam0, Param1, __LIB_15__::func_996(), Param2, Param3, bParam5, 1, iParam6, 0, 0, 0, sParam7, sParam8, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), bParam9, bParam10, __LIB_0__::func_591(), 1, 0, bParam11, iParam12, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 1, fParam4);
}

void func_281(char* sParam0, int iParam1, bool bParam2)//Position - 0x19C30
{
	if (!func_100(sParam0))
	{
		__LIB_0__::func_382(sParam0, iParam1, 1);
		func_96(sParam0, bParam2);
	}
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19D10
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false))
		{
			iParam1->f_15 = __LIB_0__::func_76(iParam0, iParam2, 1);
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Local_205, true);
			PED::SET_PED_RESET_FLAG(iParam0, 64, true);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, false);
			if (iParam4 == 1)
			{
				if (iLocal_638 == 1)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("WEAPON_PISTOL")) < WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, joaat("WEAPON_PISTOL"), true))
					{
						WEAPON::ADD_AMMO_TO_PED(iParam0, joaat("WEAPON_PISTOL"), WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, joaat("WEAPON_PISTOL"), true));
					}
				}
			}
			switch (iParam1->f_16)
			{
				case 0:
					if (iParam1->f_13 == 0)
					{
						WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
						WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_PISTOL"), WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, joaat("WEAPON_PISTOL"), true) * 6, false, true);
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_PISTOL"), false);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
						__LIB_17__::func_479(iParam0, 400);
						if (!PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_495()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0, __LIB_0__::func_495());
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0, 0);
							PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iParam0, __LIB_0__::func_495(), true);
							PED::SET_PED_CONFIG_FLAG(iParam0, 268, false);
						}
						PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
						PED::SET_PED_CONFIG_FLAG(iParam0, 229, true);
						PED::SET_PED_CONFIG_FLAG(iParam0, 174, true);
						PED::SET_COMBAT_FLOAT(iParam0, 12, 1f);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 54, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 46, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0, "FAMILY_3_BUDDY_GROUP", 0f);
						iParam1->f_13 = 1;
					}
					func_292(iParam1, 13);
					break;
				case 13:
					if (iParam1->f_13 == 0)
					{
						if (!PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_495()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0, __LIB_0__::func_495());
						}
						PED::SET_GROUP_SEPARATION_RANGE(__LIB_0__::func_495(), 50f);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0, 0);
						PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iParam0, __LIB_0__::func_495(), true);
						PED::SET_PED_ACCURACY(iParam0, 20);
						PED::SET_PED_SHOOT_RATE(iParam0, 115);
						PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
						PED::SET_COMBAT_FLOAT(iParam0, 5, 0.9f);
						PED::SET_COMBAT_FLOAT(iParam0, 8, 0f);
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam2, 0f, 0f, 0f, 5f, false);
						PED::SET_PED_CAN_RAGDOLL(iParam0, true);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, false);
						PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
						PED::SET_PED_CONFIG_FLAG(iParam0, 268, false);
						PED::SET_PED_CONFIG_FLAG(iParam0, 281, true);
						PED::SET_PED_CONFIG_FLAG(iParam0, 174, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
						if (iLocal_657 == 1)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PED::SET_CREATE_RANDOM_COPS(true);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							iLocal_657 = 0;
						}
						iParam1->f_13 = 1;
					}
					if (iParam1->f_13 == 1)
					{
						if (iParam4 == 1)
						{
							if (iLocal_638 == 0)
							{
								if (__LIB_2__::func_789(iParam0, iParam3, 0))
								{
									if (__LIB_1__::func_483(iParam0, iParam3))
									{
										if (Local_713[0 /*22*/].f_12 == 1 || Local_713[1 /*22*/].f_12 == 1)
										{
											func_292(iParam1, 6);
										}
									}
								}
							}
						}
						if (iParam1->f_15 > 50f || !PED::IS_PED_GROUP_MEMBER(*iParam1, __LIB_0__::func_495()))
						{
							func_292(iParam1, 14);
						}
					}
					if (iLocal_656 == 0)
					{
						if (iLocal_636 == 1 && iLocal_635 == 0)
						{
							if ((PED::IS_PED_IN_COVER(iParam0, false) || PED::IS_PED_GOING_INTO_COVER(iParam0)) || PED::IS_PED_IN_COMBAT(iParam0, 0))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
							}
							iLocal_656 = 1;
						}
					}
					break;
				case 14:
					if (iParam1->f_13 == 0)
					{
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam2, 0f, 0f, 0f, 7.5f, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
						iParam1->f_13 = 1;
					}
					if (iParam1->f_13 == 1)
					{
						if (iParam1->f_15 <= (50f / 3f))
						{
							func_292(iParam1, 13);
						}
					}
					break;
				case 4:
					if (iParam1->f_13 == 0)
					{
						if (__LIB_1__::func_483(iParam0, iParam3))
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iParam3, true), 5, 2.5f, 786469, 5f, 5f, true);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
						iParam1->f_13 = 1;
					}
					if (__LIB_1__::func_483(iParam2, iParam3))
					{
						if (iParam4 == 1)
						{
							func_292(iParam1, 10);
						}
						else
						{
							func_292(iParam1, 12);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						func_292(iParam1, 13);
					}
					break;
				case 6:
					if (iParam1->f_13 == 0)
					{
						if (!func_290(iParam0))
						{
							if (__LIB_1__::func_483(iParam0, iParam3))
							{
								STREAMING::REQUEST_ANIM_DICT("missfam3");
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
								{
									func_289(iParam0, __LIB_2__::func_837(iParam0, iParam3), 6000, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
								}
							}
						}
						else
						{
							iParam1->f_7 = MISC::GET_GAME_TIMER();
							iParam1->f_13 = 1;
						}
					}
					if (func_290(iParam0))
					{
						if (__LIB_16__::func_302(2000, iParam1->f_7))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
							}
							iVar1 = func_288(iParam0, 100f, joaat("baller"));
							if (ENTITY::DOES_ENTITY_EXIST(iParam3) && ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar1) };
								Var2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
								fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var2.f_0, Var2.f_1, Var3.f_0, Var3.f_1);
								Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar1, ENTITY::GET_ENTITY_COORDS(iParam0, false)) };
								if (Var4.f_1 < 0f || fVar5 > 100f)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
								}
							}
						}
					}
					if (iLocal_638 == 1)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
						STREAMING::REMOVE_ANIM_DICT("missfam3");
						func_292(iParam1, 13);
					}
					break;
				case 10:
					if (iParam1->f_13 == 0)
					{
						func_287(&Local_714, &iVar6);
						func_287(&Local_715, &iVar7);
						if (iVar6 != -1 && iVar7 != -1)
						{
							if (Local_714[iVar6 /*18*/].f_15 <= Local_715[iVar7 /*18*/].f_15)
							{
								iVar8 = Local_714[iVar6 /*18*/];
							}
							else
							{
								iVar8 = Local_715[iVar7 /*18*/];
							}
						}
						else if (iVar6 != -1)
						{
							iVar8 = Local_714[iVar6 /*18*/];
						}
						else if (iVar7 != -1)
						{
							iVar8 = Local_715[iVar7 /*18*/];
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(iParam0, -804.86f, 166.51f, 70.56f, 36f, 24f, 12f, false, true, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar8))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iVar8, false), 8, 25f, 1074266172, 500f, 10f, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iParam3, true), 8, 26f, 1074266172, 500f, 10f, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
								iParam1->f_7 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							func_292(iParam1, 7);
						}
						iParam1->f_13 = 1;
					}
					if (iParam4 == 0)
					{
						if (iLocal_649 == 0)
						{
							func_292(iParam1, 10);
							iLocal_649 = 1;
						}
						if (iLocal_648 == 0)
						{
							iLocal_648 = MISC::GET_GAME_TIMER();
						}
						if (((iLocal_648 != 0 && __LIB_16__::func_302(12500, iLocal_648)) || func_100("FAM3_GCEM")) || func_100("FAM3_GCEF"))
						{
							func_292(iParam1, 12);
						}
					}
					else
					{
						switch (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
						{
							case 1:
								if (__LIB_16__::func_302(5000, iParam1->f_7))
								{
									func_292(iParam1, 10);
								}
								break;
							case 7:
								func_292(iParam1, 10);
								break;
							}
					}
					if (!__LIB_2__::func_789(iParam2, iParam3, 0))
					{
						func_292(iParam1, 4);
					}
					if (__LIB_2__::func_789(iParam0, iParam3, 0) && __LIB_2__::func_789(iParam2, iParam3, 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, -804.86f, 166.51f, 70.56f, 36f, 24f, 12f, false, true, 0))
						{
							TASK::CLEAR_PED_TASKS(iParam0);
							func_292(iParam1, 7);
						}
					}
					break;
				case 11:
					if (iParam1->f_13 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						iVar9 = __LIB_17__::func_169(iParam0, joaat("COP"), 0, 0, 28);
						if (ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam0, iParam3, iVar9, 8, 30f, 1074266172, 400f, 100f, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
							iParam1->f_7 = MISC::GET_GAME_TIMER();
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, ENTITY::GET_ENTITY_COORDS(iParam3, true), 8, 25f, 1074266172, 400f, 100f, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
							iParam1->f_7 = MISC::GET_GAME_TIMER();
						}
						iParam1->f_13 = 1;
					}
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							func_292(iParam1, 12);
						}
						else
						{
							switch (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
							{
								case 1:
									if (__LIB_16__::func_302(5000, iParam1->f_7))
									{
										func_292(iParam1, 11);
									}
									break;
								case 7:
									func_292(iParam1, 11);
									break;
								}
							}
					}
					if (!__LIB_2__::func_789(iParam2, iParam3, 0))
					{
						func_292(iParam1, 4);
					}
					break;
				case 12:
					if (iParam1->f_13 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam3))
						{
							func_285(ENTITY::GET_ENTITY_COORDS(iParam3, true));
							PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_660, fLocal_661, fLocal_662, fLocal_663);
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_660, fLocal_661, fLocal_662, fLocal_663))
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam3, Local_205, 4, 20f, 1074266251, 1f, 2f, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
								iParam1->f_13 = 1;
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam3))
					{
						func_285(ENTITY::GET_ENTITY_COORDS(iParam3, true));
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_660, fLocal_661, fLocal_662, fLocal_663);
					}
					if (iParam4 == 1)
					{
						if (fVar0 < 125f)
						{
							func_292(iParam1, 10);
						}
					}
					if (__LIB_1__::func_483(iParam0, iParam3))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam3, -847.36f, 159.09f, 66.32f, 8f, 3.5f, 3f, false, true, 0))
						{
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0, 10f);
							if (iLocal_657 == 0)
							{
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
									{
										PLAYER::SET_MAX_WANTED_LEVEL(0);
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
										PED::SET_CREATE_RANDOM_COPS(false);
										iLocal_657 = 1;
									}
								}
							}
						}
					}
					if (!__LIB_2__::func_789(iParam2, iParam3, 0))
					{
						func_292(iParam1, 4);
					}
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							func_292(iParam1, 11);
						}
					}
					break;
				case 2:
					if (iParam1->f_13 == 0)
					{
						if (!PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_495()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0, __LIB_0__::func_495());
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0, 0);
							PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iParam0, __LIB_0__::func_495(), true);
							PED::SET_PED_CONFIG_FLAG(iParam0, 268, true);
						}
						TASK::TASK_ENTER_VEHICLE(iParam0, iParam3, 20000, -2, 2f, 1, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
						iParam1->f_13 = 1;
					}
					if (__LIB_1__::func_483(iParam0, iParam3))
					{
						func_292(iParam1, 13);
					}
					break;
				case 7:
					if (iParam1->f_13 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						if (PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_495()))
						{
							PED::REMOVE_PED_FROM_GROUP(iParam0);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
						PED::SET_COMBAT_FLOAT(iParam0, 5, 0.9f);
						PED::SET_COMBAT_FLOAT(iParam0, 8, 0f);
						PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, iParam2, 0f, 0f, 0f, 5f, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 250f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
						iParam1->f_13 = 1;
					}
					if (iParam4 == 0)
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						func_292(iParam1, 13);
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iParam2, false))
					{
						func_292(iParam1, 13);
					}
					break;
				case 15:
					if (iParam1->f_13 == 0)
					{
						if (iLocal_657 == 1)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PED::SET_CREATE_RANDOM_COPS(true);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							iLocal_657 = 0;
						}
						iParam1->f_13 = 1;
					}
					if (__LIB_2__::func_789(iParam0, iParam3, 0))
					{
						if (__LIB_1__::func_483(iParam0, iParam3))
						{
							switch (__LIB_2__::func_837(iParam0, iParam3))
							{
								case -1:
									if (iParam4 == 1)
									{
										func_292(iParam1, 10);
									}
									else
									{
										func_292(iParam1, 12);
									}
									break;
								default:
									func_292(iParam1, 13);
									break;
								}
						}
					}
					else
					{
						func_292(iParam1, 13);
					}
					break;
				}
			}
	}
}

void func_285(struct<2> Param0, Vector3 vParam1)//Position - 0x1A8D6
{
	if (Param0.f_0 < Local_205.f_0)
	{
		fLocal_660 = (Param0.f_0 - 25f);
		fLocal_662 = (Local_205.f_0 + 25f);
	}
	else if (Param0.f_0 > Local_205.f_0)
	{
		fLocal_660 = (Local_205.f_0 - 25f);
		fLocal_662 = (Param0.f_0 + 25f);
	}
	if (Param0.f_1 < Local_205.f_1)
	{
		fLocal_661 = (Param0.f_1 - 25f);
		fLocal_663 = (Local_205.f_1 + 25f);
	}
	else if (Param0.f_1 > Local_205.f_1)
	{
		fLocal_661 = (Local_205.f_1 - 25f);
		fLocal_663 = (Param0.f_1 + 25f);
	}
}

int func_287(var uParam0, var uParam1)//Position - 0x1AA7B
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	fVar3 = 500f;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*18*/], false))
			{
				fVar2 = (uParam0[iVar0 /*18*/])->f_15;
				if (fVar2 < fVar3)
				{
					fVar3 = fVar2;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
		*uParam1 = iVar1;
		return 0;
	}
	*uParam1 = iVar1;
	return (*uParam0)[iVar1 /*18*/];
}

int func_288(int iParam0, float fParam1, int iParam2)//Position - 0x1AAFC
{
	int iVar0;
	struct<3> Var1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Var1, fParam1, iParam2, 2146);
	}
	return iVar0;
}

void func_289(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1AB2B
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			switch (iParam1)
			{
				case -1:
				case 1:
					sVar0 = "incar_lookbehind_enter_driver";
					sVar1 = "incar_lookbehind_idle_driver";
					sVar2 = "incar_lookbehind_exit_driver";
					break;
				case 0:
				case 2:
					sVar0 = "incar_lookbehind_enter_passenger";
					sVar1 = "incar_lookbehind_idle_passenger";
					sVar2 = "incar_lookbehind_exit_passenger";
					break;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_PLAY_ANIM(0, "missfam3", sVar0, 4f, -8f, -1, 16 | iParam3, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "missfam3", sVar1, 8f, -8f, iParam2, 16 | iParam3 | 1, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "missfam3", sVar2, 8f, -4f, -1, 16 | iParam3, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

int func_290(int iParam0)//Position - 0x1AC0C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_enter_driver", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_driver", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_exit_driver", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_enter_passenger", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_exit_passenger", 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_292(int iParam0, int iParam1)//Position - 0x1ACF9
{
	iParam0->f_13 = 0;
	iParam0->f_16 = iParam1;
}

void func_295(char* sParam0)//Position - 0x1ADD7
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_100(sParam0))
		{
			if (__LIB_0__::func_501(sParam0, 0, 0))
			{
				func_96(sParam0, 1);
			}
		}
		else if (!__LIB_0__::func_501(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

void func_296(int iParam0)//Position - 0x1AE1B
{
	int iVar0;
	struct<6> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iLocal_603 == 1)
	{
		if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
		{
			if (__LIB_0__::func_75())
			{
				if (__LIB_0__::func_568())
				{
					__LIB_0__::func_620(0);
				}
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (iLocal_608 == 0)
			{
				if (__LIB_0__::func_75())
				{
					Local_607 = { __LIB_0__::func_486() };
					Local_606 = { __LIB_0__::func_485() };
					__LIB_0__::func_429();
				}
				if (!__LIB_13__::func_755(&Local_373, 1))
				{
					if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_WNTD2", 7, 0, 0, 0))
					{
						iLocal_608 = 1;
					}
				}
			}
		}
		else if (iLocal_621 == 0)
		{
			if (__LIB_0__::func_75())
			{
				if (!__LIB_0__::func_568())
				{
					__LIB_0__::func_620(1);
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (__LIB_0__::func_75())
			{
				Var2 = { __LIB_13__::func_743() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var2, "FAM3_DOWN_10") || MISC::ARE_STRINGS_EQUAL(&Var2, "FAM3_DOWNA_17"))
					{
						__LIB_0__::func_325();
						__LIB_0__::func_638();
						__LIB_0__::func_620(0);
					}
				}
			}
			else
			{
				iLocal_603 = 1;
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		case 1:
			if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
			{
				if (SYSTEM::TIMERA() > 6000)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_239.f_0))
					{
						if (__LIB_32__::func_4(&uLocal_397, 25, "FAM3AUD", "FAM3_TCPC", 7, 0, 0, 1))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
							func_96("FAM3_TCPC", 1);
							iLocal_600 = 0;
							iLocal_621 = 1;
							*iParam0++;
						}
					}
				}
			}
			break;
		case 2:
			if (func_100("FAM3_TCPC"))
			{
				if (!__LIB_17__::func_160("FAM3_TCPC"))
				{
					*iParam0++;
				}
				if (__LIB_1__::func_859())
				{
					iLocal_600 = 1;
				}
			}
			break;
		case 3:
			if (!func_100("FAM3_MAD"))
			{
				if (!__LIB_0__::func_75())
				{
					if (iLocal_600 == 0)
					{
						if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_MAD", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
							func_96("FAM3_MAD", 1);
						}
					}
					else
					{
						iLocal_605 = 1;
						iLocal_603 = 1;
						*iParam0++;
					}
				}
			}
			else if (!__LIB_17__::func_160("FAM3_MAD"))
			{
				iLocal_605 = 1;
				iLocal_603 = 1;
				*iParam0++;
			}
			else
			{
				if (!__LIB_0__::func_568())
				{
					if (HUD::DOES_BLIP_EXIST(Local_373.f_1[0]))
					{
						__LIB_0__::func_620(1);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_373.f_1[0]))
				{
					__LIB_0__::func_620(0);
				}
				if (iLocal_635 == 1)
				{
					*iParam0++;
				}
			}
			break;
		case 4:
			if (iLocal_635 == 0)
			{
				if (iLocal_636 == 1)
				{
					if (!func_100("FAM3_GCEK") && !func_100("FAM3_GCEL"))
					{
						iVar0 = 0;
						while (iVar0 <= 1)
						{
							if (Local_714[iVar0 /*18*/].f_14 == 0)
							{
								if (Local_714[iVar0 /*18*/].f_17 != 0)
								{
									switch (Local_714[iVar0 /*18*/].f_17)
									{
										case 2:
										case 3:
										case 5:
										case 6:
										case 4:
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCEK", 7, 0, 0, 0))
											{
												Local_714[iVar0 /*18*/].f_14 = 1;
												func_96("FAM3_GCEK", 1);
											}
											break;
										case 1:
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
											{
												Local_714[iVar0 /*18*/].f_14 = 1;
												func_96("FAM3_GCEL", 1);
											}
											break;
										}
									}
							}
							if (Local_715[iVar0 /*18*/].f_14 == 0)
							{
								if (Local_715[iVar0 /*18*/].f_17 != 0)
								{
									switch (Local_715[iVar0 /*18*/].f_17)
									{
										case 2:
										case 3:
										case 5:
										case 6:
										case 4:
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCEK", 7, 0, 0, 0))
											{
												Local_715[iVar0 /*18*/].f_14 = 1;
												func_96("FAM3_GCEK", 1);
											}
											break;
										case 1:
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
											{
												Local_715[iVar0 /*18*/].f_14 = 1;
												func_96("FAM3_GCEL", 1);
											}
											break;
										}
									}
							}
							iVar0++;
						}
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_373, 0))
							{
								if (((Local_714[0 /*18*/].f_14 == 1 && Local_714[1 /*18*/].f_14 == 1) && Local_715[0 /*18*/].f_14 == 1) && Local_715[1 /*18*/].f_14 == 1)
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCEL", 7, 0, 0, 0))
									{
										func_96("FAM3_GCEL", 1);
									}
								}
							}
						}
					}
					else
					{
						if (!func_100("FAM3_GCEM") && !func_100("FAM3_GCEH"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -768.7635f, 167.94533f, 58.474373f, -848.0483f, 171.88869f, 77.93412f, 50f, false, true, 0))
										{
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCEH", 7, 0, 0, 0))
											{
												func_96("FAM3_GCEH", 1);
											}
										}
										else if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCEM", 7, 0, 0, 0))
										{
											func_96("FAM3_GCEM", 1);
										}
									}
								}
							}
						}
						if (!func_100("FAM3_STATA") && !func_100("FAM3_STATB"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										if ((iLocal_644 + iLocal_646) > 0)
										{
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_STATA", 7, 0, 0, 0))
											{
												iLocal_621 = 0;
												func_96("FAM3_STATA", 1);
												iLocal_621 = 1;
												iLocal_608 = 0;
											}
										}
										else if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_STATB", 7, 0, 0, 0))
										{
											iLocal_621 = 0;
											func_96("FAM3_STATB", 1);
											iLocal_621 = 1;
											iLocal_608 = 0;
										}
									}
								}
							}
						}
						else if (!__LIB_17__::func_160("FAM3_STATA") && !__LIB_17__::func_160("FAM3_STATB"))
						{
							iLocal_623 = 1;
						}
						if (!func_100("FAM3_DBHA"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (__LIB_1__::func_854(func_212(0), func_212(1)))
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_DBHA", 7, 0, 0, 0))
										{
											iLocal_621 = 1;
											iLocal_608 = 0;
											func_96("FAM3_DBHA", 1);
										}
									}
								}
							}
						}
						else if (iLocal_608 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Local_607, "FAM3_DBHA"))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_17__::func_244(&uLocal_397, "FAM3AUD", "FAM3_DBHA", &Local_606, 7, 0, 0))
										{
											iLocal_621 = 1;
											iLocal_608 = 0;
										}
									}
								}
							}
						}
						else if (__LIB_0__::func_75())
						{
							Var1 = { __LIB_0__::func_486() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Var1, "FAM3_DBHA"))
								{
									if (Local_239.f_15 > (50f / 2f))
									{
										__LIB_0__::func_638();
									}
								}
							}
						}
						if (!func_100("FAM3_DBHB"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (__LIB_1__::func_854(func_212(0), func_212(1)))
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_DBHB", 7, 0, 0, 0))
										{
											iLocal_621 = 1;
											iLocal_608 = 0;
											func_96("FAM3_DBHB", 1);
										}
									}
								}
							}
						}
						else if (iLocal_608 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Local_607, "FAM3_DBHB"))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_17__::func_244(&uLocal_397, "FAM3AUD", "FAM3_DBHB", &Local_606, 7, 0, 0))
										{
											iLocal_621 = 1;
											iLocal_608 = 0;
										}
									}
								}
							}
						}
						else if (__LIB_0__::func_75())
						{
							Var1 = { __LIB_0__::func_486() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Var1, "FAM3_DBHB"))
								{
									if (Local_239.f_15 > (50f / 2f))
									{
										__LIB_0__::func_638();
									}
								}
							}
						}
					}
				}
				else if (!func_100("FAM3_DBHC"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
					{
						if (func_100(&Local_219) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_219))
						{
							if (__LIB_1__::func_854(func_212(0), func_212(1)))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 0))
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_DBHC", 7, 0, 0, 0))
										{
											func_96("FAM3_DBHC", 1);
										}
									}
								}
							}
						}
					}
				}
				else if (__LIB_0__::func_75())
				{
					Var1 = { __LIB_0__::func_486() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var1, "FAM3_DBHC"))
						{
							if (Local_239.f_15 > (50f / 2f))
							{
								__LIB_0__::func_638();
							}
						}
					}
				}
			}
			else
			{
				if (!func_100("FAM3_GCFSG"))
				{
					if (((Local_713[0 /*22*/].f_12 == 1 || Local_713[1 /*22*/].f_12 == 1) || (ENTITY::DOES_ENTITY_EXIST(func_287(&Local_714, &iVar3)) && Local_714[iVar3 /*18*/].f_15 < 10f)) || (ENTITY::DOES_ENTITY_EXIST(func_287(&Local_715, &iVar4)) && Local_715[iVar4 /*18*/].f_15 < 10f))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFSG", 7, 0, 0, 0))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(func_212(1), false))
								{
									iVar5 = func_288(func_212(1), 100f, joaat("baller"));
									if (ENTITY::DOES_ENTITY_EXIST(iVar5))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
										{
											TASK::OPEN_SEQUENCE_TASK(&iVar6);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar5, 0);
											TASK::TASK_LOOK_AT_ENTITY(0, iVar5, 3000, 0, 2);
											TASK::CLOSE_SEQUENCE_TASK(iVar6);
											TASK::TASK_PERFORM_SEQUENCE(func_212(1), iVar6);
											TASK::CLEAR_SEQUENCE_TASK(&iVar6);
										}
									}
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
								func_96("FAM3_GCFSG", 1);
							}
						}
						else
						{
							__LIB_0__::func_638();
						}
					}
				}
				else if (!func_100("FAM3_GCSM"))
				{
					if (!__LIB_0__::func_75())
					{
						if (!__LIB_13__::func_755(&Local_373, 1))
						{
							if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCSM", 7, 0, 0, 0))
							{
								func_96("FAM3_GCSM", 1);
							}
						}
					}
				}
				else
				{
					if (!func_100("FAM3_GCSFA") && !func_100("FAM3_GCSFB"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_373, 1))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(func_212(0)) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(func_212(1)))
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCSFA", 7, 0, 0, 0))
									{
										iLocal_647 = MISC::GET_GAME_TIMER();
										func_96("FAM3_GCSFA", 1);
									}
								}
								else if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCSFB", 7, 0, 0, 0))
								{
									iLocal_647 = MISC::GET_GAME_TIMER();
									func_96("FAM3_GCSFB", 1);
								}
							}
						}
					}
					if (!func_100("FAM3_GCSGS") && !func_100("FAM3_GCSPS"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_373, 1))
							{
								if (iLocal_634 == 1)
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCSPS", 7, 0, 0, 0))
									{
										func_96("FAM3_GCSPS", 1);
									}
								}
								if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_212(0), false), 7.5f, false) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_212(1), false), 7.5f, false))
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCSGS", 7, 0, 0, 0))
									{
										func_96("FAM3_GCSGS", 1);
									}
								}
								if (__LIB_16__::func_302(12500, iLocal_647))
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCSGS", 7, 0, 0, 0))
									{
										func_96("FAM3_GCSGS", 1);
									}
								}
							}
							else if (__LIB_0__::func_501("FAM3_LGOONS", 0, 0))
							{
								if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_212(0), false), 7.5f, false) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_212(1), false), 7.5f, false))
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_212(0)))
									{
										__LIB_0__::func_709(func_212(0), "FAM3_DDAA", "MICHAEL", 6);
										func_96("FAM3_GCSGS", 1);
									}
								}
							}
						}
					}
					else if (iLocal_628 == 0)
					{
						Local_241.f_9 = MISC::GET_GAME_TIMER();
						Local_239.f_9 = MISC::GET_GAME_TIMER();
						iLocal_647 = MISC::GET_GAME_TIMER();
						iLocal_628 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					if (Local_714[iVar0 /*18*/].f_14 == 0)
					{
						if (Local_714[iVar0 /*18*/].f_17 != 0)
						{
							if (!__LIB_0__::func_75() && !__LIB_13__::func_755(&Local_373, 1))
							{
								switch (Local_714[iVar0 /*18*/].f_17)
								{
									case 1:
										break;
									case 2:
									case 5:
										if (!func_100("FAM3_GCMKG_2"))
										{
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMKG", 7, 0, 0, 0))
											{
												iLocal_683++;
												Local_714[iVar0 /*18*/].f_14 = 1;
												Local_241.f_9 = MISC::GET_GAME_TIMER();
												Local_239.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_683 >= 2)
												{
													func_96("FAM3_GCMKG_2", 1);
												}
											}
										}
										else
										{
											Local_714[iVar0 /*18*/].f_14 = 1;
											Local_241.f_9 = MISC::GET_GAME_TIMER();
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
									case 3:
									case 6:
										if (!func_100("FAM3_GCFKG_3"))
										{
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFKG", 7, 0, 0, 0))
											{
												iLocal_684++;
												Local_714[iVar0 /*18*/].f_14 = 1;
												Local_241.f_9 = MISC::GET_GAME_TIMER();
												Local_239.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_684 >= 3)
												{
													func_96("FAM3_GCFKG_3", 1);
												}
											}
										}
										else
										{
											Local_714[iVar0 /*18*/].f_14 = 1;
											Local_241.f_9 = MISC::GET_GAME_TIMER();
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
								}
							}
							else if (Local_714[iVar0 /*18*/].f_9 == 0)
							{
								Local_714[iVar0 /*18*/].f_9 = MISC::GET_GAME_TIMER();
							}
							else if (__LIB_16__::func_302(3000, Local_714[iVar0 /*18*/].f_9))
							{
								Local_714[iVar0 /*18*/].f_14 = 1;
							}
						}
					}
					if (Local_715[iVar0 /*18*/].f_14 == 0)
					{
						if (Local_715[iVar0 /*18*/].f_17 != 0)
						{
							if (!__LIB_0__::func_75() && !__LIB_13__::func_755(&Local_373, 1))
							{
								switch (Local_715[iVar0 /*18*/].f_17)
								{
									case 1:
										break;
									case 2:
									case 5:
										if (!func_100("FAM3_GCMKG_2"))
										{
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMKG", 7, 0, 0, 0))
											{
												iLocal_683++;
												Local_715[iVar0 /*18*/].f_14 = 1;
												Local_241.f_9 = MISC::GET_GAME_TIMER();
												Local_239.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_683 >= 2)
												{
													func_96("FAM3_GCMKG_2", 1);
												}
											}
										}
										else
										{
											Local_715[iVar0 /*18*/].f_14 = 1;
											Local_241.f_9 = MISC::GET_GAME_TIMER();
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
									case 3:
									case 6:
										if (!func_100("FAM3_GCFKG_3"))
										{
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFKG", 7, 0, 0, 0))
											{
												iLocal_684++;
												Local_715[iVar0 /*18*/].f_14 = 1;
												Local_241.f_9 = MISC::GET_GAME_TIMER();
												Local_239.f_9 = MISC::GET_GAME_TIMER();
												if (iLocal_684 >= 3)
												{
													func_96("FAM3_GCFKG_3", 1);
												}
											}
										}
										else
										{
											Local_715[iVar0 /*18*/].f_14 = 1;
											Local_241.f_9 = MISC::GET_GAME_TIMER();
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
										break;
								}
							}
							else if (Local_715[iVar0 /*18*/].f_9 == 0)
							{
								Local_715[iVar0 /*18*/].f_9 = MISC::GET_GAME_TIMER();
							}
							else if (__LIB_16__::func_302(3000, Local_715[iVar0 /*18*/].f_9))
							{
								Local_715[iVar0 /*18*/].f_14 = 1;
							}
						}
					}
					iVar0++;
				}
				if (iLocal_628 == 1)
				{
					if (__LIB_16__::func_302(10000, Local_241.f_9))
					{
						if (__LIB_1__::func_854(func_212(0), func_212(1)))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_373, 1))
								{
									if (__LIB_1__::func_483(func_212(0), PED::GET_VEHICLE_PED_IS_USING(func_212(0))))
									{
										if (__LIB_2__::func_837(func_212(0), PED::GET_VEHICLE_PED_IS_USING(func_212(0))) == -1)
										{
											if (func_297(&Local_714, &Local_715) < 30f)
											{
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMEF", 7, 0, 0, 0))
												{
													Local_241.f_9 = MISC::GET_GAME_TIMER();
												}
											}
											else if (Local_241.f_10 < 4)
											{
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMAF", 7, 0, 0, 0))
												{
													Local_241.f_9 = MISC::GET_GAME_TIMER();
													Local_241.f_10++;
												}
											}
											else
											{
												Local_241.f_9 = MISC::GET_GAME_TIMER();
											}
										}
										else
										{
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
											{
												case 0:
													if (func_297(&Local_714, &Local_715) < 20f)
													{
														if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMAG", 7, 0, 0, 0))
														{
															Local_241.f_9 = MISC::GET_GAME_TIMER();
														}
													}
													break;
												case 1:
													if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMDF", 7, 0, 0, 0))
													{
														Local_241.f_9 = MISC::GET_GAME_TIMER();
													}
													break;
												}
											}
										}
									}
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(func_212(0), false) && !PED::IS_PED_IN_ANY_VEHICLE(func_212(1), false))
						{
							if (Local_239.f_15 < 50f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMAG", 7, 0, 0, 0))
												{
													Local_241.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											case 1:
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMEF", 7, 0, 0, 0))
												{
													Local_241.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
								}
							}
							else
							{
								Local_241.f_9 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (__LIB_16__::func_302(8000, Local_239.f_9))
					{
						if (__LIB_1__::func_854(func_212(0), func_212(1)))
						{
							if (__LIB_1__::func_483(func_212(1), PED::GET_VEHICLE_PED_IS_USING(func_212(1))))
							{
								if (__LIB_2__::func_837(func_212(1), PED::GET_VEHICLE_PED_IS_USING(func_212(1))) == -1)
								{
									if (func_297(&Local_714, &Local_715) < 30f)
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFEM", 7, 0, 0, 0))
										{
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (Local_239.f_10 < 4)
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFAM", 7, 0, 0, 0))
										{
											Local_239.f_9 = MISC::GET_GAME_TIMER();
											Local_239.f_10++;
										}
									}
									else
									{
										Local_239.f_9 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
									{
										case 0:
											if (func_297(&Local_714, &Local_715) < 20f)
											{
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFAG", 7, 0, 0, 0))
												{
													Local_239.f_9 = MISC::GET_GAME_TIMER();
												}
											}
											break;
										case 1:
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFDF", 7, 0, 0, 0))
											{
												Local_239.f_9 = MISC::GET_GAME_TIMER();
											}
											break;
										}
									}
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(func_212(0), false) && !PED::IS_PED_IN_ANY_VEHICLE(func_212(1), false))
						{
							if (Local_239.f_15 < 50f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFAG", 7, 0, 0, 0))
												{
													Local_239.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											case 1:
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFEM", 7, 0, 0, 0))
												{
													Local_239.f_9 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
								}
							}
							else
							{
								Local_239.f_9 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !(__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && __LIB_2__::func_837(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == -1))
					{
						if (__LIB_16__::func_302(10000, iLocal_647))
						{
							if (Local_239.f_15 < 50f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										switch (__LIB_15__::func_944())
										{
											case 0:
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCMNS", 7, 0, 0, 0))
												{
													Local_241.f_9 = MISC::GET_GAME_TIMER();
													Local_239.f_9 = MISC::GET_GAME_TIMER();
													iLocal_647 = MISC::GET_GAME_TIMER();
												}
												break;
											case 1:
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCFNS", 7, 0, 0, 0))
												{
													Local_241.f_9 = MISC::GET_GAME_TIMER();
													Local_239.f_9 = MISC::GET_GAME_TIMER();
													iLocal_647 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
								}
							}
							else
							{
								iLocal_647 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						iLocal_647 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
	if (!func_100("FAM3_GCCVTM") && !func_100("FAM3_GCCVTF"))
	{
		if (iLocal_598 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != Local_274.f_0)
			{
				iLocal_598 = MISC::GET_GAME_TIMER();
			}
		}
		else if (__LIB_16__::func_302(7500, iLocal_598))
		{
			func_96("FAM3_GCCVTM", 1);
			func_96("FAM3_GCCVTF", 1);
		}
		else if (!__LIB_0__::func_75())
		{
			if (!__LIB_13__::func_755(&Local_373, 1))
			{
				if (Local_239.f_15 <= (50f / 2f))
				{
					if (iLocal_622 == 0)
					{
						switch (__LIB_15__::func_944())
						{
							case 0:
								if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCCVTM", 7, 0, 0, 0))
								{
									func_96("FAM3_GCCVTM", 1);
								}
								break;
							case 1:
								if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_GCCVTF", 7, 0, 0, 0))
								{
									func_96("FAM3_GCCVTF", 1);
								}
								break;
							}
						}
					}
				}
			}
	}
}

float func_297(var uParam0, var uParam1)//Position - 0x1C2AD
{
	int iVar0;
	int iVar1;
	func_287(uParam0, &iVar0);
	func_287(uParam1, &iVar1);
	if (iVar0 != -1 && iVar1 != -1)
	{
		if ((uParam0[iVar0 /*18*/])->f_15 <= (uParam1[iVar1 /*18*/])->f_15)
		{
			return (uParam0[iVar0 /*18*/])->f_15;
		}
		else
		{
			return (uParam1[iVar1 /*18*/])->f_15;
		}
	}
	else if (iVar0 != -1)
	{
		return (uParam0[iVar0 /*18*/])->f_15;
	}
	else if (iVar1 != -1)
	{
		return (uParam1[iVar1 /*18*/])->f_15;
	}
	return -1f;
}

void func_308(int iParam0)//Position - 0x1C549
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	if (iLocal_633 == 0)
	{
		if ((((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.89f, 709.6f, 132.38f, -1133.41f, 679.84f, 161.1f, 36f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.28f, 662.22f, 125.02f, -1138.02f, 681.84f, 161.37f, 36f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.68f, 661.26f, 121.1f, -976.84f, 641.13f, 153.91f, 36f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -894.49f, 655.77f, 113.47f, -985.13f, 640.53f, 154.35f, 36f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -898.85f, 657.44f, 113.6f, -823.46f, 645.49f, 144.01f, 36f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.93f, 551.06f, 101.91f, -827.24f, 649.55f, 144.36f, 36f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.974f, 557.36f, 102.67f, -700.16f, 501.75f, 124.6f, 36f, false, true, 0))
		{
			if (iLocal_597 == 0)
			{
				if (iLocal_605 == 1)
				{
					iLocal_597 = MISC::GET_GAME_TIMER();
				}
			}
			else if (__LIB_16__::func_302(10000, iLocal_597))
			{
				iLocal_633 = 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_205, true) < 100f)
			{
				iLocal_633 = 1;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("baller"));
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_PoloGoon_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("baller")) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_PoloGoon_01")))
			{
				Local_712[0 /*3*/] = { -2.15f, -3f, 0f };
				Local_712[1 /*3*/] = { 2.15f, 3f, 0f };
				*iParam0++;
			}
			break;
		case 1:
			if (iLocal_633 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -857.8738f, 220.17882f, 73.88277f, 20f, 28f, 8f, false, true, 0))
				{
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var1, 0, 3f, 0f))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 7f)
						{
							if (func_390(PLAYER::PLAYER_PED_ID(), &Local_630, &fLocal_629, 18, __LIB_0__::func_373(PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/), 10f, 100f), __LIB_0__::func_373(PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/), 60f, 180f), 0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_630, 3f))
								{
									fVar4 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar3 = MISC::ABSF((fVar4 - fLocal_629));
									if (fVar3 > 180f)
									{
										fVar3 = MISC::ABSF((fVar3 - 360f));
									}
									if (fVar3 < 90f)
									{
										fVar5 = fLocal_629;
									}
									else
									{
										fVar5 = (fLocal_629 + 180f);
									}
									iVar2 = 0;
									while (iVar2 < Local_713.f_0)
									{
										Local_713[iVar2 /*22*/].f_6 = joaat("baller");
										Local_713[iVar2 /*22*/].f_2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_630, fLocal_629, Local_712[iVar2 /*3*/]) };
										Local_713[iVar2 /*22*/].f_5 = fVar5;
										Local_713[iVar2 /*22*/].f_12 = 0;
										MISC::CLEAR_AREA_OF_VEHICLES(Local_713[iVar2 /*22*/].f_2, 3f, false, false, false, false, false, false, 0);
										iVar2++;
									}
									*iParam0++;
								}
							}
						}
					}
				}
				else if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var1, 0, 3f, 0f))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 5f)
					{
						if (func_390(PLAYER::PLAYER_PED_ID(), &Local_630, &fLocal_629, 18, __LIB_0__::func_373(PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/), 15f, 125f), __LIB_0__::func_373(PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/), 60f, 180f), 0))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_630, 3f))
							{
								fVar8 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								fVar7 = MISC::ABSF((fVar8 - fLocal_629));
								if (fVar7 > 180f)
								{
									fVar7 = MISC::ABSF((fVar7 - 360f));
								}
								if (fVar7 < 90f)
								{
									fVar9 = fLocal_629;
								}
								else
								{
									fVar9 = (fLocal_629 + 180f);
								}
								iVar6 = 0;
								while (iVar6 < Local_713.f_0)
								{
									Local_713[iVar6 /*22*/].f_6 = joaat("baller");
									Local_713[iVar6 /*22*/].f_2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_630, fLocal_629, Local_712[iVar6 /*3*/]) };
									Local_713[iVar6 /*22*/].f_5 = fVar9;
									Local_713[iVar6 /*22*/].f_12 = 0;
									MISC::CLEAR_AREA_OF_VEHICLES(Local_713[iVar6 /*22*/].f_2, 3f, false, false, false, false, false, false, 0);
									iVar6++;
								}
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		case 2:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (func_339(&(Local_713[0 /*22*/]), 0, 0, 145, 0, -1, 0, 0, 3, 0) && func_339(&(Local_713[1 /*22*/]), 0, 0, 145, 0, -1, 0, 0, 3, 0))
			{
				Local_714[0 /*18*/] = func_338(Local_713[0 /*22*/], joaat("G_M_Y_PoloGoon_01"), -1, 200, joaat("WEAPON_PISTOL"));
				Local_714[1 /*18*/] = func_338(Local_713[0 /*22*/], joaat("G_M_Y_PoloGoon_01"), 0, 200, joaat("WEAPON_PISTOL"));
				Local_715[0 /*18*/] = func_338(Local_713[1 /*22*/], joaat("G_M_Y_PoloGoon_01"), -1, 200, joaat("WEAPON_PISTOL"));
				Local_715[1 /*18*/] = func_338(Local_713[1 /*22*/], joaat("G_M_Y_PoloGoon_01"), 0, 200, joaat("WEAPON_PISTOL"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_713[0 /*22*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_713[0 /*22*/], 1000, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_713[0 /*22*/], 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_713[0 /*22*/], 1000f);
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_713[0 /*22*/]);
					VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_713[0 /*22*/], 10f, 1000, false, false, false, -1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_713[0 /*22*/], 5f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_713[0 /*22*/], 5f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_713[0 /*22*/], "FAMILY_3_ENEMY_CARS_GROUP", 0f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_713[1 /*22*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_713[1 /*22*/], 1000, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_713[1 /*22*/], 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_713[1 /*22*/], 1000f);
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_713[1 /*22*/]);
					VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_713[1 /*22*/], 10f, 1000, false, false, false, -1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_713[1 /*22*/], 5f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_713[1 /*22*/], 5f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_713[1 /*22*/], "FAMILY_3_ENEMY_CARS_GROUP", 0f);
				}
				Local_714[0 /*18*/].f_9 = 0;
				Local_714[1 /*18*/].f_9 = 0;
				Local_715[0 /*18*/].f_9 = 0;
				Local_715[1 /*18*/].f_9 = 0;
				func_292(&(Local_714[0 /*18*/]), 0);
				func_292(&(Local_714[1 /*18*/]), 0);
				func_292(&(Local_715[0 /*18*/]), 0);
				func_292(&(Local_715[1 /*18*/]), 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_PoloGoon_01"));
				__LIB_0__::func_609(Local_714[0 /*18*/], 0);
				__LIB_0__::func_609(Local_714[1 /*18*/], 0);
				__LIB_0__::func_609(Local_715[0 /*18*/], 0);
				__LIB_0__::func_609(Local_715[1 /*18*/], 0);
				__LIB_0__::func_499(221, 0);
				Local_713[0 /*22*/].f_14 = { -2.15f, -3f, 0f };
				Local_713[1 /*22*/].f_14 = { 2.15f, 3f, 0f };
				Local_713[0 /*22*/].f_21 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_713[0 /*22*/], true), true);
				Local_713[1 /*22*/].f_21 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_713[1 /*22*/], true), true);
				__LIB_17__::func_170(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &(Local_713[0 /*22*/].f_17), &(Local_713[0 /*22*/].f_20));
				__LIB_17__::func_170(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &(Local_713[1 /*22*/].f_17), &(Local_713[1 /*22*/].f_20));
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MEX_CHASE");
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), true) * 2);
				iLocal_635 = 1;
				iLocal_641 = MISC::GET_GAME_TIMER();
				bLocal_642 = false;
				*iParam0++;
			}
			break;
		case 3:
			if (bLocal_642 == 0)
			{
				if (__LIB_16__::func_302(10000, iLocal_641))
				{
					bLocal_642 = true;
				}
			}
			func_333(&Local_714, &(Local_713[0 /*22*/]));
			func_333(&Local_715, &(Local_713[1 /*22*/]));
			func_329(&Local_714, &(Local_713[0 /*22*/]), 300f, __LIB_0__::func_373(bLocal_642, 150f, 200f));
			func_329(&Local_715, &(Local_713[1 /*22*/]), 300f, __LIB_0__::func_373(bLocal_642, 150f, 200f));
			func_326(&(Local_714[0 /*18*/]), &(Local_713[0 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_637);
			func_326(&(Local_714[1 /*18*/]), &(Local_713[0 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_637);
			func_326(&(Local_715[0 /*18*/]), &(Local_713[1 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_637);
			func_326(&(Local_715[1 /*18*/]), &(Local_713[1 /*22*/]), PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &iLocal_637);
			if (Local_713[0 /*22*/].f_12 == 0 && Local_713[1 /*22*/].f_12 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_713[0 /*22*/]))
				{
					Local_713[0 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_713[0 /*22*/], func_212(1), 17);
					Local_713[0 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_713[0 /*22*/], func_212(0), 17);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_713[1 /*22*/]))
				{
					Local_713[1 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_713[1 /*22*/], func_212(1), 17);
					Local_713[1 /*22*/].f_12 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_713[1 /*22*/], func_212(0), 17);
				}
			}
			iVar10 = 0;
			while (iVar10 <= 1)
			{
				func_325(Local_713[iVar10 /*22*/], 200);
				func_324(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), Local_713[iVar10 /*22*/]);
				func_319(Local_713[iVar10 /*22*/], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &(Local_713[iVar10 /*22*/].f_2), &(Local_713[iVar10 /*22*/].f_5), &(Local_713[iVar10 /*22*/].f_17), &(Local_713[iVar10 /*22*/].f_20), &(Local_713[iVar10 /*22*/].f_13), Local_713[iVar10 /*22*/].f_14, 3500, 45f, &(Local_713[iVar10 /*22*/].f_21));
				iVar10++;
			}
			if (((((!ENTITY::DOES_ENTITY_EXIST(Local_713[0 /*22*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_713[1 /*22*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_714[0 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_714[1 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_715[0 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_715[1 /*18*/]))
			{
				__LIB_0__::func_498(0, -1);
				iLocal_636 = 1;
				iLocal_635 = 0;
				iLocal_603 = 1;
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				PED::SET_CREATE_RANDOM_COPS(true);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				__LIB_0__::func_552(1);
				__LIB_14__::func_804(0);
				__LIB_15__::func_931();
				STREAMING::REMOVE_ANIM_DICT("missfam3");
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MEX_LOST");
				*iParam0++;
			}
			break;
	}
}

void func_319(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam8, float fParam9, var uParam10)//Position - 0x1D62C
{
	int iVar0;
	struct<3> Var1;
	func_322(&Local_711, &uLocal_710);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && !VEHICLE::IS_VEHICLE_STOPPED(iParam1)) && __LIB_39__::func_43(iParam0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) > *uParam10)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, Param7) };
				__LIB_17__::func_170(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam8)
			{
				if (__LIB_0__::func_76(iParam0, iParam1, 1) > fParam9 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 25f)
				{
					if (!__LIB_0__::func_86(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
							*uParam10 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true);
							iLocal_690 = MISC::GET_GAME_TIMER() + 1000;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < Local_711.f_0)
							{
								Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_711[iVar0 /*3*/], uLocal_710[iVar0], Param7) };
								if (!__LIB_0__::func_86(Var1))
								{
									if (!CAM::IS_SPHERE_VISIBLE(Var1, 2f))
									{
										MISC::CLEAR_AREA_OF_PEDS(Var1, 1.5f, 0);
										MISC::CLEAR_AREA_OF_VEHICLES(Var1, 3f, false, false, false, false, false, false, 0);
										ENTITY::SET_ENTITY_COORDS(iParam0, Var1, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(iParam0, uLocal_710[iVar0]);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
										VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
										*uParam6 = MISC::GET_GAME_TIMER();
										*uParam10 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true);
										return;
										iLocal_690 = MISC::GET_GAME_TIMER() + 1000;
									}
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_322(var uParam0, var uParam1)//Position - 0x1D956
{
	int iVar0;
	if (__LIB_0__::func_86(*(uParam0[0 /*3*/])))
	{
		__LIB_17__::func_170(PLAYER::PLAYER_PED_ID(), uParam0[0 /*3*/], uParam1[0]);
	}
	else
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *(uParam0[0 /*3*/]), true) > 30f)
		{
			func_323(uParam0, uParam1);
		}
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			iVar0++;
		}
	}
}

void func_323(var uParam0, var uParam1)//Position - 0x1D9BD
{
	int iVar0;
	iVar0 = (*uParam0 - 1);
	while (iVar0 >= 1)
	{
		*(uParam0[iVar0 /*3*/]) = { *(uParam0[(iVar0 - 1) /*3*/]) };
		(*uParam1)[iVar0] = (*uParam1)[(iVar0 - 1)];
		iVar0 = (iVar0 + -1);
	}
	__LIB_17__::func_170(PLAYER::PLAYER_PED_ID(), uParam0[0 /*3*/], uParam1[0]);
}

void func_324(int iParam0, int iParam1)//Position - 0x1DA0D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_599) > 0)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -6f, 3f), 4f, false, true, 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY3_REAR_END_MASTER", iParam0, 0, false, 0);
								}
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
								iLocal_599 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
							}
						}
					}
				}
			}
		}
	}
}

void func_325(int iParam0, int iParam1)//Position - 0x1DABD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < iParam1)
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 0f);
			}
		}
	}
}

void func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1DAF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(*iParam0) && !PED::IS_PED_INJURED(iParam2))
	{
		iParam0->f_15 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam2, true), true);
		if (*iParam4 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam2, true))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, 0, 2))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					*iParam4 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam1, false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, iParam2, true))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam1, 0, 2))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam1);
							*iParam4 = 1;
						}
					}
				}
			}
			if (iParam0->f_8 != 0)
			{
				if (__LIB_16__::func_302(10000, iParam0->f_8))
				{
					*iParam4 = 1;
				}
			}
		}
		if (iParam0->f_16 != 7)
		{
			if (PED::IS_PED_FLEEING(*iParam0) || PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_292(iParam0, 7);
			}
		}
		switch (iParam0->f_16)
		{
			case 0:
				func_292(iParam0, 9);
				break;
			case 7:
				if (iParam0->f_13 == 0)
				{
					PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
					PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 21, true);
					PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.1f);
					PED::SET_PED_ACCURACY(*iParam0, 6);
					PED::SET_PED_SHOOT_RATE(*iParam0, 125);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 200f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
					iParam0->f_13 = 1;
				}
				if (func_328(iParam2, iParam3))
				{
					if (iParam0->f_15 > 20f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
						{
							if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false) && ENTITY::GET_ENTITY_HEALTH(*iParam1) > 0) && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*iParam1) > 0f) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1)) && !__LIB_15__::func_929(iParam1)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(*iParam1))
							{
								if (!PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1, false) || VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0, false))
									{
										func_292(iParam0, 2);
									}
								}
								else if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
								{
									if (*iParam4 == 1)
									{
										func_292(iParam0, 9);
									}
									else
									{
										func_292(iParam0, 8);
									}
								}
							}
						}
					}
				}
				break;
			case 8:
				if (iParam0->f_13 == 0)
				{
					if (__LIB_1__::func_606(*iParam0, *iParam1, -1))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0, false))
						{
							iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, 0, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, true);
							}
							else
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, false);
							}
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(*iParam0, 115, false);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 200f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
					iParam0->f_8 = MISC::GET_GAME_TIMER();
					iParam0->f_13 = 1;
				}
				PED::SET_PED_RESET_FLAG(*iParam0, 128, true);
				if (*iParam4 == 1)
				{
					func_292(iParam0, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (iParam0->f_15 < 17.5f)
						{
							if (!func_328(iParam2, iParam3))
							{
								func_292(iParam0, 7);
							}
						}
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1, false))
						{
							func_292(iParam0, 5);
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					func_292(iParam0, 7);
				}
				else if (VEHICLE::IS_VEHICLE_STOPPED(*iParam1))
				{
					if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1) || ENTITY::IS_ENTITY_UPSIDEDOWN(*iParam1)) || !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam1))
					{
						if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(*iParam0, 0, 256);
						}
						func_292(iParam0, 7);
					}
				}
				break;
			case 9:
				if (iParam0->f_13 == 0)
				{
					if (__LIB_1__::func_606(*iParam0, *iParam1, -1))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0, false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, 0, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, true);
							}
							else
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, false);
							}
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(*iParam0, 115, false);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, true);
					PED::SET_PED_ACCURACY(*iParam0, 3);
					PED::SET_PED_SHOOT_RATE(*iParam0, 80);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 200f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
					iParam0->f_13 = 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1, false))
						{
							func_292(iParam0, 5);
						}
						if (iParam0->f_15 < 17.5f)
						{
							if (!func_328(iParam2, iParam3))
							{
								func_292(iParam0, 7);
							}
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					func_292(iParam0, 7);
				}
				else if (VEHICLE::IS_VEHICLE_STOPPED(*iParam1))
				{
					if ((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1) || ENTITY::IS_ENTITY_UPSIDEDOWN(*iParam1)) || !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam1))
					{
						if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(*iParam0, 0, 256);
						}
						func_292(iParam0, 7);
					}
				}
				break;
			case 5:
				if (iParam0->f_13 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
					{
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(*iParam0, *iParam1, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
					}
					iParam0->f_13 = 1;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
				{
					func_292(iParam0, 7);
				}
				else if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
				{
					if (__LIB_1__::func_606(*iParam0, *iParam1, -1))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0, false))
						{
							iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, 0, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, true);
							}
							else
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, false);
							}
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(*iParam0, 115, false);
						}
						if (*iParam4 == 1)
						{
							func_292(iParam0, 9);
						}
						else
						{
							func_292(iParam0, 8);
						}
					}
					else if (iParam0->f_15 < 17.5f)
					{
						if (!func_328(iParam2, iParam3))
						{
							func_292(iParam0, 7);
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					if (!func_328(iParam2, iParam3))
					{
						if (iParam0->f_15 < 17.5f)
						{
							func_292(iParam0, 7);
						}
					}
					else
					{
						func_292(iParam0, 2);
					}
				}
				break;
			case 2:
				if (iParam0->f_13 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1, false))
							{
								TASK::TASK_ENTER_VEHICLE(*iParam0, *iParam1, 20000, -1, 2f, 9, 0);
							}
							else if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0, false))
							{
								TASK::TASK_ENTER_VEHICLE(*iParam0, *iParam1, 20000, 0, 2f, 9, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
							iParam0->f_7 = MISC::GET_GAME_TIMER();
						}
					}
					iParam0->f_13 = 1;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(*iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false)) && ENTITY::GET_ENTITY_HEALTH(*iParam1) > 0) && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*iParam1) > 0f)
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false))
					{
						if (*iParam4 == 1)
						{
							func_292(iParam0, 9);
						}
						else
						{
							func_292(iParam0, 8);
						}
					}
					else
					{
						if (iParam0->f_13 == 1)
						{
							if (__LIB_16__::func_302(5000, iParam0->f_7))
							{
								if (iParam0->f_15 > 25f && __LIB_0__::func_76(*iParam0, *iParam1, 1) < 10f)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0) && !ENTITY::IS_ENTITY_ON_SCREEN(*iParam1))
									{
										if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1, false))
										{
											PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam1, -1);
										}
										else if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0, false))
										{
											PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam1, 0);
										}
									}
								}
								else
								{
									func_292(iParam0, 7);
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1)
						{
							if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
							{
								if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, 0, false))
								{
									func_292(iParam0, 2);
								}
								if (iParam0->f_15 < 17.5f)
								{
									if (!func_328(iParam2, iParam3))
									{
										func_292(iParam0, 7);
									}
								}
							}
						}
					}
				}
				else
				{
					func_292(iParam0, 7);
				}
				break;
			}
	}
}

int func_328(int iParam0, int iParam1)//Position - 0x1E390
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_329(var uParam0, int* iParam1, float fParam2, float fParam3)//Position - 0x1E3DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
			{
				if ((uParam0[iVar0 /*18*/])->f_17 == 0)
				{
					(uParam0[iVar0 /*18*/])->f_17 = func_332(uParam0[iVar0 /*18*/]);
					func_330((uParam0[iVar0 /*18*/])->f_17, &iLocal_643, &iLocal_644, &iLocal_645, &iLocal_646);
					if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
					{
						HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
					}
				}
				else
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*18*/]);
				}
			}
			else
			{
				iVar1 = 1;
				if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*18*/], false))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*18*/], 1) > fParam3)
					{
						(uParam0[iVar0 /*18*/])->f_17 = 1;
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*18*/]);
						if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
						{
							HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
					{
						if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0 /*18*/], *iParam1, false))
						{
							iVar2 = 1;
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*18*/], 1) > fParam2)
							{
								(uParam0[iVar0 /*18*/])->f_17 = 1;
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*18*/]);
								if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
								{
									HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
		{
			if (iVar1 == 1 || iVar2 == 1)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), *iParam1, 1) > fParam2)
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0f);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
					if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam1->f_1));
					}
				}
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
				if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam1->f_1));
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam1);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam1);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam1, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam1);
			if (HUD::DOES_BLIP_EXIST(iParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(iParam1->f_1));
			}
		}
	}
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E60D
{
	switch (iParam0)
	{
		case 5:
			*iParam1++;
			__LIB_0__::func_497(224, 1, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_497(227, 1, 0);
			}
			break;
		case 6:
			*iParam2++;
			__LIB_0__::func_497(224, 1, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_497(227, 1, 0);
			}
			break;
		case 2:
			*iParam3++;
			break;
		case 3:
			*iParam4++;
			break;
	}
}

int func_332(var uParam0)//Position - 0x1E742
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (iVar1 == func_212(1))
					{
						switch (__LIB_15__::func_944())
						{
							case 0:
								return 3;
								break;
							case 1:
								return 6;
								break;
						}
					}
					else if (iVar1 == func_212(0))
					{
						switch (__LIB_15__::func_944())
						{
							case 0:
								return 5;
								break;
							case 1:
								return 2;
								break;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
				{
					return 4;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				uParam0->f_12++;
				if (uParam0->f_12 == 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_333(var uParam0, var uParam1)//Position - 0x1E818
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
		{
			iVar0 = 0;
			while (iVar0 <= (*uParam0 - 1))
			{
				if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
				{
					if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0 /*18*/], *uParam1, false))
					{
						if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
						{
							HUD::REMOVE_BLIP(&((uParam0[iVar0 /*18*/])->f_1));
						}
						iVar1 = 1;
					}
					else if (!HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
					{
						(uParam0[iVar0 /*18*/])->f_1 = __LIB_0__::func_666((*uParam0)[iVar0 /*18*/], 1, 145);
					}
				}
				iVar0++;
			}
			if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				if (iVar1 == 1)
				{
					uParam1->f_1 = __LIB_0__::func_488(ENTITY::GET_ENTITY_COORDS(*uParam1, true), 0);
					HUD::SET_BLIP_COLOUR(uParam1->f_1, 1);
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, "BLIP_VEH" /* GXT: Vehicle */);
				}
			}
			else
			{
				Var2 = { HUD::GET_BLIP_COORDS(uParam1->f_1) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) };
				Var2.f_0 = (Var2.f_0 + (((Var3.f_0 - Var2.f_0) / 1.1f) * SYSTEM::TIMESTEP()));
				Var2.f_1 = (Var2.f_1 + (((Var3.f_1 - Var2.f_1) / 1.1f) * SYSTEM::TIMESTEP()));
				Var2.f_2 = (Var2.f_2 + (((Var3.f_2 - Var2.f_2) / 1.1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(uParam1->f_1, Var2);
				if (iVar1 == 0)
				{
					HUD::REMOVE_BLIP(&(uParam1->f_1));
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_1));
			}
			iVar0 = 0;
			while (iVar0 <= (*uParam0 - 1))
			{
				if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*18*/]))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*18*/])->f_1))
					{
						(uParam0[iVar0 /*18*/])->f_1 = __LIB_0__::func_666((*uParam0)[iVar0 /*18*/], 1, 145);
					}
				}
				iVar0++;
			}
		}
	}
}

int func_338(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EB34
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam1, iParam2, true, true);
		PED::SET_PED_MAX_HEALTH(iVar0, iParam3);
		ENTITY::SET_ENTITY_HEALTH(iVar0, iParam3, 0);
		PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
		WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam4, -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam4);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_237);
		PED::SET_PED_AS_ENEMY(iVar0, true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 214, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		return iVar0;
	}
	return 0;
}

int func_339(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1EBED
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = __LIB_16__::func_0(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (bParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (__LIB_28__::func_234(iParam0, bParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam8, iParam9);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 0, !bParam4);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 1, !bParam4);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (__LIB_16__::func_939(iParam0, bParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 0, !bParam4);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 1, !bParam4);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, !bParam4);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_390(int iParam0, var uParam1, float fParam2, int iParam3, float fParam4, float fParam5, int iParam6)//Position - 0x24923
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	float fVar5;
	var uVar6;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, iParam3, &Var3, &uVar4, &uVar6, iParam6, 3f, 0f))
			{
				Var2 = { Var3 - Var0 };
				fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var2.f_0, Var2.f_1, Var1.f_0, Var1.f_1);
				if (fVar5 > fParam4 && fVar5 < fParam5)
				{
					if (!__LIB_0__::func_78(*uParam1, Var3, 0))
					{
						*uParam1 = { Var3 };
						*fParam2 = uVar4;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_391()//Position - 0x249C3
{
	CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
	{
		if (func_290(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			if (iLocal_685 == 1)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				iLocal_685 = 0;
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (iLocal_687 == 0)
				{
					CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
					CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "incar_lookbehind_exit_driver", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "incar_lookbehind_exit_driver") >= 0.5f)
						{
							if (iLocal_689 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_689 = MISC::GET_GAME_TIMER();
							}
							else if (__LIB_16__::func_302(300, iLocal_689))
							{
								iLocal_685 = 1;
								iLocal_687 = 1;
							}
						}
					}
				}
			}
		}
	}
}

int func_393(int iParam0)//Position - 0x24AA1
{
	MISC::SET_BIT(&(Local_373.f_13), 20);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY3_1", false, -1);
	func_410();
	func_409(Local_239.f_0, Local_274.f_0, &Local_239, iLocal_580);
	func_408(&iLocal_582, &bLocal_586, &iLocal_587, &uLocal_585, &uLocal_588, &fLocal_584);
	func_407(iLocal_628, iLocal_580, iLocal_583, &iLocal_596, &(Local_239.f_9));
	func_391();
	if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
	{
		__LIB_0__::func_189();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	}
	if (iLocal_650 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_274.f_0, false))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_274.f_0, 5, 0, 1f);
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_239.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_239.f_0, Local_274.f_0, false))
				{
					TASK::TASK_ENTER_VEHICLE(Local_239.f_0, Local_274.f_0, 20000, 0, 1f, 1, 0);
				}
			}
			if (iLocal_579 == 0)
			{
				if (!PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
				{
					PHYSICS::ROPE_LOAD_TEXTURES();
					if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
					{
						iLocal_578 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, false, true, true, 1f, false, 0);
						PHYSICS::LOAD_ROPE_DATA(iLocal_578, sLocal_201);
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_307.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_308.f_0)) && PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
				{
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_307.f_0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
						{
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_578, Local_307.f_0, Local_274.f_0, Local_307.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_274.f_0, 0f, -2.1f, 0.6f), 35f, false, false, 0, 0);
							iLocal_579 = 1;
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_309.f_0))
			{
				if (func_109(&Local_309, 1))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_309.f_0, true, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_309.f_0, Local_274.f_0, false);
				}
			}
			*iParam0++;
			break;
		case 1:
			CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
			if ((!PED::IS_PED_INJURED(Local_239.f_0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, true))
				{
					CAM::SET_GAMEPLAY_COORD_HINT(Local_207, -1, 8000, 2000, joaat("FAMILY3_HOUSE_VEHICLE_HINT_HELPER"));
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, false))
				{
					if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_274.f_1));
						HUD::CLEAR_PRINTS();
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(Local_274.f_1))
					{
						Local_274.f_1 = __LIB_0__::func_639(Local_274.f_0, 0, 0);
					}
					if (!func_100(&Local_213) || !MISC::IS_STRING_NULL_OR_EMPTY(&Local_213))
					{
						if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_373, 0))
								{
									func_281(&Local_213, 7500, 1);
								}
							}
						}
					}
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_239.f_0, Local_274.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					if (ENTITY::DOES_ENTITY_EXIST(Local_306.f_0))
					{
						OBJECT::DELETE_OBJECT(&Local_306);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_309.f_0))
					{
						OBJECT::DELETE_OBJECT(&Local_309);
					}
					VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, true);
					MISC::CLEAR_AREA_OF_PEDS(Local_241.f_2, 100f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_241.f_2, 100f, false, false, false, false, false, false, 0);
					AUDIO::START_AUDIO_SCENE("FAMILY_3_PULL_DOWN_HOUSE_SCENE");
					*iParam0++;
				}
			}
			break;
		case 2:
			if (iLocal_618 == 0)
			{
				func_404(&iLocal_574);
				func_403(&(Local_274.f_7));
			}
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			if (func_394(&iLocal_583))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_274.f_0, true);
					VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, false);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_274.f_0, 0f);
				}
				AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
				AUDIO::STOP_AUDIO_SCENE("FAMILY_3_PULL_DOWN_HOUSE_SCENE");
				CAM::STOP_GAMEPLAY_HINT(false);
				return 1;
			}
			break;
	}
	return 0;
}

int func_394(int iParam0)//Position - 0x24EA6
{
	if (iLocal_581 == 0)
	{
		func_402(Local_274.f_0);
	}
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	switch (*iParam0)
	{
		case 0:
			iLocal_628 = 1;
			AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_01_MASTER", 0);
			VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, true);
			Local_631 = { Local_274.f_2 };
			if (func_398(&iLocal_580, 3500f, Local_631, 0.75f) && AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_01_MASTER", 0))
			{
				if (iLocal_582 == 1)
				{
					HUD::CLEAR_HELP(true);
					AUDIO::START_AUDIO_SCENE("FAMILY_3_RAYFIRE");
					AUDIO::PLAY_STREAM_FROM_POSITION(-1020.98f, 657.72f, 154.51f);
					CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.25f);
					func_96("FAM3_HPULL", 0);
					RECORDING::REPLAY_START_EVENT(4);
					bLocal_586 = true;
					*iParam0++;
				}
			}
			break;
		case 1:
			if (bLocal_586)
			{
				if (iLocal_587 == 0)
				{
					iLocal_628 = 0;
					VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, true);
					Local_631 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
				}
				else if (iLocal_587 == 1)
				{
					iLocal_628 = 1;
					AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_02_MASTER", 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
					}
					VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, true);
					if (func_398(&iLocal_580, 4000f, Local_631, 0.75f) && AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_02_MASTER", 0))
					{
						HUD::CLEAR_HELP(true);
						AUDIO::START_AUDIO_SCENE("FAMILY_3_RAYFIRE");
						AUDIO::PLAY_STREAM_FROM_POSITION(-1020.98f, 657.72f, 154.51f);
						CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.15f);
						func_96("FAM3_HPULL", 0);
						iLocal_587 = 0;
						*iParam0++;
					}
				}
			}
			break;
		case 2:
			if (bLocal_586)
			{
				if (iLocal_587 == 0)
				{
					iLocal_628 = 0;
					VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, true);
					Local_631 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
				}
				else if (iLocal_587 == 1)
				{
					VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, true);
					iLocal_628 = 1;
					AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_03_MASTER", 0);
					AUDIO::PREPARE_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
					}
					if ((func_398(&iLocal_580, 4500f, Local_631, 0.75f) && AUDIO::LOAD_STREAM("FAMILY3_DECK_PULL_03_MASTER", 0)) && AUDIO::PREPARE_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE"))
					{
						__LIB_0__::func_963(1, 0, 1, 0);
						HUD::CLEAR_HELP(true);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_274.f_0, false);
						AUDIO::START_AUDIO_SCENE("FAMILY_3_RAYFIRE");
						AUDIO::TRIGGER_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE");
						AUDIO::PLAY_STREAM_FROM_POSITION(-1020.98f, 657.72f, 154.51f);
						CAM::SHAKE_GAMEPLAY_CAM("MEDIUM_EXPLOSION_SHAKE", 0.25f);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
						iLocal_587 = 0;
						iLocal_580 = 0;
						iLocal_581 = 1;
						*iParam0++;
					}
				}
			}
			break;
		case 3:
			if (bLocal_586)
			{
				if (iLocal_587 == 0)
				{
					iLocal_628 = 0;
					if (iLocal_582 == 8)
					{
						iLocal_628 = 1;
						if (!CAM::DOES_CAM_EXIST(iLocal_575))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_RAYFIRE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RAYFIRE");
							}
							if (iLocal_618 == 1)
							{
								__LIB_14__::func_524(800);
							}
							__LIB_0__::func_963(0, 0, 1, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							RECORDING::REPLAY_STOP_EVENT();
							return 1;
						}
					}
					else if (iLocal_618 == 0)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_575))
						{
							if (__LIB_0__::func_500())
							{
								__LIB_17__::func_161(800);
								if (iLocal_582 < 6)
								{
									iLocal_582 = 6;
								}
								if (PHYSICS::DOES_ROPE_EXIST(&iLocal_578) && ENTITY::DOES_ENTITY_EXIST(Local_307.f_0))
								{
									PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_578, Local_307.f_0);
									PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_578, Local_274.f_0);
									OBJECT::DELETE_OBJECT(&Local_307);
									PHYSICS::DELETE_ROPE(&iLocal_578);
									PHYSICS::ROPE_UNLOAD_TEXTURES();
									iLocal_579 = 0;
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_308.f_0))
								{
									OBJECT::DELETE_OBJECT(&Local_308);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
								{
									iLocal_650 = 1;
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_274.f_0, true);
									ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -994.4631f, 643.6545f, 138.8214f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 277.058f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_274.f_0, 5f);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								}
								if (!PED::IS_PED_INJURED(Local_239.f_0))
								{
									TASK::CLEAR_PED_TASKS(Local_239.f_0);
								}
								__LIB_0__::func_963(0, 0, 1, 0);
								if (CAM::DOES_CAM_EXIST(iLocal_575))
								{
									CAM::STOP_GAMEPLAY_HINT(true);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
									CAM::DESTROY_CAM(iLocal_575, false);
									CAM::DESTROY_ALL_CAMS(false);
									HUD::DISPLAY_HUD(true);
									HUD::DISPLAY_RADAR(true);
								}
								AUDIO::STOP_STREAM();
								iLocal_618 = 1;
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_398(int iParam0, float fParam1, struct<2> Param2, var uParam3, float fParam4)//Position - 0x25363
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true) };
	iVar1 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) * 255f));
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param2.f_0, Param2.f_1, Var0.f_2, Var0, true);
	if ((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
		iVar1 = 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
	{
		if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) && iVar1 != 0) || iVar1 >= 250)
		{
			if (__LIB_0__::func_1("FAM3_HPULL"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (*iParam0 == 0)
			{
				SYSTEM::SETTIMERA(0);
				CAM::SHAKE_GAMEPLAY_CAM("SKY_DIVING_SHAKE", 0f);
				*iParam0 = 1;
			}
		}
		else
		{
			if (!func_100("FAM3_HPULL"))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_190("FAM3_HPULL");
					func_96("FAM3_HPULL", 1);
				}
			}
			if (*iParam0 == 1)
			{
				*iParam0 = 0;
				if (iLocal_591 == 1)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_592))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_592, "wheelspin", fLocal_590, false);
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_592, false);
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_593))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_593, "wheelspin", fLocal_590, false);
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_593, false);
					}
					iLocal_591 = 0;
				}
				CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
			}
		}
		if (*iParam0 == 1)
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, func_400(SYSTEM::FLOOR((SYSTEM::TO_FLOAT(SYSTEM::TIMERA()) / 12.5f)), 255));
			if (iLocal_591 == 0)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_592) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_593))
					{
						iLocal_592 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam3_wheelspin_dirt", Local_274.f_0, Local_209, Local_211, 1f, false, false, false);
						iLocal_593 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam3_wheelspin_dirt", Local_274.f_0, Local_210, Local_211, 1f, false, false, false);
						iLocal_591 = 1;
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY3_CABLE_STRAIN_MASTER", Local_274.f_0, 0, false, 0);
					}
				}
			}
			else if (iLocal_591 == 1)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_592) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_593))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_592, "wheelspin", fLocal_590, false);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_593, "wheelspin", fLocal_590, false);
				}
			}
		}
		if (*iParam0 == 1)
		{
			if (IntToFloat(SYSTEM::TIMERA()) > fParam1)
			{
				VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, false);
			}
			if (((IntToFloat(SYSTEM::TIMERA()) > fParam1 && fVar2 > fParam4) || fVar2 > (fParam4 * 2f)) || IntToFloat(SYSTEM::TIMERA()) > (fParam1 + 1500f))
			{
				VEHICLE::SET_VEHICLE_BURNOUT(Local_274.f_0, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_274.f_0, 2f);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_592) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_593))
				{
					fLocal_590 = 0f;
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_592, "wheelspin", fLocal_590, false);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_593, "wheelspin", fLocal_590, false);
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_592, false);
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_593, false);
					iLocal_591 = 0;
				}
				*iParam0 = 0;
				return 1;
			}
		}
		if (*iParam0 == 1)
		{
			fLocal_589 = __LIB_0__::func_331((fLocal_589 + (0.2f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fLocal_590 = __LIB_0__::func_331((fLocal_590 + (0.25f * SYSTEM::TIMESTEP())), 0f, 1f);
		}
		else if (*iParam0 == 0)
		{
			fLocal_589 = __LIB_0__::func_331((fLocal_589 - (0.4f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fLocal_590 = 0f;
		}
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_3_PULL_DOWN_HOUSE_SCENE", "apply", fLocal_590);
	}
	return 0;
}

int func_400(int iParam0, int iParam1)//Position - 0x256CF
{
	if (iParam0 == iParam1)
	{
		return iParam0;
	}
	else if (iParam0 > iParam1)
	{
		return iParam1;
	}
	else if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam0;
}

void func_402(int iParam0)//Position - 0x25719
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
			{
				fVar1 = (0f + ((0.5f * 30f) * SYSTEM::TIMESTEP()));
				iVar2 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/) * 255f));
				iVar3 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) * 255f));
				if ((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
					iVar3 = 0;
				}
				if (iVar3 >= 250)
				{
					if (ENTITY::GET_ENTITY_HEADING(iParam0) >= 287f)
					{
						Var0 = { -MISC::ABSF((130f * fVar1)), 0f, 0f };
						ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_212, 0, true, true, false, false, true);
						iLocal_659 = 0;
					}
					if (iVar2 >= 225)
					{
						if (ENTITY::GET_ENTITY_HEADING(iParam0) > 265f)
						{
							Var0 = { -MISC::ABSF((130f * fVar1)), 0f, 0f };
							ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_212, 0, true, true, false, false, true);
							iLocal_659 = 0;
						}
					}
					else if (iVar2 <= -225)
					{
						if (ENTITY::GET_ENTITY_HEADING(iParam0) < 285f)
						{
							Var0 = { MISC::ABSF((130f * fVar1)), 0f, 0f };
							ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_212, 0, true, true, false, false, true);
							iLocal_659 = 0;
						}
					}
					if (iVar2 == 0)
					{
						if (iLocal_659 == 0)
						{
							iLocal_659 = MISC::GET_GAME_TIMER();
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
							{
								case 0:
									iLocal_658 = 1;
									break;
								case 1:
									iLocal_658 = -1;
									break;
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_659) < 1000)
						{
							Var0 = { (MISC::ABSF((130f * fVar1)) * IntToFloat(iLocal_658)), 0f, 0f };
							ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_212, 0, true, true, false, false, true);
							iLocal_659 = 0;
						}
					}
					Var0 = { 0f, 0f, -MISC::ABSF((450f * fVar1)) };
					ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Var0, Local_212, 0, true, true, false, false, true);
				}
				else
				{
					iLocal_659 = 0;
				}
			}
		}
	}
}

void func_403(var uParam0)//Position - 0x2592E
{
	switch (*uParam0)
	{
		case 0:
			if (iLocal_581 == 1)
			{
				__LIB_0__::func_213(Local_274.f_0, 3f, 3, 1056964608, 0, 1, 0);
				if (iLocal_582 == 8)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						func_289(PLAYER::PLAYER_PED_ID(), -1, 5000, 0);
						func_289(Local_239.f_0, 0, 6000, 0);
						*uParam0++;
					}
				}
			}
			break;
	}
}

void func_404(int iParam0)//Position - 0x25994
{
	switch (*iParam0)
	{
		case 0:
			if (iLocal_581 == 1)
			{
				if (fLocal_584 >= 0.56f)
				{
					if (!CAM::DOES_CAM_EXIST(iLocal_575))
					{
						iLocal_575 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
						CAM::SET_CAM_PARAMS(iLocal_575, -1009.95325f, 633.5962f, 140.48341f, 22.945997f, -0.125925f, 21.448517f, 43.51022f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_575, -1010.4593f, 633.92316f, 140.59816f, 13.298273f, -0.125925f, 21.364548f, 43.51022f, 5000, 0, 0, 2);
						CAM::SHAKE_CAM(iLocal_575, "MEDIUM_EXPLOSION_SHAKE", 0.1f);
						CAM::STOP_GAMEPLAY_HINT(true);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						*iParam0++;
					}
				}
			}
			break;
		case 1:
			if (PHYSICS::DOES_ROPE_EXIST(&iLocal_578) && ENTITY::DOES_ENTITY_EXIST(Local_307.f_0))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_578, Local_307.f_0);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_578, Local_274.f_0);
				OBJECT::DELETE_OBJECT(&Local_307);
				PHYSICS::DELETE_ROPE(&iLocal_578);
				PHYSICS::ROPE_UNLOAD_TEXTURES();
				iLocal_579 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_308.f_0))
			{
				OBJECT::DELETE_OBJECT(&Local_308);
			}
			if (fLocal_584 >= 0.683f)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_575))
				{
					CAM::SET_CAM_PARAMS(iLocal_575, -1009.3812f, 658.44525f, 152.82092f, -39.49625f, -0.125924f, 138.36336f, 43.51022f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_575, -1010.49194f, 655.0285f, 150.77942f, -30.66858f, -0.125923f, 143.79984f, 43.51022f, 4000, 0, 0, 2);
					CAM::SHAKE_CAM(iLocal_575, "HAND_SHAKE", 0.25f);
					CAM::STOP_GAMEPLAY_HINT(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					*iParam0++;
				}
			}
			break;
		case 2:
			if (fLocal_584 >= 0.73f)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_575))
				{
					CAM::SET_CAM_PARAMS(iLocal_575, -1029.067f, 622.2623f, 125.47742f, 45.37811f, -0.125924f, 1.607233f, 50.256042f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_575, -1029.4054f, 621.6323f, 126.455505f, 40.449352f, -0.078049f, 1.812782f, 50.256042f, 5000, 0, 0, 2);
					CAM::SHAKE_CAM(iLocal_575, "HAND_SHAKE", 0.25f);
					CAM::STOP_GAMEPLAY_HINT(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					*iParam0++;
				}
			}
			break;
		case 3:
			if (iLocal_582 == 8)
			{
				CAM::SET_CAM_PARAMS(iLocal_575, -1013.90985f, 632.1597f, 140.13158f, 22.288286f, -0.125923f, 0.95958f, 50.256042f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_575, -1014.1351f, 633.3419f, 140.97739f, 20.564297f, -0.125923f, 1.779718f, 50.256042f, 9000, 0, 0, 2);
				CAM::SHAKE_CAM(iLocal_575, "HAND_SHAKE", 0.25f);
				CAM::STOP_GAMEPLAY_HINT(true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				Local_241.f_7 = MISC::GET_GAME_TIMER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
				{
					iLocal_650 = 1;
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_274.f_0, true);
					ENTITY::SET_ENTITY_COORDS(Local_274.f_0, -994.4631f, 643.6545f, 138.8214f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_274.f_0, 277.058f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_274.f_0, 5f);
				}
				*iParam0++;
			}
			break;
		case 4:
			if (__LIB_16__::func_302(5500, Local_241.f_7))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_575))
				{
					CAM::SET_CAM_PARAMS(iLocal_575, -991.09894f, 642.2662f, 140.00278f, 15.86285f, 0f, 67.17722f, 50f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_575, "HAND_SHAKE", 0.25f);
					CAM::STOP_GAMEPLAY_HINT(true);
					Local_241.f_7 = MISC::GET_GAME_TIMER();
					*iParam0++;
				}
			}
			break;
		case 5:
			if (__LIB_16__::func_302(500, Local_241.f_7))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_575))
				{
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
					CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
					CAM::DESTROY_CAM(iLocal_575, false);
					CAM::DESTROY_ALL_CAMS(false);
				}
				*iParam0++;
			}
			break;
	}
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x25DE9
{
	if (!func_100("FAM3_PULLS"))
	{
		if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0) && __LIB_1__::func_483(Local_239.f_0, Local_274.f_0))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_13__::func_755(&Local_373, 1))
				{
					if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_PULLS", 7, 0, 0, 0))
					{
						func_96("FAM3_PULLS", 1);
					}
				}
			}
		}
	}
	if (iParam0 == 1)
	{
		switch (iParam2)
		{
			case 1:
				if (iLocal_587 == 1)
				{
					if (!func_100("FAM3_PULLC1"))
					{
						if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_PULLC1", 7, 0, 0, 0))
						{
							func_96("FAM3_PULLC1", 1);
							*iParam3 = MISC::GET_GAME_TIMER();
							*uParam4 = MISC::GET_GAME_TIMER();
						}
					}
				}
				break;
			case 2:
				if (iLocal_587 == 1)
				{
					if (!func_100("FAM3_PULLC2"))
					{
						if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_PULLC2", 7, 0, 0, 0))
						{
							func_96("FAM3_PULLC2", 1);
							*iParam3 = MISC::GET_GAME_TIMER();
							*uParam4 = MISC::GET_GAME_TIMER();
						}
					}
				}
				break;
		}
		if (iParam1 == 0)
		{
			if (__LIB_16__::func_302(8000, *iParam3))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_373, 1))
					{
						if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_PULLI", 7, 0, 0, 0))
						{
							*iParam3 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (__LIB_17__::func_160("FAM3_PULLS"))
				{
					*iParam3 = MISC::GET_GAME_TIMER();
				}
			}
			*uParam4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			*iParam3 = MISC::GET_GAME_TIMER();
			if (__LIB_16__::func_302(3000, *uParam4))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_373, 1))
					{
						if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_PULLE", 7, 0, 0, 0))
						{
							*uParam4 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	else
	{
		*iParam3 = MISC::GET_GAME_TIMER();
		*uParam4 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_581 == 1)
	{
		if (!func_100("FAM3_PULLC3"))
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_PULLC3", 7, 0, 0, 0))
				{
					func_96("FAM3_PULLC3", 1);
				}
			}
		}
		if (iParam0 == 1)
		{
			if (!func_100("FAM3_DOWN") && !func_100("FAM3_DOWNA"))
			{
				if (!__LIB_0__::func_75())
				{
					if (iLocal_582 == 8)
					{
						switch (__LIB_17__::func_80())
						{
							case 0:
								if (__LIB_17__::func_244(&uLocal_397, "FAM3AUD", "FAM3_DOWN", "FAM3_DOWN_1", 7, 0, 0))
								{
									func_96("FAM3_DOWN", 1);
								}
								break;
							case 1:
								if (__LIB_17__::func_244(&uLocal_397, "FAM3AUD", "FAM3_DOWNA", "FAM3_DOWNA_1", 7, 0, 0))
								{
									func_96("FAM3_DOWNA", 1);
								}
								break;
							}
						}
					}
				}
			}
	}
}

void func_408(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5)//Position - 0x2606E
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
	{
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 7)
		{
			*fParam5 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_576);
		}
	}
	switch (*iParam0)
	{
		case 0:
			iLocal_576 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-1020.5f, 663.41f, 154.75f, 50f, "DES_StiltHouse");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) != 5)
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) != 4)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576, 4);
					}
				}
				else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 5)
				{
					*uParam3 = 1;
					*iParam0++;
				}
			}
			break;
		case 1:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 5)
				{
					if (*iParam1 == 1)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576, 6);
						*iParam0++;
					}
				}
			}
			break;
		case 2:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 7)
				{
					if (*iParam2 == 0)
					{
						if (OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_576) > 0.1475f)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576, 12);
							*iParam2 = 1;
							SYSTEM::SETTIMERB(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		case 3:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (*iParam2 == 0)
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 12)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576, 13);
						*iParam0++;
					}
				}
			}
			break;
		case 4:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 7)
				{
					if (*iParam2 == 0)
					{
						if (OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_576) >= 0.433f)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576, 12);
							*iParam2 = 1;
							SYSTEM::SETTIMERB(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		case 5:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (*iParam2 == 0)
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 12)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576, 13);
						*iParam0++;
					}
				}
			}
			break;
		case 6:
			STREAMING::REQUEST_PTFX_ASSET();
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 7)
				{
					if (OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_576) > 0.875f || iLocal_618 == 1)
					{
						if (iLocal_618 == 1)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576, 9);
						}
						if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_594))
						{
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								iLocal_594 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_ray_fam3_dust_settle", -1016f, 642f, 141f, 0f, 0f, 0f, 1f, false, false, false, false);
							}
						}
						*iParam0++;
					}
				}
			}
			break;
		case 7:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_576))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_576) == 10)
				{
					*uParam4 = 1;
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "FAMILY3_POST_DEBRIS_MASTER", -1016f, 642f, 141f, 0, false, 0, false);
					*iParam0++;
				}
			}
			break;
		case 8:
			break;
	}
}

void func_409(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26325
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			switch (iParam2->f_11)
			{
				case 0:
					if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
					{
						STREAMING::REQUEST_ANIM_DICT("missfam3");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_PLAY_ANIM(0, "missfam3", "react_incar_brace_enter_f", 4f, -1000f, -1, 16, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "missfam3", "react_incar_brace_loop_f", 1000f, -4f, -1, 17, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							iParam2->f_13 = 0;
							iParam2->f_11 = 1;
						}
					}
					break;
				case 1:
					if (iParam2->f_13 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "react_incar_brace_loop_f", 3) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "react_incar_brace_loop_f", 4f, -4f, -1, 17, 0f, false, false, false);
						}
						iParam2->f_13 = 1;
					}
					if (iParam3 == 1)
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 2;
					}
					else if (iLocal_583 >= 3)
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 4;
					}
					break;
				case 2:
					if (iParam2->f_13 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "react_incar_bumps_loop_f", 3))
						{
							TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "react_incar_bumps_loop_f", 4f, -4f, -1, 17, 0f, false, false, false);
						}
						iParam2->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000));
						iParam2->f_13 = 1;
					}
					if (iParam3 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iParam2->f_7) > 0)
						{
							iParam2->f_13 = 0;
							iParam2->f_11 = 3;
						}
					}
					else
					{
						iParam2->f_13 = 0;
						iParam2->f_11 = 1;
					}
					break;
				case 3:
					if (iParam2->f_13 == 0)
					{
						TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 4f, -4f, -1, 17, 0f, false, false, false);
						iParam2->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 1750));
						iParam2->f_13 = 1;
					}
					if (iParam2->f_13 == 1)
					{
						if ((MISC::GET_GAME_TIMER() - iParam2->f_7) > 0)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "incar_lookbehind_idle_passenger", 3))
							{
								if (iParam3 == 1)
								{
									iParam2->f_13 = 0;
									iParam2->f_11 = 2;
								}
								else
								{
									iParam2->f_13 = 0;
									iParam2->f_11 = 1;
								}
							}
						}
					}
					break;
				case 4:
					if (iParam2->f_13 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "missfam3", "react_incar_brace_exit_f", 3))
						{
							TASK::TASK_PLAY_ANIM(iParam0, "missfam3", "react_incar_brace_exit_f", 4f, -4f, -1, 16, 0f, false, false, false);
						}
						iParam2->f_13 = 1;
					}
					if (iLocal_581 == 1)
					{
						iParam2->f_13 = 0;
						iParam2->f_11++;
					}
					break;
				case 5:
					if (iParam2->f_13 == 0)
					{
						func_289(PLAYER::PLAYER_PED_ID(), -1, 10000, 0);
						func_289(Local_239.f_0, 0, 10500, 0);
						iParam2->f_13 = 1;
					}
					break;
				}
			}
	}
}

void func_410()//Position - 0x26602
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_244.f_0, false))
		{
			switch (Local_244.f_11)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_244.f_0, "missfam3", "coach_idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_244.f_0, "missfam3", "coach_idle", 1000f, -1000f, -1, 1, 0f, false, false, false);
					}
					Local_244.f_11++;
					break;
				case 1:
					if (bLocal_586 == 1)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_573))
						{
							TASK::CLEAR_PED_TASKS(Local_244.f_0);
							iLocal_573 = PED::CREATE_SYNCHRONIZED_SCENE(-1014.525f, 654.25f, 156.175f, 0f, 0f, -103.32f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_244.f_0, iLocal_573, "missfam3", "argument_outro_coach", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_573, 0.6125f);
						}
						Local_244.f_11++;
					}
					break;
				case 2:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_573))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_573) > 0.95f)
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_244.f_0, -1000f, true);
							TASK::CLEAR_PED_TASKS(Local_244.f_0);
							__LIB_28__::func_227(Local_244.f_0, -1021.5886f, 663.7698f, 155.2747f, 178.532f, 0, 0, 0);
							Local_244.f_11++;
						}
					}
					break;
				case 3:
					if (iLocal_583 >= 2)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_573))
						{
							TASK::CLEAR_PED_TASKS(Local_244.f_0);
							iLocal_573 = PED::CREATE_SYNCHRONIZED_SCENE(-1034f, 662.1f, 156.1f, 0f, 0f, -165.96f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_244.f_0, iLocal_573, "missfam3", "argument_outro_coach", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_573, 0.83f);
							Local_244.f_11++;
						}
					}
					break;
				case 4:
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_573))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_573) > 0.98f)
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_244.f_0, -1000f, true);
								TASK::CLEAR_PED_TASKS(Local_244.f_0);
								PED::DELETE_PED(&Local_244);
								Local_244.f_11++;
							}
						}
					}
					break;
				}
			}
	}
}

int func_411(int iParam0)//Position - 0x26822
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_17__::func_216("fam_3_mcs_1", 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
				{
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_274.f_0, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_274.f_0, 0, 0, 0f);
					}
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_274.f_0, 1))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_274.f_0, 1, 0, 0f);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_274.f_0, "Fam3_tow_truck", 0, joaat("bison2"), 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_274.f_0, true, true, false);
				}
				if (!PED::IS_PED_INJURED(Local_239.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_239.f_0, "Franklin", 0, __LIB_0__::func_518(1), 0);
				}
				if (!PED::IS_PED_INJURED(Local_244.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_244.f_0, "TennisCoach", 0, joaat("CS_TennisCoach"), 0);
				}
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				}
				if (!PED::IS_PED_INJURED(Local_239.f_0))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", Local_239.f_0, 0);
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 4, 1, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM3_ARRIVE_HOUSE");
				CAM::STOP_GAMEPLAY_HINT(true);
				MISC::CLEAR_AREA(Local_241.f_2, 100f, true, false, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_241.f_2, 100f, false, false, false, false, false, false, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			PHYSICS::ROPE_LOAD_TEXTURES();
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			STREAMING::REQUEST_MODEL(Local_308.f_7);
			STREAMING::REQUEST_MODEL(Local_306.f_7);
			STREAMING::REQUEST_MODEL(Local_309.f_7);
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::STOP_GAMEPLAY_HINT(false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (iLocal_618 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", -993.2f, 646.188f, 139.52f, 0f, 0f, -93.24f, 1000f, -4f, -1, 299010, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (iLocal_618 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_239.f_0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
						{
							PED::SET_PED_INTO_VEHICLE(Local_239.f_0, Local_274.f_0, 0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fam3_tow_truck", 0))
			{
				if (iLocal_618 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_274.f_0, 5, false, true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TennisCoach", 0))
			{
				if (!PED::IS_PED_INJURED(Local_244.f_0))
				{
					TASK::TASK_PLAY_ANIM(Local_244.f_0, "missfam3", "coach_idle", 4f, -4f, -1, 1, 0f, false, false, false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_306.f_0))
			{
				if (func_109(&Local_306, 1))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_306.f_0, true, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_306.f_0, PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_274.f_0, Local_306.f_0, false);
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_306.f_0, false);
					ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_306.f_0, false);
				}
			}
			if (iLocal_652 == 0)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 39500)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("FAM3_HOOKED_UP"))
					{
						iLocal_652 = 1;
					}
				}
			}
			if (iLocal_579 == 0)
			{
				if (iLocal_618 == 0)
				{
					if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 58000f)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_308.f_0))
						{
							if (func_109(&Local_308, 1))
							{
								ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_308.f_0, false);
								ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_308.f_0, false);
							}
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
						{
							PHYSICS::ROPE_LOAD_TEXTURES();
							if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
							{
								iLocal_578 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, false, true, true, 1f, false, 0);
								PHYSICS::LOAD_ROPE_DATA(iLocal_578, sLocal_201);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_0) && PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
						{
							if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_307.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
								{
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_274.f_0, true);
									PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_578, Local_307.f_0, Local_274.f_0, Local_307.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_274.f_0, 0f, -2.1f, 0.6f), 35f, false, false, 0, 0);
									iLocal_579 = 1;
								}
							}
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				if (iLocal_618 == 1)
				{
					if ((PHYSICS::ROPE_ARE_TEXTURES_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("missfam3")) && STREAMING::HAS_MODEL_LOADED(Local_306.f_7))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_274.f_0, true);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_274.f_0, 5, false, false);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_274.f_0, 5f);
						}
						if (iLocal_579 == 0)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_308.f_0))
							{
								if (func_109(&Local_308, 1))
								{
									ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_308.f_0, false);
									ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_308.f_0, false);
								}
							}
							if (!PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
							{
								if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
								{
									iLocal_578 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, false, true, true, 1f, false, 0);
									PHYSICS::LOAD_ROPE_DATA(iLocal_578, sLocal_201);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_0) && PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
							{
								if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_307.f_0))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
									{
										PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_578, Local_307.f_0, Local_274.f_0, Local_307.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_274.f_0, 0f, -2.1f, 0.6f), 35f, false, false, 0, 0);
										iLocal_579 = 1;
									}
								}
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_306.f_0))
						{
							if (func_109(&Local_306, 1))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_306.f_0, true, false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_306.f_0, PLAYER::PLAYER_PED_ID(), false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_274.f_0, Local_306.f_0, false);
								ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_306.f_0, false);
								ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_306.f_0, false);
							}
						}
						SYSTEM::WAIT(1000);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", -993.2f, 646.188f, 139.52f, 0f, 0f, -93.24f, 1000f, -4f, -1, 299010, 0f, 2, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							}
						}
						if (!PED::IS_PED_INJURED(Local_239.f_0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_239.f_0, Local_274.f_0, false))
								{
									PED::SET_PED_INTO_VEHICLE(Local_239.f_0, Local_274.f_0, 0);
								}
							}
						}
						CAM::STOP_GAMEPLAY_HINT(true);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						*iParam0++;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", 3))
				{
					*iParam0++;
				}
			}
			else if (iLocal_618 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_618 = 1;
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael", 3))
				{
					CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
					PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
					if (!func_100("FAM3_HKD"))
					{
						if (__LIB_17__::func_244(&uLocal_397, "FAM3AUD", "FAM3_HKD", "FAM3_HKD_3", 7, 0, 0))
						{
							func_96("FAM3_HKD", 1);
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael") >= 0.95f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "argument_outro_michael") >= 0.9f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (iLocal_687 == 0)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_687 = 1;
							}
						}
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_306.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_306.f_0, false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_306.f_0, true, false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_306.f_0, PLAYER::PLAYER_PED_ID(), true);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_274.f_0, Local_306.f_0, false);
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_309.f_0))
					{
						if (func_109(&Local_309, 1))
						{
							ENTITY::SET_ENTITY_COLLISION(Local_309.f_0, true, false);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_309.f_0, Local_274.f_0, false);
						}
					}
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 247.8959f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_306.f_7);
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_TRUCK_PULL");
					RECORDING::REPLAY_STOP_EVENT();
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_412(int iParam0)//Position - 0x27090
{
	MISC::SET_BIT(&(Local_373.f_13), 20);
	fLocal_625 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_244.f_0, 1);
	func_499(&(Local_286.f_7));
	func_449(&(Local_244.f_11));
	func_448(Local_274.f_0, Local_285.f_0, &iLocal_613, &(Local_244.f_7), 1000);
	__LIB_14__::func_655(Local_285.f_1, Local_285.f_0, 250f, 0.7f, iLocal_612);
	switch (__LIB_17__::func_80())
	{
		case 0:
			func_443("FAM3_MST1");
			break;
		case 1:
			func_443("FAM3_FST1");
			break;
	}
	func_295(&Local_216);
	func_295(&Local_222);
	if (iLocal_602 == 0)
	{
		if (iLocal_601 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
			{
				PATHFIND::SET_GPS_DISABLED_ZONE((-742.6803f - 48f), (539.20996f - 48f), (115.34058f - 18f), (-742.6803f + 48f), (539.20996f + 48f), (115.34058f + 18f));
				iLocal_601 = 1;
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(Local_373.f_5))
			{
				PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
				iLocal_601 = 0;
			}
			if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
			{
				if (((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -742.6803f, 539.20996f, 115.34058f, 48f, 48f, 18f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.89f, 709.6f, 132.38f, -1133.41f, 679.84f, 161.1f, 36f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1062.28f, 662.22f, 125.02f, -1138.02f, 681.84f, 161.37f, 36f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.68f, 661.26f, 121.1f, -976.84f, 641.13f, 153.91f, 36f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -894.49f, 655.77f, 113.47f, -985.13f, 640.53f, 154.35f, 36f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -898.85f, 657.44f, 113.6f, -823.46f, 645.49f, 144.01f, 36f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.93f, 551.06f, 101.91f, -827.24f, 649.55f, 144.36f, 36f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -770.974f, 557.36f, 102.67f, -700.16f, 501.75f, 124.6f, 36f, false, true, 0))
				{
					PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_602 = 1;
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
			{
				if (!PED::IS_PED_INJURED(Local_239.f_0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_239.f_0, Local_274.f_0, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_239.f_0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_239.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(Local_239.f_0, Local_274.f_0, 20000, 0, 2f, 262145, 0);
						}
					}
					PED::SET_PED_CONFIG_FLAG(Local_239.f_0, 29, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_239.f_0, true);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), Local_241.f_2, Local_241.f_5, 0, 0, 0);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
							TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, 20000, -1, 2f, 131073, 0);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_239.f_0, true);
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				SYSTEM::WAIT(150);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 7f, 4);
			*iParam0++;
			break;
		case 1:
			__LIB_0__::func_496();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, false))
				{
					if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
					{
						if (__LIB_0__::func_501("FAM3_GIT", 0, 0) || __LIB_0__::func_501("FAM3_GBIT", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						HUD::REMOVE_BLIP(&(Local_274.f_1));
					}
					if (iLocal_655 == 0)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOLLOW_THE_COACH"))
						{
							AUDIO::START_AUDIO_SCENE("FAMILY_3_FOLLOW_THE_COACH");
						}
						iLocal_655 = 1;
					}
					if (iLocal_612 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_285.f_1))
							{
								Local_285.f_1 = __LIB_0__::func_639(Local_285.f_0, 1, 0);
							}
							if (HUD::DOES_BLIP_EXIST(Local_285.f_1))
							{
								if (!func_100("FAM3_FTC"))
								{
									HUD::CLEAR_PRINTS();
									func_281("FAM3_FTC", 7500, 1);
								}
							}
						}
					}
				}
				else
				{
					if (!HUD::DOES_BLIP_EXIST(Local_274.f_1))
					{
						Local_274.f_1 = __LIB_0__::func_639(Local_274.f_0, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
					{
						if (!func_100(&Local_213))
						{
							if (iLocal_655 == 0)
							{
								HUD::CLEAR_PRINTS();
								func_281(&Local_213, 7500, 1);
							}
						}
						else if (!func_100("FAM3_GBIT"))
						{
							if (iLocal_655 == 1)
							{
								HUD::CLEAR_PRINTS();
								func_281("FAM3_GBIT", 7500, 1);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_285.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_285.f_1));
					}
				}
			}
			if (iLocal_611 == 1)
			{
				if (iLocal_654 == 0)
				{
					if (fLocal_627 >= 7500f)
					{
						iLocal_654 = 1;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, false))
					{
						if (iLocal_654 == 1)
						{
							__LIB_17__::func_71(&uLocal_385, Local_285.f_0, __LIB_1__::func_295(__LIB_13__::func_769(0), "FAM3_HCAM", ""), 0, 1, 1, 1);
						}
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
							{
								AUDIO::START_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
							}
						}
						else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
						}
					}
					else if (func_100("FAM3_HCAM"))
					{
						if (__LIB_0__::func_1("FAM3_HCAM"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				if (iLocal_612 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_286.f_0, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_274.f_0, Local_286.f_0, Local_203, false, true, 0))
							{
								__LIB_0__::func_345(&uLocal_385, 0, 0);
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
								{
									AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
								}
								iLocal_611 = 0;
								iLocal_612 = 1;
								iLocal_236 = 1;
								if (__LIB_0__::func_501("FAM3_FTC", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -1381.2683f, 474.78653f, 103.054825f, -1390.8202f, 457.38113f, 110.486206f, 8f, false, true, 0))
					{
						__LIB_0__::func_345(&uLocal_385, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
						}
						iLocal_611 = 0;
						iLocal_612 = 1;
						iLocal_236 = 1;
						if (__LIB_0__::func_501("FAM3_FTC", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (__LIB_0__::func_77(0))
						{
							__LIB_0__::func_366(1);
						}
					}
					if (fLocal_625 > 250f)
					{
						if (HUD::DOES_BLIP_EXIST(Local_285.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_285.f_1));
						}
						__LIB_0__::func_345(&uLocal_385, 0, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOCUS_ON_COACH"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOCUS_ON_COACH");
						}
						iLocal_611 = 0;
						iLocal_612 = 1;
						iLocal_236 = 0;
						if (__LIB_0__::func_501("FAM3_FTC", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
			}
			else if (iLocal_612 == 1)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FOLLOW_THE_COACH"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FOLLOW_THE_COACH");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FIND_THE_COACH"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
				}
				switch (iLocal_236)
				{
					case 1:
						break;
					case 0:
						break;
				}
				if (func_100("FAM3_LOST"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_285.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_285.f_1));
					}
					if (__LIB_17__::func_160("FAM3_LOST"))
					{
						iLocal_609 = 1;
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
									{
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											iLocal_604 = 1;
										}
									}
								}
							}
						}
					}
					else if (iLocal_609 == 1)
					{
						*iParam0++;
					}
				}
			}
			if (iLocal_604 == 1)
			{
				func_414(&Local_373, Local_204, 4f, 8f, 2f, 1, Local_239.f_0, Local_274.f_0, &Local_216, "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", &Local_222, 0, 1, 1, -1);
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam3");
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				}
			}
			if (iLocal_614 == 0)
			{
				if (((HUD::DOES_BLIP_EXIST(Local_373.f_5) && __LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_1__::func_483(Local_239.f_0, Local_274.f_0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -1116.0033f, 693.00433f, 140.49655f, -1040.9293f, 667.3976f, 157.2546f, 36f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_274.f_0, -1054.0425f, 681.1791f, 152.77362f, 20f, 16f, 12f, false, true, 0))
					{
						__LIB_0__::func_671(1);
						SYSTEM::SETTIMERA(0);
						CAM::SET_GAMEPLAY_COORD_HINT(Local_206, -1, 9500, 2000, joaat("FAMILY3_COACH_ON_BALCONY_VEHICLE_HINT_HELPER"));
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), Local_274.f_0, -991.6547f, 645.38214f, 140.64255f, 4, 6f, 8, 1f, 2f, false);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_BALCONY");
					iLocal_614 = 1;
				}
				else if ((((!HUD::DOES_BLIP_EXIST(Local_373.f_5) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && __LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_1__::func_483(Local_239.f_0, Local_274.f_0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -1116.0033f, 693.00433f, 140.49655f, -1040.9293f, 667.3976f, 157.2546f, 36f, false, true, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_BALCONY");
					iLocal_614 = 1;
				}
			}
			else if (iLocal_614 == 1)
			{
				if (iLocal_615 == 0)
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
					if ((HUD::DOES_BLIP_EXIST(Local_373.f_5) && __LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0)) && __LIB_1__::func_483(Local_239.f_0, Local_274.f_0))
					{
						if (func_100("FAM3_SPOT"))
						{
							if (iLocal_616 == 1)
							{
								VEHICLE::REMOVE_VEHICLE_WINDOW(Local_274.f_0, 0);
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 4f, -4f, -1, 48, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(Local_239.f_0, "missfam3", "shout_out_window_franklin", 4f, -1.5f, -1, 48, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_244.f_0, "missfam3", "shout_out_window_coach", -1034.63f, 654.114f, 156.08f, 0f, 0f, 85f, 4f, -4f, -1, 5128, 0f, 2, 0);
								TASK::TASK_LOOK_AT_ENTITY(Local_244.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7f, 7f, 4);
								iLocal_615 = 1;
							}
						}
					}
				}
				else if (iLocal_615 == 1)
				{
					if (func_100("FAM3_BALC"))
					{
						if (iLocal_617 == 0)
						{
							if (__LIB_17__::func_160("FAM3_BALC"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_373.f_5) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
								{
									if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -1116.1631f, 681.8411f, 135.56912f, -1066.3226f, 665.0233f, 149.06273f, 24f, false, true, 0))
									{
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FIND_THE_COACH"))
										{
											AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
										}
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ARRIVE_AT_HOUSE"))
										{
											AUDIO::START_AUDIO_SCENE("FAMILY_3_ARRIVE_AT_HOUSE");
										}
										iLocal_617 = 1;
									}
								}
							}
						}
					}
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
						if (((SYSTEM::TIMERA() > 9500 || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_244.f_0, "missfam3", "shout_out_window_coach", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_244.f_0, "missfam3", "shout_out_window_coach") > 0.8f)) || (func_100("FAM3_BALC") && !__LIB_0__::func_75())) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -1056.9888f, 652.4657f, 140.02724f, -1047.2192f, 668.41406f, 153.15137f, 16f, false, true, 0))
						{
							__LIB_0__::func_671(0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
								}
							}
							if (!PED::IS_PED_INJURED(Local_239.f_0))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_239.f_0, "missfam3", "shout_out_window_franklin", 3))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(Local_239.f_0);
								}
							}
							CAM::STOP_GAMEPLAY_HINT(false);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_ARRIVE_AT_HOUSE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ARRIVE_AT_HOUSE");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_FIND_THE_COACH"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_3_DRIVE_IN_TO_POSITION"))
							{
								AUDIO::START_AUDIO_SCENE("FAMILY_3_DRIVE_IN_TO_POSITION");
							}
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
			{
				if (HUD::GET_BLIP_FROM_ENTITY(Local_274.f_0) == Local_274.f_1)
				{
					HUD::REMOVE_BLIP(&(Local_274.f_1));
				}
			}
			if (func_414(&Local_373, Local_204, 4f, 8f, 2f, 1, Local_239.f_0, Local_274.f_0, &Local_216, "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", &Local_222, 0, 1, 1, -1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_274.f_0))
					{
						if (CAM::DOES_CAM_EXIST(iLocal_575))
						{
							CAM::SET_CAM_ACTIVE(iLocal_575, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(iLocal_575, false);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
							}
						}
						if (!PED::IS_PED_INJURED(Local_239.f_0))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_239.f_0, "missfam3", "shout_out_window_franklin", 3))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(Local_239.f_0);
							}
						}
						if (!PED::IS_PED_INJURED(Local_244.f_0))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_244.f_0, "missfam3", "shout_out_window_coach", 3))
							{
								TASK::CLEAR_PED_TASKS(Local_244.f_0);
							}
							TASK::TASK_CLEAR_LOOK_AT(Local_244.f_0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_303.f_0))
						{
							OBJECT::DELETE_OBJECT(&Local_303);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_304.f_0))
						{
							OBJECT::DELETE_OBJECT(&Local_304);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
						{
							OBJECT::DELETE_OBJECT(&Local_310);
						}
						func_125(&Local_285, 1, 1);
						__LIB_0__::func_325();
						__LIB_0__::func_638();
						SYSTEM::SETTIMERA(0);
						*iParam0++;
					}
				}
			}
			if (__LIB_0__::func_719() || __LIB_6__::func_181())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_3_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_204, true) < 100f)
			{
				CUTSCENE::REQUEST_CUTSCENE("fam_3_mcs_1", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
					}
					if (!PED::IS_PED_INJURED(Local_239.f_0))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", Local_239.f_0, 0);
					}
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 4, 1, 0, 0);
				}
			}
			else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_3_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1036.4799f, 671.6424f, 155.45769f, 4f, 7f, 4.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1006.94684f, 667.2821f, 154.91739f, 5f, 8f, 4.5f, false, true, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
			break;
		case 3:
			if (__LIB_0__::func_213(Local_274.f_0, 3f, 1, 1056964608, 0, 1, 0))
			{
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || !__LIB_0__::func_75()) || SYSTEM::TIMERA() > 5000)
				{
					func_413(&Local_251, 1, 1, 1);
					func_125(&Local_286, 1, 1);
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_286.f_9, sLocal_208);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_FIND_THE_COACH");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_ARRIVE_AT_HOUSE");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_3_DRIVE_IN_TO_POSITION");
					CAM::STOP_GAMEPLAY_HINT(false);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7f, 0f, 4);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_413(int* iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x28068
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						if (PED::IS_PED_GROUP_MEMBER(*iParam0, __LIB_0__::func_495()))
						{
							PED::REMOVE_PED_FROM_GROUP(*iParam0);
						}
					}
					PED::SET_PED_KEEP_TASK(*iParam0, bParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_GROUP_MEMBER(*iParam0, __LIB_0__::func_495()))
				{
					PED::REMOVE_PED_FROM_GROUP(*iParam0);
				}
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
			}
			PED::DELETE_PED(iParam0);
		}
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1));
		}
		iParam0->f_7 = 0;
		iParam0->f_9 = 0;
		iParam0->f_10 = 0;
		iParam0->f_8 = 0;
		iParam0->f_11 = 0;
		iParam0->f_12 = 0;
		iParam0->f_15 = 0f;
		iParam0->f_13 = 0;
		iParam0->f_14 = 0;
		iParam0->f_17 = 0;
	}
}

bool func_414(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)//Position - 0x281A3
{
	return func_415(iParam0, Param1, Param2, bParam3, iParam4, 0, 0, iParam5, sParam6, sParam7, sParam7, sParam7, sParam7, sParam8, sParam9, bParam10, bParam11, bParam12, iParam13);
}

int func_415(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x281D7
{
	return func_236(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 5, uParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

void func_443(char* sParam0)//Position - 0x292FC
{
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_239.f_0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
	{
		if (iLocal_611 == 1)
		{
			if (iLocal_628 == 0)
			{
				if (func_446(fLocal_625, 175f))
				{
					if (iLocal_608 == 0)
					{
						if (__LIB_0__::func_75())
						{
							Local_606 = { __LIB_0__::func_485() };
							__LIB_0__::func_429();
						}
						if (!__LIB_13__::func_755(&Local_373, 0))
						{
							if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_WARN", 9, 0, 0, 0))
							{
								iLocal_608 = 1;
							}
						}
					}
				}
				else if (!func_100(sParam0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_239.f_0, Local_274.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_373, 1))
							{
								if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", sParam0, 7, 0, 0, 0))
								{
									iLocal_621 = 0;
									func_96(sParam0, 1);
								}
							}
						}
					}
				}
				else if (iLocal_608 == 1)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_244(&uLocal_397, "FAM3AUD", sParam0, &Local_606, 7, 0, 0))
						{
							iLocal_608 = 0;
						}
					}
				}
				else if (iLocal_608 == 0)
				{
					if (!__LIB_0__::func_75())
					{
						Local_239.f_9 = MISC::GET_GAME_TIMER();
						iLocal_628 = 1;
					}
				}
			}
			else
			{
				if (!func_100("FAM3_LEFT") && !func_100("FAM3_RIGHT"))
				{
					if (fLocal_627 > 30725f && fLocal_627 < 33500f)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_239.f_0, Local_274.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_373, 1))
								{
									if (iLocal_613 == 1)
									{
										if (fLocal_625 < 75f)
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -1076.6064f, 431.18906f, 63.72191f, -1077.5574f, 345.40512f, 78.3798f, 24f, false, true, 0))
											{
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_LEFT", 7, 0, 0, 0))
												{
													func_96("FAM3_LEFT", 1);
													Local_239.f_9 = MISC::GET_GAME_TIMER();
												}
											}
											else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_274.f_0, -1019.40735f, 397.1515f, 62.308754f, -1064.4598f, 394.3105f, 79.96735f, 24f, false, true, 0))
											{
												if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_RIGHT", 7, 0, 0, 0))
												{
													func_96("FAM3_RIGHT", 1);
													Local_239.f_9 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_681 == 0)
				{
					if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1288.6659f, 459.23187f, 94.68425f, -1392.7201f, 466.89673f, 113.11885f, 32f, false, true, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_286.f_0, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_286.f_0) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_286.f_0))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_286.f_0) < 8350f)
									{
										__LIB_0__::func_638();
										iLocal_681 = 1;
									}
								}
							}
						}
					}
				}
				if (iLocal_681 == 0)
				{
					if (!__LIB_0__::func_75())
					{
						if (!__LIB_13__::func_755(&Local_373, 1))
						{
							if (__LIB_16__::func_302(10000, Local_239.f_9))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(Local_239.f_0, Local_274.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
								{
									if (fLocal_625 > 185f)
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_WARN", 7, 0, 0, 0))
										{
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (fLocal_625 > 150f)
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_LOSE", 7, 0, 0, 0))
										{
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (fLocal_625 < 75f)
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_SEE", 7, 0, 0, 0))
										{
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (iLocal_613 == 1)
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_AHEAD", 7, 0, 0, 0))
										{
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
									}
									else if (iLocal_613 == 0)
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_LOSE", 7, 0, 0, 0))
										{
											Local_239.f_9 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_681 == 1)
				{
					if (iLocal_682 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_17__::func_730(&uLocal_397, "FAM3AUD", "FAM3_VAN", 7, 0, 0, 0, 0);
							iLocal_682 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_612 == 1)
		{
			if (iLocal_236 == 1)
			{
				if (!func_100("FAM3_VAN") && !func_100("FAM3_LOST"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_286.f_0, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_274.f_0, Local_286.f_0, Local_203, false, true, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_286.f_0) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_286.f_0))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_286.f_0) < 8350f)
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(Local_239.f_0, Local_274.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
										{
											if (iLocal_682 == 0)
											{
												if (!__LIB_0__::func_75())
												{
													if (!__LIB_13__::func_755(&Local_373, 1))
													{
														if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_VAN", 7, 0, 0, 0))
														{
															iLocal_628 = 0;
															func_96("FAM3_VAN", 1);
														}
													}
												}
												else
												{
													__LIB_0__::func_429();
												}
											}
											else
											{
												__LIB_13__::func_783();
												iLocal_628 = 0;
												func_96("FAM3_VAN", 1);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_236 == 1)
			{
				if (!func_100("FAM3_VANM2") && !func_100("FAM3_LOST"))
				{
					if (iLocal_610 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_251.f_0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286.f_0, false) && !PED::IS_PED_INJURED(Local_251.f_0))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_286.f_0, Local_274.f_0))
								{
									if (__LIB_0__::func_77(0))
									{
										__LIB_0__::func_366(1);
									}
									if (iLocal_624 == 0)
									{
										if (!PED::IS_PED_INJURED(Local_251.f_0))
										{
											__LIB_0__::func_640(Local_251.f_0, "GENERIC_CURSE_HIGH", 3);
											VEHICLE::START_VEHICLE_HORN(Local_286.f_0, 5000, 0, false);
											iLocal_624 = 1;
										}
									}
									if (iLocal_608 == 0)
									{
										if (__LIB_0__::func_75())
										{
											__LIB_0__::func_429();
											iLocal_621 = 0;
										}
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_VANM2", 8, 0, 0, 0))
										{
											iLocal_610 = 1;
											func_96("FAM3_VANM2", 1);
										}
									}
								}
							}
						}
					}
				}
			}
			if (!func_100("FAM3_LOST"))
			{
				if (iLocal_682 == 1)
				{
					if (!func_100("FAM3_VAN"))
					{
						__LIB_0__::func_638();
					}
				}
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_373, 1))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_239.f_0, Local_274.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
						{
							if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_LOST", 9, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 3);
								func_96("FAM3_LOST", 1);
								Local_239.f_9 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			else
			{
				if (!func_100("FAM3_TURN"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_274.f_0, -1195.8726f, 706.98f, 149.74811f, 34f, 34f, 7f, false, true, 0))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_373, 1))
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_TURN", 7, 0, 0, 0))
									{
										func_96("FAM3_LOOK", 1);
										func_96("FAM3_TURN", 1);
									}
								}
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
					}
				}
				if (!func_100("FAM3_FIND"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_274.f_0, -1183.0731f, 704.4132f, 150.80573f, 16f, 16f, 7f, false, true, 0))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_373, 1))
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_FIND", 7, 0, 0, 0))
									{
										func_96("FAM3_LOOK", 1);
										func_96("FAM3_TURN", 1);
										func_96("FAM3_FIND", 1);
									}
								}
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
					}
				}
				if (!func_100("FAM3_CAR"))
				{
					if (func_100("FAM3_FIND"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
						{
							if (iLocal_613 == 1)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_CAR", 7, 0, 0, 0))
										{
											func_96("FAM3_CAR", 1);
										}
									}
								}
								else
								{
									__LIB_0__::func_638();
								}
							}
						}
					}
				}
				if (!func_100("FAM3_LOOK"))
				{
					if (iLocal_236 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
						{
							if (func_100(&Local_216) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_216))
							{
								if (__LIB_16__::func_302(8000, Local_239.f_9))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_204, true) < 425f)
									{
										if (!VEHICLE::IS_VEHICLE_STOPPED(Local_274.f_0))
										{
											if (!__LIB_0__::func_75())
											{
												if (!__LIB_13__::func_755(&Local_373, 1))
												{
													if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_LOOK", 7, 0, 0, 0))
													{
														iLocal_562++;
														Local_239.f_9 = MISC::GET_GAME_TIMER();
													}
													if (iLocal_562 == 1)
													{
														func_96("FAM3_LOOK", 1);
													}
												}
												else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
												{
													__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "FAM3_AIAA", "MICHAEL", 6);
													func_96("FAM3_LOOK", 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!func_100("FAM3_SPOT"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
					{
						if (iLocal_614 == 1)
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_373, 1))
								{
									if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_SPOT", 7, 0, 0, 0))
									{
										func_96("FAM3_SPOT", 1);
									}
								}
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
						else if (iLocal_615 == 1)
						{
							func_96("FAM3_SPOT", 1);
						}
					}
				}
				else if (!__LIB_0__::func_75())
				{
					iLocal_616 = 1;
				}
				if (!func_100("FAM3_BALC"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
					{
						if (iLocal_615 == 1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael") > 0.05f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_373, 1))
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_BALC", 7, 0, 0, 0))
										{
											func_96("FAM3_BALC", 1);
										}
									}
								}
							}
						}
					}
				}
				if (!func_100("FAM3_BALCR"))
				{
					if (func_100("FAM3_BALC"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
						{
							if (iLocal_615 == 1 && iLocal_617 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam3", "shout_out_window_michael", 3))
								{
									if (!__LIB_0__::func_75())
									{
										if (!__LIB_13__::func_755(&Local_373, 1))
										{
											if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_BALCR", 7, 0, 0, 0))
											{
												func_96("FAM3_BALCR", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_236 == 0)
				{
					if (func_100(sParam0))
					{
						if (!func_100("FAM3_MST2") && !func_100("FAM3_FST2"))
						{
							if (HUD::DOES_BLIP_EXIST(Local_373.f_5))
							{
								if (!__LIB_13__::func_755(&Local_373, 1))
								{
									if (MISC::ARE_STRINGS_EQUAL(sParam0, "FAM3_MST1"))
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_MST2", 7, 0, 0, 0))
										{
											func_96("FAM3_MST2", 1);
										}
									}
									if (MISC::ARE_STRINGS_EQUAL(sParam0, "FAM3_FST1"))
									{
										if (__LIB_17__::func_243(&uLocal_397, "FAM3AUD", "FAM3_FST2", 7, 0, 0, 0))
										{
											func_96("FAM3_FST2", 1);
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

int func_446(float fParam0, float fParam1)//Position - 0x29E54
{
	if (fParam0 > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_448(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x29FC2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (__LIB_16__::func_302(iParam4, *uParam3))
			{
				*iParam2 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iParam1, 17);
				*uParam3 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*iParam2 = 0;
		}
	}
	else
	{
		*iParam2 = 0;
	}
}

void func_449(var uParam0)//Position - 0x2A024
{
	int iVar0;
	switch (*uParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_285.f_0, true);
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_244.f_0, true, false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_244.f_0, true);
						PED::SET_PED_CONFIG_FLAG(Local_244.f_0, 32, false);
						PED::SET_PED_CONFIG_FLAG(Local_244.f_0, 116, false);
						PED::SET_PED_CONFIG_FLAG(Local_244.f_0, 29, false);
					}
					func_498(sLocal_208, Local_285.f_9, 1, 1);
					func_497();
					func_496();
					fLocal_113 = 200f;
					iLocal_67 = 1;
					func_494(Local_285, sLocal_208, fLocal_626, 0, 1500f, 0, 0, 1);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_285.f_0, true);
					func_468(Local_285.f_0, 1f);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_285.f_0, "FAMILY_3_TENNIS_COACH_GROUP", 0f);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("FAM3_CHASE_START");
			iLocal_611 = 1;
			*uParam0++;
			break;
		case 1:
			if (iLocal_611 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					func_466(Local_285.f_0, Local_274.f_0, &fLocal_626, &fLocal_627);
					func_496();
					func_468(Local_285.f_0, fLocal_626);
					iLocal_77 = 1;
				}
			}
			else
			{
				func_450(0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_285.f_0, 1.4f);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(Local_285.f_0, true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_285.f_0, true);
					ENTITY::SET_ENTITY_COLLISION(Local_285.f_0, false, false);
				}
				if (!PED::IS_PED_INJURED(Local_244.f_0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_244.f_0, true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_244.f_0, true);
				}
				*uParam0++;
			}
			break;
		case 2:
			if (iLocal_612 == 1)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_285.f_1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
						{
							VEHICLE::SET_PLAYBACK_SPEED(Local_285.f_0, 2f);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_285.f_0, true);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_285.f_0, true);
							ENTITY::SET_ENTITY_COLLISION(Local_285.f_0, false, false);
						}
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_285.f_0, 0f);
					}
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_244.f_0, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_244.f_0, true);
					}
					STREAMING::REQUEST_IPL("DES_StiltHouse_imapstart");
					*uParam0++;
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				STREAMING::REQUEST_ANIM_DICT("missfam3");
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
				{
					if (STREAMING::IS_IPL_ACTIVE("DES_StiltHouse_imapstart"))
					{
						if (!PED::IS_PED_INJURED(Local_244.f_0))
						{
							__LIB_28__::func_227(Local_244.f_0, -1034.6083f, 653.9794f, 155.0754f, 90.0561f, 0, 0, 0);
							ENTITY::SET_ENTITY_VISIBLE(Local_244.f_0, true, false);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_244.f_0, false);
							ENTITY::SET_ENTITY_COLLISION(Local_244.f_0, true, false);
							TASK::CLEAR_PED_TASKS(Local_244.f_0);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_244.f_0, true, 1);
							PED::SET_PED_LOD_MULTIPLIER(Local_244.f_0, 5f);
							PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 4, 1, 0, 0);
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(Local_244.f_0, "missfam3", "coach_idle", -1034.63f, 654.114f, 156.08f, 0f, 0f, 85f, 1000f, -4f, -1, 5121, 0f, 2, 0);
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_285.f_0, false);
							ENTITY::SET_ENTITY_COLLISION(Local_285.f_0, true, false);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, false, true, false);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_285.f_0, 2);
							ENTITY::SET_ENTITY_COORDS(Local_285.f_0, -1069.1571f, 672.9374f, 141.3214f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_285.f_0, 275.767f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_285.f_0, 0, false, true);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_285.f_0, 0, true, false);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, false);
						}
						iLocal_691[7] = 1;
						iLocal_691[8] = 1;
						iLocal_691[9] = 1;
						*uParam0++;
					}
				}
			}
			break;
		case 4:
			if (iLocal_614 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfam3"))
				{
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_244.f_0, false);
						TASK::TASK_PLAY_ANIM(Local_244.f_0, "missfam3", "coach_idle", 4f, -8f, -1, 1, 0f, false, false, false);
						*uParam0++;
					}
				}
			}
			break;
		case 5:
			if (iLocal_614 == 1)
			{
				if (iLocal_615 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_244.f_0, "missfam3", "shout_out_window_coach", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1026.9159f, 653.8083f, 155.0754f, 1f, -1, 196.607f, 0.5f);
							TASK::TASK_PLAY_ANIM(0, "missfam3", "coach_idle", 8f, -8f, -1, 1, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_244.f_0, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							*uParam0++;
						}
					}
				}
			}
			break;
	}
}

void func_450(bool bParam0, bool bParam1)//Position - 0x2A49C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_162))
	{
		iLocal_64 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_171);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_80)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_17__::func_703());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_460();
			func_459();
			func_456();
		}
		else
		{
			func_452();
			func_451();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_451()//Position - 0x2A558
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_178[iVar0] = 0;
		Local_146[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_82[iVar0] = 0f;
		fLocal_83[iVar0] = 0f;
		fLocal_84[iVar0] = 0f;
		fLocal_85[iVar0] = 0f;
		iLocal_122[iVar0] = 0;
		fLocal_86[iVar0] = 0f;
		iLocal_123[iVar0] = 0;
		iLocal_172[iVar0] = 0;
		iLocal_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iLocal_179[iVar0] = 0;
		iVar0++;
	}
	iLocal_129 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_180[iVar0] = 0;
		Local_147[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_97[iVar0] = 0f;
		fLocal_98[iVar0] = 0f;
		fLocal_99[iVar0] = 0f;
		fLocal_100[iVar0] = 0f;
		iLocal_128[iVar0] = 0;
		iLocal_173[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_182[iVar0] = 0;
		iVar0++;
	}
	iLocal_131 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_181[iVar0] = 0;
		Local_148[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_91[iVar0] = 0f;
		fLocal_92[iVar0] = 0f;
		fLocal_93[iVar0] = 0f;
		fLocal_94[iVar0] = 0f;
		iLocal_125[iVar0] = 0;
		fLocal_95[iVar0] = 0f;
		iLocal_126[iVar0] = 0;
		iLocal_174[iVar0] = 0;
		iLocal_127[iVar0] = 0;
		iVar0++;
	}
	iLocal_130 = 0;
	iLocal_133 = 0;
	iLocal_136 = 0;
	iLocal_137 = 0;
	iLocal_138 = 0;
}

void func_452()//Position - 0x2A6E4
{
	func_455();
	func_454();
	func_453();
}

void func_453()//Position - 0x2A6F8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_181[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_181[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_181[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_181[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_181[iVar0]));
			}
		}
		iLocal_126[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_125[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_125[iVar0], &cLocal_162);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
}

void func_454()//Position - 0x2A7EF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_180[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_180[iVar0]));
			}
		}
		iLocal_128[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_173[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
		}
		iVar0++;
	}
	iLocal_134 = 0;
	iLocal_131 = 0;
}

void func_455()//Position - 0x2A86C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_178[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_178[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_178[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_178[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_178[iVar0]));
			}
		}
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_122[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_122[iVar0], &cLocal_162);
			}
		}
		iLocal_123[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_172[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172[iVar0]);
		}
		iVar0++;
	}
	iLocal_133 = 0;
	iLocal_129 = 0;
}

void func_456()//Position - 0x2A96B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_181[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_181[iVar0]);
				}
			}
			__LIB_37__::func_938(iLocal_181[iVar0]);
			__LIB_15__::func_908(iLocal_181[iVar0]);
		}
		iLocal_126[iVar0] = 0;
		iLocal_127[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_125[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_125[iVar0], &cLocal_162);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
	iLocal_135 = 0;
}

void func_459()//Position - 0x2AAE9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_180[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_180[iVar0], true, false);
			}
			__LIB_15__::func_908(iLocal_180[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_173[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
		}
		iVar0++;
	}
	iLocal_134 = 0;
	iLocal_131 = 0;
}

void func_460()//Position - 0x2AB6D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_178[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_178[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_178[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_178[iVar0]);
				}
			}
			__LIB_37__::func_938(iLocal_178[iVar0]);
			__LIB_15__::func_908(iLocal_178[iVar0]);
		}
		iLocal_123[iVar0] = 0;
		iLocal_124[iVar0] = 0;
		if (!bLocal_60 && !bLocal_73)
		{
			if (iLocal_122[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_122[iVar0], &cLocal_162);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_172[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172[iVar0]);
		}
		iVar0++;
	}
	iLocal_133 = 0;
	iLocal_129 = 0;
}

void func_466(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x2ACC9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
		fVar3 = 15f;
		fVar4 = 30f;
		fVar5 = 45f;
		fVar6 = 75f;
		fVar7 = 1f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fVar8 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
			*fParam3 = fVar8;
		}
		Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, Var1) };
		if (Var9.f_1 > 1f)
		{
			if (fVar2 > fVar6)
			{
				fVar7 = 5f;
			}
			else if (fVar2 > fVar5)
			{
				fVar7 = 4f;
			}
			else if (fVar2 > fVar4)
			{
				fVar7 = 3f;
			}
			else
			{
				fVar7 = 2.5f;
			}
		}
		else if (fVar2 > fVar6)
		{
			fVar7 = 0.6f;
		}
		else if (fVar2 > fVar5)
		{
			fVar7 = 1.05f;
		}
		else if (fVar2 > fVar4)
		{
			fVar7 = 1.225f;
		}
		else if (fVar2 > fVar3)
		{
			fVar7 = 1.385f;
		}
		else
		{
			fVar7 = 1.45f;
		}
		if (fVar8 < 26000f)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -948.42f, 399.24f, 76.69f, 118f, 112f, 16f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1002.7f, 306.26f, 65.3f, -886.05f, 263.07f, 89.96f, 32f, false, true, 0))
			{
				fVar10 = (ENTITY::GET_ENTITY_SPEED(iParam0) - ENTITY::GET_ENTITY_SPEED(iParam1));
				if (fVar10 < 0f)
				{
					fVar11 = 0.125f;
				}
				fVar7 = (1.275f + fVar11);
			}
			else if (fVar8 > 19000f)
			{
				fVar7 = (fVar7 + 0.3f);
			}
		}
		if (fVar8 > 27000f)
		{
			fVar7 = (fVar7 + 0.35f);
		}
		__LIB_17__::func_211(fParam2, fVar7, 0.01f, 1);
	}
}

void func_468(int iParam0, float fParam1)//Position - 0x2AF05
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_79 = false;
	if (!bLocal_61)
	{
		if (bLocal_60)
		{
			__LIB_15__::func_907();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_61 = true;
		}
	}
	else if (!bLocal_60)
	{
		__LIB_15__::func_912();
		bLocal_61 = false;
	}
	if (bLocal_60)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_54)
	{
		if (iLocal_49)
		{
			fLocal_106 = 0f;
		}
		else
		{
			fLocal_106 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_927(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_59 = 1;
					}
					else
					{
						iLocal_59 = 0;
					}
				}
				fLocal_103 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_104) * fLocal_106));
				if (bLocal_58)
				{
					__LIB_37__::func_945(iParam0, fLocal_103);
					__LIB_37__::func_944(iParam0, fLocal_113);
					if (fLocal_108 > 1000f)
					{
						if (iLocal_145 == 0)
						{
							__LIB_37__::func_943(iParam0, fLocal_113);
						}
						fVar0 = ((fLocal_103 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_145) * 2000f));
						__LIB_43__::func_518(iParam0, fVar0, fLocal_107);
						iLocal_145++;
						if (iLocal_145 > 2)
						{
							fLocal_108 = 0f;
						}
					}
					else
					{
						iLocal_145 = 0;
						fLocal_108 = (fLocal_108 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_103 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_66)
		{
			if (!iLocal_48)
			{
				func_485(iParam0, ((fParam1 * fLocal_104) * fLocal_106), 0);
				if (!iLocal_69)
				{
				}
				iLocal_69 = 0;
			}
			if (bLocal_51)
			{
				func_484(iParam0);
			}
			if (!iLocal_48)
			{
				func_471(iParam0, ((fParam1 * fLocal_104) * fLocal_106), 0);
			}
		}
		if (iLocal_56)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_183 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_149 = { ENTITY::GET_ENTITY_COORDS(iLocal_183, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_183, &fLocal_87, &fLocal_88, &fLocal_89, &fLocal_90);
				}
			}
			iLocal_56 = 0;
		}
		if (iLocal_55)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
			{
				__LIB_15__::func_908(iLocal_184);
				iLocal_184 = iLocal_183;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_184, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_184, Local_149, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_184, fLocal_87, fLocal_88, fLocal_89, fLocal_90);
			}
			fLocal_102 = fLocal_105;
			iLocal_48 = 1;
			iLocal_55 = 0;
		}
		if (iLocal_48)
		{
			while (!func_469(&iParam0, fLocal_102))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_49 = 1;
		}
		if (iLocal_62)
		{
			iLocal_62 = 0;
		}
	}
}

int func_469(int iParam0, float fParam1)//Position - 0x2B1A0
{
	if (!iLocal_63)
	{
		iLocal_48 = 1;
		func_452();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_132 == -1)
			{
				while (!__LIB_37__::func_939(iParam0, iLocal_132, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_53)
				{
					iLocal_49 = 1;
					fLocal_106 = 0f;
					iLocal_133 = 0;
					iLocal_135 = 0;
					iLocal_134 = 0;
					iLocal_129 = 0;
					iLocal_130 = 0;
					iLocal_131 = 0;
					iLocal_136 = 0;
					iLocal_137 = 0;
					iLocal_138 = 0;
				}
			}
		}
		iLocal_63 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_104) * fLocal_106));
				__LIB_37__::func_939(iParam0, iLocal_132, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_103 = fParam1;
		iLocal_139 = 0;
		iLocal_142 = 0;
		fLocal_118 = 0f;
		fLocal_117 = 0f;
		func_471(*iParam0, ((1f * fLocal_104) * fLocal_106), 1);
		func_485(*iParam0, ((1f * fLocal_104) * fLocal_106), 1);
		func_484(*iParam0);
		if ((iLocal_136 == 0 && iLocal_137 == 0) && iLocal_138 == 0)
		{
			iLocal_49 = 0;
			iLocal_48 = 0;
			iLocal_63 = 0;
			return 1;
		}
	}
	return 0;
}

void func_471(int iParam0, float fParam1, bool bParam2)//Position - 0x2B4B8
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
		iVar0 = iLocal_135;
		while (iVar0 < 25)
		{
			if (iLocal_126[iVar0] != 99)
			{
				if (iLocal_126[iVar0] == 0)
				{
					if (iLocal_125[iVar0] > 0)
					{
						if (!iLocal_48)
						{
							if (fLocal_103 > (fLocal_95[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_896(iLocal_174[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_127[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_127[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_127[iVar0]), 1);
								iLocal_126[iVar0]++;
								iLocal_137++;
							}
						}
						else
						{
							fVar6 = (fLocal_103 - fLocal_95[iVar0]);
							fVar6 = (fVar6 * fLocal_96[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < __LIB_17__::func_705(iLocal_125[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_174[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_127[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_127[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_127[iVar0]), 1);
									iLocal_126[iVar0]++;
									iLocal_137++;
								}
								else
								{
									iLocal_126[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_126[iVar0] = 99;
					}
				}
				else if (iLocal_126[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_125[iVar0], &cLocal_162);
					if (BitTest(iLocal_127[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
					}
					else if (!bLocal_75 && ((!BitTest(iLocal_127[iVar0], 2) && bVar10) || (BitTest(iLocal_127[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_703());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_703());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_174[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_174[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_125[iVar0], &cLocal_162))
							{
								if (fLocal_103 >= (fLocal_95[iVar0] - (fLocal_116 * fParam1)))
								{
									if ((iLocal_62 || bParam2) || (!bLocal_79 && !__LIB_37__::func_941(Local_148[iVar0 /*3*/], Var5, 5f, fLocal_114)))
									{
										if (bLocal_58)
										{
											__LIB_42__::func_440(Local_148[iVar0 /*3*/], Var5, fLocal_107);
										}
										iLocal_181[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_174[iVar0], Local_148[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_174[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_181[iVar0], 0);
										}
										if (uLocal_71 && !BitTest(iLocal_127[iVar0], 0))
										{
											__LIB_17__::func_704(iLocal_181[iVar0]);
										}
										if (BitTest(iLocal_127[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_181[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_181[iVar0], Local_148[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_181[iVar0], fLocal_91[iVar0], fLocal_92[iVar0], fLocal_93[iVar0], fLocal_94[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_174[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_181[iVar0], 5f);
										}
										if (!BitTest(iLocal_127[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_181[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_181[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_181[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
										iLocal_137 = (iLocal_137 - 1);
										iLocal_126[iVar0]++;
										bLocal_79 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_181[iVar0], Local_148[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_181[iVar0], fLocal_91[iVar0], fLocal_92[iVar0], fLocal_93[iVar0], fLocal_94[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_174[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_181[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_181[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
							iLocal_137 = (iLocal_137 - 1);
							iLocal_126[iVar0]++;
						}
					}
				}
				else if (iLocal_126[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_125[iVar0], &cLocal_162);
					if (!BitTest(iLocal_127[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_127[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
							iVar13 = 2;
						}
						else if (!bLocal_75 && ((!BitTest(iLocal_127[iVar0], 2) && bVar10) || (BitTest(iLocal_127[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(__LIB_17__::func_703());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_703());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], false))
						{
							if (!bLocal_79 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_181[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_181[iVar0], true), Var5) < 10000f || bParam2) || iLocal_62)
									{
										__LIB_37__::func_946(&(iLocal_181[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_127[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
					{
						if (fLocal_103 >= fLocal_95[iVar0])
						{
							if (21 > iLocal_130)
							{
								fVar6 = (fLocal_103 - fLocal_95[iVar0]);
								fVar6 = (fVar6 * fLocal_96[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_125[iVar0], &cLocal_162))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_125[iVar0], &cLocal_162))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_181[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_125[iVar0], fVar6, &cLocal_162) };
										if (((!__LIB_37__::func_941(Var3, Var5, 5f, fLocal_114) && __LIB_37__::func_941(Var4, Var5, 5f, fLocal_114)) && !iLocal_62) && !bParam2)
										{
											if (!BitTest(iLocal_127[iVar0], 1))
											{
												__LIB_37__::func_946(&(iLocal_181[iVar0]), iVar13, 1);
											}
											iLocal_130++;
											iLocal_126[iVar0]++;
										}
										else if (((!bLocal_79 || BitTest(iLocal_127[iVar0], 1)) || iLocal_62) || bParam2)
										{
											if (__LIB_37__::func_939(&(iLocal_181[iVar0]), iLocal_125[iVar0], fVar6, 1, 0, 0, iLocal_77, bLocal_76))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * fLocal_96[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
												{
													if (BitTest(iLocal_127[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_181[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_181[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_181[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_181[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_127[iVar0], 1))
												{
													__LIB_37__::func_946(&(iLocal_181[iVar0]), iVar13, 1);
												}
												iLocal_130++;
												iLocal_126[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_127[iVar0], 1))
										{
											__LIB_37__::func_946(&(iLocal_181[iVar0]), iVar13, 1);
										}
										iLocal_130++;
										iLocal_126[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_127[iVar0], 1))
								{
									__LIB_37__::func_946(&(iLocal_181[iVar0]), iVar13, 1);
								}
								iLocal_130++;
								iLocal_126[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_127[iVar0], 1))
						{
							__LIB_37__::func_946(&(iLocal_181[iVar0]), iVar13, 1);
						}
						iLocal_130++;
						iLocal_126[iVar0]++;
					}
				}
				else if (iLocal_126[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_181[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_181[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_52 && !iLocal_49) && !bLocal_68) && (((!iLocal_77 && !bLocal_76) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_181[iVar0])) || __LIB_37__::func_940(iLocal_181[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_70)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_181[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_925(iLocal_181[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_941(iVar2, iLocal_181[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												__LIB_42__::func_439(iLocal_181[iVar0]);
												iLocal_126[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * fLocal_96[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_181[iVar0]);
							}
						}
						else
						{
							iLocal_126[iVar0]++;
						}
					}
					else
					{
						iLocal_126[iVar0]++;
					}
				}
				else if (iLocal_126[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_181[iVar0]))
						{
							iLocal_126[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_181[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * fLocal_96[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_181[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_125[iVar0], &cLocal_162))
							{
								if (fLocal_103 > (fLocal_95[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_125[iVar0], &cLocal_162)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_181[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_181[iVar0]);
							}
						}
					}
					else
					{
						iLocal_126[iVar0]++;
					}
				}
				else if (iLocal_126[iVar0] == 5)
				{
					if (!iLocal_181[iVar0] == iLocal_185)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_181[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_181[iVar0]);
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
						if (!bLocal_60 && !bLocal_73)
						{
							if (iLocal_125[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_125[iVar0], &cLocal_162);
							}
						}
						if (!bLocal_50)
						{
							if (!bLocal_78)
							{
								__LIB_15__::func_908(iLocal_181[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_181[iVar0]));
						}
					}
					iLocal_130 = (iLocal_130 - 1);
					iLocal_126[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_135 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_456();
	}
}

void func_484(int iParam0)//Position - 0x2C653
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
		iVar0 = iLocal_134;
		while (iVar0 < 50)
		{
			switch (iLocal_128[iVar0])
			{
				case 0:
					if (!iLocal_173[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_147[iVar0 /*3*/], fLocal_101, fLocal_101, fLocal_101, false, true, 0))
						{
							iLocal_136++;
							iLocal_128[iVar0]++;
						}
					}
					else
					{
						iLocal_128[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_131)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_173[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_173[iVar0]))
							{
								if ((iLocal_48 || iLocal_62) || (!bLocal_79 && !__LIB_37__::func_941(Local_147[iVar0 /*3*/], Var1, 5f, fLocal_114)))
								{
									if (bLocal_58)
									{
										__LIB_42__::func_440(Local_147[iVar0 /*3*/], Var1, fLocal_107);
									}
									iLocal_180[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_173[iVar0], Local_147[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_173[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_180[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_180[iVar0], fLocal_97[iVar0], fLocal_98[iVar0], fLocal_99[iVar0], fLocal_100[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_180[iVar0], __LIB_15__::func_910()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_180[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_173[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_180[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_180[iVar0], __LIB_15__::func_911()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_180[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_180[iVar0], true);
									iLocal_136 = (iLocal_136 - 1);
									iLocal_131++;
									iLocal_128[iVar0]++;
									bLocal_79 = true;
								}
							}
						}
						else
						{
							iLocal_136 = (iLocal_136 - 1);
							iLocal_131++;
							iLocal_128[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_180[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_180[iVar0], true) };
						}
						if (fLocal_115 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_115 * fLocal_115))
						{
							if (!__LIB_15__::func_941(iLocal_180[iVar0], iParam0, 0))
							{
								if (!bLocal_50)
								{
									__LIB_15__::func_908(iLocal_180[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_180[iVar0]));
								}
								iLocal_131 = (iLocal_131 - 1);
								iLocal_128[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_128[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_134 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_459();
	}
}

void func_485(int iParam0, float fParam1, int iParam2)//Position - 0x2C94A
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
			fLocal_103 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_133;
		while (iVar0 < 150 && !bVar17)
		{
			if (iLocal_123[iVar0] != 99)
			{
				if (iLocal_123[iVar0] == 0)
				{
					if (iLocal_122[iVar0] > 0 && iLocal_172[iVar0] != 0)
					{
						if (!iLocal_48)
						{
							if (fLocal_103 < (fLocal_86[iVar0] + 20000f))
							{
								if (fLocal_103 >= (fLocal_86[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_896(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_124[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_124[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_124[iVar0]), 1);
									iLocal_138++;
									iLocal_123[iVar0]++;
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
								__LIB_37__::func_942(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_103 - fLocal_86[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < __LIB_17__::func_705(iLocal_122[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_124[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_124[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_124[iVar0]), 1);
									iLocal_138++;
									iLocal_123[iVar0]++;
								}
								else
								{
									__LIB_37__::func_942(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						__LIB_37__::func_942(iVar0, 1090519040);
					}
				}
				else if (iLocal_123[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_122[iVar0], &cLocal_162);
					bVar11 = false;
					if (BitTest(iLocal_124[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_75 && ((!BitTest(iLocal_124[iVar0], 2) && bVar13) || (BitTest(iLocal_124[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_703());
						bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_703());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_172[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_172[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_122[iVar0], &cLocal_162)) && bVar11)
						{
							if (fLocal_103 >= (fLocal_86[iVar0] - (fLocal_116 * fParam1)))
							{
								if ((iLocal_62 || iParam2) || (!bLocal_79 && !__LIB_37__::func_941(Local_146[iVar0 /*3*/], Var8, 5f, fLocal_114)))
								{
									if (bLocal_58)
									{
										__LIB_42__::func_440(Local_146[iVar0 /*3*/], Var8, fLocal_107);
									}
									iLocal_178[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_172[iVar0], Local_146[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_172[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_178[iVar0], 0);
									}
									if (uLocal_71 && !BitTest(iLocal_124[iVar0], 0))
									{
										__LIB_17__::func_704(iLocal_178[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_178[iVar0], Local_146[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_178[iVar0], fLocal_82[iVar0], fLocal_83[iVar0], fLocal_84[iVar0], fLocal_85[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_172[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_172[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178[iVar0], 5f);
									}
									if (BitTest(iLocal_124[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_178[iVar0], true);
									}
									if (!BitTest(iLocal_124[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_178[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_178[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_178[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_178[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172[iVar0]);
									iLocal_138 = (iLocal_138 - 1);
									iLocal_123[iVar0]++;
									bLocal_79 = true;
								}
								else if (fLocal_103 > fLocal_86[iVar0])
								{
									iLocal_138 = (iLocal_138 - 1);
									__LIB_37__::func_942(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_123[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_144 || iLocal_144 == 0)) || iLocal_62) || iParam2)
					{
						if (!BitTest(iLocal_124[iVar0], 1))
						{
							if (BitTest(iLocal_124[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
								iVar15 = 2;
							}
							else if (!bLocal_75 && ((!BitTest(iLocal_124[iVar0], 2) && bVar13) || (BitTest(iLocal_124[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(__LIB_17__::func_703());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_703());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_178[iVar0], false))
							{
								if (!bLocal_79 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_178[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_178[iVar0], true), Var8) < 10000f || iParam2) || iLocal_62)
										{
											__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_124[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_122[iVar0], &cLocal_162);
							if (fLocal_103 >= fLocal_86[iVar0])
							{
								if (14 > iLocal_129)
								{
									fVar9 = (fLocal_103 - fLocal_86[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_122[iVar0], &cLocal_162))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_122[iVar0], &cLocal_162))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_178[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_122[iVar0], fVar9, &cLocal_162) };
											if (!__LIB_37__::func_941(Var6, Var8, 5f, fLocal_114) && __LIB_37__::func_941(Var7, Var8, 5f, fLocal_114))
											{
												if (!BitTest(iLocal_124[iVar0], 1))
												{
													__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
												}
												__LIB_37__::func_942(iVar0, 1090519040);
											}
											else if (((!bLocal_79 || BitTest(iLocal_124[iVar0], 1)) || iLocal_62) || iParam2)
											{
												if (__LIB_37__::func_939(&(iLocal_178[iVar0]), iLocal_122[iVar0], fVar9, 1, 0, 0, 1, bLocal_76))
												{
													if (!BitTest(iLocal_124[iVar0], 1))
													{
														__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_178[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_178[iVar0], fParam1);
													iLocal_129++;
													iLocal_123[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_124[iVar0], 1))
											{
												__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
											}
											__LIB_37__::func_942(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_122[iVar0], &cLocal_162))
									{
										if (!BitTest(iLocal_124[iVar0], 1))
										{
											__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
										}
										__LIB_37__::func_942(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_124[iVar0], 1))
									{
										__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
									}
									__LIB_37__::func_942(iVar0, 1090519040);
								}
							}
							else if (iLocal_59 && !iLocal_67)
							{
								if (!BitTest(iLocal_124[iVar0], 1))
								{
									__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
								}
								__LIB_37__::func_942(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_124[iVar0], 1))
							{
								__LIB_37__::func_946(&(iLocal_178[iVar0]), iVar15, 0);
							}
							__LIB_37__::func_942(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_144 = iVar0;
					}
				}
				else if (iLocal_123[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_178[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_178[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_57)
									{
										if ((!bLocal_52 && !iLocal_49) && __LIB_37__::func_940(iLocal_178[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_143 || iLocal_143 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_926(iLocal_178[iVar0], iVar5) || __LIB_15__::func_941(iVar5, iLocal_178[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_143 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_72 && !BitTest(iLocal_124[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_143 || iLocal_143 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_178[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_143 = iVar0;
										}
									}
									if (bVar18)
									{
										__LIB_42__::func_439(iLocal_178[iVar0]);
										iLocal_123[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_178[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_178[iVar0]);
							}
						}
						else
						{
							iLocal_123[iVar0]++;
						}
					}
					else
					{
						iLocal_123[iVar0]++;
					}
				}
				else if (iLocal_123[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_178[iVar0]))
						{
							iLocal_123[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_178[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_178[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_178[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_122[iVar0], &cLocal_162))
							{
								if (fLocal_103 > (fLocal_86[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_122[iVar0], &cLocal_162)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_178[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_178[iVar0]);
							}
						}
					}
					else
					{
						iLocal_123[iVar0]++;
					}
				}
				else if (iLocal_123[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_178[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_178[iVar0]);
					}
					iLocal_129 = (iLocal_129 - 1);
					__LIB_37__::func_942(iVar0, fVar10);
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
			iLocal_133 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_143 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_144 = 0;
		}
	}
	else
	{
		func_460();
	}
}

void func_494(struct<10> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, char* sParam13, float fParam14, int iParam15, float fParam16, int iParam17, int iParam18, int iParam19)//Position - 0x2DA9D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Param0.f_0, false))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0.f_0))
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Param0.f_9, sParam13))
			{
				if (iParam18 == 0)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Param0.f_0, Param0.f_9, sParam13, true);
				}
				else if (iParam18 == 1)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Param0.f_0, Param0.f_9, sParam13, iParam19, 0, 786603);
				}
				if (fParam16 > 0f)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0.f_0, fParam16);
				}
				else if (iParam17 == 1)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0.f_0, __LIB_15__::func_915(ENTITY::GET_ENTITY_COORDS(Param0.f_0, true), Param0.f_9, sParam13, 16));
				}
				VEHICLE::SET_PLAYBACK_SPEED(Param0.f_0, fParam14);
				if (iParam15 == 1)
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Param0.f_0);
				}
			}
		}
	}
}

void func_496()//Position - 0x2DBFF
{
	iLocal_62 = 1;
}

void func_497()//Position - 0x2DC0A
{
	Local_146[0 /*3*/] = { -867.2245f, 209.0847f, 73.3253f };
	fLocal_82[0] = 0.0774f;
	fLocal_83[0] = 0.0159f;
	fLocal_84[0] = 0.8993f;
	fLocal_85[0] = -0.4302f;
	iLocal_122[0] = 4;
	fLocal_86[0] = 2600f;
	iLocal_172[0] = joaat("dilettante");
	Local_146[1 /*3*/] = { -785.084f, 220.7164f, 75.9672f };
	fLocal_82[1] = 0.0123f;
	fLocal_83[1] = 0.0143f;
	fLocal_84[1] = 0.733f;
	fLocal_85[1] = 0.6799f;
	iLocal_122[1] = 76;
	fLocal_86[1] = 6170f;
	iLocal_172[1] = joaat("baller");
	Local_146[2 /*3*/] = { -992.311f, 217.7745f, 67.0249f };
	fLocal_82[2] = 0.0234f;
	fLocal_83[2] = 0.0272f;
	fLocal_84[2] = -0.1712f;
	fLocal_85[2] = 0.9846f;
	iLocal_122[2] = 10;
	fLocal_86[2] = 10475f;
	iLocal_172[2] = joaat("jackal");
	Local_146[3 /*3*/] = { -967.032f, 362.0272f, 71.8551f };
	fLocal_82[3] = -0.0168f;
	fLocal_83[3] = -0.0225f;
	fLocal_84[3] = 0.7457f;
	fLocal_85[3] = -0.6657f;
	iLocal_122[3] = 1;
	fLocal_86[3] = 11425f;
	iLocal_172[3] = joaat("voltic");
	Local_146[4 /*3*/] = { -991.3395f, 258.1681f, 67.7794f };
	fLocal_82[4] = -0.0273f;
	fLocal_83[4] = 0.0303f;
	fLocal_84[4] = 0.7281f;
	fLocal_85[4] = -0.6843f;
	iLocal_122[4] = 71;
	fLocal_86[4] = 12480f;
	iLocal_172[4] = joaat("baller");
	Local_146[5 /*3*/] = { -1069.235f, 209.9156f, 61.2541f };
	fLocal_82[5] = 0.0255f;
	fLocal_83[5] = 0.0146f;
	fLocal_84[5] = 0.178f;
	fLocal_85[5] = 0.9836f;
	iLocal_122[5] = 7;
	fLocal_86[5] = 13475f;
	iLocal_172[5] = joaat("rapidgt");
	Local_146[6 /*3*/] = { -1007.4832f, 269.8612f, 66.4751f };
	fLocal_82[6] = -0.0376f;
	fLocal_83[6] = -0.0134f;
	fLocal_84[6] = 0.717f;
	fLocal_85[6] = 0.6959f;
	iLocal_122[6] = 15;
	fLocal_86[6] = 15000f;
	iLocal_172[6] = joaat("rocoto");
	Local_146[7 /*3*/] = { -1078.197f, 278.499f, 63.8791f };
	fLocal_82[7] = 0.0064f;
	fLocal_83[7] = -0.0266f;
	fLocal_84[7] = 0.3714f;
	fLocal_85[7] = 0.9281f;
	iLocal_122[7] = 16;
	fLocal_86[7] = 16225f;
	iLocal_172[7] = joaat("baller");
	Local_146[8 /*3*/] = { -1064.9928f, 270.3903f, 63.4535f };
	fLocal_82[8] = -0.0069f;
	fLocal_83[8] = -0.0066f;
	fLocal_84[8] = 0.6859f;
	fLocal_85[8] = 0.7276f;
	iLocal_122[8] = 18;
	fLocal_86[8] = 17396f;
	iLocal_172[8] = joaat("blista");
	Local_146[9 /*3*/] = { -1084.025f, 290.5645f, 63.6725f };
	fLocal_82[9] = -0.0006f;
	fLocal_83[9] = -0.0104f;
	fLocal_84[9] = 0.9994f;
	fLocal_85[9] = 0.034f;
	iLocal_122[9] = 19;
	fLocal_86[9] = 18189f;
	iLocal_172[9] = joaat("felon2");
	Local_146[10 /*3*/] = { -1104.4526f, 262.3094f, 64.0965f };
	fLocal_82[10] = -0.0328f;
	fLocal_83[10] = 0.0305f;
	fLocal_84[10] = -0.7028f;
	fLocal_85[10] = 0.7099f;
	iLocal_122[10] = 20;
	fLocal_86[10] = 18960f;
	iLocal_172[10] = joaat("rocoto");
	Local_146[11 /*3*/] = { -1105.7966f, 267.6655f, 63.9132f };
	fLocal_82[11] = -0.0315f;
	fLocal_83[11] = 0.0297f;
	fLocal_84[11] = -0.689f;
	fLocal_85[11] = 0.7234f;
	iLocal_122[11] = 21;
	fLocal_86[11] = 18990f;
	iLocal_172[11] = joaat("prairie");
	Local_146[12 /*3*/] = { -1118.2029f, 260.7814f, 64.8678f };
	fLocal_82[12] = -0.0372f;
	fLocal_83[12] = 0.0464f;
	fLocal_84[12] = -0.6148f;
	fLocal_85[12] = 0.7865f;
	iLocal_122[12] = 22;
	fLocal_86[12] = 19500f;
	iLocal_172[12] = joaat("serrano");
	Local_146[13 /*3*/] = { -1074.3485f, 351.9871f, 67.1602f };
	fLocal_82[13] = 0.0396f;
	fLocal_83[13] = -0.0133f;
	fLocal_84[13] = 0.0033f;
	fLocal_85[13] = 0.9991f;
	iLocal_122[13] = 23;
	fLocal_86[13] = 20950f;
	iLocal_172[13] = joaat("dilettante");
	Local_146[14 /*3*/] = { -1064.639f, 341.6877f, 67.0819f };
	fLocal_82[14] = 0.0006f;
	fLocal_83[14] = -0.0231f;
	fLocal_84[14] = 0.685f;
	fLocal_85[14] = 0.7282f;
	iLocal_122[14] = 24;
	fLocal_86[14] = 22890f;
	iLocal_172[14] = joaat("rocoto");
	Local_146[15 /*3*/] = { -1114.752f, 483.8648f, 82.1372f };
	fLocal_82[15] = -0.0001f;
	fLocal_83[15] = -0.0011f;
	fLocal_84[15] = 0.9945f;
	fLocal_85[15] = 0.1048f;
	iLocal_122[15] = 73;
	fLocal_86[15] = 33000f;
	iLocal_172[15] = joaat("baller");
	Local_146[16 /*3*/] = { -1300.9729f, 457.5321f, 97.5162f };
	fLocal_82[16] = -0.0343f;
	fLocal_83[16] = 0.0347f;
	fLocal_84[16] = -0.6816f;
	fLocal_85[16] = 0.7301f;
	iLocal_122[16] = 28;
	fLocal_86[16] = 39850f;
	iLocal_172[16] = joaat("felon");
	Local_146[17 /*3*/] = { -1360.6454f, 458.8226f, 102.7037f };
	fLocal_82[17] = 0.0295f;
	fLocal_83[17] = -0.0343f;
	fLocal_84[17] = 0.753f;
	fLocal_85[17] = -0.6565f;
	iLocal_122[17] = 29;
	fLocal_86[17] = 40850f;
	iLocal_172[17] = joaat("cogcabrio");
	Local_148[0 /*3*/] = { -947.3407f, 422.2456f, 78.9748f };
	fLocal_91[0] = -0.0513f;
	fLocal_92[0] = -0.0036f;
	fLocal_93[0] = 0.8378f;
	fLocal_94[0] = 0.5436f;
	iLocal_125[0] = 2;
	fLocal_95[0] = 15000f;
	fLocal_96[0] = 0.8f;
	iLocal_174[0] = joaat("benson");
	Local_148[1 /*3*/] = { -1062.9193f, 452.6988f, 74.4478f };
	fLocal_91[1] = 0.0294f;
	fLocal_92[1] = -0.041f;
	fLocal_93[1] = 0.8439f;
	fLocal_94[1] = 0.5341f;
	iLocal_125[1] = 70;
	fLocal_95[1] = 28912f;
	fLocal_96[1] = 1f;
	iLocal_174[1] = joaat("cogcabrio");
}

void func_498(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2E3D6
{
	struct<3> Var0;
	StringCopy(&cLocal_162, sParam0, 64);
	bLocal_58 = true;
	iLocal_63 = 0;
	iLocal_129 = 0;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_132 = iParam1;
	iLocal_133 = 0;
	iLocal_134 = 0;
	iLocal_135 = 0;
	iLocal_139 = 0;
	iLocal_142 = 0;
	iLocal_140 = -1;
	iLocal_141 = -1;
	iLocal_143 = 0;
	iLocal_144 = 0;
	fLocal_117 = 0f;
	fLocal_118 = 0f;
	fLocal_103 = 0f;
	iLocal_64 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_150.f_0 = (Var0.f_0 - 100f);
		Local_150.f_1 = (Var0.f_1 - 100f);
		Local_150.f_2 = (Var0.f_2 - 100f);
		Local_151.f_0 = (Var0.f_0 + 100f);
		Local_151.f_1 = (Var0.f_1 + 100f);
		Local_151.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_150, Local_151, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_171);
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
	func_451();
}

void func_499(var uParam0)//Position - 0x2E4F9
{
	float fVar0;
	var uVar1;
	if (iLocal_624 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_251.f_0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286.f_0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_286.f_0) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_286.f_0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_274.f_0, Local_286.f_0, Local_203, false, true, 0))
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
							{
								if (!PED::IS_PED_INJURED(Local_251.f_0))
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_251.f_0))
									{
										__LIB_0__::func_640(Local_251.f_0, "GENERIC_INSULT_HIGH", 3);
									}
									VEHICLE::START_VEHICLE_HORN(Local_286.f_0, 3000, 0, false);
									iLocal_624 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (iLocal_611 == 1)
			{
				STREAMING::REQUEST_MODEL(Local_286.f_6);
				STREAMING::REQUEST_MODEL(Local_251.f_6);
				VEHICLE::REQUEST_VEHICLE_RECORDING(Local_286.f_9, sLocal_208);
				if ((STREAMING::HAS_MODEL_LOADED(Local_286.f_6) && STREAMING::HAS_MODEL_LOADED(Local_251.f_6)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_286.f_9, sLocal_208))
				{
					if (func_339(&Local_286, 0, 0, 145, 0, -1, 62, 131, 0, 0))
					{
						if (func_501(&Local_251, 0, iLocal_237, 0, 145, 1, 1, 0, Local_286.f_0, -1, 0))
						{
							if (!PED::IS_PED_INJURED(Local_251.f_0))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_251.f_0, 20, true);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_286.f_6);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251.f_6);
							*uParam0++;
						}
					}
				}
			}
			break;
		case 1:
			if (iLocal_611 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_274.f_0, -1355.5088f, 469.1981f, 102.2932f, 200f, 200f, 200f, false, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_285.f_0) >= 45750f)
							{
								if (!PED::IS_PED_INJURED(Local_251.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286.f_0, false))
								{
									func_494(Local_286, sLocal_208, 1.1f, 0, 800f, 0, 1, 1);
									AUDIO::START_AUDIO_SCENE("FAMILY_3_RV_BLOCKS_ROAD");
									AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_286.f_0, "FAMILY_3_RV", 0f);
									Local_251.f_11 = 0;
									*uParam0++;
								}
							}
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_251.f_0))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_251);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_286.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_286);
				}
				*uParam0++;
			}
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286.f_0, false) && !PED::IS_PED_INJURED(Local_251.f_0))
			{
				switch (Local_251.f_11)
				{
					case 0:
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_286.f_0))
						{
							fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_286.f_0);
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_286.f_0, Local_274.f_0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_286.f_0);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_286.f_0, Local_286.f_9, sLocal_208, 5f, 786603);
								Local_251.f_11 = 1;
							}
							if (fVar0 < 8510f)
							{
								func_500(Local_274.f_0, Local_286.f_0, &uVar1, 50f, 1.05f, 1.55f);
							}
							if (fVar0 > 10085f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_286.f_0);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_286.f_0, Local_286.f_9, sLocal_208, 5f, 786469);
								Local_251.f_11 = 1;
							}
						}
						break;
					case 1:
						if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_286.f_0))
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_251.f_0, Local_286.f_0, 15f, 786469);
							Local_251.f_11 = 2;
						}
						break;
					case 2:
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_286.f_0, Local_203, false, true, 0))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_3_RV_BLOCKS_ROAD");
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_286.f_0, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_286);
							}
							if (!PED::IS_PED_INJURED(Local_251.f_0))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_251);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_286.f_9, sLocal_208);
						}
						break;
					}
			}
			break;
	}
}

void func_500(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2E89E
{
	float fVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			fVar0 = (fParam3 / __LIB_0__::func_76(iParam0, iParam1, 1));
			if (fVar0 >= fParam5)
			{
				fVar0 = fParam5;
			}
			if (fVar0 < fParam4)
			{
				fVar0 = fParam4;
			}
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fVar0);
			*uParam2 = fVar0;
		}
	}
}

int func_501(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2E8F8
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (bParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					else if (__LIB_0__::func_648(iParam0, bParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						func_809(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
						}
					}
					return 1;
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, false))
					{
						if (bParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_6, iParam9, true, true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						else if (__LIB_15__::func_938(iParam0, bParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							func_809(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
							}
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_805(iParam0, bParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					func_809(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, false))
				{
					if (func_502(iParam0, bParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_809(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_502(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2EADF
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_0__::func_550(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_797(*iParam0);
				__LIB_13__::func_777(*iParam0, 1, 0);
				__LIB_13__::func_763(*iParam0);
				__LIB_13__::func_762(*iParam0);
				func_504(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
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

int func_504(int iParam0, bool bParam1)//Position - 0x2EC0A
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_595(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_595(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_573(iParam0, 3, 169))
					{
						func_769(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_573(iParam0, 12, 6))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 11))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 12, 10))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 12, 50))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 14, 59))
			{
				func_769(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_573(iParam0, 8, 22))
			{
				func_769(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_573(iParam0, 12, 14))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_573(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 4))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 12, 3))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 14, 82))
			{
				func_769(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_573(iParam0, 8, 76))
			{
				func_769(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_573(iParam0, 12, 1))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_573(iParam0, 12, 12))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 12, 15))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_573(iParam0, 3, 71))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_573(iParam0, 12, 7))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 12, 6))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_573(iParam0, 14, 88))
			{
				func_769(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_573(iParam0, 8, 17))
			{
				func_769(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_573(iParam0, 12, 11))
			{
				func_769(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_573(int iParam0, int iParam1, int iParam2)//Position - 0x4635E
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
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
				if (!func_573(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_573(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_573(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, iVar2, iVar1, -1) };
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
			if (!func_573(iParam0, 14, uVar8[iVar7]))
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

void func_595(int iParam0, int iParam1)//Position - 0x4AA5B
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_0__::func_650(iParam0);
		if (__LIB_0__::func_374(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_768(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_597(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_16__::func_32(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_180();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
					{
						if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_597(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x4ACD7
{
	bool bVar0;
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
		bVar0 = __LIB_0__::func_650(iParam0);
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
		if (__LIB_0__::func_374(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_766(iParam0, iVar1, &iVar2, 0))
			{
				func_769(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_764(iParam0, iVar1, &iVar2))
			{
				func_769(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_762(iParam0);
			__LIB_0__::func_413(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_413(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_603(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_603(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_603(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_0__::func_413(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_413(2053, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_513(161, 1, -1, 1);
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

int func_603(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x4B473
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
			func_721(iVar5, iParam1, iParam2, 1);
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
						func_721(iVar5, 10, 0, 1);
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
									func_721(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_603(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_721(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_718(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_603(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_712(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_721(iVar5, 14, uVar18[iVar1], 1);
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
							func_603(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_721(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_603(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_703(iParam0);
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
						func_603(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_603(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_702(iVar5, iVar24, iVar23, iVar25);
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
							func_603(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_603(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_603(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_603(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_603(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_603(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_603(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_712(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_702(iVar5, func_718(iParam0, 8, -1), iParam2, func_718(iParam0, 4, -1));
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
				func_646(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_702(iVar5, iParam2, iVar44, iVar45);
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
			func_712(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_702(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_603(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_603(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_702(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_702(iVar5, iVar58, iVar57, iParam2);
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
						func_603(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_702(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_603(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_623(iParam0, 9, iVar63))
						{
							func_603(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_603(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_603(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_603(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_718(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_718(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_603(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_603(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_603(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_603(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_603(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_603(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_603(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_603(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_603(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_603(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_703(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_603(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_603(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_604(iParam0, &uVar4))
		{
			func_603(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_603(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_603(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_603(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_718(iParam0, 3, -1), iVar10);
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
				func_603(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_604(int iParam0, var uParam1)//Position - 0x4D322
{
	int iVar0;
	int iVar1;
	*uParam1 = func_718(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_623(iParam0, iVar1, iVar0))
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

int func_623(int iParam0, int iParam1, int iParam2)//Position - 0x515DF
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
				if (!func_623(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_623(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_623(iParam0, 14, iVar6))
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
			if (!func_623(iParam0, 14, uVar11[iVar10]))
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
						return func_623(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_623(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_646(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5830D
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
	func_647(iParam0, bParam3, 0, -1);
}

void func_647(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x5835A
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
		bVar3 = func_682(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_673(iParam0, iParam3);
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

int func_673(int iParam0, int iParam1)//Position - 0x63E90
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
				iVar3 = func_718(iParam0, 11, -1);
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
				iVar5 = func_718(iParam0, 11, -1);
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

int func_682(int iParam0, bool bParam1)//Position - 0x642F0
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_718(iParam0, 11, -1), 0);
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
						iVar3 = func_718(iParam0, 11, -1);
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
						iVar5 = func_718(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_718(iParam0, 11, -1), 0);
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
						iVar8 = func_718(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_718(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_718(iParam0, 11, -1), 0);
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
						iVar12 = func_718(iParam0, 8, -1);
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

int func_702(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6D17D
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
					iVar0 = func_702(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_702(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_703(int iParam0)//Position - 0x6E4B8
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
		if (!func_708(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_708(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_708(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6EE82
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_718(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_712(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7186B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_762(iParam0))
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

int func_718(int iParam0, int iParam1, int iParam2)//Position - 0x71B1A
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
				if (func_623(iParam0, iParam1, iVar0))
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
				if (func_623(iParam0, iParam1, iVar1))
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

void func_721(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x71C99
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
							func_721(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_721(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_721(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_721(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_721(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_721(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_721(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_721(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_721(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_721(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_762(int iParam0)//Position - 0x8AAA1
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
				iVar1 = func_718(iParam0, 11, -1);
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
				iVar3 = func_718(iParam0, 11, -1);
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

int func_764(int iParam0, int iParam1, int iParam2)//Position - 0x8ADFB
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_573(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_766(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8AEC2
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_573(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_768(int iParam0, int iParam1, int iParam2)//Position - 0x8B182
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
				if (func_573(iParam0, iParam1, iVar0))
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
				if (func_573(iParam0, iParam1, iVar1))
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

int func_769(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x8B223
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
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_0__::func_633(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_0__::func_633(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_769(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_0__::func_633(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_14__::func_752(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_769(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_768(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_766(iParam0, iVar10, &iVar4, 1))
							{
								func_769(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_769(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_798(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_769(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_769(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_769(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_769(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_769(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_0__::func_633(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_769(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_0__::func_633(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_769(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_769(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_14__::func_635(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_766(iParam0, iVar10, &iVar4, 0))
		{
			func_769(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_764(iParam0, iVar10, &iVar4))
		{
			func_769(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_797(int iParam0)//Position - 0x8E742
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__::func_414(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_597(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_768(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_798(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_768(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_768(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_798(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_798(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_768(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_597(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_798(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x8E99F
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_801(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_801(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8EB5A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_801(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_801(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_950(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_801(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_801(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_805(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8F13F
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_0__::func_550(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_797(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_504(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_809(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8F2CA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
			PED::SET_PED_AS_ENEMY(iParam0, bParam5);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, bParam4);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, bParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, bParam3);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		}
	}
}

void func_811()//Position - 0x8F3AE
{
	if (iLocal_686 == 0)
	{
		if (((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 0) || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 1) || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 2)
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (!__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
				{
					CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
				}
				else
				{
					iLocal_686 = 1;
				}
			}
			else
			{
				iLocal_686 = 1;
			}
		}
		else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
		{
			if (!__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), Local_274.f_0, 1))
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			}
			else
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
				if (iLocal_687 == 0)
				{
					if (iLocal_689 == 0)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							GRAPHICS::ANIMPOSTFX_PLAY(__LIB_1__::func_295(iLocal_688, "CamPushInMichael", "CamPushInNeutral"), 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_689 = MISC::GET_GAME_TIMER();
						}
						else
						{
							CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
							if (__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), Local_274.f_0))
							{
								GRAPHICS::ANIMPOSTFX_PLAY(__LIB_1__::func_295(iLocal_688, "CamPushInMichael", "CamPushInNeutral"), 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_689 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
						}
						if (__LIB_16__::func_302(300, iLocal_689))
						{
							iLocal_687 = 1;
						}
					}
				}
				else
				{
					iLocal_686 = 1;
				}
			}
		}
	}
}

void func_812()//Position - 0x8F4E9
{
	iLocal_563 = 1;
	iLocal_564 = 0;
	Local_239.f_7 = 0;
	Local_239.f_9 = 0;
	Local_239.f_10 = 0;
	Local_241.f_9 = 0;
	Local_241.f_10 = 0;
	iLocal_562 = 0;
	Local_239.f_11 = 0;
	Local_239.f_13 = 0;
	Local_239.f_16 = 0;
	Local_244.f_11 = 0;
	Local_286.f_7 = 0;
	Local_274.f_7 = 0;
	Local_274.f_11 = 0;
	iLocal_628 = 0;
	iLocal_600 = 0;
	iLocal_601 = 0;
	iLocal_602 = 0;
	iLocal_603 = 0;
	iLocal_604 = 0;
	fLocal_626 = 0.65f;
	fLocal_627 = 0f;
	iLocal_611 = 0;
	iLocal_612 = 0;
	iLocal_613 = 0;
	iLocal_614 = 0;
	iLocal_615 = 0;
	iLocal_616 = 0;
	iLocal_617 = 0;
	iLocal_573 = 0;
	iLocal_574 = 0;
	iLocal_582 = 0;
	iLocal_583 = 0;
	fLocal_584 = 0f;
	bLocal_586 = false;
	iLocal_587 = 0;
	iLocal_591 = 0;
	fLocal_590 = 0f;
	fLocal_589 = 0f;
	iLocal_608 = 0;
	iLocal_610 = 0;
	iLocal_609 = 0;
	iLocal_618 = 0;
	iLocal_619 = 0;
	iLocal_621 = 0;
	iLocal_622 = 0;
	iLocal_623 = 0;
	iLocal_624 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
	iLocal_598 = 0;
	iLocal_597 = 0;
	iLocal_595 = 0;
	iLocal_596 = 0;
	iLocal_599 = 0;
	iLocal_632 = 0;
	iLocal_633 = 0;
	iLocal_634 = 0;
	iLocal_635 = 0;
	iLocal_636 = 0;
	iLocal_637 = 0;
	iLocal_638 = 0;
	iLocal_639 = 0;
	iLocal_640 = 0;
	iLocal_620 = 0;
	iLocal_605 = 0;
	iLocal_647 = 0;
	StringCopy(&Local_216, "FAM3_DCAN", 16);
	StringCopy(&Local_219, "FAM3_DHOUSE", 16);
	StringCopy(&Local_222, "FAM3_GBIT", 16);
	StringCopy(&cLocal_225, "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, 16);
	StringCopy(&cLocal_228, "CMN_MLEAVE" /* GXT: ~s~Return to ~b~Michael.~s~ */, 16);
	StringCopy(&Local_231, "LOSE_WANTED" /* GXT: Lose the Cops. */, 16);
	iLocal_236 = 0;
	iLocal_652 = 0;
	iLocal_651 = 0;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_658 = 1;
	iLocal_659 = 0;
	iLocal_311 = 0;
	iLocal_312 = 0;
	iLocal_313 = 0;
	iLocal_314 = 0;
	iLocal_664 = 0;
	iLocal_648 = 0;
	iLocal_649 = 0;
	iLocal_656 = 0;
	iLocal_657 = 0;
	iLocal_641 = 0;
	bLocal_642 = false;
	iLocal_650 = 0;
	iLocal_669 = 0;
	iLocal_670 = 0;
	iLocal_674 = 0;
	iLocal_675 = 0;
	iLocal_676 = 0;
	iLocal_677 = 0;
	iLocal_678 = 0;
	iLocal_680 = 0;
	iLocal_681 = 0;
	iLocal_682 = 0;
	iLocal_683 = 0;
	iLocal_684 = 0;
	iLocal_685 = 0;
	iLocal_686 = 0;
	iLocal_679 = 0;
	iLocal_687 = 0;
	iLocal_689 = 0;
}

int func_813(var uParam0)//Position - 0x8F6DD
{
	int iVar0;
	switch (*uParam0)
	{
		case 0:
			if (__LIB_15__::func_944() == 0)
			{
				if (__LIB_17__::func_216("family_3_int", 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_239.f_0, "Franklin", 2, __LIB_0__::func_518(1), 0);
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[0], true, true);
							Local_303.f_0 = Global_96938.f_28[0];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_303.f_0, "Racket_1", 0, Local_303.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_303.f_0, "Racket_1", 2, Local_303.f_7, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[1], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[1], true, true);
							Local_304.f_0 = Global_96938.f_28[1];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_304.f_0, "Racket_2", 0, Local_304.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_304.f_0, "Racket_2", 2, Local_304.f_7, 0);
					}
					__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					}
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::REPLAY_START_EVENT(4);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
					}
					__LIB_17__::func_43("Franklin", joaat("Player_One"), 17);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("TennisCoach", 4, 1, 0, 0);
				}
			}
			else if (__LIB_15__::func_944() == 1)
			{
				if (__LIB_17__::func_216("family_3_int", 24))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_241.f_0, "Michael", 2, __LIB_0__::func_518(0), 0);
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[0], true, true);
							Local_303.f_0 = Global_96938.f_28[0];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_303.f_0, "Racket_1", 0, Local_303.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_303.f_0, "Racket_1", 2, Local_303.f_7, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[1], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[1], true, true);
							Local_304.f_0 = Global_96938.f_28[1];
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_304.f_0, "Racket_2", 0, Local_304.f_7, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_304.f_0, "Racket_2", 2, Local_304.f_7, 0);
					}
					__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					}
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					CUTSCENE::START_CUTSCENE(2048);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
					}
					__LIB_17__::func_43("Michael", joaat("Player_Zero"), 35);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 2, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_17__::func_68(24);
				if (__LIB_16__::func_327() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (__LIB_14__::func_794() == PLAYER::GET_PLAYERS_LAST_VEHICLE())
					{
						if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -867.9103f, 158.2215f, 63.9014f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 174.2918f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false, true, false);
							__LIB_28__::func_238(-867.9103f, 158.2215f, 63.9014f, 174.2918f, 0, 145);
							__LIB_0__::func_342(24);
						}
					}
				}
				MISC::CLEAR_AREA(Local_241.f_2, 5000f, true, false, false, false);
				__LIB_17__::func_171(4, 1, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_688 = 0;
				iLocal_620 = 0;
				*uParam0++;
			}
			break;
		case 2:
			func_811();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 40000f)
				{
					if (iLocal_651 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_START"))
						{
							iLocal_651 = 1;
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
			{
				if (__LIB_15__::func_944() == 0)
				{
					STREAMING::REQUEST_MODEL(Local_310.f_7);
					if (STREAMING::HAS_MODEL_LOADED(Local_310.f_7))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 54000)
						{
							if (func_109(&Local_310, 1))
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_310.f_7);
							}
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_303.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Racket_1", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_1", 0)))
					{
						Local_303.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_1", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_304.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Racket_2", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_2", 0)))
					{
						Local_304.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Racket_2", 0));
					}
				}
			}
			if (__LIB_15__::func_944() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_239.f_0))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Franklin", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
						{
							Local_239.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
							func_809(Local_239.f_0, joaat("PLAYER"), 0, 1, 0, 0);
							iLocal_315[1] = Local_239.f_0;
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_239.f_0, 16);
						}
					}
				}
			}
			if (__LIB_15__::func_944() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_241.f_0))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Michael", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
						{
							Local_241.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
							func_809(Local_241.f_0, joaat("PLAYER"), 0, 1, 0, 0);
							iLocal_315[0] = Local_241.f_0;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
							Local_274.f_0 = Global_96938[0];
							func_816(&Local_274, 1, -1, 132, 0, 0, 0);
							if (__LIB_15__::func_944() == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_274.f_0, false))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, ENTITY::GET_ENTITY_HEALTH(Local_274.f_0) + 1000, 0);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_274.f_0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_274.f_0) + 1000f));
									VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_274.f_0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_274.f_0) + 1000f));
									FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), 2.5f);
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 0, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 0);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 1, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 1);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 4, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 4);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 5, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 5);
									}
									if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
									{
										VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
									}
									ENTITY::SET_ENTITY_COORDS(Local_274.f_0, Local_274.f_2, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_274.f_0, Local_274.f_5);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_274.f_0, 5f);
									iLocal_620 = 1;
								}
							}
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
							VEHICLE::DELETE_VEHICLE(&(Global_96938[0]));
							MISC::CLEAR_AREA(Local_274.f_2, 5f, true, false, false, false);
						}
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 8000)
					{
						if (func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
						}
					}
				}
				else
				{
					if (iLocal_620 == 0)
					{
						if (__LIB_15__::func_944() == 1)
						{
							if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 60500f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_274.f_0, false))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_274.f_0, ENTITY::GET_ENTITY_HEALTH(Local_274.f_0) + 1000, 0);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_274.f_0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_274.f_0) + 1000f));
									VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_274.f_0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_274.f_0) + 1000f));
									FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_274.f_0, true), 2.5f);
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 0, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 0);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 1, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 1);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 4, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 4);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_274.f_0, 5, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_274.f_0, 5);
									}
									if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
									{
										VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
									}
									ENTITY::SET_ENTITY_COORDS(Local_274.f_0, Local_274.f_2, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_274.f_0, Local_274.f_5);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_274.f_0, 5f);
									iLocal_620 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_274.f_0, false))
					{
						VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_274.f_0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
							VEHICLE::SET_VEHICLE_FIXED(Global_96938[1]);
							Local_285.f_0 = Global_96938[1];
							func_816(&Local_285, 1, -1, 43, 43, 0, 0);
							ENTITY::SET_ENTITY_COORDS(Local_285.f_0, Local_285.f_2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_285.f_0, Local_285.f_5);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
							VEHICLE::DELETE_VEHICLE(&(Global_96938[1]));
							MISC::CLEAR_AREA(Local_285.f_2, 5f, true, false, false, false);
						}
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 8000)
					{
						func_339(&Local_285, 0, 0, 145, 1, -1, 43, 43, 0, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
					Local_244.f_0 = Global_96938.f_9[0];
					func_809(Local_244.f_0, iLocal_238, 0, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_285.f_0, false))
						{
							TASK::CLEAR_PED_TASKS(Local_244.f_0);
							ENTITY::SET_ENTITY_VISIBLE(Local_244.f_0, true, false);
							if (!PED::IS_PED_IN_VEHICLE(Local_244.f_0, Local_285.f_0, false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_244.f_0, Local_285.f_0, -1);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
				{
					if (func_501(&Local_244, 0, iLocal_238, 0, 145, 0, 0, 0, Local_285.f_0, -1, 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_244.f_0, true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (__LIB_15__::func_944() != 0)
				{
					if (__LIB_17__::func_760(&iLocal_315, 0))
					{
						__LIB_32__::func_7(&iLocal_315, 1, 1, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							iLocal_688 = 1;
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_212(1)))
						{
							Local_239.f_0 = func_212(1);
							func_809(Local_239.f_0, joaat("PLAYER"), 0, 1, 0, 0);
							iLocal_315[1] = Local_239.f_0;
						}
					}
				}
				if (iLocal_618 == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
						__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), -824.3681f, 176.9837f, 70.1645f, 135.3757f, 0, 0, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
						{
							TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, 20000, -1, 2f, 131073, 0);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (iLocal_618 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_239.f_0))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_239.f_0, 16);
						PED::SET_PED_STEALTH_MOVEMENT(Local_239.f_0, false, 0);
						__LIB_28__::func_227(Local_239.f_0, -828.5035f, 177.0551f, 69.9812f, 159.28f, 0, 0, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
						{
							TASK::TASK_ENTER_VEHICLE(Local_239.f_0, Local_274.f_0, 20000, 0, 2f, 262145, 0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racket_1", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_303.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_303.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_303.f_0, Local_303.f_1, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_303.f_0, Local_303.f_4, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_303.f_0, true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racket_2", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_304.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_304.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_304.f_0, Local_304.f_1, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_304.f_0, Local_304.f_4, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_304.f_0, true);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((((((func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0) && func_339(&Local_285, 0, 0, 145, 1, -1, 43, 43, 0, 0)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_274.f_6)) && ENTITY::DOES_ENTITY_EXIST(Local_244.f_0)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_285.f_9, sLocal_208)) && ENTITY::DOES_ENTITY_EXIST(func_212(1))) && __LIB_15__::func_944() == 0)
				{
					if (iLocal_618 == 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
							__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), -824.3681f, 176.9837f, 70.1645f, 135.3757f, 0, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
							{
								TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, 20000, -1, 2f, 131073, 0);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
							}
						}
						if (!PED::IS_PED_INJURED(Local_239.f_0))
						{
							PED::SET_PED_STEALTH_MOVEMENT(Local_239.f_0, false, 0);
							__LIB_28__::func_227(Local_239.f_0, -828.5035f, 177.0551f, 69.9812f, 159.28f, 0, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
							{
								TASK::TASK_ENTER_VEHICLE(Local_239.f_0, Local_274.f_0, 20000, 0, 2f, 262145, 0);
							}
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						SYSTEM::WAIT(150);
						func_811();
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, false, true);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, false, true);
					}
					iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-818.88f, 177.91f, 76.63f, 0.75f, joaat("prop_windowbox_b"), false, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
							ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_285.f_0, true);
					}
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_244.f_0, true);
						PED::SET_PED_CONFIG_FLAG(Local_244.f_0, 32, false);
						PED::SET_PED_CONFIG_FLAG(Local_244.f_0, 116, false);
						PED::SET_PED_CONFIG_FLAG(Local_244.f_0, 29, false);
					}
					func_498(sLocal_208, Local_285.f_9, 1, 1);
					func_497();
					func_496();
					fLocal_113 = 200f;
					iLocal_67 = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						func_494(Local_285, sLocal_208, fLocal_626, 0, 1500f, 0, 0, 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_285.f_0, true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, false);
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
						}
					}
					__LIB_0__::func_679(Local_274.f_0, 0);
					func_468(Local_285.f_0, 1f);
					if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_202)))
					{
						INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_202));
					}
					__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
					if (iLocal_651 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_START"))
						{
							iLocal_651 = 1;
						}
					}
					func_595(PLAYER::PLAYER_PED_ID(), 1);
					func_595(Local_239.f_0, 1);
					__LIB_0__::func_468(19);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					return 1;
				}
				else
				{
					switch (__LIB_15__::func_944())
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(func_212(1)))
							{
								if (func_501(&Local_239, 1, joaat("PLAYER"), 0, 1, 0, 0, 0, 0, -1, 1))
								{
									func_809(Local_239.f_0, joaat("PLAYER"), 0, 1, 0, 0);
									iLocal_315[1] = Local_239.f_0;
								}
							}
							break;
						case 1:
							if (!ENTITY::DOES_ENTITY_EXIST(func_212(0)))
							{
								if (func_501(&Local_241, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, 0, -1, 1))
								{
									func_809(Local_241.f_0, joaat("PLAYER"), 0, 1, 0, 0);
									iLocal_315[0] = Local_241.f_0;
								}
							}
							break;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
						{
							if (func_501(&Local_244, 0, iLocal_238, 0, 145, 0, 0, 0, Local_285.f_0, -1, 1))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 4, 1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_244.f_0, true);
							}
						}
					}
				}
			}
			else if (iLocal_618 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_618 = 1;
				}
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(Local_274.f_6, 2);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_285.f_9, sLocal_208);
			break;
	}
	return 0;
}

void func_816(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x907BA
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam1);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam1);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam1, 0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
			{
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 0, !bParam1);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 1, !bParam1);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, !bParam1);
			}
			if (iParam3 != -1 && iParam4 != -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam3, iParam4);
			}
			if (iParam2 != -1)
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam2);
			}
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam5, iParam6);
		}
	}
}

int func_828(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x90E97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		HUD::REQUEST_ADDITIONAL_TEXT("FAM3", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("FAM3AUD", 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison2"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison3"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sadler"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blista"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_PoloGoon_01"), true);
		__LIB_16__::func_18(1);
		__LIB_17__::func_68(0);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_237);
		PED::ADD_RELATIONSHIP_GROUP("TENNISCOACH", &iLocal_238);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_237);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_237, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_237, iLocal_237);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iLocal_671 = AUDIO::GET_SOUND_ID();
		__LIB_0__::func_54(0, 1);
		__LIB_16__::func_889(1, 0, 1);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_860(iParam0);
		__LIB_17__::func_176(&uLocal_692, &uLocal_568);
		__LIB_17__::func_175(&uLocal_708, &uLocal_570);
		__LIB_28__::func_232(sLocal_208, &uLocal_701, &uLocal_569);
		func_856();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (__LIB_15__::func_944())
			{
				case 0:
					__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), Local_241.f_2, Local_241.f_5, 0, 1, 0);
					break;
				case 1:
					__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), Local_239.f_2, Local_239.f_5, 0, 1, 0);
					break;
			}
			if (iParam0 == 0)
			{
				while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_202)))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_202));
					SYSTEM::WAIT(0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				__LIB_13__::func_762(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			bLocal_653 = false;
		}
		if (*iParam4 == 1)
		{
			if (__LIB_15__::func_944() == 0)
			{
				__LIB_16__::func_3(Local_241.f_2, Local_241.f_5, 1, 0);
			}
			else if (__LIB_15__::func_944() == 1)
			{
				__LIB_16__::func_3(Local_239.f_2, Local_239.f_5, 1, 0);
			}
		}
		func_850(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (__LIB_17__::func_173(&uLocal_692, &uLocal_568))
		{
			if (__LIB_17__::func_172(&uLocal_708, &uLocal_570))
			{
				if (__LIB_28__::func_230(sLocal_208, &uLocal_701, &uLocal_569))
				{
					*iParam1++;
				}
			}
		}
	}
	if (*iParam1 == 4)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			iVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-1020.5f, 663.41f, 154.75f, 50f, "DES_StiltHouse");
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar0))
			{
				switch (iParam0)
				{
					case 0:
					case 1:
					case 2:
					case 3:
						__LIB_0__::func_544(2, 0, 0, 1, 0);
						break;
					case 4:
					case 5:
					case 6:
						__LIB_0__::func_544(2, 1, 0, 1, 0);
						break;
				}
				*iParam1++;
			}
			else
			{
				switch (iParam0)
				{
					case 2:
					case 3:
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) != 3)
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) != 2 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) != 1)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0, 2);
							}
						}
						else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) == 3)
						{
							*iParam1++;
						}
						break;
					case 4:
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) != 10)
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) != 9 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) != 8)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0, 9);
							}
						}
						else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0) == 10)
						{
							*iParam1++;
						}
						break;
					}
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 5)
	{
		func_841(0);
		switch (iParam0)
		{
			case 0:
				if (__LIB_0__::func_2(0))
				{
					if (func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0))
					{
						if (func_339(&Local_285, 0, 0, 145, 1, -1, 43, 43, 0, 0))
						{
							__LIB_0__::func_679(Local_274.f_0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
							{
								if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
								{
									VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
								}
								VEHICLE::SET_VEHICLE_STRONG(Local_274.f_0, true);
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, false);
							}
							*iParam1++;
						}
					}
				}
				else
				{
					*iParam1++;
				}
				break;
			case 1:
				iLocal_691[2] = 1;
				iLocal_691[1] = 1;
				iLocal_691[7] = 1;
				iLocal_691[8] = 1;
				iLocal_691[5] = 1;
				iLocal_691[6] = 1;
				if (func_109(&Local_303, 1) && func_109(&Local_304, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
					{
						if (__LIB_17__::func_80() == 0)
						{
							if (func_109(&Local_310, 1))
							{
							}
						}
					}
					iLocal_577 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-817.1669f, 178.0146f, 75.7095f, 3f, "des_frenchdoor");
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_577))
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_577, 2);
					}
					if (func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0))
					{
						__LIB_0__::func_679(Local_274.f_0, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
						{
							if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
							{
								VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
							}
							VEHICLE::SET_VEHICLE_STRONG(Local_274.f_0, true);
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, false);
						}
						if (func_339(&Local_285, 0, 0, 145, 1, -1, 43, 43, 0, 0))
						{
							if (func_501(&Local_244, 0, iLocal_238, 0, 145, 0, 0, 0, Local_285.f_0, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_244.f_0))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 4, 1, 0, 0);
								}
								iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-818.88f, 177.91f, 76.63f, 0.75f, joaat("prop_windowbox_b"), false, false, true);
								if (ENTITY::DOES_ENTITY_EXIST(iVar1))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
									{
										ENTITY::SET_ENTITY_VISIBLE(iVar1, false, false);
										ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
									}
								}
								__LIB_0__::func_505(Local_274.f_0, -1);
								__LIB_0__::func_377(Local_274.f_0, -1);
								switch (__LIB_15__::func_944())
								{
									case 0:
										if (func_501(&Local_239, 1, joaat("PLAYER"), 0, 1, 0, 0, 0, 0, -1, 1))
										{
											if (!PED::IS_PED_INJURED(Local_239.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_239.f_0))
											{
												iLocal_315[1] = Local_239.f_0;
												*iParam1++;
											}
										}
										break;
									case 1:
										if (func_501(&Local_241, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, 0, -1, 1))
										{
											if (!PED::IS_PED_INJURED(Local_241.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_241.f_0))
											{
												iLocal_315[0] = Local_241.f_0;
												*iParam1++;
											}
										}
										break;
									}
								}
							}
						}
				}
				break;
			case 2:
				iLocal_691[2] = 1;
				iLocal_691[1] = 1;
				iLocal_691[7] = 1;
				iLocal_691[9] = 1;
				iLocal_691[8] = 1;
				iLocal_691[5] = 1;
				iLocal_691[6] = 1;
				if (func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0))
				{
					__LIB_0__::func_679(Local_274.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_274.f_0, true);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, false);
					}
					if (func_501(&Local_244, 0, iLocal_238, 0, 25, 0, 0, 0, 0, -1, 1))
					{
						if (func_109(&Local_307, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_307.f_0, false))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_307.f_0, false, false);
								}
							}
							__LIB_0__::func_505(Local_274.f_0, -1);
							__LIB_0__::func_377(0, -1);
							if (!PED::IS_PED_INJURED(Local_244.f_0))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 4, 1, 0, 0);
							}
							switch (__LIB_15__::func_944())
							{
								case 0:
									if (func_501(&Local_239, 1, joaat("PLAYER"), 0, 1, 0, 0, 0, Local_274.f_0, 0, 1))
									{
										if (!PED::IS_PED_INJURED(Local_239.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_239.f_0))
										{
											iLocal_315[1] = Local_239.f_0;
											*iParam1++;
										}
									}
									break;
								case 1:
									if (func_501(&Local_241, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, Local_274.f_0, -1, 1))
									{
										if (!PED::IS_PED_INJURED(Local_241.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_241.f_0))
										{
											iLocal_315[0] = Local_241.f_0;
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, false))
											{
												PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, 0);
											}
											*iParam1++;
										}
									}
									break;
								}
							}
						}
				}
				break;
			case 3:
				iLocal_691[2] = 0;
				iLocal_691[1] = 1;
				iLocal_691[7] = 1;
				iLocal_691[9] = 1;
				iLocal_691[8] = 1;
				iLocal_691[5] = 1;
				iLocal_691[6] = 1;
				if (func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0))
				{
					__LIB_0__::func_679(Local_274.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_274.f_0, true);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, false);
					}
					if (func_501(&Local_244, 0, iLocal_238, 0, 25, 0, 0, 0, 0, -1, 1))
					{
						if ((func_109(&Local_307, 1) && func_109(&Local_306, 1)) && func_109(&Local_308, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_307.f_0, false))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_307.f_0, false, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_306.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_306.f_0, false))
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_306.f_0, Local_274.f_0, false);
									ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_306.f_0, false);
									ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_306.f_0, false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_308.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_308.f_0, false))
								{
									ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_308.f_0, false);
									ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_308.f_0, false);
								}
							}
							__LIB_0__::func_505(Local_274.f_0, -1);
							if (!PED::IS_PED_INJURED(Local_244.f_0))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_244.f_0, 4, 1, 0, 0);
							}
							switch (__LIB_15__::func_944())
							{
								case 0:
									if (func_501(&Local_239, 1, joaat("PLAYER"), 0, 1, 0, 0, 0, Local_274.f_0, 0, 1))
									{
										if (!PED::IS_PED_INJURED(Local_239.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_239.f_0))
										{
											iLocal_315[1] = Local_239.f_0;
											*iParam1++;
										}
									}
									break;
								case 1:
									if (func_501(&Local_241, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, 0, -1, 1))
									{
										if (!PED::IS_PED_INJURED(Local_241.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_241.f_0))
										{
											iLocal_315[0] = Local_241.f_0;
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, false))
											{
												PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, 0);
											}
											*iParam1++;
										}
									}
									break;
								}
							}
						}
				}
				break;
			case 4:
				iLocal_691[3] = 1;
				iLocal_691[5] = 1;
				iLocal_691[4] = 1;
				iLocal_691[6] = 1;
				if (func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0))
				{
					__LIB_0__::func_679(Local_274.f_0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_274.f_0);
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_274.f_0, false);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, false);
					}
					STREAMING::REQUEST_PTFX_ASSET();
					iLocal_643 = 0;
					iLocal_644 = 0;
					iLocal_645 = 0;
					iLocal_646 = 0;
					bLocal_653 = false;
					__LIB_0__::func_505(Local_274.f_0, -1);
					switch (__LIB_15__::func_944())
					{
						case 0:
							if (func_501(&Local_239, 1, joaat("PLAYER"), 0, 1, 0, 0, 0, Local_274.f_0, 0, 1))
							{
								if (!PED::IS_PED_INJURED(Local_239.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_239.f_0))
								{
									iLocal_315[1] = Local_239.f_0;
									*iParam1++;
								}
							}
							break;
						case 1:
							if (func_501(&Local_241, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, Local_274.f_0, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_241.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_241.f_0))
								{
									iLocal_315[0] = Local_241.f_0;
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, false))
									{
										PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, 0);
									}
									*iParam1++;
								}
							}
							break;
						}
				}
				break;
			case 5:
				if (func_339(&Local_274, 0, 0, 145, 1, -1, 132, 0, 0, 0) && func_339(&Local_287, 0, 0, 145, 1, -1, 0, 0, 3, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_287.f_0, false))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_287.f_0, true);
					}
					__LIB_0__::func_679(Local_274.f_0, 0);
					__LIB_0__::func_505(Local_274.f_0, -1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_274.f_0, 5))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_274.f_0, 5, false);
						}
						VEHICLE::SET_VEHICLE_STRONG(Local_274.f_0, false);
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, false);
					}
					switch (__LIB_15__::func_944())
					{
						case 0:
							if (func_501(&Local_239, 1, joaat("PLAYER"), 0, 1, 0, 0, 0, Local_274.f_0, 0, 1))
							{
								if (!PED::IS_PED_INJURED(Local_239.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_239.f_0))
								{
									iLocal_315[1] = Local_239.f_0;
									*iParam1++;
								}
							}
							break;
						case 1:
							if (func_501(&Local_241, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, Local_274.f_0, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_241.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_241.f_0))
								{
									iLocal_315[0] = Local_241.f_0;
									*iParam1++;
								}
							}
							break;
						}
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_258.f_0))
				{
					if (((__LIB_17__::func_167(24) && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_343(24))) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_0__::func_343(24), false)) && __LIB_17__::func_80() == 0)
					{
						iVar2 = __LIB_0__::func_343(24);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
								}
								Local_258.f_0 = iVar2;
								ENTITY::SET_ENTITY_COORDS(Local_258.f_0, Local_258.f_2, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_258.f_0, Local_258.f_5);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_258.f_0, 5f);
							}
						}
					}
					else
					{
						__LIB_17__::func_64(0, 0);
						if (func_339(&Local_258, 1, 0, 0, 1, -1, -1, -1, 0, 0))
						{
						}
					}
				}
				else
				{
					switch (__LIB_15__::func_944())
					{
						case 0:
							*iParam1++;
							break;
						case 1:
							if (func_501(&Local_241, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, Local_274.f_0, -1, 1))
							{
								if (!PED::IS_PED_INJURED(Local_241.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_241.f_0))
								{
									iLocal_315[0] = Local_241.f_0;
									*iParam1++;
								}
							}
							break;
						}
				}
				break;
			default:
				*iParam1++;
				break;
			}
	}
	if (*iParam1 == 6)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 0:
					break;
				case 1:
				case 2:
				case 3:
				case 4:
				case 6:
					if (__LIB_17__::func_760(&iLocal_315, 0))
					{
						__LIB_32__::func_7(&iLocal_315, 1, 0, 0);
						Local_239.f_0 = iLocal_315[1];
					}
					break;
				case 5:
					break;
				}
		}
		__LIB_17__::func_171(4, 0, 1);
		switch (iParam0)
		{
			case 0:
			case 4:
			case 5:
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 1, false, true);
				}
				break;
			case 1:
				__LIB_17__::func_171(4, 1, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, false, true);
				}
				break;
			default:
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, false, true);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		__LIB_0__::func_221(&uLocal_397, 0);
		__LIB_0__::func_221(&uLocal_397, 1);
		__LIB_0__::func_221(&uLocal_397, 3);
		__LIB_0__::func_221(&uLocal_397, 4);
		__LIB_0__::func_221(&uLocal_397, 5);
		__LIB_0__::func_221(&uLocal_397, 6);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&uLocal_397, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		switch (iParam0)
		{
			case 1:
				if (!PED::IS_PED_INJURED(Local_239.f_0))
				{
					__LIB_0__::func_222(&uLocal_397, 1, Local_239.f_0, "FRANKLIN", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_244.f_0))
				{
					__LIB_0__::func_222(&uLocal_397, 3, Local_244.f_0, "TENNISCOACH", 0, 1);
				}
				__LIB_0__::func_671(0);
				__LIB_0__::func_424(1);
				__LIB_16__::func_1();
				break;
			case 2:
			case 3:
				if (!PED::IS_PED_INJURED(Local_239.f_0))
				{
					__LIB_0__::func_222(&uLocal_397, 1, Local_239.f_0, "FRANKLIN", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_244.f_0))
				{
					__LIB_0__::func_222(&uLocal_397, 3, Local_244.f_0, "TENNISCOACH", 0, 1);
				}
				__LIB_0__::func_671(1);
				__LIB_0__::func_424(1);
				__LIB_16__::func_1();
				break;
			case 4:
				if (!PED::IS_PED_INJURED(Local_239.f_0))
				{
					__LIB_0__::func_222(&uLocal_397, 1, Local_239.f_0, "FRANKLIN", 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
				{
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						__LIB_0__::func_222(&uLocal_397, 3, Local_244.f_0, "TENNISCOACH", 0, 1);
					}
				}
				else
				{
					__LIB_0__::func_222(&uLocal_397, 3, 0, "TENNISCOACH", 0, 1);
				}
				__LIB_0__::func_222(&uLocal_397, 4, 0, "NATHALIA", 0, 1);
				__LIB_0__::func_671(0);
				__LIB_0__::func_424(1);
				__LIB_16__::func_1();
				break;
			case 5:
				__LIB_0__::func_671(0);
				__LIB_0__::func_424(0);
				__LIB_15__::func_931();
				break;
			case 6:
				__LIB_0__::func_222(&uLocal_397, 6, 0, "LESTER", 0, 1);
				__LIB_0__::func_671(0);
				__LIB_0__::func_424(0);
				__LIB_15__::func_931();
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 8)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PED::SET_CREATE_RANDOM_COPS(true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		__LIB_14__::func_804(0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		func_833();
		switch (iParam0)
		{
			case 0:
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				__LIB_0__::func_552(1);
				break;
			case 1:
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				__LIB_0__::func_552(1);
				__LIB_14__::func_804(1);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				break;
			case 2:
			case 3:
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(false);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				MISC::ENABLE_DISPATCH_SERVICE(3, false);
				MISC::ENABLE_DISPATCH_SERVICE(5, false);
				__LIB_0__::func_552(1);
				break;
			case 4:
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(false);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				__LIB_0__::func_552(0);
				__LIB_14__::func_804(1);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				func_832();
				break;
			case 5:
			case 6:
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				__LIB_0__::func_552(1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 1:
					VEHICLE::REQUEST_VEHICLE_ASSET(Local_274.f_6, 2);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_274.f_6))
					{
						*iParam1++;
					}
					break;
				case 3:
					if (iLocal_579 == 0)
					{
						if (!PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
						{
							PHYSICS::ROPE_LOAD_TEXTURES();
							if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
							{
								iLocal_578 = PHYSICS::ADD_ROPE(-1017.985f, 660.4285f, 147.4662f, 0f, 0f, 0f, 28f, 1, -1f, 0.5f, 0.5f, false, true, true, 1f, false, 0);
								PHYSICS::LOAD_ROPE_DATA(iLocal_578, sLocal_201);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_0) && PHYSICS::DOES_ROPE_EXIST(&iLocal_578))
						{
							if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_307.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
								{
									PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_578, Local_307.f_0, Local_274.f_0, Local_307.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_274.f_0, 0f, -2.1f, 0.6f), 35f, false, false, 0, 0);
									iLocal_579 = 1;
								}
							}
						}
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_274.f_0, 5, false, true);
						}
						*iParam1++;
					}
					break;
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 10)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				__LIB_0__::func_433(0, -1, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, 0);
				iVar3 = MISC::GET_GAME_TIMER() + 15000;
				while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar3)
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			StringCopy(&Local_213, "FAM3_GIT", 16);
			switch (iParam0)
			{
				case 2:
				case 4:
				case 5:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_274.f_0, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_274.f_0, 5f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_274.f_0, true, true, false);
						}
					}
					break;
			}
			if (iParam0 == 1 || iParam0 == 3)
			{
				SYSTEM::WAIT(500);
				if (iParam0 == 1)
				{
					func_811();
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			switch (iParam0)
			{
				case 1:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_CHASE_RESTART");
					break;
				case 2:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_HOUSE_RESTART");
					break;
				case 3:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_PULL_RESTART");
					break;
				case 4:
					AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MEX_RESTART");
					break;
			}
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 5:
				case 6:
					break;
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						__LIB_14__::func_524(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		switch (iParam0)
		{
			case 1:
				__LIB_42__::func_970(0, "CAR CHASE", 0, 0, 0, 1);
				break;
			case 3:
				__LIB_42__::func_970(1, "PULL HOUSE DOWN", 0, 0, 0, 1);
				break;
			case 4:
				__LIB_42__::func_970(2, "ESCAPE GOONS", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		*iParam1++;
	}
	if (*iParam1 == 13)
	{
		return 1;
	}
	return 0;
}

void func_832()//Position - 0x925D6
{
	if (iLocal_666 == -1)
	{
		iLocal_666 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1018.043f, 642.159f, 140.444f, 18f, 10f, 4f, ((-6.12f / 360f) * 6.28f), false, 7);
	}
	if (iLocal_667 == -1)
	{
		iLocal_667 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1032.143f, 646.559f, 140.444f, 15f, 9f, 4f, ((-27f / 360f) * 6.28f), false, 7);
	}
	if (iLocal_668 == -1)
	{
		iLocal_668 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1008.675f, 641.048f, 140f, 5f, 5f, 4f, ((-26.28f / 360f) * 6.28f), false, 7);
	}
}

void func_833()//Position - 0x92687
{
	if (iLocal_666 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_666);
		iLocal_666 = -1;
	}
	if (iLocal_667 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_667);
		iLocal_667 = -1;
	}
	if (iLocal_668 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_668);
		iLocal_668 = -1;
	}
}

void func_841(int iParam0)//Position - 0x928D9
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_691 - 1))
	{
		iLocal_691[iVar0] = iParam0;
		iVar0++;
	}
}

void func_850(int iParam0)//Position - 0x96D7B
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
			{
				__LIB_17__::func_174(Local_274.f_6, &uLocal_692, 8, &uLocal_568);
			}
			if (__LIB_15__::func_944() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_239.f_0))
				{
					__LIB_17__::func_174(Local_239.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			else if (__LIB_15__::func_944() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_241.f_0))
				{
					__LIB_17__::func_174(Local_241.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
			{
				__LIB_17__::func_174(Local_285.f_6, &uLocal_692, 8, &uLocal_568);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
			{
				__LIB_17__::func_174(Local_244.f_6, &uLocal_692, 8, &uLocal_568);
			}
			__LIB_28__::func_231(Local_285.f_9, sLocal_208, &uLocal_701, 6, &uLocal_569);
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
			{
				__LIB_17__::func_174(Local_274.f_6, &uLocal_692, 8, &uLocal_568);
			}
			if (__LIB_15__::func_944() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_239.f_0))
				{
					__LIB_17__::func_174(Local_239.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			else if (__LIB_15__::func_944() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_241.f_0))
				{
					__LIB_17__::func_174(Local_241.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
			{
				__LIB_17__::func_174(Local_244.f_6, &uLocal_692, 8, &uLocal_568);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_307.f_0))
			{
				__LIB_17__::func_174(Local_307.f_7, &uLocal_692, 8, &uLocal_568);
			}
			__LIB_17__::func_231("missfam3", &uLocal_708, 1, &uLocal_570);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
			{
				__LIB_17__::func_174(Local_274.f_6, &uLocal_692, 8, &uLocal_568);
			}
			if (__LIB_15__::func_944() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_239.f_0))
				{
					__LIB_17__::func_174(Local_239.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			else if (__LIB_15__::func_944() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_241.f_0))
				{
					__LIB_17__::func_174(Local_241.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
			{
				__LIB_17__::func_174(Local_244.f_6, &uLocal_692, 8, &uLocal_568);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_307.f_0))
			{
				__LIB_17__::func_174(Local_307.f_7, &uLocal_692, 8, &uLocal_568);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_308.f_0))
			{
				__LIB_17__::func_174(Local_308.f_7, &uLocal_692, 8, &uLocal_568);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_309.f_0))
			{
				__LIB_17__::func_174(Local_309.f_7, &uLocal_692, 8, &uLocal_568);
			}
			__LIB_17__::func_231("missfam3", &uLocal_708, 1, &uLocal_570);
			break;
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
			{
				__LIB_17__::func_174(Local_274.f_6, &uLocal_692, 8, &uLocal_568);
			}
			if (__LIB_15__::func_944() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_239.f_0))
				{
					__LIB_17__::func_174(Local_239.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			else if (__LIB_15__::func_944() == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_241.f_0))
				{
					__LIB_17__::func_174(Local_241.f_6, &uLocal_692, 8, &uLocal_568);
				}
			}
			break;
		case 6:
			break;
	}
}

void func_856()//Position - 0x9725E
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_571;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_571[iVar1] = 0;
		iVar1++;
	}
	iLocal_572 = 0;
}

void func_860(int iParam0)//Position - 0x97363
{
	switch (iParam0)
	{
		case 0:
			Local_241.f_2 = { -813.8015f, 179.2288f, 71.1592f };
			Local_241.f_5 = 294.8454f;
			Local_241.f_6 = __LIB_0__::func_518(0);
			Local_274.f_2 = { -827.1151f, 176.437f, 69.9585f };
			Local_274.f_5 = 148.725f;
			Local_274.f_6 = joaat("bison2");
			Local_239.f_2 = { -813.8015f, 179.2288f, 71.1592f };
			Local_239.f_5 = 294.8454f;
			Local_239.f_6 = __LIB_0__::func_518(1);
			Local_285.f_2 = { -826.2942f, 158.1811f, 68.3918f };
			Local_285.f_5 = 84.0848f;
			Local_285.f_6 = joaat("blista");
			Local_285.f_9 = 53;
			Local_244.f_2 = { -856.054f, 149.5746f, 62.2112f };
			Local_244.f_5 = 3.163f;
			Local_244.f_6 = __LIB_0__::func_493(25);
			Local_303.f_1 = { -818.038f, 179.26f, 71.252f };
			Local_303.f_4 = { -20.52f, -74.02f, 14.3f };
			Local_303.f_7 = joaat("prop_tennis_rack_01");
			Local_304.f_1 = { -818.128f, 179.1527f, 71.262f };
			Local_304.f_4 = { -39.24f, -75.96f, 16.2f };
			Local_304.f_7 = joaat("prop_tennis_rack_01b");
			Local_310.f_1 = { -819.6521f, 176.6348f, 70.76f };
			Local_310.f_4 = { 6.12f, 0f, -68.4f };
			Local_310.f_7 = joaat("prop_windowbox_broken");
			break;
		case 1:
			Local_241.f_2 = { -824.3681f, 176.9837f, 70.1645f };
			Local_241.f_5 = 135.3757f;
			Local_241.f_6 = __LIB_0__::func_518(0);
			Local_274.f_2 = { -827.1151f, 176.437f, 69.9585f };
			Local_274.f_5 = 148.725f;
			Local_274.f_6 = joaat("bison2");
			Local_239.f_2 = { -828.5035f, 177.0551f, 69.9812f };
			Local_239.f_5 = 159.28f;
			Local_239.f_6 = __LIB_0__::func_518(1);
			Local_285.f_2 = { -826.2942f, 158.1811f, 68.3918f };
			Local_285.f_5 = 84.0848f;
			Local_285.f_6 = joaat("blista");
			Local_285.f_9 = 53;
			Local_244.f_2 = { -856.054f, 149.5746f, 62.2112f };
			Local_244.f_5 = 3.163f;
			Local_244.f_6 = __LIB_0__::func_493(25);
			Local_286.f_2 = { -1386.9448f, 456.5691f, 104.2549f };
			Local_286.f_5 = 28.1851f;
			Local_286.f_6 = joaat("journey");
			Local_286.f_9 = 51;
			Local_251.f_6 = joaat("A_M_M_BevHills_01");
			Local_303.f_1 = { -818.038f, 179.26f, 71.252f };
			Local_303.f_4 = { -20.52f, -74.02f, 14.3f };
			Local_303.f_7 = joaat("prop_tennis_rack_01");
			Local_304.f_1 = { -818.128f, 179.1527f, 71.262f };
			Local_304.f_4 = { -39.24f, -75.96f, 16.2f };
			Local_304.f_7 = joaat("prop_tennis_rack_01");
			Local_310.f_1 = { -819.6521f, 176.6348f, 70.76f };
			Local_310.f_4 = { 6.12f, 0f, -68.4f };
			Local_310.f_7 = joaat("prop_windowbox_broken");
			break;
		case 2:
			Local_241.f_2 = { -993.486f, 647.2808f, 138.8108f };
			Local_241.f_5 = 274.614f;
			Local_241.f_6 = __LIB_0__::func_518(0);
			Local_274.f_2 = { -992.1501f, 645.7378f, 138.7702f };
			Local_274.f_5 = 282.199f;
			Local_274.f_6 = joaat("bison2");
			Local_239.f_2 = { -991.849f, 643.7483f, 138.6733f };
			Local_239.f_5 = 332.4843f;
			Local_239.f_6 = __LIB_0__::func_518(1);
			Local_285.f_2 = { -1007.241f, 708.9224f, 161.0334f };
			Local_285.f_5 = 358.5527f;
			Local_285.f_6 = joaat("blista");
			Local_244.f_2 = { -1026.9159f, 653.8083f, 155.0754f };
			Local_244.f_5 = 196.6071f;
			Local_244.f_6 = __LIB_0__::func_493(25);
			Local_307.f_1 = { -1017.832f, 660.562f, 147.147f };
			Local_307.f_4 = { 15f, 15f, 0f };
			Local_307.f_7 = joaat("prop_ld_rope_t");
			Local_306.f_1 = { -1006.08f, 652.88f, 143.62f };
			Local_306.f_4 = { 0f, 15.01f, -32.4f };
			Local_306.f_7 = joaat("prop_ld_dummy_rope");
			Local_308.f_1 = { -1018.26f, 660.649f, 147.2f };
			Local_308.f_4 = { 0f, 5f, -25.56f };
			Local_308.f_7 = joaat("prop_rope_family_3");
			Local_309.f_1 = { -995.2775f, 645.0095f, 139.65f };
			Local_309.f_4 = { -90f, 0f, 102f };
			Local_309.f_7 = joaat("prop_tail_gate_col");
			break;
		case 3:
			Local_241.f_2 = { -993.4773f, 647.6854f, 138.7637f };
			Local_241.f_5 = 255.1397f;
			Local_241.f_6 = __LIB_0__::func_518(0);
			Local_274.f_2 = { -992.1501f, 645.7378f, 138.7702f };
			Local_274.f_5 = 282.199f;
			Local_274.f_6 = joaat("bison2");
			Local_239.f_2 = { -992.5433f, 643.7088f, 138.7174f };
			Local_239.f_5 = 86.0291f;
			Local_239.f_6 = __LIB_0__::func_518(1);
			Local_285.f_2 = { -1007.241f, 708.9224f, 161.0334f };
			Local_285.f_5 = 358.5527f;
			Local_285.f_6 = joaat("blista");
			Local_244.f_2 = { -1014.668f, 654.422f, 155.3056f };
			Local_244.f_5 = 252.4493f;
			Local_244.f_6 = __LIB_0__::func_493(25);
			Local_307.f_1 = { -1017.832f, 660.562f, 147.147f };
			Local_307.f_4 = { 15f, 15f, 0f };
			Local_307.f_7 = joaat("prop_ld_rope_t");
			Local_306.f_1 = { -1006.08f, 652.88f, 143.62f };
			Local_306.f_4 = { 0f, 15.01f, -32.4f };
			Local_306.f_7 = joaat("prop_ld_dummy_rope");
			Local_308.f_1 = { -1018.26f, 660.649f, 147.2f };
			Local_308.f_4 = { 0f, 5f, -25.56f };
			Local_308.f_7 = joaat("prop_rope_family_3");
			Local_309.f_1 = { -995.2775f, 645.0095f, 139.65f };
			Local_309.f_4 = { -90f, 0f, 102f };
			Local_309.f_7 = joaat("prop_tail_gate_col");
			break;
		case 4:
			Local_241.f_2 = { -993.4773f, 647.6854f, 138.7637f };
			Local_241.f_5 = 255.1397f;
			Local_241.f_6 = __LIB_0__::func_518(0);
			Local_274.f_2 = { -977.7563f, 646.6259f, 137.9191f };
			Local_274.f_5 = 280.3406f;
			Local_274.f_6 = joaat("bison2");
			Local_239.f_2 = { -992.5433f, 643.7088f, 138.7174f };
			Local_239.f_5 = 86.0291f;
			Local_239.f_6 = __LIB_0__::func_518(1);
			Local_285.f_2 = { -1008.7057f, 710.1682f, 161.5234f };
			Local_285.f_5 = 347.3929f;
			Local_285.f_6 = joaat("blista");
			Local_244.f_2 = { -1020.19f, 698.98f, 160.9f };
			Local_244.f_5 = 76.31f;
			Local_244.f_6 = __LIB_0__::func_493(25);
			break;
		case 5:
			Local_241.f_2 = { -816.3374f, 160.827f, 70.0828f };
			Local_241.f_5 = 293.3672f;
			Local_241.f_6 = __LIB_0__::func_518(0);
			Local_274.f_2 = { -822.9047f, 182.45f, 70.8286f };
			Local_274.f_5 = 305.1158f;
			Local_274.f_6 = joaat("bison2");
			Local_239.f_2 = { -815.2599f, 157.9198f, 70.0847f };
			Local_239.f_5 = 300.3756f;
			Local_239.f_6 = __LIB_0__::func_518(1);
			Local_287.f_2 = { -777.6288f, 161.9553f, 66.4745f };
			Local_287.f_5 = 359.0025f;
			Local_287.f_6 = joaat("baller");
			break;
		case 6:
			Local_241.f_2 = { -95.55f, -415.1f, 35.675f };
			Local_241.f_5 = 133f;
			Local_241.f_6 = __LIB_0__::func_518(0);
			Local_258.f_2 = { -155.8183f, -423.4282f, 32.8517f };
			Local_258.f_5 = 342.5681f;
			Local_258.f_6 = __LIB_0__::func_634(0, 0);
			Local_305.f_1 = { -95.55f, -415.1f, 35.675f };
			Local_305.f_4 = { 0f, 0f, 0f };
			Local_305.f_7 = joaat("prop_phone_ing");
			break;
	}
}

void func_864()//Position - 0x97C5D
{
	if (!Local_359.f_20)
	{
		if (__LIB_32__::func_5(&iLocal_315, 1, 1))
		{
			if (!__LIB_15__::func_893(&iLocal_315, 3))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_671))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_671, "All", "SHORT_PLAYER_SWITCH_SOUND_SET", true);
				}
				if (iLocal_678 == 0)
				{
					WEAPON::ADD_AMMO_TO_PED(func_212(1), joaat("WEAPON_PISTOL"), WEAPON::GET_MAX_AMMO_IN_CLIP(func_212(1), joaat("WEAPON_PISTOL"), true) * 5);
					iLocal_678 = 1;
				}
				Local_359.f_12 = iLocal_315[iLocal_315.f_7];
				Local_359.f_20 = 1;
				iLocal_679 = 0;
				if (!PED::IS_PED_INJURED(func_212(0)) && !PED::IS_PED_INJURED(func_212(1)))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(func_212(0), false) || PED::IS_PED_IN_ANY_VEHICLE(func_212(1), false))
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							iLocal_679 = 1;
						}
					}
				}
			}
		}
	}
	else if (func_866(&Local_359, iLocal_679))
	{
		if (!Local_359.f_19)
		{
			if (__LIB_32__::func_7(&iLocal_315, 1, 1, 0))
			{
				__LIB_16__::func_21(&Local_373, 0);
				switch (__LIB_15__::func_944())
				{
					case 0:
						if (HUD::DOES_BLIP_EXIST(Local_241.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_241.f_1));
						}
						func_865(&Local_239, iLocal_315[iLocal_315.f_5], 0, joaat("PLAYER"));
						iLocal_691[3] = 0;
						iLocal_691[4] = 0;
						iLocal_691[5] = 1;
						iLocal_691[6] = 1;
						func_292(&Local_239, 15);
						if (iLocal_679 == 1)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, false);
						}
						break;
					case 1:
						if (HUD::DOES_BLIP_EXIST(Local_239.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_239.f_1));
						}
						func_865(&Local_241, iLocal_315[iLocal_315.f_5], 0, joaat("PLAYER"));
						iLocal_691[3] = 1;
						iLocal_691[4] = 1;
						iLocal_691[5] = 0;
						iLocal_691[6] = 0;
						func_292(&Local_239, 15);
						if (iLocal_679 == 1)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 0, false);
						}
						break;
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_671))
				{
					AUDIO::STOP_SOUND(iLocal_671);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
				__LIB_0__::func_635(4, PLAYER::PLAYER_PED_ID());
				__LIB_0__::func_497(222, 1, 0);
				__LIB_17__::func_78(&iLocal_315, 0, 0);
				__LIB_17__::func_78(&iLocal_315, 1, 0);
				iLocal_647 = MISC::GET_GAME_TIMER();
				iLocal_313 = 1;
				Local_359.f_19 = 1;
				if (iLocal_679 == 1)
				{
					Local_359.f_20 = 0;
					Local_359.f_19 = 0;
				}
			}
		}
	}
}

void func_865(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x97E9C
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		*iParam0 = iParam1;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
		PED::SET_PED_AS_ENEMY(iParam1, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iParam3);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam1, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam1, 16);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, false);
		PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 188, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 229, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 32, false);
		PED::SET_PED_CONFIG_FLAG(iParam1, 174, true);
		PED::SET_COMBAT_FLOAT(iParam1, 12, 1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 54, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
		__LIB_17__::func_479(iParam1, 400);
		if (WEAPON::GET_BEST_PED_WEAPON(iParam1, false) == joaat("WEAPON_UNARMED"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, joaat("WEAPON_PISTOL"), WEAPON::GET_MAX_AMMO_IN_CLIP(iParam1, joaat("WEAPON_PISTOL"), true) * 2, false, false);
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1, "FAMILY_3_BUDDY_GROUP", 0f);
		if (iParam2 == 1)
		{
			if (!HUD::DOES_BLIP_EXIST(iParam0->f_1))
			{
				iParam0->f_1 = __LIB_0__::func_639(iParam1, 0, 0);
			}
		}
	}
}

int func_866(var uParam0, int iParam1)//Position - 0x97F88
{
	if (iParam1 == 0)
	{
		if (__LIB_41__::func_655(uParam0, 0, 1148829696, 1148829696))
		{
			if (uParam0->f_18 == 1)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_921(int iParam0, var uParam1)//Position - 0x9A745
{
	if (*iParam0 != 7 && *iParam0 != 8)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
			{
				if (iLocal_691[2] == 1)
				{
					if (__LIB_15__::func_929(&Local_274))
					{
						*uParam1 = 2;
						*iParam0 = 8;
					}
				}
				if (iLocal_691[1] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, true) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_274.f_0, PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_274.f_0, joaat("WEAPON_MOLOTOV"), 0)))
					{
						*uParam1 = 1;
						*iParam0 = 8;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_212(1)))
			{
				if (iLocal_691[5] == 1)
				{
					if (PED::IS_PED_INJURED(func_212(1)))
					{
						*uParam1 = 5;
						*iParam0 = 8;
					}
				}
				if (iLocal_691[6] == 1)
				{
					if (!PED::IS_PED_INJURED(func_212(1)))
					{
						if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), func_212(1)) > 100f)
						{
							*uParam1 = 6;
							*iParam0 = 8;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_212(0)))
			{
				if (iLocal_691[3] == 1)
				{
					if (PED::IS_PED_INJURED(func_212(0)))
					{
						*uParam1 = 3;
						*iParam0 = 8;
					}
				}
				if (iLocal_691[4] == 1)
				{
					if (!PED::IS_PED_INJURED(func_212(0)))
					{
						if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), func_212(0)) > 100f)
						{
							*uParam1 = 4;
							*iParam0 = 8;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
			{
				if (iLocal_691[7] == 1)
				{
					if (PED::IS_PED_INJURED(Local_244.f_0))
					{
						*uParam1 = 7;
						*iParam0 = 8;
					}
				}
				if (iLocal_691[8] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_244.f_0, PLAYER::PLAYER_PED_ID(), true) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_244.f_0, Local_274.f_0, true))) || __LIB_17__::func_215(PLAYER::PLAYER_PED_ID(), Local_244.f_0, 3f))
						{
							__LIB_17__::func_207(Local_244.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1);
							*uParam1 = 8;
							*iParam0 = 8;
						}
					}
				}
				if (iLocal_691[9] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_244.f_0))
					{
						if (((((ENTITY::IS_ENTITY_AT_COORD(Local_244.f_0, -1024.9198f, 661.29205f, 159.5753f, 10.25f, 8f, 4.75f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1024.9198f, 661.29205f, 159.5753f, 10.25f, 8f, 4.75f, false, true, 0)) || PED::HAS_PED_RECEIVED_EVENT(Local_244.f_0, 134)) || PED::HAS_PED_RECEIVED_EVENT(Local_244.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_244.f_0, 88)) || func_225(PLAYER::PLAYER_PED_ID(), Local_244.f_0, 1, 5f))
						{
							__LIB_17__::func_207(Local_244.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1);
							*uParam1 = 9;
							*iParam0 = 8;
						}
					}
				}
			}
		}
	}
}

void func_973(var uParam0, int iParam1)//Position - 0xA087F
{
	if (iParam1 == 0)
	{
		*uParam0 = 1;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 3;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 4;
	}
}

void func_976()//Position - 0xA08F9
{
	if (__LIB_0__::func_75())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_0__::func_429();
		}
		else
		{
			__LIB_0__::func_638();
		}
		__LIB_0__::func_325();
	}
	if (__LIB_13__::func_755(&Local_373, 1))
	{
		HUD::CLEAR_PRINTS();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	__LIB_17__::func_176(&uLocal_692, &uLocal_568);
	__LIB_28__::func_232(sLocal_208, &uLocal_701, &uLocal_569);
	__LIB_17__::func_175(&uLocal_708, &uLocal_570);
	__LIB_16__::func_21(&Local_373, 0);
	func_450(0, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	}
	switch (__LIB_15__::func_944())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_239.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_239.f_0))
				{
					if (PED::IS_PED_IN_COMBAT(Local_239.f_0, 0))
					{
						PED::SET_PED_KEEP_TASK(Local_239.f_0, true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_239.f_0);
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_239.f_0, __LIB_0__::func_495()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_239.f_0);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_239);
				}
				else
				{
					PED::DELETE_PED(&Local_239);
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_241.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_241.f_0))
				{
					if (PED::IS_PED_IN_COMBAT(Local_241.f_0, 0))
					{
						PED::SET_PED_KEEP_TASK(Local_241.f_0, true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_241.f_0);
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_241.f_0, __LIB_0__::func_495()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_241.f_0);
					}
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_241);
				}
				else
				{
					PED::DELETE_PED(&Local_241);
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_244.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_244.f_0))
		{
			TASK::CLEAR_PED_TASKS(Local_244.f_0);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_244);
		}
		else
		{
			PED::DELETE_PED(&Local_244);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_251.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_251.f_0))
		{
			TASK::CLEAR_PED_TASKS(Local_251.f_0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_251);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_274.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_274.f_0, false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_274.f_0, true, 0);
			VEHICLE::SET_VEHICLE_STRONG(Local_274.f_0, false);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Local_274.f_0, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_274);
		}
	}
	func_125(&Local_286, 0, 0);
	func_125(&Local_285, 0, 0);
	func_125(&Local_287, 0, 0);
	if (HUD::DOES_BLIP_EXIST(Local_274.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_274.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_285.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_285.f_1));
	}
	func_978(&Local_714, 0, 0, 1);
	func_978(&Local_715, 0, 0, 1);
	func_977(&Local_713, 0, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_237);
	if (PHYSICS::DOES_ROPE_EXIST(&iLocal_578) && ENTITY::DOES_ENTITY_EXIST(Local_307.f_0))
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_578, Local_307.f_0);
		PHYSICS::DELETE_ROPE(&iLocal_578);
		OBJECT::DELETE_OBJECT(&Local_307);
		PHYSICS::ROPE_UNLOAD_TEXTURES();
		iLocal_579 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_306.f_0))
	{
		OBJECT::DELETE_OBJECT(&Local_306);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_308.f_0))
	{
		OBJECT::DELETE_OBJECT(&Local_308);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_309.f_0))
	{
		OBJECT::DELETE_OBJECT(&Local_309);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_305.f_0))
	{
		OBJECT::DELETE_OBJECT(&Local_305);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_310);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_592))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_592, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_593))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_593, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_594))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_594, false);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	STREAMING::REMOVE_ANIM_DICT("missfam3");
	STREAMING::REMOVE_ANIM_DICT("switch@michael@bench");
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison2"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bison3"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sadler"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blista"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_PoloGoon_01"), false);
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("bison2"));
	__LIB_16__::func_18(0);
	__LIB_0__::func_364(0, 1);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	__LIB_0__::func_671(0);
	__LIB_0__::func_424(0);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	AUDIO::STOP_STREAM();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::CANCEL_MUSIC_EVENT("FAM3_HOUSE_COLLAPSE");
	AUDIO::TRIGGER_MUSIC_EVENT("FAM3_MISSION_FAIL");
	__LIB_0__::func_552(1);
	__LIB_0__::func_54(1, 1);
	__LIB_16__::func_889(1, 0, 0);
	__LIB_15__::func_931();
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1986583853))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1986583853, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1986583853, 0, false, true);
	}
	__LIB_17__::func_171(4, 0, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	CAM::STOP_GAMEPLAY_HINT(false);
	__LIB_0__::func_345(&uLocal_385, 0, 0);
	func_833();
	SCRIPT::SET_NO_LOADING_SCREEN(false);
}

void func_977(var uParam0, int iParam1, int iParam2)//Position - 0xA0D46
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_125(uParam0[iVar0 /*22*/], iParam1, iParam2);
		iVar0++;
	}
}

void func_978(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA0D75
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_413(uParam0[iVar0 /*18*/], iParam1, iParam2, bParam3);
		iVar0++;
	}
}

void func_979(int iParam0, int iParam1)//Position - 0xA0DA6
{
	if (iParam0 == 1)
	{
		__LIB_0__::func_544(2, 0, iParam1, 1, 0);
	}
	else
	{
		__LIB_0__::func_544(2, 1, iParam1, 1, 0);
	}
}

void func_980()//Position - 0xA0DCB
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_40();
		}
	}
}

