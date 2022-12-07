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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	struct<3> Local_34 = { 0, 0, 0 } ;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<4> Local_47[10];
	bool bLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	float fLocal_99[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_100[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_101[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_102[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_103[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_109[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_115[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_116[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_117[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
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
	int iLocal_139[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_140[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_141[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_142[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_143[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_144[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_145[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	struct<3> Local_163[105];
	struct<3> Local_164[70];
	struct<3> Local_165[50];
	struct<3> Local_166 = { 0, 0, 0 } ;
	struct<3> Local_167 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	struct<3> Local_175 = { 0, 0, 0 } ;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	char cLocal_179[64] = "";
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_190[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_191[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_199[5] = { 0, 0, 0, 0, 0 };
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203 = 20;
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
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	struct<61> Local_227 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	bool bLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240[3] = { 0, 0, 0 };
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
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	bool bLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	bool bLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	bool bLocal_269 = 0;
	int iLocal_270 = 0;
	bool bLocal_271 = 0;
	bool bLocal_272 = 0;
	bool bLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int* iLocal_276 = NULL;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	float fLocal_280 = 0f;
	float fLocal_281 = 0f;
	float fLocal_282 = 0f;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	float fLocal_287 = 0f;
	float fLocal_288 = 0f;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
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
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
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
	int* iLocal_339 = NULL;
	int* iLocal_340 = NULL;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	struct<8> Local_345[4];
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349[2] = { 0, 0 };
	char* sLocal_350 = NULL;
	char* sLocal_351 = NULL;
	char* sLocal_352 = NULL;
	char* sLocal_353 = NULL;
	char* sLocal_354 = NULL;
	char* sLocal_355 = NULL;
	char* sLocal_356 = NULL;
	char* sLocal_357 = NULL;
	char* sLocal_358 = NULL;
	char* sLocal_359 = NULL;
	char* sLocal_360 = NULL;
	char* sLocal_361 = NULL;
	char* sLocal_362 = NULL;
	char[] cLocal_363[8] = 0;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	var uLocal_366 = 16;
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
	struct<7> Local_531 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_532 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_533 = { 0, 0 } ;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	struct<3> Local_539 = { 0, 0, 0 } ;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	struct<2> Local_544 = { 0, 0 } ;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	struct<7> Local_550 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_551 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_552 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_553 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_554 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_555 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_556 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_557 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_558 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_559 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_560 = { 0, 0, 0 } ;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	char cLocal_564[24] = "";
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	char cLocal_568[24] = "";
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	struct<3> Local_572 = { 0, 0, 0 } ;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	struct<3> Local_576 = { 0, 0, 0 } ;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	char cLocal_580[24] = "";
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_585 = { 0, 0, 0 } ;
	struct<3> Local_586 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_588 = { 0, 0, 0 } ;
	struct<3> Local_589 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_591 = { 0, 0, 0 } ;
	struct<3> Local_592[2];
	struct<3> Local_593[2];
	struct<3> Local_594 = { 0, 0, 0 } ;
	struct<3> Local_595 = { 0, 0, 0 } ;
	struct<3> Local_596[2];
	struct<3> Local_597[2];
	struct<3> Local_598 = { 0, 0, 0 } ;
	struct<3> Local_599 = { 0, 0, 0 } ;
	struct<3> Local_600 = { 0, 0, 0 } ;
	struct<61> Local_601 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	iLocal_45 = 3;
	uLocal_50 = __LIB_2__::func_108(50);
	iLocal_51 = joaat("pcj");
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	iLocal_63 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_64 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_68 = true;
	iLocal_75 = 1;
	bLocal_97 = true;
	fLocal_118 = 120f;
	fLocal_119 = 0f;
	fLocal_121 = 1f;
	fLocal_122 = 0f;
	fLocal_123 = 1f;
	fLocal_124 = 30f;
	fLocal_126 = 1f;
	fLocal_127 = 5f;
	fLocal_128 = 1f;
	fLocal_129 = 1f;
	fLocal_130 = 100f;
	fLocal_131 = 100f;
	fLocal_132 = 0f;
	fLocal_133 = 7000f;
	fLocal_134 = 0f;
	fLocal_135 = 0f;
	fLocal_136 = 0.3f;
	fLocal_137 = 0.5f;
	fLocal_138 = 50f;
	iLocal_149 = -1;
	iLocal_157 = -1;
	iLocal_158 = -1;
	bLocal_263 = true;
	bLocal_271 = true;
	sLocal_350 = "rcmpaparazzo1ig_2";
	sLocal_351 = "rcmpaparazzo1ig_1";
	sLocal_352 = "Franklin";
	sLocal_353 = "Beverly";
	sLocal_354 = "Beverlys_camera";
	sLocal_355 = "Camera_Flash";
	sLocal_356 = "PAP_Bike";
	sLocal_357 = "Miranda_Car";
	sLocal_358 = "Miranda";
	sLocal_359 = "Miranda_Bodyguard";
	sLocal_360 = "atk_punch_left_pap";
	sLocal_361 = "RCM_Paparazzo";
	sLocal_362 = "Distant_Camera_Flash";
	cLocal_363 = "PAP1AUD";
	sLocal_364 = "PAPARAZZO_01_SOUNDSET";
	sLocal_365 = "Pap1U";
	StringCopy(&Local_558, "point_45_left_pap", 64);
	StringCopy(&Local_559, "", 24);
	StringCopy(&Local_560, "", 24);
	StringCopy(&cLocal_564, "rcmpaparazzo1ig_1_waive", 24);
	StringCopy(&cLocal_568, "waive_comeback_f", 24);
	StringCopy(&Local_572, "", 24);
	StringCopy(&Local_576, "PAP_1_MCS_1", 24);
	StringCopy(&cLocal_580, "rcmpaparazzo1", 24);
	Local_227 = { ScriptParam_601 };
	__LIB_20__::func_264(&Local_227);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_678();
	}
	func_676();
	if (__LIB_0__::func_294())
	{
		iVar0 = __LIB_0__::func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_370(-152.3902f, 279.5714f, 92.8134f, 106.6662f, 0, 0);
				bLocal_237 = true;
				func_664(1, 0);
				break;
			case 1:
				__LIB_0__::func_370(-1736.5334f, -508.0815f, 37.98f, 192.1f, 0, 0);
				func_664(3, 0);
				iLocal_307 = Global_100441.f_12[0];
				break;
			case 2:
				__LIB_0__::func_370(-1586.6477f, -533.9604f, 34.4623f, 307.1855f, 0, 0);
				func_664(4, 0);
				iLocal_239 = 1;
				iLocal_307 = Global_100441.f_12[0];
				break;
			case 3:
				__LIB_0__::func_370(Local_589, 221.0758f, 0, 0);
				func_664(5, 0);
				iLocal_307 = Global_100441.f_12[0];
				break;
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_P", 0);
		__LIB_40__::func_687(Local_227.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_633();
			func_632();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_224)
			{
				case 0:
					func_577();
					break;
				case 1:
					func_569();
					break;
				case 2:
					func_564();
					break;
				case 3:
					func_504();
					break;
				case 4:
					func_503();
					break;
				case 7:
					func_359();
					break;
				case 5:
					func_351();
					break;
				case 6:
					func_230();
					break;
				case 8:
					func_194();
					break;
				case 9:
					break;
				case 10:
					break;
				case 11:
					break;
				}
		}
		if (bLocal_263 == 0)
		{
			func_1(iLocal_225);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x3C7
{
	if (iLocal_224 == iParam0)
	{
		if (__LIB_0__::func_295())
		{
			__LIB_6__::func_775(0, -1, 0);
		}
		func_86(iLocal_224);
		func_81(iLocal_224);
		if (iLocal_224 == 5)
		{
			__LIB_40__::func_640(1, 0, 1);
		}
		else if (iLocal_224 == 1)
		{
			__LIB_40__::func_640(0, 1, 1);
		}
		else
		{
			__LIB_40__::func_640(1, 1, 1);
		}
		bLocal_263 = true;
		iLocal_264 = 0;
		if (iLocal_224 == 6)
		{
			__LIB_0__::func_84(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x43A
{
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_75())
		{
			__LIB_6__::func_771();
		}
		__LIB_0__::func_296();
		HUD::CLEAR_PRINTS();
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
		switch (iLocal_224)
		{
			case 0:
				if (iLocal_226 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
				}
				break;
			case 1:
				if (iLocal_226 == 1)
				{
					if (__LIB_1__::func_183(Local_550.f_0))
					{
						if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
						{
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true, 4096, -1);
						}
						if (__LIB_1__::func_197(Local_531.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
							{
								func_58(Local_531.f_0, &Local_550, 0);
							}
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_550.f_0, true, true, false);
					}
					iLocal_267 = 1;
					fLocal_281 = 10f;
					if (!__LIB_0__::func_295())
					{
						if (__LIB_1__::func_183(Local_550.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
							{
								func_58(PLAYER::PLAYER_PED_ID(), &Local_550, -1);
							}
						}
						__LIB_10__::func_701(Local_550.f_0, -1434.5149f, -67.2538f, 51.678f, 130.5866f, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_56(1);
						if (iLocal_264 == 0)
						{
							if (iLocal_225 == 2)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_264 = 1;
								}
							}
						}
					}
					if (__LIB_1__::func_183(Local_551.f_0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0, 1, sLocal_365, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0, 56000f);
						func_45(Local_551.f_0, 56000f);
						iLocal_84 = 1;
						func_44();
						func_43();
						func_3(Local_551.f_0, fLocal_293);
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, false, false, false, false, false, false, 0);
					iLocal_226 = 2;
				}
				break;
			case 2:
				if (iLocal_226 == 1)
				{
					if (__LIB_1__::func_183(Local_550.f_0))
					{
						if (__LIB_1__::func_197(Local_531.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
							{
								func_58(Local_531.f_0, &Local_550, 0);
							}
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 1000f, -2f, -1, 17, 0f, false, false, false);
							}
						}
					}
					if (__LIB_1__::func_183(Local_551.f_0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
						{
							VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0);
						}
					}
					if (__LIB_1__::func_183(Local_552.f_0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_552.f_0))
						{
							VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_552.f_0);
						}
					}
					if (iLocal_225 == 3)
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Pap1PV");
						while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Pap1PV"))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (!__LIB_0__::func_295())
					{
						if (__LIB_1__::func_183(Local_550.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
							{
								func_58(PLAYER::PLAYER_PED_ID(), &Local_550, -1);
							}
						}
						__LIB_10__::func_701(Local_550.f_0, -1736.5334f, -508.0815f, 37.98f, 192.1f, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_264 == 0)
						{
							if (iLocal_225 == 3)
							{
								__LIB_20__::func_665(-1727.6035f, -524.8994f, 36.6081f, 75f, 13, 5000, 0, 0);
								iLocal_264 = 1;
							}
						}
					}
					iLocal_240[0] = 1;
					iLocal_240[1] = 1;
					iLocal_313 = 4;
					iLocal_310 = 0;
					fLocal_293 = 1f;
					fLocal_281 = 10f;
					fLocal_284 = 10f;
					iLocal_226 = 2;
				}
				break;
			case 3:
				if (iLocal_226 == 1)
				{
					if (__LIB_1__::func_183(Local_550.f_0))
					{
						if (__LIB_1__::func_197(Local_531.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
							{
								func_58(Local_531.f_0, &Local_550, 0);
							}
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_550.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_550.f_0);
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
						}
						SYSTEM::WAIT(0);
					}
					if (__LIB_1__::func_183(Local_551.f_0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0);
						}
					}
					if (__LIB_1__::func_183(Local_552.f_0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_552.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_552.f_0);
						}
					}
					if (!__LIB_0__::func_295())
					{
						if (__LIB_1__::func_183(Local_550.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
							{
								func_58(PLAYER::PLAYER_PED_ID(), &Local_550, -1);
							}
						}
						__LIB_10__::func_701(Local_550.f_0, -1586.6477f, -533.9604f, 34.4623f, 307.1855f, 0, 1);
						if (__LIB_1__::func_183(Local_550.f_0))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_550.f_0, 5f);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_264 == 0)
						{
							if (iLocal_225 == 4)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_264 = 1;
								}
							}
						}
					}
					__LIB_10__::func_701(Local_552.f_0, -1594.5171f, -537.8604f, 34.2018f, 307.7577f, 0, 1);
					if (__LIB_1__::func_197(Local_544.f_0) && __LIB_1__::func_197(Local_539.f_0))
					{
						TASK::CLEAR_PED_TASKS(Local_539.f_0);
						TASK::CLEAR_PED_TASKS(Local_544.f_0);
						if (__LIB_1__::func_183(Local_552.f_0))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_552.f_0, 5f);
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_544.f_0, Local_552.f_0))
							{
								func_58(Local_544.f_0, &Local_552, -1);
							}
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_539.f_0, Local_552.f_0))
							{
								func_58(Local_539.f_0, &Local_552, 0);
							}
							while (!PED::IS_PED_SITTING_IN_VEHICLE(Local_544.f_0, Local_552.f_0) || !PED::IS_PED_SITTING_IN_VEHICLE(Local_539.f_0, Local_552.f_0))
							{
								SYSTEM::WAIT(0);
							}
						}
					}
					if (__LIB_1__::func_197(Local_539.f_0))
					{
						AUDIO::STOP_PED_SPEAKING(Local_539.f_0, true);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_539.f_0, true);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_539.f_0, false))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_539.f_0, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_539.f_0))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_539.f_0);
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_539.f_0, 1, 2f, 0f, -4f, 0f, 0.21f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_539.f_0, 20), true, true, true, false, true);
							}
							ENTITY::SET_ENTITY_HEALTH(Local_539.f_0, 0, 0);
						}
					}
					if (__LIB_1__::func_197(Local_544.f_0))
					{
						AUDIO::STOP_PED_SPEAKING(Local_544.f_0, true);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_544.f_0, true);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_544.f_0, false))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_544.f_0, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_544.f_0))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_544.f_0);
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_544.f_0, 1, 2f, 0f, -4f, 0f, 0.21f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_544.f_0, 20), true, true, true, false, true);
							}
						}
						ENTITY::SET_ENTITY_HEALTH(Local_544.f_0, 0, 0);
					}
					if (__LIB_1__::func_183(Local_552.f_0))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_552.f_0, 1, 2f, 1f, -4f, 0f, 0.21f, 0f, 0, true, true, true, false, true);
					}
					SYSTEM::WAIT(750);
					fLocal_281 = 10f;
					fLocal_284 = 10f;
					iLocal_226 = 2;
				}
				break;
			case 4:
				if (iLocal_226 == 1)
				{
					if (__LIB_1__::func_183(Local_550.f_0))
					{
						if (__LIB_1__::func_197(Local_531.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
							{
								func_58(Local_531.f_0, &Local_550, 0);
							}
						}
					}
					if (!__LIB_0__::func_295())
					{
						if (__LIB_1__::func_183(Local_550.f_0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
							{
								func_58(PLAYER::PLAYER_PED_ID(), &Local_550, -1);
							}
							__LIB_10__::func_701(Local_550.f_0, Local_589, 221.0758f, 0, 1);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_264 == 0)
						{
							if (iLocal_225 == 5)
							{
								if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
									iLocal_264 = 1;
								}
							}
						}
					}
					iLocal_239 = 1;
					iLocal_260 = 1;
					iLocal_226 = 2;
				}
				break;
			case 5:
				if (iLocal_226 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
				}
				break;
			case 7:
				if (iLocal_226 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					iLocal_226 = 2;
				}
				break;
			default:
				break;
			}
	}
}

void func_3(int iParam0, float fParam1)//Position - 0xB9B
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_96 = false;
	if (!bLocal_78)
	{
		if (bLocal_77)
		{
			__LIB_11__::func_121();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_78 = true;
		}
	}
	else if (!bLocal_77)
	{
		__LIB_11__::func_126();
		bLocal_78 = false;
	}
	if (bLocal_77)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_71)
	{
		if (iLocal_66)
		{
			fLocal_123 = 0f;
		}
		else
		{
			fLocal_123 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_11__::func_140(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_76 = 1;
					}
					else
					{
						iLocal_76 = 0;
					}
				}
				fLocal_120 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_121) * fLocal_123));
				if (iLocal_75)
				{
					func_39(iParam0, fLocal_120);
					func_38(iParam0, fLocal_130);
					if (fLocal_125 > 1000f)
					{
						if (iLocal_162 == 0)
						{
							func_37(iParam0, fLocal_130);
						}
						fVar0 = ((fLocal_120 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_162) * 2000f));
						func_36(iParam0, fVar0, fLocal_124);
						iLocal_162++;
						if (iLocal_162 > 2)
						{
							fLocal_125 = 0f;
						}
					}
					else
					{
						iLocal_162 = 0;
						fLocal_125 = (fLocal_125 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_120 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_83)
		{
			if (!iLocal_65)
			{
				func_32(iParam0, ((fParam1 * fLocal_121) * fLocal_123), 0);
				if (!iLocal_86)
				{
				}
				iLocal_86 = 0;
			}
			if (bLocal_68)
			{
				func_28(iParam0);
			}
			if (!iLocal_65)
			{
				func_11(iParam0, ((fParam1 * fLocal_121) * fLocal_123), 0);
			}
		}
		if (iLocal_73)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_200 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_166 = { ENTITY::GET_ENTITY_COORDS(iLocal_200, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_200, &fLocal_104, &fLocal_105, &fLocal_106, &fLocal_107);
				}
			}
			iLocal_73 = 0;
		}
		if (iLocal_72)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				__LIB_11__::func_122(iLocal_201);
				iLocal_201 = iLocal_200;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_201, Local_166, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_201, fLocal_104, fLocal_105, fLocal_106, fLocal_107);
			}
			fLocal_119 = fLocal_122;
			iLocal_65 = 1;
			iLocal_72 = 0;
		}
		if (iLocal_65)
		{
			while (!func_4(&iParam0, fLocal_119))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_66 = 1;
		}
		if (iLocal_79)
		{
			iLocal_79 = 0;
		}
	}
}

int func_4(int iParam0, float fParam1)//Position - 0xE36
{
	if (!iLocal_80)
	{
		iLocal_65 = 1;
		func_6();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_149 == -1)
			{
				while (!func_5(iParam0, iLocal_149, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_70)
				{
					iLocal_66 = 1;
					fLocal_123 = 0f;
					iLocal_150 = 0;
					iLocal_152 = 0;
					iLocal_151 = 0;
					iLocal_146 = 0;
					iLocal_147 = 0;
					iLocal_148 = 0;
					iLocal_153 = 0;
					iLocal_154 = 0;
					iLocal_155 = 0;
				}
			}
		}
		iLocal_80 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_121) * fLocal_123));
				func_5(iParam0, iLocal_149, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_120 = fParam1;
		iLocal_156 = 0;
		iLocal_159 = 0;
		fLocal_135 = 0f;
		fLocal_134 = 0f;
		func_11(*iParam0, ((1f * fLocal_121) * fLocal_123), 1);
		func_32(*iParam0, ((1f * fLocal_121) * fLocal_123), 1);
		func_28(*iParam0);
		if ((iLocal_153 == 0 && iLocal_154 == 0) && iLocal_155 == 0)
		{
			iLocal_66 = 0;
			iLocal_65 = 0;
			iLocal_80 = 0;
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xF68
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_179);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_179))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_179, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_157 && iParam1 != iLocal_158)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_179, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_179, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_179, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_179, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_179))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_179);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_179, 10f, 786603);
					}
					else if (iParam1 != iLocal_157 && iParam1 != iLocal_158)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_179, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_179, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_179, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_179, true);
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

void func_6()//Position - 0x114E
{
	func_9();
	func_8();
	func_7();
}

void func_7()//Position - 0x1162
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_198[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_198[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_198[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_198[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_198[iVar0]));
			}
		}
		iLocal_143[iVar0] = 0;
		if (!bLocal_77 && !bLocal_90)
		{
			if (iLocal_142[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_142[iVar0], &cLocal_179);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_191[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191[iVar0]);
		}
		iVar0++;
	}
}

void func_8()//Position - 0x1259
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_197[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_197[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_197[iVar0]));
			}
		}
		iLocal_145[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_190[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_190[iVar0]);
		}
		iVar0++;
	}
	iLocal_151 = 0;
	iLocal_148 = 0;
}

void func_9()//Position - 0x12D6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_195[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_195[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_195[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_195[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_195[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_195[iVar0]));
			}
		}
		if (!bLocal_77 && !bLocal_90)
		{
			if (iLocal_139[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_139[iVar0], &cLocal_179);
			}
		}
		iLocal_140[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (!iLocal_189[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_189[iVar0]);
		}
		iVar0++;
	}
	iLocal_150 = 0;
	iLocal_146 = 0;
}

