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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	bool bLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	float fLocal_71[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_72[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_73[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_74[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_75[150] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	float fLocal_80[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_81[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_82[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_83[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_84[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_88[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_89[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
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
	int iLocal_111[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_112[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_113[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_114[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_115[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_117[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	struct<3> Local_135[150];
	struct<3> Local_136[50];
	struct<3> Local_137[25];
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	struct<3> Local_147 = { 0, 0, 0 } ;
	struct<3> Local_148 = { 0, 0, 0 } ;
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_150 = { 0, 0, 0 } ;
	char cLocal_151[64] = "";
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_163[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167[150] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_168[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_169[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_170[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	var uLocal_175 = 8;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	struct<61> Local_200 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_201 = 0;
	int* iLocal_202 = NULL;
	int* iLocal_203 = NULL;
	int* iLocal_204 = NULL;
	int* iLocal_205 = NULL;
	struct<3> Local_206 = { 0, 0, 0 } ;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int* iLocal_211 = NULL;
	int* iLocal_212 = NULL;
	var uLocal_213[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_214[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_215 = 10;
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
	struct<3> Local_244 = { 0, 0, 0 } ;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
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
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	struct<3> Local_280 = { 0, 0, 0 } ;
	struct<3> Local_281 = { 0, 0, 0 } ;
	struct<3> Local_282 = { 0, 0, 0 } ;
	struct<3> Local_283 = { 0, 0, 0 } ;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	float fLocal_288 = 0f;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	var uLocal_300 = 6;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int* iLocal_311 = NULL;
	struct<6> Local_312[3];
	struct<6> Local_313 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_314[10];
	struct<9> Local_315[4];
	struct<6> Local_316 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	struct<9> Local_320[6];
	struct<6> Local_321[10];
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	bool bLocal_325 = 0;
	bool bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	bool bLocal_330 = 0;
	int iLocal_331 = 0;
	bool bLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	float fLocal_336 = 0f;
	float fLocal_337 = 0f;
	float fLocal_338 = 0f;
	float fLocal_339 = 0f;
	struct<3> Local_340 = { 0, 0, 0 } ;
	struct<3> Local_341 = { 0, 0, 0 } ;
	struct<3> Local_342 = { 0, 0, 0 } ;
	var uLocal_343 = 15;
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
	int iLocal_395 = 0;
	var uLocal_396 = 16;
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
	var uLocal_563 = -1;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 1000;
	var uLocal_571 = 1000;
	var uLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	struct<61> Local_578 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	bLocal_40 = true;
	bLocal_47 = true;
	bLocal_69 = true;
	fLocal_90 = 120f;
	fLocal_91 = 0f;
	fLocal_93 = 1f;
	fLocal_94 = 0f;
	fLocal_95 = 1f;
	fLocal_96 = 30f;
	fLocal_98 = 1f;
	fLocal_99 = 5f;
	fLocal_100 = 1f;
	fLocal_101 = 1f;
	fLocal_102 = 100f;
	fLocal_103 = 100f;
	fLocal_104 = 0f;
	fLocal_105 = 7000f;
	fLocal_106 = 0f;
	fLocal_107 = 0f;
	fLocal_108 = 0.3f;
	fLocal_109 = 0.5f;
	fLocal_110 = 50f;
	iLocal_121 = -1;
	iLocal_129 = -1;
	iLocal_130 = -1;
	uLocal_185 = __LIB_2__::func_910(50);
	iLocal_186 = joaat("pcj");
	iLocal_191 = 1;
	iLocal_192 = 65;
	iLocal_193 = 49;
	iLocal_194 = 64;
	iLocal_198 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_199 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_291 = 1f;
	fLocal_337 = 0f;
	fLocal_338 = 0f;
	fLocal_339 = 0f;
	Local_340 = { 695.8621f, 12.6177f, 83.1933f };
	Local_341 = { 341.917f, -409.2796f, 44.1959f };
	Local_342 = { 345.3037f, -406.1878f, 44.1304f };
	Local_200 = { ScriptParam_578 };
	__LIB_14__::func_801(&Local_200);
	__LIB_14__::func_841();
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_667(1);
	}
	if (__LIB_0__::func_323())
	{
		Global_78564 = 1;
		iLocal_184 = 0;
		while (!func_663(&Local_200))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
	}
	func_650();
	if (__LIB_0__::func_323())
	{
		iLocal_263 = 1;
		__LIB_14__::func_865(&iLocal_201, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145, 1);
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
		{
			iLocal_264 = 1;
		}
		else
		{
			iLocal_264 = 0;
		}
		iVar0 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_427(375.0581f, 162.2386f, 102.0736f, 342.4705f, 1, 0);
				func_546();
				break;
			case 1:
				__LIB_0__::func_427(336.4843f, 132.4985f, 102.0139f, 249.9272f, 1, 0);
				func_545();
				break;
			case 2:
				__LIB_0__::func_427(366.9862f, -404.5475f, 44.8031f, 105f, 0, 0);
				func_544();
				break;
			case 3:
				__LIB_0__::func_427(366.9862f, -404.5475f, 44.8031f, 105f, 1, 0);
				func_539();
				break;
			}
	}
	__LIB_38__::func_814(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TM", 0);
		__LIB_14__::func_863(Local_200.f_9, 0, 0, 0, 0, 0);
		if (iLocal_284 == 0)
		{
			if (__LIB_0__::func_121(Local_312[0 /*6*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_312[0 /*6*/]))
				{
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_312[0 /*6*/], 0f, 0f, 0.12f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_312[0 /*6*/], false);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_312[0 /*6*/], true);
				}
			}
			if (__LIB_0__::func_121(Local_312[1 /*6*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_312[1 /*6*/]))
				{
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_312[1 /*6*/], 0f, 0f, 0.12f);
				}
			}
			if (__LIB_0__::func_121(Local_312[2 /*6*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_312[2 /*6*/]))
				{
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_312[2 /*6*/], 0f, 0f, 0.12f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_312[2 /*6*/], false);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_312[2 /*6*/], true);
				}
			}
		}
		if (iLocal_285 && MISC::GET_GAME_TIMER() > iLocal_229 + 4000)
		{
			if (__LIB_0__::func_121(Local_312[2 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_312[2 /*6*/], false);
				VEHICLE::SET_VEHICLE_SIREN(Local_312[2 /*6*/], false);
			}
		}
		if (((__LIB_0__::func_692(iLocal_204) && __LIB_0__::func_121(Local_316.f_0)) && __LIB_0__::func_121(iLocal_203)) && PED::IS_PED_IN_VEHICLE(iLocal_204, iLocal_203, false))
		{
			if (TASK::CONTROL_MOUNTED_WEAPON(iLocal_204))
			{
				TASK::SET_MOUNTED_WEAPON_TARGET(iLocal_204, Local_316.f_0, 0, 0f, 0f, 0f, 2, false);
			}
		}
		if (iLocal_256)
		{
			if (__LIB_0__::func_121(Local_313.f_0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_313.f_0, 51f);
			}
		}
		if (iLocal_293 == 6)
		{
			func_514();
		}
		else if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_293)
			{
				case 0:
					func_511();
					break;
				case 1:
					func_510();
					break;
				case 2:
					func_443();
					break;
				case 3:
					func_442();
					break;
				case 4:
					func_348();
					break;
				case 5:
					func_3();
					break;
			}
		}
		else
		{
			func_1(0);
		}
	}
}

void func_1(int iParam0)//Position - 0x4C1
{
	iLocal_395 = iParam0;
	func_2(6);
}

void func_2(int iParam0)//Position - 0x4D3
{
	iLocal_322 = 0;
	iLocal_293 = iParam0;
	iLocal_294 = 0;
}

void func_3()//Position - 0x4E8
{
	struct<6> Var0;
	if (bLocal_330)
	{
		if (__LIB_0__::func_121(Local_312[0 /*6*/]))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_312[0 /*6*/]))
			{
				if (iLocal_236 < 30)
				{
					iLocal_236 = 30;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) > 0.92f)
				{
					if (__LIB_0__::func_692(Local_316.f_0) && !PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
					{
						PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
					}
				}
			}
		}
		iLocal_236++;
		if (ENTITY::IS_ENTITY_DEAD(Local_316.f_0, false) || PED::IS_PED_INJURED(Local_316.f_0))
		{
			func_1(3);
			return;
		}
		else if (iLocal_236 > 30)
		{
			func_1(5);
			return;
		}
	}
	Var0 = { __LIB_13__::func_743() };
	if (__LIB_0__::func_692(Local_315[1 /*9*/]))
	{
		if (__LIB_0__::func_695(Local_312[0 /*6*/]))
		{
			if (!__LIB_1__::func_606(Local_315[1 /*9*/], Local_312[0 /*6*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_315[1 /*9*/], Local_312[0 /*6*/], 0);
			}
		}
	}
	switch (iLocal_294)
	{
		case 0:
			iLocal_329 = 0;
			iLocal_227 = MISC::GET_GAME_TIMER();
			iLocal_254 = 0;
			iLocal_258 = 0;
			__LIB_0__::func_84(800, 0);
			iLocal_294 = 1;
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) > 0.85f)
			{
				if (__LIB_0__::func_692(iLocal_204) && __LIB_0__::func_121(iLocal_203))
				{
					TASK::TASK_HELI_MISSION(iLocal_204, iLocal_203, 0, 0, 123.3842f, -883.9507f, 200f, 4, 200f, -1f, -1f, -1, 100, -1f, 0);
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_203, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_204, true);
					__LIB_0__::func_124(&iLocal_204, 1, 0, 1);
					__LIB_0__::func_106(&iLocal_203);
				}
			}
			func_332(0);
			func_325();
			func_284();
			func_261();
			if (iLocal_276 == 1)
			{
				if (!__LIB_0__::func_77(0) && !__LIB_0__::func_75())
				{
					__LIB_0__::func_222(&uLocal_396, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (__LIB_14__::func_535(&uLocal_396, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_6", 7, 0, 0))
					{
						iLocal_276 = 2;
					}
				}
			}
			if (iLocal_285 == 0)
			{
				if (iLocal_269 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_227 + 3000)
					{
						if (__LIB_3__::func_589(50, "PAP3A_TXT6" /* GXT: Nice! Get out of there before you get busted! */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							iLocal_269 = 1;
						}
					}
				}
				else if (iLocal_254 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_227 + 4000)
					{
						iLocal_254 = 1;
					}
				}
			}
			if (iLocal_309 > 0 && iLocal_284 == 1)
			{
				func_284();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
				{
					if (!__LIB_0__::func_75())
					{
						AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
					}
				}
			}
			if (iLocal_251 == 0)
			{
				if ((__LIB_0__::func_692(Local_315[0 /*9*/]) && __LIB_0__::func_692(Local_316.f_0)) && __LIB_0__::func_695(Local_312[0 /*6*/]))
				{
					if (!__LIB_0__::func_687(Local_316.f_0, PLAYER::PLAYER_PED_ID(), 100f, 1))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_316.f_0) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_315[0 /*9*/]))
						{
							__LIB_0__::func_124(&iLocal_204, 1, 0, 1);
							__LIB_0__::func_106(&iLocal_203);
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_312[0 /*6*/], -1f, false);
							}
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_312[0 /*6*/]);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_316.f_0);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_315[0 /*9*/]);
							if (!PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
							}
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_312[0 /*6*/], true);
							VEHICLE::SET_VEHICLE_SIREN(Local_312[0 /*6*/], false);
							PED::SET_PED_KEEP_TASK(Local_315[0 /*9*/], true);
							iLocal_229 = MISC::GET_GAME_TIMER();
							PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, true, true);
							PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, true, true);
							PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, true, true);
							PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, true, true);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_315[0 /*9*/], Local_312[0 /*6*/], 231.64f, -347.1846f, 43.2866f, 30f, 0, 0, 786469, 20f, 150f);
							iLocal_285 = 1;
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_312[0 /*6*/], true);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							iLocal_251 = 1;
							iLocal_309 = 5;
							iLocal_299[0] = 7;
							iLocal_296 = 6;
						}
					}
				}
			}
			if (iLocal_299[0] == 7)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_229 + 4000)
				{
					if (!__LIB_0__::func_75())
					{
						if (!iLocal_329)
						{
							iLocal_258 = 1;
							iLocal_329 = 1;
						}
						else if (!__LIB_0__::func_75())
						{
							if (__LIB_14__::func_521())
							{
								if (iLocal_236 == 0)
								{
									iLocal_294 = 2;
								}
							}
						}
					}
				}
			}
			else if (bLocal_330 == 1)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_229 + 10000)
				{
					if (!__LIB_0__::func_75())
					{
						if (!iLocal_329)
						{
							iLocal_258 = 1;
							iLocal_329 = 1;
						}
						else if (!__LIB_0__::func_75())
						{
							if (__LIB_14__::func_521())
							{
								if (iLocal_236 == 0)
								{
									iLocal_294 = 2;
								}
							}
						}
					}
				}
			}
			if (iLocal_284 == 1 && !__LIB_0__::func_501("PAP3_POP", 0, 0))
			{
				if (iLocal_235 == 0)
				{
					if (__LIB_0__::func_75())
					{
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_ARREST_8"))
						{
							__LIB_0__::func_638();
							iLocal_235 = 1;
						}
					}
				}
				else if (iLocal_235 == 1)
				{
					if (!__LIB_0__::func_75())
					{
						if (!bLocal_326)
						{
							if (iLocal_271 == 0)
							{
								__LIB_0__::func_229("PAP3_POP", 7500, 1);
								iLocal_271 = 1;
							}
						}
						iLocal_235 = 2;
					}
				}
				else if (iLocal_235 == 2)
				{
					if (!__LIB_0__::func_501("PAP3_POP", 0, 0))
					{
						if (!iLocal_270)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 1) <= 50f)
							{
								if (__LIB_14__::func_782(&uLocal_396, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 0, 0))
								{
									iLocal_270 = 1;
									iLocal_235 = 3;
									iLocal_239 = 0;
									iLocal_240 = 1;
								}
							}
							else if (__LIB_14__::func_782(&uLocal_396, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 1, 0))
							{
								iLocal_270 = 1;
								iLocal_235 = 3;
								iLocal_239 = 1;
								iLocal_240 = 1;
							}
						}
					}
				}
			}
			if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() && !__LIB_0__::func_501("PAP3_POP", 0, 0))
			{
				if (iLocal_235 == 0 || iLocal_235 == 3)
				{
					func_216();
				}
			}
			break;
		case 2:
			if (iLocal_258 == 1)
			{
				__LIB_0__::func_222(&uLocal_396, 3, 0, "BEVERLY", 0, 1);
				__LIB_0__::func_222(&uLocal_396, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				__LIB_17__::func_18(joaat("CALL_PAP3A_DONE"), 0, 2, 50, 3, 6000, 10000, -1, -1, 0, -1, 0);
			}
			iLocal_322 = 0;
			func_4();
			break;
	}
}

void func_4()//Position - 0xB79
{
	if (iLocal_263 == 0)
	{
		if (iLocal_261 == 1)
		{
			__LIB_0__::func_630(803);
		}
	}
	if (iLocal_262 == 1 || iLocal_263 == 1)
	{
		__LIB_0__::func_630(802);
	}
	func_208(1);
	func_5(104, 1);
	func_667(1);
}

void func_5(int iParam0, bool bParam1)//Position - 0xBC1
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_0__::func_775();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_112473[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_6)
	{
		return;
	}
	__LIB_14__::func_873(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	__LIB_14__::func_857(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_330(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_14__::func_792());
	func_33();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_14__::func_860();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_0__::func_716(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_0__::func_716(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_0__::func_716(iParam0, 0, 0);
	}
	__LIB_0__::func_210();
}

void func_33()//Position - 0x1D73
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_0__::func_216(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_151(iVar1, 14, iVar2))
				{
					func_34(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x1E34
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_151(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_34(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_34(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_77(iParam0, iVar0, &iVar7, 0))
	{
		func_37(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_35(iParam0, iVar0, &iVar7))
	{
		func_37(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0x1FF0
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_151(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x20B7
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
										func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_43(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_77(iParam0, iVar10, &iVar4, 1))
							{
								func_37(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_37(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_37(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_37(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_37(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_37(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_37(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_77(iParam0, iVar10, &iVar4, 0))
		{
			func_37(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_35(iParam0, iVar10, &iVar4))
		{
			func_37(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x30F4
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
				if (func_151(iParam0, iParam1, iVar0))
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
				if (func_151(iParam0, iParam1, iVar1))
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

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x98B3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_151(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_151(int iParam0, int iParam1, int iParam2)//Position - 0x1FD97
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
				if (!func_151(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_151(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_151(iParam0, 14, iVar4))
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
			if (!func_151(iParam0, 14, uVar8[iVar7]))
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

void func_208(int iParam0)//Position - 0x272F9
{
	int iVar0;
	__LIB_0__::func_714(&iLocal_311);
	__LIB_0__::func_714(&iLocal_211);
	__LIB_0__::func_714(&iLocal_212);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_0__::func_121(Local_315[iVar0 /*9*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[iVar0 /*9*/], false);
			PED::SET_PED_AS_COP(Local_315[iVar0 /*9*/], true);
		}
		iVar0++;
	}
	if (__LIB_0__::func_692(Local_316.f_0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_316.f_0, false);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
	}
	__LIB_20__::func_822(0);
	__LIB_20__::func_823(0);
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(true);
}

void func_216()//Position - 0x27705
{
	struct<6> Var0;
	struct<6> Var1;
	Var0 = { __LIB_0__::func_486() };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_ARREST") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
		{
			if (iLocal_239 == 0)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 1) > 50f)
				{
					iLocal_241 = 1;
					iLocal_239 = 1;
					iLocal_240 = 1;
				}
			}
			else if (iLocal_239 == 1)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 1) <= 50f)
				{
					iLocal_241 = 0;
					iLocal_239 = 0;
					iLocal_240 = 1;
				}
			}
		}
	}
	if (iLocal_240 == 1)
	{
		Var1 = { __LIB_13__::func_743() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_1"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_2", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_2"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_4", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_3"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_4", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_4"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_6", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_5"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_6", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_6"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_8", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_7"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_8", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_8"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_10", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_9"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_10", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_10"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_11", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_11"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_13", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_12"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_13", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_13"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_15", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_14"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_15", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_15"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_17", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_16"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_17", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_17"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_19", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_18"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_19", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_19"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_21", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_20"))
			{
				StringCopy(&Local_244, "PAP3A_ARREST_21", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3A_ARREST_21"))
			{
				iLocal_240 = 4;
			}
			__LIB_0__::func_638();
			iLocal_240 = 2;
		}
	}
	else if (iLocal_240 == 2)
	{
		if (!__LIB_0__::func_75())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_244))
			{
				if (__LIB_14__::func_782(&uLocal_396, "PAP3AAU", "PAP3A_ARREST", &Local_244, 8, iLocal_241, 0))
				{
					iLocal_240 = 3;
				}
			}
			else
			{
				iLocal_240 = 3;
			}
		}
	}
}

void func_261()//Position - 0x29449
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	fVar1 = 6f;
	if (iLocal_327)
	{
		fVar1 = 4.5f;
	}
	iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (iLocal_285 == 0)
	{
		if (__LIB_0__::func_695(Local_312[0 /*6*/]))
		{
			if (__LIB_0__::func_692(Local_315[0 /*9*/]))
			{
				if (__LIB_0__::func_692(Local_316.f_0))
				{
					if (((__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_315[0 /*9*/], 9f, 1) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 9f, 1)) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_312[0 /*6*/], 9f, 1)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 343.1912f, -402.2201f, 44.2223f, 9f, 9f, 9f, false, true, 0))
					{
						if (!iLocal_333)
						{
							iLocal_333 = 1;
						}
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) >= 0.514839f)
					{
						if (__LIB_17__::func_123(Local_316.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0))
						{
							func_262();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
					{
						if (((__LIB_0__::func_687(iVar2, Local_315[0 /*9*/], fVar1, 1) || __LIB_0__::func_687(iVar2, Local_316.f_0, fVar1, 1)) || __LIB_0__::func_687(iVar2, Local_312[0 /*6*/], fVar1, 1)) || ENTITY::IS_ENTITY_AT_COORD(iVar2, 343.1912f, -402.2201f, 44.2223f, (fVar1 - 1.5f), (fVar1 - 1.5f), (fVar1 - 1.5f), false, true, 0))
						{
							func_262();
						}
					}
					if (((((__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_315[0 /*9*/], fVar1, 1) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_316.f_0, fVar1, 1)) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_312[0 /*6*/], fVar1, 1)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 343.1912f, -402.2201f, 44.2223f, (fVar1 - 1.5f), (fVar1 - 1.5f), (fVar1 - 1.5f), false, true, 0)) || __LIB_17__::func_123(Local_315[0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || __LIB_17__::func_123(Local_315[1 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						func_262();
					}
					if (iLocal_309 > 0 && iLocal_284 == 1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) < 0.9f)
						{
							if (iLocal_273 == 0)
							{
								if ((__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_315[0 /*9*/], 11f, 1) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 11f, 1)) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_312[0 /*6*/], 11f, 1))
								{
									if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_315[1 /*9*/]))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_315[1 /*9*/], "PAP3A_APAA", "Paparazzo3ACop3", "SPEECH_PARAMS_FORCE", false);
									}
									else
									{
										iLocal_273 = 1;
									}
								}
							}
							else if ((!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_315[0 /*9*/], 14f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 14f, 1)) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_312[0 /*6*/], 14f, 1))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_315[1 /*9*/], Local_312[0 /*6*/], false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_315[1 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_315[1 /*9*/], Local_312[0 /*6*/], -1, 0, 2f, 1, 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_IN_VEHICLE(Local_315[1 /*9*/], Local_312[0 /*6*/], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_315[1 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(Local_315[1 /*9*/], Local_312[0 /*6*/], -1, 0, 2f, 1, 0);
							}
						}
						if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_315[0 /*9*/], 15f, 1) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 15f, 1))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 14f)
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_315[0 /*9*/], 10f) || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 10f))
									{
										func_262();
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_284 == 1)
			{
				if (iLocal_309 < 4)
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_312[0 /*6*/], true) };
					if (((Var0.f_0 < (Local_281.f_0 - 0.2f) || Var0.f_0 > (Local_281.f_0 + 0.2f)) || Var0.f_1 < (Local_281.f_1 - 0.2f)) || Var0.f_1 > (Local_281.f_1 + 0.2f))
					{
						func_262();
					}
				}
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			func_262();
		}
	}
}

