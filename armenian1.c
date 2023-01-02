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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	float fLocal_94[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_95[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_96[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_97[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_98[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_104[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_105[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_106[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_107[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_108[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_109[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	int iLocal_134[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_135[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_136[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_137[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_138[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_139[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_140[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
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
	struct<3> Local_158[117];
	struct<3> Local_159[15];
	struct<3> Local_160[38];
	struct<3> Local_161 = { 0, 0, 0 } ;
	struct<3> Local_162 = { 0, 0, 0 } ;
	struct<3> Local_163 = { 0, 0, 0 } ;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	struct<3> Local_170 = { 0, 0, 0 } ;
	struct<3> Local_171 = { 0, 0, 0 } ;
	struct<3> Local_172 = { 0, 0, 0 } ;
	struct<3> Local_173 = { 0, 0, 0 } ;
	char cLocal_174[64] = "";
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_185[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_186[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_191[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_193[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_194[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	var uLocal_198 = 15;
	var uLocal_199 = 0;
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
	bool bLocal_214 = 0;
	bool bLocal_215 = 0;
	bool bLocal_216 = 0;
	bool bLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	bool bLocal_229 = 0;
	bool bLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	bool bLocal_235 = 0;
	bool bLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	bool bLocal_241 = 0;
	bool bLocal_242 = 0;
	int iLocal_243 = 0;
	bool bLocal_244 = 0;
	bool bLocal_245 = 0;
	int iLocal_246 = 0;
	bool bLocal_247 = 0;
	int iLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	bool bLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	bool bLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	bool bLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_269 = 0f;
	float fLocal_270 = 0f;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	float fLocal_274 = 0f;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	float fLocal_278 = 0f;
	float fLocal_279 = 0f;
	float fLocal_280 = 0f;
	float fLocal_281 = 0f;
	float fLocal_282 = 0f;
	float fLocal_283 = 0f;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_311 = 0;
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
	var uLocal_353 = 10;
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
	struct<3> Local_364 = { 0, 0, 0 } ;
	struct<3> Local_365 = { 0, 0, 0 } ;
	struct<3> Local_366 = { 0, 0, 0 } ;
	struct<3> Local_367 = { 0, 0, 0 } ;
	struct<3> Local_368 = { 0, 0, 0 } ;
	struct<3> Local_369 = { 0, 0, 0 } ;
	struct<3> Local_370 = { 0, 0, 0 } ;
	struct<3> Local_371 = { 0, 0, 0 } ;
	struct<3> Local_372 = { 0, 0, 0 } ;
	struct<3> Local_373 = { 0, 0, 0 } ;
	struct<3> Local_374 = { 0, 0, 0 } ;
	struct<3> Local_375 = { 0, 0, 0 } ;
	struct<3> Local_376 = { 0, 0, 0 } ;
	struct<3> Local_377 = { 0, 0, 0 } ;
	struct<3> Local_378 = { 0, 0, 0 } ;
	struct<3> Local_379 = { 0, 0, 0 } ;
	struct<3> Local_380 = { 0, 0, 0 } ;
	char* sLocal_381 = NULL;
	char* sLocal_382 = NULL;
	char* sLocal_383 = NULL;
	char* sLocal_384 = NULL;
	char* sLocal_385 = NULL;
	char* sLocal_386 = NULL;
	char* sLocal_387 = NULL;
	char* sLocal_388 = NULL;
	char* sLocal_389 = NULL;
	char* sLocal_390 = NULL;
	char* sLocal_391 = NULL;
	char* sLocal_392 = NULL;
	char* sLocal_393 = NULL;
	char* sLocal_394 = NULL;
	char* sLocal_395 = NULL;
	char* sLocal_396 = NULL;
	char* sLocal_397 = NULL;
	char* sLocal_398 = NULL;
	int* iLocal_399 = NULL;
	int* iLocal_400 = NULL;
	int* iLocal_401 = NULL;
	int iLocal_402 = 0;
	int* iLocal_403 = NULL;
	int* iLocal_404 = NULL;
	int* iLocal_405 = NULL;
	int iLocal_406[4] = { 0, 0, 0, 0 };
	int iLocal_407[1] = { 0 };
	int iLocal_408[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_409 = NULL;
	int* iLocal_410 = NULL;
	int* iLocal_411 = NULL;
	int iLocal_412 = 0;
	int iLocal_413[2] = { 0, 0 };
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int* iLocal_416 = NULL;
	int iLocal_417[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_418[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_419[2] = { 0, 0 };
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	var uLocal_424 = 0;
	int* iLocal_425 = NULL;
	int iLocal_426[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429[2] = { 0, 0 };
	int* iLocal_430 = NULL;
	int* iLocal_431 = NULL;
	int* iLocal_432 = NULL;
	int iLocal_433[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_434[2] = { 0, 0 };
	int iLocal_435[2] = { 0, 0 };
	int iLocal_436 = 0;
	int iLocal_437[2] = { 0, 0 };
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
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
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	struct<5> Local_473 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_474 = { 0, 0, 0 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	struct<2> Local_477 = { 0, 0 } ;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	struct<5> Local_481[4];
	struct<5> Local_482[2];
	int* iLocal_483 = NULL;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	struct<7> Local_488[6];
	struct<3> Local_489 = { 0, 0, 0 } ;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	struct<5> Local_492[2];
	struct<7> Local_493[2];
	struct<2> Local_494 = { 0, 0 } ;
	struct<14> Local_495 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 3;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 4;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 4;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 4;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 4;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 4;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 4;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 4;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	char* sLocal_555 = NULL;
	struct<10> Local_556[16];
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_58 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_59 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_63 = true;
	bLocal_70 = true;
	bLocal_92 = true;
	fLocal_113 = 120f;
	fLocal_114 = 0f;
	fLocal_116 = 1f;
	fLocal_117 = 0f;
	fLocal_118 = 1f;
	fLocal_119 = 30f;
	fLocal_121 = 1f;
	fLocal_122 = 5f;
	fLocal_123 = 1f;
	fLocal_124 = 1f;
	fLocal_125 = 100f;
	fLocal_126 = 100f;
	fLocal_127 = 0f;
	fLocal_128 = 7000f;
	fLocal_129 = 0f;
	fLocal_130 = 0f;
	fLocal_131 = 0.3f;
	fLocal_132 = 0.5f;
	fLocal_133 = 50f;
	iLocal_144 = -1;
	iLocal_152 = -1;
	iLocal_153 = -1;
	bLocal_229 = true;
	bLocal_230 = true;
	bLocal_252 = true;
	fLocal_269 = 0f;
	fLocal_270 = 0f;
	fLocal_271 = 0f;
	fLocal_272 = 123.744f;
	fLocal_273 = -77.7f;
	fLocal_274 = -87.9f;
	fLocal_275 = 322.2873f;
	fLocal_276 = 316.722f;
	fLocal_277 = 251.8757f;
	fLocal_278 = 0.4923f;
	fLocal_279 = 0f;
	fLocal_280 = 17.3f;
	fLocal_281 = -160.9f;
	fLocal_282 = 153.3213f;
	fLocal_283 = 159.5713f;
	iLocal_300 = -1;
	iLocal_301 = -1;
	iLocal_318 = -1;
	iLocal_319 = -1;
	iLocal_320 = -1;
	iLocal_321 = -1;
	iLocal_322 = -1;
	iLocal_351 = -1;
	Local_364 = { -31.17f, -1090.7544f, 25.4344f };
	Local_365 = { 0f, 0f, 0f };
	Local_366 = { -25.4559f, -1426.9977f, 29.656f };
	Local_367 = { -56.8445f, -1107.2435f, 24.4344f };
	Local_368 = { -33.6656f, -1092.6023f, 30.4344f };
	Local_369 = { -16.1017f, -1079.5923f, 25.6721f };
	Local_370 = { -40.54f, -1096.27f, 25.43f };
	Local_371 = { -42f, -1095.5f, 25.43f };
	Local_372 = { -1899.2156f, -593.5246f, 10.8973f };
	Local_373 = { -1899.7908f, -594.6526f, 10.8853f };
	Local_374 = { -1883.5654f, -575.7982f, 10.7861f };
	Local_375 = { -24.9598f, -1437.647f, 29.6552f };
	Local_376 = { -42.95f, -1097.3f, 25.41f };
	Local_377 = { -43.98f, -1095.47f, 25.41f };
	Local_378 = { -29.9308f, -1089.8215f, 25.4221f };
	Local_379 = { -34.2931f, -1089.3936f, 25.4222f };
	Local_380 = { -1663.97f, -1126.7f, 30.7f };
	sLocal_381 = "mattarmenian";
	sLocal_382 = "armenian_1_int";
	sLocal_383 = "armenian_1_mcs_1";
	sLocal_384 = "arm_1_mcs_2_concat";
	sLocal_385 = "missarmenian1walktocar";
	sLocal_386 = "missarmenian1@dealership";
	sLocal_387 = "missarmenian1banter";
	sLocal_388 = "missarmenian1movieextras";
	sLocal_389 = "missarmenian1ig_13";
	sLocal_390 = "missarmenian1leadinout";
	sLocal_391 = "missarmenian1leadinoutarmenian_1_mcs_1_leadinout";
	sLocal_392 = "arm1_01";
	sLocal_393 = "arm1_05";
	sLocal_394 = "missarmenian1driving_taunts@lamar_1";
	sLocal_395 = "missarmenian1driving_taunts@lamar_2";
	sLocal_396 = "missarmenian1driving_taunts@franklin";
	sLocal_397 = "missarmenian1leadinoutarm_1_ig_14_leadinout";
	sLocal_398 = "MISSFINALE_C2IG_5";
	iLocal_450 = joaat("ninef2");
	iLocal_451 = joaat("rapidgt2");
	iLocal_452 = joaat("manana");
	iLocal_453 = joaat("p_sec_gate_01_s");
	iLocal_454 = joaat("p_sec_gate_01_s_col");
	iLocal_455 = joaat("S_M_M_Armoured_01");
	iLocal_456 = joaat("S_M_M_Security_01");
	iLocal_457 = joaat("A_M_Y_Beach_02");
	iLocal_458 = joaat("p_cs_shirt_01_s");
	iLocal_459 = joaat("v_ilev_fa_warddoorl");
	iLocal_460 = joaat("v_ilev_fa_warddoorr");
	iLocal_461 = joaat("prop_ld_health_pack");
	iLocal_462 = joaat("jetmax");
	iLocal_463 = joaat("marquis");
	iLocal_464 = joaat("A_M_Y_Beach_01");
	iLocal_465 = joaat("prop_phone_ing");
	iLocal_466 = joaat("prop_ld_ferris_wheel");
	iLocal_467 = joaat("prop_ferris_car_01");
	iLocal_468 = joaat("A_F_Y_Beach_01");
	iLocal_469 = joaat("A_M_Y_Beach_01");
	iLocal_470 = joaat("A_F_Y_Fitness_02");
	iLocal_471 = joaat("A_M_Y_BeachVesp_01");
	iLocal_472 = joaat("A_F_Y_Hipster_02");
	iLocal_554 = 1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		func_930();
		iLocal_553 = 1;
		Global_95466 = 3;
		func_922();
	}
	func_908();
	CLOCK::SET_CLOCK_TIME(8, 0, 0);
	CLOCK::SET_CLOCK_DATE(6, 5, 2009);
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			MISC::CLEAR_SCENARIO_SPAWN_HISTORY();
			func_905(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_905(4, 0);
		}
		else if (iVar0 == 2)
		{
			if (Global_94618)
			{
				func_905(5, 0);
			}
			else
			{
				func_905(6, 0);
			}
		}
		else if (iVar0 == 3)
		{
			if (Global_94618)
			{
				func_905(9, 0);
			}
			else
			{
				func_905(10, 0);
			}
		}
		else if (iVar0 > 3)
		{
			if (Global_94618)
			{
				func_905(11, 0);
			}
			else
			{
				func_905(11, 0);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		bLocal_256 = true;
	}
	else
	{
		func_863(0, "OPENING_CUTSCENE", 0, 0, 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FranklinAndLamar", 0);
		if (bLocal_256)
		{
			if (iLocal_553 == 1)
			{
				bLocal_256 = false;
			}
		}
		if (!__LIB_0__::func_425(138))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				__LIB_0__::func_681(138, 1);
			}
		}
		if (iLocal_552 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_493[0 /*7*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
					{
						func_848(4);
					}
					else
					{
						func_848(3);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_493[1 /*7*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false))
					{
						func_848(4);
					}
					else
					{
						func_848(3);
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_493[iLocal_285 /*7*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
			{
				func_848(2);
			}
		}
		if (iLocal_552 > 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_493[iLocal_285 /*7*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
				{
					if (__LIB_15__::func_929(&(Local_493[iLocal_285 /*7*/])))
					{
						func_848(7);
					}
				}
			}
		}
		if (iLocal_552 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_402))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
				{
					if (iLocal_552 > 9)
					{
						if (__LIB_15__::func_929(&iLocal_402))
						{
							func_848(8);
						}
					}
				}
				else
				{
					func_848(6);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_473.f_0))
		{
			if (PED::IS_PED_INJURED(Local_473.f_0))
			{
				func_848(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_474.f_0))
		{
			if (PED::IS_PED_INJURED(Local_474.f_0))
			{
				func_848(19);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_477.f_0))
		{
			if (PED::IS_PED_INJURED(Local_477.f_0))
			{
				func_848(20);
			}
		}
		if (iLocal_552 > 5)
		{
			func_846();
		}
		if (iLocal_552 >= 10)
		{
			func_825(&uLocal_507, 1, 1);
		}
		if (!iLocal_267)
		{
			if (iLocal_552 >= 6)
			{
				__LIB_0__::func_635(4, PLAYER::PLAYER_PED_ID());
				iLocal_267 = 1;
			}
		}
		switch (iLocal_552)
		{
			case 0:
				func_530();
				break;
			case 1:
				func_528();
				break;
			case 2:
				func_526();
				break;
			case 3:
			case 4:
				func_430();
				break;
			case 5:
				func_402();
				break;
			case 6:
				func_385();
				break;
			case 7:
				func_380();
				break;
			case 8:
				func_376();
				break;
			case 9:
				func_361();
				break;
			case 10:
				func_272();
				break;
			case 11:
				func_2();
				break;
			case 12:
				break;
			case 13:
				break;
			case 14:
				break;
			case 15:
				break;
			case 16:
				break;
			case 17:
				break;
			case 18:
				break;
			case 19:
				break;
		}
		func_1();
	}
}

void func_1()//Position - 0x7CE
{
	float fVar0;
	if (!Local_494.f_1)
	{
		if (iLocal_552 == 3)
		{
			if (bLocal_229)
			{
			}
			else if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_290, sLocal_381))
			{
				fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_290, sLocal_381);
				Local_494.f_0 = ((fLocal_269 / fVar0) * 99f);
				PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_494.f_0 / 100f), true, 0);
			}
		}
		else if (iLocal_552 == 6)
		{
			if (!bLocal_229)
			{
				if (!Local_494.f_1)
				{
					Local_494.f_0 = (Local_494.f_0 + (1f * SYSTEM::TIMESTEP()));
					if (Local_494.f_0 > 100f)
					{
						Local_494.f_0 = 100f;
					}
					PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_494.f_0 / 100f), true, 0);
				}
			}
		}
	}
}

void func_2()//Position - 0x88C
{
	bool bVar0;
	struct<3> Var1;
	if (iLocal_553 == 4)
	{
		if (iLocal_284 != 99)
		{
			if (bLocal_256)
			{
				__LIB_0__::func_427(-13.9541f, -1446.6562f, 30.5515f, 335.0142f, 0, 0);
				iLocal_284 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -13.9541f, -1446.6562f, 30.5515f, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(-13.9541f, -1446.6562f, 30.5515f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_284 = 99;
			}
		}
		else if (func_266(-17.8292f, -1458.0117f, 29.4598f, 0, 0) && func_190(Local_375, fLocal_278, 0))
		{
			__LIB_0__::func_433(0, -1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402, -1);
				if (!PED::IS_PED_INJURED(Local_473.f_0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_473.f_0, iLocal_402, 0);
				}
			}
			iLocal_553 = 0;
		}
	}
	if (iLocal_553 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_384, 8);
		STREAMING::REQUEST_MODEL(iLocal_458);
		STREAMING::REQUEST_MODEL(iLocal_459);
		STREAMING::REQUEST_MODEL(iLocal_460);
		STREAMING::REQUEST_MODEL(iLocal_461);
		func_100(sLocal_384);
		if (((((STREAMING::HAS_MODEL_LOADED(iLocal_458) && STREAMING::HAS_MODEL_LOADED(iLocal_459)) && STREAMING::HAS_MODEL_LOADED(iLocal_460)) && STREAMING::HAS_MODEL_LOADED(iLocal_461)) && SYSTEM::TIMERA() > 1000) && (!__LIB_0__::func_75() || __LIB_0__::func_568()))
		{
			bVar0 = false;
			if (MISC::IS_PC_VERSION())
			{
				bVar0 = __LIB_0__::func_90();
			}
			else
			{
				bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
			}
			if (bVar0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GO_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_1_GO_HOME");
				}
				iLocal_427 = OBJECT::CREATE_OBJECT(iLocal_458, -11.7f, -1439.255f, 30.099f, true, true, false);
				iLocal_428 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_461, -17.92f, -1436.34f, 30.2033f, true, true, false);
				ENTITY::SET_ENTITY_HEADING(iLocal_428, -158.75f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_428, true);
				iLocal_429[0] = OBJECT::CREATE_OBJECT(iLocal_459, -12.7f, -1439.255f, 20.099f, true, true, false);
				iLocal_429[1] = OBJECT::CREATE_OBJECT(iLocal_460, -10.7f, -1439.255f, 20.099f, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_458);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_461);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_459);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_460);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_427, "Franklins_shirt", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_429[0], "Closet_Door_L", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_429[1], "Closet_Door_R", 0, 0, 0);
				ENTITY::CREATE_MODEL_HIDE(-18.3539f, -1438.7838f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), false);
				ENTITY::CREATE_MODEL_HIDE(-18.3594f, -1438.1329f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), false);
				__LIB_17__::func_656(48, 0);
				__LIB_17__::func_656(47, 0);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, true, 0f, 0f, -1f);
				__LIB_0__::func_429();
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
				CUTSCENE::START_CUTSCENE(8);
				RECORDING::REPLAY_START_EVENT(4);
				if (!__LIB_0__::func_2(0))
				{
					Global_95466 = 1;
				}
				iLocal_284 = 0;
				iLocal_223 = 0;
				iLocal_553 = 1;
			}
		}
	}
	if (iLocal_553 == 1)
	{
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_223 = 1;
			iLocal_553 = 3;
		}
		if (iLocal_439 == 0)
		{
			iLocal_439 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.6461f, -1437.3323f, 31.116f, "v_franklins");
		}
		else if (!INTERIOR::IS_INTERIOR_READY(iLocal_439))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_439);
		}
		Var1 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_427))
		{
			STREAMING::REQUEST_MODEL(iLocal_458);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_458))
			{
				iLocal_427 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_458, -19.126f, -1438.7911f, 31.6833f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_427, -3.744568f, -0.022376f, 14.537273f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_427, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_427, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_458);
			}
		}
		switch (iLocal_284)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_402, -25.169f, -1427.966f, 29.6567f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_402, 0.9548f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_402, false, false, false);
						VEHICLE::SET_VEHICLE_FIXED(iLocal_402);
					}
					func_58(&Local_473, 1);
					MISC::CLEAR_AREA(-17.8292f, -1458.0117f, 29.4598f, 100f, true, false, false, false);
					__LIB_16__::func_11();
					iLocal_284++;
				}
				break;
			case 1:
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (CUTSCENE::GET_CUTSCENE_TIME() > 21500)
				{
					__LIB_0__::func_151("AR1_BARBERS", 7000);
					iLocal_284++;
				}
				break;
			case 2:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 26700)
				{
					if (__LIB_13__::func_806(0))
					{
						__LIB_17__::func_218(0, 0, 1, 0, 0);
					}
					__LIB_30__::func_373(19, 1);
					__LIB_30__::func_373(20, 1);
					__LIB_30__::func_373(21, 1);
					__LIB_30__::func_373(22, 1);
					__LIB_30__::func_373(23, 1);
					__LIB_30__::func_373(24, 1);
					__LIB_30__::func_373(25, 1);
					SYSTEM::SETTIMERA(0);
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 3:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((Var1.f_2 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				if (SYSTEM::TIMERA() > 3000)
				{
					__LIB_0__::func_151("AR1_SAVE1", -1);
					HUD::DISPLAY_RADAR(true);
					CUTSCENE::SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE();
					if (!HUD::DOES_BLIP_EXIST(iLocal_420))
					{
						iLocal_420 = __LIB_0__::func_488(-14.3803f, -1438.5143f, 30.1015f, 0);
						HUD::SET_BLIP_SPRITE(iLocal_420, 40);
						HUD::SET_BLIP_FLASHES(iLocal_420, true);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 4:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((Var1.f_2 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				CUTSCENE::SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE();
				if (SYSTEM::TIMERB() > 5000)
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-14.8691f, -1441.1586f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), false))
					{
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.1586f, 31.1932f, true, 0f, false);
					}
					HUD::DISPLAY_RADAR(false);
					SYSTEM::SETTIMERB(0);
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 5:
				if (!iLocal_255)
				{
					if (__LIB_0__::func_1("AR1_SAVE1"))
					{
						if (SYSTEM::TIMERA() > 8750)
						{
							HUD::CLEAR_HELP(false);
							iLocal_255 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 9500)
				{
					__LIB_0__::func_151("AR1_TVHELP", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 6:
				if (SYSTEM::TIMERB() > 5000)
				{
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 7:
				if (!iLocal_255)
				{
					if (__LIB_0__::func_1("AR1_TVHELP"))
					{
						if (SYSTEM::TIMERA() > 15000)
						{
							HUD::CLEAR_HELP(false);
							iLocal_255 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 16000)
				{
					__LIB_0__::func_151("AR1_MEDIHELP", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 8:
				if (SYSTEM::TIMERB() > 5000)
				{
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 9:
				if (!iLocal_255)
				{
					if (__LIB_0__::func_1("AR1_MEDIHELP"))
					{
						if (SYSTEM::TIMERA() > 22500)
						{
							HUD::CLEAR_HELP(false);
							iLocal_255 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 23500)
				{
					OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, false, 0f, 0f, 0f);
					__LIB_0__::func_151("AR1_SAVE2", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 10:
				if (SYSTEM::TIMERB() > 5000)
				{
					__LIB_0__::func_151("AR1_SAVE2B", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 11:
				if (SYSTEM::TIMERB() > 5000)
				{
					SYSTEM::SETTIMERB(0);
					iLocal_255 = 0;
					iLocal_284++;
				}
				break;
			case 12:
				if (!iLocal_255)
				{
					if (__LIB_0__::func_1("AR1_SAVE2B"))
					{
						if (SYSTEM::TIMERA() > 35000)
						{
							HUD::CLEAR_HELP(false);
							iLocal_255 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 36000)
				{
					__LIB_0__::func_151("AR1_SAVE3", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 13:
				if (SYSTEM::TIMERB() > 7000)
				{
					HUD::CLEAR_HELP(false);
					iLocal_284++;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_427))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_shirt", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_427, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[0]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Closet_Door_L", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_429[0], true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_429[1]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Closet_Door_R", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_429[1], true);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_427))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_427, true, false);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_553 = 2;
		}
	}
	if (iLocal_553 == 2)
	{
		func_58(&Local_473, 1);
		HUD::CLEAR_HELP(true);
		RECORDING::REPLAY_STOP_EVENT();
		if (iLocal_223 && CAM::IS_SCREEN_FADED_OUT())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_17__::func_712(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 1, 10000);
		}
		__LIB_31__::func_942();
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, false, 0f, 0f, 0f);
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-14.8691f, -1441.1586f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), false))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.1586f, 31.1932f, true, 0f, false);
		}
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		__LIB_16__::func_11();
		func_4(0);
	}
	if (iLocal_553 == 3)
	{
		__LIB_17__::func_737();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_223 = 1;
		iLocal_553 = 1;
	}
}

void func_4(bool bParam0)//Position - 0x1266
{
	if (bParam0)
	{
		if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		__LIB_16__::func_11();
	}
	func_15(5, 1);
	__LIB_0__::func_364(2, 1);
	PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(1), 0);
	__LIB_31__::func_942();
	__LIB_13__::func_782(6, 0, 1);
	__LIB_0__::func_526(0, 0);
	func_922();
}

void func_15(int iParam0, bool bParam1)//Position - 0x157C
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_95479[iParam0 /*10*/].f_8, bParam1, true);
	func_21(iParam0);
	__LIB_15__::func_220(iParam0, 0);
	__LIB_14__::func_624(iParam0);
	__LIB_28__::func_237(iParam0);
}

void func_21(int iParam0)//Position - 0x1AB5
{
	bool bVar0;
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95479[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113386.f_7229[iParam0], 0))
	{
		if (Global_95479[iParam0 /*10*/].f_9 != __LIB_15__::func_944())
		{
			bVar0 = true;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (__LIB_0__::func_426(6))
		{
			bVar0 = false;
		}
	}
	if (__LIB_0__::func_540(14))
	{
		bVar0 = false;
	}
	__LIB_14__::func_622(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_26(int iParam0)//Position - 0x1E53
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_26(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_58(int* iParam0, bool bParam1)//Position - 0x2DED
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, true, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, true, false);
			}
			if (PED::IS_PED_GROUP_MEMBER(*iParam0, __LIB_0__::func_495()))
			{
				PED::REMOVE_PED_FROM_GROUP(*iParam0);
			}
			if (!bParam1)
			{
				PED::SET_PED_KEEP_TASK(*iParam0, true);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_100(char* sParam0)//Position - 0x746A
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == joaat("armenian_1_int"))
		{
			__LIB_32__::func_12("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 11, 0, 0, 0);
		}
		else if (iVar0 == joaat("armenian_1_mcs_1"))
		{
			__LIB_32__::func_12("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_473.f_0, 0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Siemon", 3, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 3, 4, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 8, 3, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 10, 2, 0, 0);
		}
		else if (iVar0 == -2000131661)
		{
			__LIB_32__::func_12("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_473.f_0, 0);
			}
		}
	}
}

int func_190(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x2039F
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
	{
		__LIB_17__::func_709(1, 1);
		if (__LIB_17__::func_719(1, 1))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (__LIB_43__::func_905(&iLocal_402, 1, Param0, fParam1, 1, 1))
			{
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_402, 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_402, 1, false);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_402, false, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_402, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_402, true);
				AUDIO::SET_PLAYER_VEHICLE_ALARM_AUDIO_ACTIVE(iLocal_402, true);
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

int func_266(struct<3> Param0, float fParam1, int iParam2)//Position - 0x298CE
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_473.f_0) || iParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_473.f_0))
		{
			if (__LIB_0__::func_648(&Local_473, 19, Param0, fParam1, 1))
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_473.f_0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_473.f_0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_473.f_0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_473.f_0, 5, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_473.f_0, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_473.f_0, 8, 0, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_473.f_0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_473.f_0, joaat("PLAYER"));
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 182, true);
			__LIB_0__::func_222(&Local_556, 5, Local_473.f_0, "LAMAR", 0, 1);
			return 1;
		}
	}
	else
	{
		if (Local_556[5 /*10*/] != Local_473.f_0)
		{
			__LIB_0__::func_222(&Local_556, 5, Local_473.f_0, "LAMAR", 0, 1);
		}
		return 1;
	}
	return 0;
}

void func_272()//Position - 0x29BDB
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	int iVar6[1];
	float fVar7;
	int iVar8;
	struct<2> Var9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	if (iLocal_553 == 4)
	{
		if (iLocal_438 == 0)
		{
			iLocal_438 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_370, true, false, false, true);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_438);
		if (bLocal_256)
		{
			__LIB_0__::func_427(Local_370, fLocal_273, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_370, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_273);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			STREAMING::LOAD_SCENE(Local_370);
			SYSTEM::WAIT(0);
		}
		func_360();
		while ((((((((((!INTERIOR::IS_INTERIOR_READY(iLocal_438) || !func_359(0)) || !func_358(0)) || !ENTITY::DOES_ENTITY_EXIST(Local_473.f_0)) || !ENTITY::DOES_ENTITY_EXIST(Local_493[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_493[1 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_402)) || !ENTITY::DOES_ENTITY_EXIST(Local_477.f_0)) || !ENTITY::DOES_ENTITY_EXIST(Local_474.f_0)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(__LIB_13__::func_741(1, 1))) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_391))
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(__LIB_13__::func_741(1, 1), 3);
			STREAMING::REQUEST_ANIM_DICT(sLocal_391);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_438);
			func_266(Local_371, fLocal_274, 0);
			func_357(34.0424f, -638.7692f, 30.6252f, 0);
			func_356(44.0424f, -638.7692f, 30.6252f, 0);
			func_190(Local_369, fLocal_272, 0);
			func_355(Local_376, fLocal_280, 0);
			func_352(Local_377, fLocal_281, 0);
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		func_351();
		func_350();
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_370, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_273);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], -30.5774f, -1090.5625f, 25.4222f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 159.6013f);
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_285 /*7*/], true);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_493[iLocal_285 /*7*/], false);
		}
		iLocal_321 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, __LIB_12__::func_418(-67.2459f), false, 7);
		iLocal_322 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, 72.3459f, false, 7);
		func_348();
		iLocal_284 = 99;
		iLocal_237 = 1;
		iLocal_553 = 0;
	}
	if (iLocal_553 == 0)
	{
		if (iLocal_438 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_438))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_438);
				iLocal_438 = 0;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[0 /*7*/], false, false, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_493[0 /*7*/], false);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[1 /*7*/], false, false, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_493[1 /*7*/], false);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_402);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -38.077f, -1096.4669f, 25.4223f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 296.617f);
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_473.f_0, Local_371, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_473.f_0, fLocal_274);
			}
			while (!func_359(0))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_284 != 99)
			{
				__LIB_17__::func_712(Local_370, 100f, 1, 5000);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false) && !PED::IS_PED_INJURED(Local_473.f_0))
			{
				TASK::TASK_ENTER_VEHICLE(Local_473.f_0, iLocal_402, 40000, 0, 1f, 1, 0);
			}
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 296.617f, false, false);
			SYSTEM::WAIT(500);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		func_347(1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GO_HOME"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_GO_HOME");
		}
		if (!PED::IS_PED_INJURED(Local_477.f_0) && !PED::IS_PED_INJURED(Local_474.f_0))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_391))
			{
				iLocal_340 = PED::CREATE_SYNCHRONIZED_SCENE(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_474.f_0, iLocal_340, sLocal_391, "_leadout_simeon", 1000f, -1.5f, 5, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_477.f_0, iLocal_340, sLocal_391, "_leadout_jimmy", 1000f, -1.5f, 5, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_340, 0f);
			}
			TASK::TASK_LOOK_AT_ENTITY(Local_474.f_0, Local_477.f_0, -1, 2048, 2);
		}
		__LIB_16__::func_11();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[0 /*7*/], false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[0 /*7*/], false);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_493[0 /*7*/], true);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_493[0 /*7*/]);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[1 /*7*/], false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[1 /*7*/], false);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_493[1 /*7*/], true);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_493[1 /*7*/]);
		}
		__LIB_37__::func_206(&(iLocal_407[0]), 0);
		func_345();
		__LIB_17__::func_656(48, 1);
		__LIB_17__::func_656(47, 1);
		func_863(3, "GO_TO_HOUSE", 1, 0, 0, 1);
		SYSTEM::SETTIMERA(0);
		Local_474.f_2 = 0;
		iLocal_332 = 0;
		iLocal_343 = 0;
		iLocal_284 = 0;
		iLocal_243 = 0;
		iLocal_553 = 1;
	}
	if (iLocal_553 == 1)
	{
		__LIB_17__::func_656(49, 3);
		if (SYSTEM::TIMERA() < 3000)
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			if (!iLocal_243)
			{
				MISC::SET_BIT(&(Local_495.f_13), 10);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_473.f_0, 1f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_402, false) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402))
				{
					MISC::CLEAR_BIT(&(Local_495.f_13), 10);
					if (!PED::IS_PED_IN_VEHICLE(Local_473.f_0, iLocal_402, false))
					{
						TASK::TASK_ENTER_VEHICLE(Local_473.f_0, iLocal_402, 20000, 0, 2f, 1, 0);
					}
					iLocal_243 = 1;
				}
			}
		}
		switch (iLocal_284)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(iLocal_420))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
					{
						iLocal_420 = __LIB_0__::func_639(iLocal_402, 0, 0);
					}
				}
				if (!iLocal_268[62])
				{
					if (!__LIB_13__::func_755(&Local_495, 1))
					{
						__LIB_0__::func_222(&Local_556, 6, Local_477.f_0, "JIMMY", 0, 1);
						__LIB_0__::func_222(&Local_556, 4, Local_474.f_0, "SIMEON", 0, 1);
						if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_GETINJ", 7, 0, 0, 0))
						{
							iLocal_268[62] = 1;
						}
					}
				}
				else if (__LIB_17__::func_731(&Local_556, "ARM1AUD", "ARM1_LEAVEG", "ARM1_LEAVEG_1", 7, 0, 0))
				{
					iLocal_268[53] = 1;
					iLocal_284++;
				}
				break;
			case 1:
				if (HUD::DOES_BLIP_EXIST(iLocal_420))
				{
					HUD::REMOVE_BLIP(&iLocal_420);
				}
				if (__LIB_32__::func_10(&Local_495, Local_366, 0.001f, 0.001f, 2f, 1, Local_473.f_0, iLocal_402, "AR1_HOME", "AR1_WAIT", "CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, "CMN_GENGETBCKY" /* GXT: ~s~Get back in your ~b~car. */, 0, 1, 1, -1))
				{
					iLocal_284++;
				}
				else if (HUD::DOES_BLIP_EXIST(Local_495.f_5))
				{
					if (!iLocal_268[54])
					{
						if (iLocal_332 == 0)
						{
							iLocal_332 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_332) > 7000)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (__LIB_0__::func_501("AR1_HOME", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								__LIB_0__::func_151("AR1_VIEWSTATS", 15000);
								iLocal_268[54] = 1;
								iLocal_332 = 0;
							}
						}
					}
					else if (!iLocal_268[55])
					{
						if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
						{
							iLocal_332 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_332) > 250 && __LIB_0__::func_104(1))
						{
							__LIB_0__::func_151("AR1_VIEWSTATS2", 15000);
							iLocal_268[55] = 1;
						}
					}
					if (iLocal_237)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(__LIB_13__::func_741(1, 1));
						iLocal_237 = 0;
					}
					fVar1 = 12f;
					fVar2 = ENTITY::GET_ENTITY_SPEED(iLocal_402);
					if (fVar2 < 3f)
					{
						fVar2 = 3f;
					}
					else if (fVar2 > fVar1)
					{
						fVar2 = fVar1;
					}
					fVar0 = (2f + (((fVar2 - 3f) / (fVar1 - 3f)) * 8.5f));
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -27.677097f, -1427.2794f, 29.669218f, -23.049107f, -1427.2998f, 32.1599f, fVar0, false, true, 0) && __LIB_0__::func_494(1, 1, 1))
					{
						__LIB_16__::func_318(&Local_495, 1, 0);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						fLocal_279 = fVar2;
						iLocal_284++;
					}
					else if (SYSTEM::TIMERA() > 1000 && __LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), Local_473.f_0))
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
						}
						if (!iLocal_268[56])
						{
							if (!__LIB_13__::func_755(&Local_495, 1))
							{
								if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_DRIV2A", 7, 0, 0, 0))
								{
									iLocal_268[56] = 1;
								}
							}
						}
						else if (!iLocal_268[58])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -16.964743f, -1462.9467f, 29.157858f, -17.41634f, -1431.4801f, 36.68279f, 22.25f, false, true, 0))
							{
								if (!__LIB_13__::func_755(&Local_495, 1))
								{
									if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
									{
										iLocal_268[58] = 1;
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
				else if (iLocal_268[56] || iLocal_268[58])
				{
					if (!__LIB_0__::func_568())
					{
						__LIB_0__::func_620(1);
					}
				}
				break;
			case 2:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
					if (fLocal_279 > 3f && fLocal_279 < 12f)
					{
						fVar5 = 2f;
					}
					else
					{
						fVar5 = 3.5f;
					}
					if (__LIB_0__::func_213(iVar3, fVar5, 1, 1056964608, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				if (__LIB_0__::func_568())
				{
					__LIB_0__::func_620(0);
				}
				if (!iLocal_268[58])
				{
					if (__LIB_13__::func_755(&Local_495, 0))
					{
						__LIB_0__::func_638();
					}
					else if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
					{
						iLocal_268[58] = 1;
					}
				}
				else if (bVar4)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
					iLocal_553 = 2;
				}
				break;
		}
		if (MISC::IS_PC_VERSION())
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_366) < (20f * 20f))
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_384, 8);
				func_100(sLocal_384);
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_366) > (30f * 30f))
			{
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_366) < (100f * 100f))
		{
			CUTSCENE::REQUEST_CUTSCENE(sLocal_384, 8);
			func_100(sLocal_384);
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_366) > (120f * 120f))
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_495.f_5))
		{
			if (!iLocal_268[59])
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -24.229092f, -1451.2008f, 29.760489f, -23.50623f, -1430.8665f, 32.15756f, 7f, false, true, 0))
				{
					__LIB_0__::func_151("AR1_GARHELP1", 15000);
					iLocal_268[59] = 1;
				}
			}
		}
		if (!iLocal_268[60])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_402, true)) < 225f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_402))
				{
					__LIB_0__::func_151("AR1_UNIQUE", 15000);
					iLocal_268[60] = 1;
				}
			}
		}
		else if (!iLocal_268[61])
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_0__::func_151("AR1_APPHELP", 15000);
				iLocal_268[61] = 1;
			}
		}
		if (!PED::IS_PED_INJURED(Local_474.f_0) && !PED::IS_PED_INJURED(Local_477.f_0))
		{
			switch (Local_474.f_2)
			{
				case 0:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_340) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_340) > 0f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_340))
					{
						PED::GET_PED_NEARBY_VEHICLES(Local_474.f_0, &iVar6);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6[0], false))
						{
							TASK::TASK_ENTER_VEHICLE(Local_477.f_0, iVar6[0], 20000, -1, 1f, 1, 0);
							TASK::TASK_ENTER_VEHICLE(Local_474.f_0, iVar6[0], 20000, 0, 1f, 1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_477.f_0, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_474.f_0, true);
							iLocal_345 = 0;
							iLocal_346 = 0;
							Local_474.f_2++;
						}
					}
					break;
				case 1:
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_477.f_0))
					{
						iVar6[0] = PED::GET_VEHICLE_PED_IS_IN(Local_477.f_0, false);
						if (!ENTITY::IS_ENTITY_DEAD(iVar6[0], false))
						{
							fVar7 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar6[0], true));
							if (fVar7 < 225f)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_344) > 0)
								{
									iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
									if (iVar8 != 0)
									{
										if (!__LIB_13__::func_755(&Local_495, 1))
										{
											if (!iLocal_268[76])
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_RADIO1", 7, 0, 0, 0))
												{
													VEHICLE::SET_VEHICLE_ENGINE_ON(iVar6[0], true, true, false);
													AUDIO::SET_VEHICLE_RADIO_LOUD(iVar6[0], true);
													AUDIO::SET_VEH_RADIO_STATION(iVar6[0], "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
													iLocal_268[76] = 1;
													iLocal_344 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 13000));
												}
											}
											else if (iLocal_345 < 5)
											{
												if (iLocal_345 == 0)
												{
													StringCopy(&Var9, "ARM1_GETINJ2", 16);
												}
												else if (iLocal_345 == 1)
												{
													StringCopy(&Var9, "ARM1_GETINJ3", 16);
												}
												else if (iLocal_345 == 2)
												{
													StringCopy(&Var9, "ARM1_GETINJ4", 16);
												}
												else if (iLocal_345 == 3)
												{
													StringCopy(&Var9, "ARM1_GETINJ5", 16);
												}
												else if (iLocal_345 == 4)
												{
													StringCopy(&Var9, "ARM1_GETINJ6", 16);
												}
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", &Var9, 7, 0, 0, 0))
												{
													iLocal_345++;
													iLocal_344 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 13000));
												}
											}
											else if (!iLocal_268[77])
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_FNKLEV1", 7, 0, 0, 0))
												{
													TASK::TASK_LOOK_AT_ENTITY(Local_474.f_0, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
													iLocal_268[77] = 1;
												}
											}
										}
									}
								}
							}
							MemCopy(&uVar10, {__LIB_0__::func_486()}, 4);
							if (MISC::ARE_STRINGS_EQUAL(&uVar10, "ARM1_GETINJ"))
							{
								if (fVar7 > 400f)
								{
									__LIB_0__::func_638();
								}
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_343) > 0)
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6[0], PLAYER::PLAYER_PED_ID(), true))
								{
									func_848(18);
									iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
									iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
									if (iVar11 == 0)
									{
										if (iVar12 == 0)
										{
											__LIB_0__::func_640(Local_477.f_0, "GENERIC_INSULT_MED", 3);
										}
										else
										{
											__LIB_0__::func_640(Local_477.f_0, "GENERIC_CURSE_MED", 3);
										}
										iLocal_343 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
									else if (iLocal_346 < 3)
									{
										if (!__LIB_13__::func_755(&Local_495, 1))
										{
											if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_FNKLEV2", 7, 0, 0, 0))
											{
												iLocal_343 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
												iLocal_346++;
											}
										}
									}
									else
									{
										if (iVar12 == 0)
										{
											__LIB_0__::func_640(Local_477.f_0, "GENERIC_INSULT_HIGH", 3);
										}
										else
										{
											__LIB_0__::func_640(Local_477.f_0, "GENERIC_CURSE_HIGH", 3);
										}
										iLocal_343 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
								}
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar6[0]);
							iVar13 = 0;
							while (iVar13 < iLocal_406)
							{
								if (iLocal_406[iVar13] != iVar6[0])
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_406[iVar13], PLAYER::PLAYER_PED_ID(), true))
									{
										func_848(18);
									}
								}
								iVar13++;
							}
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6[0], false))
							{
								func_848(14);
							}
						}
					}
					break;
				}
		}
		fVar14 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -20.2493f, -1082.7458f, 25.6579f);
		if (iLocal_438 != 0)
		{
			if (fVar14 > 1600f)
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_438))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_438);
					iLocal_438 = 0;
				}
			}
		}
		if (fVar14 > 10000f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_477.f_0))
			{
				func_58(&Local_477, 1);
				func_58(&Local_474, 1);
				STREAMING::REMOVE_ANIM_DICT(sLocal_391);
				__LIB_0__::func_377(0, -1);
				__LIB_37__::func_206(&(Local_493[0 /*7*/]), 0);
				__LIB_37__::func_206(&(Local_493[1 /*7*/]), 0);
				if (iLocal_225)
				{
					__LIB_37__::func_206(&(iLocal_406[0]), 0);
					__LIB_37__::func_206(&(iLocal_406[1]), 0);
					__LIB_37__::func_206(&(iLocal_406[2]), 0);
					__LIB_37__::func_206(&(iLocal_406[3]), 0);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_367, Local_368, true, true);
					iLocal_225 = 0;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_493[0 /*7*/]))
		{
			if (fVar14 > 22500f)
			{
				__LIB_37__::func_206(&(Local_493[0 /*7*/]), 0);
				__LIB_37__::func_206(&(Local_493[1 /*7*/]), 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_473.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 90000f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402, false))
			{
				func_848(9);
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_402, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 90000f)
			{
				func_848(13);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
		{
			if ((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[0 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[0 /*7*/], joaat("WEAPON_UNARMED"), 0)) || (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[1 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[1 /*7*/], joaat("WEAPON_UNARMED"), 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_493[0 /*7*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_493[1 /*7*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_493[0 /*7*/], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_493[1 /*7*/], PLAYER::PLAYER_PED_ID(), true))
				{
					func_848(12);
				}
			}
		}
	}
	if (iLocal_553 == 2)
	{
		func_274();
		__LIB_37__::func_206(&(Local_493[iLocal_285 /*7*/]), 1);
		__LIB_37__::func_206(&(Local_493[iLocal_286 /*7*/]), 1);
		func_58(&Local_477, 1);
		func_58(&Local_474, 1);
		STREAMING::REMOVE_ANIM_DICT(sLocal_391);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (iLocal_321 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_321);
			iLocal_321 = -1;
		}
		if (iLocal_322 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_322);
			iLocal_322 = -1;
		}
		iVar15 = 0;
		iVar15 = 0;
		while (iVar15 < iLocal_426)
		{
			__LIB_16__::func_13(&(iLocal_426[iVar15]), 0);
			iVar15++;
		}
		SYSTEM::SETTIMERA(0);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 11;
	}
	if (iLocal_553 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
		{
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_473.f_0, iLocal_402, false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_473.f_0, iLocal_402, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_402, -1);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_402, Local_366, true, false, false, true);
		}
		STREAMING::LOAD_SCENE(Local_366);
		iLocal_553 = 1;
	}
}

void func_274()//Position - 0x2AED3
{
	if (HUD::DOES_BLIP_EXIST(iLocal_420))
	{
		HUD::REMOVE_BLIP(&iLocal_420);
	}
	if (HUD::DOES_BLIP_EXIST(Local_473.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_473.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_477.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_477.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_474.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_474.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_421))
	{
		HUD::REMOVE_BLIP(&iLocal_421);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_422))
	{
		HUD::REMOVE_BLIP(&iLocal_422);
	}
	HUD::REMOVE_BLIP(&(Local_493[0 /*7*/].f_1));
	HUD::REMOVE_BLIP(&(Local_493[1 /*7*/].f_1));
}

void func_345()//Position - 0x2E49B
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_268;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_268[iVar1] = 0;
		iVar1++;
	}
}

void func_347(bool bParam0)//Position - 0x2E519
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-44.9779f, -1093.9878f, 19.4526f, -30.0332f, -1074.433f, 39.4526f, !bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-20.801f, -1084.0568f, 20.8603f, -3.4886f, -1050.9978f, 31.8603f, !bParam0, true);
	if (bParam0)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(-37f, -1087f, 26f, 5f, false, false, false, false, false, false, 0);
	}
}

void func_348()//Position - 0x2E58D
{
	if (iLocal_446 == 0)
	{
		iLocal_446 = PED::ADD_SCENARIO_BLOCKING_AREA(-49.41105f, -1078.8323f, 20.473274f, -44.08052f, -1071.9357f, 39.473274f, false, true, true, true);
	}
	if (iLocal_447 == 0)
	{
		iLocal_447 = PED::ADD_SCENARIO_BLOCKING_AREA(-54.5514f, -1111.4725f, 22.2924f, -39.9018f, -1104.0132f, 39.7759f, false, true, true, true);
	}
}

void func_350()//Position - 0x2E605
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
	{
		VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[0 /*7*/], true);
		VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[1 /*7*/], true);
	}
}

void func_351()//Position - 0x2E641
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
	{
		ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_286 /*7*/], fLocal_283);
		ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_286 /*7*/], Local_379, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_286 /*7*/], true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_493[iLocal_286 /*7*/], false);
	}
}

int func_352(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x2E697
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_474.f_0))
	{
		__LIB_17__::func_721(18);
		if (__LIB_17__::func_720(18))
		{
			if (!bParam2)
			{
				if (__LIB_0__::func_648(&Local_474, 18, Param0, fParam1, 1))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_474.f_0, 3, 1, 0, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_474.f_0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_474.f_0, joaat("PLAYER"));
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_355(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x2E74D
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_477.f_0))
	{
		__LIB_17__::func_721(14);
		if (__LIB_17__::func_720(14))
		{
			if (!bParam2)
			{
				if (__LIB_0__::func_648(&Local_477, 14, Param0, fParam1, 1))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_477.f_0, 3, 4, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_477.f_0, 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_477.f_0, 2, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_477.f_0, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_477.f_0, 6, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_477.f_0, 8, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_477.f_0, 10, 2, 0, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_477.f_0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_477.f_0, joaat("PLAYER"));
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_356(struct<3> Param0, float fParam1)//Position - 0x2E7F7
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_493[1 /*7*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_451);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_451))
		{
			Local_493[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_451, Param0, fParam1, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[1 /*7*/], 5f);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_493[1 /*7*/], 0f);
			VEHICLE::SET_VEHICLE_COLOURS(Local_493[1 /*7*/], 28, 28);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_493[1 /*7*/], 23, 0);
			VEHICLE::SET_VEHICLE_STRONG(Local_493[1 /*7*/], true);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_493[1 /*7*/], true);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_493[1 /*7*/], false);
			ENTITY::SET_ENTITY_HEALTH(Local_493[1 /*7*/], 2000, 0);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_493[1 /*7*/], false, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_493[1 /*7*/], "2603AM56");
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_493[1 /*7*/], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_493[1 /*7*/], false);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_493[1 /*7*/], false);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_493[1 /*7*/], false);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_493[1 /*7*/], true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_451);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_357(struct<3> Param0, float fParam1)//Position - 0x2E8FD
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_493[0 /*7*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_450);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_450))
		{
			Local_493[0 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_450, Param0, fParam1, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[0 /*7*/], 5f);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_493[0 /*7*/], 0f);
			VEHICLE::SET_VEHICLE_COLOURS(Local_493[0 /*7*/], 111, 111);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_493[0 /*7*/], 111, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_493[0 /*7*/], 2000, 0);
			VEHICLE::SET_VEHICLE_STRONG(Local_493[0 /*7*/], true);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_493[0 /*7*/], true);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_493[0 /*7*/], false);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_493[0 /*7*/], false, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_493[0 /*7*/], "5912FL34");
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_493[0 /*7*/], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_493[0 /*7*/], false);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_493[0 /*7*/], false);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_493[0 /*7*/], false);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_493[0 /*7*/], true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_450);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_358(bool bParam0)//Position - 0x2EA03
{
	struct<3> Var0;
	int iVar1;
	if (!iLocal_225)
	{
		Var0 = { Local_367 + Vector((Local_368.f_2 - Local_368.f_2), (Local_368.f_1 - Local_368.f_1), (Local_368.f_0 - Local_367.f_0)) };
		MISC::CLEAR_AREA_OF_VEHICLES(Var0, 30f, false, false, false, false, false, false, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_367, Local_368, false, true);
		iLocal_225 = 1;
	}
	STREAMING::REQUEST_MODEL(joaat("bjxl"));
	STREAMING::REQUEST_MODEL(joaat("ninef"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) && STREAMING::HAS_MODEL_LOADED(joaat("ninef")))
	{
		if (!bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_406[0]))
			{
				iLocal_406[0] = VEHICLE::CREATE_VEHICLE(joaat("ninef"), -49.9f, -1094.7f, 26.1366f, 96.8607f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_406[0], 31, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_406[0], 42, 0);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_406[0], true);
				iLocal_406[1] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -46.5f, -1097.5f, 26.35f, 108.8107f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_406[1], 126, 126);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_406[1], 126, 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_406[1], "57EIG117");
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_406[1], true);
				iLocal_406[2] = VEHICLE::CREATE_VEHICLE(joaat("ninef"), -41.7f, -1099.5f, 26.0304f, 137.6117f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_406[2], 1, 1);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_406[2], 15, 0);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_406[2], true);
				iLocal_406[3] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -36.8f, -1101.2f, 26.0912f, 151.7322f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_406[3], 1, 111);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_406[3], 4, 0);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_406[3], true);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ninef"));
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_406)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_406[iVar1], false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_406[iVar1], false);
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

int func_359(bool bParam0)//Position - 0x2EC22
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_407[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("blista"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("blista")))
		{
			if (!bParam0)
			{
				MISC::CLEAR_AREA(-11.6041f, -1080.8674f, 25.6721f, 20f, true, false, false, false);
				iLocal_407[0] = VEHICLE::CREATE_VEHICLE(joaat("blista"), -8.6907f, -1082.0977f, 25.6721f, 128.8319f, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_360()//Position - 0x2ECAA
{
	if (iLocal_285 == iLocal_286)
	{
		iLocal_285 = Global_96875;
		if (iLocal_285 == 0)
		{
			iLocal_286 = 1;
		}
		else
		{
			iLocal_286 = 0;
		}
	}
}

void func_361()//Position - 0x2ECD4
{
	if (iLocal_553 == 4)
	{
		if (iLocal_284 != 99)
		{
			if (iLocal_438 == 0)
			{
				iLocal_438 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_376, true, false, false, true);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_438);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_438))
			{
				if (bLocal_256)
				{
					__LIB_0__::func_427(Local_376, 335.0142f, 0, 0);
					iLocal_284 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_376, true, false, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					STREAMING::LOAD_SCENE(Local_376);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iLocal_284 = 99;
				}
			}
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_391);
			func_360();
			if ((((((((func_266(Local_371, fLocal_274, 0) && func_357(34.0424f, -638.7692f, 30.6252f, 0)) && func_356(44.0424f, -638.7692f, 30.6252f, 0)) && func_190(Local_369, fLocal_272, 0)) && func_355(Local_376, fLocal_280, 0)) && func_352(Local_377, fLocal_281, 0)) && func_359(0)) && func_358(0)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_391))
			{
				__LIB_0__::func_433(0, -1, 0);
				func_351();
				func_350();
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_370, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_273);
				func_348();
				iLocal_237 = 1;
				iLocal_553 = 0;
			}
		}
	}
	if (iLocal_553 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_383, 8);
		func_100(sLocal_383);
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[0 /*7*/], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[0 /*7*/], true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[1 /*7*/], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[1 /*7*/], true);
		}
		if (__LIB_0__::func_90() && (!__LIB_13__::func_755(&Local_495, 1) || SYSTEM::TIMERA() > 5000))
		{
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_473.f_0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_473.f_0, "Lamar", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_477.f_0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_477.f_0, "Jimmy", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_474.f_0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_474.f_0, "Siemon", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_406[0], false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_406[0], "ninef^1", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_406[1], false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_406[1], "Jimmys_Car", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_406[2], false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_406[2], "Franklin_stealcar", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_406[3], false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_406[3], "bjxl^1", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			iLocal_321 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, __LIB_12__::func_418(-67.2459f), false, 7);
			iLocal_322 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, __LIB_12__::func_418(72.3459f), false, 7);
			__LIB_0__::func_429();
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			RECORDING::REPLAY_START_EVENT(4);
			SYSTEM::SETTIMERB(0);
			SYSTEM::SETTIMERA(0);
			iLocal_284 = 0;
			iLocal_553 = 1;
		}
	}
	if (iLocal_553 == 1)
	{
		switch (iLocal_284)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_493[iLocal_285 /*7*/], true, false);
						ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], Local_378, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], fLocal_282);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[iLocal_285 /*7*/], 5f);
						ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_285 /*7*/], true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_493[iLocal_285 /*7*/], 3);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_285 /*7*/], false, false, false);
					}
					CAM::STOP_GAMEPLAY_HINT(true);
					STREAMING::REMOVE_ANIM_DICT(sLocal_397);
					STREAMING::REMOVE_ANIM_DICT(sLocal_391);
					__LIB_16__::func_11();
					iLocal_284++;
				}
				break;
		}
		func_190(Local_369, fLocal_272, 0);
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_223 = 1;
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_553 = 2;
		}
		else
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, fLocal_273, false, false);
			}
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", ENTITY::GET_ENTITY_MODEL(Local_473.f_0)))
				{
					ENTITY::SET_ENTITY_COORDS(Local_473.f_0, Local_371, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_473.f_0, fLocal_274);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
					{
						TASK::TASK_ENTER_VEHICLE(Local_473.f_0, iLocal_402, 40000, 0, 1f, 1, 0);
						PED::FORCE_PED_MOTION_STATE(Local_473.f_0, joaat("MotionState_Walk"), false, 1, false);
					}
				}
			}
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_391);
	}
	if (iLocal_553 == 2)
	{
		RECORDING::REPLAY_STOP_EVENT();
		func_274();
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		SYSTEM::SETTIMERA(0);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 10;
		__LIB_16__::func_874(1, 0);
	}
	if (iLocal_553 == 3)
	{
		__LIB_17__::func_737();
		RECORDING::REPLAY_STOP_EVENT();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE() || !func_190(Local_369, fLocal_272, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_402, Local_369, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_402, fLocal_272);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_493[iLocal_285 /*7*/], true, false);
			ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], fLocal_282);
			ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], Local_378, true, false, false, true);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[iLocal_285 /*7*/], 5f);
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_285 /*7*/], true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_493[iLocal_285 /*7*/], 3);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_285 /*7*/], false, false, false);
		}
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_473.f_0, Local_371, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_473.f_0, fLocal_274);
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_370, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_273);
		iLocal_553 = 2;
	}
}

void func_376()//Position - 0x2F649
{
	int iVar0;
	if (iLocal_553 == 4)
	{
		if (iLocal_284 != 99)
		{
			if (iLocal_438 == 0)
			{
				iLocal_438 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_370, true, false, false, true);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_438);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_438))
			{
				if (bLocal_256)
				{
					__LIB_0__::func_427(Local_370, 335.0142f, 0, 0);
					iLocal_284 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_370, true, false, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					STREAMING::LOAD_SCENE(Local_370);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iLocal_284 = 99;
				}
			}
		}
		else
		{
			func_360();
			if (((((func_266(Local_371, fLocal_274, 0) && func_357(34.0424f, -638.7692f, 30.6252f, 0)) && func_356(44.0424f, -638.7692f, 30.6252f, 0)) && func_190(Local_369, fLocal_272, 0)) && func_359(0)) && func_358(0))
			{
				__LIB_0__::func_433(0, -1, 0);
				func_351();
				func_350();
				func_348();
				iLocal_237 = 1;
				bLocal_263 = false;
				iLocal_553 = 0;
			}
		}
	}
	if (iLocal_553 == 0)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_391);
		STREAMING::REQUEST_ANIM_DICT(sLocal_397);
		STREAMING::REQUEST_MODEL(iLocal_465);
		if ((((((func_355(Local_376, fLocal_280, 0) && func_352(Local_377, fLocal_281, 0)) && func_266(-37.542f, -1084.8704f, 25.4344f, 246.4778f, 0)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_391)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_397)) && STREAMING::HAS_MODEL_LOADED(iLocal_465)) && (!PED::IS_PED_INJURED(Local_473.f_0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_473.f_0)))
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_0__::func_222(&Local_556, 6, Local_477.f_0, "JIMMY", 0, 1);
				__LIB_0__::func_222(&Local_556, 4, Local_474.f_0, "SIMEON", 0, 1);
				__LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
				while (!func_359(0))
				{
					SYSTEM::WAIT(0);
				}
				if (iLocal_284 != 99)
				{
					__LIB_17__::func_712(Local_378, 300f, 1, 10000);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
			{
				if (!bLocal_263)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_285 /*7*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/]);
					}
					ENTITY::SET_ENTITY_COLLISION(Local_493[iLocal_285 /*7*/], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_285 /*7*/], false);
					ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], fLocal_282);
					ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], Local_378, true, false, false, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_285 /*7*/], false, false, false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_493[iLocal_285 /*7*/], false);
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -1);
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					if (CAM::IS_SCREEN_FADED_OUT() && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						SYSTEM::WAIT(100);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 100, 0);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_493[iLocal_285 /*7*/], true, false);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_286 /*7*/], false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_286 /*7*/], false, false, false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_493[iLocal_286 /*7*/], false);
				ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_286 /*7*/], fLocal_283);
				ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_286 /*7*/], Local_379, true, false, false, true);
			}
			iVar0 = 0;
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_473.f_0);
				Local_473.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_397, "leadin_loop", 1000f, -4f, 5, 145, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_473.f_4, 1f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_473.f_4, true);
					iVar0 = 1;
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_397, "leadin_action", 1000f, -4f, 5, 145, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_473.f_4, 0.98f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_473.f_4, false);
				}
				TASK::TASK_LOOK_AT_ENTITY(Local_473.f_0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				iLocal_431 = OBJECT::CREATE_OBJECT(iLocal_465, -30.99f, -1094.082f, 25.423f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_431, Local_473.f_0, PED::GET_PED_BONE_INDEX(Local_473.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_465);
			}
			HUD::CLEAR_HELP(true);
			CAM::DESTROY_ALL_CAMS(false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-66.2173f, -1121.9542f, 14.8642f, -41.2857f, -1111.1638f, 34.8642f, true, true);
			STREAMING::REMOVE_ANIM_DICT(sLocal_386);
			func_347(1);
			func_345();
			AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_ON");
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_493[0 /*7*/], false))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[0 /*7*/], true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_493[1 /*7*/], false))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[1 /*7*/], true);
					}
					SYSTEM::WAIT(0);
				}
			}
			if (iVar0 && !PED::IS_PED_INJURED(Local_473.f_0))
			{
				Local_473.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_397, "leadin_action", 8f, -4f, 5, 145, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(Local_473.f_4, 0.97f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_473.f_4, false);
			}
			if (!PED::IS_PED_INJURED(Local_477.f_0) && !PED::IS_PED_INJURED(Local_474.f_0))
			{
				iLocal_340 = PED::CREATE_SYNCHRONIZED_SCENE(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_474.f_0, iLocal_340, sLocal_391, "_leadin_simeon", 1000f, -1.5f, 5, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_477.f_0, iLocal_340, sLocal_391, "_leadin_jimmy", 1000f, -1.5f, 5, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_340, 0.35f);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_378();
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			SYSTEM::SETTIMERA(0);
			iLocal_284 = 0;
			iLocal_553 = 1;
		}
	}
	if (iLocal_553 == 1)
	{
		func_378();
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		if ((!iLocal_268[52] && !PED::IS_PED_INJURED(Local_474.f_0)) && !PED::IS_PED_INJURED(Local_477.f_0))
		{
			__LIB_13__::func_783();
			iLocal_268[52] = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[0 /*7*/], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[0 /*7*/], true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[1 /*7*/], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[1 /*7*/], true);
		}
		if (iLocal_264)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, iLocal_554);
				iLocal_264 = 0;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			}
		}
		switch (iLocal_284)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -34.0797f, -1094.8024f, 25.172342f, -35.014748f, -1097.3445f, 27.672344f, 9.5f, false, true, 0))
				{
					CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(iLocal_406[1], false), -1, 2500, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.6f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.015f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.05f);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -39.6f, -1097f, 25.6f, 1f, -1, 0.25f, 5, 40000f);
					if (!PED::IS_PED_INJURED(Local_474.f_0))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_474.f_0, -1, 2048, 2);
					}
					iLocal_284++;
				}
				break;
		}
		if ((!PED::IS_PED_INJURED(Local_474.f_0) && !PED::IS_PED_INJURED(Local_477.f_0)) && !PED::IS_PED_INJURED(Local_473.f_0))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_474.f_1))
			{
				Local_474.f_1 = __LIB_0__::func_639(Local_474.f_0, 0, 0);
			}
			PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.87f);
			if (__LIB_13__::func_755(&Local_495, 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_340) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_340) >= 0.9f)
				{
					__LIB_0__::func_638();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_473.f_0, joaat("phone_disappear")))
				{
					__LIB_16__::func_13(&iLocal_431, 1);
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -38.59081f, -1095.9069f, 25.422304f, -51.04851f, -1100.5391f, 27.422304f, 10.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.404922f, -1086.2672f, 25.573242f, -31.385181f, -1084.5278f, 27.573242f, 2.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.614616f, -1108.7036f, 25.455927f, -38.443035f, -1110.9185f, 27.43603f, 2.25f, false, true, 0)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_340) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_340) >= 0.99f))
			{
				iLocal_553 = 2;
			}
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_383, 8);
		func_100(sLocal_383);
	}
	if (iLocal_553 == 2)
	{
		func_274();
		__LIB_0__::func_638();
		__LIB_16__::func_13(&iLocal_431, 1);
		SYSTEM::SETTIMERA(0);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 9;
	}
	if (iLocal_553 == 3)
	{
		iLocal_553 = 2;
	}
}

void func_378()//Position - 0x3000B
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
}

void func_380()//Position - 0x300FB
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	if (iLocal_553 == 4)
	{
		if (iLocal_284 != 99)
		{
			if (bLocal_256)
			{
				__LIB_0__::func_427(Local_369, 335.0142f, 0, 0);
				iLocal_284 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_369, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(Local_369);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_284 = 99;
			}
		}
		else
		{
			if (iLocal_438 == 0)
			{
				iLocal_438 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_438);
			func_360();
			if ((((func_266(-37.542f, -1084.8704f, 25.4344f, 246.4778f, 0) && func_357(34.0424f, -638.7692f, 30.6252f, 0)) && func_356(44.0424f, -638.7692f, 30.6252f, 0)) && func_190(Local_369, fLocal_272, 0)) && INTERIOR::IS_INTERIOR_READY(iLocal_438))
			{
				__LIB_0__::func_433(0, -1, 0);
				func_384();
				func_351();
				func_350();
				func_348();
				func_347(1);
				bLocal_257 = false;
				iLocal_553 = 0;
			}
		}
	}
	if (iLocal_553 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		VEHICLE::REQUEST_VEHICLE_RECORDING(330, sLocal_381);
		VEHICLE::REQUEST_VEHICLE_RECORDING(331, sLocal_381);
		VEHICLE::REQUEST_VEHICLE_RECORDING(332, sLocal_381);
		VEHICLE::REQUEST_VEHICLE_RECORDING(333, sLocal_381);
		STREAMING::REQUEST_ANIM_DICT(sLocal_386);
		if (((((func_358(1) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(330, sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(331, sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(332, sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(333, sLocal_381)) && (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_386) || !bLocal_252))
		{
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_274();
			__LIB_16__::func_318(&Local_495, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			RECORDING::STOP_REPLAY_RECORDING();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_402, Local_369, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_402, fLocal_272);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_402, 5f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_286 /*7*/], false, false, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_493[iLocal_286 /*7*/], 3);
			}
			__LIB_37__::func_206(&(iLocal_406[0]), 1);
			__LIB_37__::func_206(&(iLocal_406[1]), 1);
			__LIB_37__::func_206(&(iLocal_406[2]), 1);
			__LIB_37__::func_206(&(iLocal_406[3]), 1);
			VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
			MISC::CLEAR_AREA(-42.8436f, -1111.7252f, 25.4355f, 100f, true, false, false, false);
			func_358(0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-66.2173f, -1121.9542f, 14.8642f, -41.2857f, -1111.1638f, 34.8642f, false, true);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_DEALERSHIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_TO_DEALERSHIP");
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_406)
			{
				if (iVar0 == 0)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_406[0], -49.9f, -1094.7f, 26.0416f, false, false, true);
				}
				else if (iVar0 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_406[1], -46.5f, -1097.5f, 26.35f, false, false, true);
				}
				else if (iVar0 == 2)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_406[2], -41.7f, -1099.5f, 26.0304f, false, false, true);
				}
				else if (iVar0 == 3)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_406[3], -36.8f, -1101.2f, 26.3321f, false, false, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_406[iVar0], true);
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_473.f_0, true, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_473.f_0, false);
				ENTITY::SET_ENTITY_COLLISION(Local_473.f_0, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_473.f_0, false);
			}
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], true), 10f, true, false, false, false);
			MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], true), 200f, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_493[iLocal_285 /*7*/], true);
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -1);
				}
				if (ENTITY::GET_ENTITY_SPEED(Local_493[iLocal_285 /*7*/]) < 30f)
				{
					Var1 = { ENTITY::GET_ENTITY_ROTATION(Local_493[iLocal_285 /*7*/], 2) };
					if (MISC::ABSF(Var1.f_1) < 30f && MISC::ABSF(Var1.f_0) < 45f)
					{
						bLocal_257 = true;
					}
				}
			}
			if (bLocal_257)
			{
				if (!bLocal_236)
				{
					PATHFIND::SET_ROADS_IN_AREA(-89.0913f, -1133.1434f, 0.886f, 13.5596f, -1053.2734f, 53.886f, true, true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -27.3f, -1082f, 26.2f, 15f, 0, ENTITY::GET_ENTITY_MODEL(Local_493[iLocal_285 /*7*/]), 4456448, 2f, 5f);
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
			{
				if (!bLocal_236)
				{
					if (iLocal_285 == 0)
					{
						if (bLocal_235)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/], 330, sLocal_381, true);
							__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), 4535f);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/], 331, sLocal_381, true);
							__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), 2200f);
						}
					}
					else if (bLocal_235)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/], 332, sLocal_381, true);
						__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), 4435f);
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/], 333, sLocal_381, true);
						__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), 3000f);
					}
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_493[iLocal_285 /*7*/], true);
				}
			}
			CAM::DESTROY_ALL_CAMS(false);
			if (bLocal_252)
			{
				iLocal_423 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
				if (bLocal_235)
				{
					iLocal_310 = PED::CREATE_SYNCHRONIZED_SCENE(-58.096f, -1099.135f, 25.565f, 0f, 0f, -20f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, "car_dealership_int_ltr_cam", sLocal_386);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_310, 0f);
				}
				else
				{
					iLocal_310 = PED::CREATE_SYNCHRONIZED_SCENE(-58.096f, -1101.335f, 25.565f, 0f, 0f, -20f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, "car_dealership_int_rtl_cam", sLocal_386);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_310, 0f);
				}
			}
			else
			{
				iLocal_423 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_423, 2);
				if (bLocal_236)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_423, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.54986f, -1116.5853f, 27.78851f, 0.939515f, -0.028141f, -58.80625f, 35.0707f, true, 2), 0, 3);
				}
				else if (bLocal_235)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_423, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.712585f, -1116.4813f, 27.742264f, 0.890156f, -0.013359f, -38.183346f, 35.0707f, true, 2), 0, 3);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_423, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.88025f, -1116.1439f, 27.742174f, 0.890156f, -0.013359f, -94.54407f, 35.0707f, true, 2), 0, 3);
				}
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_423, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.58225f, -1116.546f, 27.783735f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, true, 2), 5000, 1);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_423, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.099556f, -1117.4143f, 27.783968f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, true, 2), 6700, 1);
			}
			CAM::SET_CAM_ACTIVE(iLocal_423, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_OFF");
			if (bLocal_236)
			{
				SYSTEM::SETTIMERB(1500);
			}
			else
			{
				SYSTEM::SETTIMERB(0);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 12f, 4);
			__LIB_16__::func_11();
			bLocal_263 = false;
			iLocal_223 = 0;
			iLocal_284 = 0;
			iLocal_553 = 1;
		}
	}
	if (iLocal_553 == 1)
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 0, 0);
		func_266(-37.542f, -1084.8704f, 25.4344f, 246.4778f, 0);
		switch (iLocal_284)
		{
			case 0:
				if (SYSTEM::TIMERB() > 4500 && !bLocal_263)
				{
					ENTITY::SET_ENTITY_COLLISION(Local_493[iLocal_285 /*7*/], false, false);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_285 /*7*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_285 /*7*/], true);
					}
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_391);
				STREAMING::REQUEST_ANIM_DICT(sLocal_397);
				if (bLocal_235)
				{
					Var2 = { Local_376 };
					Var3 = { Local_377 };
				}
				else
				{
					Var2 = { -51.6f, -1091.9f, 25.9f };
					Var3 = { -51f, -1090.1f, 25.7f };
				}
				if (func_355(Var2, fLocal_280, 0) && func_352(Var3, fLocal_281, 0))
				{
					__LIB_0__::func_222(&Local_556, 6, Local_477.f_0, "JIMMY", 0, 1);
					__LIB_0__::func_222(&Local_556, 4, Local_474.f_0, "SIMEON", 0, 1);
					__LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
					if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_391) && SYSTEM::TIMERB() > 8500)
					{
						iLocal_553 = 2;
					}
				}
				if (!iLocal_268[51])
				{
					if (SYSTEM::TIMERB() > 2500)
					{
						__LIB_0__::func_151("AR1_SHOWROOM", 13000);
						iLocal_268[51] = 1;
					}
				}
				if (!iLocal_264)
				{
					if (SYSTEM::TIMERB() > 8300)
					{
						iVar4 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
						iVar5 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1);
						if (((iVar4 == 4 && iVar5 != 4) && CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4) || (iVar4 != 4 && (iVar5 == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)))
						{
							iLocal_554 = iVar5;
							CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, iVar4);
							iLocal_264 = 1;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
				{
					if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_493[iLocal_285 /*7*/]))
					{
						if (SYSTEM::TIMERB() > 8000)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_285 /*7*/], false, false, false);
						}
					}
				}
				if (SYSTEM::TIMERB() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_493[0 /*7*/], false))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[0 /*7*/], true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_493[1 /*7*/], false))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[1 /*7*/], true);
					}
				}
				break;
		}
		if (__LIB_0__::func_645(1000))
		{
			iLocal_223 = 1;
			iLocal_553 = 3;
		}
		func_359(0);
	}
	if (iLocal_553 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(330, sLocal_381);
		VEHICLE::REMOVE_VEHICLE_RECORDING(331, sLocal_381);
		VEHICLE::REMOVE_VEHICLE_RECORDING(332, sLocal_381);
		VEHICLE::REMOVE_VEHICLE_RECORDING(333, sLocal_381);
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-89.0913f, -1133.1434f, 0.886f, 13.5596f, -1053.2734f, 53.886f, 1);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 8;
	}
	if (iLocal_553 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				SYSTEM::WAIT(0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_402, false))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_402, Local_369, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_402, fLocal_272);
		}
		bLocal_263 = false;
		iLocal_553 = 2;
	}
}

void func_384()//Position - 0x30CB9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -1);
		}
	}
}

void func_385()//Position - 0x30CF7
{
	struct<82> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	if (iLocal_553 == 4)
	{
		if (bLocal_256)
		{
			__LIB_0__::func_427(35.2234f, -646.9493f, 30.6292f, 335.0142f, 0, 0);
			iLocal_284 = 99;
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 35.2234f, -646.9493f, 30.6292f, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			STREAMING::LOAD_SCENE(35.2234f, -646.9493f, 30.6292f);
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			iLocal_284 = 99;
		}
		func_360();
		__LIB_0__::func_544(180, 0, 0, 1, 0);
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_381);
		while (((((!ENTITY::DOES_ENTITY_EXIST(Local_473.f_0) || !ENTITY::DOES_ENTITY_EXIST(Local_493[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_493[1 /*7*/])) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_381))
		{
			func_266(-25.356f, -1086.3054f, 25.5721f, 52.8017f, 0);
			func_357(34.0424f, -638.7692f, 30.6252f, 0);
			func_356(44.0424f, -638.7692f, 30.6252f, 0);
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_381);
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 0);
		func_384();
		func_351();
		func_350();
		func_396();
		PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID(), 0);
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::CLEAR_AREA_OF_COPS(44.4942f, -634.8408f, 34.558254f, 400f, 0);
		iLocal_400 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 87.5619f, -588.9714f, 30.599f, 160.1988f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_400, true, true, false);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_400, true);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_400, 300, sLocal_381, 1, 0, 786603);
		__LIB_17__::func_710(&iLocal_400, 10500f);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
		iLocal_413[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_400, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_413[0], joaat("WEAPON_PISTOL"), -1, false, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_413[0], 2, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[0], false);
		iLocal_413[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_400, 6, joaat("S_M_Y_Cop_01"), 0, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_413[1], joaat("WEAPON_PISTOL"), -1, false, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_413[1], 2, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[1], false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_473.f_0, -32.912f, -1086.304f, 29.2035f, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_473.f_0, true);
			ENTITY::SET_ENTITY_COLLISION(Local_473.f_0, false, false);
			ENTITY::SET_ENTITY_VISIBLE(Local_473.f_0, false, false);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_285 /*7*/], true, true, false);
			if (iLocal_285 == 0)
			{
				ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 337.9254f);
				ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], 35.9457f, -646.1738f, 30.6258f, true, false, false, true);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 335.015f);
				ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], 35.2234f, -646.9493f, 30.6292f, true, false, false, true);
			}
		}
		__LIB_0__::func_544(180, 0, 0, 1, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-50.5f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		SYSTEM::WAIT(500);
		iLocal_553 = 0;
	}
	if (iLocal_553 == 0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_MAX_WANTED_LEVEL(2);
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, 0);
		__LIB_0__::func_424(1);
		bLocal_236 = false;
		bLocal_235 = false;
		iLocal_238 = 0;
		if (bLocal_262)
		{
			Local_494.f_1 = 0;
		}
		if (!Local_494.f_1)
		{
			iLocal_268[19] = 0;
		}
		func_348();
		func_347(1);
		__LIB_12__::func_849(9, 1);
		func_393(1);
		__LIB_17__::func_656(48, 1);
		__LIB_17__::func_656(47, 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LOSE_COPS"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_LOSE_COPS");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, false, false, false, false, false, false, 0);
		}
		__LIB_16__::func_11();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_493[iLocal_285 /*7*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_493[iLocal_285 /*7*/], false);
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_493[iLocal_285 /*7*/], false);
		}
		__LIB_0__::func_499(2, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 15f, 3);
		func_863(2, "LOSE_COPS", 0, 0, 0, 1);
		SYSTEM::SETTIMERA(0);
		iLocal_258 = 0;
		iLocal_317 = 0;
		iLocal_316 = MISC::GET_GAME_TIMER();
		iLocal_334 = 0;
		iLocal_284 = 0;
		iLocal_553 = 1;
	}
	if (iLocal_553 == 1)
	{
		func_391(0, 1);
		if ((MISC::GET_GAME_TIMER() - iLocal_316) < 7000)
		{
			PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_400, false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_400))
			{
				if (iLocal_317 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_413[0]))
					{
						TASK::TASK_ARREST_PED(iLocal_413[0], PLAYER::PLAYER_PED_ID());
					}
					if (!PED::IS_PED_INJURED(iLocal_413[1]))
					{
						TASK::TASK_ARREST_PED(iLocal_413[1], PLAYER::PLAYER_PED_ID());
					}
					iLocal_317 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_317) > 2000)
				{
					func_58(&(iLocal_413[0]), 0);
					func_58(&(iLocal_413[1]), 0);
					__LIB_37__::func_206(&iLocal_400, 0);
				}
			}
		}
		switch (iLocal_284)
		{
			case 0:
				if ((MISC::GET_GAME_TIMER() - iLocal_316) > 120000 || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PED::SET_CREATE_RANDOM_COPS(true);
					iLocal_284++;
				}
				break;
		}
		if (!iLocal_268[75])
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_02", 0f);
				iLocal_268[75] = 1;
			}
		}
		if (__LIB_17__::func_733(&Local_495, Local_364, 0.001f, 0.001f, 2f, 1, Local_493[iLocal_285 /*7*/], "AR1_GOGARAGE", "", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 1, 0, 1, -1))
		{
			iLocal_553 = 2;
		}
		if (!iLocal_258)
		{
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_01", 0f);
				iLocal_258 = 1;
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_495.f_5))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_364) < 10000f)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(330, sLocal_381);
				VEHICLE::REQUEST_VEHICLE_RECORDING(331, sLocal_381);
				VEHICLE::REQUEST_VEHICLE_RECORDING(332, sLocal_381);
				VEHICLE::REQUEST_VEHICLE_RECORDING(333, sLocal_381);
				Var0.f_11 = 12;
				Var0.f_31 = 49;
				Var0.f_81 = 2;
				__LIB_0__::func_378(1, &Var0, 0);
				STREAMING::REQUEST_MODEL(Var0.f_0);
			}
			bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -58.523495f, -1072.4463f, 25.51242f, -47.367687f, -1076.728f, 28.776825f, 14.75f, false, true, 0);
			bVar2 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -11.135968f, -1091.419f, 25.422077f, -24.348146f, -1126.3461f, 29.784176f, 13f, false, true, 0);
			if (bVar1 || bVar2)
			{
				bLocal_235 = bVar1;
				iLocal_553 = 2;
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.301994f, -1092.1263f, 25.433983f, -34.196312f, -1089.1217f, 28.43427f, 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.19282f, -1086.2312f, 25.434008f, -35.282406f, -1094.5125f, 28.434353f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.855288f, -1088.0891f, 25.43394f, -28.949333f, -1094.195f, 28.434189f, 1.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.09365f, -1085.4482f, 25.606892f, -32.26557f, -1081.1611f, 28.401917f, 7.75f, false, true, 0))
			{
				bLocal_236 = true;
				iLocal_553 = 2;
			}
		}
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			func_58(&Local_473, 1);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], false))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!iLocal_268[45])
						{
							__LIB_0__::func_151("AR1_COPHELP1", 13000);
							iLocal_268[45] = 1;
							HUD::FLASH_WANTED_DISPLAY(true);
						}
						else if (!iLocal_268[46])
						{
							HUD::FLASH_WANTED_DISPLAY(false);
							__LIB_0__::func_151("AR1_COPHELP2", 13000);
							iLocal_268[46] = 1;
						}
						else if (!iLocal_268[47])
						{
							__LIB_0__::func_151("AR1_COPHELP2B", 13000);
							iLocal_268[47] = 1;
						}
						else if (!iLocal_268[48])
						{
							__LIB_0__::func_151("AR1_COPHELP3", 13000);
							iLocal_268[48] = 1;
						}
						else if (!iLocal_268[49])
						{
							__LIB_0__::func_151("AR1_DUCKHELP", 13000);
							iLocal_268[49] = 1;
						}
					}
				}
				if (!iLocal_268[50])
				{
					if (!__LIB_13__::func_755(&Local_495, 0))
					{
						__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_MED", 4);
						iLocal_268[50] = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.09365f, -1085.4482f, 25.606892f, -32.26557f, -1081.1611f, 28.401917f, 7.75f, false, true, 0))
			{
				func_848(22);
			}
		}
		else
		{
			if (!iLocal_268[49] && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_0__::func_151("AR1_DUCKHELP", 13000);
				iLocal_268[49] = 1;
			}
			if (!iLocal_238)
			{
				HUD::FLASH_WANTED_DISPLAY(false);
				__LIB_0__::func_498(0, -1);
				iLocal_238 = 1;
			}
		}
		if (iLocal_268[49] && __LIB_0__::func_1("AR1_DUCKHELP"))
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_352) > 500)
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else
			{
				iLocal_352 = MISC::GET_GAME_TIMER();
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_495.f_0))
		{
			if (!Local_494.f_1)
			{
				if (iLocal_268[49] || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_268[19])
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
							{
								__LIB_0__::func_151("AR1_RAGEBAR_KM", 13000);
							}
							else
							{
								__LIB_0__::func_151("AR1_RAGEBAR", 13000);
							}
							iLocal_268[19] = 1;
							HUD::FLASH_ABILITY_BAR(10000);
						}
					}
				}
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				{
					func_387();
					Local_494.f_1 = 1;
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("AR1_RAGEBAR"))
			{
				func_387();
			}
			if (MISC::IS_PC_VERSION())
			{
				if (__LIB_0__::func_1("AR1_RAGEBAR_KM"))
				{
					func_387();
				}
			}
		}
		if (iLocal_438 == 0)
		{
			iLocal_438 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		bVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -38.62f, -1099.01f, 27.31f) > 62500f;
		bVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -38.62f, -1099.01f, 27.31f) < 40000f;
		if (bVar4)
		{
			func_190(Local_369, fLocal_272, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_386);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_438))
			{
				if (!func_386())
				{
					func_358(0);
				}
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_438);
			}
		}
		else if (bVar3)
		{
			func_358(1);
			__LIB_37__::func_206(&(iLocal_406[0]), 1);
			__LIB_37__::func_206(&(iLocal_406[1]), 1);
			__LIB_37__::func_206(&(iLocal_406[2]), 1);
			__LIB_37__::func_206(&(iLocal_406[3]), 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_402))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_402, true)) > 40000f)
				{
					__LIB_37__::func_206(&iLocal_402, 1);
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_386);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_438))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_438);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], true)) > 40000f)
			{
				func_848(13);
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -26.27152f, -1083.7515f, 25.43581f) < 40000f)
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-46.174908f, -1105.7606f, 26.165388f, 35f, 0);
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -26.27152f, -1083.7515f, 25.43581f) > 62500f)
		{
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		switch (iLocal_334)
		{
			case 0:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("ARM_1_LOSE_COPS");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_DEALERSHIP"))
					{
						AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_TO_DEALERSHIP");
					}
					iLocal_334++;
				}
				break;
			}
	}
	if (iLocal_553 == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < iLocal_434)
		{
			__LIB_16__::func_13(&(iLocal_434[iVar5]), 0);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < iLocal_435)
		{
			__LIB_16__::func_13(&(iLocal_435[iVar5]), 0);
			iVar5++;
		}
		STREAMING::REMOVE_ANIM_DICT("map_objects");
		__LIB_0__::func_424(0);
		__LIB_0__::func_544(180, 0, 0, 1, 0);
		HUD::FLASH_WANTED_DISPLAY(false);
		__LIB_12__::func_849(9, 0);
		__LIB_0__::func_638();
		SYSTEM::SETTIMERA(0);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 7;
	}
	if (iLocal_553 == 3)
	{
		func_905(7, 1);
	}
}

int func_386()//Position - 0x31A98
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_406[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_406[1]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_406[2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_406[3]))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_387()//Position - 0x31AD9
{
	if ((__LIB_0__::func_1("AR1_RAGEBAR") || __LIB_0__::func_1("AR1_RAGEHOW")) || __LIB_0__::func_1("AR1_RAGESTAT"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (__LIB_0__::func_1("AR1_RAGEBAR_KM"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	HUD::FLASH_ABILITY_BAR(0);
}

int func_391(bool bParam0, bool bParam1)//Position - 0x31C1C
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_435[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_453);
		STREAMING::REQUEST_MODEL(iLocal_454);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_453) && STREAMING::HAS_MODEL_LOADED(iLocal_454))
		{
			if (!bParam0)
			{
				if (!bParam1)
				{
					iLocal_434[0] = OBJECT::CREATE_OBJECT(iLocal_453, -72.785f, -682.29f, 32.77f, true, true, false);
					iLocal_434[1] = OBJECT::CREATE_OBJECT(iLocal_453, 25f, -664.5f, 30.76f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_434[0], 69.743f);
					ENTITY::SET_ENTITY_HEADING(iLocal_434[1], 339.996f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_434[0], true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_434[1], true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_434[0], 250);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_434[1], 250);
				}
				iLocal_435[0] = OBJECT::CREATE_OBJECT(iLocal_454, -72.785f, -682.29f, 32.87f, true, true, false);
				iLocal_435[1] = OBJECT::CREATE_OBJECT(iLocal_454, 25f, -664.5f, 30.86f, true, true, false);
				ENTITY::SET_ENTITY_HEADING(iLocal_435[0], -110.257f);
				ENTITY::SET_ENTITY_HEADING(iLocal_435[1], 339.996f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_435[0], true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_435[1], true);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_435[0], 250);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_435[1], 250);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_453);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_454);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_393(bool bParam0)//Position - 0x31DDA
{
	if (bParam0)
	{
		if (iLocal_300 == -1)
		{
			iLocal_300 = MISC::ADD_DISPATCH_SPAWN_ANGLED_BLOCKING_AREA(25.40665f, -664.5241f, 30.37865f, 10.393962f, -690.48004f, 35.73986f, 19.25f);
		}
		if (iLocal_301 == -1)
		{
			iLocal_301 = MISC::ADD_DISPATCH_SPAWN_ANGLED_BLOCKING_AREA(14.522158f, -684.69434f, 30.088087f, -85.90411f, -678.75195f, 38.47314f, 52.5f);
		}
	}
	else
	{
		if (iLocal_300 != -1)
		{
			MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_300);
			iLocal_300 = -1;
		}
		if (iLocal_301 != -1)
		{
			MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_301);
			iLocal_301 = -1;
		}
	}
}

void func_396()//Position - 0x31EBE
{
	Local_494.f_0 = 99f;
	PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_494.f_0 / 100f), true, 0);
}

void func_402()//Position - 0x36228
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	Var0 = { 39.0428f, -638.7694f, 30.6267f };
	fVar1 = 335.0152f;
	if (iLocal_286 == 0)
	{
		Var0 = { 39.3644f, -638.0751f, 30.6267f };
		fVar1 = 335.0097f;
	}
	if (iLocal_553 == 4)
	{
		if (iLocal_284 != 99)
		{
			if (bLocal_256)
			{
				__LIB_0__::func_427(Var0, fVar1, 0, 0);
				iLocal_284 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(Var0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_284 = 99;
			}
		}
		else
		{
			func_360();
			if ((func_266(Var0 + Vector(3f, 1f, 0f), 0, 0) && func_357(Var0, 0)) && func_356(Var0 + Vector(0f, 3f, 0f), 0))
			{
				__LIB_0__::func_433(0, -1, 0);
				func_384();
				func_429();
				func_350();
				func_428();
				func_396();
				func_427();
				PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_493[iLocal_286 /*7*/], "ARM_1_LAMARS_CAR", 0f);
				}
				bLocal_230 = true;
				iLocal_553 = 0;
			}
		}
	}
	if (iLocal_553 == 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_287, sLocal_381);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_288, sLocal_381);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_289, sLocal_381);
		VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_381);
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
		STREAMING::REQUEST_ANIM_DICT("map_objects");
		STREAMING::REQUEST_ANIM_DICT(sLocal_387);
		if (((((((((func_391(1, 0) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_287, sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_288, sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_289, sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_381)) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("map_objects")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_387)) && (bLocal_230 || (!bLocal_230 && SYSTEM::TIMERB() > 1000)))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_286 /*7*/], false);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/]);
				}
				if (iLocal_286 == 1)
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_381);
				}
				else
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_381);
				}
				VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_493[iLocal_286 /*7*/], 0, false);
				VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_493[iLocal_286 /*7*/], 1, false);
			}
			func_409(0, 1);
			func_408();
			__LIB_37__::func_206(&iLocal_401, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
			__LIB_16__::func_13(&iLocal_430, 0);
			func_58(&Local_489, 1);
			if (iLocal_441 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_441);
				iLocal_441 = 0;
			}
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Local_473.f_0);
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_473.f_0, false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_473.f_0, false);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_473.f_0, 20000, 2096, 4);
				TASK::TASK_LOOK_AT_ENTITY(Local_473.f_0, PLAYER::PLAYER_PED_ID(), 20000, 2096, 4);
			}
			func_391(0, 0);
			ENTITY::PLAY_ENTITY_ANIM(iLocal_434[1], "p_sec_gate_01_s_close", "map_objects", 4f, false, true, false, 0f, 0);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_434[1]);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_434[1], false, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_435[0], false, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_435[1], false, false);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_429();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			PED::SET_CREATE_RANDOM_COPS(false);
			MISC::CLEAR_AREA(44.4942f, -634.8408f, 34.558254f, 200f, true, false, false, false);
			iLocal_400 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 7.542f, -578.0831f, 36.6983f, 336.2658f, true, true, false);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_400, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
			iLocal_413[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_400, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_413[0], joaat("WEAPON_PISTOL"), -1, false, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_413[0], 2, false);
			iLocal_413[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_400, 6, joaat("S_M_Y_Cop_01"), 0, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_413[1], joaat("WEAPON_PISTOL"), -1, false, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_413[1], 2, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_493[iLocal_285 /*7*/], true);
				VEHICLE::ROLL_DOWN_WINDOWS(Local_493[iLocal_285 /*7*/]);
				VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[iLocal_285 /*7*/], true);
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -1);
				}
			}
			AUDIO::STOP_AUDIO_SCENES();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01");
			if (bLocal_230)
			{
				fVar2 = __LIB_15__::func_915(ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], true), iLocal_289, sLocal_381, 20);
				fVar3 = __LIB_15__::func_915(ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_286 /*7*/], true), iLocal_288, sLocal_381, 20);
				if (fVar2 < 1000f)
				{
					fVar2 = 1000f;
				}
				if (fVar3 < 1000f)
				{
					fVar3 = 1000f;
				}
				if (MISC::ABSF((fVar3 - fVar2)) < 750f)
				{
					if ((fVar3 - fVar2) > 0f)
					{
						fVar3 = (fVar3 + 500f);
					}
					else
					{
						fVar2 = (fVar2 + 500f);
					}
				}
				if (bLocal_214)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/], iLocal_288, sLocal_381, true);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							__LIB_17__::func_710(&(Local_493[iLocal_286 /*7*/]), 2500f);
						}
						else
						{
							__LIB_17__::func_710(&(Local_493[iLocal_286 /*7*/]), fVar3);
						}
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_493[iLocal_286 /*7*/], true);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_493[iLocal_286 /*7*/], true);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lamar_Throttle_Blip", Local_493[iLocal_286 /*7*/], 0, false, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/], iLocal_289, sLocal_381, true);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), 1500f);
						}
						else
						{
							__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), fVar2);
						}
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_493[iLocal_285 /*7*/], true);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Franklin_Throttle_Blip", Local_493[iLocal_285 /*7*/], 0, false, 0);
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/], iLocal_288, sLocal_381, true);
						__LIB_17__::func_710(&(Local_493[iLocal_286 /*7*/]), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_288, sLocal_381) - 200f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_493[iLocal_286 /*7*/], true);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_493[iLocal_286 /*7*/], true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/], iLocal_289, sLocal_381, true);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), 1500f);
						}
						else
						{
							__LIB_17__::func_710(&(Local_493[iLocal_285 /*7*/]), fVar2);
						}
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_493[iLocal_285 /*7*/], true);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Franklin_Throttle_Blip", Local_493[iLocal_285 /*7*/], 0, false, 0);
					}
					if (!PED::IS_PED_INJURED(Local_473.f_0))
					{
						TASK::TASK_LOOK_AT_COORD(Local_473.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_493[iLocal_286 /*7*/], -2.5729f, 0.4432f, 0.4889f), 20000, 2096, 4);
					}
				}
				iLocal_423 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				if (bLocal_244)
				{
					CAM::SET_CAM_PARAMS(iLocal_423, 43.50769f, -636.9529f, 31.885925f, -5.839731f, -0.072286f, 141.02808f, 28.425701f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_423, 43.448174f, -636.9048f, 31.88602f, -5.839731f, -0.072286f, 141.02808f, 28.425701f, 6500, 0, 0, 2);
				}
				else
				{
					CAM::SET_CAM_PARAMS(iLocal_423, 44.4942f, -634.8408f, 34.558254f, -9.333186f, 0.007438f, 141.69492f, 34.99998f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_423, 45.339893f, -634.41f, 31.49674f, -1.446978f, -0.011956f, 131.28975f, 34.99998f, 4500, 3, 3, 2);
				}
				CAM::SHAKE_CAM(iLocal_423, "HAND_SHAKE", 0.05f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_493[iLocal_285 /*7*/], false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_493[iLocal_285 /*7*/], true);
				VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_493[iLocal_285 /*7*/], true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_286 /*7*/], true), 40.409893f, -635.81f, 31.09674f) > SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], true), 40.409893f, -635.81f, 31.09674f))
					{
						__LIB_0__::func_630(5);
					}
				}
			}
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			AUDIO::START_AUDIO_SCENE("ARM_1_COPS_ARRIVE");
			__LIB_16__::func_11();
			SYSTEM::SETTIMERB(0);
			SYSTEM::SETTIMERA(0);
			Local_473.f_2 = 0;
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_310 = -1;
			bLocal_251 = false;
			iLocal_265 = 0;
			iLocal_284 = 0;
			iLocal_553 = 1;
		}
	}
	if (iLocal_553 == 1)
	{
		func_404(1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_310))
		{
			fVar4 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_310);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[iLocal_286 /*7*/], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[iLocal_286 /*7*/], true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[iLocal_285 /*7*/], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[iLocal_285 /*7*/], true);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_434[1]))
		{
			if (SYSTEM::TIMERB() > 10)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_434[1], true, false);
			}
		}
		switch (iLocal_284)
		{
			case 0:
				if (!iLocal_268[43])
				{
					if (bLocal_215)
					{
						if (bLocal_216)
						{
							if (__LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_DISS4", 7, 0, 0, 0, 0))
							{
								iLocal_268[43] = 1;
							}
						}
						else if (__LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_DISS3", 7, 0, 0, 0, 0))
						{
							iLocal_268[43] = 1;
						}
					}
					else if (bLocal_214)
					{
						if (__LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_DISS1", 7, 0, 0, 0, 0))
						{
							iLocal_268[43] = 1;
						}
					}
					else if (__LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_DISS2", 7, 0, 0, 0, 0))
					{
						iLocal_268[43] = 1;
					}
				}
				if (bLocal_230)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
						{
							if ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_288, sLocal_381) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_493[iLocal_286 /*7*/])) < 200f)
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_493[iLocal_286 /*7*/], 0f);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_285 /*7*/]))
						{
							if ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_289, sLocal_381) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_493[iLocal_285 /*7*/])) < 200f)
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_493[iLocal_285 /*7*/], 0f);
							}
						}
					}
				}
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
				STREAMING::REQUEST_ANIM_DICT(sLocal_387);
				if (((((SYSTEM::TIMERB() > 4500 || !bLocal_230) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_387)) && iLocal_268[43])
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false)) && !PED::IS_PED_INJURED(Local_473.f_0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/]);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_288, sLocal_381);
						ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_286 /*7*/], false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/], iLocal_287, sLocal_381, false);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_493[iLocal_286 /*7*/], false);
						VEHICLE::SET_PLAYBACK_SPEED(Local_493[iLocal_286 /*7*/], 0f);
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_297, "Idling_Throttle_Blip_Loop", Local_493[iLocal_286 /*7*/], "ARM_1_SOUNDSET", false, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_285 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/]);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_289, sLocal_381);
						ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], Var0, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], fVar1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[iLocal_285 /*7*/], 5f);
						ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_285 /*7*/], true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_473.f_0);
						TASK::TASK_CLEAR_LOOK_AT(Local_473.f_0);
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						Local_473.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_309 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_285 == 0)
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_309, Local_493[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[0 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_473.f_4, Local_493[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_309, Local_493[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[1 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_473.f_4, Local_493[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[0 /*7*/], "seat_dside_f"));
						}
						if (bLocal_215)
						{
							if (bLocal_216)
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_309, sLocal_387, "CarRace_Banter_bothtrashed_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_387, "CarRace_Banter_bothtrashed_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
								bLocal_251 = true;
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_309, sLocal_387, "CarRace_Banter_thatbucket_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_387, "CarRace_Banter_thatbucket_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
								bLocal_251 = true;
							}
						}
						else if (bLocal_214)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_309, sLocal_387, "CarRace_Banter_FlowThrough_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_387, "CarRace_Banter_FlowThrough_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
							bLocal_251 = true;
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_309, sLocal_387, "CarRace_Banter_MoveSome_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_387, "CarRace_Banter_MoveSome_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
							bLocal_251 = true;
						}
					}
					CAM::DESTROY_ALL_CAMS(false);
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (bLocal_251)
					{
						iLocal_423 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
						iLocal_310 = PED::CREATE_SYNCHRONIZED_SCENE(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						if (bLocal_215)
						{
							if (bLocal_216)
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, "CarRace_Banter_bothtrashed_cam", sLocal_387);
							}
							else
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, "CarRace_Banter_thatbucket_cam", sLocal_387);
							}
						}
						else if (bLocal_214)
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, "carrace_banter_flowthrough_cam", sLocal_387);
						}
						else
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, "carrace_banter_movesome_cam", sLocal_387);
						}
					}
					else
					{
						iLocal_423 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
						if (iLocal_286 == 1)
						{
							CAM::SET_CAM_PARAMS(iLocal_423, 36.597473f, -637.17065f, 31.809887f, -3.324733f, -0.009855f, -122.25419f, 21.896662f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iLocal_423, 36.595215f, -637.1694f, 31.764223f, -3.324733f, -0.009855f, -122.25419f, 21.896662f, 15000, 0, 0, 2);
						}
						else
						{
							CAM::SET_CAM_PARAMS(iLocal_423, 36.913578f, -636.76654f, 31.839243f, -3.589668f, -0.002839f, -124.83506f, 21.708742f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iLocal_423, 36.911545f, -636.7663f, 31.800074f, -3.589668f, -0.002839f, -124.83506f, 21.708742f, 15000, 0, 0, 2);
						}
					}
					if (!bLocal_230)
					{
						CAM::SHAKE_CAM(iLocal_423, "HAND_SHAKE", 0.05f);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						CAM::SET_WIDESCREEN_BORDERS(true, 0);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 1:
				if (!iLocal_268[42])
				{
					__LIB_13__::func_783();
					iLocal_268[42] = 1;
				}
				else if (!__LIB_13__::func_755(&Local_495, 0) || SYSTEM::TIMERB() > 20000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_400, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_413[0]) && !PED::IS_PED_SITTING_IN_VEHICLE(iLocal_413[0], iLocal_400))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_413[0], iLocal_400, -1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_400, true, true, false);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_400, true);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_400, 2);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_400, true);
						SYSTEM::SETTIMERB(0);
						iLocal_284++;
					}
				}
				break;
			case 2:
				VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_381);
				if ((SYSTEM::TIMERB() > 1000 || fVar4 > 0.99f) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_381))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_400, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_400))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_400);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_381);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_400, 300, sLocal_381, 1, 0, 786603);
						__LIB_17__::func_710(&iLocal_400, 500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_400, true);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_400, 0.1f);
					}
					if (!PED::IS_PED_INJURED(Local_473.f_0))
					{
						Local_473.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_309 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_285 == 0)
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_309, Local_493[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[0 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_473.f_4, Local_493[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_309, Local_493[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[1 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_473.f_4, Local_493[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_493[0 /*7*/], "seat_dside_f"));
						}
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_309, sLocal_387, "CarRace_Banter_cops_FRANKLIN", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_309, 0.1f);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_387, "CarRace_Banter_cops_LAMAR", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					if (bLocal_251)
					{
						CAM::DESTROY_ALL_CAMS(false);
						iLocal_423 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
						iLocal_310 = PED::CREATE_SYNCHRONIZED_SCENE(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, "CarRace_Banter_cops_cam", sLocal_387);
					}
					else
					{
						CAM::SHAKE_CAM(iLocal_423, "HAND_SHAKE", 0.05f);
						CAM::SET_CAM_PARAMS(iLocal_423, 46.84201f, -636.4459f, 31.56392f, -0.180864f, 0.105875f, 110.352585f, 30.892385f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_423, 46.881973f, -636.5637f, 31.602829f, -0.098123f, 0.105875f, 105.77997f, 30.892385f, 16000, 0, 0, 2);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 3:
				if (!iLocal_268[44])
				{
					if (!__LIB_13__::func_755(&Local_495, 0))
					{
						__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_COPS", 7, 0, 0, 0);
					}
					MemCopy(&uVar5, {__LIB_13__::func_743()}, 4);
					if (MISC::ARE_STRINGS_EQUAL(&uVar5, "ARM1_COPS_3"))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_268[44] = 1;
					}
				}
				if (SYSTEM::TIMERB() > 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_493[iLocal_286 /*7*/], 1f);
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_297))
						{
							AUDIO::STOP_SOUND(iLocal_297);
						}
						SYSTEM::SETTIMERB(0);
						iLocal_284++;
					}
				}
				break;
			case 4:
				if (!iLocal_265)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
					{
						if (SYSTEM::TIMERB() > 2200)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_265 = 1;
						}
					}
				}
				if (SYSTEM::TIMERB() > 2500 || fVar4 > 0.99f)
				{
					iLocal_553 = 2;
				}
				break;
		}
		if (__LIB_0__::func_645(1000))
		{
			iLocal_553 = 3;
		}
	}
	if (iLocal_553 == 2)
	{
		RECORDING::REPLAY_STOP_EVENT();
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 3);
		HUD::CLEAR_HELP(true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
		func_404(0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_435[0], true, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_435[1], true, false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -8f, true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -1);
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_493[iLocal_285 /*7*/], false);
		}
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_473.f_0, -8f, true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_473.f_0);
			TASK::TASK_CLEAR_LOOK_AT(Local_473.f_0);
			ENTITY::SET_ENTITY_COORDS(Local_473.f_0, -32.912f, -1086.304f, 29.2035f, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_473.f_0, true);
			ENTITY::SET_ENTITY_COLLISION(Local_473.f_0, false, false);
			ENTITY::SET_ENTITY_VISIBLE(Local_473.f_0, false, false);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_285 /*7*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/]);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_289, sLocal_381);
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_285 /*7*/], false);
			if (iLocal_285 == 0)
			{
				ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 337.9254f);
				ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], 35.9457f, -646.1738f, 30.6258f, true, false, false, true);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 335.015f);
				ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], 35.2234f, -646.9493f, 30.6292f, true, false, false, true);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/]);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_288, sLocal_381);
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_287, sLocal_381);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_493[iLocal_286 /*7*/], 0f);
			func_351();
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_17__::func_712(35.9457f, -646.1738f, 30.6258f, 200f, 1, 5000);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_400, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_400))
			{
				__LIB_17__::func_710(&iLocal_400, 10500f);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_400, 1f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_400, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_413[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[0], false);
			}
			if (!PED::IS_PED_INJURED(iLocal_413[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[1], false);
			}
		}
		MISC::CLEAR_AREA_OF_VEHICLES(81.9f, -600.2f, 32.5f, 30f, false, false, false, false, false, false, 0);
		if ((CAM::DOES_CAM_EXIST(iLocal_423) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4) && CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
		{
			CAM::DESTROY_CAM(iLocal_423, false);
			if (iLocal_285 == 0)
			{
				iLocal_423 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 34.023193f, -647.57837f, 31.919437f, -1.429148f, 0f, -47.809055f, 50.027916f, true, 2);
			}
			else
			{
				iLocal_423 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 33.332428f, -648.70605f, 31.861574f, -0.377383f, 0f, -47.843166f, 50.027916f, true, 2);
			}
			SYSTEM::WAIT(0);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_387);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		AUDIO::STOP_AUDIO_SCENE("ARM_1_COPS_ARRIVE");
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-50.5f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		else
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
		iLocal_553 = 0;
		iLocal_552 = 6;
	}
	if (iLocal_553 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_493[iLocal_286 /*7*/], false))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[iLocal_286 /*7*/], true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_493[iLocal_285 /*7*/], false))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_493[iLocal_285 /*7*/], true);
				}
				SYSTEM::WAIT(0);
			}
		}
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_429();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_400, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_400))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_400);
			}
			VEHICLE::SET_VEHICLE_SIREN(iLocal_400, true);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_400, 2);
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_400, true);
			VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_381);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_400, 300, sLocal_381, true);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_297))
		{
			AUDIO::STOP_SOUND(iLocal_297);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_434[1]))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_434[1], "map_objects", "p_sec_gate_01_s_close", 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_434[1], "map_objects", "p_sec_gate_01_s_close", 0.99f);
			}
		}
		iLocal_553 = 2;
	}
}

int func_404(bool bParam0)//Position - 0x37B6A
{
	if (bParam0)
	{
		if (iLocal_443 == 0)
		{
			iLocal_443 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(89.7f, -694.9f, 32.7f, "dt1_05_carpark");
		}
		else if (INTERIOR::IS_INTERIOR_READY(iLocal_443))
		{
			return 1;
		}
		else
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_443);
		}
	}
	else if (iLocal_443 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_443);
		iLocal_443 = 0;
	}
	return 0;
}

void func_408()//Position - 0x37D27
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_193)
	{
		if (iLocal_137[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_137[iVar0], sLocal_381);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_190)
	{
		if (iLocal_134[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_134[iVar0], sLocal_381);
		}
		iVar0++;
	}
}

void func_409(bool bParam0, bool bParam1)//Position - 0x37D8C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_174))
	{
		iLocal_76 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_183);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_92)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_425());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_421();
			func_420();
			func_417();
		}
		else
		{
			func_413();
			func_412();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_412()//Position - 0x37EA2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iLocal_190[iVar0] = 0;
		Local_158[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_94[iVar0] = 0f;
		fLocal_95[iVar0] = 0f;
		fLocal_96[iVar0] = 0f;
		fLocal_97[iVar0] = 0f;
		iLocal_134[iVar0] = 0;
		fLocal_98[iVar0] = 0f;
		iLocal_135[iVar0] = 0;
		iLocal_184[iVar0] = 0;
		iLocal_136[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_191[iVar0] = 0;
		iVar0++;
	}
	iLocal_141 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_192[iVar0] = 0;
		Local_159[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_140[iVar0] = 0;
		iLocal_185[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_194[iVar0] = 0;
		iVar0++;
	}
	iLocal_143 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		iLocal_193[iVar0] = 0;
		Local_160[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_103[iVar0] = 0f;
		fLocal_104[iVar0] = 0f;
		fLocal_105[iVar0] = 0f;
		fLocal_106[iVar0] = 0f;
		iLocal_137[iVar0] = 0;
		fLocal_107[iVar0] = 0f;
		iLocal_138[iVar0] = 0;
		iLocal_186[iVar0] = 0;
		iLocal_139[iVar0] = 0;
		iVar0++;
	}
	iLocal_142 = 0;
	iLocal_145 = 0;
	iLocal_148 = 0;
	iLocal_149 = 0;
	iLocal_150 = 0;
}

void func_413()//Position - 0x38030
{
	func_416();
	func_415();
	func_414();
}

void func_414()//Position - 0x38044
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_193[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_193[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_193[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_193[iVar0]));
			}
		}
		iLocal_138[iVar0] = 0;
		if (!bLocal_72 && !bLocal_85)
		{
			if (iLocal_137[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_137[iVar0], &cLocal_174);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_186[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_186[iVar0]);
		}
		iVar0++;
	}
}

void func_415()//Position - 0x3813B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_192[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_192[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_192[iVar0]));
			}
		}
		iLocal_140[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_185[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_185[iVar0]);
		}
		iVar0++;
	}
	iLocal_146 = 0;
	iLocal_143 = 0;
}

void func_416()//Position - 0x381B8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_190[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_190[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_190[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_190[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_190[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_190[iVar0]));
			}
		}
		if (!bLocal_72 && !bLocal_85)
		{
			if (iLocal_134[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_134[iVar0], &cLocal_174);
			}
		}
		iLocal_135[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_184[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_184[iVar0]);
		}
		iVar0++;
	}
	iLocal_145 = 0;
	iLocal_141 = 0;
}

void func_417()//Position - 0x382B7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_193[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[iVar0]);
				}
			}
			func_419(iLocal_193[iVar0]);
			__LIB_15__::func_908(iLocal_193[iVar0]);
		}
		iLocal_138[iVar0] = 0;
		iLocal_139[iVar0] = 0;
		if (!bLocal_72 && !bLocal_85)
		{
			if (iLocal_137[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_137[iVar0], &cLocal_174);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_186[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_186[iVar0]);
		}
		iVar0++;
	}
	iLocal_147 = 0;
}

void func_419(int iParam0)//Position - 0x3839B
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
				if (bLocal_93)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_420()//Position - 0x38435
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_192[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_192[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_192[iVar0], true, false);
			}
			__LIB_15__::func_908(iLocal_192[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_185[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_185[iVar0]);
		}
		iVar0++;
	}
	iLocal_146 = 0;
	iLocal_143 = 0;
}

void func_421()//Position - 0x384B9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_190[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_190[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_190[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_190[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_190[iVar0]);
				}
			}
			func_419(iLocal_190[iVar0]);
			__LIB_15__::func_908(iLocal_190[iVar0]);
		}
		iLocal_135[iVar0] = 0;
		iLocal_136[iVar0] = 0;
		if (!bLocal_72 && !bLocal_85)
		{
			if (iLocal_134[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_134[iVar0], &cLocal_174);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_184[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_184[iVar0]);
		}
		iVar0++;
	}
	iLocal_145 = 0;
	iLocal_141 = 0;
}

int func_425()//Position - 0x385CE
{
	if (iLocal_187 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_187;
}

void func_427()//Position - 0x38615
{
	STREAMING::REMOVE_IPL("DT1_03_Shutter");
	__LIB_0__::func_544(180, 1, 0, 1, 0);
}

void func_428()//Position - 0x3862F
{
	if (iLocal_286 == 1)
	{
		iLocal_287 = 9;
		iLocal_288 = 313;
		iLocal_289 = 312;
	}
	else
	{
		iLocal_287 = 8;
		iLocal_288 = 311;
		iLocal_289 = 310;
	}
}

void func_429()//Position - 0x38663
{
	if (!PED::IS_PED_INJURED(Local_473.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_473.f_0, Local_493[iLocal_286 /*7*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_473.f_0, Local_493[iLocal_286 /*7*/], -1);
			}
		}
	}
}

void func_430()//Position - 0x386AA
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	var uVar10;
	struct<6> Var11;
	char cVar12[24];
	struct<6> Var13;
	char cVar14[24];
	int iVar15;
	char* sVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	struct<6> Var23;
	fVar0 = 1250f;
	if (iLocal_552 == 4)
	{
		fVar0 = 83500f;
	}
	if (iLocal_553 == 4)
	{
		Var1 = { Local_493[0 /*7*/].f_2 };
		fVar2 = fLocal_276;
		if (iLocal_552 == 4)
		{
			Var1 = { -1155.1976f, -873.2174f, 10.6185f };
			fVar2 = -150f;
		}
		if (bLocal_256)
		{
			__LIB_0__::func_427(Var1, fVar2, 0, 0);
			iLocal_284 = 99;
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar2);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			iLocal_284 = 99;
		}
		func_360();
		STREAMING::REQUEST_MODEL(iLocal_457);
		while ((((!func_525() || !ENTITY::DOES_ENTITY_EXIST(Local_473.f_0)) || !ENTITY::DOES_ENTITY_EXIST(Local_493[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_493[1 /*7*/])) || !STREAMING::HAS_MODEL_LOADED(iLocal_457))
		{
			func_266(Local_372, 0, 0);
			func_357(Local_493[0 /*7*/].f_2, Local_493[0 /*7*/].f_5);
			func_356(Local_493[1 /*7*/].f_2, Local_493[1 /*7*/].f_5);
			STREAMING::REQUEST_MODEL(iLocal_457);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", false, -1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", false, -1);
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 0);
		func_384();
		func_429();
		func_350();
		func_524(1);
		PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID(), 0);
		if (iLocal_552 == 3)
		{
			iLocal_415 = PED::CREATE_PED(26, iLocal_457, -1886.833f, -579.0045f, 10.8163f, 315.0557f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 8, 1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_415, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_457);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			if (iLocal_552 == 4)
			{
				ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], -1153.1976f, -875.2174f, 10.6185f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], -150f);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_285 /*7*/], true, true, false);
		}
		AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
		AUDIO::FREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
		AUDIO::SET_RADIO_AUTO_UNFREEZE(false);
		AUDIO::SET_RADIO_TRACK("RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */, "ARM1_RADIO_STARTS");
		func_523(sLocal_381, iLocal_290, 1, 1);
		func_521();
		func_520(1);
		__LIB_39__::func_170(joaat("A_M_M_BevHills_02"));
		iLocal_82 = 1;
		bLocal_88 = true;
		fLocal_125 = 200f;
		iLocal_152 = iLocal_137[15];
		func_518((fVar0 + 4000f), (fVar0 - 5000f));
		SYSTEM::WAIT(500);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/], iLocal_290, sLocal_381, true);
			__LIB_17__::func_710(&(Local_493[iLocal_286 /*7*/]), fVar0);
			func_517(Local_493[iLocal_286 /*7*/], fVar0);
			if (iLocal_552 == 3)
			{
				PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 210.9189f);
				ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], -1153.1976f, -875.2174f, 10.6185f, true, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[iLocal_285 /*7*/], 5f);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			SYSTEM::WAIT(100);
			iLocal_553 = 0;
		}
	}
	if (iLocal_553 == 0)
	{
		func_428();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
		STREAMING::SET_PED_POPULATION_BUDGET(2);
		iLocal_218 = 0;
		iLocal_219 = 0;
		iLocal_220 = 0;
		bLocal_217 = false;
		iLocal_226 = 0;
		iLocal_227 = 0;
		iLocal_239 = 0;
		iLocal_250 = 0;
		iLocal_253 = 0;
		iLocal_260 = 0;
		fLocal_270 = 1f;
		iLocal_295 = 0;
		Local_494.f_1 = 0;
		Local_494.f_0 = 0f;
		func_345();
		__LIB_16__::func_18(1);
		func_515(1);
		func_514(1);
		__LIB_0__::func_424(1);
		__LIB_0__::func_681(61, 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		AUDIO::UNFREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
		AUDIO::SET_RADIO_AUTO_UNFREEZE(true);
		__LIB_15__::func_956(Local_493[iLocal_285 /*7*/], -1);
		__LIB_0__::func_377(Local_493[iLocal_285 /*7*/], -1);
		SYSTEM::SETTIMERA(0);
		SYSTEM::SETTIMERB(0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_493[iLocal_285 /*7*/], true);
			iLocal_314 = ENTITY::GET_ENTITY_HEALTH(Local_493[iLocal_285 /*7*/]);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_493[iLocal_286 /*7*/]);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_493[iLocal_286 /*7*/], true);
			VEHICLE::SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(Local_493[iLocal_286 /*7*/], true);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_493[iLocal_286 /*7*/], "ARM_1_LAMARS_CAR", 0f);
			iLocal_315 = ENTITY::GET_ENTITY_HEALTH(Local_493[iLocal_286 /*7*/]);
		}
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_473.f_0, true);
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 116, false);
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 118, false);
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 208, true);
			PED::SET_PED_LOD_MULTIPLIER(Local_473.f_0, 2f);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GET_IN_CAR_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_1_GET_IN_CAR_SCENE");
		}
		if (iLocal_552 == 3)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_START"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_START");
			}
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
		}
		else
		{
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
			iLocal_268[1] = 1;
			iLocal_268[12] = 1;
			iLocal_268[13] = 1;
			iLocal_268[14] = 1;
			iLocal_268[15] = 1;
			iLocal_268[16] = 1;
			if (bLocal_229)
			{
				iLocal_268[19] = 1;
				iLocal_268[20] = 1;
				iLocal_268[21] = 1;
				Local_494.f_1 = 1;
				bLocal_262 = true;
			}
			func_863(1, "CHASE_MID_POINT", 0, 0, 0, 1);
		}
		iLocal_318 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-334.18185f, -673.7113f, 33.338654f, 28.25f, 3f, 3f, 175.8f, false, 7);
		iLocal_319 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1138.2f, -723.6f, 20f, 10f, 10f, 3f, 91.3f, false, 7);
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 500)
			{
				func_518((fVar0 + 5000f), (fVar0 - 5000f));
				func_512();
				func_511();
				func_485(Local_493[iLocal_286 /*7*/], 1f);
				SYSTEM::WAIT(0);
			}
			if (iLocal_552 == 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_493[iLocal_285 /*7*/], 20f);
				}
			}
			CAM::DO_SCREEN_FADE_IN(800);
			while (!CAM::IS_SCREEN_FADED_IN())
			{
				func_518((fVar0 + 5000f), (fVar0 - 5000f));
				func_511();
				func_485(Local_493[iLocal_286 /*7*/], 1f);
				__LIB_1__::func_33(0);
				SYSTEM::WAIT(0);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_493[iLocal_285 /*7*/], true);
		}
		if (iLocal_552 == 3)
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
		}
		iLocal_574 = MISC::GET_GAME_TIMER();
		func_427();
		iLocal_333 = 0;
		iLocal_335 = 0;
		iLocal_336 = 0;
		iLocal_337 = 0;
		iLocal_323 = 0;
		bLocal_242 = false;
		iLocal_324 = 0;
		iLocal_232 = 0;
		bLocal_247 = false;
		iLocal_284 = 0;
		iLocal_553 = 1;
	}
	if (iLocal_553 == 1)
	{
		__LIB_1__::func_33(0);
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (!PED::IS_PED_INJURED(iLocal_415))
		{
			if (!bLocal_242)
			{
				if ((fLocal_269 > 15000f || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false) && ENTITY::GET_ENTITY_SPEED(Local_493[iLocal_285 /*7*/]) > 1f)) || CAM::IS_SPHERE_VISIBLE(-1885f, -577.6f, 12.1f, 1f))
				{
					bLocal_242 = true;
				}
			}
			else if (!PED::IS_PED_IN_COMBAT(iLocal_415, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_415, joaat("SCRIPT_TASK_COMBAT")) != 1)
			{
				TASK::TASK_COMBAT_PED(iLocal_415, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			if (SYSTEM::VDIST2(Var3, ENTITY::GET_ENTITY_COORDS(iLocal_415, true)) > 2500f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_415))
				{
					func_58(&iLocal_415, 0);
				}
			}
		}
		if (iLocal_573 == 0 && (MISC::GET_GAME_TIMER() - iLocal_574) > 10000)
		{
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_573 = 1;
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_395);
		STREAMING::REQUEST_ANIM_DICT(sLocal_394);
		STREAMING::REQUEST_ANIM_DICT(sLocal_396);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", false, -1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
		{
			if (iLocal_284 == 0)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_285 /*7*/]))
				{
					fVar4 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_493[iLocal_285 /*7*/]);
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_493[iLocal_285 /*7*/]) != 4)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_493[iLocal_285 /*7*/], 4);
					}
					if ((iLocal_285 == 1 && fVar4 > 3900f) || (iLocal_285 == 0 && fVar4 > 3600f))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/]);
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_493[iLocal_285 /*7*/].f_6, sLocal_381);
					}
				}
				else if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_493[iLocal_285 /*7*/]) != 1)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_493[iLocal_285 /*7*/], 1);
				}
			}
			fVar5 = SYSTEM::VDIST2(Var3, ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_286 /*7*/], true));
			iVar6 = VEHICLE::GET_CLOSEST_VEHICLE(Var3, 10f, 0, __LIB_15__::func_916());
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
			{
				fLocal_269 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_493[iLocal_286 /*7*/]);
				if (bLocal_241)
				{
					func_476(&fLocal_270, Local_493[iLocal_285 /*7*/], Local_493[iLocal_286 /*7*/]);
				}
				else
				{
					func_475(&fLocal_270, Local_493[iLocal_285 /*7*/], Local_493[iLocal_286 /*7*/]);
				}
				fLocal_128 = 7000f;
				func_511();
				func_485(Local_493[iLocal_286 /*7*/], fLocal_270);
				VEHICLE::SET_PLAYBACK_SPEED(Local_493[iLocal_286 /*7*/], fLocal_270);
				func_472();
				func_471(&(Local_493[iLocal_286 /*7*/]), fLocal_269);
				if (!iLocal_232)
				{
					if (fLocal_269 > 50500f && fLocal_269 < 51100f)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_493[iLocal_286 /*7*/], false, false);
						iLocal_232 = 1;
					}
				}
				else if (fLocal_269 > 51100f)
				{
					ENTITY::SET_ENTITY_COLLISION(Local_493[iLocal_286 /*7*/], true, false);
					iLocal_232 = 0;
				}
				if (!bLocal_217)
				{
					if (fLocal_269 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_290, sLocal_381) - 4000f))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/]);
						}
						func_409(0, 1);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_493[iLocal_286 /*7*/]);
						bLocal_214 = false;
						bLocal_217 = true;
					}
				}
				if (!iLocal_250)
				{
					if (iLocal_286 == 0 && fLocal_269 >= 54635f)
					{
						iVar7 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1052.49f, -476.15f, 36.66f, 5f, joaat("prop_sec_barrier_ld_01a"), false, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(iVar7))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_493[iLocal_286 /*7*/], true);
							OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iVar7, 1, false);
							OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iVar7, 2, false);
						}
						iLocal_250 = 1;
					}
				}
				else if (fLocal_269 > 56000f && fLocal_269 < 56500f)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_493[iLocal_286 /*7*/], false);
				}
			}
			if (iLocal_552 == 3)
			{
				if (fLocal_269 > 83000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false) && ENTITY::IS_ENTITY_ON_SCREEN(Local_493[iLocal_286 /*7*/]))
					{
						func_863(1, "CHASE_MID_POINT", 0, 0, 0, 1);
						iLocal_552 = 4;
					}
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], false))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				}
			}
			if (fLocal_269 < 28500f)
			{
				fVar8 = 160000f;
			}
			else
			{
				fVar8 = 60000f;
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/]))
			{
				func_470(iVar6);
				func_469(iVar6);
				if (__LIB_0__::func_501("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (!bLocal_71)
				{
					iLocal_308 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_229)
				{
					if (!iLocal_268[19])
					{
						if (((iLocal_268[1] && (iLocal_268[12] || !__LIB_0__::func_669(1, 1, 0))) && !__LIB_0__::func_501("AR1_CHASE", 0, 0)) && fLocal_269 > 17200f)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (iLocal_323 == 0)
								{
									iLocal_323 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_323) > 2500)
								{
									if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
									{
										__LIB_0__::func_151("AR1_RAGEBAR_KM", 17000);
									}
									else
									{
										__LIB_0__::func_151("AR1_RAGEBAR", 17000);
									}
									iLocal_268[19] = 1;
									iLocal_323 = 0;
									PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
									HUD::FLASH_ABILITY_BAR(10000);
								}
							}
						}
					}
					else if (!iLocal_268[20])
					{
						if (iLocal_323 == 0)
						{
							if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
							{
								iLocal_323 = MISC::GET_GAME_TIMER();
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_323) > 2000)
						{
							__LIB_0__::func_151("AR1_RAGEHOW", 13000);
							iLocal_268[20] = 1;
							iLocal_323 = MISC::GET_GAME_TIMER();
							HUD::FLASH_ABILITY_BAR(0);
						}
					}
					else if (!iLocal_268[21])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_323) > 10000 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__::func_151("AR1_RAGESTAT", 13000);
							iLocal_268[21] = 1;
							iLocal_323 = MISC::GET_GAME_TIMER();
							HUD::FLASH_ABILITY_BAR(0);
						}
					}
					else if (!iLocal_268[22])
					{
						if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							iLocal_323 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_323) > 500 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
							{
								__LIB_0__::func_151("AR1_RAGEDEACT_KM", 13000);
							}
							else
							{
								__LIB_0__::func_151("AR1_RAGEDEACT", 13000);
							}
							iLocal_268[22] = 1;
							iLocal_323 = MISC::GET_GAME_TIMER();
						}
					}
					if (!Local_494.f_1)
					{
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							func_387();
							Local_494.f_1 = 1;
						}
					}
				}
				if (iLocal_268[1])
				{
					if (!iLocal_268[12])
					{
						if (iLocal_324 == 0)
						{
							iLocal_324 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_324) > 5000)
						{
							if ((PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && __LIB_0__::func_669(1, 1, 0)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_268[12] = 1;
								iLocal_324 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (__LIB_0__::func_1("AR1_CAMHELP"))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_324) > 6000)
						{
							HUD::CLEAR_HELP(false);
							iLocal_324 = MISC::GET_GAME_TIMER();
						}
					}
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((fLocal_269 > 60000f && !iLocal_268[13]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1210.6758f, -578.62866f, 25.423279f, -1272.7745f, -627.6569f, 37.72716f, 25f, false, true, 0)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							__LIB_0__::func_151("AR1_BRAKE", 13000);
							iLocal_268[13] = 1;
						}
						if (fLocal_269 > 100000f)
						{
							VEHICLE::GET_VEHICLE_LIGHTS_STATE(Local_493[iLocal_285 /*7*/], &iVar9, &uVar10);
							if (!iLocal_268[23])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -349.81827f, -716.85126f, 37.136703f, -351.93762f, -819.92615f, 29.768631f, 16.5f, false, true, 0))
								{
									if (iVar9 == 0)
									{
										__LIB_0__::func_151("AR1_HEADHELP", 13000);
										iLocal_268[23] = 1;
									}
									else
									{
										iLocal_268[23] = 1;
									}
								}
							}
						}
						if (fLocal_269 > 70000f)
						{
							if (!iLocal_268[24])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1134.8251f, -900.86053f, 30.001677f, -1002.17053f, -1127.4899f, -2.783524f, 27.5f, false, true, 0))
								{
									__LIB_0__::func_151("AR1_JUMPHELP", 13000);
									iLocal_268[24] = 1;
								}
							}
						}
						if (fLocal_269 > 100500f && fLocal_269 < 106500f)
						{
							if (!iLocal_268[79])
							{
								__LIB_0__::func_151("AR1_VEHCAMH", 13000);
								iLocal_268[79] = 1;
							}
						}
						if (fLocal_269 > 125000f)
						{
							if (!iLocal_268[25])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -150.1928f, -653.96027f, 38.701393f, -69.53586f, -683.46045f, 31.171165f, 16.5f, false, true, 0))
								{
									__LIB_0__::func_151("AR1_JUMPHELP2", 13000);
									iLocal_268[25] = 1;
								}
							}
						}
					}
					if (iLocal_268[79])
					{
						if (__LIB_0__::func_1("AR1_VEHCAMH"))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
							{
								HUD::CLEAR_HELP(true);
							}
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_331) > 10000)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_308) > 0)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_493[iLocal_285 /*7*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_493[iLocal_286 /*7*/], 0f, 1f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_493[iLocal_286 /*7*/], 0f, 8f, 2f), 4f, false, true, 0))
							{
								VEHICLE::START_VEHICLE_HORN(Local_493[iLocal_286 /*7*/], 1500, 0, false);
								iLocal_331 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!__LIB_13__::func_755(&Local_495, 1))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (iLocal_293 == 0 || ((MISC::GET_GAME_TIMER() - iLocal_293) > 20000 && fLocal_269 < 144600f))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_493[0 /*7*/], Local_493[1 /*7*/]))
								{
									if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_CRASH", 7, 0, 0, 0))
									{
										Var11 = { __LIB_13__::func_743() };
										if (MISC::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_01"))
										{
											StringCopy(&cVar12, "thatscominoutourchecks", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_02"))
										{
											StringCopy(&cVar12, "stoprubbinup", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_03"))
										{
											StringCopy(&cVar12, "imabouttotake", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_04"))
										{
											StringCopy(&cVar12, "imgonnatell", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_05"))
										{
											StringCopy(&cVar12, "ayyofrank", 24);
										}
										else
										{
											StringCopy(&cVar12, "stoprubbinup", 24);
										}
										if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_395))
										{
											TASK::TASK_PLAY_ANIM(Local_473.f_0, sLocal_395, &cVar12, 8f, -8f, -1, 32, 0f, false, false, false);
										}
										iLocal_293 = MISC::GET_GAME_TIMER();
										iLocal_226 = 0;
										iLocal_227 = 0;
									}
								}
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_294) > 16000 && !iLocal_227)
							{
								if (!iLocal_226)
								{
									if ((fLocal_269 > 20000f && fLocal_269 < 144600f) && (fLocal_269 < 55000f || fLocal_269 > 60500f))
									{
										if (fVar5 < 400f)
										{
											if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_TEASE", 7, 0, 0, 0))
											{
												Var13 = { __LIB_13__::func_743() };
												if (MISC::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_01"))
												{
													StringCopy(&cVar14, "hahahakeepup", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_02"))
												{
													StringCopy(&cVar14, "manthisismeanttobe", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_03"))
												{
													StringCopy(&cVar14, "rememberthis", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_04"))
												{
													StringCopy(&cVar14, "cmonfrank", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_05"))
												{
													StringCopy(&cVar14, "youaintfuckin", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_06"))
												{
													StringCopy(&cVar14, "skoolinyoass", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_07"))
												{
													StringCopy(&cVar14, "keeppoping", 24);
												}
												else
												{
													StringCopy(&cVar14, "cmonmynigga", 24);
												}
												if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_394))
												{
													TASK::TASK_PLAY_ANIM(Local_473.f_0, sLocal_394, &cVar14, 8f, -8f, -1, 32, 0f, false, false, false);
												}
												iLocal_226 = 1;
											}
										}
									}
								}
								else if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_RESP", 7, 0, 0, 0))
								{
									iLocal_294 = MISC::GET_GAME_TIMER();
									iLocal_226 = 0;
								}
							}
							if (!iLocal_227)
							{
								if (!iLocal_226)
								{
									if (!iLocal_268[26])
									{
										if (fLocal_269 > 8000f && fLocal_269 < 15000f)
										{
											if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_RING", 7, 0, 0, 0))
											{
												iLocal_268[26] = 1;
												bLocal_247 = true;
											}
										}
									}
									else if (!iLocal_268[72])
									{
										if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_INDIC", 7, 0, 0, 0))
										{
											iLocal_268[72] = 1;
											iLocal_227 = 1;
										}
									}
									if (fVar5 < 2500f)
									{
										if (fLocal_269 > 42000f && fLocal_269 < 43000f)
										{
											iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_269 > 48000f && fLocal_269 < 49000f)
										{
											iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_269 > 49000f && fLocal_269 < 52000f)
										{
											if (!iLocal_268[73])
											{
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
												{
													if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_STDIO", 7, 0, 0, 0))
													{
														iLocal_227 = 0;
														iLocal_226 = 0;
														iLocal_268[73] = 1;
													}
												}
												else if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_STDIO2", 7, 0, 0, 0))
												{
													iLocal_227 = 0;
													iLocal_226 = 0;
													iLocal_268[73] = 1;
												}
											}
										}
										if (fLocal_269 > 61000f && fLocal_269 < 62000f)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_ALLEY", 7, 0, 0, 0);
											}
											else
											{
												iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_ALLEY2", 7, 0, 0, 0);
											}
										}
										if (fLocal_269 > 78000f && fLocal_269 < 79000f)
										{
											iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_269 > 95500f && fLocal_269 < 96500f)
										{
											iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_269 > 119300f && fLocal_269 < 120300f)
										{
											iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_269 > 123500f && fLocal_269 < 124500f)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_PARK", 7, 0, 0, 0);
											}
											else
											{
												iLocal_227 = __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_PARK3", 7, 0, 0, 0);
											}
										}
									}
								}
							}
							else if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_OKAY", 7, 0, 0, 0))
							{
								iLocal_227 = 0;
								iLocal_226 = 0;
							}
							if (!iLocal_226 && !iLocal_227)
							{
								if (fLocal_269 > 141500f && fLocal_269 < 142500f)
								{
									if (!iLocal_268[28])
									{
										if (fVar5 < 2500f)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_BANK", 7, 0, 0, 0))
												{
													iLocal_268[28] = 1;
													iLocal_227 = 0;
													iLocal_226 = 0;
												}
											}
											else if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_BANK2", 7, 0, 0, 0))
											{
												iLocal_268[28] = 1;
												iLocal_227 = 0;
												iLocal_226 = 0;
											}
										}
									}
								}
								if (fLocal_269 > 50000f)
								{
									if (!iLocal_268[15])
									{
										if (iLocal_268[0])
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1055.9565f, -480.53818f, 42.981922f, -1169.2477f, -545.51685f, 27.53709f, 24f, false, true, 0))
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_ALIEN", 7, 0, 0, 0))
												{
													iLocal_268[15] = 1;
													iLocal_227 = 0;
													iLocal_226 = 0;
												}
											}
											else
											{
												iLocal_268[15] = 1;
												iLocal_227 = 0;
												iLocal_226 = 0;
											}
										}
									}
								}
								if (fLocal_269 > 87150f && fLocal_269 < 88150f)
								{
									if (!iLocal_268[29])
									{
										if (fVar5 < 2500f)
										{
											if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_HILL", 7, 0, 0, 0))
											{
												iLocal_268[29] = 1;
												iLocal_227 = 0;
												iLocal_226 = 0;
											}
										}
									}
								}
								if (fLocal_269 > 20000f && fVar5 > 6400f)
								{
									if (!bLocal_217)
									{
										if (!iLocal_268[30])
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_328) > 10000)
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_WRONG", 7, 0, 0, 0))
												{
													iLocal_268[30] = 1;
													iLocal_227 = 0;
													iLocal_226 = 0;
													iLocal_326++;
													iLocal_328 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
									if (!iLocal_268[31])
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_329) > 10000 && (MISC::GET_GAME_TIMER() - iLocal_328) > 4000)
										{
											if (fVar5 > 10000f)
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_268[31] = 1;
													iLocal_227 = 0;
													iLocal_226 = 0;
													iLocal_327++;
													iLocal_329 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
									if (!iLocal_268[32])
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_330) > 10000 && (MISC::GET_GAME_TIMER() - iLocal_329) > 4000)
										{
											if (fVar5 > 22500f)
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_268[32] = 1;
													iLocal_227 = 0;
													iLocal_226 = 0;
													iLocal_327++;
													iLocal_330 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								else
								{
									if (iLocal_326 < 4)
									{
										iLocal_268[30] = 1;
									}
									if (iLocal_327 < 5)
									{
										iLocal_268[31] = 1;
										iLocal_268[32] = 1;
									}
								}
								if (((fLocal_269 > 25000f && fLocal_269 < 144600f) && (MISC::GET_GAME_TIMER() - iLocal_307) > 15000) && (MISC::GET_GAME_TIMER() - iLocal_308) > 0)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_308) < 1000 && fVar5 < 400f)
									{
										if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_FRONT4", 7, 0, 0, 0))
										{
											iLocal_227 = 0;
											iLocal_226 = 0;
											iLocal_307 = MISC::GET_GAME_TIMER();
										}
									}
									if (((MISC::GET_GAME_TIMER() - iLocal_308) > 2000 && fVar5 < 3600f) && fVar5 > 400f)
									{
										if (!iLocal_268[33])
										{
											if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_FRONT1", 7, 0, 0, 0))
											{
												iLocal_227 = 0;
												iLocal_226 = 0;
												iLocal_268[33] = 1;
												iLocal_307 = MISC::GET_GAME_TIMER();
											}
										}
										else if (!iLocal_268[34])
										{
											if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_FRONT2", 7, 0, 0, 0))
											{
												iLocal_227 = 0;
												iLocal_226 = 0;
												iLocal_268[34] = 1;
												iLocal_307 = MISC::GET_GAME_TIMER();
											}
										}
										else if (!iLocal_268[35])
										{
											if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_FRONT3", 7, 0, 0, 0))
											{
												iLocal_227 = 0;
												iLocal_226 = 0;
												iLocal_268[35] = 1;
												iLocal_307 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								if ((MISC::GET_GAME_TIMER() - iLocal_306) > 10000)
								{
									if (fVar5 < 2500f)
									{
										if (((fLocal_269 > 17000f && fLocal_269 < 25000f) || (fLocal_269 > 32000f && fLocal_269 < 39500f)) || (fLocal_269 > 102000f && fLocal_269 < 108000f))
										{
											iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
											if (iVar15 == 0)
											{
												sVar16 = "ARM1_CHAT1";
												iVar17 = 65;
											}
											else if (iVar15 == 1)
											{
												sVar16 = "ARM1_CHAT2";
												iVar17 = 66;
											}
											else if (iVar15 == 2)
											{
												sVar16 = "ARM1_CHAT3";
												iVar17 = 67;
											}
											else if (iVar15 == 3)
											{
												sVar16 = "ARM1_CHAT4";
												iVar17 = 68;
											}
											else if (iVar15 == 4)
											{
												sVar16 = "ARM1_CHAT6";
												iVar17 = 70;
											}
											else
											{
												sVar16 = "ARM1_CHAT7";
												iVar17 = 71;
											}
											if (!iLocal_268[16] && !iLocal_268[17])
											{
												if (!iLocal_268[37])
												{
													if (!iLocal_268[26])
													{
														sVar16 = "ARM1_RING";
														iVar17 = 18;
													}
													else
													{
														iLocal_268[37] = 1;
													}
												}
												if (iLocal_268[37])
												{
													if (__LIB_17__::func_617() == 0)
													{
														sVar16 = "ARM1_TOW2";
														iVar17 = 17;
													}
													else
													{
														sVar16 = "ARM1_TOW2";
														iVar17 = 17;
													}
												}
											}
											if (!iLocal_268[iVar17])
											{
												if (__LIB_17__::func_243(&Local_556, "ARM1AUD", sVar16, 7, 0, 0, 0))
												{
													if (MISC::ARE_STRINGS_EQUAL(sVar16, "ARM1_RING"))
													{
														iLocal_268[37] = 1;
														bLocal_247 = true;
													}
													else
													{
														iLocal_227 = 0;
														iLocal_226 = 0;
														iLocal_268[iVar17] = 1;
														iLocal_306 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (fLocal_269 > 10000f)
					{
						bVar18 = false;
						if (((iVar6 == iLocal_193[0] || iVar6 == iLocal_193[1]) || iVar6 == iLocal_193[6]) || iVar6 == iLocal_190[114])
						{
							bVar18 = true;
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_298) > 3000 || (bVar18 && (MISC::GET_GAME_TIMER() - iLocal_298) > 1000))
						{
							if (!__LIB_0__::func_75())
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar6, false) && iVar6 != Local_493[iLocal_286 /*7*/])
								{
									bVar19 = false;
									iVar20 = 0;
									if (bVar18)
									{
										iVar20 = 1;
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar6, Local_493[iLocal_285 /*7*/]))
									{
										bVar19 = true;
									}
									else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar6)) > 2f)
									{
										if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iVar6) - ENTITY::GET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/]))) > 60f)
										{
											iVar20 = 1;
										}
									}
									if (bVar19 || iVar20)
									{
										iLocal_414 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar6, -1, false);
										if (!PED::IS_PED_INJURED(iLocal_414))
										{
											if (bVar19)
											{
												__LIB_0__::func_640(iLocal_414, "GENERIC_CURSE_HIGH", 6);
											}
											else
											{
												__LIB_0__::func_640(iLocal_414, "GENERIC_INSULT_HIGH", 6);
											}
											iLocal_298 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
				if (!bLocal_217)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_493[iLocal_286 /*7*/].f_1))
					{
						func_274();
						Local_493[iLocal_286 /*7*/].f_1 = __LIB_0__::func_639(Local_493[iLocal_286 /*7*/], 0, 0);
					}
					__LIB_14__::func_655(Local_493[iLocal_286 /*7*/].f_1, Local_493[iLocal_286 /*7*/], SYSTEM::SQRT(fVar8), 0.8f, 0);
					if (!iLocal_268[38])
					{
						if (!PED::IS_PED_INJURED(iLocal_415))
						{
							if (bLocal_242)
							{
								__LIB_0__::func_222(&Local_556, 7, iLocal_415, "BABYDICK", 0, 1);
								__LIB_0__::func_709(iLocal_415, "ARM1_CUAA", "BABYDICK", 6);
								iLocal_268[38] = 1;
							}
						}
						else
						{
							iLocal_268[38] = 1;
						}
					}
					if (!iLocal_268[1])
					{
						if (!__LIB_13__::func_755(&Local_495, 2))
						{
							__LIB_0__::func_229("AR1_CHASE", 6000, 0);
							iLocal_268[1] = 1;
						}
					}
					if ((fLocal_269 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_290, sLocal_381) - 6000f) && fVar5 < 400f) || (fLocal_269 > 135000f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 13.991759f, -675.8222f, 31.48455f, 20.46627f, -688.1566f, 34.48455f, 4f, false, true, 0)))
					{
						bLocal_214 = true;
						bLocal_230 = true;
						iLocal_553 = 2;
					}
				}
				else
				{
					Local_365 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_493[iLocal_286 /*7*/], -6f, 0f, 0f) };
					if (!HUD::DOES_BLIP_EXIST(iLocal_420))
					{
						func_274();
						iLocal_420 = __LIB_0__::func_488(Local_365, 0);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_422))
					{
						iLocal_422 = __LIB_0__::func_488(-88.1825f, -675.9736f, 34.2665f, 1);
						HUD::SET_BLIP_ALPHA(iLocal_422, 0);
					}
					if (!iLocal_268[39] && !__LIB_13__::func_755(&Local_495, 2))
					{
						__LIB_0__::func_229("AR1_PARK", 7500, 0);
						iLocal_268[39] = 1;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], true), Local_365) < 25f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						bLocal_214 = false;
						bLocal_230 = false;
						iLocal_553 = 2;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_493[iLocal_285 /*7*/], 25.320662f, -664.57104f, 30.627426f, 13.766054f, -690.20874f, 36.02796f, 12.75f, false, true, 0))
					{
						bLocal_214 = false;
						bLocal_230 = true;
						iLocal_553 = 2;
					}
				}
				if (fLocal_269 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_290, sLocal_381) - 55000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_287, sLocal_381);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_288, sLocal_381);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_289, sLocal_381);
					VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_381);
					if (fLocal_269 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_290, sLocal_381) - 20000f))
					{
						STREAMING::REQUEST_MODEL(joaat("police3"));
						STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
						func_391(1, 0);
						STREAMING::REQUEST_ANIM_DICT("map_objects");
						STREAMING::REQUEST_ANIM_DICT(sLocal_387);
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(Local_493[iLocal_285 /*7*/].f_1))
				{
					func_274();
					Local_493[iLocal_285 /*7*/].f_1 = __LIB_0__::func_639(Local_493[iLocal_285 /*7*/], 0, 0);
				}
				if (__LIB_0__::func_501("AR1_PARK", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (!iLocal_268[40])
				{
					__LIB_0__::func_229("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 0);
					iLocal_268[40] = 1;
				}
				if ((((__LIB_0__::func_1("AR1_CAMHELP") || __LIB_0__::func_1("AR1_HEADHELP")) || __LIB_0__::func_1("AR1_HINTHELP")) || __LIB_0__::func_1("AR1_BRAKE")) || __LIB_0__::func_1("AR1_VEHCAMH"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_387();
				iLocal_227 = 0;
				iLocal_226 = 0;
				if (SYSTEM::VDIST2(Var3, ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], true)) > 40000f)
				{
					func_848(13);
				}
			}
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				if (fVar5 > fVar8)
				{
					func_848(5);
				}
				if (FIRE::IS_ENTITY_ON_FIRE(Local_473.f_0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_348) > 1000)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_473.f_0, 0, 0);
					}
				}
				else
				{
					iLocal_348 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[iLocal_286 /*7*/], false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
			{
				if (SYSTEM::TIMERA() > 10000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_286 /*7*/], true);
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_493[iLocal_286 /*7*/], PLAYER::PLAYER_PED_ID(), true))
					{
						iVar21 = (VEHICLE::GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(Local_493[iLocal_286 /*7*/]) + VEHICLE::GET_VEHICLE_NUM_OF_BROKEN_LOOSEN_PARTS(Local_493[iLocal_286 /*7*/]));
						if ((VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_493[iLocal_286 /*7*/]) < 200f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_493[iLocal_286 /*7*/]) < 200f) || iVar21 > 2)
						{
							func_848(21);
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_350) > 0)
						{
							__LIB_0__::func_640(Local_473.f_0, "GENERIC_INSULT_HIGH", 3);
							TASK::TASK_LOOK_AT_ENTITY(Local_473.f_0, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
							iLocal_350 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_493[iLocal_286 /*7*/]);
						}
					}
				}
			}
			if (FIRE::IS_ENTITY_ON_FIRE(Local_493[iLocal_286 /*7*/]))
			{
				func_848(21);
			}
		}
		if (iLocal_552 == 3)
		{
			__LIB_17__::func_71(&uLocal_561, Local_493[iLocal_286 /*7*/], "AR1_CAMHELP", 0, 1, 1, 1);
		}
		else
		{
			__LIB_17__::func_71(&uLocal_561, Local_493[iLocal_286 /*7*/], "AR1_CAMHELP", 0, 1, 0, 1);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_349) > 5000 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!iLocal_268[78])
				{
					__LIB_0__::func_151("AR1_CAMHELP2", -1);
					iLocal_268[78] = 1;
				}
			}
		}
		else
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE() && __LIB_0__::func_1("AR1_CAMHELP2"))
			{
				HUD::CLEAR_HELP(true);
			}
			iLocal_349 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_552 == 3)
		{
			switch (iLocal_333)
			{
				case 0:
					if (bLocal_247)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_START");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_PHONE_LAMAR");
						}
						iLocal_333++;
					}
					break;
				case 1:
					Var23 = { __LIB_0__::func_486() };
					if (iLocal_268[26])
					{
						if (iLocal_268[72])
						{
							if (!MISC::ARE_STRINGS_EQUAL("ARM1_INDIC", &Var23))
							{
								bVar22 = true;
							}
						}
					}
					else if (iLocal_268[16] || iLocal_268[17])
					{
						if (!MISC::ARE_STRINGS_EQUAL("ARM1_TOW", &Var23) && !MISC::ARE_STRINGS_EQUAL("ARM1_TOW2", &Var23))
						{
							bVar22 = true;
						}
					}
					if (bVar22)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_PHONE_LAMAR");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_FOLLOW_LAMAR"))
						{
							AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_FOLLOW_LAMAR");
						}
						iLocal_333++;
					}
					break;
			}
			switch (iLocal_335)
			{
				case 0:
					if (fLocal_269 > 51500f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1048.1704f, -473.1709f, 43.59984f, -1062.4916f, -486.31387f, 30.664543f, 26.25f, false, true, 0))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_FOLLOW_LAMAR"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_FOLLOW_LAMAR");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_STUDIO"))
							{
								AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_STUDIO");
							}
							iLocal_335++;
						}
					}
					break;
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1214.6995f, -582.26746f, 34.075935f, -1209.0303f, -578.9652f, 21.306465f, 26.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1048.2029f, -472.56686f, 43.38507f, -1046.0137f, -466.9206f, 30.80215f, 45.75f, false, true, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_STUDIO"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_STUDIO");
						}
						iLocal_335++;
					}
					break;
				case 2:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_CANALS"))
					{
						AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_TO_CANALS");
					}
					iLocal_335++;
					break;
				}
		}
		switch (iLocal_336)
		{
			case 0:
				if (fLocal_269 > 80000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1169.1956f, -849.9986f, 21.094818f, -961.9859f, -1197.101f, -1.209268f, 136.5f, false, true, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_CANALS"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_TO_CANALS");
						}
						iLocal_336++;
					}
				}
				break;
			case 1:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_OVER_BRIDGES"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_OVER_BRIDGES");
				}
				iLocal_336++;
				break;
		}
		switch (iLocal_337)
		{
			case 0:
				if (fLocal_269 > 120000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -313.16785f, -834.3452f, 40.87144f, -288.54474f, -647.53125f, 27.050526f, 115.5f, false, true, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_OVER_BRIDGES"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_OVER_BRIDGES");
						}
						iLocal_337++;
					}
				}
				break;
			case 1:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_GARAGE"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_GARAGE");
				}
				iLocal_337++;
				break;
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LAMAR_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_LAMAR_FOCUS_CAM");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LAMAR_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_1_LAMAR_FOCUS_CAM");
		}
		if (!bLocal_229)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
		}
		if (SYSTEM::VDIST2(Var3, -202.4f, -638.9f, 33.7f) < 22500f)
		{
			if (iLocal_442 == 0)
			{
				iLocal_442 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-202.4f, -638.9f, 33.7f, "dt1_02_carpark");
			}
			else if (!INTERIOR::IS_INTERIOR_READY(iLocal_442))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_442);
			}
		}
		else if (SYSTEM::VDIST2(Var3, -202.4f, -638.9f, 33.7f) > 40000f)
		{
			if (iLocal_442 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_442);
				iLocal_442 = 0;
			}
		}
		if (fLocal_269 > 100000f)
		{
			if (SYSTEM::VDIST2(Var3, 34f, -638.5f, 31.6f) < 22500f)
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(46.6f, -624.3f, 32.1f, __LIB_3__::func_80(-1.1f, 0f, 137.4f), 100f, 0);
				}
			}
			else if (SYSTEM::VDIST2(Var3, 34f, -638.5f, 31.6f) > 40000f)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
		}
	}
	if (iLocal_553 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		func_274();
		__LIB_16__::func_18(0);
		func_514(0);
		__LIB_0__::func_424(0);
		__LIB_16__::func_318(&Local_495, 1, 0);
		__LIB_0__::func_345(&uLocal_561, 0, 0);
		if (iLocal_442 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_442);
			iLocal_442 = 0;
		}
		func_1();
		bLocal_215 = false;
		bLocal_216 = false;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			VEHICLE::SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(Local_493[iLocal_286 /*7*/], false);
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_493[iLocal_285 /*7*/], false);
			if (iLocal_232)
			{
				ENTITY::SET_ENTITY_COLLISION(Local_493[iLocal_286 /*7*/], true, false);
				iLocal_232 = 0;
			}
			if ((iLocal_314 - ENTITY::GET_ENTITY_HEALTH(Local_493[iLocal_285 /*7*/])) > 250)
			{
				__LIB_0__::func_681(61, 1);
				bLocal_215 = true;
			}
			if ((iLocal_315 - ENTITY::GET_ENTITY_HEALTH(Local_493[iLocal_286 /*7*/])) > 250)
			{
				bLocal_216 = true;
			}
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_493[iLocal_285 /*7*/], 0f);
		}
		__LIB_17__::func_711(iLocal_403);
		__LIB_37__::func_206(&iLocal_403, 1);
		if (iLocal_318 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_318);
			iLocal_318 = -1;
		}
		if (iLocal_319 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_319);
			iLocal_319 = -1;
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_388);
		STREAMING::REMOVE_ANIM_DICT(sLocal_395);
		STREAMING::REMOVE_ANIM_DICT(sLocal_394);
		STREAMING::REMOVE_ANIM_DICT(sLocal_396);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		AUDIO::SET_AGGRESSIVE_HORNS(false);
		SYSTEM::SETTIMERB(0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		func_515(0);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 5;
	}
	if (iLocal_553 == 3)
	{
		func_905(5, 1);
	}
}

void func_469(int iParam0)//Position - 0x3C3EB
{
	struct<3> Var0;
	if ((MISC::GET_GAME_TIMER() - iLocal_296) > 5000)
	{
		if (!__LIB_13__::func_755(&Local_495, 1))
		{
			if (iParam0 != Local_493[iLocal_286 /*7*/])
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_493[iLocal_285 /*7*/], iParam0, true))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_493[iLocal_285 /*7*/]) > 15f && ENTITY::GET_ENTITY_SPEED(iParam0) > 1f)
						{
							if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/]) - ENTITY::GET_ENTITY_HEADING(iParam0))) > 60f)
							{
								Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_493[iLocal_285 /*7*/], ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
								if (Var0.f_1 < -1.5f && Var0.f_1 > -5f)
								{
									if (MISC::ABSF(Var0.f_0) < 4f)
									{
										if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_NEAR", 7, 0, 0, 0))
										{
											iLocal_296 = MISC::GET_GAME_TIMER();
											if ((fLocal_269 < 144600f && VEHICLE::GET_CONVERTIBLE_ROOF_STATE(Local_493[iLocal_285 /*7*/]) == 2) && ENTITY::IS_ENTITY_UPRIGHT(Local_493[iLocal_285 /*7*/], 90f))
											{
												if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_396) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_396, "learnhowtouseastick", 3))
												{
													TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_396, "learnhowtouseastick", 8f, -8f, -1, 32, 0f, false, false, false);
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
	}
}

void func_470(int iParam0)//Position - 0x3C55E
{
	int iVar0;
	if ((MISC::GET_GAME_TIMER() - iLocal_295) > 2000)
	{
		if (iParam0 != Local_493[iLocal_286 /*7*/])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 9f)
				{
					if ((ENTITY::GET_ENTITY_SPEED(Local_493[iLocal_285 /*7*/]) - ENTITY::GET_ENTITY_SPEED(iParam0)) > 3f || MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/]) - ENTITY::GET_ENTITY_HEADING(iParam0))) > 60f)
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
						if (!PED::IS_PED_INJURED(iVar0))
						{
							VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, false);
							iLocal_295 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_471(var uParam0, float fParam1)//Position - 0x3C609
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if ((((((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 23000f && fParam1 < 25000f)) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 50500f)) || (fParam1 > 60500f && fParam1 < 63500f)) || (fParam1 > 78750f && fParam1 < 80500f)) || (fParam1 > 95750f && fParam1 < 98000f)) || (fParam1 > 110750f && fParam1 < 113000f)) || (fParam1 > 119000f && fParam1 < 121000f)) || (fParam1 > 123750f && fParam1 < 126000f))
		{
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(*uParam0, true);
		}
		if (((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 51000f)) || (fParam1 > 71250f && fParam1 < 73200f)) || (fParam1 > 74250f && fParam1 < 76000f)) || (fParam1 > 110750f && fParam1 < 113500f)) || (fParam1 > 119000f && fParam1 < 121250f))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, true);
		}
		else
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, false);
		}
		if ((((((fParam1 > 23000f && fParam1 < 25000f) || (fParam1 > 61000f && fParam1 < 64000f)) || (fParam1 > 78500f && fParam1 < 81000f)) || (fParam1 > 95750f && fParam1 < 98500f)) || (fParam1 > 115000f && fParam1 < 115750f)) || (fParam1 > 123500f && fParam1 < 126500f))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, true);
		}
		else
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, false);
		}
	}
}

void func_472()//Position - 0x3C8B2
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	int iVar5[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	char cVar13[64];
	char cVar14[64];
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23[4];
	int iVar24;
	int iVar25;
	int iVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	int iVar30;
	char* sVar31;
	struct<3> Var32;
	bVar0 = false;
	bVar1 = false;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (!PED::IS_PED_INJURED(Local_473.f_0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true) };
	}
	if (!iLocal_253)
	{
		bVar4 = false;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[9], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_193[9], PLAYER::PLAYER_PED_ID(), true))
			{
				bVar4 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[10], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_193[10], PLAYER::PLAYER_PED_ID(), true))
			{
				bVar4 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[11], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_193[11], PLAYER::PLAYER_PED_ID(), true))
			{
				bVar4 = true;
			}
		}
		if (bVar4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[9], false))
			{
				iVar5[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_193[9], -1, false);
				if (!PED::IS_PED_INJURED(iVar5[0]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[9]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[9]);
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar5[0], iLocal_193[9], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, true);
					PED::SET_PED_KEEP_TASK(iVar5[0], true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[10], false))
			{
				iVar5[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_193[10], -1, false);
				if (!PED::IS_PED_INJURED(iVar5[1]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[10]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[10]);
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar5[1], iLocal_193[10], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, true);
					PED::SET_PED_KEEP_TASK(iVar5[1], true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[11], false))
			{
				iVar5[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_193[11], -1, false);
				if (!PED::IS_PED_INJURED(iVar5[2]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[11]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[11]);
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar5[2], iLocal_193[11], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, true);
					PED::SET_PED_KEEP_TASK(iVar5[2], true);
				}
			}
			iLocal_253 = 1;
		}
	}
	if (iLocal_186[9] == joaat("cruiser"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[9], false))
		{
			if (!iLocal_233)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_193[9], true), Var2) < 100f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bike_Bell", iLocal_193[9], "ARM_1_SOUNDSET", false, 0);
					iLocal_233 = 1;
				}
			}
		}
		else
		{
			iLocal_233 = 0;
		}
	}
	if (iLocal_186[15] == joaat("packer"))
	{
		if (iLocal_138[15] < 99 && fLocal_269 < (fLocal_107[15] + 10000f))
		{
			if (fLocal_269 > (fLocal_107[15] - 10000f) && !ENTITY::DOES_ENTITY_EXIST(iLocal_405))
			{
				STREAMING::REQUEST_MODEL(joaat("tanker"));
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(993, sLocal_381);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[15], false))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_405))
			{
				if (fLocal_269 < (fLocal_107[15] + 10000f))
				{
					STREAMING::REQUEST_MODEL(joaat("tanker"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")) && !bVar0)
					{
						iLocal_405 = VEHICLE::CREATE_VEHICLE(joaat("tanker"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_193[15], 0f, -10f, 0f), ENTITY::GET_ENTITY_HEADING(iLocal_193[15]), true, true, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_405, true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_193[15], true);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_193[15], iLocal_405, 1f);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
						bVar0 = true;
					}
				}
			}
			else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[15]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_405, false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_405))
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(993, sLocal_381);
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(993, sLocal_381))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_405, 993, sLocal_381, true);
							__LIB_17__::func_710(&iLocal_405, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_193[15]));
						}
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_405, fLocal_270);
					}
				}
				if (!iLocal_218 && (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(iLocal_193[15], true)) < 625f || SYSTEM::VDIST2(Var3, ENTITY::GET_ENTITY_COORDS(iLocal_193[15], true)) < 400f))
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_193[15], 3000, joaat("HELDDOWN"), false);
					iLocal_218 = 1;
				}
			}
			else if (fLocal_269 > (fLocal_107[15] + 10000f) && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_193[15]) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())))
			{
				__LIB_37__::func_206(&(iLocal_193[15]), 0);
				__LIB_37__::func_206(&iLocal_405, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_193[15]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_405))
			{
				__LIB_37__::func_206(&iLocal_405, 0);
			}
		}
	}
	if (iLocal_186[32] == joaat("bus"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[32], false))
		{
			if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(iLocal_193[32], true)) < 900f)
			{
				if (!iLocal_219)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_193[32], 3000, joaat("HELDDOWN"), false);
					if (iLocal_312 == 0)
					{
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_193[32], 2);
						iLocal_312 = MISC::GET_GAME_TIMER();
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 2);
					iLocal_219 = 1;
				}
			}
			if (iLocal_219 && iLocal_312 != 0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_312) > 2000)
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_193[32], 1);
					iLocal_312 = 0;
				}
			}
		}
		else
		{
			iLocal_219 = 0;
			iLocal_312 = 0;
		}
	}
	if (iLocal_186[33] == joaat("burrito3"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[33], false))
		{
			if (!iLocal_260)
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_193[33], 111, 111);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_193[33], 111, 111);
				iLocal_260 = 1;
			}
			if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(iLocal_193[33], true)) < 100f)
			{
				if (!iLocal_220)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_193[33], 2000, joaat("HELDDOWN"), false);
					iLocal_220 = 1;
				}
			}
		}
		else
		{
			iLocal_220 = 0;
			iLocal_260 = 0;
		}
	}
	if (iLocal_186[14] == joaat("benson"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[14], false))
		{
			if (!iLocal_221)
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_193[14], 4, 4);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_193[14], 4, 4);
				iLocal_221 = 1;
			}
		}
		else
		{
			iLocal_221 = 0;
		}
	}
	if (iLocal_184[91] == joaat("maverick"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190[91], false))
		{
			if (!iLocal_222)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_190[91], true, true, false);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_190[91]);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_190[91], 128, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_190[91], 128, 0);
				iLocal_222 = 1;
			}
		}
		else
		{
			iLocal_222 = 0;
		}
	}
	iVar6 = 0;
	bVar7 = false;
	bVar8 = false;
	iVar9 = 0;
	fVar10 = 0f;
	iVar15 = joaat("S_M_M_MovAlien_01");
	if (fLocal_269 < 43000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_481.f_0)
		{
			Local_481[iVar6 /*5*/].f_2 = 0;
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 < Local_482.f_0)
		{
			Local_482[iVar6 /*5*/].f_2 = 0;
			iVar6++;
		}
	}
	else
	{
		iVar6 = 0;
		while (iVar6 < Local_481.f_0)
		{
			if (iVar6 == 0)
			{
				StringCopy(&cVar14, "largegroup_flee_r_f_a", 64);
			}
			else if (iVar6 == 1)
			{
				StringCopy(&cVar14, "largegroup_flee_l_f_b", 64);
			}
			else if (iVar6 == 2)
			{
				StringCopy(&cVar14, "largegroup_flee_l_m_c", 64);
			}
			else if (iVar6 == 3)
			{
				StringCopy(&cVar14, "largegroup_flee_r_m_d", 64);
			}
			if (Local_481[iVar6 /*5*/].f_2 == 0)
			{
				if (fLocal_269 < 55000f)
				{
					STREAMING::REQUEST_MODEL(iVar15);
					STREAMING::REQUEST_ANIM_DICT(sLocal_388);
					if ((STREAMING::HAS_MODEL_LOADED(iVar15) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_388)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							StringCopy(&cVar13, "largegroup_loop_f_a", 64);
						}
						else if (iVar6 == 1)
						{
							StringCopy(&cVar13, "largegroup_loop_f_b", 64);
						}
						else if (iVar6 == 2)
						{
							StringCopy(&cVar13, "largegroup_loop_m_c", 64);
						}
						else if (iVar6 == 3)
						{
							StringCopy(&cVar13, "largegroup_loop_m_d", 64);
						}
						Var11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_388, &cVar13, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0f, 2) };
						Var12 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_388, &cVar13, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0f, 2) };
						Local_481[iVar6 /*5*/] = PED::CREATE_PED(26, iVar15, Var11, Var12.f_2, true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_481[iVar6 /*5*/], Var11, false, false, true);
						TASK::TASK_PLAY_ANIM(Local_481[iVar6 /*5*/], sLocal_388, &cVar13, 1000f, -8f, -1, 9, 0f, false, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_481[iVar6 /*5*/], true);
						ENTITY::SET_ENTITY_COLLISION(Local_481[iVar6 /*5*/], false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481[iVar6 /*5*/], true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_481[iVar6 /*5*/], true);
						if (iVar6 == 2)
						{
							__LIB_0__::func_222(&Local_556, 2, Local_481[iVar6 /*5*/], "EXTRA1", 0, 1);
						}
						else if (iVar6 == 3)
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar15);
							__LIB_0__::func_222(&Local_556, 3, Local_481[iVar6 /*5*/], "EXTRA2", 0, 1);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_481[iVar6 /*5*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_481[iVar6 /*5*/], 3, 0, 0, 0);
						if ((iVar6 % 2) == 0)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_481[iVar6 /*5*/], 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_481[iVar6 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_481[iVar6 /*5*/], 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_481[iVar6 /*5*/], 5, 0, 0, 0);
						}
						Local_481[iVar6 /*5*/].f_2 = 1;
						Local_481[iVar6 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_481[iVar6 /*5*/]))
				{
					fVar10 = SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_481[iVar6 /*5*/], true));
					if (fVar10 < 1600f)
					{
						iVar9 = 1;
					}
					if (Local_481[iVar6 /*5*/].f_2 == 1)
					{
						if (!bVar7)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
							{
								fVar16 = (SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(Local_481[iVar6 /*5*/], true)) / ENTITY::GET_ENTITY_SPEED(Local_493[iLocal_285 /*7*/]));
								fVar17 = (SYSTEM::VDIST(Var3, ENTITY::GET_ENTITY_COORDS(Local_481[iVar6 /*5*/], true)) / ENTITY::GET_ENTITY_SPEED(Local_493[iLocal_286 /*7*/]));
								if (fVar16 < 2f)
								{
									bVar8 = true;
								}
								else if (fVar17 < 3f)
								{
									if (fLocal_270 > 0.7f)
									{
										bVar8 = true;
									}
								}
								bVar7 = true;
							}
						}
						if (bVar8)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_481[iVar6 /*5*/], false);
							ENTITY::SET_ENTITY_COLLISION(Local_481[iVar6 /*5*/], true, false);
							if (iVar6 == 0)
							{
								TASK::TASK_PLAY_ANIM(Local_481[iVar6 /*5*/], sLocal_388, &cVar14, 8f, -8f, -1, 8, 0.05f, false, false, false);
							}
							else if (iVar6 == 1)
							{
								TASK::TASK_PLAY_ANIM(Local_481[iVar6 /*5*/], sLocal_388, &cVar14, 8f, -8f, -1, 8, 0.05f, false, false, false);
							}
							else if (iVar6 == 2)
							{
								TASK::TASK_PLAY_ANIM(Local_481[iVar6 /*5*/], sLocal_388, &cVar14, 8f, -8f, -1, 8, 0.05f, false, false, false);
							}
							else if (iVar6 == 3)
							{
								TASK::TASK_PLAY_ANIM(Local_481[iVar6 /*5*/], sLocal_388, &cVar14, 8f, -8f, -1, 8, 0.05f, false, false, false);
							}
							Local_481[iVar6 /*5*/].f_2++;
						}
					}
					else if (Local_481[iVar6 /*5*/].f_2 == 2)
					{
						if (PED::IS_PED_RAGDOLL(Local_481[iVar6 /*5*/]))
						{
							Local_481[iVar6 /*5*/].f_2 = 100;
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_481[iVar6 /*5*/], sLocal_388, &cVar14, 3) || ENTITY::GET_ENTITY_SPEED(Local_481[iVar6 /*5*/]) < 0.1f)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_481[iVar6 /*5*/], true), Var2) < 100f)
							{
								Local_481[iVar6 /*5*/].f_2 = 100;
							}
						}
					}
					else if (Local_481[iVar6 /*5*/].f_2 == 100)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_481[iVar6 /*5*/], joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
						{
							TASK::TASK_SMART_FLEE_PED(Local_481[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							PED::SET_PED_KEEP_TASK(Local_481[iVar6 /*5*/], true);
						}
					}
				}
				else if (Local_556[2 /*10*/] == Local_481[iVar6 /*5*/])
				{
					__LIB_0__::func_221(&Local_556, 2);
				}
				else if (Local_556[3 /*10*/] == Local_481[iVar6 /*5*/])
				{
					__LIB_0__::func_221(&Local_556, 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_481[iVar6 /*5*/]))
				{
					if ((fLocal_269 > 64000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !bVar1)
					{
						if (!PED::IS_PED_INJURED(Local_481[iVar6 /*5*/]))
						{
							TASK::TASK_SMART_FLEE_PED(Local_481[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							PED::SET_PED_KEEP_TASK(Local_481[iVar6 /*5*/], true);
						}
						func_58(&(Local_481[iVar6 /*5*/]), 0);
						bVar1 = true;
					}
				}
				else if (iVar6 == 0)
				{
					if (iLocal_552 == 4)
					{
						STREAMING::REMOVE_ANIM_DICT(sLocal_388);
					}
				}
			}
			iVar6++;
		}
		if (iVar9 && !iLocal_268[0])
		{
			if (!__LIB_13__::func_755(&Local_495, 1))
			{
				if (!PED::IS_PED_INJURED(Local_556[2 /*10*/]) && !PED::IS_PED_INJURED(Local_556[3 /*10*/]))
				{
					if (__LIB_17__::func_731(&Local_556, "ARM1AUD", "ARM1_EXTRAS2", "ARM1_EXTRAS2_1", 7, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 4.5f, 3);
						iLocal_268[0] = 1;
					}
				}
			}
		}
		bVar7 = false;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < Local_482.f_0)
		{
			if (Local_482[iVar6 /*5*/].f_2 == 0)
			{
				if (fLocal_269 < 55000f)
				{
					STREAMING::REQUEST_MODEL(iVar15);
					STREAMING::REQUEST_ANIM_DICT(sLocal_388);
					if ((STREAMING::HAS_MODEL_LOADED(iVar15) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_388)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							StringCopy(&cVar13, "smallgroup_loop_f_a", 64);
						}
						else if (iVar6 == 1)
						{
							StringCopy(&cVar13, "smallgroup_loop_m_b", 64);
						}
						Var11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_388, &cVar13, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0f, 2) };
						Var12 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_388, &cVar13, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0f, 2) };
						Local_482[iVar6 /*5*/] = PED::CREATE_PED(26, iVar15, Var11, Var12.f_2, true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_482[iVar6 /*5*/], Var11, false, false, true);
						TASK::TASK_PLAY_ANIM(Local_482[iVar6 /*5*/], sLocal_388, &cVar13, 1000f, -8f, -1, 9, 0f, false, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_482[iVar6 /*5*/], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_482[iVar6 /*5*/], true);
						if (iVar6 == 1)
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar15);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_482[iVar6 /*5*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_482[iVar6 /*5*/], 3, 0, 0, 0);
						if ((iVar6 % 2) == 0)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_482[iVar6 /*5*/], 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_482[iVar6 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_482[iVar6 /*5*/], 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_482[iVar6 /*5*/], 5, 0, 0, 0);
						}
						Local_482[iVar6 /*5*/].f_2 = 1;
						Local_482[iVar6 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_482[iVar6 /*5*/]))
				{
					if (iVar6 == 0)
					{
						StringCopy(&cVar14, "smallgroup_flee_f_a", 64);
					}
					else if (iVar6 == 1)
					{
						StringCopy(&cVar14, "smallgroup_flee_m_b", 64);
					}
					if (Local_482[iVar6 /*5*/].f_2 == 1)
					{
						if (!bVar7 && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
						{
							fVar18 = (SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(Local_482[iVar6 /*5*/], true)) / ENTITY::GET_ENTITY_SPEED(Local_493[iLocal_285 /*7*/]));
							bVar8 = fVar18 < 1.8f;
							bVar7 = true;
						}
						if (bVar8)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_482[iVar6 /*5*/], false);
							TASK::TASK_PLAY_ANIM(Local_482[iVar6 /*5*/], sLocal_388, &cVar14, 8f, -8f, -1, 8, 0.05f, false, false, false);
							Local_482[iVar6 /*5*/].f_2++;
						}
					}
					else if (Local_482[iVar6 /*5*/].f_2 == 2)
					{
						if (PED::IS_PED_RAGDOLL(Local_482[iVar6 /*5*/]))
						{
							Local_482[iVar6 /*5*/].f_2 = 100;
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_482[iVar6 /*5*/], sLocal_388, &cVar14, 3))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_482[iVar6 /*5*/], true), Var2) < 100f)
							{
								Local_481[iVar6 /*5*/].f_2 = 100;
							}
						}
						else
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(Local_482[iVar6 /*5*/], sLocal_388, &cVar14, 0.95f);
						}
					}
					else if (Local_481[iVar6 /*5*/].f_2 == 100)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_482[iVar6 /*5*/], joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
						{
							TASK::TASK_SMART_FLEE_PED(Local_482[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							PED::SET_PED_KEEP_TASK(Local_482[iVar6 /*5*/], true);
						}
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_482[iVar6 /*5*/]) && (fLocal_269 > 64000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && !bVar1)
				{
					if (!PED::IS_PED_INJURED(Local_482[iVar6 /*5*/]))
					{
						TASK::TASK_SMART_FLEE_PED(Local_482[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						PED::SET_PED_KEEP_TASK(Local_482[iVar6 /*5*/], true);
					}
					func_58(&(Local_482[iVar6 /*5*/]), 0);
					bVar1 = true;
				}
			}
			iVar6++;
		}
	}
	STATS::STAT_GET_INT(joaat("SP0_KILLS"), &iVar19, -1);
	STATS::STAT_GET_INT(joaat("SP1_KILLS"), &iVar20, -1);
	STATS::STAT_GET_INT(joaat("SP2_KILLS"), &iVar21, -1);
	iVar22 = ((iVar19 + iVar20) + iVar21);
	if (!iLocal_239 && Local_481[0 /*5*/].f_2 > 0)
	{
		if (iVar22 > iLocal_325)
		{
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar23, -1);
			iVar6 = 0;
			while (iVar6 < iVar23)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar23[iVar6]))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar23[iVar6]) == iVar15)
					{
						if (PED::IS_PED_INJURED(iVar23[iVar6]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar23[iVar6], false), ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], false)) < 100f)
							{
								__LIB_0__::func_630(6);
								iLocal_239 = 1;
							}
						}
						else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar23[iVar6], PLAYER::PLAYER_PED_ID(), true))
						{
							__LIB_0__::func_630(6);
							iLocal_239 = 1;
						}
					}
				}
				iVar6++;
			}
		}
		iVar24 = 0;
		while (iVar24 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar26 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar24);
			if (iVar26 == 141)
			{
				SCRIPT::GET_EVENT_DATA(0, iVar24, &iVar25, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar25))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar25) == iVar15)
					{
						__LIB_0__::func_630(6);
						iLocal_239 = 1;
					}
				}
			}
			iVar24++;
		}
	}
	iLocal_325 = iVar22;
	if (fLocal_269 < 20000f)
	{
		Local_492[0 /*5*/].f_2 = 0;
		Local_492[1 /*5*/].f_2 = 0;
	}
	else if (fLocal_269 > 43000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_492.f_0)
		{
			switch (Local_492[iVar6 /*5*/].f_2)
			{
				case 0:
					if (iVar6 == 0)
					{
						Var27 = { -1048.1337f, -476.2388f, 35.805f };
						fVar28 = 316.5925f;
					}
					else
					{
						Var27 = { -1210.1215f, -570.0335f, 26.3435f };
						fVar28 = 295.8782f;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var27) < 40000f)
					{
						STREAMING::REQUEST_MODEL(iLocal_456);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_456) && !bVar0)
						{
							Local_492[iVar6 /*5*/] = PED::CREATE_PED(26, iLocal_456, Var27, fVar28, true, true);
							TASK::TASK_LOOK_AT_ENTITY(Local_492[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_492[iVar6 /*5*/], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_456);
							Local_492[iVar6 /*5*/].f_2++;
							bVar0 = true;
						}
					}
					break;
				case 1:
					bVar29 = false;
					if (!PED::IS_PED_INJURED(Local_492[iVar6 /*5*/]))
					{
						if (iVar6 == 0)
						{
							if (!PED::IS_PED_INJURED(Local_473.f_0))
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_492[iVar6 /*5*/], true)) < 900f || (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true)) < 900f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_492[iVar6 /*5*/], true), ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true)) < 100f))
								{
									bVar29 = true;
								}
							}
						}
						else
						{
							bVar29 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_492[iVar6 /*5*/], true)) < 6400f;
						}
						if (bVar29)
						{
							__LIB_0__::func_640(Local_492[iVar6 /*5*/], "FIGHT", 6);
							Local_492[iVar6 /*5*/].f_2++;
						}
					}
					break;
				case 2:
					if (!PED::IS_PED_INJURED(Local_492[iVar6 /*5*/]))
					{
						if ((!PED::IS_PED_IN_COMBAT(Local_492[iVar6 /*5*/], 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_492[iVar6 /*5*/], joaat("SCRIPT_TASK_COMBAT")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_492[iVar6 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							TASK::TASK_COMBAT_PED(Local_492[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(Local_492[iVar6 /*5*/], true);
						}
					}
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_492[iVar6 /*5*/]))
			{
				if (PED::IS_PED_INJURED(Local_492[iVar6 /*5*/]))
				{
					func_58(&(Local_492[iVar6 /*5*/]), 0);
				}
				else if (fLocal_269 > 66000f)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_492[iVar6 /*5*/], true)) > 10000f)
					{
						func_58(&(Local_492[iVar6 /*5*/]), 0);
					}
				}
			}
			iVar6++;
		}
	}
	if (fLocal_269 < 60000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_488.f_0)
		{
			Local_488[iVar6 /*7*/].f_1 = 0;
			iVar6++;
		}
	}
	else
	{
		iVar30 = joaat("A_C_Seagull");
		sVar31 = "creatures@gull@move";
		iVar6 = 0;
		while (iVar6 < Local_488.f_0)
		{
			if (Local_488[iVar6 /*7*/].f_1 == 0)
			{
				if (fLocal_269 < 72000f)
				{
					STREAMING::REQUEST_MODEL(iVar30);
					STREAMING::REQUEST_ANIM_DICT(sVar31);
					if ((STREAMING::HAS_MODEL_LOADED(iVar30) && STREAMING::HAS_ANIM_DICT_LOADED(sVar31)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							Local_488[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.3756f, -730.0198f, -1161.1345f) + Vector(-0.15f, 0f, 0f), 278.8218f, true, true);
						}
						else if (iVar6 == 1)
						{
							Local_488[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.4617f, -728.611f, -1160.7617f) + Vector(-0.15f, 0f, 0f), 322.6699f, true, true);
						}
						else if (iVar6 == 2)
						{
							Local_488[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.5456f, -727.3837f, -1162.7354f) + Vector(-0.15f, 0f, 0f), 32.0168f, true, true);
						}
						else if (iVar6 == 3)
						{
							Local_488[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.3279f, -730.7355f, -1160.6444f) + Vector(-0.15f, 0f, 0f), 152.0615f, true, true);
						}
						else if (iVar6 == 4)
						{
							Local_488[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.4121f, -730.381f, -1155.0334f) + Vector(-0.15f, 0f, 0f), 352.3865f, true, true);
						}
						else if (iVar6 == 5)
						{
							Local_488[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.7718f, -723.8991f, -1152.808f) + Vector(-0.15f, 0f, 0f), 25.9012f, true, true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar30);
						}
						TASK::TASK_PLAY_ANIM(Local_488[iVar6 /*7*/], sVar31, "idle", 8f, -8f, -1, 9, 0f, false, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_488[iVar6 /*7*/], true);
						PED::SET_PED_CAN_RAGDOLL(Local_488[iVar6 /*7*/], false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_488[iVar6 /*7*/], true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_488[iVar6 /*7*/], true);
						ENTITY::SET_ENTITY_COLLISION(Local_488[iVar6 /*7*/], false, false);
						Local_488[iVar6 /*7*/].f_1 = 1;
						Local_488[iVar6 /*7*/].f_6 = 0f;
						bVar0 = true;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_488[iVar6 /*7*/]))
			{
				if (!PED::IS_PED_INJURED(Local_488[iVar6 /*7*/]))
				{
					switch (Local_488[iVar6 /*7*/].f_1)
					{
						case 1:
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_1_BIRDS", false, -1))
							{
								Var32 = { ENTITY::GET_ENTITY_COORDS(Local_488[iVar6 /*7*/], true) };
								if (SYSTEM::VDIST2(Var2, Var32) < 900f || (SYSTEM::VDIST2(Var3, Var32) < 900f && fLocal_270 > 0.7f))
								{
									if (iVar6 == 0)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Birds", Local_488[iVar6 /*7*/], "ARM_1_SOUNDSET", false, 0);
										if (SYSTEM::VDIST2(Var2, Var32) < 2500f)
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 3);
										}
									}
									Local_488[iVar6 /*7*/].f_2 = MISC::GET_GAME_TIMER();
									Local_488[iVar6 /*7*/].f_1++;
								}
							}
							break;
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_488[iVar6 /*7*/].f_2) > 500)
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_488[iVar6 /*7*/], false);
								ENTITY::SET_ENTITY_COLLISION(Local_488[iVar6 /*7*/], true, false);
								Local_488[iVar6 /*7*/].f_3 = { __LIB_3__::func_80(ENTITY::GET_ENTITY_ROTATION(Local_488[iVar6 /*7*/], 2) + Vector(0f, 0f, 45f)) };
								Local_488[iVar6 /*7*/].f_6 = (Local_488[iVar6 /*7*/].f_6 + ((14f - Local_488[iVar6 /*7*/].f_6) * 0.5f));
								ENTITY::SET_ENTITY_VELOCITY(Local_488[iVar6 /*7*/], Local_488[iVar6 /*7*/].f_3 * Vector(Local_488[iVar6 /*7*/].f_6, Local_488[iVar6 /*7*/].f_6, Local_488[iVar6 /*7*/].f_6));
								TASK::TASK_PLAY_ANIM(Local_488[iVar6 /*7*/], sVar31, "flapping", 4f, -8f, -1, 9, 0f, false, false, false);
								Local_488[iVar6 /*7*/].f_1++;
							}
							break;
						case 3:
							Local_488[iVar6 /*7*/].f_6 = (Local_488[iVar6 /*7*/].f_6 + ((14f - Local_488[iVar6 /*7*/].f_6) * 0.5f));
							ENTITY::SET_ENTITY_VELOCITY(Local_488[iVar6 /*7*/], Local_488[iVar6 /*7*/].f_3 * Vector(Local_488[iVar6 /*7*/].f_6, Local_488[iVar6 /*7*/].f_6, Local_488[iVar6 /*7*/].f_6));
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_488[iVar6 /*7*/], sVar31, "flapping", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(Local_488[iVar6 /*7*/], sVar31, "flapping", 4f);
								Local_488[iVar6 /*7*/].f_1++;
							}
							break;
						case 4:
							Local_488[iVar6 /*7*/].f_6 = (Local_488[iVar6 /*7*/].f_6 + ((14f - Local_488[iVar6 /*7*/].f_6) * 0.5f));
							ENTITY::SET_ENTITY_VELOCITY(Local_488[iVar6 /*7*/], Local_488[iVar6 /*7*/].f_3 * Vector(Local_488[iVar6 /*7*/].f_6, Local_488[iVar6 /*7*/].f_6, Local_488[iVar6 /*7*/].f_6));
							break;
						}
				}
				if ((fLocal_269 > 82000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !bVar1)
				{
					func_58(&(Local_488[iVar6 /*7*/]), 0);
					bVar1 = true;
				}
			}
			else if (iVar6 == 0)
			{
				STREAMING::REMOVE_ANIM_DICT(sVar31);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ARM_1_BIRDS");
			}
			iVar6++;
		}
	}
	if (fLocal_269 < 20000f)
	{
		Local_489.f_2 = 0;
	}
	else if (fLocal_269 > 120000f)
	{
		switch (Local_489.f_2)
		{
			case 0:
				STREAMING::REQUEST_MODEL(iLocal_455);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_455) && !bVar0)
				{
					Local_489.f_0 = PED::CREATE_PED(26, iLocal_455, -73.6282f, -676.848f, 32.9306f, 69.2552f, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_489.f_0, true);
					TASK::TASK_STAND_STILL(Local_489.f_0, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_489.f_0, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_455);
					Local_489.f_2++;
					bVar0 = true;
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(Local_489.f_0))
				{
					if (ENTITY::IS_ENTITY_STATIC(Local_489.f_0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_489.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 2500f)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_489.f_0, false);
						}
					}
					else if ((fLocal_269 < 144600f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_489.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 25f) || fLocal_269 > 145600f)
					{
						Local_489.f_2++;
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(Local_489.f_0))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_489.f_0, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_489.f_0, joaat("SCRIPT_TASK_COMBAT")) != 1)
					{
						__LIB_0__::func_640(Local_489.f_0, "FIGHT", 24);
						TASK::TASK_COMBAT_PED(Local_489.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				break;
		}
		if (Local_489.f_2 > 0)
		{
			if (PED::IS_PED_INJURED(Local_489.f_0))
			{
				func_58(&Local_489, 0);
			}
		}
	}
	if (iLocal_185[14] == joaat("stockade"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_192[14], false))
		{
			if (!ENTITY::IS_ENTITY_STATIC(iLocal_192[14]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_192[14], true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_192[14], false);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_430))
	{
		if (SYSTEM::VDIST2(Var2, -7.1741f, -658.6362f, 33.8238f) < 10000f)
		{
			func_473(-7.1741f, -658.6362f, 33.8238f, 0f, 0f, 4.5837f, 0);
		}
	}
}

int func_473(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x3E526
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_430))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_vault_shutter"));
		if (!bParam2)
		{
			if (iLocal_441 == 0)
			{
				iLocal_441 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-7.9f, -662.2f, 34.7f, "dt1_03_carpark");
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_441);
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_vault_shutter")))
		{
			if (!bParam2)
			{
				if (iLocal_441 != 0)
				{
					if (INTERIOR::IS_INTERIOR_READY(iLocal_441))
					{
						iLocal_430 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_vault_shutter"), Param0, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_430, Param1, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_430, true);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_430, iLocal_441, joaat("GtaMloRoom003"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_vault_shutter"));
						return 1;
					}
				}
			}
			else
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

void func_475(float fParam0, int iParam1, int iParam2)//Position - 0x3E607
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	bool bVar14;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
		fVar2 = SYSTEM::VDIST(Var0, Var1);
		fVar3 = 4.5f;
		fVar4 = 7f;
		fVar5 = 40f;
		fVar6 = 100f;
		fVar7 = 30f;
		fVar8 = 1f;
		fVar9 = 0f;
		fVar10 = 0f;
		fVar11 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(iParam1));
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
		{
			fVar9 = 0.025f;
			fVar10 = -35f;
		}
		else
		{
			fVar9 = 0.01f;
			fVar10 = -15f;
		}
		if (fLocal_269 < 7500f)
		{
			fVar4 = 10f;
			fVar5 = 50f;
		}
		if (fLocal_269 > 8000f && fLocal_269 < 12000f)
		{
			fVar4 = 30f;
			fVar5 = 55f;
		}
		if (fLocal_269 > 26000f && fLocal_269 < 30000f)
		{
			fVar4 = 13f;
			fVar5 = 45f;
		}
		if (fLocal_269 > 40000f && fLocal_269 < 45500f)
		{
			fVar4 = 15f;
			fVar5 = 45f;
		}
		if (fLocal_269 > 46000f && fLocal_269 < 51000f)
		{
			fVar9 = (fVar9 * 0.7f);
			fVar4 = 22f;
			fVar5 = 50f;
		}
		if (fLocal_269 > 60000f && fLocal_269 < 64000f)
		{
			fVar9 = (fVar9 * 0.7f);
			fVar4 = 22f;
			fVar5 = 50f;
		}
		if (fLocal_269 > 65000f && fLocal_269 < 70000f)
		{
			fVar9 = (fVar9 * 0.7f);
			fVar4 = 15f;
			fVar5 = 50f;
		}
		if (fLocal_269 > 77500f && fLocal_269 < 81500f)
		{
			fVar4 = 18f;
			fVar5 = 45f;
		}
		if (fLocal_269 > 83500f && fLocal_269 < 87500f)
		{
			fVar9 = (fVar9 * 0.7f);
			fVar4 = 20f;
			fVar5 = 45f;
		}
		if (fLocal_269 > 87500f && fLocal_269 < 98500f)
		{
			fVar9 = (fVar9 * 0.7f);
			fVar4 = 25f;
			fVar5 = 50f;
		}
		if (fLocal_269 > 108000f && fLocal_269 < 113500f)
		{
			fVar9 = (fVar9 * 0.7f);
			fVar4 = 22f;
			fVar5 = 50f;
		}
		if (fLocal_269 > 119000f && fLocal_269 < 121500f)
		{
			fVar4 = 25f;
			fVar5 = 50f;
		}
		if (fLocal_269 > 122000f && fLocal_269 < 125000f)
		{
			fVar4 = 15f;
			fVar5 = 45f;
		}
		if (fLocal_269 > 126000f && fLocal_269 < 131500f)
		{
			fVar4 = 11f;
			fVar5 = 30f;
			fVar6 = 60f;
		}
		if (fLocal_269 > 131500f && fLocal_269 < 137700f)
		{
			fVar9 = (fVar9 * 0.7f);
			fVar4 = 12f;
			fVar5 = 45f;
		}
		if (fLocal_269 > 140900f && fLocal_269 < 144600f)
		{
			fVar4 = 15f;
			fVar5 = 30f;
		}
		if (fLocal_269 > 145600f && fLocal_269 < 149400f)
		{
			fVar4 = 8f;
			fVar5 = 20f;
			fVar6 = 80f;
		}
		fVar12 = 0f;
		Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
		if (Var13.f_1 < 1f)
		{
			if (fVar2 > fVar5)
			{
				bVar14 = false;
				if (fVar2 > fVar6)
				{
					if (fVar2 > 200f)
					{
						bVar14 = true;
					}
					fVar2 = fVar6;
				}
				fVar12 = ((fVar2 - fVar5) / (fVar6 - fVar5));
				if (ENTITY::IS_ENTITY_ON_SCREEN(iParam2) && !bVar14)
				{
					if (fVar11 > 10f)
					{
						fVar8 = (0.7f - (0.2f * fVar12));
					}
					else
					{
						fVar8 = (0.7f - (0.1f * fVar12));
					}
				}
				else
				{
					fVar8 = (0.7f - (0.5f * fVar12));
				}
				fVar10 = (fVar10 * 0.5f);
			}
			else if (fVar2 > fVar4)
			{
				fVar12 = ((fVar2 - fVar4) / (fVar5 - fVar4));
				fVar8 = (1f - (0.3f * fVar12));
			}
			else
			{
				if (fVar2 < fVar3)
				{
					fVar2 = fVar3;
				}
				fVar12 = ((fVar4 - fVar2) / (fVar4 - fVar3));
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				{
					fVar8 = (1f + (fVar12 * 2f));
				}
				else
				{
					fVar8 = (1f + fVar12);
				}
			}
		}
		else
		{
			if (fVar2 > fVar7)
			{
				fVar2 = fVar7;
			}
			fVar12 = (fVar2 / fVar7);
			if (fVar11 > 0f)
			{
				fVar12 = (fVar12 * 0.5f);
			}
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				fVar8 = (2f + fVar12);
			}
			else if (ENTITY::GET_ENTITY_SPEED(iParam1) < 5f && fVar11 > 0f)
			{
				fVar8 = (0.6f + fVar12);
			}
			else
			{
				fVar8 = (1f + fVar12);
			}
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			fVar8 = 1f;
		}
		if (fLocal_269 < 19000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2013.5215f, -410.92905f, 10.103262f, -2005.1167f, -399.65958f, 15.681062f, 14f, false, true, 0))
			{
				if (fVar8 < 1f)
				{
					fVar8 = 1f;
				}
			}
		}
		if (fLocal_269 > 65000f && fLocal_269 < 78000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1327.7012f, -648.20953f, 35.882713f, -1196.131f, -817.1476f, 13.715324f, 33.75f, false, true, 0))
			{
				if (fLocal_269 < 75000f)
				{
					fVar8 = 1.5f;
				}
				else
				{
					fVar8 = 1.2f;
				}
			}
		}
		if (fLocal_269 > 86500f && fLocal_269 < 96500f)
		{
			if (fVar8 < 0.7f)
			{
				fVar8 = 0.7f;
			}
		}
		if (fLocal_269 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_290, sLocal_381) - 4000f))
		{
			if (fVar8 < 1f)
			{
				fVar8 = 1f;
			}
		}
		else if (fLocal_269 > 137400f)
		{
			if (fVar8 > 1f)
			{
				fVar8 = 1f;
			}
		}
		if (*fParam0 < 1f && fVar8 > *fParam0)
		{
			fVar9 = (fVar9 * 2f);
		}
		if (fVar8 > 1f)
		{
			fVar10 = (fVar10 - ((fVar8 - 1f) * 10f));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_493[iLocal_285 /*7*/], fVar10);
		*fParam0 = (*fParam0 + ((((fVar8 - *fParam0) * fVar9) * 30f) * SYSTEM::TIMESTEP()));
	}
}

void func_476(float fParam0, int iParam1, int iParam2)//Position - 0x3EC7F
{
	float fVar0;
	float fVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		fVar0 = 1f;
		fVar1 = 0.01f;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
		{
			fVar1 = 0.025f;
		}
		if (fLocal_269 < 7500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 8000f && fLocal_269 < 12000f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 26000f && fLocal_269 < 30000f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 20f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 40000f && fLocal_269 < 45500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 46000f && fLocal_269 < 51000f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 45f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 60000f && fLocal_269 < 64000f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 50f, 60f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 77500f && fLocal_269 < 81500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 25f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 83500f && fLocal_269 < 87500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 87500f && fLocal_269 < 98500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 40f, 60f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
			fVar1 = (fVar1 * 0.7f);
		}
		else if (fLocal_269 > 108000f && fLocal_269 < 113500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 35f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 119000f && fLocal_269 < 121500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 35f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 122000f && fLocal_269 < 125000f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 20f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 126000f && fLocal_269 < 131500f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 15f, 30f, 60f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 131500f && fLocal_269 < 137700f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 15f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 140900f && fLocal_269 < 144600f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 15f, 30f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_269 > 145600f && fLocal_269 < 149400f)
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 8f, 20f, 80f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else
		{
			__LIB_15__::func_928(&fVar0, &iParam1, iParam2, 4.5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			fVar0 = 1f;
		}
		if (fLocal_269 < 19000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2013.5215f, -410.92905f, 10.103262f, -2005.1167f, -399.65958f, 15.681062f, 14f, false, true, 0))
			{
				if (fVar0 < 1f)
				{
					fVar0 = 1f;
				}
			}
		}
		if (fLocal_269 > 65000f && fLocal_269 < 78000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1327.7012f, -648.20953f, 35.882713f, -1196.131f, -817.1476f, 13.715324f, 33.75f, false, true, 0))
			{
				if (fLocal_269 < 75000f)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 1.2f;
				}
			}
		}
		if (fLocal_269 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_290, sLocal_381) - 4000f))
		{
			if (fVar0 < 1f)
			{
				fVar0 = 1f;
			}
		}
		else if (fLocal_269 > 137600f)
		{
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
		__LIB_17__::func_85(fParam0, fVar0, fVar1);
	}
}

void func_485(int iParam0, float fParam1)//Position - 0x3F6D8
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_91 = false;
	if (!bLocal_73)
	{
		if (bLocal_72)
		{
			__LIB_15__::func_907();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_73 = true;
		}
	}
	else if (!bLocal_72)
	{
		__LIB_15__::func_912();
		bLocal_73 = false;
	}
	if (bLocal_72)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_66)
	{
		if (iLocal_61)
		{
			fLocal_118 = 0f;
		}
		else
		{
			fLocal_118 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_927(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						bLocal_71 = true;
					}
					else
					{
						bLocal_71 = false;
					}
				}
				fLocal_115 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_116) * fLocal_118));
				if (bLocal_70)
				{
					func_508(iParam0, fLocal_115);
					func_507(iParam0, fLocal_125);
					if (fLocal_120 > 1000f)
					{
						if (iLocal_157 == 0)
						{
							func_506(iParam0, fLocal_125);
						}
						fVar0 = ((fLocal_115 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_157) * 2000f));
						func_505(iParam0, fVar0, fLocal_119);
						iLocal_157++;
						if (iLocal_157 > 2)
						{
							fLocal_120 = 0f;
						}
					}
					else
					{
						iLocal_157 = 0;
						fLocal_120 = (fLocal_120 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_115 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_78)
		{
			if (!iLocal_60)
			{
				func_502(iParam0, ((fParam1 * fLocal_116) * fLocal_118), 0);
				if (!iLocal_81)
				{
				}
				iLocal_81 = 0;
			}
			if (bLocal_63)
			{
				func_501(iParam0);
			}
			if (!iLocal_60)
			{
				func_488(iParam0, ((fParam1 * fLocal_116) * fLocal_118), 0);
			}
		}
		if (iLocal_68)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_195 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_161 = { ENTITY::GET_ENTITY_COORDS(iLocal_195, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_195, &fLocal_99, &fLocal_100, &fLocal_101, &fLocal_102);
				}
			}
			iLocal_68 = 0;
		}
		if (iLocal_67)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_195))
			{
				__LIB_15__::func_908(iLocal_196);
				iLocal_196 = iLocal_195;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_196, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_196, Local_161, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_196, fLocal_99, fLocal_100, fLocal_101, fLocal_102);
			}
			fLocal_114 = fLocal_117;
			iLocal_60 = 1;
			iLocal_67 = 0;
		}
		if (iLocal_60)
		{
			while (!func_486(&iParam0, fLocal_114))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_61 = 1;
		}
		if (iLocal_74)
		{
			iLocal_74 = 0;
		}
	}
}

int func_486(int iParam0, float fParam1)//Position - 0x3F973
{
	if (!iLocal_75)
	{
		iLocal_60 = 1;
		func_413();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_144 == -1)
			{
				while (!func_487(iParam0, iLocal_144, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_65)
				{
					iLocal_61 = 1;
					fLocal_118 = 0f;
					iLocal_145 = 0;
					iLocal_147 = 0;
					iLocal_146 = 0;
					iLocal_141 = 0;
					iLocal_142 = 0;
					iLocal_143 = 0;
					iLocal_148 = 0;
					iLocal_149 = 0;
					iLocal_150 = 0;
				}
			}
		}
		iLocal_75 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_116) * fLocal_118));
				func_487(iParam0, iLocal_144, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_115 = fParam1;
		iLocal_151 = 0;
		iLocal_154 = 0;
		fLocal_130 = 0f;
		fLocal_129 = 0f;
		func_488(*iParam0, ((1f * fLocal_116) * fLocal_118), 1);
		func_502(*iParam0, ((1f * fLocal_116) * fLocal_118), 1);
		func_501(*iParam0);
		if ((iLocal_148 == 0 && iLocal_149 == 0) && iLocal_150 == 0)
		{
			iLocal_61 = 0;
			iLocal_60 = 0;
			iLocal_75 = 0;
			return 1;
		}
	}
	return 0;
}

int func_487(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x3FAA5
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_174);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_174))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_174, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_152 && iParam1 != iLocal_153)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_174, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_174, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_174, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_174, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_174))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_174);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_174, 10f, 786603);
					}
					else if (iParam1 != iLocal_152 && iParam1 != iLocal_153)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_174, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_174, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_174, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_174, true);
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

void func_488(int iParam0, float fParam1, bool bParam2)//Position - 0x3FC8B
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
		iVar0 = iLocal_147;
		while (iVar0 < 38)
		{
			if (iLocal_138[iVar0] != 99)
			{
				if (iLocal_138[iVar0] == 0)
				{
					if (iLocal_137[iVar0] > 0)
					{
						if (!iLocal_60)
						{
							if (fLocal_115 > (fLocal_107[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_896(iLocal_186[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_139[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_186[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_139[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_139[iVar0]), 1);
								iLocal_138[iVar0]++;
								iLocal_149++;
							}
						}
						else
						{
							fVar6 = (fLocal_115 - fLocal_107[iVar0]);
							fVar6 = (fVar6 * fLocal_108[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_499(iLocal_137[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_186[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_139[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_186[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_139[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_139[iVar0]), 1);
									iLocal_138[iVar0]++;
									iLocal_149++;
								}
								else
								{
									iLocal_138[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_138[iVar0] = 99;
					}
				}
				else if (iLocal_138[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_137[iVar0], &cLocal_174);
					if (BitTest(iLocal_139[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
					}
					else if (!bLocal_87 && ((!BitTest(iLocal_139[iVar0], 2) && bVar10) || (BitTest(iLocal_139[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_425());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_425());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_193[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_186[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_186[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_137[iVar0], &cLocal_174))
							{
								if (fLocal_115 >= (fLocal_107[iVar0] - (fLocal_128 * fParam1)))
								{
									if ((iLocal_74 || bParam2) || (!bLocal_91 && !func_498(Local_160[iVar0 /*3*/], Var5, 5f, fLocal_126)))
									{
										if (bLocal_70)
										{
											func_497(Local_160[iVar0 /*3*/], Var5, fLocal_119);
										}
										iLocal_193[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_186[iVar0], Local_160[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_186[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_193[iVar0], 0);
										}
										if (uLocal_83 && !BitTest(iLocal_139[iVar0], 0))
										{
											func_496(iLocal_193[iVar0]);
										}
										if (BitTest(iLocal_139[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_193[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_193[iVar0], Local_160[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_193[iVar0], fLocal_103[iVar0], fLocal_104[iVar0], fLocal_105[iVar0], fLocal_106[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_186[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_186[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_193[iVar0], 5f);
										}
										if (!BitTest(iLocal_139[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_193[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_193[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_193[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_186[iVar0]);
										iLocal_149 = (iLocal_149 - 1);
										iLocal_138[iVar0]++;
										bLocal_91 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_193[iVar0], Local_160[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_193[iVar0], fLocal_103[iVar0], fLocal_104[iVar0], fLocal_105[iVar0], fLocal_106[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_186[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_186[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_193[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_193[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_186[iVar0]);
							iLocal_149 = (iLocal_149 - 1);
							iLocal_138[iVar0]++;
						}
					}
				}
				else if (iLocal_138[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_137[iVar0], &cLocal_174);
					if (!BitTest(iLocal_139[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_139[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
							iVar13 = 2;
						}
						else if (!bLocal_87 && ((!BitTest(iLocal_139[iVar0], 2) && bVar10) || (BitTest(iLocal_139[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_425());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_425());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[iVar0], false))
						{
							if (!bLocal_91 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_193[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_193[iVar0], true), Var5) < 10000f || bParam2) || iLocal_74)
									{
										func_494(&(iLocal_193[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_139[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
					{
						if (fLocal_115 >= fLocal_107[iVar0])
						{
							if (12 > iLocal_142)
							{
								fVar6 = (fLocal_115 - fLocal_107[iVar0]);
								fVar6 = (fVar6 * fLocal_108[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_137[iVar0], &cLocal_174))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_137[iVar0], &cLocal_174))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_193[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_137[iVar0], fVar6, &cLocal_174) };
										if (((!func_498(Var3, Var5, 5f, fLocal_126) && func_498(Var4, Var5, 5f, fLocal_126)) && !iLocal_74) && !bParam2)
										{
											if (!BitTest(iLocal_139[iVar0], 1))
											{
												func_494(&(iLocal_193[iVar0]), iVar13, 1);
											}
											iLocal_142++;
											iLocal_138[iVar0]++;
										}
										else if (((!bLocal_91 || BitTest(iLocal_139[iVar0], 1)) || iLocal_74) || bParam2)
										{
											if (func_487(&(iLocal_193[iVar0]), iLocal_137[iVar0], fVar6, 1, 0, 0, bLocal_89, bLocal_88))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_193[iVar0], (fParam1 * fLocal_108[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
												{
													if (BitTest(iLocal_139[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_193[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_193[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_193[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_186[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_193[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_139[iVar0], 1))
												{
													func_494(&(iLocal_193[iVar0]), iVar13, 1);
												}
												iLocal_142++;
												iLocal_138[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_139[iVar0], 1))
										{
											func_494(&(iLocal_193[iVar0]), iVar13, 1);
										}
										iLocal_142++;
										iLocal_138[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_139[iVar0], 1))
								{
									func_494(&(iLocal_193[iVar0]), iVar13, 1);
								}
								iLocal_142++;
								iLocal_138[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_139[iVar0], 1))
						{
							func_494(&(iLocal_193[iVar0]), iVar13, 1);
						}
						iLocal_142++;
						iLocal_138[iVar0]++;
					}
				}
				else if (iLocal_138[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_193[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_64 && !iLocal_61) && !bLocal_80) && (((!bLocal_89 && !bLocal_88) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_193[iVar0])) || func_493(iLocal_193[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (iLocal_82)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_193[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_925(iLocal_193[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_941(iVar2, iLocal_193[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_489(iLocal_193[iVar0]);
												iLocal_138[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_193[iVar0], (fParam1 * fLocal_108[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[iVar0]);
							}
						}
						else
						{
							iLocal_138[iVar0]++;
						}
					}
					else
					{
						iLocal_138[iVar0]++;
					}
				}
				else if (iLocal_138[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[iVar0]))
						{
							iLocal_138[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_193[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_193[iVar0], (fParam1 * fLocal_108[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_137[iVar0], &cLocal_174))
							{
								if (fLocal_115 > (fLocal_107[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_137[iVar0], &cLocal_174)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_193[iVar0]);
							}
						}
					}
					else
					{
						iLocal_138[iVar0]++;
					}
				}
				else if (iLocal_138[iVar0] == 5)
				{
					if (!iLocal_193[iVar0] == iLocal_197)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_193[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_193[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_193[iVar0]);
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
						if (!bLocal_72 && !bLocal_85)
						{
							if (iLocal_137[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_137[iVar0], &cLocal_174);
							}
						}
						if (!bLocal_62)
						{
							if (!bLocal_90)
							{
								__LIB_15__::func_908(iLocal_193[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_193[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_193[iVar0]));
						}
					}
					iLocal_142 = (iLocal_142 - 1);
					iLocal_138[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_147 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_417();
	}
}

void func_489(int iParam0)//Position - 0x4086C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_419(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_493(int iParam0)//Position - 0x409CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_86)
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

int func_494(var uParam0, int iParam1, bool bParam2)//Position - 0x40A2D
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_15__::func_909(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_183);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_425(), -1, false, false);
				if (bLocal_92)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_425());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_93)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_15__::func_895(iVar0);
			bLocal_91 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_496(int iParam0)//Position - 0x40B3B
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_188 >= -1 && iLocal_189 >= -1)
	{
		while (iVar0 == iLocal_188 || iVar0 == iLocal_189)
		{
			iVar0++;
		}
	}
	else if (iLocal_188 >= -1)
	{
		if (iVar0 == iLocal_188)
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

void func_497(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x40CB4
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_73)
	{
		if (!func_498(Param0, Param1, fParam2, 200f))
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

int func_498(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x40D27
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_73)
		{
			if (!iLocal_60)
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

float func_499(int iParam0)//Position - 0x40D6E
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_174);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_174))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_174);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_174);
	return fVar0;
}

void func_501(int iParam0)//Position - 0x40E24
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
		iVar0 = iLocal_146;
		while (iVar0 < 15)
		{
			switch (iLocal_140[iVar0])
			{
				case 0:
					if (!iLocal_185[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_159[iVar0 /*3*/], fLocal_113, fLocal_113, fLocal_113, false, true, 0))
						{
							iLocal_148++;
							iLocal_140[iVar0]++;
						}
					}
					else
					{
						iLocal_140[iVar0] = 99;
					}
					break;
				case 1:
					if (10 > iLocal_143)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_192[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_185[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_185[iVar0]))
							{
								if ((iLocal_60 || iLocal_74) || (!bLocal_91 && !func_498(Local_159[iVar0 /*3*/], Var1, 5f, fLocal_126)))
								{
									if (bLocal_70)
									{
										func_497(Local_159[iVar0 /*3*/], Var1, fLocal_119);
									}
									iLocal_192[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_185[iVar0], Local_159[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_185[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_192[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_192[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_185[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_192[iVar0], __LIB_15__::func_910()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_192[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_185[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_192[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_192[iVar0], __LIB_15__::func_911()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_192[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_192[iVar0], true);
									iLocal_148 = (iLocal_148 - 1);
									iLocal_143++;
									iLocal_140[iVar0]++;
									bLocal_91 = true;
								}
							}
						}
						else
						{
							iLocal_148 = (iLocal_148 - 1);
							iLocal_143++;
							iLocal_140[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_192[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_192[iVar0], true) };
						}
						if (fLocal_127 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_127 * fLocal_127))
						{
							if (!__LIB_15__::func_941(iLocal_192[iVar0], iParam0, 0))
							{
								if (!bLocal_62)
								{
									__LIB_15__::func_908(iLocal_192[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_192[iVar0]));
								}
								iLocal_143 = (iLocal_143 - 1);
								iLocal_140[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_140[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_146 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_420();
	}
}

void func_502(int iParam0, float fParam1, int iParam2)//Position - 0x4111C
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
			fLocal_115 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_145;
		while (iVar0 < 117 && !bVar17)
		{
			if (iLocal_135[iVar0] != 99)
			{
				if (iLocal_135[iVar0] == 0)
				{
					if (iLocal_134[iVar0] > 0 && iLocal_184[iVar0] != 0)
					{
						if (!iLocal_60)
						{
							if (fLocal_115 < (fLocal_98[iVar0] + 20000f))
							{
								if (fLocal_115 >= (fLocal_98[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_896(iLocal_184[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_136[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_184[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_136[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_136[iVar0]), 1);
									iLocal_150++;
									iLocal_135[iVar0]++;
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
								func_504(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_115 - fLocal_98[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_499(iLocal_134[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_184[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_136[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_184[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_136[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_136[iVar0]), 1);
									iLocal_150++;
									iLocal_135[iVar0]++;
								}
								else
								{
									func_504(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_504(iVar0, 1090519040);
					}
				}
				else if (iLocal_135[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_134[iVar0], &cLocal_174);
					bVar11 = false;
					if (BitTest(iLocal_136[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_87 && ((!BitTest(iLocal_136[iVar0], 2) && bVar13) || (BitTest(iLocal_136[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_425());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_425());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_190[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_184[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_184[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_134[iVar0], &cLocal_174)) && bVar11)
						{
							if (fLocal_115 >= (fLocal_98[iVar0] - (fLocal_128 * fParam1)))
							{
								if ((iLocal_74 || iParam2) || (!bLocal_91 && !func_498(Local_158[iVar0 /*3*/], Var8, 5f, fLocal_126)))
								{
									if (bLocal_70)
									{
										func_497(Local_158[iVar0 /*3*/], Var8, fLocal_119);
									}
									iLocal_190[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_184[iVar0], Local_158[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_184[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_190[iVar0], 0);
									}
									if (uLocal_83 && !BitTest(iLocal_136[iVar0], 0))
									{
										func_496(iLocal_190[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_190[iVar0], Local_158[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_190[iVar0], fLocal_94[iVar0], fLocal_95[iVar0], fLocal_96[iVar0], fLocal_97[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_184[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_184[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_190[iVar0], 5f);
									}
									if (BitTest(iLocal_136[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_190[iVar0], true);
									}
									if (!BitTest(iLocal_136[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_190[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_190[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_190[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_190[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_184[iVar0]);
									iLocal_150 = (iLocal_150 - 1);
									iLocal_135[iVar0]++;
									bLocal_91 = true;
								}
								else if (fLocal_115 > fLocal_98[iVar0])
								{
									iLocal_150 = (iLocal_150 - 1);
									func_504(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_135[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_156 || iLocal_156 == 0)) || iLocal_74) || iParam2)
					{
						if (!BitTest(iLocal_136[iVar0], 1))
						{
							if (BitTest(iLocal_136[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
								iVar15 = 2;
							}
							else if (!bLocal_87 && ((!BitTest(iLocal_136[iVar0], 2) && bVar13) || (BitTest(iLocal_136[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_425());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_425());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_190[iVar0], false))
							{
								if (!bLocal_91 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_190[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_190[iVar0], true), Var8) < 10000f || iParam2) || iLocal_74)
										{
											func_494(&(iLocal_190[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_136[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_134[iVar0], &cLocal_174);
							if (fLocal_115 >= fLocal_98[iVar0])
							{
								if (15 > iLocal_141)
								{
									fVar9 = (fLocal_115 - fLocal_98[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_134[iVar0], &cLocal_174))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_134[iVar0], &cLocal_174))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_190[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_134[iVar0], fVar9, &cLocal_174) };
											if (!func_498(Var6, Var8, 5f, fLocal_126) && func_498(Var7, Var8, 5f, fLocal_126))
											{
												if (!BitTest(iLocal_136[iVar0], 1))
												{
													func_494(&(iLocal_190[iVar0]), iVar15, 0);
												}
												func_504(iVar0, 1090519040);
											}
											else if (((!bLocal_91 || BitTest(iLocal_136[iVar0], 1)) || iLocal_74) || iParam2)
											{
												if (func_487(&(iLocal_190[iVar0]), iLocal_134[iVar0], fVar9, 1, 0, 0, 1, bLocal_88))
												{
													if (!BitTest(iLocal_136[iVar0], 1))
													{
														func_494(&(iLocal_190[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_190[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_190[iVar0], fParam1);
													iLocal_141++;
													iLocal_135[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_136[iVar0], 1))
											{
												func_494(&(iLocal_190[iVar0]), iVar15, 0);
											}
											func_504(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_134[iVar0], &cLocal_174))
									{
										if (!BitTest(iLocal_136[iVar0], 1))
										{
											func_494(&(iLocal_190[iVar0]), iVar15, 0);
										}
										func_504(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_136[iVar0], 1))
									{
										func_494(&(iLocal_190[iVar0]), iVar15, 0);
									}
									func_504(iVar0, 1090519040);
								}
							}
							else if (bLocal_71 && !bLocal_79)
							{
								if (!BitTest(iLocal_136[iVar0], 1))
								{
									func_494(&(iLocal_190[iVar0]), iVar15, 0);
								}
								func_504(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_136[iVar0], 1))
							{
								func_494(&(iLocal_190[iVar0]), iVar15, 0);
							}
							func_504(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_156 = iVar0;
					}
				}
				else if (iLocal_135[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_190[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_190[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_69)
									{
										if ((!bLocal_64 && !iLocal_61) && func_493(iLocal_190[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_155 || iLocal_155 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_926(iLocal_190[iVar0], iVar5) || __LIB_15__::func_941(iVar5, iLocal_190[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_155 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_84 && !BitTest(iLocal_136[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_155 || iLocal_155 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_190[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_155 = iVar0;
										}
									}
									if (bVar18)
									{
										func_489(iLocal_190[iVar0]);
										iLocal_135[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_190[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_190[iVar0]);
							}
						}
						else
						{
							iLocal_135[iVar0]++;
						}
					}
					else
					{
						iLocal_135[iVar0]++;
					}
				}
				else if (iLocal_135[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_190[iVar0]))
						{
							iLocal_135[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_190[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_190[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_190[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_134[iVar0], &cLocal_174))
							{
								if (fLocal_115 > (fLocal_98[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_134[iVar0], &cLocal_174)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_190[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_190[iVar0]);
							}
						}
					}
					else
					{
						iLocal_135[iVar0]++;
					}
				}
				else if (iLocal_135[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_190[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_190[iVar0]);
					}
					iLocal_141 = (iLocal_141 - 1);
					func_504(iVar0, fVar10);
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
			iLocal_145 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_155 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_156 = 0;
		}
	}
	else
	{
		func_421();
	}
}

void func_504(int iParam0, float fParam1)//Position - 0x41CBA
{
	int iVar0;
	if (!iLocal_184[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_184[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_190[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_190[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_190[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_190[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_190[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_93)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_62)
	{
		if (!bLocal_90)
		{
			__LIB_15__::func_895(iVar0);
			__LIB_15__::func_908(iLocal_190[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_190[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_190[iParam0]));
		}
	}
	if (!bLocal_72 && !bLocal_85)
	{
		if (iLocal_134[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_134[iParam0], &cLocal_174);
		}
	}
	iLocal_135[iParam0] = 99;
}

void func_505(int iParam0, float fParam1, float fParam2)//Position - 0x41E15
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
			func_497(Var1, Var4, fVar5);
		}
	}
}

void func_506(int iParam0, float fParam1)//Position - 0x41E98
{
	if (!bLocal_73)
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

void func_507(int iParam0, float fParam1)//Position - 0x41EE6
{
	if (!bLocal_73)
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

void func_508(int iParam0, float fParam1)//Position - 0x41F34
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_129 + 2000f);
		fVar2 = (fLocal_130 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_151 == 0)
				{
					Local_170 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_129) };
					iLocal_151++;
				}
				else if (iLocal_151 == 1)
				{
					Local_171 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_151++;
				}
				else if (!bLocal_91)
				{
					if (Local_170.f_0 > Local_171.f_0)
					{
						fVar3 = Local_170.f_0;
						Local_170.f_0 = Local_171.f_0;
						Local_171.f_0 = fVar3;
					}
					if (Local_170.f_1 > Local_171.f_1)
					{
						fVar3 = Local_170.f_1;
						Local_170.f_1 = Local_171.f_1;
						Local_171.f_1 = fVar3;
					}
					if (Local_170.f_2 > Local_171.f_2)
					{
						fVar3 = Local_170.f_2;
						Local_170.f_2 = Local_171.f_2;
						Local_171.f_2 = fVar3;
					}
					Local_170 = { Local_170 - Vector(fLocal_133, fLocal_133, fLocal_133) };
					Local_171 = { Local_171 + Vector(fLocal_133, fLocal_133, fLocal_133) };
					PATHFIND::SET_ROADS_IN_AREA(Local_170, Local_171, false, false);
					fLocal_129 = fVar1;
					iLocal_151 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_154 == 0)
			{
				Local_172 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_130) };
				iLocal_154++;
			}
			else if (iLocal_154 == 1)
			{
				Local_173 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_154++;
			}
			else if (!bLocal_91 && !bVar4)
			{
				if (Local_172.f_0 > Local_173.f_0)
				{
					fVar3 = Local_172.f_0;
					Local_172.f_0 = Local_173.f_0;
					Local_173.f_0 = fVar3;
				}
				if (Local_172.f_1 > Local_173.f_1)
				{
					fVar3 = Local_172.f_1;
					Local_172.f_1 = Local_173.f_1;
					Local_173.f_1 = fVar3;
				}
				if (Local_172.f_2 > Local_173.f_2)
				{
					fVar3 = Local_172.f_2;
					Local_172.f_2 = Local_173.f_2;
					Local_173.f_2 = fVar3;
				}
				Local_172 = { Local_172 - Vector(fLocal_133, fLocal_133, fLocal_133) };
				Local_173 = { Local_173 + Vector(fLocal_133, fLocal_133, fLocal_133) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_172, Local_173, 1);
				fLocal_130 = fVar2;
				iLocal_154 = 0;
			}
		}
	}
}

void func_511()//Position - 0x4226F
{
	iLocal_81 = 1;
}

void func_512()//Position - 0x4227A
{
	iLocal_74 = 1;
}

void func_514(bool bParam0)//Position - 0x42297
{
	if (bParam0)
	{
		if (iLocal_444 == 0)
		{
			iLocal_444 = PED::ADD_SCENARIO_BLOCKING_AREA(-1196.2294f, -575.14154f, 0.879524f, -1035.9993f, -474.75137f, 68.879524f, false, true, true, true);
		}
		PATHFIND::SET_PED_PATHS_IN_AREA(-1714.3146f, -567.0828f, 30.834576f, -1680.6699f, -557.9427f, 39.834576f, false, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, false, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, false, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(-1287.1616f, -651.963f, 25.4564f, -1256.6211f, -625.6708f, 29.6292f, false, 0);
		PED::SET_PED_NON_CREATION_AREA(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f);
	}
	else
	{
		if (iLocal_444 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_444, false);
			iLocal_444 = 0;
		}
		if (iLocal_445 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_445, false);
			iLocal_445 = 0;
		}
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1714.3146f, -567.0828f, 30.834576f, -1680.6699f, -557.9427f, 39.834576f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1287.1616f, -651.963f, 25.4564f, -1256.6211f, -625.6708f, 29.6292f, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

void func_515(bool bParam0)//Position - 0x4243F
{
	if (bParam0)
	{
		if (!iLocal_248)
		{
			ENTITY::CREATE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"), true);
			ENTITY::CREATE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"), true);
			ENTITY::CREATE_FORCED_OBJECT(-1208.3219f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"), true);
			iLocal_248 = 1;
		}
	}
	else if (iLocal_248)
	{
		ENTITY::REMOVE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"));
		ENTITY::REMOVE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"));
		ENTITY::REMOVE_FORCED_OBJECT(-1208.3219f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"));
		iLocal_248 = 0;
	}
}

void func_517(int iParam0, float fParam1)//Position - 0x4250D
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_512();
			func_487(&iParam0, iLocal_144, fParam1, 1, 0, 1, 0, 0);
			fLocal_115 = fParam1;
			iVar0 = 0;
			while (iVar0 < 38)
			{
				if (iLocal_138[iVar0] > 2 && iLocal_138[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_193[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_193[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_193[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_107[iVar0]);
								fVar1 = (fVar1 * fLocal_108[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_499(iLocal_137[iVar0]))
									{
										func_487(&(iLocal_193[iVar0]), iLocal_137[iVar0], fVar1, 1, 0, 1, bLocal_89, bLocal_88);
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
						iLocal_138[iVar0] = 99;
						iLocal_142 = (iLocal_142 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 117)
			{
				if (iLocal_135[iVar0] > 2 && iLocal_135[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_190[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_190[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_190[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_98[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_499(iLocal_134[iVar0]))
									{
										func_487(&(iLocal_190[iVar0]), iLocal_134[iVar0], fVar1, 1, 0, 1, 1, bLocal_88);
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
						iLocal_135[iVar0] = 99;
						iLocal_141 = (iLocal_141 - 1);
					}
				}
				iVar0++;
			}
			iLocal_145 = 0;
			iLocal_147 = 0;
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (iLocal_140[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_192[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_192[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_192[iVar0], true, false);
							iLocal_143++;
							iLocal_140[iVar0] = 2;
						}
					}
					else
					{
						iLocal_140[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_146 = 0;
			iLocal_151 = 0;
			iLocal_154 = 0;
			fLocal_130 = fParam1;
			fLocal_129 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_162 = { Var3 - Vector(100f, 100f, 100f) };
			Local_163 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_162, Local_163, false, false);
		}
	}
}

void func_518(float fParam0, float fParam1)//Position - 0x427BC
{
	int iVar0;
	if (fLocal_269 < fParam0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_190)
		{
			if (iLocal_134[iVar0] != 0)
			{
				if (fLocal_98[iVar0] < fParam0 && fLocal_98[iVar0] > (fParam1 - 10000f))
				{
					STREAMING::REQUEST_MODEL(iLocal_184[iVar0]);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_134[iVar0], sLocal_381);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_193)
		{
			if (iLocal_137[iVar0] != 0)
			{
				if (fLocal_107[iVar0] < fParam0 && fLocal_107[iVar0] > (fParam1 - 10000f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_193[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_186[iVar0]);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_137[iVar0], sLocal_381);
				}
			}
			iVar0++;
		}
	}
}

void func_520(int iParam0)//Position - 0x428A0
{
	bLocal_87 = iParam0;
}

void func_521()//Position - 0x428AC
{
	Local_158[0 /*3*/] = { -1869.4471f, -533.4042f, 11.262f };
	fLocal_94[0] = -0.0008f;
	fLocal_95[0] = -0.0089f;
	fLocal_96[0] = 0.4259f;
	fLocal_97[0] = 0.9047f;
	iLocal_134[0] = 47;
	fLocal_98[0] = 2000f;
	iLocal_184[0] = joaat("intruder");
	Local_158[1 /*3*/] = { -2017.4979f, -425.4558f, 11.0772f };
	fLocal_94[1] = -0.0102f;
	fLocal_95[1] = -0.0039f;
	fLocal_96[1] = 0.4351f;
	fLocal_97[1] = 0.9003f;
	iLocal_134[1] = 250;
	fLocal_98[1] = 2050f;
	iLocal_184[1] = joaat("intruder");
	Local_158[2 /*3*/] = { -2140.0793f, -363.5818f, 12.776f };
	fLocal_94[2] = 0.0018f;
	fLocal_95[2] = -0.0046f;
	fLocal_96[2] = 0.8084f;
	fLocal_97[2] = -0.5886f;
	iLocal_134[2] = 251;
	fLocal_98[2] = 2100f;
	iLocal_184[2] = joaat("intruder");
	Local_158[3 /*3*/] = { -1994.4319f, -437.5106f, 11.7305f };
	fLocal_94[3] = -0.0021f;
	fLocal_95[3] = -0.0005f;
	fLocal_96[3] = 0.4319f;
	fLocal_97[3] = 0.9019f;
	iLocal_134[3] = 284;
	fLocal_98[3] = 2500f;
	iLocal_184[3] = joaat("bus");
	Local_158[4 /*3*/] = { -1924.5322f, -488.042f, 11.3844f };
	fLocal_94[4] = -0.0082f;
	fLocal_95[4] = -0.0039f;
	fLocal_96[4] = 0.4332f;
	fLocal_97[4] = 0.9012f;
	iLocal_134[4] = 67;
	fLocal_98[4] = 3000f;
	iLocal_184[4] = joaat("manana");
	Local_158[5 /*3*/] = { -1941.4397f, -481.0277f, 11.408f };
	fLocal_94[5] = -0.0022f;
	fLocal_95[5] = -0.0095f;
	fLocal_96[5] = 0.4264f;
	fLocal_97[5] = 0.9045f;
	iLocal_134[5] = 68;
	fLocal_98[5] = 3050f;
	iLocal_184[5] = joaat("intruder");
	Local_158[6 /*3*/] = { -2057.131f, -404.9521f, 10.7321f };
	fLocal_94[6] = 0.0017f;
	fLocal_95[6] = -0.0034f;
	fLocal_96[6] = 0.9104f;
	fLocal_97[6] = -0.4136f;
	iLocal_134[6] = 30;
	fLocal_98[6] = 5000f;
	iLocal_184[6] = joaat("manana");
	Local_158[7 /*3*/] = { -2036.5444f, -436.0986f, 11.0454f };
	fLocal_94[7] = 0.0002f;
	fLocal_95[7] = 0.0039f;
	fLocal_96[7] = 0.9073f;
	fLocal_97[7] = -0.4204f;
	iLocal_134[7] = 31;
	fLocal_98[7] = 5040f;
	iLocal_184[7] = joaat("manana");
	Local_158[8 /*3*/] = { -1984.7413f, -437.6598f, 11.2996f };
	fLocal_94[8] = -0.0053f;
	fLocal_95[8] = -0.0097f;
	fLocal_96[8] = 0.4337f;
	fLocal_97[8] = 0.901f;
	iLocal_134[8] = 32;
	fLocal_98[8] = 5080f;
	iLocal_184[8] = joaat("intruder");
	Local_158[9 /*3*/] = { -1927.4957f, -498.7926f, 11.3251f };
	fLocal_94[9] = 0.0041f;
	fLocal_95[9] = 0.0017f;
	fLocal_96[9] = 0.4102f;
	fLocal_97[9] = 0.912f;
	iLocal_134[9] = 35;
	fLocal_98[9] = 5120f;
	iLocal_184[9] = joaat("intruder");
	Local_158[10 /*3*/] = { -2114.0156f, -377.4624f, 12.3287f };
	fLocal_94[10] = -0.0107f;
	fLocal_95[10] = -0.0139f;
	fLocal_96[10] = 0.85f;
	fLocal_97[10] = -0.5266f;
	iLocal_134[10] = 36;
	fLocal_98[10] = 5160f;
	iLocal_184[10] = joaat("intruder");
	Local_158[11 /*3*/] = { -2155.5698f, -357.4149f, 12.5796f };
	fLocal_94[11] = -0.0008f;
	fLocal_95[11] = -0.0001f;
	fLocal_96[11] = 0.8151f;
	fLocal_97[11] = -0.5793f;
	iLocal_134[11] = 33;
	fLocal_98[11] = 5200f;
	iLocal_184[11] = joaat("manana");
	Local_158[12 /*3*/] = { -1955.9728f, -417.3983f, 17.2001f };
	fLocal_94[12] = -0.0326f;
	fLocal_95[12] = -0.0247f;
	fLocal_96[12] = 0.4751f;
	fLocal_97[12] = 0.879f;
	iLocal_134[12] = 39;
	fLocal_98[12] = 9500f;
	iLocal_184[12] = joaat("intruder");
	Local_158[13 /*3*/] = { -1760.4513f, -547.8943f, 35.8235f };
	fLocal_94[13] = -0.0664f;
	fLocal_95[13] = -0.0238f;
	fLocal_96[13] = 0.4498f;
	fLocal_97[13] = 0.8904f;
	iLocal_134[13] = 44;
	fLocal_98[13] = 14100f;
	iLocal_184[13] = joaat("manana");
	Local_158[14 /*3*/] = { -1883.8774f, -465.7772f, 23.5569f };
	fLocal_94[14] = -0.0264f;
	fLocal_95[14] = -0.0213f;
	fLocal_96[14] = 0.4694f;
	fLocal_97[14] = 0.8823f;
	iLocal_134[14] = 43;
	fLocal_98[14] = 16733f;
	iLocal_184[14] = joaat("intruder");
	Local_158[15 /*3*/] = { -1844.1317f, -499.3117f, 27.1005f };
	fLocal_94[15] = -0.0111f;
	fLocal_95[15] = 0.0344f;
	fLocal_96[15] = 0.8823f;
	fLocal_97[15] = -0.4693f;
	iLocal_134[15] = 46;
	fLocal_98[15] = 16781f;
	iLocal_184[15] = joaat("intruder");
	Local_158[16 /*3*/] = { -1669.5397f, -574.1034f, 33.3805f };
	fLocal_94[16] = 0.0115f;
	fLocal_95[16] = -0.0228f;
	fLocal_96[16] = 0.8892f;
	fLocal_97[16] = -0.4567f;
	iLocal_134[16] = 252;
	fLocal_98[16] = 20000f;
	iLocal_184[16] = joaat("intruder");
	Local_158[17 /*3*/] = { -1553.6389f, -643.6885f, 28.7234f };
	fLocal_94[17] = 0.0099f;
	fLocal_95[17] = -0.0012f;
	fLocal_96[17] = 0.6289f;
	fLocal_97[17] = 0.7774f;
	iLocal_134[17] = 253;
	fLocal_98[17] = 20050f;
	iLocal_184[17] = joaat("intruder");
	Local_158[18 /*3*/] = { -1612.9589f, -618.0091f, 31.3797f };
	fLocal_94[18] = 0.0086f;
	fLocal_95[18] = -0.026f;
	fLocal_96[18] = 0.9021f;
	fLocal_97[18] = -0.4307f;
	iLocal_134[18] = 254;
	fLocal_98[18] = 20100f;
	iLocal_184[18] = joaat("manana");
	Local_158[19 /*3*/] = { -1598.3412f, -514.3162f, 34.7884f };
	fLocal_94[19] = -0.0217f;
	fLocal_95[19] = -0.001f;
	fLocal_96[19] = 0.9766f;
	fLocal_97[19] = 0.214f;
	iLocal_134[19] = 255;
	fLocal_98[19] = 20150f;
	iLocal_184[19] = joaat("manana");
	Local_158[21 /*3*/] = { -1664.3258f, -561.4086f, 33.5174f };
	fLocal_94[21] = 0.0283f;
	fLocal_95[21] = 0.0288f;
	fLocal_96[21] = 0.2157f;
	fLocal_97[21] = 0.9756f;
	iLocal_134[21] = 50;
	fLocal_98[21] = 21869f;
	iLocal_184[21] = joaat("intruder");
	Local_158[22 /*3*/] = { -1617.1469f, -600.6409f, 32.0157f };
	fLocal_94[22] = 0.026f;
	fLocal_95[22] = 0.0126f;
	fLocal_96[22] = 0.4342f;
	fLocal_97[22] = 0.9003f;
	iLocal_134[22] = 72;
	fLocal_98[22] = 22500f;
	iLocal_184[22] = joaat("manana");
	Local_158[23 /*3*/] = { -1650.5247f, -560.737f, 33.0326f };
	fLocal_94[23] = 0.0204f;
	fLocal_95[23] = -0.0131f;
	fLocal_96[23] = 0.8283f;
	fLocal_97[23] = 0.5597f;
	iLocal_134[23] = 51;
	fLocal_98[23] = 22584f;
	iLocal_184[23] = joaat("manana");
	Local_158[24 /*3*/] = { -1626.837f, -568.3124f, 33.0075f };
	fLocal_94[24] = 0.0218f;
	fLocal_95[24] = 0.0175f;
	fLocal_96[24] = -0.418f;
	fLocal_97[24] = 0.908f;
	iLocal_134[24] = 34;
	fLocal_98[24] = 25000f;
	iLocal_184[24] = joaat("manana");
	Local_158[25 /*3*/] = { -1553.5674f, -492.1296f, 35.1499f };
	fLocal_94[25] = -0.0086f;
	fLocal_95[25] = -0.0063f;
	fLocal_96[25] = 0.87f;
	fLocal_97[25] = 0.4929f;
	iLocal_134[25] = 49;
	fLocal_98[25] = 25050f;
	iLocal_184[25] = joaat("manana");
	Local_158[26 /*3*/] = { -1566.8817f, -512.4595f, 35.1885f };
	fLocal_94[26] = 0.001f;
	fLocal_95[26] = -0.009f;
	fLocal_96[26] = -0.484f;
	fLocal_97[26] = 0.875f;
	iLocal_134[26] = 57;
	fLocal_98[26] = 27000f;
	iLocal_184[26] = joaat("pcj");
	Local_158[27 /*3*/] = { -1405.6613f, -398.7107f, 36.196f };
	fLocal_94[27] = -0.001f;
	fLocal_95[27] = -0.0172f;
	fLocal_96[27] = 0.8676f;
	fLocal_97[27] = 0.4969f;
	iLocal_134[27] = 79;
	fLocal_98[27] = 28900f;
	iLocal_184[27] = joaat("intruder");
	Local_158[29 /*3*/] = { -1385.9791f, -406.3781f, 36.1497f };
	fLocal_94[29] = 0.003f;
	fLocal_95[29] = 0.0057f;
	fLocal_96[29] = -0.4769f;
	fLocal_97[29] = 0.8789f;
	iLocal_134[29] = 256;
	fLocal_98[29] = 30000f;
	iLocal_184[29] = joaat("manana");
	Local_158[30 /*3*/] = { -1511.8464f, -486.1111f, 35.2985f };
	fLocal_94[30] = 0.0015f;
	fLocal_95[30] = 0.001f;
	fLocal_96[30] = -0.4916f;
	fLocal_97[30] = 0.8708f;
	iLocal_134[30] = 61;
	fLocal_98[30] = 30912f;
	iLocal_184[30] = joaat("intruder");
	Local_158[31 /*3*/] = { -1503.2793f, -453.5208f, 35.1137f };
	fLocal_94[31] = 0.0005f;
	fLocal_95[31] = 0.0009f;
	fLocal_96[31] = 0.8742f;
	fLocal_97[31] = 0.4855f;
	iLocal_134[31] = 62;
	fLocal_98[31] = 30962f;
	iLocal_184[31] = joaat("intruder");
	Local_158[32 /*3*/] = { -1441.9612f, -436.8392f, 35.318f };
	fLocal_94[32] = 0.0051f;
	fLocal_95[32] = -0.0027f;
	fLocal_96[32] = -0.4849f;
	fLocal_97[32] = 0.8746f;
	iLocal_134[32] = 60;
	fLocal_98[32] = 31000f;
	iLocal_184[32] = joaat("manana");
	Local_158[33 /*3*/] = { -1429.472f, -475.7137f, 33.7061f };
	fLocal_94[33] = 0.0134f;
	fLocal_95[33] = 0.0239f;
	fLocal_96[33] = 0.2968f;
	fLocal_97[33] = 0.9545f;
	iLocal_134[33] = 56;
	fLocal_98[33] = 31050f;
	iLocal_184[33] = joaat("intruder");
	Local_158[35 /*3*/] = { -1280.4327f, -384.1887f, 36.0295f };
	fLocal_94[35] = 0.0126f;
	fLocal_95[35] = 0.0032f;
	fLocal_96[35] = 0.2431f;
	fLocal_97[35] = 0.9699f;
	iLocal_134[35] = 257;
	fLocal_98[35] = 33000f;
	iLocal_184[35] = joaat("manana");
	Local_158[36 /*3*/] = { -1343.5938f, -355.1015f, 36.2497f };
	fLocal_94[36] = -0.0052f;
	fLocal_95[36] = -0.0032f;
	fLocal_96[36] = 0.8108f;
	fLocal_97[36] = 0.5852f;
	iLocal_134[36] = 69;
	fLocal_98[36] = 33994f;
	iLocal_184[36] = joaat("manana");
	Local_158[37 /*3*/] = { -1216.5325f, -307.827f, 37.3348f };
	fLocal_94[37] = -0.0036f;
	fLocal_95[37] = 0.0027f;
	fLocal_96[37] = -0.5369f;
	fLocal_97[37] = 0.8436f;
	iLocal_134[37] = 65;
	fLocal_98[37] = 35000f;
	iLocal_184[37] = joaat("manana");
	Local_158[38 /*3*/] = { -1105.8495f, -222.9649f, 37.3392f };
	fLocal_94[38] = -0.006f;
	fLocal_95[38] = 0.0021f;
	fLocal_96[38] = 0.8546f;
	fLocal_97[38] = 0.5192f;
	iLocal_134[38] = 258;
	fLocal_98[38] = 36000f;
	iLocal_184[38] = joaat("manana");
	Local_158[39 /*3*/] = { -1080.2947f, -214.4883f, 37.4765f };
	fLocal_94[39] = -0.0017f;
	fLocal_95[39] = -0.0037f;
	fLocal_96[39] = 0.8656f;
	fLocal_97[39] = 0.5006f;
	iLocal_134[39] = 259;
	fLocal_98[39] = 36100f;
	iLocal_184[39] = joaat("intruder");
	Local_158[40 /*3*/] = { -1193.581f, -297.1006f, 37.7095f };
	fLocal_94[40] = -0.001f;
	fLocal_95[40] = 0.0003f;
	fLocal_96[40] = -0.5278f;
	fLocal_97[40] = 0.8494f;
	iLocal_134[40] = 260;
	fLocal_98[40] = 36200f;
	iLocal_184[40] = joaat("burrito3");
	Local_158[41 /*3*/] = { -1020.4266f, -177.1401f, 37.4026f };
	fLocal_94[41] = -0.0125f;
	fLocal_95[41] = 0.0031f;
	fLocal_96[41] = 0.8613f;
	fLocal_97[41] = 0.5079f;
	iLocal_134[41] = 261;
	fLocal_98[41] = 36300f;
	iLocal_184[41] = joaat("intruder");
	Local_158[42 /*3*/] = { -1267.4415f, -336.0135f, 36.4325f };
	fLocal_94[42] = -0.0032f;
	fLocal_95[42] = -0.0065f;
	fLocal_96[42] = -0.51f;
	fLocal_97[42] = 0.8602f;
	iLocal_134[42] = 70;
	fLocal_98[42] = 37000f;
	iLocal_184[42] = joaat("intruder");
	Local_158[44 /*3*/] = { -1272.1207f, -343.9194f, 36.2108f };
	fLocal_94[44] = 0.0064f;
	fLocal_95[44] = -0.004f;
	fLocal_96[44] = -0.5243f;
	fLocal_97[44] = 0.8515f;
	iLocal_134[44] = 75;
	fLocal_98[44] = 37140f;
	iLocal_184[44] = joaat("intruder");
	Local_158[45 /*3*/] = { -1031.8419f, -289.7789f, 37.6673f };
	fLocal_94[45] = -0.007f;
	fLocal_95[45] = -0.0007f;
	fLocal_96[45] = 0.2092f;
	fLocal_97[45] = 0.9778f;
	iLocal_134[45] = 85;
	fLocal_98[45] = 37200f;
	iLocal_184[45] = joaat("burrito3");
	Local_158[48 /*3*/] = { -1284.5294f, -330.2454f, 36.3752f };
	fLocal_94[48] = -0.0032f;
	fLocal_95[48] = -0.0043f;
	fLocal_96[48] = 0.852f;
	fLocal_97[48] = 0.5235f;
	iLocal_134[48] = 201;
	fLocal_98[48] = 37950f;
	iLocal_184[48] = joaat("intruder");
	Local_158[49 /*3*/] = { -961.5755f, -200.8471f, 37.1363f };
	fLocal_94[49] = -0.0379f;
	fLocal_95[49] = 0.02f;
	fLocal_96[49] = 0.8755f;
	fLocal_97[49] = 0.4814f;
	iLocal_134[49] = 262;
	fLocal_98[49] = 39000f;
	iLocal_184[49] = joaat("intruder");
	Local_158[50 /*3*/] = { -1030.5999f, -250.964f, 37.2496f };
	fLocal_94[50] = 0.0131f;
	fLocal_95[50] = 0.0248f;
	fLocal_96[50] = -0.5153f;
	fLocal_97[50] = 0.8565f;
	iLocal_134[50] = 263;
	fLocal_98[50] = 39050f;
	iLocal_184[50] = joaat("manana");
	Local_158[51 /*3*/] = { -1212.0898f, -293.2291f, 37.3428f };
	fLocal_94[51] = 0.0037f;
	fLocal_95[51] = 0.0035f;
	fLocal_96[51] = 0.8554f;
	fLocal_97[51] = 0.5179f;
	iLocal_134[51] = 202;
	fLocal_98[51] = 39600f;
	iLocal_184[51] = joaat("manana");
	Local_158[52 /*3*/] = { -1045.8507f, -276.7056f, 37.2715f };
	fLocal_94[52] = -0.0005f;
	fLocal_95[52] = 0f;
	fLocal_96[52] = 0.9753f;
	fLocal_97[52] = -0.2209f;
	iLocal_134[52] = 73;
	fLocal_98[52] = 40000f;
	iLocal_184[52] = joaat("manana");
	Local_158[53 /*3*/] = { -1018.1578f, -236.3702f, 37.3773f };
	fLocal_94[53] = 0.0028f;
	fLocal_95[53] = -0.0089f;
	fLocal_96[53] = 0.8524f;
	fLocal_97[53] = 0.5227f;
	iLocal_134[53] = 94;
	fLocal_98[53] = 40200f;
	iLocal_184[53] = joaat("intruder");
	Local_158[54 /*3*/] = { -992.8951f, -381.1576f, 37.394f };
	fLocal_94[54] = 0.0005f;
	fLocal_95[54] = -0.0092f;
	fLocal_96[54] = 0.9712f;
	fLocal_97[54] = -0.2382f;
	iLocal_134[54] = 170;
	fLocal_98[54] = 42500f;
	iLocal_184[54] = joaat("manana");
	Local_158[55 /*3*/] = { -943.202f, -420.0762f, 37.3229f };
	fLocal_94[55] = -0.0044f;
	fLocal_95[55] = 0.0127f;
	fLocal_96[55] = 0.8549f;
	fLocal_97[55] = 0.5186f;
	iLocal_134[55] = 264;
	fLocal_98[55] = 43000f;
	iLocal_184[55] = joaat("intruder");
	Local_158[56 /*3*/] = { -973.2485f, -426.7131f, 37.4479f };
	fLocal_94[56] = -0.0159f;
	fLocal_95[56] = -0.0064f;
	fLocal_96[56] = 0.9638f;
	fLocal_97[56] = -0.2662f;
	iLocal_134[56] = 265;
	fLocal_98[56] = 43200f;
	iLocal_184[56] = joaat("intruder");
	Local_158[57 /*3*/] = { -1003.615f, -333.3123f, 36.9974f };
	fLocal_94[57] = 0f;
	fLocal_95[57] = 0f;
	fLocal_96[57] = 0.2417f;
	fLocal_97[57] = 0.9703f;
	iLocal_134[57] = 86;
	fLocal_98[57] = 43753f;
	iLocal_184[57] = joaat("intruder");
	Local_158[58 /*3*/] = { -910.7939f, -480.5219f, 36.1598f };
	fLocal_94[58] = -0.0004f;
	fLocal_95[58] = -0.0009f;
	fLocal_96[58] = 0.8607f;
	fLocal_97[58] = 0.509f;
	iLocal_134[58] = 266;
	fLocal_98[58] = 44000f;
	iLocal_184[58] = joaat("manana");
	Local_158[59 /*3*/] = { -903.4105f, -534.6552f, 34.3315f };
	fLocal_94[59] = 0.025f;
	fLocal_95[59] = 0.0193f;
	fLocal_96[59] = 0.2328f;
	fLocal_97[59] = 0.972f;
	iLocal_134[59] = 267;
	fLocal_98[59] = 44200f;
	iLocal_184[59] = joaat("manana");
	Local_158[60 /*3*/] = { -1001.2458f, -349.769f, 37.5263f };
	fLocal_94[60] = -0.0195f;
	fLocal_95[60] = -0.0038f;
	fLocal_96[60] = 0.2914f;
	fLocal_97[60] = 0.9564f;
	iLocal_134[60] = 89;
	fLocal_98[60] = 45271f;
	iLocal_184[60] = joaat("intruder");
	Local_158[61 /*3*/] = { -944.2744f, -457.4497f, 37.0746f };
	fLocal_94[61] = 0.0051f;
	fLocal_95[61] = -0.0062f;
	fLocal_96[61] = 0.2376f;
	fLocal_97[61] = 0.9713f;
	iLocal_134[61] = 90;
	fLocal_98[61] = 46500f;
	iLocal_184[61] = joaat("intruder");
	Local_158[62 /*3*/] = { -1066.3922f, -457.1241f, 36.0125f };
	fLocal_94[62] = -0.021f;
	fLocal_95[62] = -0.0058f;
	fLocal_96[62] = 0.8835f;
	fLocal_97[62] = -0.468f;
	iLocal_134[62] = 108;
	fLocal_98[62] = 47600f;
	iLocal_184[62] = joaat("manana");
	func_522(62, 0);
	Local_158[63 /*3*/] = { -1372.2f, -703.8073f, 23.8866f };
	fLocal_94[63] = 0.0254f;
	fLocal_95[63] = 0.0194f;
	fLocal_96[63] = -0.435f;
	fLocal_97[63] = 0.8999f;
	iLocal_134[63] = 95;
	fLocal_98[63] = 52500f;
	iLocal_184[63] = joaat("manana");
	Local_158[64 /*3*/] = { -1359.6655f, -694.3884f, 24.9078f };
	fLocal_94[64] = 0.0261f;
	fLocal_95[64] = 0.0166f;
	fLocal_96[64] = -0.4655f;
	fLocal_97[64] = 0.8845f;
	iLocal_134[64] = 13;
	fLocal_98[64] = 54500f;
	iLocal_184[64] = joaat("pcj");
	Local_158[65 /*3*/] = { -1251.4202f, -580.7559f, 27.7332f };
	fLocal_94[65] = 0.0033f;
	fLocal_95[65] = -0.0427f;
	fLocal_96[65] = 0.9369f;
	fLocal_97[65] = -0.347f;
	iLocal_134[65] = 93;
	fLocal_98[65] = 55000f;
	iLocal_184[65] = joaat("intruder");
	Local_158[66 /*3*/] = { -1186.8662f, -629.9144f, 23.4611f };
	fLocal_94[66] = 0.0371f;
	fLocal_95[66] = 0.0124f;
	fLocal_96[66] = 0.3335f;
	fLocal_97[66] = 0.942f;
	iLocal_134[66] = 268;
	fLocal_98[66] = 55050f;
	iLocal_184[66] = joaat("manana");
	Local_158[67 /*3*/] = { -1104.0922f, -750.3582f, 18.9453f };
	fLocal_94[67] = -0.0083f;
	fLocal_95[67] = -0.0215f;
	fLocal_96[67] = 0.9362f;
	fLocal_97[67] = -0.3506f;
	iLocal_134[67] = 115;
	fLocal_98[67] = 66000f;
	iLocal_184[67] = joaat("manana");
	Local_158[68 /*3*/] = { -1100.6582f, -748.1008f, 19.0332f };
	fLocal_94[68] = 0.0156f;
	fLocal_95[68] = -0.0216f;
	fLocal_96[68] = 0.9336f;
	fLocal_97[68] = -0.3572f;
	iLocal_134[68] = 116;
	fLocal_98[68] = 66050f;
	iLocal_184[68] = joaat("pcj");
	Local_158[69 /*3*/] = { -1109.1354f, -719.9675f, 19.9357f };
	fLocal_94[69] = 0.0113f;
	fLocal_95[69] = -0.0008f;
	fLocal_96[69] = 0.3447f;
	fLocal_97[69] = 0.9386f;
	iLocal_134[69] = 154;
	fLocal_98[69] = 66100f;
	iLocal_184[69] = joaat("intruder");
	Local_158[70 /*3*/] = { -1161.2339f, -685.1978f, 21.6411f };
	fLocal_94[70] = -0.0033f;
	fLocal_95[70] = -0.0261f;
	fLocal_96[70] = 0.9396f;
	fLocal_97[70] = -0.3413f;
	iLocal_134[70] = 156;
	fLocal_98[70] = 66500f;
	iLocal_184[70] = joaat("intruder");
	Local_158[71 /*3*/] = { -1094.9194f, -761.551f, 18.9358f };
	fLocal_94[71] = -0.0024f;
	fLocal_95[71] = -0.0034f;
	fLocal_96[71] = 0.9406f;
	fLocal_97[71] = -0.3395f;
	iLocal_134[71] = 272;
	fLocal_98[71] = 69000f;
	iLocal_184[71] = joaat("intruder");
	Local_158[72 /*3*/] = { -1085.7266f, -737.9604f, 18.5164f };
	fLocal_94[72] = 0.0186f;
	fLocal_95[72] = 0.0051f;
	fLocal_96[72] = 0.2729f;
	fLocal_97[72] = 0.9619f;
	iLocal_134[72] = 101;
	fLocal_98[72] = 69902f;
	iLocal_184[72] = joaat("intruder");
	Local_158[73 /*3*/] = { -1191.9774f, -862.7239f, 13.4924f };
	fLocal_94[73] = 0.0167f;
	fLocal_95[73] = -0.0078f;
	fLocal_96[73] = -0.4888f;
	fLocal_97[73] = 0.8722f;
	iLocal_134[73] = 109;
	fLocal_98[73] = 70000f;
	iLocal_184[73] = joaat("pcj");
	Local_158[74 /*3*/] = { -1017.1104f, -801.2603f, 16.2402f };
	fLocal_94[74] = 0.0237f;
	fLocal_95[74] = -0.0005f;
	fLocal_96[74] = 0.5066f;
	fLocal_97[74] = 0.8619f;
	iLocal_134[74] = 269;
	fLocal_98[74] = 70050f;
	iLocal_184[74] = joaat("manana");
	Local_158[75 /*3*/] = { -1042.9668f, -723.3073f, 19.0664f };
	fLocal_94[75] = -0.0227f;
	fLocal_95[75] = -0.0131f;
	fLocal_96[75] = 0.9117f;
	fLocal_97[75] = 0.4101f;
	iLocal_134[75] = 270;
	fLocal_98[75] = 70100f;
	iLocal_184[75] = joaat("manana");
	Local_158[76 /*3*/] = { -986.264f, -811.2874f, 15.3855f };
	fLocal_94[76] = 0.0037f;
	fLocal_95[76] = 0.0064f;
	fLocal_96[76] = 0.497f;
	fLocal_97[76] = 0.8677f;
	iLocal_134[76] = 271;
	fLocal_98[76] = 70150f;
	iLocal_184[76] = joaat("manana");
	Local_158[78 /*3*/] = { -1099.2067f, -723.0576f, 19.5426f };
	fLocal_94[78] = 0.0172f;
	fLocal_95[78] = 0.0138f;
	fLocal_96[78] = 0.2758f;
	fLocal_97[78] = 0.961f;
	iLocal_134[78] = 96;
	fLocal_98[78] = 70242f;
	iLocal_184[78] = joaat("intruder");
	Local_158[79 /*3*/] = { -1128.7385f, -796.869f, 16.4235f };
	fLocal_94[79] = -0.0331f;
	fLocal_95[79] = -0.0425f;
	fLocal_96[79] = 0.9062f;
	fLocal_97[79] = 0.4193f;
	iLocal_134[79] = 104;
	fLocal_98[79] = 74000f;
	iLocal_184[79] = joaat("manana");
	Local_158[80 /*3*/] = { -1155.6365f, -834.2766f, 13.8095f };
	fLocal_94[80] = 0.0081f;
	fLocal_95[80] = -0.0058f;
	fLocal_96[80] = -0.4207f;
	fLocal_97[80] = 0.9071f;
	iLocal_134[80] = 105;
	fLocal_98[80] = 74050f;
	iLocal_184[80] = joaat("manana");
	Local_158[81 /*3*/] = { -1175.9929f, -835.8189f, 13.826f };
	fLocal_94[81] = -0.0051f;
	fLocal_95[81] = 0.0066f;
	fLocal_96[81] = 0.9051f;
	fLocal_97[81] = 0.4251f;
	iLocal_134[81] = 273;
	fLocal_98[81] = 75000f;
	iLocal_184[81] = joaat("intruder");
	Local_158[82 /*3*/] = { -1110.6803f, -919.0346f, 2.2867f };
	fLocal_94[82] = -0.0002f;
	fLocal_95[82] = -0.0064f;
	fLocal_96[82] = 0.8645f;
	fLocal_97[82] = 0.5025f;
	iLocal_134[82] = 203;
	fLocal_98[82] = 82357f;
	iLocal_184[82] = joaat("manana");
	Local_158[83 /*3*/] = { -1014.4996f, -1099.9009f, 1.3071f };
	fLocal_94[83] = -0.0089f;
	fLocal_95[83] = -0.0024f;
	fLocal_96[83] = 0.2603f;
	fLocal_97[83] = 0.9655f;
	iLocal_134[83] = 113;
	fLocal_98[83] = 84818f;
	iLocal_184[83] = joaat("intruder");
	Local_158[84 /*3*/] = { -989.3825f, -1154.4706f, 2.0856f };
	fLocal_94[84] = -0.0107f;
	fLocal_95[84] = 0.0386f;
	fLocal_96[84] = 0.9645f;
	fLocal_97[84] = -0.2611f;
	iLocal_134[84] = 119;
	fLocal_98[84] = 86732f;
	iLocal_184[84] = joaat("intruder");
	Local_158[85 /*3*/] = { -925.1222f, -1200.2721f, 4.4888f };
	fLocal_94[85] = 0.0002f;
	fLocal_95[85] = 0f;
	fLocal_96[85] = 0.8763f;
	fLocal_97[85] = 0.4818f;
	iLocal_134[85] = 134;
	fLocal_98[85] = 92700f;
	iLocal_184[85] = joaat("manana");
	Local_158[86 /*3*/] = { -983.4543f, -1252.4944f, 5.2503f };
	fLocal_94[86] = -0.004f;
	fLocal_95[86] = 0.0161f;
	fLocal_96[86] = -0.5021f;
	fLocal_97[86] = 0.8646f;
	iLocal_134[86] = 274;
	fLocal_98[86] = 93000f;
	iLocal_184[86] = joaat("intruder");
	Local_158[87 /*3*/] = { -849.5126f, -1152.5116f, 6.0559f };
	fLocal_94[87] = -0.0229f;
	fLocal_95[87] = -0.019f;
	fLocal_96[87] = 0.7997f;
	fLocal_97[87] = 0.5997f;
	iLocal_134[87] = 130;
	fLocal_98[87] = 95518f;
	iLocal_184[87] = joaat("manana");
	Local_158[88 /*3*/] = { -848.8896f, -1205.2084f, 5.6769f };
	fLocal_94[88] = -0.0236f;
	fLocal_95[88] = -0.0291f;
	fLocal_96[88] = 0.2576f;
	fLocal_97[88] = 0.9655f;
	iLocal_134[88] = 126;
	fLocal_98[88] = 97000f;
	iLocal_184[88] = joaat("intruder");
	Local_158[89 /*3*/] = { -873.4331f, -1135.9908f, 6.2755f };
	fLocal_94[89] = 0.0124f;
	fLocal_95[89] = -0.0485f;
	fLocal_96[89] = 0.9657f;
	fLocal_97[89] = -0.2547f;
	iLocal_134[89] = 125;
	fLocal_98[89] = 97050f;
	iLocal_184[89] = joaat("manana");
	Local_158[91 /*3*/] = { -667.5715f, -873.9283f, 41.4232f };
	fLocal_94[91] = 0.0242f;
	fLocal_95[91] = -0.0155f;
	fLocal_96[91] = -0.6235f;
	fLocal_97[91] = 0.7813f;
	iLocal_134[91] = 25;
	fLocal_98[91] = 104000f;
	iLocal_184[91] = joaat("maverick");
	Local_158[92 /*3*/] = { -668.2998f, -1048.5413f, 16.3267f };
	fLocal_94[92] = 0.0058f;
	fLocal_95[92] = -0.0334f;
	fLocal_96[92] = 0.8869f;
	fLocal_97[92] = 0.4606f;
	iLocal_134[92] = 26;
	fLocal_98[92] = 104500f;
	iLocal_184[92] = joaat("intruder");
	Local_158[93 /*3*/] = { -646.0926f, -913.8471f, 23.5267f };
	fLocal_94[93] = -0.0178f;
	fLocal_95[93] = -0.0373f;
	fLocal_96[93] = 0.999f;
	fLocal_97[93] = 0.0153f;
	iLocal_134[93] = 136;
	fLocal_98[93] = 106500f;
	iLocal_184[93] = joaat("intruder");
	Local_158[94 /*3*/] = { -636.0123f, -980.1482f, 20.8531f };
	fLocal_94[94] = 0.0095f;
	fLocal_95[94] = -0.0064f;
	fLocal_96[94] = -0.0199f;
	fLocal_97[94] = 0.9997f;
	iLocal_134[94] = 276;
	fLocal_98[94] = 107000f;
	iLocal_184[94] = joaat("manana");
	Local_158[95 /*3*/] = { -679.2947f, -959.8151f, 20.1611f };
	fLocal_94[95] = 0.039f;
	fLocal_95[95] = 0.0031f;
	fLocal_96[95] = -0.7025f;
	fLocal_97[95] = 0.7106f;
	iLocal_134[95] = 277;
	fLocal_98[95] = 108000f;
	iLocal_184[95] = joaat("manana");
	Local_158[96 /*3*/] = { -645.9667f, -872.5993f, 24.0909f };
	fLocal_94[96] = -0.0308f;
	fLocal_95[96] = 0.003f;
	fLocal_96[96] = 0.9995f;
	fLocal_97[96] = -0.0065f;
	iLocal_134[96] = 278;
	fLocal_98[96] = 108050f;
	iLocal_184[96] = joaat("manana");
	Local_158[97 /*3*/] = { -532.2497f, -1015.1015f, 22.4589f };
	fLocal_94[97] = 0.0006f;
	fLocal_95[97] = 0.0229f;
	fLocal_96[97] = 0.0582f;
	fLocal_97[97] = 0.998f;
	iLocal_134[97] = 279;
	fLocal_98[97] = 112000f;
	iLocal_184[97] = joaat("manana");
	Local_158[98 /*3*/] = { -492.1226f, -871.4891f, 29.2373f };
	fLocal_94[98] = 0.0305f;
	fLocal_95[98] = -0.0002f;
	fLocal_96[98] = -0.0364f;
	fLocal_97[98] = 0.9989f;
	iLocal_134[98] = 152;
	fLocal_98[98] = 114001f;
	iLocal_184[98] = joaat("manana");
	Local_158[99 /*3*/] = { -477.283f, -845.0166f, 29.9852f };
	fLocal_94[99] = -0.0032f;
	fLocal_95[99] = -0.0105f;
	fLocal_96[99] = 0.7135f;
	fLocal_97[99] = -0.7006f;
	iLocal_134[99] = 148;
	fLocal_98[99] = 116000f;
	iLocal_184[99] = joaat("intruder");
	Local_158[100 /*3*/] = { -517.6269f, -758.5123f, 31.4468f };
	fLocal_94[100] = -0.0165f;
	fLocal_95[100] = -0.026f;
	fLocal_96[100] = 0.9731f;
	fLocal_97[100] = -0.2283f;
	iLocal_134[100] = 280;
	fLocal_98[100] = 117000f;
	iLocal_184[100] = joaat("manana");
	Local_158[101 /*3*/] = { -496.5247f, -816.1506f, 30.0963f };
	fLocal_94[101] = -0.0035f;
	fLocal_95[101] = -0.0011f;
	fLocal_96[101] = -0.0339f;
	fLocal_97[101] = 0.9994f;
	iLocal_134[101] = 281;
	fLocal_98[101] = 117050f;
	iLocal_184[101] = joaat("intruder");
	Local_158[102 /*3*/] = { -502.5592f, -804.7895f, 30.2477f };
	fLocal_94[102] = 0.0037f;
	fLocal_95[102] = -0.0047f;
	fLocal_96[102] = 0.9996f;
	fLocal_97[102] = -0.0291f;
	iLocal_134[102] = 157;
	fLocal_98[102] = 118845f;
	iLocal_184[102] = joaat("intruder");
	Local_158[103 /*3*/] = { -367.6438f, -834.8538f, 31.2414f };
	fLocal_94[103] = -0.0128f;
	fLocal_95[103] = 0.0035f;
	fLocal_96[103] = 0.6848f;
	fLocal_97[103] = 0.7286f;
	iLocal_134[103] = 158;
	fLocal_98[103] = 119000f;
	iLocal_184[103] = joaat("pcj");
	Local_158[104 /*3*/] = { -286.6659f, -846.1884f, 31.3065f };
	fLocal_94[104] = -0.0127f;
	fLocal_95[104] = -0.0018f;
	fLocal_96[104] = 0.6461f;
	fLocal_97[104] = 0.7631f;
	iLocal_134[104] = 282;
	fLocal_98[104] = 120000f;
	iLocal_184[104] = joaat("intruder");
	Local_158[105 /*3*/] = { -233.8871f, -869.6703f, 29.988f };
	fLocal_94[105] = 0.0115f;
	fLocal_95[105] = 0.0067f;
	fLocal_96[105] = 0.5974f;
	fLocal_97[105] = 0.8018f;
	iLocal_134[105] = 283;
	fLocal_98[105] = 120050f;
	iLocal_184[105] = joaat("intruder");
	Local_158[106 /*3*/] = { -507.5561f, -826.8052f, 29.621f };
	fLocal_94[106] = 0f;
	fLocal_95[106] = -0.0021f;
	fLocal_96[106] = 1f;
	fLocal_97[106] = 0.0026f;
	iLocal_134[106] = 155;
	fLocal_98[106] = 120449f;
	iLocal_184[106] = joaat("intruder");
	Local_158[107 /*3*/] = { -387.642f, -844.1628f, 31.0928f };
	fLocal_94[107] = -0.0048f;
	fLocal_95[107] = 0.0048f;
	fLocal_96[107] = 0.735f;
	fLocal_97[107] = -0.6781f;
	iLocal_134[107] = 205;
	fLocal_98[107] = 123701f;
	iLocal_184[107] = joaat("manana");
	Local_158[108 /*3*/] = { -332.0064f, -860.2901f, 31.1178f };
	fLocal_94[108] = -0.0038f;
	fLocal_95[108] = 0.0044f;
	fLocal_96[108] = 0.7627f;
	fLocal_97[108] = -0.6467f;
	iLocal_134[108] = 206;
	fLocal_98[108] = 124493f;
	iLocal_184[108] = joaat("manana");
	Local_158[109 /*3*/] = { -316.7719f, -857.1534f, 31.1568f };
	fLocal_94[109] = -0.003f;
	fLocal_95[109] = 0.0034f;
	fLocal_96[109] = 0.7628f;
	fLocal_97[109] = -0.6466f;
	iLocal_134[109] = 207;
	fLocal_98[109] = 124955f;
	iLocal_184[109] = joaat("manana");
	Local_158[110 /*3*/] = { -369.826f, -661.4047f, 31.1689f };
	fLocal_94[110] = 0.0061f;
	fLocal_95[110] = -0.0061f;
	fLocal_96[110] = -0.7071f;
	fLocal_97[110] = 0.7071f;
	iLocal_134[110] = 166;
	fLocal_98[110] = 130000f;
	iLocal_184[110] = joaat("intruder");
	Local_158[111 /*3*/] = { -248.7058f, -603.2553f, 33.5757f };
	fLocal_94[111] = -0.0274f;
	fLocal_95[111] = -0.0092f;
	fLocal_96[111] = 0.9839f;
	fLocal_97[111] = 0.1762f;
	iLocal_134[111] = 285;
	fLocal_98[111] = 130050f;
	iLocal_184[111] = joaat("intruder");
	Local_158[112 /*3*/] = { -247.1978f, -612.5249f, 33.4505f };
	fLocal_94[112] = -0.0124f;
	fLocal_95[112] = -0.0091f;
	fLocal_96[112] = 0.9849f;
	fLocal_97[112] = 0.1726f;
	iLocal_134[112] = 286;
	fLocal_98[112] = 130100f;
	iLocal_184[112] = joaat("manana");
	Local_158[113 /*3*/] = { -243.4324f, -620.572f, 33.707f };
	fLocal_94[113] = -0.0019f;
	fLocal_95[113] = -0.0092f;
	fLocal_96[113] = 0.9875f;
	fLocal_97[113] = 0.1574f;
	iLocal_134[113] = 287;
	fLocal_98[113] = 130150f;
	iLocal_184[113] = joaat("burrito3");
	Local_158[114 /*3*/] = { -277.3765f, -654.3015f, 32.7939f };
	fLocal_94[114] = -0.0041f;
	fLocal_95[114] = 0.0062f;
	fLocal_96[114] = 0.6547f;
	fLocal_97[114] = 0.7558f;
	iLocal_134[114] = 208;
	fLocal_98[114] = 133831f;
	iLocal_184[114] = joaat("intruder");
	Local_158[115 /*3*/] = { -226.6089f, -599.454f, 33.7347f };
	fLocal_94[115] = 0.0071f;
	fLocal_95[115] = -0.0012f;
	fLocal_96[115] = -0.1741f;
	fLocal_97[115] = 0.9847f;
	iLocal_134[115] = 164;
	fLocal_98[115] = 137506f;
	iLocal_184[115] = joaat("intruder");
	Local_160[0 /*3*/] = { -1829.1702f, -579.5376f, 10.9467f };
	fLocal_103[0] = -0.0059f;
	fLocal_104[0] = -0.0026f;
	fLocal_105[0] = 0.4222f;
	fLocal_106[0] = 0.9065f;
	iLocal_137[0] = 38;
	fLocal_107[0] = 0f;
	fLocal_108[0] = 1f;
	iLocal_186[0] = joaat("manana");
	Local_160[1 /*3*/] = { -1940.0116f, -473.7903f, 11.9182f };
	fLocal_103[1] = -0.004f;
	fLocal_104[1] = 0.0114f;
	fLocal_105[1] = 0.4266f;
	fLocal_106[1] = 0.9043f;
	iLocal_137[1] = 516;
	fLocal_107[1] = 1500f;
	fLocal_108[1] = 1f;
	iLocal_186[1] = joaat("flatbed");
	Local_160[2 /*3*/] = { -1893.9094f, -519.8182f, 11.2157f };
	fLocal_103[2] = 0.001f;
	fLocal_104[2] = 0.0005f;
	fLocal_105[2] = 0.4314f;
	fLocal_106[2] = 0.9022f;
	iLocal_137[2] = 52;
	fLocal_107[2] = 2000f;
	fLocal_108[2] = 1f;
	iLocal_186[2] = joaat("youga");
	Local_160[3 /*3*/] = { -1875.374f, -542.2328f, 11.2263f };
	fLocal_103[3] = -0.007f;
	fLocal_104[3] = -0.0033f;
	fLocal_105[3] = 0.4363f;
	fLocal_106[3] = 0.8998f;
	iLocal_137[3] = 45;
	fLocal_107[3] = 3000f;
	fLocal_108[3] = 1f;
	iLocal_186[3] = joaat("manana");
	Local_160[4 /*3*/] = { -1732.9817f, -524.2459f, 37.3373f };
	fLocal_103[4] = 0.0203f;
	fLocal_104[4] = -0.025f;
	fLocal_105[4] = 0.9005f;
	fLocal_106[4] = -0.4336f;
	iLocal_137[4] = 501;
	fLocal_107[4] = 19000f;
	fLocal_108[4] = 1f;
	iLocal_186[4] = joaat("intruder");
	Local_160[5 /*3*/] = { -1568.3964f, -522.3314f, 34.8755f };
	fLocal_103[5] = -0.001f;
	fLocal_104[5] = 0.0003f;
	fLocal_105[5] = -0.4567f;
	fLocal_106[5] = 0.8896f;
	iLocal_137[5] = 54;
	fLocal_107[5] = 27947f;
	fLocal_108[5] = 1f;
	iLocal_186[5] = joaat("intruder");
	Local_160[6 /*3*/] = { -1405.9943f, -412.4767f, 36.0144f };
	fLocal_103[6] = -0.0127f;
	fLocal_104[6] = 0.0028f;
	fLocal_105[6] = -0.4831f;
	fLocal_106[6] = 0.8754f;
	iLocal_137[6] = 509;
	fLocal_107[6] = 28000f;
	fLocal_108[6] = 1f;
	iLocal_186[6] = joaat("manana");
	Local_160[7 /*3*/] = { -1518.7917f, -386.8024f, 41.1265f };
	fLocal_103[7] = 0.0254f;
	fLocal_104[7] = -0.0525f;
	fLocal_105[7] = 0.9088f;
	fLocal_106[7] = -0.4131f;
	iLocal_137[7] = 23;
	fLocal_107[7] = 29000f;
	fLocal_108[7] = 1f;
	iLocal_186[7] = joaat("intruder");
	Local_160[8 /*3*/] = { -1350.0201f, -427.0193f, 34.9505f };
	fLocal_103[8] = 0.0377f;
	fLocal_104[8] = 0.0064f;
	fLocal_105[8] = 0.3218f;
	fLocal_106[8] = 0.946f;
	iLocal_137[8] = 510;
	fLocal_107[8] = 31000f;
	fLocal_108[8] = 1f;
	iLocal_186[8] = joaat("intruder");
	Local_160[9 /*3*/] = { -1007.4637f, -361.0907f, 37.5214f };
	fLocal_103[9] = -0.0193f;
	fLocal_104[9] = 0.011f;
	fLocal_105[9] = 0.9759f;
	fLocal_106[9] = -0.2173f;
	iLocal_137[9] = 503;
	fLocal_107[9] = 43500f;
	fLocal_108[9] = 1f;
	iLocal_186[9] = joaat("cruiser");
	Local_160[10 /*3*/] = { -1007.2927f, -357.3345f, 37.5357f };
	fLocal_103[10] = -0.0075f;
	fLocal_104[10] = 0.0251f;
	fLocal_105[10] = 0.972f;
	fLocal_106[10] = -0.2335f;
	iLocal_137[10] = 502;
	fLocal_107[10] = 44000f;
	fLocal_108[10] = 1f;
	iLocal_186[10] = joaat("cruiser");
	Local_160[11 /*3*/] = { -1010.9365f, -358.4532f, 37.5252f };
	fLocal_103[11] = -0.0052f;
	fLocal_104[11] = 0.0138f;
	fLocal_105[11] = 0.9724f;
	fLocal_106[11] = -0.233f;
	iLocal_137[11] = 504;
	fLocal_107[11] = 44100f;
	fLocal_108[11] = 1f;
	iLocal_186[11] = joaat("cruiser");
	Local_160[12 /*3*/] = { -1013.8927f, -392.8538f, 36.0627f };
	fLocal_103[12] = 0.0589f;
	fLocal_104[12] = -0.0367f;
	fLocal_105[12] = -0.5154f;
	fLocal_106[12] = 0.8542f;
	iLocal_137[12] = 84;
	fLocal_107[12] = 46000f;
	fLocal_108[12] = 1f;
	iLocal_186[12] = joaat("manana");
	Local_160[14 /*3*/] = { -1294.7389f, -621.9509f, 26.9939f };
	fLocal_103[14] = 0.0257f;
	fLocal_104[14] = 0.0005f;
	fLocal_105[14] = 0.281f;
	fLocal_106[14] = 0.9594f;
	iLocal_137[14] = 511;
	fLocal_107[14] = 55000f;
	fLocal_108[14] = 1f;
	iLocal_186[14] = joaat("benson");
	Local_160[15 /*3*/] = { -1138.3113f, -811.2895f, 15.7751f };
	fLocal_103[15] = 0.0298f;
	fLocal_104[15] = -0.0129f;
	fLocal_105[15] = -0.4436f;
	fLocal_106[15] = 0.8956f;
	iLocal_137[15] = 992;
	fLocal_107[15] = 67000f;
	fLocal_108[15] = 1f;
	iLocal_186[15] = joaat("packer");
	Local_160[16 /*3*/] = { -1163.0713f, -741.886f, 19.4365f };
	fLocal_103[16] = -0.002f;
	fLocal_104[16] = -0.0283f;
	fLocal_105[16] = 0.9308f;
	fLocal_106[16] = -0.3644f;
	iLocal_137[16] = 515;
	fLocal_107[16] = 69000f;
	fLocal_108[16] = 1f;
	iLocal_186[16] = joaat("burrito3");
	Local_160[17 /*3*/] = { -1201.0022f, -821.8204f, 14.7233f };
	fLocal_103[17] = -0.016f;
	fLocal_104[17] = -0.0359f;
	fLocal_105[17] = 0.8871f;
	fLocal_106[17] = -0.4599f;
	iLocal_137[17] = 512;
	fLocal_107[17] = 71500f;
	fLocal_108[17] = 1f;
	iLocal_186[17] = joaat("youga");
	Local_160[18 /*3*/] = { -1259.1127f, -907.3938f, 10.8468f };
	fLocal_103[18] = 0.0139f;
	fLocal_104[18] = -0.0091f;
	fLocal_105[18] = -0.4673f;
	fLocal_106[18] = 0.884f;
	iLocal_137[18] = 513;
	fLocal_107[18] = 71600f;
	fLocal_108[18] = 1f;
	iLocal_186[18] = joaat("manana");
	Local_160[19 /*3*/] = { -960.4544f, -1235.3582f, 5.109f };
	fLocal_103[19] = -0.0003f;
	fLocal_104[19] = 0.0005f;
	fLocal_105[19] = -0.5006f;
	fLocal_106[19] = 0.8657f;
	iLocal_137[19] = 11;
	fLocal_107[19] = 83000f;
	fLocal_108[19] = 1f;
	iLocal_186[19] = joaat("benson");
	Local_160[20 /*3*/] = { -1030.3206f, -1135.5731f, 1.6671f };
	fLocal_103[20] = 0.0094f;
	fLocal_104[20] = -0.0037f;
	fLocal_105[20] = -0.4742f;
	fLocal_106[20] = 0.8804f;
	iLocal_137[20] = 507;
	fLocal_107[20] = 88000f;
	fLocal_108[20] = 1f;
	iLocal_186[20] = joaat("intruder");
	Local_160[21 /*3*/] = { -776.4766f, -1115.1191f, 10.0461f };
	fLocal_103[21] = 0.0003f;
	fLocal_104[21] = 0f;
	fLocal_105[21] = 0.8673f;
	fLocal_106[21] = 0.4978f;
	iLocal_137[21] = 20;
	fLocal_107[21] = 96000f;
	fLocal_108[21] = 1f;
	iLocal_186[21] = joaat("manana");
	Local_160[22 /*3*/] = { -729.9686f, -1088.1537f, 11.462f };
	fLocal_103[22] = -0.0111f;
	fLocal_104[22] = -0.0437f;
	fLocal_105[22] = 0.8583f;
	fLocal_106[22] = 0.5112f;
	iLocal_137[22] = 506;
	fLocal_107[22] = 98000f;
	fLocal_108[22] = 1f;
	iLocal_186[22] = joaat("intruder");
	Local_160[23 /*3*/] = { -792.2863f, -1091.0381f, 10.797f };
	fLocal_103[23] = -0.0186f;
	fLocal_104[23] = -0.0192f;
	fLocal_105[23] = 0.9698f;
	fLocal_106[23] = -0.2422f;
	iLocal_137[23] = 12;
	fLocal_107[23] = 100700f;
	fLocal_108[23] = 1f;
	iLocal_186[23] = joaat("benson");
	Local_160[24 /*3*/] = { -733.6007f, -1164.0098f, 9.9703f };
	fLocal_103[24] = -0.0104f;
	fLocal_104[24] = -0.0027f;
	fLocal_105[24] = 0.2836f;
	fLocal_106[24] = 0.9589f;
	iLocal_137[24] = 17;
	fLocal_107[24] = 101000f;
	fLocal_108[24] = 1f;
	iLocal_186[24] = joaat("intruder");
	Local_160[25 /*3*/] = { -799.6644f, -1066.3711f, 11.3241f };
	fLocal_103[25] = 0.0092f;
	fLocal_104[25] = -0.0294f;
	fLocal_105[25] = 0.9687f;
	fLocal_106[25] = -0.2464f;
	iLocal_137[25] = 132;
	fLocal_107[25] = 101500f;
	fLocal_108[25] = 1f;
	iLocal_186[25] = joaat("manana");
	Local_160[26 /*3*/] = { -641.2161f, -945.9627f, 21.1608f };
	fLocal_103[26] = -0.0126f;
	fLocal_104[26] = -0.0188f;
	fLocal_105[26] = 0.9977f;
	fLocal_106[26] = 0.064f;
	iLocal_137[26] = 24;
	fLocal_107[26] = 103000f;
	fLocal_108[26] = 1f;
	iLocal_186[26] = joaat("manana");
	Local_160[28 /*3*/] = { -622.8137f, -964.5755f, 20.95f };
	fLocal_103[28] = -0.0052f;
	fLocal_104[28] = -0.0167f;
	fLocal_105[28] = -0.4032f;
	fLocal_106[28] = 0.915f;
	iLocal_137[28] = 149;
	fLocal_107[28] = 109446f;
	fLocal_108[28] = 1f;
	iLocal_186[28] = joaat("intruder");
	Local_160[29 /*3*/] = { -527.2289f, -948.6147f, 22.9859f };
	fLocal_103[29] = 0.0037f;
	fLocal_104[29] = 0.0266f;
	fLocal_105[29] = -0.1871f;
	fLocal_106[29] = 0.982f;
	iLocal_137[29] = 514;
	fLocal_107[29] = 113000f;
	fLocal_108[29] = 1f;
	iLocal_186[29] = joaat("manana");
	Local_160[30 /*3*/] = { -507.5158f, -866.4927f, 29.2588f };
	fLocal_103[30] = -0.0191f;
	fLocal_104[30] = -0.0472f;
	fLocal_105[30] = 0.9921f;
	fLocal_106[30] = 0.1146f;
	iLocal_137[30] = 22;
	fLocal_107[30] = 114000f;
	fLocal_108[30] = 1f;
	iLocal_186[30] = joaat("intruder");
	Local_160[31 /*3*/] = { -510.2627f, -885.1514f, 27.9052f };
	fLocal_103[31] = -0.0331f;
	fLocal_104[31] = -0.0438f;
	fLocal_105[31] = 0.9805f;
	fLocal_106[31] = 0.1885f;
	iLocal_137[31] = 165;
	fLocal_107[31] = 115000f;
	fLocal_108[31] = 1f;
	iLocal_186[31] = joaat("intruder");
	Local_160[32 /*3*/] = { -387.9428f, -838.6669f, 31.4645f };
	fLocal_103[32] = -0.0002f;
	fLocal_104[32] = 0f;
	fLocal_105[32] = 0.6826f;
	fLocal_106[32] = 0.7308f;
	iLocal_137[32] = 159;
	fLocal_107[32] = 117750f;
	fLocal_108[32] = 0.9f;
	iLocal_186[32] = joaat("bus");
	Local_160[33 /*3*/] = { -358.8373f, -747.3198f, 33.7962f };
	fLocal_103[33] = 0.0007f;
	fLocal_104[33] = -0.0008f;
	fLocal_105[33] = 0.7083f;
	fLocal_106[33] = 0.7059f;
	iLocal_137[33] = 21;
	fLocal_107[33] = 128000f;
	fLocal_108[33] = 1f;
	iLocal_186[33] = joaat("burrito3");
	Local_160[34 /*3*/] = { -142.616f, -753.6062f, 33.9993f };
	fLocal_103[34] = 0.0337f;
	fLocal_104[34] = -0.0062f;
	fLocal_105[34] = -0.173f;
	fLocal_106[34] = 0.9843f;
	iLocal_137[34] = 15;
	fLocal_107[34] = 134600f;
	fLocal_108[34] = 1f;
	iLocal_186[34] = joaat("benson");
	Local_160[35 /*3*/] = { -100.8266f, -622.9727f, 35.7906f };
	fLocal_103[35] = -0.0093f;
	fLocal_104[35] = -0.005f;
	fLocal_105[35] = 0.983f;
	fLocal_106[35] = 0.1832f;
	iLocal_137[35] = 168;
	fLocal_107[35] = 140400f;
	fLocal_108[35] = 1f;
	iLocal_186[35] = joaat("intruder");
	Local_159[0 /*3*/] = { -963.3202f, -453.4057f, 36.7332f };
	fLocal_109[0] = 0.033f;
	fLocal_110[0] = -0.0051f;
	fLocal_111[0] = 0.9744f;
	fLocal_112[0] = -0.2222f;
	iLocal_185[0] = joaat("burrito3");
	Local_159[1 /*3*/] = { -1116.9606f, -779.3914f, 17.4599f };
	fLocal_109[1] = -0.0053f;
	fLocal_110[1] = -0.0372f;
	fLocal_111[1] = 0.5192f;
	fLocal_112[1] = 0.8538f;
	iLocal_185[1] = joaat("intruder");
	Local_159[2 /*3*/] = { -1143.3539f, -748.5402f, 19.1161f };
	fLocal_109[2] = 0.0336f;
	fLocal_110[2] = 0.01f;
	fLocal_111[2] = -0.5869f;
	fLocal_112[2] = 0.8089f;
	iLocal_185[2] = joaat("manana");
	Local_159[3 /*3*/] = { -1129.9711f, -755.3607f, 18.938f };
	fLocal_109[3] = 0.0135f;
	fLocal_110[3] = -0.0293f;
	fLocal_111[3] = 0.8093f;
	fLocal_112[3] = 0.5865f;
	iLocal_185[3] = joaat("intruder");
	Local_159[4 /*3*/] = { -1329.2493f, -396.6274f, 36.1102f };
	fLocal_109[4] = 0f;
	fLocal_110[4] = -0.0024f;
	fLocal_111[4] = 0.9673f;
	fLocal_112[4] = -0.2538f;
	iLocal_185[4] = joaat("manana");
	Local_159[5 /*3*/] = { -1341.7618f, -403.7986f, 36.0021f };
	fLocal_109[5] = -0.005f;
	fLocal_110[5] = -0.0058f;
	fLocal_111[5] = 0.9646f;
	fLocal_112[5] = -0.2634f;
	iLocal_185[5] = joaat("intruder");
	Local_159[6 /*3*/] = { -1322.9462f, -383.0046f, 36.1916f };
	fLocal_109[6] = 0.0043f;
	fLocal_110[6] = 0.0031f;
	fLocal_111[6] = -0.4992f;
	fLocal_112[6] = 0.8665f;
	iLocal_185[6] = joaat("manana");
	Local_159[7 /*3*/] = { -1838.4237f, -510.6184f, 27.6644f };
	fLocal_109[7] = -0.0368f;
	fLocal_110[7] = -0.0152f;
	fLocal_111[7] = 0.8217f;
	fLocal_112[7] = 0.5685f;
	iLocal_185[7] = joaat("intruder");
	Local_159[8 /*3*/] = { -1857.2256f, -498.4425f, 26.0763f };
	fLocal_109[8] = -0.034f;
	fLocal_110[8] = -0.0146f;
	fLocal_111[8] = 0.8269f;
	fLocal_112[8] = 0.5612f;
	iLocal_185[8] = joaat("burrito3");
	Local_159[9 /*3*/] = { -1146.8906f, -850.3187f, 14.2053f };
	fLocal_109[9] = 0.0276f;
	fLocal_110[9] = 0.0353f;
	fLocal_111[9] = -0.4192f;
	fLocal_112[9] = 0.9068f;
	iLocal_185[9] = joaat("packer");
	Local_159[10 /*3*/] = { -358.9616f, -754.4509f, 33.5192f };
	fLocal_109[10] = 0.0094f;
	fLocal_110[10] = 0.0004f;
	fLocal_111[10] = 0.7147f;
	fLocal_112[10] = -0.6994f;
	iLocal_185[10] = joaat("intruder");
	Local_159[11 /*3*/] = { -358.6446f, -768.9286f, 33.5192f };
	fLocal_109[11] = 0.0007f;
	fLocal_110[11] = -0.0093f;
	fLocal_111[11] = 0.7056f;
	fLocal_112[11] = 0.7085f;
	iLocal_185[11] = joaat("intruder");
	Local_159[12 /*3*/] = { -342.1623f, -767.6207f, 33.5187f };
	fLocal_109[12] = 0.0006f;
	fLocal_110[12] = -0.0094f;
	fLocal_111[12] = 0.7064f;
	fLocal_112[12] = 0.7078f;
	iLocal_185[12] = joaat("intruder");
	Local_159[13 /*3*/] = { -342.2834f, -753.7252f, 33.518f };
	fLocal_109[13] = 0.0093f;
	fLocal_110[13] = 0.0006f;
	fLocal_111[13] = 0.7134f;
	fLocal_112[13] = -0.7007f;
	iLocal_185[13] = joaat("intruder");
	Local_159[14 /*3*/] = { -6.5124f, -667.6953f, 31.338f };
	fLocal_109[14] = -0.0001f;
	fLocal_110[14] = 0.0003f;
	fLocal_111[14] = 0.9997f;
	fLocal_112[14] = -0.0264f;
	iLocal_185[14] = joaat("stockade");
	MISC::SET_BIT(&(iLocal_136[34]), 3);
}

void func_522(int iParam0, bool bParam1)//Position - 0x46729
{
	if (iParam0 > -1 && iParam0 < iLocal_136)
	{
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(iLocal_136[iParam0]), 4);
		}
		else
		{
			MISC::SET_BIT(&(iLocal_136[iParam0]), 4);
		}
	}
}

void func_523(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x46763
{
	struct<3> Var0;
	StringCopy(&cLocal_174, sParam0, 64);
	bLocal_70 = true;
	iLocal_75 = 0;
	iLocal_141 = 0;
	iLocal_142 = 0;
	iLocal_143 = 0;
	iLocal_144 = iParam1;
	iLocal_145 = 0;
	iLocal_146 = 0;
	iLocal_147 = 0;
	iLocal_151 = 0;
	iLocal_154 = 0;
	iLocal_152 = -1;
	iLocal_153 = -1;
	iLocal_155 = 0;
	iLocal_156 = 0;
	fLocal_129 = 0f;
	fLocal_130 = 0f;
	fLocal_115 = 0f;
	iLocal_76 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_162.f_0 = (Var0.f_0 - 100f);
		Local_162.f_1 = (Var0.f_1 - 100f);
		Local_162.f_2 = (Var0.f_2 - 100f);
		Local_163.f_0 = (Var0.f_0 + 100f);
		Local_163.f_1 = (Var0.f_1 + 100f);
		Local_163.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_162, Local_163, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_183);
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
	func_412();
}

void func_524(bool bParam0)//Position - 0x46887
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1886.4f, -584.1f, 5.4f, -1872.8f, -575f, 17.5f, !bParam0, true);
}

int func_525()//Position - 0x468B5
{
	if (iLocal_286 == 1)
	{
		iLocal_290 = 5;
	}
	else
	{
		iLocal_290 = 5;
	}
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_290, sLocal_381);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_290, sLocal_381))
	{
		return 1;
	}
	return 0;
}

void func_526()//Position - 0x468EB
{
	char cVar0[64];
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FranklinAndLamar", 0);
	if (iLocal_553 == 4)
	{
		if (iLocal_284 != 99)
		{
			if (bLocal_256)
			{
				__LIB_0__::func_427(Local_373, fLocal_276, 0, 0);
				iLocal_284 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_373, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(Local_373);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_284 = 99;
			}
		}
		else if ((func_266(Local_372, 0, 0) && func_357(Local_493[0 /*7*/].f_2, Local_493[0 /*7*/].f_5)) && func_356(Local_493[1 /*7*/].f_2, Local_493[1 /*7*/].f_5))
		{
			func_360();
			__LIB_0__::func_433(0, -1, 0);
			func_384();
			func_524(1);
			PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), true, 0);
			bLocal_249 = false;
			bLocal_254 = false;
			iLocal_553 = 0;
		}
	}
	if (iLocal_553 == 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_493[0 /*7*/].f_6, sLocal_381);
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_493[1 /*7*/].f_6, sLocal_381);
		STREAMING::REQUEST_ANIM_DICT(sLocal_385);
		STREAMING::REQUEST_MODEL(iLocal_457);
		if (((((func_525() && ((iLocal_285 == 0 && AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0)) || (iLocal_285 == 1 && AUDIO::LOAD_STREAM("ARM_1_IG_2_LAMAR_DRIVES_OFF_ALT", 0)))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_493[0 /*7*/].f_6, sLocal_381)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_493[1 /*7*/].f_6, sLocal_381)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_385)) && STREAMING::HAS_MODEL_LOADED(iLocal_457))
		{
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_274();
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID(), 0);
			func_523(sLocal_381, iLocal_290, 0, 1);
			func_521();
			fLocal_269 = 0f;
			func_520(1);
			__LIB_39__::func_170(joaat("A_M_M_BevHills_02"));
			iLocal_82 = 1;
			bLocal_88 = true;
			fLocal_125 = 200f;
			iLocal_152 = iLocal_137[15];
			__LIB_0__::func_429();
			iLocal_415 = PED::CREATE_PED(26, iLocal_457, -1886.833f, -579.0045f, 10.8163f, 315.0557f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_415, 8, 1, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_415, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_457);
			StringCopy(&cVar0, "", 64);
			bLocal_251 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
			{
				VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_493[iLocal_285 /*7*/], true);
			}
			SYSTEM::WAIT(0);
			if (iLocal_286 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false) && !PED::IS_PED_INJURED(Local_473.f_0))
				{
					TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_473.f_0, true);
					iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_286 /*7*/], false);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_286 /*7*/], iLocal_341, "carrace_walktocar_ninef2_car_ninef2", sLocal_385, 1000f, -1000f, 0, 1000f);
					Local_473.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_473.f_0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_385, "carrace_walktocar_ninef2_lamar", 1000f, -1000f, 4, 0, 1000f, 0);
					fVar1 = SYSTEM::VDIST2(-1883.3f, -576.7f, 11.2f, ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_286 /*7*/], true));
					fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_493[iLocal_286 /*7*/], true));
					if ((fVar1 - fVar2) < 4f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.02f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.02f);
					}
					else if ((fVar1 - fVar2) < 9f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.07f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.07f);
					}
					else if ((fVar1 - fVar2) < 16f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.09f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.09f);
					}
					else if ((fVar1 - fVar2) < 25f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.11f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.11f);
					}
					else
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.13f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.13f);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_473.f_0, false, false);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_493[iLocal_286 /*7*/]);
					StringCopy(&cVar0, "carrace_walktocar_ninef2_cam", 64);
				}
			}
			else if (iLocal_286 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false) && !PED::IS_PED_INJURED(Local_473.f_0))
				{
					iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					ENTITY::FREEZE_ENTITY_POSITION(Local_493[iLocal_286 /*7*/], false);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_286 /*7*/], iLocal_341, "carrace_walktocar_rapidgt_car_rapidgt2", sLocal_385, 1000f, -1000f, 0, 1000f);
					bVar3 = PED::IS_PED_IN_VEHICLE(Local_473.f_0, Local_493[1 /*7*/], false);
					bVar4 = false;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_473.f_0);
					Local_473.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_473.f_0, Local_473.f_4, sLocal_385, "carrace_walktocar_rapidgt_lamar", 1000f, -1000f, 4, 0, 1000f, 0);
					if (bLocal_254 || bVar3)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_493[1 /*7*/], 0) > 0.3f)
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.14f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.14f);
						}
						else if (bVar3)
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.25f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.25f);
						}
						else
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.14f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.14f);
						}
						bVar4 = true;
					}
					else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_493[1 /*7*/], 0) > 0f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.14f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.14f);
						bVar4 = true;
					}
					else if (bLocal_249)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.08f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.08f);
					}
					else
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4, 0.03f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.03f);
					}
					if (bVar4)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_493[iLocal_285 /*7*/], 0, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_493[iLocal_285 /*7*/], 1, true);
						}
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_473.f_0, false, false);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_493[iLocal_286 /*7*/]);
					StringCopy(&cVar0, "carrace_walktocar_rapidgt_cam", 64);
				}
			}
			iLocal_423 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			if (iLocal_285 == 0)
			{
				iLocal_310 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
			}
			else
			{
				iLocal_310 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_423, iLocal_310, &cVar0, sLocal_385);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_310, PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_473.f_4));
			__LIB_15__::func_912();
			MISC::CLEAR_AREA_OF_OBJECTS(-1878.6208f, -577.6438f, 10.7868f, 100f, 0);
			MISC::CLEAR_AREA_OF_PEDS(-1878.6208f, -577.6438f, 10.7868f, 100f, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(-1878.6208f, -577.6438f, 10.7868f, 100f, 0);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1886.9937f, -585.90204f, 6.540985f, -1852.6768f, -542.4524f, 20.40304f, 22.25f, false, false, false, false, false, 0, 0);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1865.2734f, -558.1036f, 10.637986f, -1879.1925f, -575.10315f, 15.430193f, 16.75f, false, false, false, false, false, 0, 0);
			VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(-1910.6f, -531.3f, 11.2f, 30f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false))
			{
				ENTITY::SET_ENTITY_HEADING(Local_493[0 /*7*/], Local_493[0 /*7*/].f_5);
				ENTITY::SET_ENTITY_COORDS(Local_493[0 /*7*/], Local_493[0 /*7*/].f_2, true, false, false, true);
				if (iLocal_285 == 0)
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[0 /*7*/], false, false, false);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
			{
				ENTITY::SET_ENTITY_HEADING(Local_493[1 /*7*/], Local_493[1 /*7*/].f_5);
				ENTITY::SET_ENTITY_COORDS(Local_493[1 /*7*/], Local_493[1 /*7*/].f_2, true, false, false, true);
				if (iLocal_285 == 1)
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[1 /*7*/], false, false, false);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_493[iLocal_286 /*7*/], false);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_CHOOSE_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_1_CHOOSE_CAR");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GET_IN_CAR_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_GET_IN_CAR_SCENE");
			}
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_473.f_0, -1, 2048, 2);
			}
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			STREAMING::REMOVE_ANIM_DICT(sLocal_389);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			SYSTEM::SETTIMERB(0);
			__LIB_16__::func_11();
			if (iLocal_286 == 0)
			{
				__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_CHOICE2", 7, 0, 0, 0);
			}
			else if (!bLocal_254)
			{
				__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_CHOICE", 7, 0, 0, 0);
			}
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_265 = 0;
			iLocal_284 = 0;
			iLocal_553 = 1;
		}
	}
	if (iLocal_553 == 1)
	{
		func_518(5000f, 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", false, -1);
		fVar5 = 0f;
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_310))
		{
			fVar5 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_310);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
		{
			if (((iLocal_286 == 1 && fVar5 > 0.19f) && fVar5 < 0.39f) || ((iLocal_286 == 0 && fVar5 > 0.09f) && fVar5 < 0.3f))
			{
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_493[iLocal_285 /*7*/], 0) < 0.01f)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_493[iLocal_285 /*7*/], 0, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_493[iLocal_285 /*7*/], 0, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_493[iLocal_285 /*7*/], 0) * 0.9f));
				}
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_493[iLocal_285 /*7*/], 1) < 0.01f)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_493[iLocal_285 /*7*/], 1, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_493[iLocal_285 /*7*/], 1, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_493[iLocal_285 /*7*/], 1) * 0.9f));
				}
			}
		}
		switch (iLocal_284)
		{
			case 0:
				if (iLocal_285 == 0)
				{
					AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0);
				}
				else
				{
					AUDIO::LOAD_STREAM("ARM_1_IG_2_LAMAR_DRIVES_OFF_ALT", 0);
				}
				if ((iLocal_286 == 0 && fVar5 > 0.23f) || (iLocal_286 == 1 && fVar5 > 0.25f))
				{
					iLocal_309 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (iLocal_286 == 0)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_309, sLocal_385, "carrace_walktocar_ninef2_franklin", 1000f, -1000f, 4, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_285 /*7*/], iLocal_341, "carrace_walktocar_ninef2_car_rapidgt2", sLocal_385, 1000f, -1000f, 0, 1000f);
					}
					else if (iLocal_286 == 1)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_309, sLocal_385, "carrace_walktocar_rapidgt_franklin", 1000f, -1000f, 4, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_285 /*7*/], iLocal_341, "carrace_walktocar_rapidgt_car_ninef2", sLocal_385, 1000f, -1000f, 0, 1000f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						VEHICLE::ROLL_DOWN_WINDOWS(Local_493[iLocal_285 /*7*/]);
					}
					AUDIO::PLAY_STREAM_FRONTEND();
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_309, fVar5);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 1:
				if ((iLocal_286 == 0 && fVar5 > 0.25f) || (iLocal_286 == 1 && fVar5 > 0.24f))
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[iLocal_285 /*7*/], false);
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 2:
				if ((iLocal_286 == 0 && fVar5 > 0.272f) || (iLocal_286 == 1 && fVar5 > 0.24f))
				{
					if (!iLocal_268[10])
					{
						if ((iLocal_286 == 0 && __LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_RACE2", 7, 0, 0, 0, 0)) || (iLocal_286 == 1 && __LIB_17__::func_730(&Local_556, "ARM1AUD", "ARM1_RACE", 7, 0, 0, 0, 0)))
						{
							iLocal_268[10] = 1;
						}
						else
						{
							__LIB_0__::func_638();
						}
					}
				}
				if ((iLocal_286 == 0 && fVar5 > 0.32f) || (iLocal_286 == 1 && fVar5 > 0.3f))
				{
					if (iLocal_286 == 0)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[iLocal_286 /*7*/], false);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 3:
				if ((iLocal_286 == 0 && fVar5 > 0.33f) || (iLocal_286 == 1 && fVar5 > 0.34f))
				{
					if ((iLocal_286 == 0 && __LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_RACE2", 7, 0, 0, 0)) || (iLocal_286 == 1 && __LIB_17__::func_244(&Local_556, "ARM1AUD", "ARM1_RACE", "ARM1_RACE_3", 7, 0, 0)))
					{
						iLocal_268[9] = 1;
						SYSTEM::SETTIMERB(0);
						iLocal_284++;
					}
					else
					{
						__LIB_0__::func_638();
					}
				}
				break;
			case 4:
				if ((iLocal_286 == 0 && fVar5 > 0.39f) || (iLocal_286 == 1 && fVar5 > 0.39f))
				{
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1865.2734f, -558.1036f, 10.637986f, -1879.1925f, -575.10315f, 15.430193f, 16.75f, false, false, false, false, false, 0, 0);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					if (iLocal_286 == 1)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[iLocal_286 /*7*/], false);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 5:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!iLocal_268[11])
				{
					if (SYSTEM::TIMERB() > 1500)
					{
						__LIB_0__::func_151("AR1_CONVHELP", 9000);
						iLocal_268[11] = 1;
					}
				}
				if ((iLocal_286 == 0 && fVar5 > 0.65f) || (iLocal_286 == 1 && fVar5 > 0.65f))
				{
					if (iLocal_286 == 0)
					{
						iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_286 /*7*/], iLocal_341, "carrace_walktocar_ninef2_car_ninef2", sLocal_385, 1000f, -1000f, 0, 1000f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, fVar5);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_493[iLocal_286 /*7*/]);
					}
					else
					{
						iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.8f, 1f, 0f, 139.04f, 2);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_286 /*7*/], iLocal_341, "carrace_walktocar_rapidgt_car_rapidgt2", sLocal_385, 1000f, -1000f, 0, 1000f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, fVar5);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_493[iLocal_286 /*7*/]);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 6:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!iLocal_268[11])
				{
					__LIB_0__::func_151("AR1_CONVHELP", 9000);
					iLocal_268[11] = 1;
				}
				if ((iLocal_286 == 0 && fVar5 > 0.87f) || (iLocal_286 == 1 && fVar5 > 0.95f))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_493[iLocal_285 /*7*/], true, true, false);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_284++;
				}
				break;
			case 7:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!iLocal_265)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
					{
						if ((iLocal_286 == 0 && SYSTEM::TIMERB() > 2560) || (iLocal_286 == 1 && SYSTEM::TIMERB() > 350))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_265 = 1;
						}
					}
				}
				if ((iLocal_286 == 0 && fVar5 > 0.99f) || (iLocal_286 == 1 && fVar5 > 0.99f))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[iLocal_286 /*7*/], true);
						if (!PED::IS_PED_INJURED(Local_473.f_0))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_473.f_0, -8f, true);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_473.f_0);
							PED::SET_PED_INTO_VEHICLE(Local_473.f_0, Local_493[iLocal_286 /*7*/], -1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_473.f_0, false, false);
						}
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_286 /*7*/], false))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_286 /*7*/], -1000f, true);
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_493[iLocal_286 /*7*/], true);
						VEHICLE::SET_VEHICLE_FIXED(Local_493[iLocal_286 /*7*/]);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_286 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/]);
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_493[iLocal_286 /*7*/].f_6, sLocal_381);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_286 /*7*/], iLocal_290, sLocal_381, true);
						__LIB_17__::func_710(&(Local_493[iLocal_286 /*7*/]), 2000f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_493[iLocal_286 /*7*/], true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_493[iLocal_285 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_493[iLocal_285 /*7*/]);
						}
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_493[iLocal_285 /*7*/], true);
						if (iLocal_285 == 1)
						{
							ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 321.0557f);
							ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], -1880.045f, -577.4576f, 10.7658f, true, false, false, true);
						}
						else
						{
							ENTITY::SET_ENTITY_HEADING(Local_493[iLocal_285 /*7*/], 320.1515f);
							ENTITY::SET_ENTITY_COORDS(Local_493[iLocal_285 /*7*/], -1878.4385f, -579.7686f, 10.7883f, true, false, false, true);
						}
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_493[iLocal_285 /*7*/], -1000f, true);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -1000f, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[iLocal_285 /*7*/], -1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					if (!PED::IS_PED_INJURED(iLocal_415))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_415, true, false);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_415, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					__LIB_15__::func_907();
					MISC::CLEAR_AREA_OF_VEHICLES(-1883.705f, -578.8252f, 11.330235f, 500f, false, false, false, false, false, false, 0);
					func_512();
					func_511();
					func_485(Local_493[iLocal_286 /*7*/], 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					iLocal_553 = 2;
				}
				break;
		}
		if (__LIB_0__::func_645(1000))
		{
			iLocal_553 = 3;
		}
	}
	if (iLocal_553 == 2)
	{
		__LIB_0__::func_638();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_473.f_0);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_385);
		VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 3;
	}
	if (iLocal_553 == 3)
	{
		func_905(3, 1);
	}
}

void func_528()//Position - 0x47CBE
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iLocal_553 == 4)
	{
		if (iLocal_284 != 99)
		{
			if (bLocal_256)
			{
				__LIB_0__::func_427(Local_373, fLocal_276, 0, 0);
				iLocal_284 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_373, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_276);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				func_529(-1902.5677f, -598.1853f, 12.7282f, __LIB_3__::func_80(-3f, 0f, -43.2776f), 130f, 0, 10000);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_284 = 99;
			}
		}
		else if ((func_266(Local_372, fLocal_275, 0) && func_357(Local_493[0 /*7*/].f_2, Local_493[0 /*7*/].f_5)) && func_356(Local_493[1 /*7*/].f_2, Local_493[1 /*7*/].f_5))
		{
			__LIB_0__::func_433(0, -1, 0);
			MISC::CLEAR_AREA(Local_493[0 /*7*/].f_2, 100f, true, false, false, false);
			PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-1889.1f, -586f, 12.5f, 3f, 3);
			iLocal_553 = 0;
		}
	}
	if (iLocal_553 == 0)
	{
		iLocal_320 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1900.7888f, -595.2253f, 11.0273f, 2f, 2f, 3f, 139.6549f, false, 7);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_CHOOSE_CAR"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_CHOOSE_CAR");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (iLocal_284 != 99)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_373, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_276);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				func_529(-1902.5677f, -598.1853f, 12.7282f, __LIB_3__::func_80(-3f, 0f, -43.2776f), 130f, 0, 10000);
			}
			SYSTEM::WAIT(0);
			while ((!func_357(Local_493[0 /*7*/].f_2, Local_493[0 /*7*/].f_5) || !func_356(Local_493[1 /*7*/].f_2, Local_493[1 /*7*/].f_5)) || !func_266(-1883.5654f, -575.7982f, 10.7861f, 251.8757f, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_493[0 /*7*/], Local_493[0 /*7*/].f_2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_493[0 /*7*/], Local_493[0 /*7*/].f_5);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[0 /*7*/], 5f);
			}
			STREAMING::REQUEST_ANIM_DICT(sLocal_390);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_390))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_473.f_0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_gatewalk_lam", 3))
			{
				ENTITY::SET_ENTITY_COORDS(Local_473.f_0, Local_372, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_473.f_0, fLocal_275);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_473.f_0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_473.f_0, true);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_473.f_0, sLocal_390, "arm1_int_leadout_gatewalk_lam", -1900.33f, -595.638f, 12.233f, 0f, 0f, 48f, 1000f, -1.5f, -1, 790530, 0.462f, 2, 0);
				TASK::TASK_PLAY_ANIM(Local_473.f_0, sLocal_390, "ARM1_INT_leadout_gatewalk_lam_facial", 1000f, -4f, -1, 32, 0.462f, false, false, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_473.f_0, 144);
				Local_473.f_2 = 0;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1901.1627f, -594.9855f, 11.6781f, 2f, joaat("prop_burto_gate_01"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_burto_gate_01"), -1901.1627f, -594.9855f, 11.6781f, true, 0f, false);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_373, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_276);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_NON_CREATION_AREA(-1894.9843f, -583.5402f, 0f, -1865.4764f, -563.2835f, 18.1544f);
		__LIB_0__::func_222(&Local_556, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		func_524(1);
		__LIB_16__::func_11();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[0 /*7*/], true);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
		{
			ENTITY::SET_ENTITY_COORDS(Local_493[1 /*7*/], -1880.751f, -577.1409f, 10.769f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_493[1 /*7*/], Local_493[1 /*7*/].f_5);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_493[1 /*7*/], 5f);
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[1 /*7*/], true);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
		AUDIO::FREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
		AUDIO::SET_RADIO_AUTO_UNFREEZE(false);
		AUDIO::SET_RADIO_TRACK("RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */, "ARM1_RADIO_STARTS");
		__LIB_0__::func_424(1);
		iLocal_302 = MISC::GET_GAME_TIMER();
		iLocal_303 = 0;
		iLocal_347 = 0;
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 118, false);
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 208, true);
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 185, true);
		}
		iLocal_305 = 0;
		iLocal_338 = 0;
		bLocal_254 = false;
		bLocal_249 = false;
		iLocal_240 = 0;
		iLocal_234 = 0;
		iLocal_284 = 0;
		iLocal_553 = 1;
	}
	if (iLocal_553 == 1)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_392);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_393);
		__LIB_1__::func_33(0);
		if (!iLocal_268[3])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1900.4408f, -595.7698f, 10.646699f, -1884.6504f, -576.9808f, 13.571643f, 7.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1886.8524f, -594.80994f, 10.663315f, -1895.973f, -587.2581f, 13.386953f, 18.75f, false, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
		}
		if (CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() == 0 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1877.9044f, -574.5812f, 10.633959f, -1897.5854f, -598.01984f, 14.406877f, 12f, false, true, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1873.6368f, -578.7437f, 10.62791f, -1877.2218f, -582.7633f, 20.099403f, 2.5f, false, true, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
		if (!iLocal_240 && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_392))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_392, true, 1f, 0.5f);
			iLocal_240 = 1;
		}
		if (!iLocal_268[41])
		{
			if (!__LIB_0__::func_425(138))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_151("CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */, 10000);
					iLocal_268[41] = 1;
				}
			}
			else
			{
				iLocal_268[41] = 1;
			}
		}
		else if (__LIB_0__::func_425(138) && __LIB_0__::func_1("CMN_FPSHELP" /* GXT: ~s~To play GTAV in first-person mode cycle the camera using ~INPUT_NEXT_CAMERA~ */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[1 /*7*/], false))
		{
			switch (iLocal_284)
			{
				case 0:
					if (!iLocal_268[1])
					{
						if (!__LIB_13__::func_755(&Local_495, 2))
						{
							iLocal_268[1] = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(Local_473.f_1))
					{
						func_274();
						Local_473.f_1 = __LIB_0__::func_639(Local_473.f_0, 0, 0);
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true)) > 900f)
					{
						if (!iLocal_268[2])
						{
							__LIB_0__::func_229("AR1_WAIT", 7500, 0);
							iLocal_268[2] = 1;
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1885.9595f, -578.54f, 10.848052f, -1886.865f, -579.67847f, 13.601677f, 4.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.4536f, -580.2959f, 16.118715f, -1878.3375f, -575.30383f, 5.633518f, 11.5f, false, true, 0))
					{
						iLocal_284++;
					}
					break;
				case 1:
					if (!iLocal_268[3])
					{
						if (iLocal_268[8])
						{
							if (!__LIB_13__::func_755(&Local_495, 2))
							{
								__LIB_0__::func_229("AR1_CHOOSE", 7500, 0);
								iLocal_347 = MISC::GET_GAME_TIMER();
								iLocal_268[3] = 1;
							}
						}
					}
					else if (!iLocal_268[4])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_347) > 5000)
						{
							__LIB_0__::func_151("AR1_CARHELP", -1);
							iLocal_268[4] = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_473.f_0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true)) > 1600f)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_473.f_1))
							{
								func_274();
								Local_473.f_1 = __LIB_0__::func_639(Local_473.f_0, 0, 0);
							}
							if (!iLocal_268[2])
							{
								__LIB_0__::func_229("AR1_WAIT", 7500, 0);
								iLocal_268[2] = 1;
							}
						}
						else
						{
							if (!HUD::DOES_BLIP_EXIST(Local_493[0 /*7*/].f_1))
							{
								if (!__LIB_0__::func_501("AR1_CHOOSE", 0, 0) && iLocal_268[3])
								{
									HUD::CLEAR_PRINTS();
								}
								func_274();
								Local_493[0 /*7*/].f_1 = __LIB_0__::func_639(Local_493[0 /*7*/], 0, 0);
							}
							if (!HUD::DOES_BLIP_EXIST(Local_493[1 /*7*/].f_1))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_473.f_0, Local_493[1 /*7*/], false))
								{
									Local_493[1 /*7*/].f_1 = __LIB_0__::func_639(Local_493[1 /*7*/], 0, 0);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(Local_473.f_0, Local_493[1 /*7*/], false))
							{
								HUD::REMOVE_BLIP(&(Local_493[1 /*7*/].f_1));
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (iVar0 == Local_493[0 /*7*/] || iVar0 == Local_493[1 /*7*/])
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::IS_ENTITY_STATIC(iVar0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					}
				}
				if (__LIB_0__::func_1("AR1_CARHELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (iVar0 == Local_493[0 /*7*/])
				{
					iLocal_285 = 0;
					iLocal_286 = 1;
					if ((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 0) > 0.1f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 1) > 0.1f) || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0);
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_553 = 2;
						}
					}
				}
				else if (iVar0 == Local_493[1 /*7*/])
				{
					iLocal_285 = 1;
					iLocal_286 = 0;
					if ((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 0) > 0.1f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 1) > 0.1f) || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						AUDIO::LOAD_STREAM("ARM_1_IG_2_LAMAR_DRIVES_OFF_ALT", 0);
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_553 = 2;
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && iLocal_234)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && !(iVar0 == Local_493[0 /*7*/] || iVar0 == Local_493[1 /*7*/])) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1877.3f, -582.2f, 11.4f) < 1.7f)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1877.3f, -582.2f, 11.4f) < 1.7f && iVar0 != 0)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_234 = 0;
				}
			}
			if ((iVar0 == Local_493[0 /*7*/] || iVar0 == Local_493[1 /*7*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1877.5f, -582f, 11.3f) > 2f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
				iLocal_234 = 1;
			}
			if (!PED::IS_PED_INJURED(Local_473.f_0))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_390);
				STREAMING::REQUEST_ANIM_DICT(sLocal_389);
				fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true));
				if (!bLocal_249)
				{
					if (iVar0 == Local_493[0 /*7*/] || ((iVar0 == Local_493[1 /*7*/] && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) < 4f) && !bLocal_254))
					{
						if (iLocal_338 == 0)
						{
							iLocal_338 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_338) > 200)
						{
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (iVar0 == Local_493[1 /*7*/])
								{
									if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_393))
									{
										TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_393, &iVar2);
										TASK::OPEN_SEQUENCE_TASK(&iVar3);
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_393, 0, 2, (iVar2 - 2));
										TASK::TASK_ENTER_VEHICLE(0, Local_493[0 /*7*/], -1, -1, 1f, 1, 0);
										TASK::CLOSE_SEQUENCE_TASK(iVar3);
										TASK::TASK_PERFORM_SEQUENCE(Local_473.f_0, iVar3);
										TASK::CLEAR_SEQUENCE_TASK(&iVar3);
									}
								}
								else
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_493[1 /*7*/], false);
									if (!PED::IS_PED_IN_ANY_VEHICLE(Local_473.f_0, false))
									{
										TASK::TASK_ENTER_VEHICLE(Local_473.f_0, Local_493[1 /*7*/], -1, -1, 1f, 1, 0);
									}
								}
								bLocal_249 = true;
							}
						}
					}
				}
				if (!bLocal_254)
				{
					if (((iVar0 == 0 && Local_473.f_2 > 0) && !bLocal_249) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.7886f, -577.90814f, 10.753211f, -1879.8823f, -579.3406f, 12.55453f, 1f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.0074f, -577.84155f, 10.665591f, -1879.743f, -582.36884f, 12.604184f, 2f, false, true, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_493[1 /*7*/], false);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_493[1 /*7*/], false);
							TASK::TASK_ENTER_VEHICLE(Local_473.f_0, Local_493[1 /*7*/], -1, -1, 1f, 1, 0);
							AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0);
							bLocal_254 = true;
						}
					}
				}
				else if (!iLocal_268[74] && !__LIB_13__::func_755(&Local_495, 1))
				{
					if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_CHOICE", 7, 0, 0, 0))
					{
						iLocal_268[74] = 1;
					}
				}
				switch (Local_473.f_2)
				{
					case 0:
						if (fVar1 < 400f && !__LIB_13__::func_755(&Local_495, 1))
						{
							if (!iLocal_268[5])
							{
								if (__LIB_17__::func_731(&Local_556, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_1", 7, 0, 0))
								{
									iLocal_268[5] = 1;
								}
							}
							else if (!iLocal_268[6])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_473.f_0, -1885.6586f, -577.95087f, 10.846542f, -1887.8373f, -580.54944f, 14.104136f, 4.75f, false, true, 0))
								{
									if (__LIB_17__::func_731(&Local_556, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_3", 7, 0, 0))
									{
										iLocal_268[6] = 1;
									}
								}
							}
							else if (!iLocal_268[7])
							{
								if (__LIB_17__::func_731(&Local_556, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_4", 7, 0, 0))
								{
									iLocal_268[7] = 1;
								}
							}
						}
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_gatewalk_lam", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_473.f_0, sLocal_390, "arm1_int_leadout_gatewalk_lam") >= 0.99f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_gatewalk_lam", 3))
						{
							Local_473.f_2++;
						}
						break;
					case 1:
						if ((((iLocal_284 > 0 && !bLocal_254) && !iLocal_268[8]) && !__LIB_13__::func_755(&Local_495, 1)) && !(iVar0 == Local_493[0 /*7*/] || iVar0 == Local_493[1 /*7*/]))
						{
							if (__LIB_17__::func_731(&Local_556, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_5", 7, 0, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar4);
								TASK::TASK_PLAY_ANIM(0, sLocal_390, "arm1_int_leadout_action_lam", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, sLocal_390, "arm1_int_leadout_loop_2_lam", 4f, -4f, -1, 262144, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, sLocal_390, "arm1_int_leadout_loop_lam", 4f, -4f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar4);
								TASK::TASK_PERFORM_SEQUENCE(Local_473.f_0, iVar4);
								TASK::CLEAR_SEQUENCE_TASK(&iVar4);
								iLocal_268[8] = 1;
								iLocal_303 = 0;
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
						}
						if (iVar0 != Local_493[0 /*7*/] && iVar0 != Local_493[1 /*7*/])
						{
							if (((((!__LIB_13__::func_755(&Local_495, 0) && iLocal_268[8]) && iLocal_303 < 4) && !bLocal_254) && (MISC::GET_GAME_TIMER() - iLocal_302) > 15000) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true)) < 400f)
							{
								if (__LIB_17__::func_243(&Local_556, "ARM1AUD", "ARM1_HURRY", 7, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_473.f_0, PLAYER::PLAYER_PED_ID(), 3000, 13, 2);
									if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_389) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.8124f, -577.2666f, 10.823965f, -1899.1434f, -595.4661f, 13.873234f, 5f, false, true, 0))
									{
										iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										TASK::OPEN_SEQUENCE_TASK(&iVar6);
										if (iVar5 == 0)
										{
											TASK::TASK_PLAY_ANIM(0, sLocal_389, "lamar_idle_01", 1.5f, 1.5f, -1, 262144, 0f, false, false, false);
										}
										else if (iVar5 == 1)
										{
											TASK::TASK_PLAY_ANIM(0, sLocal_389, "lamar_idle_02", 1.5f, 1.5f, -1, 262144, 0f, false, false, false);
										}
										else
										{
											TASK::TASK_PLAY_ANIM(0, sLocal_389, "lamar_idle_03", 1.5f, 1.5f, -1, 262144, 0f, false, false, false);
										}
										TASK::TASK_PLAY_ANIM(0, sLocal_390, "arm1_int_leadout_loop_lam", 1.5f, 1.5f, -1, 262145, 0f, false, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar6);
										TASK::TASK_PERFORM_SEQUENCE(Local_473.f_0, iVar6);
										TASK::CLEAR_SEQUENCE_TASK(&iVar6);
									}
									iLocal_303++;
									iLocal_302 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 3000));
								}
							}
							if (!bLocal_249 && !bLocal_254)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true), Local_374) > 3f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_473.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && !MISC::IS_POSITION_OCCUPIED(Local_374, 0.5f, false, true, false, false, false, Local_493[1 /*7*/], false))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_473.f_0, Local_374, 1f, 20000, 0.5f, 0, fLocal_277);
									}
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_390) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_389))
								{
									if (((((((!TASK::IS_PED_WALKING(Local_473.f_0) && !PED::IS_PED_RAGDOLL(Local_473.f_0)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_loop_lam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_action_lam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_loop_2_lam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_389, "lamar_idle_01", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_389, "lamar_idle_02", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_389, "lamar_idle_03", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_loop_lam", 4f, -4f, -1, 262145, 0f, false, false, false);
									}
								}
							}
						}
						break;
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_473.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 4900f)
				{
					func_848(9);
				}
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_493[0 /*7*/].f_6, sLocal_381);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_493[1 /*7*/].f_6, sLocal_381);
			STREAMING::REQUEST_ANIM_DICT(sLocal_385);
			STREAMING::REQUEST_MODEL(iLocal_457);
			if (iLocal_304 == 0)
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[0 /*7*/], joaat("WEAPON_UNARMED"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[1 /*7*/], joaat("WEAPON_UNARMED"), 0))
				{
					iLocal_305++;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_493[0 /*7*/]);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_493[1 /*7*/]);
				}
				if (((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[0 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[0 /*7*/], joaat("WEAPON_UNARMED"), 0)) || (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[1 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_493[1 /*7*/], joaat("WEAPON_UNARMED"), 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_493[0 /*7*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_493[1 /*7*/])) || iLocal_305 > 3)
				{
					iLocal_304 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_304) > 750)
			{
				func_848(11);
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_848(10);
			}
		}
	}
	if (iLocal_553 == 2)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 4);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
		Global_96875 = iLocal_285;
		if (iLocal_285 == 0)
		{
			__LIB_0__::func_630(1);
		}
		if (!PED::IS_PED_INJURED(Local_473.f_0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 118, true);
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 208, false);
			PED::SET_PED_CONFIG_FLAG(Local_473.f_0, 185, false);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_473.f_0, 144);
			TASK::TASK_CLEAR_LOOK_AT(Local_473.f_0);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_390);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_392);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_393);
		if (iLocal_320 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_320);
			iLocal_320 = -1;
		}
		func_345();
		__LIB_0__::func_424(0);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 2;
	}
	if (iLocal_553 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[0 /*7*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[0 /*7*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_493[0 /*7*/], -1);
			}
		}
		iLocal_553 = 1;
	}
}

void func_529(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x4914D
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	while ((MISC::GET_GAME_TIMER() - iVar0) < iParam4)
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START(Param0, Param1, fParam2, iParam3);
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			iVar0 = 0;
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_530()//Position - 0x49199
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iLocal_553 == 4)
	{
		iLocal_553 = 0;
	}
	if (iLocal_553 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		__LIB_17__::func_737();
		SYSTEM::SETTIMERA(0);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
		iLocal_259 = 0;
		if (__LIB_15__::func_944() != 1)
		{
			while (!func_552(1, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1907.3496f, -577.2352f, 19.1223f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 136.9707f);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("clear");
		CUTSCENE::REQUEST_CUTSCENE(sLocal_382, 8);
		STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
		while (SYSTEM::TIMERA() < 10000)
		{
			if (func_551())
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1907.4f, -577.8f, 18.8f, 10f, 0);
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::SETTIMERA(100000);
				}
			}
			func_100(sLocal_382);
			SYSTEM::WAIT(0);
		}
		func_100(sLocal_382);
		while (!CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_100(sLocal_382);
			SYSTEM::WAIT(0);
		}
		while ((!BitTest(Global_113386.f_10016.f_25, 1) && !__LIB_0__::func_2(0)) && !__LIB_0__::func_323())
		{
			SYSTEM::WAIT(0);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (!__LIB_0__::func_323() && !__LIB_0__::func_2(0))
		{
			__LIB_16__::func_589();
		}
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_473.f_0, "Lamar", 2, __LIB_0__::func_493(19), 0);
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, true, false, false, false);
		__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
		__LIB_14__::func_804(1);
		func_549(1);
		CUTSCENE::START_CUTSCENE(0);
		STREAMING::SET_SRL_FORCE_PRESTREAM(1);
		SYSTEM::WAIT(50);
		PED::GET_CLOSEST_PED(-1907.4f, -577.5f, 19.2f, 5f, false, true, &iVar0, true, true, -1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 11, 0, 0, 0);
		}
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
		GRAPHICS::CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(false);
		__LIB_16__::func_11();
		iLocal_551 = 0;
		iLocal_339 = 0;
		iLocal_223 = 0;
		iLocal_224 = 0;
		iLocal_284 = 0;
		iLocal_553 = 1;
	}
	if (iLocal_553 == 1)
	{
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_223 = 1;
			iLocal_553 = 3;
		}
		func_542();
		func_533();
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_553 = 2;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_412))
		{
			if (!iLocal_224)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 109000)
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("carbonizzare", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("carbonizzare", 0)))
						{
							iLocal_412 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("carbonizzare", 0));
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_412, false))
							{
								VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_412, true);
								VEHICLE::SET_VEHICLE_COLOURS(iLocal_412, 28, 0);
								VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_412, 0, 156);
								iLocal_224 = 1;
							}
						}
					}
				}
			}
		}
		else if (CUTSCENE::GET_CUTSCENE_TIME() > 125000)
		{
			__LIB_37__::func_206(&iLocal_412, 0);
		}
		switch (iLocal_284)
		{
			case 0:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 105000)
				{
					if (iLocal_440 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_440);
						iLocal_440 = 0;
					}
					iLocal_284++;
				}
				break;
			case 1:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 210000)
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
					iLocal_284++;
				}
				break;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-41f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_473.f_0))
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > 207200)
			{
				iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Local_473.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					if (!PED::IS_PED_INJURED(Local_473.f_0))
					{
						func_266(0f, 0f, 0f, 0f, 1);
					}
				}
			}
		}
		if (CUTSCENE::GET_CUTSCENE_TIME() > 210000)
		{
			func_357(Local_493[0 /*7*/].f_2, Local_493[0 /*7*/].f_5);
			func_356(Local_493[1 /*7*/].f_2, Local_493[1 /*7*/].f_5);
			STREAMING::REQUEST_ANIM_DICT(sLocal_390);
			if (!PED::IS_PED_INJURED(Local_473.f_0) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_390))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					if (!iLocal_223 && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_473.f_0, sLocal_390, "arm1_int_leadout_gatewalk_lam", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_473.f_0, sLocal_390, "arm1_int_leadout_gatewalk_lam", -1900.33f, -595.638f, 12.233f, 0f, 0f, 48f, 1000f, -1.5f, -1, 790530, 0.526f, 2, 0);
						TASK::TASK_PLAY_ANIM(Local_473.f_0, sLocal_390, "ARM1_INT_leadout_gatewalk_lam_facial", 2f, -4f, -1, 32, 0.526f, false, false, false);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_473.f_0, 144);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_473.f_0, false, false);
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1901.1627f, -594.9855f, 11.6781f, 2f, joaat("prop_burto_gate_01"), false))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_burto_gate_01"), -1901.1627f, -594.9855f, 11.6781f, true, 1f, false);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_473.f_0, true);
					Local_473.f_2 = 0;
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			if (!iLocal_223)
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, -39.7f, false, false);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1901.1627f, -594.9855f, 11.6781f, 2f, joaat("prop_burto_gate_01"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_burto_gate_01"), -1901.1627f, -594.9855f, 11.6781f, true, 0f, false);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 4);
		}
	}
	if (iLocal_553 == 2)
	{
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		if (iLocal_440 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_440);
			iLocal_440 = 0;
		}
		func_58(&iLocal_416, 1);
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iLocal_417)
		{
			func_58(&(iLocal_417[iVar2]), 1);
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iLocal_433)
		{
			__LIB_16__::func_13(&(iLocal_433[iVar2]), 1);
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iLocal_418)
		{
			if (((CAM::IS_SCREEN_FADED_OUT() || (!PED::IS_PED_INJURED(iLocal_418[iVar2]) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_418[iVar2], false))) || iVar2 == 0) || (!PED::IS_PED_INJURED(iLocal_418[iVar2]) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iLocal_418[iVar2])))
			{
				func_58(&(iLocal_418[iVar2]), 1);
			}
			else if (!PED::IS_PED_INJURED(iLocal_418[iVar2]))
			{
				TASK::TASK_WANDER_STANDARD(iLocal_418[iVar2], 40000f, 0);
				PED::SET_PED_KEEP_TASK(iLocal_418[iVar2], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_418[iVar2], false);
				func_58(&(iLocal_418[iVar2]), 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iLocal_408)
		{
			__LIB_37__::func_206(&(iLocal_408[iVar2]), 1);
			iVar2++;
		}
		__LIB_16__::func_13(&iLocal_432, 1);
		__LIB_37__::func_206(&iLocal_410, 1);
		__LIB_37__::func_206(&iLocal_411, 1);
		if (iLocal_224)
		{
			__LIB_37__::func_206(&iLocal_412, 0);
		}
		if (iLocal_419[0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_419[0], false);
			iLocal_419[0] = 0;
		}
		if (iLocal_419[1] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_419[1], false);
			iLocal_419[1] = 0;
		}
		GRAPHICS::CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(true);
		func_532();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_464);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_467);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_466);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_468);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_469);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cavalcade"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("alpha"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_470);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_472);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_471);
		VEHICLE::REMOVE_VEHICLE_RECORDING(601, sLocal_381);
		STREAMING::REMOVE_ANIM_DICT(sLocal_398);
		STREAMING::REMOVE_PTFX_ASSET();
		STREAMING::REQUEST_IPL("ferris_finale_Anim");
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
			CLOCK::SET_CLOCK_TIME(8, 0, 0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("clear");
		}
		if (iLocal_259)
		{
			func_531();
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_436);
			iLocal_259 = 0;
		}
		__LIB_14__::func_804(0);
		func_549(0);
		iLocal_284 = 0;
		iLocal_553 = 0;
		iLocal_552 = 1;
	}
	if (iLocal_553 == 3)
	{
		__LIB_17__::func_737();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_473.f_0))
			{
				iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					Local_473.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
					if (!PED::IS_PED_INJURED(Local_473.f_0))
					{
						func_266(0f, 0f, 0f, 0f, 1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_412))
			{
				iVar4 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("carbonizzare", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iLocal_412 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar4);
					iLocal_224 = 1;
				}
			}
			SYSTEM::WAIT(0);
		}
		iLocal_551 = 22;
		iLocal_223 = 1;
		iLocal_553 = 2;
	}
}

void func_531()//Position - 0x49A63
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_436, "REMOVE_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_532()//Position - 0x49A7C
{
	STREAMING::REMOVE_ANIM_DICT("move_f@jogger");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@text@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_tourist_mobile@female@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_b@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_smoking@female@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@female_arms_crossed@base");
}

void func_533()//Position - 0x49AC3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
	}
	if (CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
	{
		bVar2 = true;
	}
	if (iVar0 < 107000)
	{
		iLocal_551 = 0;
	}
	switch (iLocal_551)
	{
		case 0:
			if (iVar0 > 107000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_MONTAGE_MUTES"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_MONTAGE_MUTES");
				}
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				STREAMING::SET_PED_POPULATION_BUDGET(1);
				iLocal_313 = 0;
				iLocal_551 = 1;
			}
			if (iVar0 > 102000)
			{
				STREAMING::REQUEST_MODEL(joaat("cavalcade"));
				STREAMING::REQUEST_MODEL(joaat("alpha"));
				STREAMING::REQUEST_MODEL(iLocal_471);
			}
			break;
		case 1:
			STREAMING::REQUEST_MODEL(joaat("cavalcade"));
			STREAMING::REQUEST_MODEL(joaat("alpha"));
			STREAMING::REQUEST_MODEL(iLocal_471);
			if (iVar0 > 110000)
			{
				if (iLocal_313 < iLocal_408)
				{
					if (iLocal_313 == 0)
					{
						MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1975.1753f, -466.1514f, 8.161919f, -1753.0424f, -647.6066f, 15.556465f, 40.25f, false, false, false, false, false, 0, 0);
						func_541(joaat("cavalcade"), iLocal_471, -1964.7297f, -495.26038f, 11.494138f, -129.5f, iLocal_313, 15f, 1);
					}
					else if (iLocal_313 == 1)
					{
						func_541(joaat("alpha"), iLocal_471, -1938.3647f, -509.8012f, 10.946412f, -129.5f, iLocal_313, 17.5f, 1);
					}
					else if (iLocal_313 == 2)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1862.437f, -538.81775f, 11.623542f, 50.7f, iLocal_313, 15f, 1);
					}
					else if (iLocal_313 == 3)
					{
						func_541(joaat("alpha"), iLocal_471, -1814.2252f, -577.82556f, 11.20173f, 50.7f, iLocal_313, 15f, 0);
					}
					else if (iLocal_313 == 4)
					{
						func_541(joaat("alpha"), iLocal_471, -1889.4689f, -523.00525f, 11.196733f, 50.7f, iLocal_313, 17.5f, 0);
					}
					else if (iLocal_313 == 5)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1896.6741f, -509.76202f, 11.152614f, 50.7f, iLocal_313, 15f, 0);
					}
					else if (iLocal_313 == 6)
					{
						func_541(joaat("alpha"), iLocal_471, -1872.837f, -544.37775f, 11.216076f, 50.7f, iLocal_313, 20f, 0);
					}
					else if (iLocal_313 == 7)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1902.0653f, -539.55853f, 11.041574f, -129.5f, iLocal_313, 17.5f, 0);
					}
					else if (iLocal_313 == 8)
					{
						func_541(joaat("alpha"), iLocal_471, -1939.5352f, -500.97546f, 11.265397f, -129.5f, iLocal_313, 20f, 0);
					}
					else if (iLocal_313 == 9)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1883.367f, -554.1348f, 10.846096f, -129.5f, iLocal_313, 17.5f, 0);
					}
					else if (iLocal_313 == 10)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1953.545f, -496.8808f, 12.011486f, -129.5f, iLocal_313, 17.5f, 0);
					}
					else if (iLocal_313 == 11)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1971.7618f, -474.74347f, 11.883854f, -129.5f, iLocal_313, 20f, 0);
					}
					else if (iLocal_313 == 12)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1915.9277f, -520.5757f, 11.618545f, -129.5f, iLocal_313, 20f, 0);
					}
					else if (iLocal_313 == 13)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1895.0903f, -537.9584f, 12.23541f, -129.5f, iLocal_313, 20f, 0);
					}
					else if (iLocal_313 == 14)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1788.6815f, -605.77545f, 10.994529f, 50.7f, iLocal_313, 17.5f, 0);
					}
					else if (iLocal_313 == 15)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1796.4786f, -606.5887f, 10.792778f, 50.7f, iLocal_313, 20f, 0);
					}
					else if (iLocal_313 == 16)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1830.8224f, -578.4476f, 11.585022f, 50.7f, iLocal_313, 20f, 0);
					}
					else if (iLocal_313 == 17)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1829.73f, -565.704f, 11.653636f, 50.7f, iLocal_313, 15f, 0);
					}
					else if (iLocal_313 == 18)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1848.126f, -557.549f, 11.957444f, 50.7f, iLocal_313, 17.5f, 0);
					}
					else if (iLocal_313 == 19)
					{
						func_541(joaat("cavalcade"), iLocal_471, -1908.5155f, -515.022f, 12.003843f, 50.7f, iLocal_313, 20f, 0);
					}
					iLocal_313++;
				}
			}
			if (bVar2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cavalcade"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("alpha"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_471);
				func_540(0);
				iLocal_551 = 2;
			}
			break;
		case 2:
			func_540(0);
			if (bVar2)
			{
				iLocal_551 = 3;
			}
			break;
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_540(0);
			if (bVar2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_408[0], false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_408[0], -1742.4287f, -681.9137f, 10.033356f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_408[0], -132.3163f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_408[0], 5f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_408[0], 15f);
					if (!PED::IS_PED_INJURED(iLocal_418[0]))
					{
						TASK::TASK_VEHICLE_MISSION(iLocal_418[0], iLocal_408[0], 0, 1, 15f, 786603, 5f, 5f, true);
						PED::SET_PED_KEEP_TASK(iLocal_418[0], true);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_408[1], false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_408[1], -1744.7383f, -688.36646f, 9.544968f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_408[1], -130.69975f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_408[1], 5f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_408[1], 15f);
					if (!PED::IS_PED_INJURED(iLocal_418[1]))
					{
						TASK::TASK_VEHICLE_MISSION(iLocal_418[1], iLocal_408[1], 0, 1, 15f, 786603, 5f, 5f, true);
						PED::SET_PED_KEEP_TASK(iLocal_418[1], true);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_408[2], false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_408[2], -1759.9899f, -666.7789f, 9.905796f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_408[2], -133.3606f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_408[2], 5f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_408[2], 15f);
					if (!PED::IS_PED_INJURED(iLocal_418[2]))
					{
						TASK::TASK_VEHICLE_MISSION(iLocal_418[2], iLocal_408[2], 0, 1, 15f, 786603, 5f, 5f, true);
						PED::SET_PED_KEEP_TASK(iLocal_418[2], true);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_408[3], false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_408[3], -1734.686f, -734.4443f, 9.4153f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_408[3], 139.5574f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_408[3], 5f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_408[3], 0f);
					func_58(&(iLocal_418[3]), 1);
				}
				iVar1 = 0;
				while (iVar1 < iLocal_418)
				{
					if (iVar1 > 3)
					{
						func_58(&(iLocal_418[iVar1]), 1);
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_408)
				{
					if (iVar1 > 3)
					{
						__LIB_37__::func_206(&(iLocal_408[iVar1]), 1);
					}
					iVar1++;
				}
				iLocal_551 = 4;
			}
			break;
		case 4:
			func_539(1);
			func_540(1);
			if (bVar2)
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				iVar1 = 0;
				while (iVar1 < iLocal_418)
				{
					func_58(&(iLocal_418[iVar1]), 1);
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_408)
				{
					__LIB_37__::func_206(&(iLocal_408[iVar1]), 1);
					iVar1++;
				}
				iLocal_551 = 5;
			}
			break;
		case 5:
			STREAMING::REQUEST_MODEL(iLocal_462);
			STREAMING::REQUEST_MODEL(iLocal_464);
			VEHICLE::REQUEST_VEHICLE_RECORDING(601, sLocal_381);
			STREAMING::REQUEST_PTFX_ASSET();
			func_539(1);
			if (bVar2)
			{
				if (iVar0 < 129500)
				{
					func_539(0);
					STREAMING::REMOVE_IPL("ferris_finale_Anim");
				}
				iLocal_551 = 6;
			}
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_432))
			{
				func_538(0);
			}
			STREAMING::REQUEST_MODEL(iLocal_462);
			STREAMING::REQUEST_MODEL(iLocal_464);
			VEHICLE::REQUEST_VEHICLE_RECORDING(601, sLocal_381);
			STREAMING::REQUEST_PTFX_ASSET();
			if (bVar2)
			{
				if (iVar0 < 132000)
				{
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_462) && STREAMING::HAS_MODEL_LOADED(iLocal_464)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(601, sLocal_381))
					{
						iLocal_410 = VEHICLE::CREATE_VEHICLE(iLocal_462, -1657.1f, -1174f, 0.5f, 91.6f, true, true, false);
						iLocal_416 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_410, 26, iLocal_464, -1, true, true);
						VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_410, 5f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_410, true, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_410, 0, 111);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_410, 3, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_410, true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_410, 601, sLocal_381, false);
						__LIB_17__::func_710(&iLocal_410, 2450f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_410, false);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_410, true);
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							iLocal_419[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_water_boat_prop", iLocal_410, 0f, -4.6f, -1f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_419[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_water_boat_Jetmax_bow", iLocal_410, 0f, 4.2f, -0.5f, 0f, 0f, 180f, 1f, false, false, false);
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_419[0], "forward", 1f, false);
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_419[1], "speed", 1f, false);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_416, true);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_464);
				}
				CLOCK::SET_CLOCK_TIME(9, 30, 0);
				iLocal_342 = 0;
				iLocal_551 = 7;
			}
			break;
		case 7:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_432))
			{
				func_538(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_410, false) && !PED::IS_PED_INJURED(iLocal_416))
			{
				if (iLocal_342 == 0)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_410))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_410) > 2850f)
						{
							iLocal_342++;
						}
					}
				}
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(602, sLocal_381);
			if (bVar2)
			{
				iVar1 = 0;
				while (iVar1 < iLocal_417)
				{
					func_58(&(iLocal_417[iVar1]), 1);
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_433)
				{
					__LIB_16__::func_13(&(iLocal_433[iVar1]), 1);
					iVar1++;
				}
				__LIB_16__::func_13(&iLocal_432, 1);
				STREAMING::REMOVE_ANIM_DICT(sLocal_398);
				STREAMING::REQUEST_IPL("ferris_finale_Anim");
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_410, false))
				{
					if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_410) || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_410))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_410);
					}
					VEHICLE::REMOVE_VEHICLE_RECORDING(601, sLocal_381);
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(602, sLocal_381))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_410, 602, sLocal_381, false);
						__LIB_17__::func_710(&iLocal_410, 6250f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_410, false);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_410, true);
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_463);
				CLOCK::SET_CLOCK_TIME(9, 0, 0);
				iLocal_342 = 0;
				iLocal_551 = 8;
			}
			break;
		case 8:
			if (iLocal_342 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_410, false) && !PED::IS_PED_INJURED(iLocal_416))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_410))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_410) > 6350f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_410);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_416, iLocal_410, -1852.0521f, -1318.3975f, 0.496157f, 40f, 0, iLocal_462, 16777280, 1f, 100f);
							iLocal_342++;
						}
					}
				}
			}
			if (bVar2)
			{
				func_58(&iLocal_416, 1);
				__LIB_37__::func_206(&iLocal_410, 1);
				__LIB_37__::func_206(&iLocal_411, 1);
				if (iLocal_419[0] != 0)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_419[0], false);
					iLocal_419[0] = 0;
				}
				if (iLocal_419[1] != 0)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_419[1], false);
					iLocal_419[1] = 0;
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(601, sLocal_381);
				VEHICLE::REMOVE_VEHICLE_RECORDING(602, sLocal_381);
				STREAMING::REMOVE_PTFX_ASSET();
				CLOCK::SET_CLOCK_TIME(8, 0, 0);
				iLocal_551 = 9;
			}
			break;
		case 9:
			if (bVar2)
			{
				iLocal_266 = 0;
				iLocal_551 = 10;
			}
			break;
		case 10:
			if (!iLocal_266)
			{
				if (bVar2 || iVar0 > 141400)
				{
					iVar9 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1801.2965f, -883.5159f, 3.5508f, 3f, joaat("prop_beach_parasol_03"), false, false, true);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar9) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar9)) && ENTITY::IS_ENTITY_VISIBLE(iVar9))
					{
					}
					iLocal_266 = 1;
				}
			}
			if (bVar2)
			{
				iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.1573f, -905.8969f, 2.0968f, 3f, joaat("prop_surf_board_04"), false, false, true);
				iVar4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.1573f, -905.8969f, 2.0968f, 3f, joaat("prop_surf_board_ldn_02"), false, false, true);
				iVar5 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.1573f, -905.8969f, 2.0968f, 3f, joaat("prop_surf_board_ldn_04"), false, false, true);
				iVar6 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.1573f, -905.8969f, 2.0968f, 3f, joaat("prop_coolbox_01"), false, false, true);
				iVar7 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.1573f, -905.8969f, 2.0968f, 3f, joaat("prop_beach_bag_01b"), false, false, true);
				iVar10 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1790.4347f, -881.3105f, 5.3852f, 3f, joaat("prop_beach_lilo_01"), false, false, true);
				iVar8 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1801.2965f, -883.5159f, 3.5508f, 3f, joaat("prop_beach_bag_01b"), false, false, true);
				iVar11 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1801.2965f, -883.5159f, 3.5508f, 3f, joaat("prop_beachball_01"), false, false, true);
				if ((((((ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar3)) && ENTITY::IS_ENTITY_VISIBLE(iVar3)) && ((ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar4)) && ENTITY::IS_ENTITY_VISIBLE(iVar4))) && ((ENTITY::DOES_ENTITY_EXIST(iVar5) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar5)) && ENTITY::IS_ENTITY_VISIBLE(iVar5))) && ((ENTITY::DOES_ENTITY_EXIST(iVar6) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar6)) && ENTITY::IS_ENTITY_VISIBLE(iVar6))) && ((ENTITY::DOES_ENTITY_EXIST(iVar7) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar7)) && ENTITY::IS_ENTITY_VISIBLE(iVar7)))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar3, -1808.0835f, -855.4938f, 6.3014f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar3, 0f, -2.5f, 140.04f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar4, -1807.4043f, -854.8961f, 5.7159f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar4, -79.92f, 77.4f, -62.64f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar4, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar5, -1806.46f, -856.6586f, 5.8052f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar5, 79.92f, 87.48f, 92.52f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar5, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar6, -1807.953f, -855.9752f, 5.5244f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar6, 0f, 0f, 102.6f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar7, -1808.0911f, -856.6115f, 5.5709f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar7, 0.9658f, 8.5644f, -142.56f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar10) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar10)) && ENTITY::IS_ENTITY_VISIBLE(iVar10))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar10, -1805.2048f, -868.6416f, 4.88f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar10, 10.08f, 2.52f, -44.8016f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar10, true);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar8)) && ENTITY::IS_ENTITY_VISIBLE(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar8, -1806.2352f, -867.9008f, 4.8612f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar8, -2.52f, 15.12f, -115.3976f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar11) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar11)) && ENTITY::IS_ENTITY_VISIBLE(iVar11))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar11, -1806.303f, -868.5082f, 4.9113f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iVar11, 0f, 0f, -44.9999f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar11, true);
				}
				iLocal_551 = 11;
			}
			break;
		case 11:
			if (bVar2)
			{
				iLocal_551 = 12;
			}
			break;
		case 12:
			STREAMING::REQUEST_MODEL(iLocal_472);
			STREAMING::REQUEST_MODEL(iLocal_471);
			STREAMING::REQUEST_MODEL(iLocal_470);
			func_537();
			if (iVar0 < 147500 && func_536())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[0]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_472))
					{
						iLocal_418[0] = PED::CREATE_PED(26, iLocal_472, -1773.2719f, -707.4338f, 9.775657f, 143.8f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[0], "amb@world_human_smoking@female@base", "base", 1000f, -1000f, -1, 9, 0f, false, false, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[1]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_472))
					{
						iLocal_418[1] = PED::CREATE_PED(26, iLocal_472, -1780.7948f, -707.49677f, 9.633821f, 127.3f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[1], "amb@world_human_stand_mobile@female@text@base", "base", 1000f, -1000f, -1, 9, 0f, false, false, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[2]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_471))
					{
						iLocal_418[2] = PED::CREATE_PED(26, iLocal_471, -1809.9529f, -683.1652f, 9.4015f, 203.0419f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[2], "amb@world_human_hang_out_street@male_b@base", "base", 1000f, -1000f, -1, 9, 0f, false, false, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[3]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_472))
					{
						iLocal_418[3] = PED::CREATE_PED(26, iLocal_472, -1799.8597f, -690.1613f, 9.609697f, 145.5f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[3], "amb@world_human_tourist_mobile@female@base", "base", 1000f, -1000f, -1, 9, 0f, false, false, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[4]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_471))
					{
						iLocal_418[4] = PED::CREATE_PED(26, iLocal_471, -1827.3092f, -660.8422f, 9.916418f, -157.6f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[4], "amb@world_human_hang_out_street@male_b@base", "base", 1000f, -1000f, -1, 9, 0f, false, false, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[5]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_471))
					{
						iLocal_418[5] = PED::CREATE_PED(26, iLocal_471, -1826.7333f, -661.96735f, 9.725348f, 20.3f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[5], "amb@world_human_hang_out_street@male_a@base", "base", 1000f, -1000f, -1, 9, 0f, false, false, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[6]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_471))
					{
						iLocal_418[6] = PED::CREATE_PED(26, iLocal_471, -1809.3574f, -684.6357f, 9.412f, 21.1289f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[6], "amb@world_human_hang_out_street@male_a@base", "base", 1000f, -1000f, -1, 9, 0f, false, false, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_418[7]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_470))
					{
						iLocal_418[7] = PED::CREATE_PED(26, iLocal_470, -1817.0607f, -682.0644f, 9.412f, 230.3514f, true, true);
						TASK::TASK_PLAY_ANIM(iLocal_418[7], "move_f@jogger", "run", 1000f, -1000f, -1, 9, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_418[7], false, false);
					}
				}
			}
			if (bVar2 && iVar0 > 146000)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_472);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_471);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_470);
				iLocal_551 = 14;
			}
			break;
		case 14:
			if (bVar2)
			{
				func_535(iLocal_418[0], -1868.0334f, -625.9962f, 10.2611f, 336.5973f, "amb@world_human_smoking@female@base", "base", 1);
				func_535(iLocal_418[1], -1881.9839f, -618.1794f, 10.4857f, 150.3923f, "amb@world_human_stand_mobile@female@text@base", "base", 1);
				func_535(iLocal_418[3], -1893.5f, -602.4f, 10.8224f, 151.6628f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_535(iLocal_418[2], -1867.4463f, -624.8217f, 10.341f, 124.0036f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[4], -1868.4f, -625.2f, 10.236f, -116.2f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[5], -1830.2104f, -664.5304f, 9.3778f, 299.2157f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[6], -1829.2007f, -663.9257f, 9.3505f, 119.4014f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_534(iLocal_418[7]);
				iLocal_551 = 15;
			}
			break;
		case 15:
			if (bVar2)
			{
				func_535(iLocal_418[0], -1983.5428f, -529.3809f, 10.6952f, 230.9089f, "move_f@jogger", "run", 1);
				func_535(iLocal_418[1], -1919.4448f, -588.8778f, 10.6731f, 170.896f, "amb@world_human_stand_mobile@female@text@base", "base", 1);
				func_535(iLocal_418[2], -1918.5061f, -581.2005f, 10.8527f, 202.4282f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[4], -1917.5505f, -582.8298f, 10.7776f, 35.8903f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[5], -1932.9749f, -569.0629f, 10.8524f, 135.6026f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[7], -1906.1226f, -602.3423f, 10.6828f, 50.9085f, "move_f@jogger", "run", 1);
				func_534(iLocal_418[3]);
				func_534(iLocal_418[6]);
				iLocal_551 = 16;
			}
			break;
		case 16:
			if (bVar2)
			{
				func_535(iLocal_418[0], -1891.1615f, -712.9316f, 6.5149f, 191.8786f, "amb@world_human_tourist_mobile@female@base", "base", 1);
				func_535(iLocal_418[2], -1878.5149f, -696.8825f, 8.394f, 32.476f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[4], -1879.1495f, -695.0729f, 8.4385f, 205.4313f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[5], -1893.169f, -631.4039f, 10.1937f, 155.5788f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[1], -1893.8379f, -632.8634f, 10.0878f, 325.8723f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_535(iLocal_418[7], -1883.5461f, -725.7193f, 6.3307f, 225.0816f, "move_f@jogger", "run", 1);
				func_534(iLocal_418[6]);
				func_534(iLocal_418[3]);
				CLOCK::SET_CLOCK_TIME(8, 0, 0);
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("clear");
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				iLocal_551 = 17;
			}
			break;
		case 17:
			if (bVar2)
			{
				func_535(iLocal_418[0], -1912.0662f, -602.6298f, 10.5848f, 294.1278f, "amb@world_human_smoking@female@base", "base", 1);
				func_535(iLocal_418[1], -1898.803f, -603.161f, 10.6174f, 207.0302f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_535(iLocal_418[2], -1897.5013f, -604.726f, 10.6416f, 66.181f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[4], -1899.6445f, -603.7774f, 10.6646f, 256.1585f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[7], -1906.1023f, -604.9014f, 10.6828f, 229.4289f, "move_f@jogger", "run", 1);
				func_534(iLocal_418[3]);
				func_534(iLocal_418[5]);
				func_534(iLocal_418[6]);
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_551 = 18;
			}
			break;
		case 18:
			if (bVar2)
			{
				func_535(iLocal_418[0], -1881.9484f, -607.5357f, 14.4512f, 129.3375f, "amb@world_human_smoking@female@base", "base", 1);
				func_535(iLocal_418[1], -1904.5576f, -593.6984f, 10.8258f, 37.8397f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_535(iLocal_418[2], -1889.823f, -605.4258f, 10.8539f, 170.2484f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[4], -1889.4088f, -606.6351f, 10.8001f, 30.0624f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[5], -1905.26f, -592.3629f, 10.8546f, 177.2372f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[6], -1905.2896f, -593.6451f, 10.7538f, 343.4001f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[7], -1964.4635f, -554.6491f, 10.6827f, 230.4146f, "move_f@jogger", "run", 1);
				func_534(iLocal_418[3]);
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_551 = 19;
			}
			break;
		case 19:
			if (bVar2)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_MONTAGE_MUTES"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_1_MONTAGE_MUTES");
				}
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_551 = 20;
			}
			break;
		case 20:
			if (bVar2)
			{
				func_535(iLocal_418[1], -1868.5096f, -641.648f, 10.0853f, 182.5072f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_535(iLocal_418[3], -1857.7383f, -634.5464f, 10.0832f, 150.5682f, "amb@world_human_stand_mobile@female@text@base", "base", 1);
				func_535(iLocal_418[2], -1867.7147f, -642.4875f, 10.1098f, 78.587f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[4], -1868.9943f, -642.2708f, 10.124f, 275.0369f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[5], -1869.9099f, -632.1488f, 10.131f, 224.8968f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_535(iLocal_418[6], -1869.0247f, -633.5297f, 10.1163f, 36.4653f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_535(iLocal_418[7], -1880.808f, -626.5896f, 10.3331f, 229.4668f, "move_f@jogger", "run", 1);
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_551 = 21;
			}
			break;
		case 21:
			if (bVar2)
			{
				iLocal_551 = 22;
			}
			break;
		case 22:
			break;
	}
}

void func_534(int iParam0)//Position - 0x4B654
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		ENTITY::SET_ENTITY_COORDS(iParam0, Var0.f_0, Var0.f_1, -10f, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	}
}

void func_535(int iParam0, struct<3> Param1, float fParam2, char* sParam3, char* sParam4, bool bParam5)//Position - 0x4B695
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam5)
		{
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iParam0, 0);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		ENTITY::SET_ENTITY_VISIBLE(iParam0, true, false);
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		TASK::TASK_PLAY_ANIM(iParam0, sParam3, sParam4, 1000f, -1000f, -1, 9, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	}
}

int func_536()//Position - 0x4B6FB
{
	if ((((((STREAMING::HAS_ANIM_DICT_LOADED("move_f@jogger") && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@text@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_tourist_mobile@female@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_b@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_smoking@female@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@female_arms_crossed@base"))
	{
		return 1;
	}
	return 0;
}

void func_537()//Position - 0x4B768
{
	STREAMING::REQUEST_ANIM_DICT("move_f@jogger");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@text@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_tourist_mobile@female@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_b@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@female_arms_crossed@base");
}

void func_538(bool bParam0)//Position - 0x4B7AF
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_432, 2) };
	Var0.f_0 = (Var0.f_0 - (5f * SYSTEM::TIMESTEP()));
	ENTITY::SET_ENTITY_ROTATION(iLocal_432, Var0.f_0, Var0.f_1, Var0.f_2, 2, true);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_433)
	{
		fVar2 = (IntToFloat(iVar1) * 22.5f);
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_432, 0f, (15.3f * SYSTEM::COS(fVar2)), (15.3f * SYSTEM::SIN(fVar2))) };
		if (bParam0)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_433[iVar1], Var3, false, false, true);
		}
		else
		{
			OBJECT::SLIDE_OBJECT(iLocal_433[iVar1], Var3, 1f, 1f, 1f, false);
		}
		iVar1++;
	}
}

int func_539(bool bParam0)//Position - 0x4B855
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_432))
	{
		STREAMING::REQUEST_MODEL(iLocal_466);
		STREAMING::REQUEST_MODEL(iLocal_467);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_466) && STREAMING::HAS_MODEL_LOADED(iLocal_467))
		{
			if (bParam0)
			{
				return 1;
			}
			else
			{
				iLocal_432 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_466, Local_380, true, true, false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_432, 500);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_432, true);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_433)
				{
					fVar1 = (IntToFloat(iVar0) * 22.5f);
					Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_432, 0f, (15.3f * SYSTEM::COS(fVar1)), (15.3f * SYSTEM::SIN(fVar1))) };
					iLocal_433[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_467, Var2, true, true, false);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_433[iVar0], 500);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_433[iVar0], true);
					iVar0++;
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_466);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_467);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_540(bool bParam0)//Position - 0x4B94B
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	fVar1 = 15f;
	iVar0 = 0;
	while (iVar0 < iLocal_408)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_408[iVar0], false) && (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_408[iVar0], -1, false) || !bParam0))
		{
			if ((((((iVar0 == 1 || iVar0 == 4) || iVar0 == 7) || iVar0 == 9) || iVar0 == 10) || iVar0 == 14) || iVar0 == 18)
			{
				fVar1 = 17.5f;
			}
			else if (((((((iVar0 == 6 || iVar0 == 8) || iVar0 == 11) || iVar0 == 12) || iVar0 == 13) || iVar0 == 15) || iVar0 == 16) || iVar0 == 19)
			{
				fVar1 = 20f;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_408[iVar0], fVar1);
		}
		iVar0++;
	}
}

void func_541(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x4BA56
{
	if (STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		iLocal_408[iParam4] = VEHICLE::CREATE_VEHICLE(iParam0, Param2, fParam3, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_408[iParam4], 5f);
		if (bParam6)
		{
			iLocal_418[iParam4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_408[iParam4], 26, iParam1, -1, true, true);
			TASK::TASK_STAND_STILL(iLocal_418[iParam4], -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_418[iParam4], true);
		}
		if (fParam5 > 0f)
		{
		}
	}
}

void func_542()//Position - 0x4BAD6
{
	int iVar0;
	iVar0 = 0;
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
	}
	if (!iLocal_259)
	{
		iLocal_436 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("OPENING_CREDITS");
		iLocal_259 = 1;
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_436) && !bLocal_245)
	{
		switch (iLocal_339)
		{
			case 0:
				if (iVar0 >= 5533)
				{
					func_548("art", 105f, 115f, "right", 0.333f, 0.333f);
					func_547("art", "Art Director", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("art", "AARON GARBUT", 50f, ",", 1);
					func_545("art", 0.1666f);
					iLocal_339++;
				}
				break;
			case 1:
				if (iVar0 >= 9266)
				{
					func_544("art", 0.1666f);
					iLocal_339++;
				}
				break;
			case 2:
				if (iVar0 >= 10700)
				{
					func_548("techdir", 120f, 450f, "right", 0.333f, 0.333f);
					func_547("techdir", "Technical Director", 0f, "HUD_COLOUR_TREVOR", 1);
					func_546("techdir", "ADAM FOWLER", 110f, ",", 1);
					func_545("techdir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 3:
				if (iVar0 >= 14400)
				{
					func_544("techdir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 4:
				if (iVar0 >= 17900)
				{
					func_548("gamedes", 85f, 225f, "right", 0.333f, 0.333f);
					func_547("gamedes", "Game Design", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_546("gamedes", "LESLIE BENZIES,IMRAN SARWAR", 50f, ",", 1);
					func_545("gamedes", 0.1666f);
					iLocal_339++;
				}
				break;
			case 5:
				if (iVar0 >= 21633)
				{
					func_544("gamedes", 0.1666f);
					iLocal_339++;
				}
				break;
			case 6:
				if (iVar0 >= 26133)
				{
					if (CAM::ARE_WIDESCREEN_BORDERS_ACTIVE())
					{
						func_548("written", 0f, 50f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_548("written", 0f, 40f, "left", 0.333f, 0.333f);
					}
					func_547("written", "Written By", 80f, "HUD_COLOUR_MICHAEL", 1);
					func_546("written", "DAN HOUSER,RUPERT HUMPHRIES,MICHAEL UNSWORTH", 145f, ",", 1);
					func_545("written", 0.1666f);
					iLocal_339++;
				}
				break;
			case 7:
				if (iVar0 >= 30500 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_543("written");
					iLocal_339++;
				}
				break;
			case 8:
				if (iVar0 >= 36533)
				{
					func_548("assocart", 85f, 430f, "right", 0.333f, 0.333f);
					func_547("assocart", "Associate Art Directors", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("assocart", "ADAM COCHRANE,MICHAEL KANE", 75f, ",", 1);
					func_545("assocart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 9:
				if (iVar0 >= 40233)
				{
					func_544("assocart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 10:
				if (iVar0 >= 42700)
				{
					func_548("assisart", 0f, 440f, "left", 0.333f, 0.333f);
					func_547("assisart", "Assistant Art Director", 105f, "HUD_COLOUR_TREVOR", 1);
					func_546("assisart", "IAN McQUE", 265f, ",", 1);
					func_545("assisart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 11:
				if (iVar0 >= 46436)
				{
					func_544("assisart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 12:
				if (iVar0 >= 49633)
				{
					func_548("globart", 90f, 390f, "right", 0.333f, 0.333f);
					func_547("globart", "Global Lead Technical Artist", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_546("globart", "RICK STIRLING", 125f, ",", 1);
					func_545("globart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 13:
				if (iVar0 >= 53000 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_543("globart");
					iLocal_339++;
				}
				break;
			case 14:
				if (iVar0 >= 58133)
				{
					func_548("leadcut", 0f, 395f, "left", 0.333f, 0.333f);
					func_547("leadcut", "Lead Cutscene Animation", 100f, "HUD_COLOUR_MICHAEL", 1);
					func_546("leadcut", "DERMOT BAILIE,FELIPE BUSQUETS", 248f, ",", 1);
					func_545("leadcut", 0.1666f);
					iLocal_339++;
				}
				break;
			case 15:
				if (iVar0 >= 61800)
				{
					func_544("leadcut", 0.1666f);
					iLocal_339++;
				}
				break;
			case 16:
				if (iVar0 >= 65266)
				{
					func_548("ingame", 95f, 320f, "right", 0.333f, 0.333f);
					func_547("ingame", "Lead Ingame Animation", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("ingame", "JIM JAGGER,MARK TENNANT", 115f, ",", 1);
					func_545("ingame", 0.1666f);
					iLocal_339++;
				}
				break;
			case 17:
				if (iVar0 >= 69366)
				{
					func_544("ingame", 0.1666f);
					iLocal_339++;
				}
				break;
			case 18:
				if (iVar0 >= 80133)
				{
					func_548("animdir", 0f, 410f, "left", 0.333f, 0.333f);
					func_547("animdir", "Animation Director", 190f, "HUD_COLOUR_TREVOR", 1);
					func_546("animdir", "ROB NELSON", 295f, ",", 1);
					func_545("animdir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 19:
				if (iVar0 >= 83833)
				{
					func_544("animdir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 20:
				if (iVar0 >= 90166)
				{
					func_548("cutdir", 0f, 335f, "left", 0.333f, 0.333f);
					func_547("cutdir", "Cutscene Director", 115f, "HUD_COLOUR_FREEMODE", 1);
					func_546("cutdir", "ROD EDGE", 195f, ",", 1);
					func_545("cutdir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 21:
				if (iVar0 >= 93933)
				{
					func_544("cutdir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 22:
				if (iVar0 >= 95600)
				{
					func_548("leadenv", 90f, 410f, "right", 0.333f, 0.333f);
					func_547("leadenv", "Principal Lead Environment Artist", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_546("leadenv", "WAYLAND STANDING", 110f, ",", 1);
					func_545("leadenv", 0.1666f);
					iLocal_339++;
				}
				break;
			case 23:
				if (iVar0 >= 99200)
				{
					func_544("leadenv", 0.1666f);
					iLocal_339++;
				}
				break;
			case 24:
				if (iVar0 >= 106766)
				{
					func_548("envart", 85f, 315f, "right", 0.333f, 0.333f);
					func_547("envart", "Lead Environment Artists", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("envart", "MICHAEL PIRSO,ABHISHEK AGRAWAL,JODY PILESKI", 60f, ",", 1);
					func_545("envart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 25:
				if (iVar0 >= 110566)
				{
					func_544("envart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 26:
				if (iVar0 >= 114866)
				{
					func_548("vehart", 0f, 180f, "left", 0.333f, 0.333f);
					func_547("vehart", "Lead Vehicle Artist", 110f, "HUD_COLOUR_TREVOR", 1);
					func_546("vehart", "JOLYON ORME", 170f, ",", 1);
					func_545("vehart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 27:
				if (iVar0 >= 117300 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_543("vehart");
					iLocal_339++;
				}
				break;
			case 28:
				if (iVar0 >= 124866)
				{
					func_548("princart", 0f, 370f, "left", 0.333f, 0.333f);
					func_547("princart", "Principal Artists", 105f, "HUD_COLOUR_FREEMODE", 1);
					func_546("princart", "DAVE COOPER,IAIN McNAUGHTON", 195f, ",", 1);
					func_545("princart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 29:
				if (iVar0 >= 127400)
				{
					func_544("princart", 0.1666f);
					iLocal_339++;
				}
				break;
			case 30:
				if (iVar0 >= 133733)
				{
					func_548("princlight", 100f, 75f, "right", 0.333f, 0.333f);
					func_547("princlight", "Principal Lighting Artist", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_546("princlight", "OWEN SHEPHERD", 90f, ",", 1);
					func_545("princlight", 0.1666f);
					iLocal_339++;
				}
				break;
			case 31:
				if (iVar0 >= 136366)
				{
					func_544("princlight", 0.1666f);
					iLocal_339++;
				}
				break;
			case 32:
				if (iVar0 >= 139166)
				{
					if (GRAPHICS::GET_IS_HIDEF() && !CAM::ARE_WIDESCREEN_BORDERS_ACTIVE())
					{
						func_548("outsource", 175f, 15f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_548("outsource", 175f, 50f, "right", 0.333f, 0.333f);
					}
					func_547("outsource", "Outsource Manager", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("outsource", "SCOTT WILSON", 75f, ",", 1);
					func_545("outsource", 0.1666f);
					iLocal_339++;
				}
				break;
			case 33:
				if (iVar0 >= 141500 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_543("outsource");
					iLocal_339++;
				}
				break;
			case 34:
				if (iVar0 >= 144500)
				{
					func_548("2D", 0f, 85f, "left", 0.333f, 0.333f);
					func_547("2D", "2D/UI Director", 110f, "HUD_COLOUR_TREVOR", 1);
					func_546("2D", "STUART PETRI", 135f, ",", 1);
					func_545("2D", 0.1666f);
					iLocal_339++;
				}
				break;
			case 35:
				if (iVar0 >= 147500 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_543("2D");
					iLocal_339++;
				}
				break;
			case 36:
				if (iVar0 >= 152633)
				{
					func_548("Music", 110f, 405f, "right", 0.333f, 0.333f);
					func_547("Music", "Music Director", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_546("Music", "CRAIG CONNER", 30f, ",", 1);
					func_545("Music", 0.1666f);
					iLocal_339++;
				}
				break;
			case 37:
				if (iVar0 >= 156100)
				{
					func_544("Music", 0.1666f);
					iLocal_339++;
				}
				break;
			case 38:
				if (iVar0 >= 156700)
				{
					func_548("Musicpro", 250f, 380f, "right", 0.333f, 0.333f);
					func_547("Musicpro", "Music Producer", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_546("Musicpro", "IVAN PAVLOVICH", 45f, ",", 1);
					func_545("Musicpro", 0.1666f);
					iLocal_339++;
				}
				break;
			case 39:
				if (iVar0 >= 159600)
				{
					func_544("Musicpro", 0f);
					iLocal_339++;
				}
				break;
			case 40:
				if (iVar0 >= 161900)
				{
					func_548("audiodir", 0f, 405f, "left", 0.333f, 0.333f);
					func_547("audiodir", "Audio Director", 180f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("audiodir", "MATTHEW SMITH", 215f, ",", 1);
					func_545("audiodir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 41:
				if (iVar0 >= 165566)
				{
					func_544("audiodir", 0.1666f);
					iLocal_339++;
				}
				break;
			case 42:
				if (iVar0 >= 166366)
				{
					if (GRAPHICS::GET_IS_HIDEF() && !CAM::ARE_WIDESCREEN_BORDERS_ACTIVE())
					{
						func_548("leadaud", 40f, 25f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_548("leadaud", 40f, 48f, "right", 0.333f, 0.333f);
					}
					func_547("leadaud", "Lead Audio Programmer", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_546("leadaud", "ALASTAIR MACGREGOR", 55f, ",", 1);
					func_547("leadaud", "Lead Sound Designers", 30f, "HUD_COLOUR_MICHAEL", 1);
					func_546("leadaud", "JEFFREY WHITCHER,STEVE DONOHOE", 85f, ",", 1);
					func_547("leadaud", "Dialogue Supervisor", 60f, "HUD_COLOUR_MICHAEL", 1);
					func_546("leadaud", "WILL MORTON", 115f, ",", 1);
					func_545("leadaud", 0.1666f);
					iLocal_339++;
				}
				break;
			case 43:
				if (iVar0 >= 168833)
				{
					func_544("leadaud", 0.1666f);
					iLocal_339++;
				}
				break;
			case 44:
				if (iVar0 >= 170133)
				{
					func_548("score", 0f, 325f, "left", 0.333f, 0.333f);
					func_547("score", "Original Score", 80f, "HUD_COLOUR_TREVOR", 1);
					func_546("score", "TANGERINE DREAM,WOODY JACKSON,ALCHEMIST & OH NO", 165f, ",", 1);
					func_545("score", 0.1666f);
					iLocal_339++;
				}
				break;
			case 45:
				if (iVar0 >= 173033)
				{
					func_544("score", 0.1666f);
					iLocal_339++;
				}
				break;
			case 46:
				if (iVar0 >= 175066)
				{
					func_548("assotech", 80f, 365f, "right", 0.333f, 0.333f);
					func_547("assotech", "Associate Technical Directors", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_546("assotech", "PHIL HOOKER,KLAAS SCHILSTRA", 125f, ",", 1);
					func_545("assotech", 0.1666f);
					iLocal_339++;
				}
				break;
			case 47:
				if (iVar0 >= 178700)
				{
					func_544("assotech", 0.1666f);
					iLocal_339++;
				}
				break;
			case 48:
				if (iVar0 >= 180500)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_548("assitech", 0f, 325f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_548("assitech", 0f, 305f, "left", 0.333f, 0.333f);
					}
					func_547("assitech", "Assistant Technical Directors", 190f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("assitech", "HUGUES ST-PIERRE,TOM SHEPHERD,BRETT LAMING,KEVIN HOARE", 245f, ",", 1);
					func_545("assitech", 0.1666f);
					iLocal_339++;
				}
				break;
			case 49:
				if (iVar0 >= 183800)
				{
					func_544("assitech", 0.1666f);
					iLocal_339++;
				}
				break;
			case 50:
				if (iVar0 >= 185066)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_548("proglead", 0f, 280f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_548("proglead", 0f, 260f, "left", 0.333f, 0.333f);
					}
					func_547("proglead", "Programming Leads", 125f, "HUD_COLOUR_MICHAEL", 1);
					func_546("proglead", "ALEX HADJADJ,BEN LYONS,CHRIS SWINHOE,COLIN ENTWISTLE,DAVID HYND", 215f, ",", 1);
					func_545("proglead", 0.1666f);
					iLocal_339++;
				}
				break;
			case 51:
				if (iVar0 >= 188100)
				{
					func_544("proglead", 0.1666f);
					iLocal_339++;
				}
				break;
			case 52:
				if (iVar0 >= 189066)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_548("proglead2", 0f, 280f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_548("proglead2", 0f, 260f, "left", 0.333f, 0.333f);
					}
					func_547("proglead2", "Programming Leads", 125f, "HUD_COLOUR_MICHAEL", 1);
					func_546("proglead2", "DANIEL YELLAND,JOHN WHYTE,JONATHON ASHCROFT,MICHAEL KREHAN", 215f, ",", 1);
					func_545("proglead2", 0.1666f);
					iLocal_339++;
				}
				break;
			case 53:
				if (iVar0 >= 192066)
				{
					func_544("proglead2", 0.1666f);
					iLocal_339++;
				}
				break;
			case 54:
				if (iVar0 >= 193266)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_548("toollead", 125f, 395f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_548("toollead", 125f, 355f, "right", 0.333f, 0.333f);
					}
					func_547("toollead", "Lead Tools Programmers", 0f, "HUD_COLOUR_TREVOR", 1);
					func_546("toollead", "DAVID MUIR,LUKE OPENSHAW", 75f, ",", 1);
					func_545("toollead", 0.1666f);
					iLocal_339++;
				}
				break;
			case 55:
				if (iVar0 >= 195833)
				{
					func_544("toollead", 0.1666f);
					iLocal_339++;
				}
				break;
			case 56:
				if (iVar0 >= 196733)
				{
					func_548("scripter", 0f, 355f, "left", 0.333f, 0.333f);
					func_547("scripter", "Lead Scripters", 120f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("scripter", "BENJAMIN ROLLINSON,KENNETH ROSS,MATTHEW BOOTON", 185f, ",", 1);
					func_545("scripter", 0.1666f);
					iLocal_339++;
				}
				break;
			case 57:
				if (iVar0 >= 200033)
				{
					func_544("scripter", 0.1666f);
					iLocal_339++;
				}
				break;
			case 58:
				if (iVar0 >= 200666)
				{
					func_548("scripter2", 0f, 355f, "left", 0.333f, 0.333f);
					func_547("scripter2", "Lead Scripters", 120f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("scripter2", "ROBERT BRAY,ROSS WALLACE", 185f, ",", 1);
					func_545("scripter2", 0.1666f);
					iLocal_339++;
				}
				break;
			case 59:
				if (iVar0 >= 203966)
				{
					func_544("scripter2", 0.1666f);
					iLocal_339++;
				}
				break;
			case 60:
				if (iVar0 >= 207166)
				{
					func_548("studio", 90f, 345f, "right", 0.333f, 0.333f);
					func_547("studio", "Studio Director", 0f, "HUD_COLOUR_TREVOR", 1);
					func_546("studio", "ANDREW SEMPLE", 35f, ",", 1);
					func_545("studio", 0.1666f);
					iLocal_339++;
				}
				break;
			case 61:
				if (iVar0 >= 210500 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_543("studio");
					iLocal_339++;
				}
				break;
			case 62:
				if (iVar0 >= 212500)
				{
					func_548("assispro", 0f, 420f, "left", 0.333f, 0.333f);
					func_547("assispro", "Assistant Producer", 90f, "HUD_COLOUR_FREEMODE", 1);
					func_546("assispro", "WILLIAM MILLS", 125f, ",", 1);
					func_545("assispro", 0.1666f);
					iLocal_339++;
				}
				break;
			case 63:
				if (iVar0 >= 216036)
				{
					func_544("assispro", 0.1666f);
					iLocal_339++;
				}
				break;
			case 64:
				if (iVar0 >= 219400)
				{
					func_548("copro", 105f, 320f, "right", 0.333f, 0.333f);
					func_547("copro", "Co-Producer", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_546("copro", "IMRAN SARWAR", 35f, ",", 1);
					func_545("copro", 0.1666f);
					iLocal_339++;
				}
				break;
			case 65:
				if (iVar0 >= 222866)
				{
					func_544("copro", 0.1666f);
					iLocal_339++;
				}
				break;
			case 66:
				if (iVar0 > 225566)
				{
					func_548("pro", 0f, 125f, "left", 0.333f, 0.333f);
					func_547("pro", "Producer", 120f, "HUD_COLOUR_FRANKLIN", 1);
					func_546("pro", "LESLIE BENZIES", 165f, ",", 1);
					func_545("pro", 0.1666f);
					iLocal_339++;
				}
				break;
			case 67:
				if (iVar0 > 228500 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_543("pro");
					iLocal_339++;
				}
				break;
			case 68:
				if (iVar0 > 230666)
				{
					if (CAM::ARE_WIDESCREEN_BORDERS_ACTIVE())
					{
						func_548("execpro", 215f, 50f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_548("execpro", 215f, 45f, "right", 0.333f, 0.333f);
					}
					func_547("execpro", "Executive Producer", 0f, "HUD_COLOUR_TREVOR", 1);
					func_546("execpro", "SAM HOUSER", 95f, ",", 1);
					func_545("execpro", 0.1666f);
					iLocal_339++;
				}
				break;
			case 69:
				if (iVar0 > 235333)
				{
					func_544("execpro", 0.1666f);
					iLocal_339++;
				}
				break;
		}
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_436, 255, 255, 255, 255, 0);
	}
}

void func_543(char* sParam0)//Position - 0x4D2F2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_436, "REMOVE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_544(char* sParam0, float fParam1)//Position - 0x4D31E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_436, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_545(char* sParam0, float fParam1)//Position - 0x4D350
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_436, "SHOW_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_546(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)//Position - 0x4D382
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_436, "ADD_NAMES_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_547(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)//Position - 0x4D3E0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_436, "ADD_ROLE_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_548(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)//Position - 0x4D43E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_436, "SETUP_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_549(bool bParam0)//Position - 0x4D495
{
	if (bParam0)
	{
		if (iLocal_449 == 0)
		{
			iLocal_449 = PED::ADD_SCENARIO_BLOCKING_AREA(-1862.3032f, -607.0848f, 12.0363f, -1812.5437f, -526.8602f, 36.9263f, false, true, true, true);
			PED::SET_PED_NON_CREATION_AREA(-1862.3032f, -607.0848f, 13.0363f, -1812.5437f, -526.8602f, 70.9263f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1862.3032f, -607.0848f, 13.0363f, -1812.5437f, -526.8602f, 70.9263f, false, 0);
		}
		if (iLocal_351 == -1)
		{
			iLocal_351 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1839f, -579.4f, 15f, 10f, 70f, 10f, __LIB_12__::func_418(139.8f), false, 7);
		}
	}
	else
	{
		if (iLocal_449 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_449, false);
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1862.3032f, -607.0848f, 13.0363f, -1812.5437f, -526.8602f, 70.9263f, 0);
			iLocal_449 = 0;
		}
		if (iLocal_351 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_351);
			iLocal_351 = -1;
		}
	}
}

int func_551()//Position - 0x4D622
{
	if (iLocal_440 == 0)
	{
		iLocal_440 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1906.7858f, -573.7576f, 19.0773f, "v_psycheoffice");
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iLocal_440))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_440);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_552(int iParam0, bool bParam1)//Position - 0x4D668
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	bVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_0__::func_518(bVar0);
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
		func_821(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_590(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_555(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_555(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4D826
{
	int iVar0;
	bool bVar1;
	bool bVar2;
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
		bVar1 = __LIB_15__::func_944();
		if (!uParam0->f_23)
		{
			__LIB_31__::func_728(iVar0, 0);
		}
		__LIB_0__::func_637(bVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		bVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_31__::func_728((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()))
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
		if (__LIB_0__::func_374(__LIB_15__::func_944()))
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
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
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
		uParam0->f_5 = __LIB_0__::func_482(bVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_482(bVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_13__::func_756(iVar7);
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
				__LIB_13__::func_756(iVar0);
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
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_15__::func_943();
		__LIB_0__::func_480(bVar2);
		__LIB_17__::func_653();
		__LIB_13__::func_775(bVar2);
		__LIB_28__::func_237(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_774(bVar2, &iVar7);
		if (((__LIB_0__::isGlobal_43052EqualsValue(0) || __LIB_0__::isGlobal_43052EqualsValue(3)) || __LIB_0__::isGlobal_43052EqualsValue(2)) || __LIB_0__::isGlobal_43052EqualsValue(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_30__::func_856();
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

int func_590(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x50324
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
			func_813(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_592(*iParam0, bParam6);
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

int func_592(int iParam0, bool bParam1)//Position - 0x5043C
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_610(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_610(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_594(iParam0, 3, 169))
					{
						func_785(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_594(iParam0, 12, 6))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 11))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 12, 10))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 12, 50))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 14, 59))
			{
				func_785(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_594(iParam0, 8, 22))
			{
				func_785(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_594(iParam0, 12, 14))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_594(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 4))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 12, 3))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 14, 82))
			{
				func_785(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_594(iParam0, 8, 76))
			{
				func_785(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_594(iParam0, 12, 1))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_594(iParam0, 12, 12))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 12, 15))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_594(iParam0, 3, 71))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_594(iParam0, 12, 7))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 12, 6))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_594(iParam0, 14, 88))
			{
				func_785(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_594(iParam0, 8, 17))
			{
				func_785(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_594(iParam0, 12, 11))
			{
				func_785(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_594(int iParam0, int iParam1, int iParam2)//Position - 0x50AC2
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
				if (!func_594(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_594(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_594(iParam0, 14, iVar4))
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
			if (!func_594(iParam0, 14, uVar8[iVar7]))
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

void func_610(int iParam0, int iParam1)//Position - 0x54B6A
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
				iVar1 = func_784(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_612(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_17__::func_236(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_653();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::isGlobal_43052EqualsValue(0) && !__LIB_0__::isGlobal_43052EqualsValue(1)) && !__LIB_0__::isGlobal_43052EqualsValue(2)) && !__LIB_0__::isGlobal_43052EqualsValue(3)) && !__LIB_0__::isGlobal_43052EqualsValue(4)) && !__LIB_0__::isGlobal_43052EqualsValue(9)) && !__LIB_0__::isGlobal_43052EqualsValue(10)))
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

void func_612(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x54DE6
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
			if (func_782(iParam0, iVar1, &iVar2, 0))
			{
				func_785(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_781(iParam0, iVar1, &iVar2))
			{
				func_785(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_779(iParam0);
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
			func_615(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_615(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_615(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_615(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x552C2
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
			func_738(iVar5, iParam1, iParam2, 1);
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
						func_738(iVar5, 10, 0, 1);
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
									func_738(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_615(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_738(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_735(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_615(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_729(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_738(iVar5, 14, uVar18[iVar1], 1);
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
							func_615(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_738(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_615(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_720(iParam0);
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
						func_615(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_615(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_719(iVar5, iVar24, iVar23, iVar25);
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
							func_615(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_615(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_615(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_615(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_615(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_615(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_615(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_729(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_719(iVar5, func_735(iParam0, 8, -1), iParam2, func_735(iParam0, 4, -1));
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
				func_658(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_719(iVar5, iParam2, iVar44, iVar45);
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
			func_729(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_719(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_615(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_615(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_719(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_719(iVar5, iVar58, iVar57, iParam2);
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
						func_615(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_719(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_615(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_635(iParam0, 9, iVar63))
						{
							func_615(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_615(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_615(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_615(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_735(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_735(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_615(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_615(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_615(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_615(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_615(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_615(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_615(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_615(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_615(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_615(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_720(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_615(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_615(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_616(iParam0, &uVar4))
		{
			func_615(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_615(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_615(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_615(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_735(iParam0, 3, -1), iVar10);
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
				func_615(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_616(int iParam0, var uParam1)//Position - 0x5716C
{
	int iVar0;
	int iVar1;
	*uParam1 = func_735(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_635(iParam0, iVar1, iVar0))
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

int func_635(int iParam0, int iParam1, int iParam2)//Position - 0x5B429
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
				if (!func_635(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_635(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_635(iParam0, 14, iVar6))
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
			if (!func_635(iParam0, 14, uVar11[iVar10]))
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
						return func_635(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_635(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_658(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6215A
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
	func_659(iParam0, bParam3, 0, -1);
}

void func_659(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x621A8
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
		bVar3 = func_699(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_690(iParam0, iParam3);
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

int func_690(int iParam0, int iParam1)//Position - 0x7163B
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
				iVar3 = func_735(iParam0, 11, -1);
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
				iVar5 = func_735(iParam0, 11, -1);
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

int func_699(int iParam0, bool bParam1)//Position - 0x71A99
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_735(iParam0, 11, -1), 0);
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
						iVar3 = func_735(iParam0, 11, -1);
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
						iVar5 = func_735(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_735(iParam0, 11, -1), 0);
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
						iVar8 = func_735(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_735(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_735(iParam0, 11, -1), 0);
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
						iVar12 = func_735(iParam0, 8, -1);
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

int func_719(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7A928
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
					iVar0 = func_719(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_719(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_720(int iParam0)//Position - 0x7BC63
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
		if (!func_725(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_725(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_725(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7C62F
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_735(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_729(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7F017
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_779(iParam0))
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

int func_735(int iParam0, int iParam1, int iParam2)//Position - 0x7F2C8
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
				if (func_635(iParam0, iParam1, iVar0))
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
				if (func_635(iParam0, iParam1, iVar1))
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

void func_738(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7F447
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
							func_738(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_738(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_738(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_738(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_738(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_738(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_738(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_738(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_738(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_738(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_779(int iParam0)//Position - 0x9821F
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
				iVar1 = func_735(iParam0, 11, -1);
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
				iVar3 = func_735(iParam0, 11, -1);
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

int func_781(int iParam0, int iParam1, int iParam2)//Position - 0x98579
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_594(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_782(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x98605
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_594(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_784(int iParam0, int iParam1, int iParam2)//Position - 0x988C5
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
				if (func_594(iParam0, iParam1, iVar0))
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
				if (func_594(iParam0, iParam1, iVar1))
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

int func_785(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x98966
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
										func_785(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_785(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_784(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_782(iParam0, iVar10, &iVar4, 1))
							{
								func_785(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_785(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_785(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_785(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_785(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_785(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_785(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_785(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_785(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_785(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_782(iParam0, iVar10, &iVar4, 0))
		{
			func_785(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_781(iParam0, iVar10, &iVar4))
		{
			func_785(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_813(int iParam0)//Position - 0x9B898
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
		func_612(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_784(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_814(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_784(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_784(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_814(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_814(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_784(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_612(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_814(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x9BAF5
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_817(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_817(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x9BCB0
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
								func_817(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_817(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_817(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_817(iParam0, 14, iVar5, 1, 0);
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
								func_817(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_817(iParam0, 14, 17, 1, 0);
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

int func_821(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9C296
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
				func_813(*iParam0);
				__LIB_13__::func_777(*iParam0, 1, 0);
				__LIB_13__::func_763(*iParam0);
				__LIB_13__::func_762(*iParam0);
				func_592(*iParam0, bParam6);
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

var func_825(var uParam0, bool bParam1, int iParam2)//Position - 0x9C461
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
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__::func_81());
	bVar8 = __LIB_13__::func_749(bParam1);
	uParam0->f_6 = __LIB_0__::func_482(__LIB_15__::func_944());
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
		__LIB_17__::func_728(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__::isGlobal_43052EqualsValue(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_13__::func_765(iVar10) && __LIB_13__::func_764(iVar10)) && iVar10 == __LIB_0__::func_482(Global_113386.f_2363.f_539.f_4323))
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
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_13__::func_94() || __LIB_0__::isGlobal_43052EqualsValue(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__::isGlobal_43052EqualsValue(14))
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
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_0__::func_540(0) || Global_23011.f_12) || __LIB_0__::isGlobal_43052EqualsValue(14))) && ((!__LIB_0__::func_540(3) || Global_23011.f_12) || __LIB_0__::isGlobal_43052EqualsValue(14))) && ((!__LIB_0__::func_540(2) || Global_23011.f_12) || __LIB_0__::isGlobal_43052EqualsValue(14))) && ((!__LIB_0__::func_540(9) || Global_23011.f_12) || __LIB_0__::isGlobal_43052EqualsValue(14))) && ((!__LIB_0__::func_540(10) || Global_23011.f_12) || __LIB_0__::isGlobal_43052EqualsValue(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__::isGlobal_43052EqualsValue(14))
				{
					if (Global_23011.f_69 == 0)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = __LIB_39__::func_127(uParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = __LIB_39__::func_127(uParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_16__::func_30(uParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = __LIB_39__::func_127(uParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
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
						iVar11 = __LIB_15__::func_944();
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
									if (__LIB_39__::func_127(uParam0, 0))
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
									if (__LIB_39__::func_127(uParam0, 1))
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
									if (__LIB_39__::func_127(uParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (__LIB_39__::func_127(uParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_39__::func_127(uParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_39__::func_127(uParam0, bVar14))
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

void func_846()//Position - 0x9DC8E
{
	int iVar0;
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -51.4f, -1097.6f, 26.4f) < 10000f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -31.383488f, -1108.2485f, 25.425732f, -34.108696f, -1115.3287f, 28.922327f, 5.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -33.779842f, -1107.2047f, 25.44551f, -57.51499f, -1098.4957f, 29.82334f, 6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -59.33848f, -1090.8876f, 25.003147f, -26.987392f, -1103.2012f, 28.922327f, 10.25f, false, true, 0))
				{
					if (!iLocal_246)
					{
						func_848(16);
					}
					else
					{
						func_848(15);
					}
					iLocal_246 = 0;
				}
				else
				{
					iLocal_246 = 1;
				}
			}
			else
			{
				iLocal_246 = 0;
			}
		}
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.2401f, 25.25259f, 26.5f, true, true) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.2401f, 25.25259f, 26.5f))
		{
			func_848(17);
		}
		if ((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -31.383488f, -1108.2485f, 25.425732f, -34.108696f, -1115.3287f, 28.922327f, 5.5f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -33.779842f, -1107.2047f, 25.44551f, -57.51499f, -1098.4957f, 29.82334f, 6f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -59.33848f, -1090.8876f, 25.003147f, -26.987392f, -1103.2012f, 28.922327f, 10.25f))
		{
			func_848(14);
		}
	}
}

void func_848(int iParam0)//Position - 0x9DEB9
{
	if (!iLocal_228)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		func_274();
		__LIB_16__::func_318(&Local_495, 1, 0);
		__LIB_0__::func_325();
		func_15(5, 0);
		if (iLocal_231)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_231 = 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[0 /*7*/], false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[0 /*7*/], false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_493[1 /*7*/], false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_493[1 /*7*/], false);
		}
		if (!PED::IS_PED_INJURED(Local_474.f_0))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_474.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
			PED::SET_PED_KEEP_TASK(Local_474.f_0, true);
		}
		if (!PED::IS_PED_INJURED(Local_477.f_0))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_477.f_0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
			PED::SET_PED_KEEP_TASK(Local_477.f_0, true);
		}
		switch (iParam0)
		{
			case 0:
				break;
			case 3:
				sLocal_555 = "AR1_FAILCAR2";
				break;
			case 2:
				sLocal_555 = "AR1_FAILCAR";
				break;
			case 4:
				sLocal_555 = "AR1_FAILCARS";
				break;
			case 1:
				sLocal_555 = "AR1_FAILBUDDY";
				break;
			case 5:
				sLocal_555 = "AR1_FAILLOST";
				break;
			case 9:
				sLocal_555 = "AR1_FAILLEFT";
				break;
			case 6:
				sLocal_555 = "CMN_GENDEST" /* GXT: ~s~The car was destroyed. */;
				break;
			case 7:
				sLocal_555 = "AR1_STUCK";
				break;
			case 8:
				sLocal_555 = "AR1_FRANSTUCK";
				break;
			case 10:
				sLocal_555 = "AR1_FAILCOPS";
				break;
			case 11:
				sLocal_555 = "AR1_FAILDAM";
				break;
			case 12:
				sLocal_555 = "AR1_FAILDAMAF";
				break;
			case 13:
				sLocal_555 = "AR1_FAILCARLEF";
				break;
			case 14:
				sLocal_555 = "AR1_FAILSHOW1";
				break;
			case 15:
				sLocal_555 = "AR1_FAILSHOW2";
				break;
			case 16:
				sLocal_555 = "AR1_FAILSHOW3";
				break;
			case 17:
				sLocal_555 = "AR1_FAILSHOW4";
				break;
			case 19:
				sLocal_555 = "AR1_FAILSIMDEAD";
				break;
			case 20:
				sLocal_555 = "AR1_FAILJIMDEAD";
				break;
			case 21:
				sLocal_555 = "AR1_FAILDAM2";
				break;
			case 22:
				sLocal_555 = "AR1_FCOPSDEAL";
				break;
			case 18:
				sLocal_555 = "AR1_FAILSHOW5";
				break;
		}
		func_851(sLocal_555);
		while (!__LIB_0__::func_223())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_473.f_0, false))
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_473.f_0, __LIB_0__::func_495()) || __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), Local_473.f_0))
			{
				func_58(&Local_473, 1);
			}
		}
		iLocal_228 = 1;
		func_922();
	}
}

void func_851(char* sParam0)//Position - 0x9E1D4
{
	__LIB_0__::func_381(sParam0);
	func_852(0);
}

void func_852(int iParam0)//Position - 0x9E1E7
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_853(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_853(int iParam0)//Position - 0x9E22C
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
	func_854(&(Global_113386.f_2363.f_539), iVar1);
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

void func_854(var uParam0, int iParam1)//Position - 0x9E33C
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
			if (!func_856(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_856(int iParam0, var uParam1, float fParam2)//Position - 0x9E510
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
			return func_856(8, uParam1, fParam2);
			break;
		case 10:
			return func_856(8, uParam1, fParam2);
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

void func_863(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9F074
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
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
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
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
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
		func_864(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_864(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x9F1ED
{
	func_865(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_865(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x9F209
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_15__::func_944();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_186(&(uParam0->f_2884), 0);
		__LIB_13__::func_760(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_237(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_15__::func_944())
		{
			__LIB_17__::func_236(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		uParam0->f_13[iVar1] = Global_60328_SPN_TOTAL_CASH[iVar1];
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
		func_867(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_867(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA00B6
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_0__::func_650(iParam2);
	}
	if (func_873(iParam2, &iVar0, iParam3, iParam5))
	{
		__LIB_16__::func_870(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_16__::func_870(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_873(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xA0358
{
	char* sVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (__LIB_17__::func_909(*uParam1, __LIB_15__::func_944(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_905(int iParam0, bool bParam1)//Position - 0xA4AF2
{
	__LIB_17__::func_737();
	iLocal_284 = 0;
	iLocal_552 = iParam0;
	iLocal_553 = 4;
	func_922();
	if (bParam1)
	{
		if (iLocal_552 >= 10)
		{
			func_863(3, "GO_TO_HOUSE", 1, 0, 0, 1);
		}
		else if (iLocal_552 >= 6)
		{
			func_863(2, "LOSE_COPS", 0, 0, 0, 1);
		}
		else if (iLocal_552 >= 4)
		{
			func_863(1, "CHASE_MID_POINT", 0, 0, 0, 1);
		}
		else
		{
			func_863(0, "CHOOSE_CAR", 0, 0, 0, 1);
		}
	}
}

void func_908()//Position - 0xA4BB7
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_1__::func_674(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	HUD::REQUEST_ADDITIONAL_TEXT("ARM1", 0);
	__LIB_0__::func_222(&Local_556, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 182, true);
	Local_493[0 /*7*/].f_2 = { -1878.5793f, -579.5922f, 10.777f };
	Local_493[0 /*7*/].f_5 = 320.3026f;
	Local_493[0 /*7*/].f_6 = 1;
	Local_493[1 /*7*/].f_2 = { -1881.1982f, -577.008f, 10.769f };
	Local_493[1 /*7*/].f_5 = 319.7534f;
	Local_493[1 /*7*/].f_6 = 2;
	iLocal_299[0] = 901;
	iLocal_299[1] = 902;
	iLocal_299[2] = 903;
	iLocal_299[3] = 904;
	iLocal_299[4] = 905;
	iLocal_299[5] = 906;
	iLocal_299[6] = 907;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_13__::func_741(1, 0), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
	iLocal_448 = PED::ADD_SCENARIO_BLOCKING_AREA(50.2705f, -636.6755f, 5.3062f, 74.2078f, -610.5507f, 42.6258f, false, true, true, true);
	PATHFIND::SET_ROADS_IN_AREA(-112.6669f, -1539.6423f, 20.2851f, 74.2658f, -1438.4238f, 42.8005f, false, true);
	func_347(1);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(1), 0);
	PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
	__LIB_17__::func_656(135, 1);
	__LIB_17__::func_656(136, 1);
	__LIB_17__::func_656(137, 1);
	__LIB_17__::func_656(138, 1);
	__LIB_0__::func_552(0);
	__LIB_15__::func_283(1, 0);
	__LIB_0__::func_544(98, 1, 0, 1, 0);
	__LIB_11__::func_816(45, 0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("clear", 20f);
	iLocal_297 = AUDIO::GET_SOUND_ID();
	Global_95466 = 3;
}

void func_922()//Position - 0xA8616
{
	int iVar0;
	__LIB_0__::func_734(0, 0);
	GRAPHICS::CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(true);
	HUD::CLEAR_HELP(true);
	HUD::FLASH_WANTED_DISPLAY(false);
	__LIB_1__::func_674(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	PED::SET_CREATE_RANDOM_COPS(true);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	AUDIO::SET_AGGRESSIVE_HORNS(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	AUDIO::SET_RADIO_AUTO_UNFREEZE(true);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
	MISC::RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1);
	__LIB_0__::func_671(0);
	__LIB_0__::func_203(0, 0);
	__LIB_16__::func_18(0);
	__LIB_12__::func_849(9, 0);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_424(0);
	__LIB_14__::func_804(0);
	STREAMING::NEW_LOAD_SCENE_STOP();
	CAM::STOP_GAMEPLAY_HINT(false);
	STREAMING::SET_SRL_LONG_JUMP_MODE(false);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		if (iLocal_553 == 4)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		if (iLocal_553 == 4)
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		}
		CUTSCENE::STOP_CUTSCENE(false);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_553 == 4)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_261)
	{
		RECORDING::REPLAY_STOP_EVENT();
		iLocal_261 = 0;
	}
	__LIB_0__::func_544(180, 0, 0, 1, 0);
	func_514(0);
	func_549(0);
	func_393(0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_437)
	{
		if (iLocal_437[iVar0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_437[iVar0], false);
			iLocal_437[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_419[0] != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_419[0], false);
		iLocal_419[0] = 0;
	}
	if (iLocal_419[1] != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_419[1], false);
		iLocal_419[1] = 0;
	}
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::SET_AGGRESSIVE_HORNS(false);
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (iLocal_446 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_446, false);
		iLocal_446 = 0;
	}
	if (iLocal_447 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_447, false);
		iLocal_447 = 0;
	}
	__LIB_0__::func_221(&Local_556, 5);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_493[iLocal_285 /*7*/], false))
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_493[iLocal_285 /*7*/], 0f);
	}
	CAM::DESTROY_ALL_CAMS(false);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (iLocal_259)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_436);
		iLocal_259 = 0;
	}
	func_274();
	func_926(0);
	func_925(0);
	func_924(0);
	if (iLocal_264)
	{
		CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, iLocal_554);
		iLocal_264 = 0;
	}
	if (iLocal_225)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_367, Local_368, true, true);
		iLocal_225 = 0;
	}
	if (iLocal_231)
	{
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iLocal_231 = 0;
	}
	if (iLocal_438 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_438);
		iLocal_438 = 0;
	}
	if (iLocal_439 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_439);
		iLocal_439 = 0;
	}
	if (iLocal_440 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_440);
		iLocal_440 = 0;
	}
	if (iLocal_441 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_441);
		iLocal_441 = 0;
	}
	if (iLocal_442 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_442);
		iLocal_442 = 0;
	}
	func_515(0);
	func_404(0);
	func_524(0);
	ENTITY::REMOVE_MODEL_HIDE(-18.3539f, -1438.7838f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), true);
	ENTITY::REMOVE_MODEL_HIDE(-18.3594f, -1438.1329f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), true);
	STREAMING::REQUEST_IPL("ferris_finale_Anim");
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (iLocal_318 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_318);
		iLocal_318 = -1;
	}
	if (iLocal_319 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_319);
		iLocal_319 = -1;
	}
	if (iLocal_320 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_320);
		iLocal_320 = -1;
	}
	if (iLocal_321 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_321);
		iLocal_321 = -1;
	}
	if (iLocal_322 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_322);
		iLocal_322 = -1;
	}
	__LIB_17__::func_656(48, 0);
	__LIB_17__::func_656(47, 0);
	__LIB_30__::func_373(19, 0);
	__LIB_30__::func_373(20, 0);
	__LIB_30__::func_373(21, 0);
	__LIB_30__::func_373(22, 0);
	__LIB_30__::func_373(23, 0);
	__LIB_30__::func_373(24, 0);
	__LIB_30__::func_373(25, 0);
	__LIB_0__::func_345(&uLocal_561, 0, 0);
	if (iLocal_553 != 4)
	{
		__LIB_0__::func_638();
		__LIB_0__::func_552(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef2"), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt2"), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef"), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_13__::func_741(1, 0), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
		if (iLocal_448 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_448, false);
		}
		__LIB_17__::func_656(135, 0);
		__LIB_17__::func_656(136, 0);
		__LIB_17__::func_656(137, 0);
		__LIB_17__::func_656(138, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-112.6669f, -1539.6423f, 20.2851f, 74.2658f, -1438.4238f, 42.8005f, 1);
		func_347(0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		__LIB_13__::func_751(1, 1);
		__LIB_0__::func_544(98, 0, 1, 1, 0);
		__LIB_10__::func_347(45, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 182, true);
		}
		__LIB_0__::func_483(4, PLAYER::PLAYER_PED_ID(), 0);
		AUDIO::RELEASE_SOUND_ID(iLocal_297);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		HUD::CLEAR_PRINTS();
		func_345();
		__LIB_16__::func_318(&Local_495, 1, 0);
		func_15(5, 0);
		func_409(0, 1);
		Global_95466 = 3;
		AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_ON");
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_392);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_393);
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_493[0 /*7*/].f_6, sLocal_381);
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_493[1 /*7*/].f_6, sLocal_381);
		STREAMING::REMOVE_ANIM_DICT(sLocal_385);
		STREAMING::REMOVE_ANIM_DICT(sLocal_387);
		STREAMING::REMOVE_ANIM_DICT("map_objects");
		STREAMING::REMOVE_ANIM_DICT(sLocal_388);
		STREAMING::REMOVE_ANIM_DICT(sLocal_390);
		STREAMING::REMOVE_ANIM_DICT(sLocal_391);
		STREAMING::REMOVE_ANIM_DICT(sLocal_395);
		STREAMING::REMOVE_ANIM_DICT(sLocal_394);
		STREAMING::REMOVE_ANIM_DICT(sLocal_396);
		STREAMING::REMOVE_ANIM_DICT(sLocal_386);
		STREAMING::REMOVE_ANIM_DICT(sLocal_397);
		STREAMING::REMOVE_ANIM_DICT(sLocal_389);
		STREAMING::REMOVE_ANIM_DICT(sLocal_398);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_457);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_450);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_451);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_452);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_453);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_454);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_455);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_456);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_457);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_458);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_458);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_459);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_460);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_461);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_463);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_464);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_465);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_466);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_467);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_468);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_469);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_470);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_472);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_471);
		__LIB_38__::func_62(14);
		__LIB_38__::func_62(18);
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, true, false, false, false);
		__LIB_0__::func_429();
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	}
}

void func_924(bool bParam0)//Position - 0xA8D52
{
	int iVar0;
	__LIB_37__::func_206(&(Local_493[0 /*7*/]), bParam0);
	__LIB_37__::func_206(&(Local_493[1 /*7*/]), bParam0);
	__LIB_37__::func_206(&iLocal_399, 1);
	__LIB_37__::func_206(&iLocal_400, bParam0);
	__LIB_37__::func_206(&iLocal_401, bParam0);
	__LIB_37__::func_206(&iLocal_402, bParam0);
	__LIB_37__::func_206(&iLocal_403, 1);
	__LIB_37__::func_206(&iLocal_404, bParam0);
	__LIB_37__::func_206(&iLocal_405, bParam0);
	__LIB_37__::func_206(&iLocal_409, bParam0);
	__LIB_37__::func_206(&iLocal_411, bParam0);
	__LIB_37__::func_206(&iLocal_410, bParam0);
	__LIB_37__::func_206(&iLocal_412, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_406)
	{
		__LIB_37__::func_206(&(iLocal_406[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_407)
	{
		__LIB_37__::func_206(&(iLocal_407[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_408)
	{
		__LIB_37__::func_206(&(iLocal_408[iVar0]), bParam0);
		iVar0++;
	}
}

void func_925(bool bParam0)//Position - 0xA8E38
{
	int iVar0;
	func_58(&Local_473, bParam0);
	func_58(&Local_474, bParam0);
	func_58(&Local_477, bParam0);
	func_58(&Local_489, bParam0);
	func_58(&(iLocal_413[0]), bParam0);
	func_58(&(iLocal_413[1]), bParam0);
	func_58(&iLocal_483, bParam0);
	func_58(&iLocal_415, bParam0);
	func_58(&iLocal_416, bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_481.f_0)
	{
		func_58(&(Local_481[iVar0 /*5*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_482.f_0)
	{
		func_58(&(Local_482[iVar0 /*5*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_488.f_0)
	{
		func_58(&(Local_488[iVar0 /*7*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_492.f_0)
	{
		func_58(&(Local_492[iVar0 /*5*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_417)
	{
		func_58(&(iLocal_417[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_418)
	{
		func_58(&(iLocal_418[iVar0]), bParam0);
		iVar0++;
	}
}

void func_926(bool bParam0)//Position - 0xA8F60
{
	int iVar0;
	__LIB_16__::func_13(&iLocal_425, bParam0);
	__LIB_16__::func_13(&iLocal_427, bParam0);
	__LIB_16__::func_13(&(iLocal_429[0]), bParam0);
	__LIB_16__::func_13(&(iLocal_429[1]), bParam0);
	__LIB_16__::func_13(&iLocal_430, bParam0);
	__LIB_16__::func_13(&iLocal_432, bParam0);
	__LIB_16__::func_13(&iLocal_428, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		__LIB_16__::func_13(&(iLocal_426[iVar0]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_433)
	{
		__LIB_16__::func_13(&(iLocal_433[iVar0]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_434)
	{
		__LIB_16__::func_13(&(iLocal_434[iVar0]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_435)
	{
		__LIB_16__::func_13(&(iLocal_435[iVar0]), 0);
		iVar0++;
	}
}

void func_930()//Position - 0xA90D3
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
				if (!func_853(iVar0))
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

