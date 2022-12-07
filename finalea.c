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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	float fLocal_83[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_84[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_93[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_94[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_95[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_96[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_97[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_98[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_99[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_100[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_101[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_122 = 0f;
	int iLocal_123[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_124[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_125[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_126[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_127[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_128[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_129[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_146 = 0;
	struct<3> Local_147[150];
	struct<3> Local_148[50];
	struct<3> Local_149[25];
	struct<3> Local_150 = { 0, 0, 0 } ;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	struct<3> Local_159 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	struct<3> Local_162 = { 0, 0, 0 } ;
	char cLocal_163[64] = "";
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_180[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_181[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_182[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_183[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 8;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	struct<3> Local_196 = { 0, 0, 0 } ;
	float fLocal_197 = 0f;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	struct<2> Local_227[6];
	struct<2> Local_228[5];
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = -1;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 1000;
	var uLocal_239 = 1000;
	var uLocal_240 = 0;
	struct<3> Local_241 = { 0, 0, 0 } ;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 21;
	var uLocal_247 = 6;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int* iLocal_251 = NULL;
	var uLocal_252 = 3;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 1092616192;
	var uLocal_259 = 1101004800;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 3;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 16;
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
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	char[] cLocal_445[8] = 0;
	char[] cLocal_446[8] = 0;
	char[] cLocal_447[8] = 0;
	char* sLocal_448 = NULL;
	char* sLocal_449 = NULL;
	char* sLocal_450 = NULL;
	char* sLocal_451 = NULL;
	char* sLocal_452 = NULL;
	char* sLocal_453 = NULL;
	char* sLocal_454 = NULL;
	char* sLocal_455 = NULL;
	char* sLocal_456 = NULL;
	char* sLocal_457 = NULL;
	char* sLocal_458 = NULL;
	char* sLocal_459 = NULL;
	char* sLocal_460 = NULL;
	char* sLocal_461 = NULL;
	char* sLocal_462 = NULL;
	char* sLocal_463 = NULL;
	char* sLocal_464 = NULL;
	char* sLocal_465 = NULL;
	char* sLocal_466 = NULL;
	char* sLocal_467 = NULL;
	int* iLocal_468 = NULL;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	bool bLocal_472 = 0;
	bool bLocal_473 = 0;
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
	var uLocal_487 = 0;
	float fLocal_488 = 0f;
	float fLocal_489 = 0f;
	float fLocal_490 = 0f;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	bool bLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	bool bLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	var uLocal_508 = 30;
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
	var uLocal_659 = 10;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
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
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
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
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
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
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 10;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
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
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
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
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
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
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 20;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 20;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 30;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 5;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 7;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 5;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 3;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 21;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 10;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 5;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 5;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 5;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 12;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 12;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 12;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 9;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 9;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 12;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 12;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 12;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 9;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 9;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 12;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 12;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 12;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 9;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 9;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 12;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 12;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 12;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 9;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 9;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 12;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 12;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 12;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 9;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 9;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	int iLocal_1929 = 0;
	int iLocal_1930 = 0;
	int iLocal_1931 = 0;
	int iLocal_1932 = 0;
	int iLocal_1933 = 0;
	int iLocal_1934 = 0;
	int iLocal_1935 = 0;
	bool bLocal_1936 = 0;
	int iLocal_1937 = 0;
	int iLocal_1938 = 0;
	int iLocal_1939 = 0;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_52 = true;
	bLocal_59 = true;
	bLocal_81 = true;
	fLocal_102 = 120f;
	fLocal_103 = 0f;
	fLocal_105 = 1f;
	fLocal_106 = 0f;
	fLocal_107 = 1f;
	fLocal_108 = 30f;
	fLocal_110 = 1f;
	fLocal_111 = 5f;
	fLocal_112 = 1f;
	fLocal_113 = 1f;
	fLocal_114 = 100f;
	fLocal_115 = 100f;
	fLocal_116 = 0f;
	fLocal_117 = 7000f;
	fLocal_118 = 0f;
	fLocal_119 = 0f;
	fLocal_120 = 0.3f;
	fLocal_121 = 0.5f;
	fLocal_122 = 50f;
	iLocal_133 = -1;
	iLocal_141 = -1;
	iLocal_142 = -1;
	Local_196 = { 1342.9705f, -2553.8333f, 46.1407f };
	fLocal_197 = 303.0488f;
	cLocal_445 = "missfinale_a_ig_1";
	cLocal_446 = "missfinale_a_ig_2";
	cLocal_447 = "missfinale_a_ig_2_alt_1";
	sLocal_448 = "michael_base_idle_pz";
	sLocal_449 = "michael_idle_a_pz";
	sLocal_450 = "michael_idle_b_pz";
	sLocal_451 = "michael_idle_c_pz";
	sLocal_452 = "michael_base_idle_to_aim_into_pz";
	sLocal_453 = "michael_gun_Shot_&_trevor_death_reaction_pz";
	sLocal_454 = "michael_alternate_gun_shot_&_trevor_death_reaction";
	sLocal_455 = "michael_trevor_death_base_idle_pz";
	sLocal_456 = "michael_alternate_trevor_death_base_idle";
	sLocal_457 = "michael_alternate_gas_Tanker_explosion_outro";
	sLocal_458 = "franklin_trevor_death_reaction_po";
	sLocal_459 = "franklin_alternate_gun_shot_&_trevor_death_reaction";
	sLocal_460 = "franklin_trevor_death_base_idle_po";
	sLocal_461 = "franklin_alternate_trevor_death_base_idle";
	sLocal_462 = "franklin_alternate_gas_tanker_explosion_outro";
	sLocal_463 = "trevor_base_idle_pt";
	sLocal_464 = "trevor_idle_a_pt";
	sLocal_465 = "trevor_idle_b_pt";
	sLocal_466 = "trevor_death_reaction_pt";
	sLocal_467 = "trevor_dead_idle_pt";
	iLocal_474 = 1;
	fLocal_489 = 0f;
	iLocal_1938 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_805();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		}
		func_804();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(true);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("FINALE_A_GENERAL", false, -1);
	STREAMING::REQUEST_IPL("DES_tankercrash");
	HUD::REQUEST_ADDITIONAL_TEXT("FINALE1", 0);
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (!__LIB_0__::func_294())
	{
		func_772();
		SYSTEM::WAIT(500);
	}
	func_767();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_KillTrevor", 0);
		__LIB_20__::func_736(&uLocal_508);
		__LIB_20__::func_616(&uLocal_1518);
		func_763();
		func_469();
		if (!iLocal_1935)
		{
			func_467();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x25F
{
	switch (iLocal_1930)
	{
		case 0:
			func_438();
			break;
		case 1:
			func_342();
			break;
		case 2:
			func_330();
			break;
		case 3:
			func_206();
			break;
		case 4:
			func_28();
			break;
		case 5:
			func_2();
			break;
	}
}

void func_2()//Position - 0x2BD
{
	switch (iLocal_1931)
	{
		case 0:
			iLocal_1931++;
			break;
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x2EB
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	Global_96885 = 0;
	__LIB_26__::func_581(2);
	__LIB_0__::func_498(846);
	if (iLocal_482 == 0)
	{
		__LIB_39__::func_850(5, 0);
		iLocal_482 = 1;
	}
	if (__LIB_0__::func_2(0))
	{
		Global_63156 = 1;
		__LIB_0__::func_46(1, 1);
	}
	__LIB_6__::func_823(1, 0);
	if (__LIB_0__::func_2(0))
	{
		Global_63154 = 0;
	}
	func_804();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_28()//Position - 0x90A
{
	switch (iLocal_1931)
	{
		case 0:
			iLocal_481 = 0;
			iLocal_482 = 0;
			if (__LIB_11__::func_720(func_205()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_205(), false);
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_205(), true);
			}
			if (__LIB_11__::func_720(func_203()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_203(), false);
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_203(), true);
			}
			HUD::CLEAR_HELP(true);
			__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
			func_112(4, "Stage 4: Goodbyes", 1, 0, 0, 1);
			func_111(0);
			iLocal_1931++;
			break;
		case 1:
			if (__LIB_0__::func_90())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_205()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_205(), "Franklin", 0, ENTITY::GET_ENTITY_MODEL(func_205()), 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_228[0 /*2*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_228[0 /*2*/], "Michael", 1, ENTITY::GET_ENTITY_MODEL(Local_228[0 /*2*/]), 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_227[0 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_227[0 /*2*/]));
				}
				HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 40f, true, false, false, false);
				iLocal_1931++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(Local_228[0 /*2*/], 0);
				MISC::SET_TIME_SCALE(1f);
				func_109(1, 0, 0, 3000, 0);
				__LIB_6__::func_849(0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_217))
				{
					iLocal_217 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					CAM::SET_CAM_PARAMS(iLocal_217, 1685.6401f, -1750.7195f, 119.86434f, -1.003233f, 0.243573f, 78.91537f, 38.864964f, 0, 1, 1, 2);
				}
				iLocal_1931++;
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_227[0 /*2*/]))
			{
				if (__LIB_40__::func_994(&(Local_227[0 /*2*/]), 0, 1698.0569f, -1782.4751f, 110.5612f, 321.7204f, 1, 1))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_227[0 /*2*/], 2);
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_481 == 0)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_217))
					{
						CAM::SET_CAM_ACTIVE(iLocal_217, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						iLocal_481 = 1;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 99000)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
				if (Global_96884 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 99963)
					{
						PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
						AUDIO::PLAY_END_CREDITS_MUSIC(true);
						AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(true);
						AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
						AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
						AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */, "END_CREDITS_KILL_TREVOR", true);
						Global_96884 = 1;
					}
				}
				if (iLocal_482 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 113300)
					{
						MISC::SET_CREDITS_ACTIVE(true);
						MISC::SET_CREDITS_FADE_OUT_WITH_SCREEN(false);
						AUDIO::START_AUDIO_SCENE("END_CREDITS_SCENE");
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
						__LIB_39__::func_850(5, 0);
						iLocal_482 = 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_227[2 /*2*/]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1668.9279f, -1743.7573f, 111.2063f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 51.8277f);
				bLocal_498 = true;
			}
			if (bLocal_498)
			{
				__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_1931++;
			}
			break;
		case 4:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			CAM::SHAKE_CAM(iLocal_217, "HAND_SHAKE", 0.1f);
			SYSTEM::SETTIMERA(0);
			iLocal_1931++;
			break;
		case 5:
			if (SYSTEM::TIMERA() > 45000)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(5000);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_3();
				}
			}
			break;
	}
}

void func_109(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0xA349
{
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam4);
	CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(false);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
	}
	iLocal_506 = 0;
}

void func_111(int iParam0)//Position - 0xA3C0
{
	bLocal_498 = iParam0;
	iLocal_499 = iParam0;
	iLocal_500 = iParam0;
	iLocal_501 = iParam0;
	iLocal_502 = iParam0;
	iLocal_503 = iParam0;
	iLocal_504 = iParam0;
}

void func_112(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA3EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_177(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_6__::func_774(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_6__::func_794(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_6__::func_864(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_113(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_113(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xA561
{
	func_114(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_114(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xA57D
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_18__::func_173();
	uParam0->f_1 = __LIB_13__::func_95();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_40__::func_844(&(uParam0->f_2884), 0);
		__LIB_18__::func_218(PLAYER::PLAYER_PED_ID());
		__LIB_26__::func_517(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_18__::func_173())
		{
			__LIB_24__::func_948(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		__LIB_36__::func_86(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_327(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_203()//Position - 0x12B0D
{
	return Local_228[0 /*2*/];
}

int func_205()//Position - 0x12B66
{
	return Local_228[2 /*2*/];
}

void func_206()//Position - 0x12B74
{
	if (ENTITY::DOES_ENTITY_EXIST(func_329()))
	{
		PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(func_329());
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(func_205(), 0f);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
	__LIB_8__::func_770(1);
	if (iLocal_1931 > 0)
	{
		func_326();
	}
	switch (iLocal_1931)
	{
		case 0:
			iLocal_219 = 0;
			iLocal_205 = 0;
			iLocal_207 = 0;
			iLocal_208 = 0;
			iLocal_213 = 0;
			iLocal_476 = 0;
			STREAMING::REQUEST_PTFX_ASSET();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_1939))
				{
					iLocal_1939 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1939, "FINALE_PETROL_SPILL", 1733f, -1627f, 113f, 0, false, 0, false);
				}
				CAM::DO_SCREEN_FADE_IN(800);
				iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_445, sLocal_448, 1000f, -4f, 4, 4, 1000f, 0);
				iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_445, sLocal_463, 1000f, -4f, 4, 4, 1000f, 0);
			}
			func_112(3, "Stage 3: Ignite Trevor", 0, 0, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_228[0 /*2*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_329(), true);
			if (!HUD::DOES_BLIP_EXIST(iLocal_443))
			{
				iLocal_443 = __LIB_6__::func_850(func_329(), 1, 145);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_DESTROY_TREVOR"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_1_DESTROY_TREVOR");
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(func_205(), joaat("WEAPON_PISTOL"), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_205(), joaat("WEAPON_PISTOL"), true);
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_205(), joaat("WEAPON_PISTOL")) < 50)
				{
					WEAPON::ADD_AMMO_TO_PED(func_205(), joaat("WEAPON_PISTOL"), 50);
				}
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_205(), joaat("WEAPON_PISTOL"), 50, true, true);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_215))
			{
				CAM::DESTROY_CAM(iLocal_215, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_216))
			{
				CAM::DESTROY_CAM(iLocal_216, false);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_215))
			{
				iLocal_215 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_216))
			{
				iLocal_216 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 5f, 4);
			__LIB_0__::func_210("FIN1_DES", 7500, 1);
			iLocal_469 = MISC::GET_GAME_TIMER();
			iLocal_471 = 0;
			bLocal_472 = false;
			bLocal_473 = false;
			iLocal_199 = 0;
			iLocal_1931++;
			break;
		case 1:
			if (iLocal_199 == 0)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REQUEST_CUTSCENE("fin_a_ext", 8);
					iLocal_199 = 1;
				}
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_232(0);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_469) > 4000)
			{
				switch (iLocal_471)
				{
					case 0:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
						{
							__LIB_0__::func_203(&uLocal_276, 2, func_203(), "MICHAEL", 0, 1);
							if (__LIB_35__::func_901(&uLocal_276, "FIN1AUD", "FIN1_COUGH", "FIN1_COUGH_1", 7, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
								{
									iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_445, sLocal_451, 1000f, -8f, 4, 4, 1000f, 0);
									iLocal_469 = MISC::GET_GAME_TIMER();
									iLocal_471++;
								}
							}
						}
						break;
					case 1:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
						{
							__LIB_0__::func_203(&uLocal_276, 1, func_329(), "TREVOR", 0, 1);
							if (__LIB_35__::func_536(&uLocal_276, "FIN1AUD", "FIN1_COUGH2", 7, 0, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
								{
									iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_445, sLocal_464, 1000f, -8f, 4, 4, 1000f, 0);
									iLocal_469 = MISC::GET_GAME_TIMER();
									iLocal_471 = 5;
								}
							}
						}
						break;
					case 2:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
						{
							__LIB_0__::func_203(&uLocal_276, 2, func_203(), "MICHAEL", 0, 1);
							if (__LIB_39__::func_923(&uLocal_276, "FIN1AUD", "FIN1_COUGH", "FIN1_COUGH_2", "FIN1_COUGH", "FIN1_COUGH_3", 7, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
								{
									iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_445, sLocal_449, 1000f, -8f, 4, 4, 1000f, 0);
									iLocal_469 = MISC::GET_GAME_TIMER();
									iLocal_471++;
								}
							}
						}
						break;
					case 3:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
						{
							__LIB_0__::func_203(&uLocal_276, 1, func_329(), "TREVOR", 0, 1);
							if (__LIB_35__::func_536(&uLocal_276, "FIN1AUD", "FIN1_COUGH2", 7, 0, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
								{
									iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_445, sLocal_465, 1000f, -8f, 4, 4, 1000f, 0);
									iLocal_469 = MISC::GET_GAME_TIMER();
									iLocal_471++;
								}
							}
						}
						break;
					case 4:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
						{
							__LIB_0__::func_203(&uLocal_276, 2, func_203(), "MICHAEL", 0, 1);
							if (__LIB_39__::func_923(&uLocal_276, "FIN1AUD", "FIN1_COUGH", "FIN1_COUGH_4", "FIN1_COUGH", "FIN1_COUGH_5", 7, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
								{
									iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_445, sLocal_450, 1000f, -8f, 4, 4, 1000f, 0);
									iLocal_469 = MISC::GET_GAME_TIMER();
									iLocal_471++;
								}
							}
						}
						break;
					case 5:
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
						{
							__LIB_0__::func_203(&uLocal_276, 2, func_203(), "MICHAEL", 0, 1);
							if (__LIB_35__::func_536(&uLocal_276, "FIN1AUD", "FIN1_MIKE", 7, 0, 0, 0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									HUD::DISPLAY_RADAR(false);
									HUD::DISPLAY_HUD(false);
									CAM::SET_CAM_ACTIVE(iLocal_215, true);
									iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_446, sLocal_452, 1000f, -8f, 4, 4, 1000f, 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_215, iLocal_484, "cam_base_idle_to_aim_into_pz", cLocal_446);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									bLocal_472 = true;
									iLocal_475 = 0;
									iLocal_471++;
								}
							}
						}
						break;
					case 6:
						if (!iLocal_475)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 0.5f)
							{
								WEAPON::GIVE_WEAPON_TO_PED(func_203(), joaat("WEAPON_PISTOL"), -1, true, true);
								WEAPON::SET_CURRENT_PED_WEAPON(func_203(), joaat("WEAPON_PISTOL"), true);
								iLocal_475 = 1;
							}
						}
						if (!iLocal_476)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 0.95f)
							{
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("muz_pistol", 1729.85f, -1617.4f, 112.8f, 90f, -40f, 0f, 1f, false, false, false);
								iLocal_476 = 1;
							}
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
						{
							CAM::SET_CAM_ACTIVE(iLocal_216, true);
							PED::SET_PED_SHOOTS_AT_COORD(func_203(), 1733.7052f, -1624.5603f, 111.42592f, true);
							iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_446, sLocal_466, 8f, -4f, 4, 4, 1000f, 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_216, iLocal_485, "cam_trevor_death_reaction_pt", cLocal_446);
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_329(), "burning_1", 0);
							iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_446, sLocal_453, 1000f, -1.5f, 4, 4, 1000f, 0);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_215, iLocal_484, "cam_gun_shot_&_trevor_death_reaction_pz", cLocal_446);
							iLocal_486 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
							{
								bLocal_473 = true;
								TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_447, sLocal_459, 1.5f, -4f, 4, 4, 1000f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_446, sLocal_458, 1000f, -4f, 4, 4, 1000f, 0);
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 2f, 4);
							iLocal_1931 = 2;
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
						{
							iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_445, sLocal_463, 4f, -4f, 4, 4, 1000f, 0);
						}
						break;
				}
			}
			else
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
				{
					iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_445, sLocal_448, 1.5f, -1.5f, 4, 4, 1000f, 0);
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
				{
					iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_445, sLocal_463, 1.5f, -1.5f, 4, 4, 1000f, 0);
				}
			}
			if (!bLocal_472)
			{
				if (__LIB_11__::func_720(func_329()))
				{
					if ((MISC::IS_BULLET_IN_ANGLED_AREA(1733.2906f, -1628.8595f, 112.83256f, 1732.5906f, -1621.2792f, 111.42625f, 9.5f, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_329(), func_205(), true)) || FIRE::IS_ENTITY_ON_FIRE(func_329()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						CAM::SET_CAM_ACTIVE(iLocal_216, true);
						iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_446, sLocal_466, 8f, -4f, 4, 4, 1000f, 0);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_216, iLocal_485, "cam_trevor_death_reaction_pt", cLocal_446);
						CAM::SET_CAM_ACTIVE(iLocal_216, true);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_329(), "burning_1", 0);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_447, sLocal_454, 1000f, -1.5f, 4, 4, 1000f, 0);
						iLocal_486 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_447, sLocal_459, 1.5f, -1.5f, 4, 4, 1000f, 0);
						bLocal_473 = true;
						__LIB_0__::func_498(846);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
						iLocal_1931 = 2;
					}
				}
				else
				{
					CAM::SET_CAM_ACTIVE(iLocal_216, true);
					iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_446, sLocal_466, 8f, -4f, 4, 4, 1000f, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_216, iLocal_485, "cam_trevor_death_reaction_pt", cLocal_446);
					CAM::SET_CAM_ACTIVE(iLocal_216, true);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_329(), "burning_1", 0);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_447, sLocal_454, 1000f, -1.5f, 4, 4, 1000f, 0);
					iLocal_486 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_447, sLocal_459, 1.5f, -1.5f, 4, 4, 1000f, 0);
					bLocal_473 = true;
					iLocal_1931 = 2;
				}
				if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1733.2416f, -1625.5629f, 111.4323f, 4.5f) > 0)
				{
					CAM::SET_CAM_ACTIVE(iLocal_216, true);
					iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_446, sLocal_466, 8f, -4f, 4, 4, 1000f, 0);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_216, iLocal_485, "cam_trevor_death_reaction_pt", cLocal_446);
					CAM::SET_CAM_ACTIVE(iLocal_216, true);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_329(), "burning_1", 0);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_447, sLocal_454, 1000f, -1.5f, 4, 4, 1000f, 0);
					iLocal_486 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_447, sLocal_459, 1000f, -1.5f, 4, 4, 1000f, 0);
					bLocal_473 = true;
					iLocal_1931 = 2;
				}
				if (__LIB_11__::func_720(Local_227[0 /*2*/]))
				{
					if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1726.7452f, -1622.9529f, 111.46024f, 1f) > 0)
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_227[0 /*2*/], true);
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Local_227[0 /*2*/]))
					{
						FIRE::STOP_ENTITY_FIRE(Local_227[0 /*2*/]);
					}
				}
				if (__LIB_11__::func_720(iLocal_218))
				{
					if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1726.7452f, -1622.9529f, 111.46024f, 1f) > 0)
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_218, true);
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_218))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_218);
					}
				}
			}
			break;
		case 2:
			__LIB_0__::func_686(1, 0, 1, 0);
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1726.7452f, -1622.9529f, 111.46024f, 1f) > 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(1726.7452f, -1622.9529f, 111.46024f, 1f);
			}
			if (__LIB_11__::func_720(Local_227[0 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_227[0 /*2*/], false);
			}
			if (__LIB_11__::func_720(iLocal_218))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_218, false);
			}
			if (iLocal_213 == 0)
			{
				if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fin_fire_petrol_trev", 1734f, -1624.4f, 111.5f, 0f, 0f, 0f, 1f, false, false, false))
				{
					iLocal_213 = 1;
				}
			}
			if (iLocal_208 == 0)
			{
				if (iLocal_207 == 1)
				{
					AUDIO::STOP_SOUND(iLocal_1939);
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_208 = 1;
				}
			}
			FIRE::START_SCRIPT_FIRE(1734.2888f, -1623.5968f, 111.42353f, 5, true);
			FIRE::START_SCRIPT_FIRE(1733.27f, -1624.4629f, 111.42641f, 5, true);
			FIRE::START_SCRIPT_FIRE(1735.6486f, -1625.7119f, 111.42559f, 5, true);
			FIRE::START_SCRIPT_FIRE(1732.4214f, -1625.2926f, 111.43035f, 5, true);
			FIRE::START_SCRIPT_FIRE(1733.4426f, -1625.8827f, 111.42981f, 5, true);
			FIRE::START_SCRIPT_FIRE(1732.5996f, -1626.6593f, 111.4341f, 5, true);
			FIRE::START_SCRIPT_FIRE(1733.0299f, -1627.7772f, 111.43572f, 5, true);
			FIRE::START_SCRIPT_FIRE(1731.666f, -1626.0797f, 111.43691f, 5, true);
			FIRE::START_SCRIPT_FIRE(1734.2781f, -1623.7925f, 111.42362f, 5, true);
			if (__LIB_11__::func_720(func_329()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_329(), false);
				ENTITY::SET_ENTITY_PROOFS(func_329(), true, false, false, true, true, false, false, false);
				FIRE::START_ENTITY_FIRE(func_329());
				__LIB_0__::func_203(&uLocal_276, 1, func_329(), "Trevor", 0, 1);
			}
			if (__LIB_11__::func_720(Local_227[1 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_227[1 /*2*/], true);
			}
			HUD::CLEAR_PRINTS();
			if (HUD::DOES_BLIP_EXIST(iLocal_443))
			{
				HUD::REMOVE_BLIP(&iLocal_443);
			}
			func_208(4);
			AUDIO::STOP_AUDIO_SCENES();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_TREVOR_DIES_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_1_TREVOR_DIES_SCENE");
			}
			iLocal_494 = MISC::GET_GAME_TIMER();
			iLocal_474 = 1;
			iLocal_507 = MISC::GET_GAME_TIMER();
			iLocal_1931++;
			break;
		case 3:
			if (__LIB_11__::func_720(func_329()))
			{
				ENTITY::SET_ENTITY_HEALTH(func_329(), 300, 0);
			}
			if (iLocal_208 == 0)
			{
				if (iLocal_207 == 1)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_208 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_494) > 2000)
			{
				if (__LIB_11__::func_720(func_329()) && !FIRE::IS_ENTITY_ON_FIRE(func_329()))
				{
					FIRE::START_ENTITY_FIRE(func_329());
				}
			}
			if (iLocal_474 && (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_486) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_486) >= 0.266f))
			{
				CAM::SET_CAM_ACTIVE(iLocal_216, true);
				CAM::SET_CAM_ACTIVE(iLocal_215, false);
				iLocal_474 = 0;
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
			{
				iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				if (bLocal_472)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_446, sLocal_455, 1000f, -4f, 4, 4, 1000f, 0);
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_447, sLocal_456, 1000f, -1.5f, 4, 4, 1000f, 0);
				}
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_486) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_486) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_486))
			{
				iLocal_486 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				if (bLocal_473)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_447, sLocal_461, 4f, -4f, 4, 4, 1000f, 0);
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_446, sLocal_460, 4f, -4f, 4, 4, 1000f, 0);
				}
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
			{
				iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_446, sLocal_467, 4f, -4f, 32, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_485, true);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(func_329());
				ENTITY::SET_ENTITY_INVINCIBLE(func_329(), false);
				ENTITY::SET_ENTITY_INVINCIBLE(func_205(), true);
				ENTITY::SET_ENTITY_INVINCIBLE(func_203(), true);
				iLocal_1931++;
			}
			break;
		case 4:
			__LIB_0__::func_203(&uLocal_276, 2, func_203(), "Michael", 0, 1);
			__LIB_0__::func_203(&uLocal_276, 0, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
			__LIB_35__::func_536(&uLocal_276, "FIN1AUD", "FIN1_LOVEGAS", 7, 0, 0, 0);
			iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_203(), iLocal_484, cLocal_447, sLocal_457, 4f, -4f, 4, 4, 1000f, 0);
			iLocal_486 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_205(), iLocal_486, cLocal_447, sLocal_462, 4f, -4f, 4, 4, 1000f, 0);
			if (__LIB_11__::func_720(Local_227[0 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Local_227[0 /*2*/], false);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_227[0 /*2*/], 4000f);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_227[0 /*2*/], true);
			}
			if (__LIB_11__::func_720(Local_227[1 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_227[1 /*2*/], false);
			}
			FIRE::ADD_EXPLOSION(1732.5791f, -1628.077f, 111.43906f, 7, 0.5f, true, false, 1f, false);
			iLocal_444 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			CAM::SET_CAM_ACTIVE(iLocal_444, true);
			CAM::PLAY_CAM_ANIM(iLocal_444, "cam_alternate_gas_tanker_explosion_outro", cLocal_447, 1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, false, 2);
			iLocal_494 = MISC::GET_GAME_TIMER();
			iLocal_480 = 0;
			iLocal_1931++;
			break;
		case 5:
			if (iLocal_480 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_494 + 1000)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_fin_env_trev_sky", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 11816, 1f, false, false, false);
					iLocal_480 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 0.8f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FINA_END");
				if (__LIB_11__::func_720(func_329()))
				{
					ENTITY::SET_ENTITY_HEALTH(func_329(), 0, 0);
				}
				iLocal_1931 = 0;
				func_207(4);
			}
			break;
	}
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		func_232(0);
	}
	if (iLocal_207 == 0)
	{
		if (AUDIO::LOAD_STREAM("FINALE_A_KILL_TREVOR_SCENE_MASTER", 0))
		{
			iLocal_207 = 1;
		}
	}
	if (iLocal_1931 <= 2)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_470) > 500)
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 80);
			iLocal_470 = MISC::GET_GAME_TIMER();
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_507) > 1500 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		AUDIO::STOP_STREAM();
		iLocal_1934 = 4;
		iLocal_1935 = 1;
	}
}

