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
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	var uLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	float fLocal_82[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_83[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_84[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91[27] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_92[27] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_93[27] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_94[27] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_95[27] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_96[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_97[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_98[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_99[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_100[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	int iLocal_122[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_123[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_124[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_125[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_126[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_127[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_128[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	struct<3> Local_146[144];
	struct<3> Local_147[35];
	struct<3> Local_148[27];
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
	int iLocal_172[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_179[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_180[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_181[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_182[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	var uLocal_186 = 7;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	bool bLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 16;
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
	int iLocal_371 = 0;
	struct<6> Local_372 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_373 = 0;
	var uLocal_374 = 1092616192;
	var uLocal_375 = 1101004800;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 3;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	struct<3> Local_397 = { 0, 0, 0 } ;
	struct<3> Local_398 = { 0, 0, 0 } ;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<8> Local_408[17];
	var uLocal_409 = 17;
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
	int iLocal_427[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_428[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_429 = NULL;
	var uLocal_430 = 0;
	int* iLocal_431 = NULL;
	int iLocal_432 = 0;
	int* iLocal_433 = NULL;
	int iLocal_434 = 0;
	struct<3> Local_435 = { 0, 0, 0 } ;
	struct<3> Local_436 = { 0, 0, 0 } ;
	struct<3> Local_437 = { 0, 0, 0 } ;
	struct<3> Local_438 = { 0, 0, 0 } ;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 21;
	var uLocal_450 = 6;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	struct<3> Local_454 = { 0, 0, 0 } ;
	struct<3> Local_455 = { 0, 0, 0 } ;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_462[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	bool bLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int* iLocal_472 = NULL;
	int iLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	struct<3> Local_479 = { 0, 0, 0 } ;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 0;
	bool bLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	struct<3> Local_494 = { 0, 0, 0 } ;
	struct<3> Local_495 = { 0, 0, 0 } ;
	struct<3> Local_496 = { 0, 0, 0 } ;
	struct<3> Local_497 = { 0, 0, 0 } ;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	char* sLocal_501 = NULL;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	float fLocal_504 = 0f;
	struct<3> Local_505 = { 0, 0, 0 } ;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	struct<3> Local_508 = { 0, 0, 0 } ;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	var uLocal_517 = 0;
	int iLocal_518 = 0;
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
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	struct<30> Local_553 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	struct<14> Local_561 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	bool bLocal_595 = 0;
	int iLocal_596 = 0;
	bool bLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
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
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
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
	iLocal_196 = joaat("WEAPON_ASSAULTRIFLE");
	iLocal_197 = -1;
	iLocal_202 = 120000;
	Local_397 = { -828.311f, 174.0465f, 69.6267f };
	Local_398 = { -815.3414f, 179.0607f, 71.153f };
	Local_435 = { -807.212f, 182.799f, 74f };
	Local_436 = { 0f, 0f, 21f };
	Local_437 = { -803.998f, 175.91f, 75.745f };
	Local_438 = { 0f, 0f, 21.12f };
	iLocal_439 = joaat("S_M_Y_BlackOps_01");
	iLocal_440 = joaat("S_M_Y_BlackOps_02");
	iLocal_468 = joaat("WEAPON_UNARMED");
	iLocal_476 = 25000;
	Local_479 = { -708.0601f, -161.7995f, 36.4152f };
	iLocal_485 = 1;
	Local_494 = { -1.499496f, 1.974216f, -0.459954f };
	Local_495 = { 1.499486f, 1.974225f, -0.47703f };
	Local_496 = { -1.497941f, -2.836743f, -0.451934f };
	Local_497 = { 1.497952f, -2.836504f, -0.439115f };
	iLocal_609 = 1;
	iLocal_622 = 3000;
	iLocal_623 = 6500;
	iLocal_636 = 1000;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_16__::func_326(PLAYER::PLAYER_PED_ID(), 0);
		func_905(0);
		func_903();
		func_900();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(true);
	func_905(1);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Meltdown", 0);
		if (iLocal_203 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		switch (iLocal_441)
		{
			case 0:
				func_813();
				break;
			case 1:
				func_750();
				break;
			case 2:
				func_690();
				break;
			case 3:
				func_589();
				break;
			case 4:
				func_518();
				break;
			case 5:
				func_516();
				break;
			case 6:
				func_515();
				break;
			case 7:
				func_508();
				break;
			case 8:
				func_507();
				break;
			case 9:
				func_405();
				break;
			case 10:
				func_358();
				break;
			case 11:
				func_350();
				break;
			case 12:
				func_329();
				break;
			default:
				break;
		}
		if (func_316())
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x321
{
	AUDIO::TRIGGER_MUSIC_EVENT("SOL5_FAIL");
	__LIB_0__::func_325();
	__LIB_16__::func_326(PLAYER::PLAYER_PED_ID(), 0);
	func_303(0);
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	}
	func_905(0);
	__LIB_13__::func_803(0, iLocal_195);
	func_2();
	func_900();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2()//Position - 0x380
{
	__LIB_15__::func_986(&Global_103950);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_3(PLAYER::PLAYER_PED_ID(), &(Global_100166[__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()) /*65*/]), 0, 0, 1, 0);
	}
}

void func_3(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3B6
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
			if (func_295(iParam0, iVar1, &iVar2, 0))
			{
				func_280(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_221(iParam0, iVar1, &iVar2))
			{
				func_280(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_218(iParam0);
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
			func_16(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_16(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_16(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1164
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
			func_164(iVar5, iParam1, iParam2, 1);
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
						func_164(iVar5, 10, 0, 1);
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
									func_164(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_16(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_164(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_154(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_16(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_148(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_164(iVar5, 14, uVar18[iVar1], 1);
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
							func_16(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_164(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_16(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_139(iParam0);
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
						func_16(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_16(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_136(iVar5, iVar24, iVar23, iVar25);
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
							func_16(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_16(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_16(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_16(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_16(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_16(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_16(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_148(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_136(iVar5, func_154(iParam0, 8, -1), iParam2, func_154(iParam0, 4, -1));
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
				func_68(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_136(iVar5, iParam2, iVar44, iVar45);
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
			func_148(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_136(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_16(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_16(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_136(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_136(iVar5, iVar58, iVar57, iParam2);
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
						func_16(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_136(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_16(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_40(iParam0, 9, iVar63))
						{
							func_16(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_16(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_16(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_16(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_154(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_154(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_16(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_16(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_16(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_16(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_16(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_16(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_16(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_16(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_16(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_16(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_139(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_16(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_16(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_17(iParam0, &uVar4))
		{
			func_16(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_16(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_16(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_16(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_154(iParam0, 3, -1), iVar10);
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
				func_16(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_17(int iParam0, var uParam1)//Position - 0x300E
{
	int iVar0;
	int iVar1;
	*uParam1 = func_154(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_40(iParam0, iVar1, iVar0))
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

int func_40(int iParam0, int iParam1, int iParam2)//Position - 0x7336
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
				if (!func_40(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_40(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_40(iParam0, 14, iVar6))
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
			if (!func_40(iParam0, 14, uVar11[iVar10]))
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
						return func_40(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_40(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_68(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xF072
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
	func_69(iParam0, bParam3, 0, -1);
}

void func_69(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xF0BF
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
		bVar3 = func_115(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_106(iParam0, iParam3);
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

int func_106(int iParam0, int iParam1)//Position - 0x1E308
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
				iVar3 = func_154(iParam0, 11, -1);
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
				iVar5 = func_154(iParam0, 11, -1);
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

int func_115(int iParam0, bool bParam1)//Position - 0x1E766
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_154(iParam0, 11, -1), 0);
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
						iVar3 = func_154(iParam0, 11, -1);
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
						iVar5 = func_154(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_154(iParam0, 11, -1), 0);
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
						iVar8 = func_154(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_154(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_154(iParam0, 11, -1), 0);
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
						iVar12 = func_154(iParam0, 8, -1);
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

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x27631
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
					iVar0 = func_136(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_136(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_139(int iParam0)//Position - 0x28AE7
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
		if (!func_144(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_144(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x294B1
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_154(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2BE99
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_218(iParam0))
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

int func_154(int iParam0, int iParam1, int iParam2)//Position - 0x2C149
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
				if (func_40(iParam0, iParam1, iVar0))
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
				if (func_40(iParam0, iParam1, iVar1))
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

void func_164(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2EEBC
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
							func_164(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_164(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_164(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_164(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_164(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_164(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_164(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_164(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_164(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_164(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_218(int iParam0)//Position - 0x4C029
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_154(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_154(iParam0, 11, -1);
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

int func_221(int iParam0, int iParam1, int iParam2)//Position - 0x4C39B
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_222(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0, int iParam1, int iParam2)//Position - 0x4C427
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
				if (!func_222(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_222(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_222(iParam0, 14, iVar4))
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
			if (!func_222(iParam0, 14, uVar8[iVar7]))
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

int func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x5EF49
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
										func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_284(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_295(iParam0, iVar10, &iVar4, 1))
							{
								func_280(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_280(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_280(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_280(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_280(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_280(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_280(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_280(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_295(iParam0, iVar10, &iVar4, 0))
		{
			func_280(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_221(iParam0, iVar10, &iVar4))
		{
			func_280(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_284(int iParam0, int iParam1, int iParam2)//Position - 0x5F8E9
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
				if (func_222(iParam0, iParam1, iVar0))
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
				if (func_222(iParam0, iParam1, iVar1))
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

int func_295(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x615A7
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_222(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_303(int iParam0)//Position - 0x6183D
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_304(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_304(int iParam0)//Position - 0x61882
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
	func_305(&(Global_113386.f_2363.f_539), iVar1);
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

void func_305(var uParam0, int iParam1)//Position - 0x61992
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
			if (!func_307(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_307(int iParam0, var uParam1, float fParam2)//Position - 0x61B66
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
			return func_307(8, uParam1, fParam2);
			break;
		case 10:
			return func_307(8, uParam1, fParam2);
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

int func_316()//Position - 0x627DF
{
	int iVar0;
	if (bLocal_198)
	{
		switch (iLocal_441)
		{
			case 2:
			case 4:
			case 5:
				iLocal_199 = (MISC::GET_GAME_TIMER() - iLocal_200);
				if (iLocal_199 <= (iLocal_202 - Global_100441.f_12[0]))
				{
					if (iLocal_199 > ((iLocal_202 - 10000) - Global_100441.f_12[0]))
					{
						if (IntToFloat(iLocal_199) > (IntToFloat(((iLocal_202 - 10000) - Global_100441.f_12[0])) - MISC::GET_FRAME_TIME()))
						{
							if (iLocal_199 > ((iLocal_202 - 5000) - Global_100441.f_12[0]))
							{
								iLocal_636 = 500;
							}
							if (MISC::ABSI((((iLocal_202 - iLocal_199) - Global_100441.f_12[0]) - iLocal_635)) > iLocal_636)
							{
								AUDIO::PLAY_SOUND_FRONTEND(iLocal_634, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
								iLocal_635 = ((iLocal_202 - iLocal_199) - Global_100441.f_12[0]);
							}
						}
						if (iLocal_471 == 0)
						{
							__LIB_1__::func_350(((iLocal_202 - iLocal_199) - Global_100441.f_12[0]), "TIMER_TIME" /* GXT: TIME */, 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							iLocal_471 = 1;
						}
						else
						{
							__LIB_1__::func_350(((iLocal_202 - iLocal_199) - Global_100441.f_12[0]), "TIMER_TIME" /* GXT: TIME */, 0, 0, 10000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
					}
					else
					{
						__LIB_1__::func_350(((iLocal_202 - iLocal_199) - Global_100441.f_12[0]), "TIMER_TIME" /* GXT: TIME */, 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
				}
				else
				{
					if (iLocal_634 != 0)
					{
						AUDIO::STOP_SOUND(iLocal_634);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
					}
					__LIB_1__::func_350(0, "TIMER_TIME" /* GXT: TIME */, 0, 0, 110000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				if ((iLocal_199 + Global_100441.f_12[0]) > iLocal_202 + 2000)
				{
					return func_324("SOL5_TIMEUP");
				}
				break;
			}
	}
	switch (iLocal_441)
	{
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_397, 1) > 150f)
			{
				return func_324("SOL5_LEAVE");
			}
			break;
	}
	switch (iLocal_441)
	{
		case 1:
			if (!func_222(PLAYER::PLAYER_PED_ID(), 12, 16) && iLocal_371 >= 1)
			{
				if (!__LIB_0__::func_545(18))
				{
					return func_324("SOL5_FAILTUX");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_393))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_393, false))
				{
					return func_324("MIC4_LIMODEAD");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_396))
			{
				if (PED::IS_PED_INJURED(iLocal_396))
				{
					return func_324("MIC4_DRIVERDEAD");
				}
			}
			if ((((CLOCK::GET_CLOCK_HOURS() > 3 && CLOCK::GET_CLOCK_HOURS() < 21) && func_222(PLAYER::PLAYER_PED_ID(), 12, 16)) && ENTITY::DOES_ENTITY_EXIST(iLocal_395)) && !__LIB_0__::func_329())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false))
					{
						return 0;
					}
				}
				return func_324("SOL5_MISSED");
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return func_324("MIC4_DISRUPT");
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
			{
				if (!PED::IS_PED_INJURED(iLocal_395))
				{
					PED::SET_PED_RESET_FLAG(iLocal_395, 249, true);
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 80f, 80f, 80f, false, true, 0))
					{
						if (iLocal_532 == 0)
						{
							__LIB_0__::func_229("CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, 7500, 1);
							iLocal_532 = 1;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 70f, 70f, 70f, false, true, 0))
					{
						iLocal_532 = 0;
					}
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 100f, 100f, 100f, false, true, 0))
					{
						return func_324("CMN_JLEFT" /* GXT: ~s~Jimmy was left behind. */);
					}
				}
				else
				{
					return func_324("SOL5_JDIED");
				}
			}
			break;
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return func_324("MIC4_DISRUPT");
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_396))
			{
				if (PED::IS_PED_INJURED(iLocal_396))
				{
					return func_324("MIC4_DRIVERDEAD");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_393))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_393, false))
				{
					return func_324("MIC4_LIMODEAD");
				}
			}
			if (CLOCK::GET_CLOCK_HOURS() > 3 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false))
					{
						return 0;
					}
				}
				return func_324("SOL5_MISSED");
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
			{
				if (!PED::IS_PED_INJURED(iLocal_395))
				{
					PED::SET_PED_RESET_FLAG(iLocal_395, 249, true);
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 80f, 80f, 80f, false, true, 0))
					{
						if (iLocal_532 == 0)
						{
							__LIB_0__::func_229("CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, 7500, 1);
							iLocal_532 = 1;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 70f, 70f, 70f, false, true, 0))
					{
						iLocal_532 = 0;
					}
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 100f, 100f, 100f, false, true, 0))
					{
						return func_324("CMN_JLEFT" /* GXT: ~s~Jimmy was left behind. */);
					}
				}
				else
				{
					return func_324("SOL5_JDIED");
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false))
				{
					if (iLocal_633 == 0)
					{
						iLocal_632 = MISC::GET_GAME_TIMER();
						iLocal_633 = 1;
					}
				}
				else
				{
					iLocal_632 = MISC::GET_GAME_TIMER();
					iLocal_633 = 0;
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_393, 1) > 100f || (MISC::GET_GAME_TIMER() - iLocal_632) > 5000)
				{
					return func_324("SOL5_NOLIMO");
				}
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 <= 23)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[iVar0]))
				{
					if (PED::IS_PED_INJURED(iLocal_461[iVar0]))
					{
						return func_324("MIC4_DISRUPT");
					}
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
			{
				if (PED::IS_PED_INJURED(iLocal_395))
				{
					return func_324("SOL5_JDIED");
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 60f, 60f, 60f, false, true, 0))
				{
					return func_324("CMN_JLEFT" /* GXT: ~s~Jimmy was left behind. */);
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return func_324("MIC4_DISRUPT");
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_395))
			{
				if (!PED::IS_PED_INJURED(iLocal_395))
				{
					PED::SET_PED_RESET_FLAG(iLocal_395, 249, true);
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 80f, 80f, 80f, false, true, 0))
					{
						if (iLocal_532 == 0)
						{
							__LIB_0__::func_229("CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, 7500, 1);
							iLocal_532 = 1;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 70f, 70f, 70f, false, true, 0))
					{
						iLocal_532 = 0;
					}
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 100f, 100f, 100f, false, true, 0))
					{
						func_324("CMN_JLEFT" /* GXT: ~s~Jimmy was left behind. */);
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_397, 12f, 4f, 12f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -822.9015f, 171.5836f, 68.902214f, -774.3857f, 170.93732f, 83.796524f, 31.75f, false, true, 0))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							return func_324("MIC4_COPS");
						}
						if (!(ENTITY::IS_ENTITY_AT_COORD(iLocal_395, Local_397, 12f, 4f, 12f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_395, -822.9015f, 171.5836f, 68.902214f, -774.3857f, 170.93732f, 83.796524f, 31.75f, false, true, 0)))
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 50f, 50f, 30f, false, true, 0))
							{
								return func_324("CMN_JLEFT" /* GXT: ~s~Jimmy was left behind. */);
							}
						}
					}
				}
				else
				{
					return func_324("SOL5_JDIED");
				}
			}
			break;
		case 5:
			if (!iLocal_534)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_397, 12f, 4f, 12f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -822.9015f, 171.5836f, 68.902214f, -774.3857f, 170.93732f, 83.796524f, 31.75f, false, true, 0))
				{
					if (!(ENTITY::IS_ENTITY_AT_COORD(iLocal_395, Local_397, 12f, 4f, 12f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_395, -822.9015f, 171.5836f, 68.902214f, -774.3857f, 170.93732f, 83.796524f, 31.75f, false, true, 0)))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395, 50f, 50f, 30f, false, true, 0))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("SOL5_FAIL");
							return func_324("CMN_JLEFT" /* GXT: ~s~Jimmy was left behind. */);
						}
					}
					else
					{
						iLocal_534 = 1;
					}
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return func_324("MIC4_COPS");
			}
			if (PED::IS_PED_INJURED(iLocal_395))
			{
				return func_324("SOL5_JDIED");
			}
			if (PED::IS_PED_INJURED(iLocal_401))
			{
				return func_324("SOL5_ADIED");
			}
			break;
		case 6:
			if (PED::IS_PED_INJURED(iLocal_401))
			{
				return func_324("SOL5_ADIED");
			}
			break;
		case 7:
			if (PED::IS_PED_INJURED(iLocal_401))
			{
				return func_324("SOL5_ADIED");
			}
			else if (FIRE::IS_ENTITY_ON_FIRE(iLocal_401))
			{
				return func_324("SOL5_ADIED");
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.9f)
				{
					if (PED::IS_PED_INJURED(iLocal_402))
					{
						return func_324("SOL5_TDIED");
					}
				}
			}
			break;
		case 8:
		case 9:
		case 10:
			break;
	}
	return 0;
}

int func_324(char* sParam0)//Position - 0x6365E
{
	if (__LIB_0__::func_329() && iLocal_441 != 0)
	{
		__LIB_0__::func_381(sParam0);
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_IN() && !__LIB_0__::func_329())
	{
		__LIB_0__::func_381(sParam0);
		return 1;
	}
	return 0;
}

void func_329()//Position - 0x63869
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-802.7f, 176.18f, 76.89f, 1f, joaat("v_ilev_mm_doorw"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorw"), -802.7f, 176.18f, 76.89f, true, 0f, false);
	}
	__LIB_37__::func_948(0, 0, 2000, 1);
	__LIB_0__::func_46(1, 0);
	__LIB_0__::func_526(0, 0);
	HUD::CLEAR_PRINTS();
	func_900();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_350()//Position - 0x63F3B
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	switch (iLocal_371)
	{
		case 0:
			iLocal_371++;
			break;
		case 1:
			VEHICLE::DELETE_VEHICLE(&iLocal_463);
			__LIB_37__::func_947(15, 0);
			PED::DELETE_PED(&iLocal_402);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_402, "Tracy", 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_401, "Amanda", 0, 0, 0);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			__LIB_0__::func_429();
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_ENDING_CS");
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_630 = 0;
			iLocal_631 = 0;
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
			iLocal_371++;
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Tracy", joaat("CS_TracyDiSanto"))) && iLocal_631 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Tracy", joaat("CS_TracyDiSanto")), false))
				{
					PED::APPLY_PED_DAMAGE_PACK(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Tracy", joaat("CS_TracyDiSanto"))), "SCR_TracySplash", 1f, 1f);
					iLocal_631 = 1;
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_630 == 0)
			{
				func_352();
				func_351(&iLocal_407, 0, -1);
				MISC::CLEAR_AREA(-804.5567f, 179.0212f, 75.7407f, 30f, true, false, false, false);
				iLocal_630 = 1;
			}
			if (iLocal_371 == 2 && CUTSCENE::GET_CUTSCENE_TIME() > 1950)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("SOL5_MICHAEL_CLOBBERED"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_MICHAEL_CLOBBERED");
					PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.587f, 0.782f, 341.282f, 1f, 0.571f, 3, true, "bruise");
					PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.587f, 0.782f, 341.282f, 1f, 0.571f, 4, true, "bruise");
					PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.587f, 0.782f, 341.282f, 1f, 0.571f, 1, true, "bruise");
					iLocal_371 = 3;
				}
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 9230f && iLocal_371 == 3)
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("micheals_lightsOFF");
				iLocal_371 = 4;
			}
			if ((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 10800.4f && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME()) && iLocal_371 == 4)
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_NIGHTVISION(true);
				GRAPHICS::RESET_ADAPTATION(6);
				iLocal_371 = 5;
			}
			if ((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 25766.334f && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME()) && iLocal_371 == 5)
			{
				GRAPHICS::SET_NIGHTVISION(false);
				iLocal_371 = 6;
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 43990f)
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				PED::DELETE_PED(&iLocal_402);
				PED::DELETE_PED(&iLocal_401);
				PED::DELETE_PED(&iLocal_395);
				iLocal_539 = 0;
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				GRAPHICS::SET_NIGHTVISION(false);
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_371 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_441 = 12;
			}
			break;
	}
}

void func_351(int iParam0, bool bParam1, int iParam2)//Position - 0x64232
{
	int iVar0;
	int iVar1;
	if (iParam2 != -1)
	{
		iVar1 = iParam2;
	}
	else
	{
		iVar1 = (*iParam0 - 1);
	}
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (!bParam1)
			{
				PED::DELETE_PED(iParam0[iVar0]);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_352()//Position - 0x6428B
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_358()//Position - 0x64742
{
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-802.7f, 176.18f, 76.89f, 1f, joaat("v_ilev_mm_doorw"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorw"), -802.7f, 176.18f, 76.89f, true, 0.2f, false);
	}
	bLocal_597 = func_404(PLAYER::PLAYER_PED_ID());
	switch (iLocal_371)
	{
		case 0:
			if (AUDIO::PREPARE_MUSIC_EVENT("SOL5_BACK_TO_TRACEY"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SOL5_BACK_TO_TRACEY");
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_596 = 4;
				PED::SET_CREATE_RANDOM_COPS(false);
				PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(false);
				func_352();
				AUDIO::START_AUDIO_SCENE("MI_4_GET_BACK_UPSTAIRS");
				iLocal_629 = 0;
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 4);
				iLocal_371++;
			}
			break;
		case 1:
			__LIB_0__::func_229("SOL5_RENDEZV", 7500, 0);
			iLocal_432 = __LIB_0__::func_488(-802.7369f, 174.3312f, 75.7408f, 0);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_432, "MIC4_BLIPFAM" /* GXT: Family */);
			HUD::SET_BLIP_COLOUR(iLocal_432, 3);
			func_400(10);
			func_400(11);
			iLocal_371++;
			break;
		case 2:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 0, 0, 1, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 7, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 0, 0, 1, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 2, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 3, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 4, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 6, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 8, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 3, 3, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 4, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 5, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 6, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 8, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 10, 0, 0, 0);
				iLocal_371++;
			}
			break;
		case 3:
		case 4:
		case 5:
			if ((func_398(10) && !ENTITY::DOES_ENTITY_EXIST(iLocal_405)) && iLocal_629 == 0)
			{
				func_376(10);
				iLocal_629 = 1;
			}
			if (!__LIB_13__::func_755(&Local_372, 1) && iLocal_371 == 3)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_RENDEZ", 9, 0, 0, 0))
				{
					iLocal_371 = 4;
				}
			}
			if ((!__LIB_13__::func_755(&Local_372, 1) && iLocal_371 == 4) && bLocal_597 == 0)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_RENDEZ2", 9, 0, 0, 0))
				{
					iLocal_371 = 5;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -805.6776f, 182.4792f, 75.7146f, 3f, 3f, 3f, false, true, 0))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.9903f, 179.39517f, 74.91506f, -807.95f, 176.67427f, 77.99074f, 8.5f, false, true, 0) && __LIB_0__::func_90())
			{
				HUD::REMOVE_BLIP(&iLocal_432);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_405);
				iLocal_371 = 0;
				AUDIO::STOP_AUDIO_SCENE("MI_4_GET_BACK_UPSTAIRS");
				iLocal_441 = 11;
			}
			break;
	}
}

int func_376(int iParam0)//Position - 0x65251
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_204, true);
	switch (iParam0)
	{
		case 1:
			iLocal_395 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), -719.4904f, -162.2617f, 36.0158f, 338.8036f, true, true);
			__LIB_0__::func_222(&uLocal_206, 1, iLocal_395, "JIMMY", 0, 1);
			func_396();
			func_395(&iLocal_395, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_395, 118, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			MISC::CLEAR_AREA_OF_VEHICLES(-730.7252f, -144.1218f, 36.2103f, 10f, false, false, false, false, false, false, 0);
			iLocal_393 = func_394();
			ENTITY::SET_ENTITY_ROTATION(iLocal_393, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(1, 0f, "MIC4"), 2, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_393, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 0f, "MIC4"), true, false, false, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_393, true, true, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_393, 3);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_393, false);
			iLocal_396 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_393, 26, joaat("S_M_M_MovPrem_01"), -1, true, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_396, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_396, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_396, 118, false);
			break;
		case 3:
			switch (iLocal_467)
			{
				case 0:
					STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
					STREAMING::SET_PED_POPULATION_BUDGET(1);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
					Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f), false, true, true, true);
					PED::SET_PED_NON_CREATION_AREA(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f));
					PATHFIND::SET_ROADS_IN_AREA(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f), false, true);
					MISC::CLEAR_AREA(297.8264f, 191.4778f, 103.3186f, 20f, true, false, false, false);
					iLocal_460 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(292.42453f, 172.56087f, 109.715904f, 61f, 50.25f, 8.5f, 0f, false, 7);
					STREAMING::REQUEST_IPL("redCarpet");
					iLocal_461[0] = PED::CREATE_PED(26, joaat("U_M_Y_AntonB"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[0], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[0], 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[0], 4, 1, 0, 0);
					iLocal_467++;
					break;
				case 1:
					iLocal_461[1] = PED::CREATE_PED(26, joaat("S_M_Y_Grip_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_462[0] = OBJECT::CREATE_OBJECT(joaat("prop_v_cam_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[0], iLocal_461[1], PED::GET_PED_BONE_INDEX(iLocal_461[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[1], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[1], 3, 1, 3, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[1], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[1], 8, 0, 1, 0);
					iLocal_467++;
					break;
				case 2:
					iLocal_461[2] = PED::CREATE_PED(26, joaat("IG_Lazlow"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 2, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[2], 2, 1, 0, 0);
					iLocal_462[7] = OBJECT::CREATE_OBJECT(joaat("p_ing_microphonel_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[7], iLocal_461[2], PED::GET_PED_BONE_INDEX(iLocal_461[2], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_467++;
					break;
				case 3:
					iLocal_461[3] = PED::CREATE_PED(26, joaat("S_F_Y_MovPrem_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_461[3], "mood_happy_1", 0);
					iLocal_467++;
					break;
				case 4:
					iLocal_461[4] = PED::CREATE_PED(26, joaat("S_F_Y_MovPrem_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_461[4], "mood_happy_1", 0);
					iLocal_467++;
					break;
				case 5:
					iLocal_461[5] = PED::CREATE_PED(26, joaat("S_F_Y_MovPrem_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_461[5], "mood_happy_1", 0);
					iLocal_467++;
					break;
				case 6:
					iLocal_461[6] = PED::CREATE_PED(26, joaat("S_F_Y_MovPrem_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_461[6], "mood_happy_1", 0);
					iLocal_467++;
					break;
				case 7:
					iLocal_461[7] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_467++;
					break;
				case 8:
					iLocal_461[8] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_462[1] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[1], iLocal_461[8], PED::GET_PED_BONE_INDEX(iLocal_461[8], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_467++;
					break;
				case 9:
					iLocal_461[9] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_462[2] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[2], iLocal_461[9], PED::GET_PED_BONE_INDEX(iLocal_461[9], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_467++;
					break;
				case 10:
					iLocal_461[10] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_462[3] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[3], iLocal_461[10], PED::GET_PED_BONE_INDEX(iLocal_461[10], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_467++;
					break;
				case 11:
					iLocal_461[11] = PED::CREATE_PED(26, joaat("S_F_Y_MovPrem_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_467++;
					break;
				case 12:
					iLocal_461[20] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 289.7286f, 181.3276f, 103.3649f, 248.7409f, true, true);
					iLocal_462[8] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[8], iLocal_461[20], PED::GET_PED_BONE_INDEX(iLocal_461[20], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(iLocal_461[20], "missmic4premiere", "Prem_Milton_Pap1_A", 1000f, -4f, -1, 262153, 0.462f, false, false, false);
					iLocal_467++;
					break;
				case 13:
					iLocal_461[21] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 290.0628f, 183.0464f, 103.3724f, 244.2059f, true, true);
					iLocal_462[9] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[9], iLocal_461[21], PED::GET_PED_BONE_INDEX(iLocal_461[21], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(iLocal_461[21], "missmic4premiere", "prem_actress_pap1_a", 1000f, -4f, -1, 262153, 0.462f, false, false, false);
					iLocal_467++;
					break;
				case 14:
					iLocal_461[12] = PED::CREATE_PED(26, joaat("S_M_Y_Grip_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_467++;
					break;
				case 15:
					iLocal_461[13] = PED::CREATE_PED(26, joaat("IG_Milton"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_461[13], 11, 0, 0, 0);
					iLocal_467++;
					break;
				case 16:
					iLocal_461[14] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 299.0112f, 182.2089f, 103.1925f, 136.6234f, true, true);
					iLocal_462[4] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[4], iLocal_461[14], PED::GET_PED_BONE_INDEX(iLocal_461[14], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(iLocal_461[14], "missmic4premiere", "Prem_Milton_Pap1_A", 1000f, -4f, -1, 262153, 0.462f, false, false, false);
					iLocal_467++;
					break;
				case 17:
					iLocal_461[15] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_462[5] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[5], iLocal_461[15], PED::GET_PED_BONE_INDEX(iLocal_461[15], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_467++;
					break;
				case 18:
					iLocal_461[16] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 300.5f, 203.51f, 103.4f, 0f, true, true);
					iLocal_462[6] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[6], iLocal_461[16], PED::GET_PED_BONE_INDEX(iLocal_461[16], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_467++;
					break;
				case 19:
					iLocal_461[17] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 302.6787f, 190.2461f, 103.071f, 81.0002f, true, true);
					TASK::TASK_PLAY_ANIM(iLocal_461[17], "missmic4premiere", "crowd_a_idle_01", 8f, -8f, -1, 1, 0f, false, false, false);
					iLocal_467++;
					break;
				case 20:
					iLocal_461[18] = PED::CREATE_PED(26, joaat("S_M_Y_Grip_01"), 305.6718f, 194.9252f, 103.1558f, 100.4348f, true, true);
					TASK::TASK_PLAY_ANIM(iLocal_461[18], "missmic4premiere", "crowd_b_idle_01", 8f, -8f, -1, 1, 0f, false, false, false);
					iLocal_467++;
					break;
				case 21:
					iLocal_461[19] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 300.6657f, 180.2628f, 102.9f, 90.7576f, true, true);
					iLocal_462[10] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[10], iLocal_461[19], PED::GET_PED_BONE_INDEX(iLocal_461[19], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_466);
					TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "PAP_IDLE_ACTION_01", 1000f, -4f, -1, 262152, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "PAP_IDLE_ACTION_02", 1000f, -4f, -1, 262152, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "PAP_IDLE_ACTION_02", 1000f, -4f, -1, 262152, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "PAP_IDLE_ACTION_02", 1000f, -4f, -1, 262152, 0f, false, false, false);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_466, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_466);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_461[19], iLocal_466);
					iLocal_467++;
					break;
				case 22:
					iLocal_461[22] = PED::CREATE_PED(26, joaat("S_M_M_MovPrem_01"), 297.0116f, 180.6192f, 103.2445f, 127.4307f, true, true);
					TASK::TASK_PLAY_ANIM(iLocal_461[22], "missmic4premiere", "prem_producer_argue_a", 1000f, -4f, -1, 786441, 0f, false, false, false);
					iLocal_462[12] = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_02"), 300.5f, 203.51f, 103.4f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[12], iLocal_461[22], PED::GET_PED_BONE_INDEX(iLocal_461[22], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_467++;
					break;
				case 23:
					iLocal_461[23] = PED::CREATE_PED(26, joaat("S_F_Y_MovPrem_01"), 292.7951f, 181.5232f, 103.3154f, 88.9302f, true, true);
					PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_461[23], "mood_happy_1", 0);
					TASK::TASK_PLAY_ANIM(iLocal_461[23], "missmic4premiere", "Prem_4stars_A_Molly", 1000f, -4f, -1, 262153, 0f, false, false, false);
					iLocal_467++;
					break;
				case 24:
					iLocal_467++;
					break;
				case 25:
					func_393(iLocal_461[0], "missmic4premiere", "Interview_Short_Anton", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[1], "missmic4premiere", "Interview_Short_Camman", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[2], "missmic4premiere", "Interview_Short_Lazlow", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[3], "missmic4premiere", "Prem_4stars_A_Aella", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[4], "missmic4premiere", "Prem_4stars_A_Benton", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[5], "missmic4premiere", "Prem_4stars_A_Molly", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[6], "missmic4premiere", "Prem_4stars_A_Ruben", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[7], "missmic4premiere", "Prem_Actress_fan_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[8], "missmic4premiere", "Prem_Actress_pap1_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[9], "missmic4premiere", "Prem_Actress_pap2_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[10], "missmic4premiere", "Prem_Actress_pap3_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[11], "missmic4premiere", "Prem_Actress_star_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[12], "missmic4premiere", "Prem_Milton_Fem_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[13], "missmic4premiere", "Prem_Milton_Milton_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[15], "missmic4premiere", "Prem_Milton_Pap2_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					func_393(iLocal_461[16], "missmic4premiere", "Prem_Milton_Pap3_A", 300.5f, 203.51f, 103.4f, 0f, 0f, 0f, 1000f, -4f, -1, 790537, 0.462f);
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[iVar0], false))
						{
							func_395(&(iLocal_461[iVar0]), 1);
							if (iVar0 != 22)
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_461[iVar0], true);
							}
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_461[iVar0], false, false);
						}
						iVar0++;
					}
					__LIB_0__::func_222(&uLocal_206, 8, iLocal_461[22], "PRODUCER", 0, 1);
					__LIB_0__::func_222(&uLocal_206, 6, iLocal_461[2], "LAZLOW", 0, 1);
					__LIB_0__::func_222(&uLocal_206, 7, iLocal_461[0], "ANTON", 0, 1);
					iLocal_467 = 0;
					return 1;
					break;
			}
			return 0;
			break;
		case 4:
			iLocal_393 = func_394();
			iLocal_395 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), 303.5163f, 201.2443f, 103.357f, 158.411f, true, true);
			__LIB_0__::func_222(&uLocal_206, 1, iLocal_395, "JIMMY", 0, 1);
			func_396();
			func_395(&iLocal_395, 1);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			break;
		case 6:
			iLocal_399 = VEHICLE::CREATE_VEHICLE(joaat("mesa3"), -824.2127f, 182.2403f, 70.7416f, 340.1401f, true, true, false);
			iLocal_400 = VEHICLE::CREATE_VEHICLE(joaat("mesa3"), -818.2394f, 185.043f, 71.2968f, 311.445f, true, true, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_399, 0, false, true);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_399, 1, false, true);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_399, 0, 0);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_400, 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_399, 5f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_400, 5f);
			Local_435 = { -807.239f, 182.773f, 74f };
			Local_436 = { 0f, 0f, 20f };
			func_392();
			iLocal_406 = OBJECT::CREATE_OBJECT(joaat("prop_cs_amanda_shoe"), ENTITY::GET_ENTITY_COORDS(iLocal_401, true), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_406, iLocal_401, PED::GET_PED_BONE_INDEX(iLocal_401, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			iLocal_404 = PED::CREATE_PED(26, func_390(), -809.6262f, 179.8829f, 71.153f, 46.4666f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_404, joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_404, true);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_404, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_404, 1000, 0);
			PED::SET_PED_ARMOUR(iLocal_404, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_404, iLocal_205);
			PED::SET_PED_CONFIG_FLAG(iLocal_404, 118, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_404, 208, true);
			__LIB_0__::func_222(&uLocal_206, 4, iLocal_404, "MERRYWEATHER1", 0, 1);
			iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(-807.239f, 182.773f, 74f, 0f, 0f, 20f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_struggle_b_at", 1000f, -1000f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_404, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_struggle_b_mw", 1000f, -1000f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, true);
			if (iLocal_204 == joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), true);
			}
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_463))
			{
				func_379(&iLocal_463, 15, -815.0861f, 163.3637f, 70.3941f, 195.6004f, 1, 0);
			}
			if (!OBJECT::DOES_PICKUP_EXIST(iLocal_464) && !__LIB_17__::func_76(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_465 = 0;
				MISC::SET_BIT(&iLocal_465, 1);
				MISC::SET_BIT(&iLocal_465, 8);
				MISC::SET_BIT(&iLocal_465, 4);
				iLocal_464 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_ASSAULTRIFLE"), -819.0212f, 179.4919f, 71.557f, -13.24f, -84.96f, -61.2f, iLocal_465, -1, 2, true, 0);
			}
			break;
		case 7:
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_393);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
			func_377();
			iLocal_403 = PED::CREATE_PED(26, iLocal_439, -803.35f, 172.9f, 75.7f, 55f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_403, joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_403, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_403, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_403, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_403, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_403, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_403, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_403, 9, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_403, 0, 1, 2, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_403, 208, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_403, 118, false);
			PED::SET_PED_ARMOUR(iLocal_403, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_403, iLocal_205);
			__LIB_0__::func_222(&uLocal_206, 5, iLocal_403, "MERRYWEATHER2", 0, 1);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_403, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_403, 1000, 0);
			iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.35f, 172.9f, 75.7f, "V_Michael");
			if (iLocal_204 == joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), true);
			}
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_401))
			{
				func_392();
				iLocal_404 = PED::CREATE_PED(26, func_390(), -809.6262f, 179.8829f, 71.153f, 46.4666f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_404, joaat("WEAPON_PISTOL"), -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_404, true);
				__LIB_0__::func_222(&uLocal_206, 4, iLocal_404, "MERRYWEATHER1", 0, 1);
				iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(Local_435, Local_436, 2);
				if (!PED::IS_PED_INJURED(iLocal_401))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_shoot_merry_at", 1000f, -1000f, 0, 0, 1000f, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_404))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_404, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_shoot_merry_mw", 1000f, -1000f, 0, 0, 1000f, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, false);
			}
			break;
		case 9:
			func_377();
			func_392();
			ENTITY::SET_ENTITY_COORDS(iLocal_401, -803.35f, 172.9f, 75.7f, true, false, false, true);
			break;
		case 10:
			if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -810.4206f, 180.0989f, 71.153f, 4f, 4f, 4f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.34534f, 175.49706f, 70.26038f, -794.60266f, 184.46185f, 82.4734f, 12f, false, true, 0)) && !CAM::IS_SPHERE_VISIBLE(-810.4206f, 180.0989f, 71.153f, 1f))
			{
				iLocal_405 = PED::CREATE_PED(26, func_390(), -810.4206f, 180.0989f, 71.153f, 108.587f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_405, joaat("WEAPON_PISTOL"), -1, true, true);
				TASK::TASK_WRITHE(iLocal_405, PLAYER::PLAYER_PED_ID(), 10, 0, false, -1);
			}
			if (iLocal_204 == joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), true);
			}
			break;
		case 11:
			break;
	}
	return 1;
}

void func_377()//Position - 0x66B1C
{
	iLocal_402 = PED::CREATE_PED(26, joaat("IG_TracyDiSanto"), -803.35f, 172.9f, 75.7f, 55f, true, true);
	__LIB_0__::func_222(&uLocal_206, 3, iLocal_402, "TRACEY", 0, 1);
	func_395(&iLocal_402, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_402, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_402, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_402, 208, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_402, 118, false);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 2, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 4, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_402, 8, 1, 0, 0);
}

int func_379(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x66FA4
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_374(bParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_17__::func_152(bParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (bParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (bParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (bParam1 == 15)
			{
				iVar1 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_372(iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_17__::func_153(*iParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				__LIB_17__::func_451(iParam0, Var0);
				if (bParam1 == 17 || bParam1 == 15)
				{
					__LIB_17__::func_153(*iParam0);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_390()//Position - 0x67FE2
{
	if (__LIB_0__::func_680())
	{
		return iLocal_439;
	}
	return iLocal_440;
}

void func_392()//Position - 0x6801E
{
	iLocal_401 = PED::CREATE_PED(26, joaat("IG_AmandaTownley"), -812.4667f, 177.3469f, 71.153f, 103.1597f, true, true);
	func_395(&iLocal_401, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_401, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_401, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_401, 3, 7, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_401, 4, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_401, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_401, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_401, 10, 1, 0, 0);
	__LIB_0__::func_222(&uLocal_206, 2, iLocal_401, "AMANDA", 0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_401, true);
	func_395(&iLocal_401, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_401, 118, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_401, 208, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_401, 118, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_401, 208, true);
	__LIB_0__::func_222(&uLocal_206, 2, iLocal_401, "AMANDA", 0, 1);
}

void func_393(int iParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param4, float fParam5, float fParam6, int iParam7, int iParam8, float fParam9)//Position - 0x680FC
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, sParam1, sParam2, Param3, Param4, fParam5, fParam6, iParam7, iParam8, fParam9, 2, 0);
	}
}

int func_394()//Position - 0x6812C
{
	int iVar0;
	iVar0 = VEHICLE::CREATE_VEHICLE(joaat("stretch"), 293.6189f, 176.4069f, 103.0985f, 69.5405f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "V1N3W88D");
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
	AUDIO::FORCE_USE_AUDIO_GAME_OBJECT(iVar0, "STRETCH_MICHAEL_4");
	VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return iVar0;
}

void func_395(int iParam0, bool bParam1)//Position - 0x68199
{
	PED::SET_PED_CAN_BE_DRAGGED_OUT(*iParam0, false);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	if (bParam1)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("PLAYER"));
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	}
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
}

void func_396()//Position - 0x681E5
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 1, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 4, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_395, 10, 2, 0, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_395, "MICHAEL_4_JIMMY_GROUP", 0f);
	AUDIO::STOP_PED_SPEAKING(iLocal_395, true);
}

int func_398(int iParam0)//Position - 0x68319
{
	switch (iParam0)
	{
		case 1:
			if (((((STREAMING::HAS_MODEL_LOADED(joaat("stretch")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("stretch"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto"))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "MIC4")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_MovPrem_01")))
			{
				return 1;
			}
			break;
		case 2:
			if (((STREAMING::HAS_ANIM_DICT_LOADED("missmic4jimmy_limo") && STREAMING::HAS_MODEL_LOADED(joaat("prop_champ_01b"))) && STREAMING::HAS_PTFX_ASSET_LOADED()) && STREAMING::HAS_MODEL_LOADED(joaat("prop_crate_01a")))
			{
				return 1;
			}
			break;
		case 3:
			if ((((((((((((((((STREAMING::HAS_ANIM_DICT_LOADED("missmic4premiere") && STREAMING::HAS_MODEL_LOADED(joaat("IG_Lazlow"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto"))) && STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_AntonB"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Milton"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_F_Y_MovPrem_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Paparazzi_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Grip_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_v_cam_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_ing_microphonel_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("stretch"))) && STREAMING::HAS_MODEL_LOADED(joaat("vacca"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_MovPrem_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing_02"))) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Michael_4_Fireworks", false, -1))
			{
				return 1;
			}
			break;
		case 4:
			if (((((((STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto")) && STREAMING::HAS_MODEL_LOADED(joaat("stretch"))) && STREAMING::HAS_MODEL_LOADED(joaat("vacca"))) && STREAMING::HAS_ANIM_DICT_LOADED("missmic4ig_4")) && STREAMING::HAS_ANIM_SET_LOADED("move_characters@jimmy@nervous@")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Paparazzi_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missmic4premiere"))
			{
				return 1;
			}
			break;
		case 6:
			if (((((((STREAMING::HAS_MODEL_LOADED(joaat("mesa3")) && STREAMING::HAS_MODEL_LOADED(joaat("IG_AmandaTownley"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_amanda_shoe"))) && STREAMING::HAS_MODEL_LOADED(iLocal_439)) && STREAMING::HAS_MODEL_LOADED(iLocal_440)) && WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_196)) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_5@stairs")) && __LIB_37__::func_211(15, 0))
			{
				return 1;
			}
			break;
		case 7:
			if ((((((STREAMING::HAS_MODEL_LOADED(joaat("IG_TracyDiSanto")) && STREAMING::HAS_MODEL_LOADED(joaat("IG_AmandaTownley"))) && STREAMING::HAS_MODEL_LOADED(iLocal_439)) && STREAMING::HAS_MODEL_LOADED(iLocal_440)) && WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_196)) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_5@stairs")) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_5@bedroom"))
			{
				return 1;
			}
			break;
		case 8:
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_439) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Sol5")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_CARBINERIFLE"))) && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				return 1;
			}
			break;
		case 9:
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
			if (((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_439) && STREAMING::HAS_MODEL_LOADED(iLocal_440)) && STREAMING::HAS_MODEL_LOADED(joaat("IG_TracyDiSanto"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_AmandaTownley"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Sol5")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_CARBINERIFLE"))) && STREAMING::HAS_MODEL_LOADED(joaat("mesa3"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "Sol5MW")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "Sol5MW")) && INTERIOR::IS_INTERIOR_READY(iLocal_392)) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")))
			{
				return 1;
			}
			break;
		case 10:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_439) && STREAMING::HAS_MODEL_LOADED(iLocal_440))
			{
				return 1;
			}
			break;
		case 11:
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 0, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 7, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 7, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 0, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 3, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 4, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 6, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 7, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Tracy", 8, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 3, 3, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 4, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 5, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 7, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 8, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 9, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 10, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy", 0, 0, 0, 0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_400(int iParam0)//Position - 0x688CB
{
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(joaat("stretch"));
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("stretch"), 3);
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			HUD::REQUEST_ADDITIONAL_TEXT("SOL5", 0);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "MIC4");
			STREAMING::REQUEST_MODEL(joaat("S_M_M_MovPrem_01"));
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missmic4jimmy_limo");
			STREAMING::REQUEST_MODEL(joaat("prop_champ_01b"));
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(joaat("prop_crate_01a"));
			break;
		case 3:
			STREAMING::REQUEST_ANIM_DICT("missmic4premiere");
			STREAMING::REQUEST_MODEL(joaat("IG_Lazlow"));
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_MODEL(joaat("U_M_Y_AntonB"));
			STREAMING::REQUEST_MODEL(joaat("IG_Milton"));
			STREAMING::REQUEST_MODEL(joaat("S_F_Y_MovPrem_01"));
			STREAMING::REQUEST_MODEL(joaat("A_M_M_Paparazzi_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Grip_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_MovPrem_01"));
			STREAMING::REQUEST_MODEL(joaat("prop_v_cam_01"));
			STREAMING::REQUEST_MODEL(joaat("p_ing_microphonel_01"));
			STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
			STREAMING::REQUEST_MODEL(joaat("stretch"));
			STREAMING::REQUEST_MODEL(joaat("vacca"));
			STREAMING::REQUEST_MODEL(joaat("prop_phone_ing_02"));
			STREAMING::REQUEST_PTFX_ASSET();
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Michael_4_Fireworks", false, -1);
			break;
		case 4:
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_MODEL(joaat("stretch"));
			STREAMING::REQUEST_MODEL(joaat("vacca"));
			STREAMING::REQUEST_ANIM_DICT("missmic4ig_4");
			STREAMING::REQUEST_ANIM_SET("move_characters@jimmy@nervous@");
			STREAMING::REQUEST_ANIM_DICT("missmic4ig_4");
			STREAMING::REQUEST_MODEL(joaat("A_M_M_Paparazzi_01"));
			STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
			STREAMING::REQUEST_ANIM_DICT("missmic4premiere");
			break;
		case 6:
			STREAMING::REQUEST_MODEL(joaat("mesa3"));
			STREAMING::REQUEST_MODEL(joaat("IG_AmandaTownley"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_amanda_shoe"));
			STREAMING::REQUEST_MODEL(iLocal_439);
			STREAMING::REQUEST_MODEL(iLocal_440);
			WEAPON::REQUEST_WEAPON_ASSET(iLocal_196, 31, 0);
			STREAMING::REQUEST_ANIM_DICT("misssolomon_5@stairs");
			__LIB_37__::func_209(15, 0);
			break;
		case 7:
			STREAMING::REQUEST_MODEL(joaat("IG_TracyDiSanto"));
			STREAMING::REQUEST_MODEL(joaat("IG_AmandaTownley"));
			STREAMING::REQUEST_MODEL(iLocal_439);
			STREAMING::REQUEST_MODEL(iLocal_440);
			WEAPON::REQUEST_WEAPON_ASSET(iLocal_196, 31, 0);
			STREAMING::REQUEST_ANIM_DICT("misssolomon_5@bedroom");
			STREAMING::REQUEST_ANIM_DICT("misssolomon_5@stairs");
			iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.35f, 172.9f, 75.7f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_392);
			break;
		case 8:
			STREAMING::REQUEST_MODEL(iLocal_439);
			STREAMING::REQUEST_MODEL(iLocal_440);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Sol5");
			CUTSCENE::REQUEST_CUTSCENE("SOL_5_MCS_1", 8);
			break;
		case 9:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			STREAMING::REQUEST_MODEL(joaat("IG_TracyDiSanto"));
			STREAMING::REQUEST_MODEL(joaat("IG_AmandaTownley"));
			STREAMING::REQUEST_MODEL(iLocal_439);
			STREAMING::REQUEST_MODEL(iLocal_440);
			STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Sol5");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
			STREAMING::REQUEST_MODEL(joaat("mesa3"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "Sol5MW");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "Sol5MW");
			iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS(-824.2127f, 182.2403f, 70.7416f);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_392);
			break;
		case 10:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			STREAMING::REQUEST_MODEL(iLocal_439);
			STREAMING::REQUEST_MODEL(iLocal_440);
			break;
		case 11:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			CUTSCENE::REQUEST_CUTSCENE("SOL_5_MCS_2", 8);
			break;
	}
}

bool func_404(int iParam0)//Position - 0x68C5C
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -817.34534f, 175.49706f, 70.26038f, -794.60266f, 184.46185f, 82.4734f, 12f, false, true, 0);
}

void func_405()//Position - 0x68C90
{
	int iVar0;
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_bh1_48_backdoor_l"), -796.57f, 177.22f, 73.04f, true, 1f, false);
	OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_bh1_48_backdoor_r"), -794.51f, 178.01f, 73.04f, true, -1f, false);
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-793.394f, 180.507f, 73.04f, 2f, joaat("prop_bh1_48_backdoor_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_bh1_48_backdoor_l"), -793.394f, 180.507f, 73.04f, true, 1f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-794.185f, 182.568f, 73.04f, 2f, joaat("prop_bh1_48_backdoor_r"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_bh1_48_backdoor_r"), -794.185f, 182.568f, 73.04f, true, -1f, false);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.34534f, 175.49706f, 70.26038f, -794.60266f, 184.46185f, 82.4734f, 12f, false, true, 0))
	{
		bLocal_597 = false;
	}
	else
	{
		bLocal_597 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_463))
	{
		__LIB_37__::func_209(15, 0);
		if (__LIB_37__::func_211(15, 0))
		{
			func_379(&iLocal_463, 15, -815.0861f, 163.3637f, 70.3941f, 195.6004f, 1, 0);
		}
	}
	__LIB_11__::func_618();
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		Global_100441.f_12[2] = 1;
	}
	if ((!__LIB_13__::func_755(&Local_372, 1) && iLocal_626 == 0) && iLocal_371 >= 3)
	{
		__LIB_0__::func_229("SOL5_KILLBAD", 7500, 0);
		iLocal_626 = 1;
	}
	switch (iLocal_371)
	{
		case 0:
			__LIB_17__::func_171(4, 1, 0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			iLocal_625 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), CAM::GET_GAMEPLAY_CAM_COORD(), true, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_625, false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_625, false, false);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-378388578))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(-378388578, joaat("v_ilev_mm_doordaughter"), -802.702f, 176.176f, 76.89f, true, true, false);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-378388578, 0f, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-378388578, 4, true, true);
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1700375831))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(-1700375831, joaat("v_ilev_mm_windowwc"), -802.73334f, 167.5041f, 77.5824f, true, true, false);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1700375831, 0f, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1700375831, 0, true, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_194))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_194, false))
				{
					if (!__LIB_0__::func_363(iLocal_194, 0, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_194, -829.735f, 164.0143f, 68.2444f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_194, 345.6341f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_194, 5f);
					}
				}
			}
			TASK::ADD_COVER_BLOCKING_AREA(-800.4777f, 165.0952f, 70.1682f, -797.3882f, 170.1375f, 72.7098f, true, true, true, false);
			TASK::ADD_COVER_BLOCKING_AREA(-821.9898f, 150.2125f, 70.0244f, -819.2112f, 154.3554f, 72.0284f, true, true, true, false);
			AUDIO::START_AUDIO_SCENE("MI_4_DEFEND_HOUSE_MAIN");
			PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, true, 0);
			iLocal_598 = 0;
			iLocal_624 = 0;
			__LIB_0__::func_222(&uLocal_206, 1, 0, "JIMMY", 0, 1);
			AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(false);
			PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(false);
			iLocal_622 = 4000;
			iLocal_600 = 0;
			iLocal_601 = 0;
			iLocal_586 = 0;
			iLocal_587 = 0;
			iLocal_600 = 0;
			iLocal_601 = 0;
			iLocal_610 = 0;
			iLocal_611 = 0;
			iLocal_613 = 0;
			iLocal_627 = 0;
			iLocal_628 = 0;
			iLocal_201 = 0;
			iVar0 = 0;
			while (iVar0 <= 16)
			{
				iLocal_428[iVar0] = 0;
				iVar0++;
			}
			__LIB_0__::func_753();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_403, 1000, true, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_404);
			iLocal_585 = 0;
			func_400(9);
			__LIB_43__::func_517(6, "STAGE_FIGHT_INCOMING_BAD_GUYS", 1, 0, 0, 1);
			if (iLocal_551 != 0)
			{
				TASK::REMOVE_COVER_POINT(iLocal_551);
			}
			iLocal_551 = TASK::ADD_COVER_POINT(-802.8381f, 179.84833f, 75.7407f, 16.5058f, 0, 2, 4, true);
			iLocal_589 = TASK::ADD_COVER_POINT(-806.6196f, 176.69244f, 71.8347f, 30.2791f, 1, 2, 4, false);
			iLocal_594 = TASK::ADD_COVER_POINT(-798.3778f, 177.98271f, 71.83471f, 115.9965f, 0, 2, 4, false);
			iLocal_590 = TASK::ADD_COVER_POINT(-798.1015f, 185.0172f, 71.6056f, 109.7301f, 1, 0, 4, false);
			iLocal_591 = TASK::ADD_COVER_POINT(-803.3184f, 183.6969f, 71.6055f, 120.6245f, 1, 0, 4, false);
			iLocal_592 = TASK::ADD_COVER_POINT(-792.2584f, 158.9243f, 69.6745f, 358.7681f, 0, 0, 4, false);
			iLocal_593 = TASK::ADD_COVER_POINT(-782.0049f, 158.5722f, 66.4747f, 120.1811f, 1, 0, 4, false);
			if (__LIB_16__::func_306(0) == joaat("WEAPON_UNARMED") || __LIB_16__::func_306(0) == 0)
			{
				if (iLocal_468 == joaat("WEAPON_UNARMED"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_468, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_16__::func_306(0), false);
			}
			iLocal_617 = 0;
			iLocal_619 = 0;
			iLocal_611 = 0;
			iLocal_407[16] = PED::CREATE_PED(26, func_390(), -809.6782f, 182.3056f, 72.2454f, 340.7195f, true, true);
			PED::SET_PED_LEG_IK_MODE(iLocal_407[16], 2);
			func_423(&(iLocal_407[16]), joaat("WEAPON_PISTOL"));
			TASK::OPEN_SEQUENCE_TASK(&iLocal_605);
			TASK::TASK_PAUSE(0, 250);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -806.374f, 183.1262f, 74.0027f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_605);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_407[16], iLocal_605);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_605);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[16], -806.8599f, 183.7816f, 74.0032f, 1f, true, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_407[16], 50f, 0);
			if (iLocal_552 == 0)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -802.8381f, 179.84833f, 75.7407f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 105.5291f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -802.8381f, 179.84833f, 75.7407f, -1, true, 0.5f, true, true, iLocal_551, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-90f);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 5f, 4);
			func_352();
			__LIB_0__::func_222(&uLocal_206, 6, iLocal_407[16], "MERRYWEATHER7", 0, 1);
			__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_MERRYIN", 9, 0, 0, 0);
			iLocal_626 = 0;
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_BAD_GUYS");
			iLocal_602 = MISC::GET_GAME_TIMER();
			iLocal_371 = 3;
			break;
		case 3:
			func_422();
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-816.72f, 179.1f, 72.83f, 2f, joaat("v_ilev_mm_doorm_l"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.83f, true, 1f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-816.11f, 177.51f, 72.83f, 2f, joaat("v_ilev_mm_doorm_r"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.83f, true, -1f, false);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_602) > 5000)
			{
				if (!PED::IS_PED_INJURED(iLocal_407[16]))
				{
					func_421(iLocal_407[16]);
				}
				iLocal_602 = MISC::GET_GAME_TIMER();
			}
			if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_407[16], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_HURT(iLocal_407[16])) || PED::IS_PED_INJURED(iLocal_407[16])) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_407[16], PLAYER::PLAYER_PED_ID(), 2f, 2f, 2f, false, true, 0)) || (CAM::IS_SPHERE_VISIBLE(-809.2635f, 177.06f, 75.7407f, 0.5f) && (MISC::GET_GAME_TIMER() - iLocal_602) > 1000))
			{
				iLocal_371++;
				__LIB_0__::func_222(&uLocal_206, 6, 0, "MERRYWEATHER6", 0, 1);
			}
			break;
		case 4:
			func_422();
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -808.8208f, 184.6101f, 71.09059f, -807.0656f, 179.28342f, 86.24236f, 7f, false, true, 0) || func_420()) || bLocal_597) || (MISC::GET_GAME_TIMER() - iLocal_602) > 45000)
			{
				if (((__LIB_0__::func_323() && Global_100441.f_12[1] == 0) && Global_100441.f_12[2] == 0) && (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[49 /*6*/].f_1 == 1 || Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[49 /*6*/].f_1 == 2))
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						__LIB_0__::func_151("MIC4_SA_KM", -1);
					}
					else
					{
						__LIB_0__::func_151("MIC4_SA", -1);
					}
					Global_100441.f_12[1] = 1;
				}
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_GRENADE", 9, 0, 0, 0))
				{
					iLocal_618 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_GRENADE")), -817.6454f, 177.7025f, 73.1987f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_618, true);
					iLocal_602 = MISC::GET_GAME_TIMER();
					iLocal_371++;
				}
			}
			break;
		case 5:
			func_422();
			if ((((iLocal_619 == 0 && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_618)) && (MISC::GET_GAME_TIMER() - iLocal_602) > 1250) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_618, true), 0.5f)) || func_420())
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_618, false);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_618, 1, __LIB_0__::func_79(Vector(73.1987f, 177.7025f, -817.6454f) - Vector(71.39f, 179.4353f, -813.3746f)) * Vector(-5f, -5f, -5f), 0f, 0f, 0f, 0, true, true, true, false, true);
				iLocal_619 = 1;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_602) > 2500 && iLocal_619 == 1)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_618, false, false);
				OBJECT::DELETE_OBJECT(&iLocal_618);
				FIRE::ADD_EXPLOSION(-813.3746f, 179.4353f, 71.39f, 0, 1f, true, false, 1f, false);
				iLocal_371++;
			}
			break;
		case 6:
			func_422();
			if (FIRE::IS_EXPLOSION_IN_SPHERE(0, -813.3746f, 179.4353f, 71.39f, 5f))
			{
				iLocal_602 = MISC::GET_GAME_TIMER();
				AUDIO::START_AUDIO_SCENE("MI_4_ENEMIES_BREACH_DOOR");
				iLocal_407[2] = PED::CREATE_PED(26, func_390(), -818.7431f, 174.862f, 70.633f, 318.763f, true, true);
				iLocal_407[3] = PED::CREATE_PED(26, func_390(), -824.015f, 179.4059f, 70.4689f, 265.8274f, true, true);
				func_423(&(iLocal_407[2]), joaat("WEAPON_CARBINERIFLE"));
				func_423(&(iLocal_407[3]), joaat("WEAPON_PISTOL"));
				TASK::OPEN_SEQUENCE_TASK(&iLocal_620);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -813.7005f, 181.0271f, 71.1531f, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 5f, true, 64, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_620);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_407[2], iLocal_620);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_620);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_620);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -812.7673f, 177.9856f, 71.1592f, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 5f, true, 64, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_620);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_407[3], iLocal_620);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_620);
				iLocal_407[4] = PED::CREATE_PED(26, func_390(), -800.0967f, 178.5484f, 71.8348f, 112.4967f, true, true);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_407[4], -806.7888f, 176.5762f, 71.8347f, -1, true, 0f, true, true, iLocal_589, false);
				__LIB_0__::func_709(iLocal_407[2], "COVER_ME", "s_m_y_genericmarine_01_black_mini_01", 3);
				func_423(&(iLocal_407[4]), joaat("WEAPON_CARBINERIFLE"));
				PED::SET_PED_NAME_DEBUG(iLocal_407[2], "Merry: 2");
				PED::SET_PED_NAME_DEBUG(iLocal_407[3], "Merry: 3");
				PED::SET_PED_NAME_DEBUG(iLocal_407[4], "Merry: 4");
				func_421(iLocal_407[2]);
				func_421(iLocal_407[3]);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[4], -806.7888f, 176.5762f, 71.8347f, 2.25f, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[4], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[2], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[3], true);
				iLocal_621 = MISC::GET_GAME_TIMER();
				iLocal_371++;
			}
			break;
		case 7:
		case 8:
			if (iLocal_371 == 7)
			{
				if (!PED::IS_PED_INJURED(iLocal_407[2]))
				{
					__LIB_0__::func_222(&uLocal_206, 6, iLocal_407[2], "MERRYWEATHER7", 0, 1);
					if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_MERRYIN", 9, 0, 0, 0))
					{
						iLocal_371 = 8;
					}
				}
				else
				{
					iLocal_371 = 8;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_407[4]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_407[4]) && !bLocal_597)
				{
					PED::SET_PED_RESET_FLAG(iLocal_407[4], 67, true);
					if (iLocal_610 == 0)
					{
						iLocal_604 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_604) > 500 && iLocal_610 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[4], false);
						__LIB_0__::func_222(&uLocal_206, 6, iLocal_407[4], "MERRYWEATHER7", 0, 1);
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_MERRYDI", 9, 0, 0, 0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[4], false);
							PED::SET_COMBAT_FLOAT(iLocal_407[4], 3, 0.25f);
							TASK::TASK_COMBAT_PED(iLocal_407[4], PLAYER::PLAYER_PED_ID(), 0, 16);
							func_421(iLocal_407[4]);
							iLocal_610 = 1;
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_604) > 2000 && iLocal_611 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[4], false);
						func_421(iLocal_407[4]);
						iLocal_611 = 1;
					}
				}
				if ((((MISC::GET_GAME_TIMER() - iLocal_602) > 15000 && iLocal_611 == 0) && PED::IS_PED_INJURED(iLocal_407[2])) && PED::IS_PED_INJURED(iLocal_407[3]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[4], false);
					func_421(iLocal_407[4]);
					iLocal_611 = 1;
				}
			}
			else if (iLocal_428[4] == 0)
			{
				iLocal_621 = MISC::GET_GAME_TIMER();
				iLocal_428[4] = 1;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_602) > 4000)
			{
				if (iLocal_428[2] == 0 && !PED::IS_PED_INJURED(iLocal_407[2]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_407[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[2], false);
						func_421(iLocal_407[2]);
						iLocal_428[2] = 1;
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[2], true);
					}
				}
				if (iLocal_428[3] == 0 && !PED::IS_PED_INJURED(iLocal_407[3]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_407[3], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[3], false);
						func_421(iLocal_407[3]);
						iLocal_428[3] = 1;
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[3], true);
					}
				}
			}
			func_422();
			if (((((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 210f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 310f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.01807f, 181.41891f, 71.09814f, -812.1417f, 179.26251f, 73.659195f, 3.5f, false, true, 0)) || ((CAM::IS_SPHERE_VISIBLE(-802.0311f, 182.6728f, 72.9004f, 0.5f) && PED::IS_PED_HURT(iLocal_407[4])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.547f, 178.49019f, 71.227776f, -810.6705f, 180.81944f, 74.90309f, 5.5f, false, true, 0))) || bLocal_597) || (PED::IS_PED_INJURED(iLocal_407[2]) && iLocal_624 > 1))
			{
				AUDIO::STOP_AUDIO_SCENE("MI_4_ENEMIES_BREACH_DOOR");
				AUDIO::TRIGGER_MUSIC_EVENT("SOL5_GROUND_FLOOR");
				iLocal_407[5] = PED::CREATE_PED(26, func_390(), -801.34f, 179.5918f, 71.8347f, 335.4891f, true, true);
				iLocal_407[6] = PED::CREATE_PED(26, func_390(), -797.1436f, 181.8869f, 71.8453f, 351.127f, true, true);
				iLocal_407[14] = PED::CREATE_PED(26, func_390(), -798.3778f, 177.98271f, 71.83471f, 18.7039f, true, true);
				func_423(&(iLocal_407[5]), joaat("WEAPON_CARBINERIFLE"));
				func_423(&(iLocal_407[6]), joaat("WEAPON_PISTOL"));
				func_423(&(iLocal_407[14]), joaat("WEAPON_CARBINERIFLE"));
				PED::SET_PED_NAME_DEBUG(iLocal_407[6], "Merry: 5");
				PED::SET_PED_NAME_DEBUG(iLocal_407[5], "Merry: 6");
				PED::SET_PED_NAME_DEBUG(iLocal_407[14], "Merry: 14");
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[5], -803.3466f, 183.4802f, 71.6055f, 3f, false, false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[6], -798.2574f, 185.4006f, 71.6056f, 3f, false, false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[14], -798.4697f, 177.8276f, 71.8347f, 3f, false, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_407[5], 37, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_407[6], 37, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_407[5], 302, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_407[6], 302, true);
				TASK::TASK_COMBAT_PED(iLocal_407[5], PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_COMBAT_PED(iLocal_407[6], PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_COMBAT_PED(iLocal_407[14], PLAYER::PLAYER_PED_ID(), 0, 16);
				__LIB_0__::func_222(&uLocal_206, 6, iLocal_407[5], "MERRYWEATHER1", 0, 1);
				SYSTEM::SETTIMERB(0);
				iLocal_612 = MISC::GET_GAME_TIMER();
				iLocal_613 = 0;
				iLocal_371++;
			}
			else if ((((((MISC::GET_GAME_TIMER() - iLocal_621) > iLocal_622 && !bLocal_597) && PED::IS_PED_INJURED(iLocal_407[2])) && PED::IS_PED_INJURED(iLocal_407[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_407[5])) && CAM::IS_SPHERE_VISIBLE(-817.4581f, 177.9828f, 71.2274f, 0.5f))
			{
				switch (iLocal_624)
				{
					case 0:
						iLocal_622 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000);
						break;
					case 1:
						iLocal_622 = MISC::GET_RANDOM_INT_IN_RANGE(8500, 12000);
						break;
					case 2:
						iLocal_622 = MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000);
						break;
					default:
						iLocal_622 = 15000;
						break;
				}
				iLocal_624++;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_407[2]));
				if ((iLocal_624 % 2) == 0)
				{
					iLocal_407[2] = PED::CREATE_PED(26, func_390(), -818.6957f, 172.7013f, 70.5827f, 351.407f, true, true);
				}
				else
				{
					iLocal_407[2] = PED::CREATE_PED(26, func_390(), -822.136f, 179.2826f, 70.5304f, 264.9692f, true, true);
				}
				func_423(&(iLocal_407[2]), joaat("WEAPON_PISTOL"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_407[2], true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_620);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -816.6824f, 178.2494f, 71.2278f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_COMBAT_PED_TIMED(0, PLAYER::PLAYER_PED_ID(), 2000, 0);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -813.7005f, 181.0271f, 71.1531f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_620);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_407[2], iLocal_620);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_620);
				__LIB_0__::func_709(iLocal_407[2], "GENERIC_WAR_CRY", "s_m_y_genericmarine_01_black_mini_01", 3);
				PED::SET_PED_NAME_DEBUG(iLocal_407[2], "EXTRA: 2");
				iLocal_621 = MISC::GET_GAME_TIMER();
				func_421(iLocal_407[2]);
			}
			break;
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_407[5]))
			{
				__LIB_0__::func_709(iLocal_407[5], "COVER_ME", "s_m_y_genericmarine_01_black_mini_01", 3);
			}
			iLocal_371++;
			break;
		case 10:
			func_422();
			if ((MISC::GET_GAME_TIMER() - iLocal_612) > 10000 && iLocal_613 == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_407[5]))
				{
					func_421(iLocal_407[5]);
				}
				if (!PED::IS_PED_INJURED(iLocal_407[6]))
				{
					func_421(iLocal_407[6]);
				}
				iLocal_613 = 1;
			}
			if (iLocal_586 == 0)
			{
				if ((func_414(PLAYER::PLAYER_PED_ID()) || func_420()) || iLocal_201 >= 2)
				{
					iLocal_407[7] = PED::CREATE_PED(26, func_390(), -787.6755f, 167.0518f, 70.3636f, 351.2527f, true, true);
					func_423(&(iLocal_407[7]), joaat("WEAPON_CARBINERIFLE"));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[7], -791.1288f, 173.7254f, 71.5669f, 1.5f, false, false);
					func_413(iLocal_407[7], -791.1288f, 173.7254f, 71.5669f, PLAYER::PLAYER_PED_ID(), 1073741824);
					PED::SET_PED_NAME_DEBUG(iLocal_407[7], "Merry 7");
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_407[7], 0.5f, 0.5f);
					iLocal_427[7] = MISC::GET_GAME_TIMER();
					iLocal_428[7] = 0;
					iLocal_586 = 1;
				}
			}
			if ((iLocal_586 == 1 && (MISC::GET_GAME_TIMER() - iLocal_427[7]) > 30000) && iLocal_428[7] == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_407[7]))
				{
					__LIB_0__::func_709(iLocal_407[7], "GENERIC_WAR_CRY", "s_m_y_genericmarine_01_black_mini_01", 3);
					func_421(iLocal_407[7]);
				}
				MISC::FORCE_LIGHTNING_FLASH();
				iLocal_428[7] = 1;
			}
			if ((bLocal_597 && iLocal_586 == 1) && !ENTITY::DOES_ENTITY_EXIST(iLocal_407[8]))
			{
				iLocal_407[8] = PED::CREATE_PED(26, func_390(), -799.2374f, 165.6819f, 70.5143f, 299.607f, true, true);
				func_423(&(iLocal_407[8]), joaat("WEAPON_CARBINERIFLE"));
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[8], -791.1288f, 173.7254f, 71.5669f, 1.2f, false, false);
				func_413(iLocal_407[8], -791.1288f, 173.7254f, 71.5669f, PLAYER::PLAYER_PED_ID(), 1073741824);
				PED::SET_PED_NAME_DEBUG(iLocal_407[8], "Merry 8");
				WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_407[8], 0.5f, 0.5f);
				iLocal_602 = MISC::GET_GAME_TIMER();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_407[8]) && iLocal_428[8] == 0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_602) > 10000)
				{
					if (!PED::IS_PED_INJURED(iLocal_407[8]))
					{
						func_421(iLocal_407[8]);
						iLocal_428[8] = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.9839f, 163.99092f, 70.53841f, -788.17175f, 167.60231f, 73.8642f, 6f, false, true, 0) || (ENTITY::DOES_ENTITY_EXIST(iLocal_407[8]) && PED::IS_PED_INJURED(iLocal_407[8])))
			{
				if (iLocal_587 == 0 && bLocal_597)
				{
					if (!func_412(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_407[9] = PED::CREATE_PED(26, func_390(), -811.7975f, 163.0438f, 70.5636f, 23.6469f, true, true);
						func_413(iLocal_407[9], -801.548f, 161.9153f, 70.5567f, PLAYER::PLAYER_PED_ID(), 1073741824);
						func_423(&(iLocal_407[9]), joaat("WEAPON_CARBINERIFLE"));
						PED::SET_PED_NAME_DEBUG(iLocal_407[9], "Merry 9");
						iLocal_588 = MISC::GET_GAME_TIMER();
					}
					iLocal_587 = 1;
				}
			}
			if ((iLocal_587 == 1 && iLocal_428[9] == 0) && (MISC::GET_GAME_TIMER() - iLocal_427[9]) > 5000)
			{
				if (!PED::IS_PED_INJURED(iLocal_407[9]))
				{
					func_421(iLocal_407[9]);
				}
				iLocal_428[9] = 1;
			}
			if (iLocal_600 == 0)
			{
				if (SYSTEM::TIMERA() > 1000)
				{
					if (bLocal_597)
					{
						if (iLocal_600 == 0)
						{
							iVar0 = 0;
							while (iVar0 <= 16)
							{
								if (!PED::IS_PED_INJURED(iLocal_407[iVar0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_407[iVar0], -817.34534f, 175.49706f, 70.26038f, -794.60266f, 184.46185f, 82.4734f, 12f, false, true, 0))
								{
									func_421(iLocal_407[iVar0]);
								}
								iVar0++;
							}
							iLocal_600 = 1;
						}
					}
					else
					{
						SYSTEM::SETTIMERA(0);
					}
				}
			}
			if (((bLocal_597 && iLocal_587 == 1) && (MISC::GET_GAME_TIMER() - iLocal_588) > 20000) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.12964f, 157.9254f, 69.90251f, -787.0368f, 167.59914f, 77.36569f, 10.25f, false, true, 0))
			{
				__LIB_0__::func_497(445, iLocal_615, 0);
				iLocal_371++;
			}
			break;
		case 11:
			if ((func_398(9) && !func_412(PLAYER::PLAYER_PED_ID())) && !func_410(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_407[12] = PED::CREATE_PED(26, func_390(), -821.4448f, 153.02f, 69.0971f, 339.5754f, true, true);
				func_423(&(iLocal_407[12]), joaat("WEAPON_CARBINERIFLE"));
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_407[12], -811.7975f, 163.0438f, 70.5636f, 1.2f, false, false);
				func_413(iLocal_407[12], -811.7975f, 163.0438f, 70.5636f, PLAYER::PLAYER_PED_ID(), 1073741824);
				func_421(iLocal_407[12]);
				PED::SET_PED_NAME_DEBUG(iLocal_407[12], "Merry 12");
				AUDIO::TRIGGER_MUSIC_EVENT("SOL5_MORE_MERRY");
				func_409(&Local_553, joaat("mesa3"), 3, "Sol5MW", 3000f, 1f);
				VEHICLE::SET_VEHICLE_COLOURS(Local_553.f_0, 0, 0);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_553.f_0, 0f, 0f, 0.2559f);
				AUDIO::START_AUDIO_SCENE("MI_4_ENEMY_CAR_ARRIVES");
				iLocal_371++;
			}
			break;
		case 12:
			if (iLocal_617 == 0)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-816.72f, 179.1f, 72.83f, 2f, joaat("v_ilev_mm_doorm_l"), false) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-816.11f, 177.51f, 72.83f, 2f, joaat("v_ilev_mm_doorm_r"), false))
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.83f, false, 0f, false);
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.83f, false, 0f, false);
					iLocal_617 = 1;
				}
			}
			func_422();
			if (((PED::IS_PED_INJURED(Local_553.f_2) && (PED::IS_PED_INJURED(Local_553.f_4) || PED::IS_PED_INJURED(Local_553.f_1))) && !ENTITY::DOES_ENTITY_EXIST(Local_561.f_0)) || (!ENTITY::DOES_ENTITY_EXIST(Local_561.f_0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -839.16846f, 149.88449f, 65.92462f, -804.99426f, 163.10222f, 73.78909f, 11.75f, false, true, 0)))
			{
				func_409(&Local_561, joaat("mesa3"), 4, "Sol5MW", 1000f, 1f);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_561.f_0, 0f, 0f, 0.2559f);
				PED::DELETE_PED(&(Local_561.f_3));
				PED::DELETE_PED(&(Local_561.f_4));
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_561.f_1, -822.3016f, 182.69292f, 69.38387f, -827.9179f, 176.60045f, 72.69225f, 3.5f, false, false);
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_561.f_2, -822.3016f, 182.69292f, 69.38387f, -827.9179f, 176.60045f, 72.69225f, 3.5f, false, false);
				VEHICLE::SET_VEHICLE_COLOURS(Local_561.f_0, 0, 0);
				AUDIO::START_AUDIO_SCENE("MI_4_ENEMY_CAR_ARRIVES");
				func_421(Local_561.f_1);
				func_421(Local_561.f_2);
			}
			if (func_408(Local_553.f_0, "SOL5MW") > 90f && !PED::IS_PED_INJURED(Local_553.f_4))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_553.f_4, joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					MISC::FORCE_LIGHTNING_FLASH();
					func_421(Local_553.f_4);
					TASK::TASK_COMBAT_PED(Local_553.f_4, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			if (func_408(Local_553.f_0, "SOL5MW") > 93f && !PED::IS_PED_INJURED(Local_553.f_3))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_553.f_3, joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					func_421(Local_553.f_3);
					TASK::TASK_COMBAT_PED(Local_553.f_3, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			if (func_408(Local_553.f_0, "SOL5MW") > 95.5f && !PED::IS_PED_INJURED(Local_553.f_2))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_553.f_2, joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					func_421(Local_553.f_2);
					TASK::TASK_COMBAT_PED(Local_553.f_2, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			if (func_408(Local_553.f_0, "SOL5MW") >= 96.9f && iLocal_585 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_553.f_1))
				{
					func_421(Local_553.f_1);
					TASK::TASK_COMBAT_PED(Local_553.f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_ENEMY_CAR_ARRIVES"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_4_ENEMY_CAR_ARRIVES");
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_553.f_0, 0f);
						iLocal_603 = MISC::GET_GAME_TIMER();
					}
					iLocal_585 = 1;
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_ENEMY_CAR_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("MI_4_ENEMY_CAR_ARRIVES");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_553.f_0, 0f);
					iLocal_603 = MISC::GET_GAME_TIMER();
					iLocal_585 = 1;
				}
			}
			if (func_408(Local_561.f_0, "SOL5MW") >= 96.9f)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_ENEMY_CAR_ARRIVES"))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_561.f_0, 0f);
					AUDIO::STOP_AUDIO_SCENE("MI_4_ENEMY_CAR_ARRIVES");
				}
			}
			func_422();
			__LIB_0__::func_631(Local_553.f_1, &(Local_553.f_5), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_553.f_2, &(Local_553.f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_553.f_3, &(Local_553.f_21), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_553.f_4, &(Local_553.f_29), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_561.f_1, &(Local_561.f_5), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_561.f_2, &(Local_561.f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -812.6817f, 160.5256f, 70.4072f, 1) > 20f && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_553.f_0, 1) > 20f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_553.f_0, 0.21f);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_553.f_0, (1.2f - (1f / __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -812.6817f, 160.5256f, 70.4072f, 1))));
			}
			if (((MISC::GET_GAME_TIMER() - iLocal_603) > 10000 && iLocal_601 == 0) && iLocal_585 == 1)
			{
				func_421(Local_553.f_1);
				func_421(Local_553.f_2);
				func_421(Local_553.f_3);
				func_421(Local_553.f_4);
				iLocal_601 = 1;
			}
			if ((((((PED::IS_PED_INJURED(Local_553.f_1) && PED::IS_PED_INJURED(Local_553.f_2)) && PED::IS_PED_INJURED(Local_553.f_3)) && PED::IS_PED_INJURED(Local_553.f_4)) && PED::IS_PED_INJURED(Local_561.f_1)) && PED::IS_PED_INJURED(Local_561.f_2)) && iLocal_615 == 17)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_371++;
			}
			break;
		case 13:
			if (SYSTEM::TIMERA() > 1500)
			{
				OBJECT::DELETE_OBJECT(&iLocal_625);
				iLocal_371 = 0;
				AUDIO::STOP_AUDIO_SCENE("MI_4_DEFEND_HOUSE_MAIN");
				iLocal_441 = 10;
			}
			break;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.01636f, 181.93175f, 71.41201f, -807.96234f, 173.7541f, 75.5753f, 6.25f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_407[6]) && iLocal_606 == 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_607);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -799.7594f, 181.2103f, 71.8347f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_607);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_407[6], iLocal_607);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_607);
			SYSTEM::SETTIMERB(0);
			iLocal_606 = 1;
		}
	}
	if (((((!bLocal_597 && iLocal_586 == 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_407[5])) && PED::IS_PED_INJURED(iLocal_407[13])) && iLocal_609 == 1) && iLocal_616 < 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.23676f, 179.57968f, 71.83471f, -805.60004f, 176.65997f, 75.33471f, 4f, false, true, 0) || func_414(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_627 = 1;
		}
		if (((((func_414(PLAYER::PLAYER_PED_ID()) || CAM::IS_SPHERE_VISIBLE(-794.8332f, 181.1352f, 73.6243f, 0.6f)) && (MISC::GET_GAME_TIMER() - iLocal_614) > iLocal_623) && PED::IS_PED_INJURED(iLocal_407[5])) && PED::IS_PED_INJURED(iLocal_407[6])) || ((iLocal_627 && (MISC::GET_GAME_TIMER() - iLocal_614) > iLocal_623) && PED::IS_PED_INJURED(iLocal_407[7])))
		{
			iLocal_623 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 7000);
			if (!PED::IS_PED_INJURED(iLocal_407[14]))
			{
				func_421(iLocal_407[14]);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_407[13]));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_625))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_625, CAM::GET_GAMEPLAY_CAM_COORD(), true, false, false, true);
			}
			if ((!func_414(PLAYER::PLAYER_PED_ID()) && !bLocal_597) && !func_404(iLocal_625))
			{
				iLocal_407[13] = PED::CREATE_PED(26, func_390(), -792.9798f, 183.6559f, 71.8351f, 167.9431f, true, true);
				func_423(&(iLocal_407[13]), joaat("WEAPON_CARBINERIFLE"));
				func_421(iLocal_407[13]);
				PED::SET_PED_NAME_DEBUG(iLocal_407[13], "Merry13:EX-F");
				if (iLocal_608 == 0)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_607);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -793.2159f, 181.792f, 71.8351f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -799.7575f, 181.1908f, 71.8347f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_607);
					iLocal_608 = 1;
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_607);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -793.2159f, 181.792f, 71.8351f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -798.4775f, 177.8392f, 71.8347f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_607);
					iLocal_608 = 0;
				}
			}
			else if (iLocal_608 == 0)
			{
				iLocal_407[13] = PED::CREATE_PED(26, func_390(), -793.582f, 187.2418f, 71.8353f, 203.3005f, true, true);
				func_423(&(iLocal_407[13]), joaat("WEAPON_CARBINERIFLE"));
				PED::SET_PED_COMBAT_RANGE(iLocal_407[13], 0);
				PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_407[13], false);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_407[13], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_407[13], 13, true);
				PED::SET_PED_NAME_DEBUG(iLocal_407[13], "Merry13:EX-BA1");
				TASK::OPEN_SEQUENCE_TASK(&iLocal_607);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -793.2159f, 181.792f, 71.8351f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_607);
				iLocal_623 = MISC::GET_RANDOM_INT_IN_RANGE(7000, 7500);
				iLocal_608 = 1;
			}
			else
			{
				iLocal_407[13] = PED::CREATE_PED(26, func_390(), -798.6892f, 174.0237f, 71.8349f, 321.3347f, true, true);
				func_423(&(iLocal_407[13]), joaat("WEAPON_CARBINERIFLE"));
				PED::SET_PED_COMBAT_RANGE(iLocal_407[13], 0);
				PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_407[13], false);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_407[13], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_407[13], 13, true);
				PED::SET_PED_NAME_DEBUG(iLocal_407[13], "Merry13:EX-BA2");
				TASK::OPEN_SEQUENCE_TASK(&iLocal_607);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -801.29f, 178.5022f, 71.8347f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_607);
				iLocal_623 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 7000);
				iLocal_608 = 0;
			}
			__LIB_0__::func_709(iLocal_407[13], "COVER_ME", "s_m_y_genericmarine_01_black_mini_01", 3);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_407[13], iLocal_607);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_607);
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_407[13], 0.6f, 0.8f);
			__LIB_0__::func_709(iLocal_407[13], "GENERIC_WAR_CRY", "s_m_y_genericmarine_01_black_mini_01", 3);
			iLocal_201++;
			if (!iLocal_628 && iLocal_201 == 2)
			{
				__LIB_0__::func_229("SOL5_KILLBAD2", 7500, 1);
				iLocal_628 = 1;
			}
			iLocal_609 = 0;
		}
	}
	if (PED::IS_PED_INJURED(iLocal_407[13]))
	{
		if (iLocal_609 == 0)
		{
			iLocal_614 = MISC::GET_GAME_TIMER();
			iLocal_609 = 1;
		}
	}
	func_406();
}