void func_11(int iParam0, float fParam1, bool bParam2)//Position - 0x13EC
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
		iVar0 = iLocal_152;
		while (iVar0 < 50)
		{
			if (iLocal_143[iVar0] != 99)
			{
				if (iLocal_143[iVar0] == 0)
				{
					if (iLocal_142[iVar0] > 0)
					{
						if (!iLocal_65)
						{
							if (fLocal_120 > (fLocal_112[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_11__::func_110(iLocal_191[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_144[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_191[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_144[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_144[iVar0]), 1);
								iLocal_143[iVar0]++;
								iLocal_154++;
							}
						}
						else
						{
							fVar6 = (fLocal_120 - fLocal_112[iVar0]);
							fVar6 = (fVar6 * fLocal_113[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_26(iLocal_142[iVar0]))
								{
									if (__LIB_11__::func_110(iLocal_191[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_144[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_191[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_144[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_144[iVar0]), 1);
									iLocal_143[iVar0]++;
									iLocal_154++;
								}
								else
								{
									iLocal_143[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_143[iVar0] = 99;
					}
				}
				else if (iLocal_143[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_142[iVar0], &cLocal_179);
					if (BitTest(iLocal_144[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123());
					}
					else if (!bLocal_92 && ((!BitTest(iLocal_144[iVar0], 2) && bVar10) || (BitTest(iLocal_144[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_24());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_24());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_191[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_191[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_142[iVar0], &cLocal_179))
							{
								if (fLocal_120 >= (fLocal_112[iVar0] - (fLocal_133 * fParam1)))
								{
									if ((iLocal_79 || bParam2) || (!bLocal_96 && !func_23(Local_165[iVar0 /*3*/], Var5, 5f, fLocal_131)))
									{
										if (iLocal_75)
										{
											func_22(Local_165[iVar0 /*3*/], Var5, fLocal_124);
										}
										iLocal_198[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_191[iVar0], Local_165[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_191[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_198[iVar0], 0);
										}
										if (iLocal_88 && !BitTest(iLocal_144[iVar0], 0))
										{
											func_21(iLocal_198[iVar0]);
										}
										if (BitTest(iLocal_144[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_198[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_198[iVar0], Local_165[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_198[iVar0], fLocal_108[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_191[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_191[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_198[iVar0], 5f);
										}
										if (!BitTest(iLocal_144[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_198[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_198[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_198[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191[iVar0]);
										iLocal_154 = (iLocal_154 - 1);
										iLocal_143[iVar0]++;
										bLocal_96 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_198[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_198[iVar0], Local_165[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_198[iVar0], fLocal_108[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_191[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_191[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_198[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_198[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191[iVar0]);
							iLocal_154 = (iLocal_154 - 1);
							iLocal_143[iVar0]++;
						}
					}
				}
				else if (iLocal_143[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_142[iVar0], &cLocal_179);
					if (!BitTest(iLocal_144[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_144[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123());
							iVar13 = 2;
						}
						else if (!bLocal_92 && ((!BitTest(iLocal_144[iVar0], 2) && bVar10) || (BitTest(iLocal_144[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_24());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_24());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_198[iVar0], false))
						{
							if (!bLocal_96 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_198[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_198[iVar0], true), Var5) < 10000f || bParam2) || iLocal_79)
									{
										func_19(&(iLocal_198[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_144[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
					{
						if (fLocal_120 >= fLocal_112[iVar0])
						{
							if (4 > iLocal_147)
							{
								fVar6 = (fLocal_120 - fLocal_112[iVar0]);
								fVar6 = (fVar6 * fLocal_113[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_142[iVar0], &cLocal_179))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_142[iVar0], &cLocal_179))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_198[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_142[iVar0], fVar6, &cLocal_179) };
										if (((!func_23(Var3, Var5, 5f, fLocal_131) && func_23(Var4, Var5, 5f, fLocal_131)) && !iLocal_79) && !bParam2)
										{
											if (!BitTest(iLocal_144[iVar0], 1))
											{
												func_19(&(iLocal_198[iVar0]), iVar13, 1);
											}
											iLocal_147++;
											iLocal_143[iVar0]++;
										}
										else if (((!bLocal_96 || BitTest(iLocal_144[iVar0], 1)) || iLocal_79) || bParam2)
										{
											if (func_5(&(iLocal_198[iVar0]), iLocal_142[iVar0], fVar6, 1, 0, 0, bLocal_94, iLocal_93))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_198[iVar0], (fParam1 * fLocal_113[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
												{
													if (BitTest(iLocal_144[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_198[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_198[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_198[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_191[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_198[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_144[iVar0], 1))
												{
													func_19(&(iLocal_198[iVar0]), iVar13, 1);
												}
												iLocal_147++;
												iLocal_143[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_144[iVar0], 1))
										{
											func_19(&(iLocal_198[iVar0]), iVar13, 1);
										}
										iLocal_147++;
										iLocal_143[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_144[iVar0], 1))
								{
									func_19(&(iLocal_198[iVar0]), iVar13, 1);
								}
								iLocal_147++;
								iLocal_143[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_144[iVar0], 1))
						{
							func_19(&(iLocal_198[iVar0]), iVar13, 1);
						}
						iLocal_147++;
						iLocal_143[iVar0]++;
					}
				}
				else if (iLocal_143[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_198[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_198[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_69 && !iLocal_66) && !bLocal_85) && (((!bLocal_94 && !iLocal_93) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_198[iVar0])) || func_18(iLocal_198[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (iLocal_87)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_198[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_11__::func_138(iLocal_198[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_20__::func_444(iVar2, iLocal_198[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_14(iLocal_198[iVar0]);
												iLocal_143[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_198[iVar0], (fParam1 * fLocal_113[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_198[iVar0]);
							}
						}
						else
						{
							iLocal_143[iVar0]++;
						}
					}
					else
					{
						iLocal_143[iVar0]++;
					}
				}
				else if (iLocal_143[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_198[iVar0]))
						{
							iLocal_143[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_198[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_198[iVar0], (fParam1 * fLocal_113[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_198[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_142[iVar0], &cLocal_179))
							{
								if (fLocal_120 > (fLocal_112[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_142[iVar0], &cLocal_179)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_198[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_198[iVar0]);
							}
						}
					}
					else
					{
						iLocal_143[iVar0]++;
					}
				}
				else if (iLocal_143[iVar0] == 5)
				{
					if (!iLocal_198[iVar0] == iLocal_202)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_198[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_198[iVar0]);
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
						if (!bLocal_77 && !bLocal_90)
						{
							if (iLocal_142[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_142[iVar0], &cLocal_179);
							}
						}
						if (!bLocal_67)
						{
							if (!bLocal_95)
							{
								__LIB_11__::func_122(iLocal_198[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_198[iVar0]));
						}
					}
					iLocal_147 = (iLocal_147 - 1);
					iLocal_143[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_152 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_12();
	}
}

void func_12()//Position - 0x1FC9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_198[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_198[iVar0]);
				}
			}
			func_13(iLocal_198[iVar0]);
			__LIB_11__::func_122(iLocal_198[iVar0]);
		}
		iLocal_143[iVar0] = 0;
		iLocal_144[iVar0] = 0;
		if (!bLocal_77 && !bLocal_90)
		{
			if (iLocal_142[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_142[iVar0], &cLocal_179);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_191[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191[iVar0]);
		}
		iVar0++;
	}
	iLocal_152 = 0;
}

void func_13(int iParam0)//Position - 0x2096
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
				if (bLocal_98)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_14(int iParam0)//Position - 0x2130
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_13(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_18(int iParam0)//Position - 0x2293
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_91)
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

int func_19(var uParam0, int iParam1, bool bParam2)//Position - 0x22F1
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_11__::func_123(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_188);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_24(), -1, false, false);
				if (bLocal_97)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_24());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_98)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_11__::func_109(iVar0);
			bLocal_96 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_21(int iParam0)//Position - 0x23FF
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_193 >= -1 && iLocal_194 >= -1)
	{
		while (iVar0 == iLocal_193 || iVar0 == iLocal_194)
		{
			iVar0++;
		}
	}
	else if (iLocal_193 >= -1)
	{
		if (iVar0 == iLocal_193)
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

void func_22(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x2578
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_78)
	{
		if (!func_23(Param0, Param1, fParam2, 200f))
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

int func_23(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x25EB
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_78)
		{
			if (!iLocal_65)
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

int func_24()//Position - 0x2632
{
	if (iLocal_192 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_192;
}

float func_26(int iParam0)//Position - 0x265C
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_179);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_179))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_179);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_179);
	return fVar0;
}

void func_28(int iParam0)//Position - 0x2712
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
		iVar0 = iLocal_151;
		while (iVar0 < 70)
		{
			switch (iLocal_145[iVar0])
			{
				case 0:
					if (!iLocal_190[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_164[iVar0 /*3*/], fLocal_118, fLocal_118, fLocal_118, false, true, 0))
						{
							iLocal_153++;
							iLocal_145[iVar0]++;
						}
					}
					else
					{
						iLocal_145[iVar0] = 99;
					}
					break;
				case 1:
					if (5 > iLocal_148)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_197[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_190[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_190[iVar0]))
							{
								if ((iLocal_65 || iLocal_79) || (!bLocal_96 && !func_23(Local_164[iVar0 /*3*/], Var1, 5f, fLocal_131)))
								{
									if (iLocal_75)
									{
										func_22(Local_164[iVar0 /*3*/], Var1, fLocal_124);
									}
									iLocal_197[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_190[iVar0], Local_164[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_190[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_197[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_197[iVar0], fLocal_114[iVar0], fLocal_115[iVar0], fLocal_116[iVar0], fLocal_117[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_190[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_197[iVar0], __LIB_11__::func_124()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_197[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_190[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_197[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_197[iVar0], __LIB_11__::func_125()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_197[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_197[iVar0], true);
									iLocal_153 = (iLocal_153 - 1);
									iLocal_148++;
									iLocal_145[iVar0]++;
									bLocal_96 = true;
								}
							}
						}
						else
						{
							iLocal_153 = (iLocal_153 - 1);
							iLocal_148++;
							iLocal_145[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_197[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_197[iVar0], true) };
						}
						if (fLocal_132 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_132 * fLocal_132))
						{
							if (!__LIB_20__::func_444(iLocal_197[iVar0], iParam0, 0))
							{
								if (!bLocal_67)
								{
									__LIB_11__::func_122(iLocal_197[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_197[iVar0]));
								}
								iLocal_148 = (iLocal_148 - 1);
								iLocal_145[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_145[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_151 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_29();
	}
}

void func_29()//Position - 0x2A09
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_197[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_197[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_197[iVar0], true, false);
			}
			__LIB_11__::func_122(iLocal_197[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_190[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_190[iVar0]);
		}
		iVar0++;
	}
	iLocal_151 = 0;
	iLocal_148 = 0;
}

void func_32(int iParam0, float fParam1, int iParam2)//Position - 0x2AA7
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
			fLocal_120 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_150;
		while (iVar0 < 105 && !bVar17)
		{
			if (iLocal_140[iVar0] != 99)
			{
				if (iLocal_140[iVar0] == 0)
				{
					if (iLocal_139[iVar0] > 0 && iLocal_189[iVar0] != 0)
					{
						if (!iLocal_65)
						{
							if (fLocal_120 < (fLocal_103[iVar0] + 20000f))
							{
								if (fLocal_120 >= (fLocal_103[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_11__::func_110(iLocal_189[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_141[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_189[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_141[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_141[iVar0]), 1);
									iLocal_155++;
									iLocal_140[iVar0]++;
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
								func_35(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_120 - fLocal_103[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_26(iLocal_139[iVar0]))
								{
									if (__LIB_11__::func_110(iLocal_189[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_141[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_189[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_141[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_141[iVar0]), 1);
									iLocal_155++;
									iLocal_140[iVar0]++;
								}
								else
								{
									func_35(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_35(iVar0, 1090519040);
					}
				}
				else if (iLocal_140[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_139[iVar0], &cLocal_179);
					bVar11 = false;
					if (BitTest(iLocal_141[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_92 && ((!BitTest(iLocal_141[iVar0], 2) && bVar13) || (BitTest(iLocal_141[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_24());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_24());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_189[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_189[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_139[iVar0], &cLocal_179)) && bVar11)
						{
							if (fLocal_120 >= (fLocal_103[iVar0] - (fLocal_133 * fParam1)))
							{
								if ((iLocal_79 || iParam2) || (!bLocal_96 && !func_23(Local_163[iVar0 /*3*/], Var8, 5f, fLocal_131)))
								{
									if (iLocal_75)
									{
										func_22(Local_163[iVar0 /*3*/], Var8, fLocal_124);
									}
									iLocal_195[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_189[iVar0], Local_163[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_189[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_195[iVar0], 0);
									}
									if (iLocal_88 && !BitTest(iLocal_141[iVar0], 0))
									{
										func_21(iLocal_195[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_195[iVar0], Local_163[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_195[iVar0], fLocal_99[iVar0], fLocal_100[iVar0], fLocal_101[iVar0], fLocal_102[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_189[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_189[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_195[iVar0], 5f);
									}
									if (BitTest(iLocal_141[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_195[iVar0], true);
									}
									if (!BitTest(iLocal_141[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_195[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_195[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_195[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_195[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_189[iVar0]);
									iLocal_155 = (iLocal_155 - 1);
									iLocal_140[iVar0]++;
									bLocal_96 = true;
								}
								else if (fLocal_120 > fLocal_103[iVar0])
								{
									iLocal_155 = (iLocal_155 - 1);
									func_35(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_140[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_161 || iLocal_161 == 0)) || iLocal_79) || iParam2)
					{
						if (!BitTest(iLocal_141[iVar0], 1))
						{
							if (BitTest(iLocal_141[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_11__::func_123());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_123());
								iVar15 = 2;
							}
							else if (!bLocal_92 && ((!BitTest(iLocal_141[iVar0], 2) && bVar13) || (BitTest(iLocal_141[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_24());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_24());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_195[iVar0], false))
							{
								if (!bLocal_96 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_195[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_195[iVar0], true), Var8) < 10000f || iParam2) || iLocal_79)
										{
											func_19(&(iLocal_195[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_141[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_195[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_139[iVar0], &cLocal_179);
							if (fLocal_120 >= fLocal_103[iVar0])
							{
								if (20 > iLocal_146)
								{
									fVar9 = (fLocal_120 - fLocal_103[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_139[iVar0], &cLocal_179))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_139[iVar0], &cLocal_179))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_195[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_139[iVar0], fVar9, &cLocal_179) };
											if (!func_23(Var6, Var8, 5f, fLocal_131) && func_23(Var7, Var8, 5f, fLocal_131))
											{
												if (!BitTest(iLocal_141[iVar0], 1))
												{
													func_19(&(iLocal_195[iVar0]), iVar15, 0);
												}
												func_35(iVar0, 1090519040);
											}
											else if (((!bLocal_96 || BitTest(iLocal_141[iVar0], 1)) || iLocal_79) || iParam2)
											{
												if (func_5(&(iLocal_195[iVar0]), iLocal_139[iVar0], fVar9, 1, 0, 0, 1, iLocal_93))
												{
													if (!BitTest(iLocal_141[iVar0], 1))
													{
														func_19(&(iLocal_195[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_195[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_195[iVar0], fParam1);
													iLocal_146++;
													iLocal_140[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_141[iVar0], 1))
											{
												func_19(&(iLocal_195[iVar0]), iVar15, 0);
											}
											func_35(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_139[iVar0], &cLocal_179))
									{
										if (!BitTest(iLocal_141[iVar0], 1))
										{
											func_19(&(iLocal_195[iVar0]), iVar15, 0);
										}
										func_35(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_141[iVar0], 1))
									{
										func_19(&(iLocal_195[iVar0]), iVar15, 0);
									}
									func_35(iVar0, 1090519040);
								}
							}
							else if (iLocal_76 && !iLocal_84)
							{
								if (!BitTest(iLocal_141[iVar0], 1))
								{
									func_19(&(iLocal_195[iVar0]), iVar15, 0);
								}
								func_35(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_141[iVar0], 1))
							{
								func_19(&(iLocal_195[iVar0]), iVar15, 0);
							}
							func_35(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_161 = iVar0;
					}
				}
				else if (iLocal_140[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_195[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_195[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_195[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_74)
									{
										if ((!bLocal_69 && !iLocal_66) && func_18(iLocal_195[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_160 || iLocal_160 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_11__::func_139(iLocal_195[iVar0], iVar5) || __LIB_20__::func_444(iVar5, iLocal_195[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_160 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_89 && !BitTest(iLocal_141[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_160 || iLocal_160 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_195[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_160 = iVar0;
										}
									}
									if (bVar18)
									{
										func_14(iLocal_195[iVar0]);
										iLocal_140[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_195[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_195[iVar0]);
							}
						}
						else
						{
							iLocal_140[iVar0]++;
						}
					}
					else
					{
						iLocal_140[iVar0]++;
					}
				}
				else if (iLocal_140[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_195[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_195[iVar0]))
						{
							iLocal_140[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_195[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_195[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_195[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_139[iVar0], &cLocal_179))
							{
								if (fLocal_120 > (fLocal_103[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_139[iVar0], &cLocal_179)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_195[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_195[iVar0]);
							}
						}
					}
					else
					{
						iLocal_140[iVar0]++;
					}
				}
				else if (iLocal_140[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_195[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_195[iVar0]);
					}
					iLocal_146 = (iLocal_146 - 1);
					func_35(iVar0, fVar10);
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
			iLocal_150 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_160 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_161 = 0;
		}
	}
	else
	{
		func_33();
	}
}

void func_33()//Position - 0x35E1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_195[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_195[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_195[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_195[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_195[iVar0]);
				}
			}
			func_13(iLocal_195[iVar0]);
			__LIB_11__::func_122(iLocal_195[iVar0]);
		}
		iLocal_140[iVar0] = 0;
		iLocal_141[iVar0] = 0;
		if (!bLocal_77 && !bLocal_90)
		{
			if (iLocal_139[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_139[iVar0], &cLocal_179);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (!iLocal_189[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_189[iVar0]);
		}
		iVar0++;
	}
	iLocal_150 = 0;
	iLocal_146 = 0;
}

void func_35(int iParam0, float fParam1)//Position - 0x3733
{
	int iVar0;
	if (!iLocal_189[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_189[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_195[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_195[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_195[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_195[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_195[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_98)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_67)
	{
		if (!bLocal_95)
		{
			__LIB_11__::func_109(iVar0);
			__LIB_11__::func_122(iLocal_195[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_195[iParam0]));
		}
	}
	if (!bLocal_77 && !bLocal_90)
	{
		if (iLocal_139[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_139[iParam0], &cLocal_179);
		}
	}
	iLocal_140[iParam0] = 99;
}

void func_36(int iParam0, float fParam1, float fParam2)//Position - 0x388E
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
			func_22(Var1, Var4, fVar5);
		}
	}
}

void func_37(int iParam0, float fParam1)//Position - 0x3911
{
	if (!bLocal_78)
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

void func_38(int iParam0, float fParam1)//Position - 0x395F
{
	if (!bLocal_78)
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

void func_39(int iParam0, float fParam1)//Position - 0x39AD
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_134 + 2000f);
		fVar2 = (fLocal_135 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_156 == 0)
				{
					Local_175 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_134) };
					iLocal_156++;
				}
				else if (iLocal_156 == 1)
				{
					Local_176 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_156++;
				}
				else if (!bLocal_96)
				{
					if (Local_175.f_0 > Local_176.f_0)
					{
						fVar3 = Local_175.f_0;
						Local_175.f_0 = Local_176.f_0;
						Local_176.f_0 = fVar3;
					}
					if (Local_175.f_1 > Local_176.f_1)
					{
						fVar3 = Local_175.f_1;
						Local_175.f_1 = Local_176.f_1;
						Local_176.f_1 = fVar3;
					}
					if (Local_175.f_2 > Local_176.f_2)
					{
						fVar3 = Local_175.f_2;
						Local_175.f_2 = Local_176.f_2;
						Local_176.f_2 = fVar3;
					}
					Local_175 = { Local_175 - Vector(fLocal_138, fLocal_138, fLocal_138) };
					Local_176 = { Local_176 + Vector(fLocal_138, fLocal_138, fLocal_138) };
					PATHFIND::SET_ROADS_IN_AREA(Local_175, Local_176, false, false);
					fLocal_134 = fVar1;
					iLocal_156 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_159 == 0)
			{
				Local_177 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_135) };
				iLocal_159++;
			}
			else if (iLocal_159 == 1)
			{
				Local_178 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_159++;
			}
			else if (!bLocal_96 && !bVar4)
			{
				if (Local_177.f_0 > Local_178.f_0)
				{
					fVar3 = Local_177.f_0;
					Local_177.f_0 = Local_178.f_0;
					Local_178.f_0 = fVar3;
				}
				if (Local_177.f_1 > Local_178.f_1)
				{
					fVar3 = Local_177.f_1;
					Local_177.f_1 = Local_178.f_1;
					Local_178.f_1 = fVar3;
				}
				if (Local_177.f_2 > Local_178.f_2)
				{
					fVar3 = Local_177.f_2;
					Local_177.f_2 = Local_178.f_2;
					Local_178.f_2 = fVar3;
				}
				Local_177 = { Local_177 - Vector(fLocal_138, fLocal_138, fLocal_138) };
				Local_178 = { Local_178 + Vector(fLocal_138, fLocal_138, fLocal_138) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_177, Local_178, 1);
				fLocal_135 = fVar2;
				iLocal_159 = 0;
			}
		}
	}
}

void func_43()//Position - 0x3D12
{
	iLocal_79 = 1;
}

void func_44()//Position - 0x3D1D
{
	int iVar0;
	if ((MISC::GET_GAME_TIMER() - iLocal_311) > 3)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_198)
		{
			if (iLocal_142[iVar0] > 0)
			{
				if (fLocal_282 > (fLocal_112[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_142[iVar0], sLocal_365);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_191[iVar0]);
					}
				}
				else if (fLocal_282 > (fLocal_112[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_198[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_142[iVar0], sLocal_365);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_195)
		{
			if (iLocal_139[iVar0] > 0)
			{
				if (fLocal_282 > (fLocal_103[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_139[iVar0], sLocal_365);
				}
				else if (fLocal_282 > (fLocal_103[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_195[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_139[iVar0], sLocal_365);
					}
				}
			}
			iVar0++;
		}
		iLocal_311 = MISC::GET_GAME_TIMER();
	}
}

void func_45(int iParam0, float fParam1)//Position - 0x3E3F
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_43();
			func_5(&iParam0, iLocal_149, fParam1, 1, 0, 1, 0, 0);
			fLocal_120 = fParam1;
			iVar0 = 0;
			while (iVar0 < 50)
			{
				if (iLocal_143[iVar0] > 2 && iLocal_143[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_198[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_198[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_112[iVar0]);
								fVar1 = (fVar1 * fLocal_113[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_26(iLocal_142[iVar0]))
									{
										func_5(&(iLocal_198[iVar0]), iLocal_142[iVar0], fVar1, 1, 0, 1, bLocal_94, iLocal_93);
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
						iLocal_143[iVar0] = 99;
						iLocal_147 = (iLocal_147 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 105)
			{
				if (iLocal_140[iVar0] > 2 && iLocal_140[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_195[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_195[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_103[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_26(iLocal_139[iVar0]))
									{
										func_5(&(iLocal_195[iVar0]), iLocal_139[iVar0], fVar1, 1, 0, 1, 1, iLocal_93);
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
						iLocal_140[iVar0] = 99;
						iLocal_146 = (iLocal_146 - 1);
					}
				}
				iVar0++;
			}
			iLocal_150 = 0;
			iLocal_152 = 0;
			iVar0 = 0;
			while (iVar0 < 70)
			{
				if (iLocal_145[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_197[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_197[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_197[iVar0], true, false);
							iLocal_148++;
							iLocal_145[iVar0] = 2;
						}
					}
					else
					{
						iLocal_145[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_151 = 0;
			iLocal_156 = 0;
			iLocal_159 = 0;
			fLocal_135 = fParam1;
			fLocal_134 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_167 = { Var3 - Vector(100f, 100f, 100f) };
			Local_168 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_167, Local_168, false, false);
		}
	}
}

void func_56(bool bParam0)//Position - 0x435A
{
	STREAMING::REQUEST_MODEL(Local_555.f_10);
	STREAMING::REQUEST_MODEL(Local_556.f_10);
	STREAMING::REQUEST_MODEL(Local_539.f_1);
	STREAMING::REQUEST_MODEL(Local_544.f_1);
	STREAMING::REQUEST_MODEL(Local_552.f_1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Pap1RP");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_01_A", false, -1);
	if (bParam0)
	{
		while ((((((!STREAMING::HAS_MODEL_LOADED(Local_555.f_10) || !STREAMING::HAS_MODEL_LOADED(Local_556.f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_539.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_544.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_552.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Pap1RP")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_01_A", false, -1))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_58(int iParam0, int iParam1, int iParam2)//Position - 0x447A
{
	int iVar0;
	if (__LIB_0__::func_121(iParam0) && __LIB_1__::func_183(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2, false))
		{
			__LIB_7__::func_421(iParam0, *iParam1, iParam2, 0);
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2, false);
			if (iVar0 != iParam0)
			{
				if (__LIB_0__::func_121(iVar0))
				{
					__LIB_37__::func_482(iVar0);
					func_58(iParam0, iParam1, iParam2);
				}
			}
		}
	}
}

void func_81(int iParam0)//Position - 0x4A9C
{
	iLocal_323 = 6;
	switch (iParam0)
	{
		case 2:
		case 3:
			while (!__LIB_30__::func_421("PAP1_START", 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!__LIB_30__::func_421("PAP1_BIKE", 0))
			{
				SYSTEM::WAIT(0);
			}
			if (iParam0 == 3)
			{
				while (!__LIB_30__::func_421("PAP1_RIVAL", 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
			{
				AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_CHASE");
			}
			break;
		case 4:
			func_82(3);
			break;
		case 5:
			while (!__LIB_30__::func_421("PAP1_FAIL", 0))
			{
				SYSTEM::WAIT(0);
			}
			break;
	}
}

void func_82(int iParam0)//Position - 0x4B44
{
	iLocal_323 = iParam0;
	func_83();
}

void func_83()//Position - 0x4B55
{
	if (!__LIB_0__::func_295() && bLocal_263)
	{
		switch (iLocal_323)
		{
			case 0:
				if (__LIB_30__::func_421("PAP1_START", 0))
				{
					iLocal_323 = 6;
				}
				break;
			case 1:
				if (__LIB_30__::func_421("PAP1_BIKE", 0))
				{
					iLocal_323 = 6;
				}
				break;
			case 2:
				if (__LIB_30__::func_421("PAP1_RIVAL", 0))
				{
					iLocal_323 = 6;
				}
				break;
			case 3:
				if (__LIB_30__::func_421("PAP1_STOP_TO_RADIO", 1))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
					iLocal_323 = 4;
					iLocal_324 = MISC::GET_GAME_TIMER();
				}
				break;
			case 4:
				if (__LIB_10__::func_638(iLocal_324, 5000))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
					iLocal_323 = 6;
				}
				break;
			case 5:
				if (__LIB_30__::func_421("PAP1_FAIL", 0))
				{
					iLocal_323 = 6;
				}
				break;
			default:
				break;
			}
	}
}

void func_86(int iParam0)//Position - 0x4C63
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 1:
				if (__LIB_1__::func_197(Local_531.f_0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_531.f_0, Local_531.f_3, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_531.f_0, Local_531.f_6);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
					func_190("waive_comeback_f", 1000f, -8f, -1, 528384, 0.589f, 1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_531.f_0, false, false);
				}
				break;
			case 3:
				if (__LIB_1__::func_183(Local_550.f_0))
				{
					__LIB_10__::func_701(Local_550.f_0, -1736.5334f, -508.0815f, 37.98f, 192.1f, 0, 1);
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
					{
						func_58(PLAYER::PLAYER_PED_ID(), &Local_550, -1);
					}
					if (__LIB_1__::func_197(Local_531.f_0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
						{
							func_58(Local_531.f_0, &Local_550, 0);
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 1000f, -4f, -1, 17, 0f, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_531.f_0, false, false);
						}
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					SYSTEM::WAIT(0);
				}
				fLocal_293 = 1f;
				fLocal_281 = 10f;
				fLocal_284 = 10f;
				if (__LIB_1__::func_183(Local_551.f_0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0, 1, sLocal_365, true);
						VEHICLE::SET_PLAYBACK_SPEED(Local_551.f_0, fLocal_293);
					}
					else
					{
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0, 75250f);
					func_45(Local_551.f_0, 75250f);
					iLocal_84 = 1;
					func_44();
					func_43();
					func_3(Local_551.f_0, fLocal_293);
				}
				if (__LIB_1__::func_183(Local_552.f_0))
				{
					func_189(&Local_552, 1, "Pap1RP", (75250f - 60550f), 1, 0, 1, 0, 0);
					VEHICLE::SET_PLAYBACK_SPEED(Local_552.f_0, fLocal_293);
					iLocal_343 = 1;
					iLocal_313 = 4;
				}
				if (__LIB_1__::func_183(Local_550.f_0))
				{
					ENTITY::SET_ENTITY_QUATERNION(Local_550.f_0, 0.2702f, 0.0882f, 0.8814f, -0.3772f);
					func_189(&Local_550, 1, "Pap1PV", 250f, 1, 0, 1, 0, 0);
					VEHICLE::SET_PLAYBACK_SPEED(Local_552.f_0, fLocal_293);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, false, false, false, false, false, false, 0);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
				break;
			case 4:
				__LIB_10__::func_701(Local_550.f_0, -1586.6477f, -533.9604f, 34.4623f, 307.1855f, 0, 1);
				if (__LIB_1__::func_183(Local_550.f_0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_550.f_0, 5f);
				}
				if (__LIB_1__::func_183(Local_550.f_0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
					{
						func_58(PLAYER::PLAYER_PED_ID(), &Local_550, -1);
					}
					if (__LIB_1__::func_197(Local_531.f_0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
						{
							func_58(Local_531.f_0, &Local_550, 0);
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 1000f, -2f, -1, 17, 0f, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_531.f_0, false, false);
						}
					}
				}
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 35f, true, false, false, false, false, false, 0);
				SYSTEM::WAIT(0);
				fLocal_281 = 10f;
				fLocal_284 = 10f;
				break;
			case 5:
				__LIB_10__::func_701(Local_550.f_0, Local_589, 221.0758f, 0, 1);
				__LIB_32__::func_565(&Local_576);
				func_94();
				while (!__LIB_18__::func_170(1, 1093140480, 0))
				{
					__LIB_32__::func_565(&Local_576);
					func_94();
					SYSTEM::WAIT(0);
				}
				break;
		}
		if (iParam0 != 0 && iParam0 != 1)
		{
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				func_87();
			}
		}
	}
}

void func_87()//Position - 0x5003
{
	if (!PED::IS_PED_GROUP_MEMBER(Local_531.f_0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		PED::SET_PED_AS_GROUP_MEMBER(Local_531.f_0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	if (PED::IS_PED_IN_GROUP(Local_531.f_0))
	{
		PED::SET_PED_CONFIG_FLAG(Local_531.f_0, 167, true);
		PED::SET_GROUP_FORMATION(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0);
		PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 1.5f, -1f, -1f);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_531.f_0, 0);
	}
}

void func_94()//Position - 0x53B0
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_275 = 1;
			}
			else
			{
				iLocal_275 = 0;
			}
			__LIB_39__::func_905(sLocal_352, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 52);
		}
	}
	if (__LIB_0__::func_121(Local_531.f_0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_353, Local_531.f_0, 0);
		}
	}
}

int func_189(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1DF66
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam5)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, sParam2, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_157 && iParam1 != iLocal_158)
						{
							if (bParam8)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 2 | 4, 0, 786603);
							}
							else if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam3);
						if (bParam6)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam3 - fVar0));
					if (!bParam4)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
					}
					if (bParam6)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam5)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, sParam2, 10f, 786603);
					}
					else if (iParam1 != iLocal_157 && iParam1 != iLocal_158)
					{
						if (bParam8)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 2 | 4, 0, 786603);
						}
						else if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam3);
					if (bParam6)
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

int func_190(char* sParam0, float fParam1, float fParam2, int iParam3, int iParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x1E13E
{
	int iVar0;
	if (__LIB_1__::func_197(Local_531.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, &cLocal_564, &cLocal_568, 3))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					sParam0 = "waive_comeback_b";
				}
				else if (iVar0 == 1)
				{
					sParam0 = "waive_comeback_f";
				}
				else if (iVar0 == 2)
				{
					sParam0 = "waive_help_a";
				}
				else if (iVar0 == 3)
				{
					sParam0 = "waive_help_b";
				}
			}
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) > 23)
			{
			}
			StringCopy(&cLocal_568, sParam0, 24);
			TASK::TASK_PLAY_ANIM(Local_531.f_0, &cLocal_564, &cLocal_568, fParam1, fParam2, iParam3, iParam4, fParam5, bParam6, bParam7, false);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_194()//Position - 0x1E2E4
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	sVar0 = 0;
	func_83();
	switch (iLocal_226)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_296();
			}
			func_228();
			if (iLocal_279 == 3)
			{
				iLocal_245 = 0;
				StringCopy(&Local_560, "PAP1_FAIL2", 24);
			}
			else if (iLocal_279 == 8)
			{
				iLocal_245 = 0;
				StringCopy(&Local_560, "PAP1_FAIL2", 24);
			}
			else if (iLocal_279 == 2 || iLocal_279 == 6)
			{
				iLocal_245 = 0;
				StringCopy(&Local_560, "PAP1_FAIL1", 24);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_1__::func_197(Local_531.f_0))
				{
					if (((iLocal_279 == 7 || iLocal_279 == 3) || iLocal_279 == 8) || iLocal_279 == 1)
					{
						if (PED::IS_PED_GROUP_MEMBER(Local_531.f_0, __LIB_0__::func_399()))
						{
							if (!PED::IS_PED_RAGDOLL(Local_531.f_0))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
						{
							if (__LIB_0__::func_121(Local_553.f_0))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_553.f_0, Local_531.f_0))
								{
									ENTITY::DETACH_ENTITY(Local_553.f_0, true, true);
									func_226(-8f);
								}
							}
						}
						PED::SET_PED_FLEE_ATTRIBUTES(Local_531.f_0, 2, false);
						TASK::TASK_SMART_FLEE_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						PED::SET_PED_KEEP_TASK(Local_531.f_0, true);
					}
				}
				if (__LIB_1__::func_183(Local_551.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0);
					}
				}
				if (__LIB_1__::func_197(Local_532.f_0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_532.f_0, false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_532.f_0, iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					PED::SET_PED_KEEP_TASK(Local_532.f_0, true);
				}
				if (__LIB_1__::func_197(Local_533.f_0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(Local_533.f_0, 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_533.f_0, 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_533.f_0, 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_533.f_0, 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_533.f_0, 64, false);
					if (__LIB_1__::func_183(Local_551.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_551.f_0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_551.f_0, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, true);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_533.f_0, iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_533.f_0, iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					PED::SET_PED_KEEP_TASK(Local_533.f_0, true);
				}
				bVar2 = false;
				if (__LIB_1__::func_183(Local_552.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_552.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_552.f_0);
						bVar2 = true;
					}
				}
				if (__LIB_1__::func_197(Local_539.f_0))
				{
					if (bVar2)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_539.f_0, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_539.f_0, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
					}
					PED::SET_PED_KEEP_TASK(Local_539.f_0, true);
				}
				if (__LIB_1__::func_197(Local_544.f_0))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(Local_544.f_0, 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_544.f_0, 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_544.f_0, 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_544.f_0, 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_544.f_0, 64, false);
					if (__LIB_1__::func_183(Local_552.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(Local_544.f_0, Local_552.f_0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_552.f_0, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, true);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_544.f_0, iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_544.f_0, iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					PED::SET_PED_KEEP_TASK(Local_544.f_0, true);
				}
			}
			func_82(5);
			switch (iLocal_279)
			{
				case 0:
					break;
				case 1:
					sVar0 = "PAP1_F1";
					break;
				case 2:
					sVar0 = "PAP1_F2";
					break;
				case 3:
					sVar0 = "PAP1_F7";
					break;
				case 4:
					sVar0 = "PAP1_F3";
					break;
				case 5:
					sVar0 = "PAP1_F4";
					break;
				case 6:
					sVar0 = "PAP1_F5";
					break;
				case 7:
					sVar0 = "PAP1_F6";
					break;
				case 8:
					sVar0 = "PAP1_F9";
					break;
			}
			if (iLocal_279 == 0)
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sVar0, 1);
			}
			iLocal_226 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_213(1);
				func_678();
			}
			else if (__LIB_1__::func_197(Local_531.f_0))
			{
				if (!iLocal_245)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_771();
					}
					if (iLocal_279 == 8)
					{
						if (__LIB_41__::func_635(&uLocal_366, "PAP2AUD", "PAP2_FLEE", 4, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_245 = 1;
						}
					}
					else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, &Local_560, 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_245 = 1;
					}
				}
				if (PED::IS_PED_GROUP_MEMBER(Local_531.f_0, __LIB_0__::func_399()))
				{
					if (!PED::IS_PED_RAGDOLL(Local_531.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
					}
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
				{
					PED::SET_PED_RESET_FLAG(Local_531.f_0, 309, true);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0);
				}
				else
				{
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
				}
			}
			break;
	}
}

void func_213(bool bParam0)//Position - 0x1F02D
{
	__LIB_20__::func_240(&Local_557, bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_554.f_0))
	{
		OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Local_554.f_0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
	{
		OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Local_553.f_0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_555.f_0))
	{
		OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Local_555.f_0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_556.f_0))
	{
		OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Local_556.f_0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_339))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_339, 3);
	}
	__LIB_20__::func_240(&iLocal_339, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_340, 3);
	}
	__LIB_20__::func_240(&iLocal_340, 0);
	if (__LIB_1__::func_197(Local_531.f_0))
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_531.f_0, __LIB_0__::func_399()))
		{
			PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_531.f_0, __LIB_0__::func_399(), false);
			PED::SET_PED_NEVER_LEAVES_GROUP(Local_531.f_0, false);
			if (!PED::IS_PED_RAGDOLL(Local_531.f_0))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(Local_531.f_0, 0, 0);
			}
		}
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_531.f_0, false, 1);
		PED::SET_PED_KEEP_TASK(Local_531.f_0, true);
	}
	__LIB_20__::func_241(&Local_531, bParam0);
	if (__LIB_1__::func_197(Local_532.f_0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_532.f_0, false, 1);
		PED::SET_PED_KEEP_TASK(Local_532.f_0, true);
	}
	__LIB_20__::func_241(&Local_532, bParam0);
	if (__LIB_1__::func_197(Local_533.f_0))
	{
		PED::SET_PED_KEEP_TASK(Local_533.f_0, true);
	}
	__LIB_20__::func_241(&Local_533, bParam0);
	if (__LIB_1__::func_197(Local_539.f_0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_539.f_0, false, 1);
		PED::SET_PED_KEEP_TASK(Local_539.f_0, true);
	}
	__LIB_20__::func_241(&Local_539, bParam0);
	if (__LIB_1__::func_197(Local_544.f_0))
	{
		PED::SET_PED_KEEP_TASK(Local_544.f_0, true);
	}
	__LIB_20__::func_241(&Local_544, bParam0);
	if (__LIB_1__::func_183(Local_550.f_0))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_550.f_0, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_550.f_0, true);
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_550.f_0, 0f);
		VEHICLE::SET_VEHICLE_STRONG(Local_550.f_0, false);
	}
	__LIB_32__::func_566(&Local_550, bParam0);
	if (__LIB_1__::func_183(Local_551.f_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_551.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_551.f_0, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_551.f_0, true);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_551.f_0, true);
	}
	__LIB_32__::func_566(&Local_551, bParam0);
	if (__LIB_1__::func_183(Local_552.f_0))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_552.f_0, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_552.f_0, true);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_552.f_0, true);
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_552.f_0, 0f);
	}
	__LIB_32__::func_566(&Local_552, bParam0);
}

void func_226(float fParam0)//Position - 0x1F4DE
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
	{
		TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "idle", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 3))
	{
		TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "dialog_pap", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_left_pap", 3))
	{
		TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "hurry_up_left_pap", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_right_pap", 3))
	{
		TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "hurry_up_right_pap", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
	{
		TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, &Local_558, fParam0);
	}
}

void func_228()//Position - 0x1F5AA
{
	__LIB_0__::func_523(&(Local_532.f_2));
	__LIB_0__::func_523(&(Local_551.f_2));
	__LIB_0__::func_523(&(Local_539.f_2));
	__LIB_0__::func_523(&(Local_552.f_2));
	__LIB_0__::func_523(&iLocal_276);
}

void func_230()//Position - 0x1F5FD
{
	__LIB_0__::func_84(500, 1);
	__LIB_24__::func_951(50, 1, 1);
	func_231(102, 1);
	func_678();
}

void func_231(int iParam0, bool bParam1)//Position - 0x1F620
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__::func_205();
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
	__LIB_38__::func_136(iVar0, 0);
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
	__LIB_32__::func_577(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_339(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_26__::func_250());
	func_257();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_35__::func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__::func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__::func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__::func_943(iParam0, 0, 0);
	}
	__LIB_0__::func_533();
}

void func_257()//Position - 0x2079E
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
			iVar3 = __LIB_18__::func_168(iVar1);
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
				if (func_292(iVar1, 14, iVar2))
				{
					func_258(iVar1, 14, iVar2);
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

int func_258(int iParam0, int iParam1, int iParam2)//Position - 0x2085F
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_292(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_258(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_258(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__::func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_285(iParam0, iVar0, &iVar7, 0))
	{
		func_260(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_259(iParam0, iVar0, &iVar7))
	{
		func_260(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_259(int iParam0, int iParam1, int iParam2)//Position - 0x20A1B
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_292(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_260(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x20AA7
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
										func_260(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_260(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_266(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_285(iParam0, iVar10, &iVar4, 1))
							{
								func_260(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_260(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_260(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_260(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_260(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_260(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_260(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_260(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_260(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_260(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_285(iParam0, iVar10, &iVar4, 0))
		{
			func_260(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_259(iParam0, iVar10, &iVar4))
		{
			func_260(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_266(int iParam0, int iParam1, int iParam2)//Position - 0x21AE4
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
				if (func_292(iParam0, iParam1, iVar0))
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
				if (func_292(iParam0, iParam1, iVar1))
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

int func_285(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23E36
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_292(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0, int iParam1, int iParam2)//Position - 0x26A11
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
				if (!func_292(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_292(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_292(iParam0, 14, iVar4))
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
			if (!func_292(iParam0, 14, uVar8[iVar7]))
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

void func_351()//Position - 0x2E0DA
{
	switch (iLocal_226)
	{
		case 0:
			if (!bLocal_263)
			{
				if (__LIB_0__::func_295())
				{
					if (__LIB_0__::func_121(Local_550.f_0))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_550.f_0, true, false);
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
						{
							func_58(PLAYER::PLAYER_PED_ID(), &Local_550, -1);
						}
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				iLocal_226 = 2;
			}
			else
			{
				func_356();
				__LIB_7__::func_279(1, 1, 0, 0, 0, 0, 0);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (__LIB_18__::func_170(1, 1093140480, 0))
				{
					if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_332 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_331 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
						bLocal_273 = true;
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_352, 0, 0, 0);
					if (__LIB_0__::func_121(Local_553.f_0))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_553.f_0))
						{
							ENTITY::DETACH_ENTITY(Local_553.f_0, true, true);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_553.f_0, sLocal_354, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_531.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_531.f_0, sLocal_353, 0, 0, 0);
					}
					if (__LIB_0__::func_121(Local_550.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_550.f_0, sLocal_356, 0, 0, 0);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 0f, 0);
					RECORDING::REPLAY_START_EVENT(0);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					__LIB_0__::func_84(800, 0);
					func_353(Local_589, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1493.301f, -198.53954f, 47.397526f, -1492.8462f, -185.49397f, 52.481934f, 6f, true, false, false, false, false, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_589, 4f, 0);
					MISC::CLEAR_AREA(Local_589, 4f, true, true, false, false);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					CUTSCENE::SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(Local_550.f_1);
					iLocal_226 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(Local_550.f_0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_352, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0, -1);
					}
					if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_273)
						{
							PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_332, true);
							PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_331);
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 4096, iLocal_331);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_356, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_550.f_0, 5f);
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_550.f_0, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (__LIB_0__::func_121(Local_550.f_0))
				{
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_550.f_0, false);
				}
				iLocal_226 = 2;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() >= 26500)
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			else
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (bLocal_263)
				{
					__LIB_39__::func_444(1, 1, 1, 1);
				}
				if (__LIB_0__::func_121(Local_531.f_0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_531.f_0, -1478.2562f, -183.1669f, 47.8236f, false, false, true);
					__LIB_20__::func_240(&Local_554, 1);
					__LIB_20__::func_240(&Local_553, 1);
					__LIB_20__::func_241(&Local_531, 1);
				}
				if (__LIB_0__::func_121(Local_550.f_0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0, -1);
					}
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_550.f_0, false);
				}
				__LIB_0__::func_54(1, 1);
				func_352(6);
			}
			break;
	}
}

void func_352(int iParam0)//Position - 0x2E41D
{
	iLocal_224 = iParam0;
	iLocal_226 = 0;
}

void func_353(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2E42E
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_292(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_260(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_292(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_260(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_292(PLAYER::PLAYER_PED_ID(), 8, 1) || func_292(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_260(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_292(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_260(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_46 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_46 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_356()//Position - 0x2E63E
{
	if (__LIB_1__::func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_589, 100f))
	{
		if (!__LIB_4__::func_234())
		{
			CUTSCENE::REQUEST_CUTSCENE(&Local_576, 8);
			func_94();
			iLocal_274 = 1;
		}
	}
	else if (iLocal_274)
	{
		if (!__LIB_1__::func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_589, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_274 = 0;
				iLocal_275 = 0;
			}
		}
		else
		{
			func_94();
		}
	}
	if (iLocal_274)
	{
		if (iLocal_275)
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_274 = 0;
				iLocal_275 = 0;
			}
		}
		if (__LIB_4__::func_234())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_274 = 0;
		}
	}
}

void func_359()//Position - 0x2E70F
{
	func_83();
	func_356();
	switch (iLocal_226)
	{
		case 0:
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
			}
			iLocal_252 = 0;
			iLocal_246 = 1;
			iLocal_226 = 1;
			break;
		case 1:
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				fLocal_283 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_531.f_0, true));
				func_370();
				if (iLocal_344 == 0)
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						iLocal_226 = 2;
					}
				}
			}
			if (__LIB_1__::func_183(Local_551.f_0))
			{
				func_368();
			}
			func_362();
			func_361();
			break;
		case 2:
			if (__LIB_0__::func_405("PAP1_09", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("PAP1_09");
			}
			__LIB_0__::func_296();
			func_352(4);
			break;
	}
}

void func_361()//Position - 0x2E7F7
{
	if (!iLocal_259)
	{
		if (__LIB_1__::func_197(Local_544.f_0))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_544.f_0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_544.f_0, false);
				if (ENTITY::GET_ENTITY_HEALTH(Local_544.f_0) > 50)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_544.f_0, 50, 0);
				}
				PED::SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_544.f_0, 30000f);
				iLocal_259 = 1;
			}
		}
		else
		{
			iLocal_259 = 1;
		}
	}
}

void func_362()//Position - 0x2E850
{
	int iVar0;
	if (__LIB_1__::func_197(Local_539.f_0))
	{
		if (!bLocal_257)
		{
			if (!iLocal_255)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 3))
				{
					TASK::STOP_ANIM_TASK(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 3))
				{
					TASK::STOP_ANIM_TASK(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", -8f);
				}
				if (!PED::IS_PED_RAGDOLL(Local_539.f_0))
				{
					TASK::CLEAR_PED_TASKS(Local_539.f_0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_539.f_0, 3);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_539.f_0, 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_539.f_0, 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_539.f_0, 64, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_539.f_0, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_539.f_0, 17, true);
					PED::SET_PED_CAN_BE_TARGETTED(Local_539.f_0, true);
					PED::SET_PED_AS_ENEMY(Local_539.f_0, true);
					if (ENTITY::GET_ENTITY_HEALTH(Local_539.f_0) >= 137)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_539.f_0, 136, 0);
					}
					STREAMING::REQUEST_ANIM_DICT(&cLocal_580);
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_580))
					{
						PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_539.f_0, 0, &cLocal_580, "idle", 8f, true);
						PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_539.f_0, 1, &cLocal_580, "walk", 8f, true);
						PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_539.f_0, 2, &cLocal_580, "run", 8f, true);
					}
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_539.f_0, 2f);
					TASK::TASK_REACT_AND_FLEE_PED(Local_539.f_0, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(Local_539.f_0, true);
					iLocal_300 = MISC::GET_GAME_TIMER();
					iLocal_255 = 1;
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_539.f_0, 2f);
				if (iLocal_333 < 6)
				{
					if (__LIB_0__::func_530(Local_539.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 25f, 1))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_539.f_0))
						{
							if (!PED::IS_PED_RAGDOLL(Local_539.f_0))
							{
								iVar0 = 750;
								if (iLocal_333 > 0)
								{
									MISC::GET_RANDOM_INT_IN_RANGE(2500, 4000);
								}
								if (__LIB_10__::func_638(iLocal_300, iVar0))
								{
									if (!iLocal_256)
									{
										__LIB_0__::func_202(&uLocal_366, 4);
										iLocal_256 = 1;
									}
									__LIB_37__::func_483(&Local_539, "PAP1_DQAA", "Paparazzo1RivalPap", 11);
									if (!PED::IS_PED_HEADTRACKING_PED(Local_539.f_0, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_539.f_0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
									}
									iLocal_300 = MISC::GET_GAME_TIMER();
									iLocal_333++;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_368()//Position - 0x2ECE3
{
	if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_551.f_0, 120f, 1))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(Local_551.f_0))
		{
			if (__LIB_1__::func_197(Local_532.f_0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_532.f_0, false, 1);
			}
			__LIB_20__::func_241(&Local_532, 1);
			__LIB_20__::func_241(&Local_533, 1);
			__LIB_32__::func_566(&Local_551, 1);
		}
	}
}

void func_370()//Position - 0x2ED57
{
	int iVar0;
	iVar0 = func_502();
	if (iVar0 != iLocal_344)
	{
		func_499(iLocal_344);
		iLocal_344 = iVar0;
	}
	switch (iLocal_344)
	{
		case 0:
			func_385();
			break;
		case 1:
			func_382();
			break;
		case 2:
			func_371();
			break;
	}
}

void func_371()//Position - 0x2EDA8
{
	float fVar0;
	if (!HUD::DOES_BLIP_EXIST(Local_531.f_2))
	{
		Local_531.f_2 = __LIB_10__::func_711(Local_531.f_0, 1, 1, 5);
	}
	if (!iLocal_265)
	{
		if (func_380())
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_531.f_0, __LIB_0__::func_399()))
			{
				if (!PED::IS_PED_RAGDOLL(Local_531.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
				}
			}
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
			{
				TASK::CLEAR_PED_TASKS(Local_531.f_0);
			}
			func_379(1);
			iLocal_265 = 1;
		}
		else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(Local_550.f_0);
			if (fVar0 < 1.75f && __LIB_0__::func_508(Local_531.f_0, Local_550.f_0, 8f, 1))
			{
				if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					func_375();
				}
			}
			else if (__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
				{
					TASK::CLEAR_PED_TASKS(Local_531.f_0);
				}
			}
			func_226(-1048576000);
			if ((iLocal_224 == 1 || iLocal_224 == 2) || iLocal_224 == 3)
			{
				if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_531.f_0, 1.5f);
				}
				PED::SET_PED_RESET_FLAG(Local_531.f_0, 237, true);
			}
		}
	}
	else if (func_374())
	{
		TASK::CLEAR_PED_TASKS(Local_531.f_0);
		func_87();
		if (!__LIB_0__::func_75())
		{
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_PRTB01", 7, __LIB_30__::func_420(), 0, 0))
			{
			}
		}
		iLocal_265 = 0;
	}
	else
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_531.f_0, __LIB_0__::func_399()))
		{
			if (!PED::IS_PED_RAGDOLL(Local_531.f_0))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
			}
		}
		if (!iLocal_253)
		{
			__LIB_0__::func_210("PAP1_08", 7500, 1);
			iLocal_253 = 1;
		}
		func_379(0);
		if (__LIB_0__::func_75())
		{
			iLocal_303 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_303) > 3000)
		{
			if (fLocal_283 < 35f)
			{
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_IG6", 7, __LIB_30__::func_420(), 0, 0))
				{
					iLocal_303 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
	if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_531.f_0))
	{
		TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_531.f_0, -1, 0, 2);
	}
	func_372();
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0);
		PED::SET_PED_RESET_FLAG(Local_531.f_0, 309, true);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_351, "cam_pos_hand_override", -1000f);
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			PED::RESET_PED_MOVEMENT_CLIPSET(Local_531.f_0, 0.25f);
		}
	}
	else if (TASK::IS_PED_GETTING_UP(Local_531.f_0) || PED::IS_PED_RAGDOLL(Local_531.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 1000f, -1000f, -1, 49, 0f, false, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_553.f_0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_553.f_0, Local_531.f_0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_553.f_0, false, false);
				}
			}
		}
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_531.f_0, 0.25f);
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_531.f_0, "cam_pos_hand_override", sLocal_351, -8f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_553.f_0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_553.f_0, Local_531.f_0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_553.f_0, true, false);
				}
			}
		}
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
	}
}

void func_372()//Position - 0x2F14E
{
	if (((PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0) || PED::IS_PED_RAGDOLL(Local_531.f_0)) || ENTITY::IS_ENTITY_IN_WATER(Local_531.f_0)) || TASK::IS_PED_GETTING_UP(Local_531.f_0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, &cLocal_564, &cLocal_568, 3))
		{
			TASK::STOP_ANIM_TASK(Local_531.f_0, &cLocal_564, &cLocal_568, -8f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
		{
			TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "idle", -8f);
		}
	}
}

int func_374()//Position - 0x2F1E8
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (fLocal_283 > 8f)
	{
		return 0;
	}
	return 1;
}

void func_375()//Position - 0x2F22E
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = 131072;
	if (func_377(Local_550.f_0, ENTITY::GET_ENTITY_COORDS(Local_550.f_0, false), ENTITY::GET_ENTITY_COORDS(Local_531.f_0, false)) == 1)
	{
		bVar0 = false;
		iVar1 = 262144;
	}
	if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_531.f_0, Local_550.f_0, 0, true, bVar0))
	{
		STREAMING::REQUEST_CLIP_SET(func_376(bVar0));
		if (STREAMING::HAS_ANIM_SET_LOADED(func_376(bVar0)))
		{
			TASK::TASK_ENTER_VEHICLE(Local_531.f_0, Local_550.f_0, 20000, 0, 2f, iVar1, func_376(bVar0));
		}
	}
	else
	{
		if (bVar0)
		{
			bVar0 = false;
			iVar1 = 262144;
		}
		else
		{
			bVar0 = true;
			iVar1 = 131072;
		}
		if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_531.f_0, Local_550.f_0, 0, true, bVar0))
		{
			STREAMING::REQUEST_CLIP_SET(func_376(bVar0));
			if (STREAMING::HAS_ANIM_SET_LOADED(func_376(bVar0)))
			{
				TASK::TASK_ENTER_VEHICLE(Local_531.f_0, Local_550.f_0, 20000, 0, 2f, iVar1, func_376(bVar0));
			}
		}
	}
}

char* func_376(bool bParam0)//Position - 0x2F2FE
{
	if (bParam0)
	{
		return "clipset@rcmpaparazzo1ig_1_ds";
	}
	return "clipset@rcmpaparazzo1ig_1_ps";
}

int func_377(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x2F316
{
	float fVar0;
	struct<3> Var1;
	Var1 = { __LIB_0__::func_79(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 3f, 0f, 0f) - Param1) };
	fVar0 = __LIB_0__::func_156(Param2 - Param1, Var1);
	if (fVar0 < 0f)
	{
		return 0;
	}
	else if (fVar0 > 0f)
	{
		return 1;
	}
	return -1;
}

void func_379(int iParam0)//Position - 0x2F3A0
{
	if (((!ENTITY::IS_ENTITY_IN_WATER(Local_531.f_0) && !PED::IS_PED_RAGDOLL(Local_531.f_0)) && !TASK::IS_PED_GETTING_UP(Local_531.f_0)) && PED::IS_PED_ON_FOOT(Local_531.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, &cLocal_564, &cLocal_568, 3))
		{
			if (!PED::IS_PED_FACING_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID(), 45f))
			{
				if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1);
				}
			}
			else if (__LIB_10__::func_638(iLocal_321, 3000) || iParam0)
			{
				if (func_190(0, 1090519040, -1065353216, -1, 0, 0, 0, 0))
				{
					iLocal_321 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_321 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_380()//Position - 0x2F45B
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
	{
		return 1;
	}
	if (fLocal_283 >= 20f)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

void func_382()//Position - 0x2F4F5
{
	float fVar0;
	if (!HUD::DOES_BLIP_EXIST(Local_550.f_2))
	{
		Local_550.f_2 = __LIB_10__::func_727(Local_550.f_0, 1, 5);
	}
	if (!iLocal_249)
	{
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0, true))
		{
		}
		else
		{
			__LIB_0__::func_210("PAP1_06", 7500, 1);
			iLocal_249 = 1;
		}
	}
	else if (__LIB_0__::func_75())
	{
		iLocal_302 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 3000)
	{
		if (fLocal_283 < 20f)
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_224 == 1)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_IG5", 7, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_302 = MISC::GET_GAME_TIMER();
						}
					}
					else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_FALL", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_302 = MISC::GET_GAME_TIMER();
					}
				}
				else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CRASH", 7, __LIB_30__::func_420(), 0, 0))
				{
					iLocal_302 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (!iLocal_265)
	{
		if (func_380())
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_531.f_0, __LIB_0__::func_399()))
			{
				if (!PED::IS_PED_RAGDOLL(Local_531.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
				}
			}
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
			{
				TASK::CLEAR_PED_TASKS(Local_531.f_0);
			}
			func_379(1);
			iLocal_265 = 1;
		}
		else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
		{
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0, true))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(Local_550.f_0);
				if (fVar0 < 1.75f && __LIB_0__::func_508(Local_531.f_0, Local_550.f_0, 8f, 1))
				{
					if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
					{
						func_375();
					}
				}
				else if (__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
					{
						TASK::CLEAR_PED_TASKS(Local_531.f_0);
					}
				}
			}
			else if (__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
			{
				TASK::CLEAR_PED_TASKS(Local_531.f_0);
			}
			func_226(-1048576000);
			if ((iLocal_224 == 1 || iLocal_224 == 2) || iLocal_224 == 3)
			{
				if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					if (!__LIB_0__::func_530(Local_531.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2f, 1))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_531.f_0, 1.5f);
					}
				}
				PED::SET_PED_RESET_FLAG(Local_531.f_0, 237, true);
			}
		}
	}
	else if (func_374())
	{
		TASK::CLEAR_PED_TASKS(Local_531.f_0);
		func_87();
		if (!__LIB_0__::func_75())
		{
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_PRTB01", 7, __LIB_30__::func_420(), 0, 0))
			{
			}
		}
		iLocal_265 = 0;
	}
	else
	{
		if (PED::IS_PED_IN_GROUP(Local_531.f_0))
		{
			if (!PED::IS_PED_RAGDOLL(Local_531.f_0))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
			}
		}
		func_379(0);
		if (__LIB_0__::func_75())
		{
			iLocal_303 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_303) > 3000)
		{
			if (fLocal_283 < 30f)
			{
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_IG6", 7, __LIB_30__::func_420(), 0, 0))
				{
					iLocal_303 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
	__LIB_0__::func_400();
	if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_531.f_0))
	{
		TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_531.f_0, -1, 0, 2);
	}
	func_372();
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
	{
		PED::SET_PED_RESET_FLAG(Local_531.f_0, 309, true);
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_351, "cam_pos_hand_override", -1000f);
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			PED::RESET_PED_MOVEMENT_CLIPSET(Local_531.f_0, 0.25f);
		}
	}
	else if (TASK::IS_PED_GETTING_UP(Local_531.f_0) || PED::IS_PED_RAGDOLL(Local_531.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 1000f, -1000f, -1, 49, 0f, false, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_553.f_0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_553.f_0, Local_531.f_0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_553.f_0, false, false);
				}
			}
		}
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_531.f_0, 0.25f);
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_531.f_0, "cam_pos_hand_override", sLocal_351, -8f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_553.f_0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_553.f_0, Local_531.f_0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_553.f_0, true, false);
				}
			}
		}
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
	}
}

void func_385()//Position - 0x2FA54
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	switch (iLocal_224)
	{
		case 1:
			if (!HUD::DOES_BLIP_EXIST(Local_532.f_2))
			{
				Local_532.f_2 = __LIB_10__::func_711(Local_532.f_0, 1, 1, 5);
				HUD::SET_BLIP_SCALE(Local_532.f_2, 1f);
			}
			else
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_532.f_0))
				{
					HUD::SET_BLIP_SCALE(Local_532.f_2, 1f);
				}
				__LIB_10__::func_618(Local_532.f_2, Local_532.f_0, 225f, 0.68f, 0);
			}
			if (!iLocal_236)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
				{
					iLocal_337 = MISC::GET_GAME_TIMER();
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
				else if (__LIB_10__::func_638(iLocal_337, 500))
				{
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CHASE01", 7, 0, 0, 0))
					{
						iLocal_230 = func_497(Local_532.f_0);
						iLocal_236 = 1;
					}
				}
			}
			else if (!iLocal_250)
			{
				if (!__LIB_0__::func_75())
				{
					if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_532.f_0))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_532.f_0, -1, 2, 2);
					}
					if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, Local_532.f_0))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, Local_532.f_0, -1, 2, 2);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, &Local_558, 3))
							{
								TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
						}
					}
					__LIB_0__::func_210("PAP1_01", 7500, 1);
					iLocal_299 = MISC::GET_GAME_TIMER();
					iLocal_250 = 1;
				}
				else
				{
					if (!iLocal_230)
					{
						if (func_497(Local_532.f_0))
						{
							iLocal_230 = 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, &Local_558, 3))
							{
								TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
						}
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
			else
			{
				func_486();
				func_483();
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_532.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_532.f_0, -1, 2, 2);
				}
			}
			break;
		case 2:
			if (!HUD::DOES_BLIP_EXIST(Local_532.f_2))
			{
				Local_532.f_2 = __LIB_10__::func_711(Local_532.f_0, 1, 1, 5);
				HUD::SET_BLIP_SCALE(Local_532.f_2, 1f);
			}
			else
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_532.f_0))
				{
					HUD::SET_BLIP_SCALE(Local_532.f_2, 1f);
				}
				__LIB_10__::func_618(Local_532.f_2, Local_532.f_0, 225f, 0.68f, 0);
			}
			if (!iLocal_240[0])
			{
				if (fLocal_294 > 1000f)
				{
					if (fLocal_284 < 120f)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RP1", 7, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_240[0] = 1;
						}
					}
				}
			}
			else if (!iLocal_240[1])
			{
				if (!func_482("PAP1_RP1"))
				{
					if (fLocal_294 > 1000f)
					{
						if (fLocal_284 < 120f)
						{
							if (__LIB_0__::func_75())
							{
								__LIB_6__::func_771();
							}
							if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RP2", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 0);
								iLocal_240[1] = 1;
							}
						}
					}
				}
			}
			else
			{
				MemCopy(&uVar0, {__LIB_0__::func_390()}, 8);
				if ((!iLocal_229 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && MISC::ARE_STRINGS_EQUAL(&uVar0, "PAP1_RP2"))
				{
					if (func_497(Local_539.f_0))
					{
						iLocal_229 = 1;
					}
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
					{
						if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, &Local_558, 3))
						{
							TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -4f, -1, 17, 0f, false, false, false);
						}
					}
					else
					{
						TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -4f, -1, 17, 0f, false, false, false);
					}
				}
				if (!__LIB_0__::func_75())
				{
					iLocal_226 = 2;
				}
			}
			if (__LIB_0__::func_121(Local_539.f_0))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_539.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_539.f_0, -1, 2, 2);
				}
				if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, Local_539.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, Local_539.f_0, -1, 2, 2);
				}
			}
			break;
		case 3:
			if (!bLocal_254)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_1__::func_183(Local_552.f_0))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_552.f_0, true);
						if (__LIB_1__::func_197(Local_544.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(Local_544.f_0, Local_552.f_0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_544.f_0, true);
							PED::SET_PED_CAN_BE_TARGETTED(Local_544.f_0, true);
							PED::SET_PED_AS_ENEMY(Local_544.f_0, true);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_544.f_0, true, 0f);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_544.f_0, 3);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_544.f_0, 61, false);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_544.f_0, 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_544.f_0, 17, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_544.f_0, 6, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_544.f_0, 13, false);
						}
						if (__LIB_1__::func_197(Local_539.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(Local_539.f_0, Local_552.f_0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_539.f_0, true);
							PED::SET_PED_CAN_BE_TARGETTED(Local_539.f_0, true);
							PED::SET_PED_AS_ENEMY(Local_539.f_0, true);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_539.f_0, true, 0f);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_539.f_0, 3);
						}
					}
					if (!__LIB_0__::func_295() && bLocal_263)
					{
						func_82(2);
					}
					__LIB_0__::func_210("PAP1_03", 7500, 1);
					__LIB_0__::func_151("PAP1_H1", -1);
					__LIB_42__::func_415(1, "Stop the rival paparazzi", 0, 0, 0, 1);
					Global_100441.f_12[0] = iLocal_307;
					bLocal_254 = true;
				}
			}
			else
			{
				func_399(Local_531.f_0, Local_552.f_0, 0);
				if (!iLocal_240[2])
				{
					if ((fLocal_281 < fLocal_284 && __LIB_1__::func_197(Local_539.f_0)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_539.f_0, 90f))
					{
						if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CONT", 7, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_240[2] = 1;
						}
					}
					else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RPAP02", 7, 0, 0, 0))
					{
						iLocal_240[2] = 1;
					}
				}
				else
				{
					if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						if (!iLocal_262)
						{
							if (!__LIB_0__::func_1("PAP1_H1"))
							{
								STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &iVar1, -1);
								if (iVar1 > 0)
								{
									if (fLocal_284 < 60f)
									{
										if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
										{
											__LIB_0__::func_151("PAP1_H2_KM", -1);
										}
										else
										{
											__LIB_0__::func_151("PAP1_H2", -1);
										}
										iLocal_262 = 1;
									}
								}
							}
						}
					}
					else
					{
						__LIB_10__::func_657("PAP1_H2", 1);
						if (MISC::IS_PC_VERSION())
						{
							__LIB_10__::func_657("PAP1_H2_KM", 1);
						}
						iLocal_262 = 1;
					}
					func_394();
				}
			}
			if (bLocal_254)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_539.f_2))
				{
					Local_539.f_2 = __LIB_10__::func_711(Local_539.f_0, 1, 0, 5);
					if (HUD::DOES_BLIP_EXIST(Local_539.f_2))
					{
						HUD::SET_BLIP_SCALE(Local_539.f_2, 1f);
					}
				}
				else
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_539.f_0))
					{
						HUD::SET_BLIP_SCALE(Local_539.f_2, 1f);
					}
					__LIB_10__::func_618(Local_539.f_2, Local_539.f_0, 220f, 0.65f, 0);
				}
				__LIB_0__::func_523(&(Local_532.f_2));
			}
			else if (!HUD::DOES_BLIP_EXIST(Local_532.f_2))
			{
				Local_532.f_2 = __LIB_10__::func_711(Local_532.f_0, 1, 1, 5);
				if (HUD::DOES_BLIP_EXIST(Local_532.f_2))
				{
					HUD::SET_BLIP_SCALE(Local_532.f_2, 1f);
				}
			}
			else
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_532.f_0))
				{
					HUD::SET_BLIP_SCALE(Local_532.f_2, 1f);
				}
				__LIB_10__::func_618(Local_532.f_2, Local_532.f_0, 225f, 0.68f, 0);
			}
			if (__LIB_0__::func_121(Local_539.f_0))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_539.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_539.f_0, -1, 2, 2);
				}
				if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, Local_539.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, Local_539.f_0, -1, 2, 2);
				}
			}
			break;
		case 4:
			if (!iLocal_239)
			{
				if (func_393())
				{
					iLocal_239 = 1;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_276))
				{
					iLocal_276 = __LIB_10__::func_658(Local_589, 5, 1);
					Local_600 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					__LIB_30__::func_549(Local_600, Local_589, &Local_598, &Local_599, 1000);
				}
				else if (!__LIB_0__::func_394(Local_600, 0f, 0f, 0f, 1056964608, 0))
				{
					__LIB_30__::func_549(Local_600, Local_589, &Local_598, &Local_599, 1000);
					if (__LIB_30__::func_548(Local_598, Local_599))
					{
						Local_600 = { 0f, 0f, 0f };
					}
				}
				if (!iLocal_260)
				{
					if (!__LIB_0__::func_75())
					{
						iLocal_260 = 1;
					}
				}
				else if (!iLocal_248)
				{
					__LIB_0__::func_210("PAP1_05", 7500, 1);
					iLocal_248 = 1;
				}
				else
				{
					func_386();
				}
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, sLocal_360, 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, sLocal_360, 3))
				{
					TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, sLocal_360, -4f);
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
			}
			else if (__LIB_0__::func_75())
			{
				fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 2f, -2f, -1, 17, fVar2, false, false, false);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 2f, -2f, -1, 17, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
			}
			break;
		case 7:
			if (!iLocal_239)
			{
				if (func_393())
				{
					iLocal_239 = 1;
				}
			}
			else if (!iLocal_260)
			{
				if (!__LIB_0__::func_75())
				{
					iLocal_260 = 1;
				}
			}
			else if (!iLocal_238)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
				}
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_LTC01", 7, 0, 0, 0))
				{
					iLocal_238 = 1;
				}
			}
			else if (!func_482("PAP1_LTC01"))
			{
				if (!iLocal_252)
				{
					__LIB_0__::func_210("PAP1_09", 7500, 1);
					iLocal_301 = MISC::GET_GAME_TIMER();
					iLocal_252 = 1;
				}
				else if (__LIB_0__::func_75())
				{
					iLocal_301 = MISC::GET_GAME_TIMER();
				}
				else if (!iLocal_246)
				{
					if (fLocal_283 < 20f)
					{
						if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RESP", 7, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_301 = MISC::GET_GAME_TIMER();
							iLocal_246 = 1;
						}
					}
					else
					{
						iLocal_246 = 1;
					}
				}
				else if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_HITPED", 7, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_301 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_301) > 10000 && fLocal_283 < 20f)
				{
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_LTC02", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_301 = MISC::GET_GAME_TIMER();
						iLocal_246 = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, sLocal_360, 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, sLocal_360, 3))
				{
					TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, sLocal_360, -4f);
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
			}
			else if (__LIB_0__::func_75())
			{
				fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 2f, -2f, -1, 17, fVar3, false, false, false);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 2f, -2f, -1, 17, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
			}
			break;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_553.f_0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_553.f_0, Local_531.f_0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_553.f_0, true, false);
				}
			}
		}
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0);
		PED::SET_PED_RESET_FLAG(Local_531.f_0, 309, true);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
		{
			TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_351, "cam_pos_hand_override", -1000f);
		}
	}
}