int func_207(int iParam0)//Position - 0x140E6
{
	if (iLocal_1929 == 0)
	{
		iLocal_1932 = iParam0;
		iLocal_1929 = 1;
		return 1;
	}
	return 0;
}

void func_208(int iParam0)//Position - 0x14106
{
	switch (iParam0)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_0__::func_294())
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
				STREAMING::REQUEST_IPL("tankerexp_grp0");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankercrash") || !STREAMING::IS_IPL_ACTIVE("tankerexp_grp0"))
				{
					SYSTEM::WAIT(0);
				}
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_0__::func_294())
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
				STREAMING::REQUEST_IPL("tankerexp_grp0");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankercrash") || !STREAMING::IS_IPL_ACTIVE("tankerexp_grp0"))
				{
					SYSTEM::WAIT(0);
				}
			}
			__LIB_11__::func_691(&uLocal_508, 0, "BB_FINALE");
			__LIB_11__::func_689(&uLocal_508, joaat("scrap"));
			__LIB_11__::func_689(&uLocal_508, joaat("S_M_Y_XMech_02"));
			__LIB_11__::func_697(&uLocal_508, "FINA_TRUCK");
			__LIB_11__::func_689(&uLocal_508, joaat("sandking"));
			__LIB_11__::func_689(&uLocal_508, joaat("A_M_M_Salton_01"));
			__LIB_11__::func_697(&uLocal_508, "FINA_SAND");
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_0__::func_294())
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
				STREAMING::REQUEST_IPL("tankerexp_grp0");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankercrash") || !STREAMING::IS_IPL_ACTIVE("tankerexp_grp0"))
				{
					SYSTEM::WAIT(0);
				}
			}
			__LIB_11__::func_691(&uLocal_508, 2, "Finale1");
			__LIB_11__::func_691(&uLocal_508, 3, "Finale1");
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_0__::func_294())
			{
				STREAMING::REQUEST_IPL("DES_tankerexp");
				while (!STREAMING::IS_IPL_ACTIVE("DES_tankerexp"))
				{
					SYSTEM::WAIT(0);
				}
			}
			__LIB_11__::func_695(&uLocal_508, cLocal_445);
			__LIB_11__::func_695(&uLocal_508, cLocal_446);
			__LIB_11__::func_695(&uLocal_508, cLocal_447);
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_0__::func_294())
			{
				STREAMING::REQUEST_IPL("tankerexp_grp2");
				while (!STREAMING::IS_IPL_ACTIVE("tankerexp_grp2"))
				{
					SYSTEM::WAIT(0);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_232(int iParam0)//Position - 0x15287
{
	if (iParam0 != func_203() || func_203() == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_203()))
		{
			if (!PED::IS_PED_INJURED(func_203()))
			{
				func_316("MICHAEL", func_203(), joaat("Player_Zero"), 2);
			}
		}
		else
		{
			func_233(0, "MICHAEL", 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		}
	}
	if (iParam0 != func_329())
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_329()))
		{
			if (!PED::IS_PED_INJURED(func_329()))
			{
				func_316("TREVOR", func_329(), joaat("Player_Two"), 2);
			}
		}
		else
		{
			func_233(2, "Trevor", 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 10, 0, 0, 0);
		}
	}
	if (__LIB_11__::func_720(func_205()) && iParam0 != func_205())
	{
		func_316("FRANKLIN", PLAYER::PLAYER_PED_ID(), joaat("Player_One"), 2);
	}
	func_111(0);
}

void func_233(int iParam0, char* sParam1, int iParam2)//Position - 0x153F6
{
	struct<50> Var0;
	struct<50> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<14> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_43(iParam0))
	{
		return;
	}
	Var0 = { Global_113386.f_2363.f_539[iParam0 /*65*/] };
	Var1 = { Global_113386.f_2363.f_539[iParam0 /*65*/] };
	iVar2 = 0;
	while (iVar2 < 12)
	{
		__LIB_18__::func_216(0, iVar2, &(Var1.f_13[iVar2]), &(Var1[iVar2]), &(Var1.f_26[iVar2]), iParam2, iParam0);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 9)
	{
		__LIB_18__::func_215(0, iVar2, &(Var1.f_39[iVar2]), &(Var1.f_49[iVar2]), iParam2, iParam0);
		iVar2++;
	}
	iVar6 = __LIB_6__::func_757(iParam0);
	iVar7 = 0;
	iVar8 = 0;
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (Var1.f_13[iVar3] != Var0.f_13[iVar3] || Var1[iVar3] != Var0[iVar3])
		{
			if (__LIB_0__::func_211(iVar6, __LIB_0__::func_33(iVar3), Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iParam0], &uVar4))
			{
				Var5 = { __LIB_35__::func_896(iVar6, 2, Var1.f_59, -1) };
				Var1.f_13[2] = Var5.f_3;
				Var1[2] = Var5.f_4;
				iVar7 = 1;
			}
			if (__LIB_0__::func_212(iVar6, __LIB_0__::func_33(iVar3), Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iParam0], &uVar4))
			{
				Var5 = { __LIB_35__::func_896(iVar6, 1, Var1.f_62, -1) };
				Var1.f_13[1] = Var5.f_3;
				Var1[1] = Var5.f_4;
				iVar8 = 1;
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 9)
	{
		if (Var1.f_39[iVar3] != Var0.f_39[iVar3] || Var1.f_49[iVar3] != Var0.f_49[iVar3])
		{
			if (__LIB_0__::func_211(iVar6, 14, Global_113386.f_2363.f_539.f_253[iVar3 /*4*/][iParam0], &uVar4))
			{
				Var5 = { __LIB_35__::func_896(iVar6, 2, Var1.f_59, -1) };
				Var1.f_13[2] = Var5.f_3;
				Var1[2] = Var5.f_4;
				iVar7 = 1;
			}
			if (__LIB_0__::func_212(iVar6, 14, Global_113386.f_2363.f_539.f_253[iVar3 /*4*/][iParam0], &uVar4))
			{
				Var5 = { __LIB_35__::func_896(iVar6, 1, Var1.f_62, -1) };
				Var1.f_13[1] = Var5.f_3;
				Var1[1] = Var5.f_4;
				iVar8 = 1;
			}
		}
		iVar3++;
	}
	if (iVar8 || iVar7)
	{
		iVar9 = Global_113386.f_2363.f_539.f_204[1 /*4*/][iParam0];
		iVar10 = Global_113386.f_2363.f_539.f_204[2 /*4*/][iParam0];
		iVar11 = __LIB_0__::func_24(iVar6, iVar10, iVar9);
		if (iVar11 != -99)
		{
			Var5 = { __LIB_35__::func_896(iVar6, 0, iVar11, -1) };
			Var1.f_13[0] = Var5.f_3;
			Var1[0] = Var5.f_4;
		}
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iVar3, Var1.f_13[iVar3], Var1[iVar3], __LIB_6__::func_757(iParam0));
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 9)
	{
		if (Global_100166[iParam0 /*65*/].f_39[iVar3] == -1 || Global_100166[iParam0 /*65*/].f_39[iVar3] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar3, -1, 0, __LIB_6__::func_757(iParam0));
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar3, Var1.f_39[iVar3], Var1.f_49[iVar3], __LIB_6__::func_757(iParam0));
		}
		iVar3++;
	}
	__LIB_40__::func_995(sParam1, iParam0);
}

void func_316(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F8F4
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_317(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_317(int iParam0, var uParam1, int iParam2)//Position - 0x2F9AF
{
	int iVar0;
	var uVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_24__::func_948(iParam0, &Var2, 0, -1);
	__LIB_24__::func_948(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__::func_211(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_212(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__::func_211(iVar4, 14, __LIB_6__::func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_212(iVar4, 14, __LIB_6__::func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__::func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { __LIB_35__::func_896(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

void func_326()//Position - 0x3005D
{
	switch (iLocal_219)
	{
		case 0:
			iLocal_223 = OBJECT::GET_RAYFIRE_MAP_OBJECT(1725.7545f, -1636.3733f, 117.9358f, 20f, "des_tankerexplosion");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_223))
			{
				iLocal_219++;
			}
			break;
		case 1:
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_223, 4);
			iLocal_219++;
			break;
		case 2:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_223) == 5)
			{
				iLocal_219++;
			}
			break;
		case 3:
			if (iLocal_1931 > 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_223, 6);
				iLocal_219++;
			}
			break;
		case 4:
			if (iLocal_1931 == 5)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 0.16f)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_223, 9);
					iLocal_219++;
				}
			}
			break;
		case 5:
			if (iLocal_205 == 0)
			{
				if (iLocal_1931 == 5)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) >= 0.184f)
					{
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_223))
						{
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_223) == 9)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_223, 10);
								iLocal_205 = 1;
							}
						}
					}
				}
			}
			break;
	}
}

int func_329()//Position - 0x3021E
{
	return Local_228[1 /*2*/];
}