void func_406()//Position - 0x6B196
{
	int iVar0;
	if ((((!__LIB_13__::func_755(&Local_372, 1) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID())) && iLocal_371 > 5) && SYSTEM::TIMERA() > 6000) && SYSTEM::TIMERB() > 4400)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (MISC::GET_GAME_TIMER() - iLocal_599) < 3000)
		{
			iLocal_599 = MISC::GET_GAME_TIMER();
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -802.8893f, 179.82f, 76.7408f, 4.5f, 4f, 2f, false, true, 0) && iLocal_598 < 3)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_COWER", 9, 0, 0, 0))
				{
					iLocal_598++;
					SYSTEM::SETTIMERA(0);
				}
			}
			else if (__LIB_0__::func_680())
			{
				PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4f, false, true, &iVar0, false, false, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (__LIB_0__::func_680())
					{
						__LIB_0__::func_222(&uLocal_206, 6, iVar0, "MERRYWEATHER7", 0, 1);
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_MERRYDI", 9, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
						}
					}
					else
					{
						__LIB_0__::func_222(&uLocal_206, 8, iVar0, "MERRYWEATHER8", 0, 1);
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_MERRYD2", 9, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			else if (bLocal_597)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 7)
				{
					if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_OUTSIDE", 9, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
				}
			}
			else if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_MYHOUSE", 9, 0, 0, 0))
			{
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (!bLocal_597)
		{
			if (iLocal_596 == 0)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_DOOR1", 9, 0, 0, 0))
				{
					iLocal_596++;
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_596 == 1)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_DOOR2", 9, 0, 0, 0))
				{
					iLocal_596++;
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_596 == 2)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_DOOR3", 9, 0, 0, 0))
				{
					iLocal_596++;
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_596 == 3)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_DOOR4", 9, 0, 0, 0))
				{
					iLocal_596++;
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_596 == 4)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_TCOWER", 9, 0, 0, 0))
				{
					iLocal_596++;
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_596 == 5)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_COWER", 9, 0, 0, 0))
				{
					iLocal_596 = 6;
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
}

float func_408(int iParam0, char* sParam1)//Position - 0x6B643
{
	int iVar0;
	sParam1 = sParam1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			return (100f * (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0)));
		}
	}
	return -1f;
}