void func_386()//Position - 0x30690
{
	if (!iLocal_233)
	{
		if (!__LIB_0__::func_75())
		{
			if (iLocal_268)
			{
				if (__LIB_40__::func_941(&uLocal_366, cLocal_363, "PAP1_DROP", &Local_559, 7, 0, 0))
				{
					iLocal_268 = 0;
					iLocal_233 = 1;
				}
			}
			else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_DROP", 7, 0, 0, 0))
			{
				iLocal_233 = 1;
			}
		}
	}
	else if (!iLocal_234)
	{
		if (!__LIB_0__::func_75())
		{
			if (iLocal_268)
			{
				if (iLocal_307 == -1)
				{
					if (__LIB_40__::func_941(&uLocal_366, cLocal_363, "PAP1_DOFF05", &Local_559, 7, 0, 0))
					{
						iLocal_268 = 0;
						iLocal_234 = 1;
					}
				}
				else if (__LIB_40__::func_941(&uLocal_366, cLocal_363, "PAP1_DOFF04", &Local_559, 7, 0, 0))
				{
					iLocal_268 = 0;
					iLocal_234 = 1;
				}
			}
			else if (iLocal_307 == -1)
			{
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_DOFF05", 7, 0, 0, 0))
				{
					iLocal_234 = 1;
				}
			}
			else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_DOFF04", 7, 0, 0, 0))
			{
				iLocal_234 = 1;
			}
		}
	}
	else if (!iLocal_235)
	{
		if (!__LIB_0__::func_75())
		{
			if (iLocal_268)
			{
				if (__LIB_40__::func_941(&uLocal_366, cLocal_363, "PAP1_DOFF02", &Local_559, 7, 0, 0))
				{
					iLocal_268 = 0;
					iLocal_235 = 1;
				}
			}
			else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_DOFF02", 7, 0, 0, 0))
			{
				iLocal_235 = 1;
			}
		}
	}
	else if (__LIB_0__::func_75())
	{
		iLocal_304 = MISC::GET_GAME_TIMER();
	}
	else
	{
		if (!iLocal_244)
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_550.f_0))
			{
				if (__LIB_10__::func_638(iLocal_326, 500))
				{
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_PPW1", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_244 = 1;
						iLocal_246 = 1;
						iLocal_304 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				iLocal_326 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!func_482("PAP1_PPW1") && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_550.f_0))
		{
			iLocal_244 = 0;
			iLocal_326 = MISC::GET_GAME_TIMER();
		}
		if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_HITPED", 7, __LIB_30__::func_420(), 0, 0))
				{
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_304) > (10000 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2500)) && fLocal_283 < 20f)
		{
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_DOFF03", 7, __LIB_30__::func_420(), 0, 0))
			{
				iLocal_304 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_482("PAP1_CRASH"))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_550.f_0))
			{
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CRASH", 7, __LIB_30__::func_420(), 0, 0))
				{
				}
			}
		}
	}
}