void func_262()//Position - 0x29904
{
	int iVar0;
	if (bLocal_330 == 0)
	{
		if (__LIB_0__::func_121(Local_312[0 /*6*/]))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) > 0.92f)
			{
				if (__LIB_0__::func_692(Local_316.f_0) && !PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) > 0.975f)
			{
				if (__LIB_0__::func_692(Local_315[0 /*9*/]) && !PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], -1);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_312[0 /*6*/], -1000f, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_312[0 /*6*/]);
			}
		}
		if (__LIB_0__::func_75())
		{
			__LIB_0__::func_429();
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (__LIB_0__::func_121(Local_315[iVar0 /*9*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_315[iVar0 /*9*/], false))
				{
					TASK::TASK_COMBAT_PED(Local_315[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_299[iVar0] = 9;
				}
			}
			iVar0++;
		}
		if (iLocal_296 != 6)
		{
			if (__LIB_0__::func_692(Local_316.f_0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
				{
					fLocal_288 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231);
					if (fLocal_288 < 0.514839f)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_316.f_0, iLocal_231, "rcmpaparazzo_3", "poppy_arrest_popm", 1000f, -1.5f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_231, fLocal_288);
						TASK::TASK_LOOK_AT_ENTITY(Local_316.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					if (fLocal_288 >= 0.514839f && fLocal_288 < 0.667789f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_316.f_0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					}
					if (fLocal_288 >= 0.667789f && fLocal_288 < 0.823092f)
					{
						TASK::TASK_PLAY_ANIM(Local_316.f_0, "rcmpaparazzo_3", "poppy_arrest_popm", 8f, -1.5f, -1, 48, 0.615948f, true, false, false);
						TASK::TASK_LOOK_AT_ENTITY(Local_316.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_316.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 80f, 0f), 1.5f, -1, 0.25f, 0, 40000f);
					}
				}
			}
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
		if (__LIB_0__::func_692(Local_315[0 /*9*/]))
		{
			if (__LIB_0__::func_687(Local_315[0 /*9*/], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_315[0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(Local_315[0 /*9*/]);
					TASK::TASK_COMBAT_PED(Local_315[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		if (__LIB_0__::func_692(Local_315[2 /*9*/]))
		{
			if (__LIB_0__::func_687(Local_315[2 /*9*/], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_315[2 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(Local_315[2 /*9*/]);
					TASK::TASK_COMBAT_PED(Local_315[2 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		if (__LIB_0__::func_692(Local_315[3 /*9*/]))
		{
			if (__LIB_0__::func_687(Local_315[3 /*9*/], PLAYER::PLAYER_PED_ID(), 100f, 1))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_315[3 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(Local_315[3 /*9*/]);
					TASK::TASK_COMBAT_PED(Local_315[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		bLocal_330 = true;
	}
}

void func_284()//Position - 0x2A5E4
{
	if (iLocal_323 == 0)
	{
		if (func_324(0))
		{
			func_323(&Local_313, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_313.f_0, 2);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_313.f_5, true);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_313.f_0, 2.5f);
			VEHICLE::SET_VEHICLE_MOD_KIT(Local_313.f_0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_313.f_0, "P0PPYM15");
			VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_313.f_0, true);
			VEHICLE::SET_VEHICLE_COLOURS(Local_313.f_0, 137, 137);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_313.f_0, 0, 0);
			VEHICLE::SET_VEHICLE_MOD(Local_313.f_0, 11, 2, false);
			VEHICLE::SET_VEHICLE_MOD(Local_313.f_0, 12, 0, false);
			VEHICLE::SET_VEHICLE_MOD(Local_313.f_0, 14, 3, false);
			VEHICLE::SET_VEHICLE_MOD(Local_313.f_0, 23, 6, false);
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_313.f_0, 18, true);
			func_323(&(Local_312[0 /*6*/]), 0);
			func_323(&(Local_312[1 /*6*/]), 0);
			func_323(&(Local_312[2 /*6*/]), 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_312[0 /*6*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_312[1 /*6*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_312[2 /*6*/], true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_312[0 /*6*/].f_5, true);
			func_322(&(Local_315[0 /*9*/]), &(Local_312[0 /*6*/]), 6, 0, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[0 /*9*/], true);
			func_322(&(Local_315[1 /*9*/]), &(Local_312[0 /*6*/]), 6, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[1 /*9*/], true);
			func_322(&(Local_315[2 /*9*/]), &(Local_312[1 /*6*/]), 6, 0, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[2 /*9*/], true);
			func_322(&(Local_315[3 /*9*/]), &(Local_312[2 /*6*/]), 6, 0, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[3 /*9*/], true);
			func_322(&Local_316, &Local_313, 26, 0, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_316.f_0, iLocal_574);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_316.f_0, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_316.f_0, iLocal_573);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_574, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_574);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_316.f_0, true, 1);
			PED::SET_PED_MODEL_IS_SUPPRESSED(Local_316.f_5, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_316.f_0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_316.f_0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_316.f_0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_316.f_0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_316.f_0, 8, 0, 0, 0);
			iLocal_323 = 1;
		}
	}
	else
	{
		func_285();
	}
}

void func_285()//Position - 0x2A7E6
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_262();
	}
	if (MISC::GET_GAME_TIMER() > iLocal_238)
	{
		if (__LIB_0__::func_121(Local_313.f_0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_313.f_0, PLAYER::PLAYER_PED_ID(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_313.f_0);
				iLocal_237++;
				iLocal_238 = MISC::GET_GAME_TIMER() + 2000;
			}
		}
		if (__LIB_0__::func_121(Local_312[0 /*6*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_312[0 /*6*/], PLAYER::PLAYER_PED_ID(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_312[0 /*6*/]);
				iLocal_237++;
				iLocal_238 = MISC::GET_GAME_TIMER() + 2000;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_312[0 /*6*/], true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
					iLocal_237++;
					iLocal_238 = MISC::GET_GAME_TIMER() + 2000;
				}
			}
		}
		if (!bLocal_325)
		{
			if (__LIB_0__::func_121(Local_312[1 /*6*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_312[1 /*6*/], PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_312[1 /*6*/]);
					iLocal_237++;
					iLocal_238 = MISC::GET_GAME_TIMER() + 2000;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_312[1 /*6*/], true))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
						iLocal_237++;
						iLocal_238 = MISC::GET_GAME_TIMER() + 2000;
					}
				}
			}
		}
		if (__LIB_0__::func_121(Local_312[2 /*6*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_312[2 /*6*/], PLAYER::PLAYER_PED_ID(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_312[2 /*6*/]);
				iLocal_237++;
				iLocal_238 = MISC::GET_GAME_TIMER() + 2000;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_312[2 /*6*/], true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
					iLocal_237++;
					iLocal_238 = MISC::GET_GAME_TIMER() + 2000;
				}
			}
		}
	}
	if (iLocal_237 >= 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
		{
			__LIB_0__::func_366(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_316.f_0))
	{
		if (__LIB_0__::func_121(Local_316.f_0))
		{
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_316.f_0, PLAYER::PLAYER_PED_ID(), true))
			{
				func_286();
				if (iLocal_328 == 0)
				{
					if (iLocal_296 == 1)
					{
						if (__LIB_0__::func_695(Local_313.f_0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_313.f_0) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_313.f_0) > 15000f)
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 220f, 220f, 220f, false, true, 0))
								{
									func_1(4);
								}
							}
						}
					}
				}
				else if (iLocal_296 != 6)
				{
					if (bLocal_326 == 0)
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 220f, 220f, 220f, false, true, 0))
						{
							func_1(1);
						}
					}
				}
			}
			else
			{
				func_1(2);
			}
		}
		else
		{
			func_1(3);
		}
	}
}

void func_286()//Position - 0x2AAB9
{
	switch (iLocal_296)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_695(Local_313.f_0))
			{
				__LIB_17__::func_68(&uLocal_561, Local_313.f_0, 0, 0, 1, 1, 1);
			}
			if (iLocal_293 == 4)
			{
				if (__LIB_0__::func_692(Local_315[0 /*9*/]))
				{
					__LIB_0__::func_222(&uLocal_396, 4, Local_315[0 /*9*/], "Paparazzo3ACop1", 0, 1);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_316.f_0, PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_695(Local_313.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_313.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0);
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_316.f_0);
				func_1(2);
			}
			break;
		case 2:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_316.f_0))
			{
				if (__LIB_0__::func_692(Local_315[0 /*9*/]))
				{
					__LIB_0__::func_222(&uLocal_396, 4, Local_315[0 /*9*/], "Paparazzo3ACop1", 0, 1);
				}
				__LIB_0__::func_222(&uLocal_396, 6, Local_316.f_0, "POPPY", 0, 1);
				iLocal_296 = 3;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_316.f_0, Local_342, 1.5f, 1.5f, 1.5f, false, true, 0))
			{
				if (__LIB_0__::func_692(Local_315[3 /*9*/]))
				{
					__LIB_0__::func_222(&uLocal_396, 5, Local_315[3 /*9*/], "Paparazzo3ACop2", 0, 1);
				}
				iLocal_296 = 4;
			}
			break;
		case 4:
			if (iLocal_299[1] == 4)
			{
				if (__LIB_0__::func_692(Local_315[0 /*9*/]))
				{
					__LIB_0__::func_222(&uLocal_396, 4, Local_315[0 /*9*/], "Paparazzo3ACop1", 0, 1);
				}
				__LIB_0__::func_222(&uLocal_396, 6, Local_316.f_0, "POPPY", 0, 1);
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

void func_322(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2BF15
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam1, iParam2, uParam0->f_5, iParam4, true, true);
		if (iParam3 == 1)
		{
		}
	}
}

void func_323(var uParam0, int iParam1)//Position - 0x2BF42
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, uParam0->f_1, uParam0->f_4, true, true, false);
	}
	if (iParam1 == 1)
	{
	}
}