void func_409(int iParam0, int iParam1, int iParam2, char* sParam3, float fParam4, float fParam5)//Position - 0x6B688
{
	int iVar0;
	iVar0 = iLocal_439;
	*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, 0f, 0f, 0f, 0f, true, true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(*iParam0, true, true, false);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, 500, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*iParam0, "MI_4_ENEMY_CARS_GROUP", 0f);
	if (iParam1 == joaat("mesa3"))
	{
		iParam0->f_1 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam0, 26, iVar0, -1, true, true);
		iParam0->f_2 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam0, 26, iVar0, 0, true, true);
		iParam0->f_3 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam0, 26, iVar0, 1, true, true);
		iParam0->f_4 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam0, 26, iVar0, 2, true, true);
	}
	else
	{
		iParam0->f_1 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam0, 26, iVar0, -1, true, true);
		iParam0->f_2 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam0, 26, iVar0, 0, true, true);
	}
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam2, sParam3, true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam4);
	VEHICLE::SET_PLAYBACK_SPEED(*iParam0, fParam5);
	ENTITY::SET_ENTITY_PROOFS(*iParam0, false, false, false, true, false, false, false, false);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam3);
	VEHICLE::SET_VEHICLE_LIGHTS(*iParam0, 3);
	VEHICLE::SET_VEHICLE_FULLBEAM(*iParam0, true);
	func_423(&(iParam0->f_1), joaat("WEAPON_CARBINERIFLE"));
	func_423(&(iParam0->f_2), joaat("WEAPON_PISTOL"));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		func_423(&(iParam0->f_3), joaat("WEAPON_CARBINERIFLE"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		func_423(&(iParam0->f_4), joaat("WEAPON_PISTOL"));
	}
}