int func_393()//Position - 0x30B46
{
	if (iLocal_268)
	{
		if (__LIB_40__::func_941(&uLocal_366, cLocal_363, &Local_572, &Local_559, 7, 0, 0))
		{
			iLocal_268 = 0;
			return 1;
		}
	}
	else if (!func_482("PAP1_PUNCH"))
	{
		if (iLocal_338 != 4)
		{
			if (__LIB_1__::func_197(Local_539.f_0))
			{
				iLocal_270 = 0;
			}
			if (iLocal_270)
			{
				StringCopy(&Local_572, "PAP1_URP03", 24);
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, &Local_572, 7, 0, 0, 0))
				{
					return 1;
				}
			}
			else
			{
				StringCopy(&Local_572, "PAP1_URP02", 24);
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, &Local_572, 7, 0, 0, 0))
				{
					return 1;
				}
			}
		}
		else if (iLocal_307 == -1)
		{
			StringCopy(&Local_572, "PAP1_URP01", 24);
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, &Local_572, 7, 0, 0, 0))
			{
				return 1;
			}
		}
		else
		{
			StringCopy(&Local_572, "PAP1_RPAP04", 24);
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, &Local_572, 7, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_394()//Position - 0x30C36
{
	if (!iLocal_243)
	{
		if (func_482("PAP1_PUNCH") || func_482("PAP1_RPAP05"))
		{
			iLocal_243 = 1;
		}
		else
		{
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_771();
			}
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_PUNCH", 7, __LIB_30__::func_420(), 0, 0))
			{
				iLocal_243 = 1;
			}
		}
	}
	if (!iLocal_242)
	{
		if (!func_482("PAP1_PUNCH"))
		{
			if (func_482("PAP1_RPAP05"))
			{
				iLocal_242 = 1;
			}
			else
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
				}
				if (!iLocal_242)
				{
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RPAP05", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_242 = 1;
					}
				}
			}
		}
	}
	if (!iLocal_244)
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_550.f_0))
		{
			if (__LIB_10__::func_638(iLocal_326, 500))
			{
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_PPW1", 7, __LIB_30__::func_420(), 0, 0))
				{
					iLocal_244 = 1;
					iLocal_246 = 1;
					iLocal_304 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_326 = MISC::GET_GAME_TIMER();
		}
	}
	else if (!func_482("PAP1_PPW1") && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_550.f_0))
	{
		iLocal_244 = 0;
		iLocal_326 = MISC::GET_GAME_TIMER();
	}
	if (!func_482("PAP1_CRASH"))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_550.f_0))
		{
			if (__LIB_1__::func_183(Local_552.f_0) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_552.f_0, Local_550.f_0))
			{
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CRASH", 7, __LIB_30__::func_420(), 0, 0))
				{
					iLocal_246 = 0;
				}
			}
		}
	}
	if (__LIB_0__::func_75())
	{
		iLocal_300 = MISC::GET_GAME_TIMER();
	}
	else if (!iLocal_246)
	{
		if (fLocal_283 < 20f)
		{
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RESP", 7, __LIB_30__::func_420(), 0, 0))
			{
				iLocal_300 = MISC::GET_GAME_TIMER();
				iLocal_246 = 1;
			}
		}
		else
		{
			iLocal_246 = 1;
		}
	}
	else if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_HITPED", 7, __LIB_30__::func_420(), 0, 0))
			{
				iLocal_300 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() - iLocal_300) > (3000 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2500))
	{
		if (fLocal_284 < 12f)
		{
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RIVAL", 7, __LIB_30__::func_420(), 0, 0))
			{
				iLocal_300 = MISC::GET_GAME_TIMER();
			}
		}
		else if (fLocal_284 < 25f)
		{
			if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RPAP08", 7, __LIB_30__::func_420(), 0, 0))
			{
				iLocal_300 = MISC::GET_GAME_TIMER();
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					iLocal_246 = 0;
				}
			}
		}
		else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RPAP07", 7, __LIB_30__::func_420(), 0, 0))
		{
			iLocal_300 = MISC::GET_GAME_TIMER();
			if (__LIB_0__::func_121(Local_539.f_0))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
				{
					func_395(Local_539.f_0);
				}
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iLocal_246 = 0;
			}
		}
	}
}

void func_395(int iParam0)//Position - 0x30F0E
{
	int iVar0;
	char* sVar1;
	if (__LIB_1__::func_197(Local_531.f_0))
	{
		if (__LIB_0__::func_121(iParam0))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_left_pap", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_right_pap", 3))
			{
				if (__LIB_10__::func_725(Local_531.f_0, iParam0, 85f))
				{
					iVar0 = func_377(Local_550.f_0, ENTITY::GET_ENTITY_COORDS(Local_550.f_0, true), ENTITY::GET_ENTITY_COORDS(iParam0, true));
					if (iVar0 == 1)
					{
						sVar1 = "hurry_up_right_pap";
					}
					else
					{
						sVar1 = "hurry_up_left_pap";
					}
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, sVar1, 4f, -2f, -1, 18, 0f, false, false, false);
				}
			}
		}
	}
}

void func_399(int iParam0, int iParam1, int iParam2)//Position - 0x31019
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	if (!func_407(iParam0))
	{
		iLocal_338 = 0;
	}
	else if (__LIB_1__::func_183(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		switch (iLocal_338)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sLocal_350, "idle", 3))
				{
					bVar3 = true;
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_left_pap", 3))
					{
						if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, "hurry_up_left_pap", 3))
						{
							bVar3 = false;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_right_pap", 3))
					{
						if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, "hurry_up_right_pap", 3))
						{
							bVar3 = false;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
					{
						if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, &Local_558, 3))
						{
							bVar3 = false;
						}
					}
					if (bVar3)
					{
						TASK::TASK_PLAY_ANIM(iParam0, sLocal_350, "idle", 8f, -8f, -1, 17, 0f, false, false, false);
					}
				}
				iLocal_309 = func_377(iParam1, Var1, Var0);
				if (func_406(iParam0, iParam1, 0.4f, &bLocal_228))
				{
					if (bLocal_228)
					{
						if (iLocal_309 == 1)
						{
							iLocal_308 = 0;
						}
						else if (iLocal_309 == 0)
						{
							iLocal_308 = 1;
						}
					}
					else
					{
						iLocal_308 = iLocal_309;
					}
					if (iLocal_309 == -1)
					{
						return;
					}
					switch (iLocal_308)
					{
						case 0:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
							{
								sLocal_360 = "atk_punch_left_pap";
								fLocal_290 = 1f;
								fLocal_286 = 0.21f;
								fLocal_285 = 0.4f;
								fLocal_287 = 0.2f;
								fLocal_288 = 1599.9999f;
							}
							else
							{
								sLocal_360 = "atk_swipe_left_pap";
								fLocal_290 = 1f;
								fLocal_286 = 0.235f;
								fLocal_285 = 0.38f;
								fLocal_287 = 0.25f;
								fLocal_288 = 1933.3331f;
							}
							break;
						case 1:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
							{
								sLocal_360 = "atk_punch_right_pap";
								fLocal_290 = 1f;
								fLocal_286 = 0.27f;
								fLocal_285 = 0.45f;
								fLocal_287 = 0.25f;
								fLocal_288 = 1366.6667f;
							}
							else
							{
								sLocal_360 = "atk_swipe_right_pap";
								fLocal_290 = 1f;
								fLocal_286 = 0.24f;
								fLocal_285 = 0.38f;
								fLocal_287 = 0.25f;
								fLocal_288 = 1799.9999f;
							}
							break;
						default:
							break;
					}
					fVar2 = func_405(fLocal_286, fLocal_288, fLocal_290);
					fVar2 = (fVar2 / 1000f);
					if (func_404(iParam0, Var0, iParam1, Var1, fVar2))
					{
						fLocal_292 = fLocal_290;
						TASK::TASK_PLAY_ANIM(iParam0, sLocal_350, sLocal_360, 16f, -8f, -1, 50, 0f, false, false, false);
						iLocal_243 = 0;
						iLocal_261 = 0;
						iLocal_338 = 2;
					}
					else
					{
						iLocal_243 = 1;
					}
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sLocal_350, sLocal_360, 3))
				{
					bLocal_269 = true;
					iLocal_242 = 0;
					iLocal_338 = 0;
				}
				else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iParam0, sLocal_350, sLocal_360, 3))
				{
					iLocal_242 = 0;
					bLocal_269 = true;
					iLocal_338 = 0;
				}
				else
				{
					fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sLocal_350, sLocal_360);
					if (fVar4 >= 0f && fVar4 <= 1f)
					{
						fVar5 = ((fLocal_286 + fLocal_285) / 2f);
						if (fVar4 < fLocal_285)
						{
							fVar6 = (fVar5 - fVar4);
							if (fVar4 > fVar5)
							{
								fVar6 = MISC::ABSF(fVar6);
							}
							fVar2 = func_405(fVar6, fLocal_288, fLocal_292);
							fVar7 = func_402(iParam0, Var0, iParam1, Var1, fVar2);
							if (fVar4 > fVar5)
							{
								if (fVar7 < 0f)
								{
									fVar7 = 1f;
								}
								else if (fVar7 > 0f)
								{
									fVar7 = -1f;
								}
							}
							if (fVar7 < 0f)
							{
								fVar8 = (fLocal_292 * 0.9f);
							}
							else if (fVar7 > 0f)
							{
								fVar8 = (fLocal_292 * 1.1f);
							}
							else
							{
								fVar8 = fLocal_292;
							}
							if (fVar8 < (fLocal_290 + 0.4f) && fVar8 > (fLocal_290 - 0.4f))
							{
								fLocal_292 = fVar8;
							}
						}
					}
					ENTITY::SET_ENTITY_ANIM_SPEED(iParam0, sLocal_350, sLocal_360, fLocal_292);
					if (!iLocal_261)
					{
						if (fVar4 >= fLocal_287)
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_01_A", false, -1))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_316, "SWING", Local_531.f_0, sLocal_364, false, 0);
							}
							iLocal_261 = 1;
						}
					}
					if (fVar4 >= fLocal_286 && fVar4 <= fLocal_285)
					{
						if (func_401(iParam0, Local_550.f_0, iParam1, 1, iParam2))
						{
							if (func_406(iParam0, iParam1, 0.5f, &iVar9))
							{
								if (bLocal_228 == iVar9)
								{
									iLocal_338 = 3;
								}
							}
						}
					}
				}
				break;
			case 3:
				Var11 = { 0f, 0.21f, 0f };
				switch (iLocal_309)
				{
					case 0:
						if (bLocal_228)
						{
							Var10 = { 2f, 0f, -4f };
						}
						else
						{
							Var10 = { -2f, 0f, -4f };
						}
						break;
					case 1:
						if (bLocal_228)
						{
							Var10 = { 2f, 0f, -4f };
						}
						else
						{
							Var10 = { -2f, 0f, -4f };
						}
						break;
					default:
						break;
				}
				if (PED::IS_PED_ON_ANY_BIKE(Local_539.f_0))
				{
					if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_539.f_0))
					{
						PED::KNOCK_PED_OFF_VEHICLE(Local_539.f_0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_539.f_0, 1, Var10, Var11, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_539.f_0, 20), true, true, true, false, true);
					}
				}
				if (__LIB_1__::func_197(Local_544.f_0))
				{
					if (PED::IS_PED_ON_ANY_BIKE(Local_544.f_0))
					{
						if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_544.f_0))
						{
							PED::KNOCK_PED_OFF_VEHICLE(Local_544.f_0);
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_544.f_0, 1, Var10, Var11, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_544.f_0, 20), true, true, true, false, true);
						}
					}
				}
				if (!bLocal_269)
				{
					__LIB_0__::func_498(798);
				}
				iLocal_338 = 4;
				break;
			case 4:
				break;
			}
	}
}

int func_401(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x315DB
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	if (!__LIB_0__::func_121(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_121(iParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_121(iParam2))
	{
		return 0;
	}
	if (iLocal_308 == 1)
	{
		Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 60309, 0f, 0f, 0f) };
		Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 61163, 0f, 0f, 0f) };
	}
	else if (iLocal_308 == 0)
	{
		Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 28422, 0f, 0f, 0f) };
		Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 28252, 0f, 0f, 0f) };
	}
	else
	{
		return 0;
	}
	Var3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
	fVar4 = MISC::GET_FRAME_TIME();
	Var5 = { Var3 * Vector(fVar4, fVar4, fVar4) };
	Var0 = { Var0 + Var5 };
	Var1 = { Var1 + Var5 };
	fVar11 = 0.425f;
	fVar12 = 0.08f;
	fVar13 = 0.08f;
	fVar14 = 0.8f;
	Var6 = { 0f, 0.15f, 0.4f };
	Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Var6) };
	fVar10 = 0.6f;
	fVar8 = (Var7.f_2 + fVar10);
	fVar9 = Var7.f_2;
	if (__LIB_0__::func_121(iParam4))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam4, true) };
		Var2 = { Var2 + Var5 };
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var7, false) < (fVar11 + fVar12))
	{
		if (Var0.f_2 <= fVar8)
		{
			if (Var0.f_2 >= fVar9)
			{
				return 1;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var7, false) < (fVar11 + fVar13))
	{
		if (Var1.f_2 <= fVar8)
		{
			if (Var1.f_2 >= fVar9)
			{
				return 1;
			}
		}
	}
	if (__LIB_0__::func_121(iParam4))
	{
		if (__LIB_0__::func_530(iParam4, Var7, (fVar11 + fVar14), 1))
		{
			if (Var2.f_2 <= fVar8)
			{
				if (Var2.f_2 >= fVar9)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		Var6 = { 0f, -0.55f, 0.45f };
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Var6) };
		fVar10 = 0.85f;
		fVar8 = (Var7.f_2 + fVar10);
		fVar9 = Var7.f_2;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var7, false) < (fVar11 + fVar12))
		{
			if (Var0.f_2 <= fVar8)
			{
				if (Var0.f_2 >= fVar9)
				{
					return 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var7, false) < (fVar11 + fVar13))
		{
			if (Var1.f_2 <= fVar8)
			{
				if (Var1.f_2 >= fVar9)
				{
					return 1;
				}
			}
		}
		if (__LIB_0__::func_121(iParam4))
		{
			if (__LIB_0__::func_530(iParam4, Var7, (fVar11 + fVar14), 1))
			{
				if (Var2.f_2 <= fVar8)
				{
					if (Var2.f_2 >= fVar9)
					{
						return 1;
					}
				}
			}
		}
		Var6 = { 0f, -0.35f, 0.42f };
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Var6) };
		fVar10 = 0.85f;
		fVar8 = (Var7.f_2 + fVar10);
		fVar9 = Var7.f_2;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var7, false) < (fVar11 + fVar12))
		{
			if (Var0.f_2 <= fVar8)
			{
				if (Var0.f_2 >= fVar9)
				{
					return 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var7, false) < (fVar11 + fVar13))
		{
			if (Var1.f_2 <= fVar8)
			{
				if (Var1.f_2 >= fVar9)
				{
					return 1;
				}
			}
		}
		if (__LIB_0__::func_121(iParam4))
		{
			if (__LIB_0__::func_530(iParam4, Var7, (fVar11 + fVar14), 1))
			{
				if (Var2.f_2 <= fVar8)
				{
					if (Var2.f_2 >= fVar9)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_402(int iParam0, struct<3> Param1, int iParam2, struct<3> Param3, float fParam4)//Position - 0x31929
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	Var0 = { Param3 + ENTITY::GET_ENTITY_VELOCITY(iParam2) * Vector(fParam4, fParam4, fParam4) };
	Var1 = { Param1 + ENTITY::GET_ENTITY_VELOCITY(iParam0) * Vector(fParam4, fParam4, fParam4) };
	Var2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam2) };
	return func_403(Var2, Var0, Var1, bLocal_228);
}

float func_403(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x31974
{
	float fVar0;
	fVar0 = __LIB_0__::func_156(Param2 - Param1, Param0);
	if (fVar0 < 0f)
	{
		if (bParam3)
		{
			return MISC::ABSF(fVar0);
		}
		else
		{
			return fVar0;
		}
	}
	else if (fVar0 > 0f)
	{
		if (bParam3)
		{
			return (fVar0 * -1f);
		}
		else
		{
			return fVar0;
		}
	}
	return 0f;
}

int func_404(int iParam0, struct<3> Param1, int iParam2, struct<3> Param3, float fParam4)//Position - 0x319CB
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	Var0 = { Param3 + ENTITY::GET_ENTITY_VELOCITY(iParam2) * Vector(fParam4, fParam4, fParam4) };
	Var1 = { Param1 + ENTITY::GET_ENTITY_VELOCITY(iParam0) * Vector(fParam4, fParam4, fParam4) };
	fVar2 = ENTITY::GET_ENTITY_HEADING(iParam2);
	Var3 = { Local_592[iLocal_309 /*3*/] };
	Var4 = { Local_593[iLocal_309 /*3*/] };
	fVar5 = (Local_592[iLocal_309 /*3*/] / 2f);
	uVar6 = Local_592[iLocal_309 /*3*/].f_1;
	Var7 = { fVar5, uVar6, 0f };
	Var8 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param3, fVar2, Var7) };
	Var9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam2) };
	fVar10 = func_403(Var9, Var8, Param1, bLocal_228);
	if (fVar10 < ((fLocal_289 / 2f) * -1f))
	{
		fVar11 = Var3.f_0;
		if (iLocal_309 == 0)
		{
			fVar11 = MISC::ABSF(fVar11);
		}
		fVar10 = MISC::ABSF(fVar10);
		fVar11 = (fVar11 + ((fVar10 / fLocal_291) * SYSTEM::TIMESTEP()));
		if (fVar11 > 7f)
		{
			fVar11 = 7f;
		}
		if (iLocal_309 == 0)
		{
			fVar11 = (fVar11 * -1f);
		}
		Var3.f_0 = fVar11;
	}
	Local_591 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, Var4) };
	Local_590 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, Var3) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Local_591, Local_590, fLocal_289, false, false))
	{
		return 1;
	}
	return 0;
}

float func_405(float fParam0, float fParam1, float fParam2)//Position - 0x31B07
{
	if (fParam0 < 0f || fParam0 > 1f)
	{
	}
	if (fParam2 < 0f)
	{
	}
	return ((fParam0 * fParam1) * fParam2);
}

int func_406(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x31B2F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	fVar3 = 1f;
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) };
	fVar2 = __LIB_0__::func_156(Var0, Var1);
	if (fVar2 > 0f)
	{
		*iParam3 = 0;
	}
	else
	{
		*iParam3 = 1;
		fVar2 = MISC::ABSF(fVar2);
	}
	if (fVar2 > fParam2 && fVar2 < fVar3)
	{
		if (!*iParam3)
		{
		}
		return 1;
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x31B94
{
	if (__LIB_1__::func_197(Local_531.f_0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_0__::func_77(0))
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_ANY_BIKE(iParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_482(char* sParam0)//Position - 0x38431
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_390() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
		{
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
		{
			return 1;
		}
	}
	return 0;
}

void func_483()//Position - 0x38467
{
	struct<2> Var0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	if (iLocal_341 == 4)
	{
		if (!iLocal_232[iLocal_307])
		{
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_833();
			}
			else if (!iLocal_232[iLocal_307])
			{
				if (iLocal_307 < 5)
				{
					StringCopy(&Var0, "PAP1_SNAP", 16);
					switch (iLocal_307)
					{
						case 0:
							StringConCat(&Var0, "01", 16);
							break;
						case 1:
							StringConCat(&Var0, "02", 16);
							break;
						case 2:
							StringConCat(&Var0, "05", 16);
							break;
						case 3:
							StringConCat(&Var0, "03", 16);
							break;
						case 4:
							StringConCat(&Var0, "04", 16);
							break;
					}
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, &Var0, 7, 0, 0, 0))
					{
						iLocal_232[iLocal_307] = 1;
					}
				}
				else
				{
					iLocal_232[iLocal_307] = 1;
				}
				iLocal_246 = 1;
			}
		}
		iLocal_299 = MISC::GET_GAME_TIMER();
	}
	else if (iLocal_341 != 2)
	{
		if (!iLocal_244)
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_550.f_0))
			{
				if (__LIB_10__::func_638(iLocal_326, 500))
				{
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_PPW1", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_246 = 1;
						iLocal_244 = 1;
					}
				}
			}
			else
			{
				iLocal_326 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!func_482("PAP1_PPW1") && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_550.f_0))
		{
			iLocal_326 = MISC::GET_GAME_TIMER();
			iLocal_244 = 0;
		}
		if (!func_482("PAP1_CRASH") && !func_482("PAP1_CHASE02"))
		{
			if (!__LIB_0__::func_75())
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_550.f_0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_551.f_0, Local_550.f_0))
					{
						if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CHASE02", 7, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_246 = 0;
						}
					}
					else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CRASH", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_246 = 0;
					}
				}
			}
		}
		if (__LIB_0__::func_75())
		{
			iLocal_299 = MISC::GET_GAME_TIMER();
		}
		else if (iLocal_341 == 0)
		{
			if (!iLocal_246)
			{
				if (fLocal_283 < 20f)
				{
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_RESP", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_299 = MISC::GET_GAME_TIMER();
						iLocal_246 = 1;
					}
				}
				else
				{
					iLocal_246 = 1;
				}
			}
			else if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_HITPED", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_299 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (__LIB_10__::func_638(iLocal_299, 3000))
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_551.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
				if (Var1.f_1 < 2f)
				{
					if (fLocal_281 < 75f)
					{
						if (iLocal_307 == -1)
						{
							if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CHASE06", 7, __LIB_30__::func_420(), 0, 0))
							{
								iLocal_299 = MISC::GET_GAME_TIMER();
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) == 0)
								{
									func_395(Local_532.f_0);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) <= 1)
								{
									iLocal_246 = 0;
								}
							}
						}
						else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CHASE08", 7, __LIB_30__::func_420(), 0, 0))
						{
							iLocal_299 = MISC::GET_GAME_TIMER();
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) == 0)
							{
								func_395(Local_532.f_0);
							}
						}
					}
					else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_HURRY", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_299 = MISC::GET_GAME_TIMER();
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
						{
							func_395(Local_532.f_0);
						}
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) <= 4)
						{
							iLocal_246 = 0;
						}
					}
				}
				else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_CHASE07", 7, __LIB_30__::func_420(), 0, 0))
				{
					iLocal_299 = MISC::GET_GAME_TIMER();
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) <= 3)
					{
						iLocal_246 = 0;
					}
				}
			}
		}
		else if (iLocal_341 == 1)
		{
			if (__LIB_10__::func_638(iLocal_299, MISC::GET_RANDOM_INT_IN_RANGE(250, 750)))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar2 == 0)
				{
					StringCopy(&Var3, "PAP1_PHOTO", 24);
				}
				else if (iVar2 == 1)
				{
					StringCopy(&Var3, "PAP1_PHOTO2", 24);
				}
				else
				{
					StringCopy(&Var3, "PAP1_FIDGET", 24);
				}
				if (__LIB_41__::func_635(&uLocal_366, cLocal_363, &Var3, 7, __LIB_30__::func_420(), 0, 0))
				{
					iLocal_246 = 1;
					iLocal_299 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_486()//Position - 0x3889D
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!func_496())
	{
		iLocal_341 = 0;
		iLocal_327 = 0;
		iLocal_328 = MISC::GET_RANDOM_INT_IN_RANGE(6, 11);
		iLocal_329 = MISC::GET_RANDOM_INT_IN_RANGE(250, 750);
	}
	else if (__LIB_1__::func_183(Local_551.f_0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_551.f_0, Local_586) };
		switch (iLocal_341)
		{
			case 0:
				bVar1 = true;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_left_pap", 3))
				{
					if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, "hurry_up_left_pap", 3))
					{
						bVar1 = false;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_right_pap", 3))
				{
					if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, "hurry_up_right_pap", 3))
					{
						bVar1 = false;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
				{
					if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, &Local_558, 3))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (func_495())
					{
						fVar2 = 3f;
						TASK::TASK_SWEEP_AIM_POSITION(Local_531.f_0, sLocal_350, "sweep_low", "sweep_med", "sweep_high", -1, Var0, fVar2, 0.25f);
						func_494();
						if (func_482("PAP1_CHASE06"))
						{
							__LIB_6__::func_771();
						}
						iLocal_318 = MISC::GET_GAME_TIMER();
						iLocal_341 = 1;
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
					}
				}
				if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, Local_532.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, Local_532.f_0, -1, 2, 2);
				}
				break;
			case 1:
				if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
					}
					iLocal_341 = 0;
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_531.f_0, Var0);
					iVar3 = 750;
					if (__LIB_10__::func_638(iLocal_318, iVar3))
					{
						if (!func_495())
						{
							iVar4 = 1250;
							if (__LIB_10__::func_638(iLocal_318, iVar4))
							{
								if (iLocal_327 >= iLocal_328)
								{
									func_492();
									iLocal_341 = 2;
								}
								else
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
									}
									iLocal_341 = 0;
								}
							}
						}
						else
						{
							func_488(Var0);
							if (func_487(iLocal_329))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
								{
									if (__LIB_0__::func_121(Local_554.f_0))
									{
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_554.f_0, Local_585, 0f, 0f, 0f, 1f, false, false, false);
									}
									if (!AUDIO::HAS_SOUND_FINISHED(iLocal_317))
									{
										AUDIO::STOP_SOUND(iLocal_317);
									}
									if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_362, false, -1))
									{
										AUDIO::PLAY_SOUND_FROM_COORD(iLocal_317, "CAMERA", PED::GET_PED_BONE_COORDS(Local_531.f_0, 28422, Local_585), sLocal_364, false, 0, false);
									}
								}
								iLocal_298 = -1;
								iLocal_306 = 0;
								iLocal_329 = MISC::GET_RANDOM_INT_IN_RANGE(250, 750);
								iLocal_327++;
								if (iLocal_327 >= iLocal_328)
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 1);
									func_492();
									iLocal_341 = 2;
								}
							}
						}
					}
				}
				break;
			case 2:
				if (__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_531.f_0, Var0);
				}
				iVar5 = 500;
				if (__LIB_10__::func_638(iLocal_318, iVar5))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
					}
					else
					{
						iVar6 = 1000;
						if (__LIB_10__::func_638(iLocal_318, iVar6))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
							TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "lookatcam_intro_pap", 8f, -8f, -1, 18, 0f, false, false, false);
							iLocal_341 = 3;
						}
					}
				}
				break;
			case 3:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "lookatcam_intro_pap", 3))
				{
					iLocal_341 = 0;
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_531.f_0, sLocal_350, "lookatcam_intro_pap", 1.4f);
					if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, "lookatcam_intro_pap", 3))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
						TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "lookatcam_loop_pap", 8f, -8f, -1, 17, 0f, false, false, false);
						iLocal_341 = 4;
					}
				}
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "lookatcam_loop_pap", 3))
				{
					iLocal_341 = 0;
				}
				else if (iLocal_232[iLocal_307])
				{
					if (!__LIB_0__::func_75())
					{
						TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "lookatcam_outro_pap", 8f, -2f, -1, 18, 0f, false, false, false);
						iLocal_341 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "lookatcam_outro_pap", 3))
				{
					iLocal_341 = 0;
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_531.f_0, sLocal_350, "lookatcam_outro_pap", 1.4f);
					if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_531.f_0, sLocal_350, "lookatcam_outro_pap", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
						iLocal_341 = 0;
					}
				}
				break;
			}
	}
}

bool func_487(int iParam0)//Position - 0x38D70
{
	if (iLocal_298 == -1)
	{
		return 0;
	}
	return (MISC::GET_GAME_TIMER() - iLocal_298) > iParam0;
}

int func_488(struct<3> Param0)//Position - 0x38D8E
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!__LIB_0__::func_121(Local_553.f_0))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_553.f_0, Local_584) };
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_553.f_0) };
	Var1.f_0 = (Var1.f_0 * -1f);
	Var1.f_1 = (Var1.f_1 * -1f);
	Var1.f_2 = (Var1.f_2 * -1f);
	iVar2 = 0;
	fVar3 = 90f;
	bVar4 = func_490(iLocal_314, Var0, Var1, Param0, fVar3);
	if (bVar4)
	{
		if (iLocal_314 >= 3)
		{
			iLocal_314 = 0;
		}
		else
		{
			iLocal_314++;
		}
	}
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 3)
	{
		if (func_489(iVar7, &iVar2))
		{
			iVar6++;
		}
		iVar7++;
	}
	if (!bVar4)
	{
		bVar4 = func_490(iLocal_314, Var0, Var1, Param0, fVar3);
		if (bVar4)
		{
			if (iLocal_314 >= 3)
			{
				iLocal_314 = 0;
			}
			else
			{
				iLocal_314++;
			}
		}
	}
	if (iVar6 > 0)
	{
		iVar5 = 1;
		if (iLocal_298 == -1)
		{
			iLocal_298 = MISC::GET_GAME_TIMER();
		}
		iLocal_306 = 0;
	}
	else if (iLocal_298 == -1)
	{
		iVar5 = 0;
	}
	else
	{
		iLocal_306++;
		if (iLocal_306 >= 8)
		{
			iLocal_298 = -1;
			iVar5 = 0;
		}
		else
		{
			iVar5 = 1;
		}
	}
	return iVar5;
}

