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
	int iLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	float fLocal_62[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_63[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_64[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_65[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_66[80] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_72[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_73[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_74[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_75[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_76[95] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_77[4] = { 0f, 0f, 0f, 0f };
	float fLocal_78[4] = { 0f, 0f, 0f, 0f };
	float fLocal_79[4] = { 0f, 0f, 0f, 0f };
	float fLocal_80[4] = { 0f, 0f, 0f, 0f };
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
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
	int iLocal_102[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_103[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_104[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_105[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_107[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108[4] = { 0, 0, 0, 0 };
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<3> Local_126[80];
	struct<3> Local_127[4];
	struct<3> Local_128[95];
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	char cLocal_142[64] = "";
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[4] = { 0, 0, 0, 0 };
	int iLocal_154[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_159[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_160[4] = { 0, 0, 0, 0 };
	int iLocal_161[95] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162[4] = { 0, 0, 0, 0 };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	var uLocal_166 = 13;
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
	int iLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	var uLocal_186 = 0;
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
	struct<3> Local_218 = { 0, 0, 0 } ;
	struct<3> Local_219 = { 0, 0, 0 } ;
	int iLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	struct<7> Local_225 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	struct<14> Local_234 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_235 = 0;
	struct<12> Local_236 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	struct<8> Local_240 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	struct<15> Local_248[3];
	struct<14> Local_249 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_250 = 0;
	struct<15> Local_251[3];
	struct<15> Local_252[3];
	struct<7> Local_253 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	struct<12> Local_262 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	struct<10> Local_271 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<12> Local_282 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	struct<10> Local_291 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<20> Local_302[26];
	struct<20> Local_303[2];
	struct<15> Local_304 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	struct<16> Local_310 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	struct<2> Local_315 = { 0, 0 } ;
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
	struct<15> Local_334 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	struct<24> Local_340[5];
	struct<3> Local_341 = { 0, 0, 0 } ;
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
	struct<3> Local_363 = { 0, 0, 0 } ;
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
	struct<3> Local_385 = { 0, 0, 0 } ;
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
	struct<3> Local_407 = { 0, 0, 0 } ;
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
	int iLocal_429[4] = { 0, 0, 0, 0 };
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 4;
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
	var uLocal_448 = 0;
	var uLocal_449 = 4;
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
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	bool bLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	bool bLocal_478 = 0;
	bool bLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	bool bLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490[5] = { 0, 0, 0, 0, 0 };
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
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
	int iLocal_518[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	float fLocal_537 = 0f;
	float fLocal_538 = 0f;
	float fLocal_539 = 0f;
	float fLocal_540 = 0f;
	float fLocal_541 = 0f;
	float fLocal_542 = 0f;
	struct<3> Local_543 = { 0, 0, 0 } ;
	struct<3> Local_544 = { 0, 0, 0 } ;
	struct<3> Local_545 = { 0, 0, 0 } ;
	float fLocal_546 = 0f;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	char* sLocal_549 = NULL;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int* iLocal_563 = NULL;
	int iLocal_564[4] = { 0, 0, 0, 0 };
	int* iLocal_565 = NULL;
	int iLocal_566[2] = { 0, 0 };
	int* iLocal_567 = NULL;
	int* iLocal_568 = NULL;
	int* iLocal_569 = NULL;
	int* iLocal_570 = NULL;
	int iLocal_571[2] = { 0, 0 };
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575 = 16;
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
	var uLocal_742 = -1;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 1000;
	var uLocal_750 = 1000;
	var uLocal_751 = 0;
	struct<6> Local_752 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_753 = 0;
	var uLocal_754 = 1092616192;
	var uLocal_755 = 1101004800;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 3;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 21;
	var uLocal_784 = 6;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	char cLocal_788[24] = "";
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	char cLocal_792[24] = "";
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
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
	bLocal_31 = true;
	bLocal_38 = true;
	bLocal_60 = true;
	fLocal_81 = 120f;
	fLocal_82 = 0f;
	fLocal_84 = 1f;
	fLocal_85 = 0f;
	fLocal_86 = 1f;
	fLocal_87 = 30f;
	fLocal_89 = 1f;
	fLocal_90 = 5f;
	fLocal_91 = 1f;
	fLocal_92 = 1f;
	fLocal_93 = 100f;
	fLocal_94 = 100f;
	fLocal_95 = 0f;
	fLocal_96 = 7000f;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_99 = 0.3f;
	fLocal_100 = 0.5f;
	fLocal_101 = 50f;
	iLocal_112 = -1;
	iLocal_120 = -1;
	iLocal_121 = -1;
	iLocal_180 = 3;
	fLocal_183 = 80f;
	fLocal_184 = 140f;
	fLocal_185 = 180f;
	iLocal_191 = 1;
	iLocal_192 = 65;
	iLocal_193 = 49;
	iLocal_194 = 64;
	iLocal_198 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_199 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_218 = { 0f, 0f, 0f };
	Local_219 = { 0f, 0f, 0f };
	iLocal_220 = -1;
	fLocal_542 = 1f;
	Local_545 = { -868.3934f, 152.2284f, 62.5499f };
	fLocal_546 = 174.5712f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1004();
		func_1002();
	}
	func_989();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_469)
		{
			if (func_984())
			{
				func_973();
			}
		}
		__LIB_0__::func_467();
		func_969();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FameOrShame", 0);
		switch (iLocal_223)
		{
			case 0:
				func_959();
				break;
			case 1:
				func_915();
				break;
			case 2:
				func_910();
				break;
			case 3:
				func_891();
				break;
			case 4:
				func_889();
				break;
			case 5:
				func_871();
				break;
			case 7:
				func_768();
				break;
			case 8:
				func_762();
				break;
			case 9:
				func_734();
				break;
			case 11:
				__LIB_0__::func_467();
				break;
			case 12:
				func_729();
				break;
			case 13:
				func_725();
				break;
			case 14:
				func_60();
				break;
			case 15:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x243
{
	func_48(0);
	func_43();
	if (__LIB_0__::func_611(&iLocal_521, 3000))
	{
		if (__LIB_0__::func_223())
		{
			__LIB_0__::func_469(2);
			switch (iLocal_224)
			{
				case 5:
				case 7:
					__LIB_0__::func_507(-868.919f, 199.3321f, 72.3914f, 242.1369f);
					break;
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_549, "family4_fail_1"))
			{
				__LIB_0__::func_507(-452.5382f, -346.4354f, 33.3646f, 128.5391f);
			}
			func_2();
		}
	}
}

void func_2()//Position - 0x2C5
{
	func_3();
	func_1002();
}

void func_3()//Position - 0x2D5
{
	int iVar0;
	iVar0 = 0;
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	__LIB_16__::func_318(&Local_752, 1, 0);
	func_6(1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
	{
		PED::DELETE_PED(&(iLocal_429[0]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_271.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[2]))
	{
		PED::DELETE_PED(&(iLocal_429[2]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_291.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_0))
	{
		PED::DELETE_PED(&Local_262);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_282.f_0))
	{
		PED::DELETE_PED(&Local_282);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_282.f_1);
	iVar0 = 0;
	while (iVar0 <= (Local_302.f_0 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_302[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_302[iVar0 /*20*/].f_1);
		ENTITY::REMOVE_FORCED_OBJECT(Local_302[iVar0 /*20*/].f_3, 0.5f, joaat("v_ilev_chair02_ped"));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_304.f_0))
	{
		PED::DELETE_PED(&Local_304);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_385.f_0))
	{
		OBJECT::DELETE_OBJECT(&Local_385);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
	{
		PED::DELETE_PED(&Local_310);
	}
	func_4();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_240.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_234.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_236.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_775))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_775, false);
	}
	VEHICLE::DELETE_ALL_TRAINS();
	if (HUD::DOES_BLIP_EXIST(iLocal_550))
	{
		HUD::REMOVE_BLIP(&iLocal_550);
	}
}

void func_4()//Position - 0x434
{
	int iVar0;
	iVar0 = 0;
	__LIB_17__::func_187(&Local_225, 0);
	__LIB_17__::func_187(&Local_240, 0);
	__LIB_17__::func_187(&iLocal_563, 0);
	__LIB_17__::func_187(&Local_234, 0);
	__LIB_17__::func_187(&Local_236, 0);
	iVar0 = 0;
	while (iVar0 <= (Local_251.f_0 - 1))
	{
		__LIB_17__::func_187(&(Local_251[iVar0 /*15*/]), 0);
		__LIB_17__::func_187(&(Local_252[iVar0 /*15*/]), 0);
		iVar0++;
	}
	__LIB_17__::func_187(&iLocal_565, 1);
	__LIB_17__::func_187(&iLocal_567, 0);
	__LIB_17__::func_187(&iLocal_568, 0);
	__LIB_17__::func_187(&iLocal_569, 0);
	__LIB_17__::func_187(&iLocal_570, 0);
	iVar0 = 0;
	while (iVar0 <= (iLocal_566 - 1))
	{
		__LIB_17__::func_187(&(iLocal_566[iVar0]), 0);
		iVar0++;
	}
}

void func_6(bool bParam0, bool bParam1)//Position - 0x57A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_142))
	{
		iLocal_44 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_151);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_60)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_17__::func_487());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_27();
			__LIB_17__::func_488();
			func_23();
		}
		else
		{
			func_19();
			func_18();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_18()//Position - 0xC08
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		iLocal_158[iVar0] = 0;
		Local_126[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_62[iVar0] = 0f;
		fLocal_63[iVar0] = 0f;
		fLocal_64[iVar0] = 0f;
		fLocal_65[iVar0] = 0f;
		iLocal_102[iVar0] = 0;
		fLocal_66[iVar0] = 0f;
		iLocal_103[iVar0] = 0;
		iLocal_152[iVar0] = 0;
		iLocal_104[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iLocal_159[iVar0] = 0;
		iVar0++;
	}
	iLocal_109 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_160[iVar0] = 0;
		Local_127[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_77[iVar0] = 0f;
		fLocal_78[iVar0] = 0f;
		fLocal_79[iVar0] = 0f;
		fLocal_80[iVar0] = 0f;
		iLocal_108[iVar0] = 0;
		iLocal_153[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_162[iVar0] = 0;
		iVar0++;
	}
	iLocal_111 = 0;
	iVar0 = 0;
	while (iVar0 < 95)
	{
		iLocal_161[iVar0] = 0;
		Local_128[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_71[iVar0] = 0f;
		fLocal_72[iVar0] = 0f;
		fLocal_73[iVar0] = 0f;
		fLocal_74[iVar0] = 0f;
		iLocal_105[iVar0] = 0;
		fLocal_75[iVar0] = 0f;
		iLocal_106[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iLocal_107[iVar0] = 0;
		iVar0++;
	}
	iLocal_110 = 0;
	iLocal_113 = 0;
	iLocal_116 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
}

void func_19()//Position - 0xD92
{
	func_22();
	__LIB_17__::func_483();
	func_20();
}

void func_20()//Position - 0xDA6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_161[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
			}
		}
		iLocal_106[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_105[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (!iLocal_154[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
		}
		iVar0++;
	}
}

void func_22()//Position - 0xF18
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_158[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_158[iVar0]));
			}
		}
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_102[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
			}
		}
		iLocal_103[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!iLocal_152[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
		}
		iVar0++;
	}
	iLocal_113 = 0;
	iLocal_109 = 0;
}

void func_23()//Position - 0x1017
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
				}
			}
			__LIB_17__::func_484(iLocal_161[iVar0]);
			__LIB_15__::func_908(iLocal_161[iVar0]);
		}
		iLocal_106[iVar0] = 0;
		iLocal_107[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_105[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (!iLocal_154[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
		}
		iVar0++;
	}
	iLocal_115 = 0;
}

void func_27()//Position - 0x1217
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_158[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
				}
			}
			__LIB_17__::func_484(iLocal_158[iVar0]);
			__LIB_15__::func_908(iLocal_158[iVar0]);
		}
		iLocal_103[iVar0] = 0;
		iLocal_104[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_102[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (!iLocal_152[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
		}
		iVar0++;
	}
	iLocal_113 = 0;
	iLocal_109 = 0;
}

void func_43()//Position - 0x16A7
{
	int iVar0;
	if (iLocal_222[iVar0] != 8 && iLocal_222[iVar0] != 7)
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, false, true, 0) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -231.798f, -2041.398f, 26.361f, -260.114f, -2021.864f, 34.161f, 39.2f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -252.133f, -2011.385f, 29.146f, -269.892f, -2032.251f, 32.146f, 16.5f))
		{
			if (!FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -251.28f, -2001.547f, 23.685f, -221.936f, -2007.784f, 26.685f, 38f))
			{
				func_47();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Local_302.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_302[iVar0 /*20*/]))
		{
			if (iLocal_222[iVar0] != 8 && iLocal_222[iVar0] != 7)
			{
				if (iLocal_223 == 3)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_302[iVar0 /*20*/].f_3, true) > 100f)
					{
						if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_302[iVar0 /*20*/].f_3, 0.5f, true))
						{
							Local_302[iVar0 /*20*/].f_14 = 0;
							PED::DELETE_PED(&(Local_302[iVar0 /*20*/]));
						}
					}
				}
				if (__LIB_17__::func_420(&(Local_302[iVar0 /*20*/]), &(Local_302[iVar0 /*20*/].f_10)) || func_45(&(Local_302[iVar0 /*20*/]), 20f, 0))
				{
					func_47();
				}
			}
			switch (iLocal_222[iVar0])
			{
				case 0:
					break;
				case 5:
					if (iLocal_223 == 4)
					{
						switch (iVar0)
						{
							case 0:
								break;
							case 1:
								break;
							case 7:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 7000)
								{
									func_44(&(Local_302[iVar0 /*20*/]), "back_right");
									iLocal_222[iVar0] = 6;
								}
								break;
							case 8:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
								{
									func_44(&(Local_302[iVar0 /*20*/]), "right");
									iLocal_222[iVar0] = 6;
								}
								break;
							case 18:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 10000)
								{
									func_44(&(Local_302[iVar0 /*20*/]), "forward");
									iLocal_222[iVar0] = 6;
								}
								break;
							case 19:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 10500)
								{
									func_44(&(Local_302[iVar0 /*20*/]), "right");
									iLocal_222[iVar0] = 6;
								}
								break;
							case 21:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 9000)
								{
									func_44(&(Local_302[iVar0 /*20*/]), "right");
									iLocal_222[iVar0] = 6;
								}
								break;
							case 23:
								if (CUTSCENE::GET_CUTSCENE_TIME() > 8000)
								{
									func_44(&(Local_302[iVar0 /*20*/]), "right");
									iLocal_222[iVar0] = 6;
								}
								break;
							}
					}
					break;
				case 6:
					iLocal_222[iVar0] = 0;
					break;
				case 7:
					if (PED::IS_PED_USING_ANY_SCENARIO(Local_302[iVar0 /*20*/]))
					{
						switch (iVar0)
						{
							case 0:
							case 3:
							case 6:
							case 9:
								PED::TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Local_302[iVar0 /*20*/], true);
								iLocal_222[iVar0] = 8;
								break;
							case 1:
							case 4:
							case 7:
								if (PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Local_302[iVar0 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_302[iVar0 /*20*/], 0f, 0.5f, 0f)))
								{
									TASK::TASK_SMART_FLEE_PED(Local_302[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									iLocal_222[iVar0] = 8;
								}
								break;
							case 2:
							case 10:
							case 13:
								if (__LIB_0__::func_611(&iLocal_531, 4000))
								{
									if (PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Local_302[iVar0 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_302[iVar0 /*20*/], 0f, 0.5f, 0f)))
									{
										TASK::TASK_SMART_FLEE_PED(Local_302[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										iLocal_222[iVar0] = 8;
									}
								}
								break;
							case 5:
							case 8:
							case 11:
							case 16:
								if (__LIB_0__::func_611(&iLocal_531, 2000))
								{
									PED::TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Local_302[iVar0 /*20*/], true);
									iLocal_222[iVar0] = 8;
								}
								break;
							case 12:
							case 15:
							case 18:
							case 21:
							case 24:
								PED::TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Local_302[iVar0 /*20*/], true);
								iLocal_222[iVar0] = 8;
								break;
							case 14:
							case 17:
							case 20:
							case 23:
								if (__LIB_0__::func_611(&iLocal_531, 2500))
								{
									PED::TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Local_302[iVar0 /*20*/], true);
									iLocal_222[iVar0] = 8;
								}
								break;
							case 19:
							case 22:
							case 25:
								if (__LIB_0__::func_611(&iLocal_531, 9000))
								{
									if (PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Local_302[iVar0 /*20*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_302[iVar0 /*20*/], 0f, 0.5f, 0f)))
									{
										TASK::TASK_SMART_FLEE_PED(Local_302[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										iLocal_222[iVar0] = 8;
									}
								}
								break;
						}
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(Local_302[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						iLocal_222[iVar0] = 8;
					}
					break;
				case 8:
					break;
			}
		}
		else if (!Local_302[iVar0 /*20*/].f_14)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_302[iVar0 /*20*/].f_3, true) < 150f)
			{
				STREAMING::REQUEST_MODEL(Local_302[iVar0 /*20*/].f_1);
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@elbows_on_knees@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@generic_skinny@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@left_elbow_on_knee@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@arms_folded@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@legs_crossed@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@proper@react_shock");
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@female@proper_skinny@react_shock");
				if (((((((STREAMING::HAS_MODEL_LOADED(Local_302[iVar0 /*20*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@elbows_on_knees@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@generic_skinny@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@left_elbow_on_knee@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@arms_folded@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@legs_crossed@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@proper@react_shock")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@female@proper_skinny@react_shock"))
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_302[iVar0 /*20*/].f_3, 0.5f, true))
					{
						Local_302[iVar0 /*20*/] = PED::CREATE_PED(26, Local_302[iVar0 /*20*/].f_1, Local_302[iVar0 /*20*/].f_3, Local_302[iVar0 /*20*/].f_9, true, true);
						PED::SET_PED_KEEP_TASK(Local_302[iVar0 /*20*/], true);
						ENTITY::SET_ENTITY_HEALTH(Local_302[iVar0 /*20*/], Local_302[iVar0 /*20*/].f_10, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_302[iVar0 /*20*/], 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_302[iVar0 /*20*/], true);
						PED::SET_PED_NAME_DEBUG(Local_302[iVar0 /*20*/], &(Local_302[iVar0 /*20*/].f_16));
						PED::SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(Local_302[iVar0 /*20*/], true);
						ENTITY::CREATE_FORCED_OBJECT(Local_302[iVar0 /*20*/].f_3, 0.5f, joaat("v_ilev_chair02_ped"), true);
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_302[iVar0 /*20*/], Local_302[iVar0 /*20*/].f_3, 0.5f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_302[iVar0 /*20*/], false, false);
						Local_302[iVar0 /*20*/].f_14 = 1;
						return;
					}
				}
			}
		}
		else if (iLocal_222[iVar0] != 8 && iLocal_222[iVar0] != 7)
		{
			if (PED::IS_PED_INJURED(Local_302[iVar0 /*20*/]))
			{
				func_47();
			}
		}
		iVar0++;
	}
}

void func_44(var uParam0, char* sParam1)//Position - 0x1DDC
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("A_M_Y_Hipster_03"):
			if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@male@elbows_on_knees@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@male@elbows_on_knees@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@male@generic_skinny@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@male@generic_skinny@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@male@left_elbow_on_knee@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@male@left_elbow_on_knee@react_shock", sParam1);
			}
			break;
		case joaat("A_F_Y_Hipster_03"):
			if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@arms_folded@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@arms_folded@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@legs_crossed@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@legs_crossed@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@proper@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@proper@react_shock", sParam1);
			}
			else if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(*uParam0, "amb@prop_human_seat_chair@female@proper_skinny@base", "base"))
			{
				TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(*uParam0, "amb@prop_human_seat_chair@female@proper_skinny@react_shock", sParam1);
			}
			break;
	}
}

int func_45(int iParam0, float fParam1, bool bParam2)//Position - 0x1EEC
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(*iParam0, true), true) < fParam1)
		{
			if (PED::CAN_PED_SEE_HATED_PED(*iParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true), 4f, true))
		{
			return 1;
		}
		if (bParam2)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(*iParam0, true), true) < 1.5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_47()//Position - 0x2002
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_302.f_0 - 1))
	{
		if (iLocal_222[iVar0] != 8 && iLocal_222[iVar0] != 7)
		{
			iLocal_222[iVar0] = 7;
		}
		iVar0++;
	}
	if (iLocal_531 == 0)
	{
		iLocal_531 = MISC::GET_GAME_TIMER();
	}
}

void func_48(bool bParam0)//Position - 0x2051
{
	if (!PED::IS_PED_INJURED(Local_310.f_0))
	{
		if (iLocal_515 != 22)
		{
			if (((__LIB_17__::func_420(&Local_310, &(Local_310.f_10)) || func_45(&Local_310, 30f, 0)) || PED::IS_PED_RAGDOLL(Local_310.f_0)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, false, true, 0) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_310.f_0, "missfam4", "base", 3))
				{
					TASK::STOP_ANIM_TASK(Local_310.f_0, "missfam4", "base", -8f);
				}
				ENTITY::DETACH_ENTITY(Local_385.f_0, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_385.f_2);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_385);
				TASK::TASK_SMART_FLEE_PED(Local_310.f_0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_310);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_310.f_1);
				iLocal_515 = 22;
			}
		}
		switch (iLocal_515)
		{
			case 0:
				iLocal_573 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_573, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_573, -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 6.7f, false, true, 0) || iLocal_502 >= 2)
					{
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_429[2], iLocal_573))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
									TASK::TASK_LOOK_AT_ENTITY(0, iLocal_429[2], -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_429[2], 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
									TASK::TASK_PERFORM_SEQUENCE(Local_310.f_0, iLocal_774);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
									iLocal_515++;
								}
								break;
							case 2:
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_573))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
									TASK::TASK_PERFORM_SEQUENCE(Local_310.f_0, iLocal_774);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
									iLocal_515++;
								}
								break;
							}
						}
				}
				break;
			case 1:
				switch (__LIB_14__::func_466())
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_429[2]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_310.f_0, true), ENTITY::GET_ENTITY_COORDS(iLocal_429[2], true), true) < 20f)
						{
							if (!PED::IS_PED_FACING_PED(Local_310.f_0, iLocal_429[2], 40f))
							{
								if (__LIB_38__::func_170(Local_310.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_429[2], 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
									TASK::TASK_PERFORM_SEQUENCE(Local_310.f_0, iLocal_774);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(Local_310.f_0, PLAYER::PLAYER_PED_ID(), 40f))
						{
							if (__LIB_38__::func_170(Local_310.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(Local_310.f_0, iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
							}
						}
						break;
					case 2:
						if (!PED::IS_PED_FACING_PED(Local_310.f_0, PLAYER::PLAYER_PED_ID(), 40f))
						{
							if (__LIB_38__::func_170(Local_310.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(Local_310.f_0, iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
							}
						}
						break;
				}
				break;
			case 22:
				break;
		}
	}
	else if (!Local_310.f_14)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_234.f_3, true) < 650f)
		{
			STREAMING::REQUEST_MODEL(Local_310.f_1);
			STREAMING::REQUEST_MODEL(Local_385.f_2);
			STREAMING::REQUEST_ANIM_DICT("missfam4");
			if ((STREAMING::HAS_MODEL_LOADED(Local_310.f_1) && STREAMING::HAS_MODEL_LOADED(Local_385.f_2)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam4"))
			{
				func_51(&Local_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_798, joaat("PLAYER"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_798, iLocal_796);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_310.f_0, iLocal_798);
				PED::SET_PED_CAN_RAGDOLL(Local_310.f_0, true);
				PED::SET_PED_CONFIG_FLAG(Local_310.f_0, 42, true);
				HUD::REMOVE_BLIP(&(Local_310.f_2));
				__LIB_0__::func_222(&uLocal_575, 6, Local_310.f_0, "groupie1", 0, 1);
				TASK::TASK_PLAY_ANIM(Local_310.f_0, "missfam4", "base", 1000f, -8f, -1, 49, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_310.f_0, false, false);
				Local_385.f_0 = OBJECT::CREATE_OBJECT(Local_385.f_2, Local_310.f_3 + Vector(1f, 0f, 0f), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_385.f_0, Local_310.f_0, PED::GET_PED_BONE_INDEX(Local_310.f_0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_385.f_0);
			}
		}
	}
	else if (bParam0)
	{
		__LIB_0__::func_630(236);
	}
}

void func_51(var uParam0)//Position - 0x25F6
{
	MISC::CLEAR_AREA(uParam0->f_3, 2f, true, false, false, false);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_3, uParam0->f_9, true, true);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
	PED::SET_PED_AS_ENEMY(*uParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_15, -1, true, true);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_10, 0);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_10);
	if (uParam0->f_12)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	}
	if (uParam0->f_13)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	uParam0->f_14 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_16));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	uParam0->f_2 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
}

void func_60()//Position - 0x28EA
{
	func_722();
	switch (iLocal_547)
	{
		case 0:
			func_719();
			break;
		case 1:
			func_617();
			break;
		case 2:
			func_579();
			break;
		case 3:
			func_577();
			break;
		case 4:
			func_480();
			break;
		case 5:
			func_61();
			break;
	}
}

void func_61()//Position - 0x294C
{
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	if (iLocal_548)
	{
		__LIB_0__::func_427(1059.502f, -291.9928f, 49.4891f, 332.7211f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_271.f_1);
	STREAMING::REQUEST_MODEL(Local_291.f_1);
	STREAMING::REQUEST_MODEL(Local_234.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
	STREAMING::REQUEST_MODEL(Local_236.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
	STREAMING::REQUEST_MODEL(Local_262.f_1);
	STREAMING::REQUEST_MODEL(Local_240.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
	func_478();
	if (iLocal_548)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(Local_271.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_291.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_234.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_236.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_262.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_240.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4")) || !CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1059.502f, -291.9928f, 49.4891f, 1000f, true, false, false, false);
	Local_234.f_0 = VEHICLE::CREATE_VEHICLE(Local_234.f_1, 1059.502f, -291.9928f, 49.4891f, 332.7211f, true, true, false);
	VEHICLE::SET_VEHICLE_STRONG(Local_234.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_234.f_0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_234.f_0, true, true, false);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_234.f_0, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_234.f_0, 0, 0);
	Local_236.f_0 = VEHICLE::CREATE_VEHICLE(Local_236.f_1, 1051.93f, -304.8f, 49.4891f, 332.7211f, true, true, false);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, false);
	ENTITY::SET_ENTITY_PROOFS(Local_236.f_0, true, true, true, true, true, false, false, false);
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_234.f_0, Local_236.f_0, 1f);
	func_424(2, 0);
	__LIB_0__::func_222(&uLocal_575, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0, -1);
	func_81(&(iLocal_429[0]), 0, Local_234.f_0, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429[0], true);
	__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
	Local_240.f_0 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkfamily4") - 3500f), "lkfamily4"), 332.2f, true, true, false);
	VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_240.f_0, true, true, false);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_240.f_0, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_240.f_0, 27, 0);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4", true);
	VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_240.f_0, false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_240.f_0, false);
	__LIB_16__::func_317(&Local_262, 27, Local_240.f_0, -1, 0);
	__LIB_0__::func_222(&uLocal_575, 5, Local_262.f_0, "lazlow", 0, 1);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_429[0], "Michael", 0, 0, 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_262.f_0, "Lazlow", 0, 0, 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_240.f_0, "Lazlows_car", 0, 0, 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_234.f_0, "family_4_truck", 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_236.f_0, "Family_4_trailer", 0, 0, 0);
	}
	else
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Family_4_trailer", 3, Local_236.f_1, 0);
	}
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lazlow_Jeans", 2, Local_407.f_2, 0);
	if (!iLocal_548)
	{
		STREAMING::LOAD_SCENE(1059.502f, -291.9928f, 49.4891f);
	}
	func_71(1, 1, 1, 0);
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	CAM::DO_SCREEN_FADE_IN(800);
	iLocal_501 = 2;
	iLocal_223 = 9;
}

int func_71(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2F98
{
	if (__LIB_0__::func_494(1, 0, 1) || iParam3)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
		HUD::CLEAR_HELP(true);
		HUD::CLEAR_PRINTS();
		if (bParam2)
		{
			__LIB_0__::func_429();
		}
		else
		{
			__LIB_0__::func_325();
		}
		HUD::DISPLAY_HUD(false);
		HUD::DISPLAY_RADAR(false);
		CAM::SET_WIDESCREEN_BORDERS(true, 500);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
		}
		else
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		}
		__LIB_16__::func_305();
		return 1;
	}
	return 0;
}