bool func_410(int iParam0)//Position - 0x6B7CF
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -800.3767f, 163.64534f, 75.2241f, -811.3191f, 160.40944f, 80.53804f, 7.5f, false, true, 0);
}

bool func_412(int iParam0)//Position - 0x6B8AD
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -835.36426f, 183.37233f, 76.094894f, -823.34125f, 149.51407f, 63.662308f, 33f, false, true, 0);
}

void func_413(int iParam0, struct<3> Param1, int iParam2, float fParam3)//Position - 0x6B8E1
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param1, 2.5f, false, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		TASK::CLEAR_PED_TASKS(iParam0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iParam2, false))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam2, fParam3, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
		}
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

bool func_414(int iParam0)//Position - 0x6B971
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -799.5562f, 179.54199f, 71.83471f, -793.839f, 181.51299f, 75.08471f, 11.75f, false, true, 0);
}

bool func_420()//Position - 0x6BC52
{
	if (bLocal_595)
	{
		return bLocal_595;
	}
	bLocal_595 = ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -802.5521f, 168.2117f, 75.7407f, 1.5f, 1.5f, 2.5f, false, true, 0);
	return bLocal_595;
}

void func_421(int iParam0)//Position - 0x6BC95
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_COMBAT_RANGE(iParam0, 0);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, true);
	}
}

void func_422()//Position - 0x6BCCE
{
	int iVar0;
	iLocal_615 = 0;
	iLocal_616 = 0;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (PED::IS_PED_INJURED(iLocal_407[iVar0]) || PED::IS_PED_HURT(iLocal_407[iVar0]))
		{
			iLocal_615++;
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_407[iVar0]))
			{
				iLocal_616++;
			}
			if (TASK::IS_PED_IN_WRITHE(iLocal_407[iVar0]))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_407[iVar0], 100, true, 0);
			}
		}
		__LIB_0__::func_631(iLocal_407[iVar0], &(Local_408[iVar0 /*8*/]), -1, 0, iVar0 == 4, 0, -1082130432, 0, -1, -1, 1, 0);
		iVar0++;
	}
}

void func_423(int iParam0, int iParam1)//Position - 0x6BD72
{
	__LIB_0__::func_609(*iParam0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_205);
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam1, -1, true, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
	PED::SET_PED_CAN_COWER_IN_COVER(*iParam0, false);
	PED::SET_PED_CAN_PEEK_IN_COVER(*iParam0, true);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
	PED::SET_PED_AS_ENEMY(*iParam0, true);
	PED::SET_COMBAT_FLOAT(*iParam0, 3, 2.5f);
	PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
	PED::ADD_ARMOUR_TO_PED(*iParam0, 25);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
	PED::SET_COMBAT_FLOAT(*iParam0, 1, 5f);
	PED::SET_COMBAT_FLOAT(*iParam0, 2, 150f);
	PED::SET_COMBAT_FLOAT(*iParam0, 5, 0.75f);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 57, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, false);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 188, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 29, true);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	PED::SET_PED_ACCURACY(*iParam0, 1);
	WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*iParam0, 0.1f, 0.2f);
	if (!func_404(*iParam0))
	{
		WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*iParam0, 0.5f, 0.5f);
	}
	else
	{
		PED::ADD_ARMOUR_TO_PED(*iParam0, 50);
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
	{
		PED::SET_PED_PROP_INDEX(*iParam0, 0, 1, 2, false);
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
	{
		PED::SET_PED_PROP_INDEX(*iParam0, 1, 0, 1, false);
	}
}

void func_507()//Position - 0x7499B
{
	switch (iLocal_371)
	{
		case 0:
			HUD::REMOVE_BLIP(&iLocal_432);
			HUD::REMOVE_BLIP(&iLocal_431);
			__LIB_0__::func_429();
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_468, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", iLocal_401, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
			{
				PED::APPLY_PED_DAMAGE_PACK(iLocal_402, "SCR_TracySplash", 1f, 1f);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_402, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("GOON_ATTACK_TRACY", iLocal_403, 0);
			}
			WEAPON::REQUEST_WEAPON_ASSET(iLocal_468, 31, 0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_402, "Tracy", 0, 0, 9);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_401, "Amanda", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_403, "GOON_ATTACK_TRACY", 0, 0, 9);
				}
				iLocal_551 = TASK::ADD_COVER_POINT(-802.8381f, 179.84833f, 75.7407f, 16.5058f, 1, 2, 4, true);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				AUDIO::STOP_AUDIO_SCENE("MI_4_SAVE_FAMILY_MAIN");
				func_352();
				iLocal_371++;
			}
			break;
		case 1:
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", 0)))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", 0))))
				{
					PED::APPLY_PED_DAMAGE_PACK(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tracy", 0)), "SCR_TracySplash", 1f, 1f);
				}
			}
			if (iLocal_371 == 1)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("SOL5_HOSTAGE_DEAD"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_HOSTAGE_DEAD");
					iLocal_371 = 2;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (iLocal_468 == joaat("WEAPON_UNARMED"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_468, false);
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -803.0251f, 179.8324f, 75.7408f, -1, true, 0.5f, true, true, iLocal_551, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-90f);
				}
				iLocal_539 = 0;
				iLocal_371 = 0;
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_552 = 1;
				iLocal_441 = 9;
			}
			break;
	}
}

void func_508()//Position - 0x74BCA
{
	int iVar0;
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
	{
		if (iLocal_371 < 6)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_402, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(iLocal_402))
			{
				__LIB_0__::func_429();
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_401);
				SYSTEM::WAIT(0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
				{
					AUDIO::PLAY_PAIN(iLocal_401, 7, 0, 0);
				}
				AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
				iLocal_546 = 1;
				__LIB_0__::func_381("SOL5_TDIED");
				func_1();
			}
		}
		PED::SET_PED_RESET_FLAG(iLocal_402, 249, true);
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -802.7031f, 176.35884f, 75.74074f, -799.6001f, 168.64885f, 79.70335f, 4.5f))
	{
		if (iLocal_371 < 5)
		{
			__LIB_0__::func_429();
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_401);
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				AUDIO::PLAY_PAIN(iLocal_401, 7, 0, 0);
			}
			AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
			iLocal_546 = 1;
			__LIB_0__::func_381("SOL5_TDIED");
			func_1();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_401, 64, true);
		PED::SET_PED_RESET_FLAG(iLocal_401, 249, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false) && iLocal_371 < 99)
	{
		PED::SET_PED_RESET_FLAG(iLocal_403, 64, true);
		PED::SET_PED_RESET_FLAG(iLocal_403, 249, true);
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_548) > 800 || CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_539 == 0)
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_401, true);
			__LIB_0__::func_429();
			if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_SHOT", 9, 0, 0, 0))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_401, false);
				iLocal_540 = 0;
				iLocal_539 = 1;
			}
		}
	}
	if (((!__LIB_13__::func_755(&Local_372, 1) && iLocal_539 == 1) && iLocal_540 == 0) && iLocal_371 == 1)
	{
		if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_TRACE", 9, 0, 0, 0))
		{
			iLocal_540 = 1;
		}
	}
	if (iLocal_539 == 1 && iLocal_541 == 0)
	{
		if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_TRAC2", 9, 0, 0, 0))
		{
			AUDIO::START_AUDIO_SCENE("MI_4_SAVE_TRACY");
			iLocal_541 = 1;
		}
	}
	__LIB_11__::func_618();
	if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_401, 1) > 18f)
	{
		if (!__LIB_0__::func_568())
		{
			__LIB_0__::func_620(1);
		}
	}
	else if (__LIB_0__::func_568())
	{
		__LIB_0__::func_620(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	switch (iLocal_371)
	{
		case 0:
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-378388578))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(-378388578, joaat("v_ilev_mm_doordaughter"), -802.702f, 176.176f, 76.89f, true, true, false);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-378388578, 1f, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-378388578, 3, false, true);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			AUDIO::START_AUDIO_SCENE("MI_4_SAVE_FAMILY_MAIN");
			bLocal_198 = false;
			func_400(8);
			__LIB_43__::func_517(5, "STAGE_SAVE_TRACEY", 0, 0, 0, 1);
			PED::SET_CREATE_RANDOM_COPS(false);
			PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(false);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
				{
					if (!PED::IS_PED_INJURED(iLocal_404))
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(iLocal_404, 31086, 0f, 0.25f, 0f), PED::GET_PED_BONE_COORDS(iLocal_404, 31086, 0f, -1f, 0f), 200, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
					}
					STREAMING::LOAD_SCENE(-814.9095f, 179.0777f, 71.1592f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_434, 0.35f);
				}
			}
			AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), true);
			AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", true);
			iLocal_546 = 0;
			func_352();
			iLocal_371++;
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_401, true);
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.094f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_404, false))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_404, 1000, true, 0);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 1f || func_513())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_404, false))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_404, 1000, true, 0);
					}
					iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.35f, 172.9f, 75.7f, "V_Michael");
					Local_435 = { -803.998f, 175.91f, 75.745f };
					Local_436 = { 0f, 0f, 21.12f };
					iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(Local_435, Local_436, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, false);
					if (!PED::IS_PED_INJURED(iLocal_401))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_into_at", 8f, -8f, 1, 0, 1000f, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_402))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_into_tt", 1000f, -1000f, 1, 0, 1000f, 0);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_402, iLocal_392, MISC::GET_HASH_KEY("V_Michael_1_Daught"));
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_402, iLocal_392);
					}
					if (!PED::IS_PED_INJURED(iLocal_403))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_into_mw", 1000f, -1000f, 1, 0, 1000f, 0);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_403, iLocal_392, MISC::GET_HASH_KEY("V_Michael_1_Daught"));
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_403, iLocal_392);
					}
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_434, 0.1f);
					SYSTEM::SETTIMERA(0);
					HUD::CLEAR_PRINTS();
					AUDIO::PLAY_PAIN(iLocal_402, 7, 0, 0);
					iLocal_431 = __LIB_0__::func_666(iLocal_402, 0, 145);
					iLocal_371++;
				}
			}
			break;
		case 2:
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_401, true);
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.99f)
				{
					iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.35f, 172.9f, 75.7f, "V_Michael");
					iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(Local_437, Local_438, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, false);
					iLocal_197 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					switch (iLocal_197)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_a_at", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_a_tt", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_a_mw", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							break;
						case 1:
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_b_at", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_b_tt", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_b_mw", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							break;
						case 2:
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_c_at", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_c_tt", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_c_mw", 1000f, -1000f, 1, 0, 1000f, 0);
							}
							break;
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_401, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_402, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_403, false, false);
					iLocal_371 = 4;
				}
			}
			break;
		case 4:
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_HOSTAGE_TAKER");
			HUD::REMOVE_BLIP(&iLocal_431);
			iLocal_429 = __LIB_0__::func_666(iLocal_403, 1, 145);
			__LIB_0__::func_229("SOL5_SAVEAM", 7500, 1);
			iLocal_550 = MISC::GET_GAME_TIMER();
			iLocal_544 = MISC::GET_GAME_TIMER();
			iLocal_371++;
			break;
		case 5:
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_542) > 4000)
			{
				__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "SOL5_BNAA", "MICHAEL", 4);
				iLocal_542 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_543) > 3000)
			{
				AUDIO::PLAY_PAIN(iLocal_401, 26, 0, 0);
				iLocal_543 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_544) > 4000)
			{
				AUDIO::PLAY_PAIN(iLocal_402, 5, 0, 0);
				iLocal_544 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_545) > 3000)
			{
				AUDIO::PLAY_PAIN(iLocal_403, 12, 0, 0);
				iLocal_545 = MISC::GET_GAME_TIMER();
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 1f)
				{
					iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.35f, 172.9f, 75.7f, "V_Michael");
					Local_435 = { -803.998f, 175.91f, 75.745f };
					Local_436 = { 0f, 0f, 21.12f };
					iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(Local_435, Local_436, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, false);
					iLocal_197 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					switch (iLocal_197)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_a_at", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_401, true, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_a_tt", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_402, true, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_a_mw", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_403, true, false);
							}
							break;
						case 1:
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_b_at", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_401, true, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_b_tt", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_402, true, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_b_mw", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_403, true, false);
							}
							break;
						case 2:
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_c_at", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_401, true, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_c_tt", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_402, true, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_strug_c_mw", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_403, true, false);
							}
							break;
						}
					}
			}
			if ((((func_510() || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_402, PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_INJURED(iLocal_402)) || (MISC::GET_GAME_TIMER() - iLocal_550) > 12000) || iLocal_546)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7.5f, 4f, 4);
				__LIB_0__::func_429();
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_401);
				SYSTEM::WAIT(0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
				{
					AUDIO::PLAY_PAIN(iLocal_401, 7, 0, 0);
				}
				AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
				iLocal_546 = 1;
				iLocal_371 = 99;
			}
			break;
		case 99:
			iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.35f, 172.9f, 75.7f, "V_Michael");
			Local_435 = { -803.998f, 175.91f, 75.8f };
			Local_436 = { 0f, 0f, 21.12f };
			iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(Local_435, Local_436, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_shoot_at", 4f, -4f, 1, 0, 1000f, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_402, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_shoot_tt", 4f, -4f, 1, 0, 1000f, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_403, iLocal_434, "misssolomon_5@bedroom", "sol_5_bedroom_shoot_mw", 4f, -4f, 5, 0, 1000f, 0);
			}
			iLocal_371 = 100;
			break;
		case 100:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.01f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_FAIL");
					if (!PED::IS_PED_INJURED(iLocal_403) && !ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
					{
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_403, PED::GET_PED_BONE_COORDS(iLocal_402, 31086, 0f, 0f, 0f), false);
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(iLocal_402, 31086, 0f, 0f, 0f) + Vector(0f, 0.5f, 0f), PED::GET_PED_BONE_COORDS(iLocal_402, 31086, 0f, 0f, 0f), 25, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
					iLocal_371 = 101;
				}
			}
			break;
		case 101:
			if (!PED::IS_PED_INJURED(iLocal_403))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_403, "misssolomon_5@bedroom", "sol_5_bedroom_shoot_mw", 3))
				{
					PED::SET_PED_RESET_FLAG(iLocal_403, 156, true);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.32f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_402, 1, 0f, 1.5f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
						PED::APPLY_DAMAGE_TO_PED(iLocal_402, 200, true, 0);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.7f)
				{
					if (!PED::IS_PED_INJURED(iLocal_403))
					{
						TASK::TASK_COMBAT_PED(iLocal_403, PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_403, true, false);
					}
					iLocal_371 = 102;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_403))
				{
					TASK::TASK_COMBAT_PED(iLocal_403, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_403, true, false);
				}
				iLocal_371 = 102;
			}
			break;
		case 102:
			if (!PED::IS_PED_INJURED(iLocal_403))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_403, "misssolomon_5@bedroom", "sol_5_bedroom_shoot_mw", 3))
				{
					PED::SET_PED_RESET_FLAG(iLocal_403, 156, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_402, 200, true, 0);
			}
			iLocal_371 = 103;
			break;
		case 103:
			if (!PED::IS_PED_INJURED(iLocal_403))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_403, "misssolomon_5@bedroom", "sol_5_bedroom_shoot_mw", 3))
				{
					PED::SET_PED_RESET_FLAG(iLocal_403, 156, true);
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.9f)
				{
					Local_435 = { -803.998f, 175.91f, 75.8f };
					Local_436 = { 0f, 0f, 21.12f };
					iLocal_549 = PED::CREATE_SYNCHRONIZED_SCENE(Local_435, Local_436, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_549, false);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_549, "misssolomon_5@bedroom", "sol_5_bedroom_idle_AT", 8f, -4f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_549, true);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_401, true, false);
					}
					iLocal_371 = 104;
				}
			}
			break;
		case 999:
			PED::GET_PED_LAST_DAMAGE_BONE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_403), &iVar0);
			if (iVar0 == 31086)
			{
				__LIB_0__::func_630(452);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 4f, 4);
			__LIB_0__::func_325();
			HUD::REMOVE_BLIP(&iLocal_429);
			if (!PED::IS_PED_INJURED(iLocal_403))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_403, 200, true, 0);
			}
			func_400(8);
			iLocal_539 = 0;
			iLocal_371 = 0;
			AUDIO::STOP_AUDIO_SCENE("MI_4_SAVE_TRACY");
			iLocal_441 = 8;
			break;
	}
	if (iLocal_441 != 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
		{
			if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_403)) < 1000f && iLocal_546 == 0)
			{
				iLocal_371 = 999;
			}
			if (!PED::IS_PED_INJURED(iLocal_402))
			{
				if (iLocal_371 > 4)
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_402, true), 2.5f, true) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_402, true) - Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_402, true) + Vector(3f, 3f, 3f), false))
					{
						iLocal_546 = 1;
					}
				}
			}
		}
		else if (iLocal_546 == 0)
		{
			iLocal_371 = 999;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", iLocal_401, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_402, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_403, false))
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("GOON_ATTACK_TRACY", iLocal_403, 0);
	}
}

