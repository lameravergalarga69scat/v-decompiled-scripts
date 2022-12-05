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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	var uLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	float fLocal_86[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_88[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_89[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_90[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_96[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_97[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_98[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_99[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_100[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_101[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_102[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_103[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_104[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	int iLocal_126[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_127[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_128[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_129[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_130[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_131[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_132[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	struct<3> Local_150[150];
	struct<3> Local_151[25];
	struct<3> Local_152[40];
	struct<3> Local_153 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
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
	int iLocal_173[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_179[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_180[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_181[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_182[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	var uLocal_186 = 11;
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
	struct<3> Local_198 = { 0, 0, 0 } ;
	float fLocal_199 = 0f;
	struct<3> Local_200 = { 0, 0, 0 } ;
	float fLocal_201 = 0f;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_204 = { 0, 0, 0 } ;
	bool bLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = -1;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 1000;
	var uLocal_215 = 1000;
	var uLocal_216 = 0;
	struct<2> Local_217[9];
	struct<4> Local_218[11];
	var uLocal_219 = 16;
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
	struct<6> Local_384 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_385 = 0;
	var uLocal_386 = 1092616192;
	var uLocal_387 = 1101004800;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 3;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int* iLocal_411 = NULL;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 21;
	var uLocal_426 = 6;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 4;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 4;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 4;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 4;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 4;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 4;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 4;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	struct<21> Local_474 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	float fLocal_491 = 0f;
	bool bLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	bool bLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	bool bLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	float fLocal_526 = 0f;
	float fLocal_527 = 0f;
	bool bLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	float fLocal_532 = 0f;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = -1;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 1000;
	var uLocal_548 = 1000;
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	float fLocal_558 = 0f;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	char cLocal_578[24] = "";
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	char cLocal_582[24] = "";
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	int iLocal_586 = 0;
	char cLocal_587[24] = "";
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	char cLocal_591[24] = "";
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	int iLocal_595 = 0;
	struct<6> Local_596 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_597 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	bool bLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	bool bLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	bool bLocal_619 = 0;
	int iLocal_620 = 0;
	bool bLocal_621 = 0;
	bool bLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	float fLocal_625 = 0f;
	float fLocal_626 = 0f;
	var uLocal_627 = 30;
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
	var uLocal_710 = 0;
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
	var uLocal_778 = 10;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
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
	var uLocal_829 = 10;
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
	var uLocal_882 = 0;
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
	var uLocal_900 = 20;
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
	var uLocal_983 = 0;
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
	var uLocal_1001 = 20;
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
	var uLocal_1102 = 30;
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
	var uLocal_1164 = 0;
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
	var uLocal_1195 = 0;
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
	var uLocal_1245 = 0;
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
	var uLocal_1271 = 0;
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
	var uLocal_1283 = 5;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
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
	var uLocal_1314 = 7;
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
	var uLocal_1364 = 5;
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
	var uLocal_1390 = 3;
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
	var uLocal_1406 = 21;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
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
	var uLocal_1463 = 0;
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
	var uLocal_1489 = 0;
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
	var uLocal_1518 = 0;
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
	var uLocal_1531 = 10;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
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
	var uLocal_1549 = 0;
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
	var uLocal_1562 = 0;
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
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 5;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
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
	var uLocal_1608 = 5;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
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
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 11;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
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
	var uLocal_1655 = 12;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 12;
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
	var uLocal_1681 = 12;
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
	var uLocal_1694 = 9;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 9;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
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
	var uLocal_1726 = 0;
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
	var uLocal_1737 = 12;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 12;
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
	var uLocal_1763 = 12;
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
	var uLocal_1776 = 9;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 9;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
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
	var uLocal_1808 = 0;
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
	var uLocal_1819 = 12;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 12;
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
	var uLocal_1845 = 12;
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
	var uLocal_1858 = 9;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 9;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
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
	var uLocal_1890 = 0;
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
	var uLocal_1901 = 12;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 12;
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
	var uLocal_1927 = 12;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 9;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 9;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 12;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 12;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 12;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 9;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 9;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 12;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 12;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 12;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 9;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 9;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 12;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 12;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 12;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 9;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 9;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 12;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 12;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 12;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 9;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 9;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 12;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 12;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 12;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 9;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 9;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 12;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 12;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 12;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 9;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 9;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 12;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 12;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 12;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 9;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 9;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	int iLocal_2540 = 0;
	int iLocal_2541 = 0;
	int iLocal_2542 = 0;
	int iLocal_2543 = 0;
	int iLocal_2544 = 0;
	int iLocal_2545 = 0;
	int iLocal_2546 = 0;
	int iLocal_2547 = 0;
	int iLocal_2548 = 0;
	bool bLocal_2549 = 0;
	int iLocal_2550 = 0;
	bool bLocal_2551 = 0;
	int iLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 2;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 2;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 20;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = -1;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 1065353216;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = -1;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 1065353216;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = -1;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 1065353216;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = -1;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 1065353216;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = -1;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 1065353216;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = -1;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 1065353216;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = -1;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 1065353216;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = -1;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 1065353216;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = -1;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 1065353216;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = -1;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 1065353216;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = -1;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 1065353216;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = -1;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 1065353216;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = -1;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 1065353216;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = -1;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 1065353216;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = -1;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 1065353216;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = -1;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 1065353216;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = -1;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 1065353216;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = -1;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 1065353216;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = -1;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 1065353216;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = -1;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 1065353216;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 16;
	var uLocal_3705 = 0;
	var uLocal_3706 = -1082130432;
	var uLocal_3707 = 0;
	var uLocal_3708 = -1082130432;
	var uLocal_3709 = 0;
	var uLocal_3710 = -1082130432;
	var uLocal_3711 = 0;
	var uLocal_3712 = -1082130432;
	var uLocal_3713 = 0;
	var uLocal_3714 = -1082130432;
	var uLocal_3715 = 0;
	var uLocal_3716 = -1082130432;
	var uLocal_3717 = 0;
	var uLocal_3718 = -1082130432;
	var uLocal_3719 = 0;
	var uLocal_3720 = -1082130432;
	var uLocal_3721 = 0;
	var uLocal_3722 = -1082130432;
	var uLocal_3723 = 0;
	var uLocal_3724 = -1082130432;
	var uLocal_3725 = 0;
	var uLocal_3726 = -1082130432;
	var uLocal_3727 = 0;
	var uLocal_3728 = -1082130432;
	var uLocal_3729 = 0;
	var uLocal_3730 = -1082130432;
	var uLocal_3731 = 0;
	var uLocal_3732 = -1082130432;
	var uLocal_3733 = 0;
	var uLocal_3734 = -1082130432;
	var uLocal_3735 = 0;
	var uLocal_3736 = -1082130432;
	var uLocal_3737 = 16;
	var uLocal_3738 = 0;
	var uLocal_3739 = -1082130432;
	var uLocal_3740 = 0;
	var uLocal_3741 = -1082130432;
	var uLocal_3742 = 0;
	var uLocal_3743 = -1082130432;
	var uLocal_3744 = 0;
	var uLocal_3745 = -1082130432;
	var uLocal_3746 = 0;
	var uLocal_3747 = -1082130432;
	var uLocal_3748 = 0;
	var uLocal_3749 = -1082130432;
	var uLocal_3750 = 0;
	var uLocal_3751 = -1082130432;
	var uLocal_3752 = 0;
	var uLocal_3753 = -1082130432;
	var uLocal_3754 = 0;
	var uLocal_3755 = -1082130432;
	var uLocal_3756 = 0;
	var uLocal_3757 = -1082130432;
	var uLocal_3758 = 0;
	var uLocal_3759 = -1082130432;
	var uLocal_3760 = 0;
	var uLocal_3761 = -1082130432;
	var uLocal_3762 = 0;
	var uLocal_3763 = -1082130432;
	var uLocal_3764 = 0;
	var uLocal_3765 = -1082130432;
	var uLocal_3766 = 0;
	var uLocal_3767 = -1082130432;
	var uLocal_3768 = 0;
	var uLocal_3769 = -1082130432;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = -1082130432;
	var uLocal_3787 = -1082130432;
	var uLocal_3788 = 1;
	var uLocal_3789 = 1;
	var uLocal_3790 = 1;
	var uLocal_3791 = -1;
	var uLocal_3792 = -1;
	var uLocal_3793 = -1;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 2;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 2;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 20;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = -1;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 1065353216;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = -1;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 1065353216;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = -1;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 1065353216;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = -1;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 1065353216;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = -1;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 1065353216;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = -1;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 1065353216;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = -1;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 1065353216;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = -1;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 1065353216;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = -1;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 1065353216;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = -1;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 1065353216;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = -1;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 1065353216;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = -1;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 1065353216;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = -1;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 1065353216;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = -1;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 1065353216;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = -1;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 1065353216;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = -1;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 1065353216;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = -1;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 1065353216;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = -1;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 1065353216;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = -1;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 1065353216;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = -1;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 1065353216;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 16;
	var uLocal_4946 = 0;
	var uLocal_4947 = -1082130432;
	var uLocal_4948 = 0;
	var uLocal_4949 = -1082130432;
	var uLocal_4950 = 0;
	var uLocal_4951 = -1082130432;
	var uLocal_4952 = 0;
	var uLocal_4953 = -1082130432;
	var uLocal_4954 = 0;
	var uLocal_4955 = -1082130432;
	var uLocal_4956 = 0;
	var uLocal_4957 = -1082130432;
	var uLocal_4958 = 0;
	var uLocal_4959 = -1082130432;
	var uLocal_4960 = 0;
	var uLocal_4961 = -1082130432;
	var uLocal_4962 = 0;
	var uLocal_4963 = -1082130432;
	var uLocal_4964 = 0;
	var uLocal_4965 = -1082130432;
	var uLocal_4966 = 0;
	var uLocal_4967 = -1082130432;
	var uLocal_4968 = 0;
	var uLocal_4969 = -1082130432;
	var uLocal_4970 = 0;
	var uLocal_4971 = -1082130432;
	var uLocal_4972 = 0;
	var uLocal_4973 = -1082130432;
	var uLocal_4974 = 0;
	var uLocal_4975 = -1082130432;
	var uLocal_4976 = 0;
	var uLocal_4977 = -1082130432;
	var uLocal_4978 = 16;
	var uLocal_4979 = 0;
	var uLocal_4980 = -1082130432;
	var uLocal_4981 = 0;
	var uLocal_4982 = -1082130432;
	var uLocal_4983 = 0;
	var uLocal_4984 = -1082130432;
	var uLocal_4985 = 0;
	var uLocal_4986 = -1082130432;
	var uLocal_4987 = 0;
	var uLocal_4988 = -1082130432;
	var uLocal_4989 = 0;
	var uLocal_4990 = -1082130432;
	var uLocal_4991 = 0;
	var uLocal_4992 = -1082130432;
	var uLocal_4993 = 0;
	var uLocal_4994 = -1082130432;
	var uLocal_4995 = 0;
	var uLocal_4996 = -1082130432;
	var uLocal_4997 = 0;
	var uLocal_4998 = -1082130432;
	var uLocal_4999 = 0;
	var uLocal_5000 = -1082130432;
	var uLocal_5001 = 0;
	var uLocal_5002 = -1082130432;
	var uLocal_5003 = 0;
	var uLocal_5004 = -1082130432;
	var uLocal_5005 = 0;
	var uLocal_5006 = -1082130432;
	var uLocal_5007 = 0;
	var uLocal_5008 = -1082130432;
	var uLocal_5009 = 0;
	var uLocal_5010 = -1082130432;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = -1082130432;
	var uLocal_5028 = -1082130432;
	var uLocal_5029 = 1;
	var uLocal_5030 = 1;
	var uLocal_5031 = 1;
	var uLocal_5032 = -1;
	var uLocal_5033 = -1;
	var uLocal_5034 = -1;
	struct<2> Local_5035 = { 0, 0 } ;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 2;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 2;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 20;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = -1;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 1065353216;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = -1;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 1065353216;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = -1;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 1065353216;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = -1;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 1065353216;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = -1;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 1065353216;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = -1;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 1065353216;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = -1;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 1065353216;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = -1;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 1065353216;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = -1;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 1065353216;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = -1;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 1065353216;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = -1;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 1065353216;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = -1;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 1065353216;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = -1;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 1065353216;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = -1;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 1065353216;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = -1;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 1065353216;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = -1;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 1065353216;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = -1;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 1065353216;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = -1;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 1065353216;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = -1;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 1065353216;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = -1;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 1065353216;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 16;
	var uLocal_6186 = 0;
	var uLocal_6187 = -1082130432;
	var uLocal_6188 = 0;
	var uLocal_6189 = -1082130432;
	var uLocal_6190 = 0;
	var uLocal_6191 = -1082130432;
	var uLocal_6192 = 0;
	var uLocal_6193 = -1082130432;
	var uLocal_6194 = 0;
	var uLocal_6195 = -1082130432;
	var uLocal_6196 = 0;
	var uLocal_6197 = -1082130432;
	var uLocal_6198 = 0;
	var uLocal_6199 = -1082130432;
	var uLocal_6200 = 0;
	var uLocal_6201 = -1082130432;
	var uLocal_6202 = 0;
	var uLocal_6203 = -1082130432;
	var uLocal_6204 = 0;
	var uLocal_6205 = -1082130432;
	var uLocal_6206 = 0;
	var uLocal_6207 = -1082130432;
	var uLocal_6208 = 0;
	var uLocal_6209 = -1082130432;
	var uLocal_6210 = 0;
	var uLocal_6211 = -1082130432;
	var uLocal_6212 = 0;
	var uLocal_6213 = -1082130432;
	var uLocal_6214 = 0;
	var uLocal_6215 = -1082130432;
	var uLocal_6216 = 0;
	var uLocal_6217 = -1082130432;
	var uLocal_6218 = 16;
	var uLocal_6219 = 0;
	var uLocal_6220 = -1082130432;
	var uLocal_6221 = 0;
	var uLocal_6222 = -1082130432;
	var uLocal_6223 = 0;
	var uLocal_6224 = -1082130432;
	var uLocal_6225 = 0;
	var uLocal_6226 = -1082130432;
	var uLocal_6227 = 0;
	var uLocal_6228 = -1082130432;
	var uLocal_6229 = 0;
	var uLocal_6230 = -1082130432;
	var uLocal_6231 = 0;
	var uLocal_6232 = -1082130432;
	var uLocal_6233 = 0;
	var uLocal_6234 = -1082130432;
	var uLocal_6235 = 0;
	var uLocal_6236 = -1082130432;
	var uLocal_6237 = 0;
	var uLocal_6238 = -1082130432;
	var uLocal_6239 = 0;
	var uLocal_6240 = -1082130432;
	var uLocal_6241 = 0;
	var uLocal_6242 = -1082130432;
	var uLocal_6243 = 0;
	var uLocal_6244 = -1082130432;
	var uLocal_6245 = 0;
	var uLocal_6246 = -1082130432;
	var uLocal_6247 = 0;
	var uLocal_6248 = -1082130432;
	var uLocal_6249 = 0;
	var uLocal_6250 = -1082130432;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = -1082130432;
	var uLocal_6268 = -1082130432;
	var uLocal_6269 = 1;
	var uLocal_6270 = 1;
	var uLocal_6271 = 1;
	var uLocal_6272 = -1;
	var uLocal_6273 = -1;
	var uLocal_6274 = -1;
	float fLocal_6275 = 0f;
	float fLocal_6276 = 0f;
	struct<3> Local_6277 = { 0, 0, 0 } ;
	float fLocal_6278 = 0f;
	float fLocal_6279 = 0f;
	struct<3> Local_6280 = { 0, 0, 0 } ;
	float fLocal_6281 = 0f;
	int iLocal_6282 = 0;
	int iLocal_6283 = 0;
	struct<3> Local_6284 = { 0, 0, 0 } ;
	float fLocal_6285 = 0f;
	int iLocal_6286 = 0;
	int iLocal_6287 = 0;
	float fLocal_6288 = 0f;
	bool bLocal_6289 = 0;
	int iLocal_6290 = 0;
	float fLocal_6291 = 0f;
	int iLocal_6292 = 0;
	float fLocal_6293 = 0f;
	float fLocal_6294 = 0f;
	int iLocal_6295 = 0;
	int iLocal_6296 = 0;
	bool bLocal_6297 = 0;
	int iLocal_6298 = 0;
	int iLocal_6299 = 0;
	float fLocal_6300 = 0f;
	struct<3> Local_6301 = { 0, 0, 0 } ;
	struct<3> Local_6302 = { 0, 0, 0 } ;
	float fLocal_6303 = 0f;
	bool bLocal_6304 = 0;
	int iLocal_6305 = 0;
	bool bLocal_6306 = 0;
	float fLocal_6307 = 0f;
	float fLocal_6308 = 0f;
	struct<3> Local_6309 = { 0, 0, 0 } ;
	int iLocal_6310 = 0;
	int iLocal_6311 = 0;
	int iLocal_6312 = 0;
	float fLocal_6313 = 0f;
	float fLocal_6314 = 0f;
	int iLocal_6315 = 0;
	int iLocal_6316 = 0;
	int iLocal_6317 = 0;
	int iLocal_6318 = 0;
	char[] cLocal_6319[8] = 0;
	char[] cLocal_6320[8] = 0;
	char[] cLocal_6321[8] = 0;
	int iLocal_6322 = 0;
	int iLocal_6323 = 0;
	int iLocal_6324 = 0;
	int iLocal_6325 = 0;
	int iLocal_6326 = 0;
	int iLocal_6327 = 0;
	int iLocal_6328 = 0;
	int iLocal_6329 = 0;
	int iLocal_6330 = 0;
	int iLocal_6331 = 0;
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
	fLocal_51 = 1f;
	bLocal_55 = true;
	bLocal_62 = true;
	bLocal_84 = true;
	fLocal_105 = 120f;
	fLocal_106 = 0f;
	fLocal_108 = 1f;
	fLocal_109 = 0f;
	fLocal_110 = 1f;
	fLocal_111 = 30f;
	fLocal_113 = 1f;
	fLocal_114 = 5f;
	fLocal_115 = 1f;
	fLocal_116 = 1f;
	fLocal_117 = 100f;
	fLocal_118 = 100f;
	fLocal_119 = 0f;
	fLocal_120 = 7000f;
	fLocal_121 = 0f;
	fLocal_122 = 0f;
	fLocal_123 = 0.3f;
	fLocal_124 = 0.5f;
	fLocal_125 = 50f;
	iLocal_136 = -1;
	iLocal_144 = -1;
	iLocal_145 = -1;
	Local_198 = { -7.8156f, -741.8263f, 43.157f };
	fLocal_199 = 69.4048f;
	Local_200 = { -110.60891f, -636.6243f, 35.10708f };
	fLocal_201 = 343.3254f;
	Local_202 = { 1768.998f, 3279.5242f, 40.37643f };
	Local_203 = { 1147.3954f, -1718.4702f, 34.7117f };
	Local_204 = { 25.3048f, -635.7917f, 30.30575f };
	iLocal_505 = 1;
	iLocal_536 = 5;
	iLocal_560 = -1;
	iLocal_561 = 1;
	iLocal_563 = AUDIO::GET_SOUND_ID();
	iLocal_564 = AUDIO::GET_SOUND_ID();
	iLocal_567 = 1;
	StringCopy(&cLocal_578, "", 24);
	StringCopy(&cLocal_582, "", 24);
	StringCopy(&cLocal_587, "", 24);
	StringCopy(&cLocal_591, "", 24);
	StringCopy(&Local_596, "", 24);
	StringCopy(&Local_597, "", 24);
	iLocal_605 = 1;
	iLocal_607 = 1;
	iLocal_608 = 1;
	fLocal_6275 = 12f;
	fLocal_6276 = 3f;
	fLocal_6278 = 0f;
	fLocal_6279 = 0f;
	Local_6280 = { 1865.341f, 2265.841f, 55.65f };
	fLocal_6281 = 80f;
	iLocal_6282 = 1400;
	Local_6284 = { 1877.9f, 2257.5f, 54.6f };
	fLocal_6285 = 6f;
	fLocal_6288 = 15f;
	fLocal_6291 = 0.18f;
	fLocal_6293 = 0.055f;
	fLocal_6294 = 0.27f;
	fLocal_6300 = 0.33f;
	Local_6301 = { 0.15f, 0.17f, 0f };
	Local_6302 = { -90f, 0f, 0f };
	fLocal_6303 = 0.65f;
	bLocal_6304 = true;
	bLocal_6306 = true;
	fLocal_6307 = 0.4f;
	fLocal_6308 = 7f;
	Local_6309 = { -110.9f, -636.6f, 35.4f };
	fLocal_6313 = 0.6f;
	fLocal_6314 = 2500f;
	cLocal_6319 = "missbigscore1Switch_Trevor_Piss";
	cLocal_6320 = "missbigscore1leadinoutbss_1_mcs_2";
	cLocal_6321 = "missswitch";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			func_981();
			func_979(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else if (!Local_474.f_20)
		{
			func_981();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			}
			func_979(0);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	__LIB_12__.func_149();
	MISC::SET_MISSION_FLAG(true);
	HUD::REQUEST_ADDITIONAL_TEXT("FINH1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	func_960();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheBigScoreSetup", 0);
		__LIB_20__.func_736(&uLocal_627);
		func_957(&uLocal_1637);
		func_956();
		func_730();
		if (!bLocal_2549)
		{
			func_647();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x354
{
	switch (iLocal_2545)
	{
		case 0:
			func_588();
			break;
		case 1:
			func_568();
			break;
		case 2:
			func_517();
			break;
		case 3:
			func_510();
			break;
		case 4:
			func_289();
			break;
		case 5:
			func_261();
			break;
		case 6:
			func_9();
			break;
		case 7:
			func_2();
			break;
	}
}

void func_2()//Position - 0x3CC
{
	switch (iLocal_2546)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_2546++;
			break;
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x408
{
	func_8(0);
	__LIB_6__.func_823(0, 0);
	func_979(1);
	BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("chop");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_8(int iParam0)//Position - 0x593
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START") && iParam0 != 1)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT") && iParam0 != 2)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM") && iParam0 != 3)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_DRIVE_AROUND_BACK") && iParam0 != 4)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_DRIVE_AROUND_BACK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR") && iParam0 != 5)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS") && iParam0 != 6)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED") && iParam0 != 7)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_HINT_CAM") && iParam0 != 8)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_TRUCKS_HINT_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_ENTER_TUNNEL") && iParam0 != 9)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_TRUCKS_ENTER_TUNNEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SEARCH_FOR_ENTRANCE") && iParam0 != 10)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_SEARCH_FOR_ENTRANCE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_VIEW_RECORDING") && iParam0 != 11)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_VIEW_RECORDING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_HELI_RETURN_TO_AIRSTRIP") && iParam0 != 12)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_HELI_RETURN_TO_AIRSTRIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_CAR_RETURN_TO_FRANKLINS") && iParam0 != 13)
	{
		AUDIO::STOP_AUDIO_SCENE("BS_1_CAR_RETURN_TO_FRANKLINS");
	}
}

void func_9()//Position - 0x6FD
{
	switch (iLocal_2546)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
				__LIB_11__.func_699(187.9638f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
			}
			func_257(0, 1, 0, 0, 0, 0);
			iLocal_490 = 1;
			iLocal_576 = 2;
			iLocal_572 = 0;
			iLocal_577 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_411))
				{
					ENTITY::DETACH_ENTITY(iLocal_411, true, true);
				}
				__LIB_0__.func_123(&iLocal_411);
			}
			if (!PED::IS_PED_INJURED(func_255()))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_255());
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 3);
			func_177(6, "Stage 6: Drop off point", 1, 0, 0, 1);
			iLocal_600 = 0;
			iLocal_2546++;
			break;
		case 1:
			if (!Local_474.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_176())
				{
					if (STREAMING::IS_STREAMVOL_ACTIVE())
					{
						STREAMING::STREAMVOL_DELETE(iLocal_409);
					}
					if (iLocal_414 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_414);
					}
					if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_175(), Local_217[2 /*2*/], 1728.8278f, 3126.128f, 106.3001f, 9, 30f, 786469, 4f, -1f, true);
						}
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_175(), true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_255(), true);
					if (__LIB_11__.func_720(Local_217[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[2 /*2*/], true);
					}
					if (__LIB_11__.func_720(Local_217[1 /*2*/]))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[1 /*2*/], true);
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_176(), false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_173(), false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[0 /*2*/], false);
					func_8(13);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_CAR_RETURN_TO_FRANKLINS"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_CAR_RETURN_TO_FRANKLINS");
					}
					if (__LIB_11__.func_692())
					{
						if (iLocal_600)
						{
							__LIB_0__.func_210("FH1_End2", 7500, 1);
							iLocal_600 = 0;
						}
					}
					if (__LIB_38__.func_169(&Local_384, 17.56f, 547.32f, 175.11f, 7f, 3f, 2f, 1, func_173(), 0, 0, Local_217[0 /*2*/], "", "FH1_FRCAR", "", "", "", "FH1_CAR", "FH1_BKCAR", 0, 0, 1, -1))
					{
						if (__LIB_0__.func_455(Local_217[0 /*2*/]))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 10f, 4);
							__LIB_12__.func_135(0, 6, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1201219326, 0, false, true);
							PED::SET_PED_CONFIG_FLAG(func_173(), 104, true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_408);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 6.4282f, 535.5682f, 175.028f, 1f, 20000, 1f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_408);
							TASK::TASK_PERFORM_SEQUENCE(func_173(), iLocal_408);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_408);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							CAM::DESTROY_ALL_CAMS(false);
							__LIB_6__.func_849(0);
							MISC::CLEAR_AREA(17.8857f, 572.9736f, 180.1063f, 50f, true, false, false, false);
							iLocal_405 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 7.5984f, 539.8885f, 175.7547f, 7.1088f, 0f, -38.96f, 45.5983f, false, 2);
							CAM::SET_CAM_ACTIVE(iLocal_405, true);
							CAM::SET_CAM_PARAMS(iLocal_405, 7.6983f, 540.0698f, 175.7795f, 6.0492f, 0f, -38.96f, 45.5983f, 7000, 1, 1, 2);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							fLocal_532 = 0.1f;
							CAM::SHAKE_CAM(iLocal_405, "HAND_SHAKE", fLocal_532);
							HUD::DISPLAY_RADAR(false);
							HUD::DISPLAY_HUD(false);
							CAM::SET_GAMEPLAY_COORD_HINT(8.17981f, 539.19104f, 176.37321f, 10000, 0, 2000, 0);
							iLocal_530 = 0;
							iLocal_490 = 0;
							__LIB_6__.func_771();
							iLocal_576 = 3;
							iLocal_601 = 0;
							iLocal_525 = MISC::GET_GAME_TIMER();
							iLocal_2546++;
						}
						else
						{
							__LIB_6__.func_762(Local_217[0 /*2*/], 4f, 1, 1056964608, 0, 1, 0);
						}
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_175())
				{
					if (!PED::IS_PED_INJURED(func_176()) && !ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_176(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_176(), Local_217[0 /*2*/], 11.2359f, 547.3271f, 174.8878f, 10f, 786597, 2f);
						}
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_176(), true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_173(), true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[0 /*2*/], true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_175(), false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_255(), false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[2 /*2*/], false);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_204, true) > 200f)
					{
						if (STREAMING::IS_STREAMVOL_ACTIVE())
						{
							STREAMING::STREAMVOL_DELETE(iLocal_409);
						}
						if (iLocal_414 != 0)
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_414);
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1753.2781f, 3262.4875f, 40.32073f, true) < 200f)
					{
						if (!__LIB_11__.func_720(Local_217[1 /*2*/]))
						{
							__LIB_40__.func_993(&(Local_217[1 /*2*/]), 2, 1768.0714f, 3293.4478f, 40.2011f, 305.798f, 1, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(Local_217[1 /*2*/], 1768.0714f, 3293.4478f, 40.2011f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_217[1 /*2*/], 305.798f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[1 /*2*/], 5f);
							ENTITY::FREEZE_ENTITY_POSITION(Local_217[1 /*2*/], false);
						}
					}
					func_8(12);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_HELI_RETURN_TO_AIRSTRIP"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_HELI_RETURN_TO_AIRSTRIP");
					}
					if (__LIB_11__.func_692() && HUD::DOES_BLIP_EXIST(Local_384.f_5))
					{
						if (!iLocal_600)
						{
							__LIB_0__.func_210("FH1_AIR2", 7500, 1);
							iLocal_575 = 4;
							iLocal_600 = 1;
						}
					}
					if (__LIB_38__.func_169(&Local_384, 1754.6069f, 3268.8115f, 40.24541f, 15f, 15f, 2f, 1, func_255(), 0, 0, Local_217[2 /*2*/], "", "", "", "", "", "FH1_HELI", "FH1_BKHELI", 0, 1, 1, -1) && __LIB_0__.func_455(Local_217[2 /*2*/]))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_217[2 /*2*/], 5f, 1, false);
						if (__LIB_11__.func_720(Local_217[1 /*2*/]))
						{
							ENTITY::SET_ENTITY_COORDS(Local_217[1 /*2*/], 1768.0714f, 3293.4478f, 40.2011f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_217[1 /*2*/], 305.798f);
						}
						MISC::CLEAR_AREA(1754.6069f, 3268.8115f, 40.24541f, 20f, true, false, false, false);
						TASK::TASK_LOOK_AT_COORD(func_175(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_175(), -3.3f, 3f, 0f), -1, 1040, 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_255());
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_255(), false, false);
						iLocal_623 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_623, Local_217[2 /*2*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_217[2 /*2*/], "seat_dside_r"));
						TASK::TASK_SYNCHRONIZED_SCENE(func_255(), iLocal_623, "missheist_the_big_score_setup_1@heli_exit", "lester_exit_heli", 1000f, -1.5f, 4, 0, 1000f, 0);
						CAM::DESTROY_ALL_CAMS(false);
						iLocal_405 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_405, iLocal_623, "lester_exit_heli_CAM", "missheist_the_big_score_setup_1@heli_exit");
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
						__LIB_6__.func_849(0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						iLocal_490 = 0;
						iLocal_525 = MISC::GET_GAME_TIMER();
						__LIB_6__.func_771();
						iLocal_575 = 5;
						iLocal_601 = 0;
						iLocal_2546++;
					}
				}
			}
			break;
		case 2:
			if (PLAYER::PLAYER_PED_ID() == func_175())
			{
				if (!Local_474.f_20)
				{
					if (__LIB_11__.func_692() && !iLocal_601)
					{
						if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FINT", 7, 0, 0, 0))
						{
							iLocal_601 = 1;
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_623) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_623) >= 1f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_255(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_255(), 0f, 10f, 0f), 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_LOOK_AT_ENTITY(func_175(), func_255(), 15000, 2064, 2);
						iLocal_525 = MISC::GET_GAME_TIMER();
						iLocal_2546++;
					}
				}
			}
			else if (PLAYER::PLAYER_PED_ID() == func_176())
			{
				if (__LIB_11__.func_692() && !iLocal_601)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FINM", 7, 0, 0, 0))
					{
						iLocal_601 = 1;
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(func_173(), false))
				{
					PED::SET_PED_RESET_FLAG(func_173(), 60, true);
					if ((MISC::GET_GAME_TIMER() - iLocal_525) > 4000)
					{
						if (!iLocal_530)
						{
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							ENTITY::SET_ENTITY_COORDS(func_173(), 8.7834f, 540.8622f, 175.0277f, true, true, false, true);
							ENTITY::SET_ENTITY_HEADING(func_173(), 154.3967f);
							CAM::STOP_GAMEPLAY_HINT(false);
							iLocal_530 = 1;
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_525) > 3500)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(func_173(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							PED::DELETE_PED(&(Local_218[1 /*4*/]));
							HUD::DISPLAY_HUD(true);
							iLocal_2546++;
						}
					}
				}
				else
				{
					iLocal_525 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 3:
			if (PLAYER::PLAYER_PED_ID() == func_176())
			{
				iLocal_2546++;
			}
			else if (PLAYER::PLAYER_PED_ID() == func_175())
			{
				if (!Local_474.f_20)
				{
					if (!__LIB_0__.func_75())
					{
						iLocal_533 = 1;
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						HUD::DISPLAY_RADAR(true);
						HUD::DISPLAY_HUD(true);
						CAM::DESTROY_ALL_CAMS(false);
						if (__LIB_11__.func_720(func_255()))
						{
							PED::DELETE_PED(&(Local_218[3 /*4*/]));
						}
						iLocal_2546++;
					}
				}
			}
			break;
		case 4:
			if (PLAYER::PLAYER_PED_ID() == func_176())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], true);
				}
				__LIB_12__.func_135(0, 6, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_3();
			}
			else if (PLAYER::PLAYER_PED_ID() == func_175())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_3();
			}
			break;
	}
	func_10();
}

void func_10()//Position - 0x108B
{
	if (!Local_474.f_20)
	{
		if (PLAYER::PLAYER_PED_ID() == func_175())
		{
			switch (iLocal_575)
			{
				case 0:
					switch (iLocal_573)
					{
						case 0:
							if (iLocal_595)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &cLocal_591, &cLocal_587, 7, 0, 0))
									{
										iLocal_603 = 0;
										StringCopy(&cLocal_587, "", 24);
										StringCopy(&cLocal_591, "", 24);
										iLocal_595 = 0;
										iLocal_573 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_22(12, 15))
							{
								iLocal_603 = 0;
								iLocal_599 = MISC::GET_GAME_TIMER();
								iLocal_573 = 1;
							}
							break;
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
							{
								if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_599) > 3000 && __LIB_11__.func_692()) && iLocal_577 == 0)
									{
										if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TFILL1", 7, 0, 0, 0))
										{
											iLocal_573 = 2;
										}
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
									{
										if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
										{
											if (iLocal_603)
											{
												__LIB_0__.func_488(0);
												iLocal_603 = 0;
											}
										}
										else if (!iLocal_603)
										{
											__LIB_0__.func_488(1);
											iLocal_603 = 1;
										}
									}
									else if (!iLocal_603)
									{
										__LIB_0__.func_488(1);
										iLocal_603 = 1;
									}
								}
								else
								{
									iLocal_573 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&cLocal_587, "", 24);
							StringCopy(&cLocal_591, "", 24);
							iLocal_595 = 0;
							iLocal_575 = 1;
							iLocal_573 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				case 1:
					switch (iLocal_573)
					{
						case 0:
							if (iLocal_595)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &cLocal_591, &cLocal_587, 7, 0, 0))
									{
										iLocal_603 = 0;
										StringCopy(&cLocal_587, "", 24);
										StringCopy(&cLocal_591, "", 24);
										iLocal_595 = 0;
										iLocal_573 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__.func_75())
							{
								iLocal_603 = 0;
								iLocal_599 = MISC::GET_GAME_TIMER();
								iLocal_573 = 1;
							}
							break;
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
							{
								if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
									{
										if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TALK4", 7, 0, 0, 0))
										{
											iLocal_573 = 2;
										}
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
									{
										if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
										{
											if (iLocal_603)
											{
												__LIB_0__.func_488(0);
												iLocal_603 = 0;
											}
										}
										else if (!iLocal_603)
										{
											__LIB_0__.func_488(1);
											iLocal_603 = 1;
										}
									}
									else if (!iLocal_603)
									{
										__LIB_0__.func_488(1);
										iLocal_603 = 1;
									}
								}
								else
								{
									iLocal_573 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&cLocal_587, "", 24);
							StringCopy(&cLocal_591, "", 24);
							iLocal_595 = 0;
							iLocal_575 = 3;
							iLocal_573 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				case 2:
					switch (iLocal_573)
					{
						case 0:
							if (iLocal_595)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &cLocal_591, &cLocal_587, 7, 0, 0))
									{
										iLocal_603 = 0;
										StringCopy(&cLocal_587, "", 24);
										StringCopy(&cLocal_591, "", 24);
										iLocal_595 = 0;
										iLocal_573 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (!func_22(14, 0) || Global_100441.f_12[1] == 1)
								{
									iLocal_603 = 0;
									iLocal_599 = MISC::GET_GAME_TIMER();
									iLocal_573 = 1;
								}
							}
							break;
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
							{
								if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
								{
									if (((MISC::GET_GAME_TIMER() - iLocal_599) > 3000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_577 == 0)
									{
										if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TALK4b", 7, 0, 0, 0))
										{
											iLocal_573 = 2;
										}
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
									{
										if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
										{
											if (iLocal_603)
											{
												__LIB_0__.func_488(0);
												iLocal_603 = 0;
											}
										}
										else if (!iLocal_603)
										{
											__LIB_0__.func_488(1);
											iLocal_603 = 1;
										}
									}
									else if (!iLocal_603)
									{
										__LIB_0__.func_488(1);
										iLocal_603 = 1;
									}
								}
								else
								{
									iLocal_573 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&cLocal_587, "", 24);
							StringCopy(&cLocal_591, "", 24);
							iLocal_595 = 0;
							iLocal_575 = 3;
							iLocal_573 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				case 3:
					switch (iLocal_573)
					{
						case 0:
							if (iLocal_595)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &cLocal_591, &cLocal_587, 7, 0, 0))
									{
										iLocal_603 = 0;
										StringCopy(&cLocal_587, "", 24);
										StringCopy(&cLocal_591, "", 24);
										iLocal_595 = 0;
										iLocal_573 = 2;
									}
								}
							}
							else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (Global_100441.f_12[1] == 1)
								{
									iLocal_603 = 0;
									iLocal_599 = MISC::GET_GAME_TIMER();
									iLocal_573 = 1;
								}
							}
							break;
						case 1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
								{
									if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
									{
										if ((((MISC::GET_GAME_TIMER() - iLocal_599) > 3000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_577 == 0) && iLocal_568)
										{
											if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FILL3", 7, 0, 0, 0))
											{
												iLocal_573 = 2;
											}
										}
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
									{
										if (PED::IS_PED_IN_VEHICLE(func_255(), PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
										{
											if (iLocal_603)
											{
												__LIB_0__.func_488(0);
												iLocal_603 = 0;
											}
										}
										else if (!iLocal_603)
										{
											__LIB_0__.func_488(1);
											iLocal_603 = 1;
										}
									}
									else if (!iLocal_603)
									{
										__LIB_0__.func_488(1);
										iLocal_603 = 1;
									}
								}
								else
								{
									iLocal_573 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&cLocal_587, "", 24);
							StringCopy(&cLocal_591, "", 24);
							iLocal_595 = 0;
							iLocal_575 = 5;
							iLocal_573 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				case 4:
					switch (iLocal_573)
					{
						case 0:
							if (iLocal_595)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (iLocal_600)
									{
										if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &cLocal_591, &cLocal_587, 7, 0, 0))
										{
											iLocal_603 = 0;
											StringCopy(&cLocal_587, "", 24);
											StringCopy(&cLocal_591, "", 24);
											iLocal_595 = 0;
											iLocal_573 = 2;
										}
									}
								}
							}
							else if (iLocal_2545 == 6 && iLocal_2546 >= 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									iLocal_603 = 0;
									iLocal_599 = MISC::GET_GAME_TIMER();
									iLocal_573 = 1;
								}
							}
							break;
						case 1:
							if (__LIB_11__.func_720(Local_217[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
								{
									if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_599) > 5000) && iLocal_577 == 0)
									{
										if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_ENDT", 7, 0, 0, 0))
										{
											iLocal_573 = 2;
										}
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (__LIB_11__.func_720(Local_217[2 /*2*/]))
									{
										if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
										{
											if (iLocal_603)
											{
												__LIB_0__.func_488(0);
												iLocal_603 = 0;
											}
										}
										else if (!iLocal_603)
										{
											__LIB_0__.func_488(1);
											iLocal_603 = 1;
										}
									}
								}
								else
								{
									iLocal_573 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&cLocal_587, "", 24);
							StringCopy(&cLocal_591, "", 24);
							iLocal_595 = 0;
							iLocal_575 = 5;
							iLocal_573 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				case 5:
					switch (iLocal_573)
					{
						case 0:
							break;
					}
					break;
			}
		}
		else if (PLAYER::PLAYER_PED_ID() == func_176())
		{
			switch (iLocal_576)
			{
				case 0:
					switch (iLocal_572)
					{
						case 0:
							if (iLocal_598)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &Local_597, &Local_596, 7, 0, 0))
									{
										iLocal_603 = 0;
										StringCopy(&Local_596, "", 24);
										StringCopy(&Local_597, "", 24);
										iLocal_598 = 0;
										iLocal_572 = 2;
									}
								}
							}
							else if ((iLocal_2545 == 0 && iLocal_2546 == 7) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_603 = 0;
								iLocal_599 = MISC::GET_GAME_TIMER();
								iLocal_572 = 1;
							}
							break;
						case 1:
							if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
							{
								if ((((MISC::GET_GAME_TIMER() - iLocal_599) > 4000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_577 == 0) && !CAM::DOES_CAM_EXIST(Local_5035.f_1))
								{
									if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FILL4", 7, 0, 0, 0))
									{
										iLocal_572 = 2;
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
									{
										if (iLocal_603)
										{
											__LIB_0__.func_488(0);
											iLocal_603 = 0;
										}
									}
									else if (!iLocal_603)
									{
										__LIB_0__.func_488(1);
										iLocal_603 = 1;
									}
								}
								else
								{
									iLocal_572 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&Local_596, "", 24);
							StringCopy(&Local_597, "", 24);
							iLocal_598 = 0;
							iLocal_576 = 1;
							iLocal_572 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				case 1:
					switch (iLocal_572)
					{
						case 0:
							if (iLocal_598)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &Local_597, &Local_596, 7, 0, 0))
									{
										iLocal_603 = 0;
										StringCopy(&Local_596, "", 24);
										StringCopy(&Local_597, "", 24);
										iLocal_598 = 0;
										iLocal_572 = 2;
									}
								}
							}
							else if ((iLocal_2545 == 1 && iLocal_2546 == 4) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_603 = 0;
								iLocal_599 = MISC::GET_GAME_TIMER();
								iLocal_572 = 1;
							}
							break;
						case 1:
							if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
							{
								if ((((MISC::GET_GAME_TIMER() - iLocal_599) > 1000 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_577 == 0) && !CAM::DOES_CAM_EXIST(Local_5035.f_1))
								{
									if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FILL5", 7, 0, 0, 0))
									{
										iLocal_572 = 2;
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
									{
										if (iLocal_603)
										{
											__LIB_0__.func_488(0);
											iLocal_603 = 0;
										}
									}
									else if (!iLocal_603)
									{
										__LIB_0__.func_488(1);
										iLocal_603 = 1;
									}
								}
								else
								{
									iLocal_572 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&Local_596, "", 24);
							StringCopy(&Local_597, "", 24);
							iLocal_598 = 0;
							iLocal_576 = 3;
							iLocal_572 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							break;
					}
					break;
				case 2:
					switch (iLocal_572)
					{
						case 0:
							if (iLocal_598)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
								{
									if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &Local_597, &Local_596, 7, 0, 0))
									{
										iLocal_603 = 0;
										StringCopy(&Local_596, "", 24);
										StringCopy(&Local_597, "", 24);
										iLocal_598 = 0;
										iLocal_572 = 2;
									}
								}
							}
							else if (iLocal_2545 == 6 && iLocal_2546 >= 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									iLocal_603 = 0;
									iLocal_599 = MISC::GET_GAME_TIMER();
									iLocal_572 = 1;
								}
							}
							break;
						case 1:
							if (__LIB_11__.func_720(Local_217[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_577 == 0)
									{
										if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_ENDM", 7, 0, 0, 0))
										{
											iLocal_572 = 2;
										}
									}
								}
							}
							break;
						case 2:
							if (iLocal_577 == 0)
							{
								if (__LIB_0__.func_75())
								{
									if (__LIB_11__.func_720(Local_217[0 /*2*/]))
									{
										if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
										{
											if (iLocal_603)
											{
												__LIB_0__.func_488(0);
												iLocal_603 = 0;
											}
										}
										else if (!iLocal_603)
										{
											__LIB_0__.func_488(1);
											iLocal_603 = 1;
										}
									}
								}
								else
								{
									iLocal_572 = 3;
								}
							}
							break;
						case 3:
							StringCopy(&Local_596, "", 24);
							StringCopy(&Local_597, "", 24);
							iLocal_598 = 0;
							iLocal_576 = 3;
							iLocal_572 = 0;
							iLocal_599 = MISC::GET_GAME_TIMER();
							iLocal_600 = 1;
							break;
					}
					break;
				case 3:
					switch (iLocal_572)
					{
						case 0:
							break;
					}
					break;
				}
		}
		if (iLocal_2545 < 4)
		{
			switch (iLocal_574)
			{
				case 0:
					if (iLocal_2545 == 0 && iLocal_2546 == 7)
					{
						if (iLocal_577 == 0)
						{
							iLocal_577 = 1;
						}
						if (iLocal_577 == 3 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TIMER", 7, 0, 0, 0))
							{
								func_257(0, 1, 0, 0, 0, 0);
								iLocal_490 = 1;
								iLocal_577 = 4;
								iLocal_574 = 1;
							}
						}
					}
					break;
				case 1:
					iLocal_574 = 2;
					break;
				case 2:
					if (!PED::IS_PED_INJURED(func_175()))
					{
						if (!func_22(13, 30) && func_22(13, 45))
						{
							if (iLocal_577 == 0)
							{
								iLocal_577 = 1;
							}
							if (iLocal_577 == 3 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (PLAYER::PLAYER_PED_ID() == func_175())
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
										{
											if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_217[2 /*2*/], false))
											{
												if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_UPDATE_P", 7, 0, 0, 0))
												{
													iLocal_577 = 4;
													iLocal_574 = 3;
												}
											}
											else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_UPDATE", 7, 0, 0, 0))
											{
												iLocal_577 = 4;
												iLocal_574 = 3;
											}
										}
									}
									else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_UPDATE", 7, 0, 0, 0))
									{
										iLocal_577 = 4;
										iLocal_574 = 3;
									}
								}
								else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_UPDATE_P", 7, 0, 0, 0))
								{
									iLocal_577 = 4;
									iLocal_574 = 3;
								}
							}
						}
					}
					break;
				case 3:
					iLocal_574 = 4;
					break;
				case 4:
					if (!func_22(15, 0))
					{
						if (iLocal_577 == 0)
						{
							iLocal_577 = 1;
						}
						if (iLocal_577 == 3 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (PLAYER::PLAYER_PED_ID() == func_175())
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_217[2 /*2*/], false))
									{
										if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_300_P", 7, 0, 0, 0))
										{
											iLocal_577 = 4;
											iLocal_574 = 5;
										}
									}
									else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_300", 7, 0, 0, 0))
									{
										iLocal_577 = 4;
										iLocal_574 = 5;
									}
								}
								else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_300", 7, 0, 0, 0))
								{
									iLocal_577 = 4;
									iLocal_574 = 5;
								}
							}
							else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_300_P", 7, 0, 0, 0))
							{
								iLocal_577 = 4;
								iLocal_574 = 5;
							}
						}
					}
					break;
				}
			}
	}
	func_11();
}

void func_11()//Position - 0x2035
{
	switch (iLocal_577)
	{
		case 0:
			break;
		case 1:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_537 = __LIB_38__.func_170();
				cLocal_578 = { __LIB_0__.func_389() };
				cLocal_582 = { __LIB_0__.func_390() };
				if (((!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_578) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_582)) && !MISC::ARE_STRINGS_EQUAL(&cLocal_578, "NULL")) && !MISC::ARE_STRINGS_EQUAL(&cLocal_582, "NULL"))
				{
					__LIB_6__.func_771();
					iLocal_577 = 2;
				}
			}
			else
			{
				iLocal_577 = 3;
			}
			break;
		case 2:
			if (__LIB_11__.func_692())
			{
				iLocal_577 = 3;
			}
			break;
		case 3:
			break;
		case 4:
			if ((iLocal_537 == __LIB_38__.func_170() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (((!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_578) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_582)) && !MISC::ARE_STRINGS_EQUAL(&cLocal_578, "NULL")) && !MISC::ARE_STRINGS_EQUAL(&cLocal_582, "NULL"))
				{
					if (__LIB_11__.func_692() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_586) > 2000)
						{
							if (__LIB_41__.func_986(&uLocal_219, "FH1AUD", &cLocal_582, &cLocal_578, 7, 0, 0))
							{
								StringCopy(&cLocal_578, "", 24);
								StringCopy(&cLocal_582, "", 24);
								iLocal_577 = 5;
							}
						}
					}
					else
					{
						iLocal_586 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					StringCopy(&cLocal_578, "", 24);
					StringCopy(&cLocal_582, "", 24);
					iLocal_577 = 0;
				}
			}
			else if (((MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_578) || MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_582)) || MISC::ARE_STRINGS_EQUAL(&cLocal_578, "NULL")) || MISC::ARE_STRINGS_EQUAL(&cLocal_582, "NULL"))
			{
				StringCopy(&cLocal_578, "", 24);
				StringCopy(&cLocal_582, "", 24);
				iLocal_577 = 0;
			}
			break;
		case 5:
			if (!__LIB_0__.func_75())
			{
				iLocal_577 = 0;
			}
			break;
	}
}

int func_22(int iParam0, int iParam1)//Position - 0x247F
{
	if (CLOCK::GET_CLOCK_HOURS() < iParam0)
	{
		return 1;
	}
	else if (CLOCK::GET_CLOCK_HOURS() == iParam0)
	{
		if (CLOCK::GET_CLOCK_MINUTES() < iParam1 || CLOCK::GET_CLOCK_MINUTES() == iParam1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (CLOCK::GET_CLOCK_HOURS() > iParam0)
	{
		return 0;
	}
	return 0;
}

int func_173()//Position - 0xF15C
{
	return Local_218[1 /*4*/];
}

int func_175()//Position - 0xF1B5
{
	return Local_218[2 /*4*/];
}

int func_176()//Position - 0xF1C3
{
	return Local_218[0 /*4*/];
}

void func_177(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xF1D1
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
		__LIB_0__.func_177(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_6__.func_774(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_6__.func_794(iVar1);
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
			iVar4 = __LIB_6__.func_864(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__.func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__.func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_178(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_178(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xF345
{
	func_179(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_179(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xF361
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_38__.func_170();
	uParam0->f_1 = __LIB_18__.func_240();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_41__.func_0(&(uParam0->f_2884), 0);
		func_204(PLAYER::PLAYER_PED_ID());
		func_197(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_38__.func_170())
		{
			func_189(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		func_181(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__.func_327(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_181(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1020D
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_32__.func_823(iParam2);
	}
	if (__LIB_26__.func_596(iParam2, &iVar0, iParam3, iParam5))
	{
		__LIB_32__.func_760(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_32__.func_760(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

void func_189(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x10620
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_32__.func_823(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_36__.func_100(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_36__.func_99(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (__LIB_0__.func_317(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__.func_421(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__.func_534(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__.func_534(753, iParam3, 0);
			}
			uParam1->f_60 = __LIB_0__.func_534(754, iParam3, 0);
			uParam1->f_61 = __LIB_0__.func_534(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_0__.func_421(161, iParam3))
			{
				uParam1->f_59 = __LIB_0__.func_534(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_0__.func_534(753, iParam3, 0);
			}
		}
	}
}

void func_197(int iParam0, bool bParam1)//Position - 0x1100B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			__LIB_18__.func_178(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

void func_204(int iParam0)//Position - 0x12439
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

int func_255()//Position - 0x1742C
{
	return Local_218[3 /*4*/];
}

void func_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x17465
{
	if (ENTITY::DOES_ENTITY_EXIST(func_176()))
	{
		uLocal_430[0] = Local_218[0 /*4*/];
		__LIB_11__.func_101(&uLocal_430, 0, iParam0);
		__LIB_11__.func_179(&uLocal_430, 0, iParam3);
	}
	else
	{
		__LIB_11__.func_101(&uLocal_430, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_173()))
	{
		uLocal_430[1] = Local_218[1 /*4*/];
		__LIB_11__.func_101(&uLocal_430, 1, iParam1);
		__LIB_11__.func_179(&uLocal_430, 1, iParam4);
	}
	else
	{
		__LIB_11__.func_101(&uLocal_430, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_175()))
	{
		uLocal_430[2] = Local_218[2 /*4*/];
		__LIB_11__.func_101(&uLocal_430, 2, iParam2);
		__LIB_11__.func_179(&uLocal_430, 2, iParam5);
	}
	else
	{
		__LIB_11__.func_101(&uLocal_430, 2, 1);
	}
}

void func_261()//Position - 0x17559
{
	switch (iLocal_2546)
	{
		case 0:
			SYSTEM::SETTIMERA(0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AH1_HOLE_RESTART");
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			__LIB_0__.func_296();
			func_177(5, "Stage 5: Construction hole", 0, 0, 0, 1);
			iLocal_6331 = 0;
			iLocal_6330 = 0;
			iLocal_601 = 0;
			iLocal_612 = 0;
			iLocal_613 = 0;
			iLocal_565 = 0;
			StringCopy(&cLocal_578, "", 24);
			StringCopy(&cLocal_582, "", 24);
			iLocal_577 = 0;
			iLocal_409 = STREAMING::STREAMVOL_CREATE_SPHERE(12.29f, -638.08f, 15.09f, 20f, 12, 127);
			iLocal_525 = MISC::GET_GAME_TIMER();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], true);
			}
			iLocal_410 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 25.3048f, -635.7917f, 30.30575f, true, true, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_411))
			{
				iLocal_411 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), ENTITY::GET_ENTITY_COORDS(func_255(), true), true, true, false);
				if (__LIB_11__.func_720(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_411, Local_217[2 /*2*/], false);
				}
				iLocal_562 = 0;
			}
			__LIB_20__.func_611(&uLocal_627, joaat("prop_ld_test_01"));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_410, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(71.25517f, -613.3061f, 10.67887f, 2.50692f, -654.6599f, 39.92294f, false, true, true, true);
			MISC::CLEAR_AREA(Local_204, 30f, true, false, false, false);
			CAM::DESTROY_ALL_CAMS(false);
			iLocal_518 = 0;
			iLocal_553 = 0;
			iLocal_557 = 0;
			iLocal_521 = 0;
			iLocal_607 = 1;
			iLocal_522 = 0;
			iLocal_523 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			AUDIO::STOP_SOUND(iLocal_564);
			AUDIO::STOP_SOUND(iLocal_563);
			func_8(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SEARCH_FOR_ENTRANCE"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_SEARCH_FOR_ENTRANCE");
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			iLocal_2546++;
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_525) > 500)
			{
				if (!__LIB_18__.func_197(&Local_384, 1))
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_INFO", 7, 0, 0, 0))
					{
						iLocal_605 = 0;
						__LIB_0__.func_403(644, 0);
						iLocal_2546++;
					}
				}
			}
			break;
		case 2:
			if (!iLocal_6330)
			{
				if (!__LIB_18__.func_197(&Local_384, 2))
				{
					__LIB_0__.func_210("FH1_HOLE", 7500, 1);
					__LIB_0__.func_403(644, 0);
					iLocal_6330 = 1;
				}
			}
			else
			{
				func_283();
			}
			if (!iLocal_6331)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 16.890251f, -659.90137f, 29.972874f, 50.35122f, -569.75995f, 87.37669f, 66.75f, false, true, 0) && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && !TASK::GET_IS_TASK_ACTIVE(func_175(), 2))
					{
						__LIB_0__.func_210("FH1_HOVERN", 7500, 1);
						iLocal_6331 = 1;
						if (!iLocal_6330)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
							__LIB_0__.func_403(644, 0);
							iLocal_6330 = 1;
						}
					}
				}
			}
			else if (!iLocal_522)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 16.890251f, -659.90137f, 29.972874f, 50.35122f, -569.75995f, 87.37669f, 66.75f, false, true, 0) && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && !TASK::GET_IS_TASK_ACTIVE(func_175(), 2))
				{
					__LIB_0__.func_151("FH1_CSHELP2", -1);
					iLocal_522 = 1;
				}
			}
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 17.52435f, -655.9549f, 30.76982f, 34.11578f, -609.88947f, 54.92456f, 48f, false, true, 0) && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && !TASK::GET_IS_TASK_ACTIVE(func_175(), 2))
			{
				__LIB_0__.func_402(0, -1);
				if (iLocal_605 == 3)
				{
					func_277(6, 0);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_410);
					if (HUD::DOES_BLIP_EXIST(iLocal_404))
					{
						HUD::REMOVE_BLIP(&iLocal_404);
					}
					iLocal_525 = MISC::GET_GAME_TIMER();
					iLocal_2546++;
				}
			}
			break;
		case 3:
			if (iLocal_553 == 0)
			{
				if (iLocal_523 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__.func_151("FH1_FILM", -1);
						iLocal_523 = 1;
					}
				}
			}
			if (!__LIB_0__.func_75())
			{
				iLocal_521 = 0;
				iLocal_601 = 0;
				iLocal_517 = MISC::GET_GAME_TIMER();
				iLocal_2546++;
			}
			else if (iLocal_553)
			{
				if (__LIB_0__.func_1("FH1_FILM"))
				{
					HUD::CLEAR_HELP(true);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(func_175()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
					{
						TASK::TASK_HELI_MISSION(func_175(), Local_217[2 /*2*/], 0, 0, ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true), 4, 0f, -1f, -1f, -1, -1, -1f, 0);
					}
				}
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (!PED::IS_PED_INJURED(func_175()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
					{
						TASK::CLEAR_PED_TASKS(func_175());
					}
				}
			}
			break;
		case 4:
			if (iLocal_553 == 0)
			{
				if (iLocal_523 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__.func_151("FH1_FILM", -1);
						iLocal_523 = 1;
					}
				}
			}
			else if (__LIB_0__.func_1("FH1_FILM"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_274())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7f, 7f, 4);
				if (iLocal_553)
				{
					__LIB_0__.func_686(0, 1, 1, 0);
				}
				iLocal_553 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
					}
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				AUDIO::STOP_SOUND(iLocal_564);
				AUDIO::STOP_SOUND(iLocal_563);
				if (!PED::IS_PED_INJURED(func_175()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
					{
						TASK::CLEAR_PED_TASKS(func_175());
					}
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_END");
				iLocal_2546++;
			}
			break;
		case 5:
			if (iLocal_553 == 0)
			{
				if (iLocal_523 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__.func_151("FH1_FILM", -1);
						iLocal_523 = 1;
					}
				}
			}
			else if (__LIB_0__.func_1("FH1_FILM"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!__LIB_0__.func_75())
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_551);
				CAM::DESTROY_ALL_CAMS(false);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				HUD::CLEAR_HELP(false);
				AUDIO::STOP_SOUND(iLocal_564);
				AUDIO::STOP_SOUND(iLocal_563);
				if (__LIB_2__.func_50(func_255(), Local_217[2 /*2*/]) == 2 && !__LIB_0__.func_583(func_255(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(func_255(), Local_217[2 /*2*/], false);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 7f, 4);
				iLocal_2546 = 0;
				func_270(6);
			}
			break;
	}
	if (iLocal_2546 < 5)
	{
		func_263();
		if (__LIB_11__.func_720(func_255()))
		{
			func_262(Local_204);
		}
	}
	if (iLocal_2546 < 4)
	{
		if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
		{
			if (iLocal_603 && __LIB_0__.func_75())
			{
				__LIB_0__.func_488(0);
				iLocal_603 = 0;
			}
		}
		else if (!iLocal_603)
		{
			__LIB_0__.func_488(1);
			iLocal_603 = 1;
		}
	}
}

void func_262(struct<3> Param0)//Position - 0x17CEF
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(func_255(), Param0) };
	switch (iLocal_561)
	{
		case 0:
			if ((!__LIB_0__.func_583(func_255(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(func_255(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(func_255(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_c", 3))
			{
				if (__LIB_2__.func_50(func_255(), Local_217[2 /*2*/]) == 1)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(func_255(), Local_217[2 /*2*/], false);
					iLocal_561 = 2;
				}
				else if (__LIB_2__.func_50(func_255(), Local_217[2 /*2*/]) == 2)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(func_255(), Local_217[2 /*2*/], false);
					iLocal_561 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_2__.func_50(func_255(), Local_217[2 /*2*/]) == 1 && !__LIB_0__.func_583(func_255(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(func_255(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_a", 3))
				{
					TASK::TASK_PLAY_ANIM(func_255(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_a", 1.5f, -1.5f, -1, 41, 0f, false, false, false);
				}
				if (Var0.f_0 >= 1.2f)
				{
					TASK::CLEAR_PED_TASKS(func_255());
					iLocal_561 = 0;
				}
			}
			break;
		case 2:
			if (__LIB_2__.func_50(func_255(), Local_217[2 /*2*/]) == 2 && !__LIB_0__.func_583(func_255(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"), 1))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(func_255(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_c", 3))
				{
					TASK::TASK_PLAY_ANIM(func_255(), "missheist_the_big_score_setup_1@camera@idle_a", "idle_c", 1.5f, -1.5f, -1, 57, 0f, false, false, false);
				}
				if (Var0.f_0 <= -1.2f)
				{
					TASK::CLEAR_PED_TASKS(func_255());
					iLocal_561 = 0;
				}
			}
			break;
	}
}

void func_263()//Position - 0x17E9F
{
	bool bVar0;
	if (iLocal_2545 == 4 && iLocal_2546 > 11)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_405))
		{
			CAM::DESTROY_CAM(iLocal_405, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_406))
		{
			CAM::DESTROY_CAM(iLocal_406, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_407))
		{
			CAM::DESTROY_CAM(iLocal_407, false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
			}
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		AUDIO::STOP_SOUND(iLocal_564);
		AUDIO::STOP_SOUND(iLocal_563);
	}
	else if ((iLocal_2545 == 4 && iLocal_2546 > 3) && func_269())
	{
		switch (iLocal_555)
		{
			case 0:
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				iLocal_405 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_405, Local_217[2 /*2*/], 0f, 0f, 0f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], 0f, -12.5f, 0f, true);
				CAM::SET_CAM_FOV(iLocal_405, 35f);
				CAM::SHAKE_CAM(iLocal_405, "hand_shake", 1f);
				CAM::SET_CAM_ACTIVE(iLocal_405, true);
				iLocal_406 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_406, Local_217[2 /*2*/], 0f, 0f, 0f, true);
				CAM::SHAKE_CAM(iLocal_406, "hand_shake", 1f);
				iLocal_407 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_407, Local_217[2 /*2*/], 0f, 0f, 0f, true);
				CAM::SHAKE_CAM(iLocal_407, "hand_shake", 1f);
				iLocal_555++;
				break;
			case 1:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if ((((fLocal_625 > 30000f && fLocal_625 < 31000f) || (fLocal_625 > 85000f && fLocal_625 < 86000f)) || (fLocal_625 > 133000f && fLocal_625 < 134000f)) || (fLocal_625 > 175000f && fLocal_625 < 176000f))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_406, Local_217[4 /*2*/], 0f, 0f, 0f, true);
						CAM::SET_CAM_FOV(iLocal_406, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_406, iLocal_405, 3000, 1, 1);
						iLocal_555++;
					}
				}
				break;
			case 2:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if ((((fLocal_625 > 34000f && fLocal_625 < 35000f) || (fLocal_625 > 90000f && fLocal_625 < 91000f)) || (fLocal_625 > 138000f && fLocal_625 < 139000f)) || (fLocal_625 > 180000f && fLocal_625 < 181000f))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], -2f, -5f, 0f, true);
						CAM::SET_CAM_FOV(iLocal_405, 42f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_406, 4000, 1, 1);
						iLocal_555++;
					}
				}
				break;
			case 3:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if ((((fLocal_625 > 40000f && fLocal_625 < 41000f) || (fLocal_625 > 99000f && fLocal_625 < 100000f)) || (fLocal_625 > 144000f && fLocal_625 < 145000f)) || (fLocal_625 > 186000f && fLocal_625 < 187000f))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_406, Local_217[4 /*2*/], 2f, -7f, 3f, true);
						CAM::SET_CAM_FOV(iLocal_406, 32f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_406, iLocal_405, 2000, 1, 1);
						iLocal_555++;
					}
				}
				break;
			case 4:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if ((((fLocal_625 > 48000f && fLocal_625 < 49000f) || (fLocal_625 > 105000f && fLocal_625 < 106000f)) || (fLocal_625 > 148000f && fLocal_625 < 149000f)) || (fLocal_625 > 190000f && fLocal_625 < 191000f))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], 5f, 3f, 1f, true);
						CAM::SET_CAM_FOV(iLocal_405, 35f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_406, 3000, 1, 1);
						iLocal_555++;
					}
				}
				break;
			case 5:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if ((((fLocal_625 > 52000f && fLocal_625 < 53000f) || (fLocal_625 > 114000f && fLocal_625 < 1150000f)) || (fLocal_625 > 153000f && fLocal_625 < 154000f)) || (fLocal_625 > 194000f && fLocal_625 < 195000f))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_406, Local_217[3 /*2*/], 1f, -12.5f, 2f, true);
						CAM::SET_CAM_FOV(iLocal_406, 40f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_406, iLocal_405, 2000, 1, 1);
						iLocal_555++;
					}
				}
				break;
			case 6:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if ((((fLocal_625 > 60000f && fLocal_625 < 61000f) || (fLocal_625 > 122000f && fLocal_625 < 123000f)) || (fLocal_625 > 157000f && fLocal_625 < 158000f)) || (fLocal_625 > 197500f && fLocal_625 < 199000f))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], -3f, -12.5f, 0f, true);
						CAM::SET_CAM_FOV(iLocal_405, 43f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_406, 2000, 1, 1);
						iLocal_555++;
					}
				}
				break;
			case 7:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if (((fLocal_625 > 72000f && fLocal_625 < 73000f) || (fLocal_625 > 124000f && fLocal_625 < 125000f)) || (fLocal_625 > 160000f && fLocal_625 < 161000f))
					{
						iLocal_555 = 1;
					}
				}
				break;
			case 8:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if (fLocal_625 > 75800f && fLocal_625 < 80000f)
					{
						CAM::POINT_CAM_AT_COORD(iLocal_407, 522.8374f, -1233.5205f, 34.0472f);
						CAM::SET_CAM_FOV(iLocal_407, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_407, iLocal_405, 2000, 1, 1);
						iLocal_555 = 9;
					}
				}
				break;
			case 9:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if (fLocal_625 > 80000f && fLocal_625 < 82000f)
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], 0f, 0f, 0f, true);
						CAM::SET_CAM_FOV(iLocal_405, 40f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_407, 2000, 1, 1);
						iLocal_555 = 1;
					}
				}
				break;
			case 10:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if (fLocal_625 > 125600f && fLocal_625 < 127000f)
					{
						CAM::POINT_CAM_AT_COORD(iLocal_407, 408.45987f, -985.9272f, 29.09093f);
						CAM::SET_CAM_FOV(iLocal_407, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_407, iLocal_405, 3000, 1, 1);
						iLocal_555 = 11;
					}
				}
				break;
			case 11:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if (fLocal_625 > 130000f && fLocal_625 < 131000f)
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], 0f, 0f, 0f, true);
						CAM::SET_CAM_FOV(iLocal_405, 35f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_407, 3000, 1, 1);
						iLocal_555 = 1;
					}
				}
				break;
			case 12:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
				{
					if (fLocal_625 > 160000f && fLocal_625 < 162000f)
					{
						CAM::POINT_CAM_AT_COORD(iLocal_407, 79.28018f, -559.11414f, 31.16214f);
						CAM::SET_CAM_FOV(iLocal_407, 45f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_407, iLocal_405, 4000, 1, 1);
						iLocal_555 = 13;
					}
				}
				break;
			case 13:
				if (!bLocal_611)
				{
					if (CAM::IS_CAM_ACTIVE(iLocal_407) && !CAM::IS_CAM_INTERPOLATING(iLocal_407))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], 0f, 0f, 0f, true);
						CAM::SET_CAM_FOV(iLocal_405, 35f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_407, 2000, 1, 1);
						iLocal_555 = 1;
					}
				}
				break;
			}
	}
	if (iLocal_2545 == 5 && func_269())
	{
		if (iLocal_2546 < 5)
		{
			switch (iLocal_518)
			{
				case 0:
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					iLocal_405 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_405, Local_217[2 /*2*/], 0f, 0f, 0f, true);
					CAM::POINT_CAM_AT_COORD(iLocal_405, Local_204);
					CAM::SET_CAM_FOV(iLocal_405, 60f);
					CAM::SHAKE_CAM(iLocal_405, "hand_shake", 1f);
					CAM::SET_CAM_ACTIVE(iLocal_405, true);
					iLocal_406 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_406, Local_217[2 /*2*/], 0f, 0f, 0f, true);
					CAM::SHAKE_CAM(iLocal_406, "hand_shake", 1f);
					iLocal_554 = MISC::GET_GAME_TIMER();
					iLocal_518++;
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 2000)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_406, 24.51892f, -634.0269f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_406, 55f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_406, iLocal_405, 3000, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 4000)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_405, 15.07439f, -641.73126f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_405, 56f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_406, 5000, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 8000)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_406, 17.36475f, -645.5696f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_406, 54f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_406, iLocal_405, 4000, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 4:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 4500)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_405, 17.36475f, -645.5696f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_405, 52f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_406, 1000, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 5:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 5000)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_406, 19.90802f, -641.7471f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_406, 55f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_406, iLocal_405, 1500, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 6:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 3000)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_405, 17.18857f, -635.11615f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_405, 59f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_406, 3000, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 7:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 5000)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_406, 21.8701f, -628.49554f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_406, 60f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_406, iLocal_405, 4000, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 8:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 6000)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
						{
							CAM::POINT_CAM_AT_COORD(iLocal_405, 24.27826f, -644.17523f, 15.08808f);
							CAM::SET_CAM_FOV(iLocal_405, 57f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_405, iLocal_406, 2000, 1, 1);
							iLocal_554 = MISC::GET_GAME_TIMER();
							iLocal_518++;
						}
					}
					break;
				case 9:
					if ((MISC::GET_GAME_TIMER() - iLocal_554) > 6000)
					{
						iLocal_554 = MISC::GET_GAME_TIMER();
						iLocal_518 = 1;
					}
					break;
				case 10:
					break;
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			CAM::DESTROY_ALL_CAMS(false);
			AUDIO::STOP_SOUND(iLocal_564);
			AUDIO::STOP_SOUND(iLocal_563);
		}
	}
	if (iLocal_553)
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		STREAMING::REMAP_LODSCALE_RANGE_THIS_FRAME(1.7f, 4.7f, 1f, 1.8f);
		MISC::SET_INSTANCE_PRIORITY_HINT(4);
		__LIB_0__.func_184();
		__LIB_0__.func_186();
		if (iLocal_2545 == 4 && !bLocal_611)
		{
			func_8(8);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_HINT_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_HINT_CAM");
			}
		}
		else if (iLocal_2545 == 5)
		{
			func_8(11);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_VIEW_RECORDING"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_VIEW_RECORDING");
			}
		}
		if (iLocal_2545 == 4)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_559) > 1500)
			{
				__LIB_10__.func_624(Local_217[2 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_217[3 /*2*/], true));
			}
		}
	}
	else
	{
		iLocal_559 = MISC::GET_GAME_TIMER();
		if (iLocal_2545 == 4 && !bLocal_611)
		{
			func_8(7);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
			}
		}
		else if (iLocal_2545 == 5)
		{
			func_8(10);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SEARCH_FOR_ENTRANCE"))
			{
				AUDIO::START_AUDIO_SCENE("BS_1_SEARCH_FOR_ENTRANCE");
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_405) && CAM::DOES_CAM_EXIST(iLocal_406))
	{
		bVar0 = iLocal_553;
		switch (iLocal_557)
		{
			case 0:
				iLocal_553 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_217[2 /*2*/], false))
					{
						if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
						{
							iLocal_556 = MISC::GET_GAME_TIMER();
							iLocal_553 = 1;
							iLocal_557 = 1;
						}
					}
				}
				if (bVar0 != iLocal_553)
				{
					__LIB_0__.func_686(iLocal_553, 1, 1, 0);
				}
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_556) <= 500)
				{
					if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
					{
						iLocal_556 = MISC::GET_GAME_TIMER();
						iLocal_557 = 3;
					}
				}
				else
				{
					iLocal_557 = 2;
				}
				break;
			case 2:
				if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
				{
					iLocal_557 = 0;
				}
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_556) > 500)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_217[2 /*2*/], false))
						{
							iLocal_557 = 0;
						}
					}
				}
				break;
		}
		if (iLocal_553)
		{
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_406) || CAM::IS_CAM_ACTIVE(iLocal_405))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_175(), false, false);
					ENTITY::SET_ENTITY_VISIBLE(func_255(), false, false);
					ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], false, false);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					func_264();
					if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
					{
						if (CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM()) != fLocal_558)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_564, "Camera_Zoom", "BIG_SCORE_SETUP_SOUNDS", true);
						}
						else if (CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM()) == fLocal_558)
						{
							AUDIO::STOP_SOUND(iLocal_564);
						}
						fLocal_558 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			AUDIO::STOP_SOUND(iLocal_564);
			AUDIO::STOP_SOUND(iLocal_563);
		}
	}
}

void func_264()//Position - 0x18FD7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_551, "SET_TIME");
	if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() <= 12)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_HOURS());
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((CLOCK::GET_CLOCK_HOURS() - 12));
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_MINUTES());
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() < 12)
	{
		__LIB_0__.func_478("LSH_TIMEAM" /* GXT: ~s~AM */);
	}
	else
	{
		__LIB_0__.func_478("LSH_TIMEPM" /* GXT: ~s~PM */);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_551, 255, 255, 255, 0, 0);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam_cheap");
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	if (AUDIO::HAS_SOUND_FINISHED(iLocal_563))
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_563, "Camera_Hum", "BIG_SCORE_SETUP_SOUNDS", true);
	}
}

int func_269()//Position - 0x19115
{
	switch (iLocal_552)
	{
		case 0:
			iLocal_551 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SECURITY_CAM");
			iLocal_552++;
			break;
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_551))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_551, "SET_LAYOUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_551, "SET_LOCATION");
				__LIB_0__.func_478("FH1_REC");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_552++;
				return 1;
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_270(int iParam0)//Position - 0x1919B
{
	if (iLocal_2544 == 0)
	{
		iLocal_2547 = iParam0;
		iLocal_2544 = 1;
		return 1;
	}
	return 0;
}

int func_274()//Position - 0x192A6
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 30.8506f, -616.7436f, 30f, 19.54452f, -648.7594f, 48f, 24f, false, true, 0) && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && !TASK::GET_IS_TASK_ACTIVE(func_175(), 2))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_404))
		{
			HUD::REMOVE_BLIP(&iLocal_404);
		}
		iLocal_601 = 0;
		if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && (MISC::GET_GAME_TIMER() - iLocal_517) > 3000) && func_275())
		{
			if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLE2", 9, 0, 0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
					{
						ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
					}
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				AUDIO::STOP_SOUND(iLocal_564);
				AUDIO::STOP_SOUND(iLocal_563);
				return 1;
			}
		}
	}
	else
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !iLocal_601)
		{
			if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLEBK", 7, 0, 0, 0))
			{
				iLocal_601 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_404))
		{
			iLocal_404 = __LIB_0__.func_392(25.33051f, -637.68353f, 15.08808f, 0);
		}
		iLocal_517 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (!PED::IS_PED_INJURED(func_175()))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
			{
				TASK::CLEAR_PED_TASKS(func_175());
			}
		}
	}
	if (iLocal_553)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		if (!PED::IS_PED_INJURED(func_175()))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				TASK::TASK_HELI_MISSION(func_175(), Local_217[2 /*2*/], 0, 0, ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true), 4, 0.01f, -1f, -1f, -1, -1, -1f, 0);
			}
		}
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (!PED::IS_PED_INJURED(func_175()))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
			{
				TASK::CLEAR_PED_TASKS(func_175());
			}
		}
	}
	return 0;
}

int func_275()//Position - 0x19504
{
	switch (iLocal_521)
	{
		case 0:
			if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_517) > 1000)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_517 = MISC::GET_GAME_TIMER();
						iLocal_521++;
					}
				}
			}
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_517) > 3000)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_517 = MISC::GET_GAME_TIMER();
						iLocal_521++;
					}
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_517) > 1000)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_517 = MISC::GET_GAME_TIMER();
						iLocal_521++;
					}
				}
			}
			break;
		case 3:
			if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_517) > 2500)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLECAM", 7, 0, 0, 0))
					{
						iLocal_517 = MISC::GET_GAME_TIMER();
						iLocal_521++;
					}
				}
			}
			break;
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_277(int iParam0, bool bParam1)//Position - 0x196E9
{
	switch (iParam0)
	{
		case 0:
			__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
			break;
		case 1:
			__LIB_11__.func_695(&uLocal_627, "missbigscore1guard_wait_rifle");
			__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
			__LIB_11__.func_691(&uLocal_627, 1, "FH1RECMIKE");
			__LIB_11__.func_691(&uLocal_627, 2, "FH1RECMIKE");
			__LIB_11__.func_691(&uLocal_627, 3, "FH1REC");
			__LIB_11__.func_691(&uLocal_627, 4, "FH1REC");
			__LIB_11__.func_695(&uLocal_627, cLocal_6320);
			__LIB_11__.func_695(&uLocal_627, cLocal_6319);
			__LIB_11__.func_695(&uLocal_627, cLocal_6321);
			__LIB_11__.func_695(&uLocal_627, "shake_cam_all@");
			break;
		case 2:
		case 3:
			if (bParam1)
			{
				__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
				__LIB_11__.func_695(&uLocal_627, "missbigscore1guard_wait_rifle");
				__LIB_11__.func_691(&uLocal_627, 3, "FH1REC");
				__LIB_11__.func_691(&uLocal_627, 4, "FH1REC");
				__LIB_11__.func_695(&uLocal_627, cLocal_6320);
				__LIB_11__.func_695(&uLocal_627, cLocal_6319);
				__LIB_11__.func_695(&uLocal_627, cLocal_6321);
				__LIB_11__.func_695(&uLocal_627, "shake_cam_all@");
			}
			CUTSCENE::REQUEST_CUTSCENE("bss_1_mcs_2", 8);
			STREAMING::SET_SRL_FORCE_PRESTREAM(2);
			break;
		case 4:
			if (bParam1)
			{
				__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
				__LIB_11__.func_695(&uLocal_627, "missbigscore1guard_wait_rifle");
			}
			__LIB_11__.func_689(&uLocal_627, joaat("S_M_M_Armoured_01"));
			__LIB_11__.func_689(&uLocal_627, joaat("stockade"));
			__LIB_11__.func_689(&uLocal_627, joaat("prop_pap_camera_01"));
			__LIB_11__.func_691(&uLocal_627, 1, "FH1UBER");
			__LIB_11__.func_695(&uLocal_627, "missheist_the_big_score_setup_1@camera@idle_a");
			break;
		case 5:
			if (bParam1)
			{
				__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
				__LIB_11__.func_695(&uLocal_627, "missbigscore1guard_wait_rifle");
				__LIB_11__.func_695(&uLocal_627, "missheist_the_big_score_setup_1@camera@idle_a");
				__LIB_11__.func_689(&uLocal_627, joaat("prop_pap_camera_01"));
			}
			__LIB_11__.func_689(&uLocal_627, joaat("prop_ld_test_01"));
			break;
		case 6:
			if (bParam1)
			{
				__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
				__LIB_11__.func_695(&uLocal_627, "missbigscore1guard_wait_rifle");
			}
			__LIB_11__.func_695(&uLocal_627, "missheist_the_big_score_setup_1@heli_exit");
			__LIB_11__.func_691(&uLocal_627, 5, "FH1REC");
			__LIB_11__.func_691(&uLocal_627, 3, "FH1RECMIKE");
			break;
		case 7:
			__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
			break;
	}
}

void func_283()//Position - 0x19C3F
{
	switch (iLocal_605)
	{
		case 0:
			if (__LIB_11__.func_692() && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
			{
				bLocal_606 = false;
				iLocal_605 = 1;
			}
			break;
		case 1:
			if (!iLocal_613)
			{
				if ((SYSTEM::TIMERA() > 90000 && iLocal_2546 > 0) && iLocal_2546 < 3)
				{
					if (!iLocal_601)
					{
						if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TIMEH", 9, 0, 0, 0))
						{
							iLocal_601 = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_404) && !__LIB_0__.func_75())
					{
						iLocal_404 = __LIB_0__.func_392(Local_204, 0);
					}
				}
				if (!iLocal_612 && MISC::GET_DISTANCE_BETWEEN_COORDS(73.15453f, -374.87485f, 38.92091f, ENTITY::GET_ENTITY_COORDS(func_175(), true), true) < 130f)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_WRCH", 9, 0, 0, 0))
					{
						iLocal_612 = 1;
					}
				}
				if (bLocal_606)
				{
					iLocal_519 = 800;
				}
				else
				{
					iLocal_519 = 2000;
				}
				if ((__LIB_9__.func_991(Local_204, 2f, 200f) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_410)) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_204, ENTITY::GET_ENTITY_COORDS(func_175(), true), true) < 50f)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_517) > iLocal_519)
					{
						if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLE1", 9, 0, 0, 0))
						{
							iLocal_613 = 1;
							if (!HUD::DOES_BLIP_EXIST(iLocal_404))
							{
								iLocal_404 = __LIB_0__.func_392(Local_204, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_410))
							{
								OBJECT::DELETE_OBJECT(&iLocal_410);
							}
							iLocal_608 = 1;
							iLocal_605 = 2;
						}
					}
				}
				else
				{
					iLocal_517 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 30.8506f, -616.7436f, 30f, 19.54452f, -648.7594f, 48f, 20f, false, true, 0))
			{
				if (!__LIB_0__.func_75())
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FINDH", 9, 0, 0, 0))
					{
						__LIB_0__.func_402(0, -1);
						iLocal_605 = 3;
					}
				}
				else
				{
					__LIB_6__.func_771();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_520) > 30000)
			{
				if (iLocal_608)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_ABOVE", 9, 0, 0, 0))
					{
						iLocal_608 = 0;
						iLocal_520 = MISC::GET_GAME_TIMER();
					}
				}
				else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_HOLEV", 9, 0, 0, 0))
				{
					iLocal_608 = 1;
					iLocal_520 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 3:
			break;
	}
}

void func_289()//Position - 0x19FE5
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	switch (iLocal_2546)
	{
		case 0:
			iLocal_6324 = 0;
			iLocal_6325 = 0;
			iLocal_6326 = 0;
			iLocal_6327 = 0;
			iLocal_6328 = 0;
			func_177(4, "Stage 4: Follow truck", 0, 0, 0, 1);
			__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 0, 1);
			__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 0, 1);
			__LIB_11__.func_722(&uLocal_627, "missbigscore1guard_wait_rifle");
			VEHICLE::REMOVE_VEHICLE_RECORDING(3, "FH1REC");
			VEHICLE::REMOVE_VEHICLE_RECORDING(4, "FH1REC");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "FH1RECMIKE");
			__LIB_0__.func_106(&(Local_217[1 /*2*/]));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bodhi2"));
			func_392(0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_217[3 /*2*/], true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[3 /*2*/], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_218[6 /*4*/], true);
			PATHFIND::SET_ROADS_IN_AREA(1184.5781f, -1801.7484f, 25f, 780.501f, -1454.5101f, 37f, false, true);
			PATHFIND::SET_ROADS_IN_AREA(859.1412f, -1563.1174f, 24f, 242.78966f, -829.41626f, 33f, false, true);
			PATHFIND::SET_ROADS_IN_AREA(535.7115f, -552.7345f, 24f, 35.41522f, -1156.0121f, 33f, false, true);
			PATHFIND::SET_ROADS_IN_AREA(-159.27182f, -539.104f, 28f, 416.92444f, -832.99457f, 41.5f, false, true);
			iLocal_509 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(824.89844f, -1748.8434f, 28.48285f, 29f, 0f, false);
			iLocal_510 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(796.60425f, -1435.0028f, 26.20493f, 23.8f, 0f, false);
			iLocal_511 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(541.3582f, -1431.7042f, 28.34233f, 21f, 0f, false);
			iLocal_512 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(499.5806f, -1132.154f, 28.45514f, 18f, 0f, false);
			iLocal_513 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(398.24036f, -1048.0691f, 28.44339f, 22f, 0f, false);
			iLocal_514 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(403.3734f, -955.1171f, 28.44834f, 20f, 0f, false);
			iLocal_515 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(406.04382f, -853.2869f, 28.33914f, 25f, 0f, false);
			iLocal_516 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(354.64478f, -667.0586f, 28.33901f, 27f, 0f, false);
			iLocal_567 = 1;
			iLocal_505 = 0;
			fLocal_626 = 1f;
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			iLocal_553 = 0;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_411))
			{
				iLocal_411 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), ENTITY::GET_ENTITY_COORDS(func_255(), true), true, true, false);
				if (__LIB_11__.func_720(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_411, Local_217[2 /*2*/], false);
				}
				iLocal_562 = 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
				}
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 5f, 4);
			iLocal_552 = 0;
			iLocal_531 = 0;
			iLocal_557 = 0;
			iLocal_2546++;
			break;
		case 1:
			if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]) && __LIB_11__.func_720(Local_217[3 /*2*/])) && __LIB_11__.func_720(Local_217[4 /*2*/]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_217[3 /*2*/], "BS_1_TRUCKS_Group", 0f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_217[4 /*2*/], "BS_1_TRUCKS_Group", 0f);
				if (!VEHICLE::IS_VEHICLE_HIGH_DETAIL(Local_217[3 /*2*/]) && !VEHICLE::IS_VEHICLE_HIGH_DETAIL(Local_217[4 /*2*/]))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_217[3 /*2*/]);
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_217[4 /*2*/]);
				}
				__LIB_20__.func_611(&uLocal_627, joaat("stockade"));
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				iLocal_405 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_405, Local_217[2 /*2*/], -6.32f, 15f, 6f, false);
				CAM::POINT_CAM_AT_ENTITY(iLocal_405, Local_217[3 /*2*/], 0f, -15f, 0f, true);
				CAM::SET_CAM_ACTIVE(iLocal_405, true);
				if (bLocal_501)
				{
					CAM::SET_CAM_FOV(iLocal_405, 31f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_VELOCITY(Local_217[2 /*2*/], 0f, -50f, 0f);
					TASK::TASK_HELI_CHASE(func_175(), Local_217[3 /*2*/], 0f, 0f, 80f);
					iLocal_506 = 4000;
				}
				else
				{
					CAM::SET_CAM_FOV(iLocal_405, 27f);
					CAM::RENDER_SCRIPT_CAMS(true, true, 4000, false, false, 0);
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_217[3 /*2*/], 0f, 0f, 45f) };
					TASK::TASK_HELI_MISSION(func_175(), Local_217[2 /*2*/], 0, 0, Var1, 4, 35f, -1f, -1f, -1, -1, -1f, 0);
					iLocal_506 = 5200;
				}
				iLocal_525 = MISC::GET_GAME_TIMER();
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_TRUCKS");
				iLocal_601 = 0;
				iLocal_6292 = 0;
				iLocal_2546++;
				__LIB_6__.func_849(0);
				if (__LIB_0__.func_75())
				{
					__LIB_0__.func_296();
				}
			}
			break;
		case 2:
			if (!iLocal_601 && !__LIB_0__.func_75())
			{
				if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_GOTCON", 6, 0, 0, 0))
				{
					func_8(0);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
					}
					iLocal_601 = 1;
				}
			}
			if (((MISC::GET_GAME_TIMER() - iLocal_525) > (iLocal_506 - 300) && !iLocal_6292) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				iLocal_6292 = 1;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_525) > iLocal_506)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(func_175());
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::RENDER_SCRIPT_CAMS(false, true, 4000, false, false, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_555 = 0;
				iLocal_525 = MISC::GET_GAME_TIMER();
				iLocal_2546++;
			}
			else
			{
				STREAMING::SUPPRESS_HD_MAP_STREAMING_THIS_FRAME();
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(2f);
				STREAMING::REMAP_LODSCALE_RANGE_THIS_FRAME(1.7f, 4.7f, 1f, 1.8f);
			}
			break;
		case 3:
			CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			if ((MISC::GET_GAME_TIMER() - iLocal_525) > 4000)
			{
				if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_ROUTE", 6, 0, 0, 0))
				{
					__LIB_0__.func_151("FH1_FILM", -1);
					__LIB_20__.func_611(&uLocal_627, joaat("stockade"));
					__LIB_11__.func_689(&uLocal_627, joaat("police3"));
					iLocal_2546++;
				}
			}
			break;
		case 4:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[3 /*2*/]) > 20500f)
				{
					if (!__LIB_0__.func_75())
					{
						if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FILL", 6, 0, 0, 0))
						{
							Local_217[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 407.8519f, -984.231f, 28.2662f, 230.4461f, true, true, false);
							Local_217[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("police3"), 408.2209f, -997.6844f, 28.2664f, 229.8704f, true, true, false);
							__LIB_20__.func_611(&uLocal_627, joaat("police3"));
							iLocal_2546++;
						}
					}
					else
					{
						__LIB_0__.func_296();
					}
				}
			}
			break;
		case 5:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[3 /*2*/]) > 69700f)
				{
					if (!__LIB_0__.func_75())
					{
						if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FILL2", 6, 0, 0, 0))
						{
							iLocal_555 = 8;
							iLocal_2546++;
						}
					}
					else
					{
						__LIB_0__.func_296();
					}
				}
			}
			break;
		case 6:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[3 /*2*/]) > 118000f)
			{
				__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_CHATTER", 6, 0, 0, 0);
				iLocal_413 = INTERIOR::GET_INTERIOR_AT_COORDS(224.4949f, -608.8183f, 27.8671f);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_413))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_413);
				}
				__LIB_0__.func_106(&(Local_217[7 /*2*/]));
				__LIB_0__.func_106(&(Local_217[8 /*2*/]));
				iLocal_2546++;
			}
			break;
		case 7:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
			{
				if (fLocal_625 > 124000f && fLocal_625 < 125000f)
				{
					iLocal_555 = 10;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_218[6 /*4*/], 292.5266f, -643.8066f, 28.3005f, 20f, 20f, 20f, false, true, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
				__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_Tunnel", 9, 0, 0, 0);
				bLocal_611 = true;
				iLocal_555 = 12;
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					__LIB_35__.func_211(&bLocal_205, 0, 0);
					CAM::SET_GAMEPLAY_COORD_HINT(79.28018f, -559.11414f, 31.16214f, -1, 2000, 2000, 0);
				}
				func_8(0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_ENTER_TUNNEL"))
				{
					AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_ENTER_TUNNEL");
				}
				ENTITY::SET_ENTITY_COORDS(Local_217[0 /*2*/], Local_200, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_217[0 /*2*/], fLocal_201);
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_2546++;
			}
			break;
		case 8:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_218[6 /*4*/], 89.9054f, -563.3521f, 30.6528f, 20f, 20f, 20f, false, true, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
				bLocal_611 = false;
				CUTSCENE::REQUEST_CUTSCENE("BSS_1_MCS_3", 8);
				if (iLocal_413 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_413);
				}
				iLocal_415 = INTERIOR::GET_INTERIOR_AT_COORDS(-73.4359f, -680.0825f, 32.7495f);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_415))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_415);
				}
				func_8(0);
				if (iLocal_553)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_HINT_CAM"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_HINT_CAM");
					}
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_TRUCKS_SPOTTED"))
				{
					AUDIO::START_AUDIO_SCENE("BS_1_TRUCKS_SPOTTED");
				}
				iLocal_601 = 0;
				iLocal_2546++;
			}
			break;
		case 9:
			ENTITY::CREATE_FORCED_OBJECT(-84.3858f, -670.8411f, 35.1694f, 5f, joaat("prop_bollard_02a"), true);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[3 /*2*/]) > 185500f)
				{
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_SECCHECK", 9, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
						iLocal_2546++;
					}
				}
			}
			break;
		case 10:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[3 /*2*/]) > 198000f)
				{
					iLocal_553 = 0;
					TASK::CLEAR_PED_SECONDARY_TASK(func_255());
					if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
						{
							ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
						{
							ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
						}
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					AUDIO::STOP_SOUND(iLocal_564);
					AUDIO::STOP_SOUND(iLocal_563);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					__LIB_25__.func_609(45, 0);
					fLocal_626 = 0.1f;
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
					STREAMING::SET_PED_POPULATION_BUDGET(3);
					func_385();
					__LIB_11__.func_689(&uLocal_627, joaat("S_M_M_Armoured_01"));
					iLocal_2546++;
				}
			}
			break;
		case 11:
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			iVar6 = 0;
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iVar2 = 1;
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_415))
			{
				iVar3 = 1;
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Armoured_01")))
			{
				iVar4 = 1;
			}
			if (!__LIB_0__.func_75())
			{
				iVar5 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_217[2 /*2*/]))
				{
					iVar6 = 1;
				}
			}
			if ((((iVar2 && iVar3) && iVar4) && iVar5) && iVar6)
			{
				func_277(5, 0);
				__LIB_11__.func_689(&uLocal_627, joaat("S_M_M_Armoured_01"));
				iVar0 = __LIB_39__.func_387(Local_218[4 /*4*/], 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "security_guard_gun", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_218[4 /*4*/], "security_guard", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_218[6 /*4*/], "Casey", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_217[3 /*2*/], "security_truck", 1, 0, 0);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_217[3 /*2*/], 0f);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_217[4 /*2*/], 0f);
				func_372(1);
				__LIB_6__.func_849(0);
				__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
				func_364();
				__LIB_6__.func_771();
				CUTSCENE::START_CUTSCENE(0);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_2546++;
			}
			break;
		case 12:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], true);
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_8(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_ONION86");
				if (!PED::IS_PED_INJURED(Local_218[6 /*4*/]))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_218[6 /*4*/], false, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_217[4 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_217[4 /*2*/]));
				}
				MISC::CLEAR_AREA(-84.3858f, -670.8411f, 35.1694f, 200f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(Local_217[2 /*2*/], -76.4238f, -528.6735f, 87.5f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_217[2 /*2*/], 176.7705f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_217[2 /*2*/]);
				PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
				PED::SET_PED_INTO_VEHICLE(func_255(), Local_217[2 /*2*/], 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_255(), false, false);
				iLocal_414 = INTERIOR::GET_INTERIOR_AT_COORDS(12.8829f, -634.9265f, 15.0884f);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_414))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_414);
				}
				__LIB_35__.func_211(&bLocal_205, 0, 0);
				iLocal_2546++;
			}
			break;
		case 13:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				bLocal_619 = true;
			}
			if (bLocal_619)
			{
				RECORDING::REPLAY_STOP_EVENT();
				__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
				PED::SET_PED_INTO_VEHICLE(func_173(), Local_217[0 /*2*/], 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_176(), false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_173(), false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[0 /*2*/], 5f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_217[2 /*2*/]);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_217[2 /*2*/], 1f);
				PED::SET_PED_INTO_VEHICLE(func_255(), Local_217[2 /*2*/], 1);
				PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_175(), false, false);
				func_372(0);
				__LIB_11__.func_699(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
				if (iLocal_415 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_415);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				AUDIO::TRIGGER_MUSIC_EVENT("FH1_TRUCKS_2");
				iLocal_2546++;
			}
			break;
		case 14:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], true);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
				__LIB_6__.func_295(45, 1);
				iLocal_2546 = 0;
				func_270(5);
			}
			break;
	}
	__LIB_20__.func_768(joaat("SCRIPT_TASK_VEHICLE_MISSION"));
	if (iLocal_2546 > 0 && iLocal_2546 < 9)
	{
		if (fLocal_625 < 10000f)
		{
			fLocal_626 = 0.75f;
			func_359();
		}
		else if (fLocal_625 > 10000f && fLocal_625 < 20000f)
		{
			fLocal_626 = 0.85f;
		}
		else if (fLocal_625 > 20000f && fLocal_625 < 30000f)
		{
			fLocal_626 = 1f;
		}
		else if (fLocal_625 > 107000f && fLocal_625 < 116000f)
		{
			fLocal_626 = 1.4f;
		}
		else if (fLocal_625 > 131500f && fLocal_625 < 139000f)
		{
			fLocal_626 = 1.4f;
		}
		else if (fLocal_625 > 152000f && fLocal_625 < 162000f)
		{
			fLocal_626 = 0.8f;
		}
		else if (fLocal_625 > 162000f && fLocal_625 < 168000f)
		{
			Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_217[3 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true)) };
			if (Var7.f_1 < -1f && Var7.f_2 > 10f)
			{
				fLocal_626 = 0.2f;
			}
			else
			{
				fLocal_626 = 1f;
			}
		}
		else if (fLocal_625 > 168000f)
		{
			fLocal_626 = 1f;
		}
		else
		{
			fLocal_626 = 1.2f;
		}
	}
	VEHICLE::SET_VEHICLE_CEILING_HEIGHT(Local_217[2 /*2*/], 420f);
	if (iLocal_508)
	{
		func_358(Local_217[3 /*2*/], 165000f);
		ENTITY::SET_ENTITY_COORDS(Local_217[2 /*2*/], 89.9054f, -563.3521f, 100.6528f, true, false, false, true);
		iLocal_508 = 0;
		bLocal_507 = true;
		iLocal_2546 = 8;
	}
	func_305(Local_217[3 /*2*/], "FH1UBER");
	if (ENTITY::DOES_ENTITY_EXIST(Local_217[3 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[3 /*2*/], false))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[3 /*2*/], true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_217[4 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[4 /*2*/], false))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[4 /*2*/], true);
		}
	}
	if (iLocal_2546 < 11)
	{
		if (__LIB_11__.func_720(func_255()) && __LIB_11__.func_720(Local_217[3 /*2*/]))
		{
			func_262(ENTITY::GET_ENTITY_COORDS(Local_217[3 /*2*/], true));
		}
		func_263();
	}
	if ((((iLocal_2546 == 9 && ENTITY::IS_ENTITY_ON_SCREEN(Local_217[4 /*2*/])) && !ENTITY::IS_ENTITY_OCCLUDED(Local_217[4 /*2*/])) && !iLocal_601) && fLocal_625 > 171500f)
	{
		if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_Tunnel2", 7, 0, 0, 0))
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
			iLocal_601 = 1;
		}
	}
	if ((iLocal_2546 < 11 && iLocal_2545 == 4) && ENTITY::DOES_ENTITY_EXIST(Local_218[6 /*4*/]))
	{
		fLocal_526 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_218[6 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		fVar8 = 550f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
		{
			fVar9 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[3 /*2*/]);
			if (fVar9 <= 20000f)
			{
				fVar8 = 550f;
			}
			else if (fVar9 > 20000f && fVar9 <= 150000f)
			{
				fVar8 = 450f;
			}
			else if (fVar9 > 150000f)
			{
				fVar8 = 350f;
			}
			Var11 = { ENTITY::GET_ENTITY_COORDS(Local_217[3 /*2*/], true) };
			Var12 = { ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true) };
			fVar10 = (Var11.f_2 - Var12.f_2);
			if (fVar10 < 0f)
			{
				fVar10 = (fVar10 * -1f);
			}
			if (!bLocal_507)
			{
				if (fLocal_526 > fVar8)
				{
					if (!iLocal_505)
					{
						__LIB_0__.func_498(643);
						__LIB_0__.func_210("FH1_FRWARN", 7500, 1);
						iLocal_505 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_502) > 10500 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_255()))
					{
						__LIB_6__.func_771();
						__LIB_5__.func_759(func_255(), "FINH1_BDAA", "Lester", 3);
						func_291(6);
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_502) > 3000)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_255()) && (MISC::GET_GAME_TIMER() - iLocal_504) > 5000)
						{
							__LIB_5__.func_759(func_255(), "FINH1_BFAA", "Lester", 3);
							iLocal_504 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (fLocal_526 < 30f)
				{
					if (bLocal_611 == 0 || fVar10 < 9f)
					{
						if ((fLocal_625 < 162000f || fLocal_625 > 171500f) || fVar10 < 9f)
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_255()))
							{
								__LIB_6__.func_771();
								__LIB_5__.func_759(func_255(), "FINH1_BCAA", "Lester", 3);
								if (__LIB_11__.func_720(Local_217[3 /*2*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[3 /*2*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[3 /*2*/]);
									}
								}
								if (__LIB_11__.func_720(Local_217[3 /*2*/]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[4 /*2*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[4 /*2*/]);
									}
								}
								func_291(5);
							}
						}
					}
				}
				else if (fLocal_526 < 60f)
				{
					if (bLocal_611 == 0)
					{
						if (fLocal_625 < 162000f || fLocal_625 > 169000f)
						{
							if (iLocal_567)
							{
								__LIB_0__.func_498(643);
								__LIB_0__.func_210("FH1_CLWARN", 7500, 1);
								iLocal_502 = MISC::GET_GAME_TIMER();
								iLocal_567 = 0;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_502) > 10000 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_255()))
							{
								__LIB_5__.func_759(func_255(), "FINH1_BEAA", "Lester", 3);
								iLocal_502 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else
				{
					iLocal_502 = MISC::GET_GAME_TIMER();
					iLocal_505 = 0;
					iLocal_567 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_217[3 /*2*/]))
		{
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(Local_217[3 /*2*/]);
			ENTITY::SET_ENTITY_LOD_DIST(Local_217[3 /*2*/], SYSTEM::ROUND(fVar8));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_217[4 /*2*/]))
		{
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(Local_217[4 /*2*/]);
			ENTITY::SET_ENTITY_LOD_DIST(Local_217[4 /*2*/], SYSTEM::ROUND(fVar8));
		}
	}
	if ((__LIB_11__.func_720(func_175()) && __LIB_11__.func_720(func_255())) && __LIB_11__.func_720(Local_217[3 /*2*/]))
	{
		if (!PED::IS_PED_HEADTRACKING_ENTITY(func_175(), Local_217[3 /*2*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_175(), Local_217[3 /*2*/], -1, 2096, 2);
		}
		if (!PED::IS_PED_HEADTRACKING_ENTITY(func_255(), Local_217[3 /*2*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_255(), Local_217[3 /*2*/], -1, 2096, 2);
		}
	}
	if (__LIB_11__.func_720(Local_217[2 /*2*/]))
	{
		switch (iLocal_531)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 291.67627f, -653.67816f, 28.37552f, 297.37866f, -639.35156f, 33.76371f, 10f, false, true, 0))
				{
					iLocal_531++;
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 192.95865f, -607.2877f, 28.54596f, 202.67386f, -592.1815f, 33.89706f, 10f, false, true, 0))
				{
					iLocal_531++;
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 124.56654f, -583.91f, 30.61664f, 130.59349f, -568.0862f, 37.65457f, 10f, false, true, 0))
				{
					__LIB_0__.func_498(646);
					iLocal_531++;
				}
				break;
			}
	}
	func_290();
}

void func_290()//Position - 0x1B5C2
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
	{
		if (bLocal_622 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_217[2 /*2*/], false) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 335.03885f, -659.22974f, 40.802753f, 79.029335f, -561.3292f, 28.06918f, 34.6875f, false, true, 0))
			{
				fVar6 = SYSTEM::VDIST2(636.832f, -1428.8671f, 8.60403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				if (fVar6 < 10000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 599.8643f, -1452.6736f, 7.386136f, 688.00214f, -1451.4652f, 27.68441f, 10.75f, false, true, 0))
					{
						iLocal_6324 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 678.3117f, -1413.9515f, 7.958761f, 589.50256f, -1416.2289f, 27.585014f, 10.75f, false, true, 0))
					{
						iLocal_6325 = 1;
					}
				}
				fVar7 = SYSTEM::VDIST2(592.38153f, -1180.6863f, 8.87134f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				if (fVar7 < 20000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 491.188f, -1233.9893f, 6.291784f, 687.0824f, -1250.5118f, 40.41873f, 14.25f, false, true, 0))
					{
						iLocal_6326 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[2 /*2*/], 489.8552f, -1178.1154f, 6.291779f, 696.4216f, -1149.3583f, 40.812756f, 14.25f, false, true, 0))
					{
						iLocal_6327 = 1;
					}
				}
				if (iLocal_6324 == 1 && iLocal_6325 == 1)
				{
					bLocal_622 = true;
				}
				if (iLocal_6326 == 1 && iLocal_6327 == 1)
				{
					bLocal_622 = true;
				}
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_217[2 /*2*/], 0f, 0f, 5f), &Var0, 1, 3f, 0f))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					fVar2 = (Var1.f_0 + 4f);
					fVar3 = (Var1.f_0 - 4f);
					fVar4 = (Var1.f_1 + 4f);
					fVar5 = (Var1.f_1 - 4f);
					if (Var0.f_2 > Var1.f_2)
					{
						if (((Var0.f_0 <= fVar2 && Var0.f_0 >= fVar3) && Var0.f_1 <= fVar4) && Var0.f_1 >= fVar5)
						{
							bLocal_622 = true;
						}
					}
				}
			}
		}
		else if (bLocal_622)
		{
			if (!iLocal_6328)
			{
				__LIB_0__.func_498(645);
				iLocal_6328 = 1;
			}
		}
	}
}

void func_291(int iParam0)//Position - 0x1B81C
{
	char* sVar0;
	if (!Local_474.f_20)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
		__LIB_0__.func_296();
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "FH1_FAILDB";
				break;
			case 1:
				sVar0 = "CMN_FDIED" /* GXT: ~s~Franklin died. */;
				break;
			case 3:
				sVar0 = "FH1_FAILLD";
				break;
			case 6:
				sVar0 = "FH1_FAILLT";
				break;
			case 4:
				sVar0 = "CMN_MDIED" /* GXT: ~s~Michael died. */;
				break;
			case 5:
				sVar0 = "FH1_FAILTC";
				break;
			case 2:
				sVar0 = "CMN_TDIED" /* GXT: ~s~Trevor died. */;
				break;
			case 7:
				sVar0 = "CMN_MDEST" /* GXT: ~s~Michael's car was destroyed. */;
				break;
			case 8:
				sVar0 = "CMN_TDEST" /* GXT: ~s~Trevor's truck was destroyed. */;
				break;
			case 9:
				sVar0 = "FH1_FAILHD";
				break;
			case 10:
				sVar0 = "FH1_FAILBK";
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
				break;
			case 11:
				sVar0 = "CMN_FLEFT" /* GXT: ~s~Franklin was left behind. */;
				break;
			case 12:
				sVar0 = "FH1_FAILLES";
				break;
			case 14:
				sVar0 = "FH1_FAILTI";
				break;
			case 13:
				sVar0 = "FH1_FMIKEL";
				break;
			default:
				sVar0 = "FH1_FAILDF";
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_175(), false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
			}
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
		AUDIO::STOP_SOUND(iLocal_564);
		AUDIO::STOP_SOUND(iLocal_563);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_294(sVar0);
		while (!__LIB_0__.func_204())
		{
			__LIB_0__.func_296();
			if (iParam0 == 15 && !iLocal_604)
			{
				if (__LIB_11__.func_720(func_255()))
				{
					__LIB_0__.func_203(&uLocal_219, 3, func_255(), "Lester", 0, 1);
					if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_FAILTME", 7, 0, 0, 0))
					{
						iLocal_604 = 1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
		__LIB_0__.func_428(92.0847f, -1280.7062f, 28.1447f, 73.3971f);
		func_979(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_294(char* sParam0)//Position - 0x1BAB5
{
	__LIB_0__.func_324(sParam0);
	func_295(0);
}

void func_295(int iParam0)//Position - 0x1BAC8
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_296(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_296(int iParam0)//Position - 0x1BB0D
{
	int iVar0;
	int iVar1;
	__LIB_40__.func_606();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_297(&(Global_113386.f_2363.f_539), iVar1);
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

void func_297(var uParam0, int iParam1)//Position - 0x1BC1D
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
			if (!func_299(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
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

int func_299(int iParam0, var uParam1, float fParam2)//Position - 0x1BDF1
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
			return func_299(8, uParam1, fParam2);
			break;
		case 10:
			return func_299(8, uParam1, fParam2);
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

void func_305(int iParam0, char* sParam1)//Position - 0x1C954
{
	switch (iLocal_624)
	{
		case 0:
			func_357(sParam1, 1, 0, 1);
			func_356(1);
			func_355(1);
			func_359();
			func_354();
			bLocal_71 = true;
			fLocal_117 = 700f;
			fLocal_118 = 400f;
			fLocal_625 = 0f;
			bLocal_62 = false;
			__LIB_11__.func_126();
			PATHFIND::SET_ROADS_IN_AREA(1184.5781f, -1801.7484f, 25f, 780.501f, -1454.5101f, 37f, false, true);
			PATHFIND::SET_ROADS_IN_AREA(859.1412f, -1563.1174f, 24f, 242.78966f, -829.41626f, 33f, false, true);
			PATHFIND::SET_ROADS_IN_AREA(535.7115f, -552.7345f, 24f, 35.41522f, -1156.0121f, 33f, false, true);
			PATHFIND::SET_ROADS_IN_AREA(-159.27182f, -539.104f, 28f, 416.92444f, -832.99457f, 41.5f, false, true);
			iLocal_509 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(824.89844f, -1748.8434f, 28.48285f, 29f, 0f, false);
			iLocal_510 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(796.60425f, -1435.0028f, 26.20493f, 23.8f, 0f, false);
			iLocal_511 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(541.3582f, -1431.7042f, 28.34233f, 21f, 0f, false);
			iLocal_512 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(499.5806f, -1132.154f, 28.45514f, 18f, 0f, false);
			iLocal_513 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(398.24036f, -1048.0691f, 28.44339f, 22f, 0f, false);
			iLocal_514 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(403.3734f, -955.1171f, 28.44834f, 20f, 0f, false);
			iLocal_515 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(406.04382f, -853.2869f, 28.33914f, 25f, 0f, false);
			iLocal_516 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(354.64478f, -667.0586f, 28.33901f, 27f, 0f, false);
			iLocal_624 = 1;
			break;
		case 1:
			func_352(10000f);
			fLocal_625 = 0f;
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iParam0, 1, sParam1, 4, 0, 786468);
			func_358(iParam0, 7000f);
			func_359();
			iLocal_624 = 2;
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					fLocal_625 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
					if (!ENTITY::DOES_ENTITY_EXIST(Local_217[4 /*2*/]))
					{
						Local_217[4 /*2*/] = iLocal_181[0];
					}
					VEHICLE::SET_PLAYBACK_SPEED(iParam0, fLocal_626);
					func_352(5000f);
					func_326(iParam0, fLocal_626);
				}
				else
				{
					func_306(0, 1);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_509);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_510);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_511);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_512);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_513);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_514);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_515);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_516);
				}
			}
			break;
	}
}

void func_306(bool bParam0, bool bParam1)//Position - 0x1CBFD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_162))
	{
		iLocal_68 = 0;
		__LIB_11__.func_126();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_171);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_84)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_136());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_125());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_124());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_123());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_321();
			func_320();
			func_317();
		}
		else
		{
			func_313();
			func_312();
		}
		if (bParam1)
		{
			__LIB_32__.func_762(0);
		}
	}
}

void func_312()//Position - 0x1CE27
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_178[iVar0] = 0;
		Local_150[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_86[iVar0] = 0f;
		fLocal_87[iVar0] = 0f;
		fLocal_88[iVar0] = 0f;
		fLocal_89[iVar0] = 0f;
		iLocal_126[iVar0] = 0;
		fLocal_90[iVar0] = 0f;
		iLocal_127[iVar0] = 0;
		iLocal_172[iVar0] = 0;
		iLocal_128[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iLocal_179[iVar0] = 0;
		iVar0++;
	}
	iLocal_133 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_180[iVar0] = 0;
		Local_151[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_101[iVar0] = 0f;
		fLocal_102[iVar0] = 0f;
		fLocal_103[iVar0] = 0f;
		fLocal_104[iVar0] = 0f;
		iLocal_132[iVar0] = 0;
		iLocal_173[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_182[iVar0] = 0;
		iVar0++;
	}
	iLocal_135 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iLocal_181[iVar0] = 0;
		Local_152[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_95[iVar0] = 0f;
		fLocal_96[iVar0] = 0f;
		fLocal_97[iVar0] = 0f;
		fLocal_98[iVar0] = 0f;
		iLocal_129[iVar0] = 0;
		fLocal_99[iVar0] = 0f;
		iLocal_130[iVar0] = 0;
		iLocal_174[iVar0] = 0;
		iLocal_131[iVar0] = 0;
		iVar0++;
	}
	iLocal_134 = 0;
	iLocal_137 = 0;
	iLocal_140 = 0;
	iLocal_141 = 0;
	iLocal_142 = 0;
}

void func_313()//Position - 0x1CFB4
{
	func_316();
	func_315();
	func_314();
}

void func_314()//Position - 0x1CFC8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 40)
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
		iLocal_130[iVar0] = 0;
		if (!bLocal_64 && !bLocal_77)
		{
			if (iLocal_129[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_129[iVar0], &cLocal_162);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
}

void func_315()//Position - 0x1D0BF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_180[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_180[iVar0]));
			}
		}
		iLocal_132[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_173[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
		}
		iVar0++;
	}
	iLocal_138 = 0;
	iLocal_135 = 0;
}

void func_316()//Position - 0x1D13C
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
		if (!bLocal_64 && !bLocal_77)
		{
			if (iLocal_126[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_162);
			}
		}
		iLocal_127[iVar0] = 0;
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
	iLocal_137 = 0;
	iLocal_133 = 0;
}

void func_317()//Position - 0x1D23B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
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
			func_319(iLocal_181[iVar0]);
			__LIB_11__.func_122(iLocal_181[iVar0]);
		}
		iLocal_130[iVar0] = 0;
		iLocal_131[iVar0] = 0;
		if (!bLocal_64 && !bLocal_77)
		{
			if (iLocal_129[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_129[iVar0], &cLocal_162);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
	iLocal_139 = 0;
}

void func_319(int iParam0)//Position - 0x1D31F
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
				if (bLocal_85)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_320()//Position - 0x1D3B9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_180[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_180[iVar0], true, false);
			}
			__LIB_11__.func_122(iLocal_180[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_173[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
		}
		iVar0++;
	}
	iLocal_138 = 0;
	iLocal_135 = 0;
}

void func_321()//Position - 0x1D43D
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
			func_319(iLocal_178[iVar0]);
			__LIB_11__.func_122(iLocal_178[iVar0]);
		}
		iLocal_127[iVar0] = 0;
		iLocal_128[iVar0] = 0;
		if (!bLocal_64 && !bLocal_77)
		{
			if (iLocal_126[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_162);
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
	iLocal_137 = 0;
	iLocal_133 = 0;
}

void func_326(int iParam0, float fParam1)//Position - 0x1D56F
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_83 = false;
	if (!bLocal_65)
	{
		if (bLocal_64)
		{
			__LIB_11__.func_121();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_65 = true;
		}
	}
	else if (!bLocal_64)
	{
		__LIB_11__.func_126();
		bLocal_65 = false;
	}
	if (bLocal_64)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_58)
	{
		if (iLocal_53)
		{
			fLocal_110 = 0f;
		}
		else
		{
			fLocal_110 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_11__.func_140(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_63 = 1;
					}
					else
					{
						iLocal_63 = 0;
					}
				}
				fLocal_107 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_108) * fLocal_110));
				if (bLocal_62)
				{
					func_349(iParam0, fLocal_107);
					func_348(iParam0, fLocal_117);
					if (fLocal_112 > 1000f)
					{
						if (iLocal_149 == 0)
						{
							func_347(iParam0, fLocal_117);
						}
						fVar0 = ((fLocal_107 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_149) * 2000f));
						func_346(iParam0, fVar0, fLocal_111);
						iLocal_149++;
						if (iLocal_149 > 2)
						{
							fLocal_112 = 0f;
						}
					}
					else
					{
						iLocal_149 = 0;
						fLocal_112 = (fLocal_112 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_107 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_70)
		{
			if (!iLocal_52)
			{
				func_343(iParam0, ((fParam1 * fLocal_108) * fLocal_110), 0);
				if (!iLocal_73)
				{
				}
				iLocal_73 = 0;
			}
			if (bLocal_55)
			{
				func_342(iParam0);
			}
			if (!iLocal_52)
			{
				func_329(iParam0, ((fParam1 * fLocal_108) * fLocal_110), 0);
			}
		}
		if (iLocal_60)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_183 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_153 = { ENTITY::GET_ENTITY_COORDS(iLocal_183, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_183, &fLocal_91, &fLocal_92, &fLocal_93, &fLocal_94);
				}
			}
			iLocal_60 = 0;
		}
		if (iLocal_59)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
			{
				__LIB_11__.func_122(iLocal_184);
				iLocal_184 = iLocal_183;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_184, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_184, Local_153, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_184, fLocal_91, fLocal_92, fLocal_93, fLocal_94);
			}
			fLocal_106 = fLocal_109;
			iLocal_52 = 1;
			iLocal_59 = 0;
		}
		if (iLocal_52)
		{
			while (!func_327(&iParam0, fLocal_106))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_53 = 1;
		}
		if (iLocal_66)
		{
			iLocal_66 = 0;
		}
	}
}

int func_327(int iParam0, float fParam1)//Position - 0x1D80A
{
	if (!iLocal_67)
	{
		iLocal_52 = 1;
		func_313();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_136 == -1)
			{
				while (!func_328(iParam0, iLocal_136, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_57)
				{
					iLocal_53 = 1;
					fLocal_110 = 0f;
					iLocal_137 = 0;
					iLocal_139 = 0;
					iLocal_138 = 0;
					iLocal_133 = 0;
					iLocal_134 = 0;
					iLocal_135 = 0;
					iLocal_140 = 0;
					iLocal_141 = 0;
					iLocal_142 = 0;
				}
			}
		}
		iLocal_67 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_108) * fLocal_110));
				func_328(iParam0, iLocal_136, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_107 = fParam1;
		iLocal_143 = 0;
		iLocal_146 = 0;
		fLocal_122 = 0f;
		fLocal_121 = 0f;
		func_329(*iParam0, ((1f * fLocal_108) * fLocal_110), 1);
		func_343(*iParam0, ((1f * fLocal_108) * fLocal_110), 1);
		func_342(*iParam0);
		if ((iLocal_140 == 0 && iLocal_141 == 0) && iLocal_142 == 0)
		{
			iLocal_53 = 0;
			iLocal_52 = 0;
			iLocal_67 = 0;
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1D93C
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_162);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_162))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_162, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_144 && iParam1 != iLocal_145)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_162, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_162, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_162, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_162, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_162))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_162);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_162, 10f, 786603);
					}
					else if (iParam1 != iLocal_144 && iParam1 != iLocal_145)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_162, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_162, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_162, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_162, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_329(int iParam0, float fParam1, bool bParam2)//Position - 0x1DB22
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
		iVar0 = iLocal_139;
		while (iVar0 < 40)
		{
			if (iLocal_130[iVar0] != 99)
			{
				if (iLocal_130[iVar0] == 0)
				{
					if (iLocal_129[iVar0] > 0)
					{
						if (!iLocal_52)
						{
							if (fLocal_107 > (fLocal_99[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_11__.func_110(iLocal_174[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_131[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_131[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_131[iVar0]), 1);
								iLocal_130[iVar0]++;
								iLocal_141++;
							}
						}
						else
						{
							fVar6 = (fLocal_107 - fLocal_99[iVar0]);
							fVar6 = (fVar6 * fLocal_100[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < __LIB_12__.func_138(iLocal_129[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_174[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_131[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_131[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_131[iVar0]), 1);
									iLocal_130[iVar0]++;
									iLocal_141++;
								}
								else
								{
									iLocal_130[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_130[iVar0] = 99;
					}
				}
				else if (iLocal_130[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_129[iVar0], &cLocal_162);
					if (BitTest(iLocal_131[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
					}
					else if (!bLocal_79 && ((!BitTest(iLocal_131[iVar0], 2) && bVar10) || (BitTest(iLocal_131[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_12__.func_136());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_12__.func_136());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_174[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_174[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_129[iVar0], &cLocal_162))
							{
								if (fLocal_107 >= (fLocal_99[iVar0] - (fLocal_120 * fParam1)))
								{
									if ((iLocal_66 || bParam2) || (!bLocal_83 && !func_339(Local_152[iVar0 /*3*/], Var5, 5f, fLocal_118)))
									{
										if (bLocal_62)
										{
											func_338(Local_152[iVar0 /*3*/], Var5, fLocal_111);
										}
										iLocal_181[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_174[iVar0], Local_152[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_174[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_181[iVar0], 0);
										}
										if (uLocal_75 && !BitTest(iLocal_131[iVar0], 0))
										{
											__LIB_12__.func_137(iLocal_181[iVar0]);
										}
										if (BitTest(iLocal_131[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_181[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_181[iVar0], Local_152[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_181[iVar0], fLocal_95[iVar0], fLocal_96[iVar0], fLocal_97[iVar0], fLocal_98[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_174[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_181[iVar0], 5f);
										}
										if (!BitTest(iLocal_131[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_181[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_181[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_181[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
										iLocal_141 = (iLocal_141 - 1);
										iLocal_130[iVar0]++;
										bLocal_83 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_181[iVar0], Local_152[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_181[iVar0], fLocal_95[iVar0], fLocal_96[iVar0], fLocal_97[iVar0], fLocal_98[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_174[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_174[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_181[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_181[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
							iLocal_141 = (iLocal_141 - 1);
							iLocal_130[iVar0]++;
						}
					}
				}
				else if (iLocal_130[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_129[iVar0], &cLocal_162);
					if (!BitTest(iLocal_131[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_131[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
							iVar13 = 2;
						}
						else if (!bLocal_79 && ((!BitTest(iLocal_131[iVar0], 2) && bVar10) || (BitTest(iLocal_131[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(__LIB_12__.func_136());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_12__.func_136());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], false))
						{
							if (!bLocal_83 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_181[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_181[iVar0], true), Var5) < 10000f || bParam2) || iLocal_66)
									{
										func_335(&(iLocal_181[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_131[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
					{
						if (fLocal_107 >= fLocal_99[iVar0])
						{
							if (1 > iLocal_134)
							{
								fVar6 = (fLocal_107 - fLocal_99[iVar0]);
								fVar6 = (fVar6 * fLocal_100[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_129[iVar0], &cLocal_162))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_129[iVar0], &cLocal_162))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_181[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_129[iVar0], fVar6, &cLocal_162) };
										if (((!func_339(Var3, Var5, 5f, fLocal_118) && func_339(Var4, Var5, 5f, fLocal_118)) && !iLocal_66) && !bParam2)
										{
											if (!BitTest(iLocal_131[iVar0], 1))
											{
												func_335(&(iLocal_181[iVar0]), iVar13, 1);
											}
											iLocal_134++;
											iLocal_130[iVar0]++;
										}
										else if (((!bLocal_83 || BitTest(iLocal_131[iVar0], 1)) || iLocal_66) || bParam2)
										{
											if (func_328(&(iLocal_181[iVar0]), iLocal_129[iVar0], fVar6, 1, 0, 0, bLocal_81, bLocal_80))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * fLocal_100[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
												{
													if (BitTest(iLocal_131[iVar0], 0))
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
												if (!BitTest(iLocal_131[iVar0], 1))
												{
													func_335(&(iLocal_181[iVar0]), iVar13, 1);
												}
												iLocal_134++;
												iLocal_130[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_131[iVar0], 1))
										{
											func_335(&(iLocal_181[iVar0]), iVar13, 1);
										}
										iLocal_134++;
										iLocal_130[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_131[iVar0], 1))
								{
									func_335(&(iLocal_181[iVar0]), iVar13, 1);
								}
								iLocal_134++;
								iLocal_130[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_131[iVar0], 1))
						{
							func_335(&(iLocal_181[iVar0]), iVar13, 1);
						}
						iLocal_134++;
						iLocal_130[iVar0]++;
					}
				}
				else if (iLocal_130[iVar0] == 3)
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
									if (((!bLocal_56 && !iLocal_53) && !bLocal_72) && (((!bLocal_81 && !bLocal_80) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_181[iVar0])) || func_334(iLocal_181[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_74)
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
												else if (!__LIB_11__.func_138(iLocal_181[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_20__.func_444(iVar2, iLocal_181[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_330(iLocal_181[iVar0]);
												iLocal_130[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * fLocal_100[iVar0]));
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
							iLocal_130[iVar0]++;
						}
					}
					else
					{
						iLocal_130[iVar0]++;
					}
				}
				else if (iLocal_130[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_181[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_181[iVar0]))
						{
							iLocal_130[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_181[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * fLocal_100[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_181[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_129[iVar0], &cLocal_162))
							{
								if (fLocal_107 > (fLocal_99[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_129[iVar0], &cLocal_162)))
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
						iLocal_130[iVar0]++;
					}
				}
				else if (iLocal_130[iVar0] == 5)
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
						if (!bLocal_64 && !bLocal_77)
						{
							if (iLocal_129[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_129[iVar0], &cLocal_162);
							}
						}
						if (!bLocal_54)
						{
							if (!bLocal_82)
							{
								__LIB_11__.func_122(iLocal_181[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_181[iVar0]));
						}
					}
					iLocal_134 = (iLocal_134 - 1);
					iLocal_130[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_139 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_317();
	}
}

void func_330(int iParam0)//Position - 0x1E6FF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_319(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_334(int iParam0)//Position - 0x1E862
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_78)
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

int func_335(var uParam0, int iParam1, bool bParam2)//Position - 0x1E8C0
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_11__.func_123(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_171);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_123());
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, __LIB_12__.func_136(), -1, false, false);
				if (bLocal_84)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_136());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_85)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_11__.func_109(iVar0);
			bLocal_83 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_338(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x1EB47
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_65)
	{
		if (!func_339(Param0, Param1, fParam2, 200f))
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

int func_339(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x1EBBA
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_65)
		{
			if (!iLocal_52)
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

void func_342(int iParam0)//Position - 0x1ECB7
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
		iVar0 = iLocal_138;
		while (iVar0 < 25)
		{
			switch (iLocal_132[iVar0])
			{
				case 0:
					if (!iLocal_173[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_151[iVar0 /*3*/], fLocal_105, fLocal_105, fLocal_105, false, true, 0))
						{
							iLocal_140++;
							iLocal_132[iVar0]++;
						}
					}
					else
					{
						iLocal_132[iVar0] = 99;
					}
					break;
				case 1:
					if (10 > iLocal_135)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_173[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_173[iVar0]))
							{
								if ((iLocal_52 || iLocal_66) || (!bLocal_83 && !func_339(Local_151[iVar0 /*3*/], Var1, 5f, fLocal_118)))
								{
									if (bLocal_62)
									{
										func_338(Local_151[iVar0 /*3*/], Var1, fLocal_111);
									}
									iLocal_180[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_173[iVar0], Local_151[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_173[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_180[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_180[iVar0], fLocal_101[iVar0], fLocal_102[iVar0], fLocal_103[iVar0], fLocal_104[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_180[iVar0], __LIB_11__.func_124()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_180[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_173[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_180[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_180[iVar0], __LIB_11__.func_125()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_180[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_180[iVar0], true);
									iLocal_140 = (iLocal_140 - 1);
									iLocal_135++;
									iLocal_132[iVar0]++;
									bLocal_83 = true;
								}
							}
						}
						else
						{
							iLocal_140 = (iLocal_140 - 1);
							iLocal_135++;
							iLocal_132[iVar0]++;
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
						if (fLocal_119 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_119 * fLocal_119))
						{
							if (!__LIB_20__.func_444(iLocal_180[iVar0], iParam0, 0))
							{
								if (!bLocal_54)
								{
									__LIB_11__.func_122(iLocal_180[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_180[iVar0]));
								}
								iLocal_135 = (iLocal_135 - 1);
								iLocal_132[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_132[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_138 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_320();
	}
}

void func_343(int iParam0, float fParam1, int iParam2)//Position - 0x1EFAF
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
			fLocal_107 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_137;
		while (iVar0 < 150 && !bVar17)
		{
			if (iLocal_127[iVar0] != 99)
			{
				if (iLocal_127[iVar0] == 0)
				{
					if (iLocal_126[iVar0] > 0 && iLocal_172[iVar0] != 0)
					{
						if (!iLocal_52)
						{
							if (fLocal_107 < (fLocal_90[iVar0] + 20000f))
							{
								if (fLocal_107 >= (fLocal_90[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_11__.func_110(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_128[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_128[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_128[iVar0]), 1);
									iLocal_142++;
									iLocal_127[iVar0]++;
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
								func_345(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_107 - fLocal_90[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < __LIB_12__.func_138(iLocal_126[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_128[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_172[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_128[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_128[iVar0]), 1);
									iLocal_142++;
									iLocal_127[iVar0]++;
								}
								else
								{
									func_345(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_345(iVar0, 1090519040);
					}
				}
				else if (iLocal_127[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_162);
					bVar11 = false;
					if (BitTest(iLocal_128[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_79 && ((!BitTest(iLocal_128[iVar0], 2) && bVar13) || (BitTest(iLocal_128[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_12__.func_136());
						bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_12__.func_136());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_172[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_172[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_126[iVar0], &cLocal_162)) && bVar11)
						{
							if (fLocal_107 >= (fLocal_90[iVar0] - (fLocal_120 * fParam1)))
							{
								if ((iLocal_66 || iParam2) || (!bLocal_83 && !func_339(Local_150[iVar0 /*3*/], Var8, 5f, fLocal_118)))
								{
									if (bLocal_62)
									{
										func_338(Local_150[iVar0 /*3*/], Var8, fLocal_111);
									}
									iLocal_178[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_172[iVar0], Local_150[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_172[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_178[iVar0], 0);
									}
									if (uLocal_75 && !BitTest(iLocal_128[iVar0], 0))
									{
										__LIB_12__.func_137(iLocal_178[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_178[iVar0], Local_150[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_178[iVar0], fLocal_86[iVar0], fLocal_87[iVar0], fLocal_88[iVar0], fLocal_89[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_172[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_172[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_178[iVar0], 5f);
									}
									if (BitTest(iLocal_128[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_178[iVar0], true);
									}
									if (!BitTest(iLocal_128[iVar0], 0))
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
									iLocal_142 = (iLocal_142 - 1);
									iLocal_127[iVar0]++;
									bLocal_83 = true;
								}
								else if (fLocal_107 > fLocal_90[iVar0])
								{
									iLocal_142 = (iLocal_142 - 1);
									func_345(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_127[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_148 || iLocal_148 == 0)) || iLocal_66) || iParam2)
					{
						if (!BitTest(iLocal_128[iVar0], 1))
						{
							if (BitTest(iLocal_128[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
								iVar15 = 2;
							}
							else if (!bLocal_79 && ((!BitTest(iLocal_128[iVar0], 2) && bVar13) || (BitTest(iLocal_128[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(__LIB_12__.func_136());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_12__.func_136());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_178[iVar0], false))
							{
								if (!bLocal_83 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_178[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_178[iVar0], true), Var8) < 10000f || iParam2) || iLocal_66)
										{
											func_335(&(iLocal_178[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_128[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_162);
							if (fLocal_107 >= fLocal_90[iVar0])
							{
								if (11 > iLocal_133)
								{
									fVar9 = (fLocal_107 - fLocal_90[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_126[iVar0], &cLocal_162))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_162))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_178[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_126[iVar0], fVar9, &cLocal_162) };
											if (!func_339(Var6, Var8, 5f, fLocal_118) && func_339(Var7, Var8, 5f, fLocal_118))
											{
												if (!BitTest(iLocal_128[iVar0], 1))
												{
													func_335(&(iLocal_178[iVar0]), iVar15, 0);
												}
												func_345(iVar0, 1090519040);
											}
											else if (((!bLocal_83 || BitTest(iLocal_128[iVar0], 1)) || iLocal_66) || iParam2)
											{
												if (func_328(&(iLocal_178[iVar0]), iLocal_126[iVar0], fVar9, 1, 0, 0, 1, bLocal_80))
												{
													if (!BitTest(iLocal_128[iVar0], 1))
													{
														func_335(&(iLocal_178[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_178[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_178[iVar0], fParam1);
													iLocal_133++;
													iLocal_127[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_128[iVar0], 1))
											{
												func_335(&(iLocal_178[iVar0]), iVar15, 0);
											}
											func_345(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_162))
									{
										if (!BitTest(iLocal_128[iVar0], 1))
										{
											func_335(&(iLocal_178[iVar0]), iVar15, 0);
										}
										func_345(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_128[iVar0], 1))
									{
										func_335(&(iLocal_178[iVar0]), iVar15, 0);
									}
									func_345(iVar0, 1090519040);
								}
							}
							else if (iLocal_63 && !bLocal_71)
							{
								if (!BitTest(iLocal_128[iVar0], 1))
								{
									func_335(&(iLocal_178[iVar0]), iVar15, 0);
								}
								func_345(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_128[iVar0], 1))
							{
								func_335(&(iLocal_178[iVar0]), iVar15, 0);
							}
							func_345(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_148 = iVar0;
					}
				}
				else if (iLocal_127[iVar0] == 3)
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
									if (!bLocal_61)
									{
										if ((!bLocal_56 && !iLocal_53) && func_334(iLocal_178[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_147 || iLocal_147 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_11__.func_139(iLocal_178[iVar0], iVar5) || __LIB_20__.func_444(iVar5, iLocal_178[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_147 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_76 && !BitTest(iLocal_128[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_147 || iLocal_147 == 0))
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
											iLocal_147 = iVar0;
										}
									}
									if (bVar18)
									{
										func_330(iLocal_178[iVar0]);
										iLocal_127[iVar0]++;
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
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_178[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_178[iVar0]))
						{
							iLocal_127[iVar0]++;
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
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_126[iVar0], &cLocal_162))
							{
								if (fLocal_107 > (fLocal_90[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_126[iVar0], &cLocal_162)))
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
						iLocal_127[iVar0]++;
					}
				}
				else if (iLocal_127[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_178[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_178[iVar0]);
					}
					iLocal_133 = (iLocal_133 - 1);
					func_345(iVar0, fVar10);
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
			iLocal_137 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_147 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_148 = 0;
		}
	}
	else
	{
		func_321();
	}
}

void func_345(int iParam0, float fParam1)//Position - 0x1FB4D
{
	int iVar0;
	if (!iLocal_172[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_178[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_178[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_178[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_178[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_178[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_85)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_54)
	{
		if (!bLocal_82)
		{
			__LIB_11__.func_109(iVar0);
			__LIB_11__.func_122(iLocal_178[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_178[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_178[iParam0]));
		}
	}
	if (!bLocal_64 && !bLocal_77)
	{
		if (iLocal_126[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_126[iParam0], &cLocal_162);
		}
	}
	iLocal_127[iParam0] = 99;
}

void func_346(int iParam0, float fParam1, float fParam2)//Position - 0x1FCA8
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
			func_338(Var1, Var4, fVar5);
		}
	}
}

void func_347(int iParam0, float fParam1)//Position - 0x1FD2B
{
	if (!bLocal_65)
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

void func_348(int iParam0, float fParam1)//Position - 0x1FD79
{
	if (!bLocal_65)
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

void func_349(int iParam0, float fParam1)//Position - 0x1FDC7
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_121 + 2000f);
		fVar2 = (fLocal_122 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_143 == 0)
				{
					Local_158 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_121) };
					iLocal_143++;
				}
				else if (iLocal_143 == 1)
				{
					Local_159 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_143++;
				}
				else if (!bLocal_83)
				{
					if (Local_158.f_0 > Local_159.f_0)
					{
						fVar3 = Local_158.f_0;
						Local_158.f_0 = Local_159.f_0;
						Local_159.f_0 = fVar3;
					}
					if (Local_158.f_1 > Local_159.f_1)
					{
						fVar3 = Local_158.f_1;
						Local_158.f_1 = Local_159.f_1;
						Local_159.f_1 = fVar3;
					}
					if (Local_158.f_2 > Local_159.f_2)
					{
						fVar3 = Local_158.f_2;
						Local_158.f_2 = Local_159.f_2;
						Local_159.f_2 = fVar3;
					}
					Local_158 = { Local_158 - Vector(fLocal_125, fLocal_125, fLocal_125) };
					Local_159 = { Local_159 + Vector(fLocal_125, fLocal_125, fLocal_125) };
					PATHFIND::SET_ROADS_IN_AREA(Local_158, Local_159, false, false);
					fLocal_121 = fVar1;
					iLocal_143 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_146 == 0)
			{
				Local_160 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_122) };
				iLocal_146++;
			}
			else if (iLocal_146 == 1)
			{
				Local_161 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_146++;
			}
			else if (!bLocal_83 && !bVar4)
			{
				if (Local_160.f_0 > Local_161.f_0)
				{
					fVar3 = Local_160.f_0;
					Local_160.f_0 = Local_161.f_0;
					Local_161.f_0 = fVar3;
				}
				if (Local_160.f_1 > Local_161.f_1)
				{
					fVar3 = Local_160.f_1;
					Local_160.f_1 = Local_161.f_1;
					Local_161.f_1 = fVar3;
				}
				if (Local_160.f_2 > Local_161.f_2)
				{
					fVar3 = Local_160.f_2;
					Local_160.f_2 = Local_161.f_2;
					Local_161.f_2 = fVar3;
				}
				Local_160 = { Local_160 - Vector(fLocal_125, fLocal_125, fLocal_125) };
				Local_161 = { Local_161 + Vector(fLocal_125, fLocal_125, fLocal_125) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_160, Local_161, 1);
				fLocal_122 = fVar2;
				iLocal_146 = 0;
			}
		}
	}
}

void func_352(float fParam0)//Position - 0x20103
{
	int iVar0;
	if (fLocal_625 < fParam0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_178)
		{
			if (iLocal_126[iVar0] != 0)
			{
				if (fLocal_90[iVar0] < fParam0)
				{
					STREAMING::REQUEST_MODEL(iLocal_172[iVar0]);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_126[iVar0], "FH1UBER");
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_181)
		{
			if (iLocal_129[iVar0] != 0)
			{
				if (fLocal_99[iVar0] < fParam0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_174[iVar0]);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_129[iVar0], "FH1UBER");
				}
			}
			iVar0++;
		}
	}
}

void func_354()//Position - 0x201DC
{
	Local_150[0 /*3*/] = { 1094.9021f, -1724.9916f, 28.7513f };
	fLocal_86[0] = 0.0003f;
	fLocal_87[0] = -0.002f;
	fLocal_88[0] = 0.9865f;
	fLocal_89[0] = -0.1636f;
	iLocal_126[0] = 1;
	fLocal_90[0] = 2970f;
	iLocal_172[0] = joaat("premier");
	Local_150[1 /*3*/] = { 1124.5498f, -1741.1417f, 28.9311f };
	fLocal_86[1] = 0.0008f;
	fLocal_87[1] = -0.0002f;
	fLocal_88[1] = 0.1767f;
	fLocal_89[1] = 0.9843f;
	iLocal_126[1] = 2;
	fLocal_90[1] = 3102f;
	iLocal_172[1] = joaat("serrano");
	Local_150[2 /*3*/] = { 1098.3792f, -1748.8092f, 35.1966f };
	fLocal_86[2] = -0.0009f;
	fLocal_87[2] = 0.0009f;
	fLocal_88[2] = -0.5723f;
	fLocal_89[2] = 0.82f;
	iLocal_126[2] = 3;
	fLocal_90[2] = 3564f;
	iLocal_172[2] = joaat("premier");
	Local_150[3 /*3*/] = { 1079.2882f, -1712.6084f, 29.0574f };
	fLocal_86[3] = 0f;
	fLocal_87[3] = -0.0001f;
	fLocal_88[3] = 0.987f;
	fLocal_89[3] = -0.1608f;
	iLocal_126[3] = 4;
	fLocal_90[3] = 4092f;
	iLocal_172[3] = joaat("serrano");
	Local_150[4 /*3*/] = { 1084.3353f, -1748.208f, 35.4187f };
	fLocal_86[4] = 0.0002f;
	fLocal_87[4] = -0.0001f;
	fLocal_88[4] = -0.5776f;
	fLocal_89[4] = 0.8163f;
	iLocal_126[4] = 5;
	fLocal_90[4] = 4488f;
	iLocal_172[4] = joaat("serrano");
	Local_150[5 /*3*/] = { 1059.9586f, -1730.4474f, 35.2553f };
	fLocal_86[5] = -0.0013f;
	fLocal_87[5] = 0.0083f;
	fLocal_88[5] = 0.9843f;
	fLocal_89[5] = -0.1765f;
	iLocal_126[5] = 6;
	fLocal_90[5] = 5610f;
	iLocal_172[5] = joaat("serrano");
	Local_150[6 /*3*/] = { 1057.1438f, -1722.0253f, 35.1296f };
	fLocal_86[6] = -0.0015f;
	fLocal_87[6] = 0.0094f;
	fLocal_88[6] = 0.9877f;
	fLocal_89[6] = -0.156f;
	iLocal_126[6] = 7;
	fLocal_90[6] = 5742f;
	iLocal_172[6] = joaat("serrano");
	Local_150[7 /*3*/] = { 1066.2435f, -1754.8478f, 35.3732f };
	fLocal_86[7] = -0.0011f;
	fLocal_87[7] = 0.0006f;
	fLocal_88[7] = -0.5739f;
	fLocal_89[7] = 0.8189f;
	iLocal_126[7] = 8;
	fLocal_90[7] = 5874f;
	iLocal_172[7] = joaat("serrano");
	Local_150[8 /*3*/] = { 1059.5776f, -1759.7831f, 35.0615f };
	fLocal_86[8] = 0.0005f;
	fLocal_87[8] = 0f;
	fLocal_88[8] = -0.4766f;
	fLocal_89[8] = 0.8791f;
	iLocal_126[8] = 9;
	fLocal_90[8] = 6402f;
	iLocal_172[8] = joaat("premier");
	Local_150[9 /*3*/] = { 1057.0295f, -1757.4359f, 35.1548f };
	fLocal_86[9] = -0.0005f;
	fLocal_87[9] = 0.0007f;
	fLocal_88[9] = -0.5842f;
	fLocal_89[9] = 0.8116f;
	iLocal_126[9] = 10;
	fLocal_90[9] = 6468f;
	iLocal_172[9] = joaat("premier");
	Local_150[10 /*3*/] = { 1027.8516f, -1770.6709f, 35.2252f };
	fLocal_86[10] = 0.0414f;
	fLocal_87[10] = -0.0311f;
	fLocal_88[10] = -0.6375f;
	fLocal_89[10] = 0.7687f;
	iLocal_126[10] = 11;
	fLocal_90[10] = 8250f;
	iLocal_172[10] = joaat("premier");
	Local_150[11 /*3*/] = { 867.5558f, -1748.6525f, 29.4237f };
	fLocal_86[11] = -0.0075f;
	fLocal_87[11] = -0.0064f;
	fLocal_88[11] = 0.6388f;
	fLocal_89[11] = 0.7693f;
	iLocal_126[11] = 12;
	fLocal_90[11] = 17754f;
	iLocal_172[11] = joaat("serrano");
	Local_150[12 /*3*/] = { 860.624f, -1747.1852f, 28.9555f };
	fLocal_86[12] = -0.0082f;
	fLocal_87[12] = -0.0064f;
	fLocal_88[12] = 0.6768f;
	fLocal_89[12] = 0.7361f;
	iLocal_126[12] = 13;
	fLocal_90[12] = 18216f;
	iLocal_172[12] = joaat("premier");
	Local_150[13 /*3*/] = { 860.9755f, -1742.043f, 29.0624f };
	fLocal_86[13] = -0.0066f;
	fLocal_87[13] = -0.0052f;
	fLocal_88[13] = 0.6624f;
	fLocal_89[13] = 0.7491f;
	iLocal_126[13] = 14;
	fLocal_90[13] = 18216f;
	iLocal_172[13] = joaat("premier");
	Local_150[14 /*3*/] = { 845.2426f, -1762.8329f, 28.6199f };
	fLocal_86[14] = 0.0017f;
	fLocal_87[14] = -0.0013f;
	fLocal_88[14] = -0.6127f;
	fLocal_89[14] = 0.7903f;
	iLocal_126[14] = 15;
	fLocal_90[14] = 19668f;
	iLocal_172[14] = joaat("premier");
	Local_150[15 /*3*/] = { 837.1574f, -1723.8857f, 28.7141f };
	fLocal_86[15] = -0.0005f;
	fLocal_87[15] = 0f;
	fLocal_88[15] = -0.0404f;
	fLocal_89[15] = 0.9992f;
	iLocal_126[15] = 16;
	fLocal_90[15] = 19932f;
	iLocal_172[15] = joaat("premier");
	Local_150[16 /*3*/] = { 801.6107f, -1752.743f, 28.7486f };
	fLocal_86[16] = 0.0028f;
	fLocal_87[16] = -0.0031f;
	fLocal_88[16] = 0.7449f;
	fLocal_89[16] = -0.6671f;
	iLocal_126[16] = 17;
	fLocal_90[16] = 21780f;
	iLocal_172[16] = joaat("premier");
	Local_150[17 /*3*/] = { 789.3914f, -1751.3726f, 28.8925f };
	fLocal_86[17] = 0.0032f;
	fLocal_87[17] = -0.0037f;
	fLocal_88[17] = 0.753f;
	fLocal_89[17] = -0.658f;
	iLocal_126[17] = 18;
	fLocal_90[17] = 22506f;
	iLocal_172[17] = joaat("premier");
	Local_150[18 /*3*/] = { 768.2957f, -1744.755f, 29.0428f };
	fLocal_86[18] = 0.0008f;
	fLocal_87[18] = -0.0008f;
	fLocal_88[18] = -0.6955f;
	fLocal_89[18] = 0.7185f;
	iLocal_126[18] = 19;
	fLocal_90[18] = 24420f;
	iLocal_172[18] = joaat("premier");
	Local_150[19 /*3*/] = { 848.1189f, -1592.2108f, 31.3671f };
	fLocal_86[19] = -0.0098f;
	fLocal_87[19] = -0.0003f;
	fLocal_88[19] = 0.0308f;
	fLocal_89[19] = 0.9995f;
	iLocal_126[19] = 20;
	fLocal_90[19] = 29766f;
	iLocal_172[19] = joaat("serrano");
	Local_150[20 /*3*/] = { 789.3643f, -1395.0581f, 26.5083f };
	fLocal_86[20] = -0.0005f;
	fLocal_87[20] = 0.0083f;
	fLocal_88[20] = 0.9999f;
	fLocal_89[20] = -0.0085f;
	iLocal_126[20] = 21;
	fLocal_90[20] = 41008f;
	iLocal_172[20] = joaat("premier");
	Local_151[0 /*3*/] = { 707.8363f, -1395.9775f, 25.8513f };
	fLocal_101[0] = -0.0024f;
	fLocal_102[0] = 0.0013f;
	fLocal_103[0] = 0.806f;
	fLocal_104[0] = 0.5919f;
	iLocal_173[0] = joaat("premier");
	Local_151[1 /*3*/] = { 709.5156f, -1401.8848f, 25.9322f };
	fLocal_101[1] = -0.0006f;
	fLocal_102[1] = -0.0007f;
	fLocal_103[1] = 0.7992f;
	fLocal_104[1] = 0.6011f;
	iLocal_173[1] = joaat("premier");
	Local_150[21 /*3*/] = { 656.9852f, -1438.7355f, 30.5204f };
	fLocal_86[21] = -0.0061f;
	fLocal_87[21] = 0.0032f;
	fLocal_88[21] = 0.7272f;
	fLocal_89[21] = -0.6864f;
	iLocal_126[21] = 22;
	fLocal_90[21] = 52624f;
	iLocal_172[21] = joaat("serrano");
	Local_150[22 /*3*/] = { 649.5815f, -1443.6371f, 30.0296f };
	fLocal_86[22] = -0.0048f;
	fLocal_87[22] = 0.0041f;
	fLocal_88[22] = 0.7389f;
	fLocal_89[22] = -0.6738f;
	iLocal_126[22] = 23;
	fLocal_90[22] = 53812f;
	iLocal_172[22] = joaat("premier");
	Local_150[23 /*3*/] = { 538.8035f, -1418.0469f, 28.665f };
	fLocal_86[23] = 0.0003f;
	fLocal_87[23] = 0f;
	fLocal_88[23] = 0.0253f;
	fLocal_89[23] = 0.9997f;
	iLocal_126[23] = 24;
	fLocal_90[23] = 59290f;
	iLocal_172[23] = joaat("premier");
	Local_150[24 /*3*/] = { 533.0499f, -1416.2839f, 28.9904f };
	fLocal_86[24] = 0f;
	fLocal_87[24] = 0.0002f;
	fLocal_88[24] = 1f;
	fLocal_89[24] = 0.0034f;
	iLocal_126[24] = 25;
	fLocal_90[24] = 59620f;
	iLocal_172[24] = joaat("serrano");
	Local_150[25 /*3*/] = { 484.86f, -1444.9907f, 28.7354f };
	fLocal_86[25] = 0.0004f;
	fLocal_87[25] = 0.0002f;
	fLocal_88[25] = -0.7033f;
	fLocal_89[25] = 0.7109f;
	iLocal_126[25] = 26;
	fLocal_90[25] = 61996f;
	iLocal_172[25] = joaat("premier");
	Local_150[26 /*3*/] = { 471.0496f, -1415.1317f, 28.9925f };
	fLocal_86[26] = -0.0002f;
	fLocal_87[26] = -0.0002f;
	fLocal_88[26] = 0.5543f;
	fLocal_89[26] = 0.8323f;
	iLocal_126[26] = 27;
	fLocal_90[26] = 62788f;
	iLocal_172[26] = joaat("premier");
	Local_151[2 /*3*/] = { 501.9684f, -1337.3604f, 28.7765f };
	fLocal_101[2] = -0.0015f;
	fLocal_102[2] = 0.0014f;
	fLocal_103[2] = -0.4395f;
	fLocal_104[2] = 0.8982f;
	iLocal_173[2] = joaat("premier");
	Local_151[3 /*3*/] = { 503.8632f, -1340.4531f, 28.8254f };
	fLocal_101[3] = 0.0006f;
	fLocal_102[3] = 0.0004f;
	fLocal_103[3] = -0.3988f;
	fLocal_104[3] = 0.917f;
	iLocal_173[3] = joaat("premier");
	Local_150[27 /*3*/] = { 521.3064f, -1324.2755f, 28.8192f };
	fLocal_86[27] = 0.0012f;
	fLocal_87[27] = 0.0014f;
	fLocal_88[27] = 0.3395f;
	fLocal_89[27] = 0.9406f;
	iLocal_126[27] = 28;
	fLocal_90[27] = 66154f;
	iLocal_172[27] = joaat("premier");
	Local_150[28 /*3*/] = { 493.0157f, -1260.1964f, 28.8755f };
	fLocal_86[28] = 0.0022f;
	fLocal_87[28] = -0.0021f;
	fLocal_88[28] = 0.7097f;
	fLocal_89[28] = -0.7045f;
	iLocal_126[28] = 29;
	fLocal_90[28] = 70444f;
	iLocal_172[28] = joaat("premier");
	Local_150[29 /*3*/] = { 485.2056f, -1193.514f, 41.2846f };
	fLocal_86[29] = -0.0029f;
	fLocal_87[29] = -0.0028f;
	fLocal_88[29] = 0.6941f;
	fLocal_89[29] = 0.7199f;
	iLocal_126[29] = 30;
	fLocal_90[29] = 75130f;
	iLocal_172[29] = joaat("premier");
	Local_150[30 /*3*/] = { 504.7741f, -1176.6111f, 28.8833f };
	fLocal_86[30] = -0.002f;
	fLocal_87[30] = 0f;
	fLocal_88[30] = 0.0099f;
	fLocal_89[30] = 0.9999f;
	iLocal_126[30] = 31;
	fLocal_90[30] = 75526f;
	iLocal_172[30] = joaat("premier");
	Local_150[31 /*3*/] = { 500.8426f, -1132.735f, 29.0899f };
	fLocal_86[31] = -0.0001f;
	fLocal_87[31] = 0f;
	fLocal_88[31] = -0.3028f;
	fLocal_89[31] = 0.9531f;
	iLocal_126[31] = 32;
	fLocal_90[31] = 78298f;
	iLocal_172[31] = joaat("serrano");
	Local_150[32 /*3*/] = { 481.2516f, -1134.45f, 28.9857f };
	fLocal_86[32] = -0.0001f;
	fLocal_87[32] = 0.0001f;
	fLocal_88[32] = 0.7071f;
	fLocal_89[32] = -0.7071f;
	iLocal_126[32] = 33;
	fLocal_90[32] = 78430f;
	iLocal_172[32] = joaat("premier");
	Local_150[33 /*3*/] = { 492.8828f, -1128.5598f, 28.9559f };
	fLocal_86[33] = 0.001f;
	fLocal_87[33] = 0.001f;
	fLocal_88[33] = 0.7238f;
	fLocal_89[33] = 0.69f;
	iLocal_126[33] = 34;
	fLocal_90[33] = 78562f;
	iLocal_172[33] = joaat("premier");
	Local_150[34 /*3*/] = { 497.8196f, -1104.1888f, 28.8836f };
	fLocal_86[34] = 0f;
	fLocal_87[34] = 0.0061f;
	fLocal_88[34] = 1f;
	fLocal_89[34] = -0.0014f;
	iLocal_126[34] = 35;
	fLocal_90[34] = 80344f;
	iLocal_172[34] = joaat("serrano");
	Local_150[35 /*3*/] = { 470.4125f, -1032.5781f, 33.3936f };
	fLocal_86[35] = -0.0252f;
	fLocal_87[35] = -0.0286f;
	fLocal_88[35] = 0.7504f;
	fLocal_89[35] = 0.6599f;
	iLocal_126[35] = 36;
	fLocal_90[35] = 88858f;
	iLocal_172[35] = 0;
	Local_150[36 /*3*/] = { 380.998f, -1134.3085f, 28.9309f };
	fLocal_86[36] = 0.0024f;
	fLocal_87[36] = 0.0025f;
	fLocal_88[36] = 0.7109f;
	fLocal_89[36] = -0.7032f;
	iLocal_126[36] = 37;
	fLocal_90[36] = 90574f;
	iLocal_172[36] = joaat("premier");
	Local_151[6 /*3*/] = { 372.9772f, -1136.5481f, 29.1298f };
	fLocal_101[6] = -0.0186f;
	fLocal_102[6] = -0.0177f;
	fLocal_103[6] = 0.727f;
	fLocal_104[6] = -0.6861f;
	iLocal_173[6] = joaat("serrano");
	Local_150[37 /*3*/] = { 328.8199f, -1134.4833f, 28.9543f };
	fLocal_86[37] = -0.0001f;
	fLocal_87[37] = 0.0001f;
	fLocal_88[37] = -0.7043f;
	fLocal_89[37] = 0.7099f;
	iLocal_126[37] = 38;
	fLocal_90[37] = 95194f;
	iLocal_172[37] = joaat("premier");
	Local_150[38 /*3*/] = { 321.5484f, -1134.5587f, 29.0881f };
	fLocal_86[38] = -0.0002f;
	fLocal_87[38] = 0.0002f;
	fLocal_88[38] = -0.7034f;
	fLocal_89[38] = 0.7108f;
	iLocal_126[38] = 39;
	fLocal_90[38] = 96052f;
	iLocal_172[38] = 0;
	Local_150[39 /*3*/] = { 374.7384f, -1053.8479f, 28.9763f };
	fLocal_86[39] = 0.0007f;
	fLocal_87[39] = -0.0006f;
	fLocal_88[39] = -0.6988f;
	fLocal_89[39] = 0.7153f;
	iLocal_126[39] = 40;
	fLocal_90[39] = 100936f;
	iLocal_172[39] = joaat("premier");
	Local_150[40 /*3*/] = { 382.6972f, -1053.6361f, 28.8843f };
	fLocal_86[40] = -0.0011f;
	fLocal_87[40] = 0.001f;
	fLocal_88[40] = -0.7014f;
	fLocal_89[40] = 0.7128f;
	iLocal_126[40] = 41;
	fLocal_90[40] = 100936f;
	iLocal_172[40] = joaat("serrano");
	Local_150[41 /*3*/] = { 396.9267f, -978.9899f, 29.0242f };
	fLocal_86[41] = 0f;
	fLocal_87[41] = -0.0009f;
	fLocal_88[41] = 0.9998f;
	fLocal_89[41] = 0.0211f;
	iLocal_126[41] = 42;
	fLocal_90[41] = 111232f;
	iLocal_172[41] = joaat("serrano");
	Local_150[42 /*3*/] = { 387.2838f, -957.0242f, 29.0587f };
	fLocal_86[42] = 0.0002f;
	fLocal_87[42] = -0.0004f;
	fLocal_88[42] = 0.7264f;
	fLocal_89[42] = -0.6873f;
	iLocal_126[42] = 43;
	fLocal_90[42] = 117370f;
	iLocal_172[42] = joaat("serrano");
	Local_150[43 /*3*/] = { 378.7138f, -956.7831f, 28.9829f };
	fLocal_86[43] = 0f;
	fLocal_87[43] = 0f;
	fLocal_88[43] = 0.7138f;
	fLocal_89[43] = -0.7004f;
	iLocal_126[43] = 44;
	fLocal_90[43] = 117436f;
	iLocal_172[43] = joaat("serrano");
	Local_150[44 /*3*/] = { 400.5379f, -936.7937f, 28.9378f };
	fLocal_86[44] = 0f;
	fLocal_87[44] = -0.0006f;
	fLocal_88[44] = 0.9998f;
	fLocal_89[44] = 0.0187f;
	iLocal_126[44] = 45;
	fLocal_90[44] = 119086f;
	iLocal_172[44] = joaat("premier");
	Local_150[45 /*3*/] = { 408.7719f, -877.9841f, 28.9611f };
	fLocal_86[45] = 0.0036f;
	fLocal_87[45] = -0.0001f;
	fLocal_88[45] = -0.0204f;
	fLocal_89[45] = 0.9998f;
	iLocal_126[45] = 46;
	fLocal_90[45] = 122650f;
	iLocal_172[45] = joaat("premier");
	Local_150[46 /*3*/] = { 421.5898f, -849.4219f, 29.2132f };
	fLocal_86[46] = -0.0565f;
	fLocal_87[46] = -0.0543f;
	fLocal_88[46] = 0.7197f;
	fLocal_89[46] = 0.6898f;
	iLocal_126[46] = 47;
	fLocal_90[46] = 124432f;
	iLocal_172[46] = joaat("premier");
	Local_150[47 /*3*/] = { 422.5729f, -821.7974f, 28.8209f };
	fLocal_86[47] = 0.0192f;
	fLocal_87[47] = 0.0192f;
	fLocal_88[47] = 0.707f;
	fLocal_89[47] = 0.7067f;
	iLocal_126[47] = 48;
	fLocal_90[47] = 125818f;
	iLocal_172[47] = joaat("serrano");
	Local_150[48 /*3*/] = { 403.55f, -810.9785f, 28.8325f };
	fLocal_86[48] = 0f;
	fLocal_87[48] = 0f;
	fLocal_88[48] = 1f;
	fLocal_89[48] = 0f;
	iLocal_126[48] = 49;
	fLocal_90[48] = 126346f;
	iLocal_172[48] = joaat("premier");
	Local_150[49 /*3*/] = { 408.7001f, -694.7044f, 28.9669f };
	fLocal_86[49] = 0.0076f;
	fLocal_87[49] = 0f;
	fLocal_88[49] = 0f;
	fLocal_89[49] = 1f;
	iLocal_126[49] = 50;
	fLocal_90[49] = 144757f;
	iLocal_172[49] = joaat("serrano");
	Local_150[50 /*3*/] = { 399.3801f, -674.1376f, 28.8158f };
	fLocal_86[50] = 0.0007f;
	fLocal_87[50] = 0.0007f;
	fLocal_88[50] = 0.6916f;
	fLocal_89[50] = 0.7223f;
	iLocal_126[50] = 51;
	fLocal_90[50] = 145813f;
	iLocal_172[50] = joaat("premier");
	Local_151[7 /*3*/] = { 409.8649f, -655.0555f, 28.0074f };
	fLocal_101[7] = 0f;
	fLocal_102[7] = 0f;
	fLocal_103[7] = 0.7213f;
	fLocal_104[7] = -0.6926f;
	iLocal_173[7] = joaat("premier");
	Local_151[8 /*3*/] = { 392.8911f, -643.9622f, 28.0134f };
	fLocal_101[8] = -0.0001f;
	fLocal_102[8] = 0f;
	fLocal_103[8] = 0.7089f;
	fLocal_104[8] = 0.7053f;
	iLocal_173[8] = joaat("premier");
	Local_151[9 /*3*/] = { 429.7155f, -638.2184f, 28.5253f };
	fLocal_101[9] = -0.0003f;
	fLocal_102[9] = 0f;
	fLocal_103[9] = -0.0189f;
	fLocal_104[9] = 0.9998f;
	iLocal_173[9] = joaat("bus");
	Local_150[51 /*3*/] = { 333.5482f, -662.7706f, 28.9943f };
	fLocal_86[51] = 0f;
	fLocal_87[51] = 0f;
	fLocal_88[51] = 0.7987f;
	fLocal_89[51] = -0.6017f;
	iLocal_126[51] = 52;
	fLocal_90[51] = 152347f;
	iLocal_172[51] = joaat("premier");
	Local_150[52 /*3*/] = { 327.5386f, -660.2631f, 28.7691f };
	fLocal_86[52] = 0f;
	fLocal_87[52] = 0.0001f;
	fLocal_88[52] = 0.8171f;
	fLocal_89[52] = -0.5764f;
	iLocal_126[52] = 53;
	fLocal_90[52] = 152347f;
	iLocal_172[52] = joaat("premier");
	Local_151[10 /*3*/] = { 257.7682f, -626.4667f, 40.9463f };
	fLocal_101[10] = 0.0462f;
	fLocal_102[10] = 0.0124f;
	fLocal_103[10] = -0.1716f;
	fLocal_104[10] = 0.984f;
	iLocal_173[10] = joaat("serrano");
	Local_150[53 /*3*/] = { 127.3681f, -577.9399f, 31.2777f };
	fLocal_86[53] = 0.0008f;
	fLocal_87[53] = -0.0012f;
	fLocal_88[53] = 0.831f;
	fLocal_89[53] = -0.5562f;
	iLocal_126[53] = 54;
	fLocal_90[53] = 161917f;
	iLocal_172[53] = joaat("premier");
	Local_150[54 /*3*/] = { 99.9988f, -544.2546f, 33.5235f };
	fLocal_86[54] = -0.0017f;
	fLocal_87[54] = -0.0009f;
	fLocal_88[54] = 0.7134f;
	fLocal_89[54] = -0.7008f;
	iLocal_126[54] = 55;
	fLocal_90[54] = 163699f;
	iLocal_172[54] = joaat("premier");
	Local_150[56 /*3*/] = { 108.3187f, -581.6124f, 31.0713f };
	fLocal_86[56] = 0.0009f;
	fLocal_87[56] = -0.0004f;
	fLocal_88[56] = -0.1665f;
	fLocal_89[56] = 0.986f;
	iLocal_126[56] = 57;
	fLocal_90[56] = 163765f;
	iLocal_172[56] = joaat("premier");
	Local_150[58 /*3*/] = { -124.834f, -690.5775f, 34.6172f };
	fLocal_86[58] = -0.0011f;
	fLocal_87[58] = -0.0065f;
	fLocal_88[58] = 0.9848f;
	fLocal_89[58] = 0.1733f;
	iLocal_126[58] = 59;
	fLocal_90[58] = 186261f;
	iLocal_172[58] = joaat("premier");
	Local_150[59 /*3*/] = { -112.3217f, -727.3997f, 34.2949f };
	fLocal_86[59] = 0.0026f;
	fLocal_87[59] = -0.002f;
	fLocal_88[59] = -0.5987f;
	fLocal_89[59] = 0.8009f;
	iLocal_126[59] = 60;
	fLocal_90[59] = 188307f;
	iLocal_172[59] = joaat("premier");
	Local_150[60 /*3*/] = { -94.2945f, -712.0757f, 34.2515f };
	fLocal_86[60] = -0.0092f;
	fLocal_87[60] = 0.0142f;
	fLocal_88[60] = 0.5341f;
	fLocal_89[60] = 0.8453f;
	iLocal_126[60] = 61;
	fLocal_90[60] = 188505f;
	iLocal_172[60] = joaat("premier");
	Local_150[61 /*3*/] = { -127.4751f, -746.0173f, 33.8412f };
	fLocal_86[61] = 0.0199f;
	fLocal_87[61] = -0.0038f;
	fLocal_88[61] = -0.187f;
	fLocal_89[61] = 0.9822f;
	iLocal_126[61] = 62;
	fLocal_90[61] = 189957f;
	iLocal_172[61] = joaat("premier");
	Local_150[62 /*3*/] = { -129.9522f, -753.059f, 33.7323f };
	fLocal_86[62] = 0.0233f;
	fLocal_87[62] = -0.0065f;
	fLocal_88[62] = -0.2697f;
	fLocal_89[62] = 0.9626f;
	iLocal_126[62] = 63;
	fLocal_90[62] = 190815f;
	iLocal_172[62] = joaat("serrano");
	Local_150[63 /*3*/] = { -37.9436f, -752.9625f, 32.344f };
	fLocal_86[63] = -0.0028f;
	fLocal_87[63] = -0.0054f;
	fLocal_88[63] = 0.8178f;
	fLocal_89[63] = -0.5754f;
	iLocal_126[63] = 64;
	fLocal_90[63] = 195171f;
	iLocal_172[63] = joaat("premier");
	Local_150[64 /*3*/] = { -16.879f, -743.6087f, 31.9734f };
	fLocal_86[64] = 0.0066f;
	fLocal_87[64] = 0.0088f;
	fLocal_88[64] = 0.5713f;
	fLocal_89[64] = 0.8206f;
	iLocal_126[64] = 65;
	fLocal_90[64] = 195765f;
	iLocal_172[64] = joaat("serrano");
	Local_151[11 /*3*/] = { 48.7516f, -687.4161f, 43.5806f };
	fLocal_101[11] = -0.0083f;
	fLocal_102[11] = 0.0015f;
	fLocal_103[11] = 0.9857f;
	fLocal_104[11] = 0.168f;
	iLocal_173[11] = joaat("premier");
	Local_150[65 /*3*/] = { 57.4123f, -677.5038f, 31.1767f };
	fLocal_86[65] = -0.0001f;
	fLocal_87[65] = -0.0006f;
	fLocal_88[65] = 0.9843f;
	fLocal_89[65] = 0.1765f;
	iLocal_126[65] = 66;
	fLocal_90[65] = 203421f;
	iLocal_172[65] = joaat("serrano");
	Local_150[66 /*3*/] = { 69.885f, -690.3309f, 31.2761f };
	fLocal_86[66] = 0f;
	fLocal_87[66] = 0f;
	fLocal_88[66] = -0.1711f;
	fLocal_89[66] = 0.9853f;
	iLocal_126[66] = 67;
	fLocal_90[66] = 204147f;
	iLocal_172[66] = joaat("serrano");
	Local_152[0 /*3*/] = { 1225.3907f, -1685.31f, 39.4209f };
	fLocal_95[0] = -0.0236f;
	fLocal_96[0] = -0.0719f;
	fLocal_97[0] = 0.8377f;
	fLocal_98[0] = 0.5409f;
	iLocal_129[0] = 101;
	fLocal_99[0] = 0f;
	fLocal_100[0] = 1f;
	iLocal_174[0] = joaat("stockade");
	Local_217[4 /*2*/] = iLocal_181[0];
}

void func_355(bool bParam0)//Position - 0x21E9F
{
	bLocal_84 = bParam0;
}

void func_356(int iParam0)//Position - 0x21EAB
{
	bLocal_79 = iParam0;
}

void func_357(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x21EB7
{
	struct<3> Var0;
	StringCopy(&cLocal_162, sParam0, 64);
	bLocal_62 = true;
	iLocal_67 = 0;
	iLocal_133 = 0;
	iLocal_134 = 0;
	iLocal_135 = 0;
	iLocal_136 = iParam1;
	iLocal_137 = 0;
	iLocal_138 = 0;
	iLocal_139 = 0;
	iLocal_143 = 0;
	iLocal_146 = 0;
	iLocal_144 = -1;
	iLocal_145 = -1;
	iLocal_147 = 0;
	iLocal_148 = 0;
	fLocal_121 = 0f;
	fLocal_122 = 0f;
	fLocal_107 = 0f;
	iLocal_68 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_154.f_0 = (Var0.f_0 - 100f);
		Local_154.f_1 = (Var0.f_1 - 100f);
		Local_154.f_2 = (Var0.f_2 - 100f);
		Local_155.f_0 = (Var0.f_0 + 100f);
		Local_155.f_1 = (Var0.f_1 + 100f);
		Local_155.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_154, Local_155, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_171);
	__LIB_11__.func_121();
	if (bParam3)
	{
		__LIB_32__.func_762(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_312();
}

void func_358(int iParam0, float fParam1)//Position - 0x21FDA
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_359();
			func_328(&iParam0, iLocal_136, fParam1, 1, 0, 1, 0, 0);
			fLocal_107 = fParam1;
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (iLocal_130[iVar0] > 2 && iLocal_130[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_181[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_99[iVar0]);
								fVar1 = (fVar1 * fLocal_100[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < __LIB_12__.func_138(iLocal_129[iVar0]))
									{
										func_328(&(iLocal_181[iVar0]), iLocal_129[iVar0], fVar1, 1, 0, 1, bLocal_81, bLocal_80);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_130[iVar0] = 99;
						iLocal_134 = (iLocal_134 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 150)
			{
				if (iLocal_127[iVar0] > 2 && iLocal_127[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_178[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_178[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_178[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_90[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < __LIB_12__.func_138(iLocal_126[iVar0]))
									{
										func_328(&(iLocal_178[iVar0]), iLocal_126[iVar0], fVar1, 1, 0, 1, 1, bLocal_80);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_127[iVar0] = 99;
						iLocal_133 = (iLocal_133 - 1);
					}
				}
				iVar0++;
			}
			iLocal_137 = 0;
			iLocal_139 = 0;
			iVar0 = 0;
			while (iVar0 < 25)
			{
				if (iLocal_132[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_180[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_180[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_180[iVar0], true, false);
							iLocal_135++;
							iLocal_132[iVar0] = 2;
						}
					}
					else
					{
						iLocal_132[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_138 = 0;
			iLocal_143 = 0;
			iLocal_146 = 0;
			fLocal_122 = fParam1;
			fLocal_121 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_154 = { Var3 - Vector(100f, 100f, 100f) };
			Local_155 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_154, Local_155, false, false);
		}
	}
}

void func_359()//Position - 0x22289
{
	iLocal_66 = 1;
}

void func_364()//Position - 0x22443
{
	if (__LIB_11__.func_720(func_176()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_176(), 0);
	}
	if (__LIB_11__.func_720(func_173()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_173(), 0);
	}
	if (__LIB_11__.func_720(func_175()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", func_175(), 0);
	}
	if (__LIB_11__.func_720(func_255()))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lester", func_255(), 0);
	}
	if (__LIB_11__.func_720(Local_218[4 /*4*/]))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("security_guard", Local_218[4 /*4*/], 0);
	}
}

void func_372(int iParam0)//Position - 0x22720
{
	__LIB_18__.func_191(180, iParam0, 0, 1, 0);
}

void func_385()//Position - 0x26E49
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_156, Local_157, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_154, Local_155, 1);
}

void func_392(bool bParam0)//Position - 0x2A474
{
	if (ENTITY::DOES_ENTITY_EXIST(func_176()) && !PED::IS_PED_INJURED(func_176()))
	{
		if (!bParam0)
		{
			func_484(func_176(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_393(func_176(), 14, 112);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_173()) && !PED::IS_PED_INJURED(func_173()))
	{
		if (!bParam0)
		{
			func_484(func_173(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_393(func_173(), 14, 158);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_175()) && !PED::IS_PED_INJURED(func_175()))
	{
		if (!bParam0)
		{
			func_484(func_175(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_393(func_175(), 14, 154);
		}
	}
}

int func_393(int iParam0, int iParam1, int iParam2)//Position - 0x2A54B
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_409(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_393(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_393(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_396(iParam0, iVar0, &iVar7, 0))
	{
		func_484(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_394(iParam0, iVar0, &iVar7))
	{
		func_484(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_394(int iParam0, int iParam1, int iParam2)//Position - 0x2A707
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_409(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A7CE
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_409(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0, int iParam1, int iParam2)//Position - 0x2DA2B
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_409(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_409(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_409(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_409(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x45CF9
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_488(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_396(iParam0, iVar10, &iVar4, 1))
							{
								func_484(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_484(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_484(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_484(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_484(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_484(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_484(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_484(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_396(iParam0, iVar10, &iVar4, 0))
		{
			func_484(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_394(iParam0, iVar10, &iVar4))
		{
			func_484(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_488(int iParam0, int iParam1, int iParam2)//Position - 0x46699
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
				if (func_409(iParam0, iParam1, iVar0))
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
				if (func_409(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_510()//Position - 0x489AD
{
	if (iLocal_490 == 1)
	{
		if (__LIB_11__.func_720(Local_217[2 /*2*/]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_384.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_203, ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true), true) < 1000f)
			{
				iLocal_529 = 1;
			}
		}
		if (((!func_22(14, 30) && (MISC::GET_GAME_TIMER() - iLocal_489) > 29000) && (MISC::GET_GAME_TIMER() - iLocal_498) > 20000) || iLocal_529)
		{
			if (!Local_474.f_20 && PLAYER::PLAYER_PED_ID() == func_175())
			{
				if (iLocal_577 == 0)
				{
					iLocal_577 = 1;
				}
				if (iLocal_577 == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[1 /*2*/], false))
					{
						if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[1 /*2*/], false) || iLocal_6296)
						{
							Global_100441.f_12[1] = 1;
							iLocal_577 = 4;
							CUTSCENE::REMOVE_CUTSCENE();
							VEHICLE::REMOVE_VEHICLE_RECORDING(3, "FH1REC");
							VEHICLE::REMOVE_VEHICLE_RECORDING(4, "FH1REC");
							iLocal_490 = 0;
						}
						else if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TMBB_H", 7, 0, 0, 0))
						{
							Global_100441.f_12[1] = 1;
							iLocal_577 = 4;
							CUTSCENE::REMOVE_CUTSCENE();
							VEHICLE::REMOVE_VEHICLE_RECORDING(3, "FH1REC");
							VEHICLE::REMOVE_VEHICLE_RECORDING(4, "FH1REC");
							iLocal_490 = 0;
						}
					}
				}
			}
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false) && !PED::IS_PED_INJURED(func_175())) && !PED::IS_PED_INJURED(func_255()))
	{
		if ((__LIB_11__.func_869("FH1_TALK4") && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
		{
			__LIB_6__.func_771();
		}
	}
	switch (iLocal_2546)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 4);
			iLocal_2546++;
			break;
		case 1:
			if (!Local_474.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_176())
				{
					__LIB_6__.func_771();
					iLocal_2546 = 0;
					func_270(2);
				}
				else if (PLAYER::PLAYER_PED_ID() == func_175())
				{
					switch (iLocal_412)
					{
						case 0:
							if ((!iLocal_568 && __LIB_11__.func_692()) && HUD::DOES_BLIP_EXIST(Local_384.f_5))
							{
								__LIB_0__.func_210("FH1_AIR", 7500, 1);
								iLocal_568 = 1;
							}
							if (__LIB_36__.func_101(&Local_384, Local_202, 0.1f, 0.1f, 2f, 1, func_255(), 0, 0, "", "", "", "", "", 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_384.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_202, ENTITY::GET_ENTITY_COORDS(func_175(), true), true) < 15f))
							{
								if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[1 /*2*/], false))
								{
									__LIB_6__.func_762(Local_217[1 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0);
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
								__LIB_18__.func_192(&Local_384, 1, 0);
								__LIB_20__.func_615(&Local_384, 0);
								ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
								PLAYER::SET_MAX_WANTED_LEVEL(2);
								func_177(3, "Stage 3: Get in Position", 0, 0, 0, 1);
								iLocal_412 = 1;
								iLocal_568 = 0;
								iLocal_601 = 0;
								iLocal_602 = 0;
							}
							break;
						case 1:
							if (__LIB_11__.func_720(Local_217[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
								{
									Global_100441.f_12[1] = 1;
									func_8(6);
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS"))
									{
										AUDIO::START_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 3);
									}
								}
								if (((!iLocal_602 && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false)) && __LIB_0__.func_529(func_175(), 1692.1647f, 2615.4119f, 58.89342f, 1) < 400f)
								{
									if (__LIB_9__.func_991(1692.1647f, 2615.4119f, 58.89342f, 50f, 500f))
									{
										if (iLocal_577 == 0)
										{
											iLocal_577 = 1;
										}
										if (iLocal_577 == 3)
										{
											if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_PRISWRN", 7, 0, 0, 0))
											{
												iLocal_577 = 4;
												iLocal_602 = 1;
											}
										}
									}
								}
								if ((((!iLocal_568 && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], true)) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], true)) && HUD::DOES_BLIP_EXIST(Local_384.f_5)) && __LIB_11__.func_692())
								{
									if (iLocal_577 == 0)
									{
										iLocal_577 = 1;
									}
									if (iLocal_577 == 3)
									{
										__LIB_0__.func_210("FH1_FLY", 7500, 1);
										iLocal_577 = 4;
										iLocal_568 = 1;
									}
								}
								if (((((!iLocal_601 && !PED::IS_PED_IN_VEHICLE(func_175(), Local_217[1 /*2*/], false)) && !PED::IS_PED_IN_VEHICLE(func_255(), Local_217[1 /*2*/], false)) && !PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false)) && __LIB_0__.func_76(func_175(), Local_217[2 /*2*/], 1) < __LIB_0__.func_76(func_175(), Local_217[1 /*2*/], 1)) && __LIB_0__.func_76(func_175(), func_255(), 1) < 20f)
								{
									if (iLocal_577 == 0)
									{
										iLocal_577 = 1;
									}
									if (iLocal_577 == 3)
									{
										if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_LESSLOW", 7, 0, 0, 0))
										{
											TASK::TASK_LOOK_AT_ENTITY(func_175(), func_255(), -1, 2064, 2);
											iLocal_577 = 4;
											iLocal_601 = 1;
										}
									}
								}
								if (!iLocal_499 && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_203, ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true), true) < 1000f)
								{
									if (Global_100441.f_12[1] == 1)
									{
										func_277(4, 0);
										iLocal_499 = 1;
									}
								}
								if (__LIB_38__.func_169(&Local_384, Local_203, 0.1f, 0.1f, 2f, 0, 0, func_255(), 0, Local_217[2 /*2*/], "", "", "", "", "", "FH1_HELI", "FH1_BKHELI", 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_384.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_203, ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true), true) < 380f))
								{
									if (STREAMING::HAS_MODEL_LOADED(joaat("stockade")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Armoured_01")))
									{
										Local_217[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("stockade"), 1025.5339f, -1756.0054f, 35.2748f, 81.9993f, true, true, false);
										Local_218[6 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_217[3 /*2*/], 26, joaat("S_M_M_Armoured_01"), -1, true, true);
										PED::SET_PED_COMPONENT_VARIATION(Local_218[6 /*4*/], 0, 0, 0, 0);
										ENTITY::SET_ENTITY_LOD_DIST(Local_217[3 /*2*/], 350);
										__LIB_18__.func_192(&Local_384, 1, 0);
										__LIB_20__.func_615(&Local_384, 0);
										bLocal_501 = false;
										iLocal_2546 = 0;
										HUD::DISPLAY_RADAR(false);
										HUD::DISPLAY_HUD(false);
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 3);
										func_270(4);
									}
								}
							}
							break;
						}
					}
			}
			break;
	}
}

void func_517()//Position - 0x49183
{
	switch (iLocal_2546)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!Local_474.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_175())
				{
					func_270(3);
					iLocal_2546 = 0;
				}
				else if (PLAYER::PLAYER_PED_ID() == func_176())
				{
					iLocal_415 = INTERIOR::GET_INTERIOR_AT_COORDS(-77.30131f, -678.88495f, 33.32175f);
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_415))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_415);
					}
					if (!__LIB_0__.func_75())
					{
						iLocal_490 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(Local_218[4 /*4*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_218[4 /*4*/], true);
						}
						__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
						iLocal_614 = 0;
						iLocal_616 = 0;
						iLocal_617 = 0;
						bLocal_619 = false;
						__LIB_25__.func_609(45, 0);
						iLocal_2546++;
					}
				}
			}
			break;
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (iLocal_415 == 0 || INTERIOR::IS_INTERIOR_READY(iLocal_415))
				{
					__LIB_6__.func_771();
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_DRIVE_AROUND_BACK"))
					{
						AUDIO::STOP_AUDIO_SCENE("BS_1_DRIVE_AROUND_BACK");
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_217[0 /*2*/], "Michaels_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_173(), "Franklin", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_218[4 /*4*/], "security_guard", 0, 0, 0);
					func_364();
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					AUDIO::STOP_SOUND(iLocal_564);
					AUDIO::STOP_SOUND(iLocal_563);
					if (__LIB_12__.func_90(&Local_5035))
					{
						__LIB_12__.func_89(&Local_5035);
					}
					if (iLocal_412 == 0 && Local_6277.f_1 < 2600f)
					{
						iLocal_2552 = 1;
						func_562(&uLocal_2553, 1);
					}
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::REPLAY_START_EVENT(4);
					iLocal_2546++;
				}
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_6__.func_771();
				VEHICLE::REMOVE_VEHICLE_WINDOW(Local_217[0 /*2*/], 1);
				MISC::CLEAR_AREA(Local_200, 500f, true, false, false, false);
				iLocal_614 = 0;
				iLocal_616 = 0;
				iLocal_617 = 0;
				iLocal_620 = 0;
				iLocal_615 = 0;
				bLocal_619 = false;
				iLocal_6312 = 0;
				__LIB_11__.func_699(238f);
				iLocal_2546++;
			}
			break;
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", joaat("Player_Zero")))
			{
				PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
				iLocal_614 = 1;
			}
			else
			{
				__LIB_11__.func_699(238f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", joaat("Player_One")))
			{
				PED::SET_PED_INTO_VEHICLE(func_173(), Local_217[0 /*2*/], 0);
				iLocal_617 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("security_guard", joaat("S_M_M_Armoured_01")))
			{
				iLocal_620 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", joaat("tailgater")))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_217[0 /*2*/], true, true, true);
				iLocal_615 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
			}
			if (((iLocal_614 && iLocal_617) && iLocal_620) && iLocal_615)
			{
				RECORDING::REPLAY_STOP_EVENT();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1024);
				iLocal_576 = 3;
				iLocal_572 = 0;
				WEAPON::SET_CURRENT_PED_WEAPON(Local_218[4 /*4*/], joaat("WEAPON_ADVANCEDRIFLE"), true);
				if (iLocal_415 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_415);
				}
				__LIB_6__.func_295(45, 1);
				Global_100441.f_12[1] = 1;
				Local_6277 = { ENTITY::GET_ENTITY_COORDS(Local_218[2 /*4*/], true) };
				if (iLocal_575 == 0)
				{
					iLocal_603 = 0;
					StringCopy(&cLocal_587, "", 24);
					StringCopy(&cLocal_591, "", 24);
					iLocal_595 = 0;
					iLocal_575 = 2;
				}
				if (iLocal_412 == 0 && Local_6277.f_1 < 2600f)
				{
					iLocal_495 = 1;
					iLocal_2552 = 3;
					func_562(&uLocal_2553, 1);
				}
				else if ((iLocal_412 == 1 && PED::IS_PED_IN_VEHICLE(Local_218[2 /*4*/], Local_217[2 /*2*/], false)) && iLocal_6310 == 1)
				{
					iLocal_496 = 1;
					iLocal_2552 = 3;
					func_527(&uLocal_3794, 1);
					iLocal_6310 = 0;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], true);
				}
				Local_474.f_20 = 1;
				func_518(2);
				iLocal_2546++;
			}
			break;
		case 4:
			if (!__LIB_0__.func_75())
			{
				iLocal_614 = 0;
				iLocal_616 = 0;
				iLocal_617 = 0;
				iLocal_620 = 0;
				iLocal_615 = 0;
				bLocal_619 = false;
				func_257(0, 1, 0, 0, 0, 0);
				iLocal_490 = 1;
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_2546++;
			}
			break;
		case 5:
			if (!Local_474.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_175())
				{
					__LIB_0__.func_686(0, 0, 1, 0);
					iLocal_490 = 0;
					func_270(3);
					iLocal_2546 = 0;
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					iLocal_6323 = 0;
				}
			}
			break;
	}
}

int func_518(bool bParam0)//Position - 0x495D7
{
	if (func_519(&uLocal_430, bParam0))
	{
		Local_474.f_12 = uLocal_430[bParam0];
		Local_474.f_20 = 1;
		return 1;
	}
	return 0;
}

int func_519(var uParam0, bool bParam1)//Position - 0x49602
{
	bool bVar0;
	bool bVar1;
	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = uParam0->f_34[bParam1] == 2;
		if (__LIB_0__.func_504(__LIB_38__.func_170()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_24[bParam1] != 0) || ((__LIB_11__.func_690(bParam1) && __LIB_20__.func_609(bParam1)) && !uParam0->f_18[bParam1]))
			{
				if (!uParam0->f_23)
				{
					if (!PED::IS_PED_INJURED((*uParam0)[bParam1]) || bVar0)
					{
						if (uParam0->f_34[bParam1] != 1 && uParam0->f_34[bParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !BitTest(Global_97919.f_47, bParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((BitTest(Global_113386.f_9085.f_2[27 /*3*/], 1) && !Global_3) && !__LIB_0__.func_2(0)))
			{
				if (uParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				uParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	uParam0->f_39 = 0;
	return 0;
}

int func_527(var uParam0, bool bParam1)//Position - 0x4992C
{
	int iVar0;
	struct<3> Var1;
	switch (iLocal_2552)
	{
		case 0:
			break;
		case 3:
			iLocal_536 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
			if (__LIB_12__.func_90(&uLocal_3794))
			{
				__LIB_12__.func_89(&uLocal_3794);
			}
			if (__LIB_12__.func_90(&Local_5035))
			{
				__LIB_12__.func_89(&Local_5035);
			}
			TASK::TASK_PLAY_ANIM(Local_218[1 /*4*/], cLocal_6320, "bss_1_mcs_2_leadout_fra", 1000f, -8f, -1, 8, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(Local_218[0 /*4*/], cLocal_6320, "bss_1_mcs_2_leadout_mic", 1000f, -8f, -1, 8, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_218[0 /*4*/], true, false);
			func_561(uParam0, &(Local_218[0 /*4*/]), &(Local_218[2 /*4*/]));
			__LIB_26__.func_473(uParam0);
			func_313();
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], true);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_6322 = 0;
			STREAMING::SET_RENDER_HD_ONLY(false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
			uParam0->f_1232 = 0;
			iLocal_6311 = 0;
			iLocal_6292 = 0;
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true) };
			if (Var1.f_2 < 40f)
			{
				Var1.f_2 = (Var1.f_2 + 70f);
				ENTITY::SET_ENTITY_COORDS(Local_217[2 /*2*/], Var1, true, false, false, true);
			}
			iLocal_2552 = 4;
			break;
		case 4:
			iVar0 = func_530(uParam0);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_6278);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_6279, 1f);
				}
				if (iVar0 >= uParam0->f_1218)
				{
					STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(fLocal_6313);
					if (!Local_474.f_18)
					{
						Local_474.f_18 = 1;
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[2 /*2*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/]);
						}
						STREAMING::STREAMVOL_DELETE(iLocal_6316);
						iLocal_6315 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(Local_218[2 /*4*/], true), ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_218[2 /*4*/]), fLocal_6314, 12, 94);
						STREAMING::SET_RENDER_HD_ONLY(false);
					}
				}
				if (!iLocal_6311)
				{
					if (__LIB_32__.func_823(PLAYER::PLAYER_PED_ID()) == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_218[2 /*4*/], cLocal_6321, "mid_mission_inside_helicopter_trevor", 8f, -2f, -1, 8, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(Local_218[3 /*4*/], cLocal_6321, "mid_mission_inside_helicopter_lester", 8f, -4f, -1, 8, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_218[2 /*4*/], false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_218[3 /*4*/], false, false);
						iLocal_6311 = 1;
					}
				}
				if (!iLocal_6292)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.7f && iLocal_536 == 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_6292 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f || (STREAMING::STREAMVOL_HAS_LOADED(iLocal_6315) && CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.8f))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_6278);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_6279, 1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					STREAMING::SET_RENDER_HD_ONLY(false);
					iLocal_2552 = 10;
				}
			}
			break;
		case 10:
			MISC::SET_TIME_SCALE(1f);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
			}
			CAM::DESTROY_ALL_CAMS(false);
			if (!iLocal_6322)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				iLocal_6322 = 1;
			}
			TASK::CLEAR_PED_TASKS(Local_218[2 /*4*/]);
			STREAMING::REMOVE_ANIM_DICT(cLocal_6321);
			STREAMING::REMOVE_ANIM_DICT(cLocal_6320);
			func_529();
			__LIB_11__.func_132(3, 2, 0, 0);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], false);
			SYSTEM::SETTIMERA(0);
			STREAMING::STREAMVOL_DELETE(iLocal_6315);
			iLocal_2552 = 0;
			uParam0->f_1232 = 1;
			VEHICLE::ROLL_UP_WINDOW(Local_217[0 /*2*/], 0);
			VEHICLE::ROLL_UP_WINDOW(Local_217[0 /*2*/], 1);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_529()//Position - 0x49D01
{
	STREAMING::REMOVE_ANIM_DICT("shake_cam_all@");
}

int func_530(var uParam0)//Position - 0x49D11
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_51 = __LIB_0__.func_408(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			case 1:
				fLocal_51 = __LIB_11__.func_137(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__.func_301((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 2:
				fLocal_51 = __LIB_11__.func_136(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__.func_301((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 3:
				fLocal_51 = __LIB_20__.func_443(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__.func_301((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_51);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		__LIB_11__.func_135(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						case 2:
							sVar2 = "switch_cam_1";
							break;
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							__LIB_11__.func_150(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						case 3:
							__LIB_11__.func_150(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), false);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(__LIB_11__.func_134(), ""))
				{
					__LIB_11__.func_150(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				__LIB_11__.func_133(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			__LIB_11__.func_133(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::RESET_ADAPTATION(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, true);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		__LIB_11__.func_132(0, 0, 1, 1);
	}
	else
	{
		__LIB_11__.func_132(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	__LIB_11__.func_131(uParam0);
	return iVar0;
}

void func_561(var uParam0, var uParam1, var uParam2)//Position - 0x4B888
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1.6973f, 1.5316f, 0.6956f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 1;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1500;
		uParam0->f_10[1 /*57*/].f_6 = { -1.6297f, 1.5037f, 0.6884f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 9;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0.8f;
		uParam0->f_10[1 /*57*/].f_45 = 1;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -0.0425f, 0.2776f, 31.0641f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -3.717f, -0.006f, -143.2626f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.3f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 1;
		uParam0->f_10[2 /*57*/].f_29 = 0.4f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 11;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0.55f;
		uParam0->f_10[2 /*57*/].f_45 = 1;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { -5.9937f, 5.3838f, -9.1104f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -0.4838f, -2.0393f, -1.6781f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 35f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 1;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 1;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 900;
		uParam0->f_10[5 /*57*/].f_6 = { -1.2508f, 1.3896f, 0.2707f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -0.0555f, 0.016f, 0.4621f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 35f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 1f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 1;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 1;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 4500;
		uParam0->f_10[6 /*57*/].f_6 = { -1.0556f, 1.4287f, 0.1626f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.0441f, 0.0195f, 0.3618f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 35f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0.98f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_1233 = 0.17f;
		uParam0->f_1234 = 0.28f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_BigScore_MichaelToTrevorInHeli.txt";
		uParam0->f_1225 = "CameraInfo_BigScore_MichaelToTrevorInHeli.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = *uParam1;
	uParam0->f_7[1] = *uParam2;
}

int func_562(var uParam0, bool bParam1)//Position - 0x4C471
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	switch (iLocal_2552)
	{
		case 0:
			break;
		case 1:
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(1865.1f, 2263.8f, 56.3f, fLocal_6288, 2);
			break;
		case 3:
			func_565(uParam0, &(Local_218[0 /*4*/]), &(Local_218[2 /*4*/]));
			if (!PED::IS_PED_INJURED(Local_218[0 /*4*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_218[0 /*4*/], cLocal_6320, "bss_1_mcs_2_leadout_mic", 1000f, -8f, -1, 2, 0f, false, false, false);
			}
			if (!PED::IS_PED_INJURED(Local_218[1 /*4*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_218[1 /*4*/], cLocal_6320, "bss_1_mcs_2_leadout_fra", 1000f, -8f, -1, 2, 0f, false, false, false);
			}
			func_313();
			STREAMING::SET_RENDER_HD_ONLY(false);
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
			STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
			if (__LIB_12__.func_90(uParam0))
			{
				__LIB_12__.func_89(uParam0);
			}
			__LIB_26__.func_473(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			iLocal_6286 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			iLocal_536 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(0);
			iLocal_6322 = 0;
			iLocal_6298 = 0;
			bLocal_6297 = false;
			iLocal_6296 = 0;
			iLocal_6295 = 0;
			iLocal_6290 = 0;
			iLocal_6292 = 0;
			uParam0->f_1232 = 0;
			iLocal_6287 = 0;
			bLocal_6289 = false;
			if (!PED::IS_PED_INJURED(Local_218[2 /*4*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_218[2 /*4*/]);
				TASK::CLEAR_PED_SECONDARY_TASK(Local_218[2 /*4*/]);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_218[2 /*4*/], Local_6280, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_218[2 /*4*/], fLocal_6281);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_217[1 /*2*/], false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_217[1 /*2*/], Local_6284, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_217[1 /*2*/], fLocal_6285);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_217[1 /*2*/], true, 1);
				STREAMING::REQUEST_COLLISION_AT_COORD(Local_6284);
				ENTITY::FREEZE_ENTITY_POSITION(Local_217[1 /*2*/], true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_217[1 /*2*/], true);
			}
			VEHICLE::ROLL_DOWN_WINDOW(Local_217[0 /*2*/], 0);
			VEHICLE::ROLL_DOWN_WINDOW(Local_217[0 /*2*/], 1);
			if (!PED::IS_PED_INJURED(Local_218[3 /*4*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[1 /*2*/], false))
				{
					if (!__LIB_1__.func_198(Local_218[3 /*4*/], Local_217[1 /*2*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_218[3 /*4*/], Local_217[1 /*2*/], 0);
					}
				}
			}
			iLocal_2552 = 4;
			break;
		case 4:
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			iVar0 = func_530(uParam0);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				if (iVar0 <= uParam0->f_1218 + 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_217[1 /*2*/], false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_217[1 /*2*/], Local_6284, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_217[1 /*2*/], fLocal_6285);
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_6291)
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_6275);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_6276, 1f);
						if (!Local_474.f_18)
						{
							Local_474.f_18 = 1;
							STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
							STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
						}
					}
				}
				if (!bLocal_6297)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.05f)
					{
						if (!PED::IS_PED_INJURED(Local_218[2 /*4*/]))
						{
							iLocal_6299 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_bigscore_peeing", Local_218[2 /*4*/], Local_6301, Local_6302, 11816, 1f, false, false, false);
							bLocal_6297 = true;
						}
					}
				}
				if (iVar0 >= (uParam0->f_1218 - 1) && iVar0 < uParam0->f_1218 + 2)
				{
					STREAMING::SET_RENDER_HD_ONLY(true);
				}
				if (iVar0 >= 0 && CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= 0f)
				{
					if (!iLocal_6287)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1865.1f, 2263.8f, 56.3f, fLocal_6288, 3);
						iLocal_6287 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_6291)
				{
					if (__LIB_38__.func_170() == 2)
					{
						if (!bLocal_6289)
						{
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_6283))
								{
									if (!PED::IS_PED_INJURED(Local_218[2 /*4*/]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_218[2 /*4*/]);
										TASK::CLEAR_PED_SECONDARY_TASK(Local_218[2 /*4*/]);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
										ENTITY::FREEZE_ENTITY_POSITION(Local_218[2 /*4*/], false);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[1 /*2*/], false))
										{
											ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_217[1 /*2*/], 1877.9f, 2257.49f, 54.5f, false, false, true);
											ENTITY::SET_ENTITY_HEADING(Local_217[1 /*2*/], 6.9f);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_217[1 /*2*/], true, 1);
											STREAMING::REQUEST_COLLISION_AT_COORD(1877.59f, 2256.8f, 53.51f);
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_217[1 /*2*/], false);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[1 /*2*/], 5f);
											ENTITY::FREEZE_ENTITY_POSITION(Local_217[1 /*2*/], false);
										}
										if (!PED::IS_PED_INJURED(Local_218[3 /*4*/]))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[1 /*2*/], false))
											{
												if (!__LIB_1__.func_198(Local_218[3 /*4*/], Local_217[1 /*2*/], 0))
												{
													PED::SET_PED_INTO_VEHICLE(Local_218[3 /*4*/], Local_217[1 /*2*/], 0);
												}
											}
										}
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_PLAY_ANIM(0, cLocal_6319, "PISS_LOOP", 1000f, -8f, iLocal_6282, 1, 0f, false, false, false);
										TASK::TASK_PLAY_ANIM(0, cLocal_6319, "PISS_OUTRO", 8f, -1.5f, -1, 32768, 0f, false, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_218[2 /*4*/], iVar1);
										bLocal_6289 = true;
									}
								}
								STREAMING::NEW_LOAD_SCENE_STOP();
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(1905.9f, 2226.5f, 71.1f, 150f, 0);
							}
						}
					}
				}
				if (!iLocal_6290)
				{
					if (bLocal_6289)
					{
						if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_6303)
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
							TASK::CLEAR_PED_TASKS(Local_218[2 /*4*/]);
							iLocal_6290 = 1;
						}
					}
				}
				if (bLocal_6297)
				{
					if (!iLocal_6298)
					{
						if (bLocal_6289)
						{
							if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_6300)
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_6299, false);
								iLocal_6298 = 1;
							}
						}
					}
				}
				if (!iLocal_6286)
				{
					if (iVar0 >= uParam0->f_1218 + 2)
					{
						STREAMING::SET_PED_POPULATION_BUDGET(3);
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
						STREAMING::SET_REDUCE_PED_MODEL_BUDGET(false);
						STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_218[2 /*4*/], false);
						iLocal_6286 = 1;
					}
				}
				if (!iLocal_6295)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) > fLocal_6293)
					{
						__LIB_0__.func_203(&uLocal_219, 1, Local_218[0 /*4*/], "MICHAEL", 1, 1);
						__LIB_41__.func_670(&uLocal_219, "FH1AUD", "FH1_MCS2_LO", "FH1_MCS2_LO_1", 8, 0, 0);
						iLocal_6295 = 1;
					}
				}
				if (!iLocal_6296)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) > fLocal_6294)
					{
						__LIB_41__.func_986(&uLocal_219, "FH1AUD", "FH1_TMBB", "FH1_TMBB_2", 8, 0, 0);
						iLocal_6296 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) >= (uParam0->f_1217 - 3) && iLocal_536 != 4)
				{
					STREAMING::SET_RENDER_HD_ONLY(false);
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						__LIB_0__.func_471(&iVar2, &iVar3, &iVar4, &iVar5, 0);
						if (((((iVar2 != 0 || iVar3 != 0) || iVar4 != 0) || iVar5 != 0) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							TASK::CLEAR_PED_TASKS(Local_218[2 /*4*/]);
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_536);
							CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
							iLocal_2552 = 10;
						}
					}
				}
				if (!iLocal_6292)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.55f && iLocal_536 == 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_6292 = 1;
					}
				}
				if ((CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f && iLocal_536 != 4) || (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0.57f && iLocal_536 == 4))
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_6275);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_6276, 1f);
					}
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_536);
					if (iLocal_536 != 4)
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
					}
					else
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 0, true, false, 0);
					}
					iLocal_2552 = 10;
				}
			}
			break;
		case 10:
			MISC::SET_TIME_SCALE(1f);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, false);
			}
			if (!PED::IS_PED_INJURED(Local_218[3 /*4*/]))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_218[3 /*4*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
			}
			if (__LIB_12__.func_90(uParam0))
			{
				__LIB_12__.func_89(uParam0);
			}
			SYSTEM::SETTIMERB(0);
			if (!iLocal_6322)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				iLocal_6322 = 1;
			}
			SYSTEM::SETTIMERA(0);
			STREAMING::REMOVE_ANIM_DICT(cLocal_6319);
			STREAMING::REMOVE_ANIM_DICT(cLocal_6320);
			STREAMING::REMOVE_ANIM_DICT("shake_cam_all@");
			if (!ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
			{
				VEHICLE::ROLL_UP_WINDOW(Local_217[0 /*2*/], 0);
				VEHICLE::ROLL_UP_WINDOW(Local_217[0 /*2*/], 1);
			}
			uParam0->f_1232 = 1;
			Local_474.f_20 = 0;
			STREAMING::SET_RENDER_HD_ONLY(false);
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
			iLocal_2552 = 0;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_565(var uParam0, var uParam1, var uParam2)//Position - 0x4CDBE
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -2.3136f, 2.2717f, 0.7501f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.3f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 1;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 3500;
		uParam0->f_10[1 /*57*/].f_6 = { -1.6297f, 1.5037f, 0.6884f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.3f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 0.6f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 9;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 1f;
		uParam0->f_10[1 /*57*/].f_45 = 1;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -4.6983f, -2.6296f, 0.6944f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -3.717f, -0.0056f, -143.263f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.419f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.1f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 11;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0.2f;
		uParam0->f_10[2 /*57*/].f_45 = 1;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 3;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 1866.3777f, 2262.2773f, 55.9814f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -6.0926f, 0.0006f, 57.3604f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 40f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 1f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 0.3f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 1;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 3;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { 1867.2435f, 2263.7412f, 55.9814f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -6.0926f, 0.0006f, 57.3604f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 40f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0.331f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 1;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 3;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 5000;
		uParam0->f_10[6 /*57*/].f_6 = { 1867.4435f, 2263.9412f, 55.9814f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -6.0926f, 0.0006f, 57.3604f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 1;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 1400;
		uParam0->f_10[7 /*57*/].f_6 = { 1.3125f, -2.2925f, 0.5904f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -8.1857f, 0f, 23.3637f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 40f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 1;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 1;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[8 /*57*/].f_54 = 1;
		uParam0->f_10[9 /*57*/].f_2 = 2;
		uParam0->f_10[9 /*57*/].f_3 = -1;
		uParam0->f_10[9 /*57*/].f_4 = 1;
		uParam0->f_10[9 /*57*/].f_5 = 0;
		uParam0->f_10[9 /*57*/].f_6 = { -1.6713f, 0.3223f, 0.3105f };
		uParam0->f_10[9 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_12 = 0f;
		uParam0->f_10[9 /*57*/].f_16 = 0f;
		uParam0->f_10[9 /*57*/].f_17 = 0;
		uParam0->f_10[9 /*57*/].f_9 = { 0.8921f, 0f, -112.2359f };
		uParam0->f_10[9 /*57*/].f_18 = 0;
		uParam0->f_10[9 /*57*/].f_19 = 0;
		uParam0->f_10[9 /*57*/].f_20 = 0;
		uParam0->f_10[9 /*57*/].f_21 = 50f;
		uParam0->f_10[9 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_27 = 0;
		uParam0->f_10[9 /*57*/].f_50 = 0;
		uParam0->f_10[9 /*57*/].f_51 = 0f;
		uParam0->f_10[9 /*57*/].f_52 = 0f;
		uParam0->f_10[9 /*57*/].f_22 = 0f;
		uParam0->f_10[9 /*57*/].f_53 = 0;
		uParam0->f_10[9 /*57*/].f_23 = 0f;
		uParam0->f_10[9 /*57*/].f_28 = 0;
		uParam0->f_10[9 /*57*/].f_29 = 0f;
		uParam0->f_10[9 /*57*/].f_32 = 0f;
		uParam0->f_10[9 /*57*/].f_30 = 0;
		uParam0->f_10[9 /*57*/].f_31 = 0;
		uParam0->f_10[9 /*57*/].f_33 = 1f;
		uParam0->f_10[9 /*57*/].f_34 = 0;
		uParam0->f_10[9 /*57*/].f_35 = 0f;
		uParam0->f_10[9 /*57*/].f_36 = 0;
		uParam0->f_10[9 /*57*/].f_37 = 0;
		uParam0->f_10[9 /*57*/].f_39 = 0f;
		uParam0->f_10[9 /*57*/].f_40 = 0f;
		uParam0->f_10[9 /*57*/].f_41 = 0;
		uParam0->f_10[9 /*57*/].f_42 = 0;
		uParam0->f_10[9 /*57*/].f_43 = 0;
		uParam0->f_10[9 /*57*/].f_38 = 0f;
		uParam0->f_10[9 /*57*/].f_45 = 0;
		uParam0->f_10[9 /*57*/].f_46 = 0;
		uParam0->f_10[9 /*57*/].f_47 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[10 /*57*/].f_2 = 2;
		uParam0->f_10[10 /*57*/].f_3 = -1;
		uParam0->f_10[10 /*57*/].f_4 = 1;
		uParam0->f_10[10 /*57*/].f_5 = 4500;
		uParam0->f_10[10 /*57*/].f_6 = { -1.5291f, 0.3435f, 0.4191f };
		uParam0->f_10[10 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_12 = 0f;
		uParam0->f_10[10 /*57*/].f_16 = 0f;
		uParam0->f_10[10 /*57*/].f_17 = 0;
		uParam0->f_10[10 /*57*/].f_9 = { -3.1276f, -0.0015f, -106.0949f };
		uParam0->f_10[10 /*57*/].f_18 = 0;
		uParam0->f_10[10 /*57*/].f_19 = 0;
		uParam0->f_10[10 /*57*/].f_20 = 0;
		uParam0->f_10[10 /*57*/].f_21 = 50f;
		uParam0->f_10[10 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_27 = 0;
		uParam0->f_10[10 /*57*/].f_50 = 0;
		uParam0->f_10[10 /*57*/].f_51 = 0f;
		uParam0->f_10[10 /*57*/].f_52 = 0f;
		uParam0->f_10[10 /*57*/].f_22 = 0f;
		uParam0->f_10[10 /*57*/].f_53 = 0;
		uParam0->f_10[10 /*57*/].f_23 = 0f;
		uParam0->f_10[10 /*57*/].f_28 = 0;
		uParam0->f_10[10 /*57*/].f_29 = 0f;
		uParam0->f_10[10 /*57*/].f_32 = 0f;
		uParam0->f_10[10 /*57*/].f_30 = 0;
		uParam0->f_10[10 /*57*/].f_31 = 0;
		uParam0->f_10[10 /*57*/].f_33 = 1f;
		uParam0->f_10[10 /*57*/].f_34 = 0;
		uParam0->f_10[10 /*57*/].f_35 = 0f;
		uParam0->f_10[10 /*57*/].f_36 = 0;
		uParam0->f_10[10 /*57*/].f_37 = 0;
		uParam0->f_10[10 /*57*/].f_39 = 0f;
		uParam0->f_10[10 /*57*/].f_40 = 0f;
		uParam0->f_10[10 /*57*/].f_41 = 0;
		uParam0->f_10[10 /*57*/].f_42 = 0;
		uParam0->f_10[10 /*57*/].f_43 = 0;
		uParam0->f_10[10 /*57*/].f_38 = 0f;
		uParam0->f_10[10 /*57*/].f_45 = 0;
		uParam0->f_10[10 /*57*/].f_46 = 0;
		uParam0->f_10[10 /*57*/].f_47 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[11 /*57*/].f_2 = 2;
		uParam0->f_10[11 /*57*/].f_3 = -1;
		uParam0->f_10[11 /*57*/].f_4 = 1;
		uParam0->f_10[11 /*57*/].f_5 = 5100;
		uParam0->f_10[11 /*57*/].f_6 = { -1.5291f, 0.3435f, 0.4191f };
		uParam0->f_10[11 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[11 /*57*/].f_12 = 0f;
		uParam0->f_10[11 /*57*/].f_16 = 0f;
		uParam0->f_10[11 /*57*/].f_17 = 0;
		uParam0->f_10[11 /*57*/].f_9 = { -3.1276f, -0.0015f, -106.0949f };
		uParam0->f_10[11 /*57*/].f_18 = 0;
		uParam0->f_10[11 /*57*/].f_19 = 0;
		uParam0->f_10[11 /*57*/].f_20 = 0;
		uParam0->f_10[11 /*57*/].f_21 = 50f;
		uParam0->f_10[11 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[11 /*57*/].f_27 = 0;
		uParam0->f_10[11 /*57*/].f_50 = 0;
		uParam0->f_10[11 /*57*/].f_51 = 0f;
		uParam0->f_10[11 /*57*/].f_52 = 0f;
		uParam0->f_10[11 /*57*/].f_22 = 0f;
		uParam0->f_10[11 /*57*/].f_53 = 0;
		uParam0->f_10[11 /*57*/].f_23 = 0f;
		uParam0->f_10[11 /*57*/].f_28 = 0;
		uParam0->f_10[11 /*57*/].f_29 = 0f;
		uParam0->f_10[11 /*57*/].f_32 = 0f;
		uParam0->f_10[11 /*57*/].f_30 = 0;
		uParam0->f_10[11 /*57*/].f_31 = 0;
		uParam0->f_10[11 /*57*/].f_33 = 1f;
		uParam0->f_10[11 /*57*/].f_34 = 0;
		uParam0->f_10[11 /*57*/].f_35 = 0f;
		uParam0->f_10[11 /*57*/].f_36 = 0;
		uParam0->f_10[11 /*57*/].f_37 = 0;
		uParam0->f_10[11 /*57*/].f_39 = 0f;
		uParam0->f_10[11 /*57*/].f_40 = 0f;
		uParam0->f_10[11 /*57*/].f_41 = 0;
		uParam0->f_10[11 /*57*/].f_42 = 0;
		uParam0->f_10[11 /*57*/].f_43 = 0;
		uParam0->f_10[11 /*57*/].f_38 = 0f;
		uParam0->f_10[11 /*57*/].f_45 = 0;
		uParam0->f_10[11 /*57*/].f_46 = 0;
		uParam0->f_10[11 /*57*/].f_47 = 0f;
		uParam0->f_10[11 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[11 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 12;
		uParam0->f_1218 = 3;
		uParam0->f_1233 = 0.17f;
		uParam0->f_1234 = 0.202f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_BigScore_MichaelToTrevorInCar.txt";
		uParam0->f_1225 = "CameraInfo_BigScore_MichaelToTrevorInCar.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = *uParam1;
	uParam0->f_7[1] = *uParam2;
}

void func_568()//Position - 0x4E246
{
	if (iLocal_2546 > 0)
	{
		if (PLAYER::PLAYER_PED_ID() == func_176())
		{
		}
	}
	switch (iLocal_2546)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!Local_474.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_175())
				{
					__LIB_38__.func_169(&Local_384, Local_202, 0.1f, 0.1f, 2f, 1, func_255(), 0, 0, Local_217[1 /*2*/], "", "", "", "", "", "", "", 0, 1, 1, -1);
					if (((!iLocal_568 && !PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && HUD::DOES_BLIP_EXIST(Local_384.f_5)) && __LIB_11__.func_692())
					{
						__LIB_0__.func_210("FH1_AIR", 7500, 1);
						iLocal_568 = 1;
					}
					if ((!func_22(13, 15) && (MISC::GET_GAME_TIMER() - iLocal_498) > 15000) && (MISC::GET_GAME_TIMER() - iLocal_489) > 5000)
					{
						if (iLocal_577 == 0)
						{
							iLocal_577 = 1;
						}
						if (iLocal_577 == 3)
						{
							if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TRVFBE", 7, 0, 0, 0))
							{
								iLocal_577 = 4;
								func_277(2, 0);
								Global_100441.f_12[0] = 1;
								iLocal_2546 = 4;
								iLocal_498 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_176())
				{
					if ((((__LIB_0__.func_294() && Global_100478 == 1) && Global_100441.f_12[0] == 1) && !Global_94618) && !bLocal_2551)
					{
						iLocal_535 = 2;
						iLocal_2546 = 3;
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "FH1RECMIKE");
					}
					else
					{
						if (!iLocal_500)
						{
							if (__LIB_0__.func_529(func_176(), Local_198, 1) < 60f)
							{
								__LIB_11__.func_695(&uLocal_627, "missbigscore1_mcs1");
								iLocal_500 = 1;
							}
						}
						else if (__LIB_0__.func_529(func_176(), Local_198, 1) > 90f)
						{
							__LIB_11__.func_722(&uLocal_627, "missbigscore1_mcs1");
							iLocal_500 = 0;
						}
						if (__LIB_38__.func_169(&Local_384, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_173(), 0, 0, Local_217[0 /*2*/], "FH1_BANK", "FH1_FRCAR", "", "", "", "CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, "CMN_GENGETBCKY" /* GXT: ~s~Get back in your ~b~car. */, 0, 1, 1, -1))
						{
							__LIB_20__.func_615(&Local_384, 0);
							__LIB_6__.func_762(Local_217[0 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0);
							__LIB_6__.func_833();
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
							{
								AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
							}
							if (__LIB_0__.func_405("FH1_BANK", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_601 = 0;
							iLocal_490 = 0;
							iLocal_2546++;
						}
						else if ((HUD::DOES_BLIP_EXIST(Local_384.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_176(), -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, false, true, 0)) && !TASK::GET_IS_TASK_ACTIVE(func_176(), 2))
						{
							__LIB_20__.func_615(&Local_384, 0);
							__LIB_6__.func_762(Local_217[0 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0);
							__LIB_6__.func_833();
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
							{
								AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
							}
							if (__LIB_0__.func_405("FH1_BANK", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_601 = 0;
							iLocal_490 = 0;
							iLocal_2546++;
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__.func_405("FH1_BANK", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (((__LIB_0__.func_455(Local_217[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false)) && !TASK::GET_IS_TASK_ACTIVE(func_175(), 2)) && STREAMING::HAS_ANIM_DICT_LOADED("missbigscore1_mcs1"))
			{
				__LIB_20__.func_615(&Local_384, 0);
				if (!__LIB_0__.func_75())
				{
					AUDIO::START_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "FH1RECMIKE");
					iLocal_2546++;
				}
				else
				{
					__LIB_6__.func_833();
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1280);
			}
			else
			{
				__LIB_38__.func_169(&Local_384, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_173(), 0, 0, Local_217[0 /*2*/], "", "FH1_FRCAR", "", "", "", "CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, "CMN_GENGETBCKY" /* GXT: ~s~Get back in your ~b~car. */, 0, 1, 1, -1);
				__LIB_6__.func_762(Local_217[0 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0);
			}
			break;
		case 2:
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], false);
			FIRE::STOP_FIRE_IN_RANGE(Local_198, 100f);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			iLocal_525 = MISC::GET_GAME_TIMER();
			iLocal_535 = 0;
			iLocal_2546++;
			break;
		case 3:
			if (func_569())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT"))
				{
					AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM"))
				{
					AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				AUDIO::SET_VEH_RADIO_STATION(Local_217[0 /*2*/], "OFF");
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], true);
				func_277(2, 0);
				Global_100441.f_12[0] = 1;
				iLocal_533 = 1;
				iLocal_525 = MISC::GET_GAME_TIMER();
				func_257(0, 1, 0, 0, 0, 0);
				iLocal_490 = 1;
				iLocal_576 = 1;
				iLocal_572 = 0;
				iLocal_599 = MISC::GET_GAME_TIMER();
				iLocal_2546++;
			}
			break;
		case 4:
			if (!Local_474.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_175())
				{
					if (iLocal_412 == 0)
					{
						__LIB_38__.func_169(&Local_384, Local_202, 0.1f, 0.1f, 2f, 1, func_255(), 0, 0, Local_217[1 /*2*/], "", "", "", "", "", "", "", 0, 1, 1, -1);
						if ((!iLocal_568 && HUD::DOES_BLIP_EXIST(Local_384.f_5)) && __LIB_11__.func_692())
						{
							__LIB_0__.func_210("FH1_AIR", 7500, 1);
							iLocal_568 = 1;
						}
					}
					else if (iLocal_412 == 1)
					{
						__LIB_38__.func_169(&Local_384, Local_203, 0.1f, 0.1f, 2f, 0, 0, func_255(), 0, Local_217[2 /*2*/], "", "", "", "", "", "FH1_HELI", "FH1_BKHELI", 0, 1, 1, -1);
					}
					if (!PED::IS_PED_INJURED(func_176()) && !ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_176(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_176(), Local_217[0 /*2*/], Local_200, 8f, 786469, 2f);
						}
					}
					if ((ENTITY::IS_ENTITY_AT_COORD(func_176(), Local_200, 3f, 3f, 2f, false, true, 0) || ((((!func_22(13, 45) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_217[0 /*2*/])) && ENTITY::IS_ENTITY_OCCLUDED(Local_217[0 /*2*/])) && (MISC::GET_GAME_TIMER() - iLocal_489) > 9000) && (MISC::GET_GAME_TIMER() - iLocal_498) > 15000)) || ((HUD::DOES_BLIP_EXIST(Local_384.f_5) && __LIB_0__.func_529(func_175(), Local_202, 1) < 100f) && (MISC::GET_GAME_TIMER() - iLocal_489) > 9000))
					{
						if (iLocal_577 == 0)
						{
							iLocal_577 = 1;
						}
						if (iLocal_577 == 3)
						{
							if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TRVBB", 7, 0, 0, 0))
							{
								iLocal_577 = 4;
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_217[0 /*2*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_217[0 /*2*/]))
								{
									ENTITY::SET_ENTITY_COORDS(Local_217[0 /*2*/], Local_200, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_217[0 /*2*/], fLocal_201);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[0 /*2*/], 5f);
								}
								CUTSCENE::REQUEST_CUTSCENE("BSS_1_MCS_2", 8);
								STREAMING::SET_SRL_FORCE_PRESTREAM(2);
								iLocal_2546 = 0;
								func_270(2);
								func_177(2, "Stage 2: Back of bank", 0, 0, 0, 1);
							}
						}
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_176())
				{
					if (iLocal_412 == 0)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[1 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_175(), Local_217[1 /*2*/], 1799.963f, 3321.9102f, 40.8868f, 70f, 786469, 5f);
							}
						}
					}
					else if (iLocal_412 == 1)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false)) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_175(), Local_217[2 /*2*/], 1527.6018f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, true);
							}
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_DRIVE_AROUND_BACK"))
					{
						AUDIO::START_AUDIO_SCENE("BS_1_DRIVE_AROUND_BACK");
					}
					if (__LIB_38__.func_169(&Local_384, Local_200, 2.5f, 2.5f, 2f, 1, func_173(), 0, 0, Local_217[0 /*2*/], "FH1_BENTR", "FH1_FRCAR", "", "", "", "", "FH1_BKCAR", 0, 1, 1, -1))
					{
						__LIB_6__.func_762(Local_217[0 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0);
						iLocal_490 = 0;
						iLocal_2546 = 200;
					}
				}
			}
			break;
		case 200:
			if (__LIB_0__.func_455(Local_217[0 /*2*/]))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 4);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_2546 = 0;
				func_270(2);
				__LIB_0__.func_296();
				func_177(2, "Stage 2: Back of bank", 0, 0, 0, 1);
			}
			break;
	}
}

int func_569()//Position - 0x4EB65
{
	if (iLocal_535 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false) || TASK::GET_IS_TASK_ACTIVE(func_176(), 2))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_176());
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_176(), "missbigscore1_mcs1", "michael_bss_1_mcs_1", 3))
				{
					TASK::STOP_ANIM_TASK(func_176(), "missbigscore1_mcs1", "michael_bss_1_mcs_1", -8f);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false) || TASK::GET_IS_TASK_ACTIVE(func_173(), 2))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_173());
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_173(), "missbigscore1_mcs1", "franklin_bss_1_mcs_1", 3))
				{
					TASK::STOP_ANIM_TASK(func_173(), "missbigscore1_mcs1", "franklin_bss_1_mcs_1", -8f);
				}
			}
		}
	}
	switch (iLocal_535)
	{
		case 0:
			if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_MCS1", 9, 0, 0, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
				{
					if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false))
					{
						TASK::TASK_PLAY_ANIM(func_176(), "missbigscore1_mcs1", "michael_bss_1_mcs_1", 8f, -1.5f, -1, 32, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(func_173(), "missbigscore1_mcs1", "franklin_bss_1_mcs_1", 8f, -1.5f, -1, 32, 0f, false, false, false);
						if (((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
						{
							iLocal_536 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
							CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
						}
						else
						{
							iLocal_536 = 5;
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 12f, 4);
						iLocal_405 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0.2f, -733.7f, 45.3f, 10.6f, 0f, -14.2f, 40f, false, 2);
						fLocal_532 = 0.35f;
						CAM::SHAKE_CAM(iLocal_405, "HAND_SHAKE", fLocal_532);
						CAM::SET_CAM_ACTIVE(iLocal_405, true);
						iLocal_557 = 0;
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
						iLocal_550 = 0;
						iLocal_576 = 3;
						iLocal_572 = 0;
						iLocal_6329 = 0;
						iLocal_535++;
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_176());
				TASK::CLEAR_PED_SECONDARY_TASK(func_173());
			}
			if (!__LIB_0__.func_75())
			{
				TASK::CLEAR_PED_SECONDARY_TASK(func_176());
				TASK::CLEAR_PED_SECONDARY_TASK(func_173());
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				HUD::CLEAR_HELP(false);
				iLocal_535++;
			}
			else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[0 /*2*/], -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, false, true, 0) && PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false)) && !TASK::GET_IS_TASK_ACTIVE(func_176(), 2))
			{
				if (!iLocal_550)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_217[0 /*2*/], -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, false, true, 0))
					{
						if (iLocal_6329 == 0)
						{
							__LIB_0__.func_151("FH1_FBHELP", -1);
							iLocal_6329 = 1;
						}
					}
				}
				if ((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && __LIB_26__.func_362(&uLocal_538, 0, 1, 0)) || (((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 && !iLocal_550) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/)) && MISC::GET_GAME_TIMER() > iLocal_560))
				{
					MISC::CLEAR_AREA(-3.72364f, -751.49194f, 44.46628f, 5.5f, true, false, false, false);
					if (!iLocal_550)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT"))
						{
							AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
						}
						iLocal_560 = MISC::GET_GAME_TIMER() + 500;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_FADING_OUT())
						{
							HUD::CLEAR_HELP(false);
						}
						iLocal_550 = 1;
					}
				}
				else if ((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && !__LIB_26__.func_362(&uLocal_538, 0, 1, 0)) || (((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 && iLocal_550) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/)) && MISC::GET_GAME_TIMER() > iLocal_560))
				{
					if (iLocal_550)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_CHECK_OUT"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_BANK_CHECK_OUT");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_BANK_HINT_CAM"))
						{
							AUDIO::STOP_AUDIO_SCENE("BS_1_BANK_HINT_CAM");
						}
						iLocal_560 = MISC::GET_GAME_TIMER() + 500;
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						HUD::DISPLAY_RADAR(true);
						HUD::DISPLAY_HUD(true);
						iLocal_550 = 0;
					}
				}
			}
			else
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_FADING_OUT())
				{
					HUD::CLEAR_HELP(false);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			break;
		case 2:
			break;
	}
	if (iLocal_535 == 2)
	{
		if (iLocal_536 != 5)
		{
			if (!bLocal_205 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_536);
				iLocal_536 = 5;
			}
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		__LIB_11__.func_722(&uLocal_627, "missbigscore1_mcs1");
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_218[5 /*4*/]))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(func_176(), Local_218[5 /*4*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_176(), Local_218[5 /*4*/], -1, 2064, 2);
		}
		if (!PED::IS_PED_HEADTRACKING_PED(func_173(), Local_218[5 /*4*/]))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_173(), Local_218[5 /*4*/], -1, 2064, 2);
		}
	}
	return 0;
}

void func_588()//Position - 0x4FA1F
{
	switch (iLocal_2546)
	{
		case 0:
			if (__LIB_0__.func_294())
			{
				iLocal_2546 = 3;
			}
			else
			{
				func_645();
				if (bLocal_528)
				{
					iLocal_2546++;
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (__LIB_0__.func_2(0) && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				CAM::STOP_GAMEPLAY_HINT(true);
				func_643(&uLocal_418, 0, 0, 2000, 1, 0, 0, 1);
				CLOCK::SET_CLOCK_TIME(12, 0, 0);
				iLocal_610 = 1;
				MISC::CLEAR_AREA(90.3864f, -1278.8374f, 28.0896f, 200f, true, false, false, false);
				__LIB_32__.func_779(90.3864f, -1278.8374f, 28.0896f, 20f, 0);
				__LIB_32__.func_669(8);
				__LIB_32__.func_669(20);
				__LIB_0__.func_313(20);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_2546++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!__LIB_11__.func_720(Local_217[0 /*2*/]))
				{
					__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, 90.3864f, -1278.8374f, 28.0896f, 98.4832f, 1, 0);
				}
				else if (!__LIB_11__.func_720(Local_217[1 /*2*/]))
				{
					if (__LIB_40__.func_993(&(Local_217[1 /*2*/]), 2, 83.4733f, -1281.3232f, 29.1518f, 96.9356f, 1, 0))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_217[1 /*2*/], true, false);
					}
				}
				else if (!__LIB_11__.func_720(func_175()) && __LIB_38__.func_170() != 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
					{
						Local_218[2 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
					}
				}
				else if (!__LIB_11__.func_720(func_176()) && __LIB_38__.func_170() != 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
					{
						Local_218[0 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
					}
				}
				else if (!__LIB_11__.func_720(func_173()) && __LIB_38__.func_170() != 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
					{
						Local_218[1 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
					}
				}
				else if (!__LIB_11__.func_720(func_255()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
					{
						Local_218[3 /*4*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					}
				}
				else
				{
					func_257(0, 1, 1, 0, 0, 0);
					iLocal_614 = 0;
					iLocal_616 = 0;
					iLocal_617 = 0;
					iLocal_618 = 0;
					bLocal_619 = false;
					bLocal_621 = false;
					iLocal_2546++;
				}
			}
			break;
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (__LIB_38__.func_170() != 0)
				{
					func_519(&uLocal_430, 0);
					func_590(&uLocal_430, 1, 1, 0);
					Local_218[2 /*4*/] = uLocal_430[2];
					Local_218[1 /*4*/] = uLocal_430[1];
					bLocal_621 = true;
				}
				Local_218[0 /*4*/] = PLAYER::PLAYER_PED_ID();
				ENTITY::SET_ENTITY_COORDS(func_176(), 92.8082f, -1282.6401f, 28.2537f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_176(), 38.2535f);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 800, 38.2535f, false, false);
				PED::FORCE_PED_MOTION_STATE(func_176(), joaat("MotionState_Walk"), false, 1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_614 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[1 /*2*/], -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_175(), false, false);
				iLocal_616 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				ENTITY::SET_ENTITY_COORDS(func_173(), 94.5331f, -1277.5521f, 28.1446f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_173(), 15.2302f);
				TASK::TASK_ENTER_VEHICLE(func_173(), Local_217[0 /*2*/], -1, 0, 1f, 1, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_173(), 1f);
				PED::FORCE_PED_MOTION_STATE(func_173(), joaat("MotionState_Walk"), false, 1, false);
				iLocal_617 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_INTO_VEHICLE(func_255(), Local_217[1 /*2*/], 0);
				PED::SET_PED_CONFIG_FLAG(func_255(), 206, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_255(), false, false);
				STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
				iLocal_618 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false) || !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bLocal_619 = true;
			}
			if ((((((iLocal_614 && iLocal_616) && iLocal_617) && iLocal_618) && bLocal_619) || __LIB_0__.func_294()) || bLocal_2551)
			{
				__LIB_0__.func_372(76);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FH1RECMIKE");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "FH1REC");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "FH1REC");
				MISC::CLEAR_AREA(90.3864f, -1278.8374f, 28.0896f, 20f, true, false, false, false);
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				CLOCK::PAUSE_CLOCK(false);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				bLocal_2551 = false;
				iLocal_2546++;
			}
			break;
		case 4:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "FH1REC"))
			{
				__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 1, 1);
				__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 1, 1);
				__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 1, 1);
				__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 1, 1);
				func_392(0);
				PED::SET_PED_MOVEMENT_CLIPSET(func_255(), "move_lester_CaneUp", 0.25f);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_255(), "move_lester_CaneUp");
				PED::SET_PED_CONFIG_FLAG(func_173(), 116, false);
				PED::SET_PED_CONFIG_FLAG(func_255(), 116, false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_175(), true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_255(), true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[1 /*2*/], true);
				if (ENTITY::DOES_ENTITY_EXIST(func_175()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_175(), iLocal_416);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_175(), true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_173()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_173(), iLocal_416);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_173(), true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_255()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_255(), iLocal_416);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_255(), true);
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.7f);
				if (bLocal_621)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
				}
				iLocal_2546++;
			}
			break;
		case 5:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_176(), 1f);
				PED::FORCE_PED_MOTION_STATE(func_176(), joaat("MotionState_Walk"), true, 1, false);
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_525 = MISC::GET_GAME_TIMER();
				__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
				iLocal_2546++;
			}
			break;
		case 6:
			func_277(1, 0);
			iLocal_525 = MISC::GET_GAME_TIMER();
			iLocal_2546++;
			break;
		case 7:
			if (!Local_474.f_20)
			{
				if (PLAYER::PLAYER_PED_ID() == func_176())
				{
					if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[1 /*2*/], false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_175(), Local_217[1 /*2*/], 1799.963f, 3321.9102f, 40.8868f, 55f, 1074528293, 5f);
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_drive_START");
						}
					}
					if (__LIB_38__.func_169(&Local_384, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_173(), 0, 0, Local_217[0 /*2*/], "FH1_BANK", "FH1_FRCAR", "", "", "", "CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, "CMN_GENGETBCKY" /* GXT: ~s~Get back in your ~b~car. */, 0, 1, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_384.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_176(), -2.55928f, -743.9714f, 45f, -14.34047f, -739.4463f, 43.15934f, 4.46f, false, true, 0)) && !TASK::GET_IS_TASK_ACTIVE(func_176(), 2)))
					{
						__LIB_20__.func_615(&Local_384, 0);
						__LIB_6__.func_762(Local_217[0 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_drive_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("BS_1_drive_START");
						}
						iLocal_601 = 0;
						iLocal_490 = 0;
						if (__LIB_0__.func_405("FH1_BANK", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						iLocal_2546 = 200;
					}
				}
				else if (PLAYER::PLAYER_PED_ID() == func_175())
				{
					__LIB_38__.func_169(&Local_384, Local_202, 0.1f, 0.1f, 2f, 1, func_255(), 0, 0, Local_217[1 /*2*/], "", "", "", "", "", "", "", 0, 1, 1, -1);
					if ((!iLocal_568 && HUD::DOES_BLIP_EXIST(Local_384.f_5)) && __LIB_11__.func_692())
					{
						__LIB_0__.func_210("FH1_AIR", 7500, 1);
						iLocal_568 = 1;
					}
					if (!PED::IS_PED_INJURED(func_176()) && !ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_176(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_176(), Local_217[0 /*2*/], Local_198, 8f, 786469, 2f);
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_176(), Local_198, 4f, 4f, 2f, false, true, 0) || ((((!func_22(12, 35) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_217[0 /*2*/])) && ENTITY::IS_ENTITY_OCCLUDED(Local_217[0 /*2*/])) && (MISC::GET_GAME_TIMER() - iLocal_498) > 15000) && (MISC::GET_GAME_TIMER() - iLocal_489) > 10000))
					{
						if (iLocal_577 == 0)
						{
							iLocal_577 = 1;
						}
						if (iLocal_577 == 3)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (__LIB_41__.func_973(&uLocal_219, "FH1AUD", "FH1_TRVFBS", 7, 0, 0, 0))
								{
									iLocal_577 = 4;
									func_177(1, "Stage 1: Front of bank", 0, 0, 0, 1);
									iLocal_2546 = 0;
									func_270(1);
									iLocal_498 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			break;
		case 200:
			if (__LIB_0__.func_405("FH1_BANK", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if ((__LIB_0__.func_455(Local_217[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false)) && !TASK::GET_IS_TASK_ACTIVE(func_175(), 2))
			{
				if (__LIB_0__.func_405("FH1_BANK", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				__LIB_20__.func_615(&Local_384, 0);
				__LIB_6__.func_833();
				iLocal_2546 = 0;
				func_270(1);
				func_177(1, "Stage 1: Front of bank", 0, 0, 0, 1);
			}
			else
			{
				__LIB_38__.func_169(&Local_384, -9.34495f, -741.3211f, 43.15848f, 0.1f, 0.1f, 2f, 1, func_173(), 0, 0, Local_217[0 /*2*/], "", "FH1_FRCAR", "", "", "", "CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, "CMN_GENGETBCKY" /* GXT: ~s~Get back in your ~b~car. */, 0, 1, 1, -1);
				__LIB_6__.func_762(Local_217[0 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0);
			}
			break;
	}
}

int func_590(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x504BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_38__.func_170();
		if (!uParam0->f_23)
		{
			func_627(iVar0, 0);
		}
		__LIB_11__.func_858(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__.func_388(uParam0->f_7);
		func_627((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_32__.func_823(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__.func_317(__LIB_38__.func_170()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_6__.func_854(0) || __LIB_6__.func_854(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		uParam0->f_5 = __LIB_0__.func_504(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__.func_504(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		func_621(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				func_621(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__.func_385(PLAYER::PLAYER_PED_ID());
		func_619();
		__LIB_9__.func_998(iVar2);
		func_613();
		__LIB_26__.func_368(iVar2);
		func_597(__LIB_6__.func_815(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__.func_368(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__.func_368(68));
		}
		__LIB_20__.func_676(iVar2, &iVar7);
		if (((__LIB_0__.func_39(0) || __LIB_0__.func_39(3)) || __LIB_0__.func_39(2)) || __LIB_0__.func_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__.func_381())
		{
			func_591();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_591()//Position - 0x509BA
{
	if (Global_97753)
	{
		__LIB_37__.func_313();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_11__.func_174(Global_113386.f_2363.f_539.f_4321));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}
}

void func_597(int iParam0)//Position - 0x50BBB
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_38412[(38 / 32)]), (38 % 32));
			__LIB_42__.func_34(38, 0);
			MISC::SET_BIT(&(Global_38412[(41 / 32)]), (41 % 32));
			__LIB_42__.func_34(41, 0);
			MISC::SET_BIT(&(Global_38412[(43 / 32)]), (43 % 32));
			__LIB_42__.func_34(43, 0);
			MISC::SET_BIT(&(Global_38412[(42 / 32)]), (42 % 32));
			__LIB_42__.func_34(42, 0);
			MISC::SET_BIT(&(Global_38412[(44 / 32)]), (44 % 32));
			__LIB_42__.func_34(44, 0);
			break;
		case 1:
			MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
			__LIB_42__.func_34(51, 0);
			break;
		case 2:
			MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
			__LIB_42__.func_34(51, 0);
			break;
		case 3:
			MISC::SET_BIT(&(Global_38412[(53 / 32)]), (53 % 32));
			__LIB_42__.func_34(53, 0);
			break;
		case 4:
			MISC::SET_BIT(&(Global_38412[(81 / 32)]), (81 % 32));
			__LIB_42__.func_34(81, 0);
			MISC::SET_BIT(&(Global_38412[(82 / 32)]), (82 % 32));
			__LIB_42__.func_34(82, 0);
			break;
		case 5:
			MISC::SET_BIT(&(Global_38412[(47 / 32)]), (47 % 32));
			__LIB_42__.func_34(47, 0);
			MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
			__LIB_42__.func_34(50, 0);
			break;
		case 6:
			MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
			__LIB_42__.func_34(50, 0);
			break;
	}
}

void func_613()//Position - 0x5504F
{
	struct<50> Var0;
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__.func_317(__LIB_38__.func_170())) || !__LIB_6__.func_781())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_189(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	__LIB_1__.func_39(1306, Var0[0], -1);
	__LIB_1__.func_39(1307, Var0[1], -1);
	__LIB_1__.func_39(1308, Var0[2], -1);
	__LIB_1__.func_39(1309, Var0[3], -1);
	__LIB_1__.func_39(1310, Var0[4], -1);
	__LIB_1__.func_39(1311, Var0[5], -1);
	__LIB_1__.func_39(1312, Var0[6], -1);
	__LIB_1__.func_39(1313, Var0[7], -1);
	__LIB_1__.func_39(1314, Var0[8], -1);
	__LIB_1__.func_39(1315, Var0[9], -1);
	__LIB_1__.func_39(1316, Var0[10], -1);
	__LIB_1__.func_39(1317, Var0[11], -1);
	__LIB_1__.func_39(1318, Var0.f_13[0], -1);
	__LIB_1__.func_39(1319, Var0.f_13[1], -1);
	__LIB_1__.func_39(1320, Var0.f_13[2], -1);
	__LIB_1__.func_39(1321, Var0.f_13[3], -1);
	__LIB_1__.func_39(1322, Var0.f_13[4], -1);
	__LIB_1__.func_39(1323, Var0.f_13[5], -1);
	__LIB_1__.func_39(1324, Var0.f_13[6], -1);
	__LIB_1__.func_39(1325, Var0.f_13[7], -1);
	__LIB_1__.func_39(1326, Var0.f_13[8], -1);
	__LIB_1__.func_39(1327, Var0.f_13[9], -1);
	__LIB_1__.func_39(1328, Var0.f_13[10], -1);
	__LIB_1__.func_39(1329, Var0.f_13[11], -1);
	__LIB_1__.func_39(1330, Var0.f_26[0], -1);
	__LIB_1__.func_39(1331, Var0.f_26[1], -1);
	__LIB_1__.func_39(1332, Var0.f_26[2], -1);
	__LIB_1__.func_39(1333, Var0.f_26[3], -1);
	__LIB_1__.func_39(1334, Var0.f_26[4], -1);
	__LIB_1__.func_39(1335, Var0.f_26[5], -1);
	__LIB_1__.func_39(1336, Var0.f_26[6], -1);
	__LIB_1__.func_39(1337, Var0.f_26[7], -1);
	__LIB_1__.func_39(1338, Var0.f_26[8], -1);
	__LIB_1__.func_39(1339, Var0.f_26[9], -1);
	__LIB_1__.func_39(1340, Var0.f_26[10], -1);
	__LIB_1__.func_39(1341, Var0.f_26[11], -1);
	__LIB_1__.func_39(1342, Var0.f_39[0], -1);
	__LIB_1__.func_39(1343, Var0.f_39[1], -1);
	__LIB_1__.func_39(1344, Var0.f_39[2], -1);
	__LIB_1__.func_39(1345, Var0.f_39[3], -1);
	__LIB_1__.func_39(1346, Var0.f_39[4], -1);
	__LIB_1__.func_39(1347, Var0.f_39[5], -1);
	__LIB_1__.func_39(1348, Var0.f_39[6], -1);
	__LIB_1__.func_39(1349, Var0.f_39[7], -1);
	__LIB_1__.func_39(1350, Var0.f_39[8], -1);
	__LIB_1__.func_39(1351, Var0.f_49[0], -1);
	__LIB_1__.func_39(1352, Var0.f_49[1], -1);
	__LIB_1__.func_39(1353, Var0.f_49[2], -1);
	__LIB_1__.func_39(1354, Var0.f_49[3], -1);
	__LIB_1__.func_39(1355, Var0.f_49[4], -1);
	__LIB_1__.func_39(1356, Var0.f_49[5], -1);
	__LIB_1__.func_39(1357, Var0.f_49[6], -1);
	__LIB_1__.func_39(1358, Var0.f_49[7], -1);
	__LIB_1__.func_39(1359, Var0.f_49[8], -1);
	__LIB_1__.func_39(1360, __LIB_38__.func_170(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

void func_619()//Position - 0x55611
{
	int iVar0;
	int iVar1;
	__LIB_37__.func_313();
	iVar0 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(iVar0))
	{
		iVar1 = Global_113386.f_2363.f_539.f_4321;
		if (__LIB_0__.func_39(14))
		{
			iVar1 = __LIB_32__.func_823(PLAYER::PLAYER_PED_ID());
		}
		if (iVar1 == 0)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_MICHAEL" /* GXT: Michael */);
		}
		else if (iVar1 == 1)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_FRANKLIN" /* GXT: Franklin */);
		}
		else if (iVar1 == 2)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_TREV" /* GXT: Trevor */);
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_PLAYER" /* GXT: Player */);
		}
	}
}

void func_621(int iParam0)//Position - 0x5575A
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(iParam0) == 200)
		{
			PED::SET_PED_MAX_HEALTH(iParam0, SYSTEM::ROUND((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_262145.f_106 /* Tunable: MAX_HEALTH_MULTIPLIER */)));
		}
		if (Global_113386.f_2363.f_539.f_290[iVar0] <= 0f)
		{
			Global_113386.f_2363.f_539.f_290[iVar0] = 100f;
		}
		else if (Global_113386.f_2363.f_539.f_290[iVar0] <= 10f)
		{
			Global_113386.f_2363.f_539.f_290[iVar0] = 10f;
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, SYSTEM::ROUND((((Global_113386.f_2363.f_539.f_290[iVar0] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
	}
}

void func_627(int iParam0, bool bParam1)//Position - 0x55BCF
{
	func_632(iParam0);
	func_197(iParam0, bParam1);
	func_631(iParam0);
	func_204(iParam0);
	func_630(iParam0);
	func_629(iParam0);
	func_628(iParam0);
}

void func_628(int iParam0)//Position - 0x55C03
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			Global_113386.f_2363.f_539.f_2328[iVar0] = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
	}
}

void func_629(int iParam0)//Position - 0x55C4A
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	}
}

void func_630(int iParam0)//Position - 0x55C88
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
			{
				return;
			}
		}
		Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		Global_113386.f_2363.f_539.f_2310[iVar0] = ENTITY::GET_ENTITY_HEADING(iParam0);
		Global_113386.f_2363.f_539.f_2314[iVar0] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] >= 8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = 7500f;
		}
		else if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] <= -8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = -7500f;
		}
		if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_631(int iParam0)//Position - 0x55E15
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_290[iVar0] = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
	}
}

void func_632(int iParam0)//Position - 0x55E72
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_18__.func_240();
	}
}

void func_643(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5797E
{
	int iVar0;
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	__LIB_26__.func_367(bParam1, 1, 0, 0, 0, 0, 0);
	__LIB_9__.func_994();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = __LIB_18__.func_240();
		}
	}
}

void func_645()//Position - 0x57B22
{
	if (!bLocal_528)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (__LIB_38__.func_170() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("bs_1_int", 511, 8);
			}
			else if (__LIB_38__.func_170() == 0)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("bs_1_int", 508, 8);
			}
			else if (__LIB_38__.func_170() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("bs_1_int", 504, 8);
			}
			func_364();
			SYSTEM::WAIT(0);
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
			if (__LIB_38__.func_170() != 2)
			{
				if (__LIB_11__.func_720(Local_218[2 /*4*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_218[2 /*4*/], "Trevor", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, __LIB_20__.func_783(2), 0);
				}
			}
			if (__LIB_38__.func_170() != 0)
			{
				if (__LIB_11__.func_720(Local_218[0 /*4*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_218[0 /*4*/], "Michael", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michael", 2, __LIB_20__.func_783(0), 0);
				}
			}
			if (__LIB_38__.func_170() != 1)
			{
				if (__LIB_11__.func_720(Local_218[1 /*4*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_218[1 /*4*/], "Franklin", 0, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklin", 2, __LIB_20__.func_783(1), 0);
				}
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lester", 2, __LIB_0__.func_397(12), 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_96938.f_28[0]))
				{
					ENTITY::DETACH_ENTITY(Global_96938.f_28[0], false, true);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_96938.f_28[0], "BS_Beer_Bottle", 1, 0, 0);
			}
			if (__LIB_38__.func_170() == 2)
			{
				CUTSCENE::START_CUTSCENE(256);
			}
			else if (__LIB_38__.func_170() == 0)
			{
				CUTSCENE::START_CUTSCENE(0);
			}
			else if (__LIB_38__.func_170() == 1)
			{
				CUTSCENE::START_CUTSCENE(256);
			}
			bLocal_528 = true;
		}
	}
}

void func_647()//Position - 0x57CF7
{
	if (iLocal_610)
	{
		if (iLocal_2545 < 4)
		{
			func_10();
			func_725();
		}
	}
	if (__LIB_38__.func_170() == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_175()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
				{
					__LIB_0__.func_320(0, 637);
					__LIB_0__.func_320(Local_217[2 /*2*/], 638);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[1 /*2*/], false))
				{
					if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[1 /*2*/], false))
					{
						__LIB_0__.func_320(Local_217[1 /*2*/], 637);
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[1 /*2*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[1 /*2*/], false))
				{
					__LIB_0__.func_320(Local_217[1 /*2*/], 637);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_217[0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_176()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false))
			{
				__LIB_0__.func_320(Local_217[0 /*2*/], 637);
			}
		}
	}
	func_660();
	func_659();
	func_657();
	func_654();
	func_652();
	func_651();
	func_649();
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__.func_409(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 639);
			}
			else
			{
				__LIB_0__.func_409(0, 639);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_175()))
			{
				if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
				{
					__LIB_0__.func_409(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 640);
				}
			}
		}
		else
		{
			__LIB_0__.func_409(0, -1);
		}
	}
}

void func_649()//Position - 0x57EED
{
	if (iLocal_2545 > 4)
	{
		if (__LIB_11__.func_720(PLAYER::PLAYER_PED_ID()))
		{
			if (!iLocal_565)
			{
				if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_204, 1) < 250f)
				{
					if (AUDIO::LOAD_STREAM("Construction_Stream", "BIG_SCORE_SETUP_SOUNDS"))
					{
						iLocal_565 = 1;
					}
				}
			}
			else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_204, 1) > 250f)
			{
				AUDIO::STOP_STREAM();
				iLocal_565 = 0;
				iLocal_566 = 0;
			}
			else if (!iLocal_566 && iLocal_565)
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(26f, -636f, 17f);
				iLocal_566 = 1;
			}
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_204, 1) < 300f)
			{
				if (iLocal_607)
				{
				}
			}
			else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_204, 1) > 330f)
			{
				iLocal_607 = 1;
				if (ENTITY::DOES_ENTITY_EXIST(Local_218[7 /*4*/]))
				{
					__LIB_0__.func_0(&(Local_218[7 /*4*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_218[8 /*4*/]))
				{
					__LIB_0__.func_0(&(Local_218[8 /*4*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_218[9 /*4*/]))
				{
					__LIB_0__.func_0(&(Local_218[9 /*4*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_218[10 /*4*/]))
				{
					__LIB_0__.func_0(&(Local_218[10 /*4*/]));
				}
			}
		}
	}
}

void func_651()//Position - 0x58068
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_411) && __LIB_11__.func_720(func_255()))
	{
		if (!iLocal_562)
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_411) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(func_255()))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_411, func_255(), PED::GET_PED_BONE_INDEX(func_255(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				if (__LIB_11__.func_720(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_411, Local_217[2 /*2*/], false);
				}
				iLocal_562 = 1;
			}
		}
	}
	if (__LIB_11__.func_720(func_255()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(func_255(), 1f);
	}
	if (iLocal_2545 < 4)
	{
		if ((__LIB_11__.func_720(func_255()) && __LIB_11__.func_720(Local_217[2 /*2*/])) && __LIB_11__.func_720(func_175()))
		{
			if (PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(func_255(), func_175()))
				{
					TASK::TASK_LOOK_AT_ENTITY(func_255(), func_175(), -1, 2096, 2);
				}
			}
		}
	}
}

void func_652()//Position - 0x5815C
{
	if (__LIB_11__.func_720(Local_217[2 /*2*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 200f && !iLocal_609)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[2 /*2*/], 5f);
			ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
			iLocal_609 = 1;
		}
		if (PLAYER::PLAYER_PED_ID() == func_176())
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_217[2 /*2*/]) < 300f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_217[2 /*2*/], 550f);
			}
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_217[2 /*2*/], false);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_175())
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_217[2 /*2*/], true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_175()))
	{
		if (__LIB_0__.func_529(func_175(), Local_202, 1) < 300f)
		{
			__LIB_32__.func_669(20);
			if (STREAMING::HAS_MODEL_LOADED(joaat("frogger2")))
			{
				Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.5278f, 40.7f, 133.1852f, true, true, false);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
				VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
				ENTITY::SET_ENTITY_COLLISION(Local_217[2 /*2*/], true, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
				__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
			}
		}
		else if (__LIB_0__.func_529(func_175(), Local_202, 1) < 350f)
		{
			__LIB_11__.func_689(&uLocal_627, joaat("frogger2"));
		}
	}
	if (iLocal_2545 == 4 || iLocal_2545 == 5)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(func_175())) && !CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
			{
				if (iLocal_569 == 0)
				{
					__LIB_0__.func_210("FH1_BKHELI", 7500, 1);
					iLocal_569 = 1;
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_404))
				{
					HUD::SET_BLIP_DISPLAY(iLocal_404, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_217[2 /*2*/].f_1))
				{
					Local_217[2 /*2*/].f_1 = __LIB_6__.func_825(Local_217[2 /*2*/], 0, 0);
				}
			}
			else
			{
				iLocal_569 = 0;
				if (HUD::DOES_BLIP_EXIST(iLocal_404))
				{
					HUD::SET_BLIP_DISPLAY(iLocal_404, 2);
				}
				if (HUD::DOES_BLIP_EXIST(Local_217[2 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_217[2 /*2*/].f_1));
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_217[2 /*2*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_217[2 /*2*/].f_1));
	}
	if (PLAYER::PLAYER_PED_ID() != func_175())
	{
		if (((__LIB_11__.func_720(Local_217[1 /*2*/]) && __LIB_11__.func_720(func_175())) && __LIB_11__.func_720(func_255())) && iLocal_412 == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_202, ENTITY::GET_ENTITY_COORDS(Local_217[1 /*2*/], true), true) < 60f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
					PED::SET_PED_INTO_VEHICLE(func_255(), Local_217[2 /*2*/], 1);
					iLocal_412 = 1;
				}
			}
		}
	}
}

void func_654()//Position - 0x58470
{
	struct<3> Var0;
	iLocal_524 = 0;
	while (iLocal_524 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_218[iLocal_524 /*4*/]))
		{
			if (PED::IS_PED_INJURED(Local_218[iLocal_524 /*4*/]))
			{
				if (Local_218[iLocal_524 /*4*/] == func_176())
				{
					func_291(4);
				}
				else if (Local_218[iLocal_524 /*4*/] == func_175())
				{
					func_291(2);
				}
				else if (Local_218[iLocal_524 /*4*/] == func_173())
				{
					func_291(1);
				}
				else if (Local_218[iLocal_524 /*4*/] == func_255())
				{
					func_291(3);
				}
				else if ((((Local_218[iLocal_524 /*4*/] == Local_218[4 /*4*/] || Local_218[iLocal_524 /*4*/] == Local_218[5 /*4*/]) || Local_218[iLocal_524 /*4*/] == Local_218[7 /*4*/]) || Local_218[iLocal_524 /*4*/] == Local_218[8 /*4*/]) || Local_218[iLocal_524 /*4*/] == Local_218[9 /*4*/])
				{
					func_291(10);
				}
				__LIB_0__.func_124(&(Local_218[iLocal_524 /*4*/]), 1, 0, 1);
			}
		}
		iLocal_524++;
	}
	iLocal_524 = 0;
	while (iLocal_524 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_217[iLocal_524 /*2*/]))
		{
			if (Local_217[iLocal_524 /*2*/] == Local_217[0 /*2*/] && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[iLocal_524 /*2*/], false))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_217[0 /*2*/]))
				{
					func_291(7);
				}
				if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_217[0 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_217[0 /*2*/]))
					{
						if (PLAYER::PLAYER_PED_ID() == func_176())
						{
							func_291(7);
						}
					}
				}
				else
				{
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_217[0 /*2*/]);
				}
			}
			if (Local_217[iLocal_524 /*2*/] == Local_217[1 /*2*/] && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[iLocal_524 /*2*/], false))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_217[1 /*2*/]))
				{
					func_291(8);
				}
				if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Local_217[1 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_217[1 /*2*/]))
					{
						if (PLAYER::PLAYER_PED_ID() == func_175())
						{
							func_291(8);
						}
					}
				}
				else
				{
					VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_217[1 /*2*/]);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[iLocal_524 /*2*/], false))
			{
				if (Local_217[iLocal_524 /*2*/] == Local_217[0 /*2*/])
				{
					func_291(7);
				}
				if (Local_217[iLocal_524 /*2*/] == Local_217[1 /*2*/])
				{
					func_291(8);
				}
				if (Local_217[iLocal_524 /*2*/] == Local_217[2 /*2*/])
				{
					func_291(9);
				}
				__LIB_0__.func_106(&(Local_217[iLocal_524 /*2*/]));
			}
			else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (Local_217[iLocal_524 /*2*/] == Local_217[2 /*2*/])
				{
					if (ENTITY::IS_ENTITY_IN_AIR(Local_217[2 /*2*/]) && !PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true) };
						if (Var0.f_2 > 200f)
						{
							func_291(12);
							__LIB_0__.func_106(&(Local_217[iLocal_524 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_524++;
	}
	if (iLocal_610)
	{
		if (!func_22(15, 24) && iLocal_2545 < 4)
		{
			func_655();
		}
		if (!func_22(15, 30) && iLocal_2545 < 4)
		{
			__LIB_6__.func_771();
			func_291(14);
		}
		if (iLocal_2545 < 6)
		{
			if (__LIB_11__.func_720(func_176()))
			{
				if (__LIB_0__.func_529(func_176(), 7.03093f, -710.3717f, 45.0146f, 1) > 2000f && PLAYER::PLAYER_PED_ID() == func_176())
				{
					func_291(13);
				}
				else if (__LIB_0__.func_529(func_176(), 7.03093f, -710.3717f, 45.0146f, 1) > 1900f && PLAYER::PLAYER_PED_ID() == func_176())
				{
					if (__LIB_11__.func_692() && !iLocal_571)
					{
						__LIB_0__.func_210("FH1_MIKERT", 7500, 1);
						iLocal_571 = 1;
					}
				}
				else
				{
					iLocal_571 = 0;
				}
			}
		}
		else if (iLocal_2545 == 6)
		{
			if (__LIB_11__.func_720(func_176()))
			{
				if (__LIB_0__.func_529(func_176(), 1743.8065f, 3270.3186f, 40.20966f, 1) < 600f && PLAYER::PLAYER_PED_ID() == func_176())
				{
					func_291(13);
				}
				else if (__LIB_0__.func_529(func_176(), 1743.8065f, 3270.3186f, 40.20966f, 1) < 700f && PLAYER::PLAYER_PED_ID() == func_176())
				{
					if (__LIB_11__.func_692() && !iLocal_571)
					{
						__LIB_0__.func_210("FH1_MISSRT", 7500, 1);
						iLocal_571 = 1;
					}
				}
				else
				{
					iLocal_571 = 0;
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (PLAYER::PLAYER_PED_ID() == func_176())
			{
				if (__LIB_11__.func_720(func_173()))
				{
					fLocal_526 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_176(), true), ENTITY::GET_ENTITY_COORDS(func_173(), true));
					if (fLocal_526 > 90f)
					{
						if (!iLocal_570)
						{
							__LIB_0__.func_210("FH1_HEADBKF", 7500, 1);
							iLocal_570 = 1;
						}
						if (fLocal_526 > 120f)
						{
							func_291(11);
						}
					}
					else
					{
						iLocal_570 = 0;
					}
				}
			}
			else if (PLAYER::PLAYER_PED_ID() == func_175())
			{
				if (__LIB_11__.func_720(func_255()))
				{
					if (__LIB_0__.func_76(func_175(), func_255(), 1) > 90f && iLocal_2552 == 0)
					{
						if (!iLocal_570)
						{
							__LIB_0__.func_210("FH1_HEADBKL", 7500, 1);
							iLocal_570 = 1;
						}
						if (__LIB_0__.func_76(func_175(), func_255(), 1) > 120f)
						{
							func_291(12);
						}
					}
					else
					{
						iLocal_570 = 0;
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 4.5757f, -707.3064f, 46.2527f, 150f, 150f, 60f, false, true, 0))
		{
			if (fLocal_527 < 1f)
			{
				fLocal_527 = 1f;
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fLocal_527);
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || FIRE::IS_EXPLOSION_IN_AREA(-1, -51.41013f, -753.0048f, 28.25766f, 80.25236f, -683.1798f, 100.06847f))
			{
				func_291(10);
			}
		}
		else if (fLocal_527 > 0f)
		{
			fLocal_527 = 0f;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fLocal_527);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_218[5 /*4*/]))
		{
			if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_218[5 /*4*/], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_COMBAT(Local_218[5 /*4*/], PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STEALTH_KILLED(Local_218[5 /*4*/])) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_218[5 /*4*/], true) - Vector(5f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(Local_218[5 /*4*/], true) + Vector(5f, 15f, 15f), true))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_218[5 /*4*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_218[5 /*4*/], PLAYER::PLAYER_PED_ID(), -1, false);
				}
				func_291(10);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_218[4 /*4*/]))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_218[4 /*4*/], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_COMBAT(Local_218[4 /*4*/], PLAYER::PLAYER_PED_ID())) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_218[4 /*4*/], true) - Vector(5f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(Local_218[4 /*4*/], true) + Vector(5f, 15f, 15f), true))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_218[4 /*4*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_218[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, false);
				}
				func_291(10);
			}
		}
		if (__LIB_11__.func_720(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -98.69806f, -671.9003f, 34.46694f, -85.72156f, -676.6857f, 40.92188f, 25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4.47685f, -705.701f, 58.89827f, 17.18902f, -732.9049f, 43.216f, 47f, false, true, 0))
					{
						if (__LIB_11__.func_720(Local_218[4 /*4*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_218[4 /*4*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_218[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, false);
							}
						}
						if (__LIB_11__.func_720(Local_218[5 /*4*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_218[5 /*4*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_218[5 /*4*/], PLAYER::PLAYER_PED_ID(), -1, false);
							}
						}
						func_291(10);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 8.12f, -713.66f, 44.57f, 12f, 12f, 5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 30.8506f, -616.7436f, 15f, 19.54452f, -648.7594f, 29f, 20f, false, true, 0))
				{
					if (__LIB_11__.func_720(Local_218[4 /*4*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_218[4 /*4*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_218[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, false);
						}
					}
					if (__LIB_11__.func_720(Local_218[5 /*4*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_218[5 /*4*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_218[5 /*4*/], PLAYER::PLAYER_PED_ID(), -1, false);
						}
					}
					func_291(10);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -83.04369f, -678.85724f, 38f, -69.75829f, -683.5911f, 32.18783f, 14f, false, true, 0))
			{
				if (__LIB_11__.func_720(Local_218[4 /*4*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_218[4 /*4*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_218[4 /*4*/], PLAYER::PLAYER_PED_ID(), -1, false);
					}
				}
				func_291(10);
			}
		}
	}
}

void func_655()//Position - 0x58DBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_SECONDS();
	if (iLocal_503 == 0)
	{
		if (iVar1 == 25 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 1)
	{
		if (iVar1 == 26 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 2)
	{
		if (iVar1 == 26 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 3)
	{
		if (iVar1 == 27 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 4)
	{
		if (iVar1 == 27 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 5)
	{
		if (iVar1 == 28 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 6)
	{
		if (iVar1 == 28 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 7)
	{
		if (iVar1 == 28 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 8)
	{
		if (iVar1 == 28 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 9)
	{
		if (iVar1 == 29 && iVar2 >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 10)
	{
		if (iVar1 == 29 && iVar2 >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 11)
	{
		if (iVar1 == 29 && iVar2 >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 12)
	{
		if (iVar1 == 29 && iVar2 >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
	else if (iLocal_503 == 13)
	{
		if (iVar1 >= 30 && iVar0 == 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_503++;
		}
	}
}

void func_657()//Position - 0x590FD
{
	if (!iLocal_2542)
	{
		if ((__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_198, 1) < 200f || __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_200, 1) < 200f) || (iLocal_2545 == 4 && iLocal_2546 > 10))
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Armoured_01"));
			STREAMING::REQUEST_ANIM_DICT("missbigscore1guard_wait_rifle");
			iLocal_2542 = 1;
			iLocal_2543 = 1;
		}
	}
	else if ((__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_198, 1) < 200f || __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_200, 1) < 200f) || (iLocal_2545 == 4 && iLocal_2546 > 10))
	{
		if ((STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Armoured_01")) && STREAMING::HAS_ANIM_DICT_LOADED("missbigscore1guard_wait_rifle")) && iLocal_2543)
		{
			if (!__LIB_11__.func_720(Local_218[4 /*4*/]))
			{
				func_658(4, -77.96f, -677.87f, 33.47f, 64.7755f);
			}
			if (!__LIB_11__.func_720(Local_218[5 /*4*/]))
			{
				func_658(5, 9.47284f, -710.345f, 45.0146f, 209.3389f);
				MISC::CLEAR_AREA(3.41664f, -710.20435f, 44.97406f, 4f, true, false, false, false);
			}
			iLocal_2543 = 0;
		}
	}
	else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_198, 1) > 230f && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_200, 1) > 230f)
	{
		if (iLocal_2545 != 4)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Armoured_01"));
		}
		__LIB_0__.func_124(&(Local_218[4 /*4*/]), 1, 0, 1);
		__LIB_0__.func_124(&(Local_218[5 /*4*/]), 1, 0, 1);
		STREAMING::REMOVE_ANIM_DICT("missbigscore1guard_wait_rifle");
		iLocal_2542 = 0;
	}
	if (iLocal_2545 >= 4)
	{
		if (!iLocal_2540)
		{
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_204, 1) < 300f)
			{
				STREAMING::REQUEST_MODEL(joaat("bulldozer"));
				iLocal_2540 = 1;
				iLocal_2541 = 1;
			}
		}
		else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_204, 1) < 300f)
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("bulldozer")) && iLocal_2541)
			{
				if (!__LIB_11__.func_720(Local_217[5 /*2*/]))
				{
					Local_217[5 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), 26.76431f, -609.3245f, 30.62795f, 252.2286f, true, true, false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_217[5 /*2*/], false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[5 /*2*/], 5f);
				}
				if (!__LIB_11__.func_720(Local_217[6 /*2*/]))
				{
					Local_217[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), 36.85886f, -648.699f, 30.62794f, 140.3838f, true, true, false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_217[6 /*2*/], false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[6 /*2*/], 5f);
				}
				iLocal_2541 = 0;
			}
		}
		else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_204, 1) > 330f)
		{
			__LIB_0__.func_106(&(Local_217[5 /*2*/]));
			__LIB_0__.func_106(&(Local_217[5 /*2*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bulldozer"));
			iLocal_2540 = 0;
		}
	}
}

void func_658(int iParam0, struct<3> Param1, float fParam2)//Position - 0x593EB
{
	Local_218[iParam0 /*4*/] = PED::CREATE_PED(26, joaat("S_M_M_Armoured_01"), Param1, fParam2, true, true);
	if (iParam0 == 4)
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_218[iParam0 /*4*/], 0, 0, 1, 0);
		PED::SET_PED_PROP_INDEX(Local_218[iParam0 /*4*/], 0, 1, 0, false);
	}
	else
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_218[iParam0 /*4*/], 0, 2, 0, 0);
	}
	PED::SET_PED_CONFIG_FLAG(Local_218[iParam0 /*4*/], 118, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(Local_218[iParam0 /*4*/], true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_218[iParam0 /*4*/], joaat("WEAPON_ADVANCEDRIFLE"), -1, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_218[iParam0 /*4*/], joaat("WEAPON_ADVANCEDRIFLE"), true);
	PED::SET_PED_LEG_IK_MODE(Local_218[iParam0 /*4*/], 1);
	TASK::OPEN_SEQUENCE_TASK(&(Local_218[iParam0 /*4*/].f_2));
	if (iParam0 == 4)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -77.96f, -677.87f, 33.47f, 1f, -1, 0.25f, 0, 90f);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 9.47284f, -710.345f, 45.0146f, 1f, -1, 0.25f, 0, 189.8286f);
	}
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_base", 4f, -1000f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_a", 1000f, -1000f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_b", 1000f, -1000f, -1, 0, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "missbigscore1guard_wait_rifle", "wait_c", 1000f, -4f, -1, 0, 0f, false, false, false);
	TASK::SET_SEQUENCE_TO_REPEAT(Local_218[iParam0 /*4*/].f_2, true);
	TASK::CLOSE_SEQUENCE_TASK(Local_218[iParam0 /*4*/].f_2);
	TASK::TASK_PERFORM_SEQUENCE(Local_218[iParam0 /*4*/], Local_218[iParam0 /*4*/].f_2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_218[iParam0 /*4*/], iLocal_417);
	if (iParam0 == 5)
	{
		Local_218[iParam0 /*4*/].f_3 = PED::ADD_SCENARIO_BLOCKING_AREA(-3.84928f, -728.367f, 44.09243f, 5.56493f, -705.19385f, 47.59827f, false, true, true, true);
	}
	else
	{
		Local_218[iParam0 /*4*/].f_3 = PED::ADD_SCENARIO_BLOCKING_AREA(-93.01785f, -670.3105f, 34.46116f, -65.7259f, -686.6242f, 31.73092f, false, true, true, true);
	}
	MISC::CLEAR_AREA_OF_PEDS(Param1, 100f, 0);
}

void func_659()//Position - 0x5960B
{
	if (iLocal_533)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_534) > 250)
		{
			fLocal_532 = (fLocal_532 - 0.05f);
			iLocal_534 = MISC::GET_GAME_TIMER();
		}
		if (fLocal_532 > 1f)
		{
			fLocal_532 = 1f;
		}
		if (fLocal_532 <= 0f)
		{
			fLocal_532 = 0f;
			iLocal_533 = 0;
		}
		CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fLocal_532);
	}
}

void func_660()//Position - 0x5965C
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	if (iLocal_490)
	{
		if (PLAYER::PLAYER_PED_ID() == func_176())
		{
			__LIB_11__.func_179(&uLocal_430, 2, 0);
			__LIB_11__.func_153(&uLocal_430, 2, 0, 1);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_175())
		{
			__LIB_11__.func_179(&uLocal_430, 0, 0);
			__LIB_11__.func_153(&uLocal_430, 0, 2, 1);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_173())
		{
			__LIB_11__.func_179(&uLocal_430, 0, 0);
			__LIB_11__.func_153(&uLocal_430, 0, 2, 1);
		}
		if (!Local_474.f_20 && !iLocal_6312)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (func_705())
				{
					__LIB_0__.func_401(642, 1, 0);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					__LIB_18__.func_192(&Local_384, 1, 0);
					__LIB_20__.func_615(&Local_384, 0);
					CLOCK::PAUSE_CLOCK(true);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_176(), true), ENTITY::GET_ENTITY_COORDS(func_175(), true), true) > 70f && !ENTITY::IS_ENTITY_ON_SCREEN(Local_474.f_12))
					{
						bLocal_492 = true;
					}
					else
					{
						bLocal_492 = false;
					}
					iLocal_488 = 0;
					if (__LIB_11__.func_720(func_176()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_176(), true);
					}
					if (__LIB_11__.func_720(func_255()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_255(), true);
					}
					if (__LIB_11__.func_720(func_175()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_175(), true);
					}
					if (__LIB_11__.func_720(func_173()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_173(), true);
					}
					if (__LIB_11__.func_720(Local_217[2 /*2*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_217[2 /*2*/], true);
					}
					if (__LIB_11__.func_720(Local_217[1 /*2*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_217[1 /*2*/], true);
					}
					if (__LIB_11__.func_720(Local_217[0 /*2*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_217[0 /*2*/], true);
					}
					if (uLocal_430.f_7 == 0)
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(func_176(), true) };
						if ((iLocal_573 == 2 && iLocal_577 == 0) && __LIB_0__.func_75())
						{
							if ((iLocal_575 == 0 || iLocal_575 == 1) || iLocal_575 == 4)
							{
								cLocal_587 = { __LIB_0__.func_389() };
								cLocal_591 = { __LIB_0__.func_390() };
								iLocal_595 = 1;
								__LIB_6__.func_771();
							}
						}
						if (iLocal_2545 == 0)
						{
							if (bLocal_492)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/]);
								}
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 1, "FH1RECMIKE", true);
								fLocal_491 = __LIB_11__.func_871(Var0, 1, "FH1RECMIKE", 20);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], fLocal_491);
								VEHICLE::SET_PLAYBACK_SPEED(Local_217[0 /*2*/], 0f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[0 /*2*/], true);
								ENTITY::SET_ENTITY_COORDS(func_176(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_491), true, false, false, true);
								if (!PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_176(), false, false);
								}
								if (!PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(func_173(), Local_217[0 /*2*/], 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_173(), false, false);
								}
								Local_474.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_491) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_474.f_12, 2), 65f, false, 2);
							}
						}
						if (iLocal_2545 == 1)
						{
							if (iLocal_2546 == 0)
							{
								if (bLocal_492)
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/]);
									}
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 1, "FH1RECMIKE", true);
									fLocal_491 = (__LIB_11__.func_871(Local_198, 1, "FH1RECMIKE", 20) - 10000f);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], fLocal_491);
									VEHICLE::SET_PLAYBACK_SPEED(Local_217[0 /*2*/], 0f);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[0 /*2*/], true);
									ENTITY::SET_ENTITY_COORDS(func_176(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_491), true, false, false, true);
									if (!PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false))
									{
										PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_176(), false, false);
									}
									if (!PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
									{
										PED::SET_PED_INTO_VEHICLE(func_173(), Local_217[0 /*2*/], 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_173(), false, false);
									}
									Local_474.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "FH1RECMIKE"), fLocal_491) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_474.f_12, 2), 65f, false, 2);
								}
							}
							else if (bLocal_492)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/]);
								}
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 2, "FH1RECMIKE", true);
								fLocal_491 = __LIB_11__.func_871(Var0, 2, "FH1RECMIKE", 10);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], fLocal_491);
								VEHICLE::SET_PLAYBACK_SPEED(Local_217[0 /*2*/], 0f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[0 /*2*/], true);
								ENTITY::SET_ENTITY_COORDS(func_176(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(2, "FH1RECMIKE"), fLocal_491), true, false, false, true);
								if (!PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_176(), false, false);
								}
								if (!PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(func_173(), Local_217[0 /*2*/], 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_173(), false, false);
								}
								Local_474.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(2, "FH1RECMIKE"), fLocal_491) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_474.f_12, 2), 65f, false, 2);
							}
						}
						else if (iLocal_2545 == 2 || iLocal_2545 == 3)
						{
							if (iLocal_2546 == 0)
							{
								CUTSCENE::REQUEST_CUTSCENE("BSS_1_MCS_2", 8);
								STREAMING::SET_SRL_FORCE_PRESTREAM(2);
								StringCopy(&Local_596, "", 24);
								StringCopy(&Local_597, "", 24);
								iLocal_598 = 0;
								iLocal_576 = 3;
								if (bLocal_492)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_217[0 /*2*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_217[0 /*2*/], Local_200, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(Local_217[0 /*2*/], fLocal_201);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[0 /*2*/], 5f);
										MISC::CLEAR_AREA(-114.0502f, -652.3067f, 34.9012f, 40f, true, false, false, false);
									}
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_217[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_218[2 /*4*/], Local_217[2 /*2*/], false))
								{
									iLocal_2552 = 1;
									func_701(&Local_5035, 1);
									iLocal_497 = 1;
									iLocal_2552 = 3;
								}
							}
						}
						else if (iLocal_2545 == 6)
						{
							if (bLocal_492)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/]);
								}
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 3, "FH1RECMIKE", true);
								fLocal_491 = __LIB_11__.func_871(Var0, 3, "FH1RECMIKE", 10);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], fLocal_491);
								VEHICLE::SET_PLAYBACK_SPEED(Local_217[0 /*2*/], 0f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[0 /*2*/], true);
								ENTITY::SET_ENTITY_COORDS(func_176(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1RECMIKE"), fLocal_491), true, false, false, true);
								if (!PED::IS_PED_IN_VEHICLE(func_176(), Local_217[0 /*2*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_176(), false, false);
								}
								if (!PED::IS_PED_IN_VEHICLE(func_173(), Local_217[0 /*2*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(func_173(), Local_217[0 /*2*/], 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_173(), false, false);
								}
								Local_474.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1RECMIKE"), fLocal_491) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_474.f_12, 2), 65f, false, 2);
							}
						}
						if (__LIB_11__.func_720(Local_217[0 /*2*/]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_217[0 /*2*/], true, 1);
						}
						if (__LIB_11__.func_720(func_175()))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_175(), true);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_255(), true);
						if (__LIB_11__.func_720(Local_217[2 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[2 /*2*/], true);
						}
						if (__LIB_11__.func_720(Local_217[1 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[1 /*2*/], true);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_176(), false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_173(), false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[0 /*2*/], false);
					}
					else if (uLocal_430.f_7 == 2)
					{
						if ((iLocal_572 == 2 && iLocal_577 == 0) && __LIB_0__.func_75())
						{
							if ((iLocal_576 == 0 || iLocal_576 == 1) || iLocal_576 == 2)
							{
								Local_596 = { __LIB_0__.func_389() };
								Local_597 = { __LIB_0__.func_390() };
								iLocal_598 = 1;
								__LIB_6__.func_771();
							}
						}
						if (bLocal_492)
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(func_175(), true) };
							if (iLocal_2545 < 4)
							{
								if (iLocal_412 == 0)
								{
									if (__LIB_11__.func_720(Local_217[1 /*2*/]))
									{
										if (func_22(14, 45) && iLocal_495)
										{
											iLocal_2552 = 3;
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[1 /*2*/]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/]);
											}
										}
										else
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[1 /*2*/]))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/]);
											}
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], 3, "FH1REC", true);
											fLocal_491 = __LIB_11__.func_871(Var0, 3, "FH1REC", 10);
											if (fLocal_491 <= 10000f)
											{
												fLocal_491 = 10000f;
											}
											VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], fLocal_491);
											VEHICLE::SET_PLAYBACK_SPEED(Local_217[1 /*2*/], 0f);
											VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[1 /*2*/], true);
											ENTITY::SET_ENTITY_COORDS(func_175(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1REC"), fLocal_491), true, false, false, true);
											if (!PED::IS_PED_IN_VEHICLE(func_175(), Local_217[1 /*2*/], false))
											{
												PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[1 /*2*/], -1);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_175(), false, false);
											}
											if (!PED::IS_PED_IN_VEHICLE(func_255(), Local_217[1 /*2*/], false))
											{
												PED::SET_PED_INTO_VEHICLE(func_255(), Local_217[1 /*2*/], 0);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_255(), false, false);
											}
										}
										Local_474.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(3, "FH1REC"), fLocal_491) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_474.f_12, 2), 65f, false, 2);
									}
								}
								else if (iLocal_412 == 1 && PED::IS_PED_IN_VEHICLE(Local_218[2 /*4*/], Local_217[2 /*2*/], false))
								{
									if (__LIB_11__.func_720(Local_217[2 /*2*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[2 /*2*/]))
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/]);
										}
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], 4, "FH1REC", true);
										fLocal_491 = __LIB_11__.func_871(Var0, 4, "FH1REC", 10);
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], fLocal_491);
										VEHICLE::SET_PLAYBACK_SPEED(Local_217[2 /*2*/], 0f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[2 /*2*/], true);
										ENTITY::SET_ENTITY_COORDS(func_175(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(4, "FH1REC"), fLocal_491), true, false, false, true);
										if (!PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
										{
											PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_175(), false, false);
										}
										if (!PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
										{
											PED::SET_PED_INTO_VEHICLE(func_255(), Local_217[2 /*2*/], 1);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_255(), false, false);
										}
										iLocal_496 = 1;
										iLocal_2552 = 3;
									}
								}
							}
							if (iLocal_2545 == 6)
							{
								if (__LIB_11__.func_720(Local_217[2 /*2*/]))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], 5, "FH1REC", true);
									fLocal_491 = __LIB_11__.func_871(Var0, 5, "FH1REC", 10);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], fLocal_491);
									VEHICLE::SET_PLAYBACK_SPEED(Local_217[2 /*2*/], 0f);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[2 /*2*/], true);
									ENTITY::SET_ENTITY_COORDS(func_175(), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(5, "FH1REC"), fLocal_491), true, false, false, true);
									if (!PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false))
									{
										PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_175(), false, false);
									}
									if (!PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
									{
										PED::SET_PED_INTO_VEHICLE(func_255(), Local_217[2 /*2*/], 1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_255(), false, false);
									}
									Local_474.f_10 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(5, "FH1REC"), fLocal_491) + Vector(30f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_474.f_12, 2), 65f, false, 2);
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PED::GET_VEHICLE_PED_IS_IN(func_175(), false), true, 1);
							}
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_175(), false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_255(), false);
						if (__LIB_11__.func_720(Local_217[2 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[2 /*2*/], false);
						}
						if (__LIB_11__.func_720(Local_217[1 /*2*/]))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[1 /*2*/], false);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_176(), true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_173(), true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[0 /*2*/], true);
					}
					iLocal_494 = 0;
					Local_474.f_20 = 1;
					Local_474.f_19 = 0;
				}
			}
		}
		iVar1 = func_663();
		if (iVar1 == 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_217[0 /*2*/], true, 1);
			}
			if (Local_474.f_18)
			{
				if (!Local_474.f_19)
				{
					if (func_590(&uLocal_430, 1, 1, iLocal_6318))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_474.f_12, true), 10f, true, false, false, false);
						Local_474.f_19 = 1;
						if (ENTITY::DOES_ENTITY_EXIST(func_175()))
						{
							if (uLocal_430[2] == 0)
							{
								Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
								iLocal_493 = MISC::GET_GAME_TIMER();
								if (PED::IS_PED_IN_ANY_VEHICLE(func_175(), false))
								{
									ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(func_175(), false), false);
								}
							}
							else
							{
								Local_218[2 /*4*/] = uLocal_430[2];
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_175(), iLocal_416);
							}
							if (!PED::IS_PED_INJURED(func_175()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_175(), true);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_176()))
						{
							if (uLocal_430[0] == 0)
							{
								Local_218[0 /*4*/] = PLAYER::PLAYER_PED_ID();
								iLocal_493 = MISC::GET_GAME_TIMER();
								ENTITY::FREEZE_ENTITY_POSITION(Local_217[0 /*2*/], false);
							}
							else
							{
								Local_218[0 /*4*/] = uLocal_430[0];
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_176(), iLocal_416);
							}
							if (!PED::IS_PED_INJURED(func_176()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_176(), true);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_173()))
						{
							if (uLocal_430[1] == 0)
							{
								Local_218[1 /*4*/] = PLAYER::PLAYER_PED_ID();
								iLocal_493 = MISC::GET_GAME_TIMER();
							}
							else
							{
								Local_218[1 /*4*/] = uLocal_430[1];
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_173(), iLocal_416);
							}
							if (!PED::IS_PED_INJURED(func_173()))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_173(), true);
							}
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_493) > 2000 && bLocal_492)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_474.f_12, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(Local_474.f_12, false), false);
				}
			}
			if (iLocal_2545 == 0)
			{
				if (!iLocal_495)
				{
					if (iLocal_412 == 0)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[1 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_175(), Local_217[1 /*2*/], Local_202, 50f, 1074528293, 5f);
							}
						}
					}
					else if (iLocal_412 == 1)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_175(), Local_217[2 /*2*/], 1527.6018f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, true);
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(func_176()) && !ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_176(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_176(), Local_217[0 /*2*/], Local_198, 15f, 1074528293, 5f);
					}
				}
			}
			else if (iLocal_2545 == 1)
			{
				if (!iLocal_495)
				{
					if (iLocal_412 == 0)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[1 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_175(), Local_217[1 /*2*/], Local_202, 50f, 1074528293, 5f);
							}
						}
					}
					else if (iLocal_412 == 1)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_175(), Local_217[2 /*2*/], 1527.6018f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, true);
							}
						}
					}
				}
				if (iLocal_2546 == 0)
				{
					if (Local_474.f_12 == func_176())
					{
						if (!PED::IS_PED_INJURED(func_176()) && !ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_176(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_176(), Local_217[0 /*2*/], Local_198, 10f, 786469, 6f);
							}
						}
					}
				}
				else if (iLocal_2546 > 0)
				{
					if (!PED::IS_PED_INJURED(func_176()) && !ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(func_176(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_176(), Local_217[0 /*2*/], Local_200, 13f, 1074528293, 3f);
						}
					}
				}
			}
			else if (iLocal_2545 == 2)
			{
				if (!iLocal_495)
				{
					if (iLocal_412 == 0)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[1 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_175(), Local_217[1 /*2*/], 1799.963f, 3321.9102f, 40.8868f, 50f, 1074528293, 5f);
							}
						}
					}
					else if (iLocal_412 == 1)
					{
						if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_175(), Local_217[2 /*2*/], 1527.6018f, -591.3962f, 336.5655f, 9, 10f, 786469, 4f, -1f, true);
							}
						}
					}
				}
				if (iLocal_2546 == 0)
				{
					if (bLocal_492)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_217[0 /*2*/]))
						{
							ENTITY::SET_ENTITY_COORDS(Local_217[0 /*2*/], Local_200, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_217[0 /*2*/], fLocal_201);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[0 /*2*/], 5f);
						}
					}
				}
			}
			else if (iLocal_2545 == 6)
			{
				if (!PED::IS_PED_INJURED(func_175()) && !ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_175(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(func_175(), Local_217[2 /*2*/], 1728.8278f, 3126.128f, 106.3001f, 9, 10f, 786469, 4f, -1f, true);
					}
				}
				if (!PED::IS_PED_INJURED(func_176()) && !ENTITY::IS_ENTITY_DEAD(Local_217[0 /*2*/], false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_176(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(func_176(), Local_217[0 /*2*/], 11.2359f, 547.3271f, 174.8878f, 10f, 1074528293, 3f);
					}
				}
			}
			if ((!iLocal_495 && !iLocal_496) && !iLocal_497)
			{
				if (bLocal_492)
				{
					if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 1 || STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
					{
						if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
						{
							if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() > 0)
							{
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(Local_474.f_12, true), 100f, false, false, false, false, false, false, 0);
								if (Local_474.f_12 == func_176())
								{
									VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_217[0 /*2*/], true);
									VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_217[0 /*2*/], true);
								}
								else if (Local_474.f_12 == func_175())
								{
									if (__LIB_11__.func_720(Local_217[1 /*2*/]))
									{
										VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_217[1 /*2*/], true);
										VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_217[1 /*2*/], true);
									}
								}
							}
							switch (iLocal_494)
							{
								case 0:
									if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 1)
									{
										if (Local_474.f_12 == func_176())
										{
											if (__LIB_11__.func_720(Local_217[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_474.f_12, Local_217[0 /*2*/], false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], ((fLocal_491 - 5000f) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[0 /*2*/])));
												}
												else
												{
													if (iLocal_2545 == 0)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 1, "FH1RECMIKE", true);
													}
													else if (iLocal_2545 == 1)
													{
														if (iLocal_2546 == 0)
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 1, "FH1RECMIKE", true);
														}
														else
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 2, "FH1RECMIKE", true);
														}
													}
													else if (iLocal_2545 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 3, "FH1RECMIKE", true);
													}
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
													{
														VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], (fLocal_491 - 5000f));
													}
												}
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
												{
													VEHICLE::SET_PLAYBACK_SPEED(Local_217[0 /*2*/], 0.5f);
													VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[0 /*2*/], true);
												}
											}
										}
										else if (Local_474.f_12 == func_175())
										{
											if (__LIB_11__.func_720(Local_217[1 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_474.f_12, Local_217[1 /*2*/], false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[1 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], ((fLocal_491 - 5000f) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[1 /*2*/])));
												}
												else
												{
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], 3, "FH1REC", true);
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], (fLocal_491 - 5000f));
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_217[1 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[1 /*2*/], true);
											}
											if (__LIB_11__.func_720(Local_217[2 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_474.f_12, Local_217[2 /*2*/], false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[2 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], ((fLocal_491 - 5000f) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[2 /*2*/])));
												}
												else
												{
													if (iLocal_2545 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], 5, "FH1REC", true);
													}
													else
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], 4, "FH1REC", true);
													}
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], (fLocal_491 - 5000f));
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_217[2 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[2 /*2*/], true);
											}
										}
										iLocal_494++;
									}
									else if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
									{
										iLocal_494++;
									}
									break;
								case 1:
									if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
									{
										if (Local_474.f_12 == func_176())
										{
											if (__LIB_11__.func_720(Local_217[0 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_474.f_12, Local_217[0 /*2*/], false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], (fLocal_491 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[0 /*2*/])));
												}
												else
												{
													if (iLocal_2545 == 0)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 1, "FH1RECMIKE", true);
													}
													else if (iLocal_2545 == 1)
													{
														if (iLocal_2546 == 0)
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 1, "FH1RECMIKE", true);
														}
														else
														{
															VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 2, "FH1RECMIKE", true);
														}
													}
													else if (iLocal_2545 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], 3, "FH1RECMIKE", true);
													}
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
													{
														VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/], fLocal_491);
													}
												}
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
												{
													VEHICLE::SET_PLAYBACK_SPEED(Local_217[0 /*2*/], 1.2f);
													VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[0 /*2*/], true);
												}
											}
										}
										else if (Local_474.f_12 == func_175())
										{
											if (__LIB_11__.func_720(Local_217[1 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_474.f_12, Local_217[1 /*2*/], false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[1 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], (fLocal_491 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[1 /*2*/])));
												}
												else
												{
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], 3, "FH1REC", true);
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/], fLocal_491);
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_217[1 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[1 /*2*/], true);
											}
											if (__LIB_11__.func_720(Local_217[2 /*2*/]) && PED::IS_PED_IN_VEHICLE(Local_474.f_12, Local_217[2 /*2*/], false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[2 /*2*/]))
												{
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], (fLocal_491 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_217[2 /*2*/])));
												}
												else
												{
													if (iLocal_2545 == 6)
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], 5, "FH1REC", true);
													}
													else
													{
														VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], 4, "FH1REC", true);
													}
													VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/], fLocal_491);
												}
												VEHICLE::SET_PLAYBACK_SPEED(Local_217[2 /*2*/], 0.5f);
												VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_217[2 /*2*/], true);
											}
										}
										iLocal_494++;
									}
									break;
								case 2:
									if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() != 0)
									{
										if (Local_474.f_12 == func_176())
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
											{
												VEHICLE::SET_PLAYBACK_SPEED(Local_217[0 /*2*/], 1f);
											}
										}
										else if (Local_474.f_12 == func_175())
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[2 /*2*/]))
											{
												VEHICLE::SET_PLAYBACK_SPEED(Local_217[2 /*2*/], 1f);
											}
											else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[1 /*2*/]))
											{
												VEHICLE::SET_PLAYBACK_SPEED(Local_217[1 /*2*/], 1f);
											}
										}
									}
									break;
								}
							}
					}
				}
				else if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 1 || STREAMING::GET_PLAYER_SWITCH_TYPE() == 2)
				{
					if ((((STREAMING::GET_PLAYER_SWITCH_STATE() == 8 || STREAMING::GET_PLAYER_SWITCH_STATE() == 9) || STREAMING::GET_PLAYER_SWITCH_STATE() == 10) || STREAMING::GET_PLAYER_SWITCH_STATE() == 9) || STREAMING::GET_PLAYER_SWITCH_STATE() == 12)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_474.f_12, false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(Local_474.f_12, false), false);
							if (!PED::IS_PED_IN_FLYING_VEHICLE(Local_474.f_12))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(Local_474.f_12, false), 5f);
							}
						}
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Local_474.f_12, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(Local_474.f_12, false), true);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
			{
				if (VEHICLE::IS_HELI_PART_BROKEN(Local_217[2 /*2*/], true, true, true))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_217[2 /*2*/]);
				}
			}
		}
		if (iVar1 == 1)
		{
			if (__LIB_11__.func_720(Local_217[1 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[1 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[1 /*2*/]);
				}
			}
			if (__LIB_11__.func_720(Local_217[2 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[2 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[2 /*2*/]);
				}
			}
			if (__LIB_11__.func_720(Local_217[0 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_217[0 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_217[0 /*2*/]);
				}
			}
			if ((!iLocal_495 && !iLocal_496) && !iLocal_497)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			else if (CAM::DOES_CAM_EXIST(Local_5035.f_1))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_5035.f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iLocal_6312 = 0;
				}
			}
			iLocal_495 = 0;
			iLocal_496 = 0;
			iLocal_497 = 0;
			if (CAM::DOES_CAM_EXIST(Local_5035.f_1))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_5035.f_1))
				{
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				}
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
			}
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			iLocal_489 = MISC::GET_GAME_TIMER();
			CLOCK::PAUSE_CLOCK(false);
			__LIB_18__.func_192(&Local_384, 1, 0);
			__LIB_20__.func_615(&Local_384, 0);
			__LIB_20__.func_784(&Local_474);
			func_8(0);
			if (PLAYER::PLAYER_PED_ID() == func_175())
			{
				if (iLocal_2545 < 4)
				{
					if (iLocal_412 == 0)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
						}
					}
					else if (iLocal_412 == 1)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS"))
						{
							AUDIO::START_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
						}
					}
				}
				if (__LIB_11__.func_720(Local_217[2 /*2*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_217[2 /*2*/], false);
				}
			}
			else if ((__LIB_11__.func_720(Local_217[2 /*2*/]) && __LIB_11__.func_720(func_175())) && __LIB_11__.func_720(func_255()))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_217[2 /*2*/]) < 700)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_217[2 /*2*/], 700, 0);
				}
				if (VEHICLE::IS_HELI_PART_BROKEN(Local_217[2 /*2*/], true, true, true))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_217[2 /*2*/]);
				}
				if (PED::IS_PED_IN_VEHICLE(func_175(), Local_217[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(func_255(), Local_217[2 /*2*/], false))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true) };
					if ((ENTITY::IS_ENTITY_OCCLUDED(Local_217[2 /*2*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_217[2 /*2*/])) && Var2.f_2 < 300f)
					{
						ENTITY::SET_ENTITY_COORDS(Local_217[2 /*2*/], Var2 + Vector(200f, 0f, 0f), true, true, false, true);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_217[2 /*2*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_217[2 /*2*/], true, true, false);
					}
				}
				ENTITY::SET_ENTITY_INVINCIBLE(Local_217[2 /*2*/], true);
			}
			if (__LIB_11__.func_720(func_176()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_176(), false);
			}
			if (__LIB_11__.func_720(func_255()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_255(), false);
			}
			if (__LIB_11__.func_720(func_175()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_175(), false);
			}
			if (__LIB_11__.func_720(func_173()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_173(), false);
			}
			if (__LIB_11__.func_720(Local_217[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_217[2 /*2*/], false);
			}
			if (__LIB_11__.func_720(Local_217[1 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_217[1 /*2*/], false);
			}
			if (__LIB_11__.func_720(Local_217[0 /*2*/]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_217[0 /*2*/], false);
			}
		}
	}
}

int func_663()//Position - 0x5B35C
{
	int iVar0;
	if (!Local_474.f_20)
	{
		return 0;
	}
	else if (Local_474.f_20)
	{
		if (iLocal_497)
		{
			if (func_701(&Local_5035, 1))
			{
				Local_474.f_20 = 0;
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (iLocal_496)
		{
			if (func_527(&uLocal_3794, 1))
			{
				Local_474.f_20 = 0;
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (iLocal_495)
		{
			if (func_562(&uLocal_2553, 1))
			{
				Local_474.f_20 = 0;
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else
		{
			iVar0 = 0;
			if (bLocal_492 && CAM::DOES_CAM_EXIST(Local_474.f_10))
			{
				if (func_700(&Local_474, Local_474.f_10, 0, iVar0, 1148829696, 1148829696, 0, 0, 0, 2))
				{
					return 2;
				}
				else
				{
					Local_474.f_20 = 0;
					return 1;
				}
			}
			else
			{
				switch (iLocal_488)
				{
					case 0:
						if (__LIB_0__.func_76(func_175(), func_176(), 1) < 100f)
						{
							iLocal_488 = 1;
						}
						else
						{
							iLocal_488 = 2;
						}
						break;
					case 1:
						if (func_664(&Local_474, 3, iVar0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
						{
							return 2;
						}
						else
						{
							Local_474.f_20 = 0;
							iLocal_488 = 0;
							return 1;
						}
						break;
					case 2:
						if (func_664(&Local_474, 0, iVar0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
						{
							return 2;
						}
						else
						{
							Local_474.f_20 = 0;
							iLocal_488 = 0;
							return 1;
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_664(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, char* sParam7, bool bParam8, int iParam9)//Position - 0x5B4DD
{
	return func_665(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, sParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_665(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x5B504
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_97360 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, false);
						__LIB_11__.func_105(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, true);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, true);
				}
				uParam0->f_21 = __LIB_1__.func_414();
				__LIB_8__.func_770(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					iVar0 |= 2;
				}
				if (__LIB_0__.func_497())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, iParam2);
					if (bParam11)
					{
						STREAMING::SET_PLAYER_SHORT_SWITCH_STYLE(iParam12);
					}
					switch (__LIB_32__.func_823(uParam0->f_13))
					{
						case 0:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDMichaelOut");
							break;
						case 1:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDMichaelOut");
							break;
						case 2:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDOut");
				}
				else if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					STREAMING::SWITCH_TO_MULTI_SECONDPART(uParam0->f_12);
					__LIB_0__.func_708(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, true), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_23011.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, false, 0, true);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, true), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", false, 0, true);
					}
					if (Global_23011.f_109 == -1)
					{
						Global_23011.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_23011.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_23011.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, false, 0, true);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_23011.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
					Global_23011.f_109 = -1;
					Global_23011.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				__LIB_4__.func_749(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(true, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_20__.func_783(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_11__.func_174(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_20__.func_783(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_11__.func_174(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_20__.func_783(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_11__.func_174(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_23011.f_111)
			{
			}
			if (__LIB_0__.func_517(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_100164 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				switch (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE())
				{
					case 0:
						break;
					case 1:
						break;
					}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						__LIB_9__.func_994();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						__LIB_40__.func_968(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						__LIB_9__.func_994();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar4 = 20f;
						fVar5 = SYSTEM::VDIST2(Var2, Var3);
						if (fVar5 < (fVar4 * fVar4))
						{
							__LIB_9__.func_994();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_40__.func_968(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				__LIB_9__.func_994();
			}
			if (!uParam0->f_22)
			{
				__LIB_40__.func_968(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar6 = __LIB_11__.func_330();
		if (((iVar6 != 8 && iVar6 != 9) && iVar6 != 10) && iVar6 != 55)
		{
			__LIB_8__.func_770(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
			Global_23011.f_109 = -1;
			Global_23011.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_23011.f_107 != -1 && Global_23011.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_107);
			Global_23011.f_107 = -1;
			Global_23011.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
		}
		if (!Global_44203)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, true, false);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, true, false);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar7 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, false);
					__LIB_11__.func_105(iVar7, 1);
				}
			}
		}
		__LIB_0__.func_708(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, false);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_11__.func_103();
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(__LIB_11__.func_174(__LIB_38__.func_170()));
		}
		__LIB_4__.func_749(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(false, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}

int func_700(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x5C6E3
{
	return func_665(uParam0, iParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_701(var uParam0, bool bParam1)//Position - 0x5C70A
{
	int iVar0;
	switch (iLocal_2552)
	{
		case 0:
			break;
		case 1:
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_6309, fLocal_6308, 0);
			break;
		case 3:
			CAM::DESTROY_ALL_CAMS(false);
			func_702(uParam0, &(Local_218[2 /*4*/]), &(Local_218[0 /*4*/]));
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_6309, fLocal_6308, 2);
			TASK::TASK_PLAY_ANIM(Local_218[2 /*4*/], cLocal_6321, "mid_mission_inside_helicopter_trevor", 1000f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(Local_218[3 /*4*/], cLocal_6321, "mid_mission_inside_helicopter_lester", 1000f, -2f, -1, 0, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_218[3 /*4*/], false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_218[2 /*4*/], false, false);
			VEHICLE::ROLL_DOWN_WINDOW(Local_217[0 /*2*/], 0);
			VEHICLE::ROLL_DOWN_WINDOW(Local_217[0 /*2*/], 1);
			ENTITY::SET_ENTITY_COORDS(Local_217[2 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_217[2 /*2*/], true) + Vector(10f, 0f, 0f), true, false, false, true);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_217[2 /*2*/]);
			__LIB_26__.func_473(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_6322 = 0;
			iLocal_6305 = 0;
			uParam0->f_1232 = 0;
			iLocal_6317 = 0;
			iLocal_6312 = 1;
			ENTITY::SET_ENTITY_COORDS(Local_217[0 /*2*/], Local_200, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_217[0 /*2*/], fLocal_201);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], false);
			iLocal_2552 = 4;
			break;
		case 4:
			iVar0 = func_530(uParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_217[0 /*2*/], Local_200, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_217[0 /*2*/], fLocal_201);
			}
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) < fLocal_6307)
				{
					STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(0.2f);
				}
				if (!iLocal_6305)
				{
					if (bLocal_6304)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_6309, fLocal_6308, 2);
						iLocal_6305 = 1;
					}
				}
				if (bLocal_6306)
				{
					if (!Local_474.f_18)
					{
						if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_6307)
						{
							Local_474.f_18 = 1;
							ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
							iLocal_6318 = 1;
						}
					}
				}
				if (__LIB_32__.func_823(PLAYER::PLAYER_PED_ID()) == 0)
				{
					if (iLocal_6318 == 1)
					{
						iLocal_6318 = 0;
					}
				}
				if (iVar0 >= (uParam0->f_1218 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_218[1 /*4*/]))
					{
						if (!__LIB_0__.func_583(Local_218[1 /*4*/], joaat("SCRIPT_TASK_PLAY_ANIM"), 1))
						{
							TASK::TASK_PLAY_ANIM(Local_218[1 /*4*/], cLocal_6320, "bss_1_mcs_2_leadin_fra", 1000f, -8f, -1, 1, 0f, false, false, false);
						}
					}
					if (!PED::IS_PED_INJURED(Local_218[0 /*4*/]))
					{
						if (!__LIB_0__.func_583(Local_218[0 /*4*/], joaat("SCRIPT_TASK_PLAY_ANIM"), 1))
						{
							TASK::TASK_PLAY_ANIM(Local_218[0 /*4*/], cLocal_6320, "bss_1_mcs_2_leadin_mic", 1000f, -8f, -1, 1, 0f, false, false, false);
						}
					}
				}
				if (!iLocal_6317)
				{
					if (iVar0 >= uParam0->f_1218)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						SYSTEM::WAIT(0);
						iLocal_6316 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-111.2f, -638.1f, 36.5f, 0.9f, -1.6f, 0f, 350f, 12, 127);
						STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_217[2 /*2*/], false);
						}
						iLocal_6317 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					iLocal_2552 = 10;
				}
			}
			break;
		case 10:
			MISC::SET_TIME_SCALE(1f);
			SYSTEM::SETTIMERA(0);
			STREAMING::STREAMVOL_DELETE(iLocal_6316);
			ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
			iLocal_2552 = 0;
			uParam0->f_1232 = 1;
			Local_474.f_20 = 0;
			STREAMING::SET_RENDER_HD_ONLY(false);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
			__LIB_11__.func_132(3, 3, 0, 0);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], true);
			__LIB_0__.func_296();
			iLocal_6318 = 0;
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (__LIB_12__.func_90(uParam0))
				{
					__LIB_12__.func_89(uParam0);
					STREAMING::REMOVE_ANIM_DICT(cLocal_6321);
					STREAMING::REMOVE_ANIM_DICT(cLocal_6320);
					func_529();
				}
			}
			iLocal_6310 = 1;
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_702(var uParam0, var uParam1, var uParam2)//Position - 0x5CB07
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1.3574f, 1.8668f, -0.2382f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.0874f, 0.1445f, 0.2509f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 1;
		uParam0->f_10[0 /*57*/].f_46 = 1;
		uParam0->f_10[0 /*57*/].f_47 = 0.06f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 10f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 1f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1500;
		uParam0->f_10[1 /*57*/].f_6 = { -1.413f, 1.5631f, 0.1155f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -0.0956f, 0.0073f, 0.4327f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 14;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0.99f;
		uParam0->f_10[1 /*57*/].f_45 = 1;
		uParam0->f_10[1 /*57*/].f_46 = 1;
		uParam0->f_10[1 /*57*/].f_47 = 0.1f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 16f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 1f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -1.7076f, 2.1871f, 2.7493f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -0.4081f, 0.4474f, 3.163f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.3f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 1;
		uParam0->f_10[2 /*57*/].f_29 = 0.5f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 8;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0.4f;
		uParam0->f_10[2 /*57*/].f_45 = 1;
		uParam0->f_10[2 /*57*/].f_46 = 1;
		uParam0->f_10[2 /*57*/].f_47 = 0.17f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 20f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 1f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 2.6577f, 0.8505f, -0.003f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -4.2795f, 0f, 113.5217f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 40f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 1f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.15f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 1;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 500;
		uParam0->f_10[5 /*57*/].f_6 = { 2.6138f, 0.8314f, 0.6365f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -4.2795f, 0f, 113.5217f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 40f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.15f;
		uParam0->f_10[5 /*57*/].f_28 = 1;
		uParam0->f_10[5 /*57*/].f_29 = 0.9f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 1;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 1000;
		uParam0->f_10[6 /*57*/].f_6 = { 2.5496f, 0.8035f, 0.6313f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -4.2795f, 0f, 113.5214f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 0;
		uParam0->f_10[7 /*57*/].f_6 = { 3.6208f, 1.1263f, 0.6699f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -10.0052f, 0f, 104.9732f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 50f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.15f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = 0.52f;
		uParam0->f_1234 = 0.66f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 2000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_BigScore_TrevorInHeliToMichael.txt";
		uParam0->f_1225 = "CameraInfo_BigScore_TrevorInHeliToMichael.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = *uParam1;
	uParam0->f_7[1] = *uParam2;
}

int func_705()//Position - 0x5DA56
{
	if (iLocal_6323)
	{
		if (func_707(&uLocal_430, 0, 1))
		{
			if (!__LIB_11__.func_106(&uLocal_430, 3))
			{
				Local_474.f_12 = uLocal_430[uLocal_430.f_7];
				return 1;
			}
		}
	}
	else if (func_707(&uLocal_430, 1, 1))
	{
		if (!__LIB_11__.func_106(&uLocal_430, 3))
		{
			Local_474.f_12 = uLocal_430[uLocal_430.f_7];
			return 1;
		}
	}
	return 0;
}

bool func_707(var uParam0, bool bParam1, int iParam2)//Position - 0x5DADB
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__.func_81());
	bVar8 = __LIB_9__.func_987(bParam1);
	uParam0->f_6 = __LIB_0__.func_504(__LIB_38__.func_170());
	Global_23011.f_12 = !uParam0->f_23;
	Global_23011.f_121 = bParam1;
	Global_23011.f_122 = iParam2;
	Global_23011.f_123 = bVar7;
	Global_23011.f_3 = Global_23011.f_2;
	Global_23011.f_70 = 0;
	bVar9 = ((Global_23011.f_104 == 4 || Global_23011.f_104 == 1) || Global_23011.f_104 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		__LIB_26__.func_469(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__.func_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_11__.func_690(iVar10) && __LIB_20__.func_609(iVar10)) && iVar10 == __LIB_0__.func_504(Global_113386.f_2363.f_539.f_4323))
			{
				Global_23011.f_70 = 1;
			}
			else
			{
				Global_23011.f_70 = 0;
			}
		}
		else if (Global_23011.f_12)
		{
			if (!Global_23011.f_70)
			{
				if ((((!PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_18[iVar0]) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID()) || uParam0->f_34[iVar0] == 2) || uParam0->f_24[iVar0] != 0)
				{
					Global_23011.f_70 = 1;
				}
			}
			if (uParam0->f_34[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (uParam0->f_6 == iVar0)
			{
				if (uParam0->f_34[iVar0] == 1 || uParam0->f_34[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (uParam0->f_8[iVar0])
			{
				if (uParam0->f_39 && uParam0->f_7 == iVar0)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_34[iVar0] == 3)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_23) && !uParam0->f_34[iVar0] == 2)
				{
					uParam0->f_8[iVar0] = 0;
				}
			}
			Global_23011.f_49[iVar0] = uParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0])) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				Global_23011.f_71[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_23011.f_71[iVar0] != -1 && IntToFloat(Global_23011.f_71[iVar0]) < 25f) || uParam0->f_13[iVar0])
			{
				if (uParam0->f_6 != iVar0)
				{
					Global_23011.f_54[iVar0] = 1;
					Global_23011.f_59[iVar0] = uParam0->f_13[iVar0];
				}
			}
		}
		else
		{
			Global_23011.f_49[iVar0] = uParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
		}
		if (Global_23011.f_124)
		{
			Global_23011.f_19[iVar2] = iVar1;
			Global_23011.f_24[iVar2] = uVar3;
			Global_23011.f_29[iVar2] = uVar4;
			Global_23011.f_34[iVar0] = 0;
			Global_23011.f_44[iVar0] = 0;
			Global_23011.f_39[iVar0] = 0;
			if (bVar9)
			{
				if (Global_23011.f_12)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0]))
					{
						Global_23011.f_76[iVar0] = PED::GET_PED_ARMOUR((*uParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						Global_23011.f_81[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], true) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_9__.func_603() || __LIB_0__.func_39(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__.func_39(14))
		{
			if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_34[iVar0] == 3)
			{
				Global_23011.f_69 = iVar2;
				Global_23011.f_14 = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_6__.func_854(0) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(3) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(2) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(9) || Global_23011.f_12) || __LIB_0__.func_39(14))) && ((!__LIB_6__.func_854(10) || Global_23011.f_12) || __LIB_0__.func_39(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__.func_39(14))
				{
					if (Global_23011.f_69 == 0)
					{
						Global_23011.f_11 = __LIB_11__.func_178(uParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_11__.func_178(uParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_11__.func_178(uParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_11__.func_178(uParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = func_519(uParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = func_519(uParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_26__.func_374(uParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = func_519(uParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__.func_303(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
				{
					if (uParam0->f_34[0] == 3)
					{
						iVar11 = 0;
					}
					else if (uParam0->f_34[1] == 3)
					{
						iVar11 = 1;
					}
					else if (uParam0->f_34[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = __LIB_38__.func_170();
					}
					switch (iVar11)
					{
						case 0:
							if (uParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (uParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = true;
								bVar13 = 2;
							}
							break;
						case 1:
							if (uParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (uParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = 2;
								bVar13 = false;
							}
							break;
						case 2:
							if (uParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (uParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = false;
								bVar13 = true;
							}
							break;
					}
					bVar15 = true;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/))
							{
								bVar15 = false;
								if (iVar11 != 0)
								{
									if (func_519(uParam0, 0))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (func_519(uParam0, 1))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (func_519(uParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (func_519(uParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_519(uParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_519(uParam0, bVar14))
						{
							Global_23011.f_11 = 1;
						}
					}
				}
			}
		}
	}
	if (Global_23011.f_11)
	{
		Global_23011.f_125 = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_23011.f_11;
}

void func_725()//Position - 0x5F0FE
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_32__.func_829("FH1_TIME", 1, 14, 45, 0, 1);
	}
}

void func_730()//Position - 0x5F30A
{
	struct<3> Var0;
	float fVar1;
	if (bLocal_2549 == 1)
	{
		if (iLocal_2544 == 0)
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
				func_270(iLocal_2550);
			}
		}
		else if (iLocal_2544 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_954();
			__LIB_11__.func_701(&uLocal_627);
			__LIB_32__.func_669(20);
			__LIB_0__.func_313(20);
			if (!__LIB_0__.func_295())
			{
				func_951(iLocal_2550, &Var0, &fVar1, Global_100441.f_12[2]);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_11__.func_727(&uLocal_627, Var0, 25f, 0);
			}
			func_277(iLocal_2545, 1);
			while (!__LIB_26__.func_476(&uLocal_627))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_2545)
			{
				case 0:
					func_945();
					break;
				case 1:
					func_944();
					break;
				case 2:
					func_942();
					break;
				case 3:
					func_941();
					break;
				case 4:
					func_940();
					break;
				case 5:
					func_939();
					break;
				case 6:
					func_936();
					break;
				case 7:
					func_732();
					break;
			}
			func_731();
			bLocal_2549 = false;
			if (!__LIB_0__.func_295())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_731()//Position - 0x5F469
{
	PLAYER::SET_MAX_WANTED_LEVEL(2);
	if (ENTITY::DOES_ENTITY_EXIST(func_175()))
	{
		if (PLAYER::PLAYER_PED_ID() != func_175())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_175(), iLocal_416);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_176()))
	{
		if (PLAYER::PLAYER_PED_ID() != func_176())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_176(), iLocal_416);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_173()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_173(), iLocal_416);
	}
	if (__LIB_11__.func_720(func_255()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_255(), iLocal_416);
		PED::SET_PED_MOVEMENT_CLIPSET(func_255(), "move_lester_CaneUp", 0.25f);
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(func_255(), "move_lester_CaneUp");
	}
	if (__LIB_11__.func_720(Local_217[0 /*2*/]))
	{
		ENTITY::SET_ENTITY_COLLISION(Local_217[0 /*2*/], true, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_217[0 /*2*/], true);
	}
	if (__LIB_11__.func_720(Local_217[1 /*2*/]))
	{
		ENTITY::SET_ENTITY_COLLISION(Local_217[1 /*2*/], true, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_217[1 /*2*/], true);
	}
	if (PLAYER::PLAYER_PED_ID() == func_176())
	{
		if (__LIB_11__.func_720(func_175()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_175(), true);
		}
		if (__LIB_11__.func_720(func_255()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_255(), true);
		}
		if (__LIB_11__.func_720(Local_217[2 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[2 /*2*/], true);
		}
		if (__LIB_11__.func_720(Local_217[1 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[1 /*2*/], true);
		}
		if (__LIB_11__.func_720(func_176()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_176(), false);
		}
		if (__LIB_11__.func_720(func_173()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_173(), false);
		}
		if (__LIB_11__.func_720(Local_217[0 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[0 /*2*/], false);
		}
	}
	else if (PLAYER::PLAYER_PED_ID() == func_175())
	{
		if (__LIB_11__.func_720(func_175()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_175(), false);
		}
		if (__LIB_11__.func_720(func_255()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_255(), false);
		}
		if (__LIB_11__.func_720(Local_217[2 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[2 /*2*/], false);
		}
		if (__LIB_11__.func_720(Local_217[1 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[1 /*2*/], false);
		}
		if (__LIB_11__.func_720(func_176()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_176(), true);
		}
		if (__LIB_11__.func_720(func_173()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_173(), true);
		}
		if (__LIB_11__.func_720(Local_217[0 /*2*/]))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_217[0 /*2*/], true);
		}
	}
	iLocal_610 = 1;
}

void func_732()//Position - 0x5F698
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_100441.f_12[2] == 1)
		{
			while (!__LIB_40__.func_993(&(Local_217[1 /*2*/]), 2, 1759.54f, 3290.2327f, 40.1387f, 259.1121f, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
			Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1744.3944f, 3269.2964f, 40.2207f, 359.9513f, true, true, false);
			__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
			VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(Local_217[2 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
			}
		}
		else
		{
			func_733(1, 1, 1);
			Local_218[1 /*4*/] = PLAYER::PLAYER_PED_ID();
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(0, -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
	func_3();
}

int func_733(int iParam0, bool bParam1, bool bParam2)//Position - 0x5F799
{
	if (bParam1)
	{
		while (!func_734(iParam0, bParam2))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!func_734(iParam0, bParam2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			Local_218[0 /*4*/] = PLAYER::PLAYER_PED_ID();
			__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 0, 1);
			break;
		case 1:
			Local_218[1 /*4*/] = PLAYER::PLAYER_PED_ID();
			__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 0, 1);
			break;
		case 2:
			Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
			__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 0, 1);
			break;
	}
	return 1;
}

int func_734(int iParam0, bool bParam1)//Position - 0x5F846
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__.func_388(iParam0);
	iVar1 = __LIB_20__.func_783(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_933(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_737(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_590(&Global_22965, 0, 0, 0);
	__LIB_6__.func_846(iParam0);
	return 1;
}

int func_737(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5FA04
{
	int iVar0;
	if (__LIB_0__.func_317(iParam1))
	{
		iVar0 = __LIB_20__.func_783(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_32__.func_735(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_925(*iParam0);
			func_915(*iParam0, 1, 0);
			func_914(*iParam0);
			func_911(*iParam0);
			func_739(*iParam0, bParam6);
			__LIB_0__.func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_739(int iParam0, bool bParam1)//Position - 0x5FB1C
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_10__.func_3(iVar0))
	{
		__LIB_10__.func_2(iVar0, 0);
		func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_743(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__.func_843(iParam0))
		{
			__LIB_10__.func_2(iVar0, 0);
			func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_743(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_409(iParam0, 3, 169))
					{
						func_484(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_409(iParam0, 12, 6))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 20))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 21))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 22))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 11))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 12, 10))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 12, 50))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 14, 59))
			{
				func_484(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_409(iParam0, 8, 22))
			{
				func_484(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_409(iParam0, 12, 14))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_409(iParam0, 12, 13))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 14))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 15))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 4))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 12, 3))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 14, 82))
			{
				func_484(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_409(iParam0, 8, 76))
			{
				func_484(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_409(iParam0, 12, 1))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_409(iParam0, 12, 12))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 12, 15))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_409(iParam0, 3, 71))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 18))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 19))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_409(iParam0, 12, 7))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 12, 6))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_409(iParam0, 14, 88))
			{
				func_484(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_409(iParam0, 8, 17))
			{
				func_484(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_409(iParam0, 12, 11))
			{
				func_484(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_743(int iParam0, int iParam1)//Position - 0x602AE
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_32__.func_823(iParam0);
		if (__LIB_0__.func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_488(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__.func_1(iVar0);
					func_745(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_189(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				func_613();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
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

void func_745(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x6052A
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
		iVar0 = __LIB_32__.func_823(iParam0);
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
		if (__LIB_0__.func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_396(iParam0, iVar1, &iVar2, 0))
			{
				func_484(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_394(iParam0, iVar1, &iVar2))
			{
				func_484(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_906(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_748(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_748(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_748(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
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

int func_748(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x60A06
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_867(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_867(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_867(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_748(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_867(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_866(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_748(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_860(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_867(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_748(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_867(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_748(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_852(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_748(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_748(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
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
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_851(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_748(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_748(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_748(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_748(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_748(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_748(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_748(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_860(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_851(iVar5, func_866(iParam0, 8, -1), iParam2, func_866(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_790(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_851(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_860(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_851(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
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
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_748(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_748(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_851(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_851(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_748(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_851(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_748(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_767(iParam0, 9, iVar63))
						{
							func_748(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_748(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_748(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_748(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_866(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_866(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_748(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_748(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_748(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_748(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_748(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_748(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_748(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_748(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_748(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_748(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_852(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_748(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_748(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_749(iParam0, &uVar4))
		{
			func_748(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_748(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_748(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_748(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_866(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_748(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_749(int iParam0, var uParam1)//Position - 0x628B0
{
	int iVar0;
	int iVar1;
	*uParam1 = func_866(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_767(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_767(int iParam0, int iParam1, int iParam2)//Position - 0x66B60
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
				if (!func_767(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_767(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_767(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_767(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_767(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_767(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_790(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6D88B
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_791(iParam0, bParam3, 0, -1);
}

void func_791(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x6D8D9
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
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_831(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_822(iParam0, iParam3);
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
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
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
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_822(int iParam0, int iParam1)//Position - 0x7CC2A
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_866(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
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
				iVar5 = func_866(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_831(int iParam0, bool bParam1)//Position - 0x7D088
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
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_866(iParam0, 11, -1), 0);
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
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_866(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_866(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_866(iParam0, 11, -1), 0);
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
						iVar8 = func_866(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_866(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_866(iParam0, 11, -1), 0);
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
						iVar12 = func_866(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_851(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x85F3D
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_851(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_851(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
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

void func_852(int iParam0)//Position - 0x87278
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
		if (!func_857(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__.func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__.func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__.func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__.func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__.func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_857(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_857(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x87C42
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_866(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_860(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8A640
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_906(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_866(int iParam0, int iParam1, int iParam2)//Position - 0x8A8F1
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
				if (func_767(iParam0, iParam1, iVar0))
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
				if (func_767(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_867(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8A992
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
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_867(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_867(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_867(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_867(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_867(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_867(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_867(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_867(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_867(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_867(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_906(int iParam0)//Position - 0xA3636
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_866(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_866(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

void func_911(int iParam0)//Position - 0xA3C09
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<6> Var3;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS(iParam0);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar2 = false;
			while (bVar2 < 32)
			{
				if (BitTest(Global_113386.f_2363.f_493[iVar0 /*15*/].f_10[iVar1], bVar2))
				{
					if (__LIB_6__.func_785(&Var3, __LIB_0__.func_360(iVar1, bVar2), __LIB_10__.func_4(iVar0), iParam0, -1))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var3.f_4, Var3.f_5);
					}
				}
				bVar2++;
			}
			iVar1++;
		}
	}
}

void func_914(int iParam0)//Position - 0xA3D04
{
	int iVar0;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		PED::ADD_ARMOUR_TO_PED(iParam0, (Global_113386.f_2363.f_539.f_294[iVar0] - PED::GET_PED_ARMOUR(iParam0)));
	}
}

void func_915(int iParam0, bool bParam1, bool bParam2)//Position - 0xA3D47
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_24__.func_936(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_113386.f_2363.f_539.f_1763 || (Global_113386.f_2363.f_539.f_1763 == -1 && iVar1 == 4))
				{
					if (Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][iVar0] != 0 && Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][iVar0] != joaat("WEAPON_MOLOTOV"))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][iVar0], false))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][iVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			STATS::STAT_GET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		else if (iVar0 == 1)
		{
			STATS::STAT_GET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		else if (iVar0 == 2)
		{
			STATS::STAT_GET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), iVar2);
	}
}

void func_925(int iParam0)//Position - 0xA4A92
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_32__.func_823(iParam0);
	if (__LIB_0__.func_317(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__.func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_745(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_488(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_926(__LIB_20__.func_783(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_488(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_488(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_926(__LIB_20__.func_783(0), 3, 70, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 3, 71, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 3, 72, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 3, 73, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 3, 74, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 3, 75, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 4, 41, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 4, 42, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 4, 43, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 4, 44, 1, 0, 0, 0);
					func_926(__LIB_20__.func_783(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_488(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__.func_1(iVar0);
				func_745(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_926(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0xA4CEF
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_929(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_929(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xA4EAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_929(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_929(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_929(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_929(iParam0, 14, iVar5, 1, 0);
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
								func_929(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_929(iParam0, 14, 17, 1, 0);
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

int func_933(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA548F
{
	int iVar0;
	if (__LIB_0__.func_317(iParam1))
	{
		iVar0 = __LIB_20__.func_783(iParam1);
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
				__LIB_32__.func_735(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_925(*iParam0);
				func_915(*iParam0, 1, 0);
				func_914(*iParam0);
				func_911(*iParam0);
				func_739(*iParam0, bParam6);
				__LIB_0__.func_349(*iParam0);
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

void func_936()//Position - 0xA562E
{
	func_733(2, 1, 1);
	Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
	iLocal_414 = INTERIOR::GET_INTERIOR_AT_COORDS(12.8829f, -634.9265f, 15.0884f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_414))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_414);
	}
	Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 7.0467f, -614.5734f, 61.0681f, 187.9638f, true, true, false);
	__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_217[2 /*2*/], true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_217[2 /*2*/]);
	VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
	while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[2 /*2*/], 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
	while (!__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, Local_200, fLocal_201, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[0 /*4*/]), 0, Local_217[0 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[1 /*4*/]), 1, Local_217[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(Local_217[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[2 /*2*/], false))
		{
			PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
		}
	}
	iLocal_575 = 4;
	iLocal_576 = 2;
	func_392(0);
	__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 1, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
	MISC::CLEAR_AREA(59.2427f, -572.2118f, 72.9076f, 300f, true, false, false, false);
	__LIB_11__.func_699(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
}

void func_939()//Position - 0xA591F
{
	func_733(2, 1, 1);
	Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
	Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), -76.4238f, -528.6735f, 87.5f, 176.7705f, true, true, false);
	__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_217[2 /*2*/], true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_217[2 /*2*/]);
	VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
	iLocal_414 = INTERIOR::GET_INTERIOR_AT_COORDS(12.8829f, -634.9265f, 15.0884f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_414))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_414);
	}
	while (!INTERIOR::IS_INTERIOR_READY(iLocal_414))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[2 /*2*/], 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
	while (!__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, Local_200, fLocal_201, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[0 /*4*/]), 0, Local_217[0 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[1 /*4*/]), 1, Local_217[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(Local_217[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
	func_392(0);
	__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 1, 1);
	iLocal_552 = 0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	MISC::CLEAR_AREA(-77.3855f, -591.1019f, 94.5943f, 300f, true, false, false, false);
}

void func_940()//Position - 0xA5B4E
{
	func_733(2, 1, 1);
	Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
	Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1095.7894f, -1421.1515f, 102.4156f, 183.9259f, true, true, false);
	__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_217[2 /*2*/], true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_217[2 /*2*/]);
	VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(1079.2714f, -1998.5048f, 46.6193f, 100f, 0);
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
	}
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "FH1UBER");
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "FH1UBER"))
	{
		SYSTEM::WAIT(0);
	}
	Local_217[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("stockade"), 1025.5339f, -1756.0054f, 35.2748f, 81.9993f, true, true, false);
	Local_218[6 /*4*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_217[3 /*2*/], 26, joaat("S_M_M_Armoured_01"), -1, true, true);
	PED::SET_PED_COMPONENT_VARIATION(Local_218[6 /*4*/], 0, 0, 0, 0);
	while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[2 /*2*/], 1, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
	while (!__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, Local_200, fLocal_201, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[0 /*4*/]), 0, Local_217[0 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[1 /*4*/]), 1, Local_217[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(Local_217[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
	iLocal_624 = 0;
	bLocal_501 = true;
	func_392(0);
	__LIB_0__.func_210("FH1_TRUCK", 7500, 1);
	__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 1, 1);
	MISC::CLEAR_AREA(1041.8492f, -1773.0105f, 110.6172f, 300f, true, false, false, false);
}

void func_941()//Position - 0xA5DE2
{
	CLOCK::SET_CLOCK_TIME(14, 0, 0);
	Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.5278f, 40.7f, 133.1852f, true, true, false);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
	VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
	ENTITY::SET_ENTITY_COLLISION(Local_217[2 /*2*/], true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
	__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
	iLocal_6296 = 1;
	while (!__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, Local_200, fLocal_201, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[1 /*4*/]), 1, Local_217[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__.func_993(&(Local_217[1 /*2*/]), 2, 1768.0714f, 3293.4478f, 40.2011f, 305.798f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (Global_100441.f_12[2] == 0)
	{
		func_733(0, 1, 1);
		Local_218[0 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_933(&(Local_218[2 /*4*/]), 2, Local_217[2 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[2 /*2*/], 1, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
		if (__LIB_11__.func_720(Local_217[0 /*2*/]) && __LIB_11__.func_720(func_176()))
		{
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(Local_217[0 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		func_257(0, 1, 0, 0, 0, 0);
		iLocal_490 = 0;
	}
	else if (Global_100441.f_12[2] == 1)
	{
		func_733(2, 1, 1);
		Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_FLY_TO_TRUCKS"))
		{
			AUDIO::START_AUDIO_SCENE("BS_1_FLY_TO_TRUCKS");
		}
		while (!func_933(&(Local_218[0 /*4*/]), 0, Local_217[0 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[2 /*2*/], 1, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
		if (__LIB_11__.func_720(Local_217[2 /*2*/]) && __LIB_11__.func_720(func_175()))
		{
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(Local_217[2 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[2 /*2*/], -1);
			}
		}
		func_257(0, 1, 0, 0, 0, 0);
		iLocal_490 = 1;
	}
	if (Global_100441.f_12[1] == 1)
	{
		if ((__LIB_0__.func_294() && Global_94618) && (Global_100478 == 3 || Global_100478 == 2))
		{
			Global_100441.f_12[2] = 1;
			iLocal_490 = 0;
		}
		CLOCK::SET_CLOCK_TIME(14, 15, 0);
		iLocal_575 = 3;
		iLocal_529 = 1;
		iLocal_574 = 3;
	}
	else
	{
		CLOCK::SET_CLOCK_TIME(14, 0, 0);
		iLocal_575 = 2;
		iLocal_574 = 2;
	}
	iLocal_610 = 1;
	func_392(0);
	__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 1, 1);
	iLocal_412 = 1;
	iLocal_576 = 1;
	iLocal_574 = 3;
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, true, false, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], false);
	__LIB_11__.func_699(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	func_177(3, "Stage 3: Get in Position", 0, 0, 0, 1);
}

void func_942()//Position - 0xA619A
{
	__LIB_39__.func_465(20, 1702.9482f, 3272.0217f, 40.1539f, 247.3247f);
	__LIB_32__.func_669(20);
	__LIB_0__.func_313(20);
	Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.5278f, 40.7f, 133.1852f, true, true, false);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
	VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
	ENTITY::SET_ENTITY_COLLISION(Local_217[2 /*2*/], true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
	__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
	while (!__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, Local_200, fLocal_201, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[1 /*4*/]), 1, Local_217[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__.func_993(&(Local_217[1 /*2*/]), 2, 1993.6239f, 2541.7837f, 53.6037f, 318.9926f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (Global_100441.f_12[2] == 0)
	{
		func_733(0, 1, 1);
		Local_218[0 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_933(&(Local_218[2 /*4*/]), 2, Local_217[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[1 /*2*/], 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
		if (__LIB_11__.func_720(Local_217[0 /*2*/]) && __LIB_11__.func_720(func_176()))
		{
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(Local_217[0 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		func_257(0, 1, 0, 0, 0, 0);
		iLocal_490 = 0;
	}
	else if (Global_100441.f_12[2] == 1)
	{
		func_733(2, 1, 1);
		Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR"))
		{
			AUDIO::START_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
		}
		while (!func_933(&(Local_218[0 /*4*/]), 0, Local_217[0 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[1 /*2*/], 0, 1))
		{
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
		if (__LIB_11__.func_720(Local_217[1 /*2*/]) && __LIB_11__.func_720(func_175()))
		{
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(Local_217[1 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[1 /*2*/], -1);
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_217[1 /*2*/], 25f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_217[1 /*2*/], true, true, false);
		}
		func_257(0, 1, 0, 0, 0, 0);
		iLocal_490 = 1;
	}
	if (Global_100441.f_12[1] == 1)
	{
		if ((__LIB_0__.func_294() && Global_94618) && (Global_100478 == 3 || Global_100478 == 2))
		{
			Global_100441.f_12[2] = 1;
			iLocal_490 = 0;
		}
		CLOCK::SET_CLOCK_TIME(14, 0, 0);
		iLocal_529 = 1;
		iLocal_574 = 3;
	}
	else
	{
		iLocal_574 = 2;
		CLOCK::SET_CLOCK_TIME(13, 45, 0);
	}
	iLocal_610 = 1;
	func_392(0);
	__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 1, 1);
	iLocal_412 = 0;
	iLocal_575 = 3;
	iLocal_576 = 1;
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, true, false, false, false);
	__LIB_11__.func_699(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	func_177(2, "Stage 2: Back of bank", 0, 0, 0, 1);
}

void func_944()//Position - 0xA65DD
{
	while (!__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, Local_198, fLocal_199, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_933(&(Local_218[1 /*4*/]), 1, Local_217[0 /*2*/], 0, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__.func_993(&(Local_217[1 /*2*/]), 2, 1681.2954f, 1320.678f, 86.0397f, 346.5002f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[1 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	if (Global_100441.f_12[2] == 0)
	{
		func_733(0, 1, 1);
		Local_218[0 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_933(&(Local_218[2 /*4*/]), 2, Local_217[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (__LIB_11__.func_720(func_176()) && __LIB_11__.func_720(Local_217[0 /*2*/]))
		{
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(Local_217[0 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(func_176(), Local_217[0 /*2*/], -1);
			}
		}
	}
	else if (Global_100441.f_12[2] == 1)
	{
		func_733(2, 1, 1);
		Local_218[2 /*4*/] = PLAYER::PLAYER_PED_ID();
		while (!func_933(&(Local_218[0 /*4*/]), 0, Local_217[0 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (__LIB_11__.func_720(func_175()) && __LIB_11__.func_720(Local_217[1 /*2*/]))
		{
			if (__LIB_0__.func_295())
			{
				__LIB_6__.func_775(Local_217[1 /*2*/], -1, 1);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(func_175(), Local_217[1 /*2*/], -1);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_217[1 /*2*/], 5f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_217[1 /*2*/], 25f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_217[1 /*2*/], true, true, false);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BS_1_SWITCH_TO_TREVOR"))
		{
			AUDIO::START_AUDIO_SCENE("BS_1_SWITCH_TO_TREVOR");
		}
	}
	__LIB_0__.func_203(&uLocal_219, 0, func_175(), "TREVOR", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 1, func_176(), "MICHAEL", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 2, func_173(), "FRANKLIN", 1, 1);
	__LIB_0__.func_203(&uLocal_219, 3, func_255(), "LESTER", 1, 1);
	Local_217[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("frogger2"), 1758.309f, 3284.5278f, 40.7f, 133.1852f, true, true, false);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
	ENTITY::SET_ENTITY_ALWAYS_PRERENDER(Local_217[2 /*2*/], true);
	VEHICLE::SET_VEHICLE_LIVERY(Local_217[2 /*2*/], 1);
	ENTITY::SET_ENTITY_COLLISION(Local_217[2 /*2*/], true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_217[2 /*2*/], true);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_217[2 /*2*/], false);
	__LIB_20__.func_611(&uLocal_627, joaat("frogger2"));
	func_392(0);
	if ((((__LIB_0__.func_294() && Global_100478 == 1) && Global_100441.f_12[0] == 1) && !Global_94618) && !bLocal_2551)
	{
		CLOCK::SET_CLOCK_TIME(13, 15, 0);
	}
	else
	{
		CLOCK::SET_CLOCK_TIME(12, 45, 0);
	}
	iLocal_610 = 1;
	func_257(0, 1, 0, 0, 0, 0);
	iLocal_490 = 1;
	iLocal_412 = 0;
	iLocal_575 = 0;
	iLocal_576 = 1;
	iLocal_574 = 1;
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, true, false, false, false);
	__LIB_11__.func_699(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	func_177(1, "Stage 1: Front of bank", 0, 0, 0, 1);
}

void func_945()//Position - 0xA6950
{
	CLOCK::SET_CLOCK_TIME(12, 0, 0);
	func_733(0, 1, 1);
	Local_218[0 /*4*/] = PLAYER::PLAYER_PED_ID();
	STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
	while (!STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__.func_993(&(Local_217[0 /*2*/]), 0, 90.3864f, -1278.8374f, 28.0896f, 98.4832f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_737(&(Local_218[1 /*4*/]), 1, 94.5331f, -1277.5521f, 28.1446f, 15.2302f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_40__.func_993(&(Local_217[1 /*2*/]), 2, 83.4733f, -1281.3232f, 29.1518f, 96.9356f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	ENTITY::SET_ENTITY_COLLISION(Local_217[1 /*2*/], true, false);
	while (!func_933(&(Local_218[2 /*4*/]), 2, Local_217[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_20__.func_442(&(Local_218[3 /*4*/]), 12, Local_217[1 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_PROP_INDEX(Local_218[3 /*4*/], 1, 0, 0, false);
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	iLocal_610 = 1;
	iLocal_412 = 0;
	iLocal_575 = 0;
	iLocal_576 = 0;
	iLocal_574 = 0;
	MISC::CLEAR_AREA_OF_PEDS(97.6772f, -1290.739f, 28.2688f, 300f, 0);
	__LIB_11__.func_699(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
}

void func_951(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0xA75AC
{
	if (iParam3 == 0)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 92.0847f, -1280.7062f, 28.1447f };
				*uParam2 = 73.3971f;
				break;
			case 1:
				*uParam1 = { Local_198 };
				*uParam2 = fLocal_199;
				break;
			case 2:
				*uParam1 = { Local_200 };
				*uParam2 = fLocal_201;
				break;
			case 3:
				*uParam1 = { Local_200 };
				*uParam2 = fLocal_201;
				break;
			case 4:
				*uParam1 = { 1095.7894f, -1421.1515f, 37.5f };
				*uParam2 = -168f;
				break;
			case 5:
				*uParam1 = { -76.4238f, -528.6735f, 80f };
				*uParam2 = 176.7705f;
				break;
			case 6:
				*uParam1 = { 7.0467f, -614.5734f, 61.0681f };
				*uParam2 = 187.9638f;
				break;
			case 7:
				*uParam1 = { 19.2811f, 534.3147f, 173.6274f };
				*uParam2 = 189.0861f;
				break;
		}
	}
	else if (iParam3 == 1)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 92.0847f, -1280.7062f, 28.1447f };
				*uParam2 = 73.3971f;
				break;
			case 1:
				*uParam1 = { 1681.2954f, 1320.678f, 86.0397f };
				*uParam2 = 346.5002f;
				break;
			case 2:
				*uParam1 = { 1993.6239f, 2541.7837f, 53.6037f };
				*uParam2 = 318.9926f;
				break;
			case 3:
				*uParam1 = { 1758.309f, 3284.5278f, 40.7f };
				*uParam2 = 133.1852f;
				break;
			case 4:
				*uParam1 = { 1095.7894f, -1421.1515f, 37.5f };
				*uParam2 = -168f;
				break;
			case 5:
				*uParam1 = { -76.4238f, -528.6735f, 80f };
				*uParam2 = 176.7705f;
				break;
			case 6:
				*uParam1 = { 7.0467f, -614.5734f, 61.0681f };
				*uParam2 = 187.9638f;
				break;
			case 7:
				*uParam1 = { 1759.54f, 3290.2327f, 40.1387f };
				*uParam2 = 259.1121f;
				break;
			}
	}
}

void func_954()//Position - 0xA7A56
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
	if (!__LIB_0__.func_295())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::STREAMVOL_IS_VALID(iLocal_409))
		{
			STREAMING::STREAMVOL_DELETE(iLocal_409);
		}
	}
	iLocal_524 = 0;
	while (iLocal_524 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_218[iLocal_524 /*4*/]) && !PED::IS_PED_INJURED(Local_218[iLocal_524 /*4*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_218[iLocal_524 /*4*/], false))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_218[iLocal_524 /*4*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_218[iLocal_524 /*4*/], false), true) + Vector(0f, -2f, 0f));
			}
			if (Local_218[iLocal_524 /*4*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::DELETE_PED(&(Local_218[iLocal_524 /*4*/]));
			}
		}
		iLocal_524++;
	}
	iLocal_524 = 0;
	while (iLocal_524 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_217[iLocal_524 /*2*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_217[iLocal_524 /*2*/]));
		}
		iLocal_524++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_411))
		{
			ENTITY::DETACH_ENTITY(iLocal_411, true, true);
		}
		__LIB_0__.func_123(&iLocal_411);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_410))
	{
		OBJECT::DELETE_OBJECT(&iLocal_410);
	}
	func_306(0, 1);
	func_385();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_624 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.8f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_408);
	TASK::CLEAR_SEQUENCE_TASK(&(Local_218[4 /*4*/].f_2));
	TASK::CLEAR_SEQUENCE_TASK(&(Local_218[5 /*4*/].f_2));
	iLocal_517 = MISC::GET_GAME_TIMER();
	iLocal_489 = MISC::GET_GAME_TIMER();
	__LIB_35__.func_211(&bLocal_205, 0, 0);
	CAM::STOP_GAMEPLAY_HINT(true);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	iLocal_490 = 0;
	iLocal_495 = 0;
	iLocal_496 = 0;
	iLocal_497 = 0;
	iLocal_570 = 0;
	iLocal_569 = 0;
	iLocal_571 = 0;
	bLocal_501 = false;
	iLocal_609 = 0;
	iLocal_610 = 0;
	iLocal_567 = 1;
	iLocal_505 = 1;
	iLocal_529 = 0;
	iLocal_568 = 0;
	iLocal_499 = 0;
	iLocal_500 = 0;
	iLocal_565 = 0;
	iLocal_566 = 0;
	bLocal_528 = false;
	iLocal_6323 = 0;
	__LIB_20__.func_784(&Local_474);
	iLocal_572 = 0;
	iLocal_573 = 0;
	iLocal_577 = 0;
	iLocal_599 = MISC::GET_GAME_TIMER();
	iLocal_601 = 0;
	iLocal_604 = 0;
	iLocal_602 = 0;
	StringCopy(&cLocal_578, "", 24);
	StringCopy(&cLocal_582, "", 24);
	StringCopy(&Local_596, "", 24);
	StringCopy(&Local_597, "", 24);
	iLocal_598 = 0;
	StringCopy(&cLocal_587, "", 24);
	StringCopy(&cLocal_591, "", 24);
	iLocal_595 = 0;
	iLocal_614 = 0;
	iLocal_616 = 0;
	iLocal_617 = 0;
	iLocal_618 = 0;
	iLocal_620 = 0;
	iLocal_615 = 0;
	bLocal_619 = false;
	bLocal_621 = false;
	iLocal_2540 = 0;
	iLocal_2541 = 0;
	iLocal_2542 = 0;
	iLocal_2543 = 0;
	iLocal_552 = 0;
	AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
	func_8(0);
	AUDIO::STOP_SOUND(iLocal_564);
	AUDIO::STOP_SOUND(iLocal_563);
	CAM::DESTROY_ALL_CAMS(false);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_551);
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if (iLocal_414 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_414);
	}
	if (iLocal_413 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_413);
	}
	if (iLocal_415 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_415);
	}
	__LIB_0__.func_296();
	__LIB_18__.func_192(&Local_384, 1, 0);
	__LIB_20__.func_615(&Local_384, 0);
	if (HUD::DOES_BLIP_EXIST(iLocal_404))
	{
		HUD::REMOVE_BLIP(&iLocal_404);
	}
	__LIB_0__.func_202(&uLocal_219, 0);
	__LIB_0__.func_202(&uLocal_219, 1);
	__LIB_0__.func_202(&uLocal_219, 2);
	__LIB_0__.func_202(&uLocal_219, 3);
}

void func_956()//Position - 0xA7DD5
{
	switch (iLocal_2544)
	{
		case 1:
			iLocal_2544 = 2;
			iLocal_2546 = -1;
			break;
		case 2:
			iLocal_2544 = 3;
			iLocal_2546 = 0;
			iLocal_2545 = iLocal_2547;
			break;
		case 3:
			iLocal_2547 = -1;
			iLocal_2544 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_2548) > 2500)
			{
				iLocal_2548 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_957(var uParam0)//Position - 0xA7E3C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] != -1 && (uParam0[iVar0 /*82*/])->f_17[iVar1] != -1)
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_17.f_13[iVar1], (uParam0[iVar0 /*82*/])->f_17[iVar1], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
							(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
						}
						iVar1++;
					}
					iVar2 = 0;
					while (iVar2 < 9)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] != -1 && (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] != -1)
						{
							CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_17.f_39[iVar2], (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] = -1;
							(uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] = -1;
						}
						iVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_16 = 0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_958(uParam0);
	}
}

void func_958(var uParam0)//Position - 0xA7F9C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_16 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + 1);
	}
}

void func_960()//Position - 0xA8018
{
	struct<3> Var0;
	var uVar1;
	iLocal_490 = 0;
	iLocal_563 = AUDIO::GET_SOUND_ID();
	iLocal_564 = AUDIO::GET_SOUND_ID();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_416);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_417);
	PED::ADD_RELATIONSHIP_GROUP("BUDDY", &iLocal_416);
	PED::ADD_RELATIONSHIP_GROUP("GUARD", &iLocal_417);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_416, iLocal_416);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_416);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_416, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_417, iLocal_417);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), iLocal_417);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_417, joaat("PLAYER"));
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(10, false);
	MISC::ENABLE_DISPATCH_SERVICE(9, false);
	__LIB_6__.func_770(20, 0);
	__LIB_18__.func_191(97, 1, 0, 1, 0);
	__LIB_18__.func_191(90, 1, 0, 1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), true);
	__LIB_0__.func_367(1);
	PLAYER::SET_MAX_WANTED_LEVEL(2);
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	__LIB_18__.func_191(180, 0, 0, 1, 0);
	__LIB_41__.func_733(78.4684f, -1295.3275f, 28.169f, 29.1546f, 0, 145);
	__LIB_32__.func_824(77.12664f, -1261.7535f, 28.25048f, 104.40543f, -1305.117f, 39.38937f, 40f, 78.4684f, -1295.3275f, 28.169f, 29.1546f, 1, 1, 1, 0, 0);
	__LIB_11__.func_835(2, 0);
	iLocal_610 = 0;
	if (__LIB_0__.func_294() || __LIB_0__.func_2(0))
	{
		if (__LIB_0__.func_294())
		{
			iLocal_2550 = __LIB_0__.func_315();
			if (Global_94618)
			{
				iLocal_2550++;
				if (iLocal_2550 >= 7)
				{
					iLocal_2550 = 7;
				}
			}
			bLocal_2551 = false;
		}
		else if (__LIB_0__.func_2(0))
		{
			iLocal_2550 = 0;
		}
		if (__LIB_0__.func_294())
		{
			func_951(iLocal_2550, &Var0, &uVar1, Global_100441.f_12[2]);
			__LIB_11__.func_728(Var0, uVar1, 1, 0);
		}
		bLocal_2549 = true;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_218[2 /*4*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
				Local_218[2 /*4*/] = Global_96938.f_9[0];
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_218[0 /*4*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[1], true, true);
				Local_218[0 /*4*/] = Global_96938.f_9[1];
			}
		}
		func_177(0, "Stage 0: Strip club", 0, 0, 0, 1);
		iLocal_2545 = 0;
		func_277(0, 0);
		Global_100441.f_12[0] = 0;
		Global_100441.f_12[1] = 0;
		Global_100441.f_12[2] = 0;
	}
	iLocal_2546 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}

void func_979(int iParam0)//Position - 0xA9206
{
	if (__LIB_32__.func_823(PLAYER::PLAYER_PED_ID()) == 0)
	{
		Global_100441.f_12[2] = 0;
	}
	else if (__LIB_32__.func_823(PLAYER::PLAYER_PED_ID()) == 2)
	{
		Global_100441.f_12[2] = 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_217[0 /*2*/], false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_217[0 /*2*/], true);
	}
	__LIB_39__.func_465(20, 0f, 0f, 0f, 0f);
	__LIB_18__.func_191(97, 0, 0, 1, 0);
	__LIB_18__.func_191(90, 0, 0, 1, 0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_175()) && !ENTITY::IS_ENTITY_DEAD(func_175(), false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(func_175()))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_175(), true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_255(), false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(func_255()))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_255(), true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_217[2 /*2*/], false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Local_217[2 /*2*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_217[2 /*2*/], true, false);
		}
	}
	__LIB_6__.func_770(20, 1);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	AUDIO::STOP_SOUND(iLocal_564);
	AUDIO::STOP_SOUND(iLocal_563);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	iLocal_524 = 0;
	while (iLocal_524 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_218[iLocal_524 /*4*/]) && !PED::IS_PED_INJURED(Local_218[iLocal_524 /*4*/]))
		{
			if (Local_218[iLocal_524 /*4*/] != PLAYER::PLAYER_PED_ID())
			{
				if (((Local_218[iLocal_524 /*4*/] == Local_218[1 /*4*/] || Local_218[iLocal_524 /*4*/] == Local_218[3 /*4*/]) || Local_218[iLocal_524 /*4*/] == Local_218[0 /*4*/]) || Local_218[iLocal_524 /*4*/] == Local_218[2 /*4*/])
				{
					__LIB_0__.func_0(&(Local_218[iLocal_524 /*4*/]));
				}
				else
				{
					__LIB_0__.func_124(&(Local_218[iLocal_524 /*4*/]), 1, 0, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_218[iLocal_524 /*4*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_218[iLocal_524 /*4*/].f_1));
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_218[iLocal_524 /*4*/].f_3, false);
		}
		iLocal_524++;
	}
	iLocal_524 = 0;
	while (iLocal_524 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_217[iLocal_524 /*2*/]))
		{
			__LIB_0__.func_106(&(Local_217[iLocal_524 /*2*/]));
		}
		iLocal_524++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_410))
	{
		OBJECT::DELETE_OBJECT(&iLocal_410);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_411))
		{
			ENTITY::DETACH_ENTITY(iLocal_411, true, true);
		}
		__LIB_0__.func_123(&iLocal_411);
	}
	func_392(1);
	CAM::DESTROY_ALL_CAMS(false);
	STREAMING::CLEAR_FOCUS();
	__LIB_20__.func_784(&Local_474);
	AUDIO::TRIGGER_MUSIC_EVENT("FH1_FAIL");
	func_8(0);
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	STREAMING::STREAMVOL_DELETE(iLocal_409);
	STREAMING::NEW_LOAD_SCENE_STOP();
	AUDIO::RELEASE_SOUND_ID(iLocal_564);
	AUDIO::RELEASE_SOUND_ID(iLocal_563);
	if (iLocal_415 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_415);
	}
	if (iLocal_413 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_413);
	}
	if (iLocal_414 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_414);
	}
	__LIB_0__.func_296();
	__LIB_18__.func_192(&Local_384, 1, 0);
	__LIB_20__.func_615(&Local_384, 0);
	if (HUD::DOES_BLIP_EXIST(iLocal_404))
	{
		HUD::REMOVE_BLIP(&iLocal_404);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_551);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Armoured_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bulldozer"));
	STREAMING::REMOVE_ANIM_DICT("missbigscore1guard_wait_rifle");
	if (CAM::IS_SCREEN_FADED_OUT() && iParam0)
	{
		CAM::DO_SCREEN_FADE_IN(2000);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_35__.func_211(&bLocal_205, 0, 0);
	CAM::STOP_GAMEPLAY_HINT(true);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_306(0, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_624 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_408);
	TASK::CLEAR_SEQUENCE_TASK(&(Local_218[4 /*4*/].f_2));
	TASK::CLEAR_SEQUENCE_TASK(&(Local_218[5 /*4*/].f_2));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), false);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(534.7286f, -1144.51f, 8.0146f, 243.1961f, -560.9398f, 65.814f, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_12__.func_150();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	__LIB_0__.func_367(0);
}

void func_981()//Position - 0xA9649
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_296(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_40__.func_606();
		}
	}
}