int func_81(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x32B9
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
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
				__LIB_13__::func_823(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_405(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_83(*iParam0, bParam6);
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

int func_83(int iParam0, bool bParam1)//Position - 0x33E4
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_174(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_174(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_152(iParam0, 3, 169))
					{
						func_368(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_152(iParam0, 12, 6))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 11))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 12, 10))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 12, 50))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 14, 59))
			{
				func_368(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_152(iParam0, 8, 22))
			{
				func_368(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_152(iParam0, 12, 14))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_152(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 4))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 12, 3))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 14, 82))
			{
				func_368(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_152(iParam0, 8, 76))
			{
				func_368(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_152(iParam0, 12, 1))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_152(iParam0, 12, 12))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 12, 15))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_152(iParam0, 3, 71))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_152(iParam0, 12, 7))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 12, 6))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_152(iParam0, 14, 88))
			{
				func_368(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_152(iParam0, 8, 17))
			{
				func_368(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_152(iParam0, 12, 11))
			{
				func_368(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0x1A81B
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
				if (!func_152(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_152(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_152(iParam0, 14, iVar4))
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
			if (!func_152(iParam0, 14, uVar8[iVar7]))
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

void func_174(int iParam0, int iParam1)//Position - 0x1EE97
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_367(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_185(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_15__::func_225(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_15__::func_983();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
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

void func_185(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1FE75
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
		iVar0 = __LIB_13__::func_716(iParam0);
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
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_365(iParam0, iVar1, &iVar2, 0))
			{
				func_368(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_363(iParam0, iVar1, &iVar2))
			{
				func_368(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_360(iParam0);
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
			func_191(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_191(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_191(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x20613
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
			func_319(iVar5, iParam1, iParam2, 1);
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
						func_319(iVar5, 10, 0, 1);
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
									func_319(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_191(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_319(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_316(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_191(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_310(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_319(iVar5, 14, uVar18[iVar1], 1);
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
							func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_319(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_191(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_301(iParam0);
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
						func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_191(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_300(iVar5, iVar24, iVar23, iVar25);
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
							func_191(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_191(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_191(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_191(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_191(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_191(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_191(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_310(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_300(iVar5, func_316(iParam0, 8, -1), iParam2, func_316(iParam0, 4, -1));
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
				func_234(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_300(iVar5, iParam2, iVar44, iVar45);
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
			func_310(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_300(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_191(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_191(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_300(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_300(iVar5, iVar58, iVar57, iParam2);
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
						func_191(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_300(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_191(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_211(iParam0, 9, iVar63))
						{
							func_191(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_191(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_191(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_191(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_316(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_316(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_191(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_191(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_191(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_191(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_191(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_191(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_191(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_191(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_191(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_191(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_301(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_191(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_191(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_192(iParam0, &uVar4))
		{
			func_191(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_191(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_191(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_191(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_316(iParam0, 3, -1), iVar10);
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
				func_191(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_192(int iParam0, var uParam1)//Position - 0x224BD
{
	int iVar0;
	int iVar1;
	*uParam1 = func_316(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_211(iParam0, iVar1, iVar0))
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

int func_211(int iParam0, int iParam1, int iParam2)//Position - 0x2677A
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
				if (!func_211(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_211(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_211(iParam0, 14, iVar6))
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
			if (!func_211(iParam0, 14, uVar11[iVar10]))
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
						return func_211(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_211(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_234(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2D496
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
	func_235(iParam0, bParam3, 0, -1);
}

void func_235(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2D4E3
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
		bVar3 = func_280(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_271(iParam0, iParam3);
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

int func_271(int iParam0, int iParam1)//Position - 0x3C6F0
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
				iVar3 = func_316(iParam0, 11, -1);
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
				iVar5 = func_316(iParam0, 11, -1);
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

int func_280(int iParam0, bool bParam1)//Position - 0x3CB4E
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
						iVar3 = func_316(iParam0, 11, -1);
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
						iVar5 = func_316(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
						iVar8 = func_316(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_316(iParam0, 11, -1), 0);
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
						iVar12 = func_316(iParam0, 8, -1);
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

int func_300(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x45A41
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
					iVar0 = func_300(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_300(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_301(int iParam0)//Position - 0x46D7C
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
		if (!func_306(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_306(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_306(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x47746
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_316(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4A12F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_360(iParam0))
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

int func_316(int iParam0, int iParam1, int iParam2)//Position - 0x4A3DE
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
				if (func_211(iParam0, iParam1, iVar0))
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
				if (func_211(iParam0, iParam1, iVar1))
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

void func_319(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4A55D
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
							func_319(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_319(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_319(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_319(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_319(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_319(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_319(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_319(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_319(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_319(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_360(int iParam0)//Position - 0x63232
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
				iVar1 = func_316(iParam0, 11, -1);
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
				iVar3 = func_316(iParam0, 11, -1);
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

int func_363(int iParam0, int iParam1, int iParam2)//Position - 0x635A4
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_152(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6366B
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_152(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2)//Position - 0x6392B
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
				if (func_152(iParam0, iParam1, iVar0))
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
				if (func_152(iParam0, iParam1, iVar1))
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

int func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x639CC
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
										func_368(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_368(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_367(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_365(iParam0, iVar10, &iVar4, 1))
							{
								func_368(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_368(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_368(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_368(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_368(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_368(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_368(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_368(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_368(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_368(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_365(iParam0, iVar10, &iVar4, 0))
		{
			func_368(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_363(iParam0, iVar10, &iVar4))
		{
			func_368(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_405(int iParam0)//Position - 0x680B2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_185(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_422(49))
				{
					iVar1 = func_367(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_406(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_422(44))
				{
					iVar1 = func_367(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_367(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_406(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_406(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_367(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_185(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_406(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6830F
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_409(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_409(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x684CA
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
								func_409(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_409(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_409(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_409(iParam0, 14, iVar5, 1, 0);
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
								func_409(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_409(iParam0, 14, 17, 1, 0);
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

int func_424(int iParam0, bool bParam1)//Position - 0x68D98
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
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_12__::func_894(iVar0);
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
		func_81(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_472(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_17__::func_203(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_472(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6E993
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_13__::func_823(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_405(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_83(*iParam0, bParam6);
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

int func_478()//Position - 0x6EB82
{
	CUTSCENE::REQUEST_CUTSCENE("Family_4_MCS_3_concat", 8);
	return 1;
}

void func_480()//Position - 0x6EC2B
{
	struct<3> Var0;
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck3"), true);
	if (iLocal_548)
	{
		__LIB_0__::func_427(503.0987f, -851.0613f, 24.0433f, 359.5455f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_271.f_1);
	STREAMING::REQUEST_MODEL(Local_291.f_1);
	STREAMING::REQUEST_MODEL(Local_234.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
	STREAMING::REQUEST_MODEL(Local_236.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
	STREAMING::REQUEST_MODEL(Local_240.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
	STREAMING::REQUEST_MODEL(Local_262.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_262.f_1, true);
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_MODEL(joaat("manana"));
	STREAMING::REQUEST_ANIM_DICT("missfam4");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
	func_576();
	if (iLocal_548)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_271.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_291.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_234.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_236.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_240.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_262.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("manana"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", false, -1)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !func_575())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_PED_POPULATION_BUDGET(2);
	MISC::CLEAR_AREA(502.97f, -860.93f, 24.15f, 10000f, true, false, false, false);
	Local_234.f_0 = VEHICLE::CREATE_VEHICLE(Local_234.f_1, 502.9799f, -860.9365f, 24.1538f, 358.903f, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_234.f_0, 5f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_234.f_0, true, true, false);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_234.f_0, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_234.f_0, 0, 0);
	ENTITY::SET_ENTITY_HEALTH(Local_234.f_0, 1500, 0);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_234.f_0, 1500f);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_234.f_0, 1500f);
	VEHICLE::SET_VEHICLE_STRONG(Local_234.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_234.f_0, true);
	AUDIO::SET_RADIO_TO_STATION_NAME("off");
	if (!Global_96892)
	{
		Local_236.f_0 = VEHICLE::CREATE_VEHICLE(Local_236.f_1, 502.9191f, -865.4985f, 24.2171f, 358.8516f, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_236.f_0, 5f);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, false);
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_234.f_0, Local_236.f_0, 1f);
		PHYSICS::ACTIVATE_PHYSICS(Local_234.f_0);
		PHYSICS::ACTIVATE_PHYSICS(Local_236.f_0);
	}
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 201, "lkfamily4", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_234.f_0, true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 202, "lkfamily4", true);
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 7000f);
		VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_236.f_0, true);
	}
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_234.f_0, -15f);
	Local_240.f_3 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 68000f, "lkfamily4") };
	Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 68000f, "lkfamily4") };
	Local_240.f_0 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Var0.f_2, true, true, false);
	VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_240.f_0, true, true, false);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_240.f_0, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_240.f_0, true);
	ENTITY::SET_ENTITY_PROOFS(Local_240.f_0, false, true, true, true, true, false, false, false);
	VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_240.f_0, 3);
	VEHICLE::SET_VEHICLE_COLOURS(Local_240.f_0, 27, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_240.f_0, false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_240.f_0, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_240.f_0, "FAMILY_4_LAZLOWS_CAR", 0f);
	__LIB_16__::func_317(&Local_262, 27, Local_240.f_0, -1, 0);
	PED::SET_PED_CAN_RAGDOLL(Local_262.f_0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_262.f_0, 3, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_0, true);
	__LIB_0__::func_222(&uLocal_575, 5, Local_262.f_0, "lazlow", 0, 1);
	func_424(2, 0);
	__LIB_0__::func_222(&uLocal_575, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0, -1);
	func_81(&(iLocal_429[0]), 0, Local_234.f_0, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429[0], true);
	__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
	func_574("lkfamily4", 1, 1, 1);
	func_573();
	fLocal_93 = 200f;
	iLocal_42 = 1;
	iLocal_47 = 1;
	iLocal_56 = 1;
	iLocal_54 = 1;
	func_572(1, 3, 11);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4", true);
	func_570(Local_240.f_0, 68000f);
	func_544(Local_240.f_0, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_240.f_0, true);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	func_543(joaat("sentinel"), 100);
	func_543(joaat("schafter2"), 100);
	func_543(joaat("taco"), 100);
	if (!iLocal_548)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_CHASE_RESTART");
	iLocal_488 = 3;
	iLocal_498 = 3;
	iLocal_509 = 6;
	iLocal_499 = 2;
	iLocal_508 = 5;
	fLocal_542 = 1f;
	Local_240.f_7 = 1f;
	iLocal_486 = MISC::GET_GAME_TIMER();
	while (!__LIB_0__::func_611(&iLocal_486, 1000))
	{
		SYSTEM::WAIT(0);
		func_544(Local_240.f_0, 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_234.f_0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_236.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_236.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0);
			}
		}
	}
	func_539(1, 0, 0, 1);
	iLocal_486 = MISC::GET_GAME_TIMER();
	iLocal_520 = MISC::GET_GAME_TIMER();
	__LIB_0__::func_229("family4_god_2", 4000, 1);
	__LIB_17__::func_789(4, "half way through truck chase", 1, 0, 0, 1);
	iLocal_223 = 7;
}

void func_539(bool bParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x75AAF
{
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_638();
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam2, 1f);
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
	}
	if (bParam3)
	{
		__LIB_16__::func_304();
	}
	else
	{
		__LIB_16__::func_305();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_543(int iParam0, int iParam1)//Position - 0x75B99
{
	if (Global_63313 == 32)
	{
		return;
	}
	Global_63314[Global_63313 /*2*/] = iParam0;
	Global_63314[Global_63313 /*2*/].f_1 = iParam1;
	Global_63313++;
}

void func_544(int iParam0, float fParam1)//Position - 0x75BCA
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_59 = false;
	if (!bLocal_41)
	{
		if (bLocal_40)
		{
			__LIB_15__::func_907();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_41 = true;
		}
	}
	else if (!bLocal_40)
	{
		__LIB_15__::func_912();
		bLocal_41 = false;
	}
	if (bLocal_40)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_34)
	{
		if (iLocal_29)
		{
			fLocal_86 = 0f;
		}
		else
		{
			fLocal_86 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_927(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_39 = 1;
					}
					else
					{
						iLocal_39 = 0;
					}
				}
				fLocal_83 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_84) * fLocal_86));
				if (bLocal_38)
				{
					__LIB_17__::func_492(iParam0, fLocal_83);
					__LIB_17__::func_491(iParam0, fLocal_93);
					if (fLocal_88 > 1000f)
					{
						if (iLocal_125 == 0)
						{
							__LIB_17__::func_490(iParam0, fLocal_93);
						}
						fVar0 = ((fLocal_83 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_125) * 2000f));
						__LIB_41__::func_29(iParam0, fVar0, fLocal_87);
						iLocal_125++;
						if (iLocal_125 > 2)
						{
							fLocal_88 = 0f;
						}
					}
					else
					{
						iLocal_125 = 0;
						fLocal_88 = (fLocal_88 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_83 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_46)
		{
			if (!iLocal_28)
			{
				func_561(iParam0, ((fParam1 * fLocal_84) * fLocal_86), 0);
				if (!iLocal_49)
				{
				}
				iLocal_49 = 0;
			}
			if (bLocal_31)
			{
				__LIB_41__::func_28(iParam0);
			}
			if (!iLocal_28)
			{
				func_547(iParam0, ((fParam1 * fLocal_84) * fLocal_86), 0);
			}
		}
		if (iLocal_36)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_163 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_129 = { ENTITY::GET_ENTITY_COORDS(iLocal_163, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_163, &fLocal_67, &fLocal_68, &fLocal_69, &fLocal_70);
				}
			}
			iLocal_36 = 0;
		}
		if (iLocal_35)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
			{
				__LIB_15__::func_908(iLocal_164);
				iLocal_164 = iLocal_163;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_164, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_164, Local_129, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_164, fLocal_67, fLocal_68, fLocal_69, fLocal_70);
			}
			fLocal_82 = fLocal_85;
			iLocal_28 = 1;
			iLocal_35 = 0;
		}
		if (iLocal_28)
		{
			while (!func_545(&iParam0, fLocal_82))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_29 = 1;
		}
		if (iLocal_42)
		{
			iLocal_42 = 0;
		}
	}
}

int func_545(int iParam0, float fParam1)//Position - 0x75E65
{
	if (!iLocal_43)
	{
		iLocal_28 = 1;
		func_19();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_112 == -1)
			{
				while (!__LIB_17__::func_481(iParam0, iLocal_112, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_33)
				{
					iLocal_29 = 1;
					fLocal_86 = 0f;
					iLocal_113 = 0;
					iLocal_115 = 0;
					iLocal_114 = 0;
					iLocal_109 = 0;
					iLocal_110 = 0;
					iLocal_111 = 0;
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
				}
			}
		}
		iLocal_43 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_84) * fLocal_86));
				__LIB_17__::func_481(iParam0, iLocal_112, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_83 = fParam1;
		iLocal_119 = 0;
		iLocal_122 = 0;
		fLocal_98 = 0f;
		fLocal_97 = 0f;
		func_547(*iParam0, ((1f * fLocal_84) * fLocal_86), 1);
		func_561(*iParam0, ((1f * fLocal_84) * fLocal_86), 1);
		__LIB_41__::func_28(*iParam0);
		if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
		{
			iLocal_29 = 0;
			iLocal_28 = 0;
			iLocal_43 = 0;
			return 1;
		}
	}
	return 0;
}

void func_547(int iParam0, float fParam1, bool bParam2)//Position - 0x7617D
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
		iVar0 = iLocal_115;
		while (iVar0 < 95)
		{
			if (iLocal_106[iVar0] != 99)
			{
				if (iLocal_106[iVar0] == 0)
				{
					if (iLocal_105[iVar0] > 0)
					{
						if (!iLocal_28)
						{
							if (fLocal_83 > (fLocal_75[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_896(iLocal_154[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_107[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_107[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_107[iVar0]), 1);
								iLocal_106[iVar0]++;
								iLocal_117++;
							}
						}
						else
						{
							fVar6 = (fLocal_83 - fLocal_75[iVar0]);
							fVar6 = (fVar6 * fLocal_76[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < __LIB_17__::func_480(iLocal_105[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_154[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_107[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_107[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_107[iVar0]), 1);
									iLocal_106[iVar0]++;
									iLocal_117++;
								}
								else
								{
									iLocal_106[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_106[iVar0] = 99;
					}
				}
				else if (iLocal_106[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
					if (BitTest(iLocal_107[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
					}
					else if (!bLocal_55 && ((!BitTest(iLocal_107[iVar0], 2) && bVar10) || (BitTest(iLocal_107[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_487());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_487());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_154[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_154[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
							{
								if (fLocal_83 >= (fLocal_75[iVar0] - (fLocal_96 * fParam1)))
								{
									if ((iLocal_42 || bParam2) || (!bLocal_59 && !__LIB_17__::func_486(Local_128[iVar0 /*3*/], Var5, 5f, fLocal_94)))
									{
										if (bLocal_38)
										{
											__LIB_32__::func_39(Local_128[iVar0 /*3*/], Var5, fLocal_87);
										}
										iLocal_161[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_154[iVar0], Local_128[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_154[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_161[iVar0], 0);
										}
										if (iLocal_51 && !BitTest(iLocal_107[iVar0], 0))
										{
											__LIB_17__::func_485(iLocal_161[iVar0]);
										}
										if (BitTest(iLocal_107[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_161[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_161[iVar0], Local_128[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_161[iVar0], fLocal_71[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_154[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161[iVar0], 5f);
										}
										if (!BitTest(iLocal_107[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_161[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_161[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_161[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
										iLocal_117 = (iLocal_117 - 1);
										iLocal_106[iVar0]++;
										bLocal_59 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_161[iVar0], Local_128[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_161[iVar0], fLocal_71[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_154[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_161[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
							iLocal_117 = (iLocal_117 - 1);
							iLocal_106[iVar0]++;
						}
					}
				}
				else if (iLocal_106[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
					if (!BitTest(iLocal_107[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_107[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
							iVar13 = 2;
						}
						else if (!bLocal_55 && ((!BitTest(iLocal_107[iVar0], 2) && bVar10) || (BitTest(iLocal_107[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(__LIB_17__::func_487());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_487());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false))
						{
							if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_161[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_161[iVar0], true), Var5) < 10000f || bParam2) || iLocal_42)
									{
										__LIB_32__::func_38(&(iLocal_161[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_107[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (fLocal_83 >= fLocal_75[iVar0])
						{
							if (20 > iLocal_110)
							{
								fVar6 = (fLocal_83 - fLocal_75[iVar0]);
								fVar6 = (fVar6 * fLocal_76[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_161[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_105[iVar0], fVar6, &cLocal_142) };
										if (((!__LIB_17__::func_486(Var3, Var5, 5f, fLocal_94) && __LIB_17__::func_486(Var4, Var5, 5f, fLocal_94)) && !iLocal_42) && !bParam2)
										{
											if (!BitTest(iLocal_107[iVar0], 1))
											{
												__LIB_32__::func_38(&(iLocal_161[iVar0]), iVar13, 1);
											}
											iLocal_110++;
											iLocal_106[iVar0]++;
										}
										else if (((!bLocal_59 || BitTest(iLocal_107[iVar0], 1)) || iLocal_42) || bParam2)
										{
											if (__LIB_17__::func_481(&(iLocal_161[iVar0]), iLocal_105[iVar0], fVar6, 1, 0, 0, bLocal_57, iLocal_56))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
												{
													if (BitTest(iLocal_107[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_161[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_161[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_161[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_161[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_107[iVar0], 1))
												{
													__LIB_32__::func_38(&(iLocal_161[iVar0]), iVar13, 1);
												}
												iLocal_110++;
												iLocal_106[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_107[iVar0], 1))
										{
											__LIB_32__::func_38(&(iLocal_161[iVar0]), iVar13, 1);
										}
										iLocal_110++;
										iLocal_106[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_107[iVar0], 1))
								{
									__LIB_32__::func_38(&(iLocal_161[iVar0]), iVar13, 1);
								}
								iLocal_110++;
								iLocal_106[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_107[iVar0], 1))
						{
							__LIB_32__::func_38(&(iLocal_161[iVar0]), iVar13, 1);
						}
						iLocal_110++;
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_32 && !iLocal_29) && !bLocal_48) && (((!bLocal_57 && !iLocal_56) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161[iVar0])) || func_552(iLocal_161[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_50)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_161[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_925(iLocal_161[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_941(iVar2, iLocal_161[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												__LIB_32__::func_37(iLocal_161[iVar0]);
												iLocal_106[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
						}
						else
						{
							iLocal_106[iVar0]++;
						}
					}
					else
					{
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
						{
							iLocal_106[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
							{
								if (fLocal_83 > (fLocal_75[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
						}
					}
					else
					{
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 5)
				{
					if (!iLocal_161[iVar0] == iLocal_165)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_161[iVar0]);
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
						if (!bLocal_40 && !bLocal_53)
						{
							if (iLocal_105[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
							}
						}
						if (!bLocal_30)
						{
							if (!bLocal_58)
							{
								__LIB_15__::func_908(iLocal_161[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
						}
					}
					iLocal_110 = (iLocal_110 - 1);
					iLocal_106[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_115 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_23();
	}
}

int func_552(int iParam0)//Position - 0x76EBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_54)
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

void func_561(int iParam0, float fParam1, int iParam2)//Position - 0x77609
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
			fLocal_83 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_113;
		while (iVar0 < 80 && !bVar17)
		{
			if (iLocal_103[iVar0] != 99)
			{
				if (iLocal_103[iVar0] == 0)
				{
					if (iLocal_102[iVar0] > 0 && iLocal_152[iVar0] != 0)
					{
						if (!iLocal_28)
						{
							if (fLocal_83 < (fLocal_66[iVar0] + 20000f))
							{
								if (fLocal_83 >= (fLocal_66[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_896(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_104[iVar0]), 1);
									iLocal_118++;
									iLocal_103[iVar0]++;
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
								__LIB_17__::func_489(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_83 - fLocal_66[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < __LIB_17__::func_480(iLocal_102[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_104[iVar0]), 1);
									iLocal_118++;
									iLocal_103[iVar0]++;
								}
								else
								{
									__LIB_17__::func_489(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						__LIB_17__::func_489(iVar0, 1090519040);
					}
				}
				else if (iLocal_103[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
					bVar11 = false;
					if (BitTest(iLocal_104[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_55 && ((!BitTest(iLocal_104[iVar0], 2) && bVar13) || (BitTest(iLocal_104[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_487());
						bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_487());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_152[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_152[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142)) && bVar11)
						{
							if (fLocal_83 >= (fLocal_66[iVar0] - (fLocal_96 * fParam1)))
							{
								if ((iLocal_42 || iParam2) || (!bLocal_59 && !__LIB_17__::func_486(Local_126[iVar0 /*3*/], Var8, 5f, fLocal_94)))
								{
									if (bLocal_38)
									{
										__LIB_32__::func_39(Local_126[iVar0 /*3*/], Var8, fLocal_87);
									}
									iLocal_158[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_152[iVar0], Local_126[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_152[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_158[iVar0], 0);
									}
									if (iLocal_51 && !BitTest(iLocal_104[iVar0], 0))
									{
										__LIB_17__::func_485(iLocal_158[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_158[iVar0], Local_126[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_158[iVar0], fLocal_62[iVar0], fLocal_63[iVar0], fLocal_64[iVar0], fLocal_65[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_152[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_158[iVar0], 5f);
									}
									if (BitTest(iLocal_104[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_158[iVar0], true);
									}
									if (!BitTest(iLocal_104[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_158[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_158[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_158[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_158[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
									iLocal_118 = (iLocal_118 - 1);
									iLocal_103[iVar0]++;
									bLocal_59 = true;
								}
								else if (fLocal_83 > fLocal_66[iVar0])
								{
									iLocal_118 = (iLocal_118 - 1);
									__LIB_17__::func_489(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_103[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_124 || iLocal_124 == 0)) || iLocal_42) || iParam2)
					{
						if (!BitTest(iLocal_104[iVar0], 1))
						{
							if (BitTest(iLocal_104[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
								iVar15 = 2;
							}
							else if (!bLocal_55 && ((!BitTest(iLocal_104[iVar0], 2) && bVar13) || (BitTest(iLocal_104[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(__LIB_17__::func_487());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_487());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
							{
								if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_158[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true), Var8) < 10000f || iParam2) || iLocal_42)
										{
											__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_104[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
							if (fLocal_83 >= fLocal_66[iVar0])
							{
								if (13 > iLocal_109)
								{
									fVar9 = (fLocal_83 - fLocal_66[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_102[iVar0], fVar9, &cLocal_142) };
											if (!__LIB_17__::func_486(Var6, Var8, 5f, fLocal_94) && __LIB_17__::func_486(Var7, Var8, 5f, fLocal_94))
											{
												if (!BitTest(iLocal_104[iVar0], 1))
												{
													__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
												}
												__LIB_17__::func_489(iVar0, 1090519040);
											}
											else if (((!bLocal_59 || BitTest(iLocal_104[iVar0], 1)) || iLocal_42) || iParam2)
											{
												if (__LIB_17__::func_481(&(iLocal_158[iVar0]), iLocal_102[iVar0], fVar9, 1, 0, 0, 1, iLocal_56))
												{
													if (!BitTest(iLocal_104[iVar0], 1))
													{
														__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_158[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
													iLocal_109++;
													iLocal_103[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_104[iVar0], 1))
											{
												__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
											}
											__LIB_17__::func_489(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142))
									{
										if (!BitTest(iLocal_104[iVar0], 1))
										{
											__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
										}
										__LIB_17__::func_489(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_104[iVar0], 1))
									{
										__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
									}
									__LIB_17__::func_489(iVar0, 1090519040);
								}
							}
							else if (iLocal_39 && !iLocal_47)
							{
								if (!BitTest(iLocal_104[iVar0], 1))
								{
									__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
								}
								__LIB_17__::func_489(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_104[iVar0], 1))
							{
								__LIB_32__::func_38(&(iLocal_158[iVar0]), iVar15, 0);
							}
							__LIB_17__::func_489(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_124 = iVar0;
					}
				}
				else if (iLocal_103[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_37)
									{
										if ((!bLocal_32 && !iLocal_29) && func_552(iLocal_158[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_123 || iLocal_123 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_926(iLocal_158[iVar0], iVar5) || __LIB_15__::func_941(iVar5, iLocal_158[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_123 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_52 && !BitTest(iLocal_104[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_123 || iLocal_123 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_123 = iVar0;
										}
									}
									if (bVar18)
									{
										__LIB_32__::func_37(iLocal_158[iVar0]);
										iLocal_103[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
						}
						else
						{
							iLocal_103[iVar0]++;
						}
					}
					else
					{
						iLocal_103[iVar0]++;
					}
				}
				else if (iLocal_103[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
						{
							iLocal_103[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142))
							{
								if (fLocal_83 > (fLocal_66[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
						}
					}
					else
					{
						iLocal_103[iVar0]++;
					}
				}
				else if (iLocal_103[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_158[iVar0]);
					}
					iLocal_109 = (iLocal_109 - 1);
					__LIB_17__::func_489(iVar0, fVar10);
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
			iLocal_113 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_123 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_124 = 0;
		}
	}
	else
	{
		func_27();
	}
}

void func_570(int iParam0, float fParam1)//Position - 0x7875B
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			__LIB_17__::func_482();
			__LIB_17__::func_481(&iParam0, iLocal_112, fParam1, 1, 0, 1, 0, 0);
			fLocal_83 = fParam1;
			iVar0 = 0;
			while (iVar0 < 95)
			{
				if (iLocal_106[iVar0] > 2 && iLocal_106[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_75[iVar0]);
								fVar1 = (fVar1 * fLocal_76[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < __LIB_17__::func_480(iLocal_105[iVar0]))
									{
										__LIB_17__::func_481(&(iLocal_161[iVar0]), iLocal_105[iVar0], fVar1, 1, 0, 1, bLocal_57, iLocal_56);
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
						iLocal_106[iVar0] = 99;
						iLocal_110 = (iLocal_110 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 80)
			{
				if (iLocal_103[iVar0] > 2 && iLocal_103[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_66[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < __LIB_17__::func_480(iLocal_102[iVar0]))
									{
										__LIB_17__::func_481(&(iLocal_158[iVar0]), iLocal_102[iVar0], fVar1, 1, 0, 1, 1, iLocal_56);
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
						iLocal_103[iVar0] = 99;
						iLocal_109 = (iLocal_109 - 1);
					}
				}
				iVar0++;
			}
			iLocal_113 = 0;
			iLocal_115 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_108[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_160[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_160[iVar0], true, false);
							iLocal_111++;
							iLocal_108[iVar0] = 2;
						}
					}
					else
					{
						iLocal_108[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_114 = 0;
			iLocal_119 = 0;
			iLocal_122 = 0;
			fLocal_98 = fParam1;
			fLocal_97 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_130 = { Var3 - Vector(100f, 100f, 100f) };
			Local_131 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_130, Local_131, false, false);
		}
	}
}

void func_572(bool bParam0, int iParam1, int iParam2)//Position - 0x78A14
{
	if (bParam0)
	{
		iLocal_51 = 1;
		iLocal_156 = iParam1;
		iLocal_157 = iParam2;
	}
}

void func_573()//Position - 0x78A2E
{
	Local_126[0 /*3*/] = { -206.0217f, -1880.7305f, 27.4747f };
	fLocal_62[0] = -0.0032f;
	fLocal_63[0] = -0.0196f;
	fLocal_64[0] = 0.9262f;
	fLocal_65[0] = -0.3766f;
	iLocal_102[0] = 2;
	fLocal_66[0] = 6000f;
	iLocal_152[0] = joaat("sentinel");
	Local_126[1 /*3*/] = { -243.0447f, -1852.2184f, 28.4643f };
	fLocal_62[1] = -0.0366f;
	fLocal_63[1] = -0.0132f;
	fLocal_64[1] = 0.9692f;
	fLocal_65[1] = -0.2433f;
	iLocal_102[1] = 3;
	fLocal_66[1] = 7000f;
	iLocal_152[1] = joaat("manana");
	Local_126[2 /*3*/] = { -276.6977f, -1841.8983f, 26.6822f };
	fLocal_62[2] = 0.0378f;
	fLocal_63[2] = -0.0052f;
	fLocal_64[2] = -0.6626f;
	fLocal_65[2] = 0.748f;
	iLocal_102[2] = 4;
	fLocal_66[2] = 9500f;
	iLocal_152[2] = joaat("schafter2");
	Local_126[3 /*3*/] = { -263.7085f, -1834.5907f, 27.6854f };
	fLocal_62[3] = 0.0243f;
	fLocal_63[3] = -0.0221f;
	fLocal_64[3] = -0.5941f;
	fLocal_65[3] = 0.8037f;
	iLocal_102[3] = 72;
	fLocal_66[3] = 10000f;
	iLocal_152[3] = joaat("schafter2");
	Local_126[4 /*3*/] = { -293.1659f, -1838.3026f, 25.6359f };
	fLocal_62[4] = 0.027f;
	fLocal_63[4] = -0.0221f;
	fLocal_64[4] = -0.6649f;
	fLocal_65[4] = 0.7461f;
	iLocal_102[4] = 5;
	fLocal_66[4] = 12000f;
	iLocal_152[4] = joaat("manana");
	Local_126[5 /*3*/] = { -291.337f, -1843.3103f, 25.4949f };
	fLocal_62[5] = 0.0439f;
	fLocal_63[5] = -0.0029f;
	fLocal_64[5] = -0.687f;
	fLocal_65[5] = 0.7253f;
	iLocal_102[5] = 6;
	fLocal_66[5] = 12000f;
	iLocal_152[5] = joaat("sentinel");
	Local_126[6 /*3*/] = { -338.9504f, -1830.9271f, 23.1457f };
	fLocal_62[6] = -0.0179f;
	fLocal_63[6] = 0.0108f;
	fLocal_64[6] = 0.7347f;
	fLocal_65[6] = -0.6781f;
	iLocal_102[6] = 7;
	fLocal_66[6] = 13000f;
	iLocal_152[6] = joaat("schafter2");
	Local_126[7 /*3*/] = { -153.5809f, -1718.4812f, 29.8741f };
	fLocal_62[7] = -0.0115f;
	fLocal_63[7] = -0.0252f;
	fLocal_64[7] = 0.9155f;
	fLocal_65[7] = -0.4014f;
	iLocal_102[7] = 8;
	fLocal_66[7] = 13250f;
	iLocal_152[7] = joaat("speedo");
	Local_126[8 /*3*/] = { -120.4816f, -1714.1544f, 29.1332f };
	fLocal_62[8] = 0.0088f;
	fLocal_63[8] = 0.0254f;
	fLocal_64[8] = 0.9429f;
	fLocal_65[8] = 0.332f;
	iLocal_102[8] = 9;
	fLocal_66[8] = 15000f;
	iLocal_152[8] = joaat("sentinel");
	Local_126[9 /*3*/] = { -212.9735f, -1810.0007f, 29.4217f };
	fLocal_62[9] = -0.0018f;
	fLocal_63[9] = -0.0041f;
	fLocal_64[9] = -0.4979f;
	fLocal_65[9] = 0.8672f;
	iLocal_102[9] = 69;
	fLocal_66[9] = 15000f;
	iLocal_152[9] = joaat("manana");
	Local_126[10 /*3*/] = { -72.3315f, -1654.2415f, 28.8377f };
	fLocal_62[10] = 0.0003f;
	fLocal_63[10] = 0.0006f;
	fLocal_64[10] = 0.9405f;
	fLocal_65[10] = 0.3397f;
	iLocal_102[10] = 73;
	fLocal_66[10] = 17000f;
	iLocal_152[10] = joaat("manana");
	Local_126[11 /*3*/] = { -53.5047f, -1623.8011f, 28.6285f };
	fLocal_62[11] = -0.0239f;
	fLocal_63[11] = 0.0097f;
	fLocal_64[11] = 0.9455f;
	fLocal_65[11] = 0.3246f;
	iLocal_102[11] = 74;
	fLocal_66[11] = 17100f;
	iLocal_152[11] = joaat("sentinel");
	Local_126[12 /*3*/] = { -14.4963f, -1698.9298f, 28.8408f };
	fLocal_62[12] = 0.0013f;
	fLocal_63[12] = 0.0006f;
	fLocal_64[12] = 0.8138f;
	fLocal_65[12] = 0.5812f;
	iLocal_102[12] = 10;
	fLocal_66[12] = 18000f;
	iLocal_152[12] = joaat("manana");
	Local_126[13 /*3*/] = { -81.5279f, -1756.8303f, 29.3488f };
	fLocal_62[13] = -0.0096f;
	fLocal_63[13] = -0.0131f;
	fLocal_64[13] = -0.1676f;
	fLocal_65[13] = 0.9857f;
	iLocal_102[13] = 71;
	fLocal_66[13] = 20500f;
	iLocal_152[13] = joaat("speedo");
	Local_126[14 /*3*/] = { 2.0713f, -1646.3097f, 28.8887f };
	fLocal_62[14] = -0.0161f;
	fLocal_63[14] = -0.0094f;
	fLocal_64[14] = 0.9179f;
	fLocal_65[14] = -0.3963f;
	iLocal_102[14] = 11;
	fLocal_66[14] = 22000f;
	iLocal_152[14] = joaat("schafter2");
	Local_126[15 /*3*/] = { -34.5467f, -1718.3431f, 28.846f };
	fLocal_62[15] = 0.0102f;
	fLocal_63[15] = 0.0177f;
	fLocal_64[15] = -0.5537f;
	fLocal_65[15] = 0.8325f;
	iLocal_102[15] = 12;
	fLocal_66[15] = 22000f;
	iLocal_152[15] = joaat("schafter2");
	Local_126[16 /*3*/] = { 108.9714f, -1704.7122f, 28.6355f };
	fLocal_62[16] = -0.008f;
	fLocal_63[16] = 0.0172f;
	fLocal_64[16] = 0.4206f;
	fLocal_65[16] = 0.907f;
	iLocal_102[16] = 62;
	fLocal_66[16] = 24500f;
	iLocal_152[16] = joaat("manana");
	Local_126[17 /*3*/] = { 217.4134f, -1616.3182f, 28.8266f };
	fLocal_62[17] = -0.0075f;
	fLocal_63[17] = 0.0182f;
	fLocal_64[17] = 0.4621f;
	fLocal_65[17] = 0.8866f;
	iLocal_102[17] = 63;
	fLocal_66[17] = 25500f;
	iLocal_152[17] = joaat("schafter2");
	Local_126[18 /*3*/] = { -5.501f, -1694.9628f, 28.8337f };
	fLocal_62[18] = -0.0037f;
	fLocal_63[18] = -0.004f;
	fLocal_64[18] = 0.8342f;
	fLocal_65[18] = 0.5514f;
	iLocal_102[18] = 83;
	fLocal_66[18] = 25900f;
	iLocal_152[18] = joaat("manana");
	Local_126[19 /*3*/] = { 157.9259f, -1603.9789f, 29.052f };
	fLocal_62[19] = -0.002f;
	fLocal_63[19] = -0.0002f;
	fLocal_64[19] = 0.8672f;
	fLocal_65[19] = 0.4979f;
	iLocal_102[19] = 14;
	fLocal_66[19] = 26000f;
	iLocal_152[19] = joaat("speedo");
	Local_126[20 /*3*/] = { 297.3597f, -1518.5847f, 28.6524f };
	fLocal_62[20] = -0.0133f;
	fLocal_63[20] = 0.008f;
	fLocal_64[20] = 0.8617f;
	fLocal_65[20] = 0.5071f;
	iLocal_102[20] = 64;
	fLocal_66[20] = 27500f;
	iLocal_152[20] = joaat("sentinel");
	Local_126[21 /*3*/] = { 235.9646f, -1635.4471f, 28.7485f };
	fLocal_62[21] = -0.0094f;
	fLocal_63[21] = 0.021f;
	fLocal_64[21] = 0.4102f;
	fLocal_65[21] = 0.9117f;
	iLocal_102[21] = 15;
	fLocal_66[21] = 28000f;
	iLocal_152[21] = joaat("manana");
	Local_126[22 /*3*/] = { 188.7709f, -1558.2264f, 28.5961f };
	fLocal_62[22] = -0.0025f;
	fLocal_63[22] = 0.0043f;
	fLocal_64[22] = 0.9477f;
	fLocal_65[22] = -0.319f;
	iLocal_102[22] = 16;
	fLocal_66[22] = 29000f;
	iLocal_152[22] = joaat("sentinel");
	Local_126[23 /*3*/] = { 277.7f, -1491.5587f, 29.0148f };
	fLocal_62[23] = -0.014f;
	fLocal_63[23] = -0.0069f;
	fLocal_64[23] = 0.9238f;
	fLocal_65[23] = -0.3825f;
	iLocal_102[23] = 65;
	fLocal_66[23] = 31000f;
	iLocal_152[23] = joaat("speedo");
	Local_126[24 /*3*/] = { 381.9591f, -1474.3505f, 28.7077f };
	fLocal_62[24] = -0.0003f;
	fLocal_63[24] = 0.0011f;
	fLocal_64[24] = 0.8734f;
	fLocal_65[24] = 0.487f;
	iLocal_102[24] = 66;
	fLocal_66[24] = 33000f;
	iLocal_152[24] = joaat("sentinel");
	Local_126[25 /*3*/] = { 338.1085f, -1464.6277f, 29.068f };
	fLocal_62[25] = 0.0073f;
	fLocal_63[25] = -0.0125f;
	fLocal_64[25] = 0.9359f;
	fLocal_65[25] = -0.3519f;
	iLocal_102[25] = 68;
	fLocal_66[25] = 33000f;
	iLocal_152[25] = joaat("manana");
	Local_126[26 /*3*/] = { 412.8397f, -1456.0123f, 28.9169f };
	fLocal_62[26] = -0.0006f;
	fLocal_63[26] = 0.0005f;
	fLocal_64[26] = 0.8832f;
	fLocal_65[26] = 0.4689f;
	iLocal_102[26] = 17;
	fLocal_66[26] = 34000f;
	iLocal_152[26] = joaat("schafter2");
	Local_126[27 /*3*/] = { 433.0769f, -1418.8912f, 28.6627f };
	fLocal_62[27] = -0.015f;
	fLocal_63[27] = -0.0062f;
	fLocal_64[27] = 0.9995f;
	fLocal_65[27] = -0.0262f;
	iLocal_102[27] = 18;
	fLocal_66[27] = 36000f;
	iLocal_152[27] = joaat("sentinel");
	Local_126[28 /*3*/] = { 268.183f, -1477.3182f, 28.9245f };
	fLocal_62[28] = -0.0002f;
	fLocal_63[28] = -0.0006f;
	fLocal_64[28] = 0.9097f;
	fLocal_65[28] = -0.4152f;
	iLocal_102[28] = 67;
	fLocal_66[28] = 36700f;
	iLocal_152[28] = joaat("schafter2");
	Local_126[29 /*3*/] = { 412.7635f, -1395.716f, 29.0825f };
	fLocal_62[29] = 0.005f;
	fLocal_63[29] = -0.0104f;
	fLocal_64[29] = 0.908f;
	fLocal_65[29] = -0.4188f;
	iLocal_102[29] = 76;
	fLocal_66[29] = 37500f;
	iLocal_152[29] = joaat("schafter2");
	Local_126[30 /*3*/] = { 533.9572f, -1398.3364f, 28.7811f };
	fLocal_62[30] = -0.0186f;
	fLocal_63[30] = 0.0001f;
	fLocal_64[30] = 0.9985f;
	fLocal_65[30] = 0.0517f;
	iLocal_102[30] = 19;
	fLocal_66[30] = 38500f;
	iLocal_152[30] = joaat("manana");
	Local_126[31 /*3*/] = { 528.0538f, -1428.0734f, 28.7182f };
	fLocal_62[31] = -0.0005f;
	fLocal_63[31] = -0.0001f;
	fLocal_64[31] = 0.6927f;
	fLocal_65[31] = 0.7212f;
	iLocal_102[31] = 75;
	fLocal_66[31] = 40100f;
	iLocal_152[31] = joaat("sentinel");
	Local_126[32 /*3*/] = { 472.6559f, -1260.8285f, 29.618f };
	fLocal_62[32] = -0.0105f;
	fLocal_63[32] = 0.0036f;
	fLocal_64[32] = -0.6968f;
	fLocal_65[32] = 0.7172f;
	iLocal_102[32] = 21;
	fLocal_66[32] = 47500f;
	iLocal_152[32] = joaat("mule");
	Local_126[33 /*3*/] = { 500.1397f, -1274.9419f, 28.8656f };
	fLocal_62[33] = -0.0159f;
	fLocal_63[33] = 0.0001f;
	fLocal_64[33] = 0.9992f;
	fLocal_65[33] = -0.0378f;
	iLocal_102[33] = 20;
	fLocal_66[33] = 48500f;
	iLocal_152[33] = joaat("schafter2");
	Local_126[34 /*3*/] = { 498.531f, -1126.826f, 28.7957f };
	fLocal_62[34] = -0.013f;
	fLocal_63[34] = 0.002f;
	fLocal_64[34] = 0.9999f;
	fLocal_65[34] = -0.0026f;
	iLocal_102[34] = 22;
	fLocal_66[34] = 49000f;
	iLocal_152[34] = joaat("sentinel");
	Local_126[35 /*3*/] = { 502.8969f, -737.7939f, 24.4451f };
	fLocal_62[35] = -0.0153f;
	fLocal_63[35] = -0.0009f;
	fLocal_64[35] = 0.9991f;
	fLocal_65[35] = 0.039f;
	iLocal_102[35] = 23;
	fLocal_66[35] = 62000f;
	iLocal_152[35] = joaat("schafter2");
	Local_126[36 /*3*/] = { 466.5153f, -679.8666f, 26.6178f };
	fLocal_62[36] = 0.0065f;
	fLocal_63[36] = -0.0422f;
	fLocal_64[36] = 0.7491f;
	fLocal_65[36] = -0.661f;
	iLocal_102[36] = 24;
	fLocal_66[36] = 63500f;
	iLocal_152[36] = joaat("manana");
	Local_126[37 /*3*/] = { 406.9349f, -710.4351f, 28.6729f };
	fLocal_62[37] = 0.0005f;
	fLocal_63[37] = 0.0125f;
	fLocal_64[37] = -0.0197f;
	fLocal_65[37] = 0.9997f;
	iLocal_102[37] = 25;
	fLocal_66[37] = 68500f;
	iLocal_152[37] = joaat("sentinel");
	Local_126[38 /*3*/] = { 335.3656f, -738.0789f, 28.8257f };
	fLocal_62[38] = 0.0009f;
	fLocal_63[38] = 0.0002f;
	fLocal_64[38] = -0.1776f;
	fLocal_65[38] = 0.9841f;
	iLocal_102[38] = 26;
	fLocal_66[38] = 71500f;
	iLocal_152[38] = joaat("manana");
	Local_126[39 /*3*/] = { 372.9934f, -611.9315f, 28.2991f };
	fLocal_62[39] = -0.0142f;
	fLocal_63[39] = 0.0084f;
	fLocal_64[39] = 0.9689f;
	fLocal_65[39] = 0.247f;
	iLocal_102[39] = 27;
	fLocal_66[39] = 71700f;
	iLocal_152[39] = joaat("sentinel");
	Local_126[40 /*3*/] = { 366.9933f, -632.9999f, 28.6681f };
	fLocal_62[40] = 0.0013f;
	fLocal_63[40] = 0.009f;
	fLocal_64[40] = 0.9814f;
	fLocal_65[40] = 0.1915f;
	iLocal_102[40] = 28;
	fLocal_66[40] = 72000f;
	iLocal_152[40] = joaat("schafter2");
	Local_126[41 /*3*/] = { 390.9968f, -591.7441f, 28.3359f };
	fLocal_62[41] = -0.001f;
	fLocal_63[41] = 0.0075f;
	fLocal_64[41] = 0.9487f;
	fLocal_65[41] = 0.3159f;
	iLocal_102[41] = 29;
	fLocal_66[41] = 72500f;
	iLocal_152[41] = joaat("schafter2");
	Local_126[42 /*3*/] = { 212.6834f, -606.123f, 28.5511f };
	fLocal_62[42] = -0.0064f;
	fLocal_63[42] = -0.0164f;
	fLocal_64[42] = 0.8544f;
	fLocal_65[42] = -0.5194f;
	iLocal_102[42] = 30;
	fLocal_66[42] = 73000f;
	iLocal_152[42] = joaat("manana");
	Local_126[43 /*3*/] = { 109.3219f, -593.4142f, 31.3559f };
	fLocal_62[43] = 0.0013f;
	fLocal_63[43] = 0.0075f;
	fLocal_64[43] = -0.1903f;
	fLocal_65[43] = 0.9817f;
	iLocal_102[43] = 31;
	fLocal_66[43] = 74500f;
	iLocal_152[43] = joaat("speedo");
	Local_126[44 /*3*/] = { 102.9036f, -596.8571f, 31.1318f };
	fLocal_62[44] = 0.0005f;
	fLocal_63[44] = -0.002f;
	fLocal_64[44] = -0.1782f;
	fLocal_65[44] = 0.984f;
	iLocal_102[44] = 32;
	fLocal_66[44] = 79000f;
	iLocal_152[44] = joaat("manana");
	Local_126[45 /*3*/] = { -23.0533f, -549.3762f, 38.6333f };
	fLocal_62[45] = -0.002f;
	fLocal_63[45] = -0.0357f;
	fLocal_64[45] = 0.7315f;
	fLocal_65[45] = -0.6809f;
	iLocal_102[45] = 33;
	fLocal_66[45] = 80000f;
	iLocal_152[45] = joaat("sentinel");
	Local_126[46 /*3*/] = { -60.2264f, -570.8044f, 37.5655f };
	fLocal_62[46] = 0.0763f;
	fLocal_63[46] = 0.0013f;
	fLocal_64[46] = -0.1846f;
	fLocal_65[46] = 0.9798f;
	iLocal_102[46] = 34;
	fLocal_66[46] = 81500f;
	iLocal_152[46] = joaat("schafter2");
	Local_126[47 /*3*/] = { -68.89f, -584.9039f, 35.8065f };
	fLocal_62[47] = 0.0228f;
	fLocal_63[47] = -0.0029f;
	fLocal_64[47] = -0.1597f;
	fLocal_65[47] = 0.9869f;
	iLocal_102[47] = 35;
	fLocal_66[47] = 84000f;
	iLocal_152[47] = joaat("sentinel");
	Local_126[48 /*3*/] = { 5.5875f, -324.5258f, 44.1159f };
	fLocal_62[48] = -0.0045f;
	fLocal_63[48] = -0.0484f;
	fLocal_64[48] = 0.9805f;
	fLocal_65[48] = 0.1906f;
	iLocal_102[48] = 37;
	fLocal_66[48] = 85200f;
	iLocal_152[48] = joaat("schafter2");
	Local_126[49 /*3*/] = { -5.0009f, -276.8104f, 46.5723f };
	fLocal_62[49] = -0.0178f;
	fLocal_63[49] = -0.0006f;
	fLocal_64[49] = 0.9544f;
	fLocal_65[49] = -0.298f;
	iLocal_102[49] = 38;
	fLocal_66[49] = 90000f;
	iLocal_152[49] = joaat("sentinel");
	Local_126[50 /*3*/] = { 45.598f, -165.0067f, 54.8493f };
	fLocal_62[50] = -0.008f;
	fLocal_63[50] = -0.0223f;
	fLocal_64[50] = 0.8178f;
	fLocal_65[50] = -0.5749f;
	iLocal_102[50] = 40;
	fLocal_66[50] = 95000f;
	iLocal_152[50] = joaat("speedo");
	Local_126[51 /*3*/] = { 54.4349f, -301.091f, 46.7789f };
	fLocal_62[51] = -0.0185f;
	fLocal_63[51] = -0.031f;
	fLocal_64[51] = 0.8226f;
	fLocal_65[51] = -0.5674f;
	iLocal_102[51] = 42;
	fLocal_66[51] = 100000f;
	iLocal_152[51] = joaat("manana");
	Local_126[52 /*3*/] = { 186.4678f, -334.258f, 43.6281f };
	fLocal_62[52] = -0.001f;
	fLocal_63[52] = 0.001f;
	fLocal_64[52] = 0.5602f;
	fLocal_65[52] = 0.8283f;
	iLocal_102[52] = 43;
	fLocal_66[52] = 101000f;
	iLocal_152[52] = joaat("schafter2");
	Local_126[53 /*3*/] = { 337.992f, -391.9135f, 44.7304f };
	fLocal_62[53] = 0.0021f;
	fLocal_63[53] = 0.0021f;
	fLocal_64[53] = 0.5651f;
	fLocal_65[53] = 0.825f;
	iLocal_102[53] = 48;
	fLocal_66[53] = 104000f;
	iLocal_152[53] = joaat("manana");
	Local_126[54 /*3*/] = { 196.7375f, -313.3328f, 43.7309f };
	fLocal_62[54] = -0.0055f;
	fLocal_63[54] = -0.0176f;
	fLocal_64[54] = 0.9897f;
	fLocal_65[54] = 0.142f;
	iLocal_102[54] = 46;
	fLocal_66[54] = 106000f;
	iLocal_152[54] = joaat("schafter2");
	Local_126[55 /*3*/] = { 250.8725f, -365.2076f, 44.1542f };
	fLocal_62[55] = -0.0174f;
	fLocal_63[55] = -0.0052f;
	fLocal_64[55] = 0.8039f;
	fLocal_65[55] = -0.5944f;
	iLocal_102[55] = 50;
	fLocal_66[55] = 106000f;
	iLocal_152[55] = joaat("schafter2");
	Local_126[56 /*3*/] = { 319.1082f, -346.9253f, 45.8237f };
	fLocal_62[56] = -0.0191f;
	fLocal_63[56] = -0.055f;
	fLocal_64[56] = 0.9719f;
	fLocal_65[56] = 0.2282f;
	iLocal_102[56] = 47;
	fLocal_66[56] = 106100f;
	iLocal_152[56] = joaat("sentinel");
	Local_126[57 /*3*/] = { 324.421f, -342.9175f, 46.7807f };
	fLocal_62[57] = -0.0172f;
	fLocal_63[57] = -0.0711f;
	fLocal_64[57] = 0.9864f;
	fLocal_65[57] = 0.1474f;
	iLocal_102[57] = 49;
	fLocal_66[57] = 108000f;
	iLocal_152[57] = joaat("manana");
	Local_126[58 /*3*/] = { 451.9781f, -337.0199f, 47.248f };
	fLocal_62[58] = 0.0068f;
	fLocal_63[58] = 0.0028f;
	fLocal_64[58] = 0.9618f;
	fLocal_65[58] = 0.2738f;
	iLocal_102[58] = 52;
	fLocal_66[58] = 111000f;
	iLocal_152[58] = joaat("speedo");
	Local_126[59 /*3*/] = { 423.7515f, -307.0238f, 49.6123f };
	fLocal_62[59] = 0.0044f;
	fLocal_63[59] = -0.0397f;
	fLocal_64[59] = 0.8441f;
	fLocal_65[59] = -0.5346f;
	iLocal_102[59] = 53;
	fLocal_66[59] = 111100f;
	iLocal_152[59] = joaat("manana");
	Local_126[60 /*3*/] = { 440.5575f, -303.2848f, 48.7468f };
	fLocal_62[60] = 0.019f;
	fLocal_63[60] = -0.029f;
	fLocal_64[60] = 0.8561f;
	fLocal_65[60] = -0.5157f;
	iLocal_102[60] = 54;
	fLocal_66[60] = 113100f;
	iLocal_152[60] = joaat("manana");
	Local_126[61 /*3*/] = { 438.0004f, -307.1298f, 48.8818f };
	fLocal_62[61] = 0.0188f;
	fLocal_63[61] = -0.0296f;
	fLocal_64[61] = 0.8477f;
	fLocal_65[61] = -0.5293f;
	iLocal_102[61] = 55;
	fLocal_66[61] = 115100f;
	iLocal_152[61] = joaat("schafter2");
	Local_126[62 /*3*/] = { 639.7904f, -383.6028f, 42.3535f };
	fLocal_62[62] = 0.019f;
	fLocal_63[62] = -0.0018f;
	fLocal_64[62] = 0.5239f;
	fLocal_65[62] = 0.8516f;
	iLocal_102[62] = 58;
	fLocal_66[62] = 116000f;
	iLocal_152[62] = joaat("sentinel");
	Local_126[63 /*3*/] = { 690.0759f, -415.4828f, 40.4451f };
	fLocal_62[63] = 0.0262f;
	fLocal_63[63] = 0.0264f;
	fLocal_64[63] = 0.4536f;
	fLocal_65[63] = 0.8904f;
	iLocal_102[63] = 59;
	fLocal_66[63] = 120000f;
	iLocal_152[63] = joaat("schafter2");
	Local_126[64 /*3*/] = { 725.498f, -450.7779f, 37.691f };
	fLocal_62[64] = 0.0197f;
	fLocal_63[64] = 0.0206f;
	fLocal_64[64] = 0.4235f;
	fLocal_65[64] = 0.9055f;
	iLocal_102[64] = 60;
	fLocal_66[64] = 121000f;
	iLocal_152[64] = joaat("sentinel");
	Local_126[65 /*3*/] = { 717.0089f, -436.9935f, 38.4648f };
	fLocal_62[65] = 0.0177f;
	fLocal_63[65] = 0.024f;
	fLocal_64[65] = 0.4359f;
	fLocal_65[65] = 0.8995f;
	iLocal_102[65] = 61;
	fLocal_66[65] = 121000f;
	iLocal_152[65] = joaat("manana");
	Local_127[0 /*3*/] = { 25.7395f, -1708.2628f, 28.7747f };
	fLocal_77[0] = 0f;
	fLocal_78[0] = 0f;
	fLocal_79[0] = 0.2217f;
	fLocal_80[0] = 0.9751f;
	iLocal_153[0] = joaat("sentinel");
	Local_127[1 /*3*/] = { 383.526f, -1452.0549f, 29.0287f };
	fLocal_77[1] = 0.0142f;
	fLocal_78[1] = 0.0098f;
	fLocal_79[1] = 0.23f;
	fLocal_80[1] = 0.973f;
	iLocal_153[1] = joaat("schafter2");
	Local_127[2 /*3*/] = { 486.8542f, -1167.3306f, 28.9366f };
	fLocal_77[2] = 0f;
	fLocal_78[2] = 0f;
	fLocal_79[2] = 0.7338f;
	fLocal_80[2] = -0.6794f;
	iLocal_153[2] = joaat("schafter2");
	Local_127[3 /*3*/] = { 458.2476f, -639.8495f, 28.1547f };
	fLocal_77[3] = 0.0001f;
	fLocal_78[3] = 0.0003f;
	fLocal_79[3] = 0.2649f;
	fLocal_80[3] = 0.9643f;
	iLocal_153[3] = joaat("schafter2");
	Local_128[0 /*3*/] = { 494.3779f, -634.8876f, 24.965f };
	fLocal_71[0] = -0.0085f;
	fLocal_72[0] = 0.0132f;
	fLocal_73[0] = 0.6339f;
	fLocal_74[0] = 0.7733f;
	iLocal_105[0] = 137;
	fLocal_75[0] = 91000f;
	fLocal_76[0] = 1f;
	iLocal_154[0] = joaat("phantom");
	Local_128[1 /*3*/] = { -76.4095f, -606.6107f, 35.8049f };
	fLocal_71[1] = -0.0004f;
	fLocal_72[1] = 0f;
	fLocal_73[1] = -0.1581f;
	fLocal_74[1] = 0.9874f;
	iLocal_105[1] = 36;
	fLocal_75[1] = 84500f;
	fLocal_76[1] = 1f;
	iLocal_154[1] = joaat("manana");
	Local_128[2 /*3*/] = { -40.1297f, -260.0975f, 45.7146f };
	fLocal_71[2] = -0.0087f;
	fLocal_72[2] = 0.0118f;
	fLocal_73[2] = 0.8115f;
	fLocal_74[2] = -0.5842f;
	iLocal_105[2] = 39;
	fLocal_75[2] = 96000f;
	fLocal_76[2] = 1f;
	iLocal_154[2] = joaat("schafter2");
	Local_128[3 /*3*/] = { 84.8523f, -293.1762f, 46.0589f };
	fLocal_71[3] = -0.0019f;
	fLocal_72[3] = 0.0293f;
	fLocal_73[3] = 0.5779f;
	fLocal_74[3] = 0.8156f;
	iLocal_105[3] = 41;
	fLocal_75[3] = 97000f;
	fLocal_76[3] = 1f;
	iLocal_154[3] = joaat("manana");
	Local_128[4 /*3*/] = { 172.4911f, -375.0501f, 42.274f };
	fLocal_71[4] = 0.0282f;
	fLocal_72[4] = -0.0032f;
	fLocal_73[4] = -0.2149f;
	fLocal_74[4] = 0.9762f;
	iLocal_105[4] = 44;
	fLocal_75[4] = 104000f;
	fLocal_76[4] = 1f;
	iLocal_154[4] = joaat("sentinel");
	Local_128[5 /*3*/] = { 171.7265f, -390.1432f, 41.6091f };
	fLocal_71[5] = 0.0283f;
	fLocal_72[5] = -0.0041f;
	fLocal_73[5] = -0.1949f;
	fLocal_74[5] = 0.9804f;
	iLocal_105[5] = 45;
	fLocal_75[5] = 106000f;
	fLocal_76[5] = 1f;
	iLocal_154[5] = joaat("manana");
	Local_128[6 /*3*/] = { 333.1232f, -351.4108f, 45.8325f };
	fLocal_71[6] = 0.0103f;
	fLocal_72[6] = -0.0667f;
	fLocal_73[6] = 0.9862f;
	fLocal_74[6] = 0.1509f;
	iLocal_105[6] = 51;
	fLocal_75[6] = 109000f;
	fLocal_76[6] = 1f;
	iLocal_154[6] = joaat("sentinel");
	Local_128[7 /*3*/] = { 504.7013f, -264.2179f, 46.8504f };
	fLocal_71[7] = 0.0004f;
	fLocal_72[7] = -0.0199f;
	fLocal_73[7] = 0.9636f;
	fLocal_74[7] = 0.2664f;
	iLocal_105[7] = 56;
	fLocal_75[7] = 116000f;
	fLocal_76[7] = 1f;
	iLocal_154[7] = joaat("sentinel");
	Local_128[8 /*3*/] = { 617.3689f, -343.3064f, 42.9542f };
	fLocal_71[8] = -0.0003f;
	fLocal_72[8] = -0.0011f;
	fLocal_73[8] = 0.9826f;
	fLocal_74[8] = 0.1858f;
	iLocal_105[8] = 57;
	fLocal_75[8] = 118000f;
	fLocal_76[8] = 1f;
	iLocal_154[8] = joaat("manana");
	Local_128[9 /*3*/] = { -164.4686f, -2056.1094f, 23.837f };
	fLocal_71[9] = -0.071f;
	fLocal_72[9] = 0.0019f;
	fLocal_73[9] = -0.1413f;
	fLocal_74[9] = 0.9874f;
	iLocal_105[9] = 80;
	fLocal_75[9] = 3500f;
	fLocal_76[9] = 1f;
	iLocal_154[9] = joaat("schafter2");
	Local_128[10 /*3*/] = { -48.2772f, -1712.6143f, 28.8332f };
	fLocal_71[10] = -0.003f;
	fLocal_72[10] = -0.0045f;
	fLocal_73[10] = 0.8231f;
	fLocal_74[10] = 0.5679f;
	iLocal_105[10] = 13;
	fLocal_75[10] = 17900f;
	fLocal_76[10] = 1f;
	iLocal_154[10] = joaat("sentinel");
	Local_128[11 /*3*/] = { -77.0531f, -1786.7689f, 27.7276f };
	fLocal_71[11] = 0.0108f;
	fLocal_72[11] = 0.0247f;
	fLocal_73[11] = 0.3258f;
	fLocal_74[11] = 0.9451f;
	iLocal_105[11] = 82;
	fLocal_75[11] = 20000f;
	fLocal_76[11] = 1f;
	iLocal_154[11] = joaat("sentinel");
	Local_128[12 /*3*/] = { 625.6348f, -1433.35f, 29.9579f };
	fLocal_71[12] = -0.0056f;
	fLocal_72[12] = -0.0043f;
	fLocal_73[12] = 0.7058f;
	fLocal_74[12] = 0.7084f;
	iLocal_105[12] = 77;
	fLocal_75[12] = 42000f;
	fLocal_76[12] = 1f;
	iLocal_154[12] = joaat("schafter2");
	Local_128[13 /*3*/] = { 648.611f, -1429.1584f, 29.9931f };
	fLocal_71[13] = -0.014f;
	fLocal_72[13] = 0.006f;
	fLocal_73[13] = 0.7031f;
	fLocal_74[13] = 0.711f;
	iLocal_105[13] = 78;
	fLocal_75[13] = 42200f;
	fLocal_76[13] = 1f;
	iLocal_154[13] = joaat("sentinel");
	Local_128[14 /*3*/] = { 524.4578f, -1438.7028f, 28.7174f };
	fLocal_71[14] = -0.0011f;
	fLocal_72[14] = 0f;
	fLocal_73[14] = 0.7202f;
	fLocal_74[14] = -0.6938f;
	iLocal_105[14] = 79;
	fLocal_75[14] = 41500f;
	fLocal_76[14] = 1f;
	iLocal_154[14] = joaat("sentinel");
	Local_128[15 /*3*/] = { 559.7665f, -1443.7693f, 28.9727f };
	fLocal_71[15] = -0.0151f;
	fLocal_72[15] = -0.0034f;
	fLocal_73[15] = 0.7189f;
	fLocal_74[15] = -0.6949f;
	iLocal_105[15] = 83;
	fLocal_75[15] = 43000f;
	fLocal_76[15] = 1f;
	iLocal_154[15] = joaat("manana");
	Local_128[16 /*3*/] = { 667.5609f, -1432.7021f, 30.4244f };
	fLocal_71[16] = -0.0045f;
	fLocal_72[16] = -0.0037f;
	fLocal_73[16] = 0.7154f;
	fLocal_74[16] = 0.6987f;
	iLocal_105[16] = 84;
	fLocal_75[16] = 43100f;
	fLocal_76[16] = 1f;
	iLocal_154[16] = joaat("manana");
}

void func_574(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7AC52
{
	struct<3> Var0;
	StringCopy(&cLocal_142, sParam0, 64);
	bLocal_38 = true;
	iLocal_43 = 0;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = iParam1;
	iLocal_113 = 0;
	iLocal_114 = 0;
	iLocal_115 = 0;
	iLocal_119 = 0;
	iLocal_122 = 0;
	iLocal_120 = -1;
	iLocal_121 = -1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_83 = 0f;
	iLocal_44 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_130.f_0 = (Var0.f_0 - 100f);
		Local_130.f_1 = (Var0.f_1 - 100f);
		Local_130.f_2 = (Var0.f_2 - 100f);
		Local_131.f_0 = (Var0.f_0 + 100f);
		Local_131.f_1 = (Var0.f_1 + 100f);
		Local_131.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_130, Local_131, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_151);
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
	func_18();
}

int func_575()//Position - 0x7AD76
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(28, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(29, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(30, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(31, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(32, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(33, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(34, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(36, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(37, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(38, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(39, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(40, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(41, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(42, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(43, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(46, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(47, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(48, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(49, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(50, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(51, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(52, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(53, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(56, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(57, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(58, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(59, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(60, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(61, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(62, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(63, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(64, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(65, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(66, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(70, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(71, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(72, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(73, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(74, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(75, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(76, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(77, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(80, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(81, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(82, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(83, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(84, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(85, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(86, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(87, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(88, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(89, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(90, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(91, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(92, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(93, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(94, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(95, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(112, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(137, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(301, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(302, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(401, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(402, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(403, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(404, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(405, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(406, "lkfamily4"))
	{
		return 1;
	}
	return 0;
}

void func_576()//Position - 0x7B36D
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(28, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(29, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(30, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(31, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(32, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(33, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(34, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(35, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(36, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(37, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(38, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(39, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(40, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(41, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(42, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(43, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(45, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(46, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(47, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(48, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(49, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(50, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(51, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(52, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(53, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(54, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(55, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(56, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(57, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(58, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(59, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(60, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(61, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(62, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(63, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(64, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(65, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(66, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(69, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(70, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(71, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(72, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(73, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(74, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(75, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(76, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(77, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(80, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(81, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(82, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(83, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(84, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(85, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(86, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(87, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(88, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(89, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(90, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(91, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(92, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(93, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(94, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(95, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(112, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(137, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(301, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(302, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(401, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(402, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(403, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(404, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(405, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(406, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(501, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(502, "lkfamily4");
}

void func_577()//Position - 0x7B77E
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck3"), true);
	if (iLocal_548)
	{
		__LIB_0__::func_427(Local_234.f_3, Local_234.f_6, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_271.f_1);
	STREAMING::REQUEST_MODEL(Local_291.f_1);
	STREAMING::REQUEST_MODEL(Local_334.f_1);
	STREAMING::REQUEST_MODEL(Local_234.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
	STREAMING::REQUEST_MODEL(Local_236.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
	STREAMING::REQUEST_MODEL(Local_240.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
	STREAMING::REQUEST_MODEL(Local_262.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_262.f_1, true);
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_MODEL(joaat("manana"));
	STREAMING::REQUEST_ANIM_DICT("missfam4");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
	func_576();
	if (iLocal_548)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_271.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_291.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_334.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_234.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_236.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_240.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_262.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("manana"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", false, -1)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !func_575())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(-219.6464f, -2037.822f, 26.6207f, 10000f, true, false, false, false);
	func_578(0);
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_234.f_0, -15f);
	__LIB_16__::func_317(&Local_262, 27, Local_240.f_0, -1, 0);
	PED::SET_PED_CAN_RAGDOLL(Local_262.f_0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_262.f_0, 3, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_0, true);
	__LIB_0__::func_222(&uLocal_575, 5, Local_262.f_0, "lazlow", 0, 1);
	func_424(2, 0);
	__LIB_0__::func_222(&uLocal_575, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0, -1);
	func_81(&(iLocal_429[0]), 0, Local_234.f_0, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429[0], true);
	__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
	func_574("lkfamily4", 1, 1, 1);
	func_573();
	fLocal_93 = 200f;
	iLocal_42 = 1;
	iLocal_47 = 1;
	iLocal_56 = 1;
	iLocal_54 = 1;
	func_572(1, 3, 11);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4", true);
	func_544(Local_240.f_0, 1f);
	func_570(Local_240.f_0, 3000f);
	func_544(Local_240.f_0, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_240.f_0, true);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	func_543(joaat("sentinel"), 100);
	func_543(joaat("schafter2"), 100);
	func_543(joaat("taco"), 100);
	if (!iLocal_548)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_CHASE_RESTART");
	func_539(1, 0, 0, 1);
	iLocal_486 = MISC::GET_GAME_TIMER();
	iLocal_520 = MISC::GET_GAME_TIMER();
	__LIB_0__::func_229("family4_god_2", 4000, 1);
	__LIB_17__::func_789(3, "Chase truck", 0, 0, 0, 1);
	iLocal_223 = 7;
}

int func_578(bool bParam0)//Position - 0x7BAFB
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_532)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
			{
				STREAMING::REQUEST_MODEL(Local_234.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
				STREAMING::REQUEST_MODEL(Local_236.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
				STREAMING::REQUEST_MODEL(Local_240.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
				STREAMING::REQUEST_MODEL(joaat("sentinel"));
				STREAMING::REQUEST_MODEL(joaat("schafter2"));
				STREAMING::REQUEST_MODEL(joaat("manana"));
				if (bParam0)
				{
					STREAMING::REQUEST_MODEL(Local_304.f_1);
				}
				STREAMING::REQUEST_ANIM_DICT("missfam4");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
				VEHICLE::REQUEST_VEHICLE_RECORDING(112, "lkfamily4");
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", false, -1);
				STREAMING::REQUEST_PTFX_ASSET();
				if (((((((((((STREAMING::HAS_MODEL_LOADED(Local_234.f_1) && STREAMING::HAS_MODEL_LOADED(Local_236.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_240.f_1)) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && (!bParam0 || STREAMING::HAS_MODEL_LOADED(Local_304.f_1))) && STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(112, "lkfamily4")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAM4_UNHITCH_TRAILER", false, -1)) && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					MISC::CLEAR_AREA(Local_234.f_3, 10f, true, false, false, false);
					Local_234.f_0 = VEHICLE::CREATE_VEHICLE(Local_234.f_1, Local_234.f_3, Local_234.f_6, true, true, false);
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_234.f_0, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_234.f_0, 5f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_234.f_0, true, true, false);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_234.f_0, false);
					VEHICLE::SET_VEHICLE_COLOURS(Local_234.f_0, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_234.f_0, 1500, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_234.f_0, 1500f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_234.f_0, 1500f);
					VEHICLE::SET_VEHICLE_STRONG(Local_234.f_0, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_234.f_0, true);
					AUDIO::SET_RADIO_TO_STATION_NAME("off");
					MISC::CLEAR_AREA(Local_236.f_3, 10f, true, false, false, false);
					Local_236.f_0 = VEHICLE::CREATE_VEHICLE(Local_236.f_1, Local_236.f_3, Local_236.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_236.f_0, 5f);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, false);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_234.f_0, Local_236.f_0, 1f);
					VEHICLE::SET_TRAILER_LEGS_RAISED(Local_236.f_0);
					PHYSICS::ACTIVATE_PHYSICS(Local_234.f_0);
					PHYSICS::ACTIVATE_PHYSICS(Local_236.f_0);
					if (bParam0)
					{
						Local_304.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_234.f_0, 26, Local_304.f_1, -1, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_304.f_1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_304.f_0, true);
						AUDIO::STOP_PED_SPEAKING(Local_304.f_0, true);
						__LIB_0__::func_222(&uLocal_575, 8, Local_304.f_0, "truckdriver", 0, 1);
					}
					MISC::CLEAR_AREA(Local_240.f_3, 10f, true, false, false, false);
					Local_240.f_0 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_240.f_0, true, true, false);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_240.f_0, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_240.f_0, true);
					ENTITY::SET_ENTITY_PROOFS(Local_240.f_0, false, true, true, true, true, false, false, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_240.f_0, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_240.f_0, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_240.f_0, false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_240.f_0, false);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_240.f_0, "FAMILY_4_LAZLOWS_CAR", 0f);
					iVar0 = 1;
					while (iVar0 <= (Local_251.f_0 - 1))
					{
						MISC::CLEAR_AREA(Local_251[iVar0 /*15*/].f_3, 10f, true, false, false, false);
						Local_251[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_251[iVar0 /*15*/].f_1, Local_251[iVar0 /*15*/].f_3, Local_251[iVar0 /*15*/].f_6, true, true, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_251[iVar0 /*15*/], 2);
						VEHICLE::SET_VEHICLE_COLOURS(Local_251[iVar0 /*15*/], (10 * iVar0), 0);
						Local_252[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_252[iVar0 /*15*/].f_1, Local_252[iVar0 /*15*/].f_3, Local_252[iVar0 /*15*/].f_6, true, true, false);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_251[iVar0 /*15*/], Local_252[iVar0 /*15*/], 1f);
						iVar0++;
					}
					MISC::CLEAR_AREA(209.64f, -2015.48f, 26.6f, 10f, true, false, false, false);
					iLocal_565 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -209.6465f, -2015.4807f, 26.6206f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_565, 73.3412f);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_565, 64, 0);
					MISC::CLEAR_AREA(-210.8506f, -2018.3702f, 26.6207f, 10f, true, false, false, false);
					iLocal_567 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -210.8506f, -2018.3702f, 26.6207f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_567, 70.9631f);
					MISC::CLEAR_AREA(-206.0113f, -2055.33f, 26.6199f, 10f, true, false, false, false);
					iLocal_568 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -206.0113f, -2055.33f, 26.6199f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_568, 53.3779f);
					MISC::CLEAR_AREA(-199.4559f, -2045.2799f, 26.6199f, 10f, true, false, false, false);
					iLocal_569 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -199.4559f, -2045.2799f, 26.6199f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_569, 59.9934f);
					MISC::CLEAR_AREA(-218.2066f, -2070.0325f, 26.6199f, 10f, true, false, false, false);
					iLocal_570 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -218.2066f, -2070.0325f, 26.6199f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_570, 45.2218f);
					iLocal_532++;
				}
			}
			break;
		case 1:
			func_576();
			if (func_575())
			{
				iLocal_532++;
				return 1;
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_579()//Position - 0x7C0A6
{
	if (iLocal_548)
	{
		__LIB_0__::func_427(-239.1158f, -2005.1418f, 23.6855f, 121.9928f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(__LIB_12__::func_894(0));
	STREAMING::REQUEST_MODEL(__LIB_12__::func_894(2));
	func_616();
	STREAMING::REQUEST_MODEL(Local_315.f_1);
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	iLocal_772 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-251.4008f, -2008.3384f, 29.1458f, "v_stadium");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_772);
	if (iLocal_548)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while ((((((!STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_894(0)) || !STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_894(2))) || !func_615()) || !STREAMING::HAS_MODEL_LOADED(Local_315.f_1)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) || !INTERIOR::IS_INTERIOR_READY(iLocal_772))
	{
		SYSTEM::WAIT(0);
	}
	func_424(2, 1);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -239.1158f, -2005.1418f, 23.6855f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 121.9928f);
	__LIB_12__::func_849(2, 1);
	MISC::CLEAR_AREA(-239.1602f, -2002.6151f, 23.6856f, 1000f, true, false, false, false);
	if (!iLocal_548)
	{
		STREAMING::NEW_LOAD_SCENE_START(-239.1602f, -2002.6151f, 23.6856f, __LIB_3__::func_80(0f, 0f, 145.8395f), 40f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	func_424(2, 1);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.5457f, 23.6855f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
	__LIB_0__::func_222(&uLocal_575, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.1418f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	func_472(&(iLocal_429[0]), 0, -240.5416f, -2006.2936f, 23.6856f, 85.0646f, 1, 0, 0);
	func_612(iLocal_429[0]);
	func_611(&(iLocal_429[0]), 1);
	__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_429[0], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.1418f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	__LIB_16__::func_930(&Local_262, 27, Local_262.f_3, Local_262.f_9, 0);
	func_612(Local_262.f_0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_262.f_0, 3, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_0, true);
	Local_262.f_2 = __LIB_0__::func_666(Local_262.f_0, 1, 145);
	__LIB_0__::func_222(&uLocal_575, 5, Local_262.f_0, "lazlow", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_262.f_0, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.1418f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom001"));
	__LIB_16__::func_930(&Local_282, 15, -235.0557f, -2000.0452f, 23.6854f, 86.6f, 1);
	func_612(Local_282.f_0);
	func_611(&Local_282, 1);
	PED::SET_PED_CAN_RAGDOLL(Local_282.f_0, true);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 2, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 3, 5, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 6, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 8, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_282.f_0, 11, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_575, 4, Local_282.f_0, "tracey", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_282.f_0, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.1418f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	Local_315.f_0 = PED::CREATE_PED(26, Local_315.f_1, -235.4601f, -2003.0004f, 23.6854f, 86.6f, true, true);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_315.f_0, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.1418f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom004"));
	ENTITY::SET_ENTITY_HEALTH(Local_315.f_0, 2, 0);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_315);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_315.f_1);
	SYSTEM::WAIT(0);
	while (((!__LIB_16__::func_315(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_315(iLocal_429[0])) || !__LIB_16__::func_315(Local_262.f_0)) || !__LIB_16__::func_315(Local_282.f_0))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_774);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_429[0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
		PED::FORCE_PED_MOTION_STATE(iLocal_429[0], joaat("MotionState_Run"), false, 0, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[0], false, false);
	}
	iLocal_486 = MISC::GET_GAME_TIMER();
	func_580();
	__LIB_17__::func_789(2, "run after lazlow", 0, 0, 0, 1);
}

void func_580()//Position - 0x7C5F3
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_222 - 1))
	{
		iLocal_222[iVar0] = 6;
		iVar0++;
	}
	__LIB_12__::func_849(2, 1);
	iLocal_550 = __LIB_0__::func_639(iLocal_429[0], 0, 0);
	func_612(iLocal_429[0]);
	func_611(&(iLocal_429[0]), 1);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	if (!PED::IS_PED_INJURED(Local_282.f_0))
	{
		func_612(Local_282.f_0);
		func_611(&Local_282, 1);
		PED::SET_PED_CAN_RAGDOLL(Local_282.f_0, true);
		__LIB_0__::func_222(&uLocal_575, 4, Local_282.f_0, "tracey", 0, 1);
		func_588();
	}
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck3"), true);
	func_587();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 2)
		{
			func_539(0, 0f, 0f, 0);
		}
		else
		{
			func_539(0, -60f, 0f, 0);
		}
	}
	else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 2)
	{
		__LIB_17__::func_195(0, 1, 0, 0f, 0f, 3000, 0);
	}
	else
	{
		__LIB_17__::func_195(0, 1, 0, -60f, 0f, 3000, 0);
	}
	if (!func_584("FAM4_MISSION_START"))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_START");
		func_581("FAM4_MISSION_START", 1);
	}
	__LIB_17__::func_789(2, "run after lazlow", 0, 0, 0, 1);
	iLocal_223 = 5;
}

void func_581(char* sParam0, bool bParam1)//Position - 0x7C740
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_518)
		{
			if (iLocal_518[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_518[iVar1] == 0)
			{
				iLocal_518[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_583(iVar0);
		if (iVar3 != -1)
		{
			iLocal_518[iVar3] = 0;
			func_582();
		}
	}
}

void func_582()//Position - 0x7C7BB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_518 - 1))
	{
		if (iLocal_518[iVar0] == 0)
		{
			if (iLocal_518[iVar0 + 1] != 0)
			{
				iLocal_518[iVar0] = iLocal_518[iVar0 + 1];
				iLocal_518[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_583(int iParam0)//Position - 0x7C80E
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_518)
	{
		if (iLocal_518[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_518[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_584(char* sParam0)//Position - 0x7C851
{
	return func_583(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_587()//Position - 0x7C937
{
	switch (iLocal_535)
	{
		case 0:
			if (iLocal_482)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
						iLocal_535++;
					}
					else
					{
						iLocal_535++;
					}
				}
			}
			break;
		case 1:
			break;
	}
}

void func_588()//Position - 0x7C99D
{
	if (!PED::IS_PED_INJURED(Local_282.f_0))
	{
		switch (iLocal_519)
		{
			case 0:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4leadinoutmcs2"))
				{
					Local_543 = { -234.834f, -1999.252f, 24.68f };
					Local_544 = { 0f, 0f, -127f };
					Local_282.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_543, Local_544, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_282.f_0, Local_282.f_11, "missfam4leadinoutmcs2", "tracy_loop", 1000f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_282.f_11, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_282.f_0, true, false);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_282.f_0, 16);
					iLocal_519++;
				}
				break;
			case 1:
				if (!func_584("FAM4_CRIES"))
				{
					if (!__LIB_13__::func_755(&Local_752, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_282.f_0, true), true) < 5f)
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_CRIES", 6, 0, 0, 0))
							{
								func_581("FAM4_CRIES", 1);
							}
						}
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_282.f_11) && !PED::IS_PED_RAGDOLL(Local_282.f_0)) && !PED::IS_PED_DEAD_OR_DYING(Local_282.f_0, true))
				{
					if (__LIB_38__::func_170(Local_282.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_COWER(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
						TASK::TASK_PERFORM_SEQUENCE(Local_282.f_0, iLocal_774);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
					}
				}
				break;
			case 2:
				break;
			}
	}
}

void func_611(int iParam0, bool bParam1)//Position - 0x7D44F
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_796, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_796);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_797);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_796, iLocal_797);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_797, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_797, iLocal_796);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_796);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, false, 0f);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
	}
}

void func_612(int iParam0)//Position - 0x7D4E9
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 145);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
}

int func_615()//Position - 0x7D5C1
{
	if ((STREAMING::HAS_MODEL_LOADED(Local_262.f_1) && STREAMING::HAS_MODEL_LOADED(Local_282.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam4leadinoutmcs2"))
	{
		return 1;
	}
	return 0;
}

void func_616()//Position - 0x7D5F6
{
	STREAMING::REQUEST_MODEL(Local_262.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_262.f_1, true);
	STREAMING::REQUEST_MODEL(Local_282.f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_282.f_1, true);
	STREAMING::REQUEST_ANIM_DICT("missfam4leadinoutmcs2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("fame1");
}

void func_617()//Position - 0x7D636
{
	if (iLocal_548)
	{
		__LIB_0__::func_427(-219.6464f, -2037.822f, 26.6207f, 56.6757f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_271.f_1);
	STREAMING::REQUEST_MODEL(Local_291.f_1);
	STREAMING::REQUEST_MODEL(Local_302[0 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_302[1 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_310.f_1);
	STREAMING::REQUEST_MODEL(Local_385.f_2);
	if (__LIB_13__::func_821())
	{
		if (__LIB_17__::func_604(__LIB_13__::func_790(), 1))
		{
			Local_225.f_1 = __LIB_13__::func_791();
		}
	}
	STREAMING::REQUEST_MODEL(Local_225.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_225.f_1, true);
	STREAMING::REQUEST_MODEL(Local_251[0 /*15*/].f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_251[0 /*15*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_252[0 /*15*/].f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_252[0 /*15*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_240.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_ANIM_DICT("missfam4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(501, "lkfamily4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(502, "lkfamily4");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_2");
	iLocal_772 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-251.4008f, -2008.3384f, 29.1458f, "v_stadium");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_772);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("fame1");
	if (iLocal_548)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while ((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_271.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_291.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_302[0 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_302[1 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_310.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_385.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_225.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_251[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_252[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_240.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfam4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(502, "lkfamily4")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2")) || !INTERIOR::IS_INTERIOR_READY(iLocal_772))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(-219.6464f, -2037.822f, 26.6207f, 10000f, true, false, false, false);
	if (__LIB_13__::func_821())
	{
		if (__LIB_17__::func_604(__LIB_13__::func_790(), 1))
		{
			Local_225.f_0 = __LIB_37__::func_914(-219.6464f, -2037.822f, 26.6207f, 56.6757f);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_225.f_0, false, 0);
		}
		else
		{
			__LIB_17__::func_202(&Local_225, 0, -219.6464f, -2037.822f, 26.6207f, 56.6757f, 1, 0);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_225.f_0, false, 0);
		}
	}
	else
	{
		__LIB_17__::func_202(&Local_225, 0, -219.6464f, -2037.822f, 26.6207f, 56.6757f, 1, 0);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_225.f_0, false, 0);
	}
	VEHICLE::SET_FORCE_HD_VEHICLE(Local_225.f_0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_225.f_0, true, true, false);
	if (__LIB_14__::func_466() == 0)
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_225.f_0, -1);
		__LIB_0__::func_222(&uLocal_575, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
		func_81(&(iLocal_429[2]), 2, Local_225.f_0, 0, 0, 0, 0);
		func_612(iLocal_429[2]);
		func_611(&(iLocal_429[2]), 1);
		__LIB_0__::func_222(&uLocal_575, 2, iLocal_429[2], "trevor", 0, 1);
		if (!__LIB_17__::func_76(iLocal_429[2], 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_429[2], joaat("WEAPON_PISTOL"), 50, false, false);
		}
	}
	else
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_225.f_0, -1);
		__LIB_0__::func_222(&uLocal_575, 2, iLocal_429[0], "trevor", 0, 1);
		func_81(&(iLocal_429[0]), 0, Local_225.f_0, 0, 0, 0, 0);
		func_612(iLocal_429[0]);
		func_611(&(iLocal_429[0]), 1);
		__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
		if (!__LIB_17__::func_76(iLocal_429[0], 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_429[0], joaat("WEAPON_PISTOL"), 50, false, false);
		}
	}
	while (!func_618())
	{
		SYSTEM::WAIT(0);
	}
	Local_251[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_251[0 /*15*/].f_1, Local_251[0 /*15*/].f_3, Local_251[0 /*15*/].f_6, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_251[0 /*15*/], 2);
	VEHICLE::SET_VEHICLE_COLOURS(Local_251[0 /*15*/], 0, 0);
	Local_252[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_252[0 /*15*/].f_1, Local_252[0 /*15*/].f_3, Local_252[0 /*15*/].f_6, true, true, false);
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_251[0 /*15*/], Local_252[0 /*15*/], 1f);
	Local_304.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_251[0 /*15*/], 26, Local_304.f_1, -1, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_304.f_1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_304.f_0, true);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_251[0 /*15*/], 501, "lkfamily4", true);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_252[0 /*15*/], 502, "lkfamily4", true);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_251[0 /*15*/], true);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_252[0 /*15*/], true);
	iLocal_516 = 2;
	func_48(1);
	func_43();
	while (!ENTITY::DOES_ENTITY_EXIST(Local_302[0 /*20*/]))
	{
		SYSTEM::WAIT(0);
		func_43();
	}
	if (!iLocal_548)
	{
		STREAMING::LOAD_SCENE(-219.6464f, -2037.822f, 26.6207f);
	}
	iLocal_504 = 5;
	iLocal_502 = 2;
	func_539(1, 0, 0, 1);
	__LIB_17__::func_789(1, "outside stadium", 0, 0, 0, 1);
	iLocal_223 = 3;
}

int func_618()//Position - 0x7DBE5
{
	int iVar0;
	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
	{
		switch (iLocal_534)
		{
			case 0:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_234.f_3, true) < 550f)
				{
					STREAMING::REQUEST_MODEL(Local_234.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
					STREAMING::REQUEST_MODEL(Local_236.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
					STREAMING::REQUEST_MODEL(Local_240.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
					if ((STREAMING::HAS_MODEL_LOADED(Local_234.f_1) && STREAMING::HAS_MODEL_LOADED(Local_236.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_240.f_1))
					{
						iLocal_534++;
					}
				}
				break;
			case 1:
				STREAMING::REQUEST_MODEL(Local_234.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
				STREAMING::REQUEST_MODEL(Local_236.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
				STREAMING::REQUEST_MODEL(Local_240.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
				STREAMING::REQUEST_MODEL(joaat("sentinel"));
				STREAMING::REQUEST_MODEL(joaat("schafter2"));
				if ((((STREAMING::HAS_MODEL_LOADED(Local_234.f_1) && STREAMING::HAS_MODEL_LOADED(Local_236.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_240.f_1)) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2")))
				{
					MISC::CLEAR_AREA(Local_234.f_3, 10f, true, false, false, false);
					Local_234.f_0 = VEHICLE::CREATE_VEHICLE(Local_234.f_1, Local_234.f_3, Local_234.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_234.f_0, 2);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_234.f_0, false);
					VEHICLE::SET_VEHICLE_COLOURS(Local_234.f_0, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(Local_234.f_0, 1500, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_234.f_0, 1500f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_234.f_0, 1500f);
					VEHICLE::SET_VEHICLE_STRONG(Local_234.f_0, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_234.f_0, true);
					MISC::CLEAR_AREA(Local_236.f_3, 10f, true, false, false, false);
					Local_236.f_0 = VEHICLE::CREATE_VEHICLE(Local_236.f_1, Local_236.f_3, Local_236.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, false);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_234.f_0, Local_236.f_0, 1f);
					Local_240.f_0 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_240.f_0, true, true, false);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_240.f_0, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_240.f_0, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_240.f_0, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_240.f_0, false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_240.f_0, false);
					iVar0 = 1;
					while (iVar0 <= (Local_251.f_0 - 1))
					{
						MISC::CLEAR_AREA(Local_251[iVar0 /*15*/].f_3, 10f, true, false, false, false);
						Local_251[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_251[iVar0 /*15*/].f_1, Local_251[iVar0 /*15*/].f_3, Local_251[iVar0 /*15*/].f_6, true, true, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_251[iVar0 /*15*/], 2);
						VEHICLE::SET_VEHICLE_COLOURS(Local_251[iVar0 /*15*/], (10 * iVar0), 0);
						Local_252[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_252[iVar0 /*15*/].f_1, Local_252[iVar0 /*15*/].f_3, Local_252[iVar0 /*15*/].f_6, true, true, false);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_251[iVar0 /*15*/], Local_252[iVar0 /*15*/], 1f);
						iVar0++;
					}
					MISC::CLEAR_AREA(-210.2187f, -2015.1078f, 27.1112f, 4f, true, false, false, false);
					iLocal_565 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -209.6465f, -2015.4807f, 26.6206f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_565, 73.3412f);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_565, 64, 0);
					MISC::CLEAR_AREA(-210.8506f, -2018.3702f, 26.6207f, 4f, true, false, false, false);
					iLocal_567 = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), -210.8506f, -2018.3702f, 26.6207f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_567, 70.9631f);
					MISC::CLEAR_AREA(-206.0113f, -2055.33f, 26.6199f, 4f, true, false, false, false);
					iLocal_568 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -206.0113f, -2055.33f, 26.6199f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_568, 53.3779f);
					MISC::CLEAR_AREA(-199.4559f, -2045.2799f, 26.6199f, 4f, true, false, false, false);
					iLocal_569 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -199.4559f, -2045.2799f, 26.6199f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_569, 59.9934f);
					MISC::CLEAR_AREA(-218.2066f, -2070.0325f, 26.6199f, 4f, true, false, false, false);
					iLocal_570 = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -218.2066f, -2070.0325f, 26.6199f, 0f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_570, 45.2218f);
					iLocal_534++;
					return 1;
				}
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_719()//Position - 0x89D6D
{
	if (iLocal_548)
	{
		__LIB_0__::func_427(Local_271.f_3, Local_271.f_9, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_271.f_1);
	STREAMING::REQUEST_MODEL(Local_291.f_1);
	if (__LIB_13__::func_821())
	{
		Local_225.f_1 = __LIB_13__::func_791();
	}
	STREAMING::REQUEST_MODEL(Local_225.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_225.f_1, true);
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_2");
	if (iLocal_548)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((!STREAMING::HAS_MODEL_LOADED(Local_271.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_291.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_225.f_1)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2"))
	{
		SYSTEM::WAIT(0);
	}
	if (!__LIB_0__::func_478(4, PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_635(4, PLAYER::PLAYER_PED_ID());
	}
	MISC::CLEAR_AREA(Local_225.f_3, 300f, true, false, false, false);
	__LIB_17__::func_198(-800.31f, 184.8f, 72.72f, 300f, 0);
	__LIB_17__::func_90(0, 0);
	if (__LIB_13__::func_821())
	{
		Local_225.f_0 = __LIB_37__::func_914(Local_225.f_3, Local_225.f_6);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_225.f_0, false, 0);
	}
	else
	{
		__LIB_17__::func_202(&Local_225, 0, Local_225.f_3, Local_225.f_6, 1, 0);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_225.f_0, false, 0);
	}
	if (__LIB_14__::func_466() == 0)
	{
	}
	else if (__LIB_14__::func_466() == 2)
	{
	}
	switch (__LIB_14__::func_466())
	{
		case 0:
			func_472(&(iLocal_429[2]), 2, Local_291.f_3, Local_291.f_9, 0, 0, 0);
			func_612(iLocal_429[2]);
			func_721(iLocal_429[2], joaat("WEAPON_PISTOL"), 50, 0, 0);
			func_611(&(iLocal_429[2]), 1);
			__LIB_0__::func_222(&uLocal_575, 2, iLocal_429[2], "trevor", 0, 1);
			while (!__LIB_16__::func_315(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_315(iLocal_429[2]))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(iLocal_429[2]))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_429[2], joaat("MotionState_Walk"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[2], false, false);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_271.f_3, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_271.f_9);
			PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
			__LIB_0__::func_222(&uLocal_575, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
			break;
		case 2:
			func_472(&(iLocal_429[0]), 0, Local_291.f_3, Local_291.f_9, 0, 0, 0);
			func_612(iLocal_429[0]);
			func_721(iLocal_429[0], joaat("WEAPON_PISTOL"), 50, 0, 0);
			func_611(&(iLocal_429[0]), 1);
			__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
			if (!__LIB_17__::func_76(iLocal_429[0], 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_429[0], joaat("WEAPON_PISTOL"), 50, false, false);
			}
			while (!__LIB_16__::func_315(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_315(iLocal_429[0]))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(iLocal_429[0]))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_429[0], joaat("MotionState_Walk"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[0], false, false);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_271.f_3, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_271.f_9);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
			__LIB_0__::func_222(&uLocal_575, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
			break;
	}
	if (!iLocal_548)
	{
		STREAMING::LOAD_SCENE(-819.9973f, 176.7442f, 70.6074f);
	}
	func_539(1, 0, 0, 1);
	__LIB_16__::func_308(&Local_752, Local_225.f_0);
	__LIB_17__::func_789(0, "start of mission", 0, 0, 0, 1);
	iLocal_223 = 3;
}

void func_721(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8A1A4
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam1) < 50)
	{
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iParam1, iParam2, false);
	}
}

void func_722()//Position - 0x8A1E6
{
	int iVar0;
	iVar0 = 0;
	iLocal_469 = 0;
	iLocal_470 = 0;
	iLocal_471 = 0;
	iLocal_472 = 0;
	iLocal_473 = 0;
	bLocal_474 = false;
	iLocal_475 = 0;
	iLocal_476 = 0;
	iLocal_477 = 0;
	bLocal_478 = false;
	bLocal_479 = false;
	iLocal_480 = 0;
	iLocal_481 = 0;
	iLocal_482 = 0;
	iLocal_484 = 0;
	bLocal_485 = false;
	iLocal_486 = 0;
	iLocal_487 = 0;
	iLocal_488 = 0;
	iLocal_489 = 0;
	iLocal_491 = 0;
	iLocal_492 = 0;
	iLocal_493 = 0;
	iLocal_494 = 0;
	iLocal_495 = 0;
	iLocal_496 = 0;
	iLocal_497 = 0;
	iLocal_498 = 0;
	iLocal_499 = 0;
	iLocal_500 = 0;
	iLocal_501 = 0;
	iLocal_502 = 0;
	iLocal_503 = 0;
	iLocal_504 = 0;
	iLocal_506 = 0;
	iLocal_508 = 0;
	iLocal_509 = 0;
	iLocal_510 = 0;
	iLocal_511 = 0;
	iLocal_512 = 0;
	iLocal_513 = 0;
	iLocal_514 = 0;
	iLocal_515 = 0;
	iLocal_516 = 0;
	iLocal_517 = 0;
	iLocal_519 = 0;
	iLocal_520 = 0;
	iLocal_521 = 0;
	iLocal_522 = 0;
	iLocal_523 = 0;
	iLocal_524 = 0;
	iLocal_525 = 0;
	iLocal_526 = 0;
	iLocal_527 = 0;
	iLocal_528 = 0;
	iLocal_529 = 0;
	iLocal_530 = 0;
	iLocal_531 = 0;
	iLocal_532 = 0;
	iLocal_533 = 0;
	iLocal_534 = 0;
	iLocal_535 = 0;
	iLocal_536 = 0;
	fLocal_542 = 1f;
	Local_225.f_1 = __LIB_15__::func_221(0, 0);
	Local_225.f_3 = { -823.5428f, 181.3025f, 70.6662f };
	Local_225.f_6 = 142.815f;
	Local_253.f_1 = __LIB_17__::func_229(17, 0);
	Local_253.f_3 = { -814.9363f, 159.0206f, 70.1653f };
	Local_253.f_6 = 111.478f;
	Local_282.f_1 = __LIB_15__::func_957(15);
	Local_282.f_3 = { -235.6421f, -2002.962f, 23.7019f };
	Local_282.f_9 = 346.8777f;
	Local_291.f_1 = __LIB_12__::func_894(2);
	Local_291.f_3 = { -821.6787f, 177.1601f, 70.4371f };
	Local_291.f_9 = 60.5512f;
	Local_262.f_1 = __LIB_15__::func_957(27);
	Local_262.f_3 = { -251.9397f, -2015.8335f, 29.1458f };
	Local_262.f_9 = 179.1901f;
	Local_271.f_1 = __LIB_12__::func_894(0);
	Local_271.f_3 = { -818.2477f, 177.6348f, 71.2278f };
	Local_271.f_9 = 55f;
	Local_310.f_1 = joaat("A_M_Y_BevHills_02");
	Local_310.f_3 = { -225.6118f, -2036.6278f, 26.7552f };
	Local_310.f_9 = 234.7701f;
	Local_310.f_10 = 200;
	Local_310.f_15 = joaat("WEAPON_UNARMED");
	Local_310.f_14 = 0;
	Local_385.f_2 = joaat("p_cs_clipboard");
	Local_303[0 /*20*/].f_3 = { -238.6681f, -1999.3461f, 23.6856f };
	Local_303[0 /*20*/].f_9 = 228.3978f;
	Local_303[0 /*20*/].f_1 = joaat("A_M_Y_BevHills_02");
	Local_303[0 /*20*/].f_10 = 200;
	Local_303[0 /*20*/].f_15 = joaat("WEAPON_UNARMED");
	Local_303[1 /*20*/].f_3 = { -239.6867f, -2000.6594f, 23.6857f };
	Local_303[1 /*20*/].f_9 = 291.412f;
	Local_303[1 /*20*/].f_1 = joaat("A_M_Y_BevHills_02");
	Local_303[1 /*20*/].f_10 = 200;
	Local_303[1 /*20*/].f_15 = joaat("WEAPON_UNARMED");
	Local_304.f_1 = joaat("A_M_Y_Hipster_03");
	Local_304.f_14 = 0;
	Local_334.f_1 = joaat("A_M_Y_Hipster_03");
	Local_334.f_14 = 0;
	Local_341.f_2 = joaat("prop_v_bmike_01");
	Local_363.f_2 = joaat("prop_v_cam_01");
	Local_240.f_3 = { -228.9739f, -2048.9016f, 26.6199f };
	Local_240.f_6 = 237.5635f;
	Local_240.f_1 = joaat("dilettante");
	Local_234.f_3 = { -236.062f, -2061.1475f, 26.6199f };
	Local_234.f_6 = 312.1216f;
	Local_234.f_1 = joaat("phantom");
	Local_234.f_9 = 1500;
	Local_234.f_10 = 1500f;
	Local_234.f_11 = 1500f;
	Local_236.f_3 = { -236.062f, -2061.1475f, 36.7554f };
	Local_236.f_6 = 312.1205f;
	Local_236.f_1 = joaat("tvtrailer");
	Local_236.f_9 = 1500;
	Local_236.f_10 = 1500f;
	Local_236.f_11 = 1500f;
	Local_251[0 /*15*/].f_3 = { -201.8963f, -2032.4478f, 26.6203f };
	Local_251[0 /*15*/].f_6 = 337.8227f;
	Local_251[0 /*15*/].f_1 = joaat("phantom");
	Local_251[1 /*15*/].f_3 = { -182.2236f, -2037.1106f, 26.6207f };
	Local_251[1 /*15*/].f_6 = 159.8179f;
	Local_251[1 /*15*/].f_1 = joaat("phantom");
	Local_251[2 /*15*/].f_3 = { -194.6085f, -2059.6265f, 26.6199f };
	Local_251[2 /*15*/].f_6 = 323.6319f;
	Local_251[2 /*15*/].f_1 = joaat("phantom");
	Local_252[0 /*15*/].f_3 = { -201.8963f, -2032.4478f, 26.6203f };
	Local_252[0 /*15*/].f_6 = 337.8227f;
	Local_252[0 /*15*/].f_1 = joaat("tvtrailer");
	Local_252[1 /*15*/].f_3 = { -182.2236f, -2037.1106f, 26.6207f };
	Local_252[1 /*15*/].f_6 = 159.8179f;
	Local_252[1 /*15*/].f_1 = joaat("tvtrailer");
	Local_252[2 /*15*/].f_3 = { -194.6085f, -2059.6265f, 26.6199f };
	Local_252[2 /*15*/].f_6 = 323.6319f;
	Local_252[2 /*15*/].f_1 = joaat("tvtrailer");
	Local_302[0 /*20*/].f_3 = { -251.91357f, -2009.5575f, 29.7709f };
	Local_302[0 /*20*/].f_9 = 7.232f;
	Local_302[0 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[0 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[0 /*20*/].f_16), "ambient 0", 16);
	Local_302[1 /*20*/].f_3 = { -253.35614f, -2009.1768f, 29.61563f };
	Local_302[1 /*20*/].f_9 = 157.1295f;
	Local_302[1 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[1 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[1 /*20*/].f_16), "ambient 1", 16);
	Local_302[2 /*20*/].f_3 = { -254.06537f, -2008.9365f, 29.61491f };
	Local_302[2 /*20*/].f_9 = 346.0804f;
	Local_302[2 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[2 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[2 /*20*/].f_16), "ambient 2", 16);
	Local_302[3 /*20*/].f_3 = { -252.6981f, -2011.3966f, 29.61507f };
	Local_302[3 /*20*/].f_9 = 190.848f;
	Local_302[3 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[3 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[3 /*20*/].f_16), "ambient 3", 16);
	Local_302[4 /*20*/].f_3 = { -254.08226f, -2010.9315f, 29.61472f };
	Local_302[4 /*20*/].f_9 = 137.1725f;
	Local_302[4 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[4 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[4 /*20*/].f_16), "ambient 4", 16);
	Local_302[5 /*20*/].f_3 = { -256.99323f, -2011.696f, 29.61485f };
	Local_302[5 /*20*/].f_9 = 25.3523f;
	Local_302[5 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[5 /*20*/].f_10 = 200;
	Local_302[5 /*20*/].f_6 = { -264.8563f, -2026.9689f, 29.1457f };
	StringCopy(&(Local_302[5 /*20*/].f_16), "ambient 5", 16);
	Local_302[6 /*20*/].f_3 = { -254.78746f, -2015.1675f, 29.61569f };
	Local_302[6 /*20*/].f_9 = 55.1177f;
	Local_302[6 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[6 /*20*/].f_10 = 200;
	Local_302[6 /*20*/].f_6 = { -267.6687f, -2026.7245f, 29.1457f };
	StringCopy(&(Local_302[6 /*20*/].f_16), "ambient 6", 16);
	Local_302[7 /*20*/].f_3 = { -256.7811f, -2016.8898f, 29.61457f };
	Local_302[7 /*20*/].f_9 = 61.2313f;
	Local_302[7 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[7 /*20*/].f_6 = { -262.918f, -2015.7728f, 29.1457f };
	Local_302[7 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[7 /*20*/].f_16), "ambient 7", 16);
	Local_302[8 /*20*/].f_3 = { -256.91928f, -2019.3225f, 29.61442f };
	Local_302[8 /*20*/].f_9 = 53.501f;
	Local_302[8 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[8 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[8 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[8 /*20*/].f_16), "ambient 8", 16);
	Local_302[9 /*20*/].f_3 = { -261.9f, -2012.4f, 30.4f };
	Local_302[9 /*20*/].f_9 = 53.501f;
	Local_302[9 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[9 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[9 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[9 /*20*/].f_16), "ambient 9", 16);
	Local_302[10 /*20*/].f_3 = { -253.39073f, -2011.1483f, 29.6145f };
	Local_302[10 /*20*/].f_9 = 53.501f;
	Local_302[10 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[10 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[10 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[10 /*20*/].f_16), "ambient 10", 16);
	Local_302[11 /*20*/].f_3 = { -253.18893f, -2013.8142f, 29.61418f };
	Local_302[11 /*20*/].f_9 = 53.501f;
	Local_302[11 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[11 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[11 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[11 /*20*/].f_16), "ambient 11", 16);
	Local_302[12 /*20*/].f_3 = { -254.51971f, -2013.1854f, 29.61651f };
	Local_302[12 /*20*/].f_9 = 53.501f;
	Local_302[12 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[12 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[12 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[12 /*20*/].f_16), "ambient 12", 16);
	Local_302[13 /*20*/].f_3 = { -255.71133f, -2012.375f, 29.61684f };
	Local_302[13 /*20*/].f_9 = 53.501f;
	Local_302[13 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[13 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[13 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[13 /*20*/].f_16), "ambient 13", 16);
	Local_302[14 /*20*/].f_3 = { -256.0377f, -2014.4717f, 29.61486f };
	Local_302[14 /*20*/].f_9 = 53.501f;
	Local_302[14 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[14 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[14 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[14 /*20*/].f_16), "ambient 14", 16);
	Local_302[15 /*20*/].f_3 = { -258.00876f, -2018.3755f, 29.61538f };
	Local_302[15 /*20*/].f_9 = 53.501f;
	Local_302[15 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[15 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[15 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[15 /*20*/].f_16), "ambient 15", 16);
	Local_302[16 /*20*/].f_3 = { -258.5865f, -2017.8899f, 29.61535f };
	Local_302[16 /*20*/].f_9 = 53.501f;
	Local_302[16 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[16 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[16 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[16 /*20*/].f_16), "ambient 16", 16);
	Local_302[17 /*20*/].f_3 = { -259.07278f, -2017.3721f, 29.61586f };
	Local_302[17 /*20*/].f_9 = 53.501f;
	Local_302[17 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[17 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[17 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[17 /*20*/].f_16), "ambient 17", 16);
	Local_302[18 /*20*/].f_3 = { -259.38562f, -2021.0356f, 29.61567f };
	Local_302[18 /*20*/].f_9 = 53.501f;
	Local_302[18 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[18 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[18 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[18 /*20*/].f_16), "ambient 18", 16);
	Local_302[19 /*20*/].f_3 = { -260.50043f, -2020.1405f, 29.61454f };
	Local_302[19 /*20*/].f_9 = 53.501f;
	Local_302[19 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[19 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[19 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[19 /*20*/].f_16), "ambient 19", 16);
	Local_302[20 /*20*/].f_3 = { -260.61868f, -2022.4989f, 29.61511f };
	Local_302[20 /*20*/].f_9 = 53.501f;
	Local_302[20 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[20 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[20 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[20 /*20*/].f_16), "ambient 20", 16);
	Local_302[21 /*20*/].f_3 = { -261.72968f, -2021.5667f, 29.61508f };
	Local_302[21 /*20*/].f_9 = 53.501f;
	Local_302[21 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[21 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[21 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[21 /*20*/].f_16), "ambient 21", 16);
	Local_302[22 /*20*/].f_3 = { -262.80533f, -2020.6476f, 29.61561f };
	Local_302[22 /*20*/].f_9 = 53.501f;
	Local_302[22 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[22 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[22 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[22 /*20*/].f_16), "ambient 22", 16);
	Local_302[23 /*20*/].f_3 = { -261.82846f, -2023.9495f, 29.61547f };
	Local_302[23 /*20*/].f_9 = 53.501f;
	Local_302[23 /*20*/].f_1 = joaat("A_F_Y_Hipster_03");
	Local_302[23 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[23 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[23 /*20*/].f_16), "ambient 23", 16);
	Local_302[24 /*20*/].f_3 = { -262.92258f, -2023.0536f, 29.61676f };
	Local_302[24 /*20*/].f_9 = 53.501f;
	Local_302[24 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[24 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[24 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[24 /*20*/].f_16), "ambient 24", 16);
	Local_302[25 /*20*/].f_3 = { -263.04446f, -2025.401f, 29.61566f };
	Local_302[25 /*20*/].f_9 = 53.501f;
	Local_302[25 /*20*/].f_1 = joaat("A_M_Y_Hipster_03");
	Local_302[25 /*20*/].f_6 = { -261.5929f, -2013.7483f, 29.1457f };
	Local_302[25 /*20*/].f_10 = 200;
	StringCopy(&(Local_302[25 /*20*/].f_16), "ambient 25", 16);
	Local_315.f_1 = joaat("S_M_Y_Doorman_01");
	Local_248[0 /*15*/].f_3 = { 473.57f, -1204.89f, 29.3429f };
	Local_248[0 /*15*/].f_6 = 270f;
	Local_248[0 /*15*/].f_1 = joaat("metrotrain");
	Local_248[0 /*15*/].f_13 = 4;
	Local_248[1 /*15*/].f_3 = { 497.61f, -1206f, 29f };
	Local_248[1 /*15*/].f_6 = 322f;
	Local_248[1 /*15*/].f_1 = joaat("tankercar");
	Local_248[2 /*15*/].f_3 = { 440.77f, -1201.98f, 33f };
	Local_248[2 /*15*/].f_1 = joaat("freight");
	Local_249.f_1 = joaat("biff");
	Local_249.f_3 = { 497.5658f, -1094.8477f, 28.0248f };
	Local_249.f_6 = 179.3035f;
	Local_249.f_13 = 7;
	Local_340[0 /*24*/].f_3 = { 458.3f, -1084.37f, 29.94f };
	Local_340[0 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_340[0 /*24*/].f_6 = { 0f, -2.53f, 0.66f };
	Local_340[0 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_340[0 /*24*/].f_19 = 194000f;
	Local_340[1 /*24*/].f_3 = { 458.3f, -1084.37f, 30.94f };
	Local_340[1 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_340[1 /*24*/].f_6 = { 0f, -1.74f, 0.66f };
	Local_340[1 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_340[1 /*24*/].f_19 = 19700f;
	Local_340[2 /*24*/].f_3 = { 458.3f, -1084.37f, 31.94f };
	Local_340[2 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_340[2 /*24*/].f_6 = { 0f, -0.91f, 0.66f };
	Local_340[2 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_340[2 /*24*/].f_19 = 20000f;
	Local_340[3 /*24*/].f_3 = { 458.3f, -1084.37f, 32.94f };
	Local_340[3 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_340[3 /*24*/].f_6 = { 0f, -0.1f, 0.66f };
	Local_340[3 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_340[3 /*24*/].f_19 = 20300f;
	Local_340[4 /*24*/].f_3 = { 458.3f, -1084.37f, 33.94f };
	Local_340[4 /*24*/].f_2 = joaat("prop_gascyl_01a");
	Local_340[4 /*24*/].f_6 = { 0f, 0.72f, 0.66f };
	Local_340[4 /*24*/].f_15 = { 0f, 0f, 90f };
	Local_340[4 /*24*/].f_19 = 20600f;
	Local_407.f_2 = joaat("p_laz_j02_s");
	iVar0 = 0;
	while (iVar0 <= (Local_340.f_0 - 1))
	{
		iLocal_490[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_222 - 1))
	{
		iLocal_222[iVar0] = 5;
		Local_302[iVar0 /*20*/].f_14 = 0;
		iVar0++;
	}
}

void func_725()//Position - 0x8B826
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_517)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_240.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(joaat("schafter2"));
			STREAMING::REQUEST_MODEL(joaat("manana"));
			func_576();
			if ((((STREAMING::HAS_MODEL_LOADED(Local_240.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && func_575())
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
				{
					Local_240.f_0 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_240.f_0, true, true, false);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_240.f_0, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_240.f_0, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_240.f_0, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_240.f_0, false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_240.f_0, false);
					ENTITY::SET_ENTITY_COLLISION(Local_240.f_0, false, false);
					ENTITY::SET_ENTITY_VISIBLE(Local_240.f_0, false, false);
					Local_240.f_2 = __LIB_0__::func_639(Local_240.f_0, 0, 0);
					func_574("lkfamily4", 1, 1, 1);
					iLocal_42 = 1;
					iLocal_47 = 1;
					iLocal_56 = 1;
					iLocal_54 = 1;
					func_572(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4", true);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_240.f_0, false))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_240.f_0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_429[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_271.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_234);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_234.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_236);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_236.f_1);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_251.f_0 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_251[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_251[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_252[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_252[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_252[iVar0 /*15*/].f_1);
					}
					iVar0++;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_799))
				{
					iLocal_799 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
					ENTITY::SET_ENTITY_PROOFS(iLocal_799, true, true, true, true, true, false, false, false);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_799, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_799, true);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_799, 12, 0);
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_799, -20f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_799, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_799, Local_240.f_3, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_799, Local_240.f_6);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_799, 5f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_799);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_799, -1);
					fLocal_541 = -20f;
				}
				iLocal_517++;
			}
			break;
		case 1:
			HUD::SET_TEXT_SCALE(0f, 1.5f);
			HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
			HUD::SET_TEXT_CENTRE(false);
			HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
			HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
			__LIB_3__::func_42(0.5f, 0.2f, "NUMBER", SYSTEM::ROUND(ENTITY::GET_ENTITY_SPEED(iLocal_799)), 0);
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/))
			{
				if (fLocal_541 < 0f)
				{
					fLocal_541 = (fLocal_541 + (MISC::GET_FRAME_TIME() * 2f));
					if (fLocal_541 >= 0f)
					{
						fLocal_541 = 0f;
					}
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_799, fLocal_541);
				}
			}
			else if (fLocal_541 > -20f)
			{
				fLocal_541 = (fLocal_541 - MISC::GET_FRAME_TIME());
				if (fLocal_541 <= -20f)
				{
					fLocal_541 = -20f;
				}
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_799, fLocal_541);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_799, false))
			{
				VEHICLE::SET_VEHICLE_STRONG(iLocal_799, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_799, true);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_799);
				ENTITY::SET_ENTITY_HEALTH(iLocal_799, 10000, 0);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_799, 10000f);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_799, 10000f);
				ENTITY::SET_ENTITY_PROOFS(iLocal_799, true, true, true, true, true, false, false, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_240.f_0, false))
			{
				VEHICLE::SET_VEHICLE_FIXED(Local_240.f_0);
				func_544(Local_240.f_0, 1f);
				func_727();
				func_726();
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(Local_240.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(joaat("schafter2"));
			STREAMING::REQUEST_MODEL(joaat("manana"));
			func_576();
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4b");
			if (((((STREAMING::HAS_MODEL_LOADED(Local_240.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && func_575()) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4b"))
			{
				Local_240.f_0 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
				VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_240.f_0, true, true, false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_240.f_0, false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_240.f_0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_240.f_0, 3);
				VEHICLE::SET_VEHICLE_COLOURS(Local_240.f_0, 27, 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_240.f_0, false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_240.f_0, false);
				ENTITY::SET_ENTITY_COLLISION(Local_240.f_0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_240.f_0, true, false);
				Local_240.f_2 = __LIB_0__::func_639(Local_240.f_0, 0, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4b", true);
				iLocal_799 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_799, true, true, true, true, true, false, false, false);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_799, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_799, true);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_799, 12, 0);
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_799, -25f);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_799, 1, "lkfamily4", true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_429[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_271.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_234);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_234.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_236);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_236.f_1);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_251.f_0 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_251[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_251[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_252[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_252[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_252[iVar0 /*15*/].f_1);
					}
					iVar0++;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_799))
				{
					iLocal_799 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
					ENTITY::SET_ENTITY_PROOFS(iLocal_799, true, true, true, true, true, false, false, false);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_799, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_799, true);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_799, 12, 0);
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_799, -25f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_799, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_799, Local_240.f_3, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_799, Local_240.f_6);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_799, 5f);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_799);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_799, -1);
				}
				iLocal_517++;
			}
			break;
		case 3:
			break;
		case 4:
			STREAMING::REQUEST_MODEL(Local_240.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(joaat("schafter2"));
			STREAMING::REQUEST_MODEL(joaat("manana"));
			func_576();
			if ((((STREAMING::HAS_MODEL_LOADED(Local_240.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("manana"))) && func_575())
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
				{
					Local_240.f_0 = VEHICLE::CREATE_VEHICLE(Local_240.f_1, Local_240.f_3, Local_240.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_240.f_0, true, true, false);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_240.f_0, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_240.f_0, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_240.f_0, 3);
					VEHICLE::SET_VEHICLE_COLOURS(Local_240.f_0, 27, 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_240.f_0, false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_240.f_0, false);
					ENTITY::SET_ENTITY_COLLISION(Local_240.f_0, false, false);
					ENTITY::SET_ENTITY_VISIBLE(Local_240.f_0, true, false);
					Local_240.f_2 = __LIB_0__::func_639(Local_240.f_0, 0, 0);
					func_574("lkfamily4", 1, 1, 1);
					func_573();
					fLocal_93 = 200f;
					iLocal_42 = 1;
					iLocal_47 = 1;
					iLocal_56 = 1;
					iLocal_54 = 1;
					func_572(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4", true);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_240.f_0, false))
				{
					VEHICLE::SET_VEHICLE_FIXED(Local_240.f_0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_429[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_271.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_234);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_234.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_236);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_236.f_1);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_251.f_0 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_251[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_251[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_252[iVar0 /*15*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_252[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_252[iVar0 /*15*/].f_1);
					}
					iVar0++;
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -234.7623f, -2046.0051f, 26.7555f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 216.8192f);
				iLocal_517++;
			}
			break;
		case 5:
			func_544(Local_240.f_0, 1f);
			break;
	}
}

void func_726()//Position - 0x8C187
{
	switch (iLocal_497)
	{
		case 0:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 142000f)
			{
				STREAMING::REQUEST_MODEL(joaat("towtruck"));
				STREAMING::REQUEST_MODEL(joaat("schafter2"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("schafter2"), true);
				if (STREAMING::HAS_MODEL_LOADED(joaat("towtruck")) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2")))
				{
					iLocal_566[0] = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), 690.676f, -380.5773f, 39.6706f, 301.5845f, true, true, false);
					iLocal_566[1] = VEHICLE::CREATE_VEHICLE(joaat("schafter2"), 685.2643f, -384.7363f, 39.7185f, 312.2964f, true, true, false);
					iLocal_497++;
				}
			}
			break;
		case 1:
			break;
	}
}

void func_727()//Position - 0x8C24D
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_161 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_236.f_0, iLocal_161[iVar0]))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_161[iVar0], 786603);
						__LIB_17__::func_484(iLocal_161[iVar0]);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_729()//Position - 0x8C2DE
{
	switch (iLocal_503)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkfamily4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(205, "lkfamily4");
			STREAMING::REQUEST_MODEL(Local_236.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
			STREAMING::REQUEST_MODEL(Local_234.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
			STREAMING::REQUEST_MODEL(joaat("premier"));
			STREAMING::REQUEST_MODEL(joaat("sentinel"));
			STREAMING::REQUEST_MODEL(Local_240.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
			while ((((((((((!STREAMING::HAS_MODEL_LOADED(Local_236.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_234.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("premier"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(Local_240.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkfamily4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, "lkfamily4"))
			{
				SYSTEM::WAIT(0);
			}
			Local_234.f_0 = VEHICLE::CREATE_VEHICLE(Local_234.f_1, -57.6468f, -547.713f, 39.0136f, 341.9843f, true, true, false);
			VEHICLE::SET_VEHICLE_STRONG(Local_234.f_0, true);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_234.f_0, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_234.f_0, true, true, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_234.f_0, false);
			VEHICLE::SET_VEHICLE_COLOURS(Local_234.f_0, 73, 0);
			Local_236.f_0 = VEHICLE::CREATE_VEHICLE(Local_236.f_1, -47.6468f, -547.713f, 39.0136f, 341.9843f, true, true, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, false);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_234.f_0, Local_236.f_0, 1f);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0, -1);
			STREAMING::LOAD_SCENE(-47.2755f, -515.6834f, 39.466f);
			iLocal_486 = MISC::GET_GAME_TIMER();
			while (!__LIB_0__::func_611(&iLocal_486, 5000))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_503++;
			break;
		case 1:
			func_730();
			break;
		case 2:
			break;
	}
}

int func_730()//Position - 0x8C51B
{
	switch (iLocal_494)
	{
		case 0:
			iLocal_554 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -22.708345f, -451.57278f, 41.743435f, -1.770246f, 7.460166f, 144.97949f, 32.98425f, false, 2);
			iLocal_555 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -16.802435f, -433.53812f, 41.621296f, 4.556459f, 7.441601f, 142.01479f, 32.98425f, false, 2);
			iLocal_560 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_560, Local_234.f_0, 6.18f, 2.5f, 0.49f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_560, Local_234.f_0, -0.8f, -2.2f, 0.6f, true);
			CAM::SET_CAM_FOV(iLocal_560, 40f);
			iLocal_561 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_561, Local_234.f_0, 6.18f, -0.52f, 0.23f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_561, Local_234.f_0, -0.8f, -2.2f, 0.6f, true);
			CAM::SET_CAM_FOV(iLocal_561, 37.7f);
			iLocal_556 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -20.613693f, -440.84604f, 39.883686f, 0.674877f, 3.426711f, -0.729025f, 33.3f, false, 2);
			iLocal_557 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -40.991886f, -441.0197f, 40.563812f, 0.40158f, 6.06467f, -74.57228f, 30.671715f, false, 2);
			iLocal_558 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -39.75343f, -441.03336f, 40.007267f, 2.512532f, 6.064665f, -110.036415f, 27.355047f, false, 2);
			iLocal_559 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -42.095036f, -458.75922f, 39.879986f, 4.366019f, 5.12976f, -38.7072f, 26.954762f, false, 2);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 201, "lkfamily4", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 7500f);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 202, "lkfamily4", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 7395f);
			SYSTEM::WAIT(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_240.f_0, false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0);
				ENTITY::SET_ENTITY_VISIBLE(Local_240.f_0, false, false);
				ENTITY::SET_ENTITY_COLLISION(Local_240.f_0, false, false);
				ENTITY::SET_ENTITY_PROOFS(Local_240.f_0, true, true, true, true, true, false, false, false);
			}
			func_6(1, 1);
			PATHFIND::SET_ROADS_IN_AREA(-106.62f, -88.47f, 100f, 45f, -780f, -100f, false, true);
			MISC::CLEAR_AREA(-47.2755f, -515.6834f, 39.466f, 200f, true, false, false, false);
			CAM::SET_CAM_ACTIVE(iLocal_560, true);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_561, iLocal_560, 1500, 0, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fam4_trailer_sparks", Local_234.f_0, 0f, -1.2f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			iLocal_486 = MISC::GET_GAME_TIMER();
			iLocal_475 = 1;
			iLocal_494++;
			break;
		case 1:
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fam4_trailer_sparks", Local_234.f_0, 0f, -1.2f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			iLocal_494++;
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_234.f_0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_234.f_0) > 8500f)
					{
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, -100000f);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, -100000f);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 7650f);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 7545f);
						SYSTEM::WAIT(0);
						CAM::SET_CAM_ACTIVE(iLocal_560, false);
						CAM::SET_CAM_ACTIVE(iLocal_561, false);
						CAM::SET_CAM_ACTIVE(iLocal_554, true);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_555, iLocal_554, 2200, 0, 1);
						iLocal_494++;
					}
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_234.f_0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_234.f_0) > 9000f)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_236.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0);
						}
						ENTITY::DETACH_ENTITY(Local_236.f_0, false, true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 203, "lkfamily4", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 1800f);
						if (STREAMING::HAS_MODEL_LOADED(joaat("sentinel")))
						{
							iLocal_571[0] = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), -9.6958f, -361.1301f, 40.1008f, 0f, true, true, false);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_571[0], 204, "lkfamily4", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_571[0], 6000f);
						}
						if (STREAMING::HAS_MODEL_LOADED(joaat("premier")))
						{
							iLocal_571[1] = VEHICLE::CREATE_VEHICLE(joaat("premier"), -40.6385f, -497.1492f, 39.9915f, 0f, true, true, false);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_571[1], 205, "lkfamily4", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_571[1], 4250f);
						}
						SYSTEM::WAIT(0);
						MISC::SET_TIME_SCALE(0.5f);
						CAM::SET_CAM_ACTIVE(iLocal_554, false);
						CAM::SET_CAM_ACTIVE(iLocal_555, false);
						CAM::SET_CAM_ACTIVE(iLocal_556, true);
						STREAMING::REQUEST_MODEL(joaat("taco"));
						STREAMING::REQUEST_MODEL(joaat("schafter2"));
						iLocal_494++;
					}
				}
			}
			break;
		case 4:
			func_732();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_236.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_236.f_0) > 600f)
				{
					CAM::SET_CAM_ACTIVE(iLocal_556, false);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_234.f_0))
					{
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0);
					}
					MISC::SET_TIME_SCALE(0.6f);
					CAM::SET_CAM_ACTIVE(iLocal_557, true);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558, iLocal_557, 3000, 0, 1);
					iLocal_494++;
				}
			}
			break;
		case 5:
			func_732();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_236.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_236.f_0) > 1258f)
				{
					CAM::SET_CAM_ACTIVE(iLocal_557, false);
					CAM::SET_CAM_ACTIVE(iLocal_558, false);
					CAM::SET_CAM_ACTIVE(iLocal_559, true);
					iLocal_494++;
				}
			}
			break;
		case 6:
			func_732();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_236.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_236.f_0) > 2000f)
				{
					PATHFIND::SET_ROADS_IN_AREA(-106.62f, -88.47f, 100f, 45f, -780f, -100f, true, true);
					func_574("lkfamily4", 1, 1, 1);
					func_573();
					fLocal_93 = 200f;
					func_731(127000);
					iLocal_56 = 1;
					iLocal_54 = 1;
					func_572(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4", true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_234.f_0))
						{
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, -100000f);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(201, "lkfamily4") - 1500f));
						}
					}
					func_544(Local_240.f_0, 1f);
					SYSTEM::WAIT(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_240.f_0, false))
					{
						func_570(Local_240.f_0, 133000f);
						func_544(Local_240.f_0, 1f);
						ENTITY::SET_ENTITY_VISIBLE(Local_240.f_0, true, false);
						ENTITY::SET_ENTITY_COLLISION(Local_240.f_0, true, false);
						ENTITY::SET_ENTITY_PROOFS(Local_240.f_0, false, false, false, false, false, false, false, false);
					}
					MISC::SET_TIME_SCALE(1f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_236.f_0, false))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_236);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_236.f_1);
					__LIB_17__::func_195(1, 1, 0, 0, 0, 3000, 1);
					iLocal_475 = 0;
					iLocal_494++;
					return 1;
				}
			}
			break;
		case 7:
			break;
		case 22:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
			{
			}
			MISC::CLEAR_AREA(-57.6468f, -547.713f, 39.0136f, 100f, true, false, false, false);
			break;
	}
	return 0;
}

void func_731(int iParam0)//Position - 0x8CC4F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 94)
	{
		if (fLocal_75[iVar0] < IntToFloat(iParam0))
		{
			iLocal_106[iVar0] = 99;
		}
		iVar0++;
	}
}

void func_732()//Position - 0x8CC84
{
	int iVar0;
	iVar0 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_236.f_0, false))
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_571 - 1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_571[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_571[iVar0]))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_236.f_0, iLocal_571[iVar0]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_571[iVar0]);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_734()//Position - 0x8CCF1
{
	switch (iLocal_501)
	{
		case 0:
			func_478();
			if (__LIB_0__::func_90())
			{
				__LIB_16__::func_318(&Local_752, 1, 0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_240.f_0, 0f);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_429[0], "Michael", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_262.f_0, "Lazlow", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_240.f_0, "Lazlows_car", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_234.f_0, "family_4_truck", 1, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_236.f_0, "Family_4_trailer", 1, 0, 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Family_4_trailer", 3, Local_236.f_1, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lazlow_Jeans", 2, Local_407.f_2, 0);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(256);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_501++;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				MISC::CLEAR_AREA(1059.502f, -291.9928f, 49.4891f, 1000f, true, false, false, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_240.f_0, 1);
				VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_240.f_0, true);
				iLocal_501++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_407.f_2)))
					{
						Local_407.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_407.f_2));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0)))
					{
						__LIB_16__::func_896(&iLocal_429, 0);
						__LIB_17__::func_203(&iLocal_429, 1, 0, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					if (__LIB_14__::func_466() == 2)
					{
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iLocal_429[0]);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iLocal_429[0]);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_501++;
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_0))
				{
					PED::DELETE_PED(&Local_262);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_407.f_0))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_407);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_240);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[2]))
				{
					PED::DELETE_PED(&(iLocal_429[2]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_236);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_234);
				}
				__LIB_17__::func_426(&Local_234);
				__LIB_17__::func_195(0, 0, 0, 0, 0, 3000, 1);
				RECORDING::REPLAY_STOP_EVENT();
				func_735();
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_407.f_2)))
				{
					Local_407.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow_Jeans", Local_407.f_2));
				}
			}
			else
			{
				__LIB_16__::func_896(&iLocal_429, 0);
				__LIB_17__::func_203(&iLocal_429, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_262.f_0))
				{
					PED::DELETE_PED(&Local_262);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_407.f_0))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_407);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_240);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[2]))
				{
					PED::DELETE_PED(&(iLocal_429[2]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_234);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_236);
				}
				__LIB_17__::func_426(&Local_234);
				func_539(1, 0, 0, 1);
				RECORDING::REPLAY_STOP_EVENT();
				func_735();
			}
			break;
	}
}

void func_735()//Position - 0x8D061
{
	__LIB_0__::func_526(0, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
	__LIB_16__::func_874(2, 0);
	func_1002();
}

void func_762()//Position - 0x8D86D
{
	__LIB_0__::func_467();
	if (__LIB_0__::func_645(1000))
	{
		iLocal_511 = 22;
	}
	func_478();
	switch (iLocal_511)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_234.f_0);
			MISC::CLEAR_AREA(1067.9988f, -279.0626f, 50.3196f, 1000f, true, false, false, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0, -1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_429[0]);
			PED::SET_PED_INTO_VEHICLE(iLocal_429[0], Local_234.f_0, 0);
			switch (func_764())
			{
				case 0:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 401, "lkfamily4", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 10500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_234.f_0, true);
					if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_236.f_0, false))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 402, "lkfamily4", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 10500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_236.f_0, true);
						}
					}
					Local_234.f_13 = 401;
					break;
				case 1:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 403, "lkfamily4", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 9500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_234.f_0, true);
					if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_236.f_0, false))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 404, "lkfamily4", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 9500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_236.f_0, true);
						}
					}
					Local_234.f_13 = 403;
					break;
				case 2:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 405, "lkfamily4", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 9500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_234.f_0, true);
					if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_236.f_0, false))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 406, "lkfamily4", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 9500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_236.f_0, true);
						}
					}
					Local_234.f_13 = 405;
					break;
				default:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 401, "lkfamily4", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0, 10500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_234.f_0, true);
					if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_236.f_0, false))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 402, "lkfamily4", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0, 10500f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_236.f_0, true);
						}
					}
					Local_234.f_13 = 401;
					break;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_240.f_0, 1000f, true);
			ENTITY::SET_ENTITY_COORDS(Local_240.f_0, 1067.9988f, -279.0626f, 50.3196f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_240.f_0, 334.6674f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_240.f_0, 5f);
			VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_240.f_0, true);
			__LIB_17__::func_189(&Local_240);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_262.f_0);
			Local_543 = { ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true) };
			Local_544 = { ENTITY::GET_ENTITY_ROTATION(Local_240.f_0, 2) };
			Local_262.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_543, Local_544, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_262.f_0, Local_262.f_11, "missfam4mcs3", "loop_lazlow", 1000f, -8f, 0, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_262.f_11, true);
			TASK::TASK_LOOK_AT_ENTITY(Local_262.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			iLocal_554 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1070.3999f, -276.6132f, 52.565422f, -7.739586f, 2.908233f, 130.96634f, 31.374056f, false, 2);
			iLocal_555 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1070.4619f, -276.5903f, 52.109283f, -7.739586f, 2.908233f, 130.96634f, 28.281126f, false, 2);
			iLocal_556 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1054.2411f, -292.12994f, 49.776012f, 7.170268f, 2.907489f, -50.98007f, 28.5157f, false, 2);
			iLocal_557 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 1054.5679f, -291.85138f, 49.748013f, 7.170268f, 2.907489f, -50.12729f, 26.94595f, false, 2);
			CAM::SET_CAM_ACTIVE(iLocal_554, true);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_555, iLocal_554, 5000, 0, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_511++;
			break;
		case 1:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_234.f_0) > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_234.f_13, "lkfamily4") - 200f))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
				TASK::TASK_LEAVE_VEHICLE(0, Local_234.f_0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1067.9988f, -279.0626f, 50.3196f, 1f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_774);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
				TASK::TASK_PAUSE(0, 200);
				TASK::TASK_LEAVE_VEHICLE(0, Local_234.f_0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1067.9988f, -279.0626f, 50.3196f, 1f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
				iLocal_486 = MISC::GET_GAME_TIMER();
				iLocal_511++;
			}
			break;
		case 2:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_555))
			{
				CAM::SET_CAM_ACTIVE(iLocal_554, false);
				CAM::SET_CAM_ACTIVE(iLocal_555, false);
				ENTITY::SET_ENTITY_COORDS(Local_234.f_0, 1057.25f, -294.328f, 50.4676f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_234.f_0, 327.89185f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_234.f_0, 5f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_234.f_0, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1055.86f, -292.17f, 49.4391f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 316.7899f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 1066.7f, -274.9f, 50.3196f, 1f, -1, 40000f, 0.5f);
				CAM::SET_CAM_ACTIVE(iLocal_557, true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_557, iLocal_556, 3000, 0, 1);
				iLocal_511++;
			}
			break;
		case 3:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_557))
			{
				__LIB_17__::func_426(&Local_240);
				ENTITY::FREEZE_ENTITY_POSITION(Local_234.f_0, false);
				iLocal_223 = 9;
			}
			break;
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				__LIB_17__::func_426(&Local_240);
				ENTITY::FREEZE_ENTITY_POSITION(Local_234.f_0, false);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_234.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_234.f_0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_236.f_0, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_236.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_236.f_0);
						}
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_234.f_0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(401, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(401, "lkfamily4") - 50f), "lkfamily4"), true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(Local_234.f_0, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(401, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(401, "lkfamily4") - 50f), "lkfamily4"), 2, true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_236.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_236.f_0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(402, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(402, "lkfamily4") - 50f), "lkfamily4") + Vector(10f, 0f, 0f), true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_236.f_0, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(402, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(402, "lkfamily4") - 50f), "lkfamily4"), 2, true);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_234.f_0, Local_236.f_0, 1f);
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_429[0]);
				RECORDING::REPLAY_STOP_EVENT();
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_223 = 9;
			}
			break;
	}
}

int func_764()//Position - 0x8E01F
{
	return iLocal_529;
}

int func_768()//Position - 0x8E0AE
{
	func_833();
	func_824();
	func_823();
	func_813();
	func_812();
	func_787();
	func_786();
	func_785();
	func_784();
	func_778();
	func_777();
	func_770();
	func_769();
	return 0;
}

void func_769()//Position - 0x8E0EC
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 180f)
	{
		__LIB_0__::func_630(230);
	}
}

int func_770()//Position - 0x8E119
{
	if (iLocal_512 > 0)
	{
		func_776();
	}
	switch (iLocal_512)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_262.f_0, 1063.57f, -284.17f, 50.6f, 80f, 80f, 20f, false, true, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("missfam4mcs3");
				func_478();
				iLocal_512++;
			}
			break;
		case 1:
			func_824();
			func_478();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) + 5000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkfamily4")
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 80f)
					{
						__LIB_0__::func_429();
						__LIB_14__::func_654(&uLocal_575, "fam4aud", "FAM4_POW", 7, 0, 0);
						iLocal_512++;
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 80f)
			{
				__LIB_0__::func_429();
				__LIB_14__::func_654(&uLocal_575, "fam4aud", "FAM4_POW2", 7, 0, 0);
				iLocal_512++;
			}
			break;
		case 2:
			func_824();
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) + 100f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkfamily4")
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_240.f_0, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_240.f_0, false);
					iLocal_775 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam4_truck_vent", Local_240.f_0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
					iLocal_512++;
				}
			}
			else
			{
				iLocal_775 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam4_truck_vent", Local_240.f_0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				iLocal_512++;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) < 45.5f)
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_775))
				{
					iLocal_775 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_fam4_truck_vent", Local_240.f_0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				iLocal_512 = 3;
			}
			break;
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) < 40f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) < 40f)
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
				{
					__LIB_16__::func_318(&Local_752, 1, 0);
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_2"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_2");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FAM4_STOP_TRACK");
					__LIB_0__::func_213(Local_234.f_0, 7f, 1, 1056964608, 0, 1, 0);
					iLocal_512++;
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) < 15f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) < 17f)
				{
					if (func_71(0, 1, 0, 1))
					{
						MISC::SET_INSTANCE_PRIORITY_HINT(0);
						func_771(&Local_262, &Local_234);
						__LIB_16__::func_318(&Local_752, 1, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_2"))
						{
							AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_2");
						}
						AUDIO::TRIGGER_MUSIC_EVENT("FAM4_STOP_TRACK");
						iLocal_223 = 9;
						return 1;
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_213(Local_234.f_0, 7f, 1, 1056964608, 0, 1, 0))
			{
				func_71(0, 0, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1067.4547f, -279.304f, 50.2995f, 1f, -1, 0.2f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_774);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_486 = MISC::GET_GAME_TIMER();
				iLocal_484 = 1;
				iLocal_512++;
			}
			break;
		case 5:
			if (__LIB_0__::func_611(&iLocal_486, 3000))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 3);
				iLocal_223 = 9;
				return 1;
			}
			break;
	}
	return 0;
}

void func_771(int iParam0, int iParam1)//Position - 0x8E4F3
{
	func_772(iParam0);
	__LIB_17__::func_189(iParam1);
}

void func_772(var uParam0)//Position - 0x8E507
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_PROOFS(*uParam0, true, true, true, true, true, false, false, false);
		}
	}
}

void func_776()//Position - 0x8E732
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1025.122f, -337.243f, 47.967f, 1044.686f, -349.899f, 62f, 5f, false, true, 0))
	{
		iLocal_529 = 0;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1014.375f, -330.291f, 47.867f, 1023.359f, -336.103f, 62.067f, 5f, false, true, 0))
	{
		iLocal_529 = 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 992.965f, -316.44f, 47.867f, 1012.612f, -329.15f, 62.067f, 5f, false, true, 0))
	{
		iLocal_529 = 2;
	}
}

void func_777()//Position - 0x8E7D3
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_508)
	{
		case 0:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 45000f)
				{
					STREAMING::REQUEST_MODEL(joaat("freight"));
					iLocal_508++;
				}
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("freight")))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
				{
					iLocal_564[1] = VEHICLE::CREATE_MISSION_TRAIN(18, 534.5f, -946.8f, 26.5f, false, 0, 0);
					VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_564[1], 0f);
					VEHICLE::SET_TRAIN_SPEED(iLocal_564[1], 0f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_564[1], true, true, true, true, true, false, false, false);
					iLocal_564[2] = VEHICLE::CREATE_MISSION_TRAIN(18, 517.6304f, -1060.3722f, 26.7011f, false, 0, 0);
					VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_564[2], 0f);
					VEHICLE::SET_TRAIN_SPEED(iLocal_564[2], 0f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_564[2], true, true, true, true, true, false, false, false);
					iLocal_564[3] = VEHICLE::CREATE_VEHICLE(joaat("freight"), 522.3235f, -1064.8285f, 27.003f, 184f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_564[3], true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_564[3], true, true, true, true, true, false, false, false);
					iLocal_508++;
				}
			}
			break;
		case 2:
			iLocal_508++;
			break;
		case 3:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 65000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_564[1], false))
					{
						VEHICLE::START_VEHICLE_HORN(iLocal_564[1], 7000, 0, false);
						iLocal_508++;
					}
				}
			}
			break;
		case 4:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 82000f)
			{
				iVar0 = 1;
				while (iVar0 <= (iLocal_564 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_564[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_564[iVar0], false))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_564[iVar0], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 50f)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_564[iVar0]))
								{
									if (iVar0 != 3)
									{
										VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_564[iVar0]));
									}
									else
									{
										VEHICLE::DELETE_VEHICLE(&(iLocal_564[iVar0]));
									}
								}
							}
						}
					}
					iVar0++;
				}
			}
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_564[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_564[2])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_564[3]))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
				iLocal_508++;
			}
			break;
		case 5:
			break;
	}
}

void func_778()//Position - 0x8EA4F
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_236.f_0, false))
		{
			func_782();
		}
		else
		{
			func_780();
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_234.f_0))
			{
				func_782();
			}
			else if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_236.f_0)) < 300f)
			{
				iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(Local_236.f_0, true), 10f, 0, __LIB_15__::func_916());
				if (iVar0 != Local_240.f_0 && iVar0 != Local_234.f_0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_234.f_0, iVar0))
						{
							func_782();
						}
					}
				}
			}
		}
	}
}

void func_780()//Position - 0x8EAEC
{
	switch (iLocal_522)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -264.563f, -1828.329f, 27.333f, -238.324f, -1817.461f, 36.033f, 41f, false, true, 0))
					{
						__LIB_0__::func_151("family4_help_1", -1);
						iLocal_522++;
					}
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_782()//Position - 0x8EB87
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_236.f_0, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_234.f_0))
			{
				ENTITY::DETACH_ENTITY(Local_236.f_0, false, true);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_236.f_0, 3, 0f, -5f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_236.f_0, 5, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, true, false, true);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, true);
			}
		}
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "UNHITCH_TRAILER", Local_236.f_0, "FAM4_UNHITCH_TRAILER", false, 0);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_236);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_236.f_1);
		if (__LIB_0__::func_1("family4_help_1"))
		{
			HUD::CLEAR_HELP(true);
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_234.f_0, -10f);
		__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_DIT2", 6, 0, 0, 0);
		Global_96892 = 1;
		__LIB_0__::func_630(237);
	}
}

void func_784()//Position - 0x8EC61
{
	switch (iLocal_489)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_785()//Position - 0x8EC8C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_565))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_565, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_565, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 150f)
			{
				switch (iLocal_496)
				{
					case 0:
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -216.64f, -2023.141f, 26.651f, -176.791f, -2037.643f, 30.896f, 45.5f, false, true, 0))
							{
								Local_334.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_565, 26, Local_334.f_1, -1, true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_334.f_0, true);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_565, 1.2f);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_565, 112, "lkfamily4", 2 | 4, 0, 786603);
								iLocal_496++;
							}
						}
						break;
					case 1:
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_565, Local_234.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_565);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_565);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_334);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_567);
							iLocal_496++;
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_565);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_334.f_1);
			}
		}
	}
}

void func_786()//Position - 0x8EDB6
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_499)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -219.6464f, -2037.822f, 26.6207f, true) > 70f)
			{
				iVar0 = 0;
				while (iVar0 <= (Local_302.f_0 - 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_302[iVar0 /*20*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_302[iVar0 /*20*/].f_1);
					ENTITY::REMOVE_FORCED_OBJECT(Local_302[iVar0 /*20*/].f_3, 0.5f, joaat("v_ilev_chair02_ped"));
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (Local_251.f_0 - 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_251[iVar0 /*15*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251[iVar0 /*15*/].f_1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_252[iVar0 /*15*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_252[iVar0 /*15*/].f_1);
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_225.f_0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_225);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_225.f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_334.f_0))
				{
					PED::DELETE_PED(&Local_334);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_334.f_1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_565);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_567);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_568);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_569);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_570);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-365.5f, -2063.4f, 100f, -141.4f, -1837f, -100f, false, true);
				iLocal_499++;
			}
			break;
		case 1:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 83000f)
				{
					iVar0 = 0;
					while (iVar0 <= (iLocal_564 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_564[iVar0]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_564[iVar0]));
						}
						iVar0++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
					iLocal_499++;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_787()//Position - 0x8EF74
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_240.f_0, false))
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_552))
		{
			iLocal_552 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::SET_CAM_FOV(iLocal_552, 45f);
			iLocal_553 = CAM::CREATE_CAM("default_scripted_camera", false);
			CAM::SET_CAM_FOV(iLocal_553, 40f);
			CAM::SET_CAM_ACTIVE(iLocal_552, true);
			iLocal_471 = 0;
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) < 120f)
		{
			if (func_794(&Local_240))
			{
				if (!CAM::IS_CAM_RENDERING(iLocal_552) && !CAM::IS_CAM_RENDERING(iLocal_553))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_234.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_240.f_0, -10f, -22f, -10f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_240.f_0, -0.4f, -22f, 10f), 55f, false, true, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_552, Local_240.f_0, -0.68f, 1.58f, 0.59f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_552, Local_240.f_0, 2.5f, -4.9f, 0.2f, true);
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_553, Local_240.f_0, -1.5f, 1.58f, 0.59f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_553, Local_234.f_0, 0f, 0f, 0f, true);
						TASK::TASK_LOOK_AT_COORD(Local_262.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_240.f_0, -1.5f, -10f, 0.7f), 2000, 0, 2);
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_234.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_240.f_0, 1.4f, -22f, -10f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_240.f_0, 10f, -22f, 10f), 55f, false, true, 0))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_552, Local_240.f_0, 0.68f, 1.58f, 0.59f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_552, Local_240.f_0, -2.1f, -4.9f, 0.2f, true);
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_553, Local_240.f_0, 1.5f, 1.58f, 0.59f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_553, Local_234.f_0, 0f, 0f, 0f, true);
						TASK::TASK_LOOK_AT_COORD(Local_262.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_240.f_0, 1.5f, -10f, 0.7f), 2000, 0, 2);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_552, Local_240.f_0, -0.68f, 1.58f, 0.59f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_552, Local_240.f_0, 2.5f, -4.9f, 0.2f, true);
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_553, Local_240.f_0, -1.5f, 1.58f, 0.59f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_553, Local_234.f_0, 0f, 0f, 0f, true);
						TASK::TASK_LOOK_AT_COORD(Local_262.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_240.f_0, -1.5f, -10f, 0.7f), 2000, 0, 2);
					}
					func_791();
					__LIB_0__::func_429();
					iLocal_505 = 0;
					CAM::SET_CAM_ACTIVE(iLocal_552, true);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_553, iLocal_552, 2900, 0, 1);
					CAM::SHAKE_CAM(iLocal_552, "ROAD_VIBRATION_SHAKE", 0.2f);
					CAM::SHAKE_CAM(iLocal_553, "ROAD_VIBRATION_SHAKE", 0.2f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_471 = 1;
					iLocal_473 = 1;
					__LIB_0__::func_497(234, 1, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
					if (iLocal_536 < 8)
					{
						if (iLocal_505 == 0)
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "lazlo_chase", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 3);
								iLocal_536++;
								iLocal_505 = MISC::GET_GAME_TIMER();
							}
						}
						else if (__LIB_0__::func_611(&iLocal_505, 5500))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "lazlo_chase", 7, 0, 0, 0))
							{
								iLocal_536++;
								iLocal_505 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_CAMERA"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_CAMERA");
					}
				}
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				STREAMING::SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME();
			}
			else
			{
				func_788();
			}
		}
		else
		{
			func_788();
		}
	}
	else if (iLocal_472 || iLocal_473)
	{
		if (__LIB_0__::func_1("family4_help_0"))
		{
			HUD::CLEAR_HELP(true);
		}
		iLocal_472 = 0;
		iLocal_473 = 0;
	}
}

void func_788()//Position - 0x8F356
{
	if (CAM::IS_CAM_ACTIVE(iLocal_552))
	{
		CAM::SET_CAM_ACTIVE(iLocal_553, false);
		CAM::SET_CAM_ACTIVE(iLocal_552, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!PED::IS_PED_INJURED(Local_262.f_0))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_262.f_0);
		}
		__LIB_0__::func_429();
		iLocal_471 = 0;
		__LIB_0__::func_345(&uLocal_740, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_CAMERA"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_CAMERA");
		}
	}
}

void func_791()//Position - 0x8F547
{
	if (__LIB_0__::func_75())
	{
		if (!iLocal_476)
		{
			cLocal_788 = { __LIB_0__::func_486() };
			cLocal_792 = { __LIB_0__::func_485() };
			if (!MISC::ARE_STRINGS_EQUAL(&cLocal_788, "null") && !MISC::ARE_STRINGS_EQUAL(&cLocal_792, "null"))
			{
				iLocal_476 = 1;
			}
		}
	}
}

int func_794(int iParam0)//Position - 0x8F668
{
	int iVar0;
	struct<3> Var1;
	if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
	{
		if (__LIB_13__::func_796(&uLocal_740, 1, 0, 1))
		{
			iLocal_471 = 1;
		}
		else
		{
			iLocal_471 = 0;
		}
	}
	if (iLocal_471)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_262.f_2) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				if (!__LIB_0__::func_77(0))
				{
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					if (((iVar0 == 0 || __LIB_16__::func_310(PLAYER::PLAYER_PED_ID(), 249.3368f, -622.8621f, 29.6647f, "dt1_rd1_tun")) || __LIB_16__::func_310(PLAYER::PLAYER_PED_ID(), 132.835f, -577.42664f, 33.010033f, "dt1_rd1_tun2")) || __LIB_16__::func_310(PLAYER::PLAYER_PED_ID(), 287.4f, -641.1f, 30.510033f, "dt1_rd1_tun3"))
					{
						Var1 = { ENTITY::GET_ENTITY_ROTATION(Local_234.f_0, 2) };
						if (MISC::ABSF(Var1.f_0) < 45f && MISC::ABSF(Var1.f_1) < 45f)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_812()//Position - 0x900D3
{
	struct<3> Var0;
	switch (iLocal_514)
	{
		case 0:
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_240.f_0) < 0.01f)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4mcs3"))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_262.f_0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_262.f_0, Local_240.f_0, false);
						Local_543 = { ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true) };
						Local_544 = { ENTITY::GET_ENTITY_ROTATION(Local_240.f_0, 2) };
						Local_262.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_543, Local_544, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_262.f_0, Local_262.f_11, "missfam4mcs3", "loop_intro_lazlow", 1000f, -8f, 1, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_240.f_0, Local_262.f_11, "loop_intro_car", "missfam4mcs3", 1000f, -8f, 0, 1000f);
						iLocal_514++;
					}
				}
			}
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_262.f_11))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_262.f_11) >= 1f)
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_240.f_0, 1000f, true);
					Local_543 = { ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true) };
					Local_544 = { ENTITY::GET_ENTITY_ROTATION(Local_240.f_0, 2) };
					Local_262.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_543, Local_544, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_262.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_262.f_0, Local_262.f_11, "missfam4mcs3", "loop_lazlow", 8f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_262.f_11, true);
					iLocal_514++;
				}
			}
			break;
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_262.f_11) && !PED::IS_PED_RAGDOLL(Local_262.f_0))
			{
				Local_262.f_6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam4mcs3", "loop_lazlow", Local_543, Local_544, 0f, 2) };
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missfam4mcs3", "loop_lazlow", Local_543, Local_544, 0f, 2) };
				Local_262.f_9 = Var0.f_2;
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_262.f_0, Local_262.f_6, 0.5f, 0.5f, 1.6f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_262.f_6, 1f, -1, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
					TASK::TASK_PERFORM_SEQUENCE(Local_262.f_0, iLocal_774);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_262.f_0, Local_262.f_11, "missfam4mcs3", "loop_lazlow", 8f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_262.f_11, true);
				}
			}
			break;
	}
}

void func_813()//Position - 0x9034D
{
	if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
		{
			switch (iLocal_498)
			{
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -187.434f, -1998.193f, 26.626f, -189.068f, -2012.098f, 33.626f, 5f, false, true, 0))
					{
						func_791();
						if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_LEF", 7, 0, 0, 0))
						{
							iLocal_498++;
						}
						else
						{
							__LIB_0__::func_429();
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 40000f)
					{
						iLocal_498++;
					}
					break;
				case 1:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 47150.92f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 150f || ENTITY::IS_ENTITY_ON_SCREEN(Local_240.f_0)) && !iLocal_471)
						{
							func_791();
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_LEF", 7, 0, 0, 0))
							{
								iLocal_498++;
							}
						}
						else
						{
							iLocal_498++;
						}
					}
					break;
				case 2:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 56283.16f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_240.f_0)) && !iLocal_471)
						{
							func_791();
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "fam4_tline", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
								AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TRACKS");
								iLocal_498++;
							}
						}
						else
						{
							iLocal_498++;
						}
					}
					break;
				case 3:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 70551.43f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_240.f_0)) && !iLocal_471)
						{
							func_791();
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_LEF", 7, 0, 0, 0))
							{
								iLocal_498++;
							}
						}
						else
						{
							iLocal_498++;
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_TRACKS"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TRACKS");
						}
					}
					break;
				case 4:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 90100.55f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 120f || (ENTITY::IS_ENTITY_ON_SCREEN(Local_240.f_0) && !iLocal_471))
						{
							func_791();
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_RIG", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
								iLocal_498++;
							}
						}
						else
						{
							iLocal_498++;
						}
					}
					break;
				case 5:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 102000.4f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_240.f_0)) && !iLocal_471)
						{
							func_791();
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_RIG", 7, 0, 0, 0))
							{
								iLocal_498++;
							}
						}
						else
						{
							iLocal_498++;
						}
					}
					break;
				case 6:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 126768f)
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 120f || ENTITY::IS_ENTITY_ON_SCREEN(Local_240.f_0)) && !iLocal_471)
						{
							func_791();
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_RIV", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
								iLocal_498++;
							}
						}
						else
						{
							iLocal_498++;
						}
					}
					break;
				case 7:
					break;
				case 22:
					break;
			}
			if (__LIB_0__::func_611(&iLocal_507, 5000))
			{
			}
			if (!iLocal_471)
			{
				switch (iLocal_509)
				{
					case 0:
						if (!__LIB_13__::func_755(&Local_752, 1))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "fam4_c0", 6, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 3);
								iLocal_509++;
							}
						}
						break;
					case 1:
						if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -165.656f, -1985.216f, 22.043f, -127.556f, -1985.216f, 27.643f, 4f, false, true, 0) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 20000f)
							{
								if (!__LIB_13__::func_755(&Local_752, 0))
								{
									if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_C1", 6, 0, 0, 0))
									{
										iLocal_509++;
									}
								}
							}
						}
						break;
					case 2:
						if (func_814(Local_262.f_2, &(iLocal_429[0])))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_WAY", 6, 0, 0, 0))
							{
								iLocal_509++;
							}
						}
						break;
					case 3:
						if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 25000f)
							{
								if (!__LIB_13__::func_755(&Local_752, 0))
								{
									if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_C2", 6, 0, 0, 0))
									{
										iLocal_509++;
									}
								}
							}
						}
						break;
					case 4:
						if (!__LIB_13__::func_755(&Local_752, 0))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_CU2", 6, 0, 0, 0))
							{
								iLocal_509++;
							}
						}
						break;
					case 5:
						iLocal_509++;
						break;
					case 6:
						if (func_814(Local_262.f_2, &(iLocal_429[0])))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 62000f)
							{
								if (!__LIB_13__::func_755(&Local_752, 0))
								{
									if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_C3", 6, 0, 0, 0))
									{
										iLocal_509++;
									}
								}
							}
						}
						break;
					case 7:
						if (func_814(Local_262.f_2, &(iLocal_429[0])))
						{
							iLocal_509++;
						}
						break;
					case 8:
						if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 74000f)
							{
								if (!__LIB_13__::func_755(&Local_752, 0))
								{
									if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_C4", 6, 0, 0, 0))
									{
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_1"))
										{
											AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
										}
										AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_2");
										iLocal_509++;
									}
								}
							}
						}
						break;
					case 9:
						if (func_814(Local_262.f_2, &(iLocal_429[0])))
						{
							iLocal_509++;
						}
						break;
					case 10:
						if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 103000f)
							{
								if (!__LIB_13__::func_755(&Local_752, 0))
								{
									if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_C5", 6, 0, 0, 0))
									{
										iLocal_509++;
									}
								}
							}
						}
						break;
					case 11:
						if (func_814(Local_262.f_2, &(iLocal_429[0])))
						{
							iLocal_509++;
						}
						break;
					case 12:
						if (func_814(Local_262.f_2, &(iLocal_429[0])))
						{
							iLocal_509++;
						}
						break;
					case 13:
						if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 131000f)
							{
								if (!__LIB_13__::func_755(&Local_752, 0))
								{
									if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_C7", 6, 0, 0, 0))
									{
										iLocal_509++;
									}
								}
							}
						}
						break;
					case 14:
						if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 140000f)
							{
								__LIB_0__::func_325();
								iLocal_509++;
							}
						}
						func_814(Local_262.f_2, &(iLocal_429[0]));
						break;
					case 15:
						break;
					}
				}
		}
	}
	else
	{
		func_814(Local_262.f_2, &(iLocal_429[0]));
		func_791();
	}
}

int func_814(int iParam0, var uParam1)//Position - 0x90B21
{
	if (func_819(iParam0, uParam1))
	{
		if (__LIB_0__::func_568())
		{
			__LIB_0__::func_620(0);
		}
		if (iLocal_476)
		{
			if (!__LIB_13__::func_755(&Local_752, 0))
			{
				if (__LIB_16__::func_936(&uLocal_575, "fam4aud", &cLocal_788, &cLocal_792, 6, 0, 0))
				{
					iLocal_476 = 0;
				}
			}
		}
		if (!__LIB_13__::func_755(&Local_752, 0) && !iLocal_476)
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_75())
	{
		if (!func_816())
		{
			if (!__LIB_0__::func_568())
			{
				__LIB_0__::func_620(1);
				if (__LIB_13__::func_810())
				{
					func_791();
				}
			}
		}
	}
	return 0;
}

int func_816()//Position - 0x90BDB
{
	var uVar0;
	if (__LIB_0__::func_75())
	{
		MemCopy(&uVar0, {__LIB_0__::func_486()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(&uVar0, "FAM4_POW") || MISC::ARE_STRINGS_EQUAL(&uVar0, "FAM4_POW2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_819(int iParam0, var uParam1)//Position - 0x90C78
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam1))
		{
			if (func_821(uParam1) || (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_FOOT(*uParam1)))
			{
				if (!__LIB_13__::func_810() && !__LIB_6__::func_181())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_821(var uParam0)//Position - 0x90CDA
{
	int iVar0;
	if (__LIB_16__::func_307(&iVar0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_823()//Position - 0x90D3B
{
	switch (iLocal_525)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 291.30655f, -653.2268f, 28.352633f, 297.3251f, -637.2277f, 35.392754f, 5.5f, false, true, 0))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TUNNEL");
				iLocal_525++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 130.12619f, -567.93396f, 31.0244f, 124.83349f, -583.8284f, 37.622894f, 3.25f, false, true, 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_TUNNEL"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_TUNNEL");
				}
				iLocal_525++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 722.70593f, -402.14215f, 35.358883f, 705.1086f, -412.5562f, 44.903564f, 9f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 730.1918f, -399.9188f, 35.37416f, 719.6653f, -400.79996f, 44.31248f, 4.25f, false, true, 0))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_JUMP");
				iLocal_486 = MISC::GET_GAME_TIMER();
				iLocal_525++;
			}
			break;
		case 3:
			Local_234.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_234.f_0, true) };
			if (((((Local_234.f_3.f_2 > 18f && Local_234.f_3.f_2 < 24f) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_234.f_0) > 0.5f) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_234.f_0)) || __LIB_0__::func_611(&iLocal_486, 4000)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 749.9376f, -418.8858f, 17.449747f, 765.3489f, -455.7631f, 28.3066f, 78.25f, false, true, 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_TRUCK_JUMP"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_JUMP");
				}
				iLocal_525++;
			}
			break;
		case 4:
			break;
	}
}

void func_824()//Position - 0x90F37
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_240.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
		{
			switch (iLocal_488)
			{
				case 0:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) < 12000f)
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_240.f_0))
						{
							Local_240.f_7 = 0.3f;
						}
						else
						{
							__LIB_32__::func_40(Local_240.f_0, PLAYER::PLAYER_PED_ID(), &(Local_240.f_7), 1f, 10f, 20f, 50f, 2f, 1f, 0.7f, 1);
						}
					}
					else
					{
						MISC::SET_INSTANCE_PRIORITY_HINT(2);
						iLocal_42 = 0;
						iLocal_47 = 0;
						__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, 10f, 20f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
						__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
						iLocal_488++;
					}
					func_544(Local_240.f_0, Local_240.f_7);
					break;
				case 1:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 43521.09f)
					{
						fLocal_537 = 10f;
						fLocal_538 = 20f;
						fLocal_539 = 50f;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						iLocal_488++;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, 10f, 20f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					break;
				case 2:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 52234.77f)
					{
						iLocal_488++;
					}
					fLocal_540 = 1.2f;
					fLocal_537 = (fLocal_537 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_537 > 20f)
					{
						fLocal_537 = 20f;
					}
					fLocal_538 = (fLocal_538 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_538 > 30f)
					{
						fLocal_538 = 30f;
					}
					fLocal_539 = (fLocal_539 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_539 > 60f)
					{
						fLocal_539 = 60f;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, fLocal_537, fLocal_538, fLocal_539, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, (0.01f * 0.5f));
					break;
				case 3:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 66924.33f)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						iLocal_488++;
					}
					fLocal_540 = 1.2f;
					fLocal_537 = (fLocal_537 - (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_537 < 10f)
					{
						fLocal_537 = 10f;
					}
					fLocal_538 = (fLocal_538 - (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_538 < 20f)
					{
						fLocal_538 = 20f;
					}
					fLocal_539 = (fLocal_539 - (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_539 < 50f)
					{
						fLocal_539 = 50f;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, fLocal_537, fLocal_538, fLocal_539, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					break;
				case 4:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 487.246f, -879.994f, 9.75f, 651.344f, -879.135f, 32.45f, 4f, false, true, 0))
					{
						__LIB_17__::func_789(4, "half way through truck chase", 1, 0, 0, 1);
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 76193.88f)
					{
						iLocal_488++;
					}
					fLocal_540 = 1.2f;
					fLocal_537 = (fLocal_537 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_537 > 20f)
					{
						fLocal_537 = 20f;
					}
					fLocal_538 = (fLocal_538 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_538 > 30f)
					{
						fLocal_538 = 30f;
					}
					fLocal_539 = (fLocal_539 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_539 > 60f)
					{
						fLocal_539 = 60f;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, fLocal_537, fLocal_538, fLocal_539, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					break;
				case 5:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 84967.06f)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						iLocal_488++;
					}
					fLocal_540 = 1.2f;
					fLocal_537 = (fLocal_537 - (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_537 < 10f)
					{
						fLocal_537 = 10f;
					}
					fLocal_538 = (fLocal_538 - (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_538 < 20f)
					{
						fLocal_538 = 20f;
					}
					fLocal_539 = (fLocal_539 - (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_539 < 50f)
					{
						fLocal_539 = 50f;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, fLocal_537, fLocal_538, fLocal_539, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					break;
				case 6:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 126768f)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						iLocal_488++;
					}
					fLocal_540 = 1.2f;
					fLocal_537 = (fLocal_537 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_537 > 20f)
					{
						fLocal_537 = 20f;
					}
					fLocal_538 = (fLocal_538 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_538 > 30f)
					{
						fLocal_538 = 30f;
					}
					fLocal_539 = (fLocal_539 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_539 > 60f)
					{
						fLocal_539 = 60f;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, fLocal_537, fLocal_538, fLocal_539, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					break;
				case 7:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 128070.6f)
					{
						iLocal_488++;
					}
					fLocal_540 = 5f;
					fLocal_537 = (fLocal_537 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_537 > 25f)
					{
						fLocal_537 = 25f;
					}
					fLocal_538 = (fLocal_538 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_538 > 35f)
					{
						fLocal_538 = 35f;
					}
					fLocal_539 = (fLocal_539 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_539 > 65f)
					{
						fLocal_539 = 65f;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, fLocal_537, fLocal_538, fLocal_539, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					break;
				case 8:
					fLocal_540 = 8f;
					fLocal_537 = (fLocal_537 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_537 > 180f)
					{
						fLocal_537 = 180f;
					}
					fLocal_538 = (fLocal_538 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_538 > 200f)
					{
						fLocal_538 = 200f;
					}
					fLocal_539 = (fLocal_539 + (MISC::GET_FRAME_TIME() * fLocal_540));
					if (fLocal_539 > 235f)
					{
						fLocal_539 = 235f;
					}
					__LIB_28__::func_223(&fLocal_542, &Local_234, Local_240.f_0, fLocal_537, fLocal_538, fLocal_539, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					__LIB_17__::func_85(&(Local_240.f_7), fLocal_542, 1008981770);
					func_544(Local_240.f_0, Local_240.f_7);
					break;
			}
			func_726();
			func_826();
			func_825();
		}
		else if (!bLocal_474 && !iLocal_475)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_240.f_0, true), true) < 15f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_566[0]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_566[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_566[1]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_566[1]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
			}
		}
	}
}

void func_825()//Position - 0x917BE
{
	if (__LIB_0__::func_611(&iLocal_527, 35000))
	{
		VEHICLE::START_VEHICLE_HORN(Local_240.f_0, 2500, 0, false);
		iLocal_527 = MISC::GET_GAME_TIMER();
	}
}

void func_826()//Position - 0x917E7
{
	switch (iLocal_506)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[1], false))
				{
					iLocal_572 = iLocal_161[1];
					iLocal_551 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[1], -1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_551))
					{
						iLocal_506++;
					}
				}
			}
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[1], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_572))
				{
					iLocal_506++;
				}
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_833()//Position - 0x91EB3
{
	if (!iLocal_484)
	{
		__LIB_32__::func_10(&Local_752, ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), 0.01f, 0.01f, 0.01f, 0, iLocal_429[0], Local_234.f_0, "", "family4_god_14", "", "family4_god_3", 0, 0, 1, -1);
		if (HUD::DOES_BLIP_EXIST(Local_752.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_752.f_5, 0);
			HUD::SET_BLIP_ROUTE(Local_752.f_5, false);
			if (!HUD::DOES_BLIP_EXIST(Local_262.f_2))
			{
				Local_262.f_2 = __LIB_0__::func_666(Local_262.f_0, 1, 145);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_262.f_2, "family4_god_17");
				HUD::SET_BLIP_SCALE(Local_262.f_2, 1f);
			}
			else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_262.f_0, Local_240.f_0))
			{
				HUD::SET_BLIP_SCALE(Local_262.f_2, 1f);
			}
			else
			{
				HUD::SET_BLIP_SCALE(Local_262.f_2, 0.5f);
			}
			__LIB_14__::func_655(Local_262.f_2, Local_262.f_0, 200f, 1061158912, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_262.f_2));
		}
	}
}

int func_871()//Position - 0x94755
{
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (func_886())
	{
		iLocal_223 = 7;
		return 1;
	}
	func_587();
	func_884(joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
	__LIB_0__::func_467();
	func_882();
	func_881();
	func_43();
	func_880();
	__LIB_0__::func_467();
	func_877();
	func_588();
	func_876();
	func_875();
	func_873();
	func_872();
	return 0;
}

void func_872()//Position - 0x947AE
{
	if (!func_584("family4_god_18"))
	{
		if (!__LIB_13__::func_755(&Local_752, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_234.f_0, Local_236.f_3, 2f, 2f, 2f, false, true, 0))
					{
						if ((!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_429[0], Local_234.f_0) && !PED::IS_PED_IN_VEHICLE(iLocal_429[0], Local_234.f_0, false)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_429[0]))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 4);
							__LIB_0__::func_229("family4_god_18", 7500, 1);
							func_581("family4_god_18", 1);
						}
					}
				}
			}
		}
	}
}

void func_873()//Position - 0x94856
{
	switch (iLocal_528)
	{
		case 0:
			AUDIO::SET_PED_WALLA_DENSITY(1f, 1f);
			iLocal_528++;
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -252.8894f, -1997.5737f, 29.1458f, 1.5f, 1.5f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_429[0], -252.8894f, -1997.5737f, 29.1458f, 1.5f, 1.5f, 1.5f, false, true, 0))
			{
				AUDIO::FORCE_PED_PANIC_WALLA();
				if (!PED::IS_PED_INJURED(Local_302[0 /*20*/]))
				{
					AUDIO::PLAY_PAIN(Local_302[0 /*20*/], 3, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_302[10 /*20*/]))
				{
					AUDIO::PLAY_PAIN(Local_302[10 /*20*/], 7, 0, 0);
				}
				iLocal_528++;
			}
			break;
		case 2:
			if (!func_874(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				AUDIO::SET_PED_WALLA_DENSITY(0f, 0f);
				iLocal_528++;
			}
			break;
	}
}

int func_874(int iParam0, struct<3> Param1)//Position - 0x94959
{
	int iVar0;
	int iVar1;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param1);
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (!iVar1 == 0)
	{
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_875()//Position - 0x94987
{
	switch (iLocal_524)
	{
		case 0:
			AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_FOOT");
			iLocal_524++;
			break;
		case 1:
			if (!func_874(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_FOOT"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_FOOT");
				}
				AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_FOOT_OUTSIDE");
				iLocal_524++;
			}
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_CHASE_FOOT_OUTSIDE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_CHASE_FOOT_OUTSIDE");
				}
				iLocal_524++;
			}
			break;
		case 3:
			break;
	}
}

void func_876()//Position - 0x94A3D
{
	switch (iLocal_513)
	{
		case 0:
			if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_GOHOME", 7, 0, 0, 0))
			{
				iLocal_513++;
			}
			break;
		case 1:
			if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_SHOUT", 7, 0, 0, 0))
			{
				iLocal_513++;
			}
			break;
		case 2:
			if (!__LIB_13__::func_755(&Local_752, 0))
			{
				__LIB_0__::func_229("family4_god_11", 7500, 1);
				iLocal_513++;
			}
			break;
		case 3:
			if (!func_874(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				if (bLocal_479)
				{
					if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_TOW", 7, 0, 0, 0))
					{
						iLocal_486 = MISC::GET_GAME_TIMER();
						iLocal_513++;
					}
				}
				else
				{
					iLocal_513++;
				}
			}
			break;
		case 4:
			if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_TRU", 7, 0, 0, 0))
			{
				iLocal_486 = MISC::GET_GAME_TIMER();
				iLocal_513++;
			}
			break;
		case 5:
			if (!__LIB_13__::func_755(&Local_752, 0))
			{
				__LIB_0__::func_229("family4_god_1", 7500, 1);
				iLocal_513++;
			}
			break;
		case 6:
			if (!__LIB_13__::func_755(&Local_752, 0))
			{
			}
			break;
	}
}

void func_877()//Position - 0x94B94
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
	{
		PED::SET_PED_RESET_FLAG(iLocal_429[0], 247, true);
		switch (iLocal_493)
		{
			case 0:
				iLocal_493++;
				break;
			case 1:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_429[0]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_429[0], -244.914f, -2007.479f, 23.691f, -244.325f, -2004.946f, 26.191f, 4.3f, false, true, 0) || !__LIB_17__::func_190(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f, "GtaMloRoom001"))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_429[0], 2f, false);
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_429[0], 3f, false);
					}
				}
				TASK::WAYPOINT_RECORDING_GET_COORD("family4_1", 55, &Var0);
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_429[0], Var0, 1.5f, 1.5f, 2f, false, true, 0))
				{
					if (func_874(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
						iLocal_493 = 2;
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_429[0], 170, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
						TASK::TASK_ENTER_VEHICLE(0, Local_234.f_0, -1, 0, 2f, 8, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
						iLocal_493 = 3;
					}
				}
				break;
			case 2:
				if (func_874(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
				{
					if (PED::IS_PED_FACING_PED(iLocal_429[0], PLAYER::PLAYER_PED_ID(), 45f))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4"))
						{
							if (__LIB_0__::func_611(&iLocal_486, 8000))
							{
								if (__LIB_17__::func_190(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f, "GtaMloRoom001"))
								{
									__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_LAG", 6, 0, 0, 0);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_PLAY_ANIM(0, "missfam4", "say_hurry_up_a_trevor", 8f, -4f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
								iLocal_486 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (__LIB_38__::func_170(iLocal_429[0], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), 1, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
					}
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_429[0], 170, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
					TASK::TASK_ENTER_VEHICLE(0, Local_234.f_0, -1, 0, 2f, 8, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
					iLocal_493 = 3;
				}
				break;
			case 3:
				if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_429[0], Local_234.f_0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_550))
					{
						iLocal_550 = __LIB_0__::func_639(iLocal_429[0], 0, 0);
					}
					if (__LIB_38__::func_170(iLocal_429[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
						TASK::TASK_ENTER_VEHICLE(0, Local_234.f_0, -1, 0, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_550))
				{
					HUD::REMOVE_BLIP(&iLocal_550);
				}
				break;
			case 4:
				break;
			}
	}
}

void func_880()//Position - 0x94F5E
{
	switch (iLocal_526)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_304.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_304.f_0))
				{
					STREAMING::REQUEST_ANIM_DICT("veh@truck@ds@idle_panic");
					if (PED::IS_PED_IN_VEHICLE(iLocal_429[0], Local_234.f_0, false))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("veh@truck@ds@idle_panic"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_304.f_0, "veh@truck@ds@idle_panic", "sit", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_304.f_0, "veh@truck@ds@idle_panic", "sit", 8f, -8f, -1, 1, 0f, false, false, false);
							}
						}
					}
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_304.f_0, Local_234.f_0))
					{
						PED::SET_PED_KEEP_TASK(Local_304.f_0, true);
						TASK::TASK_SMART_FLEE_PED(Local_304.f_0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
						iLocal_526 = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_16__::func_7(&uLocal_575, "fam4aud", "FAM4_NOTRU", 7, 0, 0, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_304);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_304.f_1);
				STREAMING::REMOVE_ANIM_DICT("veh@truck@ds@idle_panic");
				iLocal_526++;
			}
			break;
		case 2:
			break;
	}
}