int func_510()//Position - 0x75CDE
{
	int iVar0;
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")))
	{
		if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-802.45386f, 176.16415f, 75.82673f, -799.84503f, 169.11044f, 79.25602f, 3.75f, joaat("WEAPON_FLAREGUN"), true))
		{
			iVar0 = 1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")))
	{
		if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-802.45386f, 176.16415f, 75.82673f, -799.84503f, 169.11044f, 79.25602f, 3.75f, joaat("WEAPON_FIREWORK"), true))
		{
			iVar0 = 1;
		}
	}
	if (((((((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_403, 1) < 1.9f || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-802.45386f, 176.16415f, 75.82673f, -799.84503f, 169.11044f, 79.25602f, 3.75f, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-802.45386f, 176.16415f, 75.82673f, -799.84503f, 169.11044f, 79.25602f, 3.75f, joaat("WEAPON_SMOKEGRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-802.45386f, 176.16415f, 75.82673f, -799.84503f, 169.11044f, 79.25602f, 3.75f, joaat("WEAPON_MOLOTOV"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-802.45386f, 176.16415f, 75.82673f, -799.84503f, 169.11044f, 79.25602f, 3.75f, joaat("WEAPON_STICKYBOMB"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-802.45386f, 176.16415f, 75.82673f, -799.84503f, 169.11044f, 79.25602f, 3.75f, joaat("WEAPON_RPG"), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_402, PLAYER::PLAYER_PED_ID(), true)) || iVar0)
	{
		return 1;
	}
	return 0;
}

int func_513()//Position - 0x75F85
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.3894f, 178.80782f, 75.74074f, -806.4203f, 176.97137f, 76.74832f, 3.75f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(-802.88916f, 174.49815f, 76.24074f, 1.5f))
	{
		return 1;
	}
	return 0;
}

void func_515()//Position - 0x75FED
{
	int iVar0;
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_401, 64, true);
		PED::SET_PED_RESET_FLAG(iLocal_401, 249, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_404, false) && iLocal_371 < 99)
	{
		PED::SET_PED_RESET_FLAG(iLocal_404, 64, true);
		PED::SET_PED_RESET_FLAG(iLocal_404, 249, true);
	}
	__LIB_11__::func_618();
	switch (iLocal_371)
	{
		case 0:
			PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, true, 0);
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-378388578))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(-378388578, joaat("v_ilev_mm_doordaughter"), -802.702f, 176.176f, 76.89f, true, true, false);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-378388578, 0f, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-378388578, 1, true, false);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			AUDIO::START_AUDIO_SCENE("MI_4_SAVE_FAMILY_MAIN");
			AUDIO::START_AUDIO_SCENE("MI_4_SAVE_AMANDA");
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-816.72f, 179.1f, 72.83f, 2f, joaat("v_ilev_mm_doorm_l"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.83f, false, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-816.11f, 177.51f, 72.83f, 2f, joaat("v_ilev_mm_doorm_r"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.83f, false, 0f, false);
			}
			bLocal_198 = false;
			PED::SET_CREATE_RANDOM_COPS(false);
			PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(false);
			__LIB_43__::func_517(4, "STAGE_SAVE_AMANDA", 0, 0, 0, 1);
			func_352();
			SYSTEM::SETTIMERA(0);
			AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), true);
			func_400(7);
			AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", true);
			iLocal_547 = 0;
			iLocal_371++;
			break;
		case 1:
		case 2:
			if (iLocal_371 == 1)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("SOL5_FRONT_DOORS"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_FRONT_DOORS");
					iLocal_371 = 2;
				}
			}
			if (iLocal_547 == 0)
			{
				iLocal_547 = 1;
			}
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_401, 1) > 15f)
			{
				if (!__LIB_0__::func_568())
				{
					__LIB_0__::func_620(1);
				}
			}
			else if (__LIB_0__::func_568())
			{
				__LIB_0__::func_620(0);
			}
			if (((MISC::GET_GAME_TIMER() - iLocal_542) > 4000 && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_401)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -812.759f, 177.08992f, 71.17124f, -814.89435f, 182.3815f, 75.25303f, 5f, false, true, 0))
			{
				__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "SOL5_BMAA", "MICHAEL", 4);
				iLocal_542 = MISC::GET_GAME_TIMER();
			}
			if ((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.40186f, 182.46898f, 73.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, false, true, 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-811.40186f, 182.46898f, 71.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-811.40186f, 182.46898f, 71.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, joaat("WEAPON_SMOKEGRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-811.40186f, 182.46898f, 71.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, joaat("WEAPON_MOLOTOV"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-811.40186f, 182.46898f, 71.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, joaat("WEAPON_STICKYBOMB"), true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-811.40186f, 182.46898f, 71.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, joaat("WEAPON_RPG"), true)) || (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")) && MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-811.40186f, 182.46898f, 71.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, joaat("WEAPON_FLAREGUN"), true))) || (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")) && MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-811.40186f, 182.46898f, 71.15309f, -805.1934f, 184.43112f, 76.270195f, 3.25f, joaat("WEAPON_FIREWORK"), true))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_401, PLAYER::PLAYER_PED_ID(), true)) || iLocal_546) || SYSTEM::TIMERA() > 10000)
			{
				__LIB_0__::func_620(0);
				iLocal_371 = 99;
			}
			if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_404)) < 1000f)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 4f, 4);
				__LIB_0__::func_620(0);
				ENTITY::DETACH_ENTITY(iLocal_406, true, false);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_406);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_amanda_shoe"));
				AUDIO::STOP_AUDIO_SCENE("MI_4_SAVE_AMANDA");
				__LIB_0__::func_429();
				PED::GET_PED_LAST_DAMAGE_BONE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_404), &iVar0);
				if (iVar0 == 31086)
				{
					__LIB_0__::func_630(452);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("SOL5_AMANDA_SAVED");
				__LIB_0__::func_325();
				HUD::REMOVE_BLIP(&iLocal_429);
				HUD::REMOVE_BLIP(&iLocal_433);
				iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(Local_435, Local_436, 2);
				if (!PED::IS_PED_INJURED(iLocal_401))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_shoot_merry_at", 8f, -1000f, 5, 0, 1000f, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_404))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_404, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_shoot_merry_mw", 8f, -4f, 0, 0, 1000f, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_401, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_404, false, false);
				iLocal_548 = MISC::GET_GAME_TIMER();
				iLocal_546 = 0;
				iLocal_371 = 4;
			}
			break;
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) > 0.05f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_404, false))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_404, 1000, true, 0);
						iLocal_371 = 5;
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_548) > 750)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_404, false))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_404, 1000, true, 0);
					iLocal_371 = 5;
				}
			}
			break;
		case 5:
			if (func_398(7))
			{
				func_376(7);
				iLocal_371 = 0;
				iLocal_539 = 0;
				iLocal_441 = 7;
			}
			break;
		case 99:
			__LIB_0__::func_429();
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
			}
			ENTITY::DETACH_ENTITY(iLocal_406, true, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_406);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_amanda_shoe"));
			iLocal_434 = PED::CREATE_SYNCHRONIZED_SCENE(Local_435, Local_436, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_434, false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_401, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_shoot_amanda_at", 1000f, -1000f, 1, 0, 1000f, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_404, false))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_404, iLocal_434, "misssolomon_5@stairs", "sol_5_stair_shoot_amanda_mw", 1000f, -8f, 1, 0, 1000f, 0);
			}
			iLocal_371 = 100;
			break;
		case 100:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.01f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_FAIL");
					if (!PED::IS_PED_INJURED(iLocal_404) && !ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
					{
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_404, PED::GET_PED_BONE_COORDS(iLocal_401, 31086, 0f, 0f, 0f), false);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 4f, 4);
					iLocal_371 = 101;
				}
			}
			break;
		case 101:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_434) >= 0.3f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_401, 200, true, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_404))
					{
						PED::SET_PED_LEG_IK_MODE(iLocal_404, 2);
						TASK::TASK_COMBAT_PED(iLocal_404, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					iLocal_371 = 102;
				}
			}
			break;
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_401, true), 2.5f, true))
	{
		iLocal_546 = 1;
	}
}

void func_516()//Position - 0x76782
{
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (PED::IS_PED_INJURED(iLocal_395))
	{
	}
	else
	{
		PED::SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(iLocal_395, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_401, 249, true);
		PED::SET_PED_RESET_FLAG(iLocal_401, 64, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_404, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_404, 249, true);
		PED::SET_PED_RESET_FLAG(iLocal_404, 64, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_529, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_529))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_529, -809.879f, 180.0593f, 71.1531f, 3f, 3f, 3f, false, true, 0))
		{
			PED::DELETE_PED(&iLocal_529);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_538 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_529))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_538))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_529, iLocal_538))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_529, 0, 0);
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_529))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_529, PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_529, 0, 0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_530, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_530))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_530, -809.879f, 180.0593f, 71.1531f, 3f, 3f, 3f, false, true, 0))
		{
			PED::DELETE_PED(&iLocal_530);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_538 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_530))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_538))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_530, iLocal_538))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_530, 0, 0);
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_530))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_530, PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_530, 0, 0);
			}
		}
	}
	switch (iLocal_371)
	{
		case 0:
			if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && __LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_JHIDE", 9, 0, 0, 0)) || func_517())
			{
				bLocal_198 = true;
				func_352();
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				iLocal_433 = __LIB_0__::func_666(iLocal_401, 0, 145);
				PED::ADD_SCENARIO_BLOCKING_AREA(-835.06085f, 148.40991f, 62.360283f, -773.0886f, 198.91843f, 75.15556f, false, true, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_VinDouche_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Vinewood_03"));
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				__LIB_43__::func_517(3, "STAGE_ENTER_THE_HOUSE", 0, 0, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_395);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_395, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_533);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.6075f, 192.6608f, 72.0095f, 3f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_COWER(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_533);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_395, iLocal_533);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_533);
				}
				iLocal_536 = 0;
				AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), true);
				iLocal_537 = 0;
				iLocal_535 = 0;
				iLocal_371++;
			}
			break;
		case 1:
		case 2:
		case 3:
			if (iLocal_536 == 0)
			{
				if (PED::IS_PED_ON_FOOT(iLocal_395) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					__LIB_0__::func_709(iLocal_395, "SOL5_BGAA", "JIMMY", 3);
					iLocal_536 = 1;
				}
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_SAVE_FAMILY_MAIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("MI_4_GET_TO_THE_HOUSE");
					AUDIO::START_AUDIO_SCENE("MI_4_SAVE_FAMILY_MAIN");
				}
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_398, 14f, 14f, 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.34534f, 175.49706f, 70.26038f, -794.60266f, 184.46185f, 82.4734f, 12f, false, true, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_404, true), 1.5f, true))
			{
				if (iLocal_535 == 0)
				{
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
					iLocal_535 = 1;
				}
			}
			if (func_517())
			{
				if (iLocal_535 == 0)
				{
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
					iLocal_535 = 1;
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_SAVE_FAMILY_MAIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("MI_4_GET_TO_THE_HOUSE");
					AUDIO::START_AUDIO_SCENE("MI_4_SAVE_FAMILY_MAIN");
				}
				if (iLocal_537 == 0)
				{
					__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "SOL5_ARAA", "MICHAEL", 4);
					iLocal_537 = 1;
				}
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_AMA", 9, 0, 0, 0) || func_517())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_JimmyDiSanto"));
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_395))
					{
						PED::DELETE_PED(&iLocal_395);
					}
					else
					{
						PED::SET_PED_KEEP_TASK(iLocal_395, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_395);
					}
					PED::DELETE_PED(&iLocal_529);
					PED::DELETE_PED(&iLocal_530);
					iLocal_371 = 0;
					iLocal_441 = 6;
				}
			}
			break;
	}
}

int func_517()//Position - 0x76C91
{
	if ((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_398, 7f, 7f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.8776f, 181.52037f, 70.865524f, -816.2686f, 178.35054f, 75.18809f, 7f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.34534f, 175.49706f, 70.26038f, -794.60266f, 184.46185f, 82.4734f, 12f, false, true, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_404, true), 1.5f, true)) || ENTITY::GET_ENTITY_HEALTH(iLocal_404) < 1000) || PED::IS_PED_INJURED(iLocal_404)) || iLocal_524)
	{
		iLocal_524 = 1;
		return 1;
	}
	return 0;
}

void func_518()//Position - 0x76D5B
{
	func_588();
	if (iLocal_371 > 0 && iLocal_525 == 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_395, false))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_LIMO_ENTERED");
			AUDIO::START_AUDIO_SCENE("MI_4_GET_TO_THE_HOUSE");
			iLocal_525 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_395))
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_395, 2f);
	}
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Global_41748[4 /*31*/], true);
	switch (iLocal_371)
	{
		case 0:
			__LIB_17__::func_171(4, 1, 0);
			__LIB_16__::func_21(&Local_372, 0);
			Local_372.f_5 = __LIB_0__::func_488(Local_397, 0);
			HUD::SET_BLIP_AS_FRIENDLY(Local_372.f_5, true);
			func_400(4);
			if (iLocal_460 != 0)
			{
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_460);
			}
			Global_100441.f_12[0] = 0;
			if (!PED::IS_PED_INJURED(iLocal_395))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_395, 301.4036f, 198.9978f, 103.1659f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_395, 167.8465f);
			}
			__LIB_43__::func_517(2, "STAGE_GET_TO_MICHAELS_HOUSE", 0, 0, 0, 1);
			if (!PED::IS_PED_INJURED(iLocal_395))
			{
				func_395(&iLocal_395, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_393))
			{
				STREAMING::REQUEST_MODEL(joaat("stretch"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("stretch")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_393 = func_394();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_394))
			{
				STREAMING::REQUEST_MODEL(joaat("vacca"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("vacca")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_394 = func_586();
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("vacca"));
			if (!PED::IS_PED_GROUP_MEMBER(iLocal_395, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID())))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_395, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
			}
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_395, 0);
			PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 3.5f, -1f, -1f);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
			iLocal_525 = 1;
			iLocal_526 = 0;
			iLocal_527 = 0;
			iLocal_528 = 0;
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			func_352();
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"));
			__LIB_0__::func_499(450, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_GAMEPLAY_STARTS");
			bLocal_198 = false;
			iLocal_371++;
			break;
		case 1:
			if (!__LIB_13__::func_755(&Local_372, 1))
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_RUN", 9, 0, 0, 0))
				{
					iLocal_371++;
				}
			}
			break;
		case 2:
			if (!__LIB_13__::func_755(&Local_372, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_GETIN", 9, 0, 0, 0))
				{
					iLocal_371++;
				}
			}
			break;
		case 3:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && bLocal_198 == 0)
			{
				__LIB_17__::func_70(29, "SOL5_DEVTXT", 1, 1, 0, 0, 0, 1, 0, 1);
				iLocal_200 = MISC::GET_GAME_TIMER();
				bLocal_198 = true;
			}
			if ((((!__LIB_13__::func_755(&Local_372, 1) && HUD::DOES_BLIP_EXIST(Local_372.f_5)) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_395, false)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_397, 120f, 120f, 120f, false, false, 0))
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_BANT", 9, 0, 0, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_LIMO_ENTERED");
					iLocal_371++;
				}
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_397, 250f, 250f, 120f, false, false, 0))
			{
				PED::DELETE_PED(&(iLocal_461[9]));
				PED::DELETE_PED(&(iLocal_461[8]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Paparazzi_01"));
				OBJECT::DELETE_OBJECT(&(iLocal_462[2]));
				OBJECT::DELETE_OBJECT(&(iLocal_462[3]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pap_camera_01"));
				STREAMING::REMOVE_ANIM_DICT("missmic4premiere");
				func_400(6);
				iLocal_371++;
			}
			break;
		case 5:
			if (func_398(6))
			{
				func_376(6);
				iLocal_371++;
			}
			break;
		case 6:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_397, 1) < 90f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SOL5_IN_DRIVEWAY");
				iLocal_371++;
			}
			break;
	}
	if (iLocal_371 > 3)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_372.f_5) && iLocal_526 == 0)
		{
			__LIB_0__::func_620(1);
		}
		else if (__LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), iLocal_395))
		{
			__LIB_0__::func_620(0);
		}
	}
	if (iLocal_371 > 1)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
		if ((__LIB_17__::func_707(&Local_372, Local_397, 12f, 4f, 12f, 0, iLocal_395, 0, 0, "SOL5_GET2HSE", "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, "", "", "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, 0, 1, 1, -1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -822.9015f, 171.5836f, 68.902214f, -774.3857f, 170.93732f, 83.796524f, 31.75f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_398, 7f, 7f, 2f, false, true, 0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			iLocal_526 = 1;
		}
		if (HUD::DOES_BLIP_EXIST(Local_372.f_5))
		{
			HUD::SET_BLIP_AS_FRIENDLY(Local_372.f_5, true);
		}
	}
	if (iLocal_371 >= 4)
	{
		if (SYSTEM::TIMERA() > 17000 && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f)
		{
			if (((!__LIB_13__::func_755(&Local_372, 1) && __LIB_15__::func_305()) && __LIB_1__::func_854(PLAYER::PLAYER_PED_ID(), iLocal_395)) && HUD::DOES_BLIP_EXIST(Local_372.f_5))
			{
				if (__LIB_0__::func_680())
				{
					if (__LIB_0__::func_680())
					{
						__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL_IG4", 9, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
					}
					else
					{
						__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL_QUICK", 9, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
					}
				}
				else
				{
					__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_GO", 9, 0, 0, 0);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 444);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_531)
		{
			__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 442);
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1);
			iLocal_531 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iLocal_531 == iLocal_393)
			{
				__LIB_0__::func_497(453, 0, 0);
			}
			else if (iLocal_531 == iLocal_394)
			{
				__LIB_0__::func_497(453, 1, 0);
			}
			else
			{
				__LIB_0__::func_497(453, 2, 0);
			}
		}
	}
	else
	{
		__LIB_0__::func_377(0, 442);
		__LIB_0__::func_505(0, -1);
	}
	if (iLocal_527 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_395, -839.3509f, 160.10446f, 65.92737f, -814.0177f, 183.76791f, 82.07952f, 20.25f, false, true, 0))
		{
			if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_CARS", 9, 0, 0, 0))
			{
				iLocal_527 = 1;
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -812.8689f, 165.5004f, 70.47779f, -848.2978f, 167.81778f, 62.378845f, 24.75f, false, true, 0))
		{
			if (iLocal_528 == 0)
			{
				iLocal_529 = PED::CREATE_PED(26, func_390(), -822.2332f, 183.0674f, 70.9162f, 199.0781f, true, true);
				iLocal_530 = PED::CREATE_PED(26, func_390(), -823.2229f, 181.3412f, 70.7021f, 261.9175f, true, true);
				PED::SET_PED_LEG_IK_MODE(iLocal_529, 2);
				PED::SET_PED_LEG_IK_MODE(iLocal_530, 2);
				func_423(&iLocal_529, joaat("WEAPON_CARBINERIFLE"));
				func_423(&iLocal_530, joaat("WEAPON_CARBINERIFLE"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_529, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_530, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_529, -806.4446f, 174.9243f, 71.8447f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_530, -806.4446f, 174.9243f, 71.8447f, 2f, 20000, 0.25f, 0, 40000f);
				iLocal_528 = 1;
			}
		}
	}
	if (iLocal_528 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_529, false))
		{
			PED::SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(iLocal_529, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_530, false))
		{
			PED::SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(iLocal_530, true);
		}
	}
	if (iLocal_371 > 5 && iLocal_526)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SOL5_IN_DRIVEWAY");
		__LIB_0__::func_498(0, -1);
		__LIB_16__::func_21(&Local_372, 0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_194 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			while (!__LIB_0__::func_213(iLocal_194, 3f, 5, 1056964608, 0, 1, 0))
			{
				SYSTEM::WAIT(0);
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Meltdown", 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		__LIB_0__::func_638();
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 3f, 4);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("mesa3"));
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_399);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_400);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_393);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_394);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_194);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
		iLocal_371 = 0;
		iLocal_441 = 5;
	}
}

int func_586()//Position - 0x7B258
{
	int iVar0;
	iVar0 = VEHICLE::CREATE_VEHICLE(joaat("vacca"), 300.9331f, 172.7484f, 102.9464f, 65.744f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
	VEHICLE::SET_VEHICLE_COLOURS(iVar0, 28, 28);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "JKW87N1D");
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
	return iVar0;
}

void func_588()//Position - 0x7B2B6
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(300.691f, 203.6474f, 104.6431f, 1f, joaat("prop_grumandoor_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_grumandoor_l"), 300.691f, 203.6474f, 104.6431f, true, 0f, false);
	}
}