int func_324(int iParam0)//Position - 0x2BF73
{
	int iVar0;
	STREAMING::REQUEST_MODEL(Local_312[0 /*6*/].f_5);
	STREAMING::REQUEST_MODEL(Local_313.f_5);
	STREAMING::REQUEST_MODEL(Local_315[0 /*9*/].f_5);
	STREAMING::REQUEST_MODEL(Local_316.f_5);
	if (iParam0 == 0)
	{
		if (((!STREAMING::HAS_MODEL_LOADED(Local_312[0 /*6*/].f_5) || !STREAMING::HAS_MODEL_LOADED(Local_315[0 /*9*/].f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_313.f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_316.f_5))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 == 0)
		{
			SYSTEM::WAIT(0);
			iVar0 = 1;
			if (((!STREAMING::HAS_MODEL_LOADED(Local_312[0 /*6*/].f_5) || !STREAMING::HAS_MODEL_LOADED(Local_315[0 /*9*/].f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_313.f_5)) || !STREAMING::HAS_MODEL_LOADED(Local_316.f_5))
			{
				iVar0 = 0;
			}
		}
	}
	return 1;
}

void func_325()//Position - 0x2C054
{
	if (iLocal_284 == 1)
	{
		if (__LIB_0__::func_121(Local_312[0 /*6*/]) && __LIB_0__::func_121(Local_313.f_0))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
			{
				if (iLocal_309 == 0)
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					if (__LIB_0__::func_692(Local_316.f_0))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_316.f_0))
						{
							if (__LIB_0__::func_692(Local_315[0 /*9*/]))
							{
								__LIB_0__::func_222(&uLocal_396, 4, Local_315[0 /*9*/], "Paparazzo3ACop1", 0, 1);
							}
							__LIB_0__::func_222(&uLocal_396, 6, Local_316.f_0, "POPPY", 0, 1);
							if (__LIB_2__::func_859(&uLocal_396, "PAP3AAU", "PAP3A_ARREST", 7, 0, 0, 0))
							{
								iLocal_296 = 3;
							}
						}
					}
					if (__LIB_0__::func_121(iLocal_203))
					{
						VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_203, true, true);
						TASK::TASK_HELI_MISSION(iLocal_204, iLocal_203, 0, Local_316.f_0, 0f, 50f, 60f, 16, 0.1f, 60f, -1f, 60, 55, -1f, 0);
					}
					while (MISC::GET_GAME_TIMER() <= iLocal_310 + 8500 && !__LIB_0__::func_645(1500))
					{
						if (MISC::GET_GAME_TIMER() <= iLocal_310 + 500)
						{
							if (bLocal_272)
							{
								if (__LIB_0__::func_323())
								{
									if (CAM::IS_SCREEN_FADED_OUT())
									{
										__LIB_0__::func_84(800, 0);
									}
								}
							}
						}
						if (!iLocal_335)
						{
							if (__LIB_7__::func_691())
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_310 + 8200)
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
									iLocal_335 = 1;
								}
							}
						}
						__LIB_1__::func_33(0);
						if (__LIB_0__::func_121(Local_312[0 /*6*/]) && __LIB_0__::func_121(Local_313.f_0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_313.f_0, false);
							if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_313.f_0, 0) < 0.8f)
							{
								fLocal_339 = (fLocal_339 + 0.03f);
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_313.f_0, 0, 0, fLocal_339);
							}
						}
						if ((__LIB_0__::func_692(iLocal_204) && __LIB_0__::func_121(Local_316.f_0)) && __LIB_0__::func_121(iLocal_203))
						{
							if (TASK::CONTROL_MOUNTED_WEAPON(iLocal_204))
							{
								TASK::SET_MOUNTED_WEAPON_TARGET(iLocal_204, Local_316.f_0, 0, 0f, 0f, 0f, 2, false);
							}
						}
						SYSTEM::WAIT(0);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						__LIB_0__::func_84(800, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_316.f_0, -1, 0, 2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 128);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (__LIB_0__::func_121(iLocal_203))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_203, false);
					}
					if (iLocal_271 == 0)
					{
						if (!HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							__LIB_0__::func_229("PAP3_POP", 7500, 1);
							iLocal_271 = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_211))
					{
						iLocal_211 = __LIB_14__::func_661(Local_316.f_0, 1, 1, 5);
					}
					iLocal_309 = 4;
				}
				else if (iLocal_309 == 1)
				{
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_313.f_0, 0) < 0.9f)
					{
						fLocal_339 = (fLocal_339 + 0.04f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_313.f_0, 0, 0, fLocal_339);
					}
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_312[0 /*6*/], 0) < 0.8f)
					{
						fLocal_337 = (fLocal_337 + 0.14f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_312[0 /*6*/], 0, 0, fLocal_337);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) >= 0.810415f)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_312[0 /*6*/], 2) < 0.8f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) < 0.823092f)
						{
							fLocal_338 = (fLocal_338 + 0.025f);
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_312[0 /*6*/], 2, 0, fLocal_339);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_312[0 /*6*/], 2, false, false);
							iLocal_309 = 2;
						}
					}
				}
				else if (iLocal_309 == 2)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) >= 0.918249f)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_312[0 /*6*/], 2) > 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) < 0.930077f)
						{
							fLocal_338 = (fLocal_338 - 0.05f);
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_312[0 /*6*/], 2, 0, fLocal_338);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_312[0 /*6*/], 2, true);
							if (__LIB_0__::func_692(Local_316.f_0))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
								}
							}
							iLocal_309 = 3;
						}
					}
				}
				else if (iLocal_309 == 3)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) >= 0.970048f)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_312[0 /*6*/], 0) > 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) < 0.991134f)
						{
							fLocal_337 = (fLocal_337 - 0.056f);
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_312[0 /*6*/], 0, 0, fLocal_337);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_312[0 /*6*/], 0, true);
							if (__LIB_0__::func_692(Local_315[0 /*9*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], -1);
								}
							}
							iLocal_309 = 4;
						}
					}
				}
			}
		}
	}
}

void func_332(int iParam0)//Position - 0x2C64E
{
	struct<3> Var0;
	Var0 = { -0.428284f, 0.205746f, -0.156812f };
	switch (iLocal_299[iParam0])
	{
		case 0:
			if (iLocal_293 == 4 || iLocal_293 == 3)
			{
				if (__LIB_0__::func_692(Local_315[0 /*9*/]))
				{
					if (iParam0 == 0)
					{
						if (iLocal_293 == 4 && __LIB_14__::func_740(0, 1093140480, 0))
						{
							if (((__LIB_0__::func_121(Local_312[0 /*6*/]) && __LIB_0__::func_121(Local_313.f_0)) && __LIB_0__::func_692(Local_316.f_0)) && iLocal_284 == 0)
							{
								HUD::CLEAR_PRINTS();
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_POLICE_CHASE"))
								{
									AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_POLICE_CHASE");
								}
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
								{
									AUDIO::START_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
								}
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_312[0 /*6*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_312[0 /*6*/]);
								}
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_313.f_0))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0);
								}
								__LIB_0__::func_0(&(Local_315[0 /*9*/]));
								__LIB_0__::func_0(&(Local_315[1 /*9*/]));
								__LIB_8__::func_397(&(Local_312[0 /*6*/]));
								Var0.f_0 = (Var0.f_0 * -1f);
								Var0.f_1 = (Var0.f_1 * -1f);
								Var0.f_2 = (Var0.f_2 * -1f);
								Local_281 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(349.478f, -401.681f, 44.7238f, 106.14127f, Var0.f_0, Var0.f_1, Var0.f_2) };
								Local_312[0 /*6*/] = VEHICLE::CREATE_VEHICLE(Local_312[0 /*6*/].f_5, Local_281.f_0, Local_281.f_1, 44.3462f, 106.14127f, true, true, false);
								Local_315[0 /*9*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_312[0 /*6*/], 6, joaat("S_M_Y_Cop_01"), -1, true, true);
								Local_315[1 /*9*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_312[0 /*6*/], 6, joaat("S_M_Y_Cop_01"), 0, true, true);
								WEAPON::GIVE_WEAPON_TO_PED(Local_315[0 /*9*/], joaat("WEAPON_PISTOL"), -1, false, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[0 /*9*/], true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_315[0 /*9*/], iLocal_573);
								WEAPON::GIVE_WEAPON_TO_PED(Local_315[1 /*9*/], joaat("WEAPON_PISTOL"), -1, false, true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_315[1 /*9*/], iLocal_573);
								PED::SET_PED_CONFIG_FLAG(Local_315[1 /*9*/], 184, true);
								TASK::TASK_LOOK_AT_ENTITY(Local_315[1 /*9*/], Local_316.f_0, -1, 0, 2);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_312[0 /*6*/], 5f);
								VEHICLE::SET_VEHICLE_SIREN(Local_312[0 /*6*/], true);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_208);
									TASK::TASK_LOOK_AT_ENTITY(0, Local_316.f_0, -1, 0, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_208);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_208);
									TASK::TASK_LOOK_AT_ENTITY(0, Local_316.f_0, -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_316.f_0, -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_208);
								}
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_208);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_208);
								ENTITY::SET_ENTITY_COORDS(Local_313.f_0, 341.22034f, -410.22946f, 44.635387f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_313.f_0, 109.61598f);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_313.f_0, 5f);
								if (!ENTITY::IS_ENTITY_DEAD(Local_312[2 /*6*/], false))
								{
									ENTITY::SET_ENTITY_COORDS(Local_312[2 /*6*/], 328.86923f, -399.05005f, 44.815384f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_312[2 /*6*/], -57.309715f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_312[2 /*6*/], 5f);
									VEHICLE::SET_VEHICLE_SIREN(Local_312[2 /*6*/], true);
								}
								if (__LIB_0__::func_692(Local_315[3 /*9*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_315[3 /*9*/], true);
									TASK::CLEAR_PED_TASKS(Local_315[3 /*9*/]);
									if (!PED::IS_PED_IN_VEHICLE(Local_315[3 /*9*/], Local_312[2 /*6*/], false))
									{
										PED::SET_PED_INTO_VEHICLE(Local_315[3 /*9*/], Local_312[2 /*6*/], -1);
									}
									TASK::TASK_LOOK_AT_ENTITY(Local_315[3 /*9*/], Local_316.f_0, -1, 0, 2);
								}
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_313.f_0);
								TASK::CLEAR_PED_TASKS(Local_316.f_0);
								Local_280 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_316.f_0, 0f, 0f, 0f) };
								ENTITY::SET_ENTITY_COORDS(Local_316.f_0, Local_280.f_0, Local_280.f_1, (Local_280.f_2 - 1f), true, false, false, true);
								iLocal_231 = PED::CREATE_SYNCHRONIZED_SCENE(339.0846f, -411.1358f, 44.0895f, 0f, 0f, 0f, 2);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_231, false);
								iLocal_296 = 2;
								TASK::CLEAR_PED_TASKS(Local_315[0 /*9*/]);
								Local_206 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_315[0 /*9*/], 0f, 0f, 0f) };
								ENTITY::SET_ENTITY_COORDS(Local_315[0 /*9*/], Local_206.f_0, Local_206.f_1, (Local_206.f_2 - 1f), true, false, false, true);
								iLocal_299[0] = 1;
								iLocal_209 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_COORD(iLocal_209, 338.4f, -413.7f, 45.1f);
								CAM::SET_CAM_ROT(iLocal_209, -0.4f, 0.2f, -43.5f, 2);
								CAM::SET_CAM_FOV(iLocal_209, 49.8293f);
								iLocal_210 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_COORD(iLocal_210, 337.8593f, -413.8199f, 46.2603f);
								CAM::SET_CAM_ROT(iLocal_210, -19.1264f, 0.093f, -40.2055f, 2);
								CAM::SET_CAM_FOV(iLocal_210, 50.8293f);
								CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_210, iLocal_209, 10000, 1, 1);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								HUD::DISPLAY_HUD(false);
								HUD::DISPLAY_RADAR(false);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_316.f_0, iLocal_231, "rcmpaparazzo_3", "poppy_arrest_popm", 1000f, -1.5f, 0, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_315[0 /*9*/], iLocal_231, "rcmpaparazzo_3", "poppy_arrest_cop", 1000f, -1.5f, 0, 0, 1000f, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_312[0 /*6*/], iLocal_231, "poppy_arrest_car", "rcmpaparazzo_3", 1000f, -1f, 0, 1000f);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_315[0 /*9*/], joaat("WEAPON_PISTOL"), true);
								if (CAM::DOES_CAM_EXIST(iLocal_210))
								{
									CAM::SHAKE_CAM(iLocal_210, "HAND_SHAKE", 1f);
								}
								if (CAM::DOES_CAM_EXIST(iLocal_209))
								{
									CAM::SHAKE_CAM(iLocal_209, "HAND_SHAKE", 1f);
								}
								iLocal_310 = MISC::GET_GAME_TIMER();
								fLocal_337 = 0f;
								fLocal_338 = 0f;
								fLocal_339 = 0f;
								iLocal_309 = 0;
								PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, false, true);
								iLocal_284 = 1;
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!__LIB_17__::func_123(Local_315[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iParam0 != 0)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_315[iParam0 /*9*/], false))
					{
						if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_315[iParam0 /*9*/], Local_316.f_0, -1, false);
							iLocal_299[iParam0] = 2;
						}
					}
				}
				if (iLocal_309 == 4)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) == 1f)
					{
						if ((__LIB_0__::func_692(Local_315[0 /*9*/]) && __LIB_0__::func_692(Local_316.f_0)) && __LIB_0__::func_695(Local_312[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_315[0 /*9*/], false, false);
								PED::SET_PED_INTO_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
							}
							iLocal_309 = 5;
							iLocal_299[iParam0] = 5;
							iLocal_296 = 6;
						}
					}
				}
			}
			break;
		case 2:
			if (!__LIB_17__::func_123(Local_315[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iLocal_296 == 3)
				{
					if (iParam0 == 0)
					{
					}
					else if (iParam0 == 1)
					{
						if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_315[iParam0 /*9*/]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_207);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 351.0502f, -394.4243f, 44.2688f, Local_316.f_0, 1.6f, false, 2f, 0f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_316.f_0, Local_316.f_0, 1.2f, false, 0f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::CLOSE_SEQUENCE_TASK(iLocal_207);
							TASK::TASK_PERFORM_SEQUENCE(Local_315[iParam0 /*9*/], iLocal_207);
							iLocal_299[iParam0] = 3;
						}
					}
					else if (iParam0 == 3)
					{
						if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_315[iParam0 /*9*/]);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_315[iParam0 /*9*/], Local_316.f_0, Local_316.f_0, 1.5f, false, 0f, 6f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							iLocal_299[iParam0] = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (!__LIB_17__::func_123(Local_315[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iParam0 == 0)
				{
				}
				else if (iParam0 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_315[iParam0 /*9*/], Local_316.f_0, 3f, 3f, 3f, false, true, 0))
					{
						if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_315[iParam0 /*9*/]);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_315[iParam0 /*9*/], 346.3328f, -395.9672f, 44.2922f, Local_316.f_0, 1f, false, 0f, 0f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							iLocal_299[iParam0] = 4;
						}
					}
				}
				else if (iParam0 == 3)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_315[iParam0 /*9*/], Local_316.f_0, 10f, 10f, 10f, false, true, 0))
					{
						if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_315[iParam0 /*9*/]);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_315[iParam0 /*9*/], Local_316.f_0, -1, false);
							iLocal_299[iParam0] = 4;
						}
					}
				}
				if (iLocal_309 == 4)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) == 1f)
					{
						if ((__LIB_0__::func_692(Local_315[0 /*9*/]) && __LIB_0__::func_692(Local_316.f_0)) && __LIB_0__::func_695(Local_312[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_315[0 /*9*/], false, false);
								PED::SET_PED_INTO_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
							}
							iLocal_309 = 5;
							iLocal_299[iParam0] = 5;
							iLocal_296 = 6;
						}
					}
				}
			}
			break;
		case 4:
			if (!__LIB_17__::func_123(Local_315[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (iLocal_296 == 6)
				{
					if (iParam0 == 0)
					{
					}
					else if (iParam0 == 1)
					{
						if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_315[iParam0 /*9*/]);
							if (__LIB_0__::func_695(Local_312[0 /*6*/]))
							{
								TASK::TASK_ENTER_VEHICLE(Local_315[iParam0 /*9*/], Local_312[0 /*6*/], -1, 0, 2f, 1, 0);
								iLocal_299[iParam0] = 5;
							}
						}
					}
					else if (iParam0 == 3)
					{
						if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_315[iParam0 /*9*/]);
							if (__LIB_0__::func_695(Local_313.f_0))
							{
								TASK::TASK_GO_TO_ENTITY(Local_315[iParam0 /*9*/], Local_313.f_0, -1, 2.5f, 1f, 2f, 0);
								iLocal_299[iParam0] = 6;
							}
						}
					}
				}
				if (iLocal_309 == 4)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) == 1f)
					{
						if ((__LIB_0__::func_692(Local_315[0 /*9*/]) && __LIB_0__::func_692(Local_316.f_0)) && __LIB_0__::func_695(Local_312[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_315[0 /*9*/], false, false);
								PED::SET_PED_INTO_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], -1);
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
							}
							iLocal_309 = 5;
							iLocal_299[iParam0] = 5;
							iLocal_296 = 6;
						}
					}
				}
			}
			break;
		case 5:
			if (!__LIB_17__::func_123(Local_315[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (__LIB_0__::func_695(Local_312[0 /*6*/]))
				{
					if (__LIB_0__::func_121(Local_315[0 /*9*/]) && __LIB_0__::func_121(Local_315[1 /*9*/]))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
						{
							if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
							{
								if (bLocal_326 == 0)
								{
									iLocal_285 = 1;
									iLocal_299[0] = 7;
									iLocal_299[iParam0] = 7;
									iLocal_229 = MISC::GET_GAME_TIMER();
									return;
								}
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_312[0 /*6*/], -1f, false);
								}
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_312[0 /*6*/]);
								VEHICLE::SET_VEHICLE_SIREN(Local_312[0 /*6*/], false);
								PED::SET_PED_KEEP_TASK(Local_315[0 /*9*/], true);
								iLocal_229 = MISC::GET_GAME_TIMER();
								if (__LIB_0__::func_695(Local_313.f_0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_313.f_0, false);
								}
								PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, true, true);
								PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, true, true);
								PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, true, true);
								PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, true, true);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_312[0 /*6*/], true);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_315[0 /*9*/], Local_312[0 /*6*/], 231.64f, -347.1846f, 43.2866f, 30f, 0, 0, 786469, 20f, 150f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_312[0 /*6*/], true);
								iLocal_285 = 1;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_299[0] = 7;
								iLocal_299[iParam0] = 7;
							}
						}
					}
				}
			}
			break;
		case 6:
			if (__LIB_17__::func_123(Local_315[iParam0 /*9*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
			}
			break;
		case 7:
			break;
		case 8:
			if (MISC::GET_GAME_TIMER() >= iLocal_228 + 5000)
			{
				if (__LIB_0__::func_121(Local_316.f_0))
				{
					if (__LIB_0__::func_692(Local_315[iParam0 /*9*/]))
					{
						iLocal_299[iParam0] = 3;
					}
				}
			}
			break;
		case 9:
			break;
	}
}

void func_348()//Position - 0x2D910
{
	struct<6> Var0;
	if (bLocal_330)
	{
		if (__LIB_0__::func_121(Local_312[0 /*6*/]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_312[0 /*6*/]))
		{
			if (iLocal_236 < 30)
			{
				iLocal_236 = 30;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) > 0.92f)
			{
				if (__LIB_0__::func_692(Local_316.f_0) && !PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
				}
			}
		}
		iLocal_236++;
		if (ENTITY::IS_ENTITY_DEAD(Local_316.f_0, false) || PED::IS_PED_INJURED(Local_316.f_0))
		{
			func_1(3);
			return;
		}
		else if (iLocal_236 > 30)
		{
			func_1(5);
			return;
		}
	}
	Var0 = { __LIB_13__::func_743() };
	switch (iLocal_294)
	{
		case 0:
			__LIB_14__::func_874(2, "Arrived at crash scene", 1, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, false, true);
			__LIB_0__::func_714(&iLocal_212);
			__LIB_0__::func_221(&uLocal_396, 1);
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
			__LIB_0__::func_345(&uLocal_561, 0, 0);
			func_367();
			__LIB_0__::func_345(&uLocal_561, 0, 0);
			__LIB_20__::func_854(50);
			__LIB_14__::func_804(0);
			iLocal_261 = 0;
			bLocal_326 = false;
			iLocal_265 = 0;
			iLocal_267 = 0;
			iLocal_268 = 0;
			iLocal_269 = 0;
			iLocal_271 = 0;
			iLocal_232 = 0;
			iLocal_235 = 0;
			iLocal_276 = 0;
			iLocal_233 = 0;
			iLocal_275 = 0;
			iLocal_273 = 0;
			iLocal_270 = 0;
			iLocal_335 = 0;
			if (!bLocal_272)
			{
				__LIB_0__::func_84(800, 0);
			}
			if (__LIB_0__::func_121(Local_313.f_0))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_313.f_0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_313.f_0, 1);
			}
			if (__LIB_0__::func_121(iLocal_201))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_201);
			}
			if (iLocal_284 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_358();
				}
			}
			iLocal_294 = 1;
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
			{
				if (bLocal_326 == 0)
				{
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_231, true);
				}
				else
				{
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_231, false);
				}
			}
			if (__LIB_3__::func_100())
			{
				__LIB_1__::func_10(1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) > 0.85f)
			{
				if (__LIB_0__::func_692(iLocal_204) && __LIB_0__::func_121(iLocal_203))
				{
					TASK::TASK_HELI_MISSION(iLocal_204, iLocal_203, 0, 0, 123.3842f, -883.9507f, 200f, 4, 200f, -1f, -1f, -1, 100, -1f, 0);
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_203, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_204, true);
					__LIB_0__::func_124(&iLocal_204, 1, 0, 1);
					__LIB_0__::func_106(&iLocal_203);
				}
			}
			if (iLocal_285 == 0)
			{
				if (iLocal_309 > 0)
				{
					func_355();
				}
				if (iLocal_284 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_358();
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3"))
				{
					if (__LIB_0__::func_121(Local_313.f_0))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(Local_313.f_0))
						{
							func_332(0);
							func_325();
						}
					}
				}
				if (iLocal_284 == 1)
				{
					if (__LIB_0__::func_323())
					{
						if ((__LIB_0__::func_692(Local_316.f_0) && __LIB_0__::func_692(iLocal_204)) && __LIB_0__::func_121(iLocal_203))
						{
							if (!iLocal_275)
							{
								TASK::TASK_HELI_MISSION(iLocal_204, iLocal_203, 0, Local_316.f_0, 0f, 50f, 60f, 16, 0.1f, 60f, -1f, 60, 55, -1f, 0);
								iLocal_275 = 1;
							}
						}
					}
					if (iLocal_235 == 0)
					{
						if (__LIB_0__::func_75())
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_ARREST_8"))
							{
								__LIB_0__::func_638();
								iLocal_235 = 1;
							}
						}
					}
					else if (iLocal_235 == 1)
					{
						if (!__LIB_0__::func_75())
						{
							if (!bLocal_326)
							{
								if (iLocal_271 == 0)
								{
									__LIB_0__::func_229("PAP3_POP", 7500, 1);
									iLocal_271 = 1;
								}
							}
							iLocal_235 = 2;
						}
					}
					else if (iLocal_235 == 2)
					{
						if (!__LIB_0__::func_501("PAP3_POP", 0, 0))
						{
							if (!iLocal_270)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 1) <= 50f)
								{
									if (__LIB_14__::func_782(&uLocal_396, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 0, 0))
									{
										iLocal_270 = 1;
										iLocal_235 = 3;
										iLocal_239 = 0;
										iLocal_240 = 1;
									}
								}
								else if (__LIB_14__::func_782(&uLocal_396, "PAP3AAU", "PAP3A_ARREST", "PAP3A_ARREST_10", 8, 1, 0))
								{
									iLocal_270 = 1;
									iLocal_235 = 3;
									iLocal_239 = 1;
									iLocal_240 = 1;
								}
							}
						}
					}
				}
				if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() && !__LIB_0__::func_501("PAP3_POP", 0, 0))
				{
					if (iLocal_235 == 0 || iLocal_235 == 3)
					{
						func_216();
					}
				}
				if ((iLocal_309 > 0 && iLocal_284 == 1) && iLocal_270 == 1)
				{
					func_284();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
					{
						if (!__LIB_0__::func_75())
						{
							AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
						}
					}
				}
				func_261();
				if (bLocal_326 == 1)
				{
					if (iLocal_327 == 0)
					{
						if (__LIB_21__::func_278(50))
						{
							if (__LIB_0__::func_75() || __LIB_0__::func_501("PAP3_POP", 0, 0))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(PLAYER::PLAYER_PED_ID(), "PAP3A_AOAF", "FRANKLIN", "SPEECH_PARAMS_STANDARD", false);
							}
							else
							{
								iLocal_276 = 1;
							}
							__LIB_0__::func_366(0);
							__LIB_20__::func_822(0);
							__LIB_20__::func_823(0);
							iLocal_294 = 2;
							iLocal_327 = 1;
						}
						else if (iLocal_267 == 1)
						{
							if (iLocal_265 == 0)
							{
								if (__LIB_21__::func_269())
								{
									__LIB_0__::func_151("PAP3_HELP7", -1);
									iLocal_265 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_267 == 1)
					{
						if (__LIB_21__::func_278(50))
						{
							if (iLocal_268 == 0)
							{
								iLocal_228 = MISC::GET_GAME_TIMER();
								iLocal_268 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_228 + 4000)
							{
								if (iLocal_266 == 0)
								{
									if (iLocal_232 == 0)
									{
										if (__LIB_3__::func_589(50, "PAP3A_TXTB1" /* GXT: Can you get a better one? */, 1, 0, 0, 0, 0, 1, 0, 1))
										{
											__LIB_20__::func_854(50);
											iLocal_267 = 0;
											iLocal_232 = 1;
										}
									}
									else if (iLocal_232 == 1)
									{
										if (__LIB_3__::func_589(50, "PAP3A_TXTB3" /* GXT: Come on man. Send a decent one. */, 1, 0, 0, 0, 0, 1, 0, 1))
										{
											__LIB_20__::func_854(50);
											iLocal_267 = 0;
											iLocal_232 = 2;
										}
									}
									else if (iLocal_232 == 2)
									{
										if (__LIB_3__::func_589(50, "PAP3A_TXTB2" /* GXT: :/ */, 1, 0, 0, 0, 0, 1, 0, 1))
										{
											__LIB_20__::func_854(50);
											iLocal_267 = 0;
											iLocal_232 = 3;
										}
									}
									else if (iLocal_232 == 3)
									{
										if (__LIB_3__::func_589(50, "PAP3A_TXTB4" /* GXT: Are you blind? */, 1, 0, 0, 0, 0, 1, 0, 1))
										{
											__LIB_20__::func_854(50);
											iLocal_267 = 0;
											iLocal_232 = 4;
										}
									}
								}
								else
								{
									if (iLocal_233 == 0)
									{
										if (__LIB_3__::func_589(50, "PAP3A_TXT8" /* GXT: Can you get any closer man? */, 1, 0, 0, 0, 0, 1, 0, 1))
										{
											__LIB_20__::func_854(50);
											iLocal_267 = 0;
											iLocal_233 = 1;
										}
									}
									else if (iLocal_233 == 1)
									{
										if (__LIB_3__::func_589(50, "PAP3A_TXT7" /* GXT: I can hardly see her! Get closer. */, 1, 0, 0, 0, 0, 1, 0, 1))
										{
											__LIB_20__::func_854(50);
											iLocal_267 = 0;
											iLocal_233 = 2;
										}
									}
									iLocal_266 = 0;
								}
							}
						}
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
					{
						if (__LIB_16__::func_923())
						{
							__LIB_20__::func_854(50);
							iLocal_267 = 1;
							iLocal_268 = 0;
							if (func_349() == 0)
							{
								if (iLocal_242 < 20)
								{
									__LIB_20__::func_822(1);
									__LIB_20__::func_823(1);
									iLocal_228 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								__LIB_20__::func_822(1);
								__LIB_20__::func_823(1);
								__LIB_0__::func_714(&iLocal_211);
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_228 = MISC::GET_GAME_TIMER();
								bLocal_326 = true;
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
								{
									fLocal_288 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231);
									if (fLocal_288 >= 0.638f)
									{
										iLocal_261 = 1;
									}
								}
							}
						}
						else
						{
							iLocal_243 = 0;
							iLocal_242 = 0;
						}
					}
				}
			}
			else if (bLocal_326 == 0)
			{
				iLocal_294 = 2;
			}
			else if (iLocal_327 == 0)
			{
				if (__LIB_21__::func_278(50))
				{
					if (__LIB_0__::func_75() || __LIB_0__::func_501("PAP3_POP", 0, 0))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(PLAYER::PLAYER_PED_ID(), "PAP3A_AOAF", "FRANKLIN", "SPEECH_PARAMS_STANDARD", false);
					}
					else
					{
						iLocal_276 = 1;
					}
					__LIB_0__::func_366(0);
					__LIB_20__::func_822(0);
					__LIB_20__::func_823(0);
					iLocal_294 = 2;
					iLocal_227 = MISC::GET_GAME_TIMER();
					iLocal_327 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_229 + 10000)
				{
					iLocal_294 = 2;
				}
			}
			break;
		case 2:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 6f, 1);
			iLocal_322 = 0;
			iLocal_329 = 0;
			if (iLocal_327 == 1)
			{
				func_2(5);
			}
			else
			{
				func_1(1);
			}
			break;
	}
}