void func_881()//Position - 0x9506D
{
	struct<3> Var0;
	int iVar1;
	switch (iLocal_491)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfamily4_fameshame");
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -252.8894f, -1997.5737f, 29.1458f, 1.5f, 1.5f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_429[0], -252.8894f, -1997.5737f, 29.1458f, 1.5f, 1.5f, 1.5f, false, true, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
				TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Run"), false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_0", 12, 10, -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
				TASK::TASK_PERFORM_SEQUENCE(Local_262.f_0, iLocal_774);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_262.f_0, false, false);
				iLocal_491++;
			}
			break;
		case 1:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_262.f_0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_262.f_0, 3f, false);
			}
			if (TASK::WAYPOINT_RECORDING_GET_COORD("family4_0", 48, &Var0))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_262.f_0, Var0, 1.5f, 1.5f, 1.6f, false, true, 0))
				{
					if (__LIB_38__::func_170(Local_262.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
					{
						if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("family4_0", ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), &iVar1))
						{
							iVar1++;
							if (iVar1 > 59)
							{
								iVar1 = 59;
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_0, true);
							TASK::CLEAR_PED_TASKS(Local_262.f_0);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_0", iVar1, 2, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
							TASK::TASK_PERFORM_SEQUENCE(Local_262.f_0, iLocal_774);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
						}
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfamily4_fameshame", "lazlow_getincar_l", -228.974f, -2048.902f, 27.12f, 0f, 0f, -122.436f, 0f, 2), 2f, -1, 40000f, 0.5f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
					TASK::TASK_PERFORM_SEQUENCE(Local_262.f_0, iLocal_774);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
					iLocal_491++;
				}
			}
			break;
		case 2:
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfamily4_fameshame") && ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_262.f_0, PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfamily4_fameshame", "lazlow_getincar_l", -228.974f, -2048.902f, 27.12f, 0f, 0f, -122.436f, 0f, 2), 0.5f, 0.5f, 1.6f, false, true, 0) || __LIB_38__::func_170(Local_262.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_262.f_0, Local_240.f_0, false);
					Local_543 = { -228.974f, -2048.902f, 27.12f };
					Local_544 = { 0f, 0f, -122.436f };
					Local_262.f_11 = PED::CREATE_SYNCHRONIZED_SCENE(Local_543, Local_544, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_262.f_0, Local_262.f_11, "missfamily4_fameshame", "lazlow_getincar_l", 4f, -8f, 1, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_240.f_0, Local_262.f_11, "lazlow_getincar_car", "missfamily4_fameshame", 1000f, -8f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_262.f_11, 1.15f);
					iLocal_491++;
				}
			}
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_262.f_11))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_262.f_11) > 0.93f)
				{
					HUD::SET_BLIP_SCALE(Local_262.f_2, 1f);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_240.f_0, 1000f, true);
					TASK::CLEAR_PED_TASKS(Local_262.f_0);
					PED::SET_PED_INTO_VEHICLE(Local_262.f_0, Local_240.f_0, -1);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_240.f_0, true);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
					STREAMING::SET_PED_POPULATION_BUDGET(2);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(false);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_574("lkfamily4", 1, 1, 1);
					func_573();
					fLocal_93 = 200f;
					iLocal_42 = 1;
					iLocal_47 = 1;
					iLocal_56 = 1;
					iLocal_54 = 1;
					func_572(1, 3, 11);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0, 1, "lkfamily4", true);
					func_544(Local_240.f_0, 0.7f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_240.f_0, true);
					ENTITY::SET_ENTITY_PROOFS(Local_240.f_0, false, true, false, true, true, false, false, false);
					func_543(joaat("sentinel"), 100);
					func_543(joaat("schafter2"), 100);
					func_543(joaat("taco"), 100);
					iLocal_491++;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_882()//Position - 0x95479
{
	if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 7000f)
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
					{
						__LIB_14__::func_655(Local_262.f_2, Local_262.f_0, 200f, 0.6f, 1);
					}
					else
					{
						__LIB_14__::func_655(Local_262.f_2, Local_262.f_0, 200f, 1061158912, 0);
					}
				}
			}
		}
	}
}