void func_330()//Position - 0x3022C
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	switch (iLocal_1931)
	{
		case 0:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_112(2, "Stage 2: Fuel Crash CutScene", 0, 0, 0, 1);
				STREAMING::REMOVE_IPL("DES_tankerexp");
				STREAMING::REMOVE_IPL("tankerexp_grp1");
				STREAMING::REMOVE_IPL("tankerexp_grp2");
				iLocal_206 = 0;
				iLocal_201 = 0;
				iLocal_203 = 0;
				iLocal_204 = 0;
				iLocal_222 = 0;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_227[1 /*2*/]);
				}
				AUDIO::STOP_AUDIO_SCENES();
				AUDIO::START_AUDIO_SCENE("FIN_1_TREVOR_CRASH_SCENE");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_227[1 /*2*/], 0f);
				func_111(0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_228[1 /*2*/], "Trevor", 0, 0, 3);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michael", 2, __LIB_6__::func_757(0), 3);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Showroom_Car", 2, joaat("premier"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_227[1 /*2*/], "Trevors_car", 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_1931++;
			}
			else if (iLocal_211 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_221 + 5000)
				{
					func_331(0);
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::REQUEST_PTFX_ASSET();
				PED::REQUEST_ACTION_MODE_ASSET("FRANKLIN_ACTION");
				if (!ENTITY::IS_ENTITY_DEAD(Local_227[1 /*2*/], false))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_227[1 /*2*/], 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0), false))
					{
						VEHICLE::SET_VEHICLE_LIGHTS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0)), 2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("Player_Zero"))))
				{
					if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("Player_Zero")), false))
					{
						Local_228[0 /*2*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("Player_Zero")));
					}
				}
				if (iLocal_201 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1772.7411f, -1465.8165f, 111.5278f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 185.4462f);
						iLocal_201 = 1;
					}
				}
				func_208(3);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FINA_NITRO_CRASH");
				AUDIO::STOP_AUDIO_SCENES();
				PED::SET_PED_USING_ACTION_MODE(func_205(), true, -1, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(Local_228[1 /*2*/], 0);
				PED::CLEAR_PED_PROP(Local_228[0 /*2*/], 0);
				PLAYER::REMOVE_PLAYER_HELMET(PLAYER::PLAYER_ID(), true);
				func_109(1, 0, 0, 3000, 0);
				iLocal_477 = 0;
				iLocal_478 = 0;
				iLocal_479 = 0;
				iLocal_483 = 0;
				iLocal_201 = 0;
				iLocal_212 = 0;
				iLocal_214 = 0;
				iLocal_1931++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_214 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 17814)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(12f, 0f, 3);
						iLocal_214 = 1;
					}
				}
				if (iLocal_212 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8308)
					{
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fin_trev_car_impact", 1732.5f, -1628.5f, 112.8f, 0f, 0f, 0f, 1f, false, false, false))
							{
								iLocal_212 = 1;
							}
						}
					}
				}
				if (iLocal_206 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 36635 && CAM::IS_SCREEN_FADED_IN())
					{
						STREAMING::REMOVE_IPL("DES_tankercrash");
						STREAMING::REMOVE_IPL("tankercrash_grp2");
						STREAMING::REMOVE_IPL("tankerexp_grp0");
						STREAMING::REQUEST_IPL("DES_tankerexp");
						iLocal_206 = 1;
					}
				}
				if (iLocal_203 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8330)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_227[1 /*2*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_227[1 /*2*/], false))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(Local_227[1 /*2*/], 1);
								iLocal_1939 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1939, "FINALE_PETROL_SPILL", 1733f, -1627f, 113f, 0, false, 0, false);
								iLocal_203 = 1;
							}
						}
					}
				}
				if (iLocal_204 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8049)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_218, 1);
								iLocal_204 = 1;
							}
						}
					}
				}
				if (iLocal_201 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8088)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
							{
								ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1732.6128f, -1578.4955f, 111.5987f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 134.9147f);
								iLocal_201 = 1;
							}
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_218))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0)))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0), true, false);
						iLocal_218 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0));
					}
				}
				if (!iLocal_477)
				{
					iLocal_477 = 1;
				}
				if (!iLocal_479)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_329()))
					{
						if (!PED::IS_PED_INJURED(func_329()))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_329(), MISC::GET_HASH_KEY("Trevor_Damage")))
							{
								PED::SET_PED_WETNESS_HEIGHT(func_329(), 1f);
								PED::SET_ENABLE_PED_ENVEFF_SCALE(func_329(), true);
								PED::SET_PED_ENVEFF_COLOR_MODULATOR(func_329(), 73, 51, 99);
								PED::SET_PED_ENVEFF_SCALE(func_329(), 0.6f);
								PED::SET_PED_ENVEFF_CPV_ADD(func_329(), 0.3f);
								PED::APPLY_PED_DAMAGE_PACK(func_329(), "BigHitByVehicle", 0f, 1f);
								iLocal_479 = 1;
							}
						}
					}
				}
				if (!iLocal_478)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_203()))
					{
						if (!PED::IS_PED_INJURED(func_203()))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(func_203(), MISC::GET_HASH_KEY("Michael_Damage")))
							{
								iLocal_478 = 1;
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				PED::SET_PED_USING_ACTION_MODE(func_205(), true, -1, 0);
				PED::FORCE_PED_MOTION_STATE(func_205(), joaat("MotionState_ActionMode_Idle"), false, 1, false);
				bLocal_498 = true;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_329(), iLocal_485, cLocal_445, sLocal_463, 1000f, -4f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_329(), false, false);
				iLocal_499 = 1;
				RECORDING::REPLAY_STOP_EVENT();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_228[0 /*2*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_228[0 /*2*/], iLocal_441);
				PED::SET_PED_ACCURACY(Local_228[0 /*2*/], 100);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_228[0 /*2*/], 27, true);
				AUDIO::STOP_PED_SPEAKING(Local_228[0 /*2*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_228[0 /*2*/], 208, true);
				iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(1736.295f, -1619.891f, 111.29f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_228[0 /*2*/], iLocal_484, cLocal_445, sLocal_448, 1.5f, -4f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_228[0 /*2*/], false, false);
				iLocal_502 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Showroom_Car", 0))
			{
				if (iLocal_204 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_218, false))
						{
							VEHICLE::SET_VEHICLE_LIGHTS(iLocal_218, 1);
							ENTITY::SET_ENTITY_PROOFS(iLocal_218, false, true, true, false, false, true, false, false);
							iLocal_204 = 1;
						}
					}
				}
				iLocal_501 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (iLocal_203 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_227[1 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_227[1 /*2*/], false))
						{
							VEHICLE::SET_VEHICLE_LIGHTS(Local_227[1 /*2*/], 1);
							iLocal_203 = 1;
						}
					}
				}
				iLocal_500 = 1;
			}
			if ((((bLocal_498 && iLocal_500) && iLocal_499) && iLocal_501) && iLocal_502)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_227[0 /*2*/], false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_227[0 /*2*/], false);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_506 = 0;
				if (iLocal_201 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1728.3752f, -1610.3052f, 111.4705f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 160.3058f);
					iLocal_201 = 1;
				}
				if (__LIB_11__::func_720(func_329()))
				{
					PED::SET_PED_WETNESS_HEIGHT(func_329(), 1f);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_222 = 1;
					while (iLocal_222 == 1)
					{
						switch (iLocal_220)
						{
							case 0:
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_224 = OBJECT::GET_RAYFIRE_MAP_OBJECT(1725.7545f, -1636.3733f, 117.9358f, 20f, "DES_tankercrash");
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_224))
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_224, 9);
									iLocal_220++;
								}
								else
								{
									iLocal_220++;
								}
								break;
							case 1:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_224))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_224) == 10)
									{
										iLocal_220++;
									}
									else if (SYSTEM::TIMERB() > 10000)
									{
										iLocal_220++;
									}
								}
								else
								{
									iLocal_220++;
								}
								break;
							case 2:
								STREAMING::REMOVE_IPL("DES_tankercrash");
								STREAMING::REMOVE_IPL("tankerexp_grp0");
								STREAMING::REMOVE_IPL("tankercrash_grp1");
								STREAMING::REMOVE_IPL("tankercrash_grp2");
								STREAMING::REQUEST_IPL("DES_tankerexp");
								while (!STREAMING::IS_IPL_ACTIVE("DES_tankerexp"))
								{
									SYSTEM::WAIT(0);
								}
								iLocal_220++;
								break;
							case 3:
								if (SYSTEM::TIMERB() > 5000)
								{
									iLocal_222 = 0;
								}
								break;
						}
						SYSTEM::WAIT(0);
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						if (SYSTEM::TIMERB() > 10000)
						{
							iLocal_222 = 0;
						}
					}
				}
				iLocal_1931 = 3;
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_227[0 /*2*/], false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_227[0 /*2*/], false);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_506 = 0;
				if (iLocal_201 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1728.3752f, -1610.3052f, 111.4705f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 160.3058f);
					iLocal_201 = 1;
				}
				if (__LIB_11__::func_720(func_329()))
				{
					PED::SET_PED_WETNESS_HEIGHT(func_329(), 1f);
				}
				iLocal_1931 = 3;
			}
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_494 = MISC::GET_GAME_TIMER();
			iLocal_1931 = 0;
			func_207(3);
			break;
	}
	if (iLocal_1931 > 1)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > 15019)
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_329()))
				{
					PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(func_329());
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(func_329()))
		{
			PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(func_329());
		}
	}
}

void func_331(int iParam0)//Position - 0x30BCB
{
	char* sVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "FIN1_FAIL1";
			break;
		case 1:
			sVar0 = "FIN1_FAIL2";
			break;
		case 2:
			sVar0 = "CMN_MDIED" /* GXT: ~s~Michael died. */;
			break;
		default:
			sVar0 = "FIN1_FAILDF";
			break;
	}
	func_333(sVar0);
	while (!__LIB_0__::func_204())
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		}
		SYSTEM::WAIT(0);
	}
	func_804();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_333(char* sParam0)//Position - 0x30C79
{
	__LIB_0__::func_324(sParam0);
	func_334(0);
}

void func_334(int iParam0)//Position - 0x30C8C
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		if (!func_335(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_335(int iParam0)//Position - 0x30CD1
{
	int iVar0;
	int iVar1;
	__LIB_26__::func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_336(&(Global_113386.f_2363.f_539), iVar1);
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

void func_336(var uParam0, int iParam1)//Position - 0x30DE1
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
			if (!func_338(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_338(int iParam0, var uParam1, float fParam2)//Position - 0x30FB5
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
			return func_338(8, uParam1, fParam2);
			break;
		case 10:
			return func_338(8, uParam1, fParam2);
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

void func_342()//Position - 0x31A91
{
	switch (iLocal_1931)
	{
		case 0:
			func_112(1, "Stage 1: Chase Trevor", 0, 0, 0, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::TRIGGER_MUSIC_EVENT("FINA_CHASE");
			iLocal_202 = 0;
			iLocal_209 = 0;
			iLocal_210 = 0;
			iLocal_211 = 0;
			iLocal_198 = 0;
			if (__LIB_0__::func_294() && iLocal_1937)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_227[1 /*2*/]);
				}
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(0, "BB_FINALE");
					while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "BB_FINALE"))
					{
						SYSTEM::WAIT(0);
					}
					func_431("BB_FINALE", 0, 1, 1);
					SYSTEM::WAIT(0);
					func_430();
					SYSTEM::WAIT(0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_227[1 /*2*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[1 /*2*/], false))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_227[1 /*2*/], 0, "BB_FINALE", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_227[1 /*2*/], 5000f);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_227[2 /*2*/], 5f);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_227[2 /*2*/], 25f);
					}
				}
				iLocal_1937 = 0;
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(0, "BB_FINALE");
				while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "BB_FINALE"))
				{
					SYSTEM::WAIT(0);
				}
				func_431("BB_FINALE", 0, 1, 1);
				SYSTEM::WAIT(0);
				func_430();
				SYSTEM::WAIT(0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_227[1 /*2*/], 0, "BB_FINALE", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_227[1 /*2*/], 5000f);
			}
			if (__LIB_11__::func_720(func_329()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_329(), true);
			}
			Local_227[1 /*2*/].f_1 = __LIB_6__::func_825(Local_227[1 /*2*/], 1, 0);
			__LIB_0__::func_210("FIN1_CHASE", 7500, 1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_CHASE_IN_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_1_CHASE_IN_CAR");
			}
			__LIB_0__::func_203(&uLocal_276, 0, 0, "Michael", 0, 1);
			__LIB_0__::func_203(&uLocal_276, 1, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
			__LIB_9__::func_485(20, 1);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_227[1 /*2*/], "FIN_1_TREVORS_TRUCK", 0f);
			TASK::CLEAR_PED_TASKS(Local_228[1 /*2*/]);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_227[2 /*2*/], true);
			iLocal_497 = 0;
			iLocal_495 = MISC::GET_GAME_TIMER();
			iLocal_1931++;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
				__LIB_0__::func_210("FIN1_CHASE", 7000, 1);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(func_205(), true) && (MISC::GET_GAME_TIMER() - iLocal_495) > 500)
			{
				iLocal_491 = 0;
				iLocal_492 = 0;
				iLocal_493 = 0;
				iLocal_1938 = 1;
				func_112(1, "Stage 1: Chase Trevor", 0, 0, 0, 1);
				iLocal_1931++;
			}
			break;
		case 2:
			if (iLocal_1938)
			{
				if (__LIB_0__::func_529(func_329(), 1770f, -1474.3f, 113f, 1) < 300f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					func_208(2);
					CUTSCENE::REQUEST_CUTSCENE("FIN_A_MCS_1", 8);
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(1734.5f, -1635.1f, 113f, 100f, 1);
					iLocal_1938 = 0;
				}
			}
			if (!iLocal_491)
			{
				if (__LIB_0__::func_529(func_329(), 1551.7487f, -2200.6392f, 76.5152f, 1) < 100f)
				{
					ENTITY::CREATE_FORCED_OBJECT(1551.7487f, -2200.6392f, 76.5152f, 10f, joaat("prop_fnclink_02p"), true);
					iLocal_491 = 1;
				}
			}
			if (!iLocal_492)
			{
				if (__LIB_0__::func_529(func_205(), 1516.7759f, -2105.4739f, 75.6526f, 1) < 200f)
				{
					Local_227[4 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("scrap"), 1519.6091f, -2103.726f, 75.7564f, 278.7516f, true, true, false);
					Local_228[3 /*2*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_227[4 /*2*/], 26, joaat("S_M_Y_XMech_02"), -1, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_228[3 /*2*/], true);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_228[3 /*2*/], Local_227[4 /*2*/], "FINA_TRUCK", 262144, 0, 10, -1, -1f, false, 2f);
					__LIB_20__::func_611(&uLocal_508, joaat("scrap"));
					__LIB_20__::func_611(&uLocal_508, joaat("S_M_Y_XMech_02"));
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 3);
					iLocal_492 = 1;
				}
			}
			if (!iLocal_493)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_205(), 1742.7119f, -1321.2657f, 90.47571f, 25f, 25f, 20f, false, true, 0))
				{
					__LIB_0__::func_124(&(Local_228[3 /*2*/]), 1, 0, 1);
					__LIB_0__::func_106(&(Local_227[4 /*2*/]));
					Local_227[5 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1763.2584f, -1437.4216f, 111.4945f, 48.2981f, true, true, false);
					Local_228[4 /*2*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_227[5 /*2*/], 26, joaat("A_M_M_Salton_01"), -1, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_228[4 /*2*/], true);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_228[4 /*2*/], Local_227[5 /*2*/], "FINA_SAND", 786469, 0, 8, -1, -1f, false, 2f);
					__LIB_20__::func_611(&uLocal_508, joaat("sandking"));
					__LIB_20__::func_611(&uLocal_508, joaat("A_M_M_Salton_01"));
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 3);
					iLocal_493 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_227[1 /*2*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[1 /*2*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) < 26000f)
						{
							STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(1284.9f, -2114.2f, 45.8f);
						}
					}
				}
			}
			if (iLocal_202 == 0)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 147292f)
					{
						__LIB_0__::func_203(&uLocal_276, 0, 0, "Michael", 0, 1);
						__LIB_0__::func_203(&uLocal_276, 1, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
						if (__LIB_35__::func_540(&uLocal_276, 0, "FIN1AUD", "MIKE_PHONE", 7, 0, 0, 1))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 3);
							iLocal_202 = 1;
						}
					}
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 172930f)
				{
					__LIB_0__::func_124(&(Local_228[4 /*2*/]), 1, 0, 1);
					__LIB_0__::func_106(&(Local_227[5 /*2*/]));
					iLocal_1931++;
				}
			}
			break;
		case 3:
			if (fLocal_490 > 250f)
			{
				func_331(0);
			}
			iLocal_1931++;
			break;
		case 4:
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			__LIB_9__::func_981(&uLocal_229, 0, 0);
			if (__LIB_0__::func_77(0))
			{
				__LIB_8__::func_770(1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_227[1 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_227[1 /*2*/].f_1));
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (iLocal_211 == 0)
			{
				iLocal_221 = MISC::GET_GAME_TIMER();
				iLocal_211 = 1;
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 3);
			iLocal_1931 = 0;
			func_207(2);
			break;
	}
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		func_232(0);
	}
	__LIB_20__::func_768(joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	if (ENTITY::DOES_ENTITY_EXIST(Local_227[1 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
		{
			if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) < 25000f)
				{
					func_415(Local_227[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_488, 1f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) < 111000f)
				{
					func_415(Local_227[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_488, 1.1f, 40f, 50f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 111000f)
				{
					func_415(Local_227[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_488, 1.1f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
			}
			else
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) < 25000f)
				{
					func_415(Local_227[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_488, 1.5f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) < 111000f)
				{
					func_415(Local_227[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_488, 1.5f, 40f, 50f, 100f, 1.7f, 1f, 0.7f, 0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 111000f)
				{
					func_415(Local_227[1 /*2*/], PLAYER::PLAYER_PED_ID(), &fLocal_488, 1.5f, 25f, 35f, 100f, 1.7f, 1f, 0.7f, 0);
				}
			}
			func_375(Local_227[1 /*2*/], fLocal_488);
			func_374();
		}
		ENTITY::SET_ENTITY_INVINCIBLE(Local_227[1 /*2*/], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_227[0 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[0 /*2*/]))
		{
			VEHICLE::SET_PLAYBACK_SPEED(Local_227[0 /*2*/], fLocal_488);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_205()) && ENTITY::DOES_ENTITY_EXIST(Local_228[1 /*2*/]))
	{
		if (!PED::IS_PED_INJURED(func_205()) && !PED::IS_PED_INJURED(Local_228[1 /*2*/]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_227[1 /*2*/]))
			{
				fLocal_490 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_205(), true), ENTITY::GET_ENTITY_COORDS(Local_228[1 /*2*/], true));
				if (fLocal_489 > 21000f && fLocal_490 > 300f)
				{
					func_331(0);
				}
				else if (fLocal_489 < 21000f && fLocal_490 > 350f)
				{
					func_331(0);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) < 140000f)
				{
					if (iLocal_497 == 0 && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 10000f)
					{
						__LIB_0__::func_203(&uLocal_276, 0, func_205(), "FRANKLIN", 0, 1);
						__LIB_0__::func_203(&uLocal_276, 1, Local_228[1 /*2*/], "TREVOR", 0, 1);
						if (__LIB_35__::func_536(&uLocal_276, "FIN1AUD", "FIN1_CHS", 7, 0, 0, 0))
						{
							iLocal_198 = MISC::GET_GAME_TIMER();
							iLocal_209 = 1;
							iLocal_497 = 1;
						}
					}
					if ((iLocal_497 == 1 && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_227[1 /*2*/]) > 15000f) && __LIB_0__::func_76(func_205(), Local_228[1 /*2*/], 1) < 60f)
					{
						if (iLocal_209 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_198 + 8000)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										__LIB_0__::func_203(&uLocal_276, 0, func_205(), "FRANKLIN", 0, 1);
										__LIB_0__::func_203(&uLocal_276, 1, Local_228[1 /*2*/], "TREVOR", 0, 1);
										if (__LIB_35__::func_536(&uLocal_276, "FIN1AUD", "FIN1_CALL", 7, 0, 0, 0))
										{
											iLocal_198 = MISC::GET_GAME_TIMER();
											iLocal_210 = 1;
											iLocal_209 = 0;
										}
									}
								}
							}
						}
						if (iLocal_210 == 1)
						{
							if (__LIB_0__::func_76(func_205(), Local_228[1 /*2*/], 1) < 40f)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_198 + 8000)
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											__LIB_0__::func_203(&uLocal_276, 0, func_205(), "FRANKLIN", 0, 1);
											__LIB_0__::func_203(&uLocal_276, 1, Local_228[1 /*2*/], "TREVOR", 0, 1);
											if (__LIB_35__::func_536(&uLocal_276, "FIN1AUD", "FIN1_CALLBCK", 7, 0, 0, 0))
											{
												iLocal_198 = MISC::GET_GAME_TIMER();
												iLocal_209 = 1;
												iLocal_210 = 0;
											}
										}
									}
								}
							}
							else
							{
								iLocal_198 = MISC::GET_GAME_TIMER();
								iLocal_209 = 1;
								iLocal_210 = 0;
							}
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
		{
			func_331(1);
		}
	}
	__LIB_39__::func_909(&uLocal_229, Local_227[1 /*2*/], 0, 0, 1, 1, 1);
	__LIB_10__::func_618(Local_227[1 /*2*/].f_1, Local_227[1 /*2*/], 350f, 1061158912, 0);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("FIN_1_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_1_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_1_FOCUS_CAM");
	}
}

void func_374()//Position - 0x3385A
{
	iLocal_63 = 1;
}

void func_375(int iParam0, float fParam1)//Position - 0x33865
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_80 = false;
	if (!bLocal_62)
	{
		if (bLocal_61)
		{
			__LIB_11__::func_121();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_62 = true;
		}
	}
	else if (!bLocal_61)
	{
		__LIB_11__::func_126();
		bLocal_62 = false;
	}
	if (bLocal_61)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_55)
	{
		if (iLocal_50)
		{
			fLocal_107 = 0f;
		}
		else
		{
			fLocal_107 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_11__::func_140(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_60 = 1;
					}
					else
					{
						iLocal_60 = 0;
					}
				}
				fLocal_104 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_105) * fLocal_107));
				if (bLocal_59)
				{
					func_411(iParam0, fLocal_104);
					func_410(iParam0, fLocal_114);
					if (fLocal_109 > 1000f)
					{
						if (iLocal_146 == 0)
						{
							func_409(iParam0, fLocal_114);
						}
						fVar0 = ((fLocal_104 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_146) * 2000f));
						func_408(iParam0, fVar0, fLocal_108);
						iLocal_146++;
						if (iLocal_146 > 2)
						{
							fLocal_109 = 0f;
						}
					}
					else
					{
						iLocal_146 = 0;
						fLocal_109 = (fLocal_109 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_104 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_67)
		{
			if (!iLocal_49)
			{
				func_404(iParam0, ((fParam1 * fLocal_105) * fLocal_107), 0);
				if (!iLocal_70)
				{
				}
				iLocal_70 = 0;
			}
			if (bLocal_52)
			{
				func_400(iParam0);
			}
			if (!iLocal_49)
			{
				func_383(iParam0, ((fParam1 * fLocal_105) * fLocal_107), 0);
			}
		}
		if (iLocal_57)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_184 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_150 = { ENTITY::GET_ENTITY_COORDS(iLocal_184, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_184, &fLocal_88, &fLocal_89, &fLocal_90, &fLocal_91);
				}
			}
			iLocal_57 = 0;
		}
		if (iLocal_56)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_184))
			{
				__LIB_11__::func_122(iLocal_185);
				iLocal_185 = iLocal_184;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_185, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_185, Local_150, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_185, fLocal_88, fLocal_89, fLocal_90, fLocal_91);
			}
			fLocal_103 = fLocal_106;
			iLocal_49 = 1;
			iLocal_56 = 0;
		}
		if (iLocal_49)
		{
			while (!func_376(&iParam0, fLocal_103))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_50 = 1;
		}
		if (iLocal_63)
		{
			iLocal_63 = 0;
		}
	}
}

int func_376(int iParam0, float fParam1)//Position - 0x33B00
{
	if (!iLocal_64)
	{
		iLocal_49 = 1;
		func_378();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_133 == -1)
			{
				while (!func_377(iParam0, iLocal_133, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_54)
				{
					iLocal_50 = 1;
					fLocal_107 = 0f;
					iLocal_134 = 0;
					iLocal_136 = 0;
					iLocal_135 = 0;
					iLocal_130 = 0;
					iLocal_131 = 0;
					iLocal_132 = 0;
					iLocal_137 = 0;
					iLocal_138 = 0;
					iLocal_139 = 0;
				}
			}
		}
		iLocal_64 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_105) * fLocal_107));
				func_377(iParam0, iLocal_133, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_104 = fParam1;
		iLocal_140 = 0;
		iLocal_143 = 0;
		fLocal_119 = 0f;
		fLocal_118 = 0f;
		func_383(*iParam0, ((1f * fLocal_105) * fLocal_107), 1);
		func_404(*iParam0, ((1f * fLocal_105) * fLocal_107), 1);
		func_400(*iParam0);
		if ((iLocal_137 == 0 && iLocal_138 == 0) && iLocal_139 == 0)
		{
			iLocal_50 = 0;
			iLocal_49 = 0;
			iLocal_64 = 0;
			return 1;
		}
	}
	return 0;
}