void func_589()//Position - 0x7B2F6
{
	int iVar0;
	func_588();
	if (iLocal_371 < 5)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		if (STREAMING::HAS_ANIM_SET_LOADED("move_p_m_zero_slow"))
		{
			PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_p_m_zero_slow", 0.25f);
		}
		if (!PED::IS_PED_INJURED(iLocal_395))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_395, 1f);
			if (STREAMING::HAS_ANIM_SET_LOADED("move_characters@Jimmy@slow@"))
			{
				PED::SET_PED_MOVEMENT_CLIPSET(iLocal_395, "move_characters@Jimmy@slow@", 0.25f);
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	func_689();
	func_688();
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	switch (iLocal_371)
	{
		case 0:
			iLocal_511 = CLOCK::GET_CLOCK_HOURS();
			iLocal_512 = CLOCK::GET_CLOCK_MINUTES();
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_393);
			STREAMING::REQUEST_ANIM_SET("move_characters@Jimmy@slow@");
			STREAMING::REQUEST_ANIM_SET("move_p_m_zero_slow");
			STREAMING::REQUEST_ANIM_DICT("MISSMIC4IG_5");
			iLocal_519 = 0;
			iLocal_520 = 0;
			func_352();
			__LIB_43__::func_517(1, "STAGE_MOVIE_PREMIERE_CUT", 0, 0, 0, 1);
			uLocal_517 = __LIB_0__::func_488(298.3941f, 192.811f, 103.3272f, 0);
			__LIB_0__::func_229("SOL5_REDCARPET", 7500, 1);
			iLocal_371++;
			break;
		case 1:
			if (iLocal_519 == 0 && PED::IS_PED_ON_FOOT(iLocal_395))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("MISSMIC4IG_5"))
				{
					if (!__LIB_13__::func_755(&Local_372, 1))
					{
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_PROUD", 9, 0, 0, 0))
						{
							iLocal_519 = 1;
						}
					}
					else if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_PROUD", 9, 1, 0, 0))
					{
						iLocal_519 = 1;
					}
				}
			}
			if (iLocal_520 == 0)
			{
				if (AUDIO::LOAD_STREAM("MIC_4_PREMIERE", 0))
				{
					AUDIO::PLAY_STREAM_FROM_POSITION(300f, 194f, 105f);
					iLocal_520 = 1;
				}
			}
			if (iLocal_519 == 1)
			{
				func_687();
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false))
				{
					if ((!PED::IS_PED_INJURED(iLocal_395) && !ENTITY::IS_ENTITY_DEAD(iLocal_393, false)) && !__LIB_0__::func_798(iLocal_395, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_518);
						TASK::TASK_PAUSE(0, 1000);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_393, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 300.536f, 200.4727f, 103.3838f, 1f, 60000, 0.25f, 0, 256.7409f);
						TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "wave_b", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "wave_c", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "wave_d", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "missmic4premiere", "wave_a", 8f, -8f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_518);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_395, iLocal_518);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_518);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_LIMO_DRIVE_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("MI_4_LIMO_DRIVE_SCENE");
						}
					}
				}
			}
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 298.7313f, 195.1057f, 103.0034f, 1.5f, 1.5f, 1.5f, false, true, 0);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 296.36456f, 187.51387f, 102.539314f, 301.56616f, 203.299f, 110.737076f, 16.75f, false, true, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_396);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_461[22]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_MovPrem_01"));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_462[12]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing_02"));
				HUD::REMOVE_BLIP(&uLocal_517);
				CAM::DESTROY_ALL_CAMS(false);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_395))
				{
					iLocal_395 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), 303.5163f, 201.2443f, 103.357f, 158.411f, true, true);
					__LIB_0__::func_222(&uLocal_206, 1, iLocal_395, "JIMMY", 0, 1);
					func_396();
					func_395(&iLocal_395, 1);
				}
				STREAMING::REMOVE_ANIM_DICT("MISSMIC4IG_5");
				STREAMING::REMOVE_ANIM_SET("move_characters@Jimmy@slow@");
				STREAMING::REMOVE_ANIM_SET("move_p_m_zero_slow");
				CUTSCENE::REQUEST_CUTSCENE("mic_4_int", 8);
				CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(iLocal_461[2], true), -1, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.015f);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.65f);
					iLocal_522 = 1;
				}
				else
				{
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.02f);
					iLocal_522 = 0;
				}
				CAM::SET_GAMEPLAY_HINT_FOV(30f);
				iLocal_523 = MISC::GET_GAME_TIMER();
				iLocal_371++;
			}
			break;
		case 2:
			if (!iLocal_522 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.65f);
				iLocal_522 = 1;
			}
			else if (iLocal_522 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
			{
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.02f);
				iLocal_522 = 0;
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[2], false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lazlow", iLocal_461[2], 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[12]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[12], false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Milton_Assistant", iLocal_461[12], 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[9]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[9], false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Paparazzi_01", iLocal_461[9], 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[8]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[8], false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Paparazzi_02", iLocal_461[8], 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[1], false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TV_Camera_dude", iLocal_461[1], 0);
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", iLocal_395, 0);
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_523) > 2500 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				STREAMING::REQUEST_MODEL(joaat("stretch"));
				STREAMING::REQUEST_MODEL(joaat("vacca"));
				iLocal_371 = 4;
			}
			break;
		case 4:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[2], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_461[2], "Lazlow", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[12], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_461[12], "Milton_Assistant", 1, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[9], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_461[9], "Paparazzo_01", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[8], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_461[8], "Paparazzo_02", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_395, "Jimmy", 0, 0, 0);
					__LIB_0__::func_222(&uLocal_206, 1, iLocal_395, "JIMMY", 0, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[1], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_461[1], "TV_Camera_dude", 1, 0, 0);
				}
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				func_603(0, 1);
				__LIB_0__::func_222(&uLocal_206, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_371++;
			}
			break;
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_0__::func_468(49);
				CAM::STOP_GAMEPLAY_HINT(true);
				if (!PED::IS_PED_INJURED(iLocal_395))
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_395, 0.25f);
				}
				PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Lazlow"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_JimmyDiSanto"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_Y_AntonB"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Milton"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_F_Y_MovPrem_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Paparazzi_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Grip_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_MovPrem_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing_02"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_v_cam_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_ing_microphonel_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pap_camera_01"));
				iVar0 = 0;
				while (iVar0 <= 23)
				{
					if (((iVar0 != 8 && iVar0 != 9) && iVar0 != 12) && iVar0 != 1)
					{
						PED::DELETE_PED(&(iLocal_461[iVar0]));
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 12)
				{
					OBJECT::DELETE_OBJECT(&(iLocal_462[iVar0]));
					iVar0++;
				}
				func_600();
				__LIB_16__::func_937(279.12494f, 193.90182f, 102.40785f, 312.71722f, 181.28993f, 108.53741f, 33f, 327.3437f, 163.4836f, 102.406f, 70.6959f, 5f, 7f, 8.5f, 1, 1, 1, 0, 0);
				__LIB_37__::func_175(327.3437f, 163.4836f, 102.406f, 70.6959f);
				CLOCK::SET_CLOCK_TIME(22, 0, 0);
				PED::DELETE_PED(&iLocal_396);
				func_352();
				MISC::CLEAR_AREA_OF_PEDS(-826.4579f, 180.47397f, 71.13386f, 100f, 1);
				iLocal_521 = 0;
				iLocal_371 = 6;
			}
			break;
		case 6:
		case 7:
			func_592();
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 111500f && iLocal_371 == 6)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("SOL5_START"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_START");
					iLocal_371 = 7;
				}
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 60000f && iLocal_521 == 0)
			{
				AUDIO::STOP_STREAM();
				iLocal_521 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false) || CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				__LIB_17__::func_782(0);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				iLocal_371 = 8;
			}
			else
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_395))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_395, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_395, 0);
						PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 3.5f, -1f, -1f);
						PED::FORCE_PED_MOTION_STATE(iLocal_395, joaat("MotionState_Run"), false, 0, false);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0f, true, true);
					iLocal_371 = 8;
				}
			}
			break;
		case 8:
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && AUDIO::PREPARE_MUSIC_EVENT("SOL5_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SOL5_START");
				STREAMING::NEW_LOAD_SCENE_START(300.00443f, 198.36847f, 105.073395f, __LIB_0__::func_79(Vector(105.04828f, 197.88998f, 299.8498f) - Vector(105.073395f, 198.36847f, 300.00443f)), 700f, 0);
				SYSTEM::SETTIMERA(0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 7000)
				{
					SYSTEM::WAIT(0);
				}
				iLocal_459 = 0;
				VEHICLE::DELETE_VEHICLE(&iLocal_393);
				while (!func_592())
				{
					SYSTEM::WAIT(0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 302.684f, 200.6019f, 103.3724f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 171.7199f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
				{
					if (!PED::IS_PED_GROUP_MEMBER(iLocal_395, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID())))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_395, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
					}
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_395, 0);
					PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 3.5f, -1f, -1f);
					PED::FORCE_PED_MOTION_STATE(iLocal_395, joaat("MotionState_Run"), false, 0, false);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 298.6916f, 193.0679f, 103.3252f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 161.336f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0f, true, true);
				__LIB_17__::func_782(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_590();
				STREAMING::REMOVE_ANIM_DICT("missmic4premiere");
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					while (!AUDIO::PREPARE_MUSIC_EVENT("SOL5_START"))
					{
						SYSTEM::WAIT(0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("SOL5_START");
				}
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Distant_Camera_Flash");
				iLocal_200 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				RECORDING::REPLAY_STOP_EVENT();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					while (!func_592())
					{
						SYSTEM::WAIT(0);
					}
					SYSTEM::WAIT(0);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_371 = 0;
				iLocal_441 = 4;
			}
			break;
	}
	CLOCK::SET_CLOCK_TIME(iLocal_511, iLocal_512, 0);
}

void func_590()//Position - 0x7BF9F
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_461[8]))
	{
		iLocal_461[8] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 305.144f, 196.9411f, 103.2161f, 0f, true, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_461[9]))
	{
		iLocal_461[9] = PED::CREATE_PED(26, joaat("A_M_M_Paparazzi_01"), 305.7792f, 199.4462f, 103.2793f, 0f, true, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[9], false))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_461[9], 305.144f, 196.9411f, 103.2161f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_461[9], 29.1979f);
		TASK::TASK_PLAY_ANIM(iLocal_461[9], "missmic4premiere", "pap_check_pictures", 1000f, -8f, -1, 1, 0.65f, false, false, false);
		iLocal_462[2] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[2], iLocal_461[9], PED::GET_PED_BONE_INDEX(iLocal_461[9], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_461[8], false))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_461[8], 305.7792f, 199.4462f, 103.2793f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_461[8], 106.7509f);
		TASK::TASK_PLAY_ANIM(iLocal_461[8], "missmic4premiere", "pap_check_pictures", 1000f, -8f, -1, 1, 0f, false, false, false);
		iLocal_462[3] = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), 300.5f, 203.51f, 103.4f, true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_462[3], iLocal_461[8], PED::GET_PED_BONE_INDEX(iLocal_461[8], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
}

int func_592()//Position - 0x7C18B
{
	switch (iLocal_459)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("stretch"));
			STREAMING::REQUEST_MODEL(joaat("vacca"));
			iLocal_459++;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("stretch")) && STREAMING::HAS_MODEL_LOADED(joaat("vacca")))
			{
				iLocal_459++;
			}
			break;
		case 2:
			VEHICLE::DELETE_VEHICLE(&iLocal_393);
			iLocal_393 = func_394();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_394))
			{
				iLocal_394 = func_586();
			}
			iLocal_459++;
			return 1;
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_600()//Position - 0x7CAD4
{
	func_280(PLAYER::PLAYER_PED_ID(), 12, 16, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_16__::func_888(0);
}

int func_603(int iParam0, bool bParam1)//Position - 0x7CB43
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
		func_684(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_650(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_34__::func_225(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_650(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x82755
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
			func_676(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_652(*iParam0, bParam6);
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

int func_652(int iParam0, bool bParam1)//Position - 0x8286D
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_656(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_656(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_222(iParam0, 3, 169))
					{
						func_280(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_222(iParam0, 12, 6))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 11))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 12, 10))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 12, 50))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 14, 59))
			{
				func_280(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_222(iParam0, 8, 22))
			{
				func_280(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_222(iParam0, 12, 14))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_222(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 4))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 12, 3))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 14, 82))
			{
				func_280(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_222(iParam0, 8, 76))
			{
				func_280(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_222(iParam0, 12, 1))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_222(iParam0, 12, 12))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 12, 15))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_222(iParam0, 3, 71))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_222(iParam0, 12, 7))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 12, 6))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_222(iParam0, 14, 88))
			{
				func_280(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_222(iParam0, 8, 17))
			{
				func_280(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_222(iParam0, 12, 11))
			{
				func_280(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_656(int iParam0, int iParam1)//Position - 0x82FFE
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
				iVar1 = func_284(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_3(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
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

void func_676(int iParam0)//Position - 0x8450A
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
		func_3(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_284(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_677(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_284(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_284(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_677(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_677(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_284(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_3(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_677(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x84767
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_680(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_680(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x84922
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
								func_680(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_680(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_680(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_680(iParam0, 14, iVar5, 1, 0);
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
								func_680(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_680(iParam0, 14, 17, 1, 0);
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

int func_684(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x84F07
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
				func_676(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_652(*iParam0, bParam6);
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

void func_687()//Position - 0x8502D
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_461[22], 1) > 4f && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_461[2], 1) > 6f)
		{
			switch (iLocal_514)
			{
				case 0:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_INT_LI1", 9, 1, 0, 0))
						{
							iLocal_515 = MISC::GET_GAME_TIMER();
							iLocal_514++;
						}
					}
					break;
				case 1:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && (MISC::GET_GAME_TIMER() - iLocal_515) > 7500)
					{
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_INT_LI2", 9, 1, 0, 0))
						{
							iLocal_515 = MISC::GET_GAME_TIMER();
							iLocal_514++;
						}
					}
					break;
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && (MISC::GET_GAME_TIMER() - iLocal_515) > 6500)
					{
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_INT_LI3", 9, 1, 0, 0))
						{
							iLocal_515 = MISC::GET_GAME_TIMER();
							iLocal_514++;
						}
					}
					break;
				case 3:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && (MISC::GET_GAME_TIMER() - iLocal_515) > 2500)
					{
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_INT_LI4", 9, 1, 0, 0))
						{
							iLocal_514++;
						}
					}
					break;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_516) > 5000 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_IG1_5", 9, 1, 0, 0))
			{
				iLocal_516 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_688()//Position - 0x851BF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if ((MISC::GET_GAME_TIMER() - iLocal_509) > iLocal_510 && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		switch (iVar0)
		{
			case 0:
				Var1 = { 323.3195f, 226.5455f, 121.6866f };
				break;
			case 1:
				Var1 = { 298.9352f, 229.2652f, 121.2983f };
				break;
			case 2:
				Var1 = { 302.1084f, 237.7405f, 122.2715f };
				break;
			case 3:
				Var1 = { 310.7933f, 234.3421f, 123.206f };
				break;
			case 4:
				Var1 = { 318.3249f, 234.6467f, 123.0775f };
				break;
		}
		Var2.f_0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
		Var2.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
		Var2.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
		if (__LIB_0__::func_680())
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mich4_firework_starburst", Var1, Var2, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.6f), false, false, false);
		}
		else
		{
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mich4_firework_trailburst", Var1, Var2, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.6f), false, false, false);
		}
		iLocal_510 = MISC::GET_RANDOM_INT_IN_RANGE(250, 1200);
		iLocal_509 = MISC::GET_GAME_TIMER();
	}
}

void func_689()//Position - 0x8531C
{
	int iVar0;
	if ((MISC::GET_GAME_TIMER() - iLocal_506) > iLocal_507 && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
		if (iVar0 == 7)
		{
			iVar0 = 8;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_462[8]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_462[8], 1) < 3f)
			{
				if (__LIB_0__::func_680())
				{
					iVar0 = 8;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_462[9]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_462[9], 1) < 3f)
			{
				if (__LIB_0__::func_680())
				{
					iVar0 = 9;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_462[10]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_462[10], 1) < 3f)
			{
				if (__LIB_0__::func_680())
				{
					iVar0 = 10;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_462[11]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_462[11], 1) < 3f)
			{
				iVar0 = 11;
			}
		}
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Distant_Camera_Flash", false, -1))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "MIC4_CAMERA_FLASH_master", iLocal_462[iVar0], 0, false, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_462[iVar0]))
		{
			Local_508 = { ENTITY::GET_ENTITY_ROTATION(iLocal_462[iVar0], 2) };
		}
		if (Local_508.f_0 < 50f && Local_508.f_1 > -4f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_462[iVar0]))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", iLocal_462[iVar0], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			iLocal_507 = MISC::GET_RANDOM_INT_IN_RANGE(50, 250);
			iLocal_506 = MISC::GET_GAME_TIMER();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_461[22]))
	{
		PED::SET_PED_RESET_FLAG(iLocal_461[22], 129, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_461[14]))
	{
		PED::SET_PED_RESET_FLAG(iLocal_461[14], 129, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_461[19]))
	{
		PED::SET_PED_RESET_FLAG(iLocal_461[19], 129, true);
	}
}

void func_690()//Position - 0x854F3
{
	func_588();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, true))
		{
			CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, true) && PED::IS_PED_IN_VEHICLE(iLocal_395, iLocal_393, false))
		{
			__LIB_0__::func_187();
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			func_746();
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		}
	}
	if ((__LIB_0__::func_645(1000) && iLocal_371 == 2) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false))
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_371 = 3;
		iLocal_486 = 6;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
		{
			VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_393);
		}
		__LIB_0__::func_429();
		if (!PED::IS_PED_INJURED(iLocal_395))
		{
			TASK::CLEAR_PED_TASKS(iLocal_395);
		}
		OBJECT::DELETE_OBJECT(&iLocal_502);
		HUD::CLEAR_HELP(true);
		__LIB_17__::func_712(291.3156f, 176.4981f, 103.1394f, 30f, 0, 10000);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	switch (iLocal_371)
	{
		case 0:
			__LIB_0__::func_671(1);
			CLOCK::PAUSE_CLOCK(true);
			HUD::CLEAR_PRINTS();
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_LIMO_RADIO");
			PED::SET_PED_NON_CREATION_AREA(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f));
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_LIMO_DRIVE_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("MI_4_LIMO_DRIVE_SCENE");
			}
			iLocal_513 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
			iLocal_487 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			iLocal_488 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			iLocal_511 = CLOCK::GET_CLOCK_HOURS();
			iLocal_512 = CLOCK::GET_CLOCK_MINUTES();
			func_400(1);
			func_400(2);
			iLocal_371++;
			break;
		case 1:
			if (func_398(1) && func_398(2))
			{
				__LIB_17__::func_168(iLocal_393);
				ENTITY::SET_ENTITY_PROOFS(iLocal_393, false, true, false, false, false, false, false, false);
				func_741("MIC4", 1, 0, 1);
				func_740();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_393, 1, "MIC4", false);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_393, false);
				}
				CAM::PLAY_CAM_ANIM(iLocal_487, "LimoDrive_Camera_freeCam", "MISSMIC4JIMMY_LIMO", ENTITY::GET_ENTITY_COORDS(iLocal_393, true) - Vector(-0.5f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(iLocal_393, 2), false, 2);
				iLocal_489 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_489, iLocal_393, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_393, "chassis"));
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_488, iLocal_489, "LimoDrive_Camera_attachToCar", "MISSMIC4JIMMY_LIMO");
				__LIB_0__::func_552(0);
				func_352();
				PED::SET_PED_NON_CREATION_AREA(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f));
				PATHFIND::SET_ROADS_IN_AREA(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f), false, true);
				iLocal_371++;
			}
			break;
		case 2:
		case 3:
			if (((iLocal_486 > 0 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_0__::func_568()) && iLocal_371 == 2)
			{
				__LIB_0__::func_671(0);
				if (__LIB_16__::func_8(&uLocal_206, 29, "SOL5AUD", "SOL5_CALL", 9, 1, 0, 0, 1))
				{
					iLocal_371 = 3;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 291.3156f, 176.4981f, 103.1394f, 100f, 100f, 100f, false, true, 0))
			{
				func_400(3);
				iLocal_371 = 4;
			}
			break;
		case 4:
			if (func_398(3))
			{
				if (func_376(3))
				{
					func_352();
					iLocal_371++;
				}
			}
			break;
		case 5:
			func_689();
			func_688();
			if (func_408(iLocal_393, "MIC4") > 90f && __LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_THERE", 9, 0, 0, 0))
			{
				iLocal_371++;
			}
			break;
		case 6:
			func_689();
			func_688();
			break;
	}
	if (iLocal_371 > 1)
	{
		func_712(iLocal_393, 1f);
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_393, 1f);
		func_711();
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_393, true), 4.3f);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false) && iLocal_371 > 4)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_393, 291.3156f, 176.4981f, 103.1394f, 4f, 4f, 4f, false, true, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_194 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				while (!__LIB_0__::func_213(iLocal_194, 3f, 5, 1056964608, 0, 1, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
					SYSTEM::WAIT(0);
					RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Meltdown", 0);
				}
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 7f, 4);
			OBJECT::DELETE_OBJECT(&iLocal_490);
			OBJECT::DELETE_OBJECT(&iLocal_491);
			OBJECT::DELETE_OBJECT(&iLocal_492);
			OBJECT::DELETE_OBJECT(&iLocal_493);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_crate_01a"));
			CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_513);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_393);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_393, 1);
			CAM::DESTROY_ALL_CAMS(false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			OBJECT::DELETE_OBJECT(&iLocal_502);
			__LIB_0__::func_671(0);
			func_691(0, 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_393, false, false, false, false, false, false, false, false);
			CLOCK::PAUSE_CLOCK(false);
			iLocal_371 = 0;
			iLocal_441 = 3;
		}
	}
}

void func_691(bool bParam0, bool bParam1)//Position - 0x85AD5
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
			func_705();
			func_704();
			func_701();
		}
		else
		{
			func_697();
			func_696();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_696()//Position - 0x85CCF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 144)
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
	while (iVar0 < 7)
	{
		iLocal_179[iVar0] = 0;
		iVar0++;
	}
	iLocal_129 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
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
	while (iVar0 < 27)
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

void func_697()//Position - 0x85E5A
{
	func_700();
	func_699();
	func_698();
}

void func_698()//Position - 0x85E6E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
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
	while (iVar0 < 27)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
}

void func_699()//Position - 0x85F65
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
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
	while (iVar0 < 35)
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

void func_700()//Position - 0x85FE2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 144)
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
	while (iVar0 < 144)
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

void func_701()//Position - 0x860E1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
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
	while (iVar0 < 27)
	{
		if (!iLocal_174[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174[iVar0]);
		}
		iVar0++;
	}
	iLocal_135 = 0;
}

void func_704()//Position - 0x8625F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
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
	while (iVar0 < 35)
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

void func_705()//Position - 0x862E3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 144)
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
	while (iVar0 < 144)
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

void func_711()//Position - 0x8643F
{
	switch (iLocal_486)
	{
		case 0:
			iLocal_498 = MISC::GET_GAME_TIMER();
			iLocal_499 = 5000;
			if (!__LIB_13__::func_755(&Local_372, 1) && __LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_TALK1", 9, 0, 0, 0))
			{
				iLocal_486++;
			}
			break;
		case 1:
			if (func_398(2) && (MISC::GET_GAME_TIMER() - iLocal_498) > iLocal_499)
			{
				iLocal_486++;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_395))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_395, true);
				iLocal_502 = OBJECT::CREATE_OBJECT(joaat("prop_champ_01b"), ENTITY::GET_ENTITY_COORDS(iLocal_395, true), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_502, iLocal_395, PED::GET_PED_BONE_INDEX(iLocal_395, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				iLocal_203 = MISC::GET_GAME_TIMER() + 1000;
				TASK::TASK_PLAY_ANIM(iLocal_395, "missmic4jimmy_limo", "intro", 1000f, -1000f, -1, 10, 0f, false, false, false);
			}
			sLocal_501 = "Idle_01";
			iLocal_486++;
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_395) && ENTITY::DOES_ENTITY_EXIST(iLocal_502))
			{
				if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_395, "missmic4jimmy_limo", sLocal_501, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_395, "missmic4jimmy_limo", sLocal_501) >= 0.99f) && iLocal_371 > 2)
				{
					iLocal_486++;
				}
				else
				{
					PED::SET_PED_CAN_HEAD_IK(iLocal_395, false);
					Local_505 = { ENTITY::GET_ENTITY_ROTATION(iLocal_502, 2) };
					fLocal_504 = 0f;
					if (MISC::ABSF(Local_505.f_0) > 5f || MISC::ABSF(Local_505.f_1) > 5f)
					{
						fLocal_504 = 0.5f;
					}
					if (MISC::ABSF(Local_505.f_0) > 15f || MISC::ABSF(Local_505.f_1) > 15f)
					{
						fLocal_504 = 1f;
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_503))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_503, "flow", fLocal_504, false);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_395, "missmic4jimmy_limo", "Idle_04", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_395, "missmic4jimmy_limo", "Idle_04") >= 0.68f)
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
						}
					}
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_395, "missmic4jimmy_limo", "intro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_395, "missmic4jimmy_limo", "intro") >= 0.99f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_395, "missmic4jimmy_limo", sLocal_501, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_395, "missmic4jimmy_limo", sLocal_501) >= 0.99f))
					{
						iLocal_500 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
						switch (iLocal_500)
						{
							case 0:
								sLocal_501 = "Idle_01";
								break;
							case 1:
								sLocal_501 = "Idle_02";
								break;
							case 2:
								sLocal_501 = "Idle_03";
								break;
							case 3:
								sLocal_501 = "Idle_04";
								if (!__LIB_0__::func_568())
								{
									__LIB_0__::func_620(1);
								}
								break;
							case 4:
								sLocal_501 = "Idle_05";
								break;
						}
						if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_503))
						{
							iLocal_503 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_rcpap1_champ_slosh", iLocal_502, 0f, 0f, 0.37f, 0f, 0f, 0f, 1f, false, false, false);
						}
						TASK::TASK_PLAY_ANIM(iLocal_395, "missmic4jimmy_limo", sLocal_501, 1000f, -1000f, -1, 8, 0f, false, false, false);
						iLocal_499 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 20000);
						iLocal_498 = MISC::GET_GAME_TIMER();
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_395, false, false);
					}
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_395))
			{
				TASK::TASK_PLAY_ANIM(iLocal_395, "missmic4jimmy_limo", "outro", 1000f, -8f, -1, 0, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_395, false, false);
				iLocal_499 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
				iLocal_498 = MISC::GET_GAME_TIMER();
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_503))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_503, false);
				}
				iLocal_486++;
			}
			break;
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_395))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_395, "missmic4jimmy_limo", "outro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_395, "missmic4jimmy_limo", "outro") >= 0.99f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_502))
					{
						OBJECT::DELETE_OBJECT(&iLocal_502);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_champ_01b"));
						STREAMING::REMOVE_ANIM_DICT("missmic4jimmy_limo");
						iLocal_486 = 6;
					}
				}
			}
			break;
	}
}

void func_712(int iParam0, float fParam1)//Position - 0x86883
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
				func_729(iParam0, ((fParam1 * fLocal_104) * fLocal_106), 0);
				if (!iLocal_69)
				{
				}
				iLocal_69 = 0;
			}
			if (bLocal_51)
			{
				func_728(iParam0);
			}
			if (!iLocal_48)
			{
				func_715(iParam0, ((fParam1 * fLocal_104) * fLocal_106), 0);
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
			while (!func_713(&iParam0, fLocal_102))
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

int func_713(int iParam0, float fParam1)//Position - 0x86B1E
{
	if (!iLocal_63)
	{
		iLocal_48 = 1;
		func_697();
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
		func_715(*iParam0, ((1f * fLocal_104) * fLocal_106), 1);
		func_729(*iParam0, ((1f * fLocal_104) * fLocal_106), 1);
		func_728(*iParam0);
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

void func_715(int iParam0, float fParam1, bool bParam2)//Position - 0x86E36
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
		while (iVar0 < 27)
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
							fVar6 = (fVar6 * uLocal_96[iVar0]);
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
							if (5 > iLocal_130)
							{
								fVar6 = (fLocal_103 - fLocal_95[iVar0]);
								fVar6 = (fVar6 * uLocal_96[iVar0]);
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
											if (__LIB_37__::func_939(&(iLocal_181[iVar0]), iLocal_125[iVar0], fVar6, 1, 0, 0, bLocal_77, bLocal_76))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * uLocal_96[iVar0]));
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
									if (((!bLocal_52 && !iLocal_49) && !bLocal_68) && (((!bLocal_77 && !bLocal_76) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_181[iVar0])) || __LIB_37__::func_940(iLocal_181[iVar0])))
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
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * uLocal_96[iVar0]));
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
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_181[iVar0], (fParam1 * uLocal_96[iVar0]));
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
		func_701();
	}
}

void func_728(int iParam0)//Position - 0x87FCB
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
		while (iVar0 < 35)
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
		func_704();
	}
}

void func_729(int iParam0, float fParam1, int iParam2)//Position - 0x882C3
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
		while (iVar0 < 144 && !bVar17)
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
								if (7 > iLocal_129)
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
							else if (iLocal_59 && !bLocal_67)
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
		func_705();
	}
}