void func_884(int iParam0)//Position - 0x954F9
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0) == 1)
	{
		iVar4 = 28;
		__LIB_0__::func_603(&iVar0, &iVar1, &uVar2, &iVar3, 0);
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar3 = (iVar3 * -1);
		}
		if ((((((((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || iVar0 > iVar4) || iVar0 < (iVar4 * -1)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

int func_886()//Position - 0x95679
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_492)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.775f, -1999.858f, 25.003f, -248.012f, -1997.058f, 31.302f, 2f, false, true, 0))
			{
				PED::DELETE_PED(&Local_282);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_282.f_1);
				STREAMING::REMOVE_ANIM_DICT("missfam4leadinoutmcs2");
				PED::DELETE_PED(&Local_315);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_315.f_1);
				iVar0 = 0;
				while (iVar0 <= (Local_303.f_0 - 1))
				{
					PED::DELETE_PED(&(Local_303[iVar0 /*20*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_303[iVar0 /*20*/].f_1);
					iVar0++;
				}
				OBJECT::DELETE_OBJECT(&Local_341);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_341.f_2);
				OBJECT::DELETE_OBJECT(&Local_363);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_363.f_2);
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_772))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_772);
				}
				iLocal_492++;
			}
			func_578(1);
			break;
		case 1:
			func_578(1);
			if (!HUD::DOES_BLIP_EXIST(Local_234.f_2))
			{
				if (!func_874(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
					Local_234.f_2 = __LIB_0__::func_639(Local_234.f_0, 0, 0);
				}
			}
			func_824();
			if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
			{
				if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_429[0], Local_234.f_0)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
				{
					func_888();
					func_887();
					__LIB_12__::func_849(2, 0);
					AUDIO::START_AUDIO_SCENE("FAMILY_4_CHASE_TRUCK_1");
					AUDIO::TRIGGER_MUSIC_EVENT("FAM4_CHASE_START");
					if (HUD::DOES_BLIP_EXIST(iLocal_550))
					{
						HUD::REMOVE_BLIP(&iLocal_550);
					}
					if (HUD::DOES_BLIP_EXIST(Local_234.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_234.f_2));
					}
					__LIB_17__::func_789(3, "Chase truck", 1, 0, 0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_887()//Position - 0x9583D
{
	iLocal_476 = 0;
	StringCopy(&cLocal_788, "null", 24);
	StringCopy(&cLocal_792, "null", 24);
}

void func_888()//Position - 0x9585D
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_518)
	{
		iLocal_518[iVar0] = 0;
		iVar0++;
	}
}