int func_349()//Position - 0x2E0BB
{
	if (iLocal_242 < 20)
	{
		if (func_350(Local_316.f_0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_316.f_0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_316.f_0, true), 1f))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_316.f_0))
				{
					if (CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_316.f_0 || CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_315[0 /*9*/])
					{
						if (!__LIB_0__::func_687(Local_316.f_0, PLAYER::PLAYER_PED_ID(), 50f, 1))
						{
							iLocal_266 = 1;
						}
						else
						{
							iLocal_243++;
						}
					}
				}
			}
		}
		iLocal_242++;
	}
	if (iLocal_243 > 5)
	{
		return 1;
	}
	return 0;
}

int func_350(int iParam0)//Position - 0x2E1A1
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	fVar0 = 0.2f;
	fVar1 = 0.8f;
	if (__LIB_0__::func_692(iParam0))
	{
		iVar2 = PED::GET_PED_BONE_INDEX(iParam0, 23553);
		if (iVar2 != -1)
		{
			Var5 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar2) };
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var5, &fVar3, &fVar4);
			if (((fVar3 > fVar0 && fVar3 < fVar1) && fVar4 > fVar0) && fVar4 < fVar1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_355()//Position - 0x2E284
{
	if (iLocal_331 == 0)
	{
		switch (iLocal_307)
		{
			case 0:
				iLocal_249 = 0;
				iLocal_250 = 0;
				if (!__LIB_0__::func_77(0))
				{
					if (!__LIB_0__::func_1("PAP3_HELP1"))
					{
						if (iLocal_248 == 0)
						{
							__LIB_0__::func_151("PAP3_HELP1", -1);
							iLocal_248 = 1;
						}
					}
				}
				else
				{
					iLocal_248 = 0;
					iLocal_307++;
				}
				break;
			case 1:
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (!__LIB_0__::func_1("PAP3_HELP2"))
					{
						if (iLocal_249 == 0)
						{
							__LIB_0__::func_151("PAP3_HELP2", -1);
							iLocal_249 = 1;
						}
					}
				}
				else
				{
					if (__LIB_0__::func_1("PAP3_HELP2"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
					{
						iLocal_307++;
					}
				}
				if (!__LIB_0__::func_77(0))
				{
					iLocal_307 = 0;
				}
				break;
			case 2:
				if (bLocal_326 == 1)
				{
					iLocal_307++;
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					iLocal_249 = 0;
					iLocal_250 = 0;
					iLocal_307 = 1;
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
				{
					if (iLocal_250 == 0)
					{
						iLocal_250 = 1;
					}
				}
				else if (!__LIB_0__::func_77(0))
				{
					iLocal_307 = 0;
				}
				break;
			case 3:
				break;
		}
	}
	else
	{
		if (bLocal_326 == 0)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
			{
				if (!__LIB_0__::func_1("PAP3_HELP6"))
				{
					if (iLocal_259 == 0)
					{
						__LIB_0__::func_151("PAP3_HELP6", -1);
						iLocal_259 = 1;
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		{
			if (__LIB_0__::func_1("PAP3_HELP6"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

void func_358()//Position - 0x2E436
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 28f)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_341, 47f, 47f, 47f, false, true, 0))
			{
				if (iLocal_257 == 0)
				{
					__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 37f, 1, 1056964608, 0, 1, 0);
					iLocal_257 = 1;
				}
				else if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 0.1f)
				{
					iLocal_274 = 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_341, 40f, 40f, 40f, false, true, 0))
		{
			if (iLocal_257 == 0)
			{
				__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 30f, 1, 1056964608, 0, 1, 0);
				iLocal_257 = 1;
			}
			else if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 0.1f)
			{
				iLocal_274 = 1;
			}
		}
	}
}

void func_367()//Position - 0x2EA97
{
	PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, false, true);
	PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, false, true);
	PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, false, true);
	PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, false, true);
}

void func_442()//Position - 0x35884
{
	if (bLocal_330)
	{
		iLocal_236++;
		if (ENTITY::IS_ENTITY_DEAD(Local_316.f_0, false) || PED::IS_PED_INJURED(Local_316.f_0))
		{
			func_1(3);
			return;
		}
		else if (iLocal_236 > 30)
		{
			func_1(5);
			return;
		}
	}
	switch (iLocal_294)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, false, true);
			if (iLocal_322 == 0)
			{
				if (!__LIB_0__::func_323())
				{
				}
				else if (__LIB_0__::func_344() < 2)
				{
				}
				iLocal_322 = 1;
			}
			func_367();
			iLocal_294 = 1;
			break;
		case 1:
			func_284();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_358();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_341, 47f, 47f, 47f, false, true, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 0);
				iLocal_294 = 2;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
			__LIB_0__::func_714(&iLocal_212);
			iLocal_322 = 0;
			func_2(4);
			break;
	}
}

void func_443()//Position - 0x35997
{
	if (bLocal_330)
	{
		iLocal_236++;
		if (ENTITY::IS_ENTITY_DEAD(Local_316.f_0, false) || PED::IS_PED_INJURED(Local_316.f_0))
		{
			func_1(3);
			return;
		}
		else if (iLocal_236 > 30)
		{
			func_1(5);
			return;
		}
	}
	switch (iLocal_294)
	{
		case 0:
			iLocal_277 = 0;
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP3_START");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP3_START_FORA");
				iLocal_277 = 1;
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_322 == 0)
			{
				if (!__LIB_0__::func_323())
				{
					if (__LIB_14__::func_521())
					{
						__LIB_0__::func_229("PAP3_03", 7500, 1);
						iLocal_322 = 1;
					}
				}
				else if (__LIB_0__::func_344() < 1)
				{
					if (__LIB_14__::func_521())
					{
						__LIB_0__::func_229("PAP3_03", 7500, 1);
						iLocal_322 = 1;
					}
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			iLocal_262 = 0;
			iLocal_260 = 0;
			func_476();
			__LIB_0__::func_84(800, 0);
			STREAMING::REQUEST_MODEL(joaat("polmav"));
			iLocal_287 = 0;
			iLocal_252 = 0;
			iLocal_279 = 0;
			iLocal_234 = 0;
			fLocal_291 = 1f;
			iLocal_230 = 0;
			iLocal_226 = iLocal_226;
			iLocal_294 = 1;
			break;
		case 1:
			if (__LIB_0__::func_121(Local_313.f_0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_313.f_0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_POLICE_CHASE"))
					{
						AUDIO::START_AUDIO_SCENE("PAPARAZZO_3A_POLICE_CHASE");
					}
					fLocal_289 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_313.f_0);
					func_475();
					if (fLocal_289 > 15000f)
					{
						if (!iLocal_262)
						{
							if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_313.f_0, 100f, 1))
							{
								iLocal_262 = 1;
							}
						}
					}
					if (__LIB_0__::func_121(Local_312[1 /*6*/]))
					{
						if (iLocal_279 == 0)
						{
							if (fLocal_289 >= 48408.34f)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_312[1 /*6*/], false);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_312[1 /*6*/], 5f);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "POLICE_CRASH", Local_312[1 /*6*/], "PAPARAZZO_03A", false, 0);
								RECORDING::REPLAY_START_EVENT(0);
								iLocal_279 = 1;
							}
						}
						else if (iLocal_279 == 1)
						{
							if (fLocal_289 >= 49675.332f)
							{
								VEHICLE::SET_VEHICLE_DAMAGE(Local_312[1 /*6*/], ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_312[1 /*6*/], 21), 100f, 600f, false);
								VEHICLE::SMASH_VEHICLE_WINDOW(Local_312[1 /*6*/], 0);
								VEHICLE::SMASH_VEHICLE_WINDOW(Local_312[1 /*6*/], 1);
								VEHICLE::SET_VEHICLE_SIREN(Local_312[1 /*6*/], false);
								iLocal_279 = 2;
							}
						}
						else if (iLocal_279 == 2)
						{
							if (fLocal_289 >= 51333.24f)
							{
								VEHICLE::SET_VEHICLE_DAMAGE(Local_312[1 /*6*/], ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_312[1 /*6*/], 73), 100f, 200f, false);
								RECORDING::REPLAY_STOP_EVENT();
								iLocal_279 = 3;
							}
						}
					}
				}
			}
			if (iLocal_277 == 1 && MISC::GET_GAME_TIMER() > iLocal_278 + 6000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP3_START");
				iLocal_277 = 0;
			}
			if (iLocal_322 == 0)
			{
				if (!__LIB_0__::func_323())
				{
					if (__LIB_14__::func_521())
					{
						__LIB_0__::func_229("PAP3_03", 7500, 1);
						iLocal_322 = 1;
					}
				}
				else if (__LIB_0__::func_344() < 1)
				{
					if (__LIB_14__::func_521())
					{
						__LIB_0__::func_229("PAP3_03", 7500, 1);
						iLocal_322 = 1;
					}
				}
			}
			func_474();
			if (HUD::DOES_BLIP_EXIST(iLocal_212))
			{
				__LIB_14__::func_655(iLocal_212, Local_313.f_0, 220f, 0.95f, 0);
			}
			if (iLocal_575 == 1)
			{
				func_471();
			}
			if (__LIB_0__::func_323())
			{
				if (__LIB_0__::func_344() > 0)
				{
					if (iLocal_287 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_286 + 2000)
						{
							__LIB_14__::func_879(0, 1, 1);
							iLocal_287 = 1;
						}
					}
				}
			}
			if (iLocal_252 == 0)
			{
				if (__LIB_0__::func_692(Local_316.f_0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_316.f_0, Local_340, 220f, 220f, 220f, false, true, 0))
					{
						if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 100f, 1))
						{
							iLocal_252 = 1;
						}
					}
				}
			}
			func_460();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_358();
			}
			func_476();
			func_284();
			if (__LIB_0__::func_692(Local_315[0 /*9*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_315[0 /*9*/], true, 1);
			}
			if (!iLocal_260)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_260 = 1;
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_201 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_201, 0f);
			}
			__LIB_0__::func_106(&(Local_312[1 /*6*/]));
			__LIB_0__::func_124(&(Local_315[2 /*9*/]), 1, 0, 1);
			HUD::CLEAR_PRINTS();
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
			iLocal_322 = 0;
			func_444(0, 1);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_341, 47f, 47f, 47f, false, true, 0))
			{
				func_2(3);
			}
			else
			{
				func_2(4);
			}
			break;
	}
}

void func_444(bool bParam0, bool bParam1)//Position - 0x35DEC
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_151))
	{
		iLocal_53 = 0;
		__LIB_15__::func_910();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_160);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_69)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_458());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_908());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_907());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_454();
			func_453();
			func_450();
		}
		else
		{
			func_446();
			func_445();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_445()//Position - 0x35EA8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		iLocal_167[iVar0] = 0;
		Local_135[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_71[iVar0] = 0f;
		fLocal_72[iVar0] = 0f;
		fLocal_73[iVar0] = 0f;
		fLocal_74[iVar0] = 0f;
		iLocal_111[iVar0] = 0;
		fLocal_75[iVar0] = 0f;
		iLocal_112[iVar0] = 0;
		iLocal_161[iVar0] = 0;
		iLocal_113[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_168[iVar0] = 0;
		iVar0++;
	}
	iLocal_118 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_169[iVar0] = 0;
		Local_136[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_86[iVar0] = 0f;
		fLocal_87[iVar0] = 0f;
		fLocal_88[iVar0] = 0f;
		fLocal_89[iVar0] = 0f;
		iLocal_117[iVar0] = 0;
		iLocal_162[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_171[iVar0] = 0;
		iVar0++;
	}
	iLocal_120 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_170[iVar0] = 0;
		Local_137[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_80[iVar0] = 0f;
		fLocal_81[iVar0] = 0f;
		fLocal_82[iVar0] = 0f;
		fLocal_83[iVar0] = 0f;
		iLocal_114[iVar0] = 0;
		fLocal_84[iVar0] = 0f;
		iLocal_115[iVar0] = 0;
		iLocal_163[iVar0] = 0;
		iLocal_116[iVar0] = 0;
		iVar0++;
	}
	iLocal_119 = 0;
	iLocal_122 = 0;
	iLocal_125 = 0;
	iLocal_126 = 0;
	iLocal_127 = 0;
}

void func_446()//Position - 0x36035
{
	func_449();
	func_448();
	func_447();
}

void func_447()//Position - 0x36049
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_170[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_170[iVar0]));
			}
		}
		iLocal_115[iVar0] = 0;
		if (!bLocal_49 && !bLocal_62)
		{
			if (iLocal_114[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_151);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_163[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_163[iVar0]);
		}
		iVar0++;
	}
}

void func_448()//Position - 0x36140
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_169[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_169[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_169[iVar0]));
			}
		}
		iLocal_117[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_162[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_162[iVar0]);
		}
		iVar0++;
	}
	iLocal_123 = 0;
	iLocal_120 = 0;
}

void func_449()//Position - 0x361BD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_167[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_167[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_167[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_167[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_167[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_167[iVar0]));
			}
		}
		if (!bLocal_49 && !bLocal_62)
		{
			if (iLocal_111[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_111[iVar0], &cLocal_151);
			}
		}
		iLocal_112[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_161[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161[iVar0]);
		}
		iVar0++;
	}
	iLocal_122 = 0;
	iLocal_118 = 0;
}

void func_450()//Position - 0x362BC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
				}
			}
			func_452(iLocal_170[iVar0]);
			__LIB_15__::func_906(iLocal_170[iVar0]);
		}
		iLocal_115[iVar0] = 0;
		iLocal_116[iVar0] = 0;
		if (!bLocal_49 && !bLocal_62)
		{
			if (iLocal_114[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_151);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_163[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_163[iVar0]);
		}
		iVar0++;
	}
	iLocal_124 = 0;
}

void func_452(int iParam0)//Position - 0x363A0
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
				if (bLocal_70)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_453()//Position - 0x3643A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_169[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_169[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_169[iVar0], true, false);
			}
			__LIB_15__::func_906(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_162[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_162[iVar0]);
		}
		iVar0++;
	}
	iLocal_123 = 0;
	iLocal_120 = 0;
}

void func_454()//Position - 0x364BE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_167[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_167[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_167[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_167[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_167[iVar0]);
				}
			}
			func_452(iLocal_167[iVar0]);
			__LIB_15__::func_906(iLocal_167[iVar0]);
		}
		iLocal_112[iVar0] = 0;
		iLocal_113[iVar0] = 0;
		if (!bLocal_49 && !bLocal_62)
		{
			if (iLocal_111[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_111[iVar0], &cLocal_151);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!iLocal_161[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161[iVar0]);
		}
		iVar0++;
	}
	iLocal_122 = 0;
	iLocal_118 = 0;
}

int func_458()//Position - 0x365D3
{
	if (iLocal_164 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_164;
}

void func_460()//Position - 0x3661A
{
	switch (iLocal_308)
	{
		case 0:
			if (__LIB_0__::func_692(Local_316.f_0))
			{
				if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 150f, 1) && !ENTITY::IS_ENTITY_OCCLUDED(Local_316.f_0))
				{
					__LIB_0__::func_222(&uLocal_396, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (!__LIB_0__::func_501("PAP3_03", 0, 0))
					{
						if (__LIB_14__::func_535(&uLocal_396, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_1", 7, 0, 0))
						{
							__LIB_14__::func_874(1, "At Poppy location", 0, 0, 0, 1);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 0);
							iLocal_308++;
						}
					}
					else if (__LIB_14__::func_535(&uLocal_396, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_1", 7, 1, 0))
					{
						__LIB_14__::func_874(1, "At Poppy location", 0, 0, 0, 1);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 0);
						iLocal_308++;
					}
				}
				else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_313.f_0))
				{
					if (fLocal_289 > 30000f)
					{
						__LIB_14__::func_874(1, "At Poppy location", 0, 0, 0, 1);
						iLocal_308++;
					}
				}
			}
			break;
		case 1:
			iLocal_308++;
			break;
		case 2:
			if (__LIB_0__::func_692(Local_316.f_0))
			{
				if (fLocal_289 >= 83760.766f)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_316.f_0, 70f, 70f, 70f, false, true, 0))
					{
						__LIB_0__::func_222(&uLocal_396, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (!__LIB_0__::func_501("PAP3_03", 0, 0))
						{
							if (__LIB_14__::func_535(&uLocal_396, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_3", 7, 0, 0))
							{
								iLocal_308++;
							}
						}
						else if (__LIB_14__::func_535(&uLocal_396, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_3", 7, 1, 0))
						{
							iLocal_308++;
						}
					}
					else
					{
						iLocal_308++;
					}
				}
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_316.f_0, 512.8621f, -187.7797f, 52.1896f, 30f, 30f, 30f, false, true, 0))
			{
				if (__LIB_0__::func_692(Local_315[0 /*9*/]))
				{
					__LIB_0__::func_222(&uLocal_396, 7, Local_315[0 /*9*/], "Paparazzo3ACop3", 0, 1);
					if (!__LIB_0__::func_501("PAP3_03", 0, 0))
					{
						if (__LIB_2__::func_859(&uLocal_396, "PAP3AAU", "PAP3A_COP7", 8, 0, 0, 0))
						{
							iLocal_308++;
						}
					}
					else if (__LIB_2__::func_859(&uLocal_396, "PAP3AAU", "PAP3A_COP7", 8, 1, 0, 0))
					{
						iLocal_308++;
					}
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_75())
			{
				__LIB_0__::func_221(&uLocal_396, 7);
			}
			break;
	}
}

void func_471()//Position - 0x36BF4
{
	if (iLocal_576 == 0)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Pap3aRoll"))
		{
			if (__LIB_0__::func_695(iLocal_201))
			{
				if (iLocal_577 == -1)
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_201))
					{
						MISC::CLEAR_AREA(377.516f, 169.3637f, 102.069f, 70f, true, false, false, false);
						if (iLocal_264 == 0)
						{
							__LIB_14__::func_659(iLocal_201, 364.0056f, 129.8543f, 102.1026f, 341.4834f, 0, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_201, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_201, 21.84f);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_201, "Pap3aRoll", 262144, 0, 28, -1, -1f, false, 2f);
						}
						else
						{
							__LIB_14__::func_659(iLocal_201, 373.0085f, 169.6102f, 122.1141f, 341.0669f, 0, 1);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_201);
						}
					}
					iLocal_577 = MISC::GET_GAME_TIMER();
				}
				else if ((((((!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_201) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/)) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_201, -1, false)) || (MISC::GET_GAME_TIMER() - iLocal_577) > 3000)
				{
					if (iLocal_264 == 0)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_201);
					iLocal_576 = 1;
				}
			}
		}
		else
		{
			TASK::REQUEST_WAYPOINT_RECORDING("Pap3aRoll");
		}
	}
}

void func_474()//Position - 0x36F1E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_203))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
		{
			STREAMING::REQUEST_MODEL(joaat("polmav"));
		}
		else
		{
			iLocal_203 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 351.3166f, -589.8016f, 73.1664f, 336.3177f, true, true, false);
			iLocal_204 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_203, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
			VEHICLE::SET_VEHICLE_LIVERY(iLocal_203, 0);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_203);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203, true, true, false);
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_203, true, false);
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_203, 0.2f);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_203, true);
			if (__LIB_0__::func_692(Local_316.f_0))
			{
				TASK::TASK_HELI_MISSION(iLocal_204, iLocal_203, 0, Local_316.f_0, 0f, 50f, 60f, 16, 30f, 60f, -1f, 60, 55, -1f, 0);
			}
		}
	}
}

void func_475()//Position - 0x36FEF
{
	switch (iLocal_234)
	{
		case 0:
			if (fLocal_289 > 60000f)
			{
				STREAMING::REQUEST_MODEL(joaat("stretch"));
				STREAMING::REQUEST_MODEL(joaat("S_M_Y_Valet_01"));
				iLocal_234 = 1;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("stretch")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Valet_01")))
			{
				iLocal_202 = VEHICLE::CREATE_VEHICLE(joaat("stretch"), 922.4766f, 45.2672f, 79.7644f, 329.2225f, true, true, false);
				iLocal_205 = PED::CREATE_PED(26, joaat("S_M_Y_Valet_01"), 929.0692f, 51.5874f, 79.9063f, 57.966f, true, true);
				iLocal_234 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_121(iLocal_205))
			{
				if (__LIB_0__::func_121(Local_316.f_0))
				{
					if (__LIB_0__::func_687(iLocal_205, Local_316.f_0, 100f, 1))
					{
						iLocal_226 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(98 /*EVENT_SHOCKING_MAD_DRIVER*/, Local_316.f_0, -1f);
						PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_205, true);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 0);
						iLocal_234 = 3;
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_121(iLocal_205))
			{
				if (__LIB_0__::func_121(Local_316.f_0))
				{
					if (__LIB_0__::func_687(iLocal_205, Local_316.f_0, 30f, 1))
					{
						TASK::TASK_SHOCKING_EVENT_REACT(iLocal_205, iLocal_226);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_205, "GENERIC_SHOCKED_HIGH", "SPEECH_PARAMS_STANDARD", 1);
						iLocal_234 = 4;
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_121(iLocal_205))
			{
				if (__LIB_0__::func_121(Local_316.f_0))
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_205))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_205, "GENERIC_SHOCKED_HIGH", "SPEECH_PARAMS_STANDARD", 1);
					}
					if (fLocal_289 > 90000f)
					{
						iLocal_234 = 5;
					}
				}
			}
			break;
		case 5:
			__LIB_0__::func_124(&iLocal_205, 1, 0, 1);
			__LIB_0__::func_106(&iLocal_202);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Valet_01"));
			break;
	}
}