bool func_489(int iParam0, int iParam1)//Position - 0x38EC4
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	else if (!Local_345[iParam0 /*8*/].f_7)
	{
		return 0;
	}
	iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_345[iParam0 /*8*/], &iVar1, &Var2, &uVar3, &uVar4);
	if (iVar5 == 0)
	{
		Local_345[iParam0 /*8*/] = 0;
		Local_345[iParam0 /*8*/].f_7 = 0;
		return 0;
	}
	else if (iVar5 == 1)
	{
		return 0;
	}
	bVar6 = false;
	fVar7 = 1.3f;
	if (iVar1 > 0)
	{
		fVar8 = SYSTEM::VDIST2(Local_345[iParam0 /*8*/].f_1, Var2);
		bVar6 = fVar8 <= (fVar7 * fVar7);
		iVar0 = MISC::GET_GAME_TIMER();
	}
	else
	{
		bVar6 = true;
		iVar0 = MISC::GET_GAME_TIMER();
	}
	Local_345[iParam0 /*8*/] = 0;
	Local_345[iParam0 /*8*/].f_7 = 0;
	if (bVar6)
	{
		*iParam1 = iVar0;
	}
	return bVar6;
}

int func_490(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)//Position - 0x38F92
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	else if (Local_345[iParam0 /*8*/].f_7)
	{
		return 0;
	}
	fVar0 = (fParam4 / 2f);
	if (fParam4 > 0f)
	{
		Var1 = { __LIB_0__::func_79(Param3 - Param1) };
		fVar2 = __LIB_0__::func_156(Param2, Var1);
		if (fVar2 <= SYSTEM::COS(fVar0))
		{
			func_491(Param1, fVar2, fParam4);
			return 0;
		}
	}
	Var3 = { Param3 };
	Var3 = { Param3 - Param1 * Vector(1.25f, 1.25f, 1.25f) };
	Local_345[iParam0 /*8*/] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param1 + Var3, 511, 0, 7);
	if (Local_345[iParam0 /*8*/] == 0)
	{
		Local_345[iParam0 /*8*/] = 0;
		Local_345[iParam0 /*8*/].f_7 = 0;
	}
	else
	{
		Local_345[iParam0 /*8*/].f_7 = 1;
		Local_345[iParam0 /*8*/].f_1 = { Param3 };
		return 1;
	}
	return 0;
}

void func_491(struct<3> Param0, float fParam1, float fParam2)//Position - 0x39081
{
	fParam2 = (fParam2 / 2f);
	GRAPHICS::DRAW_DEBUG_LINE(Param0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, (fParam1 + fParam2), 0f, 5f, 0f), 0, 0, 255, 255);
	GRAPHICS::DRAW_DEBUG_LINE(Param0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, (fParam1 - fParam2), 0f, 5f, 0f), 0, 0, 255, 255);
}

void func_492()//Position - 0x390C9
{
	if (iLocal_307 < 5)
	{
		iLocal_307++;
	}
	__LIB_0__::func_401(799, 1, 0);
	__LIB_0__::func_296();
	iLocal_320 = MISC::GET_GAME_TIMER();
	iLocal_318 = MISC::GET_GAME_TIMER();
	iLocal_327 = 0;
	iLocal_328 = MISC::GET_RANDOM_INT_IN_RANGE(6, 11);
	iLocal_329 = MISC::GET_RANDOM_INT_IN_RANGE(250, 750);
}

void func_494()//Position - 0x391BF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_345[iVar0 /*8*/] = 0;
		Local_345[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	iLocal_306 = 0;
	iLocal_314 = 0;
	iLocal_298 = -1;
}

int func_495()//Position - 0x391F7
{
	float fVar0[2];
	Local_596[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_551.f_0, Local_597[0 /*3*/]) };
	fVar0[0] = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_550.f_0, true), Local_596[0 /*3*/]);
	Local_596[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_551.f_0, Local_597[1 /*3*/]) };
	fVar0[1] = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_550.f_0, true), Local_596[1 /*3*/]);
	if (fVar0[0] < 3.5f)
	{
		return 1;
	}
	else if (fVar0[1] < 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_496()//Position - 0x3928C
{
	if (__LIB_1__::func_197(Local_531.f_0))
	{
		if (PED::IS_PED_ON_ANY_BIKE(Local_531.f_0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
		{
			return 1;
		}
	}
	return 0;
}

int func_497(int iParam0)//Position - 0x392B9
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	char cVar4[64];
	struct<16> Var5;
	if (__LIB_1__::func_197(Local_531.f_0) && __LIB_0__::func_121(iParam0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
		{
			Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_531.f_0) };
			Var0 = { __LIB_0__::func_79(Var0) };
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) - ENTITY::GET_ENTITY_COORDS(Local_531.f_0, true) };
			Var1 = { __LIB_0__::func_79(Var1) };
			fVar2 = __LIB_0__::func_156(Var0, Var1);
			iVar3 = func_377(Local_550.f_0, ENTITY::GET_ENTITY_COORDS(Local_550.f_0, true), ENTITY::GET_ENTITY_COORDS(iParam0, true));
			if (iVar3 == 1)
			{
				StringCopy(&cVar4, "right_pap", 64);
			}
			else
			{
				StringCopy(&cVar4, "left_pap", 64);
			}
			if (fVar2 > 0.85f)
			{
				StringCopy(&Var5, "point_fwd_", 64);
			}
			else if (fVar2 > 0.2f)
			{
				StringCopy(&Var5, "point_45_", 64);
			}
			else if (fVar2 > -0.6f)
			{
				StringCopy(&Var5, "point_side_", 64);
			}
			else
			{
				StringCopy(&Var5, "point_bwd_", 64);
			}
			StringConCat(&Var5, &cVar4, 64);
			Local_558 = { Var5 };
			TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, &Local_558, 4f, -2f, -1, 18, 0f, false, false, false);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_499(int iParam0)//Position - 0x3953E
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_224)
			{
				case 4:
					func_501("PAP1_05");
					__LIB_0__::func_523(&iLocal_276);
					if (iLocal_235)
					{
						if (func_482("PAP1_DOFF02"))
						{
							iLocal_268 = 1;
							iLocal_235 = 0;
							Local_559 = { __LIB_0__::func_389() };
						}
					}
					else if (iLocal_234)
					{
						if (func_482("PAP1_DOFF05") || func_482("PAP1_DOFF04"))
						{
							iLocal_268 = 1;
							iLocal_234 = 0;
							Local_559 = { __LIB_0__::func_389() };
						}
					}
					else if (iLocal_233)
					{
						if (func_482("PAP1_DROP"))
						{
							iLocal_268 = 1;
							iLocal_233 = 0;
							Local_559 = { __LIB_0__::func_389() };
						}
					}
					else if (iLocal_239)
					{
						if (func_482(&Local_572))
						{
							iLocal_268 = 1;
							iLocal_239 = 0;
							Local_559 = { __LIB_0__::func_389() };
						}
					}
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(Local_531.f_0))
					{
						__LIB_6__::func_771();
					}
					else
					{
						__LIB_0__::func_296();
					}
					break;
				case 7:
					func_501("PAP1_09");
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(Local_531.f_0))
					{
						__LIB_6__::func_771();
					}
					else
					{
						__LIB_0__::func_296();
					}
					break;
				default:
					iLocal_341 = 0;
					if (__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
					{
						TASK::CLEAR_PED_TASKS(Local_531.f_0);
					}
					func_501("PAP1_01");
					__LIB_0__::func_523(&(Local_532.f_2));
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(Local_531.f_0))
					{
						__LIB_6__::func_771();
					}
					else
					{
						__LIB_0__::func_296();
					}
					iLocal_242 = 1;
					iLocal_243 = 1;
					if (iLocal_224 == 2 || iLocal_224 == 3)
					{
						__LIB_0__::func_523(&(Local_532.f_2));
						__LIB_0__::func_523(&(Local_539.f_2));
						func_501("PAP1_03");
						__LIB_10__::func_657("PAP1_H1", 1);
					}
					break;
			}
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "dialog_pap", 3))
					{
						TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "dialog_pap", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_left_pap", 3))
					{
						TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "hurry_up_left_pap", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "hurry_up_right_pap", 3))
					{
						TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, "hurry_up_right_pap", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, &Local_558, 3))
					{
						TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_350, &Local_558, -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
					{
						PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0);
						TASK::STOP_ANIM_TASK(Local_531.f_0, sLocal_351, "cam_pos_hand_override", -1000f);
					}
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
				PED::SET_PED_RESET_FLAG(Local_531.f_0, 309, true);
			}
			else
			{
				func_226(-1048576000);
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_531.f_0))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_351, "cam_pos_hand_override", 3))
					{
						PED::RESET_PED_MOVEMENT_CLIPSET(Local_531.f_0, 0.25f);
					}
				}
				else
				{
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
			}
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 1:
			TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			func_501("PAP1_06");
			func_501("PAP1_10");
			__LIB_0__::func_523(&(Local_550.f_2));
			if ((func_482("PAP1_IG5") || func_482("PAP1_FALL")) || func_482("PAP1_CRASH"))
			{
				__LIB_6__::func_771();
			}
			__LIB_0__::func_296();
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
			}
			break;
		case 2:
			TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			__LIB_0__::func_523(&(Local_531.f_2));
			func_501("PAP1_08");
			__LIB_0__::func_296();
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
			}
			break;
	}
}

void func_501(char* sParam0)//Position - 0x39A12
{
	if (__LIB_0__::func_405(sParam0, 0, 0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_502()//Position - 0x39A2B
{
	if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
	{
		return 1;
	}
	if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_531.f_0, Local_550.f_0))
	{
		return 2;
	}
	return 0;
}

void func_503()//Position - 0x39A5F
{
	func_83();
	func_356();
	switch (iLocal_226)
	{
		case 0:
			__LIB_42__::func_415(2, "Drop Beverley off", 1, 0, 0, 1);
			if (__LIB_1__::func_197(Local_539.f_0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_539.f_0, false, 1);
			}
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 0);
			iLocal_246 = 1;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.8f);
			Local_600 = { 0f, 0f, 0f };
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 0);
			iLocal_226 = 1;
			break;
		case 1:
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				fLocal_283 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_531.f_0, true));
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
					iLocal_226 = 2;
				}
				else
				{
					func_370();
					if (iLocal_344 == 0)
					{
						if (iLocal_239 && iLocal_260)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_589, 4f, 4f, 2f, true, true, 2) && ENTITY::IS_ENTITY_AT_COORD(Local_531.f_0, Local_589, 4f, 4f, 2f, false, true, 0))
							{
								iLocal_226 = 2;
							}
						}
					}
				}
			}
			if (__LIB_1__::func_183(Local_551.f_0))
			{
				func_368();
			}
			func_362();
			func_361();
			break;
		case 2:
			__LIB_0__::func_523(&iLocal_276);
			__LIB_0__::func_523(&(Local_531.f_2));
			__LIB_0__::func_523(&(Local_550.f_2));
			if (__LIB_0__::func_405("PAP1_05", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("PAP1_05");
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_0__::func_296();
				func_352(7);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				func_352(5);
			}
			break;
	}
}

void func_504()//Position - 0x39BE3
{
	struct<3> Var0;
	int iVar1;
	func_83();
	func_356();
	switch (iLocal_226)
	{
		case 0:
			func_550(0, 0, 1065353216);
			iLocal_246 = 1;
			if (!__LIB_1__::func_197(Local_539.f_0))
			{
				iLocal_226 = 2;
			}
			else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_539.f_0))
			{
				iLocal_226 = 2;
			}
			else
			{
				func_542();
				__LIB_39__::func_907(&uLocal_20, Local_539.f_0, 0, 0, 1, 1, 1);
				iLocal_322 = MISC::GET_GAME_TIMER();
				iLocal_226 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_183(Local_550.f_0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_550.f_0))
				{
					if (func_514() || __LIB_10__::func_638(iLocal_322, 2000))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_550.f_0);
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
					}
				}
			}
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				fLocal_283 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_531.f_0, true));
				if (__LIB_1__::func_183(Local_551.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
					{
						func_550(0, 0, 1065353216);
						if (!iLocal_258)
						{
							if (fLocal_282 >= 80132f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0);
								func_508(0, 1);
								func_507();
								VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_365);
								func_506();
								VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
								VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
								VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
								STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
								iLocal_258 = 1;
							}
						}
					}
					else
					{
						if (__LIB_0__::func_121(Local_551.f_0))
						{
							fLocal_281 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_551.f_0, true));
						}
						if (!iLocal_258)
						{
							func_508(0, 1);
							func_507();
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_365);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
							VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
							VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
							STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
							func_506();
							iLocal_258 = 1;
						}
						else
						{
							func_368();
						}
					}
				}
				if (iLocal_258)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
					VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
				}
				if (!__LIB_1__::func_197(Local_539.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_539.f_0, PLAYER::PLAYER_PED_ID(), false))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_539.f_0, 0, 2))
						{
							iLocal_270 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_539.f_0);
						}
					}
					iLocal_226 = 2;
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_539.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_539.f_0, PLAYER::PLAYER_PED_ID(), false))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_539.f_0, 0, 2))
						{
							iLocal_270 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_539.f_0);
							ENTITY::SET_ENTITY_HEALTH(Local_539.f_0, 0, 0);
						}
					}
					if (!iLocal_270)
					{
						if (!__LIB_1__::func_197(Local_544.f_0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_544.f_0, PLAYER::PLAYER_PED_ID(), false))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_544.f_0, 0, 2))
								{
									iLocal_270 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_544.f_0);
								}
							}
						}
						else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_544.f_0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_544.f_0, PLAYER::PLAYER_PED_ID(), false))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_544.f_0, 0, 2))
								{
									iLocal_270 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_544.f_0);
								}
							}
						}
					}
					iLocal_226 = 2;
				}
				else
				{
					__LIB_39__::func_907(&uLocal_20, Local_539.f_0, 0, 0, 1, 1, 1);
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					fLocal_284 = SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(Local_539.f_0, true));
					func_542();
					if (!__LIB_1__::func_197(Local_544.f_0))
					{
						if (PED::IS_PED_ON_ANY_BIKE(Local_539.f_0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_539.f_0, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_539.f_0))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_539.f_0);
							}
						}
					}
					else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_544.f_0))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_544.f_0, 0, 0);
						if (PED::IS_PED_ON_ANY_BIKE(Local_539.f_0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_539.f_0, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_539.f_0))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_539.f_0);
							}
						}
					}
				}
				func_370();
			}
			break;
		case 2:
			if (__LIB_1__::func_183(Local_550.f_0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_550.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_550.f_0);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
			}
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_771();
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_556.f_0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_556.f_0))
				{
					ENTITY::DETACH_ENTITY(Local_556.f_0, true, true);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_556.f_0, 3, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, true, false, true);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_555.f_0))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_555.f_0))
				{
					ENTITY::DETACH_ENTITY(Local_555.f_0, true, true);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_555.f_0, 3, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, true, false, true);
				}
			}
			if (!iLocal_258)
			{
				if (__LIB_1__::func_183(Local_551.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0);
					}
					func_506();
					func_508(0, 1);
					func_507();
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_365);
					iLocal_258 = 1;
				}
			}
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_349[iVar1], false);
				iVar1++;
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			func_542();
			__LIB_0__::func_523(&(Local_532.f_2));
			__LIB_0__::func_523(&(Local_539.f_2));
			__LIB_0__::func_523(&(Local_531.f_2));
			__LIB_0__::func_523(&(Local_550.f_2));
			__LIB_9__::func_981(&uLocal_20, 0, 0);
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (!__LIB_1__::func_197(Local_539.f_0))
			{
				__LIB_0__::func_202(&uLocal_366, 4);
			}
			if (__LIB_0__::func_405("PAP1_03", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("PAP1_03");
			}
			if (__LIB_0__::func_1("PAP1_H1"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!__LIB_0__::func_295() && bLocal_263)
			{
				func_82(3);
			}
			if (__LIB_0__::func_121(Local_551.f_0))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_551.f_0, 0f);
			}
			if (__LIB_0__::func_121(Local_552.f_0))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_552.f_0, 0f);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
			{
				AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_CHASE");
			}
			func_352(4);
			break;
	}
}

void func_506()//Position - 0x3A1D8
{
	int iVar0;
	if (__LIB_1__::func_197(Local_533.f_0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_551.f_0, PLAYER::PLAYER_PED_ID(), 8, 80f, 262144, 500f, -1f, true);
		TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_533.f_0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		PED::SET_PED_KEEP_TASK(Local_533.f_0, true);
	}
}

void func_507()//Position - 0x3A232
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iLocal_195;
	iVar1 = iLocal_198;
	iVar2 = 0;
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_365);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_139[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_139[iVar2], sLocal_365);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_142[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_142[iVar2], sLocal_365);
		}
		iVar2++;
	}
}

void func_508(bool bParam0, bool bParam1)//Position - 0x3A2AA
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_179))
	{
		iLocal_81 = 0;
		__LIB_11__::func_126();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_188);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_97)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_24());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_125());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_124());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_123());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_33();
			func_29();
			func_12();
		}
		else
		{
			func_6();
			func_513();
		}
		if (bParam1)
		{
			__LIB_32__::func_762(0);
		}
	}
}

void func_513()//Position - 0x3A4A4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 105)
	{
		iLocal_195[iVar0] = 0;
		Local_163[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_99[iVar0] = 0f;
		fLocal_100[iVar0] = 0f;
		fLocal_101[iVar0] = 0f;
		fLocal_102[iVar0] = 0f;
		iLocal_139[iVar0] = 0;
		fLocal_103[iVar0] = 0f;
		iLocal_140[iVar0] = 0;
		iLocal_189[iVar0] = 0;
		iLocal_141[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_196[iVar0] = 0;
		iVar0++;
	}
	iLocal_146 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_197[iVar0] = 0;
		Local_164[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_114[iVar0] = 0f;
		fLocal_115[iVar0] = 0f;
		fLocal_116[iVar0] = 0f;
		fLocal_117[iVar0] = 0f;
		iLocal_145[iVar0] = 0;
		iLocal_190[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_199[iVar0] = 0;
		iVar0++;
	}
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_198[iVar0] = 0;
		Local_165[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_108[iVar0] = 0f;
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		iLocal_142[iVar0] = 0;
		fLocal_112[iVar0] = 0f;
		iLocal_143[iVar0] = 0;
		iLocal_191[iVar0] = 0;
		iLocal_144[iVar0] = 0;
		iVar0++;
	}
	iLocal_147 = 0;
	iLocal_150 = 0;
	iLocal_153 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
}

int func_514()//Position - 0x3A630
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	if (((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/))
	{
		return 1;
	}
	__LIB_0__::func_471(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
	{
		return 1;
	}
	return 0;
}

void func_542()//Position - 0x3B7C3
{
	if ((((__LIB_1__::func_183(Local_552.f_0) && __LIB_1__::func_197(Local_544.f_0)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_544.f_0, Local_552.f_0)) && __LIB_1__::func_197(Local_539.f_0)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_539.f_0, Local_552.f_0))
	{
		switch (iLocal_343)
		{
			case 0:
				if (fLocal_282 >= 60550f)
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_552.f_0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_552.f_0, 1, "Pap1RP", true);
						VEHICLE::SET_PLAYBACK_SPEED(Local_552.f_0, fLocal_293);
						func_548(fLocal_294);
						Local_600 = { 0f, 0f, 0f };
						iLocal_343 = 1;
					}
				}
				break;
			case 1:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_552.f_0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(Local_552.f_0, fLocal_293);
					fLocal_294 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_552.f_0);
					func_548(fLocal_294);
					if (fLocal_294 > 21000f)
					{
						__LIB_30__::func_549(Local_600, Local_595, &Local_598, &Local_599, 1000);
						if (__LIB_30__::func_548(Local_598, Local_599))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_552.f_0))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_552.f_0);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "pap1RP");
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_552.f_0, -8f);
							if (__LIB_1__::func_183(Local_550.f_0))
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_550.f_0, 0f);
							}
							STREAMING::REMOVE_PTFX_ASSET();
							AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sLocal_362);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_544.f_0, Local_552.f_0, Local_595, 4, fLocal_280, 34340900, -1f, -1f, true);
							PED::SET_PED_KEEP_TASK(Local_544.f_0, true);
							iLocal_305 = MISC::GET_GAME_TIMER();
							iLocal_319 = MISC::GET_GAME_TIMER();
							if (!iLocal_256)
							{
								__LIB_0__::func_202(&uLocal_366, 4);
								iLocal_256 = 1;
							}
							iLocal_343 = 2;
						}
					}
					else if (fLocal_294 > (21000f - 6000f))
					{
						if (__LIB_0__::func_394(Local_600, 0f, 0f, 0f, 1056964608, 0))
						{
							Local_600 = { ENTITY::GET_ENTITY_COORDS(Local_552.f_0, true) };
						}
						__LIB_30__::func_549(Local_600, Local_595, &Local_598, &Local_599, 1000);
					}
				}
				else
				{
					if (__LIB_0__::func_394(Local_600, 0f, 0f, 0f, 1056964608, 0))
					{
						Local_600 = { ENTITY::GET_ENTITY_COORDS(Local_552.f_0, true) };
					}
					__LIB_30__::func_549(Local_600, Local_595, &Local_598, &Local_599, 1000);
					if (__LIB_30__::func_548(Local_598, Local_599))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "pap1RP");
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_552.f_0, -8f);
						if (__LIB_1__::func_183(Local_550.f_0))
						{
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_550.f_0, 0f);
						}
						STREAMING::REMOVE_PTFX_ASSET();
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sLocal_362);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_544.f_0, Local_552.f_0, Local_595, 4, fLocal_280, 34340900, -1f, -1f, true);
						PED::SET_PED_KEEP_TASK(Local_544.f_0, true);
						iLocal_305 = MISC::GET_GAME_TIMER();
						iLocal_319 = MISC::GET_GAME_TIMER();
						if (!iLocal_256)
						{
							__LIB_0__::func_202(&uLocal_366, 4);
							iLocal_256 = 1;
						}
						iLocal_343 = 2;
					}
				}
				break;
			case 2:
				if (__LIB_4__::func_465(Local_544.f_0, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
				{
					if (__LIB_0__::func_530(Local_544.f_0, Local_595, 65f, 1))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(Local_544.f_0, Local_552.f_0, fLocal_280, 34340900);
						iLocal_343 = 3;
					}
				}
				else
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_544.f_0, Local_552.f_0, fLocal_280, 34340900);
					iLocal_343 = 3;
				}
				func_546();
				if (fLocal_284 < 22f)
				{
					if (__LIB_10__::func_638(iLocal_319, MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000)))
					{
						if (fLocal_284 > 4f)
						{
							if (func_545())
							{
								iLocal_319 = MISC::GET_GAME_TIMER();
								if (__LIB_10__::func_638(iLocal_305, 500))
								{
									if (func_544())
									{
										iLocal_305 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (__LIB_10__::func_638(iLocal_305, MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000)))
					{
						if (func_544())
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
					}
				}
				func_543();
				break;
			case 3:
				if (!__LIB_4__::func_465(Local_544.f_0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_544.f_0, Local_552.f_0, fLocal_280, 34340900);
				}
				func_546();
				if (fLocal_284 < 22f)
				{
					if (__LIB_10__::func_638(iLocal_319, MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000)))
					{
						if (fLocal_284 > 4f)
						{
							if (func_545())
							{
								iLocal_319 = MISC::GET_GAME_TIMER();
								if (__LIB_10__::func_638(iLocal_305, 500))
								{
									if (func_544())
									{
										iLocal_305 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (__LIB_10__::func_638(iLocal_305, MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000)))
					{
						if (func_544())
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
					}
				}
				func_543();
				break;
		}
	}
	else if (iLocal_343 != 4)
	{
		if (__LIB_1__::func_183(Local_552.f_0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_552.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_552.f_0);
			}
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_552.f_0, -8f);
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "pap1RP");
		if (__LIB_1__::func_183(Local_550.f_0))
		{
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_550.f_0, 0f);
		}
		if (__LIB_1__::func_197(Local_539.f_0))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_539.f_0))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_539.f_0);
			}
		}
		STREAMING::REMOVE_PTFX_ASSET();
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sLocal_362);
		if ((__LIB_1__::func_197(Local_544.f_0) && __LIB_1__::func_183(Local_552.f_0)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_544.f_0, Local_552.f_0))
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_544.f_0, Local_552.f_0, 55f, 34340900);
			PED::SET_PED_KEEP_TASK(Local_544.f_0, true);
		}
		iLocal_343 = 4;
	}
}

void func_543()//Position - 0x3BC96
{
	if (__LIB_1__::func_197(Local_539.f_0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 3))
		{
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
			}
			else
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 1.25f);
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 3))
		{
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
			}
			else
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 1.25f);
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "idle", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
		}
	}
}

int func_544()//Position - 0x3BD83
{
	if (__LIB_1__::func_197(Local_539.f_0))
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_539.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_539.f_0))
		{
			__LIB_37__::func_483(&Local_539, "PAP1_DIAA", "Paparazzo1RivalPap", 11);
			return 1;
		}
	}
	return 0;
}

int func_545()//Position - 0x3BDC4
{
	int iVar0;
	char* sVar1;
	if (__LIB_1__::func_197(Local_539.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 3))
		{
			if (!__LIB_10__::func_725(Local_539.f_0, PLAYER::PLAYER_PED_ID(), 85f))
			{
				iVar0 = func_377(Local_552.f_0, ENTITY::GET_ENTITY_COORDS(Local_552.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				if (iVar0 == 1)
				{
					sVar1 = "gesture_behind_right_pap";
				}
				else
				{
					sVar1 = "gesture_behind_left_pap";
				}
				TASK::CLEAR_PED_SECONDARY_TASK(Local_539.f_0);
				TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, sVar1, 8f, -2f, -1, 2, 0f, false, false, false);
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

void func_546()//Position - 0x3BE70
{
	if ((MISC::GET_GAME_TIMER() - iLocal_295) > 0)
	{
		fLocal_280 = func_547();
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_544.f_0, fLocal_280);
		iLocal_295 = MISC::GET_GAME_TIMER();
	}
}

float func_547()//Position - 0x3BE9C
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = 8f;
	fVar2 = 90f;
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
	{
		fVar0 = 45f;
		return fVar0;
	}
	else if (iLocal_338 == 2)
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(Local_552.f_0);
		fVar0 = (fVar0 + 0.2f);
	}
	else if (fLocal_284 < fVar1)
	{
		if (__LIB_1__::func_183(Local_550.f_0))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(Local_550.f_0);
			if (fVar0 < 26f)
			{
				fVar0 = 26f;
			}
		}
	}
	else if (fLocal_284 > (2f * (0.65f * 100f)))
	{
		fVar0 = 10f;
	}
	else if (fLocal_284 > fVar2)
	{
		fVar0 = 18f;
	}
	else
	{
		fVar0 = 26f;
	}
	return fVar0;
}

void func_548(float fParam0)//Position - 0x3BF65
{
	float fVar0;
	struct<3> Var1;
	fVar0 = 3f;
	if (__LIB_1__::func_183(Local_551.f_0))
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_551.f_0, Local_586) };
	}
	switch (iLocal_313)
	{
		case 0:
			if (fParam0 >= 0f)
			{
				if (!__LIB_4__::func_465(Local_539.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
				{
					TASK::TASK_LOOK_AT_COORD(Local_539.f_0, Var1, -1, 0, 2);
					iLocal_312 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_539.f_0, sLocal_350, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 0.25f);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_539.f_0, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_312) > 1000)
					{
						if (iLocal_310 < 3)
						{
							if (__LIB_0__::func_121(Local_539.f_0))
							{
								func_549();
								iLocal_312 = (MISC::GET_GAME_TIMER() - 550);
								iLocal_310++;
								if (iLocal_310 >= 3)
								{
									iLocal_310 = 0;
									iLocal_312 = MISC::GET_GAME_TIMER();
									iLocal_313++;
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_312 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 3))
				{
					iLocal_313++;
					TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_539.f_0, sLocal_350, "gesture_behind_left_pap", 1.25f);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 3))
				{
					iLocal_313++;
					TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_539.f_0, sLocal_350, "gesture_behind_right_pap", 1.25f);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_312) > 1000)
			{
				func_545();
			}
			else if (!__LIB_4__::func_465(Local_539.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
			{
				TASK::TASK_LOOK_AT_COORD(Local_539.f_0, Var1, -1, 0, 2);
				iLocal_312 = MISC::GET_GAME_TIMER();
				TASK::TASK_SWEEP_AIM_POSITION(Local_539.f_0, sLocal_350, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 0.25f);
			}
			else
			{
				TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_539.f_0, Var1);
			}
			break;
		case 2:
			if (fParam0 >= 4500f)
			{
				if (!__LIB_4__::func_465(Local_539.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
				{
					TASK::TASK_LOOK_AT_COORD(Local_539.f_0, Var1, -1, 0, 2);
					iLocal_312 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_539.f_0, sLocal_350, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 0.25f);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_539.f_0, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_312) > 1200)
					{
						if (iLocal_310 < 4)
						{
							if (__LIB_0__::func_121(Local_539.f_0))
							{
								func_549();
								iLocal_312 = (MISC::GET_GAME_TIMER() - 500);
								iLocal_310++;
								if (iLocal_310 >= 4)
								{
									iLocal_310 = 0;
									iLocal_312 = MISC::GET_GAME_TIMER();
									iLocal_313++;
									func_545();
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_312 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
				}
			}
			break;
		case 3:
			if (fParam0 >= 9000f)
			{
				if (!__LIB_4__::func_465(Local_539.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
				{
					TASK::TASK_LOOK_AT_COORD(Local_539.f_0, Var1, -1, 0, 2);
					iLocal_312 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_539.f_0, sLocal_350, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 0.25f);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_539.f_0, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_312) > 1200)
					{
						if (iLocal_310 < 3)
						{
							if (__LIB_0__::func_121(Local_539.f_0))
							{
								func_549();
								iLocal_312 = (MISC::GET_GAME_TIMER() - 500);
								iLocal_310++;
								if (iLocal_310 >= 3)
								{
									iLocal_310 = 0;
									iLocal_312 = MISC::GET_GAME_TIMER();
									iLocal_313++;
									func_545();
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_312 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
				}
			}
			break;
		case 4:
			if (fParam0 >= 17000f)
			{
				if (__LIB_4__::func_465(Local_539.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
				{
					TASK::CLEAR_PED_TASKS(Local_539.f_0);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
				}
				iLocal_313++;
			}
			else if (fParam0 >= 13000f)
			{
				if (!__LIB_4__::func_465(Local_539.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
				{
					TASK::TASK_LOOK_AT_COORD(Local_539.f_0, Var1, -1, 0, 2);
					iLocal_312 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_539.f_0, sLocal_350, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 0.25f);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_539.f_0, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_312) > 1200)
					{
						if (iLocal_310 < 3)
						{
							if (__LIB_0__::func_121(Local_539.f_0))
							{
								func_549();
								iLocal_312 = (MISC::GET_GAME_TIMER() - 500);
								iLocal_310++;
								if (iLocal_310 >= 3)
								{
									iLocal_310 = 0;
									iLocal_312 = MISC::GET_GAME_TIMER();
									iLocal_313++;
									func_545();
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_312 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
				}
			}
			break;
		default:
			if (__LIB_4__::func_465(Local_539.f_0, joaat("SCRIPT_TASK_GENERAL_SWEEP")))
			{
				TASK::CLEAR_PED_TASKS(Local_539.f_0);
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_539.f_0, sLocal_350, "idle", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 4f, -2f, -1, 1, 0f, false, false, false);
			}
			break;
	}
}

void func_549()//Position - 0x3C53F
{
	if (__LIB_0__::func_121(Local_539.f_0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_555.f_0))
		{
			if (__LIB_0__::func_121(Local_556.f_0))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_556.f_0, Local_585, 0f, 0f, 0f, 1f, false, false, false);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_317))
			{
				AUDIO::STOP_SOUND(iLocal_317);
			}
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_362, false, -1))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_317, "CAMERA", PED::GET_PED_BONE_COORDS(Local_539.f_0, 28422, Local_585), sLocal_364, false, 0, false);
			}
		}
	}
}

void func_550(bool bParam0, bool bParam1, float fParam2)//Position - 0x3C5C1
{
	if (__LIB_1__::func_183(Local_551.f_0) && __LIB_1__::func_183(Local_550.f_0))
	{
		fLocal_281 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_551.f_0, true));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
		{
			fLocal_282 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_551.f_0);
			if (bParam1)
			{
				fLocal_293 = fParam2;
			}
			else if (bLocal_271)
			{
				func_561(&fLocal_293, fLocal_281);
			}
			else
			{
				func_556(&fLocal_293, fLocal_281);
			}
			VEHICLE::SET_PLAYBACK_SPEED(Local_551.f_0, fLocal_293);
			func_44();
			iLocal_84 = 1;
			if (fLocal_282 < 1500f)
			{
				func_43();
			}
			func_3(Local_551.f_0, fLocal_293);
			if (bParam0)
			{
				__LIB_39__::func_909(&uLocal_20, Local_551.f_0, 0, 0, 1, 1, 1);
			}
			func_552(fLocal_281);
			func_551(fLocal_282);
		}
	}
}