int func_889()//Position - 0x95884
{
	int iVar0;
	iVar0 = 0;
	func_43();
	switch (iLocal_510)
	{
		case 0:
			if (func_890())
			{
				bLocal_479 = true;
			}
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "lazlow", 2, Local_262.f_1, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Tracy", 2, Local_282.f_1, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "judges_security", 2, Local_315.f_1, 0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
			RECORDING::REPLAY_START_EVENT(4);
			switch (__LIB_14__::func_466())
			{
				case 0:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429[2], true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_429[2], "trevor", 0, 0, 0);
					iLocal_482 = 1;
					CUTSCENE::START_CUTSCENE(1024);
					break;
				case 2:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429[0], true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_429[0], "michael", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					break;
			}
			iLocal_510++;
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA(-228.2306f, -2047.4192f, 26.6199f, 1000f, true, false, false, false);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				STREAMING::REMOVE_ANIM_DICT("missfam4");
				if (ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_240);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_240.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_234);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_234.f_1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_236);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_236.f_1);
				iVar0 = 0;
				while (iVar0 <= (Local_251.f_0 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_251[iVar0 /*15*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_251[iVar0 /*15*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_251[iVar0 /*15*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_252[iVar0 /*15*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_252[iVar0 /*15*/]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_252[iVar0 /*15*/].f_1);
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_304.f_0))
				{
					PED::DELETE_PED(&Local_304);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_565))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_565);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_567))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_567);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_568))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_568);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_569))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_569);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_570))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_570);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schafter2"));
				if (ENTITY::DOES_ENTITY_EXIST(Local_385.f_0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_385.f_2);
					OBJECT::DELETE_OBJECT(&Local_385);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
				{
					PED::DELETE_PED(&Local_310);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_310.f_1);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(501, "lkfamily4");
				VEHICLE::REMOVE_VEHICLE_RECORDING(502, "lkfamily4");
				__LIB_16__::func_318(&Local_752, 1, 0);
				iVar0 = 8;
				while (iVar0 <= 25)
				{
					if (!PED::IS_PED_INJURED(Local_302[iVar0 /*20*/]))
					{
						TASK::TASK_LOOK_AT_COORD(Local_302[iVar0 /*20*/], -249.6f, -2016.1f, 30.8f, 15000, 2048, 2);
					}
					iVar0++;
				}
				iLocal_510++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 40000)
					{
						func_616();
					}
					if (!func_584("FAM4_MISSION_START"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 125366)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_START");
							func_581("FAM4_MISSION_START", 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_262.f_1)))
					{
						Local_262.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_262.f_1));
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_282.f_1)))
					{
						Local_282.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_282.f_1));
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_315.f_1)))
					{
						Local_315.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_315.f_1));
					}
					switch (__LIB_14__::func_466())
					{
						case 0:
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -240.5416f, -2006.2936f, 23.6856f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 85.0646f);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)))
							{
								__LIB_16__::func_896(&iLocal_429, 2);
								__LIB_17__::func_203(&iLocal_429, 1, 1, 0);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.5457f, 23.6855f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							}
							break;
						case 2:
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0)))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_429[0], -240.5416f, -2006.2936f, 23.6856f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_429[0], 85.0646f);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
								PED::FORCE_PED_MOTION_STATE(iLocal_429[0], joaat("MotionState_Run"), false, 0, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[0], false, false);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.5457f, 23.6855f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							}
							break;
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("lazlow", Local_262.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_262.f_0))
						{
							ENTITY::SET_ENTITY_COORDS(Local_262.f_0, Local_262.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_262.f_0, Local_262.f_9);
							func_612(Local_262.f_0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_262.f_0, 3, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_0, true);
							Local_262.f_2 = __LIB_0__::func_666(Local_262.f_0, 1, 145);
							__LIB_0__::func_222(&uLocal_575, 5, Local_262.f_0, "lazlow", 0, 1);
							INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_262.f_0, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-239.1158f, -2005.1418f, 23.6855f, "v_stadium"), MISC::GET_HASH_KEY("GtaMloRoom001"));
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("judges_security", Local_315.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_315.f_0))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_315.f_0, 2, 0);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_315);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_315.f_1);
						}
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_510++;
				}
			}
			else if (func_615())
			{
				iLocal_486 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				func_580();
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_262.f_1)))
				{
					Local_262.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lazlow", Local_262.f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_282.f_1)))
				{
					Local_282.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", Local_282.f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_315.f_1)))
				{
					Local_315.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("judges_security", Local_315.f_1));
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("judges_security", Local_315.f_1))
				{
					if (!PED::IS_PED_INJURED(Local_315.f_0))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_315.f_0, 2, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_315);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_315.f_1);
					}
				}
			}
			else
			{
				func_616();
				STREAMING::NEW_LOAD_SCENE_START(-239.1602f, -2002.6151f, 23.6856f, __LIB_3__::func_80(0f, 0f, 145.8395f), 3f, 0);
				while (!func_615() || !STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (!func_615())
					{
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
					}
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (__LIB_14__::func_466() != 2)
				{
					__LIB_16__::func_896(&iLocal_429, 2);
					__LIB_17__::func_203(&iLocal_429, 1, 1, 0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -238.8316f, -2005.5457f, 23.6855f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 103.8542f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 5, 44, 13);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_774);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!PED::IS_PED_INJURED(iLocal_429[0]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_429[0], -240.5416f, -2006.2936f, 23.6856f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_429[0], 85.0646f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "family4_1", 8, 44, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_429[0], iLocal_774);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
					PED::FORCE_PED_MOTION_STATE(iLocal_429[0], joaat("MotionState_Run"), false, 0, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[0], false, false);
				}
				if (!PED::IS_PED_INJURED(Local_262.f_0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_262.f_0, Local_262.f_3, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_262.f_0, Local_262.f_9);
					func_612(Local_262.f_0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_262.f_0, 3, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262.f_0, true);
					Local_262.f_2 = __LIB_0__::func_666(Local_262.f_0, 1, 145);
					__LIB_0__::func_222(&uLocal_575, 5, Local_262.f_0, "lazlow", 0, 1);
				}
				iLocal_486 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				func_580();
				if (!PED::IS_PED_INJURED(Local_315.f_0))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_315.f_0, 2, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_315);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_315.f_1);
				}
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			break;
	}
	return 0;
}