int func_377(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x33C32
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_163);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_163))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_163, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_141 && iParam1 != iLocal_142)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_163, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_163, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_163, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_163, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_163))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_163);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_163, 10f, 786603);
					}
					else if (iParam1 != iLocal_141 && iParam1 != iLocal_142)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_163, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_163, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_163, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_163, true);
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

void func_378()//Position - 0x33E18
{
	func_381();
	func_380();
	func_379();
}

void func_379()//Position - 0x33E2C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_182[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_182[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_182[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_182[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_182[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_182[iVar0]));
			}
		}
		iLocal_127[iVar0] = 0;
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_126[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_163);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_175[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_175[iVar0]);
		}
		iVar0++;
	}
}

void func_380()//Position - 0x33F23
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_181[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_181[iVar0]));
			}
		}
		iLocal_129[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
	iLocal_135 = 0;
	iLocal_132 = 0;
}

void func_381()//Position - 0x33FA0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_179[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_179[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_179[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_179[iVar0]));
			}
		}
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_123[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_123[iVar0], &cLocal_163);
			}
		}
		iLocal_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_173[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
		}
		iVar0++;
	}
	iLocal_134 = 0;
	iLocal_130 = 0;
}

void func_383(int iParam0, float fParam1, bool bParam2)//Position - 0x340B8
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
		iVar0 = iLocal_136;
		while (iVar0 < 25)
		{
			if (iLocal_127[iVar0] != 99)
			{
				if (iLocal_127[iVar0] == 0)
				{
					if (iLocal_126[iVar0] > 0)
					{
						if (!iLocal_49)
						{
							if (fLocal_104 > (fLocal_96[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_11__::func_110(iLocal_175[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_128[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_175[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_128[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_128[iVar0]), 1);
								iLocal_127[iVar0]++;
								iLocal_138++;
							}
						}
						else
						{
							fVar6 = (fLocal_104 - fLocal_96[iVar0]);
							fVar6 = (fVar6 * uLocal_97[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_398(iLocal_126[iVar0]))
								{
									if (__LIB_11__::func_110(iLocal_175[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_128[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_175[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_128[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_128[iVar0]), 1);
									iLocal_127[iVar0]++;
									iLocal_138++;
								}
								else
								{
									iLocal_127[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_127[iVar0] = 99;
					}
				}
				else if (iLocal_127[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_163);
					if (BitTest(iLocal_128[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123());
					}
					else if (!bLocal_76 && ((!BitTest(iLocal_128[iVar0], 2) && bVar10) || (BitTest(iLocal_128[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_396());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_396());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_175[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_175[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_126[iVar0], &cLocal_163))
							{
								if (fLocal_104 >= (fLocal_96[iVar0] - (fLocal_117 * fParam1)))
								{
									if ((iLocal_63 || bParam2) || (!bLocal_80 && !func_395(Local_149[iVar0 /*3*/], Var5, 5f, fLocal_115)))
									{
										if (bLocal_59)
										{
											func_394(Local_149[iVar0 /*3*/], Var5, fLocal_108);
										}
										iLocal_182[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_175[iVar0], Local_149[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_175[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_182[iVar0], 0);
										}
										if (uLocal_72 && !BitTest(iLocal_128[iVar0], 0))
										{
											func_393(iLocal_182[iVar0]);
										}
										if (BitTest(iLocal_128[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_182[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_182[iVar0], Local_149[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_182[iVar0], fLocal_92[iVar0], fLocal_93[iVar0], fLocal_94[iVar0], fLocal_95[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_175[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_175[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_182[iVar0], 5f);
										}
										if (!BitTest(iLocal_128[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_182[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_182[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_182[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_175[iVar0]);
										iLocal_138 = (iLocal_138 - 1);
										iLocal_127[iVar0]++;
										bLocal_80 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_182[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_182[iVar0], Local_149[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_182[iVar0], fLocal_92[iVar0], fLocal_93[iVar0], fLocal_94[iVar0], fLocal_95[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_175[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_175[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_182[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_182[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_175[iVar0]);
							iLocal_138 = (iLocal_138 - 1);
							iLocal_127[iVar0]++;
						}
					}
				}
				else if (iLocal_127[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_163);
					if (!BitTest(iLocal_128[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_128[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123());
							iVar13 = 2;
						}
						else if (!bLocal_76 && ((!BitTest(iLocal_128[iVar0], 2) && bVar10) || (BitTest(iLocal_128[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_396());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_396());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_182[iVar0], false))
						{
							if (!bLocal_80 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_182[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_182[iVar0], true), Var5) < 10000f || bParam2) || iLocal_63)
									{
										func_391(&(iLocal_182[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_128[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
					{
						if (fLocal_104 >= fLocal_96[iVar0])
						{
							if (4 > iLocal_131)
							{
								fVar6 = (fLocal_104 - fLocal_96[iVar0]);
								fVar6 = (fVar6 * uLocal_97[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_126[iVar0], &cLocal_163))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_163))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_182[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_126[iVar0], fVar6, &cLocal_163) };
										if (((!func_395(Var3, Var5, 5f, fLocal_115) && func_395(Var4, Var5, 5f, fLocal_115)) && !iLocal_63) && !bParam2)
										{
											if (!BitTest(iLocal_128[iVar0], 1))
											{
												func_391(&(iLocal_182[iVar0]), iVar13, 1);
											}
											iLocal_131++;
											iLocal_127[iVar0]++;
										}
										else if (((!bLocal_80 || BitTest(iLocal_128[iVar0], 1)) || iLocal_63) || bParam2)
										{
											if (func_377(&(iLocal_182[iVar0]), iLocal_126[iVar0], fVar6, 1, 0, 0, bLocal_78, bLocal_77))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_182[iVar0], (fParam1 * uLocal_97[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
												{
													if (BitTest(iLocal_128[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_182[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_182[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_182[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_175[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_182[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_128[iVar0], 1))
												{
													func_391(&(iLocal_182[iVar0]), iVar13, 1);
												}
												iLocal_131++;
												iLocal_127[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_128[iVar0], 1))
										{
											func_391(&(iLocal_182[iVar0]), iVar13, 1);
										}
										iLocal_131++;
										iLocal_127[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_128[iVar0], 1))
								{
									func_391(&(iLocal_182[iVar0]), iVar13, 1);
								}
								iLocal_131++;
								iLocal_127[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_128[iVar0], 1))
						{
							func_391(&(iLocal_182[iVar0]), iVar13, 1);
						}
						iLocal_131++;
						iLocal_127[iVar0]++;
					}
				}
				else if (iLocal_127[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_182[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_182[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_53 && !iLocal_50) && !bLocal_69) && (((!bLocal_78 && !bLocal_77) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_182[iVar0])) || func_390(iLocal_182[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_71)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_182[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_11__::func_138(iLocal_182[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_20__::func_444(iVar2, iLocal_182[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_386(iLocal_182[iVar0]);
												iLocal_127[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_182[iVar0], (fParam1 * uLocal_97[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_182[iVar0]);
							}
						}
						else
						{
							iLocal_127[iVar0]++;
						}
					}
					else
					{
						iLocal_127[iVar0]++;
					}
				}
				else if (iLocal_127[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_182[iVar0]))
						{
							iLocal_127[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_182[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_182[iVar0], (fParam1 * uLocal_97[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_182[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_126[iVar0], &cLocal_163))
							{
								if (fLocal_104 > (fLocal_96[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_163)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_182[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_182[iVar0]);
							}
						}
					}
					else
					{
						iLocal_127[iVar0]++;
					}
				}
				else if (iLocal_127[iVar0] == 5)
				{
					if (!iLocal_182[iVar0] == iLocal_186)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_182[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_182[iVar0]);
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
						if (!bLocal_61 && !bLocal_74)
						{
							if (iLocal_126[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_163);
							}
						}
						if (!bLocal_51)
						{
							if (!bLocal_79)
							{
								__LIB_11__::func_122(iLocal_182[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_182[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_182[iVar0]));
						}
					}
					iLocal_131 = (iLocal_131 - 1);
					iLocal_127[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_136 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_384();
	}
}

void func_384()//Position - 0x34C95
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_182[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_182[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_182[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_182[iVar0]);
				}
			}
			__LIB_12__::func_97(iLocal_182[iVar0]);
			__LIB_11__::func_122(iLocal_182[iVar0]);
		}
		iLocal_127[iVar0] = 0;
		iLocal_128[iVar0] = 0;
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_126[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_163);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_175[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_175[iVar0]);
		}
		iVar0++;
	}
	iLocal_136 = 0;
}

void func_386(int iParam0)//Position - 0x34DFC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		__LIB_12__::func_97(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_390(int iParam0)//Position - 0x34F5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_75)
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

int func_391(var uParam0, int iParam1, bool bParam2)//Position - 0x34FBD
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_11__::func_123(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_172);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_123());
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_396(), -1, false, false);
				if (bLocal_81)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_396());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_82)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_11__::func_109(iVar0);
			bLocal_80 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_393(int iParam0)//Position - 0x350CB
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_177 >= -1 && iLocal_178 >= -1)
	{
		while (iVar0 == iLocal_177 || iVar0 == iLocal_178)
		{
			iVar0++;
		}
	}
	else if (iLocal_177 >= -1)
	{
		if (iVar0 == iLocal_177)
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

void func_394(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x35244
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_62)
	{
		if (!func_395(Param0, Param1, fParam2, 200f))
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

int func_395(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x352B7
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_62)
		{
			if (!iLocal_49)
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

int func_396()//Position - 0x352FE
{
	if (iLocal_176 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_176;
}

float func_398(int iParam0)//Position - 0x35328
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_163);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_163))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_163);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_163);
	return fVar0;
}

void func_400(int iParam0)//Position - 0x353DE
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
		iVar0 = iLocal_135;
		while (iVar0 < 50)
		{
			switch (iLocal_129[iVar0])
			{
				case 0:
					if (!iLocal_174[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_148[iVar0 /*3*/], fLocal_102, fLocal_102, fLocal_102, false, true, 0))
						{
							iLocal_137++;
							iLocal_129[iVar0]++;
						}
					}
					else
					{
						iLocal_129[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_132)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_174[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_174[iVar0]))
							{
								if ((iLocal_49 || iLocal_63) || (!bLocal_80 && !func_395(Local_148[iVar0 /*3*/], Var1, 5f, fLocal_115)))
								{
									if (bLocal_59)
									{
										func_394(Local_148[iVar0 /*3*/], Var1, fLocal_108);
									}
									iLocal_181[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_174[iVar0], Local_148[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_174[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_181[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_181[iVar0], fLocal_98[iVar0], fLocal_99[iVar0], fLocal_100[iVar0], fLocal_101[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_181[iVar0], __LIB_11__::func_124()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_181[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_181[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_181[iVar0], __LIB_11__::func_125()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_181[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_181[iVar0], true);
									iLocal_137 = (iLocal_137 - 1);
									iLocal_132++;
									iLocal_129[iVar0]++;
									bLocal_80 = true;
								}
							}
						}
						else
						{
							iLocal_137 = (iLocal_137 - 1);
							iLocal_132++;
							iLocal_129[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_181[iVar0], true) };
						}
						if (fLocal_116 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_116 * fLocal_116))
						{
							if (!__LIB_20__::func_444(iLocal_181[iVar0], iParam0, 0))
							{
								if (!bLocal_51)
								{
									__LIB_11__::func_122(iLocal_181[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_181[iVar0]));
								}
								iLocal_132 = (iLocal_132 - 1);
								iLocal_129[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_129[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_135 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_401();
	}
}

void func_401()//Position - 0x356D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_181[iVar0], true, false);
			}
			__LIB_11__::func_122(iLocal_181[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
	iLocal_135 = 0;
	iLocal_132 = 0;
}

void func_404(int iParam0, float fParam1, int iParam2)//Position - 0x35773
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
			fLocal_104 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_134;
		while (iVar0 < 150 && !bVar17)
		{
			if (iLocal_124[iVar0] != 99)
			{
				if (iLocal_124[iVar0] == 0)
				{
					if (iLocal_123[iVar0] > 0 && iLocal_173[iVar0] != 0)
					{
						if (!iLocal_49)
						{
							if (fLocal_104 < (fLocal_87[iVar0] + 20000f))
							{
								if (fLocal_104 >= (fLocal_87[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_11__::func_110(iLocal_173[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_125[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_173[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_125[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_125[iVar0]), 1);
									iLocal_139++;
									iLocal_124[iVar0]++;
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
								func_407(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_104 - fLocal_87[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_398(iLocal_123[iVar0]))
								{
									if (__LIB_11__::func_110(iLocal_173[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_125[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_173[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_125[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_125[iVar0]), 1);
									iLocal_139++;
									iLocal_124[iVar0]++;
								}
								else
								{
									func_407(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_407(iVar0, 1090519040);
					}
				}
				else if (iLocal_124[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_123[iVar0], &cLocal_163);
					bVar11 = false;
					if (BitTest(iLocal_125[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_76 && ((!BitTest(iLocal_125[iVar0], 2) && bVar13) || (BitTest(iLocal_125[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_396());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_396());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_179[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_173[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_173[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_123[iVar0], &cLocal_163)) && bVar11)
						{
							if (fLocal_104 >= (fLocal_87[iVar0] - (fLocal_117 * fParam1)))
							{
								if ((iLocal_63 || iParam2) || (!bLocal_80 && !func_395(Local_147[iVar0 /*3*/], Var8, 5f, fLocal_115)))
								{
									if (bLocal_59)
									{
										func_394(Local_147[iVar0 /*3*/], Var8, fLocal_108);
									}
									iLocal_179[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_173[iVar0], Local_147[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_173[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_179[iVar0], 0);
									}
									if (uLocal_72 && !BitTest(iLocal_125[iVar0], 0))
									{
										func_393(iLocal_179[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_179[iVar0], Local_147[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_179[iVar0], fLocal_83[iVar0], fLocal_84[iVar0], fLocal_85[iVar0], fLocal_86[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_173[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_173[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_179[iVar0], 5f);
									}
									if (BitTest(iLocal_125[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_179[iVar0], true);
									}
									if (!BitTest(iLocal_125[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_179[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_179[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_179[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_179[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
									iLocal_139 = (iLocal_139 - 1);
									iLocal_124[iVar0]++;
									bLocal_80 = true;
								}
								else if (fLocal_104 > fLocal_87[iVar0])
								{
									iLocal_139 = (iLocal_139 - 1);
									func_407(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_124[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_145 || iLocal_145 == 0)) || iLocal_63) || iParam2)
					{
						if (!BitTest(iLocal_125[iVar0], 1))
						{
							if (BitTest(iLocal_125[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123());
								iVar15 = 2;
							}
							else if (!bLocal_76 && ((!BitTest(iLocal_125[iVar0], 2) && bVar13) || (BitTest(iLocal_125[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_396());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_396());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_179[iVar0], false))
							{
								if (!bLocal_80 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_179[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_179[iVar0], true), Var8) < 10000f || iParam2) || iLocal_63)
										{
											func_391(&(iLocal_179[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_125[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_123[iVar0], &cLocal_163);
							if (fLocal_104 >= fLocal_87[iVar0])
							{
								if (8 > iLocal_130)
								{
									fVar9 = (fLocal_104 - fLocal_87[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_123[iVar0], &cLocal_163))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_123[iVar0], &cLocal_163))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_179[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_123[iVar0], fVar9, &cLocal_163) };
											if (!func_395(Var6, Var8, 5f, fLocal_115) && func_395(Var7, Var8, 5f, fLocal_115))
											{
												if (!BitTest(iLocal_125[iVar0], 1))
												{
													func_391(&(iLocal_179[iVar0]), iVar15, 0);
												}
												func_407(iVar0, 1090519040);
											}
											else if (((!bLocal_80 || BitTest(iLocal_125[iVar0], 1)) || iLocal_63) || iParam2)
											{
												if (func_377(&(iLocal_179[iVar0]), iLocal_123[iVar0], fVar9, 1, 0, 0, 1, bLocal_77))
												{
													if (!BitTest(iLocal_125[iVar0], 1))
													{
														func_391(&(iLocal_179[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_179[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_179[iVar0], fParam1);
													iLocal_130++;
													iLocal_124[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_125[iVar0], 1))
											{
												func_391(&(iLocal_179[iVar0]), iVar15, 0);
											}
											func_407(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_123[iVar0], &cLocal_163))
									{
										if (!BitTest(iLocal_125[iVar0], 1))
										{
											func_391(&(iLocal_179[iVar0]), iVar15, 0);
										}
										func_407(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_125[iVar0], 1))
									{
										func_391(&(iLocal_179[iVar0]), iVar15, 0);
									}
									func_407(iVar0, 1090519040);
								}
							}
							else if (iLocal_60 && !bLocal_68)
							{
								if (!BitTest(iLocal_125[iVar0], 1))
								{
									func_391(&(iLocal_179[iVar0]), iVar15, 0);
								}
								func_407(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_125[iVar0], 1))
							{
								func_391(&(iLocal_179[iVar0]), iVar15, 0);
							}
							func_407(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_145 = iVar0;
					}
				}
				else if (iLocal_124[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_179[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_179[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_58)
									{
										if ((!bLocal_53 && !iLocal_50) && func_390(iLocal_179[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_144 || iLocal_144 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_11__::func_139(iLocal_179[iVar0], iVar5) || __LIB_20__::func_444(iVar5, iLocal_179[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_144 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_73 && !BitTest(iLocal_125[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_144 || iLocal_144 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_179[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_144 = iVar0;
										}
									}
									if (bVar18)
									{
										func_386(iLocal_179[iVar0]);
										iLocal_124[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_179[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179[iVar0]);
							}
						}
						else
						{
							iLocal_124[iVar0]++;
						}
					}
					else
					{
						iLocal_124[iVar0]++;
					}
				}
				else if (iLocal_124[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_179[iVar0]))
						{
							iLocal_124[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_179[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_179[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_123[iVar0], &cLocal_163))
							{
								if (fLocal_104 > (fLocal_87[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_123[iVar0], &cLocal_163)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179[iVar0]);
							}
						}
					}
					else
					{
						iLocal_124[iVar0]++;
					}
				}
				else if (iLocal_124[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_179[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_179[iVar0]);
					}
					iLocal_130 = (iLocal_130 - 1);
					func_407(iVar0, fVar10);
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
			iLocal_134 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_144 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_145 = 0;
		}
	}
	else
	{
		func_405();
	}
}

void func_405()//Position - 0x362AD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_179[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_179[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_179[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_179[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_179[iVar0]);
				}
			}
			__LIB_12__::func_97(iLocal_179[iVar0]);
			__LIB_11__::func_122(iLocal_179[iVar0]);
		}
		iLocal_124[iVar0] = 0;
		iLocal_125[iVar0] = 0;
		if (!bLocal_61 && !bLocal_74)
		{
			if (iLocal_123[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_123[iVar0], &cLocal_163);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_173[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
		}
		iVar0++;
	}
	iLocal_134 = 0;
	iLocal_130 = 0;
}

void func_407(int iParam0, float fParam1)//Position - 0x363FF
{
	int iVar0;
	if (!iLocal_173[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_179[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_179[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_179[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_179[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_179[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_82)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_51)
	{
		if (!bLocal_79)
		{
			__LIB_11__::func_109(iVar0);
			__LIB_11__::func_122(iLocal_179[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_179[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_179[iParam0]));
		}
	}
	if (!bLocal_61 && !bLocal_74)
	{
		if (iLocal_123[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_123[iParam0], &cLocal_163);
		}
	}
	iLocal_124[iParam0] = 99;
}

void func_408(int iParam0, float fParam1, float fParam2)//Position - 0x3655A
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
			func_394(Var1, Var4, fVar5);
		}
	}
}

void func_409(int iParam0, float fParam1)//Position - 0x365DD
{
	if (!bLocal_62)
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

void func_410(int iParam0, float fParam1)//Position - 0x3662B
{
	if (!bLocal_62)
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

void func_411(int iParam0, float fParam1)//Position - 0x36679
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_118 + 2000f);
		fVar2 = (fLocal_119 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_140 == 0)
				{
					Local_159 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_118) };
					iLocal_140++;
				}
				else if (iLocal_140 == 1)
				{
					Local_160 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_140++;
				}
				else if (!bLocal_80)
				{
					if (Local_159.f_0 > Local_160.f_0)
					{
						fVar3 = Local_159.f_0;
						Local_159.f_0 = Local_160.f_0;
						Local_160.f_0 = fVar3;
					}
					if (Local_159.f_1 > Local_160.f_1)
					{
						fVar3 = Local_159.f_1;
						Local_159.f_1 = Local_160.f_1;
						Local_160.f_1 = fVar3;
					}
					if (Local_159.f_2 > Local_160.f_2)
					{
						fVar3 = Local_159.f_2;
						Local_159.f_2 = Local_160.f_2;
						Local_160.f_2 = fVar3;
					}
					Local_159 = { Local_159 - Vector(fLocal_122, fLocal_122, fLocal_122) };
					Local_160 = { Local_160 + Vector(fLocal_122, fLocal_122, fLocal_122) };
					PATHFIND::SET_ROADS_IN_AREA(Local_159, Local_160, false, false);
					fLocal_118 = fVar1;
					iLocal_140 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_143 == 0)
			{
				Local_161 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_119) };
				iLocal_143++;
			}
			else if (iLocal_143 == 1)
			{
				Local_162 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_143++;
			}
			else if (!bLocal_80 && !bVar4)
			{
				if (Local_161.f_0 > Local_162.f_0)
				{
					fVar3 = Local_161.f_0;
					Local_161.f_0 = Local_162.f_0;
					Local_162.f_0 = fVar3;
				}
				if (Local_161.f_1 > Local_162.f_1)
				{
					fVar3 = Local_161.f_1;
					Local_161.f_1 = Local_162.f_1;
					Local_162.f_1 = fVar3;
				}
				if (Local_161.f_2 > Local_162.f_2)
				{
					fVar3 = Local_161.f_2;
					Local_161.f_2 = Local_162.f_2;
					Local_162.f_2 = fVar3;
				}
				Local_161 = { Local_161 - Vector(fLocal_122, fLocal_122, fLocal_122) };
				Local_162 = { Local_162 + Vector(fLocal_122, fLocal_122, fLocal_122) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_161, Local_162, 1);
				fLocal_119 = fVar2;
				iLocal_143 = 0;
			}
		}
	}
}

void func_415(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x369DE
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
	if (iLocal_65 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_65 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_113;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = __LIB_12__::func_35(iParam0, iParam1);
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
		if (__LIB_11__::func_140(iParam1, iParam0))
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
			if (__LIB_12__::func_34(iParam0, iParam1) < fParam5)
			{
				fVar1 = __LIB_12__::func_33(iParam0, iParam1);
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
			iLocal_66 = 1;
		}
		else if (iLocal_66)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_66 = 0;
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
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_120 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_121 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
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
							fVar1 = (fVar1 * (fLocal_111 - fLocal_112));
							fVar1 = (fVar1 + fLocal_112);
							fLocal_110 = fVar1;
							if (fLocal_110 < fLocal_112)
							{
								fLocal_110 = fLocal_112;
							}
							if (fLocal_110 > fLocal_111)
							{
								fLocal_110 = fLocal_111;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_110);
						}
					}
				}
			}
		}
	}
}

void func_430()//Position - 0x371E5
{
	Local_147[0 /*3*/] = { 1257.4471f, -2067.2722f, 44.0916f };
	fLocal_83[0] = -0.0181f;
	fLocal_84[0] = -0.0018f;
	fLocal_85[0] = 0.2169f;
	fLocal_86[0] = 0.976f;
	iLocal_123[0] = 1;
	fLocal_87[0] = 22902f;
	iLocal_173[0] = joaat("regina");
	Local_147[1 /*3*/] = { 1249.3594f, -2058.807f, 44.0092f };
	fLocal_83[1] = 0.0001f;
	fLocal_84[1] = -0.0007f;
	fLocal_85[1] = 0.1766f;
	fLocal_86[1] = 0.9843f;
	iLocal_123[1] = 2;
	fLocal_87[1] = 23364f;
	iLocal_173[1] = joaat("rancherxl");
	Local_147[2 /*3*/] = { 1229.2913f, -2034.4783f, 43.9109f };
	fLocal_83[2] = -0.0083f;
	fLocal_84[2] = -0.0012f;
	fLocal_85[2] = 0.9791f;
	fLocal_86[2] = -0.2033f;
	iLocal_123[2] = 3;
	fLocal_87[2] = 24816f;
	iLocal_173[2] = joaat("landstalker");
	Local_147[3 /*3*/] = { 1214.2241f, -1946.9001f, 39.2982f };
	fLocal_83[3] = -0.0411f;
	fLocal_84[3] = -0.0103f;
	fLocal_85[3] = 0.2382f;
	fLocal_86[3] = 0.9703f;
	iLocal_123[3] = 4;
	fLocal_87[3] = 28644f;
	iLocal_173[3] = joaat("phoenix");
	Local_147[4 /*3*/] = { 1186.6726f, -1905.5449f, 34.6968f };
	fLocal_83[4] = -0.0471f;
	fLocal_84[4] = -0.0027f;
	fLocal_85[4] = 0.2354f;
	fLocal_86[4] = 0.9708f;
	iLocal_123[4] = 5;
	fLocal_87[4] = 30294f;
	iLocal_173[4] = joaat("mesa");
	Local_147[5 /*3*/] = { 1169.1614f, -1909.9987f, 34.4001f };
	fLocal_83[5] = -0.0039f;
	fLocal_84[5] = 0.0462f;
	fLocal_85[5] = 0.9684f;
	fLocal_86[5] = -0.245f;
	iLocal_123[5] = 6;
	fLocal_87[5] = 30492f;
	iLocal_173[5] = joaat("mesa");
	Local_147[7 /*3*/] = { 1166.3428f, -1854.876f, 30.0536f };
	fLocal_83[7] = -0.0313f;
	fLocal_84[7] = 0.0024f;
	fLocal_85[7] = 0.2128f;
	fLocal_86[7] = 0.9766f;
	iLocal_123[7] = 8;
	fLocal_87[7] = 32010f;
	iLocal_173[7] = joaat("landstalker");
	Local_147[10 /*3*/] = { 1146.7635f, -1801.8179f, 28.92f };
	fLocal_83[10] = -0.0022f;
	fLocal_84[10] = 0.004f;
	fLocal_85[10] = 0.1746f;
	fLocal_86[10] = 0.9846f;
	iLocal_123[10] = 11;
	fLocal_87[10] = 33594f;
	iLocal_173[10] = joaat("regina");
	Local_147[13 /*3*/] = { 1099.1915f, -1769.3442f, 28.7382f };
	fLocal_83[13] = -0.0043f;
	fLocal_84[13] = -0.0008f;
	fLocal_85[13] = 0.9836f;
	fLocal_86[13] = -0.1805f;
	iLocal_123[13] = 14;
	fLocal_87[13] = 34980f;
	iLocal_173[13] = joaat("landstalker");
	Local_147[14 /*3*/] = { 1114.1964f, -1746.2981f, 28.8014f };
	fLocal_83[14] = -0.0049f;
	fLocal_84[14] = -0.0009f;
	fLocal_85[14] = 0.1804f;
	fLocal_86[14] = 0.9836f;
	iLocal_123[14] = 15;
	fLocal_87[14] = 35244f;
	iLocal_173[14] = joaat("mesa");
	Local_147[15 /*3*/] = { 1099.1005f, -1736.9661f, 29.1391f };
	fLocal_83[15] = -0.0082f;
	fLocal_84[15] = -0.0042f;
	fLocal_85[15] = 0.9868f;
	fLocal_86[15] = -0.1614f;
	iLocal_123[15] = 16;
	fLocal_87[15] = 35640f;
	iLocal_173[15] = joaat("sadler");
	Local_147[18 /*3*/] = { 1077.4941f, -1709.083f, 29.166f };
	fLocal_83[18] = 0.0002f;
	fLocal_84[18] = 0f;
	fLocal_85[18] = 0.9885f;
	fLocal_86[18] = -0.1514f;
	iLocal_123[18] = 19;
	fLocal_87[18] = 36630f;
	iLocal_173[18] = joaat("sadler");
	Local_147[19 /*3*/] = { 1081.4229f, -1699.4463f, 29.1073f };
	fLocal_83[19] = 0.0002f;
	fLocal_84[19] = -0.0018f;
	fLocal_85[19] = 0.988f;
	fLocal_86[19] = -0.1547f;
	iLocal_123[19] = 20;
	fLocal_87[19] = 37158f;
	iLocal_173[19] = joaat("regina");
	Local_147[20 /*3*/] = { 1072.881f, -1675.1649f, 28.924f };
	fLocal_83[20] = -0.0029f;
	fLocal_84[20] = -0.0021f;
	fLocal_85[20] = 0.9915f;
	fLocal_86[20] = -0.1302f;
	iLocal_123[20] = 21;
	fLocal_87[20] = 37620f;
	iLocal_173[20] = joaat("mesa");
	Local_147[21 /*3*/] = { 1093.0076f, -1658.0027f, 28.9252f };
	fLocal_83[21] = -0.001f;
	fLocal_84[21] = 0.0004f;
	fLocal_85[21] = 0.1187f;
	fLocal_86[21] = 0.9929f;
	iLocal_123[21] = 22;
	fLocal_87[21] = 38082f;
	iLocal_173[21] = joaat("mesa");
	Local_147[22 /*3*/] = { 1064.4675f, -1657.8715f, 28.865f };
	fLocal_83[22] = -0.0043f;
	fLocal_84[22] = 0.0001f;
	fLocal_85[22] = 0.9934f;
	fLocal_86[22] = -0.1147f;
	iLocal_123[22] = 23;
	fLocal_87[22] = 38148f;
	iLocal_173[22] = joaat("landstalker");
	Local_147[23 /*3*/] = { 1095.3093f, -1672.2139f, 29.0386f };
	fLocal_83[23] = 0.0023f;
	fLocal_84[23] = 0.0003f;
	fLocal_85[23] = 0.1384f;
	fLocal_86[23] = 0.9904f;
	iLocal_123[23] = 24;
	fLocal_87[23] = 38346f;
	iLocal_173[23] = joaat("rancherxl");
	Local_147[24 /*3*/] = { 1081.6741f, -1633.3407f, 28.9063f };
	fLocal_83[24] = -0.0005f;
	fLocal_84[24] = 0f;
	fLocal_85[24] = 0.0996f;
	fLocal_86[24] = 0.995f;
	iLocal_123[24] = 25;
	fLocal_87[24] = 38742f;
	iLocal_173[24] = joaat("landstalker");
	Local_147[25 /*3*/] = { 1064.936f, -1637.2181f, 29.3989f };
	fLocal_83[25] = -0.012f;
	fLocal_84[25] = 0.0019f;
	fLocal_85[25] = 0.9947f;
	fLocal_86[25] = -0.1019f;
	iLocal_123[25] = 26;
	fLocal_87[25] = 38742f;
	iLocal_173[25] = joaat("scrap");
	Local_147[26 /*3*/] = { 1091.1405f, -1629.9049f, 28.8929f };
	fLocal_83[26] = -0.0007f;
	fLocal_84[26] = 0.0035f;
	fLocal_85[26] = 0.1006f;
	fLocal_86[26] = 0.9949f;
	iLocal_123[26] = 27;
	fLocal_87[26] = 38808f;
	iLocal_173[26] = joaat("landstalker");
	Local_147[27 /*3*/] = { 1068.2368f, -1623.2585f, 28.777f };
	fLocal_83[27] = -0.0133f;
	fLocal_84[27] = 0.0019f;
	fLocal_85[27] = 0.9956f;
	fLocal_86[27] = -0.093f;
	iLocal_123[27] = 28;
	fLocal_87[27] = 39336f;
	iLocal_173[27] = joaat("phoenix");
	Local_147[29 /*3*/] = { 1057.1163f, -1625.4204f, 29.334f };
	fLocal_83[29] = -0.0015f;
	fLocal_84[29] = -0.001f;
	fLocal_85[29] = 0.9961f;
	fLocal_86[29] = -0.088f;
	iLocal_123[29] = 30;
	fLocal_87[29] = 40194f;
	iLocal_173[29] = joaat("biff");
	Local_147[30 /*3*/] = { 1062.4103f, -1586.4337f, 28.4771f };
	fLocal_83[30] = -0.0131f;
	fLocal_84[30] = 0.0092f;
	fLocal_85[30] = 0.999f;
	fLocal_86[30] = -0.0425f;
	iLocal_123[30] = 31;
	fLocal_87[30] = 40458f;
	iLocal_173[30] = joaat("landstalker");
	Local_147[31 /*3*/] = { 1050.4426f, -1570.4543f, 28.5423f };
	fLocal_83[31] = 0.0064f;
	fLocal_84[31] = 0.0053f;
	fLocal_85[31] = 0.9986f;
	fLocal_86[31] = -0.0523f;
	iLocal_123[31] = 32;
	fLocal_87[31] = 40986f;
	iLocal_173[31] = joaat("biff");
	Local_147[33 /*3*/] = { 1054.1426f, -1500.471f, 27.6671f };
	fLocal_83[33] = -0.012f;
	fLocal_84[33] = -0.0013f;
	fLocal_85[33] = 0.9999f;
	fLocal_86[33] = -0.0036f;
	iLocal_123[33] = 34;
	fLocal_87[33] = 43362f;
	iLocal_173[33] = joaat("bison");
	Local_147[34 /*3*/] = { 1059.6545f, -1521.0797f, 27.4954f };
	fLocal_83[34] = 0.0104f;
	fLocal_84[34] = 0.0022f;
	fLocal_85[34] = 0.9999f;
	fLocal_86[34] = -0.0083f;
	iLocal_123[34] = 35;
	fLocal_87[34] = 43560f;
	iLocal_173[34] = joaat("mesa");
	Local_147[35 /*3*/] = { 1040.5317f, -1479.9528f, 27.681f };
	fLocal_83[35] = 0.0003f;
	fLocal_84[35] = -0.0077f;
	fLocal_85[35] = 0.9991f;
	fLocal_86[35] = -0.0414f;
	iLocal_123[35] = 36;
	fLocal_87[35] = 44022f;
	iLocal_173[35] = joaat("buccaneer");
	Local_147[36 /*3*/] = { 1043.9675f, -1454.2734f, 28.6681f };
	fLocal_83[36] = 0.0002f;
	fLocal_84[36] = -0.0082f;
	fLocal_85[36] = 0.9991f;
	fLocal_86[36] = -0.0409f;
	iLocal_123[36] = 37;
	fLocal_87[36] = 44880f;
	iLocal_173[36] = joaat("sadler");
	Local_147[37 /*3*/] = { 1050.3926f, -1443.6427f, 36.4312f };
	fLocal_83[37] = -0.0034f;
	fLocal_84[37] = -0.0023f;
	fLocal_85[37] = 0.7072f;
	fLocal_86[37] = -0.707f;
	iLocal_123[37] = 38;
	fLocal_87[37] = 45210f;
	iLocal_173[37] = joaat("sadler");
	Local_147[38 /*3*/] = { 1037.0913f, -1432.83f, 28.8182f };
	fLocal_83[38] = 0.0046f;
	fLocal_84[38] = -0.007f;
	fLocal_85[38] = 0.9998f;
	fLocal_86[38] = -0.0207f;
	iLocal_123[38] = 39;
	fLocal_87[38] = 45540f;
	iLocal_173[38] = joaat("bison");
	Local_147[39 /*3*/] = { 1058.9618f, -1423.105f, 29.0086f };
	fLocal_83[39] = 0.0002f;
	fLocal_84[39] = -0.0091f;
	fLocal_85[39] = 0.9999f;
	fLocal_86[39] = -0.0054f;
	iLocal_123[39] = 40;
	fLocal_87[39] = 45870f;
	iLocal_173[39] = joaat("sadler");
	Local_147[40 /*3*/] = { 1023.6323f, -1443.6104f, 35.5696f };
	fLocal_83[40] = -0.0287f;
	fLocal_84[40] = -0.0037f;
	fLocal_85[40] = 0.7069f;
	fLocal_86[40] = -0.7068f;
	iLocal_123[40] = 41;
	fLocal_87[40] = 46332f;
	iLocal_173[40] = joaat("landstalker");
	Local_147[41 /*3*/] = { 1041.7249f, -1405.9795f, 29.616f };
	fLocal_83[41] = 0.0055f;
	fLocal_84[41] = -0.0096f;
	fLocal_85[41] = 0.9999f;
	fLocal_86[41] = -0.0078f;
	iLocal_123[41] = 42;
	fLocal_87[41] = 46398f;
	iLocal_173[41] = joaat("scrap");
	Local_147[42 /*3*/] = { 1042.1285f, -1387.2562f, 29.8631f };
	fLocal_83[42] = 0.0003f;
	fLocal_84[42] = -0.0281f;
	fLocal_85[42] = 0.9996f;
	fLocal_86[42] = -0.0084f;
	iLocal_123[42] = 43;
	fLocal_87[42] = 46992f;
	iLocal_173[42] = joaat("bison");
	Local_147[43 /*3*/] = { 1057.5828f, -1388.1931f, 28.9498f };
	fLocal_83[43] = -0.0066f;
	fLocal_84[43] = 0.0027f;
	fLocal_85[43] = 1f;
	fLocal_86[43] = -0.0064f;
	iLocal_123[43] = 44;
	fLocal_87[43] = 47058f;
	iLocal_173[43] = joaat("mesa");
	Local_147[44 /*3*/] = { 1041.4845f, -1369.8064f, 31.3912f };
	fLocal_83[44] = -0.0046f;
	fLocal_84[44] = -0.0462f;
	fLocal_85[44] = 0.9988f;
	fLocal_86[44] = -0.013f;
	iLocal_123[44] = 45;
	fLocal_87[44] = 47586f;
	iLocal_173[44] = joaat("sadler");
	Local_147[45 /*3*/] = { 1035.0221f, -1351.277f, 32.9924f };
	fLocal_83[45] = 0.0017f;
	fLocal_84[45] = -0.0618f;
	fLocal_85[45] = 0.9978f;
	fLocal_86[45] = -0.0247f;
	iLocal_123[45] = 46;
	fLocal_87[45] = 48246f;
	iLocal_173[45] = joaat("buccaneer");
	Local_147[46 /*3*/] = { 1034.5239f, -1336.8646f, 35.3449f };
	fLocal_83[46] = 0.0179f;
	fLocal_84[46] = -0.0542f;
	fLocal_85[46] = 0.998f;
	fLocal_86[46] = -0.028f;
	iLocal_123[46] = 47;
	fLocal_87[46] = 48840f;
	iLocal_173[46] = joaat("sadler");
	Local_147[47 /*3*/] = { 1033.4775f, -1319.9642f, 37.1015f };
	fLocal_83[47] = 0.0181f;
	fLocal_84[47] = -0.0545f;
	fLocal_85[47] = 0.9979f;
	fLocal_86[47] = -0.0296f;
	iLocal_123[47] = 48;
	fLocal_87[47] = 49368f;
	iLocal_173[47] = joaat("landstalker");
	Local_147[48 /*3*/] = { 1054.6504f, -1317.9685f, 27.0912f };
	fLocal_83[48] = -0.0006f;
	fLocal_84[48] = 0.0219f;
	fLocal_85[48] = 0.9994f;
	fLocal_86[48] = -0.0279f;
	iLocal_123[48] = 49;
	fLocal_87[48] = 49566f;
	iLocal_173[48] = joaat("sadler");
	Local_147[49 /*3*/] = { 1032.1355f, -1308.393f, 38.3468f };
	fLocal_83[49] = 0.005f;
	fLocal_84[49] = -0.0471f;
	fLocal_85[49] = 0.9985f;
	fLocal_86[49] = -0.0282f;
	iLocal_123[49] = 50;
	fLocal_87[49] = 49764f;
	iLocal_173[49] = joaat("bison");
	Local_147[50 /*3*/] = { 1038.0043f, -1304.0952f, 38.691f };
	fLocal_83[50] = -0.0042f;
	fLocal_84[50] = -0.046f;
	fLocal_85[50] = 0.9986f;
	fLocal_86[50] = -0.0256f;
	iLocal_123[50] = 51;
	fLocal_87[50] = 49896f;
	iLocal_173[50] = joaat("mesa");
	Local_147[51 /*3*/] = { 1032.8864f, -1272.8844f, 41.7283f };
	fLocal_83[51] = -0.0066f;
	fLocal_84[51] = -0.048f;
	fLocal_85[51] = 0.9981f;
	fLocal_86[51] = 0.0392f;
	iLocal_123[51] = 52;
	fLocal_87[51] = 50886f;
	iLocal_173[51] = joaat("sadler");
	Local_147[52 /*3*/] = { 1038.0369f, -1273.2704f, 41.6203f };
	fLocal_83[52] = -0.0151f;
	fLocal_84[52] = -0.0521f;
	fLocal_85[52] = 0.9977f;
	fLocal_86[52] = 0.0409f;
	iLocal_123[52] = 53;
	fLocal_87[52] = 50952f;
	iLocal_173[52] = joaat("landstalker");
	Local_147[53 /*3*/] = { 1040.5094f, -1256.959f, 42.9299f };
	fLocal_83[53] = -0.0102f;
	fLocal_84[53] = -0.0355f;
	fLocal_85[53] = 0.9919f;
	fLocal_86[53] = 0.1214f;
	iLocal_123[53] = 54;
	fLocal_87[53] = 51480f;
	iLocal_173[53] = joaat("mesa");
	Local_147[54 /*3*/] = { 1053.2091f, -1226.4725f, 45.371f };
	fLocal_83[54] = -0.0056f;
	fLocal_84[54] = -0.0329f;
	fLocal_85[54] = 0.9697f;
	fLocal_86[54] = 0.2421f;
	iLocal_123[54] = 55;
	fLocal_87[54] = 52536f;
	iLocal_173[54] = joaat("landstalker");
	Local_147[55 /*3*/] = { 1047.1648f, -1195.5914f, 55.7625f };
	fLocal_83[55] = -0.0034f;
	fLocal_84[55] = 0.0059f;
	fLocal_85[55] = -0.6925f;
	fLocal_86[55] = 0.7214f;
	iLocal_123[55] = 56;
	fLocal_87[55] = 53658f;
	iLocal_173[55] = joaat("scrap");
	Local_147[56 /*3*/] = { 1025.2529f, -1190.3019f, 55.3269f };
	fLocal_83[56] = 0.0179f;
	fLocal_84[56] = 0.0029f;
	fLocal_85[56] = -0.6945f;
	fLocal_86[56] = 0.7192f;
	iLocal_123[56] = 57;
	fLocal_87[56] = 53988f;
	iLocal_173[56] = joaat("landstalker");
	Local_147[59 /*3*/] = { 1039.6971f, -1166.8888f, 46.7159f };
	fLocal_83[59] = 0.0047f;
	fLocal_84[59] = 0.0091f;
	fLocal_85[59] = -0.3573f;
	fLocal_86[59] = 0.9339f;
	iLocal_123[59] = 60;
	fLocal_87[59] = 54582f;
	iLocal_173[59] = joaat("landstalker");
	Local_147[60 /*3*/] = { 1067.2932f, -1195.449f, 47.0312f };
	fLocal_83[60] = 0.0167f;
	fLocal_84[60] = -0.0055f;
	fLocal_85[60] = 0.9319f;
	fLocal_86[60] = 0.3623f;
	iLocal_123[60] = 61;
	fLocal_87[60] = 54714f;
	iLocal_173[60] = joaat("sadler");
	Local_147[61 /*3*/] = { 1089.4803f, -1183.5569f, 46.0068f };
	fLocal_83[61] = 0.0143f;
	fLocal_84[61] = 0.0276f;
	fLocal_85[61] = 0.8926f;
	fLocal_86[61] = 0.4497f;
	iLocal_123[61] = 62;
	fLocal_87[61] = 54978f;
	iLocal_173[61] = joaat("landstalker");
	Local_147[66 /*3*/] = { 1209.6885f, -1146.9996f, 47.4201f };
	fLocal_83[66] = -0.0274f;
	fLocal_84[66] = -0.0234f;
	fLocal_85[66] = 0.7991f;
	fLocal_86[66] = 0.6002f;
	iLocal_123[66] = 67;
	fLocal_87[66] = 59334f;
	iLocal_173[66] = joaat("sadler");
	Local_147[67 /*3*/] = { 1252.3525f, -1147.135f, 51.1307f };
	fLocal_83[67] = -0.0036f;
	fLocal_84[67] = 0.0025f;
	fLocal_85[67] = 0.8345f;
	fLocal_86[67] = 0.5509f;
	iLocal_123[67] = 68;
	fLocal_87[67] = 60720f;
	iLocal_173[67] = joaat("landstalker");
	Local_147[68 /*3*/] = { 1283.0724f, -1135.6932f, 51.1078f };
	fLocal_83[68] = -0.0035f;
	fLocal_84[68] = 0.0026f;
	fLocal_85[68] = 0.8366f;
	fLocal_86[68] = 0.5477f;
	iLocal_123[68] = 69;
	fLocal_87[68] = 61776f;
	iLocal_173[68] = joaat("mesa");
	Local_147[69 /*3*/] = { 1316.0417f, -1117.9481f, 50.8728f };
	fLocal_83[69] = -0.0012f;
	fLocal_84[69] = -0.0019f;
	fLocal_85[69] = 0.8533f;
	fLocal_86[69] = 0.5214f;
	iLocal_123[69] = 70;
	fLocal_87[69] = 63030f;
	iLocal_173[69] = joaat("buccaneer");
	Local_147[70 /*3*/] = { 1319.2922f, -1097.9714f, 51.1957f };
	fLocal_83[70] = 0.003f;
	fLocal_84[70] = -0.0108f;
	fLocal_85[70] = 0.8429f;
	fLocal_86[70] = 0.538f;
	iLocal_123[70] = 71;
	fLocal_87[70] = 63360f;
	iLocal_173[70] = joaat("bison");
	Local_147[71 /*3*/] = { 1342.187f, -1117.7548f, 51.875f };
	fLocal_83[71] = 0.0065f;
	fLocal_84[71] = -0.0048f;
	fLocal_85[71] = -0.5362f;
	fLocal_86[71] = 0.8441f;
	iLocal_123[71] = 72;
	fLocal_87[71] = 63888f;
	iLocal_173[71] = joaat("sadler");
	Local_147[72 /*3*/] = { 1351.593f, -1099.8505f, 52.0916f };
	fLocal_83[72] = -0.0082f;
	fLocal_84[72] = -0.0074f;
	fLocal_85[72] = 0.8561f;
	fLocal_86[72] = 0.5166f;
	iLocal_123[72] = 73;
	fLocal_87[72] = 64350f;
	iLocal_173[72] = joaat("scrap");
	Local_147[73 /*3*/] = { 1358.1727f, -1090.9425f, 51.8101f };
	fLocal_83[73] = -0.0058f;
	fLocal_84[73] = -0.0096f;
	fLocal_85[73] = 0.8579f;
	fLocal_86[73] = 0.5136f;
	iLocal_123[73] = 74;
	fLocal_87[73] = 64680f;
	iLocal_173[73] = joaat("landstalker");
	Local_147[74 /*3*/] = { 1362.6317f, -1105.3058f, 52.5445f };
	fLocal_83[74] = 0.0076f;
	fLocal_84[74] = -0.0046f;
	fLocal_85[74] = -0.5148f;
	fLocal_86[74] = 0.8573f;
	iLocal_123[74] = 75;
	fLocal_87[74] = 64680f;
	iLocal_173[74] = joaat("scrap");
	Local_147[75 /*3*/] = { 1382.2256f, -1083.7041f, 52.4738f };
	fLocal_83[75] = -0.0107f;
	fLocal_84[75] = -0.0093f;
	fLocal_85[75] = 0.8582f;
	fLocal_86[75] = 0.5131f;
	iLocal_123[75] = 76;
	fLocal_87[75] = 65472f;
	iLocal_173[75] = joaat("landstalker");
	Local_147[78 /*3*/] = { 1422.3512f, -1055.396f, 54.1407f };
	fLocal_83[78] = -0.0096f;
	fLocal_84[78] = -0.0107f;
	fLocal_85[78] = 0.8592f;
	fLocal_86[78] = 0.5114f;
	iLocal_123[78] = 79;
	fLocal_87[78] = 67056f;
	iLocal_173[78] = joaat("sadler");
	Local_147[79 /*3*/] = { 1437.4639f, -1047.1901f, 54.4153f };
	fLocal_83[79] = -0.0089f;
	fLocal_84[79] = -0.0119f;
	fLocal_85[79] = 0.8666f;
	fLocal_86[79] = 0.4987f;
	iLocal_123[79] = 80;
	fLocal_87[79] = 67584f;
	iLocal_173[79] = joaat("mesa");
	Local_147[80 /*3*/] = { 1501.8615f, -1018.0383f, 57.1928f };
	fLocal_83[80] = -0.0105f;
	fLocal_84[80] = -0.0094f;
	fLocal_85[80] = 0.8616f;
	fLocal_86[80] = 0.5073f;
	iLocal_123[80] = 81;
	fLocal_87[80] = 70092f;
	iLocal_173[80] = joaat("scrap");
	Local_147[81 /*3*/] = { 1537.751f, -1015.4526f, 57.5874f };
	fLocal_83[81] = 0.0134f;
	fLocal_84[81] = -0.0039f;
	fLocal_85[81] = -0.5048f;
	fLocal_86[81] = 0.8632f;
	iLocal_123[81] = 82;
	fLocal_87[81] = 70818f;
	iLocal_173[81] = joaat("mesa");
	Local_147[82 /*3*/] = { 1547.0856f, -985.7202f, 58.299f };
	fLocal_83[82] = -0.0174f;
	fLocal_84[82] = -0.013f;
	fLocal_85[82] = 0.863f;
	fLocal_86[82] = 0.5047f;
	iLocal_123[82] = 83;
	fLocal_87[82] = 71544f;
	iLocal_173[82] = joaat("landstalker");
	Local_147[84 /*3*/] = { 1572.3722f, -988.5083f, 59.2547f };
	fLocal_83[84] = 0.0108f;
	fLocal_84[84] = -0.0245f;
	fLocal_85[84] = -0.4971f;
	fLocal_86[84] = 0.8673f;
	iLocal_123[84] = 85;
	fLocal_87[84] = 72072f;
	iLocal_173[84] = joaat("bison");
	Local_147[86 /*3*/] = { 1570.7823f, -973.6722f, 59.5908f };
	fLocal_83[86] = -0.0207f;
	fLocal_84[86] = -0.0139f;
	fLocal_85[86] = 0.8682f;
	fLocal_86[86] = 0.4955f;
	iLocal_123[86] = 87;
	fLocal_87[86] = 72270f;
	iLocal_173[86] = joaat("bison");
	Local_147[87 /*3*/] = { 1586.4951f, -987.2821f, 60.1358f };
	fLocal_83[87] = 0.024f;
	fLocal_84[87] = -0.0041f;
	fLocal_85[87] = -0.5017f;
	fLocal_86[87] = 0.8647f;
	iLocal_123[87] = 88;
	fLocal_87[87] = 72468f;
	iLocal_173[87] = joaat("sadler");
	Local_147[88 /*3*/] = { 1588.4323f, -962.2726f, 60.5369f };
	fLocal_83[88] = -0.027f;
	fLocal_84[88] = -0.0121f;
	fLocal_85[88] = 0.8626f;
	fLocal_86[88] = 0.5051f;
	iLocal_123[88] = 89;
	fLocal_87[88] = 72930f;
	iLocal_173[88] = joaat("bison");
	Local_147[89 /*3*/] = { 1604.5709f, -959.2837f, 61.373f };
	fLocal_83[89] = -0.0047f;
	fLocal_84[89] = -0.0256f;
	fLocal_85[89] = 0.8673f;
	fLocal_86[89] = 0.4972f;
	iLocal_123[89] = 90;
	fLocal_87[89] = 73392f;
	iLocal_173[89] = joaat("mesa");
	Local_147[90 /*3*/] = { 1620.7482f, -967.0914f, 62.3388f };
	fLocal_83[90] = 0.0268f;
	fLocal_84[90] = -0.0015f;
	fLocal_85[90] = -0.4947f;
	fLocal_86[90] = 0.8686f;
	iLocal_123[90] = 91;
	fLocal_87[90] = 73722f;
	iLocal_173[90] = joaat("scrap");
	Local_147[91 /*3*/] = { 1622.0424f, -959.2253f, 61.8929f };
	fLocal_83[91] = 0.0124f;
	fLocal_84[91] = -0.0272f;
	fLocal_85[91] = -0.4953f;
	fLocal_86[91] = 0.8682f;
	iLocal_123[91] = 92;
	fLocal_87[91] = 73788f;
	iLocal_173[91] = joaat("buccaneer");
	Local_147[92 /*3*/] = { 1633.7638f, -942.4766f, 63.573f };
	fLocal_83[92] = -0.005f;
	fLocal_84[92] = -0.0265f;
	fLocal_85[92] = 0.8694f;
	fLocal_86[92] = 0.4933f;
	iLocal_123[92] = 93;
	fLocal_87[92] = 74316f;
	iLocal_173[92] = joaat("scrap");
	Local_147[93 /*3*/] = { 1654.6025f, -946.085f, 63.7836f };
	fLocal_83[93] = 0.0279f;
	fLocal_84[93] = -0.0011f;
	fLocal_85[93] = -0.4872f;
	fLocal_86[93] = 0.8728f;
	iLocal_123[93] = 94;
	fLocal_87[93] = 74844f;
	iLocal_173[93] = joaat("buccaneer");
	Local_147[94 /*3*/] = { 1658.2738f, -938.0108f, 64.2821f };
	fLocal_83[94] = 0.0134f;
	fLocal_84[94] = -0.0275f;
	fLocal_85[94] = -0.4875f;
	fLocal_86[94] = 0.8726f;
	iLocal_123[94] = 95;
	fLocal_87[94] = 74976f;
	iLocal_173[94] = joaat("mesa");
	Local_147[95 /*3*/] = { 1695.0702f, -920.9435f, 66.5076f };
	fLocal_83[95] = 0.027f;
	fLocal_84[95] = -0.0047f;
	fLocal_85[95] = -0.478f;
	fLocal_86[95] = 0.8779f;
	iLocal_123[95] = 96;
	fLocal_87[95] = 76164f;
	iLocal_173[95] = joaat("landstalker");
	Local_147[96 /*3*/] = { 1693.4834f, -916.1393f, 66.5571f };
	fLocal_83[96] = 0.0145f;
	fLocal_84[96] = -0.0278f;
	fLocal_85[96] = -0.4795f;
	fLocal_86[96] = 0.877f;
	iLocal_123[96] = 97;
	fLocal_87[96] = 76164f;
	iLocal_173[96] = joaat("mesa");
	Local_147[97 /*3*/] = { 1686.7013f, -909.9734f, 66.3996f };
	fLocal_83[97] = 0.004f;
	fLocal_84[97] = -0.034f;
	fLocal_85[97] = 0.879f;
	fLocal_86[97] = 0.4755f;
	iLocal_123[97] = 98;
	fLocal_87[97] = 76890f;
	iLocal_173[97] = joaat("mesa");
	Local_147[99 /*3*/] = { 1739.909f, -890.9354f, 69.736f };
	fLocal_83[99] = 0.0278f;
	fLocal_84[99] = -0.0047f;
	fLocal_85[99] = -0.4636f;
	fLocal_86[99] = 0.8856f;
	iLocal_123[99] = 100;
	fLocal_87[99] = 78210f;
	iLocal_173[99] = joaat("sadler");
	Local_147[100 /*3*/] = { 1756.1343f, -873.2136f, 71.2733f };
	fLocal_83[100] = 0.0162f;
	fLocal_84[100] = -0.0264f;
	fLocal_85[100] = -0.4587f;
	fLocal_86[100] = 0.888f;
	iLocal_123[100] = 101;
	fLocal_87[100] = 78738f;
	iLocal_173[100] = joaat("scrap");
	Local_147[101 /*3*/] = { 1736.9729f, -875.2971f, 69.8341f };
	fLocal_83[101] = -0.0037f;
	fLocal_84[101] = -0.0346f;
	fLocal_85[101] = 0.886f;
	fLocal_86[101] = 0.4624f;
	iLocal_123[101] = 102;
	fLocal_87[101] = 78870f;
	iLocal_173[101] = joaat("mesa");
	Local_147[102 /*3*/] = { 1752.1392f, -864.4997f, 70.8736f };
	fLocal_83[102] = -0.0029f;
	fLocal_84[102] = -0.0323f;
	fLocal_85[102] = 0.8888f;
	fLocal_86[102] = 0.4572f;
	iLocal_123[102] = 103;
	fLocal_87[102] = 79728f;
	iLocal_173[102] = joaat("mesa");
	Local_147[103 /*3*/] = { 1808.1072f, -842.0761f, 74.2613f };
	fLocal_83[103] = 0.0305f;
	fLocal_84[103] = -0.0055f;
	fLocal_85[103] = -0.4493f;
	fLocal_86[103] = 0.8929f;
	iLocal_123[103] = 104;
	fLocal_87[103] = 80850f;
	iLocal_173[103] = joaat("bison");
	Local_147[104 /*3*/] = { 1794.4614f, -851.4075f, 73.2175f };
	fLocal_83[104] = 0.0337f;
	fLocal_84[104] = -0.0008f;
	fLocal_85[104] = -0.4478f;
	fLocal_86[104] = 0.8935f;
	iLocal_123[104] = 105;
	fLocal_87[104] = 81180f;
	iLocal_173[104] = joaat("mesa");
	Local_147[105 /*3*/] = { 1813.3606f, -820.5766f, 75.1247f };
	fLocal_83[105] = 0.0007f;
	fLocal_84[105] = -0.0375f;
	fLocal_85[105] = 0.8942f;
	fLocal_86[105] = 0.446f;
	iLocal_123[105] = 106;
	fLocal_87[105] = 81576f;
	iLocal_173[105] = joaat("buccaneer");
	Local_147[106 /*3*/] = { 1852.822f, -789.6251f, 79.0498f };
	fLocal_83[106] = -0.0088f;
	fLocal_84[106] = -0.0376f;
	fLocal_85[106] = 0.8951f;
	fLocal_86[106] = 0.4442f;
	iLocal_123[106] = 107;
	fLocal_87[106] = 83424f;
	iLocal_173[106] = joaat("bison");
	Local_147[107 /*3*/] = { 1893.7203f, -758.705f, 83.0709f };
	fLocal_83[107] = -0.0095f;
	fLocal_84[107] = -0.0383f;
	fLocal_85[107] = 0.8947f;
	fLocal_86[107] = 0.4449f;
	iLocal_123[107] = 108;
	fLocal_87[107] = 85272f;
	iLocal_173[107] = joaat("emperor");
	Local_147[108 /*3*/] = { 1904.6305f, -762.515f, 83.5621f };
	fLocal_83[108] = 0.0265f;
	fLocal_84[108] = -0.0326f;
	fLocal_85[108] = -0.4445f;
	fLocal_86[108] = 0.8948f;
	iLocal_123[108] = 109;
	fLocal_87[108] = 85404f;
	iLocal_173[108] = joaat("mesa");
	Local_147[109 /*3*/] = { 1915.3466f, -743.614f, 85.1017f };
	fLocal_83[109] = -0.0092f;
	fLocal_84[109] = -0.0389f;
	fLocal_85[109] = 0.8965f;
	fLocal_86[109] = 0.4411f;
	iLocal_123[109] = 110;
	fLocal_87[109] = 86262f;
	iLocal_173[109] = joaat("faggio2");
	Local_147[110 /*3*/] = { 1931.0511f, -749.3928f, 85.8679f };
	fLocal_83[110] = 0.0377f;
	fLocal_84[110] = -0.0082f;
	fLocal_85[110] = -0.4422f;
	fLocal_86[110] = 0.8961f;
	iLocal_123[110] = 111;
	fLocal_87[110] = 86460f;
	iLocal_173[110] = joaat("bison");
	Local_147[111 /*3*/] = { 1927.4377f, -726.9298f, 86.6339f };
	fLocal_83[111] = -0.0316f;
	fLocal_84[111] = -0.0247f;
	fLocal_85[111] = 0.8964f;
	fLocal_86[111] = 0.4414f;
	iLocal_123[111] = 112;
	fLocal_87[111] = 86988f;
	iLocal_173[111] = joaat("emperor");
	Local_147[112 /*3*/] = { 1946.5721f, -719.609f, 87.9184f };
	fLocal_83[112] = -0.0045f;
	fLocal_84[112] = -0.0353f;
	fLocal_85[112] = 0.8969f;
	fLocal_86[112] = 0.4408f;
	iLocal_123[112] = 113;
	fLocal_87[112] = 87846f;
	iLocal_173[112] = joaat("buccaneer");
	Local_147[113 /*3*/] = { 1964.1523f, -705.9418f, 89.6367f };
	fLocal_83[113] = -0.0064f;
	fLocal_84[113] = -0.0323f;
	fLocal_85[113] = 0.8975f;
	fLocal_86[113] = 0.4398f;
	iLocal_123[113] = 114;
	fLocal_87[113] = 88836f;
	iLocal_173[113] = joaat("mesa");
	Local_147[115 /*3*/] = { 1975.1713f, -689.519f, 91.3147f };
	fLocal_83[115] = -0.0255f;
	fLocal_84[115] = -0.0189f;
	fLocal_85[115] = 0.8984f;
	fLocal_86[115] = 0.4381f;
	iLocal_123[115] = 116;
	fLocal_87[115] = 89628f;
	iLocal_173[115] = joaat("scrap");
	Local_147[116 /*3*/] = { 1997.5023f, -697.2738f, 92.0762f };
	fLocal_83[116] = 0.0286f;
	fLocal_84[116] = -0.0053f;
	fLocal_85[116] = -0.4356f;
	fLocal_86[116] = 0.8997f;
	iLocal_123[116] = 117;
	fLocal_87[116] = 90090f;
	iLocal_173[116] = joaat("scrap");
	Local_147[117 /*3*/] = { 1981.1449f, -691.6869f, 91.0842f };
	fLocal_83[117] = 0.0009f;
	fLocal_84[117] = -0.0345f;
	fLocal_85[117] = 0.8992f;
	fLocal_86[117] = 0.4362f;
	iLocal_123[117] = 118;
	fLocal_87[117] = 91080f;
	iLocal_173[117] = joaat("bison");
	Local_147[118 /*3*/] = { 2008.4921f, -663.426f, 93.0802f };
	fLocal_83[118] = -0.0187f;
	fLocal_84[118] = -0.0146f;
	fLocal_85[118] = 0.896f;
	fLocal_86[118] = 0.4434f;
	iLocal_123[118] = 119;
	fLocal_87[118] = 91146f;
	iLocal_173[118] = joaat("faggio2");
	Local_147[119 /*3*/] = { 2015.655f, -665.2861f, 93.5563f };
	fLocal_83[119] = -0.0041f;
	fLocal_84[119] = -0.0188f;
	fLocal_85[119] = 0.9003f;
	fLocal_86[119] = 0.4348f;
	iLocal_123[119] = 120;
	fLocal_87[119] = 91410f;
	iLocal_173[119] = joaat("sadler");
	Local_147[120 /*3*/] = { 2036.6876f, -658.4556f, 94.0461f };
	fLocal_83[120] = 0.0087f;
	fLocal_84[120] = -0.0174f;
	fLocal_85[120] = -0.4303f;
	fLocal_86[120] = 0.9025f;
	iLocal_123[120] = 121;
	fLocal_87[120] = 92268f;
	iLocal_173[120] = joaat("bison");
	Local_147[121 /*3*/] = { 2057.4204f, -648.5696f, 94.8897f };
	fLocal_83[121] = 0.0111f;
	fLocal_84[121] = -0.0006f;
	fLocal_85[121] = -0.4291f;
	fLocal_86[121] = 0.9032f;
	iLocal_123[121] = 122;
	fLocal_87[121] = 93522f;
	iLocal_173[121] = joaat("sadler");
	Local_147[122 /*3*/] = { 2062.4495f, -627.6309f, 94.8388f };
	fLocal_83[122] = 0.0086f;
	fLocal_84[122] = -0.0116f;
	fLocal_85[122] = 0.9041f;
	fLocal_86[122] = 0.427f;
	iLocal_123[122] = 123;
	fLocal_87[122] = 93918f;
	iLocal_173[122] = joaat("faggio2");
	Local_147[123 /*3*/] = { 2099.8123f, -614.3542f, 94.9874f };
	fLocal_83[123] = 0.0058f;
	fLocal_84[123] = 0.0122f;
	fLocal_85[123] = -0.4234f;
	fLocal_86[123] = 0.9058f;
	iLocal_123[123] = 124;
	fLocal_87[123] = 96162f;
	iLocal_173[123] = joaat("buccaneer");
	Local_147[124 /*3*/] = { 2100.9805f, -605.6147f, 95.4105f };
	fLocal_83[124] = -0.0035f;
	fLocal_84[124] = -0.0077f;
	fLocal_85[124] = -0.4234f;
	fLocal_86[124] = 0.9059f;
	iLocal_123[124] = 125;
	fLocal_87[124] = 96492f;
	iLocal_173[124] = joaat("sadler");
	Local_147[125 /*3*/] = { 2145.7358f, -555.6513f, 94.4273f };
	fLocal_83[125] = 0.013f;
	fLocal_84[125] = 0.005f;
	fLocal_85[125] = 0.9106f;
	fLocal_86[125] = 0.4131f;
	iLocal_123[125] = 126;
	fLocal_87[125] = 99594f;
	iLocal_173[125] = joaat("bison");
	Local_147[126 /*3*/] = { 2164.987f, -551.8726f, 94.0056f };
	fLocal_83[126] = -0.0161f;
	fLocal_84[126] = -0.0104f;
	fLocal_85[126] = -0.4093f;
	fLocal_86[126] = 0.9122f;
	iLocal_123[126] = 127;
	fLocal_87[126] = 100188f;
	iLocal_173[126] = joaat("mesa");
	Local_147[127 /*3*/] = { 2204.741f, -501.744f, 92.0787f };
	fLocal_83[127] = 0.0148f;
	fLocal_84[127] = 0.0124f;
	fLocal_85[127] = 0.919f;
	fLocal_86[127] = 0.3937f;
	iLocal_123[127] = 128;
	fLocal_87[127] = 102960f;
	iLocal_173[127] = joaat("mesa");
	Local_147[128 /*3*/] = { 2203.3894f, -496.8589f, 91.9812f };
	fLocal_83[128] = -0.0093f;
	fLocal_84[128] = 0.0226f;
	fLocal_85[128] = 0.9187f;
	fLocal_86[128] = 0.3941f;
	iLocal_123[128] = 129;
	fLocal_87[128] = 103554f;
	iLocal_173[128] = joaat("bison");
	Local_147[129 /*3*/] = { 2252.1982f, -500.7823f, 85.1706f };
	fLocal_83[129] = -0.0644f;
	fLocal_84[129] = 0.0372f;
	fLocal_85[129] = -0.4282f;
	fLocal_86[129] = 0.9006f;
	iLocal_123[129] = 130;
	fLocal_87[129] = 105402f;
	iLocal_173[129] = joaat("buccaneer");
	Local_147[130 /*3*/] = { 2394.7769f, -440.2159f, 71.9554f };
	fLocal_83[130] = 0.0148f;
	fLocal_84[130] = -0.0174f;
	fLocal_85[130] = 0.4138f;
	fLocal_86[130] = 0.9101f;
	iLocal_123[130] = 131;
	fLocal_87[130] = 110616f;
	iLocal_173[130] = joaat("bison");
	Local_147[131 /*3*/] = { 2494.6003f, -527.8857f, 68.0146f };
	fLocal_83[131] = 0.0134f;
	fLocal_84[131] = 0.0081f;
	fLocal_85[131] = 0.4058f;
	fLocal_86[131] = 0.9138f;
	iLocal_123[131] = 132;
	fLocal_87[131] = 114840f;
	iLocal_173[131] = joaat("faggio2");
	Local_147[132 /*3*/] = { 2486.1355f, -675.5621f, 61.6248f };
	fLocal_83[132] = -0.0054f;
	fLocal_84[132] = 0.0043f;
	fLocal_85[132] = -0.5571f;
	fLocal_86[132] = 0.8304f;
	iLocal_123[132] = 133;
	fLocal_87[132] = 120647f;
	iLocal_173[132] = joaat("sadler");
	Local_147[133 /*3*/] = { 2447.9417f, -684.5295f, 62.5512f };
	fLocal_83[133] = -0.0044f;
	fLocal_84[133] = 0.007f;
	fLocal_85[133] = -0.6585f;
	fLocal_86[133] = 0.7526f;
	iLocal_123[133] = 134;
	fLocal_87[133] = 121967f;
	iLocal_173[133] = joaat("sandking");
	Local_147[134 /*3*/] = { 2210.5771f, -748.1284f, 66.6389f };
	fLocal_83[134] = 0.0036f;
	fLocal_84[134] = 0.0236f;
	fLocal_85[134] = 0.9151f;
	fLocal_86[134] = 0.4025f;
	iLocal_123[134] = 135;
	fLocal_87[134] = 129684f;
	iLocal_173[134] = joaat("mesa");
	Local_147[135 /*3*/] = { 2121.3787f, -849.5552f, 78.6098f };
	fLocal_83[135] = 0.0107f;
	fLocal_84[135] = 0.0167f;
	fLocal_85[135] = 0.893f;
	fLocal_86[135] = 0.4497f;
	iLocal_123[135] = 136;
	fLocal_87[135] = 133512f;
	iLocal_173[135] = joaat("sadler");
	Local_147[136 /*3*/] = { 1986.4703f, -906.1359f, 78.6676f };
	fLocal_83[136] = -0.0004f;
	fLocal_84[136] = 0.0006f;
	fLocal_85[136] = 0.847f;
	fLocal_86[136] = 0.5316f;
	iLocal_123[136] = 137;
	fLocal_87[136] = 138396f;
	iLocal_173[136] = joaat("emperor");
	Local_147[137 /*3*/] = { 2004.7029f, -986.553f, 82.1703f };
	fLocal_83[137] = -0.0683f;
	fLocal_84[137] = 0.0124f;
	fLocal_85[137] = -0.1439f;
	fLocal_86[137] = 0.9872f;
	iLocal_123[137] = 138;
	fLocal_87[137] = 142686f;
	iLocal_173[137] = joaat("mesa");
}

void func_431(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3A049
{
	struct<3> Var0;
	StringCopy(&cLocal_163, sParam0, 64);
	bLocal_59 = true;
	iLocal_64 = 0;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_133 = iParam1;
	iLocal_134 = 0;
	iLocal_135 = 0;
	iLocal_136 = 0;
	iLocal_140 = 0;
	iLocal_143 = 0;
	iLocal_141 = -1;
	iLocal_142 = -1;
	iLocal_144 = 0;
	iLocal_145 = 0;
	fLocal_118 = 0f;
	fLocal_119 = 0f;
	fLocal_104 = 0f;
	iLocal_65 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_151.f_0 = (Var0.f_0 - 100f);
		Local_151.f_1 = (Var0.f_1 - 100f);
		Local_151.f_2 = (Var0.f_2 - 100f);
		Local_152.f_0 = (Var0.f_0 + 100f);
		Local_152.f_1 = (Var0.f_1 + 100f);
		Local_152.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_151, Local_152, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_172);
	__LIB_11__::func_121();
	if (bParam3)
	{
		__LIB_32__::func_762(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_432();
}

void func_432()//Position - 0x3A16C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_179[iVar0] = 0;
		Local_147[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_83[iVar0] = 0f;
		fLocal_84[iVar0] = 0f;
		fLocal_85[iVar0] = 0f;
		fLocal_86[iVar0] = 0f;
		iLocal_123[iVar0] = 0;
		fLocal_87[iVar0] = 0f;
		iLocal_124[iVar0] = 0;
		iLocal_173[iVar0] = 0;
		iLocal_125[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_180[iVar0] = 0;
		iVar0++;
	}
	iLocal_130 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_181[iVar0] = 0;
		Local_148[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_98[iVar0] = 0f;
		fLocal_99[iVar0] = 0f;
		fLocal_100[iVar0] = 0f;
		fLocal_101[iVar0] = 0f;
		iLocal_129[iVar0] = 0;
		iLocal_174[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_183[iVar0] = 0;
		iVar0++;
	}
	iLocal_132 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_182[iVar0] = 0;
		Local_149[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_92[iVar0] = 0f;
		fLocal_93[iVar0] = 0f;
		fLocal_94[iVar0] = 0f;
		fLocal_95[iVar0] = 0f;
		iLocal_126[iVar0] = 0;
		fLocal_96[iVar0] = 0f;
		iLocal_127[iVar0] = 0;
		iLocal_175[iVar0] = 0;
		iLocal_128[iVar0] = 0;
		iVar0++;
	}
	iLocal_131 = 0;
	iLocal_134 = 0;
	iLocal_137 = 0;
	iLocal_138 = 0;
	iLocal_139 = 0;
}

void func_438()//Position - 0x3A466
{
	switch (iLocal_1931)
	{
		case 0:
			iLocal_200 = 0;
			VEHICLE::REQUEST_VEHICLE_RECORDING(0, "BB_FINALE");
			STREAMING::REQUEST_PTFX_ASSET();
			if (__LIB_0__::func_294() && !bLocal_1936)
			{
				MISC::CLEAR_AREA(1334.851f, -2555.5942f, 45.58296f, 200f, true, false, false, false);
				iLocal_1931 = 3;
			}
			else
			{
				func_462();
				if (bLocal_505)
				{
					iLocal_1931++;
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				__LIB_32__::func_805(&Local_241, 0, 0, 2000, 1, 0, 0, 1);
				CAM::DESTROY_ALL_CAMS(false);
				MISC::CLEAR_AREA(1334.851f, -2555.5942f, 45.58296f, 200f, true, false, false, false);
				FIRE::STOP_FIRE_IN_RANGE(1334.851f, -2555.5942f, 45.58296f, 200f);
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)) && ENTITY::DOES_ENTITY_EXIST(Local_227[1 /*2*/]))
				{
					func_208(1);
					Local_228[1 /*2*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
					VEHICLE::SET_VEHICLE_LIGHTS(Local_227[1 /*2*/], 2);
					PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					PED::CLEAR_PED_PROP(func_329(), 0);
					RECORDING::REPLAY_START_EVENT(4);
					iLocal_1931++;
				}
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
				{
					if (__LIB_26__::func_465())
					{
						Local_227[2 /*2*/] = __LIB_10__::func_691();
						if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_11__::func_687()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_11__::func_687())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_11__::func_687())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_11__::func_687()))
						{
							if (__LIB_11__::func_687() == joaat("bus"))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
									{
										ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1360.2174f, -2531.797f, 46.8857f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 322.7698f);
									}
								}
							}
							else if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
								{
									ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], Local_196, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], fLocal_197);
								}
							}
							__LIB_41__::func_666(0f, 0f, 0f, 0f, 1, 1);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_227[2 /*2*/], true, false);
							VEHICLE::DELETE_VEHICLE(&(Local_227[2 /*2*/]));
							while (!__LIB_40__::func_994(&(Local_227[2 /*2*/]), 1, Local_196, fLocal_197, 1, 1))
							{
								SYSTEM::WAIT(0);
							}
						}
					}
					else
					{
						while (!__LIB_40__::func_994(&(Local_227[2 /*2*/]), 1, Local_196, fLocal_197, 1, 1))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
				else
				{
					if (ENTITY::GET_ENTITY_MODEL(Local_227[2 /*2*/]) == joaat("bus"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
						{
							ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1360.2174f, -2531.797f, 46.8857f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 322.7698f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_227[2 /*2*/], 5f);
							AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_227[2 /*2*/], false);
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], Local_196, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], fLocal_197);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_227[2 /*2*/], 5f);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_227[2 /*2*/], false);
					}
					iLocal_1931 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_200 == 0)
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "BB_FINALE"))
				{
					func_431("BB_FINALE", 0, 0, 1);
					iLocal_200 = 1;
				}
			}
			if (!iLocal_496)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 38400)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINA_START");
					iLocal_496 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				PED::SET_PED_USING_ACTION_MODE(func_205(), true, 10000, 0);
				TASK::TASK_ENTER_VEHICLE(func_205(), Local_227[2 /*2*/], -1, -1, 3f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(func_205(), joaat("MotionState_Sprint"), false, 1, false);
				RECORDING::REPLAY_STOP_EVENT();
				bLocal_498 = true;
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				func_439();
				PED::SET_PED_INTO_VEHICLE(Local_228[1 /*2*/], Local_227[1 /*2*/], -1);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_227[1 /*2*/], true);
				iLocal_499 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				func_430();
				iLocal_500 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_468))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_468, func_205());
				}
				iLocal_503 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_504 = 1;
			}
			if (((((bLocal_498 && iLocal_499) && iLocal_500) && iLocal_503) && iLocal_504) || __LIB_0__::func_294())
			{
				if (!iLocal_496)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINA_START");
					iLocal_496 = 1;
				}
				CUTSCENE::REMOVE_CUTSCENE();
				__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[1 /*2*/], false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_227[1 /*2*/], 0, "BB_FINALE", true);
					VEHICLE::SET_PLAYBACK_SPEED(Local_227[1 /*2*/], 1f);
				}
				iLocal_1931 = 0;
				func_207(1);
			}
			break;
	}
}

void func_439()//Position - 0x3A969
{
	if (__LIB_11__::func_720(func_329()))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_329(), true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_329(), iLocal_442);
		AUDIO::STOP_PED_SPEAKING(func_329(), true);
		PED::SET_PED_CONFIG_FLAG(func_329(), 208, true);
	}
}

void func_462()//Position - 0x3CAF1
{
	if (!bLocal_505)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("FIN_A_INT", 8);
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_232(func_203());
		}
		if (__LIB_0__::func_90())
		{
			__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
			while (!__LIB_40__::func_994(&(Local_227[1 /*2*/]), 2, 1317.8f, -2560.5f, 45.1f, 0f, 1, 1))
			{
				SYSTEM::WAIT(0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_227[1 /*2*/], "Trevors_car", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("Player_Two"), 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_205(), joaat("WEAPON_PISTOL"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_205(), joaat("WEAPON_PISTOL"), 25, true, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_468))
			{
				iLocal_468 = __LIB_20__::func_765(func_205(), joaat("WEAPON_PISTOL"), 1, 0, 0, 0, 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_468, "Franklins_weapon", 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			bLocal_505 = true;
		}
	}
}

void func_467()//Position - 0x3D0F3
{
	iLocal_225 = 0;
	while (iLocal_225 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_228[iLocal_225 /*2*/]))
		{
			if (PED::IS_PED_INJURED(Local_228[iLocal_225 /*2*/]))
			{
				if (Local_228[iLocal_225 /*2*/] == Local_228[0 /*2*/])
				{
					func_331(2);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_228[iLocal_225 /*2*/]));
			}
		}
		iLocal_225++;
	}
	iLocal_225 = 0;
	while (iLocal_225 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_227[iLocal_225 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[iLocal_225 /*2*/], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_227[iLocal_225 /*2*/]));
			}
		}
		iLocal_225++;
	}
	func_468();
}

void func_468()//Position - 0x3D19B
{
	if (iLocal_506)
	{
	}
}

void func_469()//Position - 0x3D1A9
{
	struct<3> Var0;
	float fVar1;
	if (iLocal_1935 == 1)
	{
		if (iLocal_1929 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				func_207(iLocal_1934);
			}
		}
		else if (iLocal_1929 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_754();
			__LIB_11__::func_701(&uLocal_508);
			func_208(iLocal_1934);
			while (!__LIB_26__::func_476(&uLocal_508))
			{
				SYSTEM::WAIT(0);
			}
			if (!__LIB_0__::func_295())
			{
				func_748(iLocal_1934, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_11__::func_727(&uLocal_508, Var0, 50f, 0);
			}
			switch (iLocal_1930)
			{
				case 0:
					func_745();
					break;
				case 1:
					func_744();
					break;
				case 2:
					func_742();
					break;
				case 3:
					func_741();
					break;
				case 4:
					func_475();
					break;
				case 5:
					__LIB_26__::func_582();
					break;
			}
			func_470();
			iLocal_1935 = 0;
			if (!__LIB_0__::func_295())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_470()//Position - 0x3D2D8
{
	func_439();
	func_471();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
}

void func_471()//Position - 0x3D300
{
	if (__LIB_11__::func_720(func_203()))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_203(), true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_203(), iLocal_441);
		PED::SET_PED_ACCURACY(func_203(), 100);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_203(), 27, true);
		AUDIO::STOP_PED_SPEAKING(func_203(), true);
		PED::SET_PED_CONFIG_FLAG(func_203(), 208, true);
	}
}

void func_475()//Position - 0x3D45F
{
	CLOCK::SET_CLOCK_TIME(20, 45, 0);
	AUDIO::CANCEL_MUSIC_EVENT("FINA_CHASE");
	Local_228[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!func_707(1663.7246f, -1732.3535f, 111.2844f, 18.3814f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_476(&(Local_228[0 /*2*/]), 0, 1731.36f, -1621.64f, 111.43f, 188.9595f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	CUTSCENE::REQUEST_CUTSCENE("fin_a_ext", 8);
	func_232(0);
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

int func_476(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3D4FD
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_6__::func_757(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__::func_464(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_699(*iParam0);
			__LIB_32__::func_750(*iParam0, 1, 0);
			__LIB_26__::func_579(*iParam0);
			__LIB_26__::func_512(*iParam0);
			func_478(*iParam0, bParam6);
			__LIB_0__::func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_478(int iParam0, bool bParam1)//Position - 0x3D615
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_11__::func_843(iVar0))
	{
		__LIB_12__::func_96(iVar0, 0);
		func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_493(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_12__::func_96(iVar0, 0);
			func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_493(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_480(iParam0, 3, 169))
					{
						func_674(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_480(iParam0, 12, 6))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 11))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 12, 10))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 12, 50))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 14, 59))
			{
				func_674(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_480(iParam0, 8, 22))
			{
				func_674(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_480(iParam0, 12, 14))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_480(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 4))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 12, 3))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 14, 82))
			{
				func_674(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_480(iParam0, 8, 76))
			{
				func_674(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_480(iParam0, 12, 1))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_480(iParam0, 12, 12))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 12, 15))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_480(iParam0, 3, 71))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_480(iParam0, 12, 7))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 12, 6))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_480(iParam0, 14, 88))
			{
				func_674(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_480(iParam0, 8, 17))
			{
				func_674(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_480(iParam0, 12, 11))
			{
				func_674(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_480(int iParam0, int iParam1, int iParam2)//Position - 0x3DC9B
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
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
				if (!func_480(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_480(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_480(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, iVar2, iVar1, -1) };
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
			if (!func_480(iParam0, 14, uVar8[iVar7]))
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

void func_493(int iParam0, int iParam1)//Position - 0x3FC4B
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_18__::func_168(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_673(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_500(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_24__::func_948(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__::func_816();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_500(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x402D5
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
			if (func_671(iParam0, iVar1, &iVar2, 0))
			{
				func_674(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_670(iParam0, iVar1, &iVar2))
			{
				func_674(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_668(iParam0);
			__LIB_0__::func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_427(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_503(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_503(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_503(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_0__::func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_796(161, 1, -1, 1);
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

int func_503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x407B1
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
			func_627(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 10, 0, -1) };
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
						func_627(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_627(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_503(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_627(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_624(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_503(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_468();
			if (iVar17 != -1)
			{
				__LIB_25__::func_43(iVar17, 0, iParam10);
			}
			func_618(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_627(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__::func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_627(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_503(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_609(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_503(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_608(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_503(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__::func_821(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_503(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_503(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar32, -1) };
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
								func_503(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
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
								func_503(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_503(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_503(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_618(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_608(iVar5, func_624(iParam0, 8, -1), iParam2, func_624(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_534(2160, iParam10, 0);
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
				func_546(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_608(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_618(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_608(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
				iVar52 = __LIB_0__::func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_424(135, iParam10);
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
				__LIB_31__::func_910(iParam0, iParam10);
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
						func_503(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_503(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_608(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_608(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_608(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_503(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_523(iParam0, 9, iVar63))
						{
							func_503(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_503(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_503(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_534(2042, -1, 0);
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
						func_503(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_624(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_624(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_503(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_503(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_503(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_503(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_503(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_503(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_503(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_503(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_503(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_503(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_609(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_503(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_503(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_504(iParam0, &uVar4))
		{
			func_503(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_503(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_503(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_503(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_624(iParam0, 3, -1), iVar10);
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
				func_503(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_504(int iParam0, var uParam1)//Position - 0x4265B
{
	int iVar0;
	int iVar1;
	*uParam1 = func_624(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_534(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_534(754, Global_78127, 0) == 0 && __LIB_0__::func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				if (__LIB_0__::func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_534(755, Global_78127, 0);
		if (!func_523(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_534(753, Global_78127, 0);
			}
			__LIB_0__::func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_523(int iParam0, int iParam1, int iParam2)//Position - 0x46917
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar0, iParam1, iParam2, -1) };
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
				if (!func_523(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_523(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_523(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_0__::func_534(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_523(iParam0, 14, uVar11[iVar10]))
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
						return func_523(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_523(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_546(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4D62C
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__::func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__::func_43(iVar1, 1, iParam2);
	}
	func_547(iParam0, bParam3, 0, -1);
}

void func_547(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4D679
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
		bVar3 = func_588(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_579(iParam0, iParam3);
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
			if (__LIB_18__::func_432(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_432(123, iVar0))
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
					if (__LIB_18__::func_432(iVar10, iVar0))
					{
						if (__LIB_25__::func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_925(Var9.f_2, Var9.f_3, iVar10))
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

int func_579(int iParam0, int iParam1)//Position - 0x5C96D
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_624(iParam0, 11, -1);
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
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
				iVar5 = func_624(iParam0, 11, -1);
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

int func_588(int iParam0, bool bParam1)//Position - 0x5CDCB
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
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_624(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(72, -1))
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
						iVar3 = func_624(iParam0, 11, -1);
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
						iVar5 = func_624(iParam0, 8, -1);
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
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_624(iParam0, 11, -1), 0);
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
						iVar8 = func_624(iParam0, 11, -1);
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
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_624(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_624(iParam0, 11, -1), 0);
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
						iVar12 = func_624(iParam0, 8, -1);
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

int func_608(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x65C5C
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
					iVar0 = func_608(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_608(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_609(int iParam0)//Position - 0x66F97
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
		if (!func_614(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_614(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_614(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x67961
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_624(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_618(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6A349
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_668(iParam0))
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
			__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_42(iVar0, iParam2, 13) && !__LIB_25__::func_42(iVar0, iParam2, 14)) && !__LIB_25__::func_42(iVar0, iParam2, 15)) && !__LIB_25__::func_42(iVar0, iParam2, 16)) && !__LIB_25__::func_42(iVar0, iParam2, 71)) && !__LIB_25__::func_42(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__::func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__::func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_624(int iParam0, int iParam1, int iParam2)//Position - 0x6A5FA
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
				if (func_523(iParam0, iParam1, iVar0))
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
				if (func_523(iParam0, iParam1, iVar1))
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

void func_627(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6A779
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
		Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_627(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_627(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_627(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_627(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_627(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_627(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_627(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_627(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_627(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_627(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_668(int iParam0)//Position - 0x83533
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_624(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_624(iParam0, 11, -1);
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

int func_670(int iParam0, int iParam1, int iParam2)//Position - 0x8388D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_480(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_671(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x83919
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_480(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_673(int iParam0, int iParam1, int iParam2)//Position - 0x83BD9
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
				if (func_480(iParam0, iParam1, iVar0))
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
				if (func_480(iParam0, iParam1, iVar1))
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

int func_674(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x83C7A
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_673(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_671(iParam0, iVar10, &iVar4, 1))
							{
								func_674(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_674(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__::func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_674(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_674(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_674(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_674(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_674(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_674(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_671(iParam0, iVar10, &iVar4, 0))
		{
			func_674(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_670(iParam0, iVar10, &iVar4))
		{
			func_674(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_699(int iParam0)//Position - 0x869D8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_18__::func_168(iParam0);
	if (__LIB_0__::func_43(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__::func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_500(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_673(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_700(__LIB_6__::func_757(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_673(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_673(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_700(__LIB_6__::func_757(0), 3, 70, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 3, 71, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 3, 72, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 3, 73, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 3, 74, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 3, 75, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 4, 41, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 4, 42, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 4, 43, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 4, 44, 1, 0, 0, 0);
					func_700(__LIB_6__::func_757(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_673(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_500(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_700(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x86C35
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_703(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_703(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x86DF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
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
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_703(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_703(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_82(iParam0, 14, uVar4[iVar2], 1);
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
								func_703(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_703(iParam0, 14, iVar5, 1, 0);
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
								func_703(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_703(iParam0, 14, 17, 1, 0);
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

int func_707(struct<3> Param0, float fParam1)//Position - 0x873D5
{
	if (__LIB_24__::func_934())
	{
		if (((!VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_9__::func_997()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_9__::func_997())) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_9__::func_997())) && !VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_9__::func_997()))
		{
			__LIB_32__::func_493();
			while (!__LIB_26__::func_580())
			{
				SYSTEM::WAIT(0);
			}
			Local_227[2 /*2*/] = __LIB_39__::func_860(Param0, fParam1);
			return 1;
		}
		else if (!__LIB_40__::func_994(&(Local_227[2 /*2*/]), 1, Param0, fParam1, 1, 1))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (!__LIB_40__::func_994(&(Local_227[2 /*2*/]), 1, Param0, fParam1, 1, 1))
	{
		return 0;
	}
	return 1;
}

void func_741()//Position - 0x88885
{
	Local_228[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!func_707(1728.3752f, -1610.3052f, 111.4705f, 160.3058f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_476(&(Local_228[0 /*2*/]), 0, 1731.6616f, -1615.9888f, 111.43713f, -162.95f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__::func_994(&(Local_227[0 /*2*/]), 0, 1728.2063f, -1623.8717f, 111.4329f, 269.6653f, 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_476(&(Local_228[1 /*2*/]), 2, 1731.381f, -1620.509f, 111.428f, -57f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__::func_994(&(Local_227[1 /*2*/]), 2, 1732.2578f, -1626.3915f, 111.4349f, 216.9961f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_KILL_RESTART");
}

void func_742()//Position - 0x88995
{
	CUTSCENE::REMOVE_CUTSCENE();
	Local_228[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!func_707(1728.3752f, -1610.3052f, 111.4705f, 160.3058f))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__::func_994(&(Local_227[1 /*2*/]), 2, 1739.8234f, -1556.4989f, 112.2425f, 317.3613f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_743(&(Local_228[1 /*2*/]), 2, Local_227[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__::func_994(&(Local_227[0 /*2*/]), 0, 1647.7448f, -1646.35f, 111.228f, 269.6557f, 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	CUTSCENE::REQUEST_CUTSCENE("FIN_A_MCS_1", 8);
	func_232(0);
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(Local_227[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_RESTART_CHASE");
}

int func_743(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x88A82
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_6__::func_757(iParam1);
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
				__LIB_26__::func_464(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_699(*iParam0);
				__LIB_32__::func_750(*iParam0, 1, 0);
				__LIB_26__::func_579(*iParam0);
				__LIB_26__::func_512(*iParam0);
				func_478(*iParam0, bParam6);
				__LIB_0__::func_349(*iParam0);
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

void func_744()//Position - 0x88B34
{
	Local_228[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	while (!__LIB_40__::func_994(&(Local_227[1 /*2*/]), 2, 1374.2235f, -2531.8555f, 48.2458f, 317.3613f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_743(&(Local_228[1 /*2*/]), 2, Local_227[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Local_227[1 /*2*/], true);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_228[1 /*2*/], true);
	while (!func_707(1361.9222f, -2538.0073f, 46.9311f, 318.1483f))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(Local_227[2 /*2*/], -1, 1);
	}
	else
	{
		PED::SET_PED_INTO_VEHICLE(func_205(), Local_227[2 /*2*/], -1);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_227[2 /*2*/], 5f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_227[2 /*2*/], true, true, false);
		}
	}
	if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
	{
		PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 4096, -1);
	}
	iLocal_1937 = 1;
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_RESTART_CHASE");
}

void func_745()//Position - 0x88C5A
{
	Local_228[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__::func_294())
	{
		CLOCK::SET_CLOCK_TIME(19, 45, 0);
		while (!__LIB_40__::func_994(&(Local_227[1 /*2*/]), 2, 1374.2235f, -2531.8555f, 48.2458f, 317.3613f, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_743(&(Local_228[1 /*2*/]), 2, Local_227[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_707(Local_196, fLocal_197))
		{
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__::func_295())
		{
			__LIB_6__::func_775(0, -1, 1);
		}
		else
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_748(int iParam0, var uParam1, var uParam2)//Position - 0x88DDD
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1337.3591f, -2550.0056f, 46.16376f };
			*uParam2 = -101.35f;
			break;
		case 1:
			*uParam1 = { 1337.3591f, -2550.0056f, 46.16376f };
			*uParam2 = -101.35f;
			break;
		case 2:
			*uParam1 = { 1739.8234f, -1556.4989f, 112.2425f };
			*uParam2 = 197.39f;
			break;
		case 3:
			*uParam1 = { 1731.5767f, -1615.9362f, 112.4401f };
			*uParam2 = -154.56f;
			break;
		case 4:
			*uParam1 = { 1731.3616f, -1616.1272f, 111.4371f };
			*uParam2 = -154.56f;
			break;
		case 5:
			*uParam1 = { 1670.5723f, -1742.9011f, 111.2739f };
			*uParam2 = 59.94f;
			break;
	}
}

void func_754()//Position - 0x89B33
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	iLocal_225 = 0;
	while (iLocal_225 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_228[iLocal_225 /*2*/]) && !PED::IS_PED_INJURED(Local_228[iLocal_225 /*2*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_228[iLocal_225 /*2*/], false))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_228[iLocal_225 /*2*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_228[iLocal_225 /*2*/], false), true) + Vector(0f, -2f, 0f));
			}
			if (Local_228[iLocal_225 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::DELETE_PED(&(Local_228[iLocal_225 /*2*/]));
			}
		}
		iLocal_225++;
	}
	iLocal_225 = 0;
	while (iLocal_225 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_227[iLocal_225 /*2*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_227[iLocal_225 /*2*/]));
		}
		iLocal_225++;
	}
	__LIB_0__::func_123(&iLocal_468);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_227[0 /*2*/]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_227[0 /*2*/], false);
	}
	MISC::SET_TIME_SCALE(1f);
	bLocal_505 = false;
	iLocal_1937 = 0;
	iLocal_506 = 0;
	func_111(0);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, true, false, false, false);
	__LIB_0__::func_296();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_9__::func_981(&uLocal_229, 0, 0);
	if (HUD::DOES_BLIP_EXIST(iLocal_443))
	{
		HUD::REMOVE_BLIP(&iLocal_443);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	FIRE::STOP_FIRE_IN_RANGE(1734.4302f, -1623.5204f, 111.42328f, 100f);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_18__::func_192(&iLocal_251, 1, 0);
	__LIB_20__::func_615(&iLocal_251, 0);
	if (!__LIB_0__::func_294())
	{
		STREAMING::REMOVE_IPL("DES_tankercrash");
		STREAMING::REMOVE_IPL("tankercrash_grp1");
		STREAMING::REMOVE_IPL("tankercrash_grp2");
		STREAMING::REMOVE_IPL("DES_tankerexp");
		STREAMING::REMOVE_IPL("tankerexp_grp0");
		STREAMING::REMOVE_IPL("tankerexp_grp1");
		STREAMING::REMOVE_IPL("tankerexp_grp2");
	}
	AUDIO::STOP_AUDIO_SCENES();
}

void func_763()//Position - 0x89FF6
{
	switch (iLocal_1929)
	{
		case 1:
			iLocal_1929 = 2;
			iLocal_1931 = -1;
			break;
		case 2:
			iLocal_1929 = 3;
			iLocal_1931 = 0;
			iLocal_1930 = iLocal_1932;
			break;
		case 3:
			iLocal_1932 = -1;
			iLocal_1929 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1933) > 2500)
			{
				iLocal_1933 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_767()//Position - 0x8A23C
{
	struct<3> Var0;
	var uVar1;
	Local_228[2 /*2*/] = PLAYER::PLAYER_PED_ID();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	__LIB_0__::func_54(0, 1);
	PED::ADD_RELATIONSHIP_GROUP("trevor_rel", &iLocal_442);
	PED::ADD_RELATIONSHIP_GROUP("michael_rel", &iLocal_441);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_441, iLocal_442);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_442, iLocal_441);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_442, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_441, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_441);
	PATHFIND::SET_ROADS_IN_AREA(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, false, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(10, false);
	MISC::ENABLE_DISPATCH_SERVICE(9, false);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(1, 0);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(2, 0);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(8, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), true);
	PED::ADD_SCENARIO_BLOCKING_AREA(1740.295f, -1602.1842f, 110f, 1699.4044f, -1646.4086f, 116.52637f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(1369.179f, -2546.993f, 45f, 1372.9987f, -2542.3328f, 48f, false, true, true, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(1506.587f, -2531.957f, 35f, 1463.0651f, -1962.4237f, 130f, 320f, true, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(1467.8223f, -1875.5671f, 35f, 1883.5908f, -1232.3418f, 130f, 450f, true, false, true);
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	if (__LIB_0__::func_294() || __LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_294())
		{
			iLocal_1934 = __LIB_0__::func_315();
			if (iLocal_1934 == 0)
			{
				iLocal_1934 = 1;
			}
			if (Global_94618)
			{
				iLocal_1934++;
			}
			if (iLocal_1934 == 1 || iLocal_1934 == 2)
			{
				STREAMING::REQUEST_IPL("DES_tankercrash");
			}
			if (iLocal_1934 == 3)
			{
				STREAMING::REMOVE_IPL("DES_tankercrash");
				STREAMING::REMOVE_IPL("tankercrash_grp1");
				STREAMING::REMOVE_IPL("tankercrash_grp2");
				STREAMING::REMOVE_IPL("tankerexp_grp0");
				STREAMING::REQUEST_IPL("DES_tankerexp");
			}
			if (iLocal_1934 == 4)
			{
				STREAMING::REMOVE_IPL("DES_tankerexp");
				STREAMING::REQUEST_IPL("tankerexp_grp2");
			}
			if (iLocal_1934 >= 5)
			{
				iLocal_1934 = 5;
			}
			bLocal_1936 = false;
		}
		else if (__LIB_0__::func_2(0))
		{
			STREAMING::REMOVE_IPL("DES_tankerexp");
			STREAMING::REMOVE_IPL("tankerexp_grp1");
			STREAMING::REMOVE_IPL("tankerexp_grp2");
			STREAMING::REMOVE_IPL("tankerexp_grp3");
			STREAMING::REQUEST_IPL("DES_tankercrash");
			STREAMING::REQUEST_IPL("tankerexp_grp0");
			iLocal_1934 = 0;
		}
		if (__LIB_0__::func_294())
		{
			func_748(iLocal_1934, &Var0, &uVar1);
			__LIB_11__::func_728(Var0, uVar1, 1, 0);
		}
		iLocal_1935 = 1;
	}
	else
	{
		bLocal_1936 = false;
		func_112(0, "Stage 0: meet", 0, 0, 0, 1);
		iLocal_1930 = 0;
		func_207(iLocal_1930);
		func_208(0);
		while (!__LIB_26__::func_476(&uLocal_508))
		{
			SYSTEM::WAIT(0);
		}
	}
	__LIB_0__::func_367(1);
	iLocal_1931 = 0;
}

void func_772()//Position - 0x8A632
{
	Local_241.f_1 = __LIB_13__::func_95();
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (Local_241.f_2 == 0)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_226 = 0;
			CUTSCENE::REQUEST_CUTSCENE("FIN_A_INT", 8);
		}
	}
	while (!__LIB_42__::func_31(24, &Local_241, 1, 0, 0, 1, 0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			func_232(func_203());
		}
		HUD::DISPLAY_RADAR(false);
		HUD::DISPLAY_HUD(false);
		SYSTEM::WAIT(0);
		if (!iLocal_226 && Local_241.f_2 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1335.7966f, -2550.458f, 46.1957f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 138.6753f);
				}
			}
			MISC::CLEAR_AREA(1334.851f, -2555.5942f, 45.58296f, 200f, true, false, false, false);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
			{
				if (__LIB_26__::func_465())
				{
					Local_227[2 /*2*/] = __LIB_10__::func_691();
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_11__::func_687()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_11__::func_687())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_11__::func_687())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_11__::func_687()))
					{
						if (__LIB_11__::func_687() == joaat("bus"))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
								{
									ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1360.2174f, -2531.797f, 46.8857f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 322.7698f);
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_227[2 /*2*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
							{
								ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], Local_196, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], fLocal_197);
							}
						}
						__LIB_41__::func_666(0f, 0f, 0f, 0f, 1, 1);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_227[2 /*2*/], true, false);
						VEHICLE::DELETE_VEHICLE(&(Local_227[2 /*2*/]));
						while (!__LIB_40__::func_994(&(Local_227[2 /*2*/]), 1, Local_196, fLocal_197, 1, 1))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
				else
				{
					while (!__LIB_40__::func_994(&(Local_227[2 /*2*/]), 1, Local_196, fLocal_197, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(Local_227[2 /*2*/]) == joaat("bus"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], 1360.2174f, -2531.797f, 46.8857f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], 322.7698f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_227[2 /*2*/], 5f);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_227[2 /*2*/], false);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_227[2 /*2*/], false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_227[2 /*2*/], Local_196, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_227[2 /*2*/], fLocal_197);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_227[2 /*2*/], 5f);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_227[2 /*2*/], false);
			}
			iLocal_226 = 1;
			__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
		}
	}
}

void func_804()//Position - 0x8CC9D
{
	AUDIO::TRIGGER_MUSIC_EVENT("FINA_FAIL");
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	__LIB_0__::func_54(1, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	iLocal_225 = 0;
	while (iLocal_225 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_228[iLocal_225 /*2*/]) && !PED::IS_PED_INJURED(Local_228[iLocal_225 /*2*/]))
		{
			if (Local_228[iLocal_225 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				__LIB_0__::func_124(&(Local_228[iLocal_225 /*2*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_228[iLocal_225 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_228[iLocal_225 /*2*/].f_1));
			}
		}
		iLocal_225++;
	}
	iLocal_225 = 0;
	while (iLocal_225 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_227[iLocal_225 /*2*/]))
		{
			__LIB_0__::func_106(&(Local_227[iLocal_225 /*2*/]));
		}
		iLocal_225++;
	}
	__LIB_0__::func_123(&iLocal_468);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_481 == 0)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		CAM::DESTROY_ALL_CAMS(false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), false);
	MISC::SET_TIME_SCALE(1f);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (HUD::DOES_BLIP_EXIST(iLocal_443))
	{
		HUD::REMOVE_BLIP(&iLocal_443);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	__LIB_0__::func_296();
	__LIB_9__::func_981(&uLocal_229, 0, 0);
	__LIB_18__::func_192(&iLocal_251, 1, 0);
	__LIB_20__::func_615(&iLocal_251, 0);
	STREAMING::REMOVE_IPL("DES_tankercrash");
	__LIB_0__::func_367(0);
	__LIB_8__::func_770(0);
	__LIB_9__::func_485(20, 0);
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	AUDIO::STOP_STREAM();
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

void func_805()//Position - 0x8CE91
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
			iVar0 = __LIB_0__::func_323();
			if (iVar0 != -1)
			{
				if (!func_335(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__::func_260();
		}
	}
}