void func_551(float fParam0)//Position - 0x3C681
{
	int iVar0;
	switch (iLocal_334)
	{
		case 0:
			iLocal_349[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-332.5803f, 207.25702f, 80f, -281.58356f, 257.80222f, 95f, false, true, true, true);
			iLocal_349[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-501.97012f, 184.44948f, 75f, -390.58398f, 241.0636f, 90f, false, true, true, true);
			iLocal_334++;
			break;
		case 1:
			if (fParam0 > 15000f)
			{
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_349[iVar0], false);
					iVar0++;
				}
				iLocal_334++;
			}
			break;
	}
}

void func_552(float fParam0)//Position - 0x3C734
{
	if (__LIB_10__::func_638(iLocal_296, iLocal_297))
	{
		if (__LIB_1__::func_183(Local_550.f_0))
		{
			if (fParam0 < 4f || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_551.f_0, Local_550.f_0))
			{
				iLocal_297 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 3500);
				VEHICLE::START_VEHICLE_HORN(Local_551.f_0, iLocal_297, MISC::GET_HASH_KEY("HELDDOWN"), false);
				iLocal_297 += 4000;
				iLocal_296 = MISC::GET_GAME_TIMER();
				return;
			}
		}
		iLocal_297 = 250;
		iLocal_296 = MISC::GET_GAME_TIMER();
	}
}

void func_556(float fParam0, float fParam1)//Position - 0x3C81D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	fVar0 = *fParam0;
	fVar1 = 0f;
	fVar2 = 0.2f;
	fVar3 = 12f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0.7f;
	bVar7 = true;
	if (iLocal_267 == 0)
	{
		fVar0 = 0.55f;
	}
	else if (fLocal_282 > 53000f)
	{
		fVar1 = 9.5f;
		fVar2 = 18f;
		fVar3 = 32f;
		fVar4 = 1.3f;
		func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (iLocal_344 != 0 || fParam1 > (2f * (0.68f * 100f)))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
		{
			fVar1 = 10f;
			fVar2 = 20f;
			fVar3 = 150f;
			fVar4 = 1.2f;
			func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
		}
		else
		{
			func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
			if (fParam1 > 100f)
			{
				fVar0 = 0.25f;
			}
			if (fParam1 > 40f)
			{
				if (fVar0 > 0.5f)
				{
					fVar0 = 0.5f;
				}
			}
		}
	}
	else if (iLocal_231 && (MISC::GET_GAME_TIMER() - iLocal_320) > 2500)
	{
		fVar4 = 1f;
		fVar2 = 0.6f;
		fVar3 = 18f;
		fVar5 = 5f;
		func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (fParam1 < 4f)
	{
		fVar0 = fVar0;
	}
	else if (fLocal_282 < 11000f)
	{
		fVar5 = 2f;
		fVar6 = 0.6f;
		func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (fLocal_282 < 15000f)
	{
		fVar5 = 1.66f;
		fVar6 = 0.633f;
		func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (fLocal_282 < 20000f)
	{
		fVar5 = 1.33f;
		fVar6 = 0.666f;
		func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else
	{
		func_557(Local_551.f_0, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	*fParam0 = fVar0;
}

void func_557(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x3CAA6
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
	if (iLocal_81 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_81 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_129;
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
			iLocal_82 = 1;
		}
		else if (iLocal_82)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_82 = 0;
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
		fVar8 = ((fLocal_136 * fParam3) * fVar1);
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
		fVar8 = ((fLocal_137 * fParam3) * fVar1);
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
							fVar1 = (fVar1 * (fLocal_127 - fLocal_128));
							fVar1 = (fVar1 + fLocal_128);
							fLocal_126 = fVar1;
							if (fLocal_126 < fLocal_128)
							{
								fLocal_126 = fLocal_128;
							}
							if (fLocal_126 > fLocal_127)
							{
								fLocal_126 = fLocal_127;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_126);
						}
					}
				}
			}
		}
	}
}

void func_561(float fParam0, float fParam1)//Position - 0x3CECF
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = *fParam0;
	fVar1 = (2f * (0.68f * 100f));
	fVar2 = 0.1f;
	if (fLocal_282 > 78000f)
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 9.5f, 18f, 125f, (fVar1 + 50f), 50f, 0.93f, 0.85f, 0.7f, 1.25f, 1, MISC::ABSF(-8f), 15f, 1);
		fVar2 = 0.07f;
	}
	else if (fLocal_282 > 54000f)
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 9.5f, 17f, 32f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.25f, 1, (MISC::ABSF(-8f) + 5f), 20f, 1);
		fVar2 = 0.045f;
	}
	else if (fLocal_282 > 52500f)
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 6.5f, 12f, 32f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.15f, 1, (MISC::ABSF(-8f) + 2.5f), 20f, 1);
		fVar2 = 0.045f;
	}
	else if (fLocal_282 > 51000f)
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 3.5f, 6f, 32f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.05f, 1, MISC::ABSF(-8f), 18f, 1);
		fVar2 = 0.04f;
	}
	else if (fLocal_282 < 7000f)
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 3f, 8f, 22f, fVar1, 30f, 0.93f, 0.6f, 0.5f, 1.25f, 1, 0f, 10f, 1);
		fVar2 = 0.075f;
	}
	else if (iLocal_344 != 0 || fParam1 > (2f * (0.68f * 100f)))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0))
		{
			__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 10f, 20f, 150f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.2f, 1, MISC::ABSF(-8f), 20f, 1);
			fVar2 = 0.45f;
		}
		else
		{
			__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 0f, 0.2f, 5f, fVar1, 30f, 0.93f, 0.6f, 0.5f, 1.2f, 1, MISC::ABSF(-8f), 20f, 1);
			fVar2 = 0.45f;
		}
	}
	else if (iLocal_231 && (MISC::GET_GAME_TIMER() - iLocal_320) > 2500)
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 5f, 10f, 18f, fVar1, 30f, 0.93f, 0.6f, 0.4f, 1.2f, 1, MISC::ABSF(-8f), 15f, 1);
	}
	else if (fParam1 < 4f)
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 0f, 0.5f, 6f, fVar1, 50f, 0.93f, 0.6f, 0.4f, 1.1f, 1, MISC::ABSF(-8f), 15f, 1);
	}
	else
	{
		__LIB_30__::func_550(&fVar0, &Local_550, Local_551.f_0, 0f, 0.5f, 6f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.1f, 1, MISC::ABSF(-8f), 15f, 1);
	}
	__LIB_11__::func_824(fParam0, fVar0, fVar2);
}

void func_564()//Position - 0x3D484
{
	struct<3> Var0;
	func_83();
	if (!iLocal_247)
	{
		func_550(1, 0, 1065353216);
	}
	else
	{
		func_550(0, 0, 1065353216);
	}
	switch (iLocal_226)
	{
		case 0:
			iLocal_246 = 1;
			func_56(1);
			func_567();
			if (__LIB_1__::func_197(Local_531.f_0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_531.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, sLocal_350, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_531.f_0, sLocal_350, "idle", 4f, -2f, -1, 17, 0f, false, false, false);
				}
			}
			iLocal_226 = 1;
			break;
		case 1:
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				fLocal_283 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_531.f_0, true));
				if (!__LIB_1__::func_197(Local_539.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_539.f_0, PLAYER::PLAYER_PED_ID(), false))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_539.f_0, 0, 2))
						{
							iLocal_270 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_539.f_0);
						}
					}
					iLocal_226 = 2;
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_539.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_539.f_0, PLAYER::PLAYER_PED_ID(), false))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_539.f_0, 0, 2))
						{
							iLocal_270 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_539.f_0);
							ENTITY::SET_ENTITY_HEALTH(Local_539.f_0, 0, 0);
						}
					}
					if (!iLocal_270)
					{
						if (!__LIB_1__::func_197(Local_544.f_0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_544.f_0, PLAYER::PLAYER_PED_ID(), false))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_544.f_0, 0, 2))
								{
									iLocal_270 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_544.f_0);
								}
							}
						}
						else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_544.f_0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_544.f_0, PLAYER::PLAYER_PED_ID(), false))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_544.f_0, 0, 2))
								{
									iLocal_270 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_544.f_0);
								}
							}
						}
					}
					iLocal_226 = 2;
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					fLocal_284 = SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(Local_539.f_0, true));
					func_542();
					if (fLocal_282 >= 75250f)
					{
						iLocal_226 = 2;
						return;
					}
					if (!__LIB_1__::func_197(Local_544.f_0))
					{
						if (PED::IS_PED_ON_ANY_BIKE(Local_539.f_0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_539.f_0, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_539.f_0))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_539.f_0);
							}
						}
					}
					else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_544.f_0))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_544.f_0, 0, 0);
						if (PED::IS_PED_ON_ANY_BIKE(Local_539.f_0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_539.f_0, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_539.f_0))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_539.f_0);
							}
						}
					}
				}
				if (!iLocal_247)
				{
					if (fLocal_294 > 1000f)
					{
						__LIB_9__::func_981(&uLocal_20, 0, 0);
						iLocal_247 = 1;
					}
				}
				else
				{
					__LIB_40__::func_938(&uLocal_20, Local_539.f_0, 0, 0, 1, 1, 1);
				}
				func_370();
			}
			break;
		case 2:
			if (bLocal_263)
			{
				func_542();
			}
			if (__LIB_1__::func_197(Local_539.f_0))
			{
				__LIB_39__::func_907(&uLocal_20, Local_539.f_0, 0, 0, 1, 1, 1);
			}
			func_352(3);
			break;
	}
}

void func_567()//Position - 0x3D76C
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_552.f_0))
	{
		MISC::CLEAR_AREA(Local_552.f_3, 2f, true, false, false, false);
		Local_552.f_0 = VEHICLE::CREATE_VEHICLE(Local_552.f_1, Local_552.f_3, 0f, true, true, false);
	}
	if (__LIB_1__::func_183(Local_552.f_0))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_552.f_0, 0.0329f, -0.02f, 0.9542f, -0.2968f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_552.f_0, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(Local_552.f_0, 0, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_552.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_552.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_552.f_0, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_552.f_1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_552.f_0, "PAPARAZZO_1_PAP_BIKE_GROUP", 0f);
		}
	}
	if (__LIB_1__::func_183(Local_552.f_0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_544.f_0))
		{
			Local_544.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_552.f_0, 26, Local_544.f_1, -1, true, true);
		}
		if (__LIB_1__::func_197(Local_544.f_0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_544.f_0, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_544.f_0, false);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_544.f_0, 1);
			PED::SET_PED_HELMET(Local_544.f_0, true);
			PED::GIVE_PED_HELMET(Local_544.f_0, true, 4096, -1);
			PED::SET_PED_CONFIG_FLAG(Local_544.f_0, 42, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_544.f_1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_539.f_0))
		{
			Local_539.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_552.f_0, 26, Local_539.f_1, 0, true, true);
		}
		if (__LIB_1__::func_197(Local_539.f_0))
		{
			PED::SET_PED_HELMET(Local_539.f_0, false);
			PED::SET_PED_COMPONENT_VARIATION(Local_539.f_0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_539.f_0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_539.f_0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_539.f_0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_539.f_0, 9, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_539.f_0, true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_539.f_0, false);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_539.f_0, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_539.f_0, true, 1);
			PED::SET_PED_CONFIG_FLAG(Local_539.f_0, 42, true);
			__LIB_0__::func_203(&uLocal_366, 4, Local_539.f_0, "Paparazzo1RivalPap", 0, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_555.f_0))
			{
				Local_555.f_0 = OBJECT::CREATE_OBJECT(Local_555.f_10, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_539.f_0, 0f, 0f, 2.5f), true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_556.f_0))
			{
				Local_556.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_539.f_0, 0f, 0f, 2.5f) };
				Local_556.f_0 = OBJECT::CREATE_OBJECT(Local_556.f_10, Local_556.f_1, true, true, false);
			}
			if (__LIB_0__::func_121(Local_555.f_0))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_556.f_0, Local_555.f_0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_556.f_0, Local_555.f_0, 0, Local_556.f_4, Local_556.f_7, false, false, false, false, 2, true, 0);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_555.f_0, Local_539.f_0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_555.f_0, Local_539.f_0, PED::GET_PED_BONE_INDEX(Local_539.f_0, 28422), Local_555.f_4, Local_555.f_7, false, false, false, false, 2, true, 0);
				}
			}
			TASK::TASK_PLAY_ANIM(Local_539.f_0, sLocal_350, "idle", 8f, -2f, -1, 1, 0f, false, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_539.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_555.f_10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_556.f_10);
		}
	}
}

void func_569()//Position - 0x3DACF
{
	int iVar0;
	int iVar1;
	func_83();
	switch (iLocal_226)
	{
		case 0:
			if ((__LIB_1__::func_183(Local_551.f_0) && __LIB_1__::func_197(Local_533.f_0)) && __LIB_1__::func_197(Local_532.f_0))
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-416.35278f, 222.04576f, 77.410965f, -284.30087f, 233.32544f, 89.96367f, 80f, false, false, false, false, false, 0, 0);
				func_576(sLocal_365, 1, 0, 1);
				func_575();
				func_574(1);
				func_573(joaat("A_M_M_BevHills_02"));
				iLocal_87 = 1;
				iLocal_93 = 1;
				fLocal_130 = 285f;
				func_572(1, 0, -1);
				func_571(1);
				func_44();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_551.f_0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_551.f_0, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_551.f_0, 1, sLocal_365, true);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_551.f_0, true);
					func_43();
					fLocal_293 = 0.5f;
					VEHICLE::SET_PLAYBACK_SPEED(Local_551.f_0, fLocal_293);
					func_3(Local_551.f_0, fLocal_293);
				}
			}
			if (__LIB_1__::func_197(Local_532.f_0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_532.f_0, 3, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_532.f_0, 20, true);
			}
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, true);
			if (__LIB_1__::func_183(Local_550.f_0))
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_550.f_0, -8f);
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_551.f_0, "PAPARAZZO_1_LIMO_GROUP", 0f);
			iLocal_325 = MISC::GET_GAME_TIMER();
			STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &iVar0, -1);
			if (IntToFloat(iVar0) < 4.5f)
			{
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.2f, true, 0);
			}
			if (__LIB_1__::func_197(Local_531.f_0))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			if (!__LIB_0__::func_295() && bLocal_263)
			{
				func_82(0);
			}
			__LIB_0__::func_54(0, 1);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 0);
			iLocal_226 = 1;
			break;
		case 1:
			if ((((__LIB_1__::func_183(Local_550.f_0) && __LIB_1__::func_183(Local_551.f_0)) && __LIB_1__::func_197(Local_532.f_0)) && __LIB_1__::func_197(Local_533.f_0)) && __LIB_1__::func_197(Local_531.f_0))
			{
				if (__LIB_0__::func_530(Local_551.f_0, Local_552.f_3, 250f, 1))
				{
					func_56(0);
				}
				fLocal_283 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_531.f_0, true));
				func_550(1, 0, 1065353216);
				if (!iLocal_267)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_550.f_2))
					{
						Local_550.f_2 = __LIB_10__::func_727(Local_550.f_0, 1, 5);
					}
					if (!bLocal_237)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_6__::func_771();
						}
						if (__LIB_10__::func_638(iLocal_325, 500))
						{
							if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_BBF1", 7, 0, 0, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								bLocal_237 = true;
							}
						}
					}
					else if (!iLocal_251)
					{
						if (!__LIB_0__::func_75())
						{
							if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
							}
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0, true) && Local_550.f_0 != iVar1)
							{
								__LIB_0__::func_210("PAP1_10", 7500, 1);
							}
							iLocal_302 = MISC::GET_GAME_TIMER();
							iLocal_251 = 1;
						}
					}
					if (__LIB_0__::func_75())
					{
						iLocal_302 = MISC::GET_GAME_TIMER();
					}
					else if (bLocal_237)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_302) > 1000)
						{
							if (fLocal_283 < 20f)
							{
								if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0, false))
								{
									if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_IG5", 7, __LIB_30__::func_420(), 0, 0))
									{
										iLocal_302 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0) || (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_550.f_0, true)))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						__LIB_0__::func_523(&(Local_550.f_2));
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, &cLocal_564, &cLocal_568, 3))
						{
							TASK::STOP_ANIM_TASK(Local_531.f_0, &cLocal_564, &cLocal_568, -2f);
						}
						TASK::TASK_CLEAR_LOOK_AT(Local_531.f_0);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
						func_87();
						if (func_482("PAP1_IG5"))
						{
							__LIB_6__::func_833();
						}
						if (!__LIB_0__::func_295() && bLocal_263)
						{
							func_82(1);
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
						{
							AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_INTRO");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
						{
							if (!__LIB_0__::func_295() && bLocal_263)
							{
								AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_CHASE");
							}
						}
						iLocal_267 = 1;
					}
					else
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (__LIB_0__::func_508(Local_531.f_0, PLAYER::PLAYER_PED_ID(), 4.5f, 1))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, &cLocal_564, &cLocal_568, 3))
							{
							}
							else
							{
								if (!PED::IS_PED_FACING_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1);
									}
								}
								PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
							}
						}
						else if (__LIB_10__::func_638(iLocal_325, 250))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_531.f_0, &cLocal_564, &cLocal_568, 3))
							{
								if (!PED::IS_PED_FACING_PED(Local_531.f_0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									if (!__LIB_4__::func_465(Local_531.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_531.f_0, PLAYER::PLAYER_PED_ID(), -1);
									}
								}
								else if (__LIB_10__::func_638(iLocal_321, 3000))
								{
									if (func_190("", 8f, -2f, -1, 0, 0, 0, 0))
									{
										iLocal_321 = MISC::GET_GAME_TIMER();
									}
								}
								PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
							}
							else
							{
								iLocal_321 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else
				{
					func_370();
				}
				func_570(Local_532.f_0);
				if (fLocal_282 >= 56000f)
				{
					iLocal_226 = 2;
					return;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_594, true) < 28f)
				{
					iLocal_226 = 2;
				}
			}
			break;
		case 2:
			func_550(1, 0, 1065353216);
			STREAMING::REQUEST_MODEL(Local_552.f_1);
			func_352(2);
			break;
	}
}

void func_570(int iParam0)//Position - 0x3E092
{
	if (__LIB_1__::func_197(iParam0))
	{
		switch (iLocal_342)
		{
			case 0:
				STREAMING::REQUEST_MODEL(Local_557.f_10);
				if (STREAMING::HAS_MODEL_LOADED(Local_557.f_10))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_557.f_0))
					{
						Local_557.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 2.5f) };
						Local_557.f_0 = OBJECT::CREATE_OBJECT(Local_557.f_10, Local_557.f_1, true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_557.f_0, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 28422), Local_557.f_4, Local_557.f_7, false, false, false, false, 2, true, 0);
					}
					if (__LIB_0__::func_121(Local_557.f_0))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_557.f_0, true, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_557.f_0, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_557.f_10);
						STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo1ig_4");
						iLocal_342 = 1;
					}
				}
				break;
			case 1:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", 3))
				{
					STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo1ig_4");
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo1ig_4"))
					{
						TASK::TASK_PLAY_ANIM(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", 8f, -8f, -1, 1, 0f, false, false, false);
						STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo1ig_4");
					}
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", -8f);
				}
				STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo1ig_4");
				__LIB_20__::func_240(&Local_557, 0);
				break;
			}
	}
}

void func_571(bool bParam0)//Position - 0x3E1F6
{
	bLocal_98 = bParam0;
}

void func_572(bool bParam0, int iParam1, int iParam2)//Position - 0x3E202
{
	if (bParam0)
	{
		iLocal_88 = 1;
		iLocal_193 = iParam1;
		iLocal_194 = iParam2;
	}
}

void func_573(int iParam0)//Position - 0x3E21C
{
	iLocal_192 = iParam0;
}

void func_574(bool bParam0)//Position - 0x3E229
{
	bLocal_92 = bParam0;
}