int func_890()//Position - 0x9624A
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == 0)
				{
					__LIB_12__::func_899(iVar0, 145);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					VEHICLE::DELETE_VEHICLE(&iVar0);
					return 1;
				}
			}
			else
			{
				__LIB_12__::func_899(iVar0, 145);
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				}
				VEHICLE::DELETE_VEHICLE(&iVar0);
				return 1;
			}
		}
	}
	return 0;
}

void func_891()//Position - 0x962E8
{
	float fVar0;
	func_909();
	func_618();
	func_48(1);
	func_908();
	func_43();
	func_907();
	func_905();
	switch (iLocal_502)
	{
		case 0:
			func_903();
			fVar0 = func_902();
			switch (__LIB_14__::func_466())
			{
				case 0:
					func_900(&Local_752, -219.5123f, -2037.8512f, 26.9f, 0.01f, 0.01f, 2f, 1, iLocal_429[2], "family4_god_0", "family4_god_8", 1, 1, 1, -1);
					if (HUD::DOES_BLIP_EXIST(Local_752.f_5))
					{
						if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, fVar0, false, true, 0) || (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 6.7f, false, true, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_17__::func_191(PLAYER::PLAYER_PED_ID(), 328.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, false, true, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_17__::func_191(PLAYER::PLAYER_PED_ID(), 148.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, false, true, 0)))
						{
							if (__LIB_16__::func_307(&iLocal_573))
							{
								if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_573))
								{
									__LIB_0__::func_325();
									iLocal_504 = 5;
									__LIB_16__::func_318(&Local_752, 1, 0);
									iLocal_486 = 0;
									__LIB_0__::func_213(iLocal_573, 1093140480, 1, 1056964608, 0, 1, 0);
									__LIB_17__::func_789(1, "outside stadium", 0, 0, 0, 1);
									iLocal_502++;
								}
							}
							else
							{
								__LIB_0__::func_325();
								iLocal_504 = 5;
								__LIB_16__::func_318(&Local_752, 1, 0);
								iLocal_486 = 0;
								__LIB_17__::func_789(1, "outside stadium", 0, 0, 0, 1);
								iLocal_502 = 2;
							}
						}
					}
					break;
				case 2:
					func_900(&Local_752, -219.5123f, -2037.8512f, 26.9f, 0.01f, 0.01f, 2f, 1, iLocal_429[0], "family4_god_0", "family4_god_14", 1, 1, 1, -1);
					if (HUD::DOES_BLIP_EXIST(Local_752.f_5))
					{
						if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, fVar0, false, true, 0) || (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 6.7f, false, true, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_17__::func_191(PLAYER::PLAYER_PED_ID(), 328.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, false, true, 0))) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_17__::func_191(PLAYER::PLAYER_PED_ID(), 148.7722f, 15f)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -221.051f, -2039.714f, 26.62f, -217.358f, -2033.186f, 29.62f, 2f, false, true, 0)))
						{
							TASK::CLEAR_PED_TASKS(iLocal_429[0]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429[0], true);
							__LIB_16__::func_318(&Local_752, 0, 0);
							__LIB_0__::func_325();
							iLocal_504 = 5;
							if (__LIB_16__::func_307(&iLocal_573))
							{
								__LIB_0__::func_213(iLocal_573, 1093140480, 1, 1056964608, 0, 1, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_310.f_0, 8000, 2048, 2);
							}
							__LIB_17__::func_789(1, "outside stadium", 0, 0, 0, 1);
							iLocal_502++;
						}
					}
					break;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.824f, -2021.74f, 28.944f, -258.934f, -2033.879f, 31.958f, 4.5f, false, true, 0) || func_874(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f))
			{
				if (__LIB_0__::func_90())
				{
					if (func_71(0, 1, 1, 1))
					{
						__LIB_17__::func_789(1, "outside stadium", 0, 0, 0, 1);
						iLocal_223 = 4;
					}
				}
			}
			break;
		case 1:
			if (__LIB_16__::func_307(&iLocal_573))
			{
				if (__LIB_0__::func_213(iLocal_573, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					switch (__LIB_14__::func_466())
					{
						case 0:
							if (!PED::IS_PED_INJURED(iLocal_429[2]))
							{
								TASK::CLEAR_PED_TASKS(iLocal_429[2]);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_429[2], true);
								if (ENTITY::DOES_ENTITY_EXIST(Local_310.f_0))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_429[2], Local_310.f_0, 8000, 2048, 2);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
								TASK::TASK_PAUSE(0, 500);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_573, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -253.7119f, -2028.4642f, 28.9458f, 1f, -1, -1f, 0, 40000f);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_429[2], iLocal_774);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_429[2], 8000, 0, 2);
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_573, 0);
							break;
					}
					iLocal_502++;
				}
			}
			else
			{
				iLocal_502++;
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam4");
			func_903();
			switch (__LIB_14__::func_466())
			{
				case 0:
					func_898(&(iLocal_429[2]));
					func_897(&Local_752, -255.1339f, -2026.6791f, 28.9458f, 0.01f, 0.01f, 2f, 1, "", 1, 1, -1, 0);
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_429[2], -253.7119f, -2028.4642f, 28.9458f, 1.5f, 1.5f, 2f, false, true, 0))
					{
						if (__LIB_38__::func_170(iLocal_429[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -253.7119f, -2028.4642f, 28.9458f, 2f, -1, -1f, 0, 40000f);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_429[2], iLocal_774);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_429[2], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 2f)
					{
						if (PED::IS_PED_FACING_PED(iLocal_429[2], PLAYER::PLAYER_PED_ID(), 20f))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam4"))
							{
								if (__LIB_0__::func_611(&iLocal_486, 8000))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[2], true), true) < 40f)
									{
										__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_LAG", 6, 0, 0, 0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PLAY_ANIM(0, "missfam4", "say_hurry_up_a_trevor", 4f, -8f, -1, 0, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_429[2], iLocal_774);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
									iLocal_486 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (__LIB_38__::func_170(iLocal_429[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_774);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_774);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_429[2], iLocal_774);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_774);
						}
					}
					break;
				case 2:
					func_894(&Local_752, -255.1339f, -2026.6791f, 28.9458f, 0.01f, 0.01f, 2f, 1, iLocal_429[0], "", "family4_god_14", 1, 1, 1, -1);
					break;
			}
			func_892();
			if (HUD::DOES_BLIP_EXIST(Local_752.f_5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.824f, -2021.74f, 28.944f, -258.934f, -2033.879f, 31.958f, 7f, false, true, 0) || func_874(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f))
				{
					if (__LIB_0__::func_90())
					{
						if (func_71(0, 1, 1, 1))
						{
							iLocal_223 = 4;
						}
					}
				}
			}
			break;
	}
}