void func_476()//Position - 0x371AE
{
	switch (iLocal_295)
	{
		case 0:
			fLocal_290 = 0.3f;
			func_509("PAP3A2", 300, 0, 1);
			func_508();
			func_507();
			iLocal_295 = 1;
			break;
		case 1:
			if (__LIB_0__::func_695(Local_313.f_0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_313.f_0))
				{
					iLocal_296 = 1;
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 300, "PAP3A2", true);
					if (iLocal_334 == 0)
					{
						if (!__LIB_0__::func_323())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 350.42798f, 143.83264f, 100.85524f, 271.72723f, 172.99947f, 117.88352f, 52.5f, false, true, 0))
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 5000f);
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 186.16592f, 299.0473f, 86.186226f, 653.0208f, 137.61925f, 179.56116f, 133.5f, false, true, 0) && __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 339.0575f, 90f))
								{
									if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_282, 1) < __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_283, 1))
									{
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 11000f);
									}
									else
									{
										VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 8000f);
									}
								}
								else
								{
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 7000f);
								}
							}
							else
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 2000f);
							}
						}
						else
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 4000f);
						}
					}
					else
					{
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_313.f_0, 7600f);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(Local_313.f_0, true);
				}
				else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_313.f_0) < 115000f)
				{
					if (iLocal_328 == 0)
					{
					}
					func_502();
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_313.f_0) >= 2000f)
						{
							fLocal_103 = 300f;
							fLocal_102 = 50f;
						}
					}
					bLocal_56 = false;
					bLocal_57 = true;
					func_507();
					func_477(Local_313.f_0, fLocal_336);
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_313.f_0) >= 113369f)
					{
						if (iLocal_256 == 0)
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_313.f_0, false);
							VEHICLE::SET_VEHICLE_DAMAGE(Local_313.f_0, 0f, 2f, 0f, 400f, 200f, true);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 0);
							iLocal_256 = 1;
						}
						if (iLocal_255 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CRASH", Local_313.f_0, "PAPARAZZO_03A", false, 0);
							iLocal_255 = 1;
						}
						if (iLocal_274)
						{
							if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
							{
								AUDIO::TRIGGER_MUSIC_EVENT("PAP3_STOP");
							}
							iLocal_295 = 2;
						}
					}
				}
				else
				{
					if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
					{
						AUDIO::TRIGGER_MUSIC_EVENT("PAP3_STOP");
					}
					iLocal_295 = 2;
				}
			}
			break;
		case 2:
			iLocal_328 = 1;
			if (__LIB_0__::func_121(Local_313.f_0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_313.f_0, 10f, -1, false);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_313.f_0, 301f);
				iLocal_294 = 2;
			}
			break;
	}
}

void func_477(int iParam0, float fParam1)//Position - 0x3745E
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_68 = false;
	if (!bLocal_50)
	{
		if (bLocal_49)
		{
			__LIB_15__::func_905();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_50 = true;
		}
	}
	else if (!bLocal_49)
	{
		__LIB_15__::func_910();
		bLocal_50 = false;
	}
	if (bLocal_49)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_43)
	{
		if (iLocal_38)
		{
			fLocal_95 = 0f;
		}
		else
		{
			fLocal_95 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_925(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_48 = 1;
					}
					else
					{
						iLocal_48 = 0;
					}
				}
				fLocal_92 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_93) * fLocal_95));
				if (bLocal_47)
				{
					func_499(iParam0, fLocal_92);
					func_498(iParam0, fLocal_102);
					if (fLocal_97 > 1000f)
					{
						if (iLocal_134 == 0)
						{
							func_497(iParam0, fLocal_102);
						}
						fVar0 = ((fLocal_92 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_134) * 2000f));
						func_496(iParam0, fVar0, fLocal_96);
						iLocal_134++;
						if (iLocal_134 > 2)
						{
							fLocal_97 = 0f;
						}
					}
					else
					{
						iLocal_134 = 0;
						fLocal_97 = (fLocal_97 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_92 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_55)
		{
			if (!iLocal_37)
			{
				func_493(iParam0, ((fParam1 * fLocal_93) * fLocal_95), 0);
				if (!iLocal_58)
				{
				}
				iLocal_58 = 0;
			}
			if (bLocal_40)
			{
				func_492(iParam0);
			}
			if (!iLocal_37)
			{
				func_480(iParam0, ((fParam1 * fLocal_93) * fLocal_95), 0);
			}
		}
		if (iLocal_45)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_172 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_138 = { ENTITY::GET_ENTITY_COORDS(iLocal_172, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_172, &fLocal_76, &fLocal_77, &fLocal_78, &fLocal_79);
				}
			}
			iLocal_45 = 0;
		}
		if (iLocal_44)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
			{
				__LIB_15__::func_906(iLocal_173);
				iLocal_173 = iLocal_172;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_173, Local_138, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_173, fLocal_76, fLocal_77, fLocal_78, fLocal_79);
			}
			fLocal_91 = fLocal_94;
			iLocal_37 = 1;
			iLocal_44 = 0;
		}
		if (iLocal_37)
		{
			while (!func_478(&iParam0, fLocal_91))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_38 = 1;
		}
		if (iLocal_51)
		{
			iLocal_51 = 0;
		}
	}
}

int func_478(int iParam0, float fParam1)//Position - 0x376F9
{
	if (!iLocal_52)
	{
		iLocal_37 = 1;
		func_446();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_121 == -1)
			{
				while (!func_479(iParam0, iLocal_121, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_42)
				{
					iLocal_38 = 1;
					fLocal_95 = 0f;
					iLocal_122 = 0;
					iLocal_124 = 0;
					iLocal_123 = 0;
					iLocal_118 = 0;
					iLocal_119 = 0;
					iLocal_120 = 0;
					iLocal_125 = 0;
					iLocal_126 = 0;
					iLocal_127 = 0;
				}
			}
		}
		iLocal_52 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_93) * fLocal_95));
				func_479(iParam0, iLocal_121, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_92 = fParam1;
		iLocal_128 = 0;
		iLocal_131 = 0;
		fLocal_107 = 0f;
		fLocal_106 = 0f;
		func_480(*iParam0, ((1f * fLocal_93) * fLocal_95), 1);
		func_493(*iParam0, ((1f * fLocal_93) * fLocal_95), 1);
		func_492(*iParam0);
		if ((iLocal_125 == 0 && iLocal_126 == 0) && iLocal_127 == 0)
		{
			iLocal_38 = 0;
			iLocal_37 = 0;
			iLocal_52 = 0;
			return 1;
		}
	}
	return 0;
}

int func_479(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x3782B
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_151);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_151))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_151, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_129 && iParam1 != iLocal_130)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_151, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_151, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_151, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_151, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_151))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_151);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_151, 10f, 786603);
					}
					else if (iParam1 != iLocal_129 && iParam1 != iLocal_130)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_151, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_151, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_151, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_151, true);
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