void func_575()//Position - 0x3E235
{
	Local_163[0 /*3*/] = { -269.2346f, 272.0872f, 90.3265f };
	fLocal_99[0] = -0.0287f;
	fLocal_100[0] = -0.0274f;
	fLocal_101[0] = 0.7214f;
	fLocal_102[0] = 0.6914f;
	iLocal_139[0] = 3;
	fLocal_103[0] = 0f;
	iLocal_189[0] = joaat("baller");
	Local_163[1 /*3*/] = { -226.7559f, 292.0566f, 92.0173f };
	fLocal_99[1] = 0f;
	fLocal_100[1] = 0f;
	fLocal_101[1] = 0.9999f;
	fLocal_102[1] = 0.0119f;
	iLocal_139[1] = 2;
	fLocal_103[1] = 500f;
	iLocal_189[1] = joaat("baller");
	Local_163[2 /*3*/] = { -318.0732f, 258.0473f, 86.6976f };
	fLocal_99[2] = -0.0322f;
	fLocal_100[2] = -0.0153f;
	fLocal_101[2] = 0.8131f;
	fLocal_102[2] = 0.581f;
	iLocal_139[2] = 4;
	fLocal_103[2] = 500f;
	iLocal_189[2] = joaat("ninef2");
	Local_163[3 /*3*/] = { -382.6178f, 231.0619f, 83.6473f };
	fLocal_99[3] = 0.0066f;
	fLocal_100[3] = -0.008f;
	fLocal_101[3] = -0.6558f;
	fLocal_102[3] = 0.7548f;
	iLocal_139[3] = 6;
	fLocal_103[3] = 6072f;
	iLocal_189[3] = joaat("jackal");
	Local_163[4 /*3*/] = { -472.6657f, 252.0544f, 82.8362f };
	fLocal_99[4] = 0.0018f;
	fLocal_100[4] = 0.0015f;
	fLocal_101[4] = 0.6633f;
	fLocal_102[4] = 0.7483f;
	iLocal_139[4] = 7;
	fLocal_103[4] = 9108f;
	iLocal_189[4] = joaat("buffalo");
	Local_163[5 /*3*/] = { -538.8723f, 199.7826f, 75.3031f };
	fLocal_99[5] = 0.1322f;
	fLocal_100[5] = 0.0002f;
	fLocal_101[5] = -0.0192f;
	fLocal_102[5] = 0.991f;
	iLocal_139[5] = 10;
	fLocal_103[5] = 11088f;
	iLocal_189[5] = joaat("tornado");
	Local_163[6 /*3*/] = { -539.8965f, 255.4054f, 82.4098f };
	fLocal_99[6] = -0.0007f;
	fLocal_100[6] = -0.0014f;
	fLocal_101[6] = 0.9581f;
	fLocal_102[6] = 0.2865f;
	iLocal_139[6] = 9;
	fLocal_103[6] = 12750f;
	iLocal_189[6] = joaat("sentinel");
	Local_163[7 /*3*/] = { -539.5698f, 280.9452f, 82.5083f };
	fLocal_99[7] = -0.0001f;
	fLocal_100[7] = -0.0001f;
	fLocal_101[7] = 0.9992f;
	fLocal_102[7] = 0.0409f;
	iLocal_139[7] = 11;
	fLocal_103[7] = 12850f;
	iLocal_189[7] = joaat("serrano");
	Local_163[8 /*3*/] = { -633.0772f, 271.1177f, 81.5183f };
	fLocal_99[8] = -0.0052f;
	fLocal_100[8] = -0.0044f;
	fLocal_101[8] = 0.6509f;
	fLocal_102[8] = 0.7591f;
	iLocal_139[8] = 13;
	fLocal_103[8] = 13900f;
	iLocal_189[8] = joaat("baller");
	Local_163[9 /*3*/] = { -613.1815f, 267.2222f, 81.5335f };
	fLocal_99[9] = -0.0084f;
	fLocal_100[9] = -0.0079f;
	fLocal_101[9] = 0.5968f;
	fLocal_102[9] = 0.8023f;
	iLocal_139[9] = 12;
	fLocal_103[9] = 14000f;
	iLocal_189[9] = joaat("tornado");
	Local_163[10 /*3*/] = { -667.2612f, 252.6343f, 81.1762f };
	fLocal_99[10] = 0.0074f;
	fLocal_100[10] = -0.0049f;
	fLocal_101[10] = -0.5581f;
	fLocal_102[10] = 0.8298f;
	iLocal_139[10] = 14;
	fLocal_103[10] = 15048f;
	iLocal_189[10] = joaat("tornado");
	Local_163[11 /*3*/] = { -775.299f, 210.8092f, 75.4151f };
	fLocal_99[11] = -0.0047f;
	fLocal_100[11] = 0.0035f;
	fLocal_101[11] = -0.6623f;
	fLocal_102[11] = 0.7492f;
	iLocal_139[11] = 16;
	fLocal_103[11] = 18810f;
	iLocal_189[11] = joaat("serrano");
	Local_163[12 /*3*/] = { -774.7975f, 206.4167f, 75.4047f };
	fLocal_99[12] = -0.0066f;
	fLocal_100[12] = 0.0056f;
	fLocal_101[12] = -0.6593f;
	fLocal_102[12] = 0.7518f;
	iLocal_139[12] = 17;
	fLocal_103[12] = 18876f;
	iLocal_189[12] = joaat("buffalo");
	Local_163[13 /*3*/] = { -745.6793f, 217.5777f, 75.4614f };
	fLocal_99[13] = -0.0008f;
	fLocal_100[13] = 0.0004f;
	fLocal_101[13] = -0.58f;
	fLocal_102[13] = 0.8146f;
	iLocal_139[13] = 18;
	fLocal_103[13] = 19074f;
	iLocal_189[13] = joaat("tornado");
	Local_163[14 /*3*/] = { -805.5899f, 219.7039f, 75.2721f };
	fLocal_99[14] = -0.0093f;
	fLocal_100[14] = -0.0083f;
	fLocal_101[14] = 0.6901f;
	fLocal_102[14] = 0.7236f;
	iLocal_139[14] = 19;
	fLocal_103[14] = 20000f;
	iLocal_189[14] = joaat("serrano");
	Local_163[15 /*3*/] = { -839.769f, 218.3051f, 73.4582f };
	fLocal_99[15] = -0.0132f;
	fLocal_100[15] = -0.0118f;
	fLocal_101[15] = 0.6663f;
	fLocal_102[15] = 0.7455f;
	iLocal_139[15] = 20;
	fLocal_103[15] = 20460f;
	iLocal_189[15] = joaat("emperor");
	Local_163[16 /*3*/] = { -856.8807f, 196.2786f, 72.608f };
	fLocal_99[16] = 0.1009f;
	fLocal_100[16] = -0.002f;
	fLocal_101[16] = -0.0453f;
	fLocal_102[16] = 0.9939f;
	iLocal_139[16] = 21;
	fLocal_103[16] = 21400f;
	iLocal_189[16] = joaat("tornado");
	Local_163[17 /*3*/] = { -858.5552f, 173.0333f, 67.9306f };
	fLocal_99[17] = 0.1077f;
	fLocal_100[17] = 0.0013f;
	fLocal_101[17] = -0.0262f;
	fLocal_102[17] = 0.9938f;
	iLocal_139[17] = 22;
	fLocal_103[17] = 21648f;
	iLocal_189[17] = joaat("tornado");
	Local_163[18 /*3*/] = { -867.54f, 233.63f, 73.38f };
	fLocal_99[18] = 0.0029f;
	fLocal_100[18] = 0.0017f;
	fLocal_101[18] = 0.7365f;
	fLocal_102[18] = 0.6764f;
	iLocal_139[18] = 15;
	fLocal_103[18] = 22000f;
	iLocal_189[18] = joaat("jackal");
	Local_163[19 /*3*/] = { -885.0156f, 216.7224f, 72.9075f };
	fLocal_99[19] = -0.0254f;
	fLocal_100[19] = 0.0404f;
	fLocal_101[19] = 0.8137f;
	fLocal_102[19] = -0.5793f;
	iLocal_139[19] = 24;
	fLocal_103[19] = 22242f;
	iLocal_189[19] = joaat("tornado");
	Local_163[20 /*3*/] = { -935.3688f, 242.8499f, 69.7386f };
	fLocal_99[20] = -0.0029f;
	fLocal_100[20] = 0.0039f;
	fLocal_101[20] = 0.8121f;
	fLocal_102[20] = -0.5835f;
	iLocal_139[20] = 25;
	fLocal_103[20] = 23562f;
	iLocal_189[20] = joaat("serrano");
	Local_163[21 /*3*/] = { -1106.0233f, 267.2069f, 63.9306f };
	fLocal_99[21] = 0.0322f;
	fLocal_100[21] = -0.0271f;
	fLocal_101[21] = 0.7282f;
	fLocal_102[21] = -0.6841f;
	iLocal_139[21] = 26;
	fLocal_103[21] = 29367f;
	iLocal_189[21] = joaat("f620");
	Local_163[22 /*3*/] = { -1146.9456f, 244.4222f, 66.2596f };
	fLocal_99[22] = -0.0129f;
	fLocal_100[22] = 0.0093f;
	fLocal_101[22] = -0.5717f;
	fLocal_102[22] = 0.8203f;
	iLocal_139[22] = 27;
	fLocal_103[22] = 31149f;
	iLocal_189[22] = joaat("ninef2");
	Local_163[23 /*3*/] = { -1146.5225f, 280.703f, 66.1987f };
	fLocal_99[23] = 0.0065f;
	fLocal_100[23] = -0.0253f;
	fLocal_101[23] = 0.9996f;
	fLocal_102[23] = -0.0069f;
	iLocal_139[23] = 5;
	fLocal_103[23] = 31553f;
	iLocal_189[23] = joaat("tornado");
	Local_163[24 /*3*/] = { -1184.5457f, 240.2789f, 67.3019f };
	fLocal_99[24] = 0.0027f;
	fLocal_100[24] = -0.0023f;
	fLocal_101[24] = -0.6313f;
	fLocal_102[24] = 0.7755f;
	iLocal_139[24] = 28;
	fLocal_103[24] = 33000f;
	iLocal_189[24] = joaat("rapidgt2");
	Local_163[25 /*3*/] = { -1233.5752f, 227.3869f, 64.6991f };
	fLocal_99[25] = 0.0322f;
	fLocal_100[25] = -0.0193f;
	fLocal_101[25] = -0.6721f;
	fLocal_102[25] = 0.7395f;
	iLocal_139[25] = 29;
	fLocal_103[25] = 34317f;
	iLocal_189[25] = joaat("rapidgt2");
	Local_163[26 /*3*/] = { -1384.7358f, 225.24f, 58.3821f };
	fLocal_99[26] = 0.0071f;
	fLocal_100[26] = -0.0076f;
	fLocal_101[26] = 0.9563f;
	fLocal_102[26] = 0.2922f;
	iLocal_139[26] = 8;
	fLocal_103[26] = 40977f;
	iLocal_189[26] = joaat("rapidgt2");
	Local_163[27 /*3*/] = { -1428.7577f, 129.0681f, 52.6718f };
	fLocal_99[27] = 0.0301f;
	fLocal_100[27] = -0.0057f;
	fLocal_101[27] = -0.1124f;
	fLocal_102[27] = 0.9932f;
	iLocal_139[27] = 37;
	fLocal_103[27] = 44235f;
	iLocal_189[27] = joaat("jackal");
	Local_163[28 /*3*/] = { -1415.9232f, -38.1466f, 52.6835f };
	fLocal_99[28] = -0.0344f;
	fLocal_100[28] = -0.0023f;
	fLocal_101[28] = 0.1209f;
	fLocal_102[28] = 0.9921f;
	iLocal_139[28] = 38;
	fLocal_103[28] = 46875f;
	iLocal_189[28] = joaat("jackal");
	Local_163[29 /*3*/] = { -1461.8724f, -1.2539f, 53.115f };
	fLocal_99[29] = -0.0285f;
	fLocal_100[29] = 0.0263f;
	fLocal_101[29] = -0.6578f;
	fLocal_102[29] = 0.7522f;
	iLocal_139[29] = 30;
	fLocal_103[29] = 48436f;
	iLocal_189[29] = joaat("f620");
	Local_163[30 /*3*/] = { -1483.0806f, -3.5968f, 54.859f };
	fLocal_99[30] = -0.0293f;
	fLocal_100[30] = 0.0225f;
	fLocal_101[30] = -0.6524f;
	fLocal_102[30] = 0.757f;
	iLocal_139[30] = 32;
	fLocal_103[30] = 48700f;
	iLocal_189[30] = joaat("f620");
	Local_163[31 /*3*/] = { -1414.1544f, -55.0295f, 52.6736f };
	fLocal_99[31] = -0.0002f;
	fLocal_100[31] = 0.0041f;
	fLocal_101[31] = 0.9726f;
	fLocal_102[31] = -0.2324f;
	iLocal_139[31] = 34;
	fLocal_103[31] = 50284f;
	iLocal_189[31] = joaat("rapidgt2");
	Local_163[32 /*3*/] = { -1396.2426f, -76.9218f, 52.4577f };
	fLocal_99[32] = 0.002f;
	fLocal_100[32] = 0.0013f;
	fLocal_101[32] = -0.3998f;
	fLocal_102[32] = 0.9166f;
	iLocal_139[32] = 35;
	fLocal_103[32] = 51274f;
	iLocal_189[32] = joaat("rapidgt2");
	Local_163[33 /*3*/] = { -1493.3682f, -117.2529f, 50.9595f };
	fLocal_99[33] = 0.0127f;
	fLocal_100[33] = 0.02f;
	fLocal_101[33] = 0.9109f;
	fLocal_102[33] = 0.412f;
	iLocal_139[33] = 23;
	fLocal_103[33] = 55000f;
	iLocal_189[33] = joaat("rapidgt2");
	Local_163[34 /*3*/] = { -1540.3041f, -198.9243f, 54.7733f };
	fLocal_99[34] = 0.029f;
	fLocal_100[34] = 0.0106f;
	fLocal_101[34] = 0.3732f;
	fLocal_102[34] = 0.9272f;
	iLocal_139[34] = 39;
	fLocal_103[34] = 56554f;
	iLocal_189[34] = joaat("f620");
	Local_163[35 /*3*/] = { -1598.0374f, -225.209f, 54.481f };
	fLocal_99[35] = 0.013f;
	fLocal_100[35] = -0.0017f;
	fLocal_101[35] = -0.2635f;
	fLocal_102[35] = 0.9646f;
	iLocal_139[35] = 41;
	fLocal_103[35] = 59722f;
	iLocal_189[35] = joaat("rapidgt2");
	Local_163[36 /*3*/] = { -1659.9841f, -349.6841f, 49.2819f };
	fLocal_99[36] = 0.0142f;
	fLocal_100[36] = -0.0097f;
	fLocal_101[36] = -0.4908f;
	fLocal_102[36] = 0.8711f;
	iLocal_139[36] = 44;
	fLocal_103[36] = 63220f;
	iLocal_189[36] = joaat("rocoto");
	Local_163[37 /*3*/] = { -1597.304f, -303.3082f, 50.039f };
	fLocal_99[37] = 0.0527f;
	fLocal_100[37] = 0.0303f;
	fLocal_101[37] = 0.3903f;
	fLocal_102[37] = 0.9187f;
	iLocal_139[37] = 31;
	fLocal_103[37] = 63577f;
	iLocal_189[37] = joaat("rapidgt2");
	Local_163[38 /*3*/] = { -1690.8268f, -361.693f, 47.932f };
	fLocal_99[38] = 0.0122f;
	fLocal_100[38] = -0.0118f;
	fLocal_101[38] = -0.6151f;
	fLocal_102[38] = 0.7883f;
	iLocal_139[38] = 47;
	fLocal_103[38] = 64012f;
	iLocal_189[38] = joaat("rapidgt2");
	Local_163[39 /*3*/] = { -1679.7949f, -344.0163f, 48.5221f };
	fLocal_99[39] = -0.0063f;
	fLocal_100[39] = -0.0182f;
	fLocal_101[39] = 0.7411f;
	fLocal_102[39] = 0.6711f;
	iLocal_139[39] = 45;
	fLocal_103[39] = 64150f;
	iLocal_189[39] = joaat("f620");
	Local_163[40 /*3*/] = { -1731.0199f, -428.0725f, 43.3807f };
	fLocal_99[40] = 0.0134f;
	fLocal_100[40] = 0.0047f;
	fLocal_101[40] = -0.3262f;
	fLocal_102[40] = 0.9452f;
	iLocal_139[40] = 55;
	fLocal_103[40] = 66572f;
	iLocal_189[40] = joaat("rocoto");
	Local_163[41 /*3*/] = { -1798.4171f, -458.2988f, 41.0861f };
	fLocal_99[41] = -0.0036f;
	fLocal_100[41] = -0.0442f;
	fLocal_101[41] = 0.8837f;
	fLocal_102[41] = -0.466f;
	iLocal_139[41] = 49;
	fLocal_103[41] = 68266f;
	iLocal_189[41] = joaat("f620");
	Local_163[42 /*3*/] = { -1718.5543f, -516.9016f, 37.0122f };
	fLocal_99[42] = 0.0053f;
	fLocal_100[42] = 0.0289f;
	fLocal_101[42] = 0.3998f;
	fLocal_102[42] = 0.9161f;
	iLocal_139[42] = 40;
	fLocal_103[42] = 69540f;
	iLocal_189[42] = joaat("f620");
	Local_163[43 /*3*/] = { -1667.6849f, -555.511f, 34.1023f };
	fLocal_99[43] = 0.0205f;
	fLocal_100[43] = 0.0384f;
	fLocal_101[43] = 0.4254f;
	fLocal_102[43] = 0.904f;
	iLocal_139[43] = 56;
	fLocal_103[43] = 73040f;
	iLocal_189[43] = joaat("rocoto");
	Local_163[44 /*3*/] = { -1647.0862f, -565.3936f, 32.9925f };
	fLocal_99[44] = -0.0032f;
	fLocal_100[44] = -0.0033f;
	fLocal_101[44] = 0.9523f;
	fLocal_102[44] = 0.305f;
	iLocal_139[44] = 50;
	fLocal_103[44] = 74836f;
	iLocal_189[44] = joaat("rapidgt2");
	Local_163[45 /*3*/] = { -1606.4623f, -607.856f, 31.5569f };
	fLocal_99[45] = 0.022f;
	fLocal_100[45] = 0.0106f;
	fLocal_101[45] = 0.4308f;
	fLocal_102[45] = 0.9021f;
	iLocal_139[45] = 51;
	fLocal_103[45] = 75166f;
	iLocal_189[45] = joaat("rapidgt2");
	Local_163[46 /*3*/] = { -1594.0869f, -521.4292f, 34.9854f };
	fLocal_99[46] = -0.0077f;
	fLocal_100[46] = -0.0061f;
	fLocal_101[46] = 0.8805f;
	fLocal_102[46] = 0.4739f;
	iLocal_139[46] = 33;
	fLocal_103[46] = 75476f;
	iLocal_189[46] = joaat("rapidgt2");
	Local_163[47 /*3*/] = { -1546.9274f, -671.7556f, 28.4704f };
	fLocal_99[47] = 0.002f;
	fLocal_100[47] = -0.0044f;
	fLocal_101[47] = 0.9056f;
	fLocal_102[47] = -0.4241f;
	iLocal_139[47] = 54;
	fLocal_103[47] = 78004f;
	iLocal_189[47] = joaat("rapidgt2");
	Local_164[0 /*3*/] = { -283.4568f, 251.5497f, 88.9099f };
	fLocal_114[0] = 0.0365f;
	fLocal_115[0] = -0.0067f;
	fLocal_116[0] = -0.6704f;
	fLocal_117[0] = 0.7411f;
	iLocal_190[0] = joaat("ninef2");
	Local_164[1 /*3*/] = { -339.4699f, 293.5367f, 85.4549f };
	fLocal_114[1] = 0.0214f;
	fLocal_115[1] = -0.0196f;
	fLocal_116[1] = -0.6993f;
	fLocal_117[1] = 0.7142f;
	iLocal_190[1] = joaat("baller");
	Local_164[2 /*3*/] = { -349.3771f, 286.2561f, 84.4616f };
	fLocal_114[2] = -0.0255f;
	fLocal_115[2] = -0.0264f;
	fLocal_116[2] = 0.698f;
	fLocal_117[2] = 0.7152f;
	iLocal_190[2] = joaat("emperor");
	Local_164[3 /*3*/] = { -365.4896f, 231.2178f, 84.2379f };
	fLocal_114[3] = 0.0266f;
	fLocal_115[3] = 0.0114f;
	fLocal_116[3] = -0.6726f;
	fLocal_117[3] = 0.7394f;
	iLocal_190[3] = joaat("jackal");
	Local_164[4 /*3*/] = { -438.549f, 254.1521f, 82.2881f };
	fLocal_114[4] = -0.0259f;
	fLocal_115[4] = 0.0162f;
	fLocal_116[4] = 0.6577f;
	fLocal_117[4] = 0.7527f;
	iLocal_190[4] = joaat("sentinel");
	Local_164[5 /*3*/] = { -1501.3237f, -686.0034f, 27.149f };
	fLocal_114[5] = 0.0131f;
	fLocal_115[5] = 0.0418f;
	fLocal_116[5] = 0.46f;
	fLocal_117[5] = 0.8869f;
	iLocal_190[5] = joaat("mesa");
	Local_164[6 /*3*/] = { -501.7928f, 241.8177f, 82.6462f };
	fLocal_114[6] = -0.0166f;
	fLocal_115[6] = -0.0207f;
	fLocal_116[6] = 0.7367f;
	fLocal_117[6] = -0.6758f;
	iLocal_190[6] = joaat("jackal");
	Local_164[7 /*3*/] = { -488.9706f, 270.0654f, 82.7035f };
	fLocal_114[7] = -0.0005f;
	fLocal_115[7] = -0.0128f;
	fLocal_116[7] = 0.7263f;
	fLocal_117[7] = -0.6873f;
	iLocal_190[7] = joaat("emperor");
	Local_164[8 /*3*/] = { -573.4771f, 269.1175f, 82.3261f };
	fLocal_114[8] = -0.0337f;
	fLocal_115[8] = 0.0059f;
	fLocal_116[8] = 0.6577f;
	fLocal_117[8] = 0.7525f;
	iLocal_190[8] = joaat("rapidgt2");
	Local_164[9 /*3*/] = { -608.2574f, 252.178f, 81.3708f };
	fLocal_114[9] = -0.0217f;
	fLocal_115[9] = -0.0091f;
	fLocal_116[9] = 0.7397f;
	fLocal_117[9] = -0.6725f;
	iLocal_190[9] = joaat("rapidgt2");
	Local_164[10 /*3*/] = { -684.0115f, 237.1335f, 80.5793f };
	fLocal_114[10] = 0.0148f;
	fLocal_115[10] = 0.014f;
	fLocal_116[10] = -0.5278f;
	fLocal_117[10] = 0.8491f;
	iLocal_190[10] = joaat("jackal");
	Local_164[11 /*3*/] = { -687.9144f, 293.193f, 82.1187f };
	fLocal_114[11] = 0.006f;
	fLocal_115[11] = 0.0308f;
	fLocal_116[11] = 0.6746f;
	fLocal_117[11] = 0.7375f;
	iLocal_190[11] = joaat("ninef2");
	Local_164[12 /*3*/] = { -699.9624f, 258.1157f, 80.4591f };
	fLocal_114[12] = -0.0385f;
	fLocal_115[12] = -0.0023f;
	fLocal_116[12] = 0.8429f;
	fLocal_117[12] = 0.5367f;
	iLocal_190[12] = joaat("jackal");
	Local_164[13 /*3*/] = { -707.4021f, 254.6637f, 80.0296f };
	fLocal_114[13] = -0.0446f;
	fLocal_115[13] = 0.0053f;
	fLocal_116[13] = 0.8525f;
	fLocal_117[13] = 0.5207f;
	iLocal_190[13] = joaat("ninef2");
	Local_164[14 /*3*/] = { -726.7914f, 295.457f, 84.471f };
	fLocal_114[14] = -0.0084f;
	fLocal_115[14] = 0.0234f;
	fLocal_116[14] = 0.7017f;
	fLocal_117[14] = 0.712f;
	iLocal_190[14] = joaat("jackal");
	Local_164[15 /*3*/] = { -727.1002f, 245.5221f, 77.8995f };
	fLocal_114[15] = -0.071f;
	fLocal_115[15] = -0.0493f;
	fLocal_116[15] = 0.8491f;
	fLocal_117[15] = 0.521f;
	iLocal_190[15] = joaat("rapidgt2");
	Local_164[16 /*3*/] = { -1248.6432f, 253.0192f, 63.5542f };
	fLocal_114[16] = -0.0102f;
	fLocal_115[16] = -0.0354f;
	fLocal_116[16] = 0.2844f;
	fLocal_117[16] = 0.958f;
	iLocal_190[16] = joaat("rapidgt2");
	Local_164[17 /*3*/] = { -1480.4155f, -610.0646f, 30.5239f };
	fLocal_114[17] = -0.026f;
	fLocal_115[17] = 0.0011f;
	fLocal_116[17] = 0.8868f;
	fLocal_117[17] = 0.4614f;
	iLocal_190[17] = joaat("rocoto");
	Local_164[18 /*3*/] = { -1590.7861f, -644.4308f, 29.8759f };
	fLocal_114[18] = -0.0146f;
	fLocal_115[18] = -0.0321f;
	fLocal_116[18] = 0.8915f;
	fLocal_117[18] = -0.4517f;
	iLocal_190[18] = joaat("rocoto");
	Local_164[19 /*3*/] = { -1509.8171f, -679.0406f, 27.7404f };
	fLocal_114[19] = 0.0124f;
	fLocal_115[19] = 0.0412f;
	fLocal_116[19] = 0.4361f;
	fLocal_117[19] = 0.8989f;
	iLocal_190[19] = joaat("mesa");
	Local_164[20 /*3*/] = { -1288.8661f, 266.9813f, 63.7359f };
	fLocal_114[20] = 0.0373f;
	fLocal_115[20] = -0.0101f;
	fLocal_116[20] = -0.2742f;
	fLocal_117[20] = 0.9609f;
	iLocal_190[20] = joaat("rapidgt2");
	Local_164[21 /*3*/] = { -1608.5123f, -630.4704f, 30.6462f };
	fLocal_114[21] = -0.0159f;
	fLocal_115[21] = -0.032f;
	fLocal_116[21] = 0.881f;
	fLocal_117[21] = -0.4718f;
	iLocal_190[21] = joaat("mesa");
	Local_164[22 /*3*/] = { -1351.0996f, 244.0114f, 59.8691f };
	fLocal_114[22] = -0.022f;
	fLocal_115[22] = -0.0512f;
	fLocal_116[22] = 0.9952f;
	fLocal_117[22] = -0.081f;
	iLocal_190[22] = joaat("rapidgt2");
	Local_164[23 /*3*/] = { -1580.1294f, -214.9907f, 54.3721f };
	fLocal_114[23] = 0.0235f;
	fLocal_115[23] = 0.0162f;
	fLocal_116[23] = -0.3399f;
	fLocal_117[23] = 0.94f;
	iLocal_190[23] = joaat("rapidgt2");
	Local_164[24 /*3*/] = { -1584.4117f, -220.3301f, 54.2076f };
	fLocal_114[24] = 0.0181f;
	fLocal_115[24] = 0.0231f;
	fLocal_116[24] = -0.3403f;
	fLocal_117[24] = 0.9399f;
	iLocal_190[24] = joaat("rapidgt2");
	Local_164[25 /*3*/] = { -1644.8414f, -347.85f, 49.4095f };
	fLocal_114[25] = 0.0212f;
	fLocal_115[25] = 0.0147f;
	fLocal_116[25] = -0.44f;
	fLocal_117[25] = 0.8976f;
	iLocal_190[25] = joaat("rapidgt2");
	Local_164[26 /*3*/] = { -1684.9635f, -570.7172f, 34.4679f };
	fLocal_114[26] = -0.0007f;
	fLocal_115[26] = -0.0608f;
	fLocal_116[26] = 0.8986f;
	fLocal_117[26] = -0.4345f;
	iLocal_190[26] = joaat("rocoto");
	Local_164[27 /*3*/] = { -1706.1578f, -408.2234f, 44.9785f };
	fLocal_114[27] = 0.0492f;
	fLocal_115[27] = 0.0021f;
	fLocal_116[27] = -0.3248f;
	fLocal_117[27] = 0.9445f;
	iLocal_190[27] = joaat("rapidgt2");
	Local_164[28 /*3*/] = { -1785.5399f, -505.2336f, 38.3513f };
	fLocal_114[28] = -0.0003f;
	fLocal_115[28] = -0.0001f;
	fLocal_116[28] = -0.4654f;
	fLocal_117[28] = 0.8851f;
	iLocal_190[28] = joaat("rapidgt2");
	Local_164[29 /*3*/] = { -1775.0933f, -516.8105f, 38.3838f };
	fLocal_114[29] = -0.0029f;
	fLocal_115[29] = -0.0028f;
	fLocal_116[29] = 0.8619f;
	fLocal_117[29] = 0.507f;
	iLocal_190[29] = joaat("rapidgt2");
	Local_164[30 /*3*/] = { -1770.0879f, -522.83f, 38.5967f };
	fLocal_114[30] = -0.0029f;
	fLocal_115[30] = 0.0006f;
	fLocal_116[30] = 0.8626f;
	fLocal_117[30] = 0.5059f;
	iLocal_190[30] = joaat("rocoto");
	Local_164[31 /*3*/] = { -1700.4822f, -560.2477f, 35.9312f };
	fLocal_114[31] = -0.0021f;
	fLocal_115[31] = -0.0624f;
	fLocal_116[31] = 0.8919f;
	fLocal_117[31] = -0.4478f;
	iLocal_190[31] = joaat("rocoto");
	Local_164[32 /*3*/] = { -1690.1038f, -567.152f, 34.994f };
	fLocal_114[32] = -0.0034f;
	fLocal_115[32] = -0.0581f;
	fLocal_116[32] = 0.8833f;
	fLocal_117[32] = -0.4651f;
	iLocal_190[32] = joaat("rocoto");
	Local_165[0 /*3*/] = { -143.9162f, 258.2889f, 94.5251f };
	fLocal_108[0] = -0.0303f;
	fLocal_109[0] = -0.0223f;
	fLocal_110[0] = 0.6939f;
	fLocal_111[0] = 0.7191f;
	iLocal_142[0] = 57;
	fLocal_112[0] = 0f;
	fLocal_113[0] = 0.93f;
	iLocal_191[0] = joaat("buffalo");
	Local_165[1 /*3*/] = { -219.1163f, 226.1757f, 88.5679f };
	fLocal_108[1] = 0.109f;
	fLocal_109[1] = 0.0087f;
	fLocal_110[1] = 0.0041f;
	fLocal_111[1] = 0.994f;
	iLocal_142[1] = 59;
	fLocal_112[1] = 250f;
	fLocal_113[1] = 0.93f;
	iLocal_191[1] = joaat("jackal");
	Local_165[2 /*3*/] = { -277.7864f, 257.1765f, 89.5156f };
	fLocal_108[2] = 0.0246f;
	fLocal_109[2] = -0.0264f;
	fLocal_110[2] = -0.6748f;
	fLocal_111[2] = 0.7371f;
	iLocal_142[2] = 58;
	fLocal_112[2] = 400f;
	fLocal_113[2] = 0.93f;
	iLocal_191[2] = joaat("jackal");
	Local_165[3 /*3*/] = { -1338.0682f, 205.2171f, 58.2626f };
	fLocal_108[3] = 0.0094f;
	fLocal_109[3] = 0.0224f;
	fLocal_110[3] = -0.6916f;
	fLocal_111[3] = 0.7219f;
	iLocal_142[3] = 36;
	fLocal_112[3] = 37978f;
	fLocal_113[3] = 0.93f;
	iLocal_191[3] = joaat("jackal");
	Local_165[4 /*3*/] = { -524.0712f, 250.765f, 82.5395f };
	fLocal_108[4] = -0.0022f;
	fLocal_109[4] = 0.0037f;
	fLocal_110[4] = 0.7477f;
	fLocal_111[4] = -0.6641f;
	iLocal_142[4] = 42;
	fLocal_112[4] = 10151f;
	fLocal_113[4] = 0.93f;
	iLocal_191[4] = joaat("buffalo");
	Local_165[5 /*3*/] = { -640.2011f, 258.073f, 80.871f };
	fLocal_108[5] = -0.0265f;
	fLocal_109[5] = -0.002f;
	fLocal_110[5] = 0.7299f;
	fLocal_111[5] = -0.683f;
	iLocal_142[5] = 43;
	fLocal_112[5] = 13517f;
	fLocal_113[5] = 0.93f;
	iLocal_191[5] = joaat("buffalo");
	Local_165[6 /*3*/] = { -1062.9277f, 258.7392f, 63.7718f };
	fLocal_108[6] = -0.0022f;
	fLocal_109[6] = 0.006f;
	fLocal_110[6] = 0.7219f;
	fLocal_111[6] = -0.692f;
	iLocal_142[6] = 46;
	fLocal_112[6] = 26981f;
	fLocal_113[6] = 0.93f;
	iLocal_191[6] = joaat("jackal");
}

void func_576(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x402AA
{
	struct<3> Var0;
	StringCopy(&cLocal_179, sParam0, 64);
	iLocal_75 = 1;
	iLocal_80 = 0;
	iLocal_146 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
	iLocal_149 = iParam1;
	iLocal_150 = 0;
	iLocal_151 = 0;
	iLocal_152 = 0;
	iLocal_156 = 0;
	iLocal_159 = 0;
	iLocal_157 = -1;
	iLocal_158 = -1;
	iLocal_160 = 0;
	iLocal_161 = 0;
	fLocal_134 = 0f;
	fLocal_135 = 0f;
	fLocal_120 = 0f;
	iLocal_81 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_167.f_0 = (Var0.f_0 - 100f);
		Local_167.f_1 = (Var0.f_1 - 100f);
		Local_167.f_2 = (Var0.f_2 - 100f);
		Local_168.f_0 = (Var0.f_0 + 100f);
		Local_168.f_1 = (Var0.f_1 + 100f);
		Local_168.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_167, Local_168, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_188);
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
	func_513();
}

void func_577()//Position - 0x403CE
{
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	switch (iLocal_226)
	{
		case 0:
			if (!bLocal_263)
			{
				if (!__LIB_0__::func_295())
				{
					__LIB_30__::func_547(PLAYER::PLAYER_PED_ID(), -152.3902f, 279.5714f, 92.8134f, 106.6662f, 0, 0);
					if (iLocal_264 == 0)
					{
						if (iLocal_225 == 1)
						{
							if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
								iLocal_264 = 1;
							}
						}
					}
				}
				__LIB_0__::func_123(&(Local_227.f_41[0]));
				__LIB_0__::func_0(&(Local_227.f_28[0]));
				func_594();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
				{
					AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_INTRO");
				}
				func_592(1);
				func_591();
				func_590();
				if (!__LIB_0__::func_295())
				{
					if (__LIB_1__::func_197(Local_531.f_0))
					{
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
						func_190("waive_comeback_f", 1000f, -8f, -1, 528384, 0.589f, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_531.f_0, false, false);
					}
				}
				if (!__LIB_0__::func_295())
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
				}
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_531.f_0, -1, 0, 2);
				if (!__LIB_0__::func_295())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(11.7337f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7.2753f, 1f);
				}
				iLocal_226 = 2;
			}
			else
			{
				if (__LIB_0__::func_121(Local_227.f_28[0]))
				{
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_353, Local_227.f_28[0], 0);
					}
				}
				__LIB_24__::func_930();
				if ((func_587() && func_586()) || func_585())
				{
					__LIB_26__::func_478("PAP_1_RCM", 0);
					if (__LIB_18__::func_170(1, 1093140480, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_352, 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_531.f_0, sLocal_353, 2, Local_531.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_553.f_0, sLocal_354, 2, Local_553.f_10, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_554.f_0, sLocal_355, 2, Local_554.f_10, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_551.f_0, sLocal_357, 2, Local_551.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_532.f_0, sLocal_358, 2, Local_532.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_533.f_0, sLocal_359, 2, Local_533.f_1, 0);
						__LIB_0__::func_84(800, 0);
						RECORDING::REPLAY_START_EVENT(1);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						__LIB_0__::func_123(&(Local_227.f_41[0]));
						__LIB_0__::func_0(&(Local_227.f_28[0]));
						__LIB_26__::func_252();
						func_353(-149.75f, 285.81f, 93.67f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						func_594();
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
						{
							if (!__LIB_0__::func_295() && bLocal_263)
							{
								AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_INTRO");
							}
						}
						func_591();
						func_592(0);
						iLocal_226 = 1;
					}
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE("PAP_1_RCM", 8);
					__LIB_7__::func_279(1, 1, 0, 0, 0, 0, 0);
				}
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_354, 0)))
				{
					Local_553.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_354, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_554.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_355, 0)))
				{
					Local_554.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_355, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_551.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_357, 0)))
				{
					Local_551.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_357, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_532.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_358, 0)))
				{
					Local_532.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_358, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_533.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_359, 0)))
				{
					Local_533.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_359, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_531.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_353, 0)))
				{
					Local_531.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_353, 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_353, 0))
			{
				if (__LIB_1__::func_197(Local_531.f_0))
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_531.f_0, Local_531.f_3, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_531.f_0, Local_531.f_6);
					}
					if (__LIB_0__::func_121(Local_554.f_0) && __LIB_0__::func_121(Local_553.f_0))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_355, 0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_554.f_0, Local_553.f_0, 0, Local_554.f_4, Local_554.f_7, false, false, false, false, 2, true, 0);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_354, 0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_553.f_0, Local_531.f_0, PED::GET_PED_BONE_INDEX(Local_531.f_0, 28422), Local_553.f_4, Local_553.f_7, false, false, false, false, 2, true, 0);
						}
					}
					func_582();
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_531.f_0, sLocal_361);
					func_190("waive_comeback_f", 1000f, -1065353216, -1, 0, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_531.f_0, false, false);
				}
			}
			if (__LIB_1__::func_183(Local_551.f_0))
			{
				if (__LIB_1__::func_197(Local_532.f_0))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_358, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532.f_0, Local_551.f_0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_532.f_0);
							PED::SET_PED_INTO_VEHICLE(Local_532.f_0, Local_551.f_0, 2);
						}
						func_581();
					}
				}
				if (__LIB_1__::func_197(Local_533.f_0))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_359, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_551.f_0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_533.f_0);
							PED::SET_PED_INTO_VEHICLE(Local_533.f_0, Local_551.f_0, -1);
						}
						func_580();
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_357, 0))
				{
					func_579();
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_352, 0))
			{
				if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_531.f_0, -1, 0, 2);
				}
				bLocal_272 = true;
			}
			if (!bLocal_272)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
			{
				RECORDING::REPLAY_STOP_EVENT();
				MISC::CLEAR_AREA_OF_VEHICLES(-162.42995f, 279.91364f, 92.71819f, 200f, false, false, false, false, false, false, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_592(1);
				func_590();
				if (bLocal_263)
				{
					__LIB_0__::func_84(500, 0);
				}
				iLocal_226 = 2;
			}
			else
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 102000)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_339))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_339, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_340, 2);
				}
				func_592(0);
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			else
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				if (bLocal_263)
				{
					__LIB_39__::func_444(1, 1, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_339))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_339, 3);
				}
				__LIB_20__::func_240(&iLocal_339, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_340, 3);
				}
				__LIB_20__::func_240(&iLocal_340, 0);
				__LIB_10__::func_700(&Local_227, 0, 1);
				func_352(1);
			}
			break;
	}
}

void func_579()//Position - 0x40B8D
{
	if (__LIB_1__::func_183(Local_551.f_0))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_551.f_0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_551.f_0, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_551.f_0, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(Local_551.f_0, 0, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_551.f_0, false);
		VEHICLE::SET_VEHICLE_STRONG(Local_551.f_0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_551.f_0, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_551.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_551.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_551.f_0, false);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_551.f_0, 0, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_551.f_0, 3, true);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_551.f_0, 2, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_551.f_0, 3, false);
		ENTITY::SET_ENTITY_COORDS(Local_551.f_0, Local_551.f_3, true, false, false, true);
		ENTITY::SET_ENTITY_QUATERNION(Local_551.f_0, -0.0362f, 0.0042f, 0.6776f, 0.7345f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_551.f_0, true);
	}
}

void func_580()//Position - 0x40C4A
{
	if (__LIB_1__::func_197(Local_533.f_0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_533.f_0, false);
		PED::ADD_ARMOUR_TO_PED(Local_533.f_0, 100);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_533.f_0, false);
		PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_533.f_0, false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_533.f_0, false);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 32, false);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 42, true);
		if (PED::IS_PED_IN_GROUP(Local_533.f_0))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_533.f_0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_533.f_0, iLocal_347);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533.f_0, true);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 29, false);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 116, false);
	}
}