void func_892()//Position - 0x96B29
{
	struct<3> Var0;
	switch (__LIB_14__::func_466())
	{
		case 0:
			if (func_893(PLAYER::PLAYER_PED_ID(), iLocal_429[2]))
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_429[2], true)) };
					if (Var0.f_1 < 2f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) > 1)
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			break;
		case 2:
			if (func_893(PLAYER::PLAYER_PED_ID(), iLocal_429[2]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) > 1)
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
			break;
	}
}

int func_893(int iParam0, int iParam1)//Position - 0x96BCC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
					Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
					Var2 = { Var1 - Var0 };
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 0.5f, 0f) - Var1 };
					if (__LIB_0__::func_158(Var2, Var3) < 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_894(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x96C49
{
	return func_895(iParam0, Param1, Param2, bParam3, iParam4, 0, 0, sParam5, sParam6, sParam6, sParam6, sParam6, bParam7, bParam8, bParam9, iParam10, 1);
}

int func_895(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15, bool bParam16)//Position - 0x96C78
{
	return __LIB_17__::func_223(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 3, iParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, __LIB_0__::func_591(), bParam12, bParam13, __LIB_0__::func_591(), 0, 0, bParam14, iParam15, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), bParam16, 1065353216);
}

int func_897(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x96CD9
{
	return __LIB_17__::func_223(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 3, 0, 0, 0, 0, sParam4, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 0, bParam5, __LIB_0__::func_591(), 0, 0, bParam6, iParam7, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), bParam8, 1065353216);
}

void func_898(var uParam0)//Position - 0x96D34
{
	float fVar0;
	if (!iLocal_477)
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
			if (TASK::IS_MOVE_BLEND_RATIO_RUNNING(fVar0) || TASK::IS_MOVE_BLEND_RATIO_SPRINTING(fVar0))
			{
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*uParam0, 2f);
				iLocal_477 = 1;
			}
		}
	}
	else
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*uParam0, 2f);
	}
}

int func_900(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x96DD2
{
	return func_901(iParam0, Param1, Param2, bParam3, uParam4, 0, 0, sParam5, sParam6, sParam6, sParam6, sParam6, bParam7, bParam8, bParam9, iParam10);
}

int func_901(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)//Position - 0x96E00
{
	return __LIB_17__::func_223(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 1, uParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, __LIB_0__::func_591(), bParam12, bParam13, __LIB_0__::func_591(), 0, 0, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

float func_902()//Position - 0x96E4D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	fVar0 = 0.5f;
	fVar1 = 6.7f;
	fVar2 = 3f;
	fVar3 = 12f;
	if (__LIB_16__::func_307(&iVar7))
	{
		fVar4 = ENTITY::GET_ENTITY_SPEED(iVar7);
		if (fVar4 < 3f)
		{
			fVar4 = 3f;
		}
		fVar5 = ((fVar4 - fVar2) / (fVar3 - fVar2));
		fVar6 = (fVar0 + ((fVar1 - fVar0) * fVar5));
		return fVar6;
	}
	return 6.7f;
}

void func_903()//Position - 0x96EAC
{
	__LIB_17__::func_81(-252.6443f, -2022.6317f, 29.1457f, 100f, 120f, "family_4_mcs_2");
}

void func_905()//Position - 0x96F2E
{
	if (HUD::DOES_BLIP_EXIST(Local_752.f_5))
	{
		if (!iLocal_481)
		{
			__LIB_16__::func_17(&(Local_752.f_5), -210.9444f, -2041.7289f, 26.6206f, 100.8531f);
			iLocal_481 = 1;
		}
	}
	else
	{
		iLocal_481 = 0;
	}
}

void func_907()//Position - 0x96F9A
{
	switch (iLocal_523)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_4_DRIVE_TO_STADIUM");
				iLocal_523++;
			}
			break;
		case 1:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_4_DRIVE_TO_STADIUM"))
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && iLocal_502 > 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -248.824f, -2021.74f, 28.944f, -258.934f, -2033.879f, 31.958f, 4.5f, false, true, 0))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_4_DRIVE_TO_STADIUM");
					iLocal_523++;
				}
			}
			break;
	}
}

void func_908()//Position - 0x9703F
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_251[0 /*15*/]) && ENTITY::DOES_ENTITY_EXIST(Local_252[0 /*15*/])) && ENTITY::DOES_ENTITY_EXIST(Local_251[0 /*15*/]))
	{
		switch (iLocal_516)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(Local_251[0 /*15*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_252[0 /*15*/], false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -140.858f, -2011.314f, 20.385f, -170.442f, -2007.734f, 27.185f, 90f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, false, true, 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_251[0 /*15*/], 501, "lkfamily4", true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_252[0 /*15*/], 502, "lkfamily4", true);
						iLocal_516++;
					}
				}
				break;
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_251[0 /*15*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_251[0 /*15*/]))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_251[0 /*15*/], false, true, false);
						iLocal_516++;
					}
				}
				break;
			case 2:
				break;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_234.f_3, true) < 550f)
	{
		STREAMING::REQUEST_MODEL(Local_251[0 /*15*/].f_1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_251[0 /*15*/].f_1, true);
		STREAMING::REQUEST_MODEL(Local_252[0 /*15*/].f_1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_252[0 /*15*/].f_1, true);
		STREAMING::REQUEST_MODEL(Local_304.f_1);
		VEHICLE::REQUEST_VEHICLE_RECORDING(501, "lkfamily4");
		VEHICLE::REQUEST_VEHICLE_RECORDING(502, "lkfamily4");
		if ((((STREAMING::HAS_MODEL_LOADED(Local_251[0 /*15*/].f_1) && STREAMING::HAS_MODEL_LOADED(Local_252[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_304.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "lkfamily4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(502, "lkfamily4"))
		{
			Local_251[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_251[0 /*15*/].f_1, Local_251[0 /*15*/].f_3, Local_251[0 /*15*/].f_6, true, true, false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_251[0 /*15*/], 2);
			VEHICLE::SET_VEHICLE_COLOURS(Local_251[0 /*15*/], 0, 0);
			Local_252[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_252[0 /*15*/].f_1, Local_252[0 /*15*/].f_3, Local_252[0 /*15*/].f_6, true, true, false);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_251[0 /*15*/], Local_252[0 /*15*/], 1f);
			Local_304.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_251[0 /*15*/], 26, Local_304.f_1, -1, true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_304.f_1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_304.f_0, true);
		}
	}
}

void func_909()//Position - 0x972D9
{
	switch (iLocal_504)
	{
		case 0:
			iLocal_504++;
			break;
		case 1:
			if (!__LIB_13__::func_755(&Local_752, 1))
			{
				iLocal_504++;
			}
			break;
		case 2:
			if (!__LIB_13__::func_755(&Local_752, 0))
			{
				if (func_814(Local_752.f_5, &(iLocal_429[0])) || func_814(Local_752.f_5, &(iLocal_429[2])))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_B1A", 6, 0, 0, 0))
							{
								iLocal_504++;
							}
							break;
						case 1:
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_B1A2", 6, 0, 0, 0))
							{
								iLocal_504++;
							}
							break;
						}
					}
			}
			break;
		case 3:
			switch (__LIB_14__::func_466())
			{
				case 0:
					if (func_814(Local_752.f_5, &(iLocal_429[2])))
					{
						iLocal_504 = 4;
					}
					break;
				case 2:
					if (func_814(Local_752.f_5, &(iLocal_429[0])))
					{
						iLocal_504 = 4;
					}
					break;
			}
			break;
		case 4:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -219.5123f, -2037.8512f, 26.9f, true) > 400f)
			{
				if (__LIB_0__::func_611(&iLocal_520, 30000))
				{
					switch (__LIB_14__::func_466())
					{
						case 0:
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_HURRY", 6, 0, 0, 0))
							{
								iLocal_520 = MISC::GET_GAME_TIMER();
							}
							break;
						case 2:
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_HURRY2", 6, 0, 0, 0))
							{
								iLocal_520 = MISC::GET_GAME_TIMER();
							}
							break;
						}
					}
			}
			if (!func_584("FAM4_DRV2"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -219.5123f, -2037.8512f, 26.9f, true) < 50f)
				{
					switch (__LIB_14__::func_466())
					{
						case 0:
							if (func_814(Local_752.f_5, &(iLocal_429[2])))
							{
								if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_DRV2", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 3);
									func_581("FAM4_DRV2", 1);
								}
							}
							break;
						case 2:
							if (func_814(Local_752.f_5, &(iLocal_429[0])))
							{
								if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_DRV2", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 3);
									func_581("FAM4_DRV2", 1);
								}
							}
							break;
						}
					}
			}
			break;
		case 5:
			switch (__LIB_14__::func_466())
			{
				case 0:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_429[2]))
					{
						if (!__LIB_13__::func_755(&Local_752, 0))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "walk_stad0", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 6f, 3);
								iLocal_504 = 7;
							}
						}
					}
					break;
				case 2:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_13__::func_755(&Local_752, 0))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "walk_stad0", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 6f, 3);
								iLocal_504 = 7;
							}
						}
					}
					break;
			}
			break;
		case 6:
			switch (__LIB_14__::func_466())
			{
				case 0:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_429[2]))
					{
						if (!__LIB_13__::func_755(&Local_752, 0))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "walk_stad1", 7, 0, 0, 0))
							{
								iLocal_504 = 7;
							}
						}
					}
					break;
				case 2:
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_13__::func_755(&Local_752, 0))
						{
							if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "walk_stad1", 7, 0, 0, 0))
							{
								iLocal_504 = 7;
							}
						}
					}
					break;
			}
			break;
		case 7:
			if (__LIB_16__::func_7(&uLocal_575, "fam4Aud", "FAM4_VIP", 7, 0, 0, 0))
			{
				iLocal_504++;
			}
			break;
		case 8:
			switch (__LIB_14__::func_466())
			{
				case 0:
					if (func_814(Local_752.f_5, &(iLocal_429[2])))
					{
						__LIB_0__::func_229("family4_god_13", 7500, 1);
						iLocal_504++;
					}
					break;
				case 2:
					if (func_814(Local_752.f_5, &(iLocal_429[0])))
					{
						__LIB_0__::func_229("family4_god_13", 7500, 1);
						iLocal_504++;
					}
					break;
			}
			break;
		case 9:
			break;
	}
}