void func_740()//Position - 0x89482
{
	Local_146[1 /*3*/] = { -751.3091f, -97.0937f, 37.2116f };
	fLocal_82[1] = -0.0151f;
	fLocal_83[1] = 0.0044f;
	fLocal_84[1] = 0.8566f;
	fLocal_85[1] = 0.5158f;
	iLocal_122[1] = 3;
	fLocal_86[1] = 5742f;
	iLocal_172[1] = joaat("dilettante");
	Local_147[0 /*3*/] = { -751.0682f, -90.6509f, 36.9707f };
	fLocal_97[0] = -0.0402f;
	fLocal_98[0] = 0.001f;
	fLocal_99[0] = 0.516f;
	fLocal_100[0] = 0.8556f;
	iLocal_173[0] = joaat("washington");
	Local_146[2 /*3*/] = { -775.5784f, -70.1046f, 37.2953f };
	fLocal_82[2] = 0.0007f;
	fLocal_83[2] = 0.0127f;
	fLocal_84[2] = -0.2998f;
	fLocal_85[2] = 0.9539f;
	iLocal_122[2] = 4;
	fLocal_86[2] = 7920f;
	iLocal_172[2] = joaat("washington");
	Local_146[3 /*3*/] = { -773.5848f, -61.4278f, 37.3519f };
	fLocal_82[3] = -0.0044f;
	fLocal_83[3] = 0.0007f;
	fLocal_84[3] = 0.8512f;
	fLocal_85[3] = 0.5249f;
	iLocal_122[3] = 5;
	fLocal_86[3] = 8580f;
	iLocal_172[3] = joaat("dilettante");
	Local_146[4 /*3*/] = { -770.5067f, -57.7925f, 37.4167f };
	fLocal_82[4] = 0.0014f;
	fLocal_83[4] = -0.0016f;
	fLocal_84[4] = 0.8783f;
	fLocal_85[4] = 0.4782f;
	iLocal_122[4] = 6;
	fLocal_86[4] = 8778f;
	iLocal_172[4] = joaat("washington");
	Local_146[5 /*3*/] = { -771.5404f, -53.2816f, 37.4863f };
	fLocal_82[5] = -0.0037f;
	fLocal_83[5] = 0.0017f;
	fLocal_84[5] = 0.8545f;
	fLocal_85[5] = 0.5195f;
	iLocal_122[5] = 7;
	fLocal_86[5] = 9438f;
	iLocal_172[5] = joaat("taxi");
	Local_146[6 /*3*/] = { -800.9717f, -48.947f, 37.4214f };
	fLocal_82[6] = 0.0037f;
	fLocal_83[6] = -0.0005f;
	fLocal_84[6] = 0.9582f;
	fLocal_85[6] = -0.2862f;
	iLocal_122[6] = 8;
	fLocal_86[6] = 11088f;
	iLocal_172[6] = joaat("dilettante");
	Local_146[7 /*3*/] = { -727.7749f, -43.7349f, 37.3255f };
	fLocal_82[7] = 0.0112f;
	fLocal_83[7] = 0.0188f;
	fLocal_84[7] = -0.524f;
	fLocal_85[7] = 0.8515f;
	iLocal_122[7] = 9;
	fLocal_86[7] = 13266f;
	iLocal_172[7] = joaat("washington");
	Local_146[8 /*3*/] = { -718.5084f, -32.0203f, 37.5871f };
	fLocal_82[8] = -0.0007f;
	fLocal_83[8] = -0.0001f;
	fLocal_84[8] = -0.3955f;
	fLocal_85[8] = 0.9185f;
	iLocal_122[8] = 10;
	fLocal_86[8] = 13596f;
	iLocal_172[8] = joaat("fugitive");
	Local_146[9 /*3*/] = { -706.7288f, -36.0906f, 37.216f };
	fLocal_82[9] = 0.008f;
	fLocal_83[9] = -0.0123f;
	fLocal_84[9] = 0.9999f;
	fLocal_85[9] = 0.0029f;
	iLocal_122[9] = 11;
	fLocal_86[9] = 13794f;
	iLocal_172[9] = joaat("dilettante");
	Local_147[1 /*3*/] = { -675.0334f, -53.0923f, 37.7784f };
	fLocal_97[1] = -0.0312f;
	fLocal_98[1] = 0.0263f;
	fLocal_99[1] = 0.9788f;
	fLocal_100[1] = -0.2005f;
	iLocal_173[1] = joaat("voltic");
	Local_147[2 /*3*/] = { -659.4994f, -49.5529f, 39.0128f };
	fLocal_97[2] = -0.0449f;
	fLocal_98[2] = 0.0172f;
	fLocal_99[2] = 0.9969f;
	fLocal_100[2] = -0.0625f;
	iLocal_173[2] = joaat("fugitive");
	Local_146[12 /*3*/] = { -681.9445f, -11.6259f, 37.9297f };
	fLocal_82[12] = -0.0047f;
	fLocal_83[12] = -0.0143f;
	fLocal_84[12] = 0.8913f;
	fLocal_85[12] = 0.4532f;
	iLocal_122[12] = 14;
	fLocal_86[12] = 21978f;
	iLocal_172[12] = joaat("dilettante");
	Local_146[13 /*3*/] = { -692.7006f, -14.9014f, 37.794f };
	fLocal_82[13] = -0.0062f;
	fLocal_83[13] = -0.0142f;
	fLocal_84[13] = 0.8314f;
	fLocal_85[13] = 0.5555f;
	iLocal_122[13] = 15;
	fLocal_86[13] = 22242f;
	iLocal_172[13] = joaat("taxi");
	Local_146[14 /*3*/] = { -700.3921f, -17.4427f, 37.6499f };
	fLocal_82[14] = -0.0053f;
	fLocal_83[14] = -0.0096f;
	fLocal_84[14] = 0.8488f;
	fLocal_85[14] = 0.5286f;
	iLocal_122[14] = 16;
	fLocal_86[14] = 22440f;
	iLocal_172[14] = joaat("fugitive");
	Local_146[15 /*3*/] = { -683.7543f, -10.9341f, 37.9169f };
	fLocal_82[15] = -0.0088f;
	fLocal_83[15] = -0.015f;
	fLocal_84[15] = 0.8015f;
	fLocal_85[15] = 0.5977f;
	iLocal_122[15] = 17;
	fLocal_86[15] = 27324f;
	iLocal_172[15] = joaat("dilettante");
	Local_146[16 /*3*/] = { -666.5709f, -5.1678f, 38.7878f };
	fLocal_82[16] = -0.0242f;
	fLocal_83[16] = -0.0329f;
	fLocal_84[16] = 0.7574f;
	fLocal_85[16] = 0.6517f;
	iLocal_122[16] = 18;
	fLocal_86[16] = 28644f;
	iLocal_172[16] = joaat("fugitive");
	Local_146[17 /*3*/] = { -611.8765f, 2.8695f, 41.8305f };
	fLocal_82[17] = -0.0411f;
	fLocal_83[17] = -0.0073f;
	fLocal_84[17] = 0.752f;
	fLocal_85[17] = 0.6578f;
	iLocal_122[17] = 19;
	fLocal_86[17] = 29370f;
	iLocal_172[17] = joaat("dilettante");
	Local_146[18 /*3*/] = { -654.857f, 35.0608f, 39.3026f };
	fLocal_82[18] = -0.0146f;
	fLocal_83[18] = -0.0421f;
	fLocal_84[18] = 0.9981f;
	fLocal_85[18] = -0.0433f;
	iLocal_122[18] = 20;
	fLocal_86[18] = 37224f;
	iLocal_172[18] = joaat("fugitive");
	Local_146[19 /*3*/] = { -655.0488f, 48.7777f, 41.535f };
	fLocal_82[19] = -0.0194f;
	fLocal_83[19] = -0.1278f;
	fLocal_84[19] = 0.9911f;
	fLocal_85[19] = 0.0312f;
	iLocal_122[19] = 21;
	fLocal_86[19] = 39072f;
	iLocal_172[19] = joaat("patriot");
	Local_146[21 /*3*/] = { -651.6327f, 132.7944f, 56.6805f };
	fLocal_82[21] = -0.0004f;
	fLocal_83[21] = 0.0018f;
	fLocal_84[21] = 0.7071f;
	fLocal_85[21] = 0.7071f;
	iLocal_122[21] = 23;
	fLocal_86[21] = 42570f;
	iLocal_172[21] = joaat("infernus");
	Local_146[22 /*3*/] = { -651.4924f, 163.9558f, 59.5013f };
	fLocal_82[22] = -0.0201f;
	fLocal_83[22] = -0.1194f;
	fLocal_84[22] = 0.9926f;
	fLocal_85[22] = -0.0115f;
	iLocal_122[22] = 24;
	fLocal_86[22] = 47256f;
	iLocal_172[22] = joaat("dilettante");
	Local_146[23 /*3*/] = { -651.2297f, 144.6613f, 56.8862f };
	fLocal_82[23] = -0.0198f;
	fLocal_83[23] = -0.0254f;
	fLocal_84[23] = 0.9994f;
	fLocal_85[23] = 0.0093f;
	iLocal_122[23] = 25;
	fLocal_86[23] = 47982f;
	iLocal_172[23] = joaat("fugitive");
	Local_146[24 /*3*/] = { -653.9053f, 242.1704f, 80.8715f };
	fLocal_82[24] = -0.0091f;
	fLocal_83[24] = -0.0022f;
	fLocal_84[24] = 0.9966f;
	fLocal_85[24] = -0.0816f;
	iLocal_122[24] = 26;
	fLocal_86[24] = 52866f;
	iLocal_172[24] = joaat("dilettante");
	Local_146[25 /*3*/] = { -637.272f, 278.5612f, 80.9255f };
	fLocal_82[25] = -0.0084f;
	fLocal_83[25] = -0.0005f;
	fLocal_84[25] = 0.6222f;
	fLocal_85[25] = 0.7828f;
	iLocal_122[25] = 27;
	fLocal_86[25] = 60984f;
	iLocal_172[25] = joaat("voltic");
	Local_147[3 /*3*/] = { -569.8005f, 269.0992f, 82.5511f };
	fLocal_97[3] = 0.003f;
	fLocal_98[3] = -0.0111f;
	fLocal_99[3] = 0.6585f;
	fLocal_100[3] = 0.7525f;
	iLocal_173[3] = joaat("stretch");
	Local_146[26 /*3*/] = { -591.6848f, 262.758f, 81.9388f };
	fLocal_82[26] = -0.0076f;
	fLocal_83[26] = -0.0067f;
	fLocal_84[26] = 0.6679f;
	fLocal_85[26] = 0.7442f;
	iLocal_122[26] = 28;
	fLocal_86[26] = 62964f;
	iLocal_172[26] = joaat("taxi");
	Local_146[27 /*3*/] = { -587.4163f, 258.125f, 81.9937f };
	fLocal_82[27] = 0.0021f;
	fLocal_83[27] = 0.0299f;
	fLocal_84[27] = 0.7597f;
	fLocal_85[27] = -0.6496f;
	iLocal_122[27] = 29;
	fLocal_86[27] = 63096f;
	iLocal_172[27] = joaat("akuma");
	Local_146[32 /*3*/] = { -519.6771f, 258.4605f, 82.5956f };
	fLocal_82[32] = -0.0006f;
	fLocal_83[32] = -0.0011f;
	fLocal_84[32] = 0.6662f;
	fLocal_85[32] = 0.7458f;
	iLocal_122[32] = 34;
	fLocal_86[32] = 66792f;
	iLocal_172[32] = joaat("vader");
	Local_146[33 /*3*/] = { -459.0908f, 255.1122f, 82.4951f };
	fLocal_82[33] = -0.0116f;
	fLocal_83[33] = 0.0117f;
	fLocal_84[33] = 0.656f;
	fLocal_85[33] = 0.7546f;
	iLocal_122[33] = 35;
	fLocal_86[33] = 71940f;
	iLocal_172[33] = joaat("dilettante");
	Local_146[34 /*3*/] = { -436.547f, 247.8752f, 82.8304f };
	fLocal_82[34] = -0.0046f;
	fLocal_83[34] = -0.0005f;
	fLocal_84[34] = 0.6607f;
	fLocal_85[34] = 0.7506f;
	iLocal_122[34] = 36;
	fLocal_86[34] = 73656f;
	iLocal_172[34] = joaat("patriot");
	Local_146[35 /*3*/] = { -408.9057f, 245.0887f, 82.8828f };
	fLocal_82[35] = -0.0038f;
	fLocal_83[35] = 0.0026f;
	fLocal_84[35] = 0.6792f;
	fLocal_85[35] = 0.7339f;
	iLocal_122[35] = 37;
	fLocal_86[35] = 75504f;
	iLocal_172[35] = joaat("dilettante");
	Local_146[36 /*3*/] = { -406.1917f, 237.2878f, 83.0315f };
	fLocal_82[36] = -0.001f;
	fLocal_83[36] = -0.0001f;
	fLocal_84[36] = -0.0051f;
	fLocal_85[36] = 1f;
	iLocal_122[36] = 38;
	fLocal_86[36] = 75702f;
	iLocal_172[36] = joaat("voltic");
	Local_146[39 /*3*/] = { -299.191f, 263.4909f, 87.9138f };
	fLocal_82[39] = 0.0174f;
	fLocal_83[39] = -0.0643f;
	fLocal_84[39] = 0.7701f;
	fLocal_85[39] = 0.6345f;
	iLocal_122[39] = 41;
	fLocal_86[39] = 83028f;
	iLocal_172[39] = joaat("akuma");
	Local_147[4 /*3*/] = { -250.279f, 286.0272f, 91.314f };
	fLocal_97[4] = -0.0195f;
	fLocal_98[4] = 0.0289f;
	fLocal_99[4] = 0.7379f;
	fLocal_100[4] = -0.674f;
	iLocal_173[4] = joaat("dilettante");
	Local_146[43 /*3*/] = { -241.4356f, 254.0293f, 91.5941f };
	fLocal_82[43] = -0.0009f;
	fLocal_83[43] = 0.0009f;
	fLocal_84[43] = 0.7333f;
	fLocal_85[43] = -0.6799f;
	iLocal_122[43] = 45;
	fLocal_86[43] = 85140f;
	iLocal_172[43] = joaat("voltic");
	Local_146[44 /*3*/] = { -203.4949f, 264.4652f, 91.572f };
	fLocal_82[44] = -0.005f;
	fLocal_83[44] = -0.0075f;
	fLocal_84[44] = 0.6829f;
	fLocal_85[44] = 0.7305f;
	iLocal_122[44] = 46;
	fLocal_86[44] = 87516f;
	iLocal_172[44] = joaat("infernus");
	Local_146[45 /*3*/] = { -187.1415f, 262.1929f, 92.5558f };
	fLocal_82[45] = -0.0086f;
	fLocal_83[45] = -0.0083f;
	fLocal_84[45] = 0.6573f;
	fLocal_85[45] = 0.7536f;
	iLocal_122[45] = 47;
	fLocal_86[45] = 88704f;
	iLocal_172[45] = joaat("bus");
	Local_146[46 /*3*/] = { -142.2844f, 258.0151f, 94.5132f };
	fLocal_82[46] = -0.0292f;
	fLocal_83[46] = -0.0211f;
	fLocal_84[46] = 0.6964f;
	fLocal_85[46] = 0.7167f;
	iLocal_122[46] = 48;
	fLocal_86[46] = 91872f;
	iLocal_172[46] = joaat("dilettante");
	Local_146[47 /*3*/] = { -115.8647f, 258.49f, 96.5116f };
	fLocal_82[47] = -0.0339f;
	fLocal_83[47] = -0.0267f;
	fLocal_84[47] = 0.7336f;
	fLocal_85[47] = 0.6783f;
	iLocal_122[47] = 49;
	fLocal_86[47] = 93852f;
	iLocal_172[47] = joaat("bati");
	Local_146[48 /*3*/] = { -112.0918f, 236.9431f, 97.3335f };
	fLocal_82[48] = -0.042f;
	fLocal_83[48] = 0.0124f;
	fLocal_84[48] = 0.9929f;
	fLocal_85[48] = -0.1104f;
	iLocal_122[48] = 50;
	fLocal_86[48] = 94314f;
	iLocal_172[48] = joaat("patriot");
	Local_146[49 /*3*/] = { -107.0848f, 258.9811f, 97.4725f };
	fLocal_82[49] = -0.039f;
	fLocal_83[49] = -0.0295f;
	fLocal_84[49] = 0.7291f;
	fLocal_85[49] = 0.6826f;
	iLocal_122[49] = 51;
	fLocal_86[49] = 94578f;
	iLocal_172[49] = joaat("vader");
	Local_146[50 /*3*/] = { -75.1509f, 262.1369f, 101.6077f };
	fLocal_82[50] = -0.0486f;
	fLocal_83[50] = -0.042f;
	fLocal_84[50] = 0.7448f;
	fLocal_85[50] = 0.6641f;
	iLocal_122[50] = 52;
	fLocal_86[50] = 97086f;
	iLocal_172[50] = joaat("bus");
	Local_146[51 /*3*/] = { -66.0495f, 250.1121f, 102.1338f };
	fLocal_82[51] = 0.0424f;
	fLocal_83[51] = -0.0468f;
	fLocal_84[51] = -0.6581f;
	fLocal_85[51] = 0.7503f;
	iLocal_122[51] = 53;
	fLocal_86[51] = 97680f;
	iLocal_172[51] = joaat("coquette");
	Local_146[52 /*3*/] = { -26.4831f, 273.7352f, 106.4029f };
	fLocal_82[52] = -0.0188f;
	fLocal_83[52] = 0.044f;
	fLocal_84[52] = 0.9202f;
	fLocal_85[52] = -0.3886f;
	iLocal_122[52] = 54;
	fLocal_86[52] = 101904f;
	iLocal_172[52] = joaat("coquette");
	Local_146[54 /*3*/] = { 10.4011f, 261.0676f, 109.0329f };
	fLocal_82[54] = -0.01f;
	fLocal_83[54] = 0.0082f;
	fLocal_84[54] = 0.7729f;
	fLocal_85[54] = -0.6344f;
	iLocal_122[54] = 56;
	fLocal_86[54] = 104016f;
	iLocal_172[54] = joaat("voltic");
	Local_146[55 /*3*/] = { 12.4599f, 251.5634f, 109.0181f };
	fLocal_82[55] = -0.0105f;
	fLocal_83[55] = 0.0069f;
	fLocal_84[55] = 0.786f;
	fLocal_85[55] = -0.6181f;
	iLocal_122[55] = 57;
	fLocal_86[55] = 104082f;
	iLocal_172[55] = joaat("dilettante");
	Local_146[57 /*3*/] = { 15.1965f, 260.1009f, 109.1271f };
	fLocal_82[57] = 0.0951f;
	fLocal_83[57] = 0.0901f;
	fLocal_84[57] = 0.778f;
	fLocal_85[57] = -0.6145f;
	iLocal_122[57] = 59;
	fLocal_86[57] = 105732f;
	iLocal_172[57] = joaat("nemesis");
	Local_146[58 /*3*/] = { 51.7524f, 249.5017f, 109.1136f };
	fLocal_82[58] = -0.0112f;
	fLocal_83[58] = 0.007f;
	fLocal_84[58] = 0.5701f;
	fLocal_85[58] = 0.8214f;
	iLocal_122[58] = 60;
	fLocal_86[58] = 110154f;
	iLocal_172[58] = joaat("dilettante");
	Local_146[59 /*3*/] = { 77.1412f, 246.633f, 109.1588f };
	fLocal_82[59] = 0.0102f;
	fLocal_83[59] = 0.0115f;
	fLocal_84[59] = 0.5713f;
	fLocal_85[59] = 0.8206f;
	iLocal_122[59] = 61;
	fLocal_86[59] = 111210f;
	iLocal_172[59] = joaat("bus");
	Local_146[60 /*3*/] = { 108.8754f, 234.962f, 107.3687f };
	fLocal_82[60] = 0.011f;
	fLocal_83[60] = 0.0099f;
	fLocal_84[60] = 0.5742f;
	fLocal_85[60] = 0.8186f;
	iLocal_122[60] = 62;
	fLocal_86[60] = 112002f;
	iLocal_172[60] = joaat("coquette");
	Local_146[61 /*3*/] = { 120.7711f, 235.046f, 107.1257f };
	fLocal_82[61] = -0.0014f;
	fLocal_83[61] = 0.0268f;
	fLocal_84[61] = 0.5704f;
	fLocal_85[61] = 0.8209f;
	iLocal_122[61] = 63;
	fLocal_86[61] = 112992f;
	iLocal_172[61] = joaat("infernus");
	Local_146[62 /*3*/] = { 161.7951f, 220.0426f, 105.9757f };
	fLocal_82[62] = 0.0041f;
	fLocal_83[62] = 0.0179f;
	fLocal_84[62] = 0.6066f;
	fLocal_85[62] = 0.7948f;
	iLocal_122[62] = 64;
	fLocal_86[62] = 116358f;
	iLocal_172[62] = joaat("dilettante");
	Local_146[63 /*3*/] = { 176.7703f, 204.224f, 105.5744f };
	fLocal_82[63] = 0.0128f;
	fLocal_83[63] = -0.014f;
	fLocal_84[63] = 0.8145f;
	fLocal_85[63] = -0.5799f;
	iLocal_122[63] = 65;
	fLocal_86[63] = 117612f;
	iLocal_172[63] = joaat("voltic");
	Local_146[65 /*3*/] = { 182.6559f, 202.3705f, 105.2015f };
	fLocal_82[65] = 0.0073f;
	fLocal_83[65] = -0.0159f;
	fLocal_84[65] = 0.8193f;
	fLocal_85[65] = -0.5731f;
	iLocal_122[65] = 67;
	fLocal_86[65] = 118008f;
	iLocal_172[65] = joaat("infernus");
	Local_146[66 /*3*/] = { 182.72f, 197.1533f, 104.954f };
	fLocal_82[66] = -0.0042f;
	fLocal_83[66] = -0.0163f;
	fLocal_84[66] = 0.825f;
	fLocal_85[66] = -0.5649f;
	iLocal_122[66] = 68;
	fLocal_86[66] = 118140f;
	iLocal_172[66] = joaat("coquette");
	Local_146[68 /*3*/] = { 192.5483f, 204.6786f, 105.09f };
	fLocal_82[68] = 0.0007f;
	fLocal_83[68] = -0.0009f;
	fLocal_84[68] = 0.5527f;
	fLocal_85[68] = 0.8334f;
	iLocal_122[68] = 70;
	fLocal_86[68] = 118602f;
	iLocal_172[68] = joaat("dilettante");
	Local_146[69 /*3*/] = { 217.3717f, 179.4344f, 104.9837f };
	fLocal_82[69] = -0.0034f;
	fLocal_83[69] = -0.0075f;
	fLocal_84[69] = 0.8023f;
	fLocal_85[69] = -0.5969f;
	iLocal_122[69] = 71;
	fLocal_86[69] = 120450f;
	iLocal_172[69] = joaat("dilettante");
	Local_146[70 /*3*/] = { 229.7712f, 185.474f, 104.6763f };
	fLocal_82[70] = 0.0113f;
	fLocal_83[70] = -0.0001f;
	fLocal_84[70] = 0.5758f;
	fLocal_85[70] = 0.8175f;
	iLocal_122[70] = 72;
	fLocal_86[70] = 121638f;
	iLocal_172[70] = joaat("coquette");
	Local_146[71 /*3*/] = { 251.2794f, 182.8351f, 104.5498f };
	fLocal_82[71] = 0.0068f;
	fLocal_83[71] = 0.0047f;
	fLocal_84[71] = 0.569f;
	fLocal_85[71] = 0.8223f;
	iLocal_122[71] = 73;
	fLocal_86[71] = 123024f;
	iLocal_172[71] = joaat("akuma");
	Local_146[72 /*3*/] = { 286.973f, 174.3262f, 103.9083f };
	fLocal_82[72] = 0.0076f;
	fLocal_83[72] = 0.0054f;
	fLocal_84[72] = 0.5696f;
	fLocal_85[72] = 0.8218f;
	iLocal_122[72] = 74;
	fLocal_86[72] = 124674f;
	iLocal_172[72] = joaat("nemesis");
	Local_146[74 /*3*/] = { 299.8036f, 169.1703f, 103.5907f };
	fLocal_82[74] = 0.0063f;
	fLocal_83[74] = 0.0046f;
	fLocal_84[74] = 0.5717f;
	fLocal_85[74] = 0.8204f;
	iLocal_122[74] = 76;
	fLocal_86[74] = 125466f;
	iLocal_172[74] = joaat("dilettante");
	Local_146[75 /*3*/] = { 305.4707f, 152.1204f, 103.4018f };
	fLocal_82[75] = 0.0051f;
	fLocal_83[75] = -0.0074f;
	fLocal_84[75] = 0.8248f;
	fLocal_85[75] = -0.5653f;
	iLocal_122[75] = 77;
	fLocal_86[75] = 125994f;
	iLocal_172[75] = joaat("dilettante");
	Local_146[76 /*3*/] = { 308.3471f, 147.0124f, 103.2927f };
	fLocal_82[76] = 0.0037f;
	fLocal_83[76] = -0.0082f;
	fLocal_84[76] = 0.8101f;
	fLocal_85[76] = -0.5862f;
	iLocal_122[76] = 78;
	fLocal_86[76] = 126258f;
	iLocal_172[76] = joaat("dilettante");
	Local_146[77 /*3*/] = { 337.7297f, 136.0498f, 102.7815f };
	fLocal_82[77] = 0.0056f;
	fLocal_83[77] = -0.0079f;
	fLocal_84[77] = 0.815f;
	fLocal_85[77] = -0.5794f;
	iLocal_122[77] = 79;
	fLocal_86[77] = 128502f;
	iLocal_172[77] = joaat("taxi");
	Local_146[78 /*3*/] = { 342.0353f, 144.3674f, 102.5265f };
	fLocal_82[78] = 0.0034f;
	fLocal_83[78] = -0.0092f;
	fLocal_84[78] = 0.8153f;
	fLocal_85[78] = -0.5789f;
	iLocal_122[78] = 80;
	fLocal_86[78] = 128568f;
	iLocal_172[78] = joaat("bati");
	Local_146[79 /*3*/] = { 348.4572f, 119.5351f, 102.5064f };
	fLocal_82[79] = -0.011f;
	fLocal_83[79] = 0.0013f;
	fLocal_84[79] = 0.9856f;
	fLocal_85[79] = 0.1686f;
	iLocal_122[79] = 81;
	fLocal_86[79] = 129756f;
	iLocal_172[79] = joaat("dilettante");
	Local_147[5 /*3*/] = { 330.6659f, 162.6515f, 103.1006f };
	fLocal_97[5] = 0.0083f;
	fLocal_98[5] = 0.0058f;
	fLocal_99[5] = 0.5634f;
	fLocal_100[5] = 0.8261f;
	iLocal_173[5] = joaat("tourbus");
	Local_146[80 /*3*/] = { 378.0202f, 198.8629f, 102.5501f };
	fLocal_82[80] = -0.0025f;
	fLocal_83[80] = 0.0004f;
	fLocal_84[80] = 0.9843f;
	fLocal_85[80] = 0.1763f;
	iLocal_122[80] = 82;
	fLocal_86[80] = 135630f;
	iLocal_172[80] = joaat("dilettante");
	Local_146[81 /*3*/] = { 224.3663f, 192.6471f, 105.0238f };
	fLocal_82[81] = 0.0118f;
	fLocal_83[81] = 0.0016f;
	fLocal_84[81] = 0.5762f;
	fLocal_85[81] = 0.8172f;
	iLocal_122[81] = 83;
	fLocal_86[81] = 143220f;
	iLocal_172[81] = joaat("dilettante");
}