void func_581()//Position - 0x40CD0
{
	if (__LIB_1__::func_197(Local_532.f_0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_532.f_0, false);
		PED::ADD_ARMOUR_TO_PED(Local_532.f_0, 100);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_532.f_0, true, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_532.f_0, false);
		PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_532.f_0, false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_532.f_0, false);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 32, false);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 42, true);
		if (PED::IS_PED_IN_GROUP(Local_532.f_0))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_532.f_0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_532.f_0, iLocal_347);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532.f_0, true);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 29, false);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 116, false);
	}
}

void func_582()//Position - 0x40D5F
{
	if (__LIB_1__::func_197(Local_531.f_0))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_531.f_0, 9, 1, 0, 0);
		PED::SET_PED_HELMET(Local_531.f_0, false);
		ENTITY::SET_ENTITY_VISIBLE(Local_531.f_0, true, false);
		PED::SET_PED_CAN_BE_TARGETTED(Local_531.f_0, false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_531.f_0, 0);
		PED::ADD_ARMOUR_TO_PED(Local_531.f_0, 100);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_531.f_0, true, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_531.f_0, false);
		PED::SET_PED_CONFIG_FLAG(Local_531.f_0, 42, true);
		PED::SET_PED_CONFIG_FLAG(Local_531.f_0, 132, true);
		PED::SET_PED_CONFIG_FLAG(Local_531.f_0, 118, true);
		PED::SET_PED_CONFIG_FLAG(Local_531.f_0, 167, true);
		PED::SET_PED_CONFIG_FLAG(Local_531.f_0, 185, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_531.f_0, false);
		PED::SET_PED_DIES_IN_WATER(Local_531.f_0, true);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(Local_531.f_0, true);
		PED::SET_PED_MAX_TIME_IN_WATER(Local_531.f_0, 2f);
		PED::SET_PED_MAX_TIME_UNDERWATER(Local_531.f_0, 2f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_531.f_0, true);
		if (PED::IS_PED_IN_GROUP(Local_531.f_0))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_531.f_0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_531.f_0, iLocal_346);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_531.f_0, true);
		__LIB_0__::func_203(&uLocal_366, 3, Local_531.f_0, "BEVERLY", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_531.f_0, true);
	}
}

int func_585()//Position - 0x40E8D
{
	if (((__LIB_0__::func_294() || __LIB_0__::func_2(0)) || __LIB_0__::func_295()) || !bLocal_263)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -150.36288f, 287.13605f, 91.13553f, -150.41983f, 282.02863f, 97.263824f, 6.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_586()//Position - 0x40EF5
{
	char* sVar0;
	float fVar1;
	sVar0 = "rcmpaparazzo1beckon";
	if (__LIB_1__::func_197(Local_227.f_28[0]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_227.f_28[0], sVar0, "pap_idle_01", 3))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_227.f_28[0], sVar0, "pap_idle_action_01", 3))
		{
			fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_227.f_28[0], sVar0, "pap_idle_action_01");
			if (fVar1 < 0.198f || fVar1 > 0.957f)
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_227.f_28[0], sVar0, "pap_idle_02", 3))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_227.f_28[0], sVar0, "pap_idle_action_02", 3))
		{
			fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_227.f_28[0], sVar0, "pap_idle_action_02");
			if (fVar1 < 0.027f || fVar1 > 0.942f)
			{
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

int func_587()//Position - 0x40FEC
{
	if (iLocal_335 == 0)
	{
		if (__LIB_0__::func_121(Local_227.f_28[0]))
		{
			if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_227.f_28[0], 6.5f, 1))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_227.f_28[0], 0f, 0f, 0f, true, -1, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.37f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.7f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				iLocal_336 = MISC::GET_GAME_TIMER();
			}
			else
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_227.f_28[0], 0);
				}
				iLocal_336 = -1;
			}
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_227.f_28[0], 4000, 0, 2);
		}
		iLocal_335++;
	}
	else if (iLocal_335 == 1)
	{
		if (iLocal_336 == -1 || (MISC::GET_GAME_TIMER() - iLocal_336) > 3000)
		{
			return 1;
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	return 0;
}

void func_590()//Position - 0x41152
{
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_203(&uLocal_366, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
	}
	__LIB_0__::func_0(&(Local_227.f_28[0]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_531.f_0))
	{
		Local_531.f_0 = PED::CREATE_PED(26, Local_531.f_1, Local_531.f_3, Local_531.f_6, true, true);
		func_582();
	}
	if (__LIB_1__::func_197(Local_531.f_0))
	{
		__LIB_0__::func_123(&(Local_227.f_41[0]));
		if (!ENTITY::DOES_ENTITY_EXIST(Local_553.f_0))
		{
			Local_553.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_531.f_0, 0f, 0f, 2.5f) };
			Local_553.f_0 = OBJECT::CREATE_OBJECT(Local_553.f_10, Local_553.f_1, true, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_554.f_0))
		{
			Local_554.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_531.f_0, 0f, 0f, 2.5f) };
			Local_554.f_0 = OBJECT::CREATE_OBJECT(Local_554.f_10, Local_554.f_1, true, true, false);
		}
		if (__LIB_0__::func_121(Local_553.f_0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_554.f_0, Local_553.f_0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_554.f_0, Local_553.f_0, 0, Local_554.f_4, Local_554.f_7, false, false, false, false, 2, true, 0);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_553.f_0, Local_531.f_0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_553.f_0, Local_531.f_0, PED::GET_PED_BONE_INDEX(Local_531.f_0, 28422), Local_553.f_4, Local_553.f_7, false, false, false, false, 2, true, 0);
			}
			ENTITY::SET_ENTITY_VISIBLE(Local_553.f_0, true, false);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_553.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_554.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_531.f_1);
	__LIB_11__::func_32(&(Local_227.f_35[1]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_551.f_0))
	{
		MISC::CLEAR_AREA(Local_551.f_3, 2f, true, false, false, false);
		Local_551.f_0 = VEHICLE::CREATE_VEHICLE(Local_551.f_1, Local_551.f_3, Local_551.f_6, true, true, false);
		func_579();
	}
	if (__LIB_1__::func_183(Local_551.f_0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_532.f_0))
		{
			Local_532.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_551.f_0, 26, Local_532.f_1, 2, true, true);
			func_581();
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_533.f_0))
		{
			Local_533.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_551.f_0, 26, Local_533.f_1, -1, true, true);
			func_580();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_551.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_532.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_533.f_1);
	if (bLocal_263)
	{
		if (bLocal_266)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				__LIB_0__::func_84(800, 0);
			}
		}
	}
}

void func_591()//Position - 0x413A4
{
	Local_550.f_1 = iLocal_51;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_550.f_0))
	{
		MISC::CLEAR_AREA(Local_550.f_3, 2f, true, false, false, false);
		STREAMING::REQUEST_MODEL(Local_550.f_1);
		if (STREAMING::HAS_MODEL_LOADED(Local_550.f_1))
		{
			Local_550.f_0 = VEHICLE::CREATE_VEHICLE(Local_550.f_1, Local_550.f_3, Local_550.f_6, true, true, false);
		}
	}
	__LIB_11__::func_32(&(Local_227.f_35[0]));
	if (__LIB_1__::func_183(Local_550.f_0))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_550.f_0);
		ENTITY::SET_ENTITY_COORDS(Local_550.f_0, Local_550.f_3, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_550.f_0, Local_550.f_6);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_550.f_0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_550.f_0, 5f);
		VEHICLE::SET_VEHICLE_COLOURS(Local_550.f_0, 62, 62);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_550.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_550.f_0, false);
		VEHICLE::SET_VEHICLE_STRONG(Local_550.f_0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_550.f_0, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_550.f_1);
}

void func_592(bool bParam0)//Position - 0x41484
{
	HUD::REQUEST_ADDITIONAL_TEXT("PAP1", 0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_365);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_362, false, -1);
	STREAMING::REQUEST_MODEL(Local_531.f_1);
	STREAMING::REQUEST_MODEL(Local_550.f_1);
	STREAMING::REQUEST_MODEL(Local_532.f_1);
	STREAMING::REQUEST_MODEL(Local_533.f_1);
	STREAMING::REQUEST_MODEL(Local_551.f_1);
	STREAMING::REQUEST_MODEL(Local_553.f_10);
	STREAMING::REQUEST_MODEL(Local_554.f_10);
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_550.f_1, 3);
	STREAMING::REQUEST_ANIM_DICT(sLocal_350);
	STREAMING::REQUEST_ANIM_DICT(sLocal_351);
	STREAMING::REQUEST_CLIP_SET(func_376(1));
	STREAMING::REQUEST_CLIP_SET(func_376(0));
	STREAMING::REQUEST_ANIM_DICT(&cLocal_564);
	STREAMING::REQUEST_ANIM_SET(sLocal_361);
	if (bParam0)
	{
		while (((((((((((((((((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_365)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_362, false, -1)) || !STREAMING::HAS_MODEL_LOADED(Local_531.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_550.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_532.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_533.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_551.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_553.f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_554.f_10)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_550.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_350)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_351)) || !STREAMING::HAS_ANIM_SET_LOADED(func_376(1))) || !STREAMING::HAS_ANIM_SET_LOADED(func_376(0))) || !STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_564)) || !STREAMING::HAS_ANIM_SET_LOADED(sLocal_361))
		{
			if (bLocal_263)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_10__::func_696(0, 1);
					bLocal_266 = true;
				}
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_594()//Position - 0x41685
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.01993f, 260.10822f, 85f, -131.57199f, 285.8091f, 102f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-190.01993f, 260.10822f, 85f, -131.57199f, 285.8091f, 102f, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-116.82038f, 261.0066f, 101.02819f, -206.29204f, 266.3838f, 86.07926f, 15f, true, false, true);
	PATHFIND::SET_ROADS_IN_AREA(-272.71304f, 209.47295f, 75.91507f, -166.00862f, 270.97842f, 99.37162f, false, true);
	Var0 = { -139.92f, 276.95f, 94.1f };
	fVar1 = 178.24f;
	Var2 = { 4.5f, 11.5f, 20f };
	__LIB_32__::func_755(-153.91743f, 283.6763f, 91.763824f, -147.12082f, 283.59894f, 96.90168f, 7f, Var0, fVar1, Var2, 1, 0, 1, 0, 0);
	__LIB_32__::func_755(-180.0036f, 277.14325f, 91.16271f, -147.96011f, 276.25296f, 96.1029f, 9f, Var0, fVar1, Var2, 1, 0, 1, 0, 0);
	__LIB_32__::func_755(-204.18896f, 271.30353f, 89.8865f, -170.88399f, 267.55637f, 95.11768f, 12f, Var0, fVar1, Var2, 1, 0, 1, 0, 0);
	iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (__LIB_1__::func_183(iVar3))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar3, 5f);
	}
	if (__LIB_20__::func_739(Var2, 0))
	{
		__LIB_41__::func_636(Var0, fVar1, 0, 145);
	}
	PED::SET_PED_NON_CREATION_AREA(-191.42f, 269.87f, 91.1f, -135.91f, 296.2f, 100.42f);
	iLocal_348 = PED::ADD_SCENARIO_BLOCKING_AREA(-191.42f, 269.87f, 91.1f, -135.91f, 296.2f, 100.42f, false, true, true, true);
	MISC::CLEAR_AREA_OF_PEDS(-151.66f, 285.51f, 92.76f, 20f, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-116.82038f, 261.0066f, 101.02819f, -206.29204f, 266.3838f, 86.07926f, 15f, false, false, false, true, true, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-162.42995f, 279.91364f, 92.71819f, 26f, false, false, false, false, false, false, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-221.89508f, 225.77153f, 87.77625f, 20f, true, false, false, false, false, false, 0);
	if (!bLocal_263)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(-162.42995f, 279.91364f, 92.71819f, 200f, true, false, false, false, false, false, 0);
	}
	iLocal_339 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-237.65f, 274.52f, 91f, 10f, joaat("prop_traffic_01a"), true, false, true);
	iLocal_340 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-205.82f, 248.14f, 91.01f, 10f, joaat("prop_traffic_01a"), true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_339))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_339, 2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_340, 2);
	}
}

void func_632()//Position - 0x47CF8
{
	if (!iLocal_262)
	{
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_10__::func_657("PAP1_H2", 1);
			if (MISC::IS_PC_VERSION())
			{
				__LIB_10__::func_657("PAP1_H2_KM", 1);
			}
			iLocal_262 = 1;
		}
	}
}

void func_633()//Position - 0x47D30
{
	if (bLocal_263)
	{
		if (((iLocal_224 != 8 && iLocal_224 != 0) && iLocal_224 != 5) && iLocal_224 != 6)
		{
			func_634();
			if (iLocal_279 != 0)
			{
				func_352(8);
			}
		}
	}
}

void func_634()//Position - 0x47D76
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	if (ENTITY::DOES_ENTITY_EXIST(Local_531.f_0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_531.f_0, false) || PED::IS_PED_INJURED(Local_531.f_0))
		{
			iLocal_279 = 5;
			return;
		}
		else
		{
			if (iLocal_279 == 8)
			{
				return;
			}
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_531.f_0))
				{
					iLocal_279 = 8;
					return;
				}
			}
			if (iLocal_344 != 0)
			{
				func_640(Local_531.f_0, &iLocal_330, 1126825984);
				if (func_637(Local_531.f_0, iLocal_330, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 0, 1101004800, 0, 1090519040, 1097859072, 0))
				{
					iLocal_279 = 8;
					return;
				}
			}
		}
	}
	if (iLocal_279 == 1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_551.f_0))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_551.f_0, false))
		{
			VEHICLE::EXPLODE_VEHICLE(Local_551.f_0, true, false);
			if (__LIB_1__::func_197(Local_532.f_0))
			{
				PED::EXPLODE_PED_HEAD(Local_532.f_0, joaat("WEAPON_SNIPERRIFLE"));
			}
			if (__LIB_1__::func_197(Local_533.f_0))
			{
				PED::EXPLODE_PED_HEAD(Local_533.f_0, joaat("WEAPON_SNIPERRIFLE"));
			}
			iLocal_279 = 1;
			return;
		}
		else if (iLocal_224 == 1 || iLocal_224 == 4)
		{
			bVar0 = false;
			bVar1 = false;
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_551.f_0, PLAYER::PLAYER_PED_ID(), false))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_551.f_0, 0, 2))
				{
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_551.f_0);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_551.f_0);
					bVar0 = true;
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_551.f_0, true) };
				if (MISC::IS_PROJECTILE_IN_AREA(Var2 - Vector(5f, 5f, 5f), Var2 + Vector(5f, 5f, 5f), true))
				{
					bVar0 = true;
					bVar1 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_241)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_771();
					}
					if (bVar1)
					{
						if (__LIB_42__::func_7(&uLocal_366, cLocal_363, "PAP1_PSW", "PAP1_PSW_01", 7, __LIB_30__::func_420(), 0))
						{
							iLocal_241 = 1;
							iLocal_246 = 1;
							iLocal_341 = 0;
						}
					}
					else if (__LIB_41__::func_635(&uLocal_366, cLocal_363, "PAP1_PSW", 7, __LIB_30__::func_420(), 0, 0))
					{
						iLocal_246 = 1;
						iLocal_241 = 1;
						iLocal_341 = 0;
					}
				}
				else if (!func_482("PAP1_PSW"))
				{
					iLocal_279 = 3;
					return;
				}
			}
		}
	}
	if (iLocal_265)
	{
		if (__LIB_1__::func_197(Local_531.f_0))
		{
			if (fLocal_283 > 60f)
			{
				iLocal_279 = 7;
				return;
			}
		}
	}
	if (iLocal_224 > 0)
	{
		if (iLocal_224 != 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_550.f_0))
			{
				if ((ENTITY::IS_ENTITY_DEAD(Local_550.f_0, false) || ENTITY::IS_ENTITY_IN_WATER(Local_550.f_0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_550.f_0, false))
				{
					iLocal_279 = 4;
					return;
				}
				if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_550.f_0, 6, false))
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_550.f_0, 7, false))
					{
						iLocal_279 = 4;
					}
				}
			}
		}
	}
	if (iLocal_279 == 2 || iLocal_279 == 6)
	{
		return;
	}
	if ((iLocal_224 == 1 || iLocal_224 == 2) || iLocal_224 == 3)
	{
		if (!bLocal_254)
		{
			if (__LIB_1__::func_197(Local_532.f_0))
			{
				if (fLocal_281 > 225f)
				{
					iLocal_279 = 2;
					return;
				}
			}
		}
		else if (__LIB_1__::func_197(Local_539.f_0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_539.f_0))
			{
				if (fLocal_284 > 220f)
				{
					iLocal_279 = 6;
					return;
				}
			}
		}
	}
}

int func_637(int iParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, float fParam8, bool bParam9)//Position - 0x48113
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_1__::func_197(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (MISC::IS_BULLET_IN_AREA(Var0, fParam7, true))
		{
			return 1;
		}
		if (!__LIB_10__::func_649(iParam1, 10))
		{
			if (__LIB_0__::func_530(iParam0, Param2, fParam5, 1))
			{
				if (func_638(1, 1, 1))
				{
					if (bParam9)
					{
						if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
						{
							return 1;
						}
						if (bParam6)
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (bParam4)
				{
					if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__::func_530(iParam0, Param2, 1f, 1))
						{
							return 1;
						}
					}
				}
				if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
		if (bParam3)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
				return 1;
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, fParam8))
		{
			return 1;
		}
		Var1 = { Var0 };
		Var2 = { Var1 };
		Var1.f_0 = (Var1.f_0 - fParam8);
		Var1.f_1 = (Var1.f_1 - fParam8);
		Var1.f_2 = (Var1.f_2 - fParam8);
		Var2.f_0 = (Var2.f_0 + fParam8);
		Var2.f_1 = (Var2.f_1 + fParam8);
		Var2.f_2 = (Var2.f_2 + fParam8);
		if (MISC::IS_PROJECTILE_IN_AREA(Var1, Var2, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_638(bool bParam0, bool bParam1, bool bParam2)//Position - 0x482AF
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	switch (iVar0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MINIGUN"):
			return 1;
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_GRENADE"):
			case joaat("WEAPON_STICKYBOMB"):
			case joaat("WEAPON_MOLOTOV"):
			case joaat("WEAPON_BZGAS"):
				return 1;
			}
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("WEAPON_KNIFE"):
			case joaat("WEAPON_HAMMER"):
			case joaat("WEAPON_CROWBAR"):
			case joaat("WEAPON_PETROLCAN"):
			case joaat("WEAPON_BOTTLE"):
				return 1;
			}
		default:
	}
	if (bParam2)
	{
		if (iVar0 == joaat("WEAPON_STUNGUN"))
		{
			return 1;
		}
	}
	return 0;
}

void func_640(int iParam0, int iParam1, float fParam2)//Position - 0x483C8
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (__LIB_37__::func_461(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, 7))
		{
			*iParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_664(int iParam0, bool bParam1)//Position - 0x49215
{
	func_672(bParam1, 0);
	if (bParam1)
	{
		func_665();
	}
	iLocal_225 = iParam0;
	bLocal_263 = false;
	if (__LIB_0__::func_295())
	{
		iLocal_264 = 1;
	}
	else
	{
		iLocal_264 = 0;
	}
	if (!__LIB_0__::func_295())
	{
		if (iLocal_225 == 0)
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_30__::func_547(PLAYER::PLAYER_PED_ID(), -152.36f, 279.07f, 93.8134f, -30f, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
				iLocal_264 = 1;
			}
		}
	}
	func_1(iLocal_225);
}

void func_665()//Position - 0x492B3
{
	if (!__LIB_0__::func_295())
	{
		__LIB_37__::func_482(PLAYER::PLAYER_PED_ID());
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!__LIB_0__::func_295() && bLocal_263)
	{
		func_82(5);
	}
	func_666(1, 0);
	func_676();
	func_352(0);
}

void func_666(bool bParam0, bool bParam1)//Position - 0x49303
{
	int iVar0;
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_0__::func_296();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_8__::func_770(0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	MISC::SET_TIME_SCALE(1f);
	__LIB_39__::func_444(1, 1, 1, 1);
	AUDIO::SET_AGGRESSIVE_HORNS(false);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("coach"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule2"), false);
	__LIB_0__::func_367(0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_348, false);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_349[iVar0], false);
		iVar0++;
	}
	TASK::SET_SCENARIO_GROUP_ENABLED("ATTRACT_PAP", true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1514.6241f, -211.54341f, 46.786194f, -1487.8853f, -190.75485f, 59.4945f, 25f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_588, Local_587, true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-116.82038f, 261.0066f, 101.02819f, -206.29204f, 266.3838f, 86.07926f, 15f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.01993f, 260.10822f, 85f, -131.57199f, 285.8091f, 102f, true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-272.71304f, 209.47295f, 75.91507f, -166.00862f, 270.97842f, 99.37162f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_278))
	{
		CAM::DESTROY_CAM(iLocal_278, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_277))
	{
		CAM::DESTROY_CAM(iLocal_277, false);
	}
	if (__LIB_0__::func_121(Local_551.f_0))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_551.f_0, 0f);
	}
	if (__LIB_0__::func_121(Local_552.f_0))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_552.f_0, 0f);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_INTRO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_CHASE");
	}
	if (!__LIB_0__::func_295() && bLocal_263)
	{
		func_82(5);
	}
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
	__LIB_40__::func_677(1, 1, 1);
	__LIB_0__::func_54(1, 1);
	__LIB_0__::func_202(&uLocal_366, 1);
	__LIB_0__::func_202(&uLocal_366, 3);
	__LIB_0__::func_202(&uLocal_366, 4);
	__LIB_9__::func_981(&uLocal_20, 0, 0);
	func_228();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_347);
	func_213(bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_550.f_1, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_551.f_1, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_552.f_1, false);
	func_667(bParam1);
	BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("act_cinema");
}

void func_667(bool bParam0)//Position - 0x49584
{
	STREAMING::REMOVE_ANIM_DICT(sLocal_350);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_564);
	STREAMING::REMOVE_ANIM_DICT(sLocal_351);
	STREAMING::REMOVE_ANIM_SET(func_376(1));
	STREAMING::REMOVE_ANIM_SET(func_376(0));
	STREAMING::REMOVE_ANIM_DICT(&cLocal_580);
	STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo1ig_4");
	STREAMING::REMOVE_ANIM_SET(sLocal_361);
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SOUND_ID(iLocal_315);
	AUDIO::RELEASE_SOUND_ID(iLocal_316);
	AUDIO::RELEASE_SOUND_ID(iLocal_317);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1RP");
	func_507();
	func_508(0, 1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_531.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_550.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_532.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_533.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_551.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_539.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_544.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_552.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_553.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_554.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_555.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_556.f_10);
	VEHICLE::REMOVE_VEHICLE_ASSET(Local_550.f_1);
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	}
}

void func_672(bool bParam0, bool bParam1)//Position - 0x4979E
{
	if (bParam0)
	{
		__LIB_40__::func_677(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_353(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_676()//Position - 0x498B4
{
	func_677();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	AUDIO::SET_AGGRESSIVE_HORNS(true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("coach"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule2"), true);
	__LIB_0__::func_367(1);
	TASK::SET_SCENARIO_GROUP_ENABLED("ATTRACT_PAP", false);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1514.6241f, -211.54341f, 46.786194f, -1487.8853f, -190.75485f, 59.4945f, 25f, false, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_588, Local_587, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_588, Local_587, 0);
	MISC::CLEAR_AREA(Local_589, 15f, true, false, false, false);
	MISC::CLEAR_AREA_OF_PEDS(Local_589, 15f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_589, 15f, false, false, false, false, false, false, 0);
}

void func_677()//Position - 0x499A1
{
	int iVar0;
	bLocal_237 = false;
	iLocal_231 = 0;
	iLocal_255 = 0;
	bLocal_257 = false;
	iLocal_236 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iLocal_232[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_240[iVar0] = 0;
		iVar0++;
	}
	iLocal_250 = 0;
	bLocal_254 = false;
	iLocal_248 = 0;
	iLocal_253 = 0;
	iLocal_249 = 0;
	iLocal_251 = 0;
	iLocal_252 = 0;
	iLocal_256 = 0;
	iLocal_233 = 0;
	iLocal_239 = 0;
	iLocal_234 = 0;
	iLocal_235 = 0;
	iLocal_238 = 0;
	iLocal_260 = 0;
	iLocal_258 = 0;
	iLocal_247 = 0;
	iLocal_241 = 0;
	iLocal_242 = 1;
	iLocal_243 = 1;
	iLocal_244 = 0;
	iLocal_245 = 1;
	iLocal_246 = 1;
	iLocal_265 = 0;
	iLocal_268 = 0;
	bLocal_269 = false;
	iLocal_270 = 0;
	bLocal_266 = false;
	iLocal_259 = 0;
	iLocal_261 = 0;
	bLocal_228 = false;
	iLocal_262 = 0;
	iLocal_267 = 0;
	iLocal_229 = 0;
	iLocal_230 = 0;
	bLocal_272 = false;
	bLocal_273 = false;
	iLocal_274 = 0;
	iLocal_275 = 0;
	iLocal_279 = 0;
	iLocal_344 = 1;
	fLocal_281 = 0f;
	fLocal_280 = 45f;
	fLocal_282 = 0f;
	fLocal_293 = 1f;
	fLocal_292 = 1f;
	fLocal_290 = 1f;
	fLocal_288 = 0f;
	fLocal_294 = 0f;
	fLocal_283 = 0f;
	fLocal_289 = 1.6f;
	fLocal_291 = 0.8f;
	iLocal_296 = 0;
	iLocal_297 = 0;
	iLocal_307 = -1;
	iLocal_295 = 0;
	iLocal_320 = -1;
	iLocal_310 = 0;
	iLocal_313 = 0;
	iLocal_312 = 0;
	iLocal_309 = -1;
	iLocal_308 = -1;
	iLocal_311 = 0;
	iLocal_315 = AUDIO::GET_SOUND_ID();
	iLocal_316 = AUDIO::GET_SOUND_ID();
	iLocal_317 = AUDIO::GET_SOUND_ID();
	iLocal_302 = 0;
	iLocal_303 = 0;
	iLocal_304 = 0;
	iLocal_305 = 0;
	iLocal_300 = 0;
	iLocal_299 = 0;
	iLocal_301 = 0;
	iLocal_322 = 0;
	iLocal_323 = 6;
	iLocal_324 = 0;
	iLocal_321 = 0;
	iLocal_298 = -1;
	iLocal_314 = 0;
	iLocal_306 = 0;
	iLocal_318 = 0;
	iLocal_319 = 0;
	iLocal_325 = 0;
	iLocal_326 = MISC::GET_GAME_TIMER();
	iLocal_327 = 0;
	iLocal_329 = 500;
	iLocal_328 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7);
	iLocal_330 = 0;
	iLocal_331 = 0;
	iLocal_332 = 0;
	iLocal_333 = 0;
	iLocal_334 = 0;
	iLocal_335 = 0;
	iLocal_336 = -1;
	iLocal_337 = 0;
	iLocal_338 = 0;
	iLocal_341 = 0;
	iLocal_342 = 0;
	iLocal_343 = 0;
	StringCopy(&Local_559, "", 24);
	StringCopy(&Local_572, "", 24);
	StringCopy(&Local_560, "", 24);
	Local_584 = { 0.07f, -0.4f, 0f };
	Local_586 = { 0f, -2.4f, 0.3f };
	Local_597[0 /*3*/] = { 3f, -0.5f, 0f };
	Local_597[1 /*3*/] = { -3f, -0.5f, 0f };
	Local_596[0 /*3*/] = { 0f, 0f, 0f };
	Local_596[1 /*3*/] = { 0f, 0f, 0f };
	Local_598 = { 0f, 0f, 0f };
	Local_599 = { 0f, 0f, 0f };
	Local_600 = { 0f, 0f, 0f };
	Local_592[0 /*3*/] = { -1.2f, 0.4f, 1.5f };
	Local_592[1 /*3*/] = { 1.2f, 0.4f, 1.5f };
	Local_593[0 /*3*/] = { 0f, 0.4f, -1f };
	Local_593[1 /*3*/] = { 0f, 0.4f, -1f };
	Local_590 = { 0f, 0f, 0f };
	Local_591 = { 0f, 0f, 0f };
	Local_594 = { -1467.11f, -103.44f, 49.87f };
	Local_595 = { -924.012f, -142.9705f, 36.7612f };
	Local_589 = { -1493.3752f, -196.88408f, 49.39753f };
	Local_585 = { -0.04f, -0.06f, 0f };
	Local_588 = { -1525.48f, -223.51f, 45f };
	Local_587 = { -1482.88f, -184.36f, 59f };
	StringCopy(&cLocal_564, "rcmpaparazzo1ig_1_waive", 24);
	StringCopy(&cLocal_568, "waive_comeback_f", 24);
	Local_550.f_1 = joaat("pcj");
	Local_550.f_3 = { -159.56f, 275.41f, 93.14f };
	Local_550.f_6 = 102.75f;
	Local_531.f_1 = __LIB_2__::func_108(50);
	Local_531.f_3 = { -159.49f, 276.85f, 93.66f };
	Local_531.f_6 = -74.01f;
	Local_551.f_1 = joaat("stretch");
	Local_551.f_3 = { -177.40414f, 266.72693f, 92.407616f };
	Local_551.f_6 = 85.4595f;
	Local_532.f_1 = joaat("U_F_M_Miranda");
	Local_532.f_3 = { 0f, -170.05f, 284.88f };
	Local_532.f_6 = -172.46f;
	Local_533.f_1 = joaat("S_M_M_HighSec_01");
	Local_552.f_1 = joaat("pcj");
	Local_552.f_3 = { -1585.9142f, -133.9717f, 55.1026f };
	Local_552.f_6 = 0f;
	Local_539.f_1 = joaat("U_M_Y_Paparazzi");
	Local_544.f_1 = joaat("U_M_M_RivalPap");
	Local_553.f_10 = joaat("prop_pap_camera_01");
	Local_553.f_4 = { 0f, 0f, 0f };
	Local_553.f_7 = { 0f, 0f, 0f };
	Local_553.f_1 = { 0f, 0f, 0f };
	Local_554.f_10 = joaat("prop_flash_unit");
	Local_554.f_4 = { 0.107f, 0.025f, 0.177f };
	Local_554.f_7 = { 0f, 0f, 0f };
	Local_554.f_1 = { 0f, 0f, 0f };
	Local_555.f_10 = joaat("prop_pap_camera_01");
	Local_555.f_4 = { 0f, 0f, 0f };
	Local_555.f_7 = { 0f, 0f, 0f };
	Local_556.f_10 = joaat("prop_flash_unit");
	Local_556.f_4 = { 0.107f, 0.025f, 0.177f };
	Local_556.f_7 = { 0f, 0f, 0f };
	Local_556.f_1 = { 0f, 0f, 0f };
	Local_557.f_10 = joaat("prop_syringe_01");
	Local_557.f_4 = { 0f, 0f, 0f };
	Local_557.f_7 = { 0f, 0f, 0f };
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_347);
	if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_346 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_347, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_347);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_347, iLocal_346);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_346, iLocal_347);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_346, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_346);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_550.f_1, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_551.f_1, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_552.f_1, true);
}

void func_678()//Position - 0x49F41
{
	__LIB_26__::func_252();
	if (__LIB_26__::func_257())
	{
		func_666(0, 1);
	}
	__LIB_32__::func_757(&Local_227, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