void func_910()//Position - 0x97727
{
	int iVar0;
	iLocal_773 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-800.31f, 184.8f, 72.72f, "V_Michael");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_773);
	CUTSCENE::REQUEST_CUTSCENE("FAM_4_INT_ALT1", 8);
	STREAMING::SET_SRL_FORCE_PRESTREAM(3);
	STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
		if (iVar0 != 9)
		{
			if (!iLocal_480)
			{
				if (((iVar0 >= 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() < 1) && INTERIOR::IS_INTERIOR_READY(iLocal_773)) && CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					__LIB_17__::func_504();
					iLocal_480 = 1;
				}
			}
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_12__::func_894(2), 0);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_500 = 1;
			iLocal_223 = 0;
		}
	}
	else if (CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_12__::func_894(2), 0);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_500 = 1;
			iLocal_223 = 0;
		}
	}
}

void func_915()//Position - 0x97886
{
	switch (iLocal_530)
	{
		case 0:
			func_71(0, 1, 1, 1);
			iLocal_574 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_574, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_574, -817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, false, true, 0))
					{
						__LIB_16__::func_937(-817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, Local_225.f_3, Local_225.f_6, 15f, 15f, 15f, 1, 1, 1, 0, 0);
						__LIB_32__::func_9(Local_225.f_3, Local_225.f_6);
						__LIB_32__::func_9(Local_225.f_3, Local_225.f_6);
						iLocal_483 = 1;
					}
					else
					{
						__LIB_16__::func_937(-860.221f, 150.219f, 62.021f, -858.733f, 175.275f, 72.921f, 31.5f, Local_545, fLocal_546, 15f, 15f, 15f, 0, 1, 1, 0, 0);
						__LIB_32__::func_9(Local_545, fLocal_546);
						iLocal_483 = 1;
					}
				}
			}
			MISC::CLEAR_AREA(-868.3934f, 152.2284f, 62.5499f, 1000f, true, false, false, false);
			if (__LIB_16__::func_307(&iLocal_573))
			{
				ENTITY::SET_ENTITY_HEADING(iLocal_573, fLocal_546);
				ENTITY::SET_ENTITY_COORDS(iLocal_573, Local_545, true, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_573, 5f);
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -870.8275f, 152.0728f, 62.6623f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 287.7694f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -831.9f, 165.2f, 71.3f, 5000, 0, 2);
			iLocal_562 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
			iLocal_554 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -872.38556f, 148.43027f, 63.400925f, 8.263765f, 0f, -63.055546f, 30.017197f, false, 2);
			iLocal_555 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -869.3068f, 147.81714f, 64.73584f, 9.493369f, 0f, -63.179226f, 30.017197f, false, 2);
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(iLocal_562, iLocal_554, 0, 3);
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(iLocal_562, iLocal_555, 5000, 3);
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iLocal_530++;
			break;
		case 1:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_562))
			{
				iLocal_530++;
			}
			break;
		case 2:
			if (__LIB_17__::func_156(20, &uLocal_776, 0, 1, 0, 0, 0))
			{
				iLocal_223 = 0;
			}
			break;
	}
}

void func_959()//Position - 0x9AC64
{
	switch (iLocal_500)
	{
		case 0:
			iLocal_773 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-800.31f, 184.8f, 72.72f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_773);
			switch (__LIB_14__::func_466())
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("FAM_4_INT_ALT1", 8);
					break;
				case 2:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("FAM_4_INT_ALT1", 12, 8);
					break;
			}
			if (!bLocal_485)
			{
				STREAMING::NEW_LOAD_SCENE_START(-797.4664f, 185.0637f, 72.6055f, __LIB_3__::func_80(0f, 0f, 97.6005f), 20f, 0);
				bLocal_485 = true;
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_773))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					switch (__LIB_14__::func_466())
					{
						case 0:
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_12__::func_894(2), 0);
							break;
						case 2:
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michael", 2, __LIB_12__::func_894(0), 0);
							break;
					}
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					iLocal_500++;
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (bLocal_485)
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				__LIB_15__::func_228(&uLocal_776, 0, 0, 2000, 1, 1, 0, 1);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", false);
				STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(Local_271.f_3, __LIB_3__::func_80(0f, 0f, Local_271.f_9));
				STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
				if (!iLocal_483)
				{
					__LIB_17__::func_198(-800.31f, 184.8f, 72.72f, 300f, 0);
				}
				__LIB_17__::func_90(0, 0);
				iLocal_574 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_574, false))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_574, -817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, false, true, 0))
						{
							__LIB_16__::func_937(-817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, Local_225.f_3, Local_225.f_6, 15f, 15f, 15f, 1, 1, 1, 0, 0);
							__LIB_32__::func_9(Local_225.f_3, Local_225.f_6);
						}
						else
						{
							__LIB_16__::func_937(-860.221f, 150.219f, 62.021f, -858.733f, 175.275f, 72.921f, 31.5f, Local_545, fLocal_546, 15f, 15f, 15f, 1, 1, 1, 0, 0);
							__LIB_32__::func_9(Local_545, fLocal_546);
						}
					}
				}
				MISC::CLEAR_AREA(-800.31f, 184.8f, 72.72f, 10000f, true, false, false, false);
				iLocal_500++;
			}
			break;
		case 2:
			func_968();
			func_967();
			if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					func_965();
					switch (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()))
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2))))
							{
								iLocal_429[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)));
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)))
							{
								if (!PED::IS_PED_INJURED(iLocal_429[2]))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_429[2], Local_291.f_3, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iLocal_429[2], Local_291.f_9);
									func_612(iLocal_429[2]);
									func_721(iLocal_429[2], joaat("WEAPON_PISTOL"), 50, 0, 0);
									func_611(&(iLocal_429[2]), 0);
									__LIB_0__::func_222(&uLocal_575, 2, iLocal_429[2], "trevor", 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_225.f_0))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_225.f_0, false))
										{
											TASK::TASK_ENTER_VEHICLE(iLocal_429[2], Local_225.f_0, 30000, 0, 1f, 1, 0);
										}
									}
									PED::FORCE_PED_MOTION_STATE(iLocal_429[2], joaat("MotionState_Walk"), false, 0, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[2], false, false);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_271.f_3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_271.f_9);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
								__LIB_0__::func_222(&uLocal_575, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
							}
							break;
						case 2:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0))))
							{
								iLocal_429[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0)));
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0)))
							{
								if (!PED::IS_PED_INJURED(iLocal_429[0]))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_429[0], Local_291.f_3, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iLocal_429[0], Local_291.f_9);
									func_612(iLocal_429[0]);
									func_721(iLocal_429[0], joaat("WEAPON_PISTOL"), 50, 0, 0);
									func_611(&(iLocal_429[0]), 0);
									__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(Local_225.f_0))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_225.f_0, false))
										{
											TASK::TASK_ENTER_VEHICLE(iLocal_429[0], Local_225.f_0, 30000, 0, 1f, 1, 0);
										}
									}
									PED::FORCE_PED_MOTION_STATE(iLocal_429[0], joaat("MotionState_Walk"), false, 0, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[0], false, false);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_271.f_3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_271.f_9);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
								__LIB_0__::func_222(&uLocal_575, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
							}
							break;
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
				}
				else if (func_967())
				{
					RECORDING::REPLAY_STOP_EVENT();
					func_960();
				}
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				iLocal_500++;
			}
			break;
		case 3:
			func_968();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				switch (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()))
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0)))
						{
							iLocal_429[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0));
						}
						break;
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0)))
						{
							iLocal_429[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0));
						}
						break;
				}
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START(Local_271.f_3, __LIB_3__::func_80(0f, 0f, Local_271.f_9), 20f, 0);
				while (!func_967() || !STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				func_965();
				switch (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()))
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_429[2]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_429[2], Local_291.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_429[2], Local_291.f_9);
							func_612(iLocal_429[2]);
							func_721(iLocal_429[2], joaat("WEAPON_PISTOL"), 50, 0, 0);
							func_611(&(iLocal_429[2]), 0);
							__LIB_0__::func_222(&uLocal_575, 2, iLocal_429[2], "trevor", 0, 1);
							if (ENTITY::DOES_ENTITY_EXIST(Local_225.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_225.f_0, false))
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_429[2], Local_225.f_0, 30000, 0, 1f, 1, 0);
								}
							}
							PED::FORCE_PED_MOTION_STATE(iLocal_429[2], joaat("MotionState_Walk"), false, 0, false);
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_271.f_3, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_271.f_9);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						__LIB_0__::func_222(&uLocal_575, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
						break;
					case 2:
						if (!PED::IS_PED_INJURED(iLocal_429[0]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_429[0], Local_291.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_429[0], Local_291.f_9);
							func_612(iLocal_429[0]);
							func_721(iLocal_429[0], joaat("WEAPON_PISTOL"), 50, 0, 0);
							func_611(&(iLocal_429[0]), 0);
							__LIB_0__::func_222(&uLocal_575, 0, iLocal_429[0], "michael", 0, 1);
							if (ENTITY::DOES_ENTITY_EXIST(Local_225.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_225.f_0, false))
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_429[0], Local_225.f_0, 30000, 0, 1f, 1, 0);
								}
							}
							PED::FORCE_PED_MOTION_STATE(iLocal_429[0], joaat("MotionState_Walk"), false, 0, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_429[0], false, false);
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_271.f_3, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_271.f_9);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						__LIB_0__::func_222(&uLocal_575, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
						break;
				}
				func_960();
			}
			break;
	}
}

void func_960()//Position - 0x9B52C
{
	MISC::CLEAR_AREA(-800.31f, 184.8f, 72.72f, 1000f, true, false, false, false);
	STREAMING::SET_SRL_FORCE_PRESTREAM(0);
	if (!__LIB_0__::func_478(4, PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_635(4, PLAYER::PLAYER_PED_ID());
	}
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", true);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_773))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_773);
	}
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_17__::func_472(&Local_253, 17, Local_253.f_3, Local_253.f_6, 1, 0);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_253);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_225.f_0))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_225.f_0))
		{
			__LIB_17__::func_201(Local_225.f_0, Local_225.f_3, Local_225.f_6, 24, 0);
			__LIB_17__::func_199(Local_225.f_0);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_225.f_1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_539(1, 0, 0, 1);
	}
	else
	{
		__LIB_17__::func_195(0, 0, 0, 0, 0, 3000, 1);
	}
	__LIB_17__::func_789(0, "start of mission", 0, 0, 0, 1);
	iLocal_223 = 3;
}

void func_965()//Position - 0x9BE3C
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_225.f_0))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_225.f_1))
		{
			if (!func_966(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_225.f_3, 1, -822.8611f, 157.759f, 69.009f, 87.7002f, 1))
			{
				__LIB_17__::func_202(&Local_225, 0, Local_225.f_3, Local_225.f_6, 0, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_225.f_0, false, 0);
				__LIB_16__::func_308(&Local_752, Local_225.f_0);
			}
			else
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
				__LIB_16__::func_308(&Local_752, iVar0);
			}
		}
	}
}

int func_966(int iParam0, struct<3> Param1, int iParam2, struct<3> Param3, float fParam4, bool bParam5)//Position - 0x9BECA
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, 10f, 10f, 10f, false, true, 0))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
				{
					if (bParam5)
					{
						if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) >= iParam2)
						{
							return 1;
						}
						else
						{
							MISC::CLEAR_AREA(Param3, 10f, true, false, false, false);
							ENTITY::SET_ENTITY_COORDS(iParam0, Param3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							__LIB_32__::func_9(Param3, fParam4);
						}
					}
				}
				else if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) >= iParam2)
				{
					return 1;
				}
				else
				{
					MISC::CLEAR_AREA(Param3, 10f, true, false, false, false);
					ENTITY::SET_ENTITY_COORDS(iParam0, Param3, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
					__LIB_32__::func_9(Param3, fParam4);
				}
			}
		}
	}
	return 0;
}

int func_967()//Position - 0x9BFBC
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_271.f_1))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_291.f_1))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_225.f_1))
	{
	}
	if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_225.f_1))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0"))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1"))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2"))
	{
	}
	if ((((((STREAMING::HAS_MODEL_LOADED(Local_271.f_1) && STREAMING::HAS_MODEL_LOADED(Local_291.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_225.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_225.f_1)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_0")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("family4_2"))
	{
		return 1;
	}
	return 0;
}

void func_968()//Position - 0x9C085
{
	STREAMING::REQUEST_MODEL(Local_271.f_1);
	STREAMING::REQUEST_MODEL(Local_291.f_1);
	STREAMING::REQUEST_MODEL(Local_225.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_225.f_1, true);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_225.f_1, 15);
	STREAMING::REQUEST_MODEL(Local_253.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_253.f_1, true);
	TASK::REQUEST_WAYPOINT_RECORDING("family4_0");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_1");
	TASK::REQUEST_WAYPOINT_RECORDING("family4_2");
}

void func_969()//Position - 0x9C0EB
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 231);
		if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
		{
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1);
		}
		else
		{
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 232);
		}
	}
	else
	{
		__LIB_0__::func_377(0, 231);
		__LIB_0__::func_505(0, -1);
	}
}

void func_973()//Position - 0x9C1DC
{
	if (bLocal_478)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		iLocal_521 = MISC::GET_GAME_TIMER();
	}
	__LIB_0__::func_429();
	func_983();
	func_974(sLocal_549);
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_FAIL");
	iLocal_469 = 1;
	iLocal_224 = iLocal_223;
	iLocal_223 = 15;
}

void func_974(char* sParam0)//Position - 0x9C22C
{
	__LIB_0__::func_381(sParam0);
	func_975(0);
}

void func_975(int iParam0)//Position - 0x9C23F
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_976(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_976(int iParam0)//Position - 0x9C284
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_6();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_977(&(Global_113386.f_2363.f_539), iVar1);
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

void func_977(var uParam0, int iParam1)//Position - 0x9C394
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
			if (!func_979(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_979(int iParam0, var uParam1, float fParam2)//Position - 0x9C568
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
			return func_979(8, uParam1, fParam2);
			break;
		case 10:
			return func_979(8, uParam1, fParam2);
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

void func_983()//Position - 0x9D04A
{
	if (HUD::DOES_BLIP_EXIST(Local_262.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_262.f_2));
	}
}

int func_984()//Position - 0x9D067
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	switch (iLocal_223)
	{
		case 3:
			if (__LIB_16__::func_314(&(iLocal_429[2])))
			{
				sLocal_549 = "family4_fail_1";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[0])))
			{
				sLocal_549 = "family4_fail_0";
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_302.f_0 - 1))
			{
				if (__LIB_17__::func_420(&(Local_302[iVar0 /*20*/]), &(Local_302[iVar0 /*20*/].f_10)) || func_45(&(Local_302[iVar0 /*20*/]), 20f, 0))
				{
					sLocal_549 = "family4_fail_11";
					return 1;
				}
				iVar0++;
			}
			if (__LIB_16__::func_313(&Local_240))
			{
				bLocal_478 = true;
				sLocal_549 = "family4_fail_11";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
			{
				if ((ENTITY::GET_ENTITY_HEALTH(Local_240.f_0) < 700 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_240.f_0) < 700f) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_240.f_0) < 700f)
				{
					sLocal_549 = "family4_fail_11";
					return 1;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_240.f_0, Local_240.f_3, 2f, 2f, 2f, false, true, 0))
				{
					sLocal_549 = "family4_fail_11";
					return 1;
				}
			}
			if (__LIB_16__::func_313(&Local_234))
			{
				bLocal_478 = true;
				sLocal_549 = "family4_fail_11";
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_251.f_0 - 1))
			{
				if (__LIB_16__::func_313(&(Local_251[iVar0 /*15*/])))
				{
					bLocal_478 = true;
					sLocal_549 = "family4_fail_11";
					return 1;
				}
				iVar0++;
			}
			if ((((__LIB_16__::func_313(&iLocal_565) || __LIB_16__::func_313(&iLocal_567)) || __LIB_16__::func_313(&iLocal_568)) || __LIB_16__::func_313(&iLocal_569)) || __LIB_16__::func_313(&iLocal_570))
			{
				bLocal_478 = true;
				sLocal_549 = "family4_fail_11";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[2]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[2], true), true) > 200f)
				{
					sLocal_549 = "family4_fail_10";
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[0], true), true) > 200f)
				{
					sLocal_549 = "family4_fail_9";
					return 1;
				}
			}
			if (func_874(PLAYER::PLAYER_PED_ID(), -260.7652f, -2026.163f, 29.1458f))
			{
				if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						func_47();
					}
					bLocal_478 = true;
					sLocal_549 = "family4_fail_11";
					return 1;
				}
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, -258.158f, -2034.546f, 27.946f, -248.087f, -2022.372f, 31.946f, 5.2f, false, true, 0))
					{
						func_47();
						bLocal_478 = true;
						sLocal_549 = "family4_fail_11";
						return 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -175.828f, -2039.052f, 26.621f, -276.227f, -1989.866f, 35.621f, 195.7f, false, true, 0))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
					{
						if (WEAPON::GET_WEAPONTYPE_GROUP(iVar2) != joaat("GROUP_THROWN"))
						{
							func_47();
							bLocal_478 = true;
							sLocal_549 = "family4_fail_11";
							return 1;
						}
					}
				}
				if (__LIB_16__::func_307(&iVar3))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("firetruk"))
					{
						if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/))
						{
							bLocal_478 = true;
							sLocal_549 = "family4_fail_11";
							return 1;
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					sLocal_549 = "family4_fail_11";
					return 1;
				}
			}
			if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -231.798f, -2041.398f, 26.361f, -260.114f, -2021.864f, 34.161f, 39.2f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -252.133f, -2011.385f, 29.146f, -269.892f, -2032.251f, 32.146f, 16.5f))
			{
				func_47();
				bLocal_478 = true;
				sLocal_549 = "family4_fail_11";
				return 1;
			}
			break;
		case 4:
			if (__LIB_16__::func_314(&(iLocal_429[2])))
			{
				sLocal_549 = "family4_fail_1";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[0])))
			{
				sLocal_549 = "family4_fail_0";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[2]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[2], true), true) > 200f)
				{
					sLocal_549 = "family4_fail_10";
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[0], true), true) > 200f)
				{
					sLocal_549 = "family4_fail_9";
					return 1;
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -243.6647f, -2001.4718f, 24.7756f, true) > 200f)
			{
				sLocal_549 = "family4_fail_12";
				return 1;
			}
			break;
		case 5:
			if (__LIB_16__::func_314(&Local_282))
			{
				sLocal_549 = "family4_fail_2";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_262))
			{
				sLocal_549 = "family4_fail_3";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[2])))
			{
				sLocal_549 = "family4_fail_1";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[0])))
			{
				sLocal_549 = "family4_fail_0";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_240))
			{
				sLocal_549 = "family4_fail_5";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_234) || __LIB_16__::func_313(&Local_236))
			{
				sLocal_549 = "family4_god_5";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_240.f_0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_262.f_0, Local_240.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
					{
						if (func_874(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f))
						{
							if (!__LIB_17__::func_190(PLAYER::PLAYER_PED_ID(), -249.8176f, -2008.059f, 29.1458f, "GtaMloRoom001"))
							{
								sLocal_549 = "family4_fail_6";
								return 1;
							}
						}
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_240.f_0) > 11000f)
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
							{
								sLocal_549 = "family4_fail_6";
								return 1;
							}
						}
					}
				}
			}
			switch (__LIB_14__::func_466())
			{
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[0], true), true) > 200f)
					{
						sLocal_549 = "family4_fail_9";
						return 1;
					}
					break;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) > 200f)
			{
				sLocal_549 = "family4_fail_6";
				return 1;
			}
			if (__LIB_0__::func_611(&iLocal_486, 60000))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) > 150f)
				{
					sLocal_549 = "family4_fail_6";
					return 1;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[0], true), true) > 100f)
				{
					sLocal_549 = "family4_fail_9";
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_234.f_0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[0], true), true) > 50f)
					{
						sLocal_549 = "family4_fail_9";
						return 1;
					}
				}
			}
			break;
		case 6:
			if (__LIB_16__::func_314(&Local_262))
			{
				sLocal_549 = "family4_fail_3";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[2])))
			{
				sLocal_549 = "family4_fail_1";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[0])))
			{
				sLocal_549 = "family4_fail_0";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_240))
			{
				sLocal_549 = "family4_fail_5";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_234) || __LIB_16__::func_313(&Local_236))
			{
				sLocal_549 = "family4_god_5";
				return 1;
			}
			break;
		case 7:
			if (__LIB_16__::func_314(&Local_262))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_240.f_0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_240.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_240.f_0);
					}
				}
				sLocal_549 = "family4_fail_3";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[0])))
			{
				sLocal_549 = "family4_fail_0";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[2])))
			{
				sLocal_549 = "family4_fail_1";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_240))
			{
				sLocal_549 = "family4_fail_3";
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_240.f_0, false), 0, 2f, true, false, 1f, false);
				return 1;
			}
			if (__LIB_16__::func_313(&Local_234) || __LIB_16__::func_313(&Local_236))
			{
				sLocal_549 = "family4_god_5";
				return 1;
			}
			if (__LIB_17__::func_193(&Local_234))
			{
				sLocal_549 = "family4_god_4";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_429[0], true), true) > 200f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_429[0]))
				{
					sLocal_549 = "family4_fail_9";
					return 1;
				}
			}
			if (!func_985())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) > 250f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_262.f_0))
					{
						sLocal_549 = "family4_fail_6";
						return 1;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) > 300f)
					{
						sLocal_549 = "family4_fail_6";
						return 1;
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_262.f_0, true), true) > 400f)
			{
				sLocal_549 = "family4_fail_6";
				return 1;
			}
			break;
		case 8:
		case 9:
			if (__LIB_16__::func_314(&Local_262))
			{
				sLocal_549 = "family4_fail_3";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[0])))
			{
				sLocal_549 = "family4_fail_0";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[2])))
			{
				sLocal_549 = "family4_fail_1";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_240))
			{
				sLocal_549 = "family4_fail_3";
				VEHICLE::EXPLODE_VEHICLE(Local_240.f_0, true, false);
				return 1;
			}
			if (__LIB_16__::func_313(&Local_234) || __LIB_16__::func_313(&Local_236))
			{
				sLocal_549 = "family4_god_5";
				return 1;
			}
			break;
		case 11:
			if (__LIB_16__::func_313(&Local_234))
			{
			}
			if (__LIB_16__::func_313(&Local_236))
			{
			}
			if (__LIB_16__::func_313(&(Local_248[0 /*15*/])))
			{
			}
			if (__LIB_16__::func_313(&Local_240))
			{
			}
			if (__LIB_16__::func_314(&Local_262))
			{
			}
			break;
		case 12:
			if (__LIB_16__::func_314(&Local_262))
			{
				sLocal_549 = "family4_fail_3";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[0])))
			{
				sLocal_549 = "family4_fail_0";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_429[2])))
			{
				sLocal_549 = "family4_fail_1";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_240))
			{
				sLocal_549 = "family4_fail_3";
				VEHICLE::EXPLODE_VEHICLE(Local_240.f_0, true, false);
				return 1;
			}
			if (__LIB_16__::func_313(&Local_234) || __LIB_16__::func_313(&Local_236))
			{
				sLocal_549 = "family4_god_5";
				return 1;
			}
			break;
	}
	return 0;
}

int func_985()//Position - 0x9DB3E
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 746.675f, -371.534f, 14.751f, 769.989f, -490.368f, 34.751f, 110f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 847.737f, -352.096f, 20.22f, 870.975f, -470.538f, 77.346f, 164.8f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_989()//Position - 0x9DC54
{
	int iVar0;
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_722();
	func_1001();
	func_1000();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_240.f_1, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_225.f_1, true);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	__LIB_16__::func_1();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-392.1f, -2114.8f, 100f, -141.4f, -1837f, -100f, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-193.7f, -2025f, 35f, -145.7f, -1988f, 20f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-267.8f, -2032f, 35f, -246.2f, -2024f, -28f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-260.8f, -2029f, -100f, -333f, -1931f, 100f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-254f, -2024.9f, -100f, -333f, -1931f, 100f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-249.7f, -2016f, -100f, -333f, -1931f, 100f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(987f, -209.5f, 0f, 1121f, -413f, 78f, false, true, true, true);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_stad_fdoor"), -259.49f, -2031.94f, 30.52f, true, 0f, 0f, 1f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_stad_fdoor"), -257.49f, -2029.56f, 30.52f, true, 0f, 0f, -1f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_stad_fdoor"), -256.08f, -2027.87f, 30.52f, true, 0f, 0f, 1f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_stad_fdoor"), -254.09f, -2025.5f, 30.52f, true, 0f, 0f, -1f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_stad_fdoor"), -252.67f, -2023.81f, 30.52f, true, 0f, 0f, 1f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_stad_fdoor"), -250.68f, -2021.44f, 30.52f, true, 0f, 0f, -1f);
	__LIB_0__::func_544(100, 1, 0, 1, 0);
	if (__LIB_0__::func_323())
	{
		iLocal_548 = 1;
		if (!Global_94618)
		{
			switch (__LIB_0__::func_344())
			{
				case 0:
					func_719();
					break;
				case 1:
					func_617();
					break;
				case 2:
					func_579();
					break;
				case 3:
					func_577();
					break;
				case 4:
					func_480();
					break;
				case 5:
					break;
			}
		}
		else
		{
			iVar0 = __LIB_0__::func_344() + 1;
			switch (iVar0)
			{
				case 1:
					func_617();
					break;
				case 2:
					func_579();
					break;
				case 3:
					func_577();
					break;
				case 4:
					func_480();
					break;
				case 5:
					func_61();
					break;
				}
		}
		iLocal_548 = 0;
	}
	else
	{
		Global_96892 = 0;
		if (!__LIB_0__::func_2(0))
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (__LIB_14__::func_466() == 0)
				{
					iLocal_223 = 2;
				}
				func_991();
			}
			else
			{
				switch (__LIB_14__::func_466())
				{
					case 2:
						iLocal_223 = 1;
						break;
					}
			}
			__LIB_17__::func_789(0, "start of mission", 0, 0, 0, 1);
		}
		else
		{
			func_990();
		}
	}
}

void func_990()//Position - 0x9DFA8
{
	STREAMING::REQUEST_MODEL(__LIB_12__::func_894(0));
	while (!STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_894(0)))
	{
		SYSTEM::WAIT(0);
	}
	func_424(0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -822.2418f, 180.9213f, 70.6951f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 73.814f);
	STREAMING::NEW_LOAD_SCENE_START(-822.2418f, 180.9213f, 70.6951f, __LIB_3__::func_80(0f, 0f, 73.814f), 100f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	iLocal_773 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-800.31f, 184.8f, 72.72f, "V_Michael");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_773);
	CUTSCENE::REQUEST_CUTSCENE("FAM_4_INT_ALT1", 8);
	while (!INTERIOR::IS_INTERIOR_READY(iLocal_773) || !CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	switch (__LIB_14__::func_466())
	{
		case 0:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_12__::func_894(2), 0);
			break;
	}
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", false);
	STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(Local_271.f_3, __LIB_3__::func_80(0f, 0f, Local_271.f_9));
	STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
	__LIB_17__::func_198(-800.31f, 184.8f, 72.72f, 300f, 0);
	__LIB_17__::func_90(0, 0);
	iLocal_574 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_574, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_574, -817.51f, 151.703f, 64.606f, -815.789f, 192.767f, 77.706f, 61.4f, false, true, 0))
			{
				__LIB_16__::func_937(-812.943f, 167.079f, 69.294f, -811.455f, 192.135f, 76.794f, 37f, Local_225.f_3, Local_225.f_6, 15f, 15f, 15f, 0, 1, 1, 0, 0);
				__LIB_32__::func_9(Local_225.f_3, Local_225.f_6);
			}
			else
			{
				__LIB_16__::func_937(-860.221f, 150.219f, 62.021f, -858.733f, 175.275f, 72.921f, 31.5f, Local_545, fLocal_546, 15f, 15f, 15f, 0, 1, 1, 0, 0);
				__LIB_32__::func_9(Local_545, fLocal_546);
			}
		}
	}
	MISC::CLEAR_AREA(-800.31f, 184.8f, 72.72f, 10000f, true, false, false, false);
	iLocal_500 = 2;
	CAM::DO_SCREEN_FADE_IN(800);
	__LIB_17__::func_789(0, "start of mission", 0, 0, 0, 1);
	Global_106934 = 0;
}

void func_991()//Position - 0x9E241
{
	iLocal_574 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_574, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_574, true, true);
			__LIB_17__::func_200(iLocal_574, 0, 145);
			VEHICLE::DELETE_VEHICLE(&iLocal_574);
		}
		else
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_574, true, true);
			VEHICLE::DELETE_VEHICLE(&iLocal_574);
		}
	}
}

void func_1000()//Position - 0xA2774
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_796);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_797);
	PED::ADD_RELATIONSHIP_GROUP("gropie group", &iLocal_798);
}

void func_1001()//Position - 0xA27A3
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("fam4aud", 6))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("fam4aud", 6);
	}
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("family4", 0))
	{
		HUD::REQUEST_ADDITIONAL_TEXT("family4", 0);
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_1002()//Position - 0xA27FD
{
	__LIB_0__::func_325();
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", true);
	__LIB_15__::func_931();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	__LIB_12__::func_849(2, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_234.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_234.f_0, false))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_234.f_0, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_236.f_0, false))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_236.f_0, true);
		}
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_234.f_1, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_236.f_1, false);
	if (CAM::DOES_CAM_EXIST(iLocal_552))
	{
		CAM::DESTROY_CAM(iLocal_552, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	__LIB_0__::func_345(&uLocal_740, 0, 0);
	TASK::REMOVE_WAYPOINT_RECORDING("family4_0");
	TASK::REMOVE_WAYPOINT_RECORDING("family4_1");
	TASK::REMOVE_WAYPOINT_RECORDING("family4_2");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("fame1");
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	MISC::SET_TIME_SCALE(1f);
	VEHICLE::SET_RANDOM_TRAINS(true);
	func_6(0, 1);
	__LIB_16__::func_318(&Local_752, 1, 0);
	__LIB_16__::func_304();
	__LIB_13__::func_824(1, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-365.5f, -2063.4f, 100f, -141.4f, -1837f, -100f, true, true);
	AUDIO::TRIGGER_MUSIC_EVENT("FAM4_MISSION_FAIL");
	__LIB_0__::func_544(100, 0, 1, 1, 0);
	AUDIO::SET_PED_WALLA_DENSITY(0f, 0f);
	STREAMING::SET_SRL_FORCE_PRESTREAM(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1004()//Position - 0xA2963
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
				if (!func_976(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_6();
		}
	}
}