void func_741(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x8AFA4
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
	func_696();
}

void func_746()//Position - 0x8B20A
{
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	switch (iLocal_484)
	{
		case 0:
			if (!CAM::IS_CINEMATIC_CAM_RENDERING() && PED::IS_PED_IN_VEHICLE(iLocal_395, iLocal_393, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_490))
				{
					__LIB_0__::func_151(func_748(), -1);
					iLocal_490 = OBJECT::CREATE_OBJECT(joaat("prop_crate_01a"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_393, Local_494), true, true, false);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_491))
				{
					iLocal_491 = OBJECT::CREATE_OBJECT(joaat("prop_crate_01a"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_393, Local_495), true, true, false);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_492))
				{
					iLocal_492 = OBJECT::CREATE_OBJECT(joaat("prop_crate_01a"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_393, Local_496), true, true, false);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_493))
				{
					iLocal_493 = OBJECT::CREATE_OBJECT(joaat("prop_crate_01a"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_393, Local_497), true, true, false);
				}
				ENTITY::SET_ENTITY_COLLISION(iLocal_490, true, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_491, true, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_492, true, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_493, true, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_490, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_491, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_492, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_493, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_490, iLocal_393, 0, Local_494, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_491, iLocal_393, 0, Local_495, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_492, iLocal_393, 0, Local_496, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_493, iLocal_393, 0, Local_497, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
				iLocal_484++;
			}
			break;
		case 1:
			if (func_747() && iLocal_485 == 0)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_LIMO_CAM_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("MI_4_LIMO_CAM_SCENE");
				}
				ENTITY::SET_ENTITY_COLLISION(iLocal_490, true, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_491, true, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_492, true, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_493, true, false);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, false, false, false, false, false, false, 0);
				iLocal_485 = 1;
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_490, iLocal_393, 0, Local_494, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_491, iLocal_393, 0, Local_495, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_492, iLocal_393, 0, Local_496, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_493, iLocal_393, 0, Local_497, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 7 /*INPUT_CINEMATIC_SLOWMO*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 95 /*INPUT_VEH_CINEMATIC_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 96 /*INPUT_VEH_CINEMATIC_UP_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 97 /*INPUT_VEH_CINEMATIC_DOWN_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, true);
			CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(iLocal_485);
			if (((func_747() && !CAM::IS_GAMEPLAY_CAM_RENDERING()) && bLocal_485) || __LIB_0__::func_77(0))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_490, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_491, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_492, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_493, false, false);
				OBJECT::DELETE_OBJECT(&iLocal_490);
				OBJECT::DELETE_OBJECT(&iLocal_491);
				OBJECT::DELETE_OBJECT(&iLocal_492);
				OBJECT::DELETE_OBJECT(&iLocal_493);
				HUD::CLEAR_HELP(true);
				iLocal_484 = 0;
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_4_LIMO_CAM_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("MI_4_LIMO_CAM_SCENE");
				}
				if (iLocal_371 >= 3)
				{
					iLocal_484 = 999;
				}
				bLocal_485 = false;
			}
			break;
	}
}

bool func_747()//Position - 0x8B54B
{
	return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/);
}

char* func_748()//Position - 0x8B55A
{
	return "MIC4_LIMOCAM";
}

void func_750()//Position - 0x8B577
{
	switch (iLocal_371)
	{
		case 0:
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 15f);
			func_400(1);
			if (__LIB_0__::func_2(0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -712.0151f, -154.033f, 36.4152f, true, false, false, true);
				__LIB_16__::func_596(18);
			}
			iLocal_371++;
			break;
		case 1:
			if (func_398(1) && __LIB_0__::func_545(18))
			{
				func_352();
				if (!func_222(PLAYER::PLAYER_PED_ID(), 12, 16))
				{
					if (__LIB_13__::func_829(joaat("Player_Zero"), 12, 16))
					{
						__LIB_0__::func_229("SOL5_TUX1", 7500, 1);
					}
					else
					{
						__LIB_0__::func_229("SOL5_TUX2", 7500, 1);
					}
				}
				uLocal_474 = __LIB_0__::func_488(Local_479, 1);
				__LIB_13__::func_808(&iLocal_472);
				SYSTEM::SETTIMERB(0);
				iLocal_371++;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_395))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_395, PLAYER::PLAYER_PED_ID(), 45f) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_395, -719.4904f, -162.2617f, 36.0158f, 1.5f, 1.5f, 1.5f, false, true, 0))
				{
					if (!__LIB_0__::func_798(iLocal_395, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_478);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -719.4904f, -162.2617f, 36.0158f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_478);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_395, iLocal_478);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_478);
					}
				}
			}
			if (func_222(PLAYER::PLAYER_PED_ID(), 12, 16) && func_398(1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_395))
				{
					__LIB_16__::func_937(-726.1197f, -158.43552f, 35.54701f, -708.7903f, -183.28651f, 37.87264f, 5.75f, -730.7252f, -144.1218f, 36.2103f, 30.4009f, 5f, 7f, 8.5f, 1, 1, 1, 0, 0);
					__LIB_37__::func_175(-730.7252f, -144.1218f, 36.2103f, 30.4009f);
					__LIB_31__::func_993(-730.7252f, -144.1218f, 36.2103f, 30.4009f, 0, 145);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.54785f, -239.82362f, 34.704006f, -772.90686f, -86.623764f, 39.99984f, 18.75f, false, false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_479, 400f, true, false, false, false, false, false, 0);
					FIRE::STOP_FIRE_IN_RANGE(Local_479, 150f);
					func_376(1);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!PED::IS_PED_INJURED(iLocal_395))
					{
					}
					while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_395))
					{
						if (!PED::IS_PED_INJURED(iLocal_395))
						{
						}
						SYSTEM::WAIT(0);
					}
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (!HUD::DOES_BLIP_EXIST(iLocal_472))
				{
					if (!PED::IS_PED_INJURED(iLocal_395))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					iLocal_472 = __LIB_0__::func_666(iLocal_395, 0, 145);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_393, false);
				HUD::REMOVE_BLIP(&uLocal_474);
				iLocal_371++;
			}
			break;
		case 3:
			if (!__LIB_0__::func_719() && __LIB_13__::func_829(__LIB_12__::func_894(0), 12, 16))
			{
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::CLEAR_PRINTS();
				MISC::CLEAR_AREA_OF_PEDS(-716.675f, -155.42f, 37.675f, 50f, 0);
				__LIB_13__::func_812(49, &uLocal_482, &uLocal_483);
				while (!func_755())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					SYSTEM::WAIT(0);
				}
				if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					__LIB_17__::func_782(0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					STREAMING::REQUEST_ANIM_DICT("missmic4");
					while (!STREAMING::HAS_ANIM_DICT_LOADED("missmic4"))
					{
						SYSTEM::WAIT(0);
					}
					ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-716.675f, -155.42f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), 1000f);
					ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-715.615f, -157.256f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), 1000f);
					MISC::CLEAR_AREA(-716.675f, -155.42f, 37.675f, 60f, true, false, false, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missmic4", "michael_tux_fidget", 8f, -8f, -1, 48, 0f, false, false, false);
					__LIB_15__::func_228(&uLocal_442, 0, 0, 2000, 1, 1, 0, 1);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -717.8878f, -157.4567f, 35.9894f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 119.5472f);
					STREAMING::REMOVE_ANIM_DICT("missmic4");
					func_352();
					__LIB_17__::func_782(0);
				}
				else
				{
					MISC::CLEAR_AREA(-716.675f, -155.42f, 37.675f, 60f, true, false, false, false);
					__LIB_15__::func_228(&uLocal_442, 0, 0, 2000, 1, 0, 0, 1);
					if (iLocal_457 < 3)
					{
					}
				}
				__LIB_0__::func_229("SOL5_MTJIM", 7500, 1);
				iLocal_371++;
			}
			break;
		case 4:
			if ((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) < 1f && (MISC::GET_GAME_TIMER() - iLocal_480) > 1000) && iLocal_481 == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				iLocal_481 = 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -716.4159f, -160.59402f, 35.991035f, -719.4823f, -155.13214f, 39.754093f, 2.75f, false, true, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					HUD::REMOVE_BLIP(&iLocal_472);
					HUD::CLEAR_PRINTS();
					iLocal_481 = 0;
					if (!HUD::DOES_BLIP_EXIST(iLocal_473))
					{
						iLocal_473 = __LIB_0__::func_639(iLocal_393, 0, 0);
					}
					iLocal_371++;
				}
				if (!PED::IS_PED_FACING_PED(iLocal_395, PLAYER::PLAYER_PED_ID(), 45f))
				{
					if (!__LIB_0__::func_798(iLocal_395, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), 1))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), 0);
					}
				}
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			if ((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) < 1f && (MISC::GET_GAME_TIMER() - iLocal_480) > 1000) && iLocal_481 == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_481 = 1;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/) && !ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
			{
				__LIB_0__::func_366(0);
				__LIB_0__::func_671(1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
				TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, 20000, 2, 2f, 1, 0);
			}
			if ((!PED::IS_PED_INJURED(iLocal_395) && !ENTITY::IS_ENTITY_DEAD(iLocal_393, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_477) > iLocal_476)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_395) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_395, 1) > 20f)
					{
						if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_MESS", 9, 0, 0, 0))
						{
							iLocal_476 += 10000;
							iLocal_477 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, true))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
				}
			}
			if (iLocal_371 == 5)
			{
				if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_JGETIN", 9, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_395, false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_395, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_395, 170, true);
						TASK::TASK_ENTER_VEHICLE(iLocal_395, iLocal_393, 20000, 1, 2f, 1, 0);
					}
					iLocal_371 = 6;
				}
			}
			if (iLocal_371 == 6)
			{
				if (!__LIB_13__::func_755(&Local_372, 2))
				{
					__LIB_0__::func_229("SOL5_INLIMO", 7500, 1);
					iLocal_371 = 7;
				}
			}
			if (iLocal_371 == 7)
			{
				if (!__LIB_13__::func_755(&Local_372, 1))
				{
					if (__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_LIMO", 9, 0, 0, 0))
					{
						iLocal_371 = 8;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
			{
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, false) && PED::IS_PED_IN_VEHICLE(iLocal_395, iLocal_393, false)) && __LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_WHERE", 9, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 6f, 4);
					HUD::REMOVE_BLIP(&iLocal_473);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_393, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_393, 4);
					CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
					iLocal_371 = 9;
				}
			}
			break;
		case 9:
			CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			__LIB_0__::func_552(0);
			iLocal_371 = 0;
			iLocal_441 = 2;
			break;
	}
	if (!PED::IS_PED_INJURED(iLocal_395))
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_395, 1f);
	}
	if ((!func_222(PLAYER::PLAYER_PED_ID(), 12, 16) && !__LIB_0__::func_921(18)) && iLocal_371 > 2)
	{
		iLocal_371 = 1;
		iLocal_457 = 0;
	}
	if (SYSTEM::TIMERB() > 2000)
	{
		if (iLocal_475 == 0 && !func_222(PLAYER::PLAYER_PED_ID(), 12, 16))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_395))
			{
				__LIB_17__::func_70(14, "MIC4_TUXTEXT" /* GXT: Dad, I'll be at Ponsonbys soon I've gt a ride. U better get a badass tux. */, 1, 1, 0, 0, 0, 1, 0, 1);
				iLocal_475 = 1;
			}
		}
	}
}

int func_755()//Position - 0x8C020
{
	if (iLocal_458)
	{
		return 1;
	}
	if (!__LIB_0__::func_323())
	{
		if (__LIB_17__::func_156(49, &uLocal_442, __LIB_0__::func_2(0), 0, 0, 0, 1))
		{
			if (iLocal_457 == 0)
			{
				iLocal_457 = -1;
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT() || iLocal_457 == -1)
		{
			STREAMING::REQUEST_ANIM_DICT("missmic4");
			iLocal_457 = -1;
			return 1;
		}
		switch (iLocal_457)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("SWITCH@MICHAEL@EXITS_FANCYSHOP");
				STREAMING::REQUEST_ANIM_DICT("missmic4");
				func_400(1);
				iLocal_457++;
				break;
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("SWITCH@MICHAEL@EXITS_FANCYSHOP") && STREAMING::HAS_ANIM_DICT_LOADED("missmic4"))
				{
					Local_454 = { -715.5f, -155.45f, 37.41f };
					Local_455 = { 0f, 0f, 120.24f };
					iLocal_456 = PED::CREATE_SYNCHRONIZED_SCENE(Local_454, Local_455, 2);
					ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-716.675f, -155.42f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), iLocal_456, "001405_01_mics3_8_exits_fancyshop_exit_l_door", "switch@michael@exits_fancyshop", 1000f, -8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-715.615f, -157.256f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), iLocal_456, "001405_01_mics3_8_exits_fancyshop_exit_r_door", "switch@michael@exits_fancyshop", 1000f, -8f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_456, true);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_456, 1f);
					SYSTEM::SETTIMERA(0);
					iLocal_457++;
				}
				break;
			case 2:
				func_600();
				if (SYSTEM::TIMERA() > 6000)
				{
					Local_454 = { -715.5f, -155.45f, 37.41f };
					Local_455 = { 0f, 0f, 120.24f };
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					iLocal_456 = PED::CREATE_SYNCHRONIZED_SCENE(Local_454, Local_455, 2);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_456, "switch@michael@exits_fancyshop", "001405_01_mics3_8_exits_fancyshop_exit", 1000f, -1000f, 0, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-716.675f, -155.42f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), iLocal_456, "001405_01_mics3_8_exits_fancyshop_exit_l_door", "switch@michael@exits_fancyshop", 1000f, -8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-715.615f, -157.256f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), iLocal_456, "001405_01_mics3_8_exits_fancyshop_exit_r_door", "switch@michael@exits_fancyshop", 1000f, -8f, 0, 1000f);
					SYSTEM::SETTIMERA(0);
					iLocal_457++;
				}
				break;
			case 3:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_456) >= 0.95f)
				{
					ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-716.675f, -155.42f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), 1000f);
					ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-715.615f, -157.256f, 37.675f, 1f, joaat("v_ilev_ch_glassdoor"), 1000f);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missmic4", "michael_tux_fidget", 8f, -8f, -1, 48, 0f, false, false, false);
					__LIB_17__::func_782(0);
					iLocal_458 = 1;
					iLocal_457++;
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

void func_813()//Position - 0x9403A
{
	int iVar0;
	AUDIO::SET_AUDIO_FLAG("AllowPlayerAIOnMission", true);
	iLocal_195 = __LIB_13__::func_804(0);
	PED::ADD_SCENARIO_BLOCKING_AREA(290.7038f, 178.1873f, 101.384f, 315.7695f, 228.7553f, 136.0489f, false, true, true, true);
	PED::SET_PED_NON_CREATION_AREA(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f));
	iLocal_471 = 0;
	__LIB_0__::func_424(1);
	__LIB_0__::func_222(&uLocal_206, 5, 0, "DEVIN", 0, 1);
	STREAMING::REQUEST_IPL("redCarpet");
	HUD::REQUEST_ADDITIONAL_TEXT("SOL5", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("SOL5AUD", 6);
	__LIB_0__::func_222(&uLocal_206, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_205);
	PED::ADD_RELATIONSHIP_GROUP("MERRYWEATHER", &iLocal_205);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_205);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_205, joaat("PLAYER"));
	PATHFIND::SET_PED_PATHS_IN_AREA(-832.418f, 167.4556f, 60.3269f, -812.418f, 187.4556f, 80.3269f, false, 0);
	PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-820.7206f, 178.5732f, 70.5724f, 30f, 0);
	__LIB_17__::func_241(-825.1512f, 178.9821f, 70.3781f, 25f, 0);
	__LIB_16__::func_18(1);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("stretch"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vacca"), true);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1700375831))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(-1700375831, joaat("v_ilev_mm_windowwc"), -802.73334f, 167.5041f, 77.5824f, true, true, false);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1700375831, 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1700375831, 4, true, true);
	__LIB_0__::func_424(1);
	iLocal_200 = MISC::GET_GAME_TIMER();
	iLocal_441 = 1;
	if (__LIB_0__::func_323())
	{
		func_603(0, 1);
		__LIB_0__::func_222(&uLocal_206, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		iVar0 = __LIB_0__::func_344();
		switch (iVar0)
		{
			case 0:
				iLocal_470 = 1;
				break;
			case 1:
				iLocal_470 = 3;
				break;
			case 2:
				iLocal_470 = 4;
				break;
			case 3:
				iLocal_470 = 5;
				break;
			case 4:
				iLocal_470 = 6;
				break;
			case 5:
				iLocal_470 = 7;
				break;
			case 6:
				iLocal_470 = 9;
				break;
			case 7:
				iLocal_470 = 10;
				break;
		}
		if (Global_94618 == 1)
		{
			if (iLocal_470 == 1)
			{
				iLocal_470 = 3;
			}
			else if (iLocal_470 == 3)
			{
				iLocal_470 = 4;
			}
			else if (iLocal_470 == 4)
			{
				iLocal_470 = 5;
			}
			else if (iLocal_470 == 5)
			{
				iLocal_470 = 6;
			}
			else if (iLocal_470 == 6)
			{
				iLocal_470 = 7;
			}
			else if (iLocal_470 == 7)
			{
				iLocal_470 = 9;
			}
			else if (iLocal_470 == 9)
			{
				iLocal_470 = 11;
			}
		}
		func_814(iLocal_470, 1);
		iLocal_441 = iLocal_470;
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_814(int iParam0, bool bParam1)//Position - 0x94328
{
	__LIB_0__::func_429();
	iLocal_200 = MISC::GET_GAME_TIMER();
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_434))
	{
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_434, 0f);
	}
	if (iParam0 > 1)
	{
		func_600();
	}
	__LIB_0__::func_620(0);
	switch (iParam0)
	{
		case 1:
			func_894(bParam1, -718.741f, -158.058f, 35.9953f, 296.3582f);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			__LIB_0__::func_433(0, -1, 1);
			__LIB_17__::func_154(18, 1, 0);
			__LIB_16__::func_596(18);
			while (!__LIB_0__::func_545(18))
			{
				SYSTEM::WAIT(0);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		case 2:
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			func_894(bParam1, -718.7188f, -158.0137f, 35.9951f, 127.4268f);
			func_400(1);
			while (!func_398(1))
			{
				SYSTEM::WAIT(0);
			}
			func_376(1);
			func_280(PLAYER::PLAYER_PED_ID(), 12, 16, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_PED_INTO_VEHICLE(iLocal_395, iLocal_393, 1);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, 2);
			__LIB_0__::func_433(iLocal_393, -1, 1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_393, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_393, 4);
			SYSTEM::WAIT(0);
			break;
		case 3:
			func_400(3);
			while (!func_398(3))
			{
				SYSTEM::WAIT(0);
			}
			func_894(bParam1, 294.0738f, 178.6801f, 103.2472f, 349.5735f);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			__LIB_0__::func_433(0, -1, 1);
			while (!func_376(3))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_395 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), 299.6322f, 176.0707f, 103.133f, 344.7627f, true, true);
			__LIB_0__::func_222(&uLocal_206, 1, iLocal_395, "JIMMY", 0, 1);
			func_396();
			func_395(&iLocal_395, 1);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_395, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			iLocal_393 = func_394();
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_393, true, true, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_393, 3);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_393, false);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		case 4:
			if (iLocal_392 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_392);
			}
			func_400(4);
			while (!func_398(4))
			{
				SYSTEM::WAIT(0);
			}
			func_590();
			func_376(4);
			MISC::CLEAR_AREA(298.4175f, 192.0289f, 103.2638f, 100f, true, false, false, false);
			func_894(bParam1, 298.4175f, 192.0289f, 103.2638f, 164.7207f);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0f, true, true);
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_GAMEPLAY_RT");
			__LIB_0__::func_433(0, -1, 1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		case 5:
			func_894(bParam1, Local_397, 331.9485f);
			func_400(6);
			func_400(4);
			while (!func_398(4) || !func_398(6))
			{
				SYSTEM::WAIT(0);
			}
			func_376(6);
			func_376(4);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				bLocal_469 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_401);
			}
			while (!bLocal_469)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
				{
					bLocal_469 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_401);
				}
				SYSTEM::WAIT(0);
			}
			if (__LIB_0__::func_323() && __LIB_13__::func_821())
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_393);
				__LIB_14__::func_532();
				while (!__LIB_14__::func_531())
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_36(&iLocal_393, Local_397, 331.9485f, 1, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("stretch"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("stretch")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_393 = func_394();
				ENTITY::SET_ENTITY_COORDS(iLocal_393, Local_397, true, false, false, true);
			}
			iLocal_194 = iLocal_393;
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_ENTER_HOUSE_RT");
			__LIB_0__::func_433(iLocal_393, -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_395, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_393, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_393, -1);
				PED::SET_PED_INTO_VEHICLE(iLocal_395, iLocal_393, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_393, Local_397, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_393, 331.9485f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_393, 5f);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		case 6:
			func_894(bParam1, -814.9095f, 179.0777f, 71.153f, 308.084f);
			func_400(6);
			while (!func_398(6))
			{
				SYSTEM::WAIT(0);
			}
			func_376(6);
			func_815();
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_SAVE_A_RT");
			__LIB_0__::func_433(0, -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				bLocal_469 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_401);
			}
			while (!bLocal_469)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
				{
					bLocal_469 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_401);
				}
				SYSTEM::WAIT(0);
			}
			while (!__LIB_16__::func_7(&uLocal_206, "SOL5AUD", "SOL5_AMA", 9, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		case 7:
			func_894(bParam1, -814.9095f, 179.0777f, 71.153f, 308.084f);
			func_400(7);
			while (!func_398(7))
			{
				SYSTEM::WAIT(0);
			}
			func_376(7);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
			{
				bLocal_469 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_401);
			}
			while (!bLocal_469)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_401, false))
				{
					bLocal_469 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_401);
				}
				SYSTEM::WAIT(0);
			}
			func_815();
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_SAVE_T_RT");
			__LIB_0__::func_433(0, -1, 1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		case 8:
			func_894(bParam1, -802.8893f, 179.82f, 75.7408f, 308.084f);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			func_400(8);
			while (!func_398(8))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_433(0, -1, 1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			break;
		case 9:
			func_894(bParam1, -802.8381f, 179.84833f, 75.7407f, 308.084f);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			func_400(9);
			while (!func_398(9))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL5_FIGHT_BAD_RT");
			__LIB_0__::func_222(&uLocal_206, 2, 0, "AMANDA", 0, 1);
			__LIB_0__::func_222(&uLocal_206, 3, 0, "TRACEY", 0, 1);
			__LIB_0__::func_222(&uLocal_206, 4, 0, "MERRYWEATHER1", 0, 1);
			func_376(9);
			__LIB_0__::func_433(0, -1, 1);
			break;
		case 10:
			func_894(bParam1, -820.8237f, 176.6267f, 70.5997f, 291.0697f);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			__LIB_0__::func_433(0, -1, 1);
			iLocal_392 = INTERIOR::GET_INTERIOR_AT_COORDS(-824.2127f, 182.2403f, 70.7416f);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_392);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_392))
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 11:
			func_894(bParam1, -805.6776f, 182.4792f, 74.2146f, 291.0697f);
			__LIB_0__::func_433(0, -1, 1);
			func_400(11);
			while (!func_398(11))
			{
				SYSTEM::WAIT(0);
			}
			func_376(11);
			break;
		default:
			if (iLocal_392 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_392);
			}
			break;
	}
	__LIB_17__::func_782(0);
}

void func_815()//Position - 0x94A8A
{
	if (__LIB_16__::func_306(0) == joaat("WEAPON_UNARMED") || __LIB_16__::func_306(0) == 0)
	{
		if (iLocal_468 == joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), false);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_468, false);
		}
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_16__::func_306(0), false);
	}
}

void func_894(bool bParam0, struct<3> Param1, float fParam2)//Position - 0x9AACD
{
	if (bParam0)
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam2);
		__LIB_0__::func_427(Param1, fParam2, 1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam2);
		STREAMING::LOAD_SCENE(Param1);
	}
}

void func_900()//Position - 0x9AC70
{
	__LIB_17__::func_171(4, 0, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (iLocal_199 > (iLocal_202 - Global_100441.f_12[0]))
	{
		Global_100441.f_12[0] = 90000;
	}
	else
	{
		Global_100441.f_12[0] = iLocal_199;
	}
	__LIB_16__::func_839("MIC4_TUXTEXT" /* GXT: Dad, I'll be at Ponsonbys soon I've gt a ride. U better get a badass tux. */);
	__LIB_16__::func_839("SOL5_DEVTXT");
	AUDIO::TRIGGER_MUSIC_EVENT("SOL5_FAIL");
	CLOCK::PAUSE_CLOCK(false);
	CAM::STOP_GAMEPLAY_HINT(true);
	CUTSCENE::STOP_CUTSCENE(false);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Global_41748[4 /*31*/], false);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-378388578))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-378388578, 0);
	}
	__LIB_37__::func_948(0, 0, 2000, 1);
	__LIB_0__::func_366(0);
	STREAMING::REMOVE_IPL("redCarpet");
	CUTSCENE::STOP_CUTSCENE(true);
	if (iLocal_392 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_392);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(109.715904f, 172.56087f, 292.42453f) - Vector(8.5f, 50.25f, 61f), Vector(109.715904f, 172.56087f, 292.42453f) + Vector(8.5f, 50.25f, 61f), 1);
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(false);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(false);
	__LIB_16__::func_18(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	__LIB_0__::func_552(1);
	GRAPHICS::SET_NIGHTVISION(false);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	MISC::SET_TIME_SCALE(1f);
	AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), false);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
	}
}

void func_903()//Position - 0x9AEE8
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
				if (!func_304(iVar0))
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

void func_905(bool bParam0)//Position - 0x9AF99
{
	__LIB_15__::func_950(joaat("Player_Zero"), 12, 16, bParam0);
	__LIB_15__::func_950(joaat("Player_One"), 12, 11, bParam0);
	func_680(joaat("Player_Zero"), 12, 16, bParam0, 1);
}