void func_480(int iParam0, float fParam1, bool bParam2)//Position - 0x37A11
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
		iVar0 = iLocal_124;
		while (iVar0 < 25)
		{
			if (iLocal_115[iVar0] != 99)
			{
				if (iLocal_115[iVar0] == 0)
				{
					if (iLocal_114[iVar0] > 0)
					{
						if (!iLocal_37)
						{
							if (fLocal_92 > (fLocal_84[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_894(iLocal_163[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_116[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_163[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_116[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_116[iVar0]), 1);
								iLocal_115[iVar0]++;
								iLocal_126++;
							}
						}
						else
						{
							fVar6 = (fLocal_92 - fLocal_84[iVar0]);
							fVar6 = (fVar6 * fLocal_85[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_490(iLocal_114[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_163[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_116[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_163[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_116[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_116[iVar0]), 1);
									iLocal_115[iVar0]++;
									iLocal_126++;
								}
								else
								{
									iLocal_115[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_115[iVar0] = 99;
					}
				}
				else if (iLocal_115[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_151);
					if (BitTest(iLocal_116[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
					}
					else if (!bLocal_64 && ((!BitTest(iLocal_116[iVar0], 2) && bVar10) || (BitTest(iLocal_116[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_458());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_458());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_163[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_163[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_114[iVar0], &cLocal_151))
							{
								if (fLocal_92 >= (fLocal_84[iVar0] - (fLocal_105 * fParam1)))
								{
									if ((iLocal_51 || bParam2) || (!bLocal_68 && !func_489(Local_137[iVar0 /*3*/], Var5, 5f, fLocal_103)))
									{
										if (bLocal_47)
										{
											func_488(Local_137[iVar0 /*3*/], Var5, fLocal_96);
										}
										iLocal_170[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_163[iVar0], Local_137[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_163[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_170[iVar0], 0);
										}
										if (uLocal_60 && !BitTest(iLocal_116[iVar0], 0))
										{
											func_487(iLocal_170[iVar0]);
										}
										if (BitTest(iLocal_116[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_170[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_170[iVar0], Local_137[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_170[iVar0], fLocal_80[iVar0], fLocal_81[iVar0], fLocal_82[iVar0], fLocal_83[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_163[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_163[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_170[iVar0], 5f);
										}
										if (!BitTest(iLocal_116[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_170[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_170[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_170[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_163[iVar0]);
										iLocal_126 = (iLocal_126 - 1);
										iLocal_115[iVar0]++;
										bLocal_68 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_170[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_170[iVar0], Local_137[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_170[iVar0], fLocal_80[iVar0], fLocal_81[iVar0], fLocal_82[iVar0], fLocal_83[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_163[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_163[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_170[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_170[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_163[iVar0]);
							iLocal_126 = (iLocal_126 - 1);
							iLocal_115[iVar0]++;
						}
					}
				}
				else if (iLocal_115[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_151);
					if (!BitTest(iLocal_116[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_116[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
							iVar13 = 2;
						}
						else if (!bLocal_64 && ((!BitTest(iLocal_116[iVar0], 2) && bVar10) || (BitTest(iLocal_116[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_458());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_458());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_170[iVar0], false))
						{
							if (!bLocal_68 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_170[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_170[iVar0], true), Var5) < 10000f || bParam2) || iLocal_51)
									{
										func_485(&(iLocal_170[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_116[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
					{
						if (fLocal_92 >= fLocal_84[iVar0])
						{
							if (4 > iLocal_119)
							{
								fVar6 = (fLocal_92 - fLocal_84[iVar0]);
								fVar6 = (fVar6 * fLocal_85[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_114[iVar0], &cLocal_151))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_151))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_170[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_114[iVar0], fVar6, &cLocal_151) };
										if (((!func_489(Var3, Var5, 5f, fLocal_103) && func_489(Var4, Var5, 5f, fLocal_103)) && !iLocal_51) && !bParam2)
										{
											if (!BitTest(iLocal_116[iVar0], 1))
											{
												func_485(&(iLocal_170[iVar0]), iVar13, 1);
											}
											iLocal_119++;
											iLocal_115[iVar0]++;
										}
										else if (((!bLocal_68 || BitTest(iLocal_116[iVar0], 1)) || iLocal_51) || bParam2)
										{
											if (func_479(&(iLocal_170[iVar0]), iLocal_114[iVar0], fVar6, 1, 0, 0, bLocal_66, bLocal_65))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_170[iVar0], (fParam1 * fLocal_85[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
												{
													if (BitTest(iLocal_116[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_170[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_170[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_170[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_163[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_170[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_116[iVar0], 1))
												{
													func_485(&(iLocal_170[iVar0]), iVar13, 1);
												}
												iLocal_119++;
												iLocal_115[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_116[iVar0], 1))
										{
											func_485(&(iLocal_170[iVar0]), iVar13, 1);
										}
										iLocal_119++;
										iLocal_115[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_116[iVar0], 1))
								{
									func_485(&(iLocal_170[iVar0]), iVar13, 1);
								}
								iLocal_119++;
								iLocal_115[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_116[iVar0], 1))
						{
							func_485(&(iLocal_170[iVar0]), iVar13, 1);
						}
						iLocal_119++;
						iLocal_115[iVar0]++;
					}
				}
				else if (iLocal_115[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_41 && !iLocal_38) && !bLocal_57) && (((!bLocal_66 && !bLocal_65) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_170[iVar0])) || func_484(iLocal_170[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_59)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_170[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_923(iLocal_170[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_939(iVar2, iLocal_170[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_481(iLocal_170[iVar0]);
												iLocal_115[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_170[iVar0], (fParam1 * fLocal_85[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
							}
						}
						else
						{
							iLocal_115[iVar0]++;
						}
					}
					else
					{
						iLocal_115[iVar0]++;
					}
				}
				else if (iLocal_115[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_170[iVar0]))
						{
							iLocal_115[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_170[iVar0], (fParam1 * fLocal_85[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_114[iVar0], &cLocal_151))
							{
								if (fLocal_92 > (fLocal_84[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_151)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_170[iVar0]);
							}
						}
					}
					else
					{
						iLocal_115[iVar0]++;
					}
				}
				else if (iLocal_115[iVar0] == 5)
				{
					if (!iLocal_170[iVar0] == iLocal_174)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_170[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_170[iVar0]);
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
						if (!bLocal_49 && !bLocal_62)
						{
							if (iLocal_114[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_114[iVar0], &cLocal_151);
							}
						}
						if (!bLocal_39)
						{
							if (!bLocal_67)
							{
								__LIB_15__::func_906(iLocal_170[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_170[iVar0]));
						}
					}
					iLocal_119 = (iLocal_119 - 1);
					iLocal_115[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_124 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_450();
	}
}

void func_481(int iParam0)//Position - 0x385F0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_452(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_484(int iParam0)//Position - 0x38732
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_63)
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

int func_485(var uParam0, int iParam1, bool bParam2)//Position - 0x38790
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_15__::func_907(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_160);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_907());
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_458(), -1, false, false);
				if (bLocal_69)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_458());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_70)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_15__::func_893(iVar0);
			bLocal_68 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_487(int iParam0)//Position - 0x3889E
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_165 >= -1 && iLocal_166 >= -1)
	{
		while (iVar0 == iLocal_165 || iVar0 == iLocal_166)
		{
			iVar0++;
		}
	}
	else if (iLocal_165 >= -1)
	{
		if (iVar0 == iLocal_165)
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

void func_488(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x38A17
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_50)
	{
		if (!func_489(Param0, Param1, fParam2, 200f))
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

int func_489(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x38A8A
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_50)
		{
			if (!iLocal_37)
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

float func_490(int iParam0)//Position - 0x38AD1
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_151);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_151))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_151);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_151);
	return fVar0;
}

void func_492(int iParam0)//Position - 0x38B87
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
		iVar0 = iLocal_123;
		while (iVar0 < 50)
		{
			switch (iLocal_117[iVar0])
			{
				case 0:
					if (!iLocal_162[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_136[iVar0 /*3*/], fLocal_90, fLocal_90, fLocal_90, false, true, 0))
						{
							iLocal_125++;
							iLocal_117[iVar0]++;
						}
					}
					else
					{
						iLocal_117[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_120)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_169[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_162[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_162[iVar0]))
							{
								if ((iLocal_37 || iLocal_51) || (!bLocal_68 && !func_489(Local_136[iVar0 /*3*/], Var1, 5f, fLocal_103)))
								{
									if (bLocal_47)
									{
										func_488(Local_136[iVar0 /*3*/], Var1, fLocal_96);
									}
									iLocal_169[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_162[iVar0], Local_136[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_162[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_169[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_169[iVar0], fLocal_86[iVar0], fLocal_87[iVar0], fLocal_88[iVar0], fLocal_89[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_162[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_169[iVar0], __LIB_15__::func_908()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_169[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_162[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_169[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_169[iVar0], __LIB_15__::func_909()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_169[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_169[iVar0], true);
									iLocal_125 = (iLocal_125 - 1);
									iLocal_120++;
									iLocal_117[iVar0]++;
									bLocal_68 = true;
								}
							}
						}
						else
						{
							iLocal_125 = (iLocal_125 - 1);
							iLocal_120++;
							iLocal_117[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_169[iVar0], true) };
						}
						if (fLocal_104 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_104 * fLocal_104))
						{
							if (!__LIB_15__::func_939(iLocal_169[iVar0], iParam0, 0))
							{
								if (!bLocal_39)
								{
									__LIB_15__::func_906(iLocal_169[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_169[iVar0]));
								}
								iLocal_120 = (iLocal_120 - 1);
								iLocal_117[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_117[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_123 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_453();
	}
}

void func_493(int iParam0, float fParam1, int iParam2)//Position - 0x38E7E
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
			fLocal_92 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_122;
		while (iVar0 < 150 && !bVar17)
		{
			if (iLocal_112[iVar0] != 99)
			{
				if (iLocal_112[iVar0] == 0)
				{
					if (iLocal_111[iVar0] > 0 && iLocal_161[iVar0] != 0)
					{
						if (!iLocal_37)
						{
							if (fLocal_92 < (fLocal_75[iVar0] + 20000f))
							{
								if (fLocal_92 >= (fLocal_75[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_894(iLocal_161[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_113[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_161[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_113[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_113[iVar0]), 1);
									iLocal_127++;
									iLocal_112[iVar0]++;
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
								func_495(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_92 - fLocal_75[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_490(iLocal_111[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_161[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_113[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_161[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_113[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_113[iVar0]), 1);
									iLocal_127++;
									iLocal_112[iVar0]++;
								}
								else
								{
									func_495(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_495(iVar0, 1090519040);
					}
				}
				else if (iLocal_112[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_111[iVar0], &cLocal_151);
					bVar11 = false;
					if (BitTest(iLocal_113[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_64 && ((!BitTest(iLocal_113[iVar0], 2) && bVar13) || (BitTest(iLocal_113[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_458());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_458());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_167[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_161[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_161[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_111[iVar0], &cLocal_151)) && bVar11)
						{
							if (fLocal_92 >= (fLocal_75[iVar0] - (fLocal_105 * fParam1)))
							{
								if ((iLocal_51 || iParam2) || (!bLocal_68 && !func_489(Local_135[iVar0 /*3*/], Var8, 5f, fLocal_103)))
								{
									if (bLocal_47)
									{
										func_488(Local_135[iVar0 /*3*/], Var8, fLocal_96);
									}
									iLocal_167[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_161[iVar0], Local_135[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_161[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_167[iVar0], 0);
									}
									if (uLocal_60 && !BitTest(iLocal_113[iVar0], 0))
									{
										func_487(iLocal_167[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_167[iVar0], Local_135[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_167[iVar0], fLocal_71[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_161[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_161[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_167[iVar0], 5f);
									}
									if (BitTest(iLocal_113[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_167[iVar0], true);
									}
									if (!BitTest(iLocal_113[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_167[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_167[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_167[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_167[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161[iVar0]);
									iLocal_127 = (iLocal_127 - 1);
									iLocal_112[iVar0]++;
									bLocal_68 = true;
								}
								else if (fLocal_92 > fLocal_75[iVar0])
								{
									iLocal_127 = (iLocal_127 - 1);
									func_495(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_112[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_133 || iLocal_133 == 0)) || iLocal_51) || iParam2)
					{
						if (!BitTest(iLocal_113[iVar0], 1))
						{
							if (BitTest(iLocal_113[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
								iVar15 = 2;
							}
							else if (!bLocal_64 && ((!BitTest(iLocal_113[iVar0], 2) && bVar13) || (BitTest(iLocal_113[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_458());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_458());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_167[iVar0], false))
							{
								if (!bLocal_68 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_167[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_167[iVar0], true), Var8) < 10000f || iParam2) || iLocal_51)
										{
											func_485(&(iLocal_167[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_113[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_167[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_111[iVar0], &cLocal_151);
							if (fLocal_92 >= fLocal_75[iVar0])
							{
								if (8 > iLocal_118)
								{
									fVar9 = (fLocal_92 - fLocal_75[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_111[iVar0], &cLocal_151))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_111[iVar0], &cLocal_151))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_167[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_111[iVar0], fVar9, &cLocal_151) };
											if (!func_489(Var6, Var8, 5f, fLocal_103) && func_489(Var7, Var8, 5f, fLocal_103))
											{
												if (!BitTest(iLocal_113[iVar0], 1))
												{
													func_485(&(iLocal_167[iVar0]), iVar15, 0);
												}
												func_495(iVar0, 1090519040);
											}
											else if (((!bLocal_68 || BitTest(iLocal_113[iVar0], 1)) || iLocal_51) || iParam2)
											{
												if (func_479(&(iLocal_167[iVar0]), iLocal_111[iVar0], fVar9, 1, 0, 0, 1, bLocal_65))
												{
													if (!BitTest(iLocal_113[iVar0], 1))
													{
														func_485(&(iLocal_167[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_167[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_167[iVar0], fParam1);
													iLocal_118++;
													iLocal_112[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_113[iVar0], 1))
											{
												func_485(&(iLocal_167[iVar0]), iVar15, 0);
											}
											func_495(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_111[iVar0], &cLocal_151))
									{
										if (!BitTest(iLocal_113[iVar0], 1))
										{
											func_485(&(iLocal_167[iVar0]), iVar15, 0);
										}
										func_495(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_113[iVar0], 1))
									{
										func_485(&(iLocal_167[iVar0]), iVar15, 0);
									}
									func_495(iVar0, 1090519040);
								}
							}
							else if (iLocal_48 && !bLocal_56)
							{
								if (!BitTest(iLocal_113[iVar0], 1))
								{
									func_485(&(iLocal_167[iVar0]), iVar15, 0);
								}
								func_495(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_113[iVar0], 1))
							{
								func_485(&(iLocal_167[iVar0]), iVar15, 0);
							}
							func_495(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_133 = iVar0;
					}
				}
				else if (iLocal_112[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_167[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_167[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_167[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_46)
									{
										if ((!bLocal_41 && !iLocal_38) && func_484(iLocal_167[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_132 || iLocal_132 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_924(iLocal_167[iVar0], iVar5) || __LIB_15__::func_939(iVar5, iLocal_167[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_132 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_61 && !BitTest(iLocal_113[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_132 || iLocal_132 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_167[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_132 = iVar0;
										}
									}
									if (bVar18)
									{
										func_481(iLocal_167[iVar0]);
										iLocal_112[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_167[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_167[iVar0]);
							}
						}
						else
						{
							iLocal_112[iVar0]++;
						}
					}
					else
					{
						iLocal_112[iVar0]++;
					}
				}
				else if (iLocal_112[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_167[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_167[iVar0]))
						{
							iLocal_112[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_167[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_167[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_167[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_111[iVar0], &cLocal_151))
							{
								if (fLocal_92 > (fLocal_75[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_111[iVar0], &cLocal_151)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_167[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_167[iVar0]);
							}
						}
					}
					else
					{
						iLocal_112[iVar0]++;
					}
				}
				else if (iLocal_112[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_167[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_167[iVar0]);
					}
					iLocal_118 = (iLocal_118 - 1);
					func_495(iVar0, fVar10);
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
			iLocal_122 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_132 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_133 = 0;
		}
	}
	else
	{
		func_454();
	}
}

void func_495(int iParam0, float fParam1)//Position - 0x39A1D
{
	int iVar0;
	if (!iLocal_161[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_167[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_167[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_167[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_167[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_167[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_70)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_39)
	{
		if (!bLocal_67)
		{
			__LIB_15__::func_893(iVar0);
			__LIB_15__::func_906(iLocal_167[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_167[iParam0]));
		}
	}
	if (!bLocal_49 && !bLocal_62)
	{
		if (iLocal_111[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_111[iParam0], &cLocal_151);
		}
	}
	iLocal_112[iParam0] = 99;
}

void func_496(int iParam0, float fParam1, float fParam2)//Position - 0x39B78
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
			func_488(Var1, Var4, fVar5);
		}
	}
}

void func_497(int iParam0, float fParam1)//Position - 0x39BFB
{
	if (!bLocal_50)
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

void func_498(int iParam0, float fParam1)//Position - 0x39C49
{
	if (!bLocal_50)
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

void func_499(int iParam0, float fParam1)//Position - 0x39C97
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_106 + 2000f);
		fVar2 = (fLocal_107 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_128 == 0)
				{
					Local_147 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_106) };
					iLocal_128++;
				}
				else if (iLocal_128 == 1)
				{
					Local_148 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_128++;
				}
				else if (!bLocal_68)
				{
					if (Local_147.f_0 > Local_148.f_0)
					{
						fVar3 = Local_147.f_0;
						Local_147.f_0 = Local_148.f_0;
						Local_148.f_0 = fVar3;
					}
					if (Local_147.f_1 > Local_148.f_1)
					{
						fVar3 = Local_147.f_1;
						Local_147.f_1 = Local_148.f_1;
						Local_148.f_1 = fVar3;
					}
					if (Local_147.f_2 > Local_148.f_2)
					{
						fVar3 = Local_147.f_2;
						Local_147.f_2 = Local_148.f_2;
						Local_148.f_2 = fVar3;
					}
					Local_147 = { Local_147 - Vector(fLocal_110, fLocal_110, fLocal_110) };
					Local_148 = { Local_148 + Vector(fLocal_110, fLocal_110, fLocal_110) };
					PATHFIND::SET_ROADS_IN_AREA(Local_147, Local_148, false, false);
					fLocal_106 = fVar1;
					iLocal_128 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_131 == 0)
			{
				Local_149 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_107) };
				iLocal_131++;
			}
			else if (iLocal_131 == 1)
			{
				Local_150 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_131++;
			}
			else if (!bLocal_68 && !bVar4)
			{
				if (Local_149.f_0 > Local_150.f_0)
				{
					fVar3 = Local_149.f_0;
					Local_149.f_0 = Local_150.f_0;
					Local_150.f_0 = fVar3;
				}
				if (Local_149.f_1 > Local_150.f_1)
				{
					fVar3 = Local_149.f_1;
					Local_149.f_1 = Local_150.f_1;
					Local_150.f_1 = fVar3;
				}
				if (Local_149.f_2 > Local_150.f_2)
				{
					fVar3 = Local_149.f_2;
					Local_149.f_2 = Local_150.f_2;
					Local_150.f_2 = fVar3;
				}
				Local_149 = { Local_149 - Vector(fLocal_110, fLocal_110, fLocal_110) };
				Local_150 = { Local_150 + Vector(fLocal_110, fLocal_110, fLocal_110) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_149, Local_150, 1);
				fLocal_107 = fVar2;
				iLocal_131 = 0;
			}
		}
	}
}

void func_502()//Position - 0x39FD2
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	fVar0 = 0f;
	if (iLocal_253 == 0)
	{
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_283, 1) < __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_282, 1))
		{
			fLocal_336 = (300f - __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_283, 1));
			fLocal_336 = (fLocal_336 / 300f);
			if (fLocal_336 < fLocal_290)
			{
				fLocal_336 = fLocal_290;
			}
			if (fLocal_336 > 1f)
			{
				fLocal_336 = 1f;
			}
			if (fLocal_289 > 10260.811f)
			{
				iLocal_253 = 1;
			}
		}
		else
		{
			fLocal_336 = (250f - __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_282, 1));
			fLocal_336 = (fLocal_336 / 220f);
			if (fLocal_336 < fLocal_290)
			{
				fLocal_336 = fLocal_290;
			}
			if (fLocal_336 > 1f)
			{
				fLocal_336 = 1f;
			}
			if (fLocal_289 > 15158.107f)
			{
				iLocal_253 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_212))
		{
			iLocal_212 = __LIB_14__::func_866(Local_313.f_0, 1, 5);
		}
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
		{
			bVar1 = true;
			fVar0 = -30f;
		}
		if (fLocal_289 >= 23715.678f && fLocal_289 < 28477.678f)
		{
			bVar1 = true;
		}
		if (fLocal_289 >= 58550.062f && fLocal_289 < 63927.9f)
		{
			bVar1 = true;
		}
		if (fLocal_289 >= 70515.734f && fLocal_289 < 76783.734f)
		{
			bVar1 = true;
		}
		if (fLocal_289 > 20000f)
		{
			if (func_503())
			{
				bVar2 = true;
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			fLocal_291 = (fLocal_291 + 0.025f);
			if (fLocal_291 > 1.25f)
			{
				fLocal_291 = 1.25f;
			}
		}
		else
		{
			if (fLocal_291 > 1f)
			{
				fLocal_291 = (fLocal_291 - 0.025f);
			}
			if (fLocal_291 < 1f)
			{
				fLocal_291 = 1f;
			}
		}
		fVar3 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_313.f_0, 1);
		if (bVar2)
		{
			fLocal_292 = (fLocal_292 + 0.025f);
			if (fLocal_292 > 180f)
			{
				fLocal_292 = 180f;
			}
			if (fVar3 > 5f)
			{
				fVar3 = 5f;
			}
		}
		else
		{
			fLocal_292 = (fLocal_292 - 0.025f);
			if (fLocal_292 < 170f)
			{
				fLocal_292 = 170f;
			}
		}
		fLocal_336 = (fLocal_292 - fVar3);
		fLocal_336 = (fLocal_336 / 130f);
		if (fLocal_336 < fLocal_290)
		{
			fLocal_336 = fLocal_290;
		}
		if (fLocal_336 > fLocal_291)
		{
			fLocal_336 = fLocal_291;
		}
	}
	if (fLocal_290 < 0.7f)
	{
		if (fLocal_336 > fLocal_290)
		{
			fLocal_290 = fLocal_336;
		}
		if (fLocal_289 > 12000f)
		{
			fLocal_290 = (fLocal_290 + 0.001f);
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_201 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_201, fVar0);
	}
}

int func_503()//Position - 0x3A27D
{
	if (__LIB_15__::func_925(PLAYER::PLAYER_PED_ID(), Local_313.f_0))
	{
		return 1;
	}
	return 0;
}

void func_507()//Position - 0x3A37C
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(300, "PAP3A2");
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, "PAP3A2"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_508()//Position - 0x3A3A6
{
	Local_135[0 /*3*/] = { 511.206f, 261.3451f, 102.3948f };
	fLocal_71[0] = -0.0108f;
	fLocal_72[0] = -0.0073f;
	fLocal_73[0] = 0.8187f;
	fLocal_74[0] = -0.574f;
	iLocal_111[0] = 1;
	fLocal_75[0] = 4830f;
	iLocal_161[0] = 0;
	Local_135[1 /*3*/] = { 439.2651f, 292.9166f, 102.4979f };
	fLocal_71[1] = -0.0095f;
	fLocal_72[1] = 0.0129f;
	fLocal_73[1] = 0.5734f;
	fLocal_74[1] = 0.8191f;
	iLocal_111[1] = 2;
	fLocal_75[1] = 7272f;
	iLocal_161[1] = joaat("washington");
	Local_135[2 /*3*/] = { 402.5407f, 299.8293f, 102.4301f };
	fLocal_71[2] = -0.0149f;
	fLocal_72[2] = -0.009f;
	fLocal_73[2] = 0.817f;
	fLocal_74[2] = -0.5764f;
	iLocal_111[2] = 3;
	fLocal_75[2] = 8262f;
	iLocal_161[2] = joaat("sentinel");
	Local_135[3 /*3*/] = { 366.4927f, 309.5941f, 103.0008f };
	fLocal_71[3] = -0.007f;
	fLocal_72[3] = -0.0165f;
	fLocal_73[3] = 0.7886f;
	fLocal_74[3] = -0.6146f;
	iLocal_111[3] = 4;
	fLocal_75[3] = 9318f;
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_161[3] = 0;
	}
	else
	{
		iLocal_161[3] = joaat("asterope");
	}
	Local_135[4 /*3*/] = { 216.6715f, 353.7352f, 105.7779f };
	fLocal_71[4] = -0.02f;
	fLocal_72[4] = -0.0268f;
	fLocal_73[4] = 0.8125f;
	fLocal_74[4] = -0.582f;
	iLocal_111[4] = 5;
	fLocal_75[4] = 13542f;
	iLocal_161[4] = joaat("baller");
	Local_135[5 /*3*/] = { 277.4835f, 419.0747f, 118.9695f };
	fLocal_71[5] = -0.0142f;
	fLocal_72[5] = -0.0284f;
	fLocal_73[5] = 0.8705f;
	fLocal_74[5] = -0.4911f;
	iLocal_111[5] = 6;
	fLocal_75[5] = 15984f;
	iLocal_161[5] = joaat("asterope");
	Local_135[6 /*3*/] = { 237.4069f, 472.6873f, 124.6924f };
	fLocal_71[6] = -0.0221f;
	fLocal_72[6] = -0.079f;
	fLocal_73[6] = 0.9966f;
	fLocal_74[6] = -0.0111f;
	iLocal_111[6] = 7;
	fLocal_75[6] = 17370f;
	iLocal_161[6] = joaat("bullet");
	Local_135[7 /*3*/] = { 256.0805f, 540.5441f, 140.1842f };
	fLocal_71[7] = -0.0117f;
	fLocal_72[7] = -0.0054f;
	fLocal_73[7] = 0.8057f;
	fLocal_74[7] = 0.5922f;
	iLocal_111[7] = 8;
	fLocal_75[7] = 20208f;
	iLocal_161[7] = joaat("taxi");
	Local_135[8 /*3*/] = { 282.645f, 612.2068f, 154.1533f };
	fLocal_71[8] = 0.0177f;
	fLocal_72[8] = -0.0114f;
	fLocal_73[8] = 0.4243f;
	fLocal_74[8] = 0.9053f;
	iLocal_111[8] = 9;
	fLocal_75[8] = 23177f;
	iLocal_161[8] = joaat("asterope");
	Local_135[9 /*3*/] = { 273.0108f, 629.6464f, 155.7711f };
	fLocal_71[9] = -0.0256f;
	fLocal_72[9] = -0.0694f;
	fLocal_73[9] = 0.9907f;
	fLocal_74[9] = 0.1141f;
	iLocal_111[9] = 10;
	fLocal_75[9] = 23639f;
	iLocal_161[9] = joaat("baller");
	Local_135[10 /*3*/] = { 283.0059f, 647.7762f, 158.7737f };
	fLocal_71[10] = 0.1093f;
	fLocal_72[10] = -0.0014f;
	fLocal_73[10] = -0.1659f;
	fLocal_74[10] = 0.9801f;
	iLocal_111[10] = 11;
	fLocal_75[10] = 24629f;
	iLocal_161[10] = joaat("buccaneer");
	Local_135[11 /*3*/] = { 279.8875f, 654.1951f, 160.2324f };
	fLocal_71[11] = -0.0411f;
	fLocal_72[11] = -0.1096f;
	fLocal_73[11] = 0.9777f;
	fLocal_74[11] = 0.1744f;
	iLocal_111[11] = 12;
	fLocal_75[11] = 24893f;
	iLocal_161[11] = joaat("feltzer2");
	Local_135[12 /*3*/] = { 339.0951f, 462.1592f, 148.3102f };
	fLocal_71[12] = 0.0028f;
	fLocal_72[12] = -0.0627f;
	fLocal_73[12] = 0.9664f;
	fLocal_74[12] = -0.2492f;
	iLocal_111[12] = 13;
	fLocal_75[12] = 30523f;
	iLocal_161[12] = joaat("baller2");
	Local_135[13 /*3*/] = { 472.2878f, 393.8821f, 138.2691f };
	fLocal_71[13] = 0.0207f;
	fLocal_72[13] = 0.0216f;
	fLocal_73[13] = 0.2261f;
	fLocal_74[13] = 0.9736f;
	iLocal_111[13] = 14;
	fLocal_75[13] = 37056f;
	iLocal_161[13] = joaat("feltzer2");
	Local_135[14 /*3*/] = { 511.7101f, 333.8549f, 131.9026f };
	fLocal_71[14] = 0.0424f;
	fLocal_72[14] = 0.043f;
	fLocal_73[14] = 0.6257f;
	fLocal_74[14] = 0.7777f;
	iLocal_111[14] = 15;
	fLocal_75[14] = 38508f;
	iLocal_161[14] = joaat("sentinel");
	Local_135[15 /*3*/] = { 602.7618f, 355.3197f, 118.527f };
	fLocal_71[15] = -0.0574f;
	fLocal_72[15] = 0.044f;
	fLocal_73[15] = -0.5245f;
	fLocal_74[15] = 0.8483f;
	iLocal_111[15] = 16;
	fLocal_75[15] = 44316f;
	iLocal_161[15] = joaat("asterope");
	Local_135[16 /*3*/] = { 785.3267f, 340.3435f, 115.391f };
	fLocal_71[16] = -0.0268f;
	fLocal_72[16] = -0.0051f;
	fLocal_73[16] = 0.7557f;
	fLocal_74[16] = 0.6544f;
	iLocal_111[16] = 17;
	fLocal_75[16] = 49794f;
	iLocal_161[16] = 0;
	Local_135[17 /*3*/] = { 845.4529f, 360.061f, 117.3146f };
	fLocal_71[17] = 0.0148f;
	fLocal_72[17] = 0.0047f;
	fLocal_73[17] = -0.4289f;
	fLocal_74[17] = 0.9032f;
	iLocal_111[17] = 18;
	fLocal_75[17] = 51642f;
	iLocal_161[17] = joaat("buccaneer");
	Local_135[18 /*3*/] = { 880.3807f, 403.1809f, 118.6872f };
	fLocal_71[18] = -0.0194f;
	fLocal_72[18] = -0.0024f;
	fLocal_73[18] = 0.9411f;
	fLocal_74[18] = 0.3375f;
	iLocal_111[18] = 19;
	fLocal_75[18] = 53292f;
	iLocal_161[18] = joaat("baller2");
	Local_135[19 /*3*/] = { 911.8809f, 467.8841f, 120.2237f };
	fLocal_71[19] = -0.0008f;
	fLocal_72[19] = -0.0055f;
	fLocal_73[19] = 0.999f;
	fLocal_74[19] = 0.0435f;
	iLocal_111[19] = 20;
	fLocal_75[19] = 55536f;
	iLocal_161[19] = joaat("coquette");
	Local_135[20 /*3*/] = { 916.1319f, 504.171f, 119.8686f };
	fLocal_71[20] = -0.0102f;
	fLocal_72[20] = 0.0531f;
	fLocal_73[20] = 0.0939f;
	fLocal_74[20] = 0.9941f;
	iLocal_111[20] = 21;
	fLocal_75[20] = 56657f;
	iLocal_161[20] = joaat("sentinel");
	Local_135[21 /*3*/] = { 1072.1567f, 441.7333f, 91.5848f };
	fLocal_71[21] = 0.0051f;
	fLocal_72[21] = -0.0205f;
	fLocal_73[21] = 0.9189f;
	fLocal_74[21] = -0.394f;
	iLocal_111[21] = 22;
	fLocal_75[21] = 65264f;
	iLocal_161[21] = joaat("feltzer2");
	Local_135[22 /*3*/] = { 1109.0264f, 416.9391f, 83.1078f };
	fLocal_71[22] = 0.0054f;
	fLocal_72[22] = -0.0016f;
	fLocal_73[22] = 0.9268f;
	fLocal_74[22] = 0.3756f;
	iLocal_111[22] = 23;
	fLocal_75[22] = 66584f;
	iLocal_161[22] = joaat("sentinel");
	Local_135[23 /*3*/] = { 1120.3549f, 421.655f, 82.8984f };
	fLocal_71[23] = 0.0164f;
	fLocal_72[23] = 0.0015f;
	fLocal_73[23] = 0.9267f;
	fLocal_74[23] = 0.3754f;
	iLocal_111[23] = 24;
	fLocal_75[23] = 66980f;
	iLocal_161[23] = joaat("coquette");
	Local_135[24 /*3*/] = { 1119.2665f, 402.3738f, 83.0242f };
	fLocal_71[24] = -0.002f;
	fLocal_72[24] = -0.0141f;
	fLocal_73[24] = -0.3897f;
	fLocal_74[24] = 0.9208f;
	iLocal_111[24] = 25;
	fLocal_75[24] = 67046f;
	iLocal_161[24] = joaat("sentinel");
	Local_135[25 /*3*/] = { 1154.8197f, 355.7718f, 90.8335f };
	fLocal_71[25] = -0.0158f;
	fLocal_72[25] = 0.006f;
	fLocal_73[25] = 0.9599f;
	fLocal_74[25] = -0.2799f;
	iLocal_111[25] = 26;
	fLocal_75[25] = 68564f;
	iLocal_161[25] = joaat("coquette");
	Local_135[26 /*3*/] = { 983.0621f, 173.4691f, 80.5089f };
	fLocal_71[26] = -0.0049f;
	fLocal_72[26] = 0.0019f;
	fLocal_73[26] = 0.9411f;
	fLocal_74[26] = 0.338f;
	iLocal_111[26] = 27;
	fLocal_75[26] = 77247f;
	iLocal_161[26] = joaat("feltzer2");
	Local_136[0 /*3*/] = { 852.1576f, -124.6406f, 78.5719f };
	fLocal_86[0] = -0.0278f;
	fLocal_87[0] = -0.0124f;
	fLocal_88[0] = 0.9574f;
	fLocal_89[0] = 0.2872f;
	iLocal_162[0] = joaat("sentinel");
	Local_135[27 /*3*/] = { 812.6069f, -185.2938f, 72.7078f };
	fLocal_71[27] = -0.0002f;
	fLocal_72[27] = 0.0004f;
	fLocal_73[27] = 0.482f;
	fLocal_74[27] = 0.8762f;
	iLocal_111[27] = 28;
	fLocal_75[27] = 89655f;
	iLocal_161[27] = joaat("bjxl");
	Local_135[28 /*3*/] = { 718.7026f, -136.8279f, 74.7098f };
	fLocal_71[28] = -0.0057f;
	fLocal_72[28] = -0.0031f;
	fLocal_73[28] = 0.8765f;
	fLocal_74[28] = -0.4813f;
	iLocal_111[28] = 29;
	fLocal_75[28] = 93417f;
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_161[28] = 0;
	}
	else
	{
		iLocal_161[28] = joaat("bus");
	}
	Local_135[29 /*3*/] = { 708.8309f, -123.9532f, 74.4544f };
	fLocal_71[29] = -0.0127f;
	fLocal_72[29] = 0.023f;
	fLocal_73[29] = 0.482f;
	fLocal_74[29] = 0.8758f;
	iLocal_111[29] = 30;
	fLocal_75[29] = 93945f;
	iLocal_161[29] = joaat("baller2");
	Local_135[30 /*3*/] = { 686.3724f, -110.2447f, 74.0336f };
	fLocal_71[30] = -0.0118f;
	fLocal_72[30] = 0.016f;
	fLocal_73[30] = 0.4839f;
	fLocal_74[30] = 0.8749f;
	iLocal_111[30] = 31;
	fLocal_75[30] = 94869f;
	iLocal_161[30] = joaat("asterope");
	Local_135[31 /*3*/] = { 612.1208f, -67.3511f, 73.16f };
	fLocal_71[31] = 0.0707f;
	fLocal_72[31] = 0.0064f;
	fLocal_73[31] = -0.5441f;
	fLocal_74[31] = 0.836f;
	iLocal_111[31] = 32;
	fLocal_75[31] = 97311f;
	iLocal_161[31] = 0;
	Local_135[32 /*3*/] = { 605.6122f, -70.8522f, 72.6917f };
	fLocal_71[32] = 0.0678f;
	fLocal_72[32] = 0.0099f;
	fLocal_73[32] = -0.5536f;
	fLocal_74[32] = 0.83f;
	iLocal_111[32] = 33;
	fLocal_75[32] = 97443f;
	iLocal_161[32] = 0;
	Local_135[33 /*3*/] = { 523.7166f, -108.7238f, 63.2222f };
	fLocal_71[33] = 0.0044f;
	fLocal_72[33] = -0.0835f;
	fLocal_73[33] = 0.9375f;
	fLocal_74[33] = 0.3377f;
	iLocal_111[33] = 34;
	fLocal_75[33] = 100809f;
	iLocal_161[33] = joaat("baller");
	Local_135[34 /*3*/] = { 505.7021f, -127.9252f, 59.7848f };
	fLocal_71[34] = -0.0227f;
	fLocal_72[34] = -0.0599f;
	fLocal_73[34] = 0.9805f;
	fLocal_74[34] = 0.1858f;
	iLocal_111[34] = 35;
	fLocal_75[34] = 100941f;
	iLocal_161[34] = joaat("bjxl");
	Local_135[35 /*3*/] = { 510.6351f, -130.4515f, 59.3621f };
	fLocal_71[35] = 0.0002f;
	fLocal_72[35] = -0.062f;
	fLocal_73[35] = 0.9802f;
	fLocal_74[35] = 0.1878f;
	iLocal_111[35] = 36;
	fLocal_75[35] = 101139f;
	iLocal_161[35] = joaat("banshee");
	Local_135[36 /*3*/] = { 513.6044f, -124.3921f, 60.1873f };
	fLocal_71[36] = 0.0026f;
	fLocal_72[36] = -0.067f;
	fLocal_73[36] = 0.9725f;
	fLocal_74[36] = 0.223f;
	iLocal_111[36] = 37;
	fLocal_75[36] = 101337f;
	iLocal_161[36] = joaat("asterope");
	Local_135[37 /*3*/] = { 484.3174f, -155.8481f, 56.6016f };
	fLocal_71[37] = 0.0008f;
	fLocal_72[37] = -0.1155f;
	fLocal_73[37] = 0.7595f;
	fLocal_74[37] = -0.6402f;
	iLocal_111[37] = 38;
	fLocal_75[37] = 101865f;
	iLocal_161[37] = joaat("baller");
	Local_135[38 /*3*/] = { 515.339f, -244.6399f, 48.6464f };
	fLocal_71[38] = -0.0232f;
	fLocal_72[38] = -0.0304f;
	fLocal_73[38] = 0.9764f;
	fLocal_74[38] = 0.2127f;
	iLocal_111[38] = 39;
	fLocal_75[38] = 103845f;
	iLocal_161[38] = joaat("baller");
	Local_135[39 /*3*/] = { 508.6511f, -280.4524f, 46.7813f };
	fLocal_71[39] = 0.0219f;
	fLocal_72[39] = 0.013f;
	fLocal_73[39] = -0.2077f;
	fLocal_74[39] = 0.9779f;
	iLocal_111[39] = 40;
	fLocal_75[39] = 105165f;
	iLocal_161[39] = joaat("bus");
	Local_135[40 /*3*/] = { 496.9088f, -318.2034f, 44.9216f };
	fLocal_71[40] = 0.0249f;
	fLocal_72[40] = 0.0114f;
	fLocal_73[40] = 0.5613f;
	fLocal_74[40] = 0.8271f;
	iLocal_111[40] = 41;
	fLocal_75[40] = 105957f;
	iLocal_161[40] = joaat("asterope");
	Local_135[41 /*3*/] = { 482.1582f, -326.7783f, 45.4484f };
	fLocal_71[41] = 0.0144f;
	fLocal_72[41] = -0.029f;
	fLocal_73[41] = 0.8114f;
	fLocal_74[41] = -0.5836f;
	iLocal_111[41] = 42;
	fLocal_75[41] = 106287f;
	iLocal_161[41] = joaat("asterope");
	Local_135[42 /*3*/] = { 464.0194f, -319.4027f, 47.2238f };
	fLocal_71[42] = 0.0314f;
	fLocal_72[42] = -0.0059f;
	fLocal_73[42] = 0.9494f;
	fLocal_74[42] = 0.3125f;
	iLocal_111[42] = 43;
	fLocal_75[42] = 106353f;
	iLocal_161[42] = joaat("baller");
	Local_135[43 /*3*/] = { 459.4142f, -337.1878f, 47.1687f };
	fLocal_71[43] = 0.0061f;
	fLocal_72[43] = 0.076f;
	fLocal_73[43] = -0.2966f;
	fLocal_74[43] = 0.952f;
	iLocal_111[43] = 44;
	fLocal_75[43] = 106815f;
	iLocal_161[43] = joaat("baller2");
	Local_135[44 /*3*/] = { 386.0724f, -405.9861f, 46.3795f };
	fLocal_71[44] = 0.0131f;
	fLocal_72[44] = -0.0083f;
	fLocal_73[44] = -0.592f;
	fLocal_74[44] = 0.8058f;
	iLocal_111[44] = 45;
	fLocal_75[44] = 109389f;
	iLocal_161[44] = 0;
	Local_135[45 /*3*/] = { 344.1942f, -423.8685f, 44.294f };
	fLocal_71[45] = 0.0281f;
	fLocal_72[45] = -0.0016f;
	fLocal_73[45] = -0.3989f;
	fLocal_74[45] = 0.9166f;
	iLocal_111[45] = 46;
	fLocal_75[45] = 110643f;
	iLocal_161[45] = 0;
	Local_135[46 /*3*/] = { 295.9982f, -449.7546f, 42.994f };
	fLocal_71[46] = -0.0033f;
	fLocal_72[46] = -0.0207f;
	fLocal_73[46] = 0.9991f;
	fLocal_74[46] = 0.038f;
	iLocal_111[46] = 47;
	fLocal_75[46] = 113019f;
	iLocal_161[46] = 0;
	Local_137[0 /*3*/] = { 636.0844f, 221.427f, 98.7137f };
	fLocal_80[0] = 0.0558f;
	fLocal_81[0] = 0.0284f;
	fLocal_82[0] = 0.6062f;
	fLocal_83[0] = 0.7928f;
	iLocal_114[0] = 499;
	fLocal_84[0] = 900f;
	fLocal_85[0] = 1f;
	iLocal_163[0] = joaat("police3");
	iLocal_170[0] = Local_312[1 /*6*/];
	Local_137[1 /*3*/] = { 891.8881f, 426.6213f, 119.3326f };
	fLocal_80[1] = -0.0052f;
	fLocal_81[1] = -0.017f;
	fLocal_82[1] = 0.9645f;
	fLocal_83[1] = 0.2634f;
	iLocal_114[1] = 600;
	fLocal_84[1] = 35000f;
	fLocal_85[1] = 1f;
	iLocal_163[1] = joaat("pounder");
	Local_137[2 /*3*/] = { 545.7987f, 195.0462f, 100.8242f };
	fLocal_80[2] = 0.0227f;
	fLocal_81[2] = -0.0209f;
	fLocal_82[2] = -0.2162f;
	fLocal_83[2] = 0.9759f;
	iLocal_114[2] = 500;
	fLocal_84[2] = 40200f;
	fLocal_85[2] = 1f;
	iLocal_163[2] = joaat("police3");
	iLocal_170[2] = Local_312[0 /*6*/];
	Local_137[3 /*3*/] = { 1151.9595f, 370.9727f, 91.3383f };
	fLocal_80[3] = -0.0041f;
	fLocal_81[3] = -0.0063f;
	fLocal_82[3] = 0.3161f;
	fLocal_83[3] = 0.9487f;
	iLocal_114[3] = 601;
	fLocal_84[3] = 57000f;
	fLocal_85[3] = 1f;
	iLocal_163[3] = joaat("scrap");
	Local_137[4 /*3*/] = { 649.6518f, -14.6478f, 82.1775f };
	fLocal_80[4] = -0.0505f;
	fLocal_81[4] = -0.0332f;
	fLocal_82[4] = 0.9261f;
	fLocal_83[4] = -0.3725f;
	iLocal_114[4] = 602;
	fLocal_84[4] = 92000f;
	fLocal_85[4] = 1f;
	iLocal_163[4] = joaat("surfer");
	Local_137[5 /*3*/] = { 187.4046f, -359.7074f, 43.5742f };
	fLocal_80[5] = 0.0259f;
	fLocal_81[5] = 0.0031f;
	fLocal_82[5] = -0.3841f;
	fLocal_83[5] = 0.9229f;
	iLocal_114[5] = 501;
	fLocal_84[5] = 104000f;
	fLocal_85[5] = 1f;
	iLocal_163[5] = joaat("police3");
	iLocal_170[5] = Local_312[2 /*6*/];
}

void func_509(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3B94F
{
	struct<3> Var0;
	StringCopy(&cLocal_151, sParam0, 64);
	bLocal_47 = true;
	iLocal_52 = 0;
	iLocal_118 = 0;
	iLocal_119 = 0;
	iLocal_120 = 0;
	iLocal_121 = iParam1;
	iLocal_122 = 0;
	iLocal_123 = 0;
	iLocal_124 = 0;
	iLocal_128 = 0;
	iLocal_131 = 0;
	iLocal_129 = -1;
	iLocal_130 = -1;
	iLocal_132 = 0;
	iLocal_133 = 0;
	fLocal_106 = 0f;
	fLocal_107 = 0f;
	fLocal_92 = 0f;
	iLocal_53 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_139.f_0 = (Var0.f_0 - 100f);
		Local_139.f_1 = (Var0.f_1 - 100f);
		Local_139.f_2 = (Var0.f_2 - 100f);
		Local_140.f_0 = (Var0.f_0 + 100f);
		Local_140.f_1 = (Var0.f_1 + 100f);
		Local_140.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_139, Local_140, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_160);
	__LIB_15__::func_905();
	if (bParam3)
	{
		__LIB_14__::func_804(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_445();
}

void func_510()//Position - 0x3BA72
{
	switch (iLocal_294)
	{
		case 0:
			iLocal_294 = 1;
			break;
		case 1:
			func_284();
			if (__LIB_0__::func_695(Local_313.f_0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_212))
				{
					if (iLocal_322 == 0)
					{
						iLocal_322 = 1;
					}
				}
			}
			if (iLocal_323 == 1)
			{
				if (__LIB_0__::func_695(Local_313.f_0))
				{
					iLocal_294 = 2;
				}
			}
			break;
		case 2:
			iLocal_322 = 0;
			func_2(2);
			break;
	}
}

void func_511()//Position - 0x3BAE3
{
	struct<6> Var0;
	Var0 = { __LIB_13__::func_743() };
	switch (iLocal_294)
	{
		case 0:
			__LIB_0__::func_222(&uLocal_396, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			__LIB_0__::func_222(&uLocal_396, 3, 0, "BEVERLY", 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(691.2697f, 10.5739f, 83.1879f, 100f, false, true, false, false, false, false, 0);
			if (iLocal_298 == 1)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						__LIB_0__::func_84(500, 0);
					}
				}
			}
			iLocal_329 = 0;
			__LIB_0__::func_714(&iLocal_311);
			__LIB_14__::func_804(1);
			__LIB_0__::func_424(1);
			iLocal_294 = 1;
			break;
		case 1:
			if (!iLocal_329)
			{
				if (__LIB_14__::func_569(&uLocal_396, 50, "PAP3AAU", "PAP3A_INTRO", 9, 1, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 10f, 0);
					iLocal_329 = 1;
				}
			}
			else
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_14__::func_521())
					{
						iLocal_294 = 2;
					}
				}
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3A_INTRO_3"))
				{
					iLocal_294 = 2;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 186.16592f, 299.0473f, 86.186226f, 653.0208f, 137.61925f, 179.56116f, 133.5f, false, true, 0) && __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 339.0575f, 90f))
				{
					iLocal_294 = 2;
				}
			}
			func_284();
			if (__LIB_0__::func_695(Local_313.f_0))
			{
				if (__LIB_0__::func_687(Local_313.f_0, PLAYER::PLAYER_PED_ID(), 200f, 1))
				{
					iLocal_294 = 2;
				}
			}
			break;
		case 2:
			iLocal_322 = 0;
			func_2(1);
			break;
	}
}

void func_514()//Position - 0x3BCF4
{
	char* sVar0;
	switch (iLocal_294)
	{
		case 0:
			if (__LIB_0__::func_121(Local_312[0 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_312[0 /*6*/], false);
			}
			if (__LIB_0__::func_121(Local_312[2 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_312[2 /*6*/], false);
			}
			if (__LIB_0__::func_121(Local_313.f_0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_313.f_0, false);
			}
			if (iLocal_395 == 5)
			{
				if (__LIB_0__::func_692(Local_315[0 /*9*/]))
				{
					if (__LIB_0__::func_687(Local_315[0 /*9*/], PLAYER::PLAYER_PED_ID(), 100f, 1))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_315[0 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_315[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
				if (__LIB_0__::func_692(Local_315[2 /*9*/]))
				{
					if (__LIB_0__::func_687(Local_315[2 /*9*/], PLAYER::PLAYER_PED_ID(), 100f, 1))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_315[2 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_315[2 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
				if (__LIB_0__::func_692(Local_315[3 /*9*/]))
				{
					if (__LIB_0__::func_687(Local_315[3 /*9*/], PLAYER::PLAYER_PED_ID(), 100f, 1))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_315[3 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_315[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
			}
			HUD::CLEAR_PRINTS();
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("PAP3_FAIL");
			__LIB_0__::func_714(&iLocal_311);
			switch (iLocal_395)
			{
				case 0:
					break;
				case 1:
					sVar0 = "PAP3_08";
					break;
				case 4:
					sVar0 = "PAP3_LOSTP";
					break;
				case 5:
					sVar0 = "PAP3_POLIC";
					break;
				case 2:
					sVar0 = "PAP3_INJUR";
					break;
				case 3:
					sVar0 = "PAP3_KILL2";
					break;
			}
			if (iLocal_395 == 0)
			{
				__LIB_14__::func_872(1);
			}
			else
			{
				__LIB_14__::func_880(sVar0, 1);
			}
			iLocal_294 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_515();
				func_208(1);
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					__LIB_0__::func_325();
				}
				func_667(0);
			}
			else if (!bLocal_332)
			{
				if (iLocal_328 == 1)
				{
					if (iLocal_395 == 5)
					{
						__LIB_0__::func_222(&uLocal_396, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						bLocal_332 = __LIB_14__::func_535(&uLocal_396, "PAP3AAU", "PAP3A_FRANK", "PAP3A_FRANK_7", 7, 1, 0);
					}
				}
			}
			break;
	}
}

void func_515()//Position - 0x3BF2A
{
	int iVar0;
	func_444(0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_573);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_574);
	__LIB_0__::func_0(&Local_316);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_0__::func_0(&(Local_315[iVar0 /*9*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_8__::func_397(&(Local_312[iVar0 /*6*/]));
		iVar0++;
	}
	__LIB_8__::func_397(&Local_313);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		__LIB_8__::func_397(&(Local_314[iVar0 /*6*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		__LIB_0__::func_123(&(Local_321[iVar0 /*6*/]));
		iVar0++;
	}
	ENTITY::REMOVE_FORCED_OBJECT(634.4785f, -68.8406f, 74.2911f, 5f, joaat("prop_barrier_work04a"));
	ENTITY::REMOVE_FORCED_OBJECT(627.1672f, -73.8742f, 73.3072f, 5f, joaat("prop_barrier_work04a"));
	ENTITY::REMOVE_FORCED_OBJECT(653.2055f, -96.2269f, 73.4953f, 5f, joaat("prop_barrier_work04a"));
	ENTITY::REMOVE_FORCED_OBJECT(657.0881f, -91.6722f, 73.5133f, 5f, joaat("prop_barrier_work04a"));
	__LIB_0__::func_714(&iLocal_311);
	__LIB_0__::func_0(&(uLocal_214[0]));
	__LIB_0__::func_0(&(uLocal_214[1]));
	__LIB_0__::func_0(&(uLocal_214[2]));
	__LIB_0__::func_0(&(uLocal_214[3]));
	__LIB_0__::func_0(&(uLocal_214[4]));
	__LIB_0__::func_0(&(uLocal_214[5]));
	__LIB_0__::func_0(&(uLocal_214[6]));
	__LIB_0__::func_0(&(uLocal_214[7]));
	__LIB_0__::func_0(&(uLocal_214[8]));
	__LIB_0__::func_0(&(uLocal_214[9]));
	__LIB_8__::func_397(&(uLocal_213[0]));
	__LIB_8__::func_397(&(uLocal_213[1]));
	__LIB_8__::func_397(&(uLocal_213[2]));
	__LIB_8__::func_397(&(uLocal_213[3]));
	__LIB_8__::func_397(&(uLocal_213[4]));
	__LIB_8__::func_397(&(uLocal_213[5]));
	__LIB_8__::func_397(&(uLocal_213[6]));
	__LIB_8__::func_397(&(uLocal_213[7]));
	__LIB_8__::func_397(&(uLocal_213[8]));
	__LIB_8__::func_397(&(uLocal_213[9]));
	__LIB_0__::func_0(&iLocal_204);
	__LIB_8__::func_397(&iLocal_203);
}

void func_539()//Position - 0x3CC39
{
	__LIB_14__::func_806(0, 0);
	__LIB_13__::func_788();
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
	while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3"))
	{
		SYSTEM::WAIT(0);
	}
	if (func_324(1))
	{
		func_284();
		if (iLocal_323 == 1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_695(iLocal_201))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
					{
						iLocal_264 = 1;
					}
					else
					{
						iLocal_264 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_201, 366.9862f, -404.5475f, 44.8031f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_201, 105f);
				}
				else
				{
					__LIB_14__::func_865(&iLocal_201, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145, 1);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
					{
						iLocal_264 = 1;
					}
					else
					{
						iLocal_264 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_201, 366.9862f, -404.5475f, 44.8031f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_201, 105f);
				}
			}
			else
			{
				iLocal_201 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_COORDS(iLocal_201, 366.9862f, -404.5475f, 44.8031f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_201, 105f);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_313.f_0, false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_313.f_0, 341.2146f, -410.2309f, 44.1722f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_313.f_0, 111.4817f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_313.f_0, 5f);
		if (iLocal_256 == 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_313.f_0, false);
			VEHICLE::SET_VEHICLE_DAMAGE(Local_313.f_0, 0f, 2f, 0f, 400f, 200f, true);
			iLocal_256 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_312[0 /*6*/], false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_312[0 /*6*/], 349.6943f, -401.2252f, 44.3462f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_312[0 /*6*/], 100.5072f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_312[0 /*6*/], 5f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_312[2 /*6*/], false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_312[2 /*6*/], 328.86923f, -399.05005f, 44.815384f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_312[2 /*6*/], -57.309715f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_312[2 /*6*/], 5f);
	}
	bLocal_326 = true;
	iLocal_327 = 1;
	iLocal_284 = 1;
	__LIB_0__::func_433(iLocal_201, -1, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_316.f_0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_315[0 /*9*/]);
	if (!PED::IS_PED_IN_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], false))
	{
		PED::SET_PED_INTO_VEHICLE(Local_315[0 /*9*/], Local_312[0 /*6*/], -1);
	}
	if (!PED::IS_PED_IN_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], false))
	{
		PED::SET_PED_INTO_VEHICLE(Local_316.f_0, Local_312[0 /*6*/], 1);
	}
	VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_312[0 /*6*/], true);
	VEHICLE::SET_VEHICLE_SIREN(Local_312[0 /*6*/], false);
	PED::SET_PED_KEEP_TASK(Local_315[0 /*9*/], true);
	iLocal_229 = MISC::GET_GAME_TIMER();
	PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, true, true);
	PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, true, true);
	PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, true, true);
	PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, true, true);
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_315[0 /*9*/], Local_312[0 /*6*/], 231.64f, -347.1846f, 43.2866f, 30f, 0, 0, 786469, 20f, 150f);
	VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_312[0 /*6*/], true);
	iLocal_285 = 1;
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	iLocal_251 = 1;
	iLocal_309 = 5;
	iLocal_299[0] = 7;
	iLocal_296 = 6;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	iLocal_286 = MISC::GET_GAME_TIMER();
	iLocal_293 = 5;
	iLocal_294 = 0;
}

void func_544()//Position - 0x3D140
{
	__LIB_14__::func_806(0, 0);
	__LIB_13__::func_788();
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3");
	STREAMING::REQUEST_MODEL(joaat("polmav"));
	while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3") || !STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		SYSTEM::WAIT(0);
	}
	if (func_324(1))
	{
		func_284();
		if (iLocal_323 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_313.f_0, false))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_313.f_0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_695(iLocal_201))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
					{
						iLocal_264 = 1;
					}
					else
					{
						iLocal_264 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_201, 366.9862f, -404.5475f, 44.8031f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_201, 105f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_201, true, true, false);
				}
				else
				{
					__LIB_14__::func_865(&iLocal_201, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145, 1);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
					{
						iLocal_264 = 1;
					}
					else
					{
						iLocal_264 = 0;
					}
					ENTITY::SET_ENTITY_COORDS(iLocal_201, 366.9862f, -404.5475f, 44.8031f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_201, 105f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_201, true, true, false);
				}
			}
			else
			{
				iLocal_201 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_COORDS(iLocal_201, 366.9862f, -404.5475f, 44.8031f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_201, 105f);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_313.f_0, false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_313.f_0, 341.2146f, -410.2309f, 44.1722f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_313.f_0, 111.4817f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_313.f_0, 5f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_313.f_0, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_313.f_0, true, true, false);
		if (iLocal_256 == 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_313.f_0, false);
			VEHICLE::SET_VEHICLE_DAMAGE(Local_313.f_0, 0f, 2f, 0f, 400f, 200f, true);
			iLocal_256 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_312[0 /*6*/], false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_312[0 /*6*/], 349.6943f, -401.2252f, 44.3462f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_312[0 /*6*/], 100.5072f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_312[0 /*6*/], 5f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_312[2 /*6*/], false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_312[2 /*6*/], 328.86923f, -399.05005f, 44.815384f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_312[2 /*6*/], -57.309715f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_312[2 /*6*/], 5f);
	}
	if (__LIB_0__::func_121(iLocal_201))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 4096, -1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_203))
	{
		iLocal_203 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 379.96f, -400.05f, 85.23f, 108.26f, true, true, false);
		iLocal_204 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_203, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
		VEHICLE::SET_VEHICLE_LIVERY(iLocal_203, 0);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_203);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203, true, true, false);
		VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_203, true, true);
		TASK::TASK_HELI_MISSION(iLocal_204, iLocal_203, 0, Local_316.f_0, 0f, 50f, 60f, 16, 0.1f, 60f, -1f, 60, 55, -1f, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_203, true);
	}
	__LIB_0__::func_433(iLocal_201, -1, 1);
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		AUDIO::TRIGGER_MUSIC_EVENT("PAP3_STOP");
	}
	bLocal_272 = true;
	iLocal_286 = MISC::GET_GAME_TIMER();
	iLocal_293 = 4;
	iLocal_294 = 0;
}

void func_545()//Position - 0x3D4B1
{
	__LIB_14__::func_806(0, 0);
	__LIB_13__::func_788();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	TASK::REQUEST_WAYPOINT_RECORDING("Pap3aRoll");
	if (func_324(1))
	{
		func_284();
		if (iLocal_323 == 1)
		{
			if (__LIB_0__::func_695(iLocal_201))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
				{
					iLocal_264 = 1;
				}
				else
				{
					iLocal_264 = 0;
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_201, true, true, false);
			}
			else
			{
				__LIB_14__::func_865(&iLocal_201, 429.1563f, 126.8527f, 99.4028f, 70.3603f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145, 1);
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
				{
					iLocal_264 = 1;
				}
				else
				{
					iLocal_264 = 0;
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_201, true, true, false);
			}
		}
	}
	iLocal_334 = 1;
	iLocal_575 = 1;
	iLocal_576 = 0;
	iLocal_577 = -1;
	while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Pap3aRoll"))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_121(iLocal_201))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 4096, -1);
		}
	}
	__LIB_0__::func_433(iLocal_201, -1, 1);
	func_471();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	func_284();
	SYSTEM::WAIT(400);
	MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, false, false, false, false, false, false, 0);
	iLocal_286 = MISC::GET_GAME_TIMER();
	iLocal_293 = 2;
	iLocal_294 = 0;
}

void func_546()//Position - 0x3D5F7
{
	__LIB_14__::func_806(0, 0);
	MISC::CLEAR_AREA(336.4843f, 132.4985f, 102.0139f, 30f, true, false, false, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_695(iLocal_201))
		{
			if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
			{
				iLocal_264 = 1;
			}
			else
			{
				iLocal_264 = 0;
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_201, true, true, false);
		}
		else
		{
			__LIB_14__::func_865(&iLocal_201, 336.4843f, 132.4985f, 102.0139f, 249.9272f, 0, 0, 1, 1, 1, joaat("carbonizzare"), 1, 145, 1);
			if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
			{
				iLocal_264 = 1;
			}
			else
			{
				iLocal_264 = 0;
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_201, true, true, false);
		}
	}
	else
	{
		iLocal_201 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
		{
			iLocal_264 = 1;
		}
		else
		{
			iLocal_264 = 0;
		}
	}
	if (__LIB_0__::func_121(iLocal_201))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 4096, -1);
		}
	}
	__LIB_0__::func_433(iLocal_201, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_0__::func_84(800, 0);
	iLocal_293 = 0;
	iLocal_294 = 0;
}

void func_650()//Position - 0x491FD
{
	int iVar0;
	Local_282 = { 260.3616f, 339.5469f, 104.5709f };
	Local_283 = { 421.7929f, 295.649f, 102.0579f };
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
	STREAMING::REQUEST_MODEL(joaat("U_F_Y_PoppyMich"));
	STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(300, "PAP3A2");
	PED::ADD_RELATIONSHIP_GROUP("SecurityGroup", &iLocal_573);
	PED::ADD_RELATIONSHIP_GROUP("PoppyGroup", &iLocal_574);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_282, 50f, true, true, false, false, false, false, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_283, 50f, true, true, false, false, false, false, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(234.21411f, 350.2852f, 113.38758f, 672.33514f, 212.36073f, 90.18399f, 47.25f, false, false, true);
	func_662();
	iLocal_322 = 0;
	iLocal_323 = 0;
	bLocal_325 = false;
	iLocal_328 = 0;
	bLocal_326 = false;
	iLocal_327 = 0;
	iLocal_329 = 0;
	bLocal_330 = false;
	iLocal_324 = 0;
	iLocal_331 = 0;
	iLocal_575 = 0;
	iLocal_256 = 0;
	iLocal_257 = 0;
	iLocal_334 = 0;
	bLocal_330 = false;
	iLocal_236 = 0;
	iLocal_308 = 0;
	iLocal_251 = 0;
	iLocal_253 = 0;
	iLocal_284 = 0;
	iLocal_255 = 0;
	iLocal_259 = 0;
	__LIB_0__::func_712(50, 1, 0);
	iLocal_295 = 0;
	iLocal_296 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_299[iVar0] = 0;
		iVar0++;
	}
	__LIB_16__::func_329(&uLocal_343);
	__LIB_16__::func_328(&uLocal_343, 820.2385f, -46.3501f, 79.5901f);
	__LIB_16__::func_328(&uLocal_343, 796.7191f, -82.9061f, 79.5978f);
	__LIB_16__::func_328(&uLocal_343, 802.1686f, -86.5395f, 79.5984f);
	__LIB_16__::func_328(&uLocal_343, 827.0104f, -50.6043f, 79.5877f);
	__LIB_16__::func_327(&uLocal_343);
	MISC::CLEAR_AREA_OF_VEHICLES(691.2697f, 10.5739f, 83.1879f, 100f, false, false, false, false, false, false, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_178(71) == 1 || __LIB_0__::func_720(50))
	{
		iLocal_331 = 1;
	}
	else
	{
		iLocal_331 = 0;
	}
	fLocal_292 = 170f;
}

void func_662()//Position - 0x4984F
{
	Local_313.f_1 = { 722.7029f, 65.28743f, 82.59053f };
	Local_313.f_4 = 141f;
	Local_313.f_5 = joaat("cogcabrio");
	Local_314[0 /*6*/].f_1 = { 703.1887f, 230.0058f, 91.6438f };
	Local_314[0 /*6*/].f_4 = 59.6823f;
	Local_314[0 /*6*/].f_5 = joaat("jackal");
	Local_314[1 /*6*/].f_1 = { 754.2217f, -163.2057f, 73.7662f };
	Local_314[1 /*6*/].f_4 = 238f;
	Local_314[1 /*6*/].f_5 = joaat("sentinel");
	Local_314[6 /*6*/].f_1 = { 881.5699f, 39.6837f, 77.4769f };
	Local_314[6 /*6*/].f_4 = 314f;
	Local_314[6 /*6*/].f_5 = joaat("pounder");
	Local_314[7 /*6*/].f_1 = { 806.9825f, -83.9695f, 79.5911f };
	Local_314[7 /*6*/].f_4 = 55f;
	Local_314[7 /*6*/].f_5 = joaat("pounder");
	Local_314[8 /*6*/].f_1 = { 894.0145f, -38.8992f, 77.7647f };
	Local_314[8 /*6*/].f_4 = 238f;
	Local_314[8 /*6*/].f_5 = joaat("jackal");
	Local_314[9 /*6*/].f_1 = { 903.1145f, -65.764f, 77.7647f };
	Local_314[9 /*6*/].f_4 = 57f;
	Local_314[9 /*6*/].f_5 = joaat("sentinel");
	Local_314[2 /*6*/].f_1 = { 639.101f, -97.6283f, 73.5104f };
	Local_314[2 /*6*/].f_4 = 230f;
	Local_314[2 /*6*/].f_5 = joaat("tiptruck");
	Local_314[3 /*6*/].f_1 = { 637.8901f, -75.7718f, 73.9779f };
	Local_314[3 /*6*/].f_4 = 312f;
	Local_314[3 /*6*/].f_5 = joaat("tiptruck");
	Local_314[4 /*6*/].f_1 = { 813.1224f, -60.5906f, 79.6415f };
	Local_314[4 /*6*/].f_4 = 151f;
	Local_314[4 /*6*/].f_5 = joaat("police3");
	Local_314[5 /*6*/].f_1 = { 806.468f, -69.288f, 79.6412f };
	Local_314[5 /*6*/].f_4 = 325f;
	Local_314[5 /*6*/].f_5 = joaat("police3");
	Local_312[0 /*6*/].f_1 = { 535.095f, 181.3821f, 99.4294f };
	Local_312[0 /*6*/].f_4 = 340.6452f;
	Local_312[0 /*6*/].f_5 = joaat("police3");
	Local_312[1 /*6*/].f_1 = { 699.5699f, 225.2489f, 91.5223f };
	Local_312[1 /*6*/].f_4 = 240.1702f;
	Local_312[1 /*6*/].f_5 = joaat("police3");
	Local_312[2 /*6*/].f_1 = { 827.4832f, -55.2525f, 79.5899f };
	Local_312[2 /*6*/].f_4 = 77f;
	Local_312[2 /*6*/].f_5 = joaat("police3");
	Local_315[0 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_315[1 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_315[2 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_315[3 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_316.f_5 = joaat("U_F_Y_PoppyMich");
	Local_320[0 /*9*/].f_1 = { 798.3842f, -76.0535f, 79.5907f };
	Local_320[0 /*9*/].f_4 = 46f;
	Local_320[0 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_320[1 /*9*/].f_1 = { 805.305f, -75.553f, 79.4485f };
	Local_320[1 /*9*/].f_4 = 46f;
	Local_320[1 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_320[2 /*9*/].f_1 = { 627.6722f, -84.7451f, 73.0863f };
	Local_320[2 /*9*/].f_4 = 123f;
	Local_320[2 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_320[3 /*9*/].f_1 = { 631.7634f, -77.7747f, 73.5139f };
	Local_320[3 /*9*/].f_4 = 270f;
	Local_320[3 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_320[4 /*9*/].f_1 = { 826.9551f, -57.2431f, 79.5911f };
	Local_320[4 /*9*/].f_4 = 48f;
	Local_320[4 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_320[5 /*9*/].f_1 = { 814.1181f, -64.4872f, 79.6434f };
	Local_320[5 /*9*/].f_4 = 52f;
	Local_320[5 /*9*/].f_5 = joaat("S_M_Y_Cop_01");
	Local_321[0 /*6*/].f_1 = { 634.4785f, -68.8406f, 74.2911f };
	Local_321[0 /*6*/].f_4 = 24f;
	Local_321[0 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_321[1 /*6*/].f_1 = { 627.1672f, -73.8742f, 73.3072f };
	Local_321[1 /*6*/].f_4 = 33f;
	Local_321[1 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_321[2 /*6*/].f_1 = { 653.2055f, -96.2269f, 73.4953f };
	Local_321[2 /*6*/].f_4 = 238f;
	Local_321[2 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_321[3 /*6*/].f_1 = { 657.0881f, -91.6722f, 73.5133f };
	Local_321[3 /*6*/].f_4 = 58f;
	Local_321[3 /*6*/].f_5 = joaat("prop_barrier_work04a");
	Local_321[4 /*6*/].f_1 = { 626.6002f, -89.5324f, 72.7673f };
	Local_321[4 /*6*/].f_4 = 72f;
	Local_321[4 /*6*/].f_5 = joaat("prop_barrel_01a");
	Local_321[5 /*6*/].f_1 = { 624.3754f, -88.3926f, 72.4953f };
	Local_321[5 /*6*/].f_4 = 14f;
	Local_321[5 /*6*/].f_5 = joaat("prop_barrel_01a");
	Local_321[6 /*6*/].f_1 = { 626.1615f, -85.4177f, 72.9135f };
	Local_321[6 /*6*/].f_4 = 323f;
	Local_321[6 /*6*/].f_5 = joaat("prop_barrel_01a");
	Local_321[7 /*6*/].f_1 = { 809.2114f, -64.1885f, 79.6407f };
	Local_321[7 /*6*/].f_4 = 236f;
	Local_321[7 /*6*/].f_5 = joaat("prop_barrier_work06a");
	Local_321[8 /*6*/].f_1 = { 815.4871f, -54.4268f, 79.5902f };
	Local_321[8 /*6*/].f_4 = 233f;
	Local_321[8 /*6*/].f_5 = joaat("prop_barrier_work06a");
	Local_321[9 /*6*/].f_1 = { 802.5724f, -72.9779f, 79.4857f };
	Local_321[9 /*6*/].f_4 = 232f;
	Local_321[9 /*6*/].f_5 = joaat("prop_barrier_work06a");
}

int func_663(var uParam0)//Position - 0x49E92
{
	int iVar0[1];
	int iVar1;
	iVar0[0] = joaat("jackal");
	switch (iLocal_184)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { 301.85f, 138.16f, 102.84f };
			uParam0->f_15 = 90f;
			uParam0->f_27 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_184 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_184 = 2;
			break;
		case 2:
			__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[0], 307.02f, 143.17f, 103.3f, 250.08f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 2);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_667(int iParam0)//Position - 0x4A017
{
	int iVar0;
	if (__LIB_14__::func_843())
	{
		func_208(iParam0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		AUDIO::TRIGGER_MUSIC_EVENT("PAP3_FAIL");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_POLICE_CHASE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_POLICE_CHASE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_3A_PHOTO_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_3A_PHOTO_SCENE");
		}
		func_676();
		__LIB_14__::func_804(0);
		__LIB_0__::func_106(&(uLocal_213[0]));
		__LIB_0__::func_106(&(uLocal_213[1]));
		__LIB_0__::func_106(&(uLocal_213[2]));
		__LIB_0__::func_106(&(uLocal_213[3]));
		__LIB_0__::func_106(&(uLocal_213[4]));
		__LIB_0__::func_106(&(uLocal_213[5]));
		__LIB_0__::func_106(&(uLocal_213[6]));
		__LIB_0__::func_106(&(uLocal_213[7]));
		__LIB_0__::func_106(&(uLocal_213[8]));
		__LIB_0__::func_106(&(uLocal_213[9]));
		__LIB_0__::func_124(&(uLocal_214[0]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[1]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[2]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[3]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[4]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[5]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[6]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[7]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[8]), 1, 0, 1);
		__LIB_0__::func_124(&(uLocal_214[9]), 1, 0, 1);
		__LIB_0__::func_124(&Local_316, 1, 0, 1);
		__LIB_0__::func_124(&iLocal_204, 1, 0, 1);
		__LIB_0__::func_106(&iLocal_203);
		if (__LIB_0__::func_121(Local_312[2 /*6*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_312[2 /*6*/], false);
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			__LIB_0__::func_124(&(Local_315[iVar0 /*9*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			__LIB_0__::func_106(&(Local_314[iVar0 /*6*/]));
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			__LIB_0__::func_106(&(Local_312[iVar0 /*6*/]));
			iVar0++;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_201 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_201, 0f);
		}
		PATHFIND::SET_ROADS_IN_AREA(318.94f, -411.6963f, 38.0267f, 421.5246f, -363.0107f, 52.0853f, true, true);
		PATHFIND::SET_ROADS_IN_AREA(796.4662f, -68.4078f, 79.522f, 974.3044f, -152.9081f, 72.6015f, true, true);
		PATHFIND::SET_ROADS_IN_AREA(683.3696f, 38.3284f, 83.277f, 707.9796f, -22.9872f, 82.654f, true, true);
		PATHFIND::SET_ROADS_IN_AREA(812.2689f, -40.7279f, 79.4878f, 858.4236f, -119.0339f, 78.3599f, true, true);
		__LIB_0__::func_345(&uLocal_561, 0, 0);
		func_444(0, 1);
	}
	__LIB_14__::func_871(&Local_200, 0, 0, 0);
	if (__LIB_0__::func_121(Local_313.f_0))
	{
		VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Local_313.f_0, false);
		VEHICLE::SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Local_313.f_0, 100);
	}
	__LIB_38__::func_814(0);
	__LIB_0__::func_424(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_676()//Position - 0x4A41E
{
	int iVar0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_316.f_5);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_315[iVar0 /*9*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_314[iVar0 /*6*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_312[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

